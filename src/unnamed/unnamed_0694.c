#include "protos.h"

void f_00694064(void) /* sub_694064 */
{
    FN_ENTER(0x00694064);
    /* 00694064: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694065: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694066: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694069: mov esi, ecx */ r_esi = r_ecx;
    /* 0069406b: mov ebp, edx */ r_ebp = r_edx;
    /* 0069406d: mov ecx, eax */ r_ecx = r_eax;
    /* 0069406f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x694074u); f_0083173c();
    /* 00694074: mov eax, ebp */ r_eax = r_ebp;
    /* 00694076: mov edx, esi */ r_edx = r_esi;
    /* 00694078: call 0x694090 */ r_esp -= 4; W32(r_esp, 0x69407du); f_00694090();
    /* 0069407d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00694080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694081: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694082: ret  */ FN_RET(0x00694064); r_esp += 4; return;
}

void f_00694090(void) /* sub_694090 */
{
    FN_ENTER(0x00694090);
    /* 00694090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694092: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694095: mov esi, edx */ r_esi = r_edx;
    /* 00694097: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0069409a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069409c: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 006940a0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006940a2: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006940a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006940a6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 006940a8: fmul qword ptr [0x93c658] */ ST(0) = ST(0) * R_F64((u32)(0x93c658u));
    /* 006940ae: fdiv qword ptr [0x93c650] */ ST(0) = ST(0) / R_F64((u32)(0x93c650u));
    /* 006940b4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006940b7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006940bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006940c0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006940c4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006940c8: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006940cc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006940cf: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006940d3: mov ecx, edi */ r_ecx = r_edi;
    /* 006940d5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6940dau); f_0082dcbc();
    /* 006940da: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 006940de: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 006940e0: mov ecx, edi */ r_ecx = r_edi;
    /* 006940e2: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 006940e9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6940eeu); f_0082ddd8();
    /* 006940ee: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006940f2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006940f4: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 006940f7: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006940fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006940fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006940fc: ret  */ FN_RET(0x00694090); r_esp += 4; return;
}

void f_0069410c(void) /* sub_69410C */
{
    FN_ENTER(0x0069410c);
    /* 0069410c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069410d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069410e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069410f: mov esi, ecx */ r_esi = r_ecx;
    /* 00694111: mov ebx, edx */ r_ebx = r_edx;
    /* 00694113: mov ebp, eax */ r_ebp = r_eax;
    /* 00694115: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00694117: mov edx, ebx */ r_edx = r_ebx;
    /* 00694119: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x69411eu); f_0082f9e0();
    /* 0069411e: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00694120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00694122: fchs  */ ST(0) = -ST(0);
    /* 00694124: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00694126: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00694128: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 0069412b: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0069412d: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00694130: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00694132: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 00694135: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00694138: fmul dword ptr [ebx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x8u));
    /* 0069413b: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 0069413e: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00694141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694142: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694143: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694144: ret  */ FN_RET(0x0069410c); r_esp += 4; return;
}

void f_00694148(void) /* sub_694148 */
{
    FN_ENTER(0x00694148);
    /* 00694148: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0069414c: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00694152: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00694155: je 0x69415e */ if (fZ) goto L_0069415e;
L_00694157:; BB(0x00694157);
    /* 00694157: mov edx, 1 */ r_edx = 0x1u;
    /* 0069415c: jmp 0x694160 */ goto L_00694160;
L_0069415e:; BB(0x0069415e);
    /* 0069415e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00694160:; BB(0x00694160);
    /* 00694160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00694162: jne 0x694169 */ if (!fZ) goto L_00694169;
L_00694164:; BB(0x00694164);
    /* 00694164: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694166: ret 4 */ FN_RET(0x00694148); r_esp += 8; return;
L_00694169:; BB(0x00694169);
    /* 00694169: fld dword ptr [ecx + 0x814] */ FPUSH(R_F32((u32)(r_ecx+0x814u)));
    /* 0069416f: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00694171: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00694173: fld dword ptr [ecx + 0x818] */ FPUSH(R_F32((u32)(r_ecx+0x818u)));
    /* 00694179: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 0069417c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0069417e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00694180: fcomp dword ptr [ecx + 0x810] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x810u))); FPOP();
    /* 00694186: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694188: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00694189: jae 0x694190 */ if (!fC) goto L_00694190;
L_0069418b:; BB(0x0069418b);
    /* 0069418b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069418d: ret 4 */ FN_RET(0x00694148); r_esp += 8; return;
L_00694190:; BB(0x00694190);
    /* 00694190: mov eax, 1 */ r_eax = 0x1u;
    /* 00694195: ret 4 */ FN_RET(0x00694148); r_esp += 8; return;
}

