#include "protos.h"

void f_0070d1f8(void) /* sub_70D1F8 */
{
    FN_ENTER(0x0070d1f8);
    /* 0070d1f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070d1f9: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070d1fb: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 0070d1fe: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0070d201: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 0070d204: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0070d207: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 0070d20a: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0070d20d: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0070d210: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0070d212: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0070d214: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0070d217: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0070d21a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0070d21c: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 0070d21f: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0070d222: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0070d225: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 0070d228: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0070d22b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070d22c: ret  */ FN_RET(0x0070d1f8); r_esp += 4; return;
}

void f_0070d230(void) /* sub_70D230 */
{
    FN_ENTER(0x0070d230);
    /* 0070d230: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d235: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070d238: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d23c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070d23d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x70d242u); f_00857dec();
    /* 0070d242: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070d245: ret 4 */ FN_RET(0x0070d230); r_esp += 8; return;
}

void f_0070d248(void) /* sub_70D248 */
{
    FN_ENTER(0x0070d248);
    /* 0070d248: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d24c: mov dword ptr [ecx + 0x224], eax */ W32((u32)(r_ecx+0x224u), r_eax);
    /* 0070d252: ret 4 */ FN_RET(0x0070d248); r_esp += 8; return;
}

void f_0070d258(void) /* sub_70D258 */
{
    FN_ENTER(0x0070d258);
    /* 0070d258: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d25c: mov dword ptr [ecx + 0x228], eax */ W32((u32)(r_ecx+0x228u), r_eax);
    /* 0070d262: ret 4 */ FN_RET(0x0070d258); r_esp += 8; return;
}

void f_0070d268(void) /* sub_70D268 */
{
    FN_ENTER(0x0070d268);
    /* 0070d268: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d26c: mov dword ptr [ecx + 0x22c], eax */ W32((u32)(r_ecx+0x22cu), r_eax);
    /* 0070d272: ret 4 */ FN_RET(0x0070d268); r_esp += 8; return;
}

void f_0070d278(void) /* sub_70D278 */
{
    FN_ENTER(0x0070d278);
    /* 0070d278: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d27c: mov dword ptr [ecx + 0x230], eax */ W32((u32)(r_ecx+0x230u), r_eax);
    /* 0070d282: ret 4 */ FN_RET(0x0070d278); r_esp += 8; return;
}

void f_0070d288(void) /* sub_70D288 */
{
    FN_ENTER(0x0070d288);
    /* 0070d288: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d28c: mov dword ptr [ecx + 0x234], eax */ W32((u32)(r_ecx+0x234u), r_eax);
    /* 0070d292: ret 4 */ FN_RET(0x0070d288); r_esp += 8; return;
}

void f_0070d298(void) /* sub_70D298 */
{
    FN_ENTER(0x0070d298);
    /* 0070d298: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d29c: mov dword ptr [ecx + 0x238], eax */ W32((u32)(r_ecx+0x238u), r_eax);
    /* 0070d2a2: ret 4 */ FN_RET(0x0070d298); r_esp += 8; return;
}

void f_0070d2a8(void) /* sub_70D2A8 */
{
    FN_ENTER(0x0070d2a8);
    /* 0070d2a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d2ac: mov dword ptr [ecx + 0x23c], eax */ W32((u32)(r_ecx+0x23cu), r_eax);
    /* 0070d2b2: ret 4 */ FN_RET(0x0070d2a8); r_esp += 8; return;
}

void f_0070d2b8(void) /* sub_70D2B8 */
{
    FN_ENTER(0x0070d2b8);
    /* 0070d2b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070d2bc: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 0070d2c2: ret 4 */ FN_RET(0x0070d2b8); r_esp += 8; return;
}

void f_0070d510(void) /* sub_70D510 */
{
    FN_ENTER(0x0070d510);
    /* 0070d510: mov eax, dword ptr [0xa983a0] */ r_eax = R32((u32)(0xa983a0u));
    /* 0070d515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070d517: je 0x70d51a */ if (fZ) goto L_0070d51a;
L_0070d519:; BB(0x0070d519);
    /* 0070d519: ret  */ FN_RET(0x0070d510); r_esp += 4; return;
L_0070d51a:; BB(0x0070d51a);
    /* 0070d51a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070d51f: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x70d524u); f_0082aab8();
    /* 0070d524: push 0x96f2c4 */ { u32 v = 0x96f2c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d529: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x70d52eu); f_008009dc();
    /* 0070d52e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070d52f: mov dword ptr [0xa983a0], eax */ W32((u32)(0xa983a0u), r_eax);
    /* 0070d534: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x70d539u); f_0082aac0();
    /* 0070d539: ret  */ FN_RET(0x0070d510); r_esp += 4; return;
}

