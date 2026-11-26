#include "protos.h"

void f_00407008(void) /* sub_407008 */
{
    FN_ENTER(0x00407008);
    /* 00407008: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 0040700e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407010: je 0x40702b */ if (fZ) goto L_0040702b;
L_00407012:; BB(0x00407012);
    /* 00407012: movsx eax, byte ptr [ecx + 0x151] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x151u));
    /* 00407019: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040701c: je 0x407038 */ if (fZ) goto L_00407038;
L_0040701e:; BB(0x0040701e);
    /* 0040701e: mov eax, 4 */ r_eax = 0x4u;
    /* 00407023: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0040702a: ret  */ FN_RET(0x00407008); r_esp += 4; return;
L_0040702b:; BB(0x0040702b);
    /* 0040702b: mov eax, 3 */ r_eax = 0x3u;
    /* 00407030: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00407037: ret  */ FN_RET(0x00407008); r_esp += 4; return;
L_00407038:; BB(0x00407038);
    /* 00407038: mov eax, 5 */ r_eax = 0x5u;
    /* 0040703d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00407044: ret  */ FN_RET(0x00407008); r_esp += 4; return;
}

void f_00407048(void) /* sub_407048 */
{
    FN_ENTER(0x00407048);
    /* 00407048: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 0040704e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00407050: je 0x40706b */ if (fZ) goto L_0040706b;
L_00407052:; BB(0x00407052);
    /* 00407052: movsx eax, byte ptr [ecx + 0x151] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x151u));
    /* 00407059: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040705c: je 0x407075 */ if (fZ) goto L_00407075;
L_0040705e:; BB(0x0040705e);
    /* 0040705e: mov eax, 1 */ r_eax = 0x1u;
    /* 00407063: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0040706a: ret  */ FN_RET(0x00407048); r_esp += 4; return;
L_0040706b:; BB(0x0040706b);
    /* 0040706b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040706d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00407074: ret  */ FN_RET(0x00407048); r_esp += 4; return;
L_00407075:; BB(0x00407075);
    /* 00407075: mov eax, 2 */ r_eax = 0x2u;
    /* 0040707a: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00407081: ret  */ FN_RET(0x00407048); r_esp += 4; return;
}

void f_00407084(void) /* sub_407084 */
{
    FN_ENTER(0x00407084);
    /* 00407084: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 0040708a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040708d: je 0x407090 */ if (fZ) goto L_00407090;
L_0040708f:; BB(0x0040708f);
    /* 0040708f: ret  */ FN_RET(0x00407084); r_esp += 4; return;
L_00407090:; BB(0x00407090);
    /* 00407090: call 0x407098 */ r_esp -= 4; W32(r_esp, 0x407095u); f_00407098();
    /* 00407095: ret  */ FN_RET(0x00407084); r_esp += 4; return;
}

