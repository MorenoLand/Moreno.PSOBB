#include "protos.h"

void f_00541000(void)
{
    FN_ENTER(0x00541000);
    /* 00541000: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541003: je 0x541030 */ if (fZ) goto L_00541030;
L_00541005:; BB(0x00541005);
    /* 00541005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541007: jne 0x54104c */ if (!fZ) goto L_0054104c;
L_00541009:; BB(0x00541009);
    /* 00541009: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054100b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x541010u); f_007aa094();
    /* 00541010: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00541016: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541019: je 0x541050 */ if (fZ) goto L_00541050;
L_0054101b:; BB(0x0054101b);
    /* 0054101b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054101d: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x541022u); f_00542484();
L_00541022:; BB(0x00541022);
    /* 00541022: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00541024: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541026: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x54102cu); call_ind(t); }
    /* 0054102c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054102d: ret 4 */ FN_RET(0x00541000); r_esp += 8; return;
L_00541030:; BB(0x00541030);
    /* 00541030: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00541036: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 0054103c: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x54103fu); call_ind(t); }
    /* 0054103f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541041: je 0x54104c */ if (fZ) goto L_0054104c;
L_00541043:; BB(0x00541043);
    /* 00541043: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00541045: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541047: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54104cu); f_0051f62c();
L_0054104c:; BB(0x0054104c);
    /* 0054104c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054104d: ret 4 */ FN_RET(0x00541000); r_esp += 8; return;
L_00541050:; BB(0x00541050);
    /* 00541050: fld dword ptr [0x9235f8] */ FPUSH(R_F32((u32)(0x9235f8u)));
    /* 00541056: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00541059: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054105a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054105d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054105f: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x541064u); f_00542498();
    /* 00541064: jmp 0x541022 */ goto L_00541022;
}

void f_005410cc(void) /* sub_5410CC */
{
    FN_ENTER(0x005410cc);
    /* 005410cc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005410d3: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005410d6: je 0x5410e4 */ if (fZ) goto L_005410e4;
L_005410d8:; BB(0x005410d8);
    /* 005410d8: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005410db: je 0x5410e4 */ if (fZ) goto L_005410e4;
L_005410dd:; BB(0x005410dd);
    /* 005410dd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005410df: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5410e4u); f_0051f62c();
L_005410e4:; BB(0x005410e4);
    /* 005410e4: ret  */ FN_RET(0x005410cc); r_esp += 4; return;
}

void f_005410e8(void) /* sub_5410E8 */
{
    FN_ENTER(0x005410e8);
    /* 005410e8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005410ef: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005410f2: je 0x5410fb */ if (fZ) goto L_005410fb;
L_005410f4:; BB(0x005410f4);
    /* 005410f4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005410f6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5410fbu); f_0051f62c();
L_005410fb:; BB(0x005410fb);
    /* 005410fb: ret  */ FN_RET(0x005410e8); r_esp += 4; return;
}

void f_005410fc(void) /* sub_5410FC */
{
    FN_ENTER(0x005410fc);
    /* 005410fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005410ff: mov eax, dword ptr [0x9bcef8] */ r_eax = R32((u32)(0x9bcef8u));
    /* 00541104: mov edx, dword ptr [0x9bcefc] */ r_edx = R32((u32)(0x9bcefcu));
    /* 0054110a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054110d: mov eax, dword ptr [0x9bcf00] */ r_eax = R32((u32)(0x9bcf00u));
    /* 00541112: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00541116: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054111a: mov eax, dword ptr [0x9bcf04] */ r_eax = R32((u32)(0x9bcf04u));
    /* 0054111f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00541123: mov eax, dword ptr [0x9bcf08] */ r_eax = R32((u32)(0x9bcf08u));
    /* 00541128: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0054112c: mov eax, dword ptr [ecx + 0x470] */ r_eax = R32((u32)(r_ecx+0x470u));
    /* 00541132: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00541135: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00541139: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054113c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054113e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054113f: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00541143: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x541148u); f_0051fc9c();
    /* 00541148: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054114b: ret 4 */ FN_RET(0x005410fc); r_esp += 8; return;
}

void f_00541150(void) /* sub_541150 */
{
    FN_ENTER(0x00541150);
    /* 00541150: mov eax, dword ptr [ecx + 0x474] */ r_eax = R32((u32)(r_ecx+0x474u));
    /* 00541156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541158: jl 0x541186 */ if ((fS!=fO)) goto L_00541186;
L_0054115a:; BB(0x0054115a);
    /* 0054115a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054115d: jle 0x541176 */ if ((fZ||fS!=fO)) goto L_00541176;
L_0054115f:; BB(0x0054115f);
    /* 0054115f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541162: jne 0x541186 */ if (!fZ) goto L_00541186;
L_00541164:; BB(0x00541164);
    /* 00541164: mov dword ptr [ecx + 0x474], 0 */ W32((u32)(r_ecx+0x474u), 0x0u);
    /* 0054116e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00541170: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x541175u); f_0051f62c();
    /* 00541175: ret  */ FN_RET(0x00541150); r_esp += 4; return;
L_00541176:; BB(0x00541176);
    /* 00541176: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00541178: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054117b: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 00541181: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x541186u); f_0051f62c();
L_00541186:; BB(0x00541186);
    /* 00541186: ret  */ FN_RET(0x00541150); r_esp += 4; return;
}

void f_00541188(void) /* sub_541188 */
{
    FN_ENTER(0x00541188);
    /* 00541188: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541189: mov ebp, esp */ r_ebp = r_esp;
    /* 0054118b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054118d: push 0x8d55a6 */ { u32 v = 0x8d55a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00541192: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00541198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541199: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005411a0: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005411a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005411a6: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 005411a9: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 005411ac: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 005411af: fild dword ptr [ecx + 0x4d4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4d4u)));
    /* 005411b5: fld dword ptr [0x9235ec] */ FPUSH(R_F32((u32)(0x9235ecu)));
    /* 005411bb: mov ebx, dword ptr [ecx + 0x4d4] */ r_ebx = R32((u32)(r_ecx+0x4d4u));
    /* 005411c1: mov eax, dword ptr [ecx + 0x470] */ r_eax = R32((u32)(r_ecx+0x470u));
    /* 005411c7: fild dword ptr [eax + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x2cu)));
    /* 005411ca: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 005411cc: fldz  */ FPUSH(0.0);
    /* 005411ce: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005411d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005411d3: fchs  */ ST(0) = -ST(0);
    /* 005411d5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005411d7: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 005411da: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 005411de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005411e3: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005411e6: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 005411e9: frndint  */ ST(0) = fx_rint(ST(0));
    /* 005411eb: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 005411ee: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005411f0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005411f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005411f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005411f6: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005411f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005411f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005411fb: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005411fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005411ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00541201: jae 0x541205 */ if (!fC) goto L_00541205;
L_00541203:; BB(0x00541203);
    /* 00541203: fst st(1) */ ST(1) = ST(0);
L_00541205:; BB(0x00541205);
    /* 00541205: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00541206: mov eax, 1 */ r_eax = 0x1u;
    /* 0054120b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054120d: je 0x541211 */ if (fZ) goto L_00541211;
L_0054120f:; BB(0x0054120f);
    /* 0054120f: fst st(1) */ ST(1) = ST(0);
L_00541211:; BB(0x00541211);
    /* 00541211: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00541213: fchs  */ ST(0) = -ST(0);
    /* 00541215: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00541218: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0054121b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054121e: jge 0x541222 */ if ((fS==fO)) goto L_00541222;
L_00541220:; BB(0x00541220);
    /* 00541220: mov edx, eax */ r_edx = r_eax;
L_00541222:; BB(0x00541222);
    /* 00541222: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00541226: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541229: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0054122c: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0054122f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00541232: movsx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 00541236: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541239: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054123c: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0054123f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00541242: mov eax, 0 */ r_eax = 0x0u;
    /* 00541247: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0054124a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054124c: jle 0x54135d */ if ((fZ||fS!=fO)) goto L_0054135d;