void f_0070d53c(void) /* sub_70D53C */
{
    FN_ENTER(0x0070d53c);
    /* 0070d53c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070d53d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070d53e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070d53f: sub esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070d545: mov edi, dword ptr [esp + 0x158] */ r_edi = R32((u32)(r_esp+0x158u));
    /* 0070d54c: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0070d54e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070d550: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0070d557: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0070d55f: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d562: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0070d566: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0070d56e: movzx eax, word ptr [esi + 0xc] */ r_eax = (u32)R16((u32)(r_esi+0xcu));
    /* 0070d572: mov dword ptr [esp + 0x120], eax */ W32((u32)(r_esp+0x120u), r_eax);
    /* 0070d579: fild dword ptr [esp + 0x120] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x120u)));
    /* 0070d580: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0070d584: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d587: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0070d58b: movzx eax, word ptr [esi + 0xa] */ r_eax = (u32)R16((u32)(r_esi+0xau));
    /* 0070d58f: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0070d597: mov dword ptr [esp + 0x128], eax */ W32((u32)(r_esp+0x128u), r_eax);
    /* 0070d59e: fild dword ptr [esp + 0x128] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x128u)));
    /* 0070d5a5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0070d5a9: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d5ac: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070d5b0: movzx eax, word ptr [esi + 0xa] */ r_eax = (u32)R16((u32)(r_esi+0xau));
    /* 0070d5b4: mov dword ptr [esp + 0x128], eax */ W32((u32)(r_esp+0x128u), r_eax);
    /* 0070d5bb: fild dword ptr [esp + 0x128] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x128u)));
    /* 0070d5c2: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0070d5c6: movzx eax, word ptr [esi + 0xc] */ r_eax = (u32)R16((u32)(r_esi+0xcu));
    /* 0070d5ca: mov dword ptr [esp + 0x128], eax */ W32((u32)(r_esp+0x128u), r_eax);
    /* 0070d5d1: fild dword ptr [esp + 0x128] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x128u)));
    /* 0070d5d8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0070d5dc: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d5df: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0070d5e3: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0070d5e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d5e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070d5ea: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0070d5ee: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x70d5f3u); f_0082f940();
    /* 0070d5f3: fld dword ptr [0x96f374] */ FPUSH(R_F32((u32)(0x96f374u)));
    /* 0070d5f9: fld dword ptr [0x96f370] */ FPUSH(R_F32((u32)(0x96f370u)));
    /* 0070d5ff: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 0070d603: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0070d607: movzx ebp, word ptr [esi + 6] */ r_ebp = (u32)R16((u32)(r_esi+0x6u));
    /* 0070d60b: movzx ecx, word ptr [esi + 8] */ r_ecx = (u32)R16((u32)(r_esi+0x8u));
    /* 0070d60f: mov dword ptr [esp + 0x128], edx */ W32((u32)(r_esp+0x128u), r_edx);
    /* 0070d616: fild dword ptr [esp + 0x128] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x128u)));
    /* 0070d61d: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0070d61f: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 0070d623: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070d625: mov dword ptr [esp + 0x128], eax */ W32((u32)(r_esp+0x128u), r_eax);
    /* 0070d62c: fild dword ptr [esp + 0x128] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x128u)));
    /* 0070d633: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0070d635: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0070d639: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070d63b: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0070d63f: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0070d643: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070d645: mov dword ptr [esp + 0x128], edx */ W32((u32)(r_esp+0x128u), r_edx);
    /* 0070d64c: fild dword ptr [esp + 0x128] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x128u)));
    /* 0070d653: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0070d655: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0070d659: mov dword ptr [esp + 0x128], eax */ W32((u32)(r_esp+0x128u), r_eax);
    /* 0070d660: fild dword ptr [esp + 0x128] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x128u)));
    /* 0070d667: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 0070d669: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0070d66d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070d66f: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 0070d673: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0070d677: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0070d67a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0070d67c: fnstcw word ptr [esp + 0x130] */ W16((u32)(r_esp+0x130u), fcw);
    /* 0070d683: movzx eax, word ptr [esp + 0x130] */ r_eax = (u32)R16((u32)(r_esp+0x130u));
    /* 0070d68b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070d690: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 0070d697: fldcw word ptr [esp + 0x138] */ fcw = R16((u32)(r_esp+0x138u));
    /* 0070d69e: fistp qword ptr [esp + 0x140] */ W64((u32)(r_esp+0x140u), (u64)fx_int64(ST(0))); FPOP();
    /* 0070d6a5: fldcw word ptr [esp + 0x130] */ fcw = R16((u32)(r_esp+0x130u));
    /* 0070d6ac: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 0070d6af: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0070d6b1: mov ebp, dword ptr [esp + 0x140] */ r_ebp = R32((u32)(r_esp+0x140u));
    /* 0070d6b8: fnstcw word ptr [esp + 0x130] */ W16((u32)(r_esp+0x130u), fcw);
    /* 0070d6bf: movzx eax, word ptr [esp + 0x130] */ r_eax = (u32)R16((u32)(r_esp+0x130u));
    /* 0070d6c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070d6cc: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 0070d6d3: fldcw word ptr [esp + 0x138] */ fcw = R16((u32)(r_esp+0x138u));
    /* 0070d6da: fistp qword ptr [esp + 0x140] */ W64((u32)(r_esp+0x140u), (u64)fx_int64(ST(0))); FPOP();
    /* 0070d6e1: fldcw word ptr [esp + 0x130] */ fcw = R16((u32)(r_esp+0x130u));
    /* 0070d6e8: movzx eax, byte ptr [esp + 0x140] */ r_eax = (u32)R8((u32)(r_esp+0x140u));
    /* 0070d6f0: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 0070d6f3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0070d6f5: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0070d6f8: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0070d6fb: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0070d6fd: fnstcw word ptr [esp + 0x130] */ W16((u32)(r_esp+0x130u), fcw);
    /* 0070d704: movzx eax, word ptr [esp + 0x130] */ r_eax = (u32)R16((u32)(r_esp+0x130u));
    /* 0070d70c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070d711: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 0070d718: fldcw word ptr [esp + 0x138] */ fcw = R16((u32)(r_esp+0x138u));
    /* 0070d71f: fistp qword ptr [esp + 0x140] */ W64((u32)(r_esp+0x140u), (u64)fx_int64(ST(0))); FPOP();
    /* 0070d726: fldcw word ptr [esp + 0x130] */ fcw = R16((u32)(r_esp+0x130u));
    /* 0070d72d: movzx eax, byte ptr [esp + 0x140] */ r_eax = (u32)R8((u32)(r_esp+0x140u));
    /* 0070d735: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 0070d738: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070d73a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0070d73d: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0070d73f: fnstcw word ptr [esp + 0x130] */ W16((u32)(r_esp+0x130u), fcw);
    /* 0070d746: movzx eax, word ptr [esp + 0x130] */ r_eax = (u32)R16((u32)(r_esp+0x130u));
    /* 0070d74e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070d753: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 0070d75a: fldcw word ptr [esp + 0x138] */ fcw = R16((u32)(r_esp+0x138u));
    /* 0070d761: fistp qword ptr [esp + 0x140] */ W64((u32)(r_esp+0x140u), (u64)fx_int64(ST(0))); FPOP();
    /* 0070d768: fldcw word ptr [esp + 0x130] */ fcw = R16((u32)(r_esp+0x130u));
    /* 0070d76f: movzx eax, byte ptr [esp + 0x140] */ r_eax = (u32)R8((u32)(r_esp+0x140u));
    /* 0070d777: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0070d779: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0070d77d: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0070d784: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070d788: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0070d78f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0070d793: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0070d79a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d79d: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0070d7a4: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0070d7a8: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0070d7af: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0070d7b3: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0070d7ba: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070d7be: mov dword ptr [esp + 0x94], ebp */ W32((u32)(r_esp+0x94u), r_ebp);
    /* 0070d7c5: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0070d7cc: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0070d7d0: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0070d7d7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0070d7db: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0070d7e2: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d7e5: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0070d7ec: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0070d7f0: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 0070d7f7: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0070d7fb: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 0070d802: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0070d806: mov dword ptr [esp + 0xac], ebp */ W32((u32)(r_esp+0xacu), r_ebp);
    /* 0070d80d: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 0070d814: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0070d818: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 0070d81f: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0070d823: mov dword ptr [esp + 0xb8], eax */ W32((u32)(r_esp+0xb8u), r_eax);
    /* 0070d82a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d82d: mov dword ptr [esp + 0xb8], eax */ W32((u32)(r_esp+0xb8u), r_eax);
    /* 0070d834: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0070d838: mov dword ptr [esp + 0xbc], eax */ W32((u32)(r_esp+0xbcu), r_eax);
    /* 0070d83f: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0070d843: mov dword ptr [esp + 0xc0], eax */ W32((u32)(r_esp+0xc0u), r_eax);
    /* 0070d84a: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0070d84e: mov dword ptr [esp + 0xc4], ebp */ W32((u32)(r_esp+0xc4u), r_ebp);
    /* 0070d855: mov dword ptr [esp + 0xc8], eax */ W32((u32)(r_esp+0xc8u), r_eax);
    /* 0070d85c: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0070d860: mov dword ptr [esp + 0xcc], eax */ W32((u32)(r_esp+0xccu), r_eax);
    /* 0070d867: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0070d86b: mov dword ptr [esp + 0xd0], eax */ W32((u32)(r_esp+0xd0u), r_eax);
    /* 0070d872: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0070d875: mov dword ptr [esp + 0xd0], eax */ W32((u32)(r_esp+0xd0u), r_eax);
    /* 0070d87c: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 0070d880: mov dword ptr [esp + 0xd4], eax */ W32((u32)(r_esp+0xd4u), r_eax);
    /* 0070d887: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 0070d88b: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 0070d892: mov dword ptr [esp + 0xdc], ebp */ W32((u32)(r_esp+0xdcu), r_ebp);
    /* 0070d899: movzx edi, word ptr [edi + 0x10] */ r_edi = (u32)R16((u32)(r_edi+0x10u));
    /* 0070d89d: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070d8a3: jne 0x70d9dd */ if (!fZ) goto L_0070d9dd;
L_0070d8a9:; BB(0x0070d8a9);
    /* 0070d8a9: mov eax, dword ptr [0x96f33c] */ r_eax = R32((u32)(0x96f33cu));
    /* 0070d8ae: mov edx, dword ptr [0x96f358] */ r_edx = R32((u32)(0x96f358u));
    /* 0070d8b4: mov ecx, dword ptr [0x96f35c] */ r_ecx = R32((u32)(0x96f35cu));
    /* 0070d8ba: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0070d8be: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0070d8c2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0070d8c6: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0070d8ca: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0070d8ce: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0070d8d2: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0070d8d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0070d8da: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0070d8de: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0070d8e0: fsub st(7) */ ST(0) = ST(0) - ST(7);
    /* 0070d8e2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0070d8e4: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0070d8e6: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0070d8e8: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0070d8ea: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0070d8ec: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070d8ee: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0070d8f2: fsub st(5), st(0) */ ST(5) = ST(5) - ST(0);
    /* 0070d8f4: mov dword ptr [esp + 0xfc], eax */ W32((u32)(r_esp+0xfcu), r_eax);
    /* 0070d8fb: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070d8ff: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 0070d906: mov dword ptr [esp + 0x11c], ecx */ W32((u32)(r_esp+0x11cu), r_ecx);
    /* 0070d90d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070d90f: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 0070d916: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0070d91a: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0070d91c: fstp dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0)); FPOP();
    /* 0070d923: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070d925: fstp dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0)); FPOP();
    /* 0070d92c: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 0070d933: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0070d937: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070d939: fstp dword ptr [esp + 0x108] */ W_F32((u32)(r_esp+0x108u), ST(0)); FPOP();
    /* 0070d940: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070d942: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0070d944: fstp dword ptr [esp + 0x10c] */ W_F32((u32)(r_esp+0x10cu), ST(0)); FPOP();
    /* 0070d94b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070d94d: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 0070d951: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070d953: fstp dword ptr [esp + 0x110] */ W_F32((u32)(r_esp+0x110u), ST(0)); FPOP();
    /* 0070d95a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0070d95c: fstp dword ptr [esp + 0x114] */ W_F32((u32)(r_esp+0x114u), ST(0)); FPOP();
    /* 0070d963: mov dword ptr [esp + 0xe0], edi */ W32((u32)(r_esp+0xe0u), r_edi);
    /* 0070d96a: mov dword ptr [esp + 0xe4], eax */ W32((u32)(r_esp+0xe4u), r_eax);
    /* 0070d971: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0070d975: mov dword ptr [esp + 0xe8], eax */ W32((u32)(r_esp+0xe8u), r_eax);
    /* 0070d97c: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0070d980: mov dword ptr [esp + 0x100], eax */ W32((u32)(r_esp+0x100u), r_eax);
    /* 0070d987: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0070d98b: mov dword ptr [esp + 0x104], eax */ W32((u32)(r_esp+0x104u), r_eax);
    /* 0070d992: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x70d997u); f_007a93d8();
    /* 0070d997: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070d99c: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x70d9a1u); f_0082bb30();
    /* 0070d9a1: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0070d9a4: mov edx, ebp */ r_edx = r_ebp;
    /* 0070d9a6: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x70d9abu); f_0082bb60();
    /* 0070d9ab: lea ecx, [esp + 0xe0] */ r_ecx = (u32)(r_esp+0xe0u);
    /* 0070d9b2: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x70d9b7u); f_0082bb74();
    /* 0070d9b7: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x70d9bcu); f_004ac444();
    /* 0070d9bc: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x70d9c1u); f_007a9318();
    /* 0070d9c1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9c5: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x70d9cau); f_0082acfc();
    /* 0070d9ca: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9ce: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x70d9d3u); f_0082acfc();
    /* 0070d9d3: add esp, 0x158 */ {  u32 a = r_esp; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070d9d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070d9da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070d9db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070d9dc: ret  */ FN_RET(0x0070d53c); r_esp += 4; return;
L_0070d9dd:; BB(0x0070d9dd);
    /* 0070d9dd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9e1: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x70d9e6u); f_0082acfc();
    /* 0070d9e6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9ea: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x70d9efu); f_0082acfc();
    /* 0070d9ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070d9f2: jmp 0x70d8a9 */ goto L_0070d8a9;
}

void f_0070d9f8(void) /* sub_70D9F8 */
{
    FN_ENTER(0x0070d9f8);
    /* 0070d9f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070d9fc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070d9ff: movzx edx, word ptr [esp + 0x34] */ r_edx = (u32)R16((u32)(r_esp+0x34u));
    /* 0070da04: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0070da07: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070da09: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0070da0d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070da11: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 0070da15: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0070da19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070da1b: mov dword ptr [ecx], 0x47800000 */ W32((u32)(r_ecx), 0x47800000u);
    /* 0070da21: mov dword ptr [eax], 0xc7800000 */ W32((u32)(r_eax), 0xc7800000u);
    /* 0070da27: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0070da2a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070da2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070da2e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070da30: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0070da32: add eax, dword ptr [esp + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070da36: mov ebx, eax */ r_ebx = r_eax;
L_0070da38:; BB(0x0070da38);
    /* 0070da38: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0070da3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070da3d: je 0x70dae3 */ if (fZ) goto L_0070dae3;
L_0070da43:; BB(0x0070da43);
    /* 0070da43: fld dword ptr [0x96f3b0] */ FPUSH(R_F32((u32)(0x96f3b0u)));
    /* 0070da49: fld dword ptr [0x96f3b8] */ FPUSH(R_F32((u32)(0x96f3b8u)));
    /* 0070da4f: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 0070da52: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0070da55: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0070da57: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0070da59: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0070da5c: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0070da5e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0070da60: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0070da62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070da64: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 0070da67: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 0070da69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070da6b: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0070da6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070da6e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070da70: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070da72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070da74: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0070da76: jae 0x70da7a */ if (!fC) goto L_0070da7a;
L_0070da78:; BB(0x0070da78);
    /* 0070da78: fst st(1) */ ST(1) = ST(0);
L_0070da7a:; BB(0x0070da7a);
    /* 0070da7a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070da7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070da7d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070da7f: jae 0x70da83 */ if (!fC) goto L_0070da83;
L_0070da81:; BB(0x0070da81);
    /* 0070da81: fst st(1) */ ST(1) = ST(0);
L_0070da83:; BB(0x0070da83);
    /* 0070da83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070da85: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070da88: je 0x70dab3 */ if (fZ) goto L_0070dab3;
L_0070da8a:; BB(0x0070da8a);
    /* 0070da8a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070da8d: je 0x70dab3 */ if (fZ) goto L_0070dab3;
L_0070da8f:; BB(0x0070da8f);
    /* 0070da8f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070da92: jne 0x70daeb */ if (!fZ) goto L_0070daeb;
L_0070da94:; BB(0x0070da94);
    /* 0070da94: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0070da98: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070da9a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0070da9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070daa0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0070daa4: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0070daa8: mov eax, edi */ r_eax = r_edi;
    /* 0070daaa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070daac: call 0x70daf4 */ r_esp -= 4; W32(r_esp, 0x70dab1u); f_0070daf4();
    /* 0070dab1: jmp 0x70dadb */ goto L_0070dadb;
L_0070dab3:; BB(0x0070dab3);
    /* 0070dab3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070dab5: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0070dab8: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070daba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dabc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dabd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070dabf: jb 0x70dac3 */ if (fC) goto L_0070dac3;
L_0070dac1:; BB(0x0070dac1);
    /* 0070dac1: fst st(2) */ ST(2) = ST(0);
L_0070dac3:; BB(0x0070dac3);
    /* 0070dac3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dac5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070dac7: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0070daca: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0070dacc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070dace: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dad0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dad1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070dad3: ja 0x70dad7 */ if ((!fC&&!fZ)) goto L_0070dad7;
L_0070dad5:; BB(0x0070dad5);
    /* 0070dad5: fst st(1) */ ST(1) = ST(0);
L_0070dad7:; BB(0x0070dad7);
    /* 0070dad7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dad9: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
L_0070dadb:; BB(0x0070dadb);
    /* 0070dadb: add ebx, 0x3c */ {  u32 a = r_ebx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070dade: jmp 0x70da38 */ goto L_0070da38;
L_0070dae3:; BB(0x0070dae3);
    /* 0070dae3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070dae6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070dae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070dae8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070dae9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070daea: ret  */ FN_RET(0x0070d9f8); r_esp += 4; return;
L_0070daeb:; BB(0x0070daeb);
    /* 0070daeb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070daed: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070daef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070daf1: jmp 0x70dadb */ goto L_0070dadb;
}

void f_0070daf4(void) /* sub_70DAF4 */
{
    FN_ENTER(0x0070daf4);
    /* 0070daf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070daf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070daf6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070daf7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070daf8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070dafb: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0070daff: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0070db03: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0070db07: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070db09: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0070db0d: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0070db10: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070db12: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070db14: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0070db17: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070db19: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070db1b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070db1d: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0070db1f: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070db21: mov ebp, eax */ r_ebp = r_eax;
    /* 0070db23: mov esi, ecx */ r_esi = r_ecx;
    /* 0070db25: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070db27: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0070db29:; BB(0x0070db29);
    /* 0070db29: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0070db2c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070db2e: je 0x70dbd0 */ if (fZ) goto L_0070dbd0;
L_0070db34:; BB(0x0070db34);
    /* 0070db34: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0070db38: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0070db3c: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 0070db3f: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0070db42: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0070db44: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0070db48: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0070db4b: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0070db4d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0070db4f: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0070db51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070db53: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 0070db56: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 0070db58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070db5a: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0070db5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070db5d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070db5f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070db61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070db63: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0070db65: jae 0x70db69 */ if (!fC) goto L_0070db69;
L_0070db67:; BB(0x0070db67);
    /* 0070db67: fst st(1) */ ST(1) = ST(0);
L_0070db69:; BB(0x0070db69);
    /* 0070db69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070db6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070db6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070db6e: jae 0x70db72 */ if (!fC) goto L_0070db72;
L_0070db70:; BB(0x0070db70);
    /* 0070db70: fst st(1) */ ST(1) = ST(0);
L_0070db72:; BB(0x0070db72);
    /* 0070db72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070db74: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070db77: je 0x70dba2 */ if (fZ) goto L_0070dba2;
L_0070db79:; BB(0x0070db79);
    /* 0070db79: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070db7c: je 0x70dba2 */ if (fZ) goto L_0070dba2;
L_0070db7e:; BB(0x0070db7e);
    /* 0070db7e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070db81: jne 0x70dbd8 */ if (!fZ) goto L_0070dbd8;
L_0070db83:; BB(0x0070db83);
    /* 0070db83: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0070db87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070db89: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0070db8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070db8f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0070db93: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0070db97: mov eax, ebp */ r_eax = r_ebp;
    /* 0070db99: mov ecx, esi */ r_ecx = r_esi;
    /* 0070db9b: call 0x70daf4 */ r_esp -= 4; W32(r_esp, 0x70dba0u); f_0070daf4();
    /* 0070dba0: jmp 0x70dbc8 */ goto L_0070dbc8;
L_0070dba2:; BB(0x0070dba2);
    /* 0070dba2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070dba4: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0070dba6: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070dba8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dbaa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dbab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070dbad: jb 0x70dbb1 */ if (fC) goto L_0070dbb1;
L_0070dbaf:; BB(0x0070dbaf);
    /* 0070dbaf: fst st(2) */ ST(2) = ST(0);
L_0070dbb1:; BB(0x0070dbb1);
    /* 0070dbb1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dbb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070dbb5: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0070dbb7: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0070dbb9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070dbbb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dbbd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dbbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070dbc0: ja 0x70dbc4 */ if ((!fC&&!fZ)) goto L_0070dbc4;
L_0070dbc2:; BB(0x0070dbc2);
    /* 0070dbc2: fst st(1) */ ST(1) = ST(0);
L_0070dbc4:; BB(0x0070dbc4);
    /* 0070dbc4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dbc6: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
L_0070dbc8:; BB(0x0070dbc8);
    /* 0070dbc8: add ebx, 0x3c */ {  u32 a = r_ebx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070dbcb: jmp 0x70db29 */ goto L_0070db29;
L_0070dbd0:; BB(0x0070dbd0);
    /* 0070dbd0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070dbd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070dbd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070dbd5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070dbd6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070dbd7: ret  */ FN_RET(0x0070daf4); r_esp += 4; return;
L_0070dbd8:; BB(0x0070dbd8);
    /* 0070dbd8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070dbda: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070dbdc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dbde: jmp 0x70dbc8 */ goto L_0070dbc8;
}

void f_0070dbe0(void) /* sub_70DBE0 */
{
    FN_ENTER(0x0070dbe0);
    /* 0070dbe0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070dbe4: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 0070dbe9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbea: mov ebx, esp */ r_ebx = r_esp;
    /* 0070dbec: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0070dbef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbf2: sub esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070dbf8: mov esi, eax */ r_esi = r_eax;
    /* 0070dbfa: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0070dbfd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0070dc01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0070dc04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dc06: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0070dc09: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc0b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc0d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc0f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc11: add edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc14: mov ebp, edx */ r_ebp = r_edx;
L_0070dc16:; BB(0x0070dc16);
    /* 0070dc16: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0070dc19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dc1b: je 0x70ded4 */ if (fZ) goto L_0070ded4;
L_0070dc21:; BB(0x0070dc21);
    /* 0070dc21: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0070dc24: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0070dc27: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0070dc29: fsubr dword ptr [esi + 8] */ ST(0) = R_F32((u32)(r_esi+0x8u)) - ST(0);
    /* 0070dc2c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070dc2e: fld dword ptr [0x96f3ac] */ FPUSH(R_F32((u32)(0x96f3acu)));
    /* 0070dc34: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0070dc36: fcom dword ptr [edi + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x18u))); 
    /* 0070dc39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dc3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dc3c: jb 0x70dc46 */ if (fC) goto L_0070dc46;
L_0070dc3e:; BB(0x0070dc3e);
    /* 0070dc3e: fcom dword ptr [edi + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x1cu))); 
    /* 0070dc41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dc43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dc44: jb 0x70dc69 */ if (fC) goto L_0070dc69;
L_0070dc46:; BB(0x0070dc46);
    /* 0070dc46: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070dc48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dc4a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070dc4d: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 0070dc50: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0070dc54: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0070dc57: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dc59: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0070dc5c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc5e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc60: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc62: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc64: add edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc67: jmp 0x70dc16 */ goto L_0070dc16;
L_0070dc69:; BB(0x0070dc69);
    /* 0070dc69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dc6b: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0070dc6d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0070dc71: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0070dc74: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0070dc78: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0070dc7b: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0070dc7f: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0070dc82: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0070dc86: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 0070dc89: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070dc8d: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 0070dc90: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0070dc94: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0070dc97: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0070dc9b: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0070dc9e: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 0070dca2: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0070dca5: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0070dca9: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0070dcac: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0070dcb0: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0070dcb3: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0070dcb7: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 0070dcba: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0070dcbe: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0070dcc1: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0070dcc5: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0070dcc8: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0070dccc: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0070dccf: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 0070dcd3: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0070dcd6: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 0070dcda: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0070dcdd: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0070dce1: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0070dce4: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 0070dce8: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0070dceb: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 0070dcef: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0070dcf2: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 0070dcf6: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 0070dcf9: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 0070dcfd: mov ecx, dword ptr [esi + 0x54] */ r_ecx = R32((u32)(r_esi+0x54u));
    /* 0070dd00: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 0070dd04: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 0070dd07: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 0070dd0b: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 0070dd0e: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 0070dd12: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0070dd16: movzx ecx, word ptr [edi + 4] */ r_ecx = (u32)R16((u32)(r_edi+0x4u));
    /* 0070dd1a: or word ptr [esp + 0x30], cx */ { u32 ad = (u32)(r_esp+0x30u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0070dd1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dd21: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x70dd26u); f_0082d990();
    /* 0070dd26: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0070dd2a: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070dd2e: call 0x70dee4 */ r_esp -= 4; W32(r_esp, 0x70dd33u); f_0070dee4();
    /* 0070dd33: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0070dd36: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd39: je 0x70dd94 */ if (fZ) goto L_0070dd94;
L_0070dd3b:; BB(0x0070dd3b);
    /* 0070dd3b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd3e: jne 0x70dd4f */ if (!fZ) goto L_0070dd4f;
L_0070dd40:; BB(0x0070dd40);
    /* 0070dd40: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070dd44: movsx edx, word ptr [edi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0070dd48: call 0x70dbe9 */ r_esp -= 4; W32(r_esp, 0x70dd4du); f_0070dbe9();
    /* 0070dd4d: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070dd4f:; BB(0x0070dd4f);
    /* 0070dd4f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd52: jne 0x70ddaf */ if (!fZ) goto L_0070ddaf;
L_0070dd54:; BB(0x0070dd54);
    /* 0070dd54: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0070dd58: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0070dd5c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0070dd5f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0070dd63: call 0x70e5dc */ r_esp -= 4; W32(r_esp, 0x70dd68u); f_0070e5dc();
    /* 0070dd68: mov edi, eax */ r_edi = r_eax;
    /* 0070dd6a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd6c: je 0x70ddaf */ if (fZ) goto L_0070ddaf;
L_0070dd6e:; BB(0x0070dd6e);
    /* 0070dd6e: movzx ecx, word ptr [edi + 2] */ r_ecx = (u32)R16((u32)(r_edi+0x2u));
    /* 0070dd72: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd75: je 0x70de11 */ if (fZ) goto L_0070de11;
L_0070dd7b:; BB(0x0070dd7b);
    /* 0070dd7b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd7e: je 0x70de02 */ if (fZ) goto L_0070de02;
L_0070dd84:; BB(0x0070dd84);
    /* 0070dd84: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd87: je 0x70de42 */ if (fZ) goto L_0070de42;
L_0070dd8d:; BB(0x0070dd8d);
    /* 0070dd8d: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd90: je 0x70dddb */ if (fZ) goto L_0070dddb;
L_0070dd92:; BB(0x0070dd92);
    /* 0070dd92: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070dd94:; BB(0x0070dd94);
    /* 0070dd94: movzx ecx, word ptr [edi + 2] */ r_ecx = (u32)R16((u32)(r_edi+0x2u));
    /* 0070dd98: lea edi, [esp + 0x20] */ r_edi = (u32)(r_esp+0x20u);
    /* 0070dd9c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dd9e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dda0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dda2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dda4: add dword ptr [esp + 0x20], ecx */ { u32 ad = (u32)(r_esp+0x20u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070dda8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070dda9: call 0x70d53c */ r_esp -= 4; W32(r_esp, 0x70ddaeu); f_0070d53c();
    /* 0070ddae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070ddaf:; BB(0x0070ddaf);
    /* 0070ddaf: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070ddb2: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 0070ddb5: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0070ddb9: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0070ddbc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070ddbe: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0070ddc1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc7: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc9: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070ddce: add edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddd1: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x70ddd6u); f_0082eb80();
    /* 0070ddd6: jmp 0x70dc16 */ goto L_0070dc16;
L_0070dddb:; BB(0x0070dddb);
    /* 0070dddb: call 0x829cc0 */ r_esp -= 4; W32(r_esp, 0x70dde0u); f_00829cc0();
    /* 0070dde0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0070dde4: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070dde7: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0070ddeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ddec: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0070ddf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ddf1: call dword ptr [edi + 4] */ { u32 t = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, 0x70ddf4u); call_ind(t); }
    /* 0070ddf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ddf7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0070ddfb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70de00u); f_00829cc8();
    /* 0070de00: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070de02:; BB(0x0070de02);
    /* 0070de02: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070de06: movsx edx, word ptr [edi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 0070de0a: call 0x70dbe9 */ r_esp -= 4; W32(r_esp, 0x70de0fu); f_0070dbe9();
    /* 0070de0f: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070de11:; BB(0x0070de11);
    /* 0070de11: call 0x829cc0 */ r_esp -= 4; W32(r_esp, 0x70de16u); f_00829cc0();
    /* 0070de16: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0070de1a: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0070de1d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70de22u); f_00829cc8();
    /* 0070de22: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0070de26: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070de29: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0070de2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070de2e: call 0x70d53c */ r_esp -= 4; W32(r_esp, 0x70de33u); f_0070d53c();
    /* 0070de33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070de34: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0070de38: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70de3du); f_00829cc8();
    /* 0070de3d: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070de42:; BB(0x0070de42);
    /* 0070de42: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0070de45: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0070de49: call 0x829cc0 */ r_esp -= 4; W32(r_esp, 0x70de4eu); f_00829cc0();
    /* 0070de4e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0070de52: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 0070de59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070de5a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0070de5e: call 0x70ed8c */ r_esp -= 4; W32(r_esp, 0x70de63u); f_0070ed8c();
    /* 0070de63: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0070de6a: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0070de6e: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 0070de75: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0070de79: mov ecx, dword ptr [esp + 0xd8] */ r_ecx = R32((u32)(r_esp+0xd8u));
    /* 0070de80: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 0070de84: mov ecx, dword ptr [esp + 0xdc] */ r_ecx = R32((u32)(r_esp+0xdcu));
    /* 0070de8b: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 0070de8f: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 0070de92: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070de94: jne 0x70dea1 */ if (!fZ) goto L_0070dea1;
L_0070de96:; BB(0x0070de96);
    /* 0070de96: mov ecx, dword ptr [esp + 0x88] */ r_ecx = R32((u32)(r_esp+0x88u));
    /* 0070de9d: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
L_0070dea1:; BB(0x0070dea1);
    /* 0070dea1: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0070dea5: call 0x70ed80 */ r_esp -= 4; W32(r_esp, 0x70deaau); f_0070ed80();
    /* 0070deaa: mov ecx, eax */ r_ecx = r_eax;
    /* 0070deac: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70deb1u); f_00829cc8();
    /* 0070deb1: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0070deb5: call 0x5d70f8 */ r_esp -= 4; W32(r_esp, 0x70debau); f_005d70f8();
    /* 0070deba: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0070debd: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070dec1: call 0x70dbe9 */ r_esp -= 4; W32(r_esp, 0x70dec6u); f_0070dbe9();
    /* 0070dec6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0070deca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70decfu); f_00829cc8();
    /* 0070decf: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070ded4:; BB(0x0070ded4);
    /* 0070ded4: add esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070deda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070dedb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070dedc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070dedd: mov esp, ebx */ r_esp = r_ebx;
    /* 0070dedf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070dee0: ret  */ FN_RET(0x0070dbe0); r_esp += 4; return;
}

void f_0070dbe9(void) /* sub_70DBE9 */
{
    FN_ENTER(0x0070dbe9);
    /* 0070dbe9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbea: mov ebx, esp */ r_ebx = r_esp;
    /* 0070dbec: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0070dbef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070dbf2: sub esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070dbf8: mov esi, eax */ r_esi = r_eax;
    /* 0070dbfa: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0070dbfd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0070dc01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0070dc04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dc06: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0070dc09: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc0b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc0d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc0f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc11: add edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc14: mov ebp, edx */ r_ebp = r_edx;
L_0070dc16:; BB(0x0070dc16);
    /* 0070dc16: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0070dc19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dc1b: je 0x70ded4 */ if (fZ) goto L_0070ded4;
L_0070dc21:; BB(0x0070dc21);
    /* 0070dc21: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0070dc24: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0070dc27: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0070dc29: fsubr dword ptr [esi + 8] */ ST(0) = R_F32((u32)(r_esi+0x8u)) - ST(0);
    /* 0070dc2c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070dc2e: fld dword ptr [0x96f3ac] */ FPUSH(R_F32((u32)(0x96f3acu)));
    /* 0070dc34: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0070dc36: fcom dword ptr [edi + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x18u))); 
    /* 0070dc39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dc3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dc3c: jb 0x70dc46 */ if (fC) goto L_0070dc46;
L_0070dc3e:; BB(0x0070dc3e);
    /* 0070dc3e: fcom dword ptr [edi + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x1cu))); 
    /* 0070dc41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070dc43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070dc44: jb 0x70dc69 */ if (fC) goto L_0070dc69;
L_0070dc46:; BB(0x0070dc46);
    /* 0070dc46: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070dc48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dc4a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070dc4d: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 0070dc50: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0070dc54: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0070dc57: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dc59: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0070dc5c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc5e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc60: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc62: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc64: add edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070dc67: jmp 0x70dc16 */ goto L_0070dc16;
L_0070dc69:; BB(0x0070dc69);
    /* 0070dc69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070dc6b: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0070dc6d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0070dc71: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0070dc74: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0070dc78: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0070dc7b: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0070dc7f: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0070dc82: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0070dc86: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 0070dc89: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070dc8d: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 0070dc90: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0070dc94: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0070dc97: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0070dc9b: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0070dc9e: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 0070dca2: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0070dca5: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0070dca9: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0070dcac: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0070dcb0: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0070dcb3: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0070dcb7: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 0070dcba: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0070dcbe: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0070dcc1: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0070dcc5: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0070dcc8: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0070dccc: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0070dccf: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 0070dcd3: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0070dcd6: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 0070dcda: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0070dcdd: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0070dce1: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0070dce4: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 0070dce8: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0070dceb: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 0070dcef: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0070dcf2: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 0070dcf6: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 0070dcf9: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 0070dcfd: mov ecx, dword ptr [esi + 0x54] */ r_ecx = R32((u32)(r_esi+0x54u));
    /* 0070dd00: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 0070dd04: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 0070dd07: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 0070dd0b: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 0070dd0e: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 0070dd12: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0070dd16: movzx ecx, word ptr [edi + 4] */ r_ecx = (u32)R16((u32)(r_edi+0x4u));
    /* 0070dd1a: or word ptr [esp + 0x30], cx */ { u32 ad = (u32)(r_esp+0x30u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0070dd1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dd21: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x70dd26u); f_0082d990();
    /* 0070dd26: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0070dd2a: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070dd2e: call 0x70dee4 */ r_esp -= 4; W32(r_esp, 0x70dd33u); f_0070dee4();
    /* 0070dd33: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0070dd36: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd39: je 0x70dd94 */ if (fZ) goto L_0070dd94;
L_0070dd3b:; BB(0x0070dd3b);
    /* 0070dd3b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd3e: jne 0x70dd4f */ if (!fZ) goto L_0070dd4f;
L_0070dd40:; BB(0x0070dd40);
    /* 0070dd40: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070dd44: movsx edx, word ptr [edi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0070dd48: call 0x70dbe9 */ r_esp -= 4; W32(r_esp, 0x70dd4du); f_0070dbe9();
    /* 0070dd4d: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070dd4f:; BB(0x0070dd4f);
    /* 0070dd4f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd52: jne 0x70ddaf */ if (!fZ) goto L_0070ddaf;
L_0070dd54:; BB(0x0070dd54);
    /* 0070dd54: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0070dd58: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0070dd5c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0070dd5f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0070dd63: call 0x70e5dc */ r_esp -= 4; W32(r_esp, 0x70dd68u); f_0070e5dc();
    /* 0070dd68: mov edi, eax */ r_edi = r_eax;
    /* 0070dd6a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd6c: je 0x70ddaf */ if (fZ) goto L_0070ddaf;
L_0070dd6e:; BB(0x0070dd6e);
    /* 0070dd6e: movzx ecx, word ptr [edi + 2] */ r_ecx = (u32)R16((u32)(r_edi+0x2u));
    /* 0070dd72: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd75: je 0x70de11 */ if (fZ) goto L_0070de11;
L_0070dd7b:; BB(0x0070dd7b);
    /* 0070dd7b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd7e: je 0x70de02 */ if (fZ) goto L_0070de02;
L_0070dd84:; BB(0x0070dd84);
    /* 0070dd84: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd87: je 0x70de42 */ if (fZ) goto L_0070de42;
L_0070dd8d:; BB(0x0070dd8d);
    /* 0070dd8d: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dd90: je 0x70dddb */ if (fZ) goto L_0070dddb;
L_0070dd92:; BB(0x0070dd92);
    /* 0070dd92: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070dd94:; BB(0x0070dd94);
    /* 0070dd94: movzx ecx, word ptr [edi + 2] */ r_ecx = (u32)R16((u32)(r_edi+0x2u));
    /* 0070dd98: lea edi, [esp + 0x20] */ r_edi = (u32)(r_esp+0x20u);
    /* 0070dd9c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dd9e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dda0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dda2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070dda4: add dword ptr [esp + 0x20], ecx */ { u32 ad = (u32)(r_esp+0x20u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070dda8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070dda9: call 0x70d53c */ r_esp -= 4; W32(r_esp, 0x70ddaeu); f_0070d53c();
    /* 0070ddae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070ddaf:; BB(0x0070ddaf);
    /* 0070ddaf: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070ddb2: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 0070ddb5: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0070ddb9: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0070ddbc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070ddbe: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0070ddc1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc7: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddc9: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070ddce: add edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070ddd1: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x70ddd6u); f_0082eb80();
    /* 0070ddd6: jmp 0x70dc16 */ goto L_0070dc16;
L_0070dddb:; BB(0x0070dddb);
    /* 0070dddb: call 0x829cc0 */ r_esp -= 4; W32(r_esp, 0x70dde0u); f_00829cc0();
    /* 0070dde0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0070dde4: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070dde7: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0070ddeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ddec: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0070ddf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ddf1: call dword ptr [edi + 4] */ { u32 t = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, 0x70ddf4u); call_ind(t); }
    /* 0070ddf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ddf7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0070ddfb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70de00u); f_00829cc8();
    /* 0070de00: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070de02:; BB(0x0070de02);
    /* 0070de02: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070de06: movsx edx, word ptr [edi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 0070de0a: call 0x70dbe9 */ r_esp -= 4; W32(r_esp, 0x70de0fu); f_0070dbe9();
    /* 0070de0f: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070de11:; BB(0x0070de11);
    /* 0070de11: call 0x829cc0 */ r_esp -= 4; W32(r_esp, 0x70de16u); f_00829cc0();
    /* 0070de16: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0070de1a: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0070de1d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70de22u); f_00829cc8();
    /* 0070de22: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0070de26: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070de29: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0070de2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070de2e: call 0x70d53c */ r_esp -= 4; W32(r_esp, 0x70de33u); f_0070d53c();
    /* 0070de33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070de34: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0070de38: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70de3du); f_00829cc8();
    /* 0070de3d: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070de42:; BB(0x0070de42);
    /* 0070de42: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0070de45: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0070de49: call 0x829cc0 */ r_esp -= 4; W32(r_esp, 0x70de4eu); f_00829cc0();
    /* 0070de4e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0070de52: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 0070de59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070de5a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0070de5e: call 0x70ed8c */ r_esp -= 4; W32(r_esp, 0x70de63u); f_0070ed8c();
    /* 0070de63: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0070de6a: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0070de6e: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 0070de75: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0070de79: mov ecx, dword ptr [esp + 0xd8] */ r_ecx = R32((u32)(r_esp+0xd8u));
    /* 0070de80: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 0070de84: mov ecx, dword ptr [esp + 0xdc] */ r_ecx = R32((u32)(r_esp+0xdcu));
    /* 0070de8b: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 0070de8f: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 0070de92: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070de94: jne 0x70dea1 */ if (!fZ) goto L_0070dea1;
L_0070de96:; BB(0x0070de96);
    /* 0070de96: mov ecx, dword ptr [esp + 0x88] */ r_ecx = R32((u32)(r_esp+0x88u));
    /* 0070de9d: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
L_0070dea1:; BB(0x0070dea1);
    /* 0070dea1: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0070dea5: call 0x70ed80 */ r_esp -= 4; W32(r_esp, 0x70deaau); f_0070ed80();
    /* 0070deaa: mov ecx, eax */ r_ecx = r_eax;
    /* 0070deac: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70deb1u); f_00829cc8();
    /* 0070deb1: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0070deb5: call 0x5d70f8 */ r_esp -= 4; W32(r_esp, 0x70debau); f_005d70f8();
    /* 0070deba: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0070debd: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070dec1: call 0x70dbe9 */ r_esp -= 4; W32(r_esp, 0x70dec6u); f_0070dbe9();
    /* 0070dec6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0070deca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70decfu); f_00829cc8();
    /* 0070decf: jmp 0x70ddaf */ goto L_0070ddaf;
L_0070ded4:; BB(0x0070ded4);
    /* 0070ded4: add esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070deda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070dedb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070dedc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070dedd: mov esp, ebx */ r_esp = r_ebx;
    /* 0070dedf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070dee0: ret  */ FN_RET(0x0070dbe9); r_esp += 4; return;
}

void f_0070dee4(void) /* sub_70DEE4 */
{
    FN_ENTER(0x0070dee4);
    /* 0070dee4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070dee5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070dee6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070dee7: sub esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070deed: mov ebp, eax */ r_ebp = r_eax;
    /* 0070deef: fld dword ptr [0x96f3a8] */ FPUSH(R_F32((u32)(0x96f3a8u)));
    /* 0070def5: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 0070def8: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0070defb: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0070deff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070df01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070df03: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0070df06: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070df08: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070df0a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070df0c: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070df0e: fld dword ptr [ebx + edi + 8] */ FPUSH(R_F32((u32)(r_ebx+r_edi+0x8u)));
    /* 0070df12: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0070df14: fld dword ptr [ebx + edi + 0xc] */ FPUSH(R_F32((u32)(r_ebx+r_edi+0xcu)));
    /* 0070df18: mov ecx, dword ptr [ebx + edi + 0x24] */ r_ecx = R32((u32)(r_ebx+r_edi+0x24u));
    /* 0070df1c: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0070df1e: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0070df22: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0070df26: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0070df2a: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0070df2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070df30: je 0x70df69 */ if (fZ) goto L_0070df69;
L_0070df32:; BB(0x0070df32);
    /* 0070df32: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070df36: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 0070df3d: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0070df44: call 0x70e168 */ r_esp -= 4; W32(r_esp, 0x70df49u); f_0070e168();
    /* 0070df49: fld dword ptr [esp + 0x94] */ FPUSH(R_F32((u32)(r_esp+0x94u)));
    /* 0070df50: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0070df54: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 0070df5b: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 0070df5f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070df61: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0070df65: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_0070df69:; BB(0x0070df69);
    /* 0070df69: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0070df6d: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x70df72u); f_00830cd8();
    /* 0070df72: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070df75: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0070df79: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0070df7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070df7f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0070df82: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0070df86: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0070df8e: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0070df92: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x70df97u); f_00830b74();
    /* 0070df97: mov edx, dword ptr [ebx + edi + 0x2c] */ r_edx = R32((u32)(r_ebx+r_edi+0x2cu));
    /* 0070df9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070df9d: je 0x70dfed */ if (fZ) goto L_0070dfed;
L_0070df9f:; BB(0x0070df9f);
    /* 0070df9f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070dfa3: lea eax, [esp + 0x98] */ r_eax = (u32)(r_esp+0x98u);
    /* 0070dfaa: call 0x70e200 */ r_esp -= 4; W32(r_esp, 0x70dfafu); f_0070e200();
    /* 0070dfaf: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 0070dfb6: fmul dword ptr [0x96f3a0] */ ST(0) = ST(0) * R_F32((u32)(0x96f3a0u));
    /* 0070dfbc: fdiv dword ptr [0x96f39c] */ ST(0) = ST(0) / R_F32((u32)(0x96f39cu));
    /* 0070dfc2: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0070dfc6: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070dfcb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070dfd0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0070dfd4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0070dfd8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070dfdc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070dfe0: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0070dfe4: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0070dfe8: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x70dfedu); f_00830c04();
L_0070dfed:; BB(0x0070dfed);
    /* 0070dfed: mov ecx, dword ptr [ebx + edi + 0x28] */ r_ecx = R32((u32)(r_ebx+r_edi+0x28u));
    /* 0070dff1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070dff3: je 0x70e028 */ if (fZ) goto L_0070e028;
L_0070dff5:; BB(0x0070dff5);
    /* 0070dff5: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070dff9: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 0070e000: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0070e007: call 0x70e168 */ r_esp -= 4; W32(r_esp, 0x70e00cu); f_0070e168();
    /* 0070e00c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070e011: push dword ptr [esp + 0x94] */ { u32 v = R32((u32)(r_esp+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e018: push dword ptr [esp + 0x9c] */ { u32 v = R32((u32)(r_esp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e01f: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0070e023: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x70e028u); f_0082fa0c();
L_0070e028:; BB(0x0070e028);
    /* 0070e028: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0070e02c: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0070e030: mov ecx, dword ptr [ebx + edi + 0x20] */ r_ecx = R32((u32)(r_ebx+r_edi+0x20u));
    /* 0070e034: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070e036: fchs  */ ST(0) = -ST(0);
    /* 0070e038: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0070e03c: fchs  */ ST(0) = -ST(0);
    /* 0070e03e: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0070e042: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e044: je 0x70e07d */ if (fZ) goto L_0070e07d;
L_0070e046:; BB(0x0070e046);
    /* 0070e046: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070e04a: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 0070e051: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0070e058: call 0x70e168 */ r_esp -= 4; W32(r_esp, 0x70e05du); f_0070e168();
    /* 0070e05d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0070e061: fsub dword ptr [esp + 0x94] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x94u));
    /* 0070e068: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0070e06c: fsub dword ptr [esp + 0x90] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x90u));
    /* 0070e073: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070e075: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0070e079: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_0070e07d:; BB(0x0070e07d);
    /* 0070e07d: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070e080: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0070e084: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0070e088: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070e08a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0070e08d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0070e091: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0070e099: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0070e09d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x70e0a2u); f_00830b74();
    /* 0070e0a2: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 0070e0a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e0a8: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x70e0adu); f_00831308();
    /* 0070e0ad: mov edx, dword ptr [ebx + edi + 0x30] */ r_edx = R32((u32)(r_ebx+r_edi+0x30u));
    /* 0070e0b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e0b3: je 0x70e0d2 */ if (fZ) goto L_0070e0d2;
L_0070e0b5:; BB(0x0070e0b5);
    /* 0070e0b5: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070e0b9: lea eax, [esp + 0x9c] */ r_eax = (u32)(r_esp+0x9cu);
    /* 0070e0c0: call 0x70e200 */ r_esp -= 4; W32(r_esp, 0x70e0c5u); f_0070e200();
    /* 0070e0c5: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0070e0c8: fmul dword ptr [esp + 0x9c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x9cu));
    /* 0070e0cf: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
L_0070e0d2:; BB(0x0070e0d2);
    /* 0070e0d2: mov edx, dword ptr [ebx + edi + 0x34] */ r_edx = R32((u32)(r_ebx+r_edi+0x34u));
    /* 0070e0d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e0d8: je 0x70e125 */ if (fZ) goto L_0070e125;
L_0070e0da:; BB(0x0070e0da);
    /* 0070e0da: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070e0de: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0070e0e2: lea eax, [esp + 0xa8] */ r_eax = (u32)(r_esp+0xa8u);
    /* 0070e0e9: lea edx, [esp + 0xa4] */ r_edx = (u32)(r_esp+0xa4u);
    /* 0070e0f0: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 0070e0f7: call 0x70e27c */ r_esp -= 4; W32(r_esp, 0x70e0fcu); f_0070e27c();
    /* 0070e0fc: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0070e0ff: fmul dword ptr [esp + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xa8u));
    /* 0070e106: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0070e109: fmul dword ptr [esp + 0xa4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xa4u));
    /* 0070e110: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0070e113: fmul dword ptr [esp + 0xa0] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xa0u));
    /* 0070e11a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070e11c: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0070e11f: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0070e122: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
L_0070e125:; BB(0x0070e125);
    /* 0070e125: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0070e128: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e12a: jne 0x70e15b */ if (!fZ) goto L_0070e15b;
L_0070e12c:; BB(0x0070e12c);
    /* 0070e12c: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070e130: lea eax, [esp + 0xac] */ r_eax = (u32)(r_esp+0xacu);
    /* 0070e137: mov edx, dword ptr [ebx + edi + 0x38] */ r_edx = R32((u32)(r_ebx+r_edi+0x38u));
    /* 0070e13b: call 0x70e330 */ r_esp -= 4; W32(r_esp, 0x70e140u); f_0070e330();
    /* 0070e140: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0070e143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e145: je 0x70e15b */ if (fZ) goto L_0070e15b;
L_0070e147:; BB(0x0070e147);
    /* 0070e147: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070e149: add ebp, 0x28 */ {  u32 a = r_ebp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070e14c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e14d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e14f: lea edx, [esp + 0xb4] */ r_edx = (u32)(r_esp+0xb4u);
    /* 0070e156: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x70e15bu); f_0082f940();
L_0070e15b:; BB(0x0070e15b);
    /* 0070e15b: add esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e161: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e163: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e164: ret  */ FN_RET(0x0070dee4); r_esp += 4; return;
}

