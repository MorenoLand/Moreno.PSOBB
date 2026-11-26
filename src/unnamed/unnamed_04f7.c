#include "protos.h"

void f_004f7054(void) /* sub_4F7054 */
{
    FN_ENTER(0x004f7054);
    /* 004f7054: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7055: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f7057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f7059: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x4f705eu); f_004f7078();
    /* 004f705e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f7062: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7064: jne 0x4f706a */ if (!fZ) goto L_004f706a;
L_004f7066:; BB(0x004f7066);
    /* 004f7066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7067: ret 4 */ FN_RET(0x004f7054); r_esp += 8; return;
L_004f706a:; BB(0x004f706a);
    /* 004f706a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f706b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f7070u); f_005c2f74();
    /* 004f7070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7071: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7072: ret 4 */ FN_RET(0x004f7054); r_esp += 8; return;
}

void f_004f7078(void) /* sub_4F7078 */
{
    FN_ENTER(0x004f7078);
    /* 004f7078: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7079: mov ebp, esp */ r_ebp = r_esp;
    /* 004f707b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f707d: push 0x8d3198 */ { u32 v = 0x8d3198u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7082: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7089: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f7090: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7093: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f7096: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f7099: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f709c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f709f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f70a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f70a5: mov dword ptr [ecx], 0xafdfe0 */ W32((u32)(r_ecx), 0xafdfe0u);
    /* 004f70ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f70b2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4f70b7u); f_008171e8();
    /* 004f70b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f70ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f70c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004f70c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f70c4: ret  */ FN_RET(0x004f7078); r_esp += 4; return;
}

void f_004f70c8(void) /* sub_4F70C8 */
{
    FN_ENTER(0x004f70c8);
    /* 004f70c8: call 0x4f70d0 */ r_esp -= 4; W32(r_esp, 0x4f70cdu); f_004f70d0();
    /* 004f70cd: ret  */ FN_RET(0x004f70c8); r_esp += 4; return;
}

void f_004f70d0(void) /* sub_4F70D0 */
{
    FN_ENTER(0x004f70d0);
    /* 004f70d0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70d2: call 0x4d3180 */ r_esp -= 4; W32(r_esp, 0x4f70d7u); f_004d3180();
    /* 004f70d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f70d8: ret  */ FN_RET(0x004f70d0); r_esp += 4; return;
}

void f_004f70dc(void) /* sub_4F70DC */
{
    FN_ENTER(0x004f70dc);
    /* 004f70dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f70dd: mov edi, ecx */ r_edi = r_ecx;
    /* 004f70df: call 0x7c0424 */ r_esp -= 4; W32(r_esp, 0x4f70e4u); f_007c0424();
    /* 004f70e4: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x4f70e9u); f_007becd4();
    /* 004f70e9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004f70eb: mov ecx, edi */ r_ecx = r_edi;
    /* 004f70ed: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4f70f0u); call_ind(t); }
    /* 004f70f0: mov ecx, edi */ r_ecx = r_edi;
    /* 004f70f2: call 0x4f7100 */ r_esp -= 4; W32(r_esp, 0x4f70f7u); f_004f7100();
    /* 004f70f7: call 0x7c0368 */ r_esp -= 4; W32(r_esp, 0x4f70fcu); f_007c0368();
    /* 004f70fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f70fd: ret  */ FN_RET(0x004f70dc); r_esp += 4; return;
}

void f_004f7100(void) /* sub_4F7100 */
{
    FN_ENTER(0x004f7100);
    /* 004f7100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7101: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7102: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7105: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f7107: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f710d: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f7113: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f7119: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f711c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f711e: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f7122: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f7126: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f712a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f712d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f712f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7131: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7133: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f713a: fild dword ptr [ecx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x1cu)));
    /* 004f713d: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004f7140: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f7144: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f7148: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f714e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f7153u); f_007c1100();
    /* 004f7153: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7155: je 0x4f723a */ if (fZ) goto L_004f723a;
L_004f715b:; BB(0x004f715b);
    /* 004f715b: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f715f: fcomp dword ptr [0x91e814] */ fx_compare(ST(0), R_F32((u32)(0x91e814u))); FPOP();
    /* 004f7165: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f7167: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f7168: ja 0x4f718f */ if ((!fC&&!fZ)) goto L_004f718f;
L_004f716a:; BB(0x004f716a);
    /* 004f716a: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f7170: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f7176: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f717c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f717e: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f7182: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f7186: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f718a: jmp 0x4f72ef */ goto L_004f72ef;
L_004f718f:; BB(0x004f718f);
    /* 004f718f: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f7195: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f7198: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f719c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f719f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f71a1: movsx ebp, word ptr [edx*8 + 0xaae770] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae770u));
    /* 004f71a9: movsx eax, word ptr [edx*8 + 0xaae772] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae772u));
    /* 004f71b1: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004f71b4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004f71b7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f71bb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004f71bf: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004f71c1: fmul qword ptr [0x91e7d8] */ ST(0) = ST(0) * R_F64((u32)(0x91e7d8u));
    /* 004f71c7: fdiv qword ptr [0x91e7d0] */ ST(0) = ST(0) / R_F64((u32)(0x91e7d0u));
    /* 004f71cd: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f71d1: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f71d6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f71db: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f71df: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f71e3: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f71e7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f71eb: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f71ef: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f71f3: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f71f8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f71fd: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f7201: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f7205: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f7209: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f720d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004f7211: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4f7216u); f_0082ddd8();
    /* 004f7216: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f721a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f721c: fmul dword ptr [0x91e810] */ ST(0) = ST(0) * R_F32((u32)(0x91e810u));
    /* 004f7222: fmul dword ptr [ebx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x28u));
    /* 004f7225: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f722b: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 004f722f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f7231: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f7235: jmp 0x4f72ef */ goto L_004f72ef;
L_004f723a:; BB(0x004f723a);
    /* 004f723a: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7240: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f7243: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7246: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7248: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f724a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f724c: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7253: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f7258u); f_007c1180();
    /* 004f7258: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f725a: je 0x4f72ef */ if (fZ) goto L_004f72ef;
L_004f7260:; BB(0x004f7260);
    /* 004f7260: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f7264: fcomp dword ptr [0x91e814] */ fx_compare(ST(0), R_F32((u32)(0x91e814u))); FPOP();
    /* 004f726a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f726c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f726d: ja 0x4f7291 */ if ((!fC&&!fZ)) goto L_004f7291;
L_004f726f:; BB(0x004f726f);
    /* 004f726f: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f7275: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f727b: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f7281: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f7283: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f7287: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f728b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f728f: jmp 0x4f72ef */ goto L_004f72ef;
L_004f7291:; BB(0x004f7291);
    /* 004f7291: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f7295: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f7299: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f729e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f72a3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f72a7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f72ab: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f72af: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f72b3: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004f72b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f72b9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f72beu); f_0082dcbc();
    /* 004f72be: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f72c2: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004f72c6: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 004f72ca: fmul dword ptr [ebx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x28u));
    /* 004f72cd: fld dword ptr [0x91e818] */ FPUSH(R_F32((u32)(0x91e818u)));
    /* 004f72d3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f72d7: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f72db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f72dd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4f72e2u); f_0082ddd8();
    /* 004f72e2: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f72e6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f72e8: fmul dword ptr [ebx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x28u));
    /* 004f72eb: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_004f72ef:; BB(0x004f72ef);
    /* 004f72ef: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004f72f3: fadd dword ptr [ebx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1cu));
    /* 004f72f6: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f72fa: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 004f72fd: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f7301: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 004f7304: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f7306: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 004f7309: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 004f730c: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
    /* 004f730f: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f7312: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7313: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7314: ret  */ FN_RET(0x004f7100); r_esp += 4; return;
}

void f_004f7318(void) /* sub_4F7318 */
{
    FN_ENTER(0x004f7318);
    /* 004f7318: call 0x4f7320 */ r_esp -= 4; W32(r_esp, 0x4f731du); f_004f7320();
    /* 004f731d: ret  */ FN_RET(0x004f7318); r_esp += 4; return;
}

void f_004f7320(void) /* sub_4F7320 */
{
    FN_ENTER(0x004f7320);
    /* 004f7320: push dword ptr [ecx + 0x2c] */ { u32 v = R32((u32)(r_ecx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7323: lea eax, [ecx + 0x1c] */ r_eax = (u32)(r_ecx+0x1cu);
    /* 004f7326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7327: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f732cu); f_0061cdb0();
    /* 004f732c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f732f: ret  */ FN_RET(0x004f7320); r_esp += 4; return;
}

void f_004f7330(void) /* sub_4F7330 */
{
    FN_ENTER(0x004f7330);
    /* 004f7330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7331: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7333: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7335: push 0x8d31b4 */ { u32 v = 0x8d31b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f733a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7341: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f7348: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f734b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f734e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f7351: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f7354: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f7357: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f735d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f7360: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f7365u); f_008193cc();
    /* 004f7365: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f736c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f736f: mov dword ptr [ecx], 0xafdfe0 */ W32((u32)(r_ecx), 0xafdfe0u);
    /* 004f7375: mov eax, dword ptr [0x9b91f0] */ r_eax = R32((u32)(0x9b91f0u));
    /* 004f737a: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 004f7381: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004f7384: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f7386: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 004f7389: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 004f7390: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004f7393: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f7395: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 004f739c: mov dword ptr [ecx + 0x28], 0x40c00000 */ W32((u32)(r_ecx+0x28u), 0x40c00000u);
    /* 004f73a3: mov dword ptr [ecx + 0x2c], 0x41200000 */ W32((u32)(r_ecx+0x2cu), 0x41200000u);
L_004f73aa:; BB(0x004f73aa);
    /* 004f73aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f73ab: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4f73b0u); f_0068d5a8();
    /* 004f73b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f73b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f73b3: je 0x4f742a */ if (fZ) goto L_004f742a;
L_004f73b5:; BB(0x004f73b5);
    /* 004f73b5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f73b8: fld dword ptr [0x91e800] */ FPUSH(R_F32((u32)(0x91e800u)));
    /* 004f73be: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004f73c1: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004f73c4: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f73c7: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 004f73ca: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f73cd: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 004f73d0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f73d3: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 004f73d6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f73d8: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 004f73db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f73dd: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 004f73e0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f73e2: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
L_004f73e5:; BB(0x004f73e5);
    /* 004f73e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f73e6: call 0x4f7b58 */ r_esp -= 4; W32(r_esp, 0x4f73ebu); f_004f7b58();
    /* 004f73eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f73ec: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f73ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f73f1: jne 0x4f7402 */ if (!fZ) goto L_004f7402;
L_004f73f3:; BB(0x004f73f3);
    /* 004f73f3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f73f7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f73fc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f7400: jmp 0x4f740f */ goto L_004f740f;
L_004f7402:; BB(0x004f7402);
    /* 004f7402: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f7406: or eax, 0xffff0014 */ {  u32 a = r_eax; u32 b = 0xffff0014u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f740b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004f740f:; BB(0x004f740f);
    /* 004f740f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f7412: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f7415: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f7418: mov eax, edx */ r_eax = r_edx;
    /* 004f741a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f741d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7424: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7426: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7427: ret 4 */ FN_RET(0x004f7330); r_esp += 8; return;
L_004f742a:; BB(0x004f742a);
    /* 004f742a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f742d: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7430: jl 0x4f73aa */ if ((fS!=fO)) goto L_004f73aa;
L_004f7436:; BB(0x004f7436);
    /* 004f7436: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f7439: jmp 0x4f73e5 */ goto L_004f73e5;
}

void f_004f743c(void) /* sub_4F743C */
{
    FN_ENTER(0x004f743c);
    /* 004f743c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7440: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7444: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7448: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x4f744du); f_005b9f68();
    /* 004f744d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f7450: ret 0xc */ FN_RET(0x004f743c); r_esp += 16; return;
}

void f_004f7454(void) /* sub_4F7454 */
{
    FN_ENTER(0x004f7454);
    /* 004f7454: call 0x4d31dc */ r_esp -= 4; W32(r_esp, 0x4f7459u); f_004d31dc();
    /* 004f7459: ret  */ FN_RET(0x004f7454); r_esp += 4; return;
}

void f_004f745c(void) /* sub_4F745C */
{
    FN_ENTER(0x004f745c);
    /* 004f745c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f745d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f745e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f745f: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7462: mov edi, ecx */ r_edi = r_ecx;
    /* 004f7464: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 004f7468: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 004f746c: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004f746e: fmul dword ptr [0x91e7fc] */ ST(0) = ST(0) * R_F32((u32)(0x91e7fcu));
    /* 004f7474: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7475: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f7478: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4f747du); f_0082e900();
    /* 004f747d: fld dword ptr [0x91e7f8] */ FPUSH(R_F32((u32)(0x91e7f8u)));
    /* 004f7483: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f7485: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004f7487: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f7489: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f748d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f7492: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f7497: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f749b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f749f: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f74a3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f74a7: fcomp dword ptr [0x91e7f4] */ fx_compare(ST(0), R_F32((u32)(0x91e7f4u))); FPOP();
    /* 004f74ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f74af: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f74b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f74b4: jb 0x4f74c0 */ if (fC) goto L_004f74c0;
L_004f74b6:; BB(0x004f74b6);
    /* 004f74b6: fld dword ptr [0x91e7ec] */ FPUSH(R_F32((u32)(0x91e7ecu)));
    /* 004f74bc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f74be: jmp 0x4f74c8 */ goto L_004f74c8;
L_004f74c0:; BB(0x004f74c0);
    /* 004f74c0: fld dword ptr [0x91e7f0] */ FPUSH(R_F32((u32)(0x91e7f0u)));
    /* 004f74c6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_004f74c8:; BB(0x004f74c8);
    /* 004f74c8: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004f74ca: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004f74cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f74cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f74d1: jle 0x4f74e9 */ if ((fZ||fS!=fO)) goto L_004f74e9;
L_004f74d3:; BB(0x004f74d3);
    /* 004f74d3: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f74d6: jl 0x4f74e2 */ if ((fS!=fO)) goto L_004f74e2;
L_004f74d8:; BB(0x004f74d8);
    /* 004f74d8: lea eax, [edx - 6] */ r_eax = (u32)(r_edx+0xfffffffau);
L_004f74db:; BB(0x004f74db);
    /* 004f74db: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f74de: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f74e0: jle 0x4f74db */ if ((fZ||fS!=fO)) goto L_004f74db;
L_004f74e2:; BB(0x004f74e2);
    /* 004f74e2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f74e5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f74e7: jl 0x4f74e2 */ if ((fS!=fO)) goto L_004f74e2;
L_004f74e9:; BB(0x004f74e9);
    /* 004f74e9: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f74ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f74f2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f74f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f74f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f74f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f74fb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7502: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f7507u); f_007c1180();
    /* 004f7507: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7509: jne 0x4f7513 */ if (!fZ) goto L_004f7513;
L_004f750b:; BB(0x004f750b);
    /* 004f750b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004f750e: jmp 0x4f759f */ goto L_004f759f;
L_004f7513:; BB(0x004f7513);
    /* 004f7513: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7519: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f751c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f751f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7521: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7523: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7525: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f752c: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f7531u); f_007c1180();
    /* 004f7531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7533: jne 0x4f753a */ if (!fZ) goto L_004f753a;
L_004f7535:; BB(0x004f7535);
    /* 004f7535: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004f7538: jmp 0x4f759f */ goto L_004f759f;
L_004f753a:; BB(0x004f753a);
    /* 004f753a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f753c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f753e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f7541: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7544: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f754a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f754c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f754e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7550: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7557: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f755cu); f_007c09fc();
    /* 004f755c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f755e: je 0x4f756b */ if (fZ) goto L_004f756b;
L_004f7560:; BB(0x004f7560);
    /* 004f7560: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004f7563: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7566: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 004f7569: jmp 0x4f759f */ goto L_004f759f;
L_004f756b:; BB(0x004f756b);
    /* 004f756b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f756d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f756f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f7572: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7575: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f757b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f757d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f757f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7581: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7588: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f758du); f_007c09fc();
    /* 004f758d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f758f: je 0x4f759c */ if (fZ) goto L_004f759c;
L_004f7591:; BB(0x004f7591);
    /* 004f7591: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004f7594: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7597: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 004f759a: jmp 0x4f759f */ goto L_004f759f;
L_004f759c:; BB(0x004f759c);
    /* 004f759c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
L_004f759f:; BB(0x004f759f);
    /* 004f759f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f75a1: jl 0x4f75b8 */ if ((fS!=fO)) goto L_004f75b8;
L_004f75a3:; BB(0x004f75a3);
    /* 004f75a3: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 004f75a7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f75a9: jl 0x4f75c1 */ if ((fS!=fO)) goto L_004f75c1;
L_004f75ab:; BB(0x004f75ab);
    /* 004f75ab: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 004f75af: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 004f75b3: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 004f75b6: jmp 0x4f75c1 */ goto L_004f75c1;
L_004f75b8:; BB(0x004f75b8);
    /* 004f75b8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004f75bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f75c1:; BB(0x004f75c1);
    /* 004f75c1: fld qword ptr [0x91e7c8] */ FPUSH(R_F64((u32)(0x91e7c8u)));
    /* 004f75c7: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004f75ca: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004f75ce: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f75d2: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f75d6: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x4f75dbu); f_0084d1d4();
    /* 004f75db: fmul dword ptr [0x91e7ec] */ ST(0) = ST(0) * R_F32((u32)(0x91e7ecu));
    /* 004f75e1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f75e4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f75e8: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f75ee: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f75f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f75f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f75f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f75f7: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f75fe: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f7603u); f_007c1100();
    /* 004f7603: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7605: jne 0x4f760f */ if (!fZ) goto L_004f760f;
L_004f7607:; BB(0x004f7607);
    /* 004f7607: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004f7609: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f760d: jmp 0x4f767d */ goto L_004f767d;
L_004f760f:; BB(0x004f760f);
    /* 004f760f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7611: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7613: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f7616: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7619: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f761f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7621: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7623: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7625: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f762c: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f7631u); f_007c09fc();
    /* 004f7631: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7633: je 0x4f7643 */ if (fZ) goto L_004f7643;
L_004f7635:; BB(0x004f7635);
    /* 004f7635: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f7639: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 004f763b: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 004f763f: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004f7641: jmp 0x4f767d */ goto L_004f767d;
L_004f7643:; BB(0x004f7643);
    /* 004f7643: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7645: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7647: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f764a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f764d: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7653: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7655: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7657: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7659: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7660: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f7665u); f_007c09fc();
    /* 004f7665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7667: je 0x4f7677 */ if (fZ) goto L_004f7677;
L_004f7669:; BB(0x004f7669);
    /* 004f7669: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f766d: fsubr dword ptr [esi] */ ST(0) = R_F32((u32)(r_esi)) - ST(0);
    /* 004f766f: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 004f7673: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 004f7675: jmp 0x4f767d */ goto L_004f767d;
L_004f7677:; BB(0x004f7677);
    /* 004f7677: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004f7679: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_004f767d:; BB(0x004f767d);
    /* 004f767d: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f7681: fcomp dword ptr [0x91e7ec] */ fx_compare(ST(0), R_F32((u32)(0x91e7ecu))); FPOP();
    /* 004f7687: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f7689: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f768a: jae 0x4f76a1 */ if (!fC) goto L_004f76a1;
L_004f768c:; BB(0x004f768c);
    /* 004f768c: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f7690: fcomp dword ptr [0x91e7f0] */ fx_compare(ST(0), R_F32((u32)(0x91e7f0u))); FPOP();
    /* 004f7696: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f7698: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f7699: jbe 0x4f76a1 */ if ((fC||fZ)) goto L_004f76a1;
L_004f769b:; BB(0x004f769b);
    /* 004f769b: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_004f76a1:; BB(0x004f76a1);
    /* 004f76a1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f76a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f76a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f76a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f76a7: ret 0x14 */ FN_RET(0x004f745c); r_esp += 24; return;
}

void f_004f76ac(void) /* sub_4F76AC */
{
    FN_ENTER(0x004f76ac);
    /* 004f76ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f76ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f76ae: mov esi, ecx */ r_esi = r_ecx;
    /* 004f76b0: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f76b6: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004f76b9: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f76bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f76be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f76c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f76c2: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f76c9: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f76ceu); f_007c1180();
    /* 004f76ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f76d0: jne 0x4f76dd */ if (!fZ) goto L_004f76dd;
L_004f76d2:; BB(0x004f76d2);
    /* 004f76d2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004f76d6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f76d8: jmp 0x4f7773 */ goto L_004f7773;
L_004f76dd:; BB(0x004f76dd);
    /* 004f76dd: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f76e3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004f76e6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f76e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f76eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f76ed: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f76ef: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f76f6: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f76fbu); f_007c1180();
    /* 004f76fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f76fd: jne 0x4f7707 */ if (!fZ) goto L_004f7707;
L_004f76ff:; BB(0x004f76ff);
    /* 004f76ff: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004f7703: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f7705: jmp 0x4f7773 */ goto L_004f7773;
L_004f7707:; BB(0x004f7707);
    /* 004f7707: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7709: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f770b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004f770e: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7711: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7717: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7719: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f771b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f771d: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7724: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f7729u); f_007c09fc();
    /* 004f7729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f772b: je 0x4f773a */ if (fZ) goto L_004f773a;
L_004f772d:; BB(0x004f772d);
    /* 004f772d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004f7731: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f7733: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7736: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004f7738: jmp 0x4f7773 */ goto L_004f7773;
L_004f773a:; BB(0x004f773a);
    /* 004f773a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f773c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f773e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004f7741: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7744: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f774a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f774c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f774e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7750: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7757: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f775cu); f_007c09fc();
    /* 004f775c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f775e: je 0x4f776d */ if (fZ) goto L_004f776d;
L_004f7760:; BB(0x004f7760);
    /* 004f7760: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004f7764: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f7766: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7769: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004f776b: jmp 0x4f7773 */ goto L_004f7773;
L_004f776d:; BB(0x004f776d);
    /* 004f776d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004f7771: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
L_004f7773:; BB(0x004f7773);
    /* 004f7773: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f7775: jl 0x4f778f */ if ((fS!=fO)) goto L_004f778f;
L_004f7777:; BB(0x004f7777);
    /* 004f7777: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004f777b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f777d: jl 0x4f779b */ if ((fS!=fO)) goto L_004f779b;
L_004f777f:; BB(0x004f777f);
    /* 004f777f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 004f7783: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004f7787: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004f778b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004f778d: jmp 0x4f779b */ goto L_004f779b;
L_004f778f:; BB(0x004f778f);
    /* 004f778f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004f7793: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004f7799: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004f779b:; BB(0x004f779b);
    /* 004f779b: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f77a1: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004f77a4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f77a6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f77a8: mov edi, 1 */ r_edi = 0x1u;
    /* 004f77ad: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004f77af: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f77b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f77b4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f77b6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f77b8: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f77bf: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f77c4u); f_007c1100();
    /* 004f77c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f77c6: je 0x4f782d */ if (fZ) goto L_004f782d;
L_004f77c8:; BB(0x004f77c8);
    /* 004f77c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f77ca: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f77cc: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004f77cf: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f77d2: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f77d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f77da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f77dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f77de: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f77e5: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f77eau); f_007c09fc();
    /* 004f77ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f77ec: je 0x4f77f9 */ if (fZ) goto L_004f77f9;
L_004f77ee:; BB(0x004f77ee);
    /* 004f77ee: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f77f2: add dword ptr [eax], edi */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f77f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f77f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f77f6: ret 0x14 */ FN_RET(0x004f76ac); r_esp += 24; return;
L_004f77f9:; BB(0x004f77f9);
    /* 004f77f9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f77fb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f77fd: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004f7800: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7803: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7809: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f780b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f780d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f780f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7816: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f781bu); f_007c09fc();
    /* 004f781b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f781d: je 0x4f782d */ if (fZ) goto L_004f782d;
L_004f781f:; BB(0x004f781f);
    /* 004f781f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f7823: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f7827: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f7829: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f782b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_004f782d:; BB(0x004f782d);
    /* 004f782d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f782e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f782f: ret 0x14 */ FN_RET(0x004f76ac); r_esp += 24; return;
}

void f_004f7834(void) /* sub_4F7834 */
{
    FN_ENTER(0x004f7834);
    /* 004f7834: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7835: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f7837: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f783a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f783d: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7843: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7845: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7847: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7849: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7850: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f7855u); f_007c1180();
    /* 004f7855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7857: je 0x4f78e9 */ if (fZ) goto L_004f78e9;
L_004f785d:; BB(0x004f785d);
    /* 004f785d: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7863: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f7866: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7869: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f786b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f786d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f786f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7876: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f787bu); f_007c1180();
    /* 004f787b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f787d: je 0x4f78e9 */ if (fZ) goto L_004f78e9;
L_004f787f:; BB(0x004f787f);
    /* 004f787f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7881: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7883: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f7886: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7889: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f788f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7891: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7893: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7895: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f789c: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f78a1u); f_007c09fc();
    /* 004f78a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f78a3: je 0x4f78b4 */ if (fZ) goto L_004f78b4;
L_004f78a5:; BB(0x004f78a5);
    /* 004f78a5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f78a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f78ab: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f78af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f78b1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4f78b4u); call_ind(t); }
L_004f78b4:; BB(0x004f78b4);
    /* 004f78b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78b6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78b8: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f78bb: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f78be: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f78c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f78c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f78c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f78ca: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f78d1: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f78d6u); f_007c09fc();
    /* 004f78d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f78d8: je 0x4f78e9 */ if (fZ) goto L_004f78e9;
L_004f78da:; BB(0x004f78da);
    /* 004f78da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f78de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78e0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f78e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f78e6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4f78e9u); call_ind(t); }
L_004f78e9:; BB(0x004f78e9);
    /* 004f78e9: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f78ef: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f78f2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f78f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f78f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f78f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f78fb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7902: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f7907u); f_007c1100();
    /* 004f7907: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7909: je 0x4f7975 */ if (fZ) goto L_004f7975;
L_004f790b:; BB(0x004f790b);
    /* 004f790b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f790d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f790f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f7912: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f7915: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f791b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f791d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f791f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7921: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f7928: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f792du); f_007c09fc();
    /* 004f792d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f792f: je 0x4f7940 */ if (fZ) goto L_004f7940;
L_004f7931:; BB(0x004f7931);
    /* 004f7931: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f7935: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7937: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f793b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f793d: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x4f7940u); call_ind(t); }
L_004f7940:; BB(0x004f7940);
    /* 004f7940: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7942: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7944: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f7947: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f794a: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7950: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7952: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7954: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7956: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f795d: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f7962u); f_007c09fc();
    /* 004f7962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7964: je 0x4f7975 */ if (fZ) goto L_004f7975;
L_004f7966:; BB(0x004f7966);
    /* 004f7966: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f796a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f796c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f7970: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f7972: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x4f7975u); call_ind(t); }
L_004f7975:; BB(0x004f7975);
    /* 004f7975: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7976: ret 4 */ FN_RET(0x004f7834); r_esp += 8; return;
}

void f_004f797c(void) /* sub_4F797C */
{
    FN_ENTER(0x004f797c);
    /* 004f797c: mov dword ptr [0xa726fc], 0x3f800000 */ W32((u32)(0xa726fcu), 0x3f800000u);
    /* 004f7986: mov dword ptr [0xa72700], 0x41000000 */ W32((u32)(0xa72700u), 0x41000000u);
    /* 004f7990: mov dword ptr [0xa72704], 0x3fc00000 */ W32((u32)(0xa72704u), 0x3fc00000u);
    /* 004f799a: ret  */ FN_RET(0x004f797c); r_esp += 4; return;
}

void f_004f799c(void)
{
    FN_ENTER(0x004f799c);
    /* 004f799c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f799d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f799f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f79a1: push 0x8d31dc */ { u32 v = 0x8d31dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f79a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f79ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f79ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f79b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f79b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f79ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f79bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f79c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f79c3: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004f79c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f79cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f79d4u); f_005caba4();
    /* 004f79d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f79d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f79d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f79da: je 0x4f79f9 */ if (fZ) goto L_004f79f9;
L_004f79dc:; BB(0x004f79dc);
    /* 004f79dc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f79e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f79ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f79ed: call 0x7967bc */ r_esp -= 4; W32(r_esp, 0x4f79f2u); f_007967bc();
    /* 004f79f2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f79f9:; BB(0x004f79f9);
    /* 004f79f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f79fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7a03: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7a05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7a06: ret  */ FN_RET(0x004f799c); r_esp += 4; return;
}

void f_004f7a08(void)
{
    FN_ENTER(0x004f7a08);
    /* 004f7a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a09: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7a0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a0d: push 0x8d3204 */ { u32 v = 0x8d3204u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f7a20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7a23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f7a26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f7a29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f7a2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f7a2f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a31: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f7a38: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f7a3du); f_005caba4();
    /* 004f7a3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7a3e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f7a41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7a43: je 0x4f7a68 */ if (fZ) goto L_004f7a68;
L_004f7a45:; BB(0x004f7a45);
    /* 004f7a45: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f7a4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f7a53: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7a59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f7a5c: call 0x6c1004 */ r_esp -= 4; W32(r_esp, 0x4f7a61u); f_006c1004();
    /* 004f7a61: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f7a68:; BB(0x004f7a68);
    /* 004f7a68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f7a6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7a72: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7a74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7a75: ret  */ FN_RET(0x004f7a08); r_esp += 4; return;
}

void f_004f7a78(void)
{
    FN_ENTER(0x004f7a78);
    /* 004f7a78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a79: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7a7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a7d: push 0x8d322c */ { u32 v = 0x8d322cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7a88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f7a90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7a93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f7a96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f7a99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f7a9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f7a9f: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7aa4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f7aab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f7ab0u); f_005caba4();
    /* 004f7ab0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7ab1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f7ab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7ab6: je 0x4f7adb */ if (fZ) goto L_004f7adb;
L_004f7ab8:; BB(0x004f7ab8);
    /* 004f7ab8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f7abf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f7ac6: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7acc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f7acf: call 0x80d7f0 */ r_esp -= 4; W32(r_esp, 0x4f7ad4u); f_0080d7f0();
    /* 004f7ad4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f7adb:; BB(0x004f7adb);
    /* 004f7adb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f7ade: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7ae5: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7ae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7ae8: ret  */ FN_RET(0x004f7a78); r_esp += 4; return;
}

void f_004f7aec(void)
{
    FN_ENTER(0x004f7aec);
    /* 004f7aec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7aed: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7aef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7af1: push 0x8d3254 */ { u32 v = 0x8d3254u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7af6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7afd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f7b04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7b07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f7b0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f7b0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f7b10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f7b13: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f7b1f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f7b24u); f_005caba4();
    /* 004f7b24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7b25: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f7b28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7b2a: je 0x4f7b49 */ if (fZ) goto L_004f7b49;
L_004f7b2c:; BB(0x004f7b2c);
    /* 004f7b2c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f7b33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f7b3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f7b3d: call 0x6ba5b4 */ r_esp -= 4; W32(r_esp, 0x4f7b42u); f_006ba5b4();
    /* 004f7b42: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f7b49:; BB(0x004f7b49);
    /* 004f7b49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f7b4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7b53: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7b55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7b56: ret  */ FN_RET(0x004f7aec); r_esp += 4; return;
}

void f_004f7b58(void) /* sub_4F7B58 */
{
    FN_ENTER(0x004f7b58);
    /* 004f7b58: mov edx, dword ptr [0xa72720] */ r_edx = R32((u32)(0xa72720u));
    /* 004f7b5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f7b60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b62: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7b68:; BB(0x004f7b68);
    /* 004f7b68: mov edx, dword ptr [0xa72724] */ r_edx = R32((u32)(0xa72724u));
    /* 004f7b6e: mov eax, 1 */ r_eax = 0x1u;
    /* 004f7b73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b75: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7b7b:; BB(0x004f7b7b);
    /* 004f7b7b: mov edx, dword ptr [0xa72728] */ r_edx = R32((u32)(0xa72728u));
    /* 004f7b81: mov eax, 2 */ r_eax = 0x2u;
    /* 004f7b86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b88: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7b8e:; BB(0x004f7b8e);
    /* 004f7b8e: mov edx, dword ptr [0xa7272c] */ r_edx = R32((u32)(0xa7272cu));
    /* 004f7b94: mov eax, 3 */ r_eax = 0x3u;
    /* 004f7b99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b9b: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7ba1:; BB(0x004f7ba1);
    /* 004f7ba1: mov edx, dword ptr [0xa72730] */ r_edx = R32((u32)(0xa72730u));
    /* 004f7ba7: mov eax, 4 */ r_eax = 0x4u;
    /* 004f7bac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7bae: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7bb4:; BB(0x004f7bb4);
    /* 004f7bb4: mov edx, dword ptr [0xa72734] */ r_edx = R32((u32)(0xa72734u));
    /* 004f7bba: mov eax, 5 */ r_eax = 0x5u;
    /* 004f7bbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7bc1: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7bc7:; BB(0x004f7bc7);
    /* 004f7bc7: mov edx, dword ptr [0xa72738] */ r_edx = R32((u32)(0xa72738u));
    /* 004f7bcd: mov eax, 6 */ r_eax = 0x6u;
    /* 004f7bd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7bd4: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7bda:; BB(0x004f7bda);
    /* 004f7bda: mov edx, dword ptr [0xa7273c] */ r_edx = R32((u32)(0xa7273cu));
    /* 004f7be0: mov eax, 7 */ r_eax = 0x7u;
    /* 004f7be5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7be7: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7bed:; BB(0x004f7bed);
    /* 004f7bed: mov edx, dword ptr [0xa72740] */ r_edx = R32((u32)(0xa72740u));
    /* 004f7bf3: mov eax, 8 */ r_eax = 0x8u;
    /* 004f7bf8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7bfa: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7bfc:; BB(0x004f7bfc);
    /* 004f7bfc: mov edx, dword ptr [0xa72744] */ r_edx = R32((u32)(0xa72744u));
    /* 004f7c02: mov eax, 9 */ r_eax = 0x9u;
    /* 004f7c07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c09: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7c0b:; BB(0x004f7c0b);
    /* 004f7c0b: mov edx, dword ptr [0xa72748] */ r_edx = R32((u32)(0xa72748u));
    /* 004f7c11: mov eax, 0xa */ r_eax = 0xau;
    /* 004f7c16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c18: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7c1a:; BB(0x004f7c1a);
    /* 004f7c1a: mov edx, dword ptr [0xa7274c] */ r_edx = R32((u32)(0xa7274cu));
    /* 004f7c20: mov eax, 0xb */ r_eax = 0xbu;
    /* 004f7c25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c27: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7c29:; BB(0x004f7c29);
    /* 004f7c29: mov edx, dword ptr [0xa72750] */ r_edx = R32((u32)(0xa72750u));
    /* 004f7c2f: mov eax, 0xc */ r_eax = 0xcu;
    /* 004f7c34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c36: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7c38:; BB(0x004f7c38);
    /* 004f7c38: mov edx, dword ptr [0xa72754] */ r_edx = R32((u32)(0xa72754u));
    /* 004f7c3e: mov eax, 0xd */ r_eax = 0xdu;
    /* 004f7c43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c45: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7c47:; BB(0x004f7c47);
    /* 004f7c47: mov edx, dword ptr [0xa72758] */ r_edx = R32((u32)(0xa72758u));
    /* 004f7c4d: mov eax, 0xe */ r_eax = 0xeu;
    /* 004f7c52: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c54: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7c56:; BB(0x004f7c56);
    /* 004f7c56: mov edx, dword ptr [0xa7275c] */ r_edx = R32((u32)(0xa7275cu));
    /* 004f7c5c: mov eax, 0xf */ r_eax = 0xfu;
    /* 004f7c61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c63: je 0x4f7c68 */ if (fZ) goto L_004f7c68;
L_004f7c65:; BB(0x004f7c65);
    /* 004f7c65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7c67: ret  */ FN_RET(0x004f7b58); r_esp += 4; return;
L_004f7c68:; BB(0x004f7c68);
    /* 004f7c68: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004f7c6c: mov dword ptr [eax*4 + 0xa72720], edx */ W32((u32)(r_eax*4+0xa72720u), r_edx);
    /* 004f7c73: mov eax, 1 */ r_eax = 0x1u;
    /* 004f7c78: add word ptr [0xa72764], 1 */ { u32 ad = (u32)(0xa72764u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 004f7c80: ret  */ FN_RET(0x004f7b58); r_esp += 4; return;
}

void f_004f7c84(void) /* sub_4F7C84 */
{
    FN_ENTER(0x004f7c84);
    /* 004f7c84: movsx eax, byte ptr [0xa7276c] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa7276cu));
    /* 004f7c8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c8d: je 0x4f7ca6 */ if (fZ) goto L_004f7ca6;
L_004f7c8f:; BB(0x004f7c8f);
    /* 004f7c8f: movsx eax, word ptr [0xa72768] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa72768u));
    /* 004f7c96: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c99: je 0x4f7ca6 */ if (fZ) goto L_004f7ca6;
L_004f7c9b:; BB(0x004f7c9b);
    /* 004f7c9b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f7c9e: je 0x4f7ca6 */ if (fZ) goto L_004f7ca6;
L_004f7ca0:; BB(0x004f7ca0);
    /* 004f7ca0: mov eax, 1 */ r_eax = 0x1u;
    /* 004f7ca5: ret  */ FN_RET(0x004f7c84); r_esp += 4; return;
L_004f7ca6:; BB(0x004f7ca6);
    /* 004f7ca6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7ca8: ret  */ FN_RET(0x004f7c84); r_esp += 4; return;
}

void f_004f7cac(void) /* sub_4F7CAC */
{
    FN_ENTER(0x004f7cac);
    /* 004f7cac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7cad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f7caf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f7cb1: call 0x4f7cd0 */ r_esp -= 4; W32(r_esp, 0x4f7cb6u); f_004f7cd0();
    /* 004f7cb6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f7cba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7cbc: jne 0x4f7cc2 */ if (!fZ) goto L_004f7cc2;
L_004f7cbe:; BB(0x004f7cbe);
    /* 004f7cbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7cbf: ret 4 */ FN_RET(0x004f7cac); r_esp += 8; return;
L_004f7cc2:; BB(0x004f7cc2);
    /* 004f7cc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7cc3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f7cc8u); f_005c2f74();
    /* 004f7cc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7cc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7cca: ret 4 */ FN_RET(0x004f7cac); r_esp += 8; return;
}

void f_004f7cd0(void) /* sub_4F7CD0 */
{
    FN_ENTER(0x004f7cd0);
    /* 004f7cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7cd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7cd5: push 0x8d3270 */ { u32 v = 0x8d3270u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7cda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ce1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f7ce8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7ceb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f7cee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f7cf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f7cf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f7cf7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f7cfa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f7cfd: mov dword ptr [ecx], 0xafe128 */ W32((u32)(r_ecx), 0xafe128u);
    /* 004f7d03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f7d0a: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x4f7d0fu); f_004f7078();
    /* 004f7d0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f7d12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7d19: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7d1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7d1c: ret  */ FN_RET(0x004f7cd0); r_esp += 4; return;
}

void f_004f7d20(void) /* sub_4F7D20 */
{
    FN_ENTER(0x004f7d20);
    /* 004f7d20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f7d23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f7d25: call 0x4f7d44 */ r_esp -= 4; W32(r_esp, 0x4f7d2au); f_004f7d44();
    /* 004f7d2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f7d2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7d30: jne 0x4f7d36 */ if (!fZ) goto L_004f7d36;
L_004f7d32:; BB(0x004f7d32);
    /* 004f7d32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7d33: ret 4 */ FN_RET(0x004f7d20); r_esp += 8; return;
L_004f7d36:; BB(0x004f7d36);
    /* 004f7d36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f7d3cu); f_005c2f74();
    /* 004f7d3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7d3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7d3e: ret 4 */ FN_RET(0x004f7d20); r_esp += 8; return;
}

void f_004f7d44(void) /* sub_4F7D44 */
{
    FN_ENTER(0x004f7d44);
    /* 004f7d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d45: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7d47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d49: push 0x8d328c */ { u32 v = 0x8d328cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f7d5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7d5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f7d62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f7d65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f7d68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f7d6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f7d6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f7d71: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f7d74: mov dword ptr [ecx], 0xafe14c */ W32((u32)(r_ecx), 0xafe14cu);
    /* 004f7d7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7d7c: je 0x4f7d95 */ if (fZ) goto L_004f7d95;
L_004f7d7e:; BB(0x004f7d7e);
    /* 004f7d7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f7d81: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f7d85: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f7d8a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f7d8e: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_004f7d95:; BB(0x004f7d95);
    /* 004f7d95: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f7d9c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4f7da1u); f_008171e8();
    /* 004f7da1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f7da4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7dab: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7dad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7dae: ret  */ FN_RET(0x004f7d44); r_esp += 4; return;
}

void f_004f7db0(void) /* sub_4F7DB0 */
{
    FN_ENTER(0x004f7db0);
    /* 004f7db0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7db1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7db2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7db3: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7db6: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 004f7dba: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 004f7dbe: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 004f7dc2: mov eax, 0x91e820 */ r_eax = 0x91e820u;
    /* 004f7dc7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f7dc9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004f7dcd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004f7dd0: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004f7dd4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004f7dd7: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004f7ddb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004f7dde: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 004f7de2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004f7de5: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004f7de9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004f7dec: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 004f7df0: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004f7df3: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004f7df7: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004f7dfa: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 004f7dfd: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 004f7e01: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f7e05: fild dword ptr [edx] */ FPUSH((long double)(i32)R32((u32)(r_edx)));
    /* 004f7e07: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 004f7e0a: fild dword ptr [edx + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x8u)));
    /* 004f7e0d: fld dword ptr [0x91e85c] */ FPUSH(R_F32((u32)(0x91e85cu)));
    /* 004f7e13: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004f7e15: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004f7e17: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f7e19: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004f7e1e: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 004f7e21: fld dword ptr [0x91e858] */ FPUSH(R_F32((u32)(0x91e858u)));
    /* 004f7e27: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 004f7e29: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 004f7e2f: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004f7e31: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f7e33: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7e35: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f7e37: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004f7e3b: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f7e3f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f7e43: mov edi, edx */ r_edi = r_edx;
    /* 004f7e45: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004f7e4a: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f7e4c: push 0x91e908 */ { u32 v = 0x91e908u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e51: sar edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004f7e54: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004f7e57: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004f7e59: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7e5b: mov eax, edi */ r_eax = r_edi;
    /* 004f7e5d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f7e60: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f7e62: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f7e64: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004f7e67: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f7e69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f7e6b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f7e6d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004f7e6f: mov eax, esi */ r_eax = r_esi;
    /* 004f7e71: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f7e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e74: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f7e79u); f_0061cdb0();
    /* 004f7e79: push dword ptr [esp + edi*4 + 0x18] */ { u32 v = R32((u32)(r_esp+r_edi*4+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7e7d: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 004f7e80: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f7e82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e83: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f7e88u); f_0061cdb0();
    /* 004f7e88: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f7e8b: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004f7e8f: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f7e93: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 004f7e96: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f7e98: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f7e9b: mov dword ptr [esp + 4], 0x91e914 */ W32((u32)(r_esp+0x4u), 0x91e914u);
    /* 004f7ea3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f7ea8u); f_0061cdb0();
    /* 004f7ea8: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f7eac: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f7eb0: lea eax, [esi + 3] */ r_eax = (u32)(r_esi+0x3u);
    /* 004f7eb3: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f7eb5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f7eb8: mov dword ptr [esp + 4], 0x91e920 */ W32((u32)(r_esp+0x4u), 0x91e920u);
    /* 004f7ec0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f7ec5u); f_0061cdb0();
    /* 004f7ec5: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f7ec9: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f7ecd: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f7ed0: or ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004f7ed2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f7ed5: mov dword ptr [esp + 4], 0x91e92c */ W32((u32)(r_esp+0x4u), 0x91e92cu);
    /* 004f7edd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f7ee2u); f_0061cdb0();
    /* 004f7ee2: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f7ee5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7ee6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f7ee7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f7ee8: ret 0x10 */ FN_RET(0x004f7db0); r_esp += 20; return;
}

void f_004f7eec(void) /* sub_4F7EEC */
{
    FN_ENTER(0x004f7eec);
    /* 004f7eec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ef0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f7ef2: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7ef6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f7ef8: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x4f7efdu); f_004f7330();
    /* 004f7efd: mov dword ptr [ebx], 0xafe128 */ W32((u32)(r_ebx), 0xafe128u);
    /* 004f7f03: mov eax, dword ptr [0x9b92c8] */ r_eax = R32((u32)(0x9b92c8u));
    /* 004f7f08: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004f7f0b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f7f0d: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 004f7f14: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004f7f17: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 004f7f1a: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004f7f1d: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
    /* 004f7f24: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 004f7f27: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 004f7f2a: mov esi, 1 */ r_esi = 0x1u;
    /* 004f7f2f: mov dword ptr [ebx + 0x50], 0 */ W32((u32)(r_ebx+0x50u), 0x0u);
    /* 004f7f36: mov word ptr [ebx + 0x5c], si */ W16((u32)(r_ebx+0x5cu), (u16)r_esi);
    /* 004f7f3a: lea eax, [ebx + 0x78] */ r_eax = (u32)(r_ebx+0x78u);
    /* 004f7f3d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f7f3f: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 004f7f41: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 004f7f44: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 004f7f47: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 004f7f4a: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 004f7f4d: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 004f7f50: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 004f7f53: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 004f7f56: mov edi, dword ptr [0xaafca4] */ r_edi = R32((u32)(0xaafca4u));
    /* 004f7f5c: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 004f7f63: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f7f65: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7f67: je 0x4f7fa6 */ if (fZ) goto L_004f7fa6;
L_004f7f69:; BB(0x004f7f69);
    /* 004f7f69: movsx edx, word ptr [edi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 004f7f6d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7f6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f7f71: jle 0x4f7fa6 */ if ((fZ||fS!=fO)) goto L_004f7fa6;
L_004f7f73:; BB(0x004f7f73);
    /* 004f7f73: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004f7f76: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004f7f79: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f7f7b: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f7f7d: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 004f7f80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f7f82: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004f7f84:; BB(0x004f7f84);
    /* 004f7f84: mov ebp, dword ptr [edi + 0x10] */ r_ebp = R32((u32)(r_edi+0x10u));
    /* 004f7f87: mov ebp, dword ptr [eax + ebp] */ r_ebp = R32((u32)(r_eax+r_ebp));
    /* 004f7f8a: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7f8d: je 0x4f7f99 */ if (fZ) goto L_004f7f99;
L_004f7f8f:; BB(0x004f7f8f);
    /* 004f7f8f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f7f92: mov dword ptr [ebx + 0x38], esi */ W32((u32)(r_ebx+0x38u), r_esi);
    /* 004f7f95: movsx edx, word ptr [edi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
L_004f7f99:; BB(0x004f7f99);
    /* 004f7f99: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f7f9c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7f9f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f7fa1: jl 0x4f7f84 */ if ((fS!=fO)) goto L_004f7f84;
L_004f7fa3:; BB(0x004f7fa3);
    /* 004f7fa3: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004f7fa6:; BB(0x004f7fa6);
    /* 004f7fa6: mov eax, ebx */ r_eax = r_ebx;
    /* 004f7fa8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7fa9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7faa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f7fab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f7fac: ret 4 */ FN_RET(0x004f7eec); r_esp += 8; return;
}

void f_004f7fc0(void) /* sub_4F7FC0 */
{
    FN_ENTER(0x004f7fc0);
    /* 004f7fc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7fc1: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004f7fc5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004f7fc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7fcb: je 0x4f7fd4 */ if (fZ) goto L_004f7fd4;
L_004f7fcd:; BB(0x004f7fcd);
    /* 004f7fcd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f7fd0: je 0x4f8042 */ if (fZ) goto L_004f8042;
L_004f7fd2:; BB(0x004f7fd2);
    /* 004f7fd2: jmp 0x4f803e */ goto L_004f803e;
L_004f7fd4:; BB(0x004f7fd4);
    /* 004f7fd4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004f7fd9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4f7fdeu); f_0082d990();
    /* 004f7fde: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7fe1: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7fe4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7fe6: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7fe9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4f7feeu); f_00830b74();
    /* 004f7fee: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004f7ff1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7ff3: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4f7ff8u); f_00830c04();
    /* 004f7ff8: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 004f7ffb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7ffd: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4f8002u); f_0082e9e4();
    /* 004f8002: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 004f8005: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8007: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4f800cu); f_0082d8bc();
    /* 004f800c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f8010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8011: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f8015: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8017: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4f801cu); f_00830aa0();
    /* 004f801c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4f8021u); f_0082da80();
    /* 004f8021: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f8025: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 004f8028: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f802a: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 004f802d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f8031: add dword ptr [eax + 4], ecx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f8034: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 004f8037: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f803b: add dword ptr [eax + 8], esi */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004f803e:; BB(0x004f803e);
    /* 004f803e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f803f: ret 0x10 */ FN_RET(0x004f7fc0); r_esp += 20; return;
L_004f8042:; BB(0x004f8042);
    /* 004f8042: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004f8047: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4f804cu); f_0082d990();
    /* 004f804c: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 004f804f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f8051: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8053: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4f8058u); f_0082d8bc();
    /* 004f8058: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 004f805b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f805d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f805f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4f8064u); f_0082e9e4();
    /* 004f8064: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004f8067: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f8069: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f806b: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4f8070u); f_00830c04();
    /* 004f8070: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 004f8073: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004f8076: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 004f8079: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f807c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f807e: fchs  */ ST(0) = -ST(0);
    /* 004f8080: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f8083: fchs  */ ST(0) = -ST(0);
    /* 004f8085: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f8089: fchs  */ ST(0) = -ST(0);
    /* 004f808b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f808f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8091: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4f8096u); f_00830b74();
    /* 004f8096: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f809a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f809b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f809f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f80a1: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4f80a6u); f_00830aa0();
    /* 004f80a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4f80abu); f_0082da80();
    /* 004f80ab: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80af: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f80b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f80b5: sub edx, dword ptr [esi + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f80b8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80bc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004f80bf: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f80c1: sub eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f80c4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f80c8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004f80cb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80cf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004f80d2: sub eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f80d5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004f80d9: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004f80dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f80dd: ret 0x10 */ FN_RET(0x004f7fc0); r_esp += 20; return;
}