void f_00407098(void) /* sub_407098 */
{
    FN_ENTER(0x00407098);
    /* 00407098: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00407099: mov edi, ecx */ r_edi = r_ecx;
    /* 0040709b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4070a0u); f_0082d7b0();
    /* 004070a0: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 004070a3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4070a8u); f_0082d838();
    /* 004070a8: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 004070ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004070ad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4070b2u); f_0082d8bc();
    /* 004070b2: mov ecx, dword ptr [edi + 0x190] */ r_ecx = R32((u32)(r_edi+0x190u));
    /* 004070b8: add ecx, 0x4b0 */ {  u32 a = r_ecx; u32 b = 0x4b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004070be: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4070c3u); f_00829cc8();
    /* 004070c3: mov eax, dword ptr [edi + 0x190] */ r_eax = R32((u32)(r_edi+0x190u));
    /* 004070c9: push dword ptr [eax + 0x4c4] */ { u32 v = R32((u32)(r_eax+0x4c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004070cf: mov ecx, edi */ r_ecx = r_edi;
    /* 004070d1: call 0x4071c4 */ r_esp -= 4; W32(r_esp, 0x4070d6u); f_004071c4();
    /* 004070d6: mov ecx, dword ptr [edi + 0xe0] */ r_ecx = R32((u32)(r_edi+0xe0u));
    /* 004070dc: add ecx, 0xe80 */ {  u32 a = r_ecx; u32 b = 0xe80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004070e2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4070e7u); f_0082d990();
    /* 004070e7: mov ecx, dword ptr [edi + 0x190] */ r_ecx = R32((u32)(r_edi+0x190u));
    /* 004070ed: add ecx, 0x344 */ {  u32 a = r_ecx; u32 b = 0x344u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004070f3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4070f8u); f_00829cc8();
    /* 004070f8: mov eax, dword ptr [edi + 0x190] */ r_eax = R32((u32)(r_edi+0x190u));
    /* 004070fe: push dword ptr [eax + 0x4c0] */ { u32 v = R32((u32)(r_eax+0x4c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407104: call 0x6926e8 */ r_esp -= 4; W32(r_esp, 0x407109u); f_006926e8();
    /* 00407109: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040710a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x40710fu); f_0082da80();
    /* 0040710f: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
    /* 00407115: mov eax, dword ptr [edx + 0x4bc] */ r_eax = R32((u32)(r_edx+0x4bcu));
    /* 0040711b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040711d: je 0x407168 */ if (fZ) goto L_00407168;
L_0040711f:; BB(0x0040711f);
    /* 0040711f: mov ecx, dword ptr [edi + 0xe0] */ r_ecx = R32((u32)(r_edi+0xe0u));
    /* 00407125: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040712b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x407130u); f_0082d990();
    /* 00407130: mov ecx, dword ptr [edi + 0x190] */ r_ecx = R32((u32)(r_edi+0x190u));
    /* 00407136: add ecx, 0x1d8 */ {  u32 a = r_ecx; u32 b = 0x1d8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040713c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x407141u); f_00829cc8();
    /* 00407141: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x407146u); f_004e71a8();
    /* 00407146: mov eax, dword ptr [edi + 0x190] */ r_eax = R32((u32)(r_edi+0x190u));
    /* 0040714c: push dword ptr [eax + 0x4bc] */ { u32 v = R32((u32)(r_eax+0x4bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00407152: call 0x6926e8 */ r_esp -= 4; W32(r_esp, 0x407157u); f_006926e8();
    /* 00407157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407158: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x40715du); f_004e71c8();
    /* 0040715d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x407162u); f_0082da80();
    /* 00407162: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
L_00407168:; BB(0x00407168);
    /* 00407168: mov eax, dword ptr [edx + 0x4b8] */ r_eax = R32((u32)(r_edx+0x4b8u));
    /* 0040716e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407170: je 0x4071bd */ if (fZ) goto L_004071bd;
L_00407172:; BB(0x00407172);
    /* 00407172: mov ecx, dword ptr [edi + 0xe0] */ r_ecx = R32((u32)(r_edi+0xe0u));
    /* 00407178: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040717e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x407183u); f_0082d990();
    /* 00407183: mov ecx, dword ptr [edi + 0x190] */ r_ecx = R32((u32)(r_edi+0x190u));
    /* 00407189: add ecx, 0x1d8 */ {  u32 a = r_ecx; u32 b = 0x1d8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040718f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x407194u); f_00829cc8();
    /* 00407194: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x407199u); f_004e71a8();
    /* 00407199: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
    /* 0040719f: lea eax, [edi + 0x120] */ r_eax = (u32)(r_edi+0x120u);
    /* 004071a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004071a6: mov ecx, edi */ r_ecx = r_edi;
    /* 004071a8: push dword ptr [edx + 0x4b8] */ { u32 v = R32((u32)(r_edx+0x4b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004071ae: call 0x4071e8 */ r_esp -= 4; W32(r_esp, 0x4071b3u); f_004071e8();
    /* 004071b3: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x4071b8u); f_004e71c8();
    /* 004071b8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4071bdu); f_0082da80();
L_004071bd:; BB(0x004071bd);
    /* 004071bd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4071c2u); f_0082da80();
    /* 004071c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004071c3: ret  */ FN_RET(0x00407098); r_esp += 4; return;
}

void f_004071c4(void) /* sub_4071C4 */
{
    FN_ENTER(0x004071c4);
    /* 004071c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004071c8: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 004071cb: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 004071d1: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 004071d5: or edx, 0xffff0080 */ {  u32 a = r_edx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004071db: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 004071df: call 0x7aa8c8 */ r_esp -= 4; W32(r_esp, 0x4071e4u); f_007aa8c8();
    /* 004071e4: ret 4 */ FN_RET(0x004071c4); r_esp += 8; return;
}

void f_004071e8(void) /* sub_4071E8 */
{
    FN_ENTER(0x004071e8);
    /* 004071e8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004071eb: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004071ef: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004071f4: mov ecx, dword ptr [0xaf0360] */ r_ecx = R32((u32)(0xaf0360u));
    /* 004071fa: fld dword ptr [0x8f89b4] */ FPUSH(R_F32((u32)(0x8f89b4u)));
    /* 00407200: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00407207: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0040720c: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040720f: mov dword ptr [0xaab504], ecx */ W32((u32)(0xaab504u), r_ecx);
    /* 00407215: mov ecx, dword ptr [0xaf0364] */ r_ecx = R32((u32)(0xaf0364u));
    /* 0040721b: mov dword ptr [0xaab500], ecx */ W32((u32)(0xaab500u), r_ecx);
    /* 00407221: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00407226: movsx eax, word ptr [edx + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x42u));
    /* 0040722a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040722e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00407232: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00407234: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00407238: movsx eax, word ptr [edx + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x44u));
    /* 0040723c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00407240: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00407244: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00407246: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040724a: movsx eax, word ptr [edx + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x46u));
    /* 0040724e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00407252: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00407256: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00407259: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040725b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0040725f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407260: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x407265u); f_0082d710();
    /* 00407265: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407269: call 0x6926e8 */ r_esp -= 4; W32(r_esp, 0x40726eu); f_006926e8();
    /* 0040726e: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00407273: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00407279: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 0040727f: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00407284: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0040728a: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00407290: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407293: ret 8 */ FN_RET(0x004071e8); r_esp += 12; return;
}

void f_00407298(void) /* sub_407298 */
{
    FN_ENTER(0x00407298);
    /* 00407298: mov dword ptr [0xa3abc8], 0x3f800000 */ W32((u32)(0xa3abc8u), 0x3f800000u);
    /* 004072a2: mov dword ptr [0xa3abcc], 0x41000000 */ W32((u32)(0xa3abccu), 0x41000000u);
    /* 004072ac: mov dword ptr [0xa3abd0], 0x3fc00000 */ W32((u32)(0xa3abd0u), 0x3fc00000u);
    /* 004072b6: ret  */ FN_RET(0x00407298); r_esp += 4; return;
}

void f_004072b8(void) /* sub_4072B8 */
{
    FN_ENTER(0x004072b8);
    /* 004072b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004072b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004072bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004072bd: push 0x8cc274 */ { u32 v = 0x8cc274u; r_esp -= 4; W32(r_esp, v); }
    /* 004072c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004072c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004072c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004072d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004072d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004072d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004072d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004072dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004072df: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004072e4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004072eb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4072f0u); f_008581c5();
    /* 004072f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004072f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004072f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004072f6: je 0x407337 */ if (fZ) goto L_00407337;
L_004072f8:; BB(0x004072f8);
    /* 004072f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004072ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407306: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407309: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040730b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040730c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040730d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040730e: push 0x9b1308 */ { u32 v = 0x9b1308u; r_esp -= 4; W32(r_esp, v); }
    /* 00407313: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407315: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x40731au); f_005b7a84();
    /* 0040731a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040731d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00407324:; BB(0x00407324);
    /* 00407324: mov dword ptr [0xa3abe4], eax */ W32((u32)(0xa3abe4u), r_eax);
    /* 00407329: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040732c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00407333: mov esp, ebp */ r_esp = r_ebp;
    /* 00407335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407336: ret  */ FN_RET(0x004072b8); r_esp += 4; return;
L_00407337:; BB(0x00407337);
    /* 00407337: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407339: jmp 0x407324 */ goto L_00407324;
}

void f_0040733c(void) /* sub_40733C */
{
    FN_ENTER(0x0040733c);
    /* 0040733c: mov eax, dword ptr [0xa3abe4] */ r_eax = R32((u32)(0xa3abe4u));
    /* 00407341: mov dword ptr [ecx + 0xd8], 0x9a2ec0 */ W32((u32)(r_ecx+0xd8u), 0x9a2ec0u);
    /* 0040734b: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00407351: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00407357: mov edx, dword ptr [ecx + 0x154] */ r_edx = R32((u32)(r_ecx+0x154u));
    /* 0040735d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040735f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00407362: je 0x407383 */ if (fZ) goto L_00407383;
L_00407364:; BB(0x00407364);
    /* 00407364: movsx edx, byte ptr [ecx + 0x151] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x151u));
    /* 0040736b: mov eax, 1 */ r_eax = 0x1u;
    /* 00407370: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407373: je 0x407393 */ if (fZ) goto L_00407393;
L_00407375:; BB(0x00407375);
    /* 00407375: mov edx, 1 */ r_edx = 0x1u;
    /* 0040737a: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00407381: jmp 0x40738c */ goto L_0040738c;
L_00407383:; BB(0x00407383);
    /* 00407383: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00407385: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
L_0040738c:; BB(0x0040738c);
    /* 0040738c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040738d: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x407392u); f_007aa4c8();
    /* 00407392: ret  */ FN_RET(0x0040733c); r_esp += 4; return;
L_00407393:; BB(0x00407393);
    /* 00407393: mov eax, 2 */ r_eax = 0x2u;
    /* 00407398: mov edx, 2 */ r_edx = 0x2u;
    /* 0040739d: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 004073a4: jmp 0x40738c */ goto L_0040738c;
}

void f_004073a8(void) /* sub_4073A8 */
{
    FN_ENTER(0x004073a8);
    /* 004073a8: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004073ad: mov dword ptr [0xa3ac90], eax */ W32((u32)(0xa3ac90u), r_eax);
    /* 004073b2: mov dword ptr [0xa3aca0], eax */ W32((u32)(0xa3aca0u), r_eax);
    /* 004073b7: mov dword ptr [0xa3ac94], eax */ W32((u32)(0xa3ac94u), r_eax);
    /* 004073bc: mov dword ptr [0xa3aca4], eax */ W32((u32)(0xa3aca4u), r_eax);
    /* 004073c1: mov dword ptr [0xa3ac98], eax */ W32((u32)(0xa3ac98u), r_eax);
    /* 004073c6: mov dword ptr [0xa3aca8], eax */ W32((u32)(0xa3aca8u), r_eax);
    /* 004073cb: mov dword ptr [0xa3ac9c], eax */ W32((u32)(0xa3ac9cu), r_eax);
    /* 004073d0: mov dword ptr [0xa3acac], eax */ W32((u32)(0xa3acacu), r_eax);
    /* 004073d5: call 0x4073f4 */ r_esp -= 4; W32(r_esp, 0x4073dau); f_004073f4();
    /* 004073da: mov dword ptr [0xa3acb0], 0 */ W32((u32)(0xa3acb0u), 0x0u);
    /* 004073e4: ret  */ FN_RET(0x004073a8); r_esp += 4; return;
}

void f_004073e8(void) /* sub_4073E8 */
{
    FN_ENTER(0x004073e8);
    /* 004073e8: mov dword ptr [0xa3ac78], 0x41800000 */ W32((u32)(0xa3ac78u), 0x41800000u);
    /* 004073f2: ret  */ FN_RET(0x004073e8); r_esp += 4; return;
}

void f_004073f4(void) /* sub_4073F4 */
{
    FN_ENTER(0x004073f4);
    /* 004073f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004073f6:; BB(0x004073f6);
    /* 004073f6: mov edx, dword ptr [eax + 0x8f8c40] */ r_edx = R32((u32)(r_eax+0x8f8c40u));
    /* 004073fc: mov ecx, dword ptr [eax + 0x8f8c44] */ r_ecx = R32((u32)(r_eax+0x8f8c44u));
    /* 00407402: mov dword ptr [eax + 0xa3ac00], edx */ W32((u32)(r_eax+0xa3ac00u), r_edx);
    /* 00407408: mov edx, dword ptr [eax + 0x8f8c48] */ r_edx = R32((u32)(r_eax+0x8f8c48u));
    /* 0040740e: mov dword ptr [eax + 0xa3ac04], ecx */ W32((u32)(r_eax+0xa3ac04u), r_ecx);
    /* 00407414: mov dword ptr [eax + 0xa3ac08], edx */ W32((u32)(r_eax+0xa3ac08u), r_edx);
    /* 0040741a: mov edx, dword ptr [eax + 0x8f8c4c] */ r_edx = R32((u32)(r_eax+0x8f8c4cu));
    /* 00407420: mov dword ptr [eax + 0xa3ac0c], edx */ W32((u32)(r_eax+0xa3ac0cu), r_edx);
    /* 00407426: mov edx, dword ptr [eax + 0x8f8c50] */ r_edx = R32((u32)(r_eax+0x8f8c50u));
    /* 0040742c: mov dword ptr [eax + 0xa3ac10], edx */ W32((u32)(r_eax+0xa3ac10u), r_edx);
    /* 00407432: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407435: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407438: jb 0x4073f6 */ if (fC) goto L_004073f6;
L_0040743a:; BB(0x0040743a);
    /* 0040743a: ret  */ FN_RET(0x004073f4); r_esp += 4; return;
}

void f_0040743c(void) /* sub_40743C */
{
    FN_ENTER(0x0040743c);
    /* 0040743c: mov ecx, dword ptr [0xa3ace8] */ r_ecx = R32((u32)(0xa3ace8u));
    /* 00407442: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407444: je 0x407455 */ if (fZ) goto L_00407455;
L_00407446:; BB(0x00407446);
    /* 00407446: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x40744bu); f_00829de0();
    /* 0040744b: mov dword ptr [0xa3ace8], 0 */ W32((u32)(0xa3ace8u), 0x0u);
L_00407455:; BB(0x00407455);
    /* 00407455: ret  */ FN_RET(0x0040743c); r_esp += 4; return;
}

void f_00407458(void) /* sub_407458 */
{
    FN_ENTER(0x00407458);
    /* 00407458: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040745b: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x407460u); f_007932e8();
    /* 00407460: mov dword ptr [esp], 0x8f8e48 */ W32((u32)(r_esp), 0x8f8e48u);
    /* 00407467: mov edx, 0x8f8e38 */ r_edx = 0x8f8e38u;
    /* 0040746c: mov eax, 0x8f8e54 */ r_eax = 0x8f8e54u;
    /* 00407471: mov ecx, 0x9a2f84 */ r_ecx = 0x9a2f84u;
    /* 00407476: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0040747a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0040747e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00407482: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00407486: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0040748a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0040748e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00407492: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 00407498: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0040749c: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 004074a0: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 004074a4: mov eax, 0x9a2f70 */ r_eax = 0x9a2f70u;
    /* 004074a9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004074ad: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004074b1: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004074b5: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004074b9: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004074bd: mov eax, dword ptr [esp + edx*4 + 0x20] */ r_eax = R32((u32)(r_esp+r_edx*4+0x20u));
    /* 004074c1: mov dword ptr [0xa3ace8], eax */ W32((u32)(0xa3ace8u), r_eax);
    /* 004074c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004074c7: push dword ptr [esp + edx*4 + 4] */ { u32 v = R32((u32)(r_esp+r_edx*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004074cb: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x4074d0u); f_0081a934();
    /* 004074d0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004074d3: ret  */ FN_RET(0x00407458); r_esp += 4; return;
}

void f_004074d4(void) /* sub_4074D4 */
{
    FN_ENTER(0x004074d4);
    /* 004074d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004074d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004074d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004074d9: call 0x4074f8 */ r_esp -= 4; W32(r_esp, 0x4074deu); f_004074f8();
    /* 004074de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004074e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004074e4: jne 0x4074ea */ if (!fZ) goto L_004074ea;
L_004074e6:; BB(0x004074e6);
    /* 004074e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004074e7: ret 4 */ FN_RET(0x004074d4); r_esp += 8; return;
L_004074ea:; BB(0x004074ea);
    /* 004074ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004074eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4074f0u); f_005c2f74();
    /* 004074f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004074f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004074f2: ret 4 */ FN_RET(0x004074d4); r_esp += 8; return;
}

void f_004074f8(void) /* sub_4074F8 */
{
    FN_ENTER(0x004074f8);
    /* 004074f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004074f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004074fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004074fd: push 0x8cc290 */ { u32 v = 0x8cc290u; r_esp -= 4; W32(r_esp, v); }
    /* 00407502: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407509: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00407510: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407513: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00407516: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00407519: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040751c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040751f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00407522: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407525: mov dword ptr [ecx], 0xaf23b0 */ W32((u32)(r_ecx), 0xaf23b0u);
    /* 0040752b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040752d: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 00407532: mov dword ptr [0xa3acf0], eax */ W32((u32)(0xa3acf0u), r_eax);
    /* 00407537: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040753e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x407543u); f_008171e8();
    /* 00407543: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407546: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040754d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040754f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407550: ret  */ FN_RET(0x004074f8); r_esp += 4; return;
}

void f_00407554(void) /* sub_407554 */
{
    FN_ENTER(0x00407554);
    /* 00407554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407555: mov ebp, esp */ r_ebp = r_esp;
    /* 00407557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407559: push 0x8cc2b8 */ { u32 v = 0x8cc2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040755e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407565: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040756c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040756f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00407572: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00407575: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00407578: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040757b: mov eax, dword ptr [0xa3acf0] */ r_eax = R32((u32)(0xa3acf0u));
    /* 00407580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407582: je 0x407594 */ if (fZ) goto L_00407594;
L_00407584:; BB(0x00407584);
    /* 00407584: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407586: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407589: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00407590: mov esp, ebp */ r_esp = r_ebp;
    /* 00407592: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407593: ret  */ FN_RET(0x00407554); r_esp += 4; return;
L_00407594:; BB(0x00407594);
    /* 00407594: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407599: je 0x4075b8 */ if (fZ) goto L_004075b8;
L_0040759b:; BB(0x0040759b);
    /* 0040759b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040759e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004075a0: jl 0x4075b8 */ if ((fS!=fO)) goto L_004075b8;
L_004075a2:; BB(0x004075a2);
    /* 004075a2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004075a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004075a7: jg 0x4075b8 */ if ((!fZ&&fS==fO)) goto L_004075b8;
L_004075a9:; BB(0x004075a9);
    /* 004075a9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004075ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004075ae: jl 0x4075b8 */ if ((fS!=fO)) goto L_004075b8;
L_004075b0:; BB(0x004075b0);
    /* 004075b0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004075b3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004075b6: jl 0x4075c8 */ if ((fS!=fO)) goto L_004075c8;
L_004075b8:; BB(0x004075b8);
    /* 004075b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004075ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004075bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004075c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004075c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004075c7: ret  */ FN_RET(0x00407554); r_esp += 4; return;
L_004075c8:; BB(0x004075c8);
    /* 004075c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004075cf: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004075d1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4075d6u); f_005caba4();
    /* 004075d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004075d7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004075da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004075dc: je 0x40761b */ if (fZ) goto L_0040761b;
L_004075de:; BB(0x004075de);
    /* 004075de: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004075e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004075ec: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004075ef: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004075f2: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 004075f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004075f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004075f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004075fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004075fb: call 0x407620 */ r_esp -= 4; W32(r_esp, 0x407600u); f_00407620();
    /* 00407600: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407603: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040760a:; BB(0x0040760a);
    /* 0040760a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040760d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407610: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00407617: mov esp, ebp */ r_esp = r_ebp;
    /* 00407619: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040761a: ret  */ FN_RET(0x00407554); r_esp += 4; return;
L_0040761b:; BB(0x0040761b);
    /* 0040761b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040761d: jmp 0x40760a */ goto L_0040760a;
}

void f_00407620(void) /* sub_407620 */
{
    FN_ENTER(0x00407620);
    /* 00407620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407621: mov ebp, esp */ r_ebp = r_esp;
    /* 00407623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407625: push 0x8cc2d4 */ { u32 v = 0x8cc2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040762a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407631: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00407638: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040763b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040763e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00407641: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00407644: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00407647: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040764a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040764d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00407650: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00407653: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00407656: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00407659: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40765eu); f_008193cc();
    /* 0040765e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407665: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00407668: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040766b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040766e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00407671: mov dword ptr [ecx + 0x28], ebx */ W32((u32)(r_ecx+0x28u), r_ebx);
    /* 00407674: mov dword ptr [ecx], 0xaf23b0 */ W32((u32)(r_ecx), 0xaf23b0u);
    /* 0040767a: mov eax, dword ptr [0x9a3000] */ r_eax = R32((u32)(0x9a3000u));
    /* 0040767f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00407682: mov dword ptr [0xa3acf0], ecx */ W32((u32)(0xa3acf0u), r_ecx);
    /* 00407688: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 00407692: call 0x407ac4 */ r_esp -= 4; W32(r_esp, 0x407697u); f_00407ac4();
    /* 00407697: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040769a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040769d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004076a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004076a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004076a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004076aa: ret 0xc */ FN_RET(0x00407620); r_esp += 16; return;
}

void f_004076b0(void) /* sub_4076B0 */
{
    FN_ENTER(0x004076b0);
    /* 004076b0: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004076b3: ret  */ FN_RET(0x004076b0); r_esp += 4; return;
}

void f_004076b4(void) /* sub_4076B4 */
{
    FN_ENTER(0x004076b4);
    /* 004076b4: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004076b7: mov eax, dword ptr [eax*8 + 0x9a2fa4] */ r_eax = R32((u32)(r_eax*8+0x9a2fa4u));
    /* 004076be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004076c0: je 0x4076c4 */ if (fZ) goto L_004076c4;
L_004076c2:; BB(0x004076c2);
    /* 004076c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4076c4u); call_ind(t); }
L_004076c4:; BB(0x004076c4);
    /* 004076c4: ret  */ FN_RET(0x004076b4); r_esp += 4; return;
}

void f_004076c8(void) /* sub_4076C8 */
{
    FN_ENTER(0x004076c8);
    /* 004076c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004076c9: mov esi, ecx */ r_esi = r_ecx;
    /* 004076cb: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x4076d0u); f_00407734();
    /* 004076d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004076d2: je 0x4076e0 */ if (fZ) goto L_004076e0;
L_004076d4:; BB(0x004076d4);
    /* 004076d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004076d6: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x4076dbu); f_0082c204();
    /* 004076db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004076dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004076de: jne 0x4076e2 */ if (!fZ) goto L_004076e2;
L_004076e0:; BB(0x004076e0);
    /* 004076e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004076e1: ret  */ FN_RET(0x004076c8); r_esp += 4; return;
L_004076e2:; BB(0x004076e2);
    /* 004076e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004076e4: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x4076e9u); f_007083d4();
    /* 004076e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004076ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004076ec: je 0x407728 */ if (fZ) goto L_00407728;
L_004076ee:; BB(0x004076ee);
    /* 004076ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004076f0: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x4076f5u); f_0082c1e0();
    /* 004076f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004076f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004076f8: jne 0x407728 */ if (!fZ) goto L_00407728;
L_004076fa:; BB(0x004076fa);
    /* 004076fa: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004076fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004076ff: jne 0x40771f */ if (!fZ) goto L_0040771f;
L_00407701:; BB(0x00407701);
    /* 00407701: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00407704: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407707: je 0x40771d */ if (fZ) goto L_0040771d;
L_00407709:; BB(0x00407709);
    /* 00407709: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
    /* 00407710: mov eax, dword ptr [0x9a2fa8] */ r_eax = R32((u32)(0x9a2fa8u));
    /* 00407715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407717: je 0x40771d */ if (fZ) goto L_0040771d;
L_00407719:; BB(0x00407719);
    /* 00407719: mov ecx, esi */ r_ecx = r_esi;
    /* 0040771b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40771du); call_ind(t); }
L_0040771d:; BB(0x0040771d);
    /* 0040771d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040771e: ret  */ FN_RET(0x004076c8); r_esp += 4; return;
L_0040771f:; BB(0x0040771f);
    /* 0040771f: mov ecx, esi */ r_ecx = r_esi;
    /* 00407721: call 0x407748 */ r_esp -= 4; W32(r_esp, 0x407726u); f_00407748();
    /* 00407726: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407727: ret  */ FN_RET(0x004076c8); r_esp += 4; return;
L_00407728:; BB(0x00407728);
    /* 00407728: mov ecx, esi */ r_ecx = r_esi;
    /* 0040772a: call 0x407748 */ r_esp -= 4; W32(r_esp, 0x40772fu); f_00407748();
    /* 0040772f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407730: ret  */ FN_RET(0x004076c8); r_esp += 4; return;
}

void f_00407734(void) /* sub_407734 */
{
    FN_ENTER(0x00407734);
    /* 00407734: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407736: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40773bu); f_006dc358();
    /* 0040773b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040773d: mov eax, 0 */ r_eax = 0x0u;
    /* 00407742: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00407745: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407746: ret  */ FN_RET(0x00407734); r_esp += 4; return;
}

void f_00407748(void) /* sub_407748 */
{
    FN_ENTER(0x00407748);
    /* 00407748: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0040774b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040774e: mov dword ptr [ecx + 0x20], 0xffffffff */ W32((u32)(r_ecx+0x20u), 0xffffffffu);
    /* 00407755: je 0x407769 */ if (fZ) goto L_00407769;
L_00407757:; BB(0x00407757);
    /* 00407757: mov dword ptr [ecx + 0x1c], 0xb */ W32((u32)(r_ecx+0x1cu), 0xbu);
    /* 0040775e: mov eax, dword ptr [0x9a2ff8] */ r_eax = R32((u32)(0x9a2ff8u));
    /* 00407763: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407765: je 0x407769 */ if (fZ) goto L_00407769;
L_00407767:; BB(0x00407767);
    /* 00407767: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407769u); call_ind(t); }
L_00407769:; BB(0x00407769);
    /* 00407769: ret  */ FN_RET(0x00407748); r_esp += 4; return;
}

void f_0040776c(void) /* sub_40776C */
{
    FN_ENTER(0x0040776c);
    /* 0040776c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040776d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040776e: mov esi, ecx */ r_esi = r_ecx;
    /* 00407770: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407773: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407778u); f_0061cdb0();
    /* 00407778: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407779: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x40777eu); f_006c44ac();
    /* 0040777e: mov ebx, eax */ r_ebx = r_eax;
    /* 00407780: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407781: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407783: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x407788u); f_0082c198();
    /* 00407788: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040778b: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407790: jne 0x4077b1 */ if (!fZ) goto L_004077b1;
L_00407792:; BB(0x00407792);
    /* 00407792: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00407795: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407798: je 0x4077ae */ if (fZ) goto L_004077ae;
L_0040779a:; BB(0x0040779a);
    /* 0040779a: mov dword ptr [esi + 0x1c], 3 */ W32((u32)(r_esi+0x1cu), 0x3u);
    /* 004077a1: mov eax, dword ptr [0x9a2fb8] */ r_eax = R32((u32)(0x9a2fb8u));
    /* 004077a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004077a8: je 0x4077ae */ if (fZ) goto L_004077ae;
L_004077aa:; BB(0x004077aa);
    /* 004077aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004077ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4077aeu); call_ind(t); }
L_004077ae:; BB(0x004077ae);
    /* 004077ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004077af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004077b0: ret  */ FN_RET(0x0040776c); r_esp += 4; return;
L_004077b1:; BB(0x004077b1);
    /* 004077b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004077b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004077b4: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x4077b9u); f_0082c21c();
    /* 004077b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004077bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004077be: jne 0x4077dc */ if (!fZ) goto L_004077dc;
L_004077c0:; BB(0x004077c0);
    /* 004077c0: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004077c3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004077c6: je 0x4077dc */ if (fZ) goto L_004077dc;
L_004077c8:; BB(0x004077c8);
    /* 004077c8: mov dword ptr [esi + 0x1c], 2 */ W32((u32)(r_esi+0x1cu), 0x2u);
    /* 004077cf: mov eax, dword ptr [0x9a2fb0] */ r_eax = R32((u32)(0x9a2fb0u));
    /* 004077d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004077d6: je 0x4077dc */ if (fZ) goto L_004077dc;
L_004077d8:; BB(0x004077d8);
    /* 004077d8: mov ecx, esi */ r_ecx = r_esi;
    /* 004077da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4077dcu); call_ind(t); }
L_004077dc:; BB(0x004077dc);
    /* 004077dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004077dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004077de: ret  */ FN_RET(0x0040776c); r_esp += 4; return;
}

void f_004077e0(void) /* sub_4077E0 */
{
    FN_ENTER(0x004077e0);
    /* 004077e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004077e1: mov edi, ecx */ r_edi = r_ecx;
    /* 004077e3: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x4077e8u); f_00407734();
    /* 004077e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004077ea: jne 0x4077ee */ if (!fZ) goto L_004077ee;
L_004077ec:; BB(0x004077ec);
    /* 004077ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004077ed: ret  */ FN_RET(0x004077e0); r_esp += 4; return;
L_004077ee:; BB(0x004077ee);
    /* 004077ee: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004077f1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004077f4: je 0x40780a */ if (fZ) goto L_0040780a;
L_004077f6:; BB(0x004077f6);
    /* 004077f6: mov dword ptr [edi + 0x1c], 3 */ W32((u32)(r_edi+0x1cu), 0x3u);
    /* 004077fd: mov eax, dword ptr [0x9a2fb8] */ r_eax = R32((u32)(0x9a2fb8u));
    /* 00407802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407804: je 0x40780a */ if (fZ) goto L_0040780a;
L_00407806:; BB(0x00407806);
    /* 00407806: mov ecx, edi */ r_ecx = r_edi;
    /* 00407808: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40780au); call_ind(t); }
L_0040780a:; BB(0x0040780a);
    /* 0040780a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040780b: ret  */ FN_RET(0x004077e0); r_esp += 4; return;
}

void f_0040780c(void) /* sub_40780C */
{
    FN_ENTER(0x0040780c);
    /* 0040780c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040780d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040780e: mov esi, ecx */ r_esi = r_ecx;
    /* 00407810: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407813: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407818u); f_0061cdb0();
    /* 00407818: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407819: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x40781eu); f_006c44b4();
    /* 0040781e: mov ebx, eax */ r_ebx = r_eax;
    /* 00407820: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407823: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x407828u); f_0082c198();
    /* 00407828: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040782b: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407830: jne 0x407851 */ if (!fZ) goto L_00407851;
L_00407832:; BB(0x00407832);
    /* 00407832: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00407835: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407838: je 0x40784e */ if (fZ) goto L_0040784e;
L_0040783a:; BB(0x0040783a);
    /* 0040783a: mov dword ptr [esi + 0x1c], 5 */ W32((u32)(r_esi+0x1cu), 0x5u);
    /* 00407841: mov eax, dword ptr [0x9a2fc8] */ r_eax = R32((u32)(0x9a2fc8u));
    /* 00407846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407848: je 0x40784e */ if (fZ) goto L_0040784e;
L_0040784a:; BB(0x0040784a);
    /* 0040784a: mov ecx, esi */ r_ecx = r_esi;
    /* 0040784c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40784eu); call_ind(t); }
L_0040784e:; BB(0x0040784e);
    /* 0040784e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040784f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407850: ret  */ FN_RET(0x0040780c); r_esp += 4; return;
L_00407851:; BB(0x00407851);
    /* 00407851: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407852: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407854: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x407859u); f_0082c21c();
    /* 00407859: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040785c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040785e: jne 0x40787c */ if (!fZ) goto L_0040787c;
L_00407860:; BB(0x00407860);
    /* 00407860: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00407863: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407866: je 0x40787c */ if (fZ) goto L_0040787c;
L_00407868:; BB(0x00407868);
    /* 00407868: mov dword ptr [esi + 0x1c], 4 */ W32((u32)(r_esi+0x1cu), 0x4u);
    /* 0040786f: mov eax, dword ptr [0x9a2fc0] */ r_eax = R32((u32)(0x9a2fc0u));
    /* 00407874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407876: je 0x40787c */ if (fZ) goto L_0040787c;
L_00407878:; BB(0x00407878);
    /* 00407878: mov ecx, esi */ r_ecx = r_esi;
    /* 0040787a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40787cu); call_ind(t); }
L_0040787c:; BB(0x0040787c);
    /* 0040787c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040787d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040787e: ret  */ FN_RET(0x0040780c); r_esp += 4; return;
}

void f_00407880(void) /* sub_407880 */
{
    FN_ENTER(0x00407880);
    /* 00407880: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00407881: mov edi, ecx */ r_edi = r_ecx;
    /* 00407883: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x407888u); f_00407734();
    /* 00407888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040788a: jne 0x40788e */ if (!fZ) goto L_0040788e;
L_0040788c:; BB(0x0040788c);
    /* 0040788c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040788d: ret  */ FN_RET(0x00407880); r_esp += 4; return;
L_0040788e:; BB(0x0040788e);
    /* 0040788e: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00407891: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407894: je 0x4078aa */ if (fZ) goto L_004078aa;
L_00407896:; BB(0x00407896);
    /* 00407896: mov dword ptr [edi + 0x1c], 5 */ W32((u32)(r_edi+0x1cu), 0x5u);
    /* 0040789d: mov eax, dword ptr [0x9a2fc8] */ r_eax = R32((u32)(0x9a2fc8u));
    /* 004078a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004078a4: je 0x4078aa */ if (fZ) goto L_004078aa;
L_004078a6:; BB(0x004078a6);
    /* 004078a6: mov ecx, edi */ r_ecx = r_edi;
    /* 004078a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4078aau); call_ind(t); }
L_004078aa:; BB(0x004078aa);
    /* 004078aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004078ab: ret  */ FN_RET(0x00407880); r_esp += 4; return;
}

void f_004078ac(void) /* sub_4078AC */
{
    FN_ENTER(0x004078ac);
    /* 004078ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004078ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004078ae: mov esi, ecx */ r_esi = r_ecx;
    /* 004078b0: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004078b3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4078b8u); f_0061cdb0();
    /* 004078b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004078b9: call 0x782db4 */ r_esp -= 4; W32(r_esp, 0x4078beu); f_00782db4();
    /* 004078be: mov ebx, eax */ r_ebx = r_eax;
    /* 004078c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004078c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004078c3: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4078c8u); f_0082c198();
    /* 004078c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004078cb: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004078d0: jne 0x4078f1 */ if (!fZ) goto L_004078f1;
L_004078d2:; BB(0x004078d2);
    /* 004078d2: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004078d5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004078d8: je 0x4078ee */ if (fZ) goto L_004078ee;
L_004078da:; BB(0x004078da);
    /* 004078da: mov dword ptr [esi + 0x1c], 7 */ W32((u32)(r_esi+0x1cu), 0x7u);
    /* 004078e1: mov eax, dword ptr [0x9a2fd8] */ r_eax = R32((u32)(0x9a2fd8u));
    /* 004078e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004078e8: je 0x4078ee */ if (fZ) goto L_004078ee;
L_004078ea:; BB(0x004078ea);
    /* 004078ea: mov ecx, esi */ r_ecx = r_esi;
    /* 004078ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4078eeu); call_ind(t); }
L_004078ee:; BB(0x004078ee);
    /* 004078ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004078ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004078f0: ret  */ FN_RET(0x004078ac); r_esp += 4; return;
L_004078f1:; BB(0x004078f1);
    /* 004078f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004078f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004078f4: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x4078f9u); f_0082c21c();
    /* 004078f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004078fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004078fe: jne 0x40791c */ if (!fZ) goto L_0040791c;
L_00407900:; BB(0x00407900);
    /* 00407900: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00407903: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407906: je 0x40791c */ if (fZ) goto L_0040791c;
L_00407908:; BB(0x00407908);
    /* 00407908: mov dword ptr [esi + 0x1c], 6 */ W32((u32)(r_esi+0x1cu), 0x6u);
    /* 0040790f: mov eax, dword ptr [0x9a2fd0] */ r_eax = R32((u32)(0x9a2fd0u));
    /* 00407914: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407916: je 0x40791c */ if (fZ) goto L_0040791c;
L_00407918:; BB(0x00407918);
    /* 00407918: mov ecx, esi */ r_ecx = r_esi;
    /* 0040791a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40791cu); call_ind(t); }
L_0040791c:; BB(0x0040791c);
    /* 0040791c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040791d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040791e: ret  */ FN_RET(0x004078ac); r_esp += 4; return;
}

void f_00407920(void) /* sub_407920 */
{
    FN_ENTER(0x00407920);
    /* 00407920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00407921: mov edi, ecx */ r_edi = r_ecx;
    /* 00407923: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x407928u); f_00407734();
    /* 00407928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040792a: jne 0x40792e */ if (!fZ) goto L_0040792e;
L_0040792c:; BB(0x0040792c);
    /* 0040792c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040792d: ret  */ FN_RET(0x00407920); r_esp += 4; return;
L_0040792e:; BB(0x0040792e);
    /* 0040792e: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00407931: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407934: je 0x40794a */ if (fZ) goto L_0040794a;
L_00407936:; BB(0x00407936);
    /* 00407936: mov dword ptr [edi + 0x1c], 7 */ W32((u32)(r_edi+0x1cu), 0x7u);
    /* 0040793d: mov eax, dword ptr [0x9a2fd8] */ r_eax = R32((u32)(0x9a2fd8u));
    /* 00407942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407944: je 0x40794a */ if (fZ) goto L_0040794a;
L_00407946:; BB(0x00407946);
    /* 00407946: mov ecx, edi */ r_ecx = r_edi;
    /* 00407948: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40794au); call_ind(t); }
L_0040794a:; BB(0x0040794a);
    /* 0040794a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040794b: ret  */ FN_RET(0x00407920); r_esp += 4; return;
}

void f_0040794c(void) /* sub_40794C */
{
    FN_ENTER(0x0040794c);
    /* 0040794c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040794d: mov esi, ecx */ r_esi = r_ecx;
    /* 0040794f: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407952: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407957u); f_0061cdb0();
    /* 00407957: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407958: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x40795du); f_00407734();
    /* 0040795d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040795f: jne 0x407963 */ if (!fZ) goto L_00407963;
L_00407961:; BB(0x00407961);
    /* 00407961: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407962: ret  */ FN_RET(0x0040794c); r_esp += 4; return;
L_00407963:; BB(0x00407963);
    /* 00407963: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00407968: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040796a: je 0x40796e */ if (fZ) goto L_0040796e;
L_0040796c:; BB(0x0040796c);
    /* 0040796c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040796d: ret  */ FN_RET(0x0040794c); r_esp += 4; return;
L_0040796e:; BB(0x0040796e);
    /* 0040796e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407970: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x407975u); f_0082c3a8();
    /* 00407975: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407976: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00407979: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040797c: je 0x407992 */ if (fZ) goto L_00407992;
L_0040797e:; BB(0x0040797e);
    /* 0040797e: mov dword ptr [esi + 0x1c], 8 */ W32((u32)(r_esi+0x1cu), 0x8u);
    /* 00407985: mov eax, dword ptr [0x9a2fe0] */ r_eax = R32((u32)(0x9a2fe0u));
    /* 0040798a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040798c: je 0x407992 */ if (fZ) goto L_00407992;
L_0040798e:; BB(0x0040798e);
    /* 0040798e: mov ecx, esi */ r_ecx = r_esi;
    /* 00407990: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407992u); call_ind(t); }
L_00407992:; BB(0x00407992);
    /* 00407992: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407993: ret  */ FN_RET(0x0040794c); r_esp += 4; return;
}

void f_00407994(void) /* sub_407994 */
{
    FN_ENTER(0x00407994);
    /* 00407994: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00407995: mov edi, ecx */ r_edi = r_ecx;
    /* 00407997: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040799a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x40799fu); f_0061cdb0();
    /* 0040799f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004079a1: call 0x6c2914 */ r_esp -= 4; W32(r_esp, 0x4079a6u); f_006c2914();
    /* 004079a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004079a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004079ab: je 0x4079af */ if (fZ) goto L_004079af;
L_004079ad:; BB(0x004079ad);
    /* 004079ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004079ae: ret  */ FN_RET(0x00407994); r_esp += 4; return;
L_004079af:; BB(0x004079af);
    /* 004079af: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004079b2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004079b5: je 0x4079cb */ if (fZ) goto L_004079cb;
L_004079b7:; BB(0x004079b7);
    /* 004079b7: mov dword ptr [edi + 0x1c], 9 */ W32((u32)(r_edi+0x1cu), 0x9u);
    /* 004079be: mov eax, dword ptr [0x9a2fe8] */ r_eax = R32((u32)(0x9a2fe8u));
    /* 004079c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004079c5: je 0x4079cb */ if (fZ) goto L_004079cb;
L_004079c7:; BB(0x004079c7);
    /* 004079c7: mov ecx, edi */ r_ecx = r_edi;
    /* 004079c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4079cbu); call_ind(t); }
L_004079cb:; BB(0x004079cb);
    /* 004079cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004079cc: ret  */ FN_RET(0x00407994); r_esp += 4; return;
}

void f_004079d0(void) /* sub_4079D0 */
{
    FN_ENTER(0x004079d0);
    /* 004079d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004079d1: mov esi, ecx */ r_esi = r_ecx;
    /* 004079d3: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004079d6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4079dbu); f_0061cdb0();
    /* 004079db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004079dc: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x4079e1u); f_00407734();
    /* 004079e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004079e3: jne 0x4079e7 */ if (!fZ) goto L_004079e7;
L_004079e5:; BB(0x004079e5);
    /* 004079e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004079e6: ret  */ FN_RET(0x004079d0); r_esp += 4; return;
L_004079e7:; BB(0x004079e7);
    /* 004079e7: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 004079ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004079ee: je 0x4079f2 */ if (fZ) goto L_004079f2;
L_004079f0:; BB(0x004079f0);
    /* 004079f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004079f1: ret  */ FN_RET(0x004079d0); r_esp += 4; return;
L_004079f2:; BB(0x004079f2);
    /* 004079f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004079f4: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x4079f9u); f_0082c3a8();
    /* 004079f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004079fa: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004079fd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407a00: je 0x407a16 */ if (fZ) goto L_00407a16;
L_00407a02:; BB(0x00407a02);
    /* 00407a02: mov dword ptr [esi + 0x1c], 0xa */ W32((u32)(r_esi+0x1cu), 0xau);
    /* 00407a09: mov eax, dword ptr [0x9a2ff0] */ r_eax = R32((u32)(0x9a2ff0u));
    /* 00407a0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407a10: je 0x407a16 */ if (fZ) goto L_00407a16;
L_00407a12:; BB(0x00407a12);
    /* 00407a12: mov ecx, esi */ r_ecx = r_esi;
    /* 00407a14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407a16u); call_ind(t); }
L_00407a16:; BB(0x00407a16);
    /* 00407a16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407a17: ret  */ FN_RET(0x004079d0); r_esp += 4; return;
}

void f_00407a18(void) /* sub_407A18 */
{
    FN_ENTER(0x00407a18);
    /* 00407a18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00407a19: mov edi, ecx */ r_edi = r_ecx;
    /* 00407a1b: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407a1e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407a23u); f_0061cdb0();
    /* 00407a23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407a24: call 0x782f84 */ r_esp -= 4; W32(r_esp, 0x407a29u); f_00782f84();
    /* 00407a29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407a2b: jne 0x407a2f */ if (!fZ) goto L_00407a2f;
L_00407a2d:; BB(0x00407a2d);
    /* 00407a2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00407a2e: ret  */ FN_RET(0x00407a18); r_esp += 4; return;
L_00407a2f:; BB(0x00407a2f);
    /* 00407a2f: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00407a32: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 00407a39: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407a3c: je 0x407a52 */ if (fZ) goto L_00407a52;
L_00407a3e:; BB(0x00407a3e);
    /* 00407a3e: mov dword ptr [edi + 0x1c], 0xb */ W32((u32)(r_edi+0x1cu), 0xbu);
    /* 00407a45: mov eax, dword ptr [0x9a2ff8] */ r_eax = R32((u32)(0x9a2ff8u));
    /* 00407a4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407a4c: je 0x407a52 */ if (fZ) goto L_00407a52;
L_00407a4e:; BB(0x00407a4e);
    /* 00407a4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00407a50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407a52u); call_ind(t); }
L_00407a52:; BB(0x00407a52);
    /* 00407a52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00407a53: ret  */ FN_RET(0x00407a18); r_esp += 4; return;
}

void f_00407a54(void) /* sub_407A54 */
{
    FN_ENTER(0x00407a54);
    /* 00407a54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407a55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00407a57: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407a5a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407a5fu); f_0061cdb0();
    /* 00407a5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407a60: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x407a65u); f_007083d4();
    /* 00407a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407a67: jne 0x407a70 */ if (!fZ) goto L_00407a70;
L_00407a69:; BB(0x00407a69);
    /* 00407a69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407a6b: call 0x407748 */ r_esp -= 4; W32(r_esp, 0x407a70u); f_00407748();
L_00407a70:; BB(0x00407a70);
    /* 00407a70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407a71: ret  */ FN_RET(0x00407a54); r_esp += 4; return;
}

void f_00407a74(void) /* sub_407A74 */
{
    FN_ENTER(0x00407a74);
    /* 00407a74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407a75: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00407a77: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407a7a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407a7fu); f_0061cdb0();
    /* 00407a7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407a80: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x407a85u); f_006c78a0();
    /* 00407a85: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x407a8au); f_007083d4();
    /* 00407a8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407a8c: jne 0x407a97 */ if (!fZ) goto L_00407a97;
L_00407a8e:; BB(0x00407a8e);
    /* 00407a8e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407a90: call 0x407748 */ r_esp -= 4; W32(r_esp, 0x407a95u); f_00407748();
    /* 00407a95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407a96: ret  */ FN_RET(0x00407a74); r_esp += 4; return;
L_00407a97:; BB(0x00407a97);
    /* 00407a97: mov dword ptr [0xa95de0], 0xc */ W32((u32)(0xa95de0u), 0xcu);
    /* 00407aa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407aa2: ret  */ FN_RET(0x00407a74); r_esp += 4; return;
}

void f_00407aa4(void) /* sub_407AA4 */
{
    FN_ENTER(0x00407aa4);
    /* 00407aa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407aa5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00407aa7: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407aaa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407aafu); f_0061cdb0();
    /* 00407aaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407ab0: call 0x6c3e24 */ r_esp -= 4; W32(r_esp, 0x407ab5u); f_006c3e24();
    /* 00407ab5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407ab8: je 0x407ac1 */ if (fZ) goto L_00407ac1;
L_00407aba:; BB(0x00407aba);
    /* 00407aba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407abc: call 0x407748 */ r_esp -= 4; W32(r_esp, 0x407ac1u); f_00407748();
L_00407ac1:; BB(0x00407ac1);
    /* 00407ac1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ac2: ret  */ FN_RET(0x00407aa4); r_esp += 4; return;
}

void f_00407ac4(void) /* sub_407AC4 */
{
    FN_ENTER(0x00407ac4);
    /* 00407ac4: mov dword ptr [ecx + 0x20], 1 */ W32((u32)(r_ecx+0x20u), 0x1u);
    /* 00407acb: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00407ad2: mov eax, dword ptr [0x9a2fa0] */ r_eax = R32((u32)(0x9a2fa0u));
    /* 00407ad7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407ad9: je 0x407add */ if (fZ) goto L_00407add;
L_00407adb:; BB(0x00407adb);
    /* 00407adb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407addu); call_ind(t); }
L_00407add:; BB(0x00407add);
    /* 00407add: ret  */ FN_RET(0x00407ac4); r_esp += 4; return;
}

void f_00407ae0(void) /* sub_407AE0 */
{
    FN_ENTER(0x00407ae0);
    /* 00407ae0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407ae1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00407ae3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407ae5: call 0x407b04 */ r_esp -= 4; W32(r_esp, 0x407aeau); f_00407b04();
    /* 00407aea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00407aee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407af0: jne 0x407af6 */ if (!fZ) goto L_00407af6;
L_00407af2:; BB(0x00407af2);
    /* 00407af2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407af3: ret 4 */ FN_RET(0x00407ae0); r_esp += 8; return;
L_00407af6:; BB(0x00407af6);
    /* 00407af6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407af7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x407afcu); f_005c2f74();
    /* 00407afc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407afd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407afe: ret 4 */ FN_RET(0x00407ae0); r_esp += 8; return;
}

void f_00407b04(void) /* sub_407B04 */
{
    FN_ENTER(0x00407b04);
    /* 00407b04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407b05: mov ebp, esp */ r_ebp = r_esp;
    /* 00407b07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407b09: push 0x8cc2f0 */ { u32 v = 0x8cc2f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407b0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407b15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00407b1c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407b1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00407b22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00407b25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00407b28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00407b2b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00407b2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407b31: mov dword ptr [ecx], 0xaf2438 */ W32((u32)(r_ecx), 0xaf2438u);
    /* 00407b37: mov dword ptr [0xa3ad08], 0 */ W32((u32)(0xa3ad08u), 0x0u);
    /* 00407b41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00407b48: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x407b4du); f_008171e8();
    /* 00407b4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407b50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00407b57: mov esp, ebp */ r_esp = r_ebp;
    /* 00407b59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407b5a: ret  */ FN_RET(0x00407b04); r_esp += 4; return;
}

void f_00407b5c(void) /* sub_407B5C */
{
    FN_ENTER(0x00407b5c);
    /* 00407b5c: call 0x415700 */ r_esp -= 4; W32(r_esp, 0x407b61u); f_00415700();
    /* 00407b61: call 0x415138 */ r_esp -= 4; W32(r_esp, 0x407b66u); f_00415138();
    /* 00407b66: mov dword ptr [0xa3ad08], 0 */ W32((u32)(0xa3ad08u), 0x0u);
    /* 00407b70: ret  */ FN_RET(0x00407b5c); r_esp += 4; return;
}

void f_00407b74(void) /* sub_407B74 */
{
    FN_ENTER(0x00407b74);
    /* 00407b74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407b75: mov ebp, esp */ r_ebp = r_esp;
    /* 00407b77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407b79: push 0x8cc318 */ { u32 v = 0x8cc318u; r_esp -= 4; W32(r_esp, v); }
    /* 00407b7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407b85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00407b8c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407b8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00407b92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00407b95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00407b98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00407b9b: mov eax, dword ptr [0xa3ad08] */ r_eax = R32((u32)(0xa3ad08u));
    /* 00407ba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407ba2: je 0x407bb2 */ if (fZ) goto L_00407bb2;
L_00407ba4:; BB(0x00407ba4);
    /* 00407ba4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407ba7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00407bae: mov esp, ebp */ r_esp = r_ebp;
    /* 00407bb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407bb1: ret  */ FN_RET(0x00407b74); r_esp += 4; return;
L_00407bb2:; BB(0x00407bb2);
    /* 00407bb2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00407bb9: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00407bbb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x407bc0u); f_005caba4();
    /* 00407bc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407bc1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00407bc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407bc6: je 0x407ba4 */ if (fZ) goto L_00407ba4;
L_00407bc8:; BB(0x00407bc8);
    /* 00407bc8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00407bcf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407bd6: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407bdc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407bdf: call 0x407bf0 */ r_esp -= 4; W32(r_esp, 0x407be4u); f_00407bf0();
    /* 00407be4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00407beb: jmp 0x407ba4 */ goto L_00407ba4;
}

void f_00407bf0(void) /* sub_407BF0 */
{
    FN_ENTER(0x00407bf0);
    /* 00407bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00407bf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407bf5: push 0x8cc334 */ { u32 v = 0x8cc334u; r_esp -= 4; W32(r_esp, v); }
    /* 00407bfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407c01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00407c08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407c0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00407c0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00407c11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00407c14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00407c17: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00407c1a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00407c1d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x407c22u); f_008193cc();
    /* 00407c22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407c29: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407c2c: mov dword ptr [ecx], 0xaf2438 */ W32((u32)(r_ecx), 0xaf2438u);
    /* 00407c32: mov eax, dword ptr [0x9a3020] */ r_eax = R32((u32)(0x9a3020u));
    /* 00407c37: mov dword ptr [0xa3ad08], ecx */ W32((u32)(0xa3ad08u), r_ecx);
    /* 00407c3d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00407c40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00407c42: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00407c45: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00407c48: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00407c4b: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00407c4e: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x407c53u); f_00694c6c();
    /* 00407c53: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407c56: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00407c59: mov eax, edx */ r_eax = r_edx;
    /* 00407c5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407c5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00407c65: mov esp, ebp */ r_esp = r_ebp;
    /* 00407c67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407c68: ret 4 */ FN_RET(0x00407bf0); r_esp += 8; return;
}

void f_00407c6c(void) /* sub_407C6C */
{
    FN_ENTER(0x00407c6c);
    /* 00407c6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407c6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00407c6f: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00407c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407c74: je 0x407efb */ if (fZ) goto L_00407efb;
L_00407c7a:; BB(0x00407c7a);
    /* 00407c7a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407c7d: je 0x407ef6 */ if (fZ) goto L_00407ef6;
L_00407c83:; BB(0x00407c83);
    /* 00407c83: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407c86: je 0x407edd */ if (fZ) goto L_00407edd;
L_00407c8c:; BB(0x00407c8c);
    /* 00407c8c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407c8f: jne 0x407ec1 */ if (!fZ) goto L_00407ec1;
L_00407c95:; BB(0x00407c95);
    /* 00407c95: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00407c98: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00407c9b: ja 0x407e69 */ if ((!fC&&!fZ)) goto L_00407e69;
L_00407ca1:; BB(0x00407ca1);
    /* 00407ca1: mov eax, dword ptr [eax*4 + 0x8f8e70] */ r_eax = R32((u32)(r_eax*4+0x8f8e70u));
    /* 00407ca8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00407e69:; BB(0x00407e69);
    /* 00407e69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407e6b: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407e70u); f_00407f08();
    /* 00407e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407e72: je 0x407e9b */ if (fZ) goto L_00407e9b;
L_00407e74:; BB(0x00407e74);
    /* 00407e74: mov dword ptr [0xa3ad04], 3 */ W32((u32)(0xa3ad04u), 0x3u);
    /* 00407e7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407e80: mov ecx, 0xaab384 */ r_ecx = 0xaab384u;
    /* 00407e85: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407e8f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e91: call 0x7a630c */ r_esp -= 4; W32(r_esp, 0x407e96u); f_007a630c();
    /* 00407e96: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407e99: jmp 0x407eee */ goto L_00407eee;
L_00407e9b:; BB(0x00407e9b);
    /* 00407e9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407e9d: call 0x407f3c */ r_esp -= 4; W32(r_esp, 0x407ea2u); f_00407f3c();
    /* 00407ea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407ea4: jne 0x407eab */ if (!fZ) goto L_00407eab;
L_00407ea6:; BB(0x00407ea6);
    /* 00407ea6: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407ea9: jmp 0x407eee */ goto L_00407eee;
L_00407eab:; BB(0x00407eab);
    /* 00407eab: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407eae: mov dword ptr [0xa3ad04], 2 */ W32((u32)(0xa3ad04u), 0x2u);
    /* 00407eb8: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407ebf: jmp 0x407eee */ goto L_00407eee;
L_00407ec1:; BB(0x00407ec1);
    /* 00407ec1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407ec4: je 0x407ecb */ if (fZ) goto L_00407ecb;
L_00407ec6:; BB(0x00407ec6);
    /* 00407ec6: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407ec9: jmp 0x407eee */ goto L_00407eee;
L_00407ecb:; BB(0x00407ecb);
    /* 00407ecb: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00407ecf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00407ed4: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00407ed8: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407edb: jmp 0x407eee */ goto L_00407eee;
L_00407edd:; BB(0x00407edd);
    /* 00407edd: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407ee0: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407ee5: jle 0x407eee */ if ((fZ||fS!=fO)) goto L_00407eee;
L_00407ee7:; BB(0x00407ee7);
    /* 00407ee7: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407c6c); r_esp += 4; return;
L_00407ef6:; BB(0x00407ef6);
    /* 00407ef6: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407ef9: jmp 0x407eee */ goto L_00407eee;
L_00407efb:; BB(0x00407efb);
    /* 00407efb: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407efe: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 00407f05: jmp 0x407eee */ goto L_00407eee;
}

void f_00407caa(void)
{
    FN_ENTER(0x00407caa);
    /* 00407caa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407cac: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407cb1u); f_00407f08();
    /* 00407cb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407cb3: jne 0x407cbd */ if (!fZ) goto L_00407cbd;
L_00407cb5:; BB(0x00407cb5);
    /* 00407cb5: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407cb8: jmp 0x407eee */ goto L_00407eee;
L_00407cbd:; BB(0x00407cbd);
    /* 00407cbd: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407cc0: mov dword ptr [0xa3ad04], 2 */ W32((u32)(0xa3ad04u), 0x2u);
    /* 00407cca: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407cd1: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407caa); r_esp += 4; return;
}

void f_00407cd6(void)
{
    FN_ENTER(0x00407cd6);
    /* 00407cd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407cd8: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407cddu); f_00407f08();
    /* 00407cdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407cdf: jne 0x407ce9 */ if (!fZ) goto L_00407ce9;
L_00407ce1:; BB(0x00407ce1);
    /* 00407ce1: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407ce4: jmp 0x407eee */ goto L_00407eee;
L_00407ce9:; BB(0x00407ce9);
    /* 00407ce9: mov dword ptr [0xa3ad04], 3 */ W32((u32)(0xa3ad04u), 0x3u);
    /* 00407cf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407cf5: mov ecx, 0xaab384 */ r_ecx = 0xaab384u;
    /* 00407cfa: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407d01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407d03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407d04: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00407d06: call 0x7a630c */ r_esp -= 4; W32(r_esp, 0x407d0bu); f_007a630c();
    /* 00407d0b: call 0x70873c */ r_esp -= 4; W32(r_esp, 0x407d10u); f_0070873c();
    /* 00407d10: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407d13: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407cd6); r_esp += 4; return;
}

void f_00407d18(void)
{
    FN_ENTER(0x00407d18);
    /* 00407d18: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407d1a: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407d1fu); f_00407f08();
    /* 00407d1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d21: je 0x407d4d */ if (fZ) goto L_00407d4d;
L_00407d23:; BB(0x00407d23);
    /* 00407d23: mov dword ptr [0xa3ad04], 3 */ W32((u32)(0xa3ad04u), 0x3u);
    /* 00407d2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407d2f: mov ecx, 0xaab384 */ r_ecx = 0xaab384u;
    /* 00407d34: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407d3e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00407d40: call 0x7a630c */ r_esp -= 4; W32(r_esp, 0x407d45u); f_007a630c();
    /* 00407d45: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407d48: jmp 0x407eee */ goto L_00407eee;
L_00407d4d:; BB(0x00407d4d);
    /* 00407d4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407d4f: call 0x407f3c */ r_esp -= 4; W32(r_esp, 0x407d54u); f_00407f3c();
    /* 00407d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d56: jne 0x407d60 */ if (!fZ) goto L_00407d60;
L_00407d58:; BB(0x00407d58);
    /* 00407d58: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407d5b: jmp 0x407eee */ goto L_00407eee;
L_00407d60:; BB(0x00407d60);
    /* 00407d60: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407d63: mov dword ptr [0xa3ad04], 0 */ W32((u32)(0xa3ad04u), 0x0u);
    /* 00407d6d: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407d74: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407d18); r_esp += 4; return;
}

void f_00407d79(void)
{
    FN_ENTER(0x00407d79);
    /* 00407d79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407d7b: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407d80u); f_00407f08();
    /* 00407d80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d82: je 0x407db2 */ if (fZ) goto L_00407db2;
L_00407d84:; BB(0x00407d84);
    /* 00407d84: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x407d89u); f_0061cdb0();
    /* 00407d89: mov dword ptr [0xa3ad04], 3 */ W32((u32)(0xa3ad04u), 0x3u);
    /* 00407d93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407d95: mov ecx, 0xaab384 */ r_ecx = 0xaab384u;
    /* 00407d9a: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407da5: call 0x7a630c */ r_esp -= 4; W32(r_esp, 0x407daau); f_007a630c();
    /* 00407daa: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407dad: jmp 0x407eee */ goto L_00407eee;
L_00407db2:; BB(0x00407db2);
    /* 00407db2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407db4: call 0x407f3c */ r_esp -= 4; W32(r_esp, 0x407db9u); f_00407f3c();
    /* 00407db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407dbb: jne 0x407dc5 */ if (!fZ) goto L_00407dc5;
L_00407dbd:; BB(0x00407dbd);
    /* 00407dbd: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407dc0: jmp 0x407eee */ goto L_00407eee;
L_00407dc5:; BB(0x00407dc5);
    /* 00407dc5: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407dc8: mov dword ptr [0xa3ad04], 2 */ W32((u32)(0xa3ad04u), 0x2u);
    /* 00407dd2: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407dd9: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407d79); r_esp += 4; return;
}

void f_00407dde(void)
{
    FN_ENTER(0x00407dde);
    /* 00407dde: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407de0: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407de5u); f_00407f08();
    /* 00407de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407de7: je 0x407e02 */ if (fZ) goto L_00407e02;
L_00407de9:; BB(0x00407de9);
    /* 00407de9: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407dec: mov dword ptr [0xa3ad04], 1 */ W32((u32)(0xa3ad04u), 0x1u);
    /* 00407df6: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407dfd: jmp 0x407eee */ goto L_00407eee;
L_00407e02:; BB(0x00407e02);
    /* 00407e02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407e04: call 0x407f3c */ r_esp -= 4; W32(r_esp, 0x407e09u); f_00407f3c();
    /* 00407e09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407e0b: jne 0x407e15 */ if (!fZ) goto L_00407e15;
L_00407e0d:; BB(0x00407e0d);
    /* 00407e0d: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407e10: jmp 0x407eee */ goto L_00407eee;
L_00407e15:; BB(0x00407e15);
    /* 00407e15: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407e18: mov dword ptr [0xa3ad04], 2 */ W32((u32)(0xa3ad04u), 0x2u);
    /* 00407e22: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407e29: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407dde); r_esp += 4; return;
}

void f_00407e2e(void)
{
    FN_ENTER(0x00407e2e);
    /* 00407e2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407e30: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407e35u); f_00407f08();
    /* 00407e35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407e37: jne 0x407e41 */ if (!fZ) goto L_00407e41;
L_00407e39:; BB(0x00407e39);
    /* 00407e39: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407e3c: jmp 0x407eee */ goto L_00407eee;
L_00407e41:; BB(0x00407e41);
    /* 00407e41: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407e44: mov dword ptr [0xa3ad04], 2 */ W32((u32)(0xa3ad04u), 0x2u);
    /* 00407e4e: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407e55: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407e2e); r_esp += 4; return;
}

void f_00407e5a(void)
{
    FN_ENTER(0x00407e5a);
    /* 00407e5a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407e5d: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407e64: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407e5a); r_esp += 4; return;
}

void f_00407e69(void)
{
    FN_ENTER(0x00407e69);
    /* 00407e69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407e6b: call 0x407f08 */ r_esp -= 4; W32(r_esp, 0x407e70u); f_00407f08();
    /* 00407e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407e72: je 0x407e9b */ if (fZ) goto L_00407e9b;
L_00407e74:; BB(0x00407e74);
    /* 00407e74: mov dword ptr [0xa3ad04], 3 */ W32((u32)(0xa3ad04u), 0x3u);
    /* 00407e7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407e80: mov ecx, 0xaab384 */ r_ecx = 0xaab384u;
    /* 00407e85: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407e8f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e91: call 0x7a630c */ r_esp -= 4; W32(r_esp, 0x407e96u); f_007a630c();
    /* 00407e96: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407e99: jmp 0x407eee */ goto L_00407eee;
L_00407e9b:; BB(0x00407e9b);
    /* 00407e9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00407e9d: call 0x407f3c */ r_esp -= 4; W32(r_esp, 0x407ea2u); f_00407f3c();
    /* 00407ea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407ea4: jne 0x407eab */ if (!fZ) goto L_00407eab;
L_00407ea6:; BB(0x00407ea6);
    /* 00407ea6: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407ea9: jmp 0x407eee */ goto L_00407eee;
L_00407eab:; BB(0x00407eab);
    /* 00407eab: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00407eae: mov dword ptr [0xa3ad04], 2 */ W32((u32)(0xa3ad04u), 0x2u);
    /* 00407eb8: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00407ebf: jmp 0x407eee */ goto L_00407eee;
L_00407eee:; BB(0x00407eee);
    /* 00407eee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407ef1: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00407ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00407ef5: ret  */ FN_RET(0x00407e69); r_esp += 4; return;
}

void f_00407f08(void) /* sub_407F08 */
{
    FN_ENTER(0x00407f08);
    /* 00407f08: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00407f0b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00407f0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407f10: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407f12: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00407f17: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00407f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407f1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407f20: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00407f27: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x407f2cu); f_007c1160();
    /* 00407f2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407f2e: jne 0x407f33 */ if (!fZ) goto L_00407f33;
L_00407f30:; BB(0x00407f30);
    /* 00407f30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407f32: ret  */ FN_RET(0x00407f08); r_esp += 4; return;
L_00407f33:; BB(0x00407f33);
    /* 00407f33: mov eax, 1 */ r_eax = 0x1u;
    /* 00407f38: ret  */ FN_RET(0x00407f08); r_esp += 4; return;
}

void f_00407f3c(void) /* sub_407F3C */
{
    FN_ENTER(0x00407f3c);
    /* 00407f3c: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00407f41: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00407f44: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00407f47: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407f49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407f4b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00407f4d: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00407f54: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00407f56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407f57: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x407f5cu); f_007c1160();
    /* 00407f5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407f5e: jne 0x407f63 */ if (!fZ) goto L_00407f63;
L_00407f60:; BB(0x00407f60);
    /* 00407f60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407f62: ret  */ FN_RET(0x00407f3c); r_esp += 4; return;
L_00407f63:; BB(0x00407f63);
    /* 00407f63: mov eax, 1 */ r_eax = 0x1u;
    /* 00407f68: ret  */ FN_RET(0x00407f3c); r_esp += 4; return;
}

void f_00407f6c(void) /* sub_407F6C */
{
    FN_ENTER(0x00407f6c);
    /* 00407f6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00407f6d: mov esi, ecx */ r_esi = r_ecx;
    /* 00407f6f: mov ecx, esi */ r_ecx = r_esi;
    /* 00407f71: call 0x407fb0 */ r_esp -= 4; W32(r_esp, 0x407f76u); f_00407fb0();
    /* 00407f76: mov ecx, esi */ r_ecx = r_esi;
    /* 00407f78: call 0x40808c */ r_esp -= 4; W32(r_esp, 0x407f7du); f_0040808c();
    /* 00407f7d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00407f80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00407f82: jl 0x407fae */ if ((fS!=fO)) goto L_00407fae;
L_00407f84:; BB(0x00407f84);
    /* 00407f84: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407f87: jle 0x407f97 */ if ((fZ||fS!=fO)) goto L_00407f97;
L_00407f89:; BB(0x00407f89);
    /* 00407f89: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00407f8c: jne 0x407fae */ if (!fZ) goto L_00407fae;
L_00407f8e:; BB(0x00407f8e);
    /* 00407f8e: mov ecx, esi */ r_ecx = r_esi;
    /* 00407f90: call 0x4080ac */ r_esp -= 4; W32(r_esp, 0x407f95u); f_004080ac();
    /* 00407f95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407f96: ret  */ FN_RET(0x00407f6c); r_esp += 4; return;
L_00407f97:; BB(0x00407f97);
    /* 00407f97: push 0x8f8f2c */ { u32 v = 0x8f8f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00407f9c: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 00407fa1: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00407fa6: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x407fabu); f_007ab534();
    /* 00407fab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00407fae:; BB(0x00407fae);
    /* 00407fae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00407faf: ret  */ FN_RET(0x00407f6c); r_esp += 4; return;
}

void f_00407fb0(void) /* sub_407FB0 */
{
    FN_ENTER(0x00407fb0);
    /* 00407fb0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407fb3: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00407fb6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00407fb8: je 0x407fc9 */ if (fZ) goto L_00407fc9;
L_00407fba:; BB(0x00407fba);
    /* 00407fba: mov eax, 0x8f8ea4 */ r_eax = 0x8f8ea4u;
    /* 00407fbf: mov edx, 0x8f8eac */ r_edx = 0x8f8eacu;
    /* 00407fc4: call 0x407fd8 */ r_esp -= 4; W32(r_esp, 0x407fc9u); f_00407fd8();
L_00407fc9:; BB(0x00407fc9);
    /* 00407fc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00407fcc: ret  */ FN_RET(0x00407fb0); r_esp += 4; return;
}

void f_00407fd8(void) /* sub_407FD8 */
{
    FN_ENTER(0x00407fd8);
    /* 00407fd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00407fd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407fda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00407fdb: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407fde: mov ebx, edx */ r_ebx = r_edx;
    /* 00407fe0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00407fe3: mov edx, 4 */ r_edx = 0x4u;
    /* 00407fe8: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00407fec: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00407ff4: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00407ff8: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00407ffc: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00408000: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00408002: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00408005: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00408008: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0040800c: mov ecx, 0x8f000000 */ r_ecx = 0x8f000000u;
    /* 00408011: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00408015: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 00408018: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0040801c: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0040801e: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 00408021: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00408024: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00408027: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0040802b: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0040802e: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00408032: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00408035: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00408039: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0040803b: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 0040803d: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00408040: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00408044: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00408047: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 0040804a: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 0040804d: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00408051: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00408054: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00408056: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00408058: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0040805c: fstp dword ptr [ebx + 0x18] */ W_F32((u32)(r_ebx+0x18u), ST(0)); FPOP();
    /* 0040805f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00408063: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00408066: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00408069: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040806d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00408070: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00408074: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00408076: push 0xc2f00000 */ { u32 v = 0xc2f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040807b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040807c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040807d: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x408082u); f_0082b5d8();
    /* 00408082: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408085: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408086: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408087: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00408088: ret  */ FN_RET(0x00407fd8); r_esp += 4; return;
}

