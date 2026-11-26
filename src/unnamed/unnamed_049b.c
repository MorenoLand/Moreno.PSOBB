#include "protos.h"

void f_0049b128(void) /* sub_49B128 */
{
    FN_ENTER(0x0049b128);
    /* 0049b128: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b129: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049b12b: movzx eax, word ptr [ebx + 0x574] */ r_eax = (u32)R16((u32)(r_ebx+0x574u));
    /* 0049b132: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049b137: je 0x49b198 */ if (fZ) goto L_0049b198;
L_0049b139:; BB(0x0049b139);
    /* 0049b139: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x49b13eu); f_0082d7b0();
    /* 0049b13e: lea ecx, [ebx + 0x638] */ r_ecx = (u32)(r_ebx+0x638u);
    /* 0049b144: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x49b149u); f_0082d838();
    /* 0049b149: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0049b14c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049b14e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x49b153u); f_0082d8bc();
    /* 0049b153: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049b158: push dword ptr [ebx + 0x588] */ { u32 v = R32((u32)(r_ebx+0x588u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b15e: lea ecx, [ebx + 0x58c] */ r_ecx = (u32)(r_ebx+0x58cu);
    /* 0049b164: push dword ptr [ebx + 0x5b0] */ { u32 v = R32((u32)(r_ebx+0x5b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b16a: push dword ptr [ebx + 0x5ac] */ { u32 v = R32((u32)(r_ebx+0x5acu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b170: lea edx, [ebx + 0x594] */ r_edx = (u32)(r_ebx+0x594u);
    /* 0049b176: lea eax, [ebx + 0x59c] */ r_eax = (u32)(r_ebx+0x59cu);
    /* 0049b17c: push dword ptr [ebx + 0x5a8] */ { u32 v = R32((u32)(r_ebx+0x5a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b182: push dword ptr [ebx + 0x5a4] */ { u32 v = R32((u32)(r_ebx+0x5a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b189: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b18a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b18b: call 0x451c9c */ r_esp -= 4; W32(r_esp, 0x49b190u); f_00451c9c();
    /* 0049b190: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b193: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x49b198u); f_0082da80();
L_0049b198:; BB(0x0049b198);
    /* 0049b198: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b199: ret  */ FN_RET(0x0049b128); r_esp += 4; return;
}

void f_0049b19c(void) /* sub_49B19C */
{
    FN_ENTER(0x0049b19c);
    /* 0049b19c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b19d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b1a0: mov eax, dword ptr [ecx + 0x400] */ r_eax = R32((u32)(r_ecx+0x400u));
    /* 0049b1a6: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0049b1ac: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0049b1b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b1b2: jne 0x49b1d2 */ if (!fZ) goto L_0049b1d2;
L_0049b1b4:; BB(0x0049b1b4);
    /* 0049b1b4: mov byte ptr [esp], 0xa5 */ W8((u32)(r_esp), 0xa5u);
    /* 0049b1b8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049b1bb: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0049b1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b1c1: call 0x49b1dc */ r_esp -= 4; W32(r_esp, 0x49b1c6u); f_0049b1dc();
    /* 0049b1c6: mov byte ptr [esp + 4], bl */ W8((u32)(r_esp+0x4u), (u8)r_ebx);
    /* 0049b1ca: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049b1cd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x49b1d2u); f_008003e0();
L_0049b1d2:; BB(0x0049b1d2);
    /* 0049b1d2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b1d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b1d6: ret 4 */ FN_RET(0x0049b19c); r_esp += 8; return;
}

void f_0049b1dc(void) /* sub_49B1DC */
{
    FN_ENTER(0x0049b1dc);
    /* 0049b1dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b1dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b1de: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b1e1: mov edi, ecx */ r_edi = r_ecx;
    /* 0049b1e3: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0049b1e7: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0049b1eb: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 0049b1ef: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49b1f4u); f_008587a5();
    /* 0049b1f4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049b1f8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0049b1fc: fdiv dword ptr [0x903554] */ ST(0) = ST(0) / R_F32((u32)(0x903554u));
    /* 0049b202: fmul dword ptr [0x903558] */ ST(0) = ST(0) * R_F32((u32)(0x903558u));
    /* 0049b208: mov ecx, edi */ r_ecx = r_edi;
    /* 0049b20a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0049b20e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0049b213: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b218: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0049b21c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0049b220: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b224: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0049b228: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0049b22c: mov byte ptr [esi + 8], al */ W8((u32)(r_esi+0x8u), (u8)r_eax);
    /* 0049b22f: call 0x49b284 */ r_esp -= 4; W32(r_esp, 0x49b234u); f_0049b284();
    /* 0049b234: mov byte ptr [esi + 9], al */ W8((u32)(r_esi+0x9u), (u8)r_eax);
    /* 0049b237: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0049b23d: mov byte ptr [esi + 0xa], al */ W8((u32)(r_esi+0xau), (u8)r_eax);
    /* 0049b240: mov edx, dword ptr [edi + 0x448] */ r_edx = R32((u32)(r_edi+0x448u));
    /* 0049b246: mov byte ptr [esi + 0xb], dl */ W8((u32)(r_esi+0xbu), (u8)r_edx);
    /* 0049b249: movzx eax, word ptr [edi + 0x47c] */ r_eax = (u32)R16((u32)(r_edi+0x47cu));
    /* 0049b250: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0049b254: mov byte ptr [esi + 0xc], al */ W8((u32)(r_esi+0xcu), (u8)r_eax);
    /* 0049b257: movzx eax, word ptr [edi + 0x47e] */ r_eax = (u32)R16((u32)(r_edi+0x47eu));
    /* 0049b25e: mov byte ptr [esi + 0xd], al */ W8((u32)(r_esi+0xdu), (u8)r_eax);
    /* 0049b261: mov ecx, edi */ r_ecx = r_edi;
    /* 0049b263: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049b266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b267: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b268: call 0x49b3c4 */ r_esp -= 4; W32(r_esp, 0x49b26du); f_0049b3c4();
    /* 0049b26d: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0049b272: mov byte ptr [esi + 0xe], al */ W8((u32)(r_esi+0xeu), (u8)r_eax);
    /* 0049b275: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 0049b279: mov byte ptr [esi + 0xf], dl */ W8((u32)(r_esi+0xfu), (u8)r_edx);
    /* 0049b27c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b280: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b281: ret 4 */ FN_RET(0x0049b1dc); r_esp += 8; return;
}

void f_0049b284(void) /* sub_49B284 */
{
    FN_ENTER(0x0049b284);
    /* 0049b284: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b285: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049b286: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b289: mov edi, ecx */ r_edi = r_ecx;
    /* 0049b28b: mov ecx, edi */ r_ecx = r_edi;
    /* 0049b28d: call 0x49b330 */ r_esp -= 4; W32(r_esp, 0x49b292u); f_0049b330();
    /* 0049b292: mov ebp, eax */ r_ebp = r_eax;
    /* 0049b294: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49b299u); f_008587a5();
    /* 0049b299: mov edx, dword ptr [edi + 0x430] */ r_edx = R32((u32)(r_edi+0x430u));
    /* 0049b29f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049b2a2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049b2a5: fdiv dword ptr [0x903550] */ ST(0) = ST(0) / R_F32((u32)(0x903550u));
    /* 0049b2ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b2ad: jne 0x49b2cd */ if (!fZ) goto L_0049b2cd;
L_0049b2af:; BB(0x0049b2af);
    /* 0049b2af: fcomp dword ptr [0x902fac] */ fx_compare(ST(0), R_F32((u32)(0x902facu))); FPOP();
    /* 0049b2b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b2b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b2b8: jae 0x49b2c5 */ if (!fC) goto L_0049b2c5;
L_0049b2ba:; BB(0x0049b2ba);
    /* 0049b2ba: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0049b2bf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b2c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b2c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b2c4: ret  */ FN_RET(0x0049b284); r_esp += 4; return;
L_0049b2c5:; BB(0x0049b2c5);
    /* 0049b2c5: mov eax, ebp */ r_eax = r_ebp;
    /* 0049b2c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b2ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b2cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b2cc: ret  */ FN_RET(0x0049b284); r_esp += 4; return;
L_0049b2cd:; BB(0x0049b2cd);
    /* 0049b2cd: fcomp dword ptr [0x902fb0] */ fx_compare(ST(0), R_F32((u32)(0x902fb0u))); FPOP();
    /* 0049b2d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b2d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b2d6: jae 0x49b2dd */ if (!fC) goto L_0049b2dd;
L_0049b2d8:; BB(0x0049b2d8);
    /* 0049b2d8: mov ebp, 0x11 */ r_ebp = 0x11u;
L_0049b2dd:; BB(0x0049b2dd);
    /* 0049b2dd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49b2e2u); f_008587a5();
    /* 0049b2e2: fild dword ptr [edi + 0x4e8] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4e8u)));
    /* 0049b2e8: fild dword ptr [edi + 0x4e4] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4e4u)));
    /* 0049b2ee: fld dword ptr [0x90354c] */ FPUSH(R_F32((u32)(0x90354cu)));
    /* 0049b2f4: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0049b2f6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049b2f8: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0049b2fa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049b2fe: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0049b302: fdiv dword ptr [0x903550] */ ST(0) = ST(0) / R_F32((u32)(0x903550u));
    /* 0049b308: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0049b30a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049b30c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049b30e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b310: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b311: ja 0x49b31c */ if ((!fC&&!fZ)) goto L_0049b31c;
L_0049b313:; BB(0x0049b313);
    /* 0049b313: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049b315: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049b317: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049b31a: jmp 0x49b326 */ goto L_0049b326;
L_0049b31c:; BB(0x0049b31c);
    /* 0049b31c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0049b31e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b320: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b321: jb 0x49b326 */ if (fC) goto L_0049b326;
L_0049b323:; BB(0x0049b323);
    /* 0049b323: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0049b326:; BB(0x0049b326);
    /* 0049b326: mov eax, ebp */ r_eax = r_ebp;
    /* 0049b328: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b32b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b32c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b32d: ret  */ FN_RET(0x0049b284); r_esp += 4; return;
}

void f_0049b330(void) /* sub_49B330 */
{
    FN_ENTER(0x0049b330);
    /* 0049b330: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b331: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b332: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b335: mov esi, ecx */ r_esi = r_ecx;
    /* 0049b337: movzx eax, word ptr [esi + 0x47e] */ r_eax = (u32)R16((u32)(r_esi+0x47eu));
    /* 0049b33e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b33f: mov edi, 0xf */ r_edi = 0xfu;
    /* 0049b344: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49b349u); f_0068d5a8();
    /* 0049b349: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049b34a: movzx edx, byte ptr [esi + 0x490] */ r_edx = (u32)R8((u32)(r_esi+0x490u));
    /* 0049b351: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049b354: je 0x49b35b */ if (fZ) goto L_0049b35b;
L_0049b356:; BB(0x0049b356);
    /* 0049b356: mov edi, 0x10 */ r_edi = 0x10u;
L_0049b35b:; BB(0x0049b35b);
    /* 0049b35b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b35d: je 0x49b3ba */ if (fZ) goto L_0049b3ba;
L_0049b35f:; BB(0x0049b35f);
    /* 0049b35f: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0049b362: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0049b365: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0049b368: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0049b36b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0049b36d: fmul qword ptr [0x9032f0] */ ST(0) = ST(0) * R_F64((u32)(0x9032f0u));
    /* 0049b373: fdiv qword ptr [0x9032e8] */ ST(0) = ST(0) / R_F64((u32)(0x9032e8u));
    /* 0049b379: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049b37c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049b380: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b385: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049b389: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049b38d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b391: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049b394: mov edi, 0xf */ r_edi = 0xfu;
    /* 0049b399: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049b39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b39e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b3a1: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x49b3a6u); f_007a900c();
    /* 0049b3a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b3a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049b3ab: jge 0x49b3b2 */ if ((fS==fO)) goto L_0049b3b2;
L_0049b3ad:; BB(0x0049b3ad);
    /* 0049b3ad: mov edi, 0x10 */ r_edi = 0x10u;
L_0049b3b2:; BB(0x0049b3b2);
    /* 0049b3b2: mov eax, edi */ r_eax = r_edi;
    /* 0049b3b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b3b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b3b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b3b9: ret  */ FN_RET(0x0049b330); r_esp += 4; return;
L_0049b3ba:; BB(0x0049b3ba);
    /* 0049b3ba: mov eax, edi */ r_eax = r_edi;
    /* 0049b3bc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b3bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b3c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b3c1: ret  */ FN_RET(0x0049b330); r_esp += 4; return;
}

void f_0049b3c4(void) /* sub_49B3C4 */
{
    FN_ENTER(0x0049b3c4);
    /* 0049b3c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b3c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b3c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049b3c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b3c8: mov edi, ecx */ r_edi = r_ecx;
    /* 0049b3ca: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0049b3ce: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0049b3d2: call 0x48df64 */ r_esp -= 4; W32(r_esp, 0x49b3d7u); f_0048df64();
    /* 0049b3d7: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049b3dc: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 0049b3df: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 0049b3e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049b3e5: jle 0x49b46c */ if ((fZ||fS!=fO)) goto L_0049b46c;
L_0049b3eb:; BB(0x0049b3eb);
    /* 0049b3eb: mov edx, dword ptr [edi + 0x430] */ r_edx = R32((u32)(r_edi+0x430u));
    /* 0049b3f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b3f3: jne 0x49b45b */ if (!fZ) goto L_0049b45b;
L_0049b3f5:; BB(0x0049b3f5);
    /* 0049b3f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049b3f7: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49b3fcu); f_0048e058();
    /* 0049b3fc: mov ebx, eax */ r_ebx = r_eax;
    /* 0049b3fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049b400: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49b405u); f_0048e058();
    /* 0049b405: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b408: movzx edx, byte ptr [edi + 0x490] */ r_edx = (u32)R8((u32)(r_edi+0x490u));
    /* 0049b40f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049b412: je 0x49b41d */ if (fZ) goto L_0049b41d;
L_0049b414:; BB(0x0049b414);
    /* 0049b414: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0049b417: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0049b41b: jmp 0x49b424 */ goto L_0049b424;
L_0049b41d:; BB(0x0049b41d);
    /* 0049b41d: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0049b420: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
L_0049b424:; BB(0x0049b424);
    /* 0049b424: call 0x48e12c */ r_esp -= 4; W32(r_esp, 0x49b429u); f_0048e12c();
    /* 0049b429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049b42b: jne 0x49b46c */ if (!fZ) goto L_0049b46c;
L_0049b42d:; BB(0x0049b42d);
    /* 0049b42d: movsx eax, byte ptr [edi + 0x490] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x490u));
    /* 0049b434: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049b436: je 0x49b46c */ if (fZ) goto L_0049b46c;
L_0049b438:; BB(0x0049b438);
    /* 0049b438: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049b43a: je 0x49b44b */ if (fZ) goto L_0049b44b;
L_0049b43c:; BB(0x0049b43c);
    /* 0049b43c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049b441: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0049b444: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b446: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b447: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b448: ret 8 */ FN_RET(0x0049b3c4); r_esp += 12; return;
L_0049b44b:; BB(0x0049b44b);
    /* 0049b44b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049b450: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0049b454: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b455: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b456: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b457: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b458: ret 8 */ FN_RET(0x0049b3c4); r_esp += 12; return;
L_0049b45b:; BB(0x0049b45b);
    /* 0049b45b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049b45e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b45f: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49b464u); f_0048e058();
    /* 0049b464: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049b465: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0049b469: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
L_0049b46c:; BB(0x0049b46c);
    /* 0049b46c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b46d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b46e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b46f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b470: ret 8 */ FN_RET(0x0049b3c4); r_esp += 12; return;
}

void f_0049b408(void)
{
    FN_ENTER(0x0049b408);
    /* 0049b408: movzx edx, byte ptr [edi + 0x490] */ r_edx = (u32)R8((u32)(r_edi+0x490u));
    /* 0049b40f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049b412: je 0x49b41d */ if (fZ) goto L_0049b41d;
L_0049b414:; BB(0x0049b414);
    /* 0049b414: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0049b417: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0049b41b: jmp 0x49b424 */ goto L_0049b424;
L_0049b41d:; BB(0x0049b41d);
    /* 0049b41d: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0049b420: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
L_0049b424:; BB(0x0049b424);
    /* 0049b424: call 0x48e12c */ r_esp -= 4; W32(r_esp, 0x49b429u); f_0048e12c();
    /* 0049b429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049b42b: jne 0x49b46c */ if (!fZ) goto L_0049b46c;
L_0049b42d:; BB(0x0049b42d);
    /* 0049b42d: movsx eax, byte ptr [edi + 0x490] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x490u));
    /* 0049b434: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049b436: je 0x49b46c */ if (fZ) goto L_0049b46c;
L_0049b438:; BB(0x0049b438);
    /* 0049b438: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049b43a: je 0x49b44b */ if (fZ) goto L_0049b44b;
L_0049b43c:; BB(0x0049b43c);
    /* 0049b43c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049b441: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0049b444: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b446: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b447: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b448: ret 8 */ FN_RET(0x0049b408); r_esp += 12; return;
L_0049b44b:; BB(0x0049b44b);
    /* 0049b44b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049b450: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0049b454: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b455: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b456: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b457: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b458: ret 8 */ FN_RET(0x0049b408); r_esp += 12; return;
L_0049b46c:; BB(0x0049b46c);
    /* 0049b46c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b46d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b46e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b46f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b470: ret 8 */ FN_RET(0x0049b408); r_esp += 12; return;
}

void f_0049b474(void) /* sub_49B474 */
{
    FN_ENTER(0x0049b474);
    /* 0049b474: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b475: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b476: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b479: mov esi, ecx */ r_esi = r_ecx;
    /* 0049b47b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049b47e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b47f: mov ecx, esi */ r_ecx = r_esi;
    /* 0049b481: call 0x49b4f0 */ r_esp -= 4; W32(r_esp, 0x49b486u); f_0049b4f0();
    /* 0049b486: mov eax, dword ptr [esi + 0x484] */ r_eax = R32((u32)(r_esi+0x484u));
    /* 0049b48c: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0049b491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b493: jne 0x49b49a */ if (!fZ) goto L_0049b49a;
L_0049b495:; BB(0x0049b495);
    /* 0049b495: mov ebx, 5 */ r_ebx = 0x5u;
L_0049b49a:; BB(0x0049b49a);
    /* 0049b49a: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0049b4a0: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0049b4a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b4a8: jne 0x49b4e7 */ if (!fZ) goto L_0049b4e7;
L_0049b4aa:; BB(0x0049b4aa);
    /* 0049b4aa: mov byte ptr [esp + 4], 0xa5 */ W8((u32)(r_esp+0x4u), 0xa5u);
    /* 0049b4af: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0049b4b3: mov ecx, esi */ r_ecx = r_esi;
    /* 0049b4b5: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 0049b4ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b4bb: call 0x49b1dc */ r_esp -= 4; W32(r_esp, 0x49b4c0u); f_0049b1dc();
    /* 0049b4c0: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 0049b4c4: mov byte ptr [esp + 8], bl */ W8((u32)(r_esp+0x8u), (u8)r_ebx);
    /* 0049b4c8: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 0049b4cd: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 0049b4d2: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 0049b4d6: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 0049b4da: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 0049b4de: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0049b4e2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x49b4e7u); f_008003e0();
L_0049b4e7:; BB(0x0049b4e7);
    /* 0049b4e7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b4ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b4eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049b4ec: ret  */ FN_RET(0x0049b474); r_esp += 4; return;
}

void f_0049b4f0(void) /* sub_49B4F0 */
{
    FN_ENTER(0x0049b4f0);
    /* 0049b4f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b4f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b4f2: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b4f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049b4f7: movzx eax, word ptr [ebx + 0x47e] */ r_eax = (u32)R16((u32)(r_ebx+0x47eu));
    /* 0049b4fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b4ff: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49b504u); f_0068d5a8();
    /* 0049b504: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049b505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b507: je 0x49b605 */ if (fZ) goto L_0049b605;
L_0049b50d:; BB(0x0049b50d);
    /* 0049b50d: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0049b510: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0049b513: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0049b516: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0049b51a: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049b51d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0049b521:; BB(0x0049b521);
    /* 0049b521: movzx ecx, byte ptr [0xa473b8] */ r_ecx = (u32)R8((u32)(0xa473b8u));
    /* 0049b528: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0049b530: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049b533: jne 0x49b54b */ if (!fZ) goto L_0049b54b;
L_0049b535:; BB(0x0049b535);
    /* 0049b535: mov eax, dword ptr [0xa4740c] */ r_eax = R32((u32)(0xa4740cu));
    /* 0049b53a: mov dword ptr [0xa473bc], eax */ W32((u32)(0xa473bcu), r_eax);
    /* 0049b53f: or ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0049b545: mov byte ptr [0xa473b8], cl */ W8((u32)(0xa473b8u), (u8)r_ecx);
L_0049b54b:; BB(0x0049b54b);
    /* 0049b54b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049b54f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0049b553: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0049b557: mov edx, ebx */ r_edx = r_ebx;
    /* 0049b559: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0049b55d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0049b561: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49b566u); f_0082f9c4();
    /* 0049b566: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0049b56e: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0049b572: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49b577u); f_0083173c();
    /* 0049b577: fld dword ptr [0xa473bc] */ FPUSH(R_F32((u32)(0xa473bcu)));
    /* 0049b57d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049b57f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b581: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b582: jbe 0x49b5d5 */ if ((fC||fZ)) goto L_0049b5d5;
L_0049b584:; BB(0x0049b584);
    /* 0049b584: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049b586: fcomp dword ptr [0x903530] */ fx_compare(ST(0), R_F32((u32)(0x903530u))); FPOP();
    /* 0049b58c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b58e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b58f: jbe 0x49b5a4 */ if ((fC||fZ)) goto L_0049b5a4;
L_0049b591:; BB(0x0049b591);
    /* 0049b591: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049b593: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0049b597: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x49b59cu); f_0082df08();
    /* 0049b59c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049b59e: fld dword ptr [0xa473bc] */ FPUSH(R_F32((u32)(0xa473bcu)));
L_0049b5a4:; BB(0x0049b5a4);
    /* 0049b5a4: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0049b5a8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0049b5aa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0049b5ae: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0049b5b2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0049b5b4: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0049b5b8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0049b5bc: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0049b5c0: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0049b5c4: mov edx, ebx */ r_edx = r_ebx;
    /* 0049b5c6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049b5ca: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0049b5ce: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x49b5d3u); f_0082ebac();
    /* 0049b5d3: jmp 0x49b5d9 */ goto L_0049b5d9;
L_0049b5d5:; BB(0x0049b5d5);
    /* 0049b5d5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049b5d7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0049b5d9:; BB(0x0049b5d9);
    /* 0049b5d9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049b5dd: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0049b5e1: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0049b5e5: call 0x49b75c */ r_esp -= 4; W32(r_esp, 0x49b5eau); f_0049b75c();
    /* 0049b5ea: movzx eax, byte ptr [esp + 0x28] */ r_eax = (u32)R8((u32)(r_esp+0x28u));
    /* 0049b5ef: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0049b5f3: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0049b5f5: movzx edx, byte ptr [esp + 0x24] */ r_edx = (u32)R8((u32)(r_esp+0x24u));
    /* 0049b5fa: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 0049b5fd: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b600: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049b601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b602: ret 4 */ FN_RET(0x0049b4f0); r_esp += 8; return;
L_0049b605:; BB(0x0049b605);
    /* 0049b605: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049b60a: mov word ptr [ebx + 0x47e], ax */ W16((u32)(r_ebx+0x47eu), (u16)r_eax);
    /* 0049b611: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49b616u); f_008587a5();
    /* 0049b616: fild dword ptr [ebx + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x60u)));
    /* 0049b619: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0049b61d: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0049b621: fdiv dword ptr [0x903540] */ ST(0) = ST(0) / R_F32((u32)(0x903540u));
    /* 0049b627: fadd dword ptr [0x903544] */ ST(0) = ST(0) + R_F32((u32)(0x903544u));
    /* 0049b62d: fmul dword ptr [0x903548] */ ST(0) = ST(0) * R_F32((u32)(0x903548u));
    /* 0049b633: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049b635: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0049b639: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 0049b63e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b643: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0049b647: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0049b64b: fistp dword ptr [esp + 0x44] */ W32((u32)(r_esp+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b64f: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0049b653: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0049b656: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0049b65a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0049b65e: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0049b661: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049b665: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049b668: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049b66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0049b66e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x49b673u); f_0082dcbc();
    /* 0049b673: fld dword ptr [0x902fb8] */ FPUSH(R_F32((u32)(0x902fb8u)));
    /* 0049b679: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049b67b: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0049b67f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0049b683: mov ecx, edi */ r_ecx = r_edi;
    /* 0049b685: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x49b68au); f_0082ddd8();
    /* 0049b68a: fld dword ptr [0x902fb8] */ FPUSH(R_F32((u32)(0x902fb8u)));
    /* 0049b690: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049b692: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0049b696: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0049b69a: push 0x903310 */ { u32 v = 0x903310u; r_esp -= 4; W32(r_esp, v); }
    /* 0049b69f: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049b6a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b6a3: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x49b6a8u); f_00836208();
    /* 0049b6a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b6ab: fcomp dword ptr [0x902fb4] */ fx_compare(ST(0), R_F32((u32)(0x902fb4u))); FPOP();
    /* 0049b6b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b6b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b6b4: ja 0x49b6c3 */ if ((!fC&&!fZ)) goto L_0049b6c3;
L_0049b6b6:; BB(0x0049b6b6);
    /* 0049b6b6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0049b6ba: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0049b6be: jmp 0x49b521 */ goto L_0049b521;
L_0049b6c3:; BB(0x0049b6c3);
    /* 0049b6c3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49b6c8u); f_008587a5();
    /* 0049b6c8: mov dword ptr [esp + 0xc], 0xc61c4000 */ W32((u32)(r_esp+0xcu), 0xc61c4000u);
    /* 0049b6d0: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0049b6d4: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 0049b6d8: fdiv dword ptr [0x903538] */ ST(0) = ST(0) / R_F32((u32)(0x903538u));
    /* 0049b6de: fmul dword ptr [0x90353c] */ ST(0) = ST(0) * R_F32((u32)(0x90353cu));
    /* 0049b6e4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0049b6ec: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0049b6f0: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 0049b6f5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b6fa: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0049b6fe: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0049b702: fistp dword ptr [esp + 0x44] */ W32((u32)(r_esp+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b706: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0049b70a: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0049b70e: mov ecx, edi */ r_ecx = r_edi;
    /* 0049b710: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0049b718: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x49b71du); f_0082dcbc();
    /* 0049b71d: fld dword ptr [0x902fb8] */ FPUSH(R_F32((u32)(0x902fb8u)));
    /* 0049b723: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049b725: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0049b729: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0049b72d: mov ecx, edi */ r_ecx = r_edi;
    /* 0049b72f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x49b734u); f_0082ddd8();
    /* 0049b734: fld dword ptr [0x902fb8] */ FPUSH(R_F32((u32)(0x902fb8u)));
    /* 0049b73a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049b73c: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0049b740: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0049b744: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0049b748: jmp 0x49b521 */ goto L_0049b521;
}

void f_0049b750(void) /* sub_49B750 */
{
    FN_ENTER(0x0049b750);
    /* 0049b750: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049b754: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0049b758: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0049b75c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b75f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0049b761: fsub dword ptr [0xa47410] */ ST(0) = ST(0) - R_F32((u32)(0xa47410u));
    /* 0049b767: fld dword ptr [0x903528] */ FPUSH(R_F32((u32)(0x903528u)));
    /* 0049b76d: fld dword ptr [0xa4740c] */ FPUSH(R_F32((u32)(0xa4740cu)));
    /* 0049b773: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0049b775: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049b777: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0049b779: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0049b77c: fsub dword ptr [0xa47414] */ ST(0) = ST(0) - R_F32((u32)(0xa47414u));
    /* 0049b782: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0049b784: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049b786: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049b789: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049b78d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b792: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049b796: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049b79a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b79e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049b7a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049b7a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049b7a7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0049b7a9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049b7ac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049b7b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b7b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049b7b9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049b7bd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b7c1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049b7c4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049b7c8: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0049b7ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b7cd: ret  */ FN_RET(0x0049b750); r_esp += 4; return;
}

void f_0049b75c(void)
{
    FN_ENTER(0x0049b75c);
    /* 0049b75c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b75f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0049b761: fsub dword ptr [0xa47410] */ ST(0) = ST(0) - R_F32((u32)(0xa47410u));
    /* 0049b767: fld dword ptr [0x903528] */ FPUSH(R_F32((u32)(0x903528u)));
    /* 0049b76d: fld dword ptr [0xa4740c] */ FPUSH(R_F32((u32)(0xa4740cu)));
    /* 0049b773: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0049b775: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049b777: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0049b779: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0049b77c: fsub dword ptr [0xa47414] */ ST(0) = ST(0) - R_F32((u32)(0xa47414u));
    /* 0049b782: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0049b784: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049b786: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049b789: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049b78d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b792: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049b796: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049b79a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b79e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049b7a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049b7a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049b7a7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0049b7a9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049b7ac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049b7b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049b7b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049b7b9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049b7bd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049b7c1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049b7c4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049b7c8: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0049b7ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b7cd: ret  */ FN_RET(0x0049b75c); r_esp += 4; return;
}

void f_0049b7d0(void) /* sub_49B7D0 */
{
    FN_ENTER(0x0049b7d0);
    /* 0049b7d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b7d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b7d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b7d3: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049b7d6: mov esi, ecx */ r_esi = r_ecx;
    /* 0049b7d8: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 0049b7de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b7e0: je 0x49b7f8 */ if (fZ) goto L_0049b7f8;
L_0049b7e2:; BB(0x0049b7e2);
    /* 0049b7e2: mov eax, dword ptr [esi + 0x484] */ r_eax = R32((u32)(r_esi+0x484u));
    /* 0049b7e8: mov ebx, 7 */ r_ebx = 0x7u;
    /* 0049b7ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b7ef: jne 0x49b80c */ if (!fZ) goto L_0049b80c;
L_0049b7f1:; BB(0x0049b7f1);
    /* 0049b7f1: mov ebx, 0xa */ r_ebx = 0xau;
    /* 0049b7f6: jmp 0x49b80c */ goto L_0049b80c;
L_0049b7f8:; BB(0x0049b7f8);
    /* 0049b7f8: mov eax, dword ptr [esi + 0x484] */ r_eax = R32((u32)(r_esi+0x484u));
    /* 0049b7fe: mov ebx, 8 */ r_ebx = 0x8u;
    /* 0049b803: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b805: jne 0x49b80c */ if (!fZ) goto L_0049b80c;
L_0049b807:; BB(0x0049b807);
    /* 0049b807: mov ebx, 0xb */ r_ebx = 0xbu;
L_0049b80c:; BB(0x0049b80c);
    /* 0049b80c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0049b812: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b815: je 0x49ba2f */ if (fZ) goto L_0049ba2f;
L_0049b81b:; BB(0x0049b81b);
    /* 0049b81b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b81e: je 0x49ba2f */ if (fZ) goto L_0049ba2f;
L_0049b824:; BB(0x0049b824);
    /* 0049b824: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049b827: jl 0x49b9d5 */ if ((fS!=fO)) goto L_0049b9d5;
L_0049b82d:; BB(0x0049b82d);
    /* 0049b82d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049b830: jle 0x49b844 */ if ((fZ||fS!=fO)) goto L_0049b844;
L_0049b832:; BB(0x0049b832);
    /* 0049b832: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049b835: jl 0x49b9d5 */ if ((fS!=fO)) goto L_0049b9d5;
L_0049b83b:; BB(0x0049b83b);
    /* 0049b83b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049b83e: jg 0x49b9d5 */ if ((!fZ&&fS==fO)) goto L_0049b9d5;
L_0049b844:; BB(0x0049b844);
    /* 0049b844: call 0x48df64 */ r_esp -= 4; W32(r_esp, 0x49b849u); f_0048df64();
    /* 0049b849: mov edi, eax */ r_edi = r_eax;
    /* 0049b84b: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0049b850: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049b852: jle 0x49b9c0 */ if ((fZ||fS!=fO)) goto L_0049b9c0;
L_0049b858:; BB(0x0049b858);
    /* 0049b858: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 0049b85e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b860: jne 0x49b91d */ if (!fZ) goto L_0049b91d;
L_0049b866:; BB(0x0049b866);
    /* 0049b866: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049b868: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049b86a: jle 0x49b90b */ if ((fZ||fS!=fO)) goto L_0049b90b;
L_0049b870:; BB(0x0049b870);
    /* 0049b870: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0049b874: mov ebp, eax */ r_ebp = r_eax;
L_0049b876:; BB(0x0049b876);
    /* 0049b876: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049b877: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49b87cu); f_0048e058();
    /* 0049b87c: mov ebx, eax */ r_ebx = r_eax;
    /* 0049b87e: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 0049b881: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b882: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49b887u); f_0068d5a8();
    /* 0049b887: mov edx, eax */ r_edx = r_eax;
    /* 0049b889: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b88c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b88e: je 0x49ba73 */ if (fZ) goto L_0049ba73;
L_0049b894:; BB(0x0049b894);
    /* 0049b894: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0049b898: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0049b89b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049b89d: mov ebp, eax */ r_ebp = r_eax;
    /* 0049b89f: mov esi, edx */ r_esi = r_edx;
L_0049b8a1:; BB(0x0049b8a1);
    /* 0049b8a1: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0049b8a5: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0049b8a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b8aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b8ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049b8ac: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49b8b1u); f_0048fbf8();
    /* 0049b8b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b8b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b8b6: je 0x49b8f8 */ if (fZ) goto L_0049b8f8;
L_0049b8b8:; BB(0x0049b8b8);
    /* 0049b8b8: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0049b8bc: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0049b8bf: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0049b8c3: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0049b8c6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 0049b8ca: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0049b8cd: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0049b8d1: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0049b8d5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49b8dau); f_0082f9c4();
    /* 0049b8da: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 0049b8e2: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0049b8e6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49b8ebu); f_0083173c();
    /* 0049b8eb: fcomp dword ptr [esp + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x28u))); FPOP();
    /* 0049b8ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b8f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b8f2: jbe 0x49ba36 */ if ((fC||fZ)) goto L_0049ba36;
L_0049b8f8:; BB(0x0049b8f8);
    /* 0049b8f8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049b8fb: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049b8fe: jl 0x49b8a1 */ if ((fS!=fO)) goto L_0049b8a1;
L_0049b900:; BB(0x0049b900);
    /* 0049b900: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049b904: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0049b907: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_0049b90b:; BB(0x0049b90b);
    /* 0049b90b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b90d: jne 0x49b9c5 */ if (!fZ) goto L_0049b9c5;
L_0049b913:; BB(0x0049b913);
    /* 0049b913: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0049b918: jmp 0x49b9c5 */ goto L_0049b9c5;
L_0049b91d:; BB(0x0049b91d);
    /* 0049b91d: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049b920: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049b922: jl 0x49b9b9 */ if ((fS!=fO)) goto L_0049b9b9;
L_0049b928:; BB(0x0049b928);
    /* 0049b928: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_0049b92c:; BB(0x0049b92c);
    /* 0049b92c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049b92d: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49b932u); f_0048e058();
    /* 0049b932: mov ebx, eax */ r_ebx = r_eax;
    /* 0049b934: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 0049b937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b938: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49b93du); f_0068d5a8();
    /* 0049b93d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b942: je 0x49ba6a */ if (fZ) goto L_0049ba6a;
L_0049b948:; BB(0x0049b948);
    /* 0049b948: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0049b94b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0049b94d: mov esi, eax */ r_esi = r_eax;
L_0049b94f:; BB(0x0049b94f);
    /* 0049b94f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0049b953: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0049b957: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b958: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b959: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049b95a: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49b95fu); f_0048fbf8();
    /* 0049b95f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b964: je 0x49b9a6 */ if (fZ) goto L_0049b9a6;
L_0049b966:; BB(0x0049b966);
    /* 0049b966: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0049b96a: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0049b96d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0049b971: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0049b974: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049b978: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0049b97b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0049b97f: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0049b983: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49b988u); f_0082f9c4();
    /* 0049b988: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0049b990: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0049b994: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49b999u); f_0083173c();
    /* 0049b999: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 0049b99d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b99f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b9a0: jbe 0x49ba53 */ if ((fC||fZ)) goto L_0049ba53;
L_0049b9a6:; BB(0x0049b9a6);
    /* 0049b9a6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049b9a9: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049b9ac: jl 0x49b94f */ if ((fS!=fO)) goto L_0049b94f;
L_0049b9ae:; BB(0x0049b9ae);
    /* 0049b9ae: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0049b9b1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0049b9b5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049b9b7: jge 0x49b9c5 */ if ((fS==fO)) goto L_0049b9c5;
L_0049b9b9:; BB(0x0049b9b9);
    /* 0049b9b9: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0049b9be: jmp 0x49b9c5 */ goto L_0049b9c5;
L_0049b9c0:; BB(0x0049b9c0);
    /* 0049b9c0: mov ebx, 0xffff */ r_ebx = 0xffffu;
L_0049b9c5:; BB(0x0049b9c5);
    /* 0049b9c5: mov word ptr [esi + 0x47e], bx */ W16((u32)(r_esi+0x47eu), (u16)r_ebx);
    /* 0049b9cc: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
    /* 0049b9d2: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0049b9d5:; BB(0x0049b9d5);
    /* 0049b9d5: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0049b9d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b9da: mov ecx, esi */ r_ecx = r_esi;
    /* 0049b9dc: call 0x49b4f0 */ r_esp -= 4; W32(r_esp, 0x49b9e1u); f_0049b4f0();
    /* 0049b9e1: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0049b9e7: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0049b9ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b9ef: jne 0x49ba2f */ if (!fZ) goto L_0049ba2f;
L_0049b9f1:; BB(0x0049b9f1);
    /* 0049b9f1: mov byte ptr [esp + 0x48], 0xa5 */ W8((u32)(r_esp+0x48u), 0xa5u);
    /* 0049b9f6: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 0049b9fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0049b9fc: mov byte ptr [esp + 0x49], 5 */ W8((u32)(r_esp+0x49u), 0x5u);
    /* 0049ba01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ba02: call 0x49b1dc */ r_esp -= 4; W32(r_esp, 0x49ba07u); f_0049b1dc();
    /* 0049ba07: movzx eax, byte ptr [esp + 0x44] */ r_eax = (u32)R8((u32)(r_esp+0x44u));
    /* 0049ba0c: mov byte ptr [esp + 0x4c], bl */ W8((u32)(r_esp+0x4cu), (u8)r_ebx);
    /* 0049ba10: movzx edx, byte ptr [esp + 0x45] */ r_edx = (u32)R8((u32)(r_esp+0x45u));
    /* 0049ba15: movzx ebx, byte ptr [esp + 0x46] */ r_ebx = (u32)R8((u32)(r_esp+0x46u));
    /* 0049ba1a: mov byte ptr [esp + 0x4d], al */ W8((u32)(r_esp+0x4du), (u8)r_eax);
    /* 0049ba1e: mov byte ptr [esp + 0x4e], dl */ W8((u32)(r_esp+0x4eu), (u8)r_edx);
    /* 0049ba22: mov byte ptr [esp + 0x4f], bl */ W8((u32)(r_esp+0x4fu), (u8)r_ebx);
    /* 0049ba26: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0049ba2a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x49ba2fu); f_008003e0();
L_0049ba2f:; BB(0x0049ba2f);
    /* 0049ba2f: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049ba32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ba33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ba34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049ba35: ret  */ FN_RET(0x0049b7d0); r_esp += 4; return;
L_0049ba36:; BB(0x0049ba36);
    /* 0049ba36: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0049ba3a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0049ba3d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049ba40: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ba42: jl 0x49b876 */ if ((fS!=fO)) goto L_0049b876;
L_0049ba48:; BB(0x0049ba48);
    /* 0049ba48: mov eax, ebp */ r_eax = r_ebp;
    /* 0049ba4a: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0049ba4e: jmp 0x49b90b */ goto L_0049b90b;
L_0049ba53:; BB(0x0049ba53);
    /* 0049ba53: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0049ba56: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049ba59: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049ba5b: jge 0x49b92c */ if ((fS==fO)) goto L_0049b92c;
L_0049ba61:; BB(0x0049ba61);
    /* 0049ba61: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0049ba65: jmp 0x49b9b9 */ goto L_0049b9b9;
L_0049ba6a:; BB(0x0049ba6a);
    /* 0049ba6a: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0049ba6e: jmp 0x49b9c5 */ goto L_0049b9c5;
L_0049ba73:; BB(0x0049ba73);
    /* 0049ba73: mov eax, ebp */ r_eax = r_ebp;
    /* 0049ba75: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0049ba79: jmp 0x49b90b */ goto L_0049b90b;
}

void f_0049ba80(void) /* sub_49BA80 */
{
    FN_ENTER(0x0049ba80);
    /* 0049ba80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ba81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ba82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049ba83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ba84: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049ba87: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049ba89: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0049ba8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ba91: je 0x49ba9a */ if (fZ) goto L_0049ba9a;
L_0049ba93:; BB(0x0049ba93);
    /* 0049ba93: mov ebx, 0x1f */ r_ebx = 0x1fu;
    /* 0049ba98: jmp 0x49ba9f */ goto L_0049ba9f;
L_0049ba9a:; BB(0x0049ba9a);
    /* 0049ba9a: mov ebx, 0x21 */ r_ebx = 0x21u;
L_0049ba9f:; BB(0x0049ba9f);
    /* 0049ba9f: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0049baa5: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049baa8: jne 0x49bab2 */ if (!fZ) goto L_0049bab2;
L_0049baaa:; BB(0x0049baaa);
    /* 0049baaa: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049baad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049baae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049baaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049bab0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049bab1: ret  */ FN_RET(0x0049ba80); r_esp += 4; return;
L_0049bab2:; BB(0x0049bab2);
    /* 0049bab2: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049bab5: jl 0x49bc91 */ if ((fS!=fO)) goto L_0049bc91;
L_0049babb:; BB(0x0049babb);
    /* 0049babb: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049babe: jg 0x49bc91 */ if ((!fZ&&fS==fO)) goto L_0049bc91;
L_0049bac4:; BB(0x0049bac4);
    /* 0049bac4: movzx edi, word ptr [ebp + 0x47e] */ r_edi = (u32)R16((u32)(r_ebp+0x47eu));
    /* 0049bacb: call 0x48df64 */ r_esp -= 4; W32(r_esp, 0x49bad0u); f_0048df64();
    /* 0049bad0: mov esi, eax */ r_esi = r_eax;
    /* 0049bad2: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0049bad7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049bad9: jle 0x49bc4b */ if ((fZ||fS!=fO)) goto L_0049bc4b;
L_0049badf:; BB(0x0049badf);
    /* 0049badf: mov edx, dword ptr [ebp + 0x430] */ r_edx = R32((u32)(r_ebp+0x430u));
    /* 0049bae5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bae7: jne 0x49bba4 */ if (!fZ) goto L_0049bba4;
L_0049baed:; BB(0x0049baed);
    /* 0049baed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049baef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049baf1: jle 0x49bb92 */ if ((fZ||fS!=fO)) goto L_0049bb92;
L_0049baf7:; BB(0x0049baf7);
    /* 0049baf7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0049bafa: mov ebp, eax */ r_ebp = r_eax;
L_0049bafc:; BB(0x0049bafc);
    /* 0049bafc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049bafd: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49bb02u); f_0048e058();
    /* 0049bb02: mov ebx, eax */ r_ebx = r_eax;
    /* 0049bb04: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 0049bb07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bb08: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49bb0du); f_0068d5a8();
    /* 0049bb0d: mov edx, eax */ r_edx = r_eax;
    /* 0049bb0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049bb12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bb14: je 0x49bd45 */ if (fZ) goto L_0049bd45;
L_0049bb1a:; BB(0x0049bb1a);
    /* 0049bb1a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0049bb1e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0049bb22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049bb24: mov ebp, eax */ r_ebp = r_eax;
    /* 0049bb26: mov edi, edx */ r_edi = r_edx;
L_0049bb28:; BB(0x0049bb28);
    /* 0049bb28: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0049bb2c: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0049bb30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bb31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049bb32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049bb33: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49bb38u); f_0048fbf8();
    /* 0049bb38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049bb3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bb3d: je 0x49bb7f */ if (fZ) goto L_0049bb7f;
L_0049bb3f:; BB(0x0049bb3f);
    /* 0049bb3f: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0049bb43: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0049bb46: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0049bb4a: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0049bb4d: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 0049bb51: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0049bb54: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0049bb58: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0049bb5c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49bb61u); f_0082f9c4();
    /* 0049bb61: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 0049bb69: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0049bb6d: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49bb72u); f_0083173c();
    /* 0049bb72: fcomp dword ptr [esp + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x28u))); FPOP();
    /* 0049bb76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049bb78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049bb79: jbe 0x49bcf3 */ if ((fC||fZ)) goto L_0049bcf3;
L_0049bb7f:; BB(0x0049bb7f);
    /* 0049bb7f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049bb82: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049bb85: jl 0x49bb28 */ if ((fS!=fO)) goto L_0049bb28;
L_0049bb87:; BB(0x0049bb87);
    /* 0049bb87: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0049bb8b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049bb8f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0049bb92:; BB(0x0049bb92);
    /* 0049bb92: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bb94: jne 0x49bc50 */ if (!fZ) goto L_0049bc50;
L_0049bb9a:; BB(0x0049bb9a);
    /* 0049bb9a: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0049bb9f: jmp 0x49bc50 */ goto L_0049bc50;
L_0049bba4:; BB(0x0049bba4);
    /* 0049bba4: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049bba7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049bba9: jl 0x49bc44 */ if ((fS!=fO)) goto L_0049bc44;
L_0049bbaf:; BB(0x0049bbaf);
    /* 0049bbaf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049bbb0: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49bbb5u); f_0048e058();
    /* 0049bbb5: mov ebx, eax */ r_ebx = r_eax;
    /* 0049bbb7: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 0049bbba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bbbb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49bbc0u); f_0068d5a8();
    /* 0049bbc0: mov edx, eax */ r_edx = r_eax;
    /* 0049bbc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049bbc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bbc7: je 0x49bc50 */ if (fZ) goto L_0049bc50;
L_0049bbcd:; BB(0x0049bbcd);
    /* 0049bbcd: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0049bbd1: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0049bbd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049bbd6: mov edi, eax */ r_edi = r_eax;
    /* 0049bbd8: mov ebp, edx */ r_ebp = r_edx;
L_0049bbda:; BB(0x0049bbda);
    /* 0049bbda: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0049bbde: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0049bbe2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bbe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049bbe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049bbe5: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49bbeau); f_0048fbf8();
    /* 0049bbea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049bbed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bbef: je 0x49bc31 */ if (fZ) goto L_0049bc31;
L_0049bbf1:; BB(0x0049bbf1);
    /* 0049bbf1: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0049bbf5: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0049bbf8: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0049bbfc: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 0049bbff: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0049bc03: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 0049bc06: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0049bc0a: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0049bc0e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49bc13u); f_0082f9c4();
    /* 0049bc13: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0049bc1b: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0049bc1f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49bc24u); f_0083173c();
    /* 0049bc24: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 0049bc28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049bc2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049bc2b: jbe 0x49bd10 */ if ((fC||fZ)) goto L_0049bd10;
L_0049bc31:; BB(0x0049bc31);
    /* 0049bc31: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049bc34: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049bc37: jl 0x49bbda */ if ((fS!=fO)) goto L_0049bbda;
L_0049bc39:; BB(0x0049bc39);
    /* 0049bc39: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049bc3d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0049bc40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049bc42: jge 0x49bc50 */ if ((fS==fO)) goto L_0049bc50;
L_0049bc44:; BB(0x0049bc44);
    /* 0049bc44: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0049bc49: jmp 0x49bc50 */ goto L_0049bc50;
L_0049bc4b:; BB(0x0049bc4b);
    /* 0049bc4b: mov ebx, 0xffff */ r_ebx = 0xffffu;
L_0049bc50:; BB(0x0049bc50);
    /* 0049bc50: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 0049bc53: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bc59: je 0x49bd27 */ if (fZ) goto L_0049bd27;
L_0049bc5f:; BB(0x0049bc5f);
    /* 0049bc5f: mov word ptr [ebp + 0x47e], bx */ W16((u32)(r_ebp+0x47eu), (u16)r_ebx);
    /* 0049bc66: call 0x48e12c */ r_esp -= 4; W32(r_esp, 0x49bc6bu); f_0048e12c();
    /* 0049bc6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bc6d: jne 0x49bc88 */ if (!fZ) goto L_0049bc88;
L_0049bc6f:; BB(0x0049bc6f);
    /* 0049bc6f: mov ebx, dword ptr [ebp + 0x37c] */ r_ebx = R32((u32)(r_ebp+0x37cu));
    /* 0049bc75: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049bc78: je 0x49bc8e */ if (fZ) goto L_0049bc8e;
L_0049bc7a:; BB(0x0049bc7a);
    /* 0049bc7a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049bc7f: mov word ptr [ebp + 0x47e], ax */ W16((u32)(r_ebp+0x47eu), (u16)r_eax);
    /* 0049bc86: jmp 0x49bc8e */ goto L_0049bc8e;
L_0049bc88:; BB(0x0049bc88);
    /* 0049bc88: mov ebx, dword ptr [ebp + 0x37c] */ r_ebx = R32((u32)(r_ebp+0x37cu));
L_0049bc8e:; BB(0x0049bc8e);
    /* 0049bc8e: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0049bc91:; BB(0x0049bc91);
    /* 0049bc91: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0049bc95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049bc96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049bc98: call 0x49b4f0 */ r_esp -= 4; W32(r_esp, 0x49bc9du); f_0049b4f0();
    /* 0049bc9d: mov eax, dword ptr [ebp + 0x400] */ r_eax = R32((u32)(r_ebp+0x400u));
    /* 0049bca3: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0049bca9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bcab: jne 0x49bceb */ if (!fZ) goto L_0049bceb;
L_0049bcad:; BB(0x0049bcad);
    /* 0049bcad: mov byte ptr [esp + 0x48], 0xa5 */ W8((u32)(r_esp+0x48u), 0xa5u);
    /* 0049bcb2: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 0049bcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049bcb8: mov byte ptr [esp + 0x49], 5 */ W8((u32)(r_esp+0x49u), 0x5u);
    /* 0049bcbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049bcbe: call 0x49b1dc */ r_esp -= 4; W32(r_esp, 0x49bcc3u); f_0049b1dc();
    /* 0049bcc3: movzx eax, byte ptr [esp + 0x44] */ r_eax = (u32)R8((u32)(r_esp+0x44u));
    /* 0049bcc8: mov byte ptr [esp + 0x4c], bl */ W8((u32)(r_esp+0x4cu), (u8)r_ebx);
    /* 0049bccc: movzx edx, byte ptr [esp + 0x45] */ r_edx = (u32)R8((u32)(r_esp+0x45u));
    /* 0049bcd1: movzx ebx, byte ptr [esp + 0x46] */ r_ebx = (u32)R8((u32)(r_esp+0x46u));
    /* 0049bcd6: mov byte ptr [esp + 0x4d], al */ W8((u32)(r_esp+0x4du), (u8)r_eax);
    /* 0049bcda: mov byte ptr [esp + 0x4e], dl */ W8((u32)(r_esp+0x4eu), (u8)r_edx);
    /* 0049bcde: mov byte ptr [esp + 0x4f], bl */ W8((u32)(r_esp+0x4fu), (u8)r_ebx);
    /* 0049bce2: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0049bce6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x49bcebu); f_008003e0();
L_0049bceb:; BB(0x0049bceb);
    /* 0049bceb: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049bcee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049bcef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049bcf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049bcf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049bcf2: ret  */ FN_RET(0x0049ba80); r_esp += 4; return;
L_0049bcf3:; BB(0x0049bcf3);
    /* 0049bcf3: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0049bcf7: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049bcfb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049bcfe: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049bd00: jl 0x49bafc */ if ((fS!=fO)) goto L_0049bafc;
L_0049bd06:; BB(0x0049bd06);
    /* 0049bd06: mov eax, ebp */ r_eax = r_ebp;
    /* 0049bd08: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0049bd0b: jmp 0x49bb92 */ goto L_0049bb92;
L_0049bd10:; BB(0x0049bd10);
    /* 0049bd10: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049bd14: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0049bd17: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049bd1a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049bd1c: jge 0x49bbaf */ if ((fS==fO)) goto L_0049bbaf;
L_0049bd22:; BB(0x0049bd22);
    /* 0049bd22: jmp 0x49bc44 */ goto L_0049bc44;
L_0049bd27:; BB(0x0049bd27);
    /* 0049bd27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049bd28: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49bd2du); f_0068d5a8();
    /* 0049bd2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049bd2e: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x49bd33u); f_0048e100();
    /* 0049bd33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049bd36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bd38: je 0x49bc5f */ if (fZ) goto L_0049bc5f;
L_0049bd3e:; BB(0x0049bd3e);
    /* 0049bd3e: mov ebx, edi */ r_ebx = r_edi;
    /* 0049bd40: jmp 0x49bc5f */ goto L_0049bc5f;
L_0049bd45:; BB(0x0049bd45);
    /* 0049bd45: mov eax, ebp */ r_eax = r_ebp;
    /* 0049bd47: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0049bd4a: jmp 0x49bb92 */ goto L_0049bb92;
}

void f_0049bd50(void) /* sub_49BD50 */
{
    FN_ENTER(0x0049bd50);
    /* 0049bd50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049bd51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049bd52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bd53: mov esi, ecx */ r_esi = r_ecx;
    /* 0049bd55: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049bd59: mov edx, dword ptr [esi + 0x3f8] */ r_edx = R32((u32)(r_esi+0x3f8u));
    /* 0049bd5f: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 0049bd65: mov dword ptr [esi + 0x3fc], edx */ W32((u32)(r_esi+0x3fcu), r_edx);
    /* 0049bd6b: mov edx, dword ptr [esi + 0x3f4] */ r_edx = R32((u32)(r_esi+0x3f4u));
    /* 0049bd71: mov dword ptr [esi + 0x3f8], edx */ W32((u32)(r_esi+0x3f8u), r_edx);
    /* 0049bd77: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 0049bd7d: mov dword ptr [esi + 0x3f4], edx */ W32((u32)(r_esi+0x3f4u), r_edx);
    /* 0049bd83: mov edx, dword ptr [esi + 0x3ec] */ r_edx = R32((u32)(r_esi+0x3ecu));
    /* 0049bd89: mov dword ptr [esi + 0x3f0], edx */ W32((u32)(r_esi+0x3f0u), r_edx);
    /* 0049bd8f: mov edx, dword ptr [esi + 0x3e8] */ r_edx = R32((u32)(r_esi+0x3e8u));
    /* 0049bd95: mov dword ptr [esi + 0x3ec], edx */ W32((u32)(r_esi+0x3ecu), r_edx);
    /* 0049bd9b: mov edx, dword ptr [esi + 0x3e4] */ r_edx = R32((u32)(r_esi+0x3e4u));
    /* 0049bda1: mov dword ptr [esi + 0x3e8], edx */ W32((u32)(r_esi+0x3e8u), r_edx);
    /* 0049bda7: mov edx, dword ptr [esi + 0x3e0] */ r_edx = R32((u32)(r_esi+0x3e0u));
    /* 0049bdad: mov dword ptr [esi + 0x3e4], edx */ W32((u32)(r_esi+0x3e4u), r_edx);
    /* 0049bdb3: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 0049bdb9: mov dword ptr [esi + 0x3e0], edx */ W32((u32)(r_esi+0x3e0u), r_edx);
    /* 0049bdbf: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 0049bdc5: mov dword ptr [esi + 0x3dc], edx */ W32((u32)(r_esi+0x3dcu), r_edx);
    /* 0049bdcb: mov edx, dword ptr [esi + 0x3d4] */ r_edx = R32((u32)(r_esi+0x3d4u));
    /* 0049bdd1: mov dword ptr [esi + 0x3d8], edx */ W32((u32)(r_esi+0x3d8u), r_edx);
    /* 0049bdd7: mov edx, dword ptr [esi + 0x3d0] */ r_edx = R32((u32)(r_esi+0x3d0u));
    /* 0049bddd: mov dword ptr [esi + 0x3d4], edx */ W32((u32)(r_esi+0x3d4u), r_edx);
    /* 0049bde3: mov edx, dword ptr [esi + 0x3cc] */ r_edx = R32((u32)(r_esi+0x3ccu));
    /* 0049bde9: mov dword ptr [esi + 0x3d0], edx */ W32((u32)(r_esi+0x3d0u), r_edx);
    /* 0049bdef: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0049bdf5: mov dword ptr [esi + 0x3cc], edx */ W32((u32)(r_esi+0x3ccu), r_edx);
    /* 0049bdfb: mov edx, dword ptr [esi + 0x3c4] */ r_edx = R32((u32)(r_esi+0x3c4u));
    /* 0049be01: mov dword ptr [esi + 0x3c8], edx */ W32((u32)(r_esi+0x3c8u), r_edx);
    /* 0049be07: mov edx, dword ptr [esi + 0x3c0] */ r_edx = R32((u32)(r_esi+0x3c0u));
    /* 0049be0d: mov dword ptr [esi + 0x3c4], edx */ W32((u32)(r_esi+0x3c4u), r_edx);
    /* 0049be13: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 0049be19: mov dword ptr [esi + 0x3c0], edx */ W32((u32)(r_esi+0x3c0u), r_edx);
    /* 0049be1f: mov edx, dword ptr [esi + 0x3b8] */ r_edx = R32((u32)(r_esi+0x3b8u));
    /* 0049be25: mov dword ptr [esi + 0x3bc], edx */ W32((u32)(r_esi+0x3bcu), r_edx);
    /* 0049be2b: mov edx, dword ptr [esi + 0x3b4] */ r_edx = R32((u32)(r_esi+0x3b4u));
    /* 0049be31: mov dword ptr [esi + 0x3b8], edx */ W32((u32)(r_esi+0x3b8u), r_edx);
    /* 0049be37: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 0049be3d: mov dword ptr [esi + 0x3b4], edx */ W32((u32)(r_esi+0x3b4u), r_edx);
    /* 0049be43: mov edx, dword ptr [esi + 0x3ac] */ r_edx = R32((u32)(r_esi+0x3acu));
    /* 0049be49: mov dword ptr [esi + 0x3b0], edx */ W32((u32)(r_esi+0x3b0u), r_edx);
    /* 0049be4f: mov edx, dword ptr [esi + 0x3a8] */ r_edx = R32((u32)(r_esi+0x3a8u));
    /* 0049be55: mov dword ptr [esi + 0x3ac], edx */ W32((u32)(r_esi+0x3acu), r_edx);
    /* 0049be5b: mov edx, dword ptr [esi + 0x3a4] */ r_edx = R32((u32)(r_esi+0x3a4u));
    /* 0049be61: mov dword ptr [esi + 0x3a8], edx */ W32((u32)(r_esi+0x3a8u), r_edx);
    /* 0049be67: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 0049be6d: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0049be73: mov edx, dword ptr [esi + 0x39c] */ r_edx = R32((u32)(r_esi+0x39cu));
    /* 0049be79: mov dword ptr [esi + 0x3a0], edx */ W32((u32)(r_esi+0x3a0u), r_edx);
    /* 0049be7f: mov edx, dword ptr [esi + 0x398] */ r_edx = R32((u32)(r_esi+0x398u));
    /* 0049be85: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 0049be8b: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 0049be91: mov dword ptr [esi + 0x398], edx */ W32((u32)(r_esi+0x398u), r_edx);
    /* 0049be97: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 0049be9d: mov dword ptr [esi + 0x394], edx */ W32((u32)(r_esi+0x394u), r_edx);
    /* 0049bea3: mov edx, dword ptr [esi + 0x38c] */ r_edx = R32((u32)(r_esi+0x38cu));
    /* 0049bea9: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0049beaf: mov edx, dword ptr [esi + 0x388] */ r_edx = R32((u32)(r_esi+0x388u));
    /* 0049beb5: mov dword ptr [esi + 0x38c], edx */ W32((u32)(r_esi+0x38cu), r_edx);
    /* 0049bebb: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 0049bec1: mov dword ptr [esi + 0x388], edx */ W32((u32)(r_esi+0x388u), r_edx);
    /* 0049bec7: mov edx, dword ptr [esi + 0x380] */ r_edx = R32((u32)(r_esi+0x380u));
    /* 0049becd: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 0049bed3: mov dword ptr [esi + 0x380], eax */ W32((u32)(r_esi+0x380u), r_eax);
    /* 0049bed9: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0049bedc: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049bede: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0049bee0: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0049bee4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049bee6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049bee8: mov ebx, dword ptr [eax + 0x9a7684] */ r_ebx = R32((u32)(r_eax+0x9a7684u));
    /* 0049beee: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bef1: je 0x49bf68 */ if (fZ) goto L_0049bf68;
L_0049bef3:; BB(0x0049bef3);
    /* 0049bef3: cmp ebx, dword ptr [esi + 0x4a8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049bef9: je 0x49bf68 */ if (fZ) goto L_0049bf68;
L_0049befb:; BB(0x0049befb);
    /* 0049befb: mov ecx, dword ptr [esi + 0x404] */ r_ecx = R32((u32)(r_esi+0x404u));
    /* 0049bf01: mov dword ptr [esi + 0x4a8], ebx */ W32((u32)(r_esi+0x4a8u), r_ebx);
    /* 0049bf07: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049bf09: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0049bf0c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049bf0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049bf10: push dword ptr [edx + 0x9a7488] */ { u32 v = R32((u32)(r_edx+0x9a7488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049bf16: mov eax, dword ptr [edx + 0x9a7480] */ r_eax = R32((u32)(r_edx+0x9a7480u));
    /* 0049bf1c: mov dword ptr [esi + 0x4ac], eax */ W32((u32)(r_esi+0x4acu), r_eax);
    /* 0049bf22: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x49bf27u); f_005b8638();
    /* 0049bf27: mov edx, dword ptr [esi + 0x4c0] */ r_edx = R32((u32)(r_esi+0x4c0u));
    /* 0049bf2d: mov dword ptr [esi + 0x4bc], edx */ W32((u32)(r_esi+0x4bcu), r_edx);
    /* 0049bf33: mov edx, dword ptr [esi + 0x4b0] */ r_edx = R32((u32)(r_esi+0x4b0u));
    /* 0049bf39: mov dword ptr [esi + 0x4c4], edx */ W32((u32)(r_esi+0x4c4u), r_edx);
    /* 0049bf3f: mov edx, dword ptr [esi + 0x4b4] */ r_edx = R32((u32)(r_esi+0x4b4u));
    /* 0049bf45: mov dword ptr [esi + 0x4c8], edx */ W32((u32)(r_esi+0x4c8u), r_edx);
    /* 0049bf4b: mov ebx, dword ptr [ebx*8 + 0x9a748c] */ r_ebx = R32((u32)(r_ebx*8+0x9a748cu));
    /* 0049bf52: mov dword ptr [esi + 0x4b4], 0 */ W32((u32)(r_esi+0x4b4u), 0x0u);
    /* 0049bf5c: mov dword ptr [esi + 0x4b8], ebx */ W32((u32)(r_esi+0x4b8u), r_ebx);
    /* 0049bf62: mov dword ptr [esi + 0x4b0], eax */ W32((u32)(r_esi+0x4b0u), r_eax);
L_0049bf68:; BB(0x0049bf68);
    /* 0049bf68: mov eax, dword ptr [ebp*8 + 0x9a7688] */ r_eax = R32((u32)(r_ebp*8+0x9a7688u));
    /* 0049bf6f: mov dword ptr [esi + 0x48c], eax */ W32((u32)(r_esi+0x48cu), r_eax);
    /* 0049bf75: mov eax, dword ptr [ebp*8 + 0x9a768c] */ r_eax = R32((u32)(r_ebp*8+0x9a768cu));
    /* 0049bf7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049bf7e: je 0x49bf84 */ if (fZ) goto L_0049bf84;
L_0049bf80:; BB(0x0049bf80);
    /* 0049bf80: mov ecx, esi */ r_ecx = r_esi;
    /* 0049bf82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x49bf84u); call_ind(t); }
L_0049bf84:; BB(0x0049bf84);
    /* 0049bf84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049bf85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049bf86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049bf87: ret 4 */ FN_RET(0x0049bd50); r_esp += 8; return;
}

void f_0049bf8c(void) /* sub_49BF8C */
{
    FN_ENTER(0x0049bf8c);
    /* 0049bf8c: mov dword ptr [ecx + 0x50c], 0 */ W32((u32)(r_ecx+0x50cu), 0x0u);
    /* 0049bf96: ret  */ FN_RET(0x0049bf8c); r_esp += 4; return;
}

void f_0049bf98(void) /* sub_49BF98 */
{
    FN_ENTER(0x0049bf98);
    /* 0049bf98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049bf99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049bf9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049bf9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bf9c: mov esi, ecx */ r_esi = r_ecx;
    /* 0049bf9e: mov edi, dword ptr [esi + 0x37c] */ r_edi = R32((u32)(r_esi+0x37cu));
    /* 0049bfa4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049bfa6: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049bfab: mov eax, 0x43160000 */ r_eax = 0x43160000u;
    /* 0049bfb0: mov ebx, 0x598 */ r_ebx = 0x598u;
    /* 0049bfb5: lea ebp, [edi - 0xf] */ r_ebp = (u32)(r_edi+0xfffffff1u);
    /* 0049bfb8: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049bfbb: ja 0x49bffe */ if ((!fC&&!fZ)) goto L_0049bffe;
L_0049bfbd:; BB(0x0049bfbd);
    /* 0049bfbd: mov ebp, dword ptr [edi*4 + 0x902fb8] */ r_ebp = R32((u32)(r_edi*4+0x902fb8u));
    /* 0049bfc4: jmp ebp */ { u32 t = r_ebp; jmp_ind(t); return; }
L_0049bffe:; BB(0x0049bffe);
    /* 0049bffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bfff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c000: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0049c003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c005: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c006: call 0x4913ac */ r_esp -= 4; W32(r_esp, 0x49c00bu); f_004913ac();
    /* 0049c00b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c010: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c011: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49c016u); f_00814298();
    /* 0049c016: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c019: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c01b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c01c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c01d: ret  */ FN_RET(0x0049bf98); r_esp += 4; return;
}

void f_0049bfc6(void)
{
    FN_ENTER(0x0049bfc6);
    /* 0049bfc6: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0049bfc9: add eax, 0xffff9000 */ {  u32 a = r_eax; u32 b = 0xffff9000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049bfce: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0049bfd1: lea edx, [ecx + 0x8500] */ r_edx = (u32)(r_ecx+0x8500u);
    /* 0049bfd7: mov ebx, 0x599 */ r_ebx = 0x599u;
    /* 0049bfdc: mov eax, 0x4451ffff */ r_eax = 0x4451ffffu;
    /* 0049bfe1: jmp 0x49bffe */ goto L_0049bffe;
L_0049bffe:; BB(0x0049bffe);
    /* 0049bffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bfff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c000: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0049c003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c005: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c006: call 0x4913ac */ r_esp -= 4; W32(r_esp, 0x49c00bu); f_004913ac();
    /* 0049c00b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c010: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c011: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49c016u); f_00814298();
    /* 0049c016: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c019: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c01b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c01c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c01d: ret  */ FN_RET(0x0049bfc6); r_esp += 4; return;
}

void f_0049bfe3(void)
{
    FN_ENTER(0x0049bfe3);
    /* 0049bfe3: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0049bfe6: add eax, 0xffffeb00 */ {  u32 a = r_eax; u32 b = 0xffffeb00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049bfeb: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0049bfee: lea edx, [ecx + 0x8500] */ r_edx = (u32)(r_ecx+0x8500u);
    /* 0049bff4: mov ebx, 0x599 */ r_ebx = 0x599u;
    /* 0049bff9: mov eax, 0x4451ffff */ r_eax = 0x4451ffffu;
    /* 0049bffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bfff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c000: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0049c003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c005: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c006: call 0x4913ac */ r_esp -= 4; W32(r_esp, 0x49c00bu); f_004913ac();
    /* 0049c00b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c010: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c011: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49c016u); f_00814298();
    /* 0049c016: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c019: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c01b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c01c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c01d: ret  */ FN_RET(0x0049bfe3); r_esp += 4; return;
}

void f_0049bffe(void)
{
    FN_ENTER(0x0049bffe);
    /* 0049bffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049bfff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c000: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0049c003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c005: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c006: call 0x4913ac */ r_esp -= 4; W32(r_esp, 0x49c00bu); f_004913ac();
    /* 0049c00b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c00f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c010: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c011: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49c016u); f_00814298();
    /* 0049c016: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c019: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c01b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c01c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c01d: ret  */ FN_RET(0x0049bffe); r_esp += 4; return;
}