void f_00694198(void) /* sub_694198 */
{
    FN_ENTER(0x00694198);
    /* 00694198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694199: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069419c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069419e: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 006941a1: fadd dword ptr [ebx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30cu));
    /* 006941a7: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 006941aa: fadd dword ptr [ebx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x314u));
    /* 006941b0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006941b2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006941b5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006941b9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006941c1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006941c4: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006941c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006941c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006941cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006941cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006941cd: call 0x7b62a0 */ r_esp -= 4; W32(r_esp, 0x6941d2u); f_007b62a0();
    /* 006941d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006941d4: je 0x6941e1 */ if (fZ) goto L_006941e1;
L_006941d6:; BB(0x006941d6);
    /* 006941d6: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006941da: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006941df: je 0x6941e8 */ if (fZ) goto L_006941e8;
L_006941e1:; BB(0x006941e1);
    /* 006941e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006941e3: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006941e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006941e7: ret  */ FN_RET(0x00694198); r_esp += 4; return;
L_006941e8:; BB(0x006941e8);
    /* 006941e8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006941eb: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 006941ef: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006941f3: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 006941f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006941f9: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 006941fd: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00694201: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 00694209: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0069420d: add ebx, 0x30c */ {  u32 a = r_ebx; u32 b = 0x30cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00694213: mov edx, ebx */ r_edx = r_ebx;
    /* 00694215: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x69421au); f_0082f9e0();
    /* 0069421a: fcomp dword ptr [0x93c6c8] */ fx_compare(ST(0), R_F32((u32)(0x93c6c8u))); FPOP();
    /* 00694220: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694222: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00694223: jae 0x6941e1 */ if (!fC) goto L_006941e1;
L_00694225:; BB(0x00694225);
    /* 00694225: mov eax, 1 */ r_eax = 0x1u;
    /* 0069422a: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069422d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069422e: ret  */ FN_RET(0x00694198); r_esp += 4; return;
}

void f_00694230(void) /* sub_694230 */
{
    FN_ENTER(0x00694230);
    /* 00694230: fld dword ptr [0x93c6c4] */ FPUSH(R_F32((u32)(0x93c6c4u)));
    /* 00694236: fld dword ptr [ecx + 0x30c] */ FPUSH(R_F32((u32)(r_ecx+0x30cu)));
    /* 0069423c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0069423e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694240: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00694241: jae 0x69425c */ if (!fC) goto L_0069425c;
L_00694243:; BB(0x00694243);
    /* 00694243: fcom dword ptr [0x93c6c0] */ fx_compare(ST(0), R_F32((u32)(0x93c6c0u))); 
    /* 00694249: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069424b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069424c: jbe 0x69425c */ if ((fC||fZ)) goto L_0069425c;
L_0069424e:; BB(0x0069424e);
    /* 0069424e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00694250: mov dword ptr [ecx + 0x30c], 0 */ W32((u32)(r_ecx+0x30cu), 0x0u);
    /* 0069425a: jmp 0x69426a */ goto L_0069426a;
L_0069425c:; BB(0x0069425c);
    /* 0069425c: fld dword ptr [0x93c6b8] */ FPUSH(R_F32((u32)(0x93c6b8u)));
    /* 00694262: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00694264: fstp dword ptr [ecx + 0x30c] */ W_F32((u32)(r_ecx+0x30cu), ST(0)); FPOP();
L_0069426a:; BB(0x0069426a);
    /* 0069426a: fld dword ptr [ecx + 0x314] */ FPUSH(R_F32((u32)(r_ecx+0x314u)));
    /* 00694270: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00694272: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00694274: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00694276: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694278: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00694279: jae 0x694293 */ if (!fC) goto L_00694293;
L_0069427b:; BB(0x0069427b);
    /* 0069427b: fcom dword ptr [0x93c6c0] */ fx_compare(ST(0), R_F32((u32)(0x93c6c0u))); 
    /* 00694281: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694283: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00694284: jbe 0x694293 */ if ((fC||fZ)) goto L_00694293;
L_00694286:; BB(0x00694286);
    /* 00694286: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00694288: mov dword ptr [ecx + 0x314], 0 */ W32((u32)(r_ecx+0x314u), 0x0u);
    /* 00694292: ret  */ FN_RET(0x00694230); r_esp += 4; return;
L_00694293:; BB(0x00694293);
    /* 00694293: fld dword ptr [0x93c6b8] */ FPUSH(R_F32((u32)(0x93c6b8u)));
    /* 00694299: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069429b: fstp dword ptr [ecx + 0x314] */ W_F32((u32)(r_ecx+0x314u), ST(0)); FPOP();
    /* 006942a1: ret  */ FN_RET(0x00694230); r_esp += 4; return;
}

void f_006942a4(void) /* sub_6942A4 */
{
    FN_ENTER(0x006942a4);
    /* 006942a4: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 006942aa: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006942ac: je 0x6942c4 */ if (fZ) goto L_006942c4;
L_006942ae:; BB(0x006942ae);
    /* 006942ae: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006942b3: cmp ax, word ptr [ecx + 0xbc] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0xbcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 006942ba: jne 0x6942c4 */ if (!fZ) goto L_006942c4;
L_006942bc:; BB(0x006942bc);
    /* 006942bc: mov eax, 1 */ r_eax = 0x1u;
    /* 006942c1: ret 4 */ FN_RET(0x006942a4); r_esp += 8; return;
L_006942c4:; BB(0x006942c4);
    /* 006942c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006942c6: ret 4 */ FN_RET(0x006942a4); r_esp += 8; return;
}

void f_006942cc(void) /* sub_6942CC */
{
    FN_ENTER(0x006942cc);
    /* 006942cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006942cd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006942cf: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006942d2: mov edx, 0x10 */ r_edx = 0x10u;
    /* 006942d7: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006942dc: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006942df: mov word ptr [ebp + 0x6ca], dx */ W16((u32)(r_ebp+0x6cau), (u16)r_edx);
    /* 006942e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006942e8: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6942edu); f_0069d1bc();
    /* 006942ed: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 006942f0: mov word ptr [ebp + 0x6d0], ax */ W16((u32)(r_ebp+0x6d0u), (u16)r_eax);
    /* 006942f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006942f9: mov word ptr [ebp + 0x6c8], ax */ W16((u32)(r_ebp+0x6c8u), (u16)r_eax);
    /* 00694300: mov dword ptr [ebp + 0x6cc], edx */ W32((u32)(r_ebp+0x6ccu), r_edx);
    /* 00694306: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694307: ret  */ FN_RET(0x006942cc); r_esp += 4; return;
}

void f_00694308(void) /* sub_694308 */
{
    FN_ENTER(0x00694308);
    /* 00694308: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 0069430d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069430f: je 0x694312 */ if (fZ) goto L_00694312;
L_00694311:; BB(0x00694311);
    /* 00694311: ret  */ FN_RET(0x00694308); r_esp += 4; return;
L_00694312:; BB(0x00694312);
    /* 00694312: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00694315: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069431a: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0069431d: ret  */ FN_RET(0x00694308); r_esp += 4; return;
}

void f_00694320(void) /* sub_694320 */
{
    FN_ENTER(0x00694320);
    /* 00694320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694321: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694324: mov edi, ecx */ r_edi = r_ecx;
    /* 00694326: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00694328: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00694330: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00694338: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0069433f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x694344u); f_0082d990();
    /* 00694344: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00694348: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069434b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069434d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069434f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694351: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694353: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694355: add edx, dword ptr [edi + 0xe0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069435b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069435d: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x694362u); f_0083b410();
    /* 00694362: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x694367u); f_004d455c();
    /* 00694367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069436a: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x69436fu); f_0083a668();
    /* 0069436f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694372: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00694376: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0069437a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069437c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x694381u); f_00830aa0();
    /* 00694381: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x694386u); f_0082da80();
    /* 00694386: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00694389: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069438a: ret 8 */ FN_RET(0x00694320); r_esp += 12; return;
}

void f_00694390(void) /* sub_694390 */
{
    FN_ENTER(0x00694390);
    /* 00694390: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694391: mov eax, ecx */ r_eax = r_ecx;
    /* 00694393: movzx edx, word ptr [eax + 0x32e] */ r_edx = (u32)R16((u32)(r_eax+0x32eu));
    /* 0069439a: movsx ecx, word ptr [esp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0069439f: movsx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 006943a4: mov word ptr [eax + 0x332], dx */ W16((u32)(r_eax+0x332u), (u16)r_edx);
    /* 006943ab: mov word ptr [eax + 0x32e], cx */ W16((u32)(r_eax+0x32eu), (u16)r_ecx);
    /* 006943b2: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006943b5: je 0x6943be */ if (fZ) goto L_006943be;
L_006943b7:; BB(0x006943b7);
    /* 006943b7: mov word ptr [eax + 0xb8], bx */ W16((u32)(r_eax+0xb8u), (u16)r_ebx);
L_006943be:; BB(0x006943be);
    /* 006943be: mov ebx, dword ptr [eax + 0x33c] */ r_ebx = R32((u32)(r_eax+0x33cu));
    /* 006943c4: mov edx, 1 */ r_edx = 0x1u;
    /* 006943c9: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006943cb: or ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006943ce: mov dword ptr [eax + 0x33c], ebx */ W32((u32)(r_eax+0x33cu), r_ebx);
    /* 006943d4: mov dword ptr [eax + 0x328], edx */ W32((u32)(r_eax+0x328u), r_edx);
    /* 006943da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006943db: ret 8 */ FN_RET(0x00694390); r_esp += 12; return;
}

void f_006943e0(void) /* sub_6943E0 */
{
    FN_ENTER(0x006943e0);
    /* 006943e0: mov eax, dword ptr [ecx + 0x328] */ r_eax = R32((u32)(r_ecx+0x328u));
    /* 006943e6: test eax, 0x1e000 */ {  u32 a = r_eax; u32 b = 0x1e000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006943eb: je 0x6943f2 */ if (fZ) goto L_006943f2;
L_006943ed:; BB(0x006943ed);
    /* 006943ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006943ef: ret 4 */ FN_RET(0x006943e0); r_esp += 8; return;
L_006943f2:; BB(0x006943f2);
    /* 006943f2: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006943f5: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006943fb: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 006943fe: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00694403: mov word ptr [ecx + 0x6ca], ax */ W16((u32)(r_ecx+0x6cau), (u16)r_eax);
    /* 0069440a: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0069440f: mov word ptr [ecx + 0x6d0], ax */ W16((u32)(r_ecx+0x6d0u), (u16)r_eax);
    /* 00694416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694418: mov word ptr [ecx + 0x6c8], ax */ W16((u32)(r_ecx+0x6c8u), (u16)r_eax);
    /* 0069441f: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00694422: mov dword ptr [ecx + 0x6cc], eax */ W32((u32)(r_ecx+0x6ccu), r_eax);
    /* 00694428: mov eax, 1 */ r_eax = 0x1u;
    /* 0069442d: ret 4 */ FN_RET(0x006943e0); r_esp += 8; return;
}

void f_00694430(void) /* sub_694430 */
{
    FN_ENTER(0x00694430);
    /* 00694430: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00694435: mov edx, dword ptr [ecx + 0x328] */ r_edx = R32((u32)(r_ecx+0x328u));
    /* 0069443b: test edx, 0x1e000 */ {  u32 a = r_edx; u32 b = 0x1e000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694441: jne 0x69444c */ if (!fZ) goto L_0069444c;
L_00694443:; BB(0x00694443);
    /* 00694443: cmp ax, word ptr [ecx + 0x32e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x32eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0069444a: jne 0x694451 */ if (!fZ) goto L_00694451;
L_0069444c:; BB(0x0069444c);
    /* 0069444c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069444e: ret 8 */ FN_RET(0x00694430); r_esp += 12; return;
L_00694451:; BB(0x00694451);
    /* 00694451: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00694454: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069445a: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0069445d: mov word ptr [ecx + 0x6ca], ax */ W16((u32)(r_ecx+0x6cau), (u16)r_eax);
    /* 00694464: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0069446b: mov word ptr [ecx + 0x6d0], ax */ W16((u32)(r_ecx+0x6d0u), (u16)r_eax);
    /* 00694472: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694474: mov word ptr [ecx + 0x6c8], ax */ W16((u32)(r_ecx+0x6c8u), (u16)r_eax);
    /* 0069447b: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0069447e: mov dword ptr [ecx + 0x6cc], eax */ W32((u32)(r_ecx+0x6ccu), r_eax);
    /* 00694484: mov eax, 1 */ r_eax = 0x1u;
    /* 00694489: ret 8 */ FN_RET(0x00694430); r_esp += 12; return;
}

void f_0069448c(void) /* sub_69448C */
{
    FN_ENTER(0x0069448c);
    /* 0069448c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069448d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069448f: mov ebx, eax */ r_ebx = r_eax;
L_00694491:; BB(0x00694491);
    /* 00694491: mov ecx, dword ptr [ebx + 0xa94254] */ r_ecx = R32((u32)(r_ebx+0xa94254u));
    /* 00694497: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069449a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069449c: je 0x6944b1 */ if (fZ) goto L_006944b1;
L_0069449e:; BB(0x0069449e);
    /* 0069449e: movsx edx, word ptr [ecx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006944a5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006944a8: jne 0x6944b1 */ if (!fZ) goto L_006944b1;
L_006944aa:; BB(0x006944aa);
    /* 006944aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006944ab: call 0x685544 */ r_esp -= 4; W32(r_esp, 0x6944b0u); f_00685544();
    /* 006944b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006944b1:; BB(0x006944b1);
    /* 006944b1: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006944b4: jl 0x694491 */ if ((fS!=fO)) goto L_00694491;
L_006944b6:; BB(0x006944b6);
    /* 006944b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006944b7: ret  */ FN_RET(0x0069448c); r_esp += 4; return;
}

void f_006944b8(void) /* sub_6944B8 */
{
    FN_ENTER(0x006944b8);
    /* 006944b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006944b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006944bb: mov ebx, eax */ r_ebx = r_eax;
L_006944bd:; BB(0x006944bd);
    /* 006944bd: mov ecx, dword ptr [ebx + 0xa94254] */ r_ecx = R32((u32)(r_ebx+0xa94254u));
    /* 006944c3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006944c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006944c8: je 0x6944dd */ if (fZ) goto L_006944dd;
L_006944ca:; BB(0x006944ca);
    /* 006944ca: movsx edx, word ptr [ecx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006944d1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006944d4: jne 0x6944dd */ if (!fZ) goto L_006944dd;
L_006944d6:; BB(0x006944d6);
    /* 006944d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006944d7: call 0x6855a4 */ r_esp -= 4; W32(r_esp, 0x6944dcu); f_006855a4();
    /* 006944dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006944dd:; BB(0x006944dd);
    /* 006944dd: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006944e0: jl 0x6944bd */ if ((fS!=fO)) goto L_006944bd;
L_006944e2:; BB(0x006944e2);
    /* 006944e2: call 0x69b69c */ r_esp -= 4; W32(r_esp, 0x6944e7u); f_0069b69c();
    /* 006944e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006944e8: ret  */ FN_RET(0x006944b8); r_esp += 4; return;
}

void f_006944ec(void) /* sub_6944EC */
{
    FN_ENTER(0x006944ec);
    /* 006944ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006944ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006944ee: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006944f3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6944f8u); f_0068d5ac();
    /* 006944f8: mov edi, eax */ r_edi = r_eax;
    /* 006944fa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006944fc: je 0x694509 */ if (fZ) goto L_00694509;
L_006944fe:; BB(0x006944fe);
    /* 006944fe: mov ecx, edi */ r_ecx = r_edi;
    /* 00694500: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x694505u); f_006877b0();
    /* 00694505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694507: jne 0x69450e */ if (!fZ) goto L_0069450e;
L_00694509:; BB(0x00694509);
    /* 00694509: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069450b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069450c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069450d: ret  */ FN_RET(0x006944ec); r_esp += 4; return;
L_0069450e:; BB(0x0069450e);
    /* 0069450e: mov eax, edi */ r_eax = r_edi;
    /* 00694510: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00694511: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694512: ret  */ FN_RET(0x006944ec); r_esp += 4; return;
}

void f_00694514(void) /* sub_694514 */
{
    FN_ENTER(0x00694514);
    /* 00694514: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694515: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694516: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694517: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694519: mov esi, eax */ r_esi = r_eax;
L_0069451b:; BB(0x0069451b);
    /* 0069451b: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694521: je 0x69457b */ if (fZ) goto L_0069457b;
L_00694523:; BB(0x00694523);
    /* 00694523: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694525: jl 0x69452c */ if ((fS!=fO)) goto L_0069452c;
L_00694527:; BB(0x00694527);
    /* 00694527: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069452a: jl 0x694530 */ if ((fS!=fO)) goto L_00694530;
L_0069452c:; BB(0x0069452c);
    /* 0069452c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069452e: jmp 0x694537 */ goto L_00694537;
L_00694530:; BB(0x00694530);
    /* 00694530: mov edi, dword ptr [esi*4 + 0xa94254] */ r_edi = R32((u32)(r_esi*4+0xa94254u));
L_00694537:; BB(0x00694537);
    /* 00694537: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694539: je 0x69456f */ if (fZ) goto L_0069456f;
L_0069453b:; BB(0x0069453b);
    /* 0069453b: mov ebx, dword ptr [edi + 0x30] */ r_ebx = R32((u32)(r_edi+0x30u));
    /* 0069453e: or ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00694544: mov dword ptr [edi + 0x30], ebx */ W32((u32)(r_edi+0x30u), r_ebx);
    /* 00694547: lea ebx, [edi + 0x6c8] */ r_ebx = (u32)(r_edi+0x6c8u);
    /* 0069454d: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00694552: mov word ptr [edi + 0x6ca], dx */ W16((u32)(r_edi+0x6cau), (u16)r_edx);
    /* 00694559: mov ecx, edi */ r_ecx = r_edi;
    /* 0069455b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x694560u); f_0069d1bc();
    /* 00694560: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00694564: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00694566: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 00694569: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0069456c: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
L_0069456f:; BB(0x0069456f);
    /* 0069456f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00694572: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694575: jl 0x69451b */ if ((fS!=fO)) goto L_0069451b;
L_00694577:; BB(0x00694577);
    /* 00694577: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694578: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694579: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069457a: ret  */ FN_RET(0x00694514); r_esp += 4; return;
L_0069457b:; BB(0x0069457b);
    /* 0069457b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069457d: jmp 0x694537 */ goto L_00694537;
}

void f_00694580(void) /* sub_694580 */
{
    FN_ENTER(0x00694580);
    /* 00694580: mov edx, dword ptr [0xa94254] */ r_edx = R32((u32)(0xa94254u));
    /* 00694586: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694588: je 0x69459e */ if (fZ) goto L_0069459e;
L_0069458a:; BB(0x0069458a);
    /* 0069458a: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 0069458f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694591: jne 0x69459e */ if (!fZ) goto L_0069459e;
L_00694593:; BB(0x00694593);
    /* 00694593: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00694596: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069459b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0069459e:; BB(0x0069459e);
    /* 0069459e: mov edx, dword ptr [0xa94258] */ r_edx = R32((u32)(0xa94258u));
    /* 006945a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006945a6: je 0x6945bc */ if (fZ) goto L_006945bc;
L_006945a8:; BB(0x006945a8);
    /* 006945a8: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006945ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006945af: jne 0x6945bc */ if (!fZ) goto L_006945bc;
L_006945b1:; BB(0x006945b1);
    /* 006945b1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 006945b4: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006945b9: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_006945bc:; BB(0x006945bc);
    /* 006945bc: mov edx, dword ptr [0xa9425c] */ r_edx = R32((u32)(0xa9425cu));
    /* 006945c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006945c4: je 0x6945da */ if (fZ) goto L_006945da;
L_006945c6:; BB(0x006945c6);
    /* 006945c6: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006945cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006945cd: jne 0x6945da */ if (!fZ) goto L_006945da;
L_006945cf:; BB(0x006945cf);
    /* 006945cf: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 006945d2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006945d7: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_006945da:; BB(0x006945da);
    /* 006945da: mov edx, dword ptr [0xa94260] */ r_edx = R32((u32)(0xa94260u));
    /* 006945e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006945e2: je 0x6945f8 */ if (fZ) goto L_006945f8;
L_006945e4:; BB(0x006945e4);
    /* 006945e4: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006945e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006945eb: jne 0x6945f8 */ if (!fZ) goto L_006945f8;
L_006945ed:; BB(0x006945ed);
    /* 006945ed: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 006945f0: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006945f5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_006945f8:; BB(0x006945f8);
    /* 006945f8: ret  */ FN_RET(0x00694580); r_esp += 4; return;
}

void f_006945fc(void) /* sub_6945FC */
{
    FN_ENTER(0x006945fc);
    /* 006945fc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006945ff: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00694603: movzx edx, word ptr [esp + 0x18] */ r_edx = (u32)R16((u32)(r_esp+0x18u));
    /* 00694608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069460a: je 0x6946a3 */ if (fZ) goto L_006946a3;
L_00694610:; BB(0x00694610);
    /* 00694610: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694616: je 0x694620 */ if (fZ) goto L_00694620;
L_00694618:; BB(0x00694618);
    /* 00694618: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069461e: jl 0x694624 */ if ((fS!=fO)) goto L_00694624;
L_00694620:; BB(0x00694620);
    /* 00694620: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00694623: ret  */ FN_RET(0x006945fc); r_esp += 4; return;
L_00694624:; BB(0x00694624);
    /* 00694624: mov eax, edx */ r_eax = r_edx;
    /* 00694626: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69462bu); f_0068d5ac();
    /* 0069462b: mov edx, eax */ r_edx = r_eax;
    /* 0069462d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069462f: je 0x6946a3 */ if (fZ) goto L_006946a3;
L_00694631:; BB(0x00694631);
    /* 00694631: mov ecx, dword ptr [edx + 0x45c] */ r_ecx = R32((u32)(r_edx+0x45cu));
    /* 00694637: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694639: je 0x6946a3 */ if (fZ) goto L_006946a3;
L_0069463b:; BB(0x0069463b);
    /* 0069463b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0069463f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00694643: mov esi, edx */ r_esi = r_edx;
    /* 00694645: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694647: mov ebx, eax */ r_ebx = r_eax;
    /* 00694649: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0069464d: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00694651: mov eax, ecx */ r_eax = r_ecx;
    /* 00694653: jmp 0x69465b */ goto L_0069465b;
L_00694655:; BB(0x00694655);
    /* 00694655: mov eax, dword ptr [esi + 0x45c] */ r_eax = R32((u32)(r_esi+0x45cu));
L_0069465b:; BB(0x0069465b);
    /* 0069465b: lea edx, [ebx + ebx*8] */ r_edx = (u32)(r_ebx+r_ebx*8);
    /* 0069465e: lea edx, [ebx + edx*8] */ r_edx = (u32)(r_ebx+r_edx*8);
    /* 00694661: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694663: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694665: lea ecx, [eax + edx + 0x84] */ r_ecx = (u32)(r_eax+r_edx+0x84u);
    /* 0069466c: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 00694670: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00694673: jne 0x69467c */ if (!fZ) goto L_0069467c;
L_00694675:; BB(0x00694675);
    /* 00694675: mov edx, 1 */ r_edx = 0x1u;
    /* 0069467a: jmp 0x69467e */ goto L_0069467e;
L_0069467c:; BB(0x0069467c);
    /* 0069467c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069467e:; BB(0x0069467e);
    /* 0069467e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694680: je 0x69468f */ if (fZ) goto L_0069468f;
L_00694682:; BB(0x00694682);
    /* 00694682: add eax, 0x10a0 */ {  u32 a = r_eax; u32 b = 0x10a0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694688: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694689: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069468a: call 0x7a2b5c */ r_esp -= 4; W32(r_esp, 0x69468fu); f_007a2b5c();
L_0069468f:; BB(0x0069468f);
    /* 0069468f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00694692: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694695: jl 0x694655 */ if ((fS!=fO)) goto L_00694655;
L_00694697:; BB(0x00694697);
    /* 00694697: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0069469b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0069469f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_006946a3:; BB(0x006946a3);
    /* 006946a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006946a6: ret  */ FN_RET(0x006945fc); r_esp += 4; return;
}

void f_006946a8(void) /* sub_6946A8 */
{
    FN_ENTER(0x006946a8);
    /* 006946a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006946ab: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006946af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006946b1: je 0x69474d */ if (fZ) goto L_0069474d;
L_006946b7:; BB(0x006946b7);
    /* 006946b7: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006946bb: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006946bf: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006946c3: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006946c7: mov eax, 0xa94254 */ r_eax = 0xa94254u;
    /* 006946cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006946ce: mov ebx, edx */ r_ebx = r_edx;
    /* 006946d0: mov ebp, ecx */ r_ebp = r_ecx;
L_006946d2:; BB(0x006946d2);
    /* 006946d2: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 006946d4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006946d7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006946da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006946dc: je 0x694734 */ if (fZ) goto L_00694734;
L_006946de:; BB(0x006946de);
    /* 006946de: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
    /* 006946e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006946e6: je 0x694734 */ if (fZ) goto L_00694734;
L_006946e8:; BB(0x006946e8);
    /* 006946e8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006946eb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006946ed: jmp 0x6946f5 */ goto L_006946f5;
L_006946ef:; BB(0x006946ef);
    /* 006946ef: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
L_006946f5:; BB(0x006946f5);
    /* 006946f5: lea eax, [esi + esi*8] */ r_eax = (u32)(r_esi+r_esi*8);
    /* 006946f8: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 006946fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006946fd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006946ff: lea ecx, [edx + eax + 0x84] */ r_ecx = (u32)(r_edx+r_eax+0x84u);
    /* 00694706: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 0069470a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069470c: jne 0x694715 */ if (!fZ) goto L_00694715;
L_0069470e:; BB(0x0069470e);
    /* 0069470e: mov eax, 1 */ r_eax = 0x1u;
    /* 00694713: jmp 0x694717 */ goto L_00694717;
L_00694715:; BB(0x00694715);
    /* 00694715: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00694717:; BB(0x00694717);
    /* 00694717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694719: je 0x694729 */ if (fZ) goto L_00694729;
L_0069471b:; BB(0x0069471b);
    /* 0069471b: add edx, 0x10a0 */ {  u32 a = r_edx; u32 b = 0x10a0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694721: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694722: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694723: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694724: call 0x7a2b5c */ r_esp -= 4; W32(r_esp, 0x694729u); f_007a2b5c();
L_00694729:; BB(0x00694729);
    /* 00694729: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069472c: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069472f: jl 0x6946ef */ if ((fS!=fO)) goto L_006946ef;
L_00694731:; BB(0x00694731);
    /* 00694731: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_00694734:; BB(0x00694734);
    /* 00694734: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694737: jl 0x6946d2 */ if ((fS!=fO)) goto L_006946d2;
L_00694739:; BB(0x00694739);
    /* 00694739: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0069473d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00694741: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00694745: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00694749: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069474c: ret  */ FN_RET(0x006946a8); r_esp += 4; return;
L_0069474d:; BB(0x0069474d);
    /* 0069474d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00694750: ret  */ FN_RET(0x006946a8); r_esp += 4; return;
}

void f_00694754(void) /* sub_694754 */
{
    FN_ENTER(0x00694754);
    /* 00694754: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694755: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0069475a: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69475fu); f_0068d5ac();
    /* 0069475f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694761: je 0x694776 */ if (fZ) goto L_00694776;
L_00694763:; BB(0x00694763);
    /* 00694763: mov eax, dword ptr [eax + 0x45c] */ r_eax = R32((u32)(r_eax+0x45cu));
    /* 00694769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069476b: je 0x694776 */ if (fZ) goto L_00694776;
L_0069476d:; BB(0x0069476d);
    /* 0069476d: movzx eax, word ptr [eax + 0x108c] */ r_eax = (u32)R16((u32)(r_eax+0x108cu));
    /* 00694774: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00694775: ret  */ FN_RET(0x00694754); r_esp += 4; return;
L_00694776:; BB(0x00694776);
    /* 00694776: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069477b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069477c: ret  */ FN_RET(0x00694754); r_esp += 4; return;
}

void f_00694780(void) /* sub_694780 */
{
    FN_ENTER(0x00694780);
    /* 00694780: mov eax, dword ptr [ecx + 0x3dc] */ r_eax = R32((u32)(r_ecx+0x3dcu));
    /* 00694786: ret  */ FN_RET(0x00694780); r_esp += 4; return;
}

void f_00694788(void) /* sub_694788 */
{
    FN_ENTER(0x00694788);
    /* 00694788: mov eax, dword ptr [ecx + 0x3e4] */ r_eax = R32((u32)(r_ecx+0x3e4u));
    /* 0069478e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694790: jl 0x694797 */ if ((fS!=fO)) goto L_00694797;
L_00694792:; BB(0x00694792);
    /* 00694792: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694795: jl 0x69479a */ if ((fS!=fO)) goto L_0069479a;
L_00694797:; BB(0x00694797);
    /* 00694797: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694799: ret  */ FN_RET(0x00694788); r_esp += 4; return;
L_0069479a:; BB(0x0069479a);
    /* 0069479a: ret  */ FN_RET(0x00694788); r_esp += 4; return;
}

void f_0069479c(void) /* sub_69479C */
{
    FN_ENTER(0x0069479c);
    /* 0069479c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6947a1u); f_00807ac0();
    /* 006947a1: ret  */ FN_RET(0x0069479c); r_esp += 4; return;
}

void f_006947a4(void) /* sub_6947A4 */
{
    FN_ENTER(0x006947a4);
    /* 006947a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006947a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006947a6: mov edi, ecx */ r_edi = r_ecx;
    /* 006947a8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006947aa: mov ecx, edi */ r_ecx = r_edi;
    /* 006947ac: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6947afu); call_ind(t); }
    /* 006947af: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006947b4: jl 0x6947bb */ if ((fS!=fO)) goto L_006947bb;
L_006947b6:; BB(0x006947b6);
    /* 006947b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006947b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006947b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006947ba: ret  */ FN_RET(0x006947a4); r_esp += 4; return;
L_006947bb:; BB(0x006947bb);
    /* 006947bb: movsx ebx, byte ptr [edi + 0x961] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edi+0x961u));
    /* 006947c2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006947c4: mov ecx, edi */ r_ecx = r_edi;
    /* 006947c6: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6947c9u); call_ind(t); }
    /* 006947c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006947cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006947cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006947ce: call 0x6ac5cc */ r_esp -= 4; W32(r_esp, 0x6947d3u); f_006ac5cc();
    /* 006947d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006947d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006947d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006947d8: ret  */ FN_RET(0x006947a4); r_esp += 4; return;
}

void f_006947dc(void) /* sub_6947DC */
{
    FN_ENTER(0x006947dc);
    /* 006947dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006947dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006947de: mov edi, ecx */ r_edi = r_ecx;
    /* 006947e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006947e1: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 006947e7: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 006947ea: call 0x6ac5e4 */ r_esp -= 4; W32(r_esp, 0x6947efu); f_006ac5e4();
    /* 006947ef: add esi, dword ptr [esp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006947f3: mov ecx, dword ptr [edi + 0x2b4] */ r_ecx = R32((u32)(r_edi+0x2b4u));
    /* 006947f9: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006947fb: jl 0x6947ff */ if ((fS!=fO)) goto L_006947ff;
L_006947fd:; BB(0x006947fd);
    /* 006947fd: mov eax, esi */ r_eax = r_esi;
L_006947ff:; BB(0x006947ff);
    /* 006947ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00694801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694803: jge 0x694807 */ if ((fS==fO)) goto L_00694807;
L_00694805:; BB(0x00694805);
    /* 00694805: mov eax, edx */ r_eax = r_edx;
L_00694807:; BB(0x00694807);
    /* 00694807: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0069480a: mov eax, 1 */ r_eax = 0x1u;
    /* 0069480f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00694810: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694811: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694812: ret 4 */ FN_RET(0x006947dc); r_esp += 8; return;
}

void f_00694818(void) /* sub_694818 */
{
    FN_ENTER(0x00694818);
    /* 00694818: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694819: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069481a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069481b: mov esi, ecx */ r_esi = r_ecx;
    /* 0069481d: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
    /* 00694823: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00694825: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00694828: mov ecx, esi */ r_ecx = r_esi;
    /* 0069482a: call 0x694848 */ r_esp -= 4; W32(r_esp, 0x69482fu); f_00694848();
    /* 0069482f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694831: jl 0x69483a */ if ((fS!=fO)) goto L_0069483a;
L_00694833:; BB(0x00694833);
    /* 00694833: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694835: mov ebp, 1 */ r_ebp = 0x1u;
L_0069483a:; BB(0x0069483a);
    /* 0069483a: mov dword ptr [esi + 0x37c], ebx */ W32((u32)(r_esi+0x37cu), r_ebx);
    /* 00694840: mov eax, ebp */ r_eax = r_ebp;
    /* 00694842: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694843: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694844: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694845: ret  */ FN_RET(0x00694818); r_esp += 4; return;
}

void f_00694848(void) /* sub_694848 */
{
    FN_ENTER(0x00694848);
    /* 00694848: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694849: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069484c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069484e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00694850: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00694852: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x694855u); call_ind(t); }
    /* 00694855: mov edx, 0x63 */ r_edx = 0x63u;
    /* 0069485a: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069485d: jle 0x694861 */ if ((fZ||fS!=fO)) goto L_00694861;
L_0069485f:; BB(0x0069485f);
    /* 0069485f: mov eax, edx */ r_eax = r_edx;
L_00694861:; BB(0x00694861);
    /* 00694861: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00694864: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00694867: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 0069486d: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069486f: je 0x6948a5 */ if (fZ) goto L_006948a5;
L_00694871:; BB(0x00694871);
    /* 00694871: fld qword ptr [0x93c640] */ FPUSH(R_F64((u32)(0x93c640u)));
    /* 00694877: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00694879: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0069487d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00694882: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694887: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069488b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0069488f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00694893: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00694897: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069489b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069489d: add eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006948a0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006948a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006948a4: ret  */ FN_RET(0x00694848); r_esp += 4; return;
L_006948a5:; BB(0x006948a5);
    /* 006948a5: fld qword ptr [0x93c648] */ FPUSH(R_F64((u32)(0x93c648u)));
    /* 006948ab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006948ad: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006948b1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006948b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006948bb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006948bf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006948c3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006948c7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006948cb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006948cf: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006948d1: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006948d4: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006948d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006948d8: ret  */ FN_RET(0x00694848); r_esp += 4; return;
}

void f_006948dc(void) /* sub_6948DC */
{
    FN_ENTER(0x006948dc);
    /* 006948dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006948dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006948de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006948df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006948e0: mov esi, ecx */ r_esi = r_ecx;
    /* 006948e2: mov ebx, dword ptr [esi + 0x2b4] */ r_ebx = R32((u32)(r_esi+0x2b4u));
    /* 006948e8: movsx eax, byte ptr [esi + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 006948ef: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 006948f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006948f4: call 0x6ac470 */ r_esp -= 4; W32(r_esp, 0x6948f9u); f_006ac470();
    /* 006948f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006948fa: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006948fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006948ff: jl 0x694c07 */ if ((fS!=fO)) goto L_00694c07;
L_00694905:; BB(0x00694905);
    /* 00694905: movsx edi, word ptr [eax] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00694908: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069490a: jg 0x694912 */ if ((!fZ&&fS==fO)) goto L_00694912;
L_0069490c:; BB(0x0069490c);
    /* 0069490c: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 00694910: jmp 0x694925 */ goto L_00694925;
L_00694912:; BB(0x00694912);
    /* 00694912: mov word ptr [ebp], di */ W16((u32)(r_ebp), (u16)r_edi);
    /* 00694916: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 0069491c: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069491f: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
L_00694925:; BB(0x00694925);
    /* 00694925: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 00694929: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069492b: jl 0x694bea */ if ((fS!=fO)) goto L_00694bea;
L_00694931:; BB(0x00694931);
    /* 00694931: movsx edi, word ptr [eax + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00694935: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694937: jg 0x69493f */ if ((!fZ&&fS==fO)) goto L_0069493f;
L_00694939:; BB(0x00694939);
    /* 00694939: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 0069493d: jmp 0x694952 */ goto L_00694952;
L_0069493f:; BB(0x0069493f);
    /* 0069493f: mov word ptr [ebp + 2], di */ W16((u32)(r_ebp+0x2u), (u16)r_edi);
    /* 00694943: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 00694949: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069494c: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
L_00694952:; BB(0x00694952);
    /* 00694952: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 00694956: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694958: jl 0x694bcd */ if ((fS!=fO)) goto L_00694bcd;
L_0069495e:; BB(0x0069495e);
    /* 0069495e: movsx edi, word ptr [eax + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00694962: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694964: jg 0x69496c */ if ((!fZ&&fS==fO)) goto L_0069496c;
L_00694966:; BB(0x00694966);
    /* 00694966: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0069496a: jmp 0x69497f */ goto L_0069497f;
L_0069496c:; BB(0x0069496c);
    /* 0069496c: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 00694970: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 00694976: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00694979: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
L_0069497f:; BB(0x0069497f);
    /* 0069497f: movsx edi, word ptr [ebx + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 00694983: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694985: jl 0x694bac */ if ((fS!=fO)) goto L_00694bac;
L_0069498b:; BB(0x0069498b);
    /* 0069498b: movsx edx, word ptr [eax + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0069498f: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694991: jg 0x694999 */ if ((!fZ&&fS==fO)) goto L_00694999;
L_00694993:; BB(0x00694993);
    /* 00694993: mov word ptr [ebp + 6], di */ W16((u32)(r_ebp+0x6u), (u16)r_edi);
    /* 00694997: jmp 0x6949ac */ goto L_006949ac;
L_00694999:; BB(0x00694999);
    /* 00694999: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 0069499d: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 006949a3: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006949a6: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
L_006949ac:; BB(0x006949ac);
    /* 006949ac: movsx edx, word ptr [ebx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 006949b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006949b2: jl 0x694b8f */ if ((fS!=fO)) goto L_00694b8f;
L_006949b8:; BB(0x006949b8);
    /* 006949b8: movsx edi, word ptr [eax + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 006949bc: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006949be: jg 0x6949c6 */ if ((!fZ&&fS==fO)) goto L_006949c6;
L_006949c0:; BB(0x006949c0);
    /* 006949c0: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 006949c4: jmp 0x6949d9 */ goto L_006949d9;
L_006949c6:; BB(0x006949c6);
    /* 006949c6: mov word ptr [ebp + 8], di */ W16((u32)(r_ebp+0x8u), (u16)r_edi);
    /* 006949ca: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 006949d0: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006949d3: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
L_006949d9:; BB(0x006949d9);
    /* 006949d9: movsx edx, word ptr [ebx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xau));
    /* 006949dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006949df: jl 0x694b72 */ if ((fS!=fO)) goto L_00694b72;
L_006949e5:; BB(0x006949e5);
    /* 006949e5: movsx edi, word ptr [eax + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 006949e9: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006949eb: jg 0x6949f3 */ if ((!fZ&&fS==fO)) goto L_006949f3;
L_006949ed:; BB(0x006949ed);
    /* 006949ed: mov word ptr [ebp + 0xa], dx */ W16((u32)(r_ebp+0xau), (u16)r_edx);
    /* 006949f1: jmp 0x694a06 */ goto L_00694a06;
L_006949f3:; BB(0x006949f3);
    /* 006949f3: mov word ptr [ebp + 0xa], di */ W16((u32)(r_ebp+0xau), (u16)r_edi);
    /* 006949f7: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 006949fd: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00694a00: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
L_00694a06:; BB(0x00694a06);
    /* 00694a06: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 00694a0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694a0c: jl 0x694b55 */ if ((fS!=fO)) goto L_00694b55;
L_00694a12:; BB(0x00694a12);
    /* 00694a12: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 00694a16: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694a18: jg 0x694a20 */ if ((!fZ&&fS==fO)) goto L_00694a20;
L_00694a1a:; BB(0x00694a1a);
    /* 00694a1a: mov word ptr [ebp + 0xc], dx */ W16((u32)(r_ebp+0xcu), (u16)r_edx);
    /* 00694a1e: jmp 0x694a33 */ goto L_00694a33;
L_00694a20:; BB(0x00694a20);
    /* 00694a20: mov word ptr [ebp + 0xc], ax */ W16((u32)(r_ebp+0xcu), (u16)r_eax);
    /* 00694a24: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00694a2a: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694a2d: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
L_00694a33:; BB(0x00694a33);
    /* 00694a33: movsx eax, word ptr [ebx + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xeu));
    /* 00694a37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694a39: jl 0x694b38 */ if ((fS!=fO)) goto L_00694b38;
L_00694a3f:; BB(0x00694a3f);
    /* 00694a3f: mov word ptr [ebp + 0xe], ax */ W16((u32)(r_ebp+0xeu), (u16)r_eax);
L_00694a43:; BB(0x00694a43);
    /* 00694a43: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00694a46: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00694a49: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00694a4c: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00694a4f: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 00694a52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694a54: jl 0x694b1d */ if ((fS!=fO)) goto L_00694b1d;
L_00694a5a:; BB(0x00694a5a);
    /* 00694a5a: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694a5f: jg 0x694a66 */ if ((!fZ&&fS==fO)) goto L_00694a66;
L_00694a61:; BB(0x00694a61);
    /* 00694a61: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 00694a64: jmp 0x694a7c */ goto L_00694a7c;
L_00694a66:; BB(0x00694a66);
    /* 00694a66: mov dword ptr [ebp + 0x18], 0xc7 */ W32((u32)(r_ebp+0x18u), 0xc7u);
    /* 00694a6d: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00694a73: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694a76: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
L_00694a7c:; BB(0x00694a7c);
    /* 00694a7c: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 00694a81: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 00694a84: movsx eax, byte ptr [esi + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00694a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694a8c: call 0x6ac5cc */ r_esp -= 4; W32(r_esp, 0x694a91u); f_006ac5cc();
    /* 00694a91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694a94: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694a96: jl 0x694b05 */ if ((fS!=fO)) goto L_00694b05;
L_00694a98:; BB(0x00694a98);
    /* 00694a98: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694a9a: jg 0x694aa1 */ if ((!fZ&&fS==fO)) goto L_00694aa1;
L_00694a9c:; BB(0x00694a9c);
    /* 00694a9c: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 00694a9f: jmp 0x694ab3 */ goto L_00694ab3;
L_00694aa1:; BB(0x00694aa1);
    /* 00694aa1: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00694aa4: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00694aaa: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694aad: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
L_00694ab3:; BB(0x00694ab3);
    /* 00694ab3: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00694ab6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694ab8: jl 0x694ae8 */ if ((fS!=fO)) goto L_00694ae8;
L_00694aba:; BB(0x00694aba);
    /* 00694aba: cmp eax, 0xf423f */ {  u32 a = r_eax; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694abf: jg 0x694acb */ if ((!fZ&&fS==fO)) goto L_00694acb;
L_00694ac1:; BB(0x00694ac1);
    /* 00694ac1: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00694ac4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694ac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694ac6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694ac7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694ac8: ret 8 */ FN_RET(0x006948dc); r_esp += 12; return;
L_00694acb:; BB(0x00694acb);
    /* 00694acb: mov dword ptr [ebp + 0x20], 0xf423f */ W32((u32)(r_ebp+0x20u), 0xf423fu);
    /* 00694ad2: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00694ad8: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694adb: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
    /* 00694ae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694ae3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694ae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694ae5: ret 8 */ FN_RET(0x006948dc); r_esp += 12; return;
L_00694ae8:; BB(0x00694ae8);
    /* 00694ae8: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 00694aef: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00694af5: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694af8: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
    /* 00694afe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694aff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694b00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694b01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694b02: ret 8 */ FN_RET(0x006948dc); r_esp += 12; return;
L_00694b05:; BB(0x00694b05);
    /* 00694b05: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 00694b0c: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00694b12: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694b15: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
    /* 00694b1b: jmp 0x694ab3 */ goto L_00694ab3;
L_00694b1d:; BB(0x00694b1d);
    /* 00694b1d: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 00694b24: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00694b2a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694b2d: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
    /* 00694b33: jmp 0x694a7c */ goto L_00694a7c;
L_00694b38:; BB(0x00694b38);
    /* 00694b38: mov eax, 1 */ r_eax = 0x1u;
    /* 00694b3d: mov word ptr [ebp + 0xe], ax */ W16((u32)(r_ebp+0xeu), (u16)r_eax);
    /* 00694b41: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 00694b47: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00694b4a: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
    /* 00694b50: jmp 0x694a43 */ goto L_00694a43;
L_00694b55:; BB(0x00694b55);
    /* 00694b55: mov eax, 1 */ r_eax = 0x1u;
    /* 00694b5a: mov word ptr [ebp + 0xc], ax */ W16((u32)(r_ebp+0xcu), (u16)r_eax);
    /* 00694b5e: mov edx, dword ptr [esi + 0x454] */ r_edx = R32((u32)(r_esi+0x454u));
    /* 00694b64: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00694b67: mov dword ptr [esi + 0x454], edx */ W32((u32)(r_esi+0x454u), r_edx);
    /* 00694b6d: jmp 0x694a33 */ goto L_00694a33;
L_00694b72:; BB(0x00694b72);
    /* 00694b72: mov edx, 1 */ r_edx = 0x1u;
    /* 00694b77: mov word ptr [ebp + 0xa], dx */ W16((u32)(r_ebp+0xau), (u16)r_edx);
    /* 00694b7b: mov edi, dword ptr [esi + 0x454] */ r_edi = R32((u32)(r_esi+0x454u));
    /* 00694b81: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694b84: mov dword ptr [esi + 0x454], edi */ W32((u32)(r_esi+0x454u), r_edi);
    /* 00694b8a: jmp 0x694a06 */ goto L_00694a06;
L_00694b8f:; BB(0x00694b8f);
    /* 00694b8f: mov edx, 1 */ r_edx = 0x1u;
    /* 00694b94: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 00694b98: mov edi, dword ptr [esi + 0x454] */ r_edi = R32((u32)(r_esi+0x454u));
    /* 00694b9e: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694ba1: mov dword ptr [esi + 0x454], edi */ W32((u32)(r_esi+0x454u), r_edi);
    /* 00694ba7: jmp 0x6949d9 */ goto L_006949d9;
L_00694bac:; BB(0x00694bac);
    /* 00694bac: mov edx, 1 */ r_edx = 0x1u;
    /* 00694bb1: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 00694bb5: mov edi, dword ptr [esi + 0x454] */ r_edi = R32((u32)(r_esi+0x454u));
    /* 00694bbb: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694bbe: mov dword ptr [esi + 0x454], edi */ W32((u32)(r_esi+0x454u), r_edi);
    /* 00694bc4: movsx edi, word ptr [ebx + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 00694bc8: jmp 0x69498b */ goto L_0069498b;
L_00694bcd:; BB(0x00694bcd);
    /* 00694bcd: mov edx, 1 */ r_edx = 0x1u;
    /* 00694bd2: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00694bd6: mov edi, dword ptr [esi + 0x454] */ r_edi = R32((u32)(r_esi+0x454u));
    /* 00694bdc: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694bdf: mov dword ptr [esi + 0x454], edi */ W32((u32)(r_esi+0x454u), r_edi);
    /* 00694be5: jmp 0x69497f */ goto L_0069497f;
L_00694bea:; BB(0x00694bea);
    /* 00694bea: mov edx, 1 */ r_edx = 0x1u;
    /* 00694bef: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00694bf3: mov edi, dword ptr [esi + 0x454] */ r_edi = R32((u32)(r_esi+0x454u));
    /* 00694bf9: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694bfc: mov dword ptr [esi + 0x454], edi */ W32((u32)(r_esi+0x454u), r_edi);
    /* 00694c02: jmp 0x694952 */ goto L_00694952;
L_00694c07:; BB(0x00694c07);
    /* 00694c07: mov edx, 1 */ r_edx = 0x1u;
    /* 00694c0c: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 00694c10: mov edi, dword ptr [esi + 0x454] */ r_edi = R32((u32)(r_esi+0x454u));
    /* 00694c16: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694c19: mov dword ptr [esi + 0x454], edi */ W32((u32)(r_esi+0x454u), r_edi);
    /* 00694c1f: jmp 0x694925 */ goto L_00694925;
}

void f_00694c24(void) /* sub_694C24 */
{
    FN_ENTER(0x00694c24);
    /* 00694c24: mov edx, ecx */ r_edx = r_ecx;
    /* 00694c26: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00694c2a: mov eax, 1 */ r_eax = 0x1u;
    /* 00694c2f: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00694c31: or dword ptr [edx + 0x350], eax */ { u32 ad = (u32)(r_edx+0x350u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694c37: ret 4 */ FN_RET(0x00694c24); r_esp += 8; return;
}

void f_00694c3c(void) /* sub_694C3C */
{
    FN_ENTER(0x00694c3c);
    /* 00694c3c: mov eax, ecx */ r_eax = r_ecx;
    /* 00694c3e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00694c42: mov edx, 1 */ r_edx = 0x1u;
    /* 00694c47: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00694c49: test dword ptr [eax + 0x350], edx */ {  u32 a = R32((u32)(r_eax+0x350u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694c4f: jne 0x694c59 */ if (!fZ) goto L_00694c59;
L_00694c51:; BB(0x00694c51);
    /* 00694c51: mov eax, 1 */ r_eax = 0x1u;
    /* 00694c56: ret 4 */ FN_RET(0x00694c3c); r_esp += 8; return;
L_00694c59:; BB(0x00694c59);
    /* 00694c59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694c5b: ret 4 */ FN_RET(0x00694c3c); r_esp += 8; return;
}

void f_00694c60(void) /* sub_694C60 */
{
    FN_ENTER(0x00694c60);
    /* 00694c60: add ecx, 0x41c */ {  u32 a = r_ecx; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00694c66: mov eax, ecx */ r_eax = r_ecx;
    /* 00694c68: ret  */ FN_RET(0x00694c60); r_esp += 4; return;
}

void f_00694c6c(void) /* sub_694C6C */
{
    FN_ENTER(0x00694c6c);
    /* 00694c6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694c6d: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00694c72: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x694c77u); f_0068d5ac();
    /* 00694c77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694c79: je 0x694c83 */ if (fZ) goto L_00694c83;
L_00694c7b:; BB(0x00694c7b);
    /* 00694c7b: mov eax, dword ptr [eax + 0x3dc] */ r_eax = R32((u32)(r_eax+0x3dcu));
    /* 00694c81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00694c82: ret  */ FN_RET(0x00694c6c); r_esp += 4; return;
L_00694c83:; BB(0x00694c83);
    /* 00694c83: mov eax, dword ptr [0xa94244] */ r_eax = R32((u32)(0xa94244u));
    /* 00694c88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00694c89: ret  */ FN_RET(0x00694c6c); r_esp += 4; return;
}

void f_00694c8c(void) /* sub_694C8C */
{
    FN_ENTER(0x00694c8c);
    /* 00694c8c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x694c91u); f_006dc358();
    /* 00694c91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694c94: mov eax, 0 */ r_eax = 0x0u;
    /* 00694c99: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00694c9c: ret  */ FN_RET(0x00694c8c); r_esp += 4; return;
}

void f_00694ca0(void) /* sub_694CA0 */
{
    FN_ENTER(0x00694ca0);
    /* 00694ca0: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x694ca5u); f_0078b1c4();
    /* 00694ca5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694ca8: mov eax, 0 */ r_eax = 0x0u;
    /* 00694cad: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00694cb0: ret  */ FN_RET(0x00694ca0); r_esp += 4; return;
}

void f_00694cb4(void) /* sub_694CB4 */
{
    FN_ENTER(0x00694cb4);
    /* 00694cb4: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x694cb9u); f_0078b1c4();
    /* 00694cb9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694cbc: mov eax, 0 */ r_eax = 0x0u;
    /* 00694cc1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00694cc4: ret  */ FN_RET(0x00694cb4); r_esp += 4; return;
}

void f_00694cc8(void) /* sub_694CC8 */
{
    FN_ENTER(0x00694cc8);
    /* 00694cc8: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x694ccdu); f_007a61a4();
    /* 00694ccd: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694cd0: mov eax, 0 */ r_eax = 0x0u;
    /* 00694cd5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00694cd8: ret  */ FN_RET(0x00694cc8); r_esp += 4; return;
}

void f_00694cdc(void) /* sub_694CDC */
{
    FN_ENTER(0x00694cdc);
    /* 00694cdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694cdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694cde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694cdf: mov ecx, 0xa905a0 */ r_ecx = 0xa905a0u;
    /* 00694ce4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694ce6: mov ebx, eax */ r_ebx = r_eax;
    /* 00694ce8: mov esi, ecx */ r_esi = r_ecx;
L_00694cea:; BB(0x00694cea);
    /* 00694cea: mov ecx, esi */ r_ecx = r_esi;
    /* 00694cec: call 0x6aa17c */ r_esp -= 4; W32(r_esp, 0x694cf1u); f_006aa17c();
    /* 00694cf1: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694cf7: je 0x694d3f */ if (fZ) goto L_00694d3f;
L_00694cf9:; BB(0x00694cf9);
    /* 00694cf9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694cfb: jl 0x694d02 */ if ((fS!=fO)) goto L_00694d02;
L_00694cfd:; BB(0x00694cfd);
    /* 00694cfd: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694d00: jl 0x694d06 */ if ((fS!=fO)) goto L_00694d06;
L_00694d02:; BB(0x00694d02);
    /* 00694d02: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00694d04: jmp 0x694d0d */ goto L_00694d0d;
L_00694d06:; BB(0x00694d06);
    /* 00694d06: mov edi, dword ptr [ebx*4 + 0xa94254] */ r_edi = R32((u32)(r_ebx*4+0xa94254u));
L_00694d0d:; BB(0x00694d0d);
    /* 00694d0d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694d0f: je 0x694d2d */ if (fZ) goto L_00694d2d;
L_00694d11:; BB(0x00694d11);
    /* 00694d11: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00694d18: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694d1b: jne 0x694d25 */ if (!fZ) goto L_00694d25;
L_00694d1d:; BB(0x00694d1d);
    /* 00694d1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694d1e: mov ecx, esi */ r_ecx = r_esi;
    /* 00694d20: call 0x6aa0f8 */ r_esp -= 4; W32(r_esp, 0x694d25u); f_006aa0f8();
L_00694d25:; BB(0x00694d25);
    /* 00694d25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00694d27: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00694d29: mov ecx, edi */ r_ecx = r_edi;
    /* 00694d2b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x694d2du); call_ind(t); }
L_00694d2d:; BB(0x00694d2d);
    /* 00694d2d: add esi, 0x4f8 */ {  u32 a = r_esi; u32 b = 0x4f8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00694d33: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00694d36: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694d39: jl 0x694cea */ if ((fS!=fO)) goto L_00694cea;
L_00694d3b:; BB(0x00694d3b);
    /* 00694d3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694d3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694d3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694d3e: ret  */ FN_RET(0x00694cdc); r_esp += 4; return;
L_00694d3f:; BB(0x00694d3f);
    /* 00694d3f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00694d41: jmp 0x694d0d */ goto L_00694d0d;
}

void f_00694d44(void) /* sub_694D44 */
{
    FN_ENTER(0x00694d44);
    /* 00694d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694d45: mov ebp, esp */ r_ebp = r_esp;
    /* 00694d47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00694d49: push 0x8eb378 */ { u32 v = 0x8eb378u; r_esp -= 4; W32(r_esp, v); }
    /* 00694d4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00694d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694d55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00694d5c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694d5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00694d62: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00694d65: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00694d68: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00694d6b: mov eax, 0xa905a0 */ r_eax = 0xa905a0u;
    /* 00694d70: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00694d72: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00694d75: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00694d78:; BB(0x00694d78);
    /* 00694d78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00694d7b: mov edx, dword ptr [eax + 0x4e8] */ r_edx = R32((u32)(r_eax+0x4e8u));
    /* 00694d81: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00694d84: je 0x694d8d */ if (fZ) goto L_00694d8d;
L_00694d86:; BB(0x00694d86);
    /* 00694d86: mov eax, 1 */ r_eax = 0x1u;
    /* 00694d8b: jmp 0x694d8f */ goto L_00694d8f;
L_00694d8d:; BB(0x00694d8d);
    /* 00694d8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00694d8f:; BB(0x00694d8f);
    /* 00694d8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694d91: je 0x694e34 */ if (fZ) goto L_00694e34;
L_00694d97:; BB(0x00694d97);
    /* 00694d97: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00694d9a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00694da1: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00694da4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00694da7: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00694dac: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x694db1u); f_005caba4();
    /* 00694db1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00694db4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694db7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00694dba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694dbc: je 0x694e64 */ if (fZ) goto L_00694e64;
L_00694dc2:; BB(0x00694dc2);
    /* 00694dc2: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00694dc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00694dd0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00694dd3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00694dd6: mov ecx, eax */ r_ecx = r_eax;
    /* 00694dd8: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 00694ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694ddc: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00694dde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694ddf: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 00694de5: call 0x6862e8 */ r_esp -= 4; W32(r_esp, 0x694deau); f_006862e8();
    /* 00694dea: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00694df1:; BB(0x00694df1);
    /* 00694df1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00694df8: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00694dfb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00694dfe: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00694e01: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 00694e07: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00694e0a: mov dword ptr [eax + 0xeb4], ecx */ W32((u32)(r_eax+0xeb4u), r_ecx);
    /* 00694e10: mov ebx, dword ptr [edi + 0x4ec] */ r_ebx = R32((u32)(r_edi+0x4ecu));
    /* 00694e16: mov dword ptr [eax + 0x41c], ebx */ W32((u32)(r_eax+0x41cu), r_ebx);
    /* 00694e1c: mov esi, dword ptr [edi + 0x4f0] */ r_esi = R32((u32)(r_edi+0x4f0u));
    /* 00694e22: mov dword ptr [eax + 0x420], esi */ W32((u32)(r_eax+0x420u), r_esi);
    /* 00694e28: mov edx, dword ptr [edi + 0x4f4] */ r_edx = R32((u32)(r_edi+0x4f4u));
    /* 00694e2e: mov dword ptr [eax + 0x424], edx */ W32((u32)(r_eax+0x424u), r_edx);
L_00694e34:; BB(0x00694e34);
    /* 00694e34: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00694e37: add dword ptr [ebp - 0x14], 0x4f8 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x4f8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00694e3e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694e41: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694e44: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00694e47: jl 0x694d78 */ if ((fS!=fO)) goto L_00694d78;
L_00694e4d:; BB(0x00694e4d);
    /* 00694e4d: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00694e50: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00694e53: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00694e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00694e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00694e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00694e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694e63: ret  */ FN_RET(0x00694d44); r_esp += 4; return;
L_00694e64:; BB(0x00694e64);
    /* 00694e64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694e66: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00694e69: jmp 0x694df1 */ goto L_00694df1;
}

void f_00694e20(void)
{
    FN_ENTER(0x00694e20);
    goto L_00694e20;
L_00694d78:; BB(0x00694d78);
    /* 00694d78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00694d7b: mov edx, dword ptr [eax + 0x4e8] */ r_edx = R32((u32)(r_eax+0x4e8u));
    /* 00694d81: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00694d84: je 0x694d8d */ if (fZ) goto L_00694d8d;
L_00694d86:; BB(0x00694d86);
    /* 00694d86: mov eax, 1 */ r_eax = 0x1u;
    /* 00694d8b: jmp 0x694d8f */ goto L_00694d8f;
L_00694d8d:; BB(0x00694d8d);
    /* 00694d8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00694d8f:; BB(0x00694d8f);
    /* 00694d8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694d91: je 0x694e34 */ if (fZ) goto L_00694e34;
L_00694d97:; BB(0x00694d97);
    /* 00694d97: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00694d9a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00694da1: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00694da4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00694da7: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00694dac: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x694db1u); f_005caba4();
    /* 00694db1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00694db4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694db7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00694dba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694dbc: je 0x694e64 */ if (fZ) goto L_00694e64;
L_00694dc2:; BB(0x00694dc2);
    /* 00694dc2: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00694dc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00694dd0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00694dd3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00694dd6: mov ecx, eax */ r_ecx = r_eax;
    /* 00694dd8: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 00694ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694ddc: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00694dde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694ddf: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 00694de5: call 0x6862e8 */ r_esp -= 4; W32(r_esp, 0x694deau); f_006862e8();
    /* 00694dea: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00694df1:; BB(0x00694df1);
    /* 00694df1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00694df8: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00694dfb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00694dfe: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00694e01: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 00694e07: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00694e0a: mov dword ptr [eax + 0xeb4], ecx */ W32((u32)(r_eax+0xeb4u), r_ecx);
    /* 00694e10: mov ebx, dword ptr [edi + 0x4ec] */ r_ebx = R32((u32)(r_edi+0x4ecu));
    /* 00694e16: mov dword ptr [eax + 0x41c], ebx */ W32((u32)(r_eax+0x41cu), r_ebx);
    /* 00694e1c: mov esi, dword ptr [edi + 0x4f0] */ r_esi = R32((u32)(r_edi+0x4f0u));
L_00694e20:; BB(0x00694e20);
    /* 00694e20: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00694e22: mov dword ptr [eax + 0x420], esi */ W32((u32)(r_eax+0x420u), r_esi);
    /* 00694e28: mov edx, dword ptr [edi + 0x4f4] */ r_edx = R32((u32)(r_edi+0x4f4u));
    /* 00694e2e: mov dword ptr [eax + 0x424], edx */ W32((u32)(r_eax+0x424u), r_edx);
L_00694e34:; BB(0x00694e34);
    /* 00694e34: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00694e37: add dword ptr [ebp - 0x14], 0x4f8 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x4f8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00694e3e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694e41: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694e44: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00694e47: jl 0x694d78 */ if ((fS!=fO)) goto L_00694d78;
L_00694e4d:; BB(0x00694e4d);
    /* 00694e4d: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00694e50: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00694e53: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00694e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00694e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00694e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00694e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694e63: ret  */ FN_RET(0x00694e20); r_esp += 4; return;
L_00694e64:; BB(0x00694e64);
    /* 00694e64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694e66: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00694e69: jmp 0x694df1 */ goto L_00694df1;
}

void f_00694e6c(void) /* sub_694E6C */
{
    FN_ENTER(0x00694e6c);
    /* 00694e6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694e6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694e6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694e6f: mov dword ptr [0xa94230], 0x47742400 */ W32((u32)(0xa94230u), 0x47742400u);
    /* 00694e79: mov ecx, 0xa94140 */ r_ecx = 0xa94140u;
    /* 00694e7e: mov edx, 0xc */ r_edx = 0xcu;
    /* 00694e83: mov dword ptr [0xa94234], 0x3f800000 */ W32((u32)(0xa94234u), 0x3f800000u);
    /* 00694e8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694e8f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00694e91: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00694e93: mov dword ptr [0xa94238], 0x41000000 */ W32((u32)(0xa94238u), 0x41000000u);
    /* 00694e9d: mov dword ptr [0xa9423c], 0x3fc00000 */ W32((u32)(0xa9423cu), 0x3fc00000u);
L_00694ea7:; BB(0x00694ea7);
    /* 00694ea7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00694ea9: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 00694eab: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 00694eae: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00694eb1: mov dword ptr [ecx + 0xc], esi */ W32((u32)(r_ecx+0xcu), r_esi);
    /* 00694eb4: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 00694eb7: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694eba: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00694ebd: jne 0x694ea7 */ if (!fZ) goto L_00694ea7;
L_00694ebf:; BB(0x00694ebf);
    /* 00694ebf: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00694ec4: call 0x6a92e8 */ r_esp -= 4; W32(r_esp, 0x694ec9u); f_006a92e8();
    /* 00694ec9: push 0x685724 */ { u32 v = 0x685724u; r_esp -= 4; W32(r_esp, v); }
    /* 00694ece: push 0x6855dc */ { u32 v = 0x6855dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00694ed3: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00694ed5: push 0x4f8 */ { u32 v = 0x4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00694eda: push 0xa905a0 */ { u32 v = 0xa905a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00694edf: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x694ee4u); f_00858736();
    /* 00694ee4: push 0x694ef4 */ { u32 v = 0x694ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 00694ee9: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x694eeeu); f_0085909d();
    /* 00694eee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00694eef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694ef0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694ef1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694ef2: ret  */ FN_RET(0x00694e6c); r_esp += 4; return;
}

void f_00694f0c(void) /* sub_694F0C */
{
    FN_ENTER(0x00694f0c);
    /* 00694f0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694f0d: mov esi, ecx */ r_esi = r_ecx;
    /* 00694f0f: mov ecx, esi */ r_ecx = r_esi;
    /* 00694f11: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x694f16u); f_00689410();
    /* 00694f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694f18: je 0x694f47 */ if (fZ) goto L_00694f47;
L_00694f1a:; BB(0x00694f1a);
    /* 00694f1a: mov eax, dword ptr [esi + 0x524] */ r_eax = R32((u32)(r_esi+0x524u));
    /* 00694f20: mov dword ptr [esi + 0x538], 0 */ W32((u32)(r_esi+0x538u), 0x0u);
    /* 00694f2a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00694f2c: je 0x694f35 */ if (fZ) goto L_00694f35;
L_00694f2e:; BB(0x00694f2e);
    /* 00694f2e: mov eax, 1 */ r_eax = 0x1u;
    /* 00694f33: jmp 0x694f37 */ goto L_00694f37;
L_00694f35:; BB(0x00694f35);
    /* 00694f35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00694f37:; BB(0x00694f37);
    /* 00694f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694f39: je 0x694f45 */ if (fZ) goto L_00694f45;
L_00694f3b:; BB(0x00694f3b);
    /* 00694f3b: mov dword ptr [esi + 0x5ac], 0 */ W32((u32)(r_esi+0x5acu), 0x0u);
L_00694f45:; BB(0x00694f45);
    /* 00694f45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694f46: ret  */ FN_RET(0x00694f0c); r_esp += 4; return;
L_00694f47:; BB(0x00694f47);
    /* 00694f47: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00694f4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694f51: jne 0x695041 */ if (!fZ) goto L_00695041;
L_00694f57:; BB(0x00694f57);
    /* 00694f57: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x694f5cu); f_007917b8();
    /* 00694f5c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00694f5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00694f61: je 0x695041 */ if (fZ) goto L_00695041;
L_00694f67:; BB(0x00694f67);
    /* 00694f67: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00694f69: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00694f6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694f6e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x694f73u); f_007be19c();
    /* 00694f73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694f76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694f78: je 0x694f81 */ if (fZ) goto L_00694f81;
L_00694f7a:; BB(0x00694f7a);
    /* 00694f7a: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 00694f7f: jmp 0x694f86 */ goto L_00694f86;
L_00694f81:; BB(0x00694f81);
    /* 00694f81: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_00694f86:; BB(0x00694f86);
    /* 00694f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694f87: lea ecx, [esi + 0x628] */ r_ecx = (u32)(r_esi+0x628u);
    /* 00694f8d: call 0x6a7c58 */ r_esp -= 4; W32(r_esp, 0x694f92u); f_006a7c58();
    /* 00694f92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694f94: je 0x694fc7 */ if (fZ) goto L_00694fc7;
L_00694f96:; BB(0x00694f96);
    /* 00694f96: mov eax, dword ptr [esi + 0x524] */ r_eax = R32((u32)(r_esi+0x524u));
    /* 00694f9c: mov dword ptr [esi + 0x538], 1 */ W32((u32)(r_esi+0x538u), 0x1u);
    /* 00694fa6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00694fa8: je 0x694fb1 */ if (fZ) goto L_00694fb1;
L_00694faa:; BB(0x00694faa);
    /* 00694faa: mov eax, 1 */ r_eax = 0x1u;
    /* 00694faf: jmp 0x694fb3 */ goto L_00694fb3;
L_00694fb1:; BB(0x00694fb1);
    /* 00694fb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00694fb3:; BB(0x00694fb3);
    /* 00694fb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694fb5: je 0x69503a */ if (fZ) goto L_0069503a;
L_00694fbb:; BB(0x00694fbb);
    /* 00694fbb: mov dword ptr [esi + 0x5ac], 1 */ W32((u32)(r_esi+0x5acu), 0x1u);
    /* 00694fc5: jmp 0x69503a */ goto L_0069503a;
L_00694fc7:; BB(0x00694fc7);
    /* 00694fc7: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x694fccu); f_00791b48();
    /* 00694fcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694fce: je 0x69500f */ if (fZ) goto L_0069500f;
L_00694fd0:; BB(0x00694fd0);
    /* 00694fd0: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x694fd5u); f_00791b48();
    /* 00694fd5: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00694fd7: mov ecx, eax */ r_ecx = r_eax;
    /* 00694fd9: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x694fdeu); f_0078fcd4();
    /* 00694fde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694fe0: je 0x69500f */ if (fZ) goto L_0069500f;
L_00694fe2:; BB(0x00694fe2);
    /* 00694fe2: mov eax, dword ptr [esi + 0x524] */ r_eax = R32((u32)(r_esi+0x524u));
    /* 00694fe8: mov dword ptr [esi + 0x538], 1 */ W32((u32)(r_esi+0x538u), 0x1u);
    /* 00694ff2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00694ff4: je 0x694ffd */ if (fZ) goto L_00694ffd;
L_00694ff6:; BB(0x00694ff6);
    /* 00694ff6: mov eax, 1 */ r_eax = 0x1u;
    /* 00694ffb: jmp 0x694fff */ goto L_00694fff;
L_00694ffd:; BB(0x00694ffd);
    /* 00694ffd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00694fff:; BB(0x00694fff);
    /* 00694fff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695001: je 0x69503a */ if (fZ) goto L_0069503a;
L_00695003:; BB(0x00695003);
    /* 00695003: mov dword ptr [esi + 0x5ac], 1 */ W32((u32)(r_esi+0x5acu), 0x1u);
    /* 0069500d: jmp 0x69503a */ goto L_0069503a;
L_0069500f:; BB(0x0069500f);
    /* 0069500f: mov eax, dword ptr [esi + 0x524] */ r_eax = R32((u32)(r_esi+0x524u));
    /* 00695015: mov dword ptr [esi + 0x538], 0 */ W32((u32)(r_esi+0x538u), 0x0u);
    /* 0069501f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00695021: je 0x69502a */ if (fZ) goto L_0069502a;
L_00695023:; BB(0x00695023);
    /* 00695023: mov eax, 1 */ r_eax = 0x1u;
    /* 00695028: jmp 0x69502c */ goto L_0069502c;
L_0069502a:; BB(0x0069502a);
    /* 0069502a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069502c:; BB(0x0069502c);
    /* 0069502c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069502e: je 0x69503a */ if (fZ) goto L_0069503a;
L_00695030:; BB(0x00695030);
    /* 00695030: mov dword ptr [esi + 0x5ac], 0 */ W32((u32)(r_esi+0x5acu), 0x0u);
L_0069503a:; BB(0x0069503a);
    /* 0069503a: mov ecx, esi */ r_ecx = r_esi;
    /* 0069503c: call 0x695044 */ r_esp -= 4; W32(r_esp, 0x695041u); f_00695044();
L_00695041:; BB(0x00695041);
    /* 00695041: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695042: ret  */ FN_RET(0x00694f0c); r_esp += 4; return;
}