L_00541252:; BB(0x00541252);
    /* 00541252: mov eax, ecx */ r_eax = r_ecx;
    /* 00541254: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00541257: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0054125a:; BB(0x0054125a);
    /* 0054125a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054125d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x541262u); f_0082dcbc();
    /* 00541262: fmul dword ptr [0x9235f0] */ ST(0) = ST(0) * R_F32((u32)(0x9235f0u));
    /* 00541268: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054126b: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 0054126e: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00541275: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54127au); f_0082ddd8();
    /* 0054127a: fmul dword ptr [0x9235f0] */ ST(0) = ST(0) * R_F32((u32)(0x9235f0u));
    /* 00541280: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00541283: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 00541286: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00541289: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x54128eu); f_0082ebac();
    /* 0054128e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00541291: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541294: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00541297: mov ebx, dword ptr [ecx + 0x4d4] */ r_ebx = R32((u32)(r_ecx+0x4d4u));
    /* 0054129d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054129f: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005412a4: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x005412a4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005412a4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005412a6: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 005412a9: add dword ptr [ebp - 0x14], eax */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005412ac: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005412af: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005412b6: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 005412b9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005412bc: push 0x4d4 */ { u32 v = 0x4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005412c1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005412c4: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005412c7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5412ccu); f_005caba4();
    /* 005412cc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005412cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005412d2: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005412d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005412d7: je 0x54148a */ if (fZ) goto L_0054148a;
