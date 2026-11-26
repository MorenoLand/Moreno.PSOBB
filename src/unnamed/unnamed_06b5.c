#include "protos.h"

void f_006b5014(void)
{
    FN_ENTER(0x006b5014);
    /* 006b5014: movzx ecx, word ptr [esp + 4] */ r_ecx = (u32)R16((u32)(r_esp+0x4u));
    /* 006b5019: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b501e: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b5024: add edx, dword ptr [eax + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b5027: jne 0x6b502a */ if (!fZ) goto L_006b502a;
L_006b5029:; BB(0x006b5029);
    /* 006b5029: ret  */ FN_RET(0x006b5014); r_esp += 4; return;
L_006b502a:; BB(0x006b502a);
    /* 006b502a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006b502c: mov eax, 0xaac4e0 */ r_eax = 0xaac4e0u;
    /* 006b5031: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006b5033: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006b5036: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006b5039: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006b503c: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 006b503f: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006b5042: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006b5045: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 006b5048: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 006b504b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006b504e: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 006b5051: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 006b5054: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 006b5057: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006b505a: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 006b505d: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006b5060: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006b5063: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006b5066: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 006b5069: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 006b506c: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 006b506f: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 006b5072: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 006b5075: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006b5078: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 006b507b: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006b507e: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 006b5081: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 006b5084: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 006b5087: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 006b508a: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 006b508d: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 006b5090: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 006b5093: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 006b5096: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 006b5099: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006b509c: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 006b509f: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 006b50a2: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 006b50a5: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 006b50a8: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 006b50ab: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 006b50ae: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 006b50b1: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 006b50b4: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 006b50b7: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 006b50ba: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 006b50bd: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006b50c0: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 006b50c3: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 006b50c6: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 006b50c9: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 006b50cc: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 006b50cf: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 006b50d2: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 006b50d5: ret  */ FN_RET(0x006b5014); r_esp += 4; return;
}

void f_006b50d8(void)
{
    FN_ENTER(0x006b50d8);
    /* 006b50d8: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b50dd: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b50e2: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b50e5: call 0x4daba4 */ r_esp -= 4; W32(r_esp, 0x6b50eau); f_004daba4();
    /* 006b50ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b50eb: ret  */ FN_RET(0x006b50d8); r_esp += 4; return;
}

void f_006b50ec(void)
{
    FN_ENTER(0x006b50ec);
    /* 006b50ec: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b50f1: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b50f7: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b50fa: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b50fd: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5100: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b5103: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b5106: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b5109: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b510c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b510e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b5110: fstp dword ptr [0x9ccb78] */ W_F32((u32)(0x9ccb78u), ST(0)); FPOP();
    /* 006b5116: ret  */ FN_RET(0x006b50ec); r_esp += 4; return;
}

void f_006b5118(void)
{
    FN_ENTER(0x006b5118);
    /* 006b5118: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b511d: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5123: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5126: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b5129: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b512c: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b512f: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b5132: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b5135: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5138: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b513a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b513c: fstp dword ptr [0x9ccb7c] */ W_F32((u32)(0x9ccb7cu), ST(0)); FPOP();
    /* 006b5142: ret  */ FN_RET(0x006b5118); r_esp += 4; return;
}

void f_006b5144(void)
{
    FN_ENTER(0x006b5144);
    /* 006b5144: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5149: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b514f: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5152: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b5155: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5158: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b515b: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b515e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b5161: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5164: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b5166: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b5168: fstp dword ptr [0x9ccb88] */ W_F32((u32)(0x9ccb88u), ST(0)); FPOP();
    /* 006b516e: ret  */ FN_RET(0x006b5144); r_esp += 4; return;
}

void f_006b5170(void)
{
    FN_ENTER(0x006b5170);
    /* 006b5170: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5175: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b517b: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b517e: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b5181: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5184: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b5187: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b518a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b518d: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5190: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b5192: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b5194: fstp dword ptr [0xa94aec] */ W_F32((u32)(0xa94aecu), ST(0)); FPOP();
    /* 006b519a: ret  */ FN_RET(0x006b5170); r_esp += 4; return;
}

void f_006b519c(void)
{
    FN_ENTER(0x006b519c);
    /* 006b519c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b51a1: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b51a7: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b51aa: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b51ad: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b51b0: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b51b3: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b51b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b51b9: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b51bc: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b51be: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b51c0: fstp dword ptr [0x9ccb80] */ W_F32((u32)(0x9ccb80u), ST(0)); FPOP();
    /* 006b51c6: ret  */ FN_RET(0x006b519c); r_esp += 4; return;
}

void f_006b51c8(void)
{
    FN_ENTER(0x006b51c8);
    /* 006b51c8: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b51cd: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b51d3: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b51d6: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b51d9: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b51dc: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b51df: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b51e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b51e5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b51e8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b51ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b51ec: fstp dword ptr [0x9ccb84] */ W_F32((u32)(0x9ccb84u), ST(0)); FPOP();
    /* 006b51f2: ret  */ FN_RET(0x006b51c8); r_esp += 4; return;
}

void f_006b51f4(void)
{
    FN_ENTER(0x006b51f4);
    /* 006b51f4: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b51f9: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b51ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5202: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b5205: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5208: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b520b: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b520e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b5211: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5214: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b5216: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b5218: fstp dword ptr [0x9ccb8c] */ W_F32((u32)(0x9ccb8cu), ST(0)); FPOP();
    /* 006b521e: ret  */ FN_RET(0x006b51f4); r_esp += 4; return;
}

void f_006b5220(void)
{
    FN_ENTER(0x006b5220);
    /* 006b5220: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5225: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b522b: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b522e: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b5231: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5234: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b5237: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b523a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b523d: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5240: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b5242: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b5244: fstp dword ptr [0x9ccb90] */ W_F32((u32)(0x9ccb90u), ST(0)); FPOP();
    /* 006b524a: ret  */ FN_RET(0x006b5220); r_esp += 4; return;
}

void f_006b524c(void)
{
    FN_ENTER(0x006b524c);
    /* 006b524c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5251: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5257: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b525a: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b525d: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5260: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b5263: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b5266: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b5269: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b526c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b526e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b5270: fstp dword ptr [0xa94ae8] */ W_F32((u32)(0xa94ae8u), ST(0)); FPOP();
    /* 006b5276: ret  */ FN_RET(0x006b524c); r_esp += 4; return;
}

void f_006b5278(void)
{
    FN_ENTER(0x006b5278);
    /* 006b5278: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b527d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b527f: jb 0x6b528b */ if (fC) goto L_006b528b;
L_006b5281:; BB(0x006b5281);
    /* 006b5281: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5284: ja 0x6b528b */ if ((!fC&&!fZ)) goto L_006b528b;
L_006b5286:; BB(0x006b5286);
    /* 006b5286: mov byte ptr [0xa9551e], al */ W8((u32)(0xa9551eu), (u8)r_eax);
L_006b528b:; BB(0x006b528b);
    /* 006b528b: ret  */ FN_RET(0x006b5278); r_esp += 4; return;
}

void f_006b528c(void)
{
    FN_ENTER(0x006b528c);
    /* 006b528c: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b5291: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5294: jbe 0x6b5298 */ if ((fC||fZ)) goto L_006b5298;
L_006b5296:; BB(0x006b5296);
    /* 006b5296: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006b5298:; BB(0x006b5298);
    /* 006b5298: mov dword ptr [0xa9552c], eax */ W32((u32)(0xa9552cu), r_eax);
    /* 006b529d: ret  */ FN_RET(0x006b528c); r_esp += 4; return;
}

void f_006b52a0(void)
{
    FN_ENTER(0x006b52a0);
    /* 006b52a0: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b52a5: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b52aa: je 0x6b52b3 */ if (fZ) goto L_006b52b3;
L_006b52ac:; BB(0x006b52ac);
    /* 006b52ac: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b52af: jbe 0x6b52b3 */ if ((fC||fZ)) goto L_006b52b3;
L_006b52b1:; BB(0x006b52b1);
    /* 006b52b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006b52b3:; BB(0x006b52b3);
    /* 006b52b3: mov dword ptr [0xa95530], eax */ W32((u32)(0xa95530u), r_eax);
    /* 006b52b8: ret  */ FN_RET(0x006b52a0); r_esp += 4; return;
}

void f_006b52bc(void)
{
    FN_ENTER(0x006b52bc);
    /* 006b52bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b52bd: mov esi, dword ptr [0xa954cc] */ r_esi = R32((u32)(0xa954ccu));
    /* 006b52c3: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6b52c8u); f_006931f8();
    /* 006b52c8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b52ca: jbe 0x6b52ce */ if ((fC||fZ)) goto L_006b52ce;
L_006b52cc:; BB(0x006b52cc);
    /* 006b52cc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006b52ce:; BB(0x006b52ce);
    /* 006b52ce: mov dword ptr [0xa95534], esi */ W32((u32)(0xa95534u), r_esi);
    /* 006b52d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b52d5: ret  */ FN_RET(0x006b52bc); r_esp += 4; return;
}

void f_006b52d8(void)
{
    FN_ENTER(0x006b52d8);
    /* 006b52d8: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b52dd: cmp eax, 0x278d0 */ {  u32 a = r_eax; u32 b = 0x278d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b52e2: jbe 0x6b52e6 */ if ((fC||fZ)) goto L_006b52e6;
L_006b52e4:; BB(0x006b52e4);
    /* 006b52e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006b52e6:; BB(0x006b52e6);
    /* 006b52e6: mov dword ptr [0xa95538], eax */ W32((u32)(0xa95538u), r_eax);
    /* 006b52eb: ret  */ FN_RET(0x006b52d8); r_esp += 4; return;
}

void f_006b52ec(void) /* sub_6B52EC */
{
    FN_ENTER(0x006b52ec);
    /* 006b52ec: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b52f1: mov byte ptr [0xa95520], al */ W8((u32)(0xa95520u), (u8)r_eax);
    /* 006b52f6: ret  */ FN_RET(0x006b52ec); r_esp += 4; return;
}

void f_006b52f8(void)
{
    FN_ENTER(0x006b52f8);
    /* 006b52f8: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b52fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b52ff: jb 0x6b5312 */ if (fC) goto L_006b5312;
L_006b5301:; BB(0x006b5301);
    /* 006b5301: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5304: ja 0x6b5312 */ if ((!fC&&!fZ)) goto L_006b5312;
L_006b5306:; BB(0x006b5306);
    /* 006b5306: mov eax, dword ptr [eax*4 + 0x9697e4] */ r_eax = R32((u32)(r_eax*4+0x9697e4u));
    /* 006b530d: mov byte ptr [0xa9551f], al */ W8((u32)(0xa9551fu), (u8)r_eax);
L_006b5312:; BB(0x006b5312);
    /* 006b5312: ret  */ FN_RET(0x006b52f8); r_esp += 4; return;
}

void f_006b5314(void) /* sub_6B5314 */
{
    FN_ENTER(0x006b5314);
    /* 006b5314: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b5319: mov dword ptr [0xa114ac], eax */ W32((u32)(0xa114acu), r_eax);
    /* 006b531e: ret  */ FN_RET(0x006b5314); r_esp += 4; return;
}

void f_006b5320(void) /* sub_6B5320 */
{
    FN_ENTER(0x006b5320);
    /* 006b5320: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b5325: mov dword ptr [0xaafc94], eax */ W32((u32)(0xaafc94u), r_eax);
    /* 006b532a: ret  */ FN_RET(0x006b5320); r_esp += 4; return;
}

void f_006b532c(void) /* sub_6B532C */
{
    FN_ENTER(0x006b532c);
    /* 006b532c: mov dword ptr [0xa8fcb4], 1 */ W32((u32)(0xa8fcb4u), 0x1u);
    /* 006b5336: ret  */ FN_RET(0x006b532c); r_esp += 4; return;
}

void f_006b5338(void) /* sub_6B5338 */
{
    FN_ENTER(0x006b5338);
    /* 006b5338: mov dword ptr [0xa8fcb4], 0 */ W32((u32)(0xa8fcb4u), 0x0u);
    /* 006b5342: ret  */ FN_RET(0x006b5338); r_esp += 4; return;
}

void f_006b5344(void) /* sub_6B5344 */
{
    FN_ENTER(0x006b5344);
    /* 006b5344: mov dword ptr [0xaafc90], 1 */ W32((u32)(0xaafc90u), 0x1u);
    /* 006b534e: ret  */ FN_RET(0x006b5344); r_esp += 4; return;
}

void f_006b5350(void) /* sub_6B5350 */
{
    FN_ENTER(0x006b5350);
    /* 006b5350: mov dword ptr [0xaafc90], 0 */ W32((u32)(0xaafc90u), 0x0u);
    /* 006b535a: ret  */ FN_RET(0x006b5350); r_esp += 4; return;
}

void f_006b535c(void)
{
    FN_ENTER(0x006b535c);
    /* 006b535c: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5362: call 0x4d9ecc */ r_esp -= 4; W32(r_esp, 0x6b5367u); f_004d9ecc();
    /* 006b5367: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5368: ret  */ FN_RET(0x006b535c); r_esp += 4; return;
}

void f_006b536c(void) /* sub_6B536C */
{
    FN_ENTER(0x006b536c);
    /* 006b536c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b536d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b536e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b536f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b5372: movzx ebp, byte ptr [esp + 0x24] */ r_ebp = (u32)R8((u32)(r_esp+0x24u));
    /* 006b5377: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b537c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b537f: movzx esi, word ptr [eax + ebp*4] */ r_esi = (u32)R16((u32)(r_eax+r_ebp*4));
    /* 006b5383: lea ebx, [ebp + 1] */ r_ebx = (u32)(r_ebp+0x1u);
    /* 006b5386: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b538bu); f_005d6a3c();
    /* 006b538b: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5390: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b5393: mov edx, dword ptr [eax + ebx*4] */ r_edx = R32((u32)(r_eax+r_ebx*4));
    /* 006b5396: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 006b5399: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 006b539c: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b539f: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006b53a2: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b53a6: lea ebp, [ebp + 3] */ r_ebp = (u32)(r_ebp+0x3u);
    /* 006b53a9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b53af: mov eax, dword ptr [eax + ebp*4] */ r_eax = R32((u32)(r_eax+r_ebp*4));
    /* 006b53b2: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 006b53b6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b53b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b53ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b53bb: call 0x5ca9c8 */ r_esp -= 4; W32(r_esp, 0x6b53c0u); f_005ca9c8();
    /* 006b53c0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b53c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b53c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b53c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b53c6: ret  */ FN_RET(0x006b536c); r_esp += 4; return;
}

void f_006b53c8(void)
{
    FN_ENTER(0x006b53c8);
    /* 006b53c8: push dword ptr [0xa954d0] */ { u32 v = R32((u32)(0xa954d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b53ce: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b53d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b53d6: call 0x5ca900 */ r_esp -= 4; W32(r_esp, 0x6b53dbu); f_005ca900();
    /* 006b53db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b53de: ret  */ FN_RET(0x006b53c8); r_esp += 4; return;
}

void f_006b53e0(void)
{
    FN_ENTER(0x006b53e0);
    /* 006b53e0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b53e6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b53ebu); f_0068d5a8();
    /* 006b53eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b53ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b53ee: je 0x6b53f7 */ if (fZ) goto L_006b53f7;
L_006b53f0:; BB(0x006b53f0);
    /* 006b53f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b53f1: call 0x6cafb8 */ r_esp -= 4; W32(r_esp, 0x6b53f6u); f_006cafb8();
    /* 006b53f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b53f7:; BB(0x006b53f7);
    /* 006b53f7: ret  */ FN_RET(0x006b53e0); r_esp += 4; return;
}

void f_006b53f8(void)
{
    FN_ENTER(0x006b53f8);
    /* 006b53f8: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b53fe: call 0x5dd5dc */ r_esp -= 4; W32(r_esp, 0x6b5403u); f_005dd5dc();
    /* 006b5403: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5404: ret  */ FN_RET(0x006b53f8); r_esp += 4; return;
}

void f_006b5408(void)
{
    FN_ENTER(0x006b5408);
    /* 006b5408: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b540d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b540f: jb 0x6b5422 */ if (fC) goto L_006b5422;
L_006b5411:; BB(0x006b5411);
    /* 006b5411: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5414: ja 0x6b5422 */ if ((!fC&&!fZ)) goto L_006b5422;
L_006b5416:; BB(0x006b5416);
    /* 006b5416: mov eax, dword ptr [eax*4 + 0x9697f0] */ r_eax = R32((u32)(r_eax*4+0x9697f0u));
    /* 006b541d: mov byte ptr [0xa95525], al */ W8((u32)(0xa95525u), (u8)r_eax);
L_006b5422:; BB(0x006b5422);
    /* 006b5422: ret  */ FN_RET(0x006b5408); r_esp += 4; return;
}

void f_006b5424(void) /* sub_6B5424 */
{
    FN_ENTER(0x006b5424);
    /* 006b5424: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b5429: mov byte ptr [0xa95526], al */ W8((u32)(0xa95526u), (u8)r_eax);
    /* 006b542e: ret  */ FN_RET(0x006b5424); r_esp += 4; return;
}

void f_006b5430(void) /* sub_6B5430 */
{
    FN_ENTER(0x006b5430);
    /* 006b5430: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5432: mov word ptr [0xa94ad8], ax */ W16((u32)(0xa94ad8u), (u16)r_eax);
    /* 006b5438: mov word ptr [0xa94ada], ax */ W16((u32)(0xa94adau), (u16)r_eax);
    /* 006b543e: mov word ptr [0xa94adc], ax */ W16((u32)(0xa94adcu), (u16)r_eax);
    /* 006b5444: mov word ptr [0xa94ade], ax */ W16((u32)(0xa94adeu), (u16)r_eax);
    /* 006b544a: mov word ptr [0xa94ae0], ax */ W16((u32)(0xa94ae0u), (u16)r_eax);
    /* 006b5450: mov word ptr [0xa94ae2], ax */ W16((u32)(0xa94ae2u), (u16)r_eax);
    /* 006b5456: mov word ptr [0xa94ae4], ax */ W16((u32)(0xa94ae4u), (u16)r_eax);
    /* 006b545c: mov word ptr [0xa94ae6], ax */ W16((u32)(0xa94ae6u), (u16)r_eax);
    /* 006b5462: ret  */ FN_RET(0x006b5430); r_esp += 4; return;
}

void f_006b5464(void)
{
    FN_ENTER(0x006b5464);
    /* 006b5464: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b546a: movsx ecx, word ptr [0xa94ad8] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94ad8u));
    /* 006b5471: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b5473: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5475: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b5477:; BB(0x006b5477);
    /* 006b5477: movsx ecx, word ptr [0xa94ada] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94adau));
    /* 006b547e: mov eax, 1 */ r_eax = 0x1u;
    /* 006b5483: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5485: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b5487:; BB(0x006b5487);
    /* 006b5487: movsx ecx, word ptr [0xa94adc] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94adcu));
    /* 006b548e: mov eax, 2 */ r_eax = 0x2u;
    /* 006b5493: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5495: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b5497:; BB(0x006b5497);
    /* 006b5497: movsx ecx, word ptr [0xa94ade] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94adeu));
    /* 006b549e: mov eax, 3 */ r_eax = 0x3u;
    /* 006b54a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b54a5: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b54a7:; BB(0x006b54a7);
    /* 006b54a7: movsx ecx, word ptr [0xa94ae0] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94ae0u));
    /* 006b54ae: mov eax, 4 */ r_eax = 0x4u;
    /* 006b54b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b54b5: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b54b7:; BB(0x006b54b7);
    /* 006b54b7: movsx ecx, word ptr [0xa94ae2] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94ae2u));
    /* 006b54be: mov eax, 5 */ r_eax = 0x5u;
    /* 006b54c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b54c5: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b54c7:; BB(0x006b54c7);
    /* 006b54c7: movsx ecx, word ptr [0xa94ae4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94ae4u));
    /* 006b54ce: mov eax, 6 */ r_eax = 0x6u;
    /* 006b54d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b54d5: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b54d7:; BB(0x006b54d7);
    /* 006b54d7: movsx ecx, word ptr [0xa94ae6] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94ae6u));
    /* 006b54de: mov eax, 7 */ r_eax = 0x7u;
    /* 006b54e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b54e5: je 0x6b54e8 */ if (fZ) goto L_006b54e8;
L_006b54e7:; BB(0x006b54e7);
    /* 006b54e7: ret  */ FN_RET(0x006b5464); r_esp += 4; return;
L_006b54e8:; BB(0x006b54e8);
    /* 006b54e8: mov word ptr [eax*2 + 0xa94ad8], dx */ W16((u32)(r_eax*2+0xa94ad8u), (u16)r_edx);
    /* 006b54f0: ret  */ FN_RET(0x006b5464); r_esp += 4; return;
}

void f_006b54f4(void) /* sub_6B54F4 */
{
    FN_ENTER(0x006b54f4);
    /* 006b54f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b54f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b54f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b54f7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b54fa: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b5501: movzx ebp, byte ptr [0xa954d0] */ r_ebp = (u32)R8((u32)(0xa954d0u));
    /* 006b5508: mov edi, dword ptr [0xa954d4] */ r_edi = R32((u32)(0xa954d4u));
    /* 006b550e: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5514: jne 0x6b5547 */ if (!fZ) goto L_006b5547;
L_006b5516:; BB(0x006b5516);
    /* 006b5516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5517: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b551cu); f_0068d5a8();
    /* 006b551c: mov ebx, eax */ r_ebx = r_eax;
    /* 006b551e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5521: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5523: je 0x6b5547 */ if (fZ) goto L_006b5547;
L_006b5525:; BB(0x006b5525);
    /* 006b5525: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b552b: movzx ebp, byte ptr [edx + ebp*4] */ r_ebp = (u32)R8((u32)(r_edx+r_ebp*4));
    /* 006b552f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b5530: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5531: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 006b5535: call 0x5d6464 */ r_esp -= 4; W32(r_esp, 0x6b553au); f_005d6464();
    /* 006b553a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b553d: call 0x5d66c0 */ r_esp -= 4; W32(r_esp, 0x6b5542u); f_005d66c0();
    /* 006b5542: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5545: je 0x6b554e */ if (fZ) goto L_006b554e;
L_006b5547:; BB(0x006b5547);
    /* 006b5547: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b554a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b554b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b554c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b554d: ret  */ FN_RET(0x006b54f4); r_esp += 4; return;
L_006b554e:; BB(0x006b554e);
    /* 006b554e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b5551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5552: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b5554: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6b5559u); f_0068ec44();
    /* 006b5559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b555b: jle 0x6b5547 */ if ((fZ||fS!=fO)) goto L_006b5547;
L_006b555d:; BB(0x006b555d);
    /* 006b555d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b5560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5561: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b5563: call 0x68f3cc */ r_esp -= 4; W32(r_esp, 0x6b5568u); f_0068f3cc();
    /* 006b5568: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b556b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b556c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b556d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b556e: ret  */ FN_RET(0x006b54f4); r_esp += 4; return;
}

void f_006b5570(void) /* sub_6B5570 */
{
    FN_ENTER(0x006b5570);
    /* 006b5570: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5571: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5572: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5573: movzx esi, byte ptr [esp + 0x10] */ r_esi = (u32)R8((u32)(r_esp+0x10u));
    /* 006b5578: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b557e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5583u); f_0068d5a8();
    /* 006b5583: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5586: je 0x6b562f */ if (fZ) goto L_006b562f;
L_006b558c:; BB(0x006b558c);
    /* 006b558c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b558e: add eax, 0xdf8 */ {  u32 a = r_eax; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b5593: mov ecx, eax */ r_ecx = r_eax;
    /* 006b5595: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6b559au); f_0069792c();
    /* 006b559a: mov ecx, eax */ r_ecx = r_eax;
    /* 006b559c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b559e: je 0x6b562f */ if (fZ) goto L_006b562f;
L_006b55a4:; BB(0x006b55a4);
    /* 006b55a4: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 006b55a9: movsx ebx, word ptr [ecx + 0x1c0] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1c0u));
    /* 006b55b0: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006b55b2: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 006b55b7: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006b55ba: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006b55bd: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006b55bf: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006b55c2: mov ebx, dword ptr [0xa954b0] */ r_ebx = R32((u32)(0xa954b0u));
    /* 006b55c8: mov dword ptr [ebx + esi*4], edx */ W32((u32)(r_ebx+r_esi*4), r_edx);
    /* 006b55cb: movsx edi, word ptr [ecx + 0x1c2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x1c2u));
    /* 006b55d2: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006b55d4: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006b55d7: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 006b55dc: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006b55df: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006b55e1: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 006b55e4: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 006b55e7: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b55ea: mov dword ptr [ebx + edx*4], edi */ W32((u32)(r_ebx+r_edx*4), r_edi);
    /* 006b55ed: movsx edi, word ptr [ecx + 0x1c4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x1c4u));
    /* 006b55f4: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006b55f6: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006b55f9: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 006b55fe: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006b5601: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006b5603: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 006b5606: lea edx, [esi + 2] */ r_edx = (u32)(r_esi+0x2u);
    /* 006b5609: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b560c: mov dword ptr [ebx + edx*4], edi */ W32((u32)(r_ebx+r_edx*4), r_edi);
    /* 006b560f: movsx ecx, word ptr [ecx + 0x1c6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1c6u));
    /* 006b5616: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006b5618: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006b561b: lea esi, [esi + 3] */ r_esi = (u32)(r_esi+0x3u);
    /* 006b561e: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006b5621: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006b5623: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 006b5626: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b562c: mov dword ptr [ebx + esi*4], eax */ W32((u32)(r_ebx+r_esi*4), r_eax);
L_006b562f:; BB(0x006b562f);
    /* 006b562f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b5630: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b5631: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5632: ret  */ FN_RET(0x006b5570); r_esp += 4; return;
}

void f_006b5634(void)
{
    FN_ENTER(0x006b5634);
    /* 006b5634: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b563a: push dword ptr [0xa954d0] */ { u32 v = R32((u32)(0xa954d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5640: call 0x4da768 */ r_esp -= 4; W32(r_esp, 0x6b5645u); f_004da768();
    /* 006b5645: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b5648: ret  */ FN_RET(0x006b5634); r_esp += 4; return;
}

void f_006b564c(void)
{
    FN_ENTER(0x006b564c);
    /* 006b564c: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5652: call 0x6bcef8 */ r_esp -= 4; W32(r_esp, 0x6b5657u); f_006bcef8();
    /* 006b5657: mov dword ptr [0xa954a0], 9 */ W32((u32)(0xa954a0u), 0x9u);
    /* 006b5661: mov dword ptr [0xa9548c], eax */ W32((u32)(0xa9548cu), r_eax);
    /* 006b5666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5667: ret  */ FN_RET(0x006b564c); r_esp += 4; return;
}

void f_006b5668(void)
{
    FN_ENTER(0x006b5668);
    /* 006b5668: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b566e: call 0x6bd0f8 */ r_esp -= 4; W32(r_esp, 0x6b5673u); f_006bd0f8();
    /* 006b5673: mov dword ptr [0xa954a0], 0xa */ W32((u32)(0xa954a0u), 0xau);
    /* 006b567d: mov dword ptr [0xa95490], eax */ W32((u32)(0xa95490u), r_eax);
    /* 006b5682: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5683: ret  */ FN_RET(0x006b5668); r_esp += 4; return;
}

void f_006b5684(void) /* sub_6B5684 */
{
    FN_ENTER(0x006b5684);
    /* 006b5684: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b5687: call 0x6bd288 */ r_esp -= 4; W32(r_esp, 0x6b568cu); f_006bd288();
    /* 006b568c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b568f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5690: push 0xa95a8c */ { u32 v = 0xa95a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b5695: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 006b5699: call 0x5d6464 */ r_esp -= 4; W32(r_esp, 0x6b569eu); f_005d6464();
    /* 006b569e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b56a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b56a2: call 0x4daa98 */ r_esp -= 4; W32(r_esp, 0x6b56a7u); f_004daa98();
    /* 006b56a7: mov edx, eax */ r_edx = r_eax;
    /* 006b56a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b56ac: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b56b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b56b3: je 0x6b56c5 */ if (fZ) goto L_006b56c5;
L_006b56b5:; BB(0x006b56b5);
    /* 006b56b5: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 006b56ba: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b56c1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b56c4: ret  */ FN_RET(0x006b5684); r_esp += 4; return;
L_006b56c5:; BB(0x006b56c5);
    /* 006b56c5: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 006b56ca: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b56d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b56d4: ret  */ FN_RET(0x006b5684); r_esp += 4; return;
}

void f_006b56d8(void)
{
    FN_ENTER(0x006b56d8);
    /* 006b56d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b56d9: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b56de: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 006b56e1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b56e4: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b56ea: lea edi, [ecx + 2] */ r_edi = (u32)(r_ecx+0x2u);
    /* 006b56ed: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b56f3: push dword ptr [edx + edi*4] */ { u32 v = R32((u32)(r_edx+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b56f6: push dword ptr [edx + eax*4] */ { u32 v = R32((u32)(r_edx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b56f9: push dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b56fc: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x6b5701u); f_004da890();
    /* 006b5701: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5704: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b570a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b570c: je 0x6b571c */ if (fZ) goto L_006b571c;
L_006b570e:; BB(0x006b570e);
    /* 006b570e: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 006b5713: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 006b571a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b571b: ret  */ FN_RET(0x006b56d8); r_esp += 4; return;
L_006b571c:; BB(0x006b571c);
    /* 006b571c: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 006b5721: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 006b5728: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5729: ret  */ FN_RET(0x006b56d8); r_esp += 4; return;
}

void f_006b572c(void) /* sub_6B572C */
{
    FN_ENTER(0x006b572c);
    /* 006b572c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b572d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b5730: movzx ecx, byte ptr [esp + 0x18] */ r_ecx = (u32)R8((u32)(r_esp+0x18u));
    /* 006b5735: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b573a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b573f: mov ebx, dword ptr [eax + ecx*4] */ r_ebx = R32((u32)(r_eax+r_ecx*4));
    /* 006b5742: lea ecx, [ecx + 1] */ r_ecx = (u32)(r_ecx+0x1u);
    /* 006b5745: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5748: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b574b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b574f: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b5756: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5757: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b575cu); f_0068d5a8();
    /* 006b575c: mov ecx, eax */ r_ecx = r_eax;
    /* 006b575e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5761: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5763: je 0x6b57d9 */ if (fZ) goto L_006b57d9;
L_006b5765:; BB(0x006b5765);
    /* 006b5765: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 006b576b: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006b576f: mov esi, ecx */ r_esi = r_ecx;
    /* 006b5771: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b5775: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006b5778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b577a: mov edi, ebx */ r_edi = r_ebx;
    /* 006b577c: mov ebx, eax */ r_ebx = r_eax;
    /* 006b577e: mov ebp, edx */ r_ebp = r_edx;
L_006b5780:; BB(0x006b5780);
    /* 006b5780: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5782: je 0x6b57c6 */ if (fZ) goto L_006b57c6;
L_006b5784:; BB(0x006b5784);
    /* 006b5784: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5785: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b578au); f_0068d5a8();
    /* 006b578a: mov edx, eax */ r_edx = r_eax;
    /* 006b578c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b578f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5791: je 0x6b57c6 */ if (fZ) goto L_006b57c6;
L_006b5793:; BB(0x006b5793);
    /* 006b5793: cmp ebp, dword ptr [edx + 0x3f0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5799: jne 0x6b57c6 */ if (!fZ) goto L_006b57c6;
L_006b579b:; BB(0x006b579b);
    /* 006b579b: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 006b579e: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b57a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b57a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b57a3: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x6b57a8u); f_0078ea2c();
    /* 006b57a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b57ab: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006b57af: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006b57b1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006b57b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b57b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b57b6: jbe 0x6b57c6 */ if ((fC||fZ)) goto L_006b57c6;
L_006b57b8:; BB(0x006b57b8);
    /* 006b57b8: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b57bd: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b57c2: add dword ptr [eax + edx*4], 1 */ { u32 ad = (u32)(r_eax+r_edx*4);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006b57c6:; BB(0x006b57c6);
    /* 006b57c6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b57c9: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b57cc: jl 0x6b5780 */ if ((fS!=fO)) goto L_006b5780;
L_006b57ce:; BB(0x006b57ce);
    /* 006b57ce: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006b57d2: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006b57d6: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006b57d9:; BB(0x006b57d9);
    /* 006b57d9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b57dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b57dd: ret  */ FN_RET(0x006b572c); r_esp += 4; return;
}

void f_006b57e0(void)
{
    FN_ENTER(0x006b57e0);
    /* 006b57e0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b57e5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b57ea: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b57ed: call 0x4da994 */ r_esp -= 4; W32(r_esp, 0x6b57f2u); f_004da994();
    /* 006b57f2: mov edx, eax */ r_edx = r_eax;
    /* 006b57f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b57f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b57fa: je 0x6b587f */ if (fZ) goto L_006b587f;
L_006b5800:; BB(0x006b5800);
    /* 006b5800: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5803: je 0x6b586d */ if (fZ) goto L_006b586d;
L_006b5805:; BB(0x006b5805);
    /* 006b5805: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5807: je 0x6b585b */ if (fZ) goto L_006b585b;
L_006b5809:; BB(0x006b5809);
    /* 006b5809: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b580c: je 0x6b5849 */ if (fZ) goto L_006b5849;
L_006b580e:; BB(0x006b580e);
    /* 006b580e: cmp edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5811: jne 0x6b5825 */ if (!fZ) goto L_006b5825;
L_006b5813:; BB(0x006b5813);
    /* 006b5813: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5818: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b581d: mov dword ptr [eax + edx*4], 4 */ W32((u32)(r_eax+r_edx*4), 0x4u);
    /* 006b5824: ret  */ FN_RET(0x006b57e0); r_esp += 4; return;
L_006b5825:; BB(0x006b5825);
    /* 006b5825: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b582a: cmp edx, -3 */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b582d: jne 0x6b583c */ if (!fZ) goto L_006b583c;
L_006b582f:; BB(0x006b582f);
    /* 006b582f: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5834: mov dword ptr [eax + edx*4], 5 */ W32((u32)(r_eax+r_edx*4), 0x5u);
    /* 006b583b: ret  */ FN_RET(0x006b57e0); r_esp += 4; return;
L_006b583c:; BB(0x006b583c);
    /* 006b583c: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5841: mov dword ptr [eax + edx*4], 6 */ W32((u32)(r_eax+r_edx*4), 0x6u);
    /* 006b5848: ret  */ FN_RET(0x006b57e0); r_esp += 4; return;
L_006b5849:; BB(0x006b5849);
    /* 006b5849: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b584e: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5853: mov dword ptr [eax + edx*4], 3 */ W32((u32)(r_eax+r_edx*4), 0x3u);
    /* 006b585a: ret  */ FN_RET(0x006b57e0); r_esp += 4; return;
L_006b585b:; BB(0x006b585b);
    /* 006b585b: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5860: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5865: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b586c: ret  */ FN_RET(0x006b57e0); r_esp += 4; return;
L_006b586d:; BB(0x006b586d);
    /* 006b586d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5872: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5877: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b587e: ret  */ FN_RET(0x006b57e0); r_esp += 4; return;
L_006b587f:; BB(0x006b587f);
    /* 006b587f: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5884: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5889: mov dword ptr [eax + edx*4], 2 */ W32((u32)(r_eax+r_edx*4), 0x2u);
    /* 006b5890: ret  */ FN_RET(0x006b57e0); r_esp += 4; return;
}

void f_006b5894(void) /* sub_6B5894 */
{
    FN_ENTER(0x006b5894);
    /* 006b5894: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5895: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b5898: movzx esi, byte ptr [esp + 0x1c] */ r_esi = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b589d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b58a0: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b58a5u); f_005d6a3c();
    /* 006b58a5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b58aa: mov edx, dword ptr [eax + esi*4] */ r_edx = R32((u32)(r_eax+r_esi*4));
    /* 006b58ad: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 006b58b0: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 006b58b3: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b58b6: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006b58b9: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b58bd: lea edx, [esi + 2] */ r_edx = (u32)(r_esi+0x2u);
    /* 006b58c0: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b58c3: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b58c6: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b58ca: lea edx, [esi + 3] */ r_edx = (u32)(r_esi+0x3u);
    /* 006b58cd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b58d0: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b58d3: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 006b58d7: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 006b58da: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b58dd: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b58e0: lea esi, [esi + 5] */ r_esi = (u32)(r_esi+0x5u);
    /* 006b58e3: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b58e7: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b58ed: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 006b58f0: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 006b58f4: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006b58fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b58fc: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6b5901u); f_005e3aac();
    /* 006b5901: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006b5905: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b5909: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b590a: call 0x4daa98 */ r_esp -= 4; W32(r_esp, 0x6b590fu); f_004daa98();
    /* 006b590f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5912: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b591a: je 0x6b592d */ if (fZ) goto L_006b592d;
L_006b591c:; BB(0x006b591c);
    /* 006b591c: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 006b5921: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 006b5928: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b592b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b592c: ret  */ FN_RET(0x006b5894); r_esp += 4; return;
L_006b592d:; BB(0x006b592d);
    /* 006b592d: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 006b5932: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 006b5939: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b593c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b593d: ret  */ FN_RET(0x006b5894); r_esp += 4; return;
}

void f_006b5940(void)
{
    FN_ENTER(0x006b5940);
    /* 006b5940: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5945: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b594a: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b594d: call 0x5cb93c */ r_esp -= 4; W32(r_esp, 0x6b5952u); f_005cb93c();
    /* 006b5952: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5953: ret  */ FN_RET(0x006b5940); r_esp += 4; return;
}

void f_006b5954(void)
{
    FN_ENTER(0x006b5954);
    /* 006b5954: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b595a: call 0x6bd2a4 */ r_esp -= 4; W32(r_esp, 0x6b595fu); f_006bd2a4();
    /* 006b595f: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5964: mov dword ptr [0xa954a0], 0xb */ W32((u32)(0xa954a0u), 0xbu);
    /* 006b596e: mov dword ptr [0xa95494], eax */ W32((u32)(0xa95494u), r_eax);
    /* 006b5973: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5978: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b597f: mov byte ptr [0xa954b4], dl */ W8((u32)(0xa954b4u), (u8)r_edx);
    /* 006b5985: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5986: ret  */ FN_RET(0x006b5954); r_esp += 4; return;
}

void f_006b5988(void) /* sub_6B5988 */
{
    FN_ENTER(0x006b5988);
    /* 006b5988: mov dword ptr [0xa8ef94], 1 */ W32((u32)(0xa8ef94u), 0x1u);
    /* 006b5992: ret  */ FN_RET(0x006b5988); r_esp += 4; return;
}

void f_006b5994(void) /* sub_6B5994 */
{
    FN_ENTER(0x006b5994);
    /* 006b5994: mov dword ptr [0xa8ef94], 0 */ W32((u32)(0xa8ef94u), 0x0u);
    /* 006b599e: ret  */ FN_RET(0x006b5994); r_esp += 4; return;
}

void f_006b59a0(void)
{
    FN_ENTER(0x006b59a0);
    /* 006b59a0: call 0x44d14c */ r_esp -= 4; W32(r_esp, 0x6b59a5u); f_0044d14c();
    /* 006b59a5: mov edx, eax */ r_edx = r_eax;
    /* 006b59a7: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b59ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b59ae: je 0x6b59bd */ if (fZ) goto L_006b59bd;
L_006b59b0:; BB(0x006b59b0);
    /* 006b59b0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b59b5: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b59bc: ret  */ FN_RET(0x006b59a0); r_esp += 4; return;
L_006b59bd:; BB(0x006b59bd);
    /* 006b59bd: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b59c2: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b59c9: ret  */ FN_RET(0x006b59a0); r_esp += 4; return;
}

void f_006b59cc(void)
{
    FN_ENTER(0x006b59cc);
    /* 006b59cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b59cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006b59cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b59d1: push 0x8ebef6 */ { u32 v = 0x8ebef6u; r_esp -= 4; W32(r_esp, v); }
    /* 006b59d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b59dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b59dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b59e4: sub esp, 0x420 */ {  u32 a = r_esp; u32 b = 0x420u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b59ea: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b59ed: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006b59f0: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006b59f3: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006b59f6: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b59fb: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b5a01: mov dword ptr [ebp - 0x42c], 0 */ W32((u32)(r_ebp+0xfffffbd4u), 0x0u);
    /* 006b5a0b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006b5a0e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006b5a11: push 0x20a8 */ { u32 v = 0x20a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a16: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b5a1bu); f_005caba4();
    /* 006b5a1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5a1c: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
    /* 006b5a22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5a24: je 0x6b5ad5 */ if (fZ) goto L_006b5ad5;
L_006b5a2a:; BB(0x006b5a2a);
    /* 006b5a2a: mov dword ptr [ebp - 0x42c], 1 */ W32((u32)(r_ebp+0xfffffbd4u), 0x1u);
    /* 006b5a34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b5a3b: mov ecx, dword ptr [ebp - 0x428] */ r_ecx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 006b5a41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b5a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a46: call 0x815cc0 */ r_esp -= 4; W32(r_esp, 0x6b5a4bu); f_00815cc0();
    /* 006b5a4b: mov ebx, dword ptr [ebp - 0x428] */ r_ebx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 006b5a51: mov dword ptr [ebp - 0x42c], 0 */ W32((u32)(r_ebp+0xfffffbd4u), 0x0u);
L_006b5a5b:; BB(0x006b5a5b);
    /* 006b5a5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b5a62: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b5a65: lea edx, [ebp - 0x424] */ r_edx = (u32)(r_ebp+0xfffffbdcu);
    /* 006b5a6b: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a72: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b5a77u); f_00857dec();
    /* 006b5a77: lea eax, [ebp - 0x424] */ r_eax = (u32)(r_ebp+0xfffffbdcu);
    /* 006b5a7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a7e: call 0x815844 */ r_esp -= 4; W32(r_esp, 0x6b5a83u); f_00815844();
    /* 006b5a83: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5a86: lea eax, [ebp - 0x424] */ r_eax = (u32)(r_ebp+0xfffffbdcu);
    /* 006b5a8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5a8d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b5a8f: call 0x815ad8 */ r_esp -= 4; W32(r_esp, 0x6b5a94u); f_00815ad8();
    /* 006b5a94: mov eax, dword ptr [ebx + 0x209c] */ r_eax = R32((u32)(r_ebx+0x209cu));
    /* 006b5a9a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5a9d: je 0x6b5abf */ if (fZ) goto L_006b5abf;
L_006b5a9f:; BB(0x006b5a9f);
    /* 006b5a9f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5aa1: je 0x6b5aab */ if (fZ) goto L_006b5aab;
L_006b5aa3:; BB(0x006b5aa3);
    /* 006b5aa3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b5aa5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006b5aa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b5aa9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6b5aabu); call_ind(t); }
L_006b5aab:; BB(0x006b5aab);
    /* 006b5aab: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b5aae: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b5ab1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b5ab4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b5abb: mov esp, ebp */ r_esp = r_ebp;
    /* 006b5abd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b5abe: ret  */ FN_RET(0x006b59cc); r_esp += 4; return;
L_006b5abf:; BB(0x006b5abf);
    /* 006b5abf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b5ac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5ac3: lea esi, [ebx + 0x1c] */ r_esi = (u32)(r_ebx+0x1cu);
    /* 006b5ac6: lea edx, [ebx + 0x5c] */ r_edx = (u32)(r_ebx+0x5cu);
    /* 006b5ac9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5aca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5acb: call 0x4da7f8 */ r_esp -= 4; W32(r_esp, 0x6b5ad0u); f_004da7f8();
    /* 006b5ad0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5ad3: jmp 0x6b5a9f */ goto L_006b5a9f;
L_006b5ad5:; BB(0x006b5ad5);
    /* 006b5ad5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006b5ad7: jmp 0x6b5a5b */ goto L_006b5a5b;
}

void f_006b5adc(void)
{
    FN_ENTER(0x006b5adc);
    /* 006b5adc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5add: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5ae2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5ae7: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5aea: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5aefu); f_0068d5a8();
    /* 006b5aef: mov esi, eax */ r_esi = r_eax;
    /* 006b5af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5af4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5af6: je 0x6b5b0a */ if (fZ) goto L_006b5b0a;
L_006b5af8:; BB(0x006b5af8);
    /* 006b5af8: mov ecx, esi */ r_ecx = r_esi;
    /* 006b5afa: call 0x7ba9d8 */ r_esp -= 4; W32(r_esp, 0x6b5affu); f_007ba9d8();
    /* 006b5aff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5b01: je 0x6b5b0a */ if (fZ) goto L_006b5b0a;
L_006b5b03:; BB(0x006b5b03);
    /* 006b5b03: mov ecx, esi */ r_ecx = r_esi;
    /* 006b5b05: call 0x693258 */ r_esp -= 4; W32(r_esp, 0x6b5b0au); f_00693258();
L_006b5b0a:; BB(0x006b5b0a);
    /* 006b5b0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b5b0b: ret  */ FN_RET(0x006b5adc); r_esp += 4; return;
}

void f_006b5b0c(void)
{
    FN_ENTER(0x006b5b0c);
    /* 006b5b0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5b0d: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5b12: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5b17: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5b1a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5b1fu); f_0068d5a8();
    /* 006b5b1f: mov esi, eax */ r_esi = r_eax;
    /* 006b5b21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5b24: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5b26: je 0x6b5b3a */ if (fZ) goto L_006b5b3a;
L_006b5b28:; BB(0x006b5b28);
    /* 006b5b28: mov ecx, esi */ r_ecx = r_esi;
    /* 006b5b2a: call 0x7ba9d8 */ r_esp -= 4; W32(r_esp, 0x6b5b2fu); f_007ba9d8();
    /* 006b5b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5b31: je 0x6b5b3a */ if (fZ) goto L_006b5b3a;
L_006b5b33:; BB(0x006b5b33);
    /* 006b5b33: mov ecx, esi */ r_ecx = r_esi;
    /* 006b5b35: call 0x688eb4 */ r_esp -= 4; W32(r_esp, 0x6b5b3au); f_00688eb4();
L_006b5b3a:; BB(0x006b5b3a);
    /* 006b5b3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b5b3b: ret  */ FN_RET(0x006b5b0c); r_esp += 4; return;
}

void f_006b5b3c(void)
{
    FN_ENTER(0x006b5b3c);
    /* 006b5b3c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5b41: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5b46: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5b49: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5b4eu); f_0068d5a8();
    /* 006b5b4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5b4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5b51: je 0x6b5b62 */ if (fZ) goto L_006b5b62;
L_006b5b53:; BB(0x006b5b53);
    /* 006b5b53: mov edx, dword ptr [eax + 0x470] */ r_edx = R32((u32)(r_eax+0x470u));
    /* 006b5b59: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5b5c: mov dword ptr [eax + 0x470], edx */ W32((u32)(r_eax+0x470u), r_edx);
L_006b5b62:; BB(0x006b5b62);
    /* 006b5b62: ret  */ FN_RET(0x006b5b3c); r_esp += 4; return;
}

void f_006b5b64(void)
{
    FN_ENTER(0x006b5b64);
    /* 006b5b64: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5b69: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5b6e: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5b71: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5b76u); f_0068d5a8();
    /* 006b5b76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5b77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5b79: je 0x6b5b8a */ if (fZ) goto L_006b5b8a;
L_006b5b7b:; BB(0x006b5b7b);
    /* 006b5b7b: mov edx, dword ptr [eax + 0x470] */ r_edx = R32((u32)(r_eax+0x470u));
    /* 006b5b81: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5b84: mov dword ptr [eax + 0x470], edx */ W32((u32)(r_eax+0x470u), r_edx);
L_006b5b8a:; BB(0x006b5b8a);
    /* 006b5b8a: ret  */ FN_RET(0x006b5b64); r_esp += 4; return;
}

void f_006b5b8c(void)
{
    FN_ENTER(0x006b5b8c);
    /* 006b5b8c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5b91: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5b96: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5b99: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5b9eu); f_0068d5a8();
    /* 006b5b9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5b9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5ba1: je 0x6b5be4 */ if (fZ) goto L_006b5be4;
L_006b5ba3:; BB(0x006b5ba3);
    /* 006b5ba3: mov edx, dword ptr [eax + 0x964] */ r_edx = R32((u32)(r_eax+0x964u));
    /* 006b5ba9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5bac: je 0x6b5bc0 */ if (fZ) goto L_006b5bc0;
L_006b5bae:; BB(0x006b5bae);
    /* 006b5bae: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5bb3: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5bb8: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b5bbf: ret  */ FN_RET(0x006b5b8c); r_esp += 4; return;
L_006b5bc0:; BB(0x006b5bc0);
    /* 006b5bc0: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5bc5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5bc8: je 0x6b5bd7 */ if (fZ) goto L_006b5bd7;
L_006b5bca:; BB(0x006b5bca);
    /* 006b5bca: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5bcf: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b5bd6: ret  */ FN_RET(0x006b5b8c); r_esp += 4; return;
L_006b5bd7:; BB(0x006b5bd7);
    /* 006b5bd7: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5bdc: mov dword ptr [eax + edx*4], 2 */ W32((u32)(r_eax+r_edx*4), 0x2u);
    /* 006b5be3: ret  */ FN_RET(0x006b5b8c); r_esp += 4; return;
L_006b5be4:; BB(0x006b5be4);
    /* 006b5be4: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5be9: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5bee: mov dword ptr [eax + edx*4], 2 */ W32((u32)(r_eax+r_edx*4), 0x2u);
    /* 006b5bf5: ret  */ FN_RET(0x006b5b8c); r_esp += 4; return;
}

void f_006b5bf8(void)
{
    FN_ENTER(0x006b5bf8);
    /* 006b5bf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5bf9: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5bfe: movzx edi, byte ptr [esp + 0xc] */ r_edi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b5c03: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5c08: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5c0b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5c10u); f_0068d5a8();
    /* 006b5c10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5c11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5c13: je 0x6b5c9e */ if (fZ) goto L_006b5c9e;
L_006b5c19:; BB(0x006b5c19);
    /* 006b5c19: mov eax, dword ptr [eax + 0x964] */ r_eax = R32((u32)(r_eax+0x964u));
    /* 006b5c1f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b5c21: je 0x6b5c32 */ if (fZ) goto L_006b5c32;
L_006b5c23:; BB(0x006b5c23);
    /* 006b5c23: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5c29: mov dword ptr [edx + edi*4], 0 */ W32((u32)(r_edx+r_edi*4), 0x0u);
    /* 006b5c30: jmp 0x6b5c5f */ goto L_006b5c5f;
L_006b5c32:; BB(0x006b5c32);
    /* 006b5c32: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b5c34: je 0x6b5c45 */ if (fZ) goto L_006b5c45;
L_006b5c36:; BB(0x006b5c36);
    /* 006b5c36: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5c3c: mov dword ptr [edx + edi*4], 1 */ W32((u32)(r_edx+r_edi*4), 0x1u);
    /* 006b5c43: jmp 0x6b5c5f */ goto L_006b5c5f;
L_006b5c45:; BB(0x006b5c45);
    /* 006b5c45: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5c4b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b5c4d: je 0x6b5c58 */ if (fZ) goto L_006b5c58;
L_006b5c4f:; BB(0x006b5c4f);
    /* 006b5c4f: mov dword ptr [edx + edi*4], 2 */ W32((u32)(r_edx+r_edi*4), 0x2u);
    /* 006b5c56: jmp 0x6b5c5f */ goto L_006b5c5f;
L_006b5c58:; BB(0x006b5c58);
    /* 006b5c58: mov dword ptr [edx + edi*4], 3 */ W32((u32)(r_edx+r_edi*4), 0x3u);
L_006b5c5f:; BB(0x006b5c5f);
    /* 006b5c5f: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 006b5c62: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5c64: je 0x6b5c72 */ if (fZ) goto L_006b5c72;
L_006b5c66:; BB(0x006b5c66);
    /* 006b5c66: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5c69: mov dword ptr [edx + ecx*4], 0 */ W32((u32)(r_edx+r_ecx*4), 0x0u);
    /* 006b5c70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5c71: ret  */ FN_RET(0x006b5bf8); r_esp += 4; return;
L_006b5c72:; BB(0x006b5c72);
    /* 006b5c72: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5c74: je 0x6b5c82 */ if (fZ) goto L_006b5c82;
L_006b5c76:; BB(0x006b5c76);
    /* 006b5c76: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5c79: mov dword ptr [edx + ecx*4], 1 */ W32((u32)(r_edx+r_ecx*4), 0x1u);
    /* 006b5c80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5c81: ret  */ FN_RET(0x006b5bf8); r_esp += 4; return;
L_006b5c82:; BB(0x006b5c82);
    /* 006b5c82: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5c85: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5c8a: je 0x6b5c95 */ if (fZ) goto L_006b5c95;
L_006b5c8c:; BB(0x006b5c8c);
    /* 006b5c8c: mov dword ptr [edx + ecx*4], 2 */ W32((u32)(r_edx+r_ecx*4), 0x2u);
    /* 006b5c93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5c94: ret  */ FN_RET(0x006b5bf8); r_esp += 4; return;
L_006b5c95:; BB(0x006b5c95);
    /* 006b5c95: mov dword ptr [edx + ecx*4], 3 */ W32((u32)(r_edx+r_ecx*4), 0x3u);
    /* 006b5c9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5c9d: ret  */ FN_RET(0x006b5bf8); r_esp += 4; return;
L_006b5c9e:; BB(0x006b5c9e);
    /* 006b5c9e: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5ca4: mov eax, 3 */ r_eax = 0x3u;
    /* 006b5ca9: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006b5cac: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 006b5caf: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5cb2: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b5cb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5cb6: ret  */ FN_RET(0x006b5bf8); r_esp += 4; return;
}

void f_006b5cb8(void) /* sub_6B5CB8 */
{
    FN_ENTER(0x006b5cb8);
    /* 006b5cb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5cb9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b5cbc: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b5cc1: lea ebx, [edx + 1] */ r_ebx = (u32)(r_edx+0x1u);
    /* 006b5cc4: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5cc9: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5ccc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5cd1u); f_0068d5a8();
    /* 006b5cd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5cd4: je 0x6b5d43 */ if (fZ) goto L_006b5d43;
L_006b5cd6:; BB(0x006b5cd6);
    /* 006b5cd6: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5cdc: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b5cdf: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5ce2: mov ecx, eax */ r_ecx = r_eax;
    /* 006b5ce4: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x6b5ce9u); f_007772bc();
    /* 006b5ce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b5ceb: jne 0x6b5d03 */ if (!fZ) goto L_006b5d03;
L_006b5ced:; BB(0x006b5ced);
    /* 006b5ced: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5cf2: movzx edx, byte ptr [esp + 0x14] */ r_edx = (u32)R8((u32)(r_esp+0x14u));
    /* 006b5cf7: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b5cfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b5d01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b5d02: ret  */ FN_RET(0x006b5cb8); r_esp += 4; return;
L_006b5d03:; BB(0x006b5d03);
    /* 006b5d03: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5d09: mov byte ptr [esp], 0xc9 */ W8((u32)(r_esp), 0xc9u);
    /* 006b5d0d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b5d12: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006b5d17: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b5d1c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b5d1f: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 006b5d22: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006b5d24: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006b5d28: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b5d2du); f_00800518();
    /* 006b5d2d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5d32: movzx edx, byte ptr [esp + 0x14] */ r_edx = (u32)R8((u32)(r_esp+0x14u));
    /* 006b5d37: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b5d3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b5d41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b5d42: ret  */ FN_RET(0x006b5cb8); r_esp += 4; return;
L_006b5d43:; BB(0x006b5d43);
    /* 006b5d43: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 006b5d48: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b5d4e: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 006b5d51: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b5d54: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 006b5d5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b5d5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b5d5f: ret  */ FN_RET(0x006b5cb8); r_esp += 4; return;
}

void f_006b5d60(void)
{
    FN_ENTER(0x006b5d60);
    /* 006b5d60: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5d65: mov ecx, dword ptr [0xa95df4] */ r_ecx = R32((u32)(0xa95df4u));
    /* 006b5d6b: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5d70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5d72: je 0x6b5d7e */ if (fZ) goto L_006b5d7e;
L_006b5d74:; BB(0x006b5d74);
    /* 006b5d74: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 006b5d7a: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b5d7d: ret  */ FN_RET(0x006b5d60); r_esp += 4; return;
L_006b5d7e:; BB(0x006b5d7e);
    /* 006b5d7e: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b5d85: ret  */ FN_RET(0x006b5d60); r_esp += 4; return;
}

void f_006b5d88(void)
{
    FN_ENTER(0x006b5d88);
    /* 006b5d88: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5d8d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5d92: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5d95: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5d9au); f_0068d5a8();
    /* 006b5d9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5d9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5d9d: je 0x6b5da6 */ if (fZ) goto L_006b5da6;
L_006b5d9f:; BB(0x006b5d9f);
    /* 006b5d9f: mov ecx, eax */ r_ecx = r_eax;
    /* 006b5da1: call 0x691ecc */ r_esp -= 4; W32(r_esp, 0x6b5da6u); f_00691ecc();
L_006b5da6:; BB(0x006b5da6);
    /* 006b5da6: ret  */ FN_RET(0x006b5d88); r_esp += 4; return;
}

void f_006b5da8(void)
{
    FN_ENTER(0x006b5da8);
    /* 006b5da8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5da9: movzx edi, byte ptr [esp + 8] */ r_edi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5dae: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6b5db3u); f_006dc358();
    /* 006b5db3: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5db9: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006b5dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5dbe: jne 0x6b5dce */ if (!fZ) goto L_006b5dce;
L_006b5dc0:; BB(0x006b5dc0);
    /* 006b5dc0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6b5dc5u); f_006dc358();
    /* 006b5dc5: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5dcb: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
L_006b5dce:; BB(0x006b5dce);
    /* 006b5dce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5dcf: ret  */ FN_RET(0x006b5da8); r_esp += 4; return;
}

void f_006b5dd0(void)
{
    FN_ENTER(0x006b5dd0);
    /* 006b5dd0: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006b5dd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5dd8: je 0x6b5e00 */ if (fZ) goto L_006b5e00;
L_006b5dda:; BB(0x006b5dda);
    /* 006b5dda: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5ddf: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5de4: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b5de7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5de9: jl 0x6b5e00 */ if ((fS!=fO)) goto L_006b5e00;
L_006b5deb:; BB(0x006b5deb);
    /* 006b5deb: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5df1: jge 0x6b5e00 */ if ((fS==fO)) goto L_006b5e00;
L_006b5df3:; BB(0x006b5df3);
    /* 006b5df3: movzx edx, byte ptr [ecx + edx + 0x10] */ r_edx = (u32)R8((u32)(r_ecx+r_edx+0x10u));
    /* 006b5df8: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5dfd: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
L_006b5e00:; BB(0x006b5e00);
    /* 006b5e00: ret  */ FN_RET(0x006b5dd0); r_esp += 4; return;
}

void f_006b5e04(void)
{
    FN_ENTER(0x006b5e04);
    /* 006b5e04: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5e09: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5e0f: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5e12: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b5e15: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b5e18: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b5e1b: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b5e1e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b5e21: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b5e24: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b5e26: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006b5e28: fstp dword ptr [0xa8ef90] */ W_F32((u32)(0xa8ef90u), ST(0)); FPOP();
    /* 006b5e2e: ret  */ FN_RET(0x006b5e04); r_esp += 4; return;
}

void f_006b5e30(void)
{
    FN_ENTER(0x006b5e30);
    /* 006b5e30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5e31: movzx esi, byte ptr [esp + 8] */ r_esi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5e36: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5e3b: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5e3e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5e43u); f_0068d5a8();
    /* 006b5e43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5e44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5e46: je 0x6b5e76 */ if (fZ) goto L_006b5e76;
L_006b5e48:; BB(0x006b5e48);
    /* 006b5e48: mov ecx, eax */ r_ecx = r_eax;
    /* 006b5e4a: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x6b5e4fu); f_006936b4();
    /* 006b5e4f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006b5e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5e52: push 0xa95540 */ { u32 v = 0xa95540u; r_esp -= 4; W32(r_esp, v); }
    /* 006b5e57: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b5e5cu); f_00857dec();
    /* 006b5e5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5e5f: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5e65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5e67: mov word ptr [0xa9555e], ax */ W16((u32)(0xa9555eu), (u16)r_eax);
    /* 006b5e6d: mov dword ptr [edx + esi*4], 1 */ W32((u32)(r_edx+r_esi*4), 0x1u);
    /* 006b5e74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b5e75: ret  */ FN_RET(0x006b5e30); r_esp += 4; return;
L_006b5e76:; BB(0x006b5e76);
    /* 006b5e76: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5e7b: mov dword ptr [eax + esi*4], 0 */ W32((u32)(r_eax+r_esi*4), 0x0u);
    /* 006b5e82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b5e83: ret  */ FN_RET(0x006b5e30); r_esp += 4; return;
}

void f_006b5e84(void)
{
    FN_ENTER(0x006b5e84);
    /* 006b5e84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5e85: movzx esi, byte ptr [esp + 8] */ r_esi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5e8a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5e8f: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5e92: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5e97u); f_0068d5a8();
    /* 006b5e97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5e98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5e9a: je 0x6b5ece */ if (fZ) goto L_006b5ece;
L_006b5e9c:; BB(0x006b5e9c);
    /* 006b5e9c: push dword ptr [eax + 0x964] */ { u32 v = R32((u32)(r_eax+0x964u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5ea2: call 0x7930fc */ r_esp -= 4; W32(r_esp, 0x6b5ea7u); f_007930fc();
    /* 006b5ea7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006b5ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b5eaa: push 0xa95560 */ { u32 v = 0xa95560u; r_esp -= 4; W32(r_esp, v); }
    /* 006b5eaf: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b5eb4u); f_00857dec();
    /* 006b5eb4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b5eb7: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5ebd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5ebf: mov word ptr [0xa9557e], ax */ W16((u32)(0xa9557eu), (u16)r_eax);
    /* 006b5ec5: mov dword ptr [edx + esi*4], 1 */ W32((u32)(r_edx+r_esi*4), 0x1u);
    /* 006b5ecc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b5ecd: ret  */ FN_RET(0x006b5e84); r_esp += 4; return;
L_006b5ece:; BB(0x006b5ece);
    /* 006b5ece: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5ed3: mov dword ptr [eax + esi*4], 0 */ W32((u32)(r_eax+r_esi*4), 0x0u);
    /* 006b5eda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b5edb: ret  */ FN_RET(0x006b5e84); r_esp += 4; return;
}

void f_006b5edc(void)
{
    FN_ENTER(0x006b5edc);
    /* 006b5edc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5edd: mov ecx, dword ptr [0xa954cc] */ r_ecx = R32((u32)(0xa954ccu));
    /* 006b5ee3: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b5ee8: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006b5eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5ef0: je 0x6b5f0d */ if (fZ) goto L_006b5f0d;
L_006b5ef2:; BB(0x006b5ef2);
    /* 006b5ef2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5ef4: jb 0x6b5f0d */ if (fC) goto L_006b5f0d;
L_006b5ef6:; BB(0x006b5ef6);
    /* 006b5ef6: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5efc: jae 0x6b5f0d */ if (!fC) goto L_006b5f0d;
L_006b5efe:; BB(0x006b5efe);
    /* 006b5efe: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 006b5f02: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b5f06: lea edx, [edx + ecx + 0x10] */ r_edx = (u32)(r_edx+r_ecx+0x10u);
    /* 006b5f0a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_006b5f0d:; BB(0x006b5f0d);
    /* 006b5f0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5f0e: ret  */ FN_RET(0x006b5edc); r_esp += 4; return;
}

void f_006b5f10(void)
{
    FN_ENTER(0x006b5f10);
    /* 006b5f10: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5f15: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5f1a: movzx ecx, word ptr [eax + edx*4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*4));
    /* 006b5f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5f1f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b5f24u); f_0068d5a8();
    /* 006b5f24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5f25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5f27: je 0x6b5f3e */ if (fZ) goto L_006b5f3e;
L_006b5f29:; BB(0x006b5f29);
    /* 006b5f29: mov ecx, eax */ r_ecx = r_eax;
    /* 006b5f2b: call 0x7aa460 */ r_esp -= 4; W32(r_esp, 0x6b5f30u); f_007aa460();
    /* 006b5f30: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b5f36: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5f3b: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b5f3e:; BB(0x006b5f3e);
    /* 006b5f3e: ret  */ FN_RET(0x006b5f10); r_esp += 4; return;
}

void f_006b5f40(void)
{
    FN_ENTER(0x006b5f40);
    /* 006b5f40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5f41: mov edi, dword ptr [0xa954cc] */ r_edi = R32((u32)(0xa954ccu));
    /* 006b5f47: movzx edx, word ptr [0xa954d0] */ r_edx = (u32)R16((u32)(0xa954d0u));
    /* 006b5f4e: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b5f53: mov ecx, dword ptr [0xa954a8] */ r_ecx = R32((u32)(0xa954a8u));
    /* 006b5f59: add ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b5f5c: je 0x6b5f79 */ if (fZ) goto L_006b5f79;
L_006b5f5e:; BB(0x006b5f5e);
    /* 006b5f5e: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5f64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b5f65: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x6b5f6au); f_00788154();
    /* 006b5f6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5f6b: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b5f71: call 0x6652a8 */ r_esp -= 4; W32(r_esp, 0x6b5f76u); f_006652a8();
    /* 006b5f76: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006b5f79:; BB(0x006b5f79);
    /* 006b5f79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b5f7a: ret  */ FN_RET(0x006b5f40); r_esp += 4; return;
}

void f_006b5f7c(void)
{
    FN_ENTER(0x006b5f7c);
    /* 006b5f7c: call 0x814e00 */ r_esp -= 4; W32(r_esp, 0x6b5f81u); f_00814e00();
    /* 006b5f81: ret  */ FN_RET(0x006b5f7c); r_esp += 4; return;
}

void f_006b5f84(void)
{
    FN_ENTER(0x006b5f84);
    /* 006b5f84: call 0x814e38 */ r_esp -= 4; W32(r_esp, 0x6b5f89u); f_00814e38();
    /* 006b5f89: ret  */ FN_RET(0x006b5f84); r_esp += 4; return;
}

void f_006b5f8c(void)
{
    FN_ENTER(0x006b5f8c);
    /* 006b5f8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b5f8d: mov ecx, dword ptr [0xa954cc] */ r_ecx = R32((u32)(0xa954ccu));
    /* 006b5f93: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b5f98: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006b5f9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5fa0: je 0x6b5fba */ if (fZ) goto L_006b5fba;
L_006b5fa2:; BB(0x006b5fa2);
    /* 006b5fa2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b5fa4: jb 0x6b5fba */ if (fC) goto L_006b5fba;
L_006b5fa6:; BB(0x006b5fa6);
    /* 006b5fa6: cmp ecx, 0xfd */ {  u32 a = r_ecx; u32 b = 0xfdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b5fac: jae 0x6b5fba */ if (!fC) goto L_006b5fba;
L_006b5fae:; BB(0x006b5fae);
    /* 006b5fae: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006b5fb1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b5fb4: lea edx, [edx + ecx + 0x10] */ r_edx = (u32)(r_edx+r_ecx+0x10u);
    /* 006b5fb8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_006b5fba:; BB(0x006b5fba);
    /* 006b5fba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b5fbb: ret  */ FN_RET(0x006b5f8c); r_esp += 4; return;
}

void f_006b5fbc(void)
{
    FN_ENTER(0x006b5fbc);
    /* 006b5fbc: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5fc1: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5fc6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5fcb: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b5fce: movsx ecx, word ptr [ecx*8 + 0xa94af6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa94af6u));
    /* 006b5fd6: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b5fd9: ret  */ FN_RET(0x006b5fbc); r_esp += 4; return;
}

void f_006b5fdc(void)
{
    FN_ENTER(0x006b5fdc);
    /* 006b5fdc: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b5fe1: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b5fe6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b5feb: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b5fee: mov ecx, dword ptr [ecx*8 + 0xa94af8] */ r_ecx = R32((u32)(r_ecx*8+0xa94af8u));
    /* 006b5ff5: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b5ff8: ret  */ FN_RET(0x006b5fdc); r_esp += 4; return;
}

void f_006b5ffc(void) /* sub_6B5FFC */
{
    FN_ENTER(0x006b5ffc);
    /* 006b5ffc: mov dword ptr [0xa94ad4], 1 */ W32((u32)(0xa94ad4u), 0x1u);
    /* 006b6006: ret  */ FN_RET(0x006b5ffc); r_esp += 4; return;
}