L_005412dd:; BB(0x005412dd);
    /* 005412dd: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 005412e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005412eb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005412ee: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005412f1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005412f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005412f7: lea ebx, [ebp - 0x78] */ r_ebx = (u32)(r_ebp+0xffffff88u);
    /* 005412fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005412fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005412fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005412fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005412fe: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00541304: call 0x541494 */ r_esp -= 4; W32(r_esp, 0x541309u); f_00541494();
    /* 00541309: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00541310:; BB(0x00541310);
    /* 00541310: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00541317: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054131a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054131d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00541320: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541323: mov dword ptr [ecx + ebx*4 + 0x4dc], edx */ W32((u32)(r_ecx+r_ebx*4+0x4dcu), r_edx);
    /* 0054132a: mov eax, dword ptr [edx + 0x3d0] */ r_eax = R32((u32)(r_edx+0x3d0u));
    /* 00541330: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00541335: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054133a: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 00541340: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00541343: add dword ptr [ecx + 0x4d8], 1 */ { u32 ad = (u32)(r_ecx+0x4d8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0054134a: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0054134d: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054134f: jl 0x54125a */ if ((fS!=fO)) goto L_0054125a;
L_00541355:; BB(0x00541355);
    /* 00541355: mov eax, ecx */ r_eax = r_ecx;
    /* 00541357: mov ebx, dword ptr [eax + 0x4d4] */ r_ebx = R32((u32)(r_eax+0x4d4u));
L_0054135d:; BB(0x0054135d);
    /* 0054135d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541360: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541362: jge 0x54146c */ if ((fS==fO)) goto L_0054146c;
L_00541368:; BB(0x00541368);
    /* 00541368: mov eax, ecx */ r_eax = r_ecx;
    /* 0054136a: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054136d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_00541370:; BB(0x00541370);
    /* 00541370: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541373: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x541378u); f_0082dcbc();
    /* 00541378: fmul dword ptr [0x9235f0] */ ST(0) = ST(0) * R_F32((u32)(0x9235f0u));
    /* 0054137e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541381: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 00541384: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0054138b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x541390u); f_0082ddd8();
    /* 00541390: fmul dword ptr [0x9235f0] */ ST(0) = ST(0) * R_F32((u32)(0x9235f0u));
    /* 00541396: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00541399: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 0054139c: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0054139f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5413a4u); f_0082ebac();
    /* 005413a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005413a7: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005413aa: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005413ad: mov ebx, dword ptr [ecx + 0x4d4] */ r_ebx = R32((u32)(r_ecx+0x4d4u));
    /* 005413b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005413b5: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005413ba: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x005413ba, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005413ba, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005413bc: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 005413bf: add dword ptr [ebp - 0x14], eax */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005413c2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005413c5: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005413cc: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005413cf: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005413d2: push 0x4d4 */ { u32 v = 0x4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005413d7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005413da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005413dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5413e2u); f_005caba4();
    /* 005413e2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005413e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005413e8: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005413eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005413ed: je 0x541483 */ if (fZ) goto L_00541483;
L_005413f3:; BB(0x005413f3);
    /* 005413f3: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 005413fa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00541401: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00541404: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00541407: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054140a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054140d: lea ebx, [ebp - 0x78] */ r_ebx = (u32)(r_ebp+0xffffff88u);
    /* 00541410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541411: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541412: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00541413: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00541414: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054141a: call 0x541494 */ r_esp -= 4; W32(r_esp, 0x54141fu); f_00541494();
    /* 0054141f: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00541426:; BB(0x00541426);
    /* 00541426: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054142d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541430: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00541433: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00541436: mov dword ptr [ebx + ecx*4 + 0x4dc], edx */ W32((u32)(r_ebx+r_ecx*4+0x4dcu), r_edx);
    /* 0054143d: mov eax, dword ptr [edx + 0x3d0] */ r_eax = R32((u32)(r_edx+0x3d0u));
    /* 00541443: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00541448: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054144d: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 00541453: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00541456: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00541459: add dword ptr [ebx + 0x4d8], 1 */ { u32 ad = (u32)(r_ebx+0x4d8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00541460: cmp ecx, dword ptr [ebx + 0x4d4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x4d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541466: jl 0x541370 */ if ((fS!=fO)) goto L_00541370;
L_0054146c:; BB(0x0054146c);
    /* 0054146c: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054146f: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00541472: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00541475: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541478: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054147f: mov esp, ebp */ r_esp = r_ebp;
    /* 00541481: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541482: ret  */ FN_RET(0x00541188); r_esp += 4; return;
L_00541483:; BB(0x00541483);
    /* 00541483: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541485: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00541488: jmp 0x541426 */ goto L_00541426;
L_0054148a:; BB(0x0054148a);
    /* 0054148a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054148c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0054148f: jmp 0x541310 */ goto L_00541310;
}

void f_00541494(void) /* sub_541494 */
{
    FN_ENTER(0x00541494);
    /* 00541494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541495: mov ebp, esp */ r_ebp = r_esp;
    /* 00541497: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00541499: push 0x8d55d4 */ { u32 v = 0x8d55d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054149e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005414a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005414a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005414ac: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005414af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005414b2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005414b5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005414b8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005414bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005414be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005414c1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005414c4: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005414c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005414ca: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 005414ce: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005414d1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005414d4: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005414d7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005414da: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x5414dfu); f_005216f4();
    /* 005414df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005414e6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005414e9: mov dword ptr [ecx], 0xb02be0 */ W32((u32)(r_ecx), 0xb02be0u);
    /* 005414ef: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005414f5: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5414fau); f_00576a48();
    /* 005414fa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00541501: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00541504: mov eax, dword ptr [0x9bcea8] */ r_eax = R32((u32)(0x9bcea8u));
    /* 00541509: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054150c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054150d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00541510: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 00541516: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x54151bu); f_0051f760();
    /* 0054151b: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054151e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541521: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00541524: mov ecx, dword ptr [esi + 0x3c8] */ r_ecx = R32((u32)(r_esi+0x3c8u));
    /* 0054152a: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 0054152e: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
    /* 00541532: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00541535: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00541536: call 0x541598 */ r_esp -= 4; W32(r_esp, 0x54153bu); f_00541598();
    /* 0054153b: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054153e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541541: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00541543: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00541546: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00541549: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0054154c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054154f: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00541552: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 00541555: mov ecx, dword ptr [edx + 0x3c8] */ r_ecx = R32((u32)(r_edx+0x3c8u));
    /* 0054155b: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0054155e: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00541561: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
    /* 0054156b: mov ecx, edx */ r_ecx = r_edx;
    /* 0054156d: mov dword ptr [edx + 0x3cc], 1 */ W32((u32)(r_edx+0x3ccu), 0x1u);
    /* 00541577: call 0x5424d8 */ r_esp -= 4; W32(r_esp, 0x54157cu); f_005424d8();
    /* 0054157c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054157f: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00541582: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541585: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00541588: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054158b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00541592: mov esp, ebp */ r_esp = r_ebp;
    /* 00541594: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541595: ret 0x14 */ FN_RET(0x00541494); r_esp += 24; return;
}

void f_00541598(void) /* sub_541598 */
{
    FN_ENTER(0x00541598);
    /* 00541598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00541599: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054159a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054159b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054159c: mov esi, ecx */ r_esi = r_ecx;
    /* 0054159e: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 005415a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005415a4: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x5415a9u); f_00520c20();
    /* 005415a9: mov ebx, eax */ r_ebx = r_eax;
    /* 005415ab: mov ecx, esi */ r_ecx = r_esi;
    /* 005415ad: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5415b2u); f_007751b0();
    /* 005415b2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005415b5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005415b8: fmul dword ptr [0x9235e8] */ ST(0) = ST(0) * R_F32((u32)(0x9235e8u));
    /* 005415be: fadd dword ptr [0x9235e0] */ ST(0) = ST(0) + R_F32((u32)(0x9235e0u));
    /* 005415c4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005415c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005415c9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5415ceu); f_0082dcbc();
    /* 005415ce: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005415d1: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 005415d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005415d6: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 005415dd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5415e2u); f_0082ddd8();
    /* 005415e2: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005415e5: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 005415e8: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005415eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005415ed: mov edx, esi */ r_edx = r_esi;
    /* 005415ef: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5415f4u); f_0082ebac();
    /* 005415f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005415f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005415f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005415f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005415f8: ret 4 */ FN_RET(0x00541598); r_esp += 8; return;
}

void f_005415fc(void) /* sub_5415FC */
{
    FN_ENTER(0x005415fc);
    /* 005415fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005415fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005415ff: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00541605: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00541607: je 0x54164f */ if (fZ) goto L_0054164f;
L_00541609:; BB(0x00541609);
    /* 00541609: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054160b: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054160e: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 00541614: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541616: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54161bu); f_0051f62c();
    /* 0054161b: mov edx, dword ptr [ebx + 0x4d8] */ r_edx = R32((u32)(r_ebx+0x4d8u));
    /* 00541621: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541623: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541625: jle 0x541648 */ if ((fZ||fS!=fO)) goto L_00541648;
L_00541627:; BB(0x00541627);
    /* 00541627: mov ecx, dword ptr [ebx + eax*4 + 0x4dc] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0x4dcu));
    /* 0054162e: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 00541634: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00541637: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0054163d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541640: cmp eax, dword ptr [ebx + 0x4d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x4d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541646: jl 0x541627 */ if ((fS!=fO)) goto L_00541627;
L_00541648:; BB(0x00541648);
    /* 00541648: mov eax, 1 */ r_eax = 0x1u;
    /* 0054164d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054164e: ret  */ FN_RET(0x005415fc); r_esp += 4; return;
L_0054164f:; BB(0x0054164f);
    /* 0054164f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541651: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00541652: ret  */ FN_RET(0x005415fc); r_esp += 4; return;
}

void f_00541654(void) /* sub_541654 */
{
    FN_ENTER(0x00541654);
    /* 00541654: mov edx, dword ptr [0xa73764] */ r_edx = R32((u32)(0xa73764u));
    /* 0054165a: mov eax, dword ptr [ecx + 0x4bc] */ r_eax = R32((u32)(r_ecx+0x4bcu));
    /* 00541660: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00541662: mov eax, dword ptr [ecx + 0x4bc] */ r_eax = R32((u32)(r_ecx+0x4bcu));
    /* 00541668: mov edx, dword ptr [0xa73760] */ r_edx = R32((u32)(0xa73760u));
    /* 0054166e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00541670: ret  */ FN_RET(0x00541654); r_esp += 4; return;
}

void f_00541674(void) /* sub_541674 */
{
    FN_ENTER(0x00541674);
    /* 00541674: mov edx, dword ptr [ecx + 0x4d8] */ r_edx = R32((u32)(r_ecx+0x4d8u));
    /* 0054167a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054167c: mov eax, 0 */ r_eax = 0x0u;
    /* 00541681: setle al */ r_eax = (r_eax & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00541684: ret  */ FN_RET(0x00541674); r_esp += 4; return;
}

void f_00541688(void) /* sub_541688 */
{
    FN_ENTER(0x00541688);
    /* 00541688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00541689: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054168c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054168e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00541692: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541695: je 0x5417ff */ if (fZ) goto L_005417ff;
L_0054169b:; BB(0x0054169b);
    /* 0054169b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054169e: je 0x5417a1 */ if (fZ) goto L_005417a1;
L_005416a4:; BB(0x005416a4);
    /* 005416a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005416a6: jne 0x541790 */ if (!fZ) goto L_00541790;
L_005416ac:; BB(0x005416ac);
    /* 005416ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005416ae: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5416b3u); f_007aa094();
    /* 005416b3: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005416b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005416ba: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5416bfu); f_00520ea0();
    /* 005416bf: mov eax, dword ptr [ebx + 0x478] */ r_eax = R32((u32)(r_ebx+0x478u));
    /* 005416c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005416c7: jne 0x5416e5 */ if (!fZ) goto L_005416e5;
L_005416c9:; BB(0x005416c9);
    /* 005416c9: mov eax, dword ptr [ebx + 0x408] */ r_eax = R32((u32)(r_ebx+0x408u));
    /* 005416cf: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005416d2: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 005416d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005416da: jle 0x5417ce */ if ((fZ||fS!=fO)) goto L_005417ce;
L_005416e0:; BB(0x005416e0);
    /* 005416e0: jmp 0x541770 */ goto L_00541770;
L_005416e5:; BB(0x005416e5);
    /* 005416e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005416e8: jne 0x541770 */ if (!fZ) goto L_00541770;
L_005416ee:; BB(0x005416ee);
    /* 005416ee: mov eax, dword ptr [ebx + 0x4c0] */ r_eax = R32((u32)(r_ebx+0x4c0u));
    /* 005416f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005416f6: jne 0x541769 */ if (!fZ) goto L_00541769;
L_005416f8:; BB(0x005416f8);
    /* 005416f8: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 005416fe: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00541703: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 00541709: mov eax, dword ptr [ebx + 0x4d8] */ r_eax = R32((u32)(r_ebx+0x4d8u));
    /* 0054170f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00541711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00541713: jle 0x541731 */ if ((fZ||fS!=fO)) goto L_00541731;
L_00541715:; BB(0x00541715);
    /* 00541715: mov ecx, dword ptr [ebx + edx*4 + 0x4dc] */ r_ecx = R32((u32)(r_ebx+r_edx*4+0x4dcu));
    /* 0054171c: mov ecx, dword ptr [ecx + 0x3d0] */ r_ecx = R32((u32)(r_ecx+0x3d0u));
    /* 00541722: test ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541728: je 0x541731 */ if (fZ) goto L_00541731;
L_0054172a:; BB(0x0054172a);
    /* 0054172a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054172d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054172f: jl 0x541715 */ if ((fS!=fO)) goto L_00541715;
L_00541731:; BB(0x00541731);
    /* 00541731: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541733: jne 0x541769 */ if (!fZ) goto L_00541769;
L_00541735:; BB(0x00541735);
    /* 00541735: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541737: call 0x53e538 */ r_esp -= 4; W32(r_esp, 0x54173cu); f_0053e538();
    /* 0054173c: mov edx, dword ptr [ebx + 0x4d8] */ r_edx = R32((u32)(r_ebx+0x4d8u));
    /* 00541742: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541744: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00541746: jle 0x541769 */ if ((fZ||fS!=fO)) goto L_00541769;
L_00541748:; BB(0x00541748);
    /* 00541748: mov ecx, dword ptr [ebx + eax*4 + 0x4dc] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0x4dcu));
    /* 0054174f: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 00541755: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00541758: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0054175e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541761: cmp eax, dword ptr [ebx + 0x4d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x4d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541767: jl 0x541748 */ if ((fS!=fO)) goto L_00541748;
L_00541769:; BB(0x00541769);
    /* 00541769: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054176b: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x541770u); f_00540eb8();
L_00541770:; BB(0x00541770);
    /* 00541770: fld dword ptr [0x9235f8] */ FPUSH(R_F32((u32)(0x9235f8u)));
    /* 00541776: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00541779: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054177a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054177d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054177f: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x541784u); f_00542498();
    /* 00541784: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00541786: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541788: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54178eu); call_ind(t); }
    /* 0054178e: jmp 0x5417c7 */ goto L_005417c7;
L_00541790:; BB(0x00541790);
    /* 00541790: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541793: jne 0x5417c7 */ if (!fZ) goto L_005417c7;
L_00541795:; BB(0x00541795);
    /* 00541795: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00541797: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541799: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x54179fu); call_ind(t); }
    /* 0054179f: jmp 0x5417c7 */ goto L_005417c7;
L_005417a1:; BB(0x005417a1);
    /* 005417a1: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 005417a7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005417a9: je 0x5417c7 */ if (fZ) goto L_005417c7;
L_005417ab:; BB(0x005417ab);
    /* 005417ab: mov dword ptr [ebx + 0x4fc], 1 */ W32((u32)(r_ebx+0x4fcu), 0x1u);
    /* 005417b5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005417b7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005417ba: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 005417c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005417c2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5417c7u); f_0051f62c();
L_005417c7:; BB(0x005417c7);
    /* 005417c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005417ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005417cb: ret 4 */ FN_RET(0x00541688); r_esp += 8; return;
L_005417ce:; BB(0x005417ce);
    /* 005417ce: mov dword ptr [ebx + 0x4c0], 2 */ W32((u32)(r_ebx+0x4c0u), 0x2u);
    /* 005417d8: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 005417de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005417e0: mov dword ptr [ebx + 0x478], 1 */ W32((u32)(r_ebx+0x478u), 0x1u);
    /* 005417ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005417eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005417ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005417ed: push 0x13f */ { u32 v = 0x13fu; r_esp -= 4; W32(r_esp, v); }
    /* 005417f2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5417f7u); f_00814298();
    /* 005417f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005417fa: jmp 0x541770 */ goto L_00541770;
L_005417ff:; BB(0x005417ff);
    /* 005417ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541801: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x541806u); f_0053e548();
    /* 00541806: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00541808: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054180a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54180fu); f_0051f664();
    /* 0054180f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00541811: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541813: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x541819u); call_ind(t); }
    /* 00541819: mov ecx, dword ptr [ebx + 0x4d8] */ r_ecx = R32((u32)(r_ebx+0x4d8u));
    /* 0054181f: mov dword ptr [ebx + 0x4b0], 0 */ W32((u32)(r_ebx+0x4b0u), 0x0u);
    /* 00541829: mov edx, 2 */ r_edx = 0x2u;
    /* 0054182e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541830: mov dword ptr [ebx + 0x4b4], 0x3e4ccccd */ W32((u32)(r_ebx+0x4b4u), 0x3e4ccccdu);
    /* 0054183a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054183c: mov dword ptr [ebx + 0x4b8], 0x3f800000 */ W32((u32)(r_ebx+0x4b8u), 0x3f800000u);
    /* 00541846: mov dword ptr [ebx + 0x478], 0 */ W32((u32)(r_ebx+0x478u), 0x0u);
    /* 00541850: jle 0x5417c7 */ if ((fZ||fS!=fO)) goto L_005417c7;
L_00541856:; BB(0x00541856);
    /* 00541856: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0054185a: mov esi, ebx */ r_esi = r_ebx;
    /* 0054185c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00541860: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00541863: mov ebx, eax */ r_ebx = r_eax;
    /* 00541865: mov ebp, edx */ r_ebp = r_edx;
L_00541867:; BB(0x00541867);
    /* 00541867: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054186d: mov edi, dword ptr [esi + ebx*4 + 0x4dc] */ r_edi = R32((u32)(r_esi+r_ebx*4+0x4dcu));
    /* 00541874: mov ecx, edi */ r_ecx = r_edi;
    /* 00541876: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x54187bu); f_00521388();
    /* 0054187b: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 00541881: mov dword ptr [edi + 0x408], ebp */ W32((u32)(r_edi+0x408u), r_ebp);
    /* 00541887: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054188a: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 00541890: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00541893: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00541896: cmp ebx, dword ptr [esi + 0x4d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x4d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054189c: jl 0x541867 */ if ((fS!=fO)) goto L_00541867;
L_0054189e:; BB(0x0054189e);
    /* 0054189e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005418a2: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005418a6: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005418a9: jmp 0x5417c7 */ goto L_005417c7;
}

void f_005418b0(void) /* sub_5418B0 */
{
    FN_ENTER(0x005418b0);
    /* 005418b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005418b1: mov edi, ecx */ r_edi = r_ecx;
    /* 005418b3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005418b7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005418ba: je 0x54190c */ if (fZ) goto L_0054190c;
L_005418bc:; BB(0x005418bc);
    /* 005418bc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005418bf: je 0x5418f4 */ if (fZ) goto L_005418f4;
L_005418c1:; BB(0x005418c1);
    /* 005418c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005418c3: jne 0x541908 */ if (!fZ) goto L_00541908;
L_005418c5:; BB(0x005418c5);
    /* 005418c5: mov ecx, edi */ r_ecx = r_edi;
    /* 005418c7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5418ccu); f_007aa094();
    /* 005418cc: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005418d1: mov ecx, edi */ r_ecx = r_edi;
    /* 005418d3: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5418d8u); f_00520ea0();
    /* 005418d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005418da: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x5418dfu); f_00540eb8();
    /* 005418df: mov ecx, edi */ r_ecx = r_edi;
    /* 005418e1: call 0x542470 */ r_esp -= 4; W32(r_esp, 0x5418e6u); f_00542470();
    /* 005418e6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005418e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005418ea: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5418f0u); call_ind(t); }
    /* 005418f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005418f1: ret 4 */ FN_RET(0x005418b0); r_esp += 8; return;
L_005418f4:; BB(0x005418f4);
    /* 005418f4: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 005418fa: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005418fc: je 0x541908 */ if (fZ) goto L_00541908;
L_005418fe:; BB(0x005418fe);
    /* 005418fe: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00541900: mov ecx, edi */ r_ecx = r_edi;
    /* 00541902: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x541908u); call_ind(t); }
L_00541908:; BB(0x00541908);
    /* 00541908: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00541909: ret 4 */ FN_RET(0x005418b0); r_esp += 8; return;
L_0054190c:; BB(0x0054190c);
    /* 0054190c: mov ecx, edi */ r_ecx = r_edi;
    /* 0054190e: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x541913u); f_0053e548();
    /* 00541913: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00541915: mov ecx, edi */ r_ecx = r_edi;
    /* 00541917: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54191cu); f_0051f664();
    /* 0054191c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054191e: mov ecx, edi */ r_ecx = r_edi;
    /* 00541920: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x541926u); call_ind(t); }
    /* 00541926: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00541927: ret 4 */ FN_RET(0x005418b0); r_esp += 8; return;
}

void f_0054192c(void) /* sub_54192C */
{
    FN_ENTER(0x0054192c);
    /* 0054192c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054192d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054192e: mov edi, ecx */ r_edi = r_ecx;
    /* 00541930: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00541934: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541937: je 0x541983 */ if (fZ) goto L_00541983;
L_00541939:; BB(0x00541939);
    /* 00541939: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054193c: je 0x54197e */ if (fZ) goto L_0054197e;
L_0054193e:; BB(0x0054193e);
    /* 0054193e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541941: je 0x54197e */ if (fZ) goto L_0054197e;
L_00541943:; BB(0x00541943);
    /* 00541943: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541945: jne 0x54196e */ if (!fZ) goto L_0054196e;
L_00541947:; BB(0x00541947);
    /* 00541947: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00541949: mov ecx, edi */ r_ecx = r_edi;
    /* 0054194b: call dword ptr [eax + 0x1bc] */ { u32 t = R32((u32)(r_eax+0x1bcu)); r_esp -= 4; W32(r_esp, 0x541951u); call_ind(t); }
    /* 00541951: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541953: je 0x54197e */ if (fZ) goto L_0054197e;
L_00541955:; BB(0x00541955);
    /* 00541955: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00541956: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x54195bu); f_008113e4();
    /* 0054195b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054195c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00541960: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541965: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00541969: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054196a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054196b: ret 4 */ FN_RET(0x0054192c); r_esp += 8; return;
L_0054196e:; BB(0x0054196e);
    /* 0054196e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541971: jne 0x54197e */ if (!fZ) goto L_0054197e;
L_00541973:; BB(0x00541973);
    /* 00541973: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00541976: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054197b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
L_0054197e:; BB(0x0054197e);
    /* 0054197e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054197f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00541980: ret 4 */ FN_RET(0x0054192c); r_esp += 8; return;
L_00541983:; BB(0x00541983);
    /* 00541983: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00541986: lea ebp, [edi + 0x300] */ r_ebp = (u32)(r_edi+0x300u);
    /* 0054198c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054198d: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00541990: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541992: push dword ptr [0xa7376c] */ { u32 v = R32((u32)(0xa7376cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00541998: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x54199du); f_00578aa0();
    /* 0054199d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005419a0: mov edx, dword ptr [edi + 0x4d8] */ r_edx = R32((u32)(r_edi+0x4d8u));
    /* 005419a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005419a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005419aa: jle 0x5419cd */ if ((fZ||fS!=fO)) goto L_005419cd;
L_005419ac:; BB(0x005419ac);
    /* 005419ac: mov ecx, dword ptr [edi + eax*4 + 0x4dc] */ r_ecx = R32((u32)(r_edi+r_eax*4+0x4dcu));
    /* 005419b3: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 005419b9: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005419bc: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 005419c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005419c5: cmp eax, dword ptr [edi + 0x4d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005419cb: jl 0x5419ac */ if ((fS!=fO)) goto L_005419ac;
L_005419cd:; BB(0x005419cd);
    /* 005419cd: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 005419d3: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005419d8: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 005419de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005419e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005419e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005419e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005419e3: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 005419e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5419edu); f_00814298();
    /* 005419ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005419f0: mov ecx, edi */ r_ecx = r_edi;
    /* 005419f2: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x5419f7u); f_00787534();
    /* 005419f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005419f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005419f9: ret 4 */ FN_RET(0x0054192c); r_esp += 8; return;
}

void f_005419fc(void)
{
    FN_ENTER(0x005419fc);
    /* 005419fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005419fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005419ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00541a01: push 0x8d562e */ { u32 v = 0x8d562eu; r_esp -= 4; W32(r_esp, v); }
    /* 00541a06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00541a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541a0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00541a14: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541a17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00541a1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00541a1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00541a20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00541a23: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 00541a28: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00541a2f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x541a34u); f_005caba4();
    /* 00541a34: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00541a37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541a3a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00541a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541a3f: je 0x541b61 */ if (fZ) goto L_00541b61;
L_00541a45:; BB(0x00541a45);
    /* 00541a45: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00541a4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00541a53: mov ecx, eax */ r_ecx = r_eax;
    /* 00541a55: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
    /* 00541a5a: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00541a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541a5e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00541a61: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00541a64: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x541a69u); f_005216f4();
    /* 00541a69: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00541a70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00541a73: mov dword ptr [eax], 0xb02be0 */ W32((u32)(r_eax), 0xb02be0u);
    /* 00541a79: lea ecx, [eax + 0x3d4] */ r_ecx = (u32)(r_eax+0x3d4u);
    /* 00541a7f: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x541a84u); f_00576a48();
    /* 00541a84: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00541a8b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00541a8e: mov eax, dword ptr [0x9bcea8] */ r_eax = R32((u32)(0x9bcea8u));
    /* 00541a93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541a96: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00541a99: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x541a9eu); f_0051f750();
    /* 00541a9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541aa1: mov dword ptr [ecx + 0x3d0], 0 */ W32((u32)(r_ecx+0x3d0u), 0x0u);
    /* 00541aab: call 0x53e858 */ r_esp -= 4; W32(r_esp, 0x541ab0u); f_0053e858();
    /* 00541ab0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541ab3: mov dword ptr [ecx + 0x3cc], 2 */ W32((u32)(r_ecx+0x3ccu), 0x2u);
    /* 00541abd: mov dword ptr [ecx + 0x3c8], ecx */ W32((u32)(r_ecx+0x3c8u), r_ecx);
    /* 00541ac3: call 0x5424d8 */ r_esp -= 4; W32(r_esp, 0x541ac8u); f_005424d8();
    /* 00541ac8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00541acf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541ad2: mov dword ptr [ecx], 0xb02dc0 */ W32((u32)(r_ecx), 0xb02dc0u);
    /* 00541ad8: mov eax, dword ptr [0x9bceac] */ r_eax = R32((u32)(0x9bceacu));
    /* 00541add: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00541ae0: call 0x541b68 */ r_esp -= 4; W32(r_esp, 0x541ae5u); f_00541b68();
    /* 00541ae5: fld dword ptr [0x9235d4] */ FPUSH(R_F32((u32)(0x9235d4u)));
    /* 00541aeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541aee: fadd dword ptr [ecx + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3f0u));
    /* 00541af4: fstp dword ptr [ecx + 0x3f0] */ W_F32((u32)(r_ecx+0x3f0u), ST(0)); FPOP();
    /* 00541afa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541afc: mov dword ptr [ecx + 0x4d4], 8 */ W32((u32)(r_ecx+0x4d4u), 0x8u);
    /* 00541b06: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00541b08: mov dword ptr [ecx + 0x4d8], eax */ W32((u32)(r_ecx+0x4d8u), r_eax);
    /* 00541b0e: mov dword ptr [ecx + 0x4dc], eax */ W32((u32)(r_ecx+0x4dcu), r_eax);
    /* 00541b14: mov dword ptr [ecx + 0x4e0], eax */ W32((u32)(r_ecx+0x4e0u), r_eax);
    /* 00541b1a: mov dword ptr [ecx + 0x4e4], eax */ W32((u32)(r_ecx+0x4e4u), r_eax);
    /* 00541b20: mov dword ptr [ecx + 0x4e8], eax */ W32((u32)(r_ecx+0x4e8u), r_eax);
    /* 00541b26: mov dword ptr [ecx + 0x4ec], eax */ W32((u32)(r_ecx+0x4ecu), r_eax);
    /* 00541b2c: mov dword ptr [ecx + 0x4f0], eax */ W32((u32)(r_ecx+0x4f0u), r_eax);
    /* 00541b32: mov dword ptr [ecx + 0x4f4], eax */ W32((u32)(r_ecx+0x4f4u), r_eax);
    /* 00541b38: mov dword ptr [ecx + 0x4f8], eax */ W32((u32)(r_ecx+0x4f8u), r_eax);
    /* 00541b3e: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 00541b44: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x541b49u); f_00520390();
    /* 00541b49: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00541b50:; BB(0x00541b50);
    /* 00541b50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00541b53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541b56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00541b5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00541b5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541b60: ret  */ FN_RET(0x005419fc); r_esp += 4; return;
L_00541b61:; BB(0x00541b61);
    /* 00541b61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541b63: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00541b66: jmp 0x541b50 */ goto L_00541b50;
}

void f_00541b68(void) /* sub_541B68 */
{
    FN_ENTER(0x00541b68);
    /* 00541b68: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 00541b6d: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00541b73: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 00541b76: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00541b79: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00541b7f: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00541b82: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00541b85: ret  */ FN_RET(0x00541b68); r_esp += 4; return;
}

void f_00541b88(void) /* sub_541B88 */
{
    FN_ENTER(0x00541b88);
    /* 00541b88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00541b89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00541b8a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541b8d: mov esi, ecx */ r_esi = r_ecx;
    /* 00541b8f: mov edx, dword ptr [esi + 0x4d8] */ r_edx = R32((u32)(r_esi+0x4d8u));
    /* 00541b95: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00541b97: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00541b99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00541b9b: jle 0x541bde */ if ((fZ||fS!=fO)) goto L_00541bde;
L_00541b9d:; BB(0x00541b9d);
    /* 00541b9d: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00541ba3: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00541ba7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_00541baa:; BB(0x00541baa);
    /* 00541baa: mov edi, dword ptr [esi + ecx*4 + 0x4dc] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x4dcu));
    /* 00541bb1: mov ebp, dword ptr [edi + 0x3d0] */ r_ebp = R32((u32)(r_edi+0x3d0u));
    /* 00541bb7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00541bba: test ebp, 0x40000 */ {  u32 a = r_ebp; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541bc0: je 0x541bca */ if (fZ) goto L_00541bca;
L_00541bc2:; BB(0x00541bc2);
    /* 00541bc2: mov ebp, dword ptr [edi + 0x398] */ r_ebp = R32((u32)(r_edi+0x398u));
    /* 00541bc8: jmp 0x541bcc */ goto L_00541bcc;
L_00541bca:; BB(0x00541bca);
    /* 00541bca: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00541bcc:; BB(0x00541bcc);
    /* 00541bcc: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541bce: jne 0x541bd3 */ if (!fZ) goto L_00541bd3;
L_00541bd0:; BB(0x00541bd0);
    /* 00541bd0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00541bd3:; BB(0x00541bd3);
    /* 00541bd3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541bd5: jl 0x541baa */ if ((fS!=fO)) goto L_00541baa;
L_00541bd7:; BB(0x00541bd7);
    /* 00541bd7: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00541bdb: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00541bde:; BB(0x00541bde);
    /* 00541bde: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x541be3u); f_00520e6c();
    /* 00541be3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541be5: je 0x541bfa */ if (fZ) goto L_00541bfa;
L_00541be7:; BB(0x00541be7);
    /* 00541be7: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541bea: mov eax, 0 */ r_eax = 0x0u;
    /* 00541bef: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00541bf2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00541bf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00541bf6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00541bf7: ret 4 */ FN_RET(0x00541b88); r_esp += 8; return;
L_00541bfa:; BB(0x00541bfa);
    /* 00541bfa: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541bfd: mov eax, 0 */ r_eax = 0x0u;
    /* 00541c02: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00541c05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00541c08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00541c09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00541c0a: ret 4 */ FN_RET(0x00541b88); r_esp += 8; return;
}

void f_00541c10(void) /* sub_541C10 */
{
    FN_ENTER(0x00541c10);
    /* 00541c10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00541c11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00541c12: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541c15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00541c17: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00541c1b: mov ecx, dword ptr [ebx + 0x4d8] */ r_ecx = R32((u32)(r_ebx+0x4d8u));
    /* 00541c21: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00541c23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00541c25: jle 0x541c3e */ if ((fZ||fS!=fO)) goto L_00541c3e;
L_00541c27:; BB(0x00541c27);
    /* 00541c27: cmp edx, dword ptr [ebx + esi*4 + 0x4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+r_esi*4+0x4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541c2e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00541c31: je 0x541d1d */ if (fZ) goto L_00541d1d;
L_00541c37:; BB(0x00541c37);
    /* 00541c37: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00541c3a: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541c3c: jl 0x541c27 */ if ((fS!=fO)) goto L_00541c27;
L_00541c3e:; BB(0x00541c3e);
    /* 00541c3e: mov eax, dword ptr [ebx + 0x4fc] */ r_eax = R32((u32)(r_ebx+0x4fcu));
    /* 00541c44: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541c47: je 0x541c89 */ if (fZ) goto L_00541c89;
L_00541c49:; BB(0x00541c49);
    /* 00541c49: mov esi, dword ptr [ebx + 0x3d0] */ r_esi = R32((u32)(r_ebx+0x3d0u));
    /* 00541c4f: test esi, 0x100000 */ {  u32 a = r_esi; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541c55: jne 0x541c73 */ if (!fZ) goto L_00541c73;
L_00541c57:; BB(0x00541c57);
    /* 00541c57: mov edx, dword ptr [ebx + 0x4d4] */ r_edx = R32((u32)(r_ebx+0x4d4u));
    /* 00541c5d: mov eax, edx */ r_eax = r_edx;
    /* 00541c5f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00541c62: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00541c64: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00541c66: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541c68: jg 0x541c73 */ if ((!fZ&&fS==fO)) goto L_00541c73;
L_00541c6a:; BB(0x00541c6a);
    /* 00541c6a: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00541c6d: mov dword ptr [ebx + 0x3d0], esi */ W32((u32)(r_ebx+0x3d0u), r_esi);
L_00541c73:; BB(0x00541c73);
    /* 00541c73: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541c76: jg 0x541c81 */ if ((!fZ&&fS==fO)) goto L_00541c81;
L_00541c78:; BB(0x00541c78);
    /* 00541c78: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00541c7b: mov dword ptr [ebx + 0x3d0], esi */ W32((u32)(r_ebx+0x3d0u), r_esi);
L_00541c81:; BB(0x00541c81);
    /* 00541c81: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00541c84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00541c85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00541c86: ret 4 */ FN_RET(0x00541c10); r_esp += 8; return;
L_00541c89:; BB(0x00541c89);
    /* 00541c89: fild dword ptr [ebx + 0x4d4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x4d4u)));
    /* 00541c8f: fldz  */ FPUSH(0.0);
    /* 00541c91: fld dword ptr [0x9235cc] */ FPUSH(R_F32((u32)(0x9235ccu)));
    /* 00541c97: mov esi, dword ptr [ebx + 0x4d4] */ r_esi = R32((u32)(r_ebx+0x4d4u));
    /* 00541c9d: mov edx, dword ptr [ebx + 0x470] */ r_edx = R32((u32)(r_ebx+0x470u));
    /* 00541ca3: fild dword ptr [edx + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x2cu)));
    /* 00541ca6: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00541ca8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00541caa: fchs  */ ST(0) = -ST(0);
    /* 00541cac: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00541cae: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00541cb1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00541cb5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00541cba: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00541cbe: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00541cc2: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00541cc4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00541cc7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00541cc9: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00541ccb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00541ccd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00541ccf: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00541cd1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00541cd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00541cd4: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00541cd6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00541cd8: jae 0x541cdc */ if (!fC) goto L_00541cdc;
L_00541cda:; BB(0x00541cda);
    /* 00541cda: fst st(1) */ ST(1) = ST(0);
L_00541cdc:; BB(0x00541cdc);
    /* 00541cdc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00541cdd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00541cdf: je 0x541ce3 */ if (fZ) goto L_00541ce3;
L_00541ce1:; BB(0x00541ce1);
    /* 00541ce1: fst st(1) */ ST(1) = ST(0);
L_00541ce3:; BB(0x00541ce3);
    /* 00541ce3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00541ce5: fchs  */ ST(0) = -ST(0);
    /* 00541ce7: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00541ceb: sub esi, dword ptr [esp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00541cef: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541cf1: jg 0x541c49 */ if ((!fZ&&fS==fO)) goto L_00541c49;
L_00541cf7:; BB(0x00541cf7);
    /* 00541cf7: movzx eax, word ptr [ebx + 0x4d0] */ r_eax = (u32)R16((u32)(r_ebx+0x4d0u));
    /* 00541cfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541cff: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x541d04u); f_007b4d18();
    /* 00541d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00541d05: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00541d0b: mov ecx, eax */ r_ecx = r_eax;
    /* 00541d0d: call 0x53fa2c */ r_esp -= 4; W32(r_esp, 0x541d12u); f_0053fa2c();
    /* 00541d12: mov ecx, dword ptr [ebx + 0x4d8] */ r_ecx = R32((u32)(r_ebx+0x4d8u));
    /* 00541d18: jmp 0x541c49 */ goto L_00541c49;
L_00541d1d:; BB(0x00541d1d);
    /* 00541d1d: lea esi, [ecx - 1] */ r_esi = (u32)(r_ecx+0xffffffffu);
    /* 00541d20: mov dword ptr [ebx + 0x4d8], esi */ W32((u32)(r_ebx+0x4d8u), r_esi);
    /* 00541d26: mov esi, dword ptr [ebx + ecx*4 + 0x4d8] */ r_esi = R32((u32)(r_ebx+r_ecx*4+0x4d8u));
    /* 00541d2d: mov dword ptr [ebx + ecx*4 + 0x4d8], edx */ W32((u32)(r_ebx+r_ecx*4+0x4d8u), r_edx);
    /* 00541d34: mov dword ptr [ebx + eax*2 + 0x4dc], esi */ W32((u32)(r_ebx+r_eax*2+0x4dcu), r_esi);
    /* 00541d3b: mov ecx, dword ptr [ebx + 0x4d8] */ r_ecx = R32((u32)(r_ebx+0x4d8u));
    /* 00541d41: jmp 0x541c3e */ goto L_00541c3e;
}

void f_00541d48(void) /* sub_541D48 */
{
    FN_ENTER(0x00541d48);
    /* 00541d48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00541d49: mov edi, ecx */ r_edi = r_ecx;
    /* 00541d4b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x541d50u); f_004f7c84();
    /* 00541d50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541d52: je 0x541d60 */ if (fZ) goto L_00541d60;
L_00541d54:; BB(0x00541d54);
    /* 00541d54: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00541d56: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d58: call dword ptr [eax + 0x1d0] */ { u32 t = R32((u32)(r_eax+0x1d0u)); r_esp -= 4; W32(r_esp, 0x541d5eu); call_ind(t); }
    /* 00541d5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00541d5f: ret  */ FN_RET(0x00541d48); r_esp += 4; return;
L_00541d60:; BB(0x00541d60);
    /* 00541d60: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00541d62: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d64: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x541d6au); call_ind(t); }
    /* 00541d6a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541d6d: je 0x541d87 */ if (fZ) goto L_00541d87;
L_00541d6f:; BB(0x00541d6f);
    /* 00541d6f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00541d71: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d73: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x541d79u); call_ind(t); }
    /* 00541d79: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d7b: call 0x53e95c */ r_esp -= 4; W32(r_esp, 0x541d80u); f_0053e95c();
    /* 00541d80: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d82: call 0x541da4 */ r_esp -= 4; W32(r_esp, 0x541d87u); f_00541da4();
L_00541d87:; BB(0x00541d87);
    /* 00541d87: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d89: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x541d8eu); f_0055ce28();
    /* 00541d8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d90: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x541d95u); f_006401f0();
    /* 00541d95: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00541d97: mov ecx, edi */ r_ecx = r_edi;
    /* 00541d99: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x541d9fu); call_ind(t); }
    /* 00541d9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00541da0: ret  */ FN_RET(0x00541d48); r_esp += 4; return;
}

void f_00541da4(void) /* sub_541DA4 */
{
    FN_ENTER(0x00541da4);
    /* 00541da4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00541da5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00541da6: mov edi, ecx */ r_edi = r_ecx;
    /* 00541da8: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 00541dae: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00541db0: je 0x541dcc */ if (fZ) goto L_00541dcc;
L_00541db2:; BB(0x00541db2);
    /* 00541db2: mov dword ptr [edi + 0x4fc], 7 */ W32((u32)(r_edi+0x4fcu), 0x7u);
    /* 00541dbc: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00541dbf: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 00541dc5: mov edx, 7 */ r_edx = 0x7u;
    /* 00541dca: jmp 0x541dd2 */ goto L_00541dd2;
L_00541dcc:; BB(0x00541dcc);
    /* 00541dcc: mov edx, dword ptr [edi + 0x4fc] */ r_edx = R32((u32)(r_edi+0x4fcu));
L_00541dd2:; BB(0x00541dd2);
    /* 00541dd2: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541dd5: ja 0x54207f */ if ((!fC&&!fZ)) goto L_0054207f;
L_00541ddb:; BB(0x00541ddb);
    /* 00541ddb: mov edx, dword ptr [edx*4 + 0x9234e8] */ r_edx = R32((u32)(r_edx*4+0x9234e8u));
    /* 00541de2: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0054207f:; BB(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00541da4); r_esp += 4; return;
}

void f_00541de4(void)
{
    FN_ENTER(0x00541de4);
    /* 00541de4: mov eax, dword ptr [edi + 0x4c0] */ r_eax = R32((u32)(r_edi+0x4c0u));
    /* 00541dea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541dec: jne 0x54207f */ if (!fZ) goto L_0054207f;
L_00541df2:; BB(0x00541df2);
    /* 00541df2: mov edx, dword ptr [edi + 0x4d8] */ r_edx = R32((u32)(r_edi+0x4d8u));
    /* 00541df8: mov dword ptr [edi + 0x4fc], 9 */ W32((u32)(r_edi+0x4fcu), 0x9u);
    /* 00541e02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541e04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00541e06: mov dword ptr [edi + 0x4ac], 0x3f800000 */ W32((u32)(r_edi+0x4acu), 0x3f800000u);
    /* 00541e10: mov dword ptr [edi + 0x4b0], 0 */ W32((u32)(r_edi+0x4b0u), 0x0u);
    /* 00541e1a: mov dword ptr [edi + 0x4b4], 0x3e4ccccd */ W32((u32)(r_edi+0x4b4u), 0x3e4ccccdu);
    /* 00541e24: mov dword ptr [edi + 0x4b8], 0x3f800000 */ W32((u32)(r_edi+0x4b8u), 0x3f800000u);
    /* 00541e2e: jle 0x541e54 */ if ((fZ||fS!=fO)) goto L_00541e54;
L_00541e30:; BB(0x00541e30);
    /* 00541e30: mov ecx, dword ptr [edi + eax*4 + 0x4dc] */ r_ecx = R32((u32)(r_edi+r_eax*4+0x4dcu));
    /* 00541e37: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 00541e3d: or edx, 0x100004 */ {  u32 a = r_edx; u32 b = 0x100004u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00541e43: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 00541e49: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541e4c: cmp eax, dword ptr [edi + 0x4d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541e52: jl 0x541e30 */ if ((fS!=fO)) goto L_00541e30;
L_00541e54:; BB(0x00541e54);
    /* 00541e54: mov ecx, edi */ r_ecx = r_edi;
    /* 00541e56: call 0x542084 */ r_esp -= 4; W32(r_esp, 0x541e5bu); f_00542084();
    /* 00541e5b: jmp 0x54207f */ goto L_0054207f;
L_0054207f:; BB(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00541de4); r_esp += 4; return;
}

void f_00541e60(void)
{
    FN_ENTER(0x00541e60);
    /* 00541e60: push 0x923710 */ { u32 v = 0x923710u; r_esp -= 4; W32(r_esp, v); }
    /* 00541e65: mov ecx, edi */ r_ecx = r_edi;
    /* 00541e67: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x541e6cu); f_00540c80();
    /* 00541e6c: mov dword ptr [edi + 0x4c0], 3 */ W32((u32)(r_edi+0x4c0u), 0x3u);
    /* 00541e76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541e78: mov dword ptr [edi + 0x4cc], eax */ W32((u32)(r_edi+0x4ccu), r_eax);
    /* 00541e7e: mov dword ptr [edi + 0x4c4], 4 */ W32((u32)(r_edi+0x4c4u), 0x4u);
    /* 00541e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541e89: mov dword ptr [edi + 0x4c8], 2 */ W32((u32)(r_edi+0x4c8u), 0x2u);
    /* 00541e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541e94: mov dword ptr [edi + 0x4fc], 8 */ W32((u32)(r_edi+0x4fcu), 0x8u);
    /* 00541e9e: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00541ea4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00541ea5: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 00541eaa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x541eafu); f_00814298();
    /* 00541eaf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00541eb2: jmp 0x54207f */ goto L_0054207f;
L_0054207f:; BB(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00541e60); r_esp += 4; return;
}

void f_00541eb7(void)
{
    FN_ENTER(0x00541eb7);
    /* 00541eb7: mov eax, dword ptr [edi + 0x4c0] */ r_eax = R32((u32)(r_edi+0x4c0u));
    /* 00541ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541ebf: jne 0x54207f */ if (!fZ) goto L_0054207f;
L_00541ec5:; BB(0x00541ec5);
    /* 00541ec5: mov eax, dword ptr [edi + 0x4d8] */ r_eax = R32((u32)(r_edi+0x4d8u));
    /* 00541ecb: mov dword ptr [edi + 0x4ac], 0x3f800000 */ W32((u32)(r_edi+0x4acu), 0x3f800000u);
    /* 00541ed5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00541ed7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541ed9: mov dword ptr [edi + 0x4b0], 0 */ W32((u32)(r_edi+0x4b0u), 0x0u);
    /* 00541ee3: mov dword ptr [edi + 0x4b4], 0x3e4ccccd */ W32((u32)(r_edi+0x4b4u), 0x3e4ccccdu);
    /* 00541eed: mov dword ptr [edi + 0x4b8], 0x3f800000 */ W32((u32)(r_edi+0x4b8u), 0x3f800000u);
    /* 00541ef7: mov dword ptr [edi + 0x4fc], 6 */ W32((u32)(r_edi+0x4fcu), 0x6u);
    /* 00541f01: jle 0x54207f */ if ((fZ||fS!=fO)) goto L_0054207f;
L_00541f07:; BB(0x00541f07);
    /* 00541f07: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00541f0a:; BB(0x00541f0a);
    /* 00541f0a: mov ebx, dword ptr [edi + edx*4 + 0x4dc] */ r_ebx = R32((u32)(r_edi+r_edx*4+0x4dcu));
    /* 00541f11: mov ecx, dword ptr [ebx + 0x3d0] */ r_ecx = R32((u32)(r_ebx+0x3d0u));
    /* 00541f17: test ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541f1d: je 0x541f2e */ if (fZ) goto L_00541f2e;
L_00541f1f:; BB(0x00541f1f);
    /* 00541f1f: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00541f22: mov dword ptr [ebx + 0x3d0], ecx */ W32((u32)(r_ebx+0x3d0u), r_ecx);
    /* 00541f28: mov eax, dword ptr [edi + 0x4d8] */ r_eax = R32((u32)(r_edi+0x4d8u));
L_00541f2e:; BB(0x00541f2e);
    /* 00541f2e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00541f31: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00541f33: jl 0x541f0a */ if ((fS!=fO)) goto L_00541f0a;
L_00541f35:; BB(0x00541f35);
    /* 00541f35: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00541f38: jmp 0x54207f */ goto L_0054207f;
L_0054207f:; BB(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00541eb7); r_esp += 4; return;
}

void f_00541f3d(void)
{
    FN_ENTER(0x00541f3d);
    /* 00541f3d: push 0x923710 */ { u32 v = 0x923710u; r_esp -= 4; W32(r_esp, v); }
    /* 00541f42: mov ecx, edi */ r_ecx = r_edi;
    /* 00541f44: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x541f49u); f_00540c80();
    /* 00541f49: mov dword ptr [edi + 0x4c0], 3 */ W32((u32)(r_edi+0x4c0u), 0x3u);
    /* 00541f53: mov eax, 2 */ r_eax = 0x2u;
    /* 00541f58: mov dword ptr [edi + 0x4c4], eax */ W32((u32)(r_edi+0x4c4u), r_eax);
    /* 00541f5e: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 00541f64: mov dword ptr [edi + 0x4fc], 5 */ W32((u32)(r_edi+0x4fcu), 0x5u);
    /* 00541f6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00541f70: mov dword ptr [edi + 0x4cc], edx */ W32((u32)(r_edi+0x4ccu), r_edx);
    /* 00541f76: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00541f7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00541f7f: push 0x141 */ { u32 v = 0x141u; r_esp -= 4; W32(r_esp, v); }
    /* 00541f84: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x541f89u); f_00814298();
    /* 00541f89: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00541f8c: jmp 0x54207f */ goto L_0054207f;
L_0054207f:; BB(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00541f3d); r_esp += 4; return;
}

void f_00541f91(void)
{
    FN_ENTER(0x00541f91);
    /* 00541f91: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541f93: je 0x54207f */ if (fZ) goto L_0054207f;
L_00541f99:; BB(0x00541f99);
    /* 00541f99: mov dword ptr [edi + 0x4fc], 4 */ W32((u32)(r_edi+0x4fcu), 0x4u);
    /* 00541fa3: jmp 0x54207f */ goto L_0054207f;
L_0054207f:; BB(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00541f91); r_esp += 4; return;
}

void f_00541fa8(void)
{
    FN_ENTER(0x00541fa8);
    /* 00541fa8: mov edx, dword ptr [edi + 0x4c0] */ r_edx = R32((u32)(r_edi+0x4c0u));
    /* 00541fae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541fb0: jne 0x54207f */ if (!fZ) goto L_0054207f;
L_00541fb6:; BB(0x00541fb6);
    /* 00541fb6: mov dword ptr [edi + 0x4fc], 3 */ W32((u32)(r_edi+0x4fcu), 0x3u);
    /* 00541fc0: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00541fc3: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 00541fc9: mov eax, dword ptr [edi + 0x4d8] */ r_eax = R32((u32)(r_edi+0x4d8u));
    /* 00541fcf: mov dword ptr [edi + 0x4ac], 0x3f800000 */ W32((u32)(r_edi+0x4acu), 0x3f800000u);
    /* 00541fd9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00541fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541fdd: mov dword ptr [edi + 0x4b0], 0 */ W32((u32)(r_edi+0x4b0u), 0x0u);
    /* 00541fe7: mov dword ptr [edi + 0x4b4], 0x3e4ccccd */ W32((u32)(r_edi+0x4b4u), 0x3e4ccccdu);
    /* 00541ff1: mov dword ptr [edi + 0x4b8], 0x3f800000 */ W32((u32)(r_edi+0x4b8u), 0x3f800000u);
    /* 00541ffb: jle 0x54207f */ if ((fZ||fS!=fO)) goto L_0054207f;
L_00542001:; BB(0x00542001);
    /* 00542001: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00542004:; BB(0x00542004);
    /* 00542004: mov ebx, dword ptr [edi + edx*4 + 0x4dc] */ r_ebx = R32((u32)(r_edi+r_edx*4+0x4dcu));
    /* 0054200b: mov ecx, dword ptr [ebx + 0x3d0] */ r_ecx = R32((u32)(r_ebx+0x3d0u));
    /* 00542011: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542017: je 0x542028 */ if (fZ) goto L_00542028;
L_00542019:; BB(0x00542019);
    /* 00542019: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0054201c: mov dword ptr [ebx + 0x3d0], ecx */ W32((u32)(r_ebx+0x3d0u), r_ecx);
    /* 00542022: mov eax, dword ptr [edi + 0x4d8] */ r_eax = R32((u32)(r_edi+0x4d8u));
L_00542028:; BB(0x00542028);
    /* 00542028: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054202b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054202d: jl 0x542004 */ if ((fS!=fO)) goto L_00542004;
L_0054202f:; BB(0x0054202f);
    /* 0054202f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00542032: jmp 0x54207f */ goto L_0054207f;
L_0054207f:; BB(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00541fa8); r_esp += 4; return;
}

