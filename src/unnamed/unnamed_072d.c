#include "protos.h"

void f_0072d01c(void) /* sub_72D01C */
{
    FN_ENTER(0x0072d01c);
    /* 0072d01c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d01d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d01e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072d020: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0072d024: fcom dword ptr [ebx + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x28u))); 
    /* 0072d027: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d029: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d02a: je 0x72d080 */ if (fZ) goto L_0072d080;
L_0072d02c:; BB(0x0072d02c);
    /* 0072d02c: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0072d02f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d031: fst dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0));
    /* 0072d034: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0072d036: fmul dword ptr [0x970e0c] */ ST(0) = ST(0) * R_F32((u32)(0x970e0cu));
    /* 0072d03c: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0072d03f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d040: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072d043: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x72d048u); f_0082e900();
    /* 0072d048: fcomp dword ptr [0x970e08] */ fx_compare(ST(0), R_F32((u32)(0x970e08u))); FPOP();
    /* 0072d04e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d050: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d051: jae 0x72d075 */ if (!fC) goto L_0072d075;
L_0072d053:; BB(0x0072d053);
    /* 0072d053: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0072d056: fcomp dword ptr [0x970e04] */ fx_compare(ST(0), R_F32((u32)(0x970e04u))); FPOP();
    /* 0072d05c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d05e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d05f: jbe 0x72d06c */ if ((fC||fZ)) goto L_0072d06c;
L_0072d061:; BB(0x0072d061);
    /* 0072d061: fld dword ptr [0x970e08] */ FPUSH(R_F32((u32)(0x970e08u)));
    /* 0072d067: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072d06a: jmp 0x72d075 */ goto L_0072d075;
L_0072d06c:; BB(0x0072d06c);
    /* 0072d06c: fld dword ptr [0x970e00] */ FPUSH(R_F32((u32)(0x970e00u)));
    /* 0072d072: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0072d075:; BB(0x0072d075);
    /* 0072d075: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0072d078: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 0072d07b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d07c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d07d: ret 4 */ FN_RET(0x0072d01c); r_esp += 8; return;
L_0072d080:; BB(0x0072d080);
    /* 0072d080: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072d082: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d084: ret 4 */ FN_RET(0x0072d01c); r_esp += 8; return;
}

void f_0072d088(void) /* sub_72D088 */
{
    FN_ENTER(0x0072d088);
    /* 0072d088: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d089: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d08a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072d08c: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0072d090: fcom dword ptr [ebx + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x28u))); 
    /* 0072d093: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d095: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d096: je 0x72d0ea */ if (fZ) goto L_0072d0ea;
L_0072d098:; BB(0x0072d098);
    /* 0072d098: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0072d09b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d09d: fst dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0));
    /* 0072d0a0: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0072d0a2: fdiv dword ptr [esp + 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x10u));
    /* 0072d0a6: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0072d0a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d0aa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072d0ad: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x72d0b2u); f_0082e900();
    /* 0072d0b2: fcomp dword ptr [0x970dfc] */ fx_compare(ST(0), R_F32((u32)(0x970dfcu))); FPOP();
    /* 0072d0b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d0ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d0bb: jae 0x72d0df */ if (!fC) goto L_0072d0df;
L_0072d0bd:; BB(0x0072d0bd);
    /* 0072d0bd: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0072d0c0: fcomp dword ptr [0x970df8] */ fx_compare(ST(0), R_F32((u32)(0x970df8u))); FPOP();
    /* 0072d0c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d0c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d0c9: jbe 0x72d0d6 */ if ((fC||fZ)) goto L_0072d0d6;
L_0072d0cb:; BB(0x0072d0cb);
    /* 0072d0cb: fld dword ptr [0x970dfc] */ FPUSH(R_F32((u32)(0x970dfcu)));
    /* 0072d0d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072d0d4: jmp 0x72d0df */ goto L_0072d0df;
L_0072d0d6:; BB(0x0072d0d6);
    /* 0072d0d6: fld dword ptr [0x970df4] */ FPUSH(R_F32((u32)(0x970df4u)));
    /* 0072d0dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0072d0df:; BB(0x0072d0df);
    /* 0072d0df: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0072d0e2: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 0072d0e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d0e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d0e7: ret 8 */ FN_RET(0x0072d088); r_esp += 12; return;
L_0072d0ea:; BB(0x0072d0ea);
    /* 0072d0ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072d0ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d0ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d0ee: ret 8 */ FN_RET(0x0072d088); r_esp += 12; return;
}

void f_0072d0f4(void) /* sub_72D0F4 */
{
    FN_ENTER(0x0072d0f4);
    /* 0072d0f4: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0072d0f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0072d0fc: fst dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0));
    /* 0072d0ff: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 0072d102: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0072d105: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 0072d10c: ret 4 */ FN_RET(0x0072d0f4); r_esp += 8; return;
}

void f_0072d110(void) /* sub_72D110 */
{
    FN_ENTER(0x0072d110);
    /* 0072d110: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d111: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072d113: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072d115: call 0x72d134 */ r_esp -= 4; W32(r_esp, 0x72d11au); f_0072d134();
    /* 0072d11a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072d11e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d120: jne 0x72d126 */ if (!fZ) goto L_0072d126;
L_0072d122:; BB(0x0072d122);
    /* 0072d122: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d123: ret 4 */ FN_RET(0x0072d110); r_esp += 8; return;
L_0072d126:; BB(0x0072d126);
    /* 0072d126: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d127: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72d12cu); f_00857e98();
    /* 0072d12c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d12d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d12e: ret 4 */ FN_RET(0x0072d110); r_esp += 8; return;
}

void f_0072d134(void) /* sub_72D134 */
{
    FN_ENTER(0x0072d134);
    /* 0072d134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072d135: mov ebp, esp */ r_ebp = r_esp;
    /* 0072d137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d139: push 0x8f12f8 */ { u32 v = 0x8f12f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d13e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072d144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d145: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072d14c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d14f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072d152: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072d155: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072d158: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072d15b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072d15e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072d165: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072d168: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072d16b: mov dword ptr [eax], 0xb403a8 */ W32((u32)(r_eax), 0xb403a8u);
    /* 0072d171: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72d176u); f_00857e98();
    /* 0072d176: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d177: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072d17e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072d181: call 0x729830 */ r_esp -= 4; W32(r_esp, 0x72d186u); f_00729830();
    /* 0072d186: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072d189: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072d190: mov esp, ebp */ r_esp = r_ebp;
    /* 0072d192: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072d193: ret  */ FN_RET(0x0072d134); r_esp += 4; return;
}

void f_0072d194(void) /* sub_72D194 */
{
    FN_ENTER(0x0072d194);
    /* 0072d194: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d196: mov esi, ecx */ r_esi = r_ecx;
    /* 0072d198: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0072d19c: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0072d1a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d1a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0072d1a4: call 0x729838 */ r_esp -= 4; W32(r_esp, 0x72d1a9u); f_00729838();
    /* 0072d1a9: mov dword ptr [esi], 0xb403a8 */ W32((u32)(r_esi), 0xb403a8u);
    /* 0072d1af: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0072d1b2: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0072d1b5: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0072d1b8: mov dword ptr [esi + 0x10], 0xffffffff */ W32((u32)(r_esi+0x10u), 0xffffffffu);
    /* 0072d1bf: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0072d1c2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d1c4: mov dword ptr [esi + 0x14], edi */ W32((u32)(r_esi+0x14u), r_edi);
    /* 0072d1c7: mov dword ptr [esi + 0x18], edi */ W32((u32)(r_esi+0x18u), r_edi);
    /* 0072d1ca: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
    /* 0072d1cd: mov dword ptr [esi + 0x20], edi */ W32((u32)(r_esi+0x20u), r_edi);
    /* 0072d1d0: mov eax, esi */ r_eax = r_esi;
    /* 0072d1d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072d1d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072d1d4: ret 8 */ FN_RET(0x0072d194); r_esp += 12; return;
}

void f_0072d1d8(void) /* sub_72D1D8 */
{
    FN_ENTER(0x0072d1d8);
    /* 0072d1d8: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0072d1db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d1dd: jle 0x72d1f0 */ if ((fZ||fS!=fO)) goto L_0072d1f0;
L_0072d1df:; BB(0x0072d1df);
    /* 0072d1df: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072d1e2: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0072d1e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d1e7: jg 0x72d1f0 */ if ((!fZ&&fS==fO)) goto L_0072d1f0;
L_0072d1e9:; BB(0x0072d1e9);
    /* 0072d1e9: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
L_0072d1f0:; BB(0x0072d1f0);
    /* 0072d1f0: ret  */ FN_RET(0x0072d1d8); r_esp += 4; return;
}

void f_0072d1f4(void) /* sub_72D1F4 */
{
    FN_ENTER(0x0072d1f4);
    /* 0072d1f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d1f5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d1f8: mov esi, ecx */ r_esi = r_ecx;
    /* 0072d1fa: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0072d1fe: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0072d201: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072d203: jl 0x72d2c8 */ if ((fS!=fO)) goto L_0072d2c8;
L_0072d209:; BB(0x0072d209);
    /* 0072d209: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072d20d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072d20f: jne 0x72d21c */ if (!fZ) goto L_0072d21c;
L_0072d211:; BB(0x0072d211);
    /* 0072d211: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072d213: jne 0x72d21c */ if (!fZ) goto L_0072d21c;
L_0072d215:; BB(0x0072d215);
    /* 0072d215: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072d218: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072d219: ret 4 */ FN_RET(0x0072d1f4); r_esp += 8; return;
L_0072d21c:; BB(0x0072d21c);
    /* 0072d21c: fld dword ptr [0x970e40] */ FPUSH(R_F32((u32)(0x970e40u)));
    /* 0072d222: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 0072d225: fdivr dword ptr [0x970e44] */ ST(0) = R_F32((u32)(0x970e44u)) / ST(0);
    /* 0072d22b: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0072d22e: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 0072d231: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0072d234: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 0072d237: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d239: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072d23d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d23f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072d243: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072d247: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072d249: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0072d251: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0072d254: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0072d25c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072d260: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0072d264: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72d269u); f_0071d484();
    /* 0072d269: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072d26d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d26f: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d274: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d276: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072d279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d27a: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72d27fu); f_0071d58c();
    /* 0072d27f: fld dword ptr [0x970e38] */ FPUSH(R_F32((u32)(0x970e38u)));
    /* 0072d285: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0072d289: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072d28d: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0072d291: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d293: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d298: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d29a: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d2a0: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72d2a5u); f_0071d58c();
    /* 0072d2a5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072d2a8: fld dword ptr [0x970e34] */ FPUSH(R_F32((u32)(0x970e34u)));
    /* 0072d2ae: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072d2b2: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072d2b6: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072d2ba: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072d2bd: jne 0x72d346 */ if (!fZ) goto L_0072d346;
L_0072d2c3:; BB(0x0072d2c3);
    /* 0072d2c3: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072d2c6: jne 0x72d2cf */ if (!fZ) goto L_0072d2cf;
L_0072d2c8:; BB(0x0072d2c8);
    /* 0072d2c8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072d2cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072d2cc: ret 4 */ FN_RET(0x0072d1f4); r_esp += 8; return;
L_0072d2cf:; BB(0x0072d2cf);
    /* 0072d2cf: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072d2d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d2d5: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d2da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d2dc: push 0x970e4c */ { u32 v = 0x970e4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d2e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d2e2: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72d2e7u); f_0071d58c();
    /* 0072d2e7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072d2ea: fld dword ptr [0x970e30] */ FPUSH(R_F32((u32)(0x970e30u)));
    /* 0072d2f0: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072d2f4: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072d2f8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072d2fc: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072d2ff: jne 0x72d30b */ if (!fZ) goto L_0072d30b;
L_0072d301:; BB(0x0072d301);
    /* 0072d301: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0072d304: mov eax, 0xff909090 */ r_eax = 0xff909090u;
    /* 0072d309: jmp 0x72d32a */ goto L_0072d32a;
L_0072d30b:; BB(0x0072d30b);
    /* 0072d30b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0072d30e: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0072d311: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072d313: jne 0x72d31c */ if (!fZ) goto L_0072d31c;
L_0072d315:; BB(0x0072d315);
    /* 0072d315: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0072d31a: jmp 0x72d32a */ goto L_0072d32a;
L_0072d31c:; BB(0x0072d31c);
    /* 0072d31c: jle 0x72d325 */ if ((fZ||fS!=fO)) goto L_0072d325;
L_0072d31e:; BB(0x0072d31e);
    /* 0072d31e: mov eax, 0xff77e8ff */ r_eax = 0xff77e8ffu;
    /* 0072d323: jmp 0x72d32a */ goto L_0072d32a;
L_0072d325:; BB(0x0072d325);
    /* 0072d325: mov eax, 0xffdd8c41 */ r_eax = 0xffdd8c41u;
L_0072d32a:; BB(0x0072d32a);
    /* 0072d32a: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0072d32e: lea ebx, [esp + 0x18] */ r_ebx = (u32)(r_esp+0x18u);
    /* 0072d332: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072d335: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d337: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d338: mov ecx, esi */ r_ecx = r_esi;
    /* 0072d33a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d33b: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0072d33f: call 0x72d368 */ r_esp -= 4; W32(r_esp, 0x72d344u); f_0072d368();
    /* 0072d344: jmp 0x72d2c8 */ goto L_0072d2c8;
L_0072d346:; BB(0x0072d346);
    /* 0072d346: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072d34a: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072d34d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d34e: mov ecx, esi */ r_ecx = r_esi;
    /* 0072d350: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072d353: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072d356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d357: call 0x72d368 */ r_esp -= 4; W32(r_esp, 0x72d35cu); f_0072d368();
    /* 0072d35c: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072d360: jmp 0x72d2c3 */ goto L_0072d2c3;
}

void f_0072d368(void) /* sub_72D368 */
{
    FN_ENTER(0x0072d368);
    /* 0072d368: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d36b: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72d370u); f_00816d30();
    /* 0072d370: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072d374: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72d379u); f_00815f24();
    /* 0072d379: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d37a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0072d37e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d380: je 0x72d38d */ if (fZ) goto L_0072d38d;
L_0072d382:; BB(0x0072d382);
    /* 0072d382: push 0x970e48 */ { u32 v = 0x970e48u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d387: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72d38cu); f_00816cb8();
    /* 0072d38c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072d38d:; BB(0x0072d38d);
    /* 0072d38d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d392: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x72d397u); f_007ac344();
    /* 0072d397: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0072d39b: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0072d39f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072d3a2: fadd dword ptr [eax*4 + 0x970e18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970e18u));
    /* 0072d3a9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072d3ad: fsubr dword ptr [eax] */ ST(0) = R_F32((u32)(r_eax)) - ST(0);
    /* 0072d3af: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072d3b3: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0072d3b7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0072d3ba: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0072d3be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3c0: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3c5: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072d3c9: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3cf: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72d3d4u); f_0071d58c();
    /* 0072d3d4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072d3d7: ret 0x10 */ FN_RET(0x0072d368); r_esp += 20; return;
}

void f_0072d3dc(void) /* sub_72D3DC */
{
    FN_ENTER(0x0072d3dc);
    /* 0072d3dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3df: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072d3e1: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0072d3e5: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072d3e8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72d3edu); f_00857e98();
    /* 0072d3ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d3ee: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 0072d3f5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d3f7: je 0x72d41a */ if (fZ) goto L_0072d41a;
L_0072d3f9:; BB(0x0072d3f9);
    /* 0072d3f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d3fa: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72d3ffu); f_00858009();
    /* 0072d3ff: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0072d402: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072d406: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d407: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72d40cu); f_008581c5();
    /* 0072d40c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d40d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d40e: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0072d411: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d412: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72d417u); f_00857dec();
    /* 0072d417: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0072d41a:; BB(0x0072d41a);
    /* 0072d41a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d41b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072d41c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072d41d: ret 4 */ FN_RET(0x0072d3dc); r_esp += 8; return;
}

void f_0072d420(void) /* sub_72D420 */
{
    FN_ENTER(0x0072d420);
    /* 0072d420: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072d424: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0072d427: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072d429: je 0x72d44d */ if (fZ) goto L_0072d44d;
L_0072d42b:; BB(0x0072d42b);
    /* 0072d42b: jle 0x72d436 */ if ((fZ||fS!=fO)) goto L_0072d436;
L_0072d42d:; BB(0x0072d42d);
    /* 0072d42d: mov dword ptr [ecx + 0x10], 0xff77e8ff */ W32((u32)(r_ecx+0x10u), 0xff77e8ffu);
    /* 0072d434: jmp 0x72d43d */ goto L_0072d43d;
L_0072d436:; BB(0x0072d436);
    /* 0072d436: mov dword ptr [ecx + 0x10], 0xffdd8c41 */ W32((u32)(r_ecx+0x10u), 0xffdd8c41u);
L_0072d43d:; BB(0x0072d43d);
    /* 0072d43d: mov dword ptr [ecx + 0x14], 0x1e */ W32((u32)(r_ecx+0x14u), 0x1eu);
    /* 0072d444: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d445: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x72d44au); f_0072d458();
    /* 0072d44a: ret 4 */ FN_RET(0x0072d420); r_esp += 8; return;
L_0072d44d:; BB(0x0072d44d);
    /* 0072d44d: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
    /* 0072d454: ret 4 */ FN_RET(0x0072d420); r_esp += 8; return;
}

void f_0072d458(void) /* sub_72D458 */
{
    FN_ENTER(0x0072d458);
    /* 0072d458: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072d45c: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072d460: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d465: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072d469: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0072d46c: ret 4 */ FN_RET(0x0072d458); r_esp += 8; return;
}

void f_0072d470(void) /* sub_72D470 */
{
    FN_ENTER(0x0072d470);
    /* 0072d470: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072d474: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072d478: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d47d: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072d481: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0072d484: ret 4 */ FN_RET(0x0072d470); r_esp += 8; return;
}

void f_0072d488(void) /* sub_72D488 */
{
    FN_ENTER(0x0072d488);
    /* 0072d488: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0072d48c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d48e: je 0x72d4a0 */ if (fZ) goto L_0072d4a0;
L_0072d490:; BB(0x0072d490);
    /* 0072d490: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072d494: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d499: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072d49d: ret 4 */ FN_RET(0x0072d488); r_esp += 8; return;
L_0072d4a0:; BB(0x0072d4a0);
    /* 0072d4a0: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072d4a4: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d4a9: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072d4ad: ret 4 */ FN_RET(0x0072d488); r_esp += 8; return;
}

void f_0072d4b0(void) /* sub_72D4B0 */
{
    FN_ENTER(0x0072d4b0);
    /* 0072d4b0: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072d4b4: mov eax, edx */ r_eax = r_edx;
    /* 0072d4b6: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0072d4b9: jne 0x72d4c1 */ if (!fZ) goto L_0072d4c1;
L_0072d4bb:; BB(0x0072d4bb);
    /* 0072d4bb: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d4be: jne 0x72d4c1 */ if (!fZ) goto L_0072d4c1;
L_0072d4c0:; BB(0x0072d4c0);
    /* 0072d4c0: ret  */ FN_RET(0x0072d4b0); r_esp += 4; return;
L_0072d4c1:; BB(0x0072d4c1);
    /* 0072d4c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d4c3: jne 0x72d4d3 */ if (!fZ) goto L_0072d4d3;
L_0072d4c5:; BB(0x0072d4c5);
    /* 0072d4c5: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0072d4cc: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072d4cf: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
L_0072d4d3:; BB(0x0072d4d3);
    /* 0072d4d3: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d4d6: jne 0x72d4e9 */ if (!fZ) goto L_0072d4e9;
L_0072d4d8:; BB(0x0072d4d8);
    /* 0072d4d8: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0072d4df: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d4e5: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
L_0072d4e9:; BB(0x0072d4e9);
    /* 0072d4e9: ret  */ FN_RET(0x0072d4b0); r_esp += 4; return;
}

void f_0072d4ec(void) /* sub_72D4EC */
{
    FN_ENTER(0x0072d4ec);
    /* 0072d4ec: mov dword ptr [0xa9a834], 0x3f800000 */ W32((u32)(0xa9a834u), 0x3f800000u);
    /* 0072d4f6: mov dword ptr [0xa9a838], 0x41000000 */ W32((u32)(0xa9a838u), 0x41000000u);
    /* 0072d500: mov dword ptr [0xa9a83c], 0x3fc00000 */ W32((u32)(0xa9a83cu), 0x3fc00000u);
    /* 0072d50a: ret  */ FN_RET(0x0072d4ec); r_esp += 4; return;
}

void f_0072d50c(void) /* sub_72D50C */
{
    FN_ENTER(0x0072d50c);
    /* 0072d50c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d50f: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0072d512: mov edx, 0xa */ r_edx = 0xau;
    /* 0072d517: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072d51a: jge 0x72d51e */ if ((fS==fO)) goto L_0072d51e;
L_0072d51c:; BB(0x0072d51c);
    /* 0072d51c: mov eax, edx */ r_eax = r_edx;
L_0072d51e:; BB(0x0072d51e);
    /* 0072d51e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0072d521: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0072d524: fmul dword ptr [0x970e8c] */ ST(0) = ST(0) * R_F32((u32)(0x970e8cu));
    /* 0072d52a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072d52d: ret  */ FN_RET(0x0072d50c); r_esp += 4; return;
}

void f_0072d530(void) /* sub_72D530 */
{
    FN_ENTER(0x0072d530);
    /* 0072d530: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d531: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d532: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072d533: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d536: mov edi, ecx */ r_edi = r_ecx;
    /* 0072d538: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0072d53c: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0072d53f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072d541: jl 0x72d75a */ if ((fS!=fO)) goto L_0072d75a;
L_0072d547:; BB(0x0072d547);
    /* 0072d547: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x72d54cu); f_007a902c();
    /* 0072d54c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072d551: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72d556u); f_0082bb30();
    /* 0072d556: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0072d55c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72d561u); f_00829cc8();
    /* 0072d561: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072d566: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072d56b: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72d570u); f_0082bb60();
    /* 0072d570: fld dword ptr [0x970e88] */ FPUSH(R_F32((u32)(0x970e88u)));
    /* 0072d576: fld dword ptr [0x970e84] */ FPUSH(R_F32((u32)(0x970e84u)));
    /* 0072d57c: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0072d57f: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 0072d582: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0072d585: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 0072d588: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0072d58b: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0072d58d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072d58f: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 0072d591: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0072d594: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072d596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072d598: jle 0x72d763 */ if ((fZ||fS!=fO)) goto L_0072d763;
L_0072d59e:; BB(0x0072d59e);
    /* 0072d59e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0072d5a0: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0072d5a2: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072d5a6: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0072d5aa: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072d5ae: mov esi, edx */ r_esi = r_edx;
    /* 0072d5b0: mov eax, 0x970e5c */ r_eax = 0x970e5cu;
    /* 0072d5b5: mov ecx, 0x970e64 */ r_ecx = 0x970e64u;
    /* 0072d5ba: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0072d5be: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072d5c0: jmp 0x72d5c7 */ goto L_0072d5c7;
L_0072d5c2:; BB(0x0072d5c2);
    /* 0072d5c2: mov eax, 0x970e5c */ r_eax = 0x970e5cu;
L_0072d5c7:; BB(0x0072d5c7);
    /* 0072d5c7: mov edx, eax */ r_edx = r_eax;
    /* 0072d5c9: jmp 0x72d5cd */ goto L_0072d5cd;
L_0072d5cb:; BB(0x0072d5cb);
    /* 0072d5cb: mov edx, ebx */ r_edx = r_ebx;
L_0072d5cd:; BB(0x0072d5cd);
    /* 0072d5cd: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072d5d1: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072d5d5: fld dword ptr [0x970e80] */ FPUSH(R_F32((u32)(0x970e80u)));
    /* 0072d5db: fld dword ptr [0x970e7c] */ FPUSH(R_F32((u32)(0x970e7cu)));
    /* 0072d5e1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072d5e3: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0072d5e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072d5e8: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0072d5ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d5ee: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0072d5f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072d5f2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072d5f6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072d5f8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072d5fc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0072d5ff: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0072d601: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0072d603: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072d607: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0072d60a: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0072d60c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072d60e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0072d612: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0072d614: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072d616: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0072d618: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072d61c: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0072d61f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072d621: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0072d623: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072d627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d628: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72d62du); f_0071ba34();
    /* 0072d62d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d62f: je 0x72d642 */ if (fZ) goto L_0072d642;
L_0072d631:; BB(0x0072d631);
    /* 0072d631: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d632: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072d636: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072d639: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0072d63d: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72d642u); f_0082b440();
L_0072d642:; BB(0x0072d642);
    /* 0072d642: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072d646: fadd dword ptr [0x970e78] */ ST(0) = ST(0) + R_F32((u32)(0x970e78u));
    /* 0072d64c: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0072d64f: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072d653: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072d656: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072d658: jge 0x72d668 */ if ((fS==fO)) goto L_0072d668;
L_0072d65a:; BB(0x0072d65a);
    /* 0072d65a: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072d65d: jl 0x72d5c2 */ if ((fS!=fO)) goto L_0072d5c2;
L_0072d663:; BB(0x0072d663);
    /* 0072d663: jmp 0x72d5cb */ goto L_0072d5cb;
L_0072d668:; BB(0x0072d668);
    /* 0072d668: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0072d66c: fld dword ptr [0x970e88] */ FPUSH(R_F32((u32)(0x970e88u)));
    /* 0072d672: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0072d675: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 0072d678: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0072d67b: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 0072d67e: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
L_0072d681:; BB(0x0072d681);
    /* 0072d681: fadd dword ptr [0x970e74] */ ST(0) = ST(0) + R_F32((u32)(0x970e74u));
    /* 0072d687: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0072d689: mov edx, 0xa */ r_edx = 0xau;
    /* 0072d68e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072d691: mov edi, 0 */ r_edi = 0x0u;
    /* 0072d696: jge 0x72d69a */ if ((fS==fO)) goto L_0072d69a;
L_0072d698:; BB(0x0072d698);
    /* 0072d698: mov eax, edx */ r_eax = r_edx;
L_0072d69a:; BB(0x0072d69a);
    /* 0072d69a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072d69c: jle 0x72d76e */ if ((fZ||fS!=fO)) goto L_0072d76e;
L_0072d6a2:; BB(0x0072d6a2);
    /* 0072d6a2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072d6a4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0072d6a8: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072d6ac: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072d6b0: mov esi, ebp */ r_esi = r_ebp;
    /* 0072d6b2: mov ebp, eax */ r_ebp = r_eax;
L_0072d6b4:; BB(0x0072d6b4);
    /* 0072d6b4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072d6b8: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072d6bc: fld dword ptr [0x970e80] */ FPUSH(R_F32((u32)(0x970e80u)));
    /* 0072d6c2: fld dword ptr [0x970e7c] */ FPUSH(R_F32((u32)(0x970e7cu)));
    /* 0072d6c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072d6ca: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0072d6cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072d6cf: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0072d6d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d6d5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0072d6d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072d6d9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072d6dd: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072d6df: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072d6e3: fld dword ptr [0x970e54] */ FPUSH(R_F32((u32)(0x970e54u)));
    /* 0072d6e9: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0072d6eb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0072d6ee: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072d6f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0072d6f4: fld dword ptr [0x970e58] */ FPUSH(R_F32((u32)(0x970e58u)));
    /* 0072d6fa: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0072d6fc: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0072d700: fld dword ptr [0x970e54] */ FPUSH(R_F32((u32)(0x970e54u)));
    /* 0072d706: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072d708: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0072d70a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072d70e: fld dword ptr [0x970e58] */ FPUSH(R_F32((u32)(0x970e58u)));
    /* 0072d714: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072d716: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0072d718: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072d71c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d71d: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72d722u); f_0071ba34();
    /* 0072d722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d724: je 0x72d737 */ if (fZ) goto L_0072d737;
L_0072d726:; BB(0x0072d726);
    /* 0072d726: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d727: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072d72b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072d72e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0072d732: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72d737u); f_0082b440();
L_0072d737:; BB(0x0072d737);
    /* 0072d737: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072d73b: fadd dword ptr [0x970e78] */ ST(0) = ST(0) + R_F32((u32)(0x970e78u));
    /* 0072d741: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072d745: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0072d748: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072d74a: jl 0x72d6b4 */ if ((fS!=fO)) goto L_0072d6b4;
L_0072d750:; BB(0x0072d750);
    /* 0072d750: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72d755u); f_004ac444();
    /* 0072d755: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x72d75au); f_007a9044();
L_0072d75a:; BB(0x0072d75a);
    /* 0072d75a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072d75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072d75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072d75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072d760: ret 4 */ FN_RET(0x0072d530); r_esp += 8; return;
L_0072d763:; BB(0x0072d763);
    /* 0072d763: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072d765: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d767: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072d769: jmp 0x72d681 */ goto L_0072d681;
L_0072d76e:; BB(0x0072d76e);
    /* 0072d76e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072d770: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072d772: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072d774: jmp 0x72d750 */ goto L_0072d750;
}

void f_0072d778(void) /* sub_72D778 */
{
    FN_ENTER(0x0072d778);
    /* 0072d778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072d779: mov ebp, esp */ r_ebp = r_esp;
    /* 0072d77b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d77d: push 0x8f1314 */ { u32 v = 0x8f1314u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d782: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072d788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d789: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072d790: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d793: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072d796: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072d799: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072d79c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072d79f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072d7a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072d7a5: mov dword ptr [ecx], 0xb403e0 */ W32((u32)(r_ecx), 0xb403e0u);
    /* 0072d7ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072d7b2: call 0x729830 */ r_esp -= 4; W32(r_esp, 0x72d7b7u); f_00729830();
    /* 0072d7b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072d7ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072d7c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0072d7c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072d7c4: ret  */ FN_RET(0x0072d778); r_esp += 4; return;
}

void f_0072d7c8(void) /* sub_72D7C8 */
{
    FN_ENTER(0x0072d7c8);
    /* 0072d7c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d7c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072d7ca: mov esi, ecx */ r_esi = r_ecx;
    /* 0072d7cc: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0072d7d0: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0072d7d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d7d6: mov ecx, esi */ r_ecx = r_esi;
    /* 0072d7d8: call 0x729838 */ r_esp -= 4; W32(r_esp, 0x72d7ddu); f_00729838();
    /* 0072d7dd: mov dword ptr [esi], 0xb403e0 */ W32((u32)(r_esi), 0xb403e0u);
    /* 0072d7e3: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0072d7e6: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0072d7e9: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0072d7ec: mov dword ptr [esi + 0x10], 0 */ W32((u32)(r_esi+0x10u), 0x0u);
    /* 0072d7f3: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0072d7f6: mov eax, esi */ r_eax = r_esi;
    /* 0072d7f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072d7f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072d7fa: ret 8 */ FN_RET(0x0072d7c8); r_esp += 12; return;
}

void f_0072d800(void) /* sub_72D800 */
{
    FN_ENTER(0x0072d800);
    /* 0072d800: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d801: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072d803: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072d805: call 0x72d778 */ r_esp -= 4; W32(r_esp, 0x72d80au); f_0072d778();
    /* 0072d80a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072d80e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d810: jne 0x72d816 */ if (!fZ) goto L_0072d816;
L_0072d812:; BB(0x0072d812);
    /* 0072d812: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d813: ret 4 */ FN_RET(0x0072d800); r_esp += 8; return;
L_0072d816:; BB(0x0072d816);
    /* 0072d816: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d817: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72d81cu); f_00857e98();
    /* 0072d81c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d81d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d81e: ret 4 */ FN_RET(0x0072d800); r_esp += 8; return;
}

void f_0072d824(void) /* sub_72D824 */
{
    FN_ENTER(0x0072d824);
    /* 0072d824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d825: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072d827: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072d829: call 0x72d848 */ r_esp -= 4; W32(r_esp, 0x72d82eu); f_0072d848();
    /* 0072d82e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072d832: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d834: jne 0x72d83a */ if (!fZ) goto L_0072d83a;
L_0072d836:; BB(0x0072d836);
    /* 0072d836: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d837: ret 4 */ FN_RET(0x0072d824); r_esp += 8; return;
L_0072d83a:; BB(0x0072d83a);
    /* 0072d83a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d83b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72d840u); f_00857e98();
    /* 0072d840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d841: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072d842: ret 4 */ FN_RET(0x0072d824); r_esp += 8; return;
}

void f_0072d848(void) /* sub_72D848 */
{
    FN_ENTER(0x0072d848);
    /* 0072d848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072d849: mov ebp, esp */ r_ebp = r_esp;
    /* 0072d84b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d84d: push 0x8f1330 */ { u32 v = 0x8f1330u; r_esp -= 4; W32(r_esp, v); }
    /* 0072d852: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072d858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d859: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072d860: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d863: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072d866: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072d869: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072d86c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072d86f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072d872: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072d879: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072d87c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0072d87f: mov dword ptr [ecx], 0xb40440 */ W32((u32)(r_ecx), 0xb40440u);
    /* 0072d885: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d887: je 0x72d891 */ if (fZ) goto L_0072d891;
L_0072d889:; BB(0x0072d889);
    /* 0072d889: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072d88d: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072d88f: jne 0x72d8ab */ if (!fZ) goto L_0072d8ab;
L_0072d891:; BB(0x0072d891);
    /* 0072d891: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072d898: call 0x72aca4 */ r_esp -= 4; W32(r_esp, 0x72d89du); f_0072aca4();
    /* 0072d89d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072d8a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072d8a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0072d8a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072d8aa: ret  */ FN_RET(0x0072d848); r_esp += 4; return;
L_0072d8ab:; BB(0x0072d8ab);
    /* 0072d8ab: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072d8b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d8b1: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072d8b5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72d8bau); f_00857e98();
    /* 0072d8ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d8bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072d8be: jmp 0x72d891 */ goto L_0072d891;
}

void f_0072d8c0(void) /* sub_72D8C0 */
{
    FN_ENTER(0x0072d8c0);
    /* 0072d8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072d8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0072d8c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d8c5: push 0x8f134c */ { u32 v = 0x8f134cu; r_esp -= 4; W32(r_esp, v); }
    /* 0072d8ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072d8d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d8d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072d8d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d8db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072d8de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0072d8e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0072d8e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0072d8e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0072d8ea: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0072d8ee: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0072d8f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d8f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072d8f5: call 0x72ad30 */ r_esp -= 4; W32(r_esp, 0x72d8fau); f_0072ad30();
    /* 0072d8fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072d901: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072d904: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0072d907: mov dword ptr [eax], 0xb40440 */ W32((u32)(r_eax), 0xb40440u);
    /* 0072d90d: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0072d910: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0072d913: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0072d916: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0072d919: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0072d91c: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 0072d91f: mov esi, dword ptr [edi + 0x14] */ r_esi = R32((u32)(r_edi+0x14u));
    /* 0072d922: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 0072d929: mov word ptr [eax + 4], si */ W16((u32)(r_eax+0x4u), (u16)r_esi);
    /* 0072d92d: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0072d930: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0072d933: movsx eax, word ptr [eax + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0072d937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072d938: call 0x7be1bc */ r_esp -= 4; W32(r_esp, 0x72d93du); f_007be1bc();
    /* 0072d93d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072d93e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072d941: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072d945: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0072d947: je 0x72d954 */ if (fZ) goto L_0072d954;
L_0072d949:; BB(0x0072d949);
    /* 0072d949: fmul dword ptr [0x970ecc] */ ST(0) = ST(0) * R_F32((u32)(0x970eccu));
    /* 0072d94f: fst dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0));
    /* 0072d952: jmp 0x72d957 */ goto L_0072d957;
L_0072d954:; BB(0x0072d954);
    /* 0072d954: fst dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0));
L_0072d957:; BB(0x0072d957);
    /* 0072d957: fcomp dword ptr [0x970ed0] */ fx_compare(ST(0), R_F32((u32)(0x970ed0u))); FPOP();
    /* 0072d95d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d95f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d960: ja 0x72d969 */ if ((!fC&&!fZ)) goto L_0072d969;
L_0072d962:; BB(0x0072d962);
    /* 0072d962: mov dword ptr [ebx + 0x1c], 0x495bba00 */ W32((u32)(r_ebx+0x1cu), 0x495bba00u);
L_0072d969:; BB(0x0072d969);
    /* 0072d969: mov edx, edi */ r_edx = r_edi;
    /* 0072d96b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072d96e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072d971: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0072d974: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 0072d977: mov eax, ebx */ r_eax = r_ebx;
    /* 0072d979: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072d97c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072d97f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072d986: mov esp, ebp */ r_esp = r_ebp;
    /* 0072d988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072d989: ret 8 */ FN_RET(0x0072d8c0); r_esp += 12; return;
}

void f_0072d98c(void) /* sub_72D98C */
{
    FN_ENTER(0x0072d98c);
    /* 0072d98c: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072d990: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072d992: jne 0x72d9b3 */ if (!fZ) goto L_0072d9b3;
L_0072d994:; BB(0x0072d994);
    /* 0072d994: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0072d997: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 0072d99a: fcom dword ptr [0x970ec8] */ fx_compare(ST(0), R_F32((u32)(0x970ec8u))); 
    /* 0072d9a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072d9a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072d9a3: jbe 0x72d9b0 */ if ((fC||fZ)) goto L_0072d9b0;
L_0072d9a5:; BB(0x0072d9a5);
    /* 0072d9a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072d9a7: mov eax, 0x495bba00 */ r_eax = 0x495bba00u;
    /* 0072d9ac: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0072d9af: ret  */ FN_RET(0x0072d98c); r_esp += 4; return;
L_0072d9b0:; BB(0x0072d9b0);
    /* 0072d9b0: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
L_0072d9b3:; BB(0x0072d9b3);
    /* 0072d9b3: ret  */ FN_RET(0x0072d98c); r_esp += 4; return;
}

void f_0072d9b4(void) /* sub_72D9B4 */
{
    FN_ENTER(0x0072d9b4);
    /* 0072d9b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072d9b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072d9b6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072d9b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072d9bb: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0072d9bf: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0072d9c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d9c4: je 0x72db24 */ if (fZ) goto L_0072db24;
L_0072d9ca:; BB(0x0072d9ca);
    /* 0072d9ca: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0072d9cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072d9cf: je 0x72db24 */ if (fZ) goto L_0072db24;
L_0072d9d5:; BB(0x0072d9d5);
    /* 0072d9d5: fld dword ptr [0x970ec0] */ FPUSH(R_F32((u32)(0x970ec0u)));
    /* 0072d9db: fmul dword ptr [ebx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x18u));
    /* 0072d9de: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 0072d9e1: fdivr dword ptr [0x970ec4] */ ST(0) = R_F32((u32)(0x970ec4u)) / ST(0);
    /* 0072d9e7: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0072d9ea: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0072d9ed: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072d9ef: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0072d9f2: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072d9f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072d9f8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072d9fc: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 0072d9ff: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0072da01: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072da03: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072da07: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072da0a: je 0x72da14 */ if (fZ) goto L_0072da14;
L_0072da0c:; BB(0x0072da0c);
    /* 0072da0c: fld dword ptr [0x970ebc] */ FPUSH(R_F32((u32)(0x970ebcu)));
    /* 0072da12: jmp 0x72da17 */ goto L_0072da17;
L_0072da14:; BB(0x0072da14);
    /* 0072da14: fld dword ptr [edx + 0x44] */ FPUSH(R_F32((u32)(r_edx+0x44u)));
L_0072da17:; BB(0x0072da17);
    /* 0072da17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072da19: fdiv dword ptr [0x970eb8] */ ST(0) = ST(0) / R_F32((u32)(0x970eb8u));
    /* 0072da1f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072da21: fdiv dword ptr [edx + 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x18u));
    /* 0072da24: fild dword ptr [edx + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x30u)));
    /* 0072da27: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072da29: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0072da2b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072da2d: fmul dword ptr [0x970eb4] */ ST(0) = ST(0) * R_F32((u32)(0x970eb4u));
    /* 0072da33: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0072da35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072da37: fmul dword ptr [0x970eb0] */ ST(0) = ST(0) * R_F32((u32)(0x970eb0u));
    /* 0072da3d: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 0072da40: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072da42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072da44: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072da46: and ebp, 0x800 */ {  u32 a = r_ebp; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0072da4c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072da4d: mov eax, ecx */ r_eax = r_ecx;
    /* 0072da4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072da51: jb 0x72da55 */ if (fC) goto L_0072da55;
L_0072da53:; BB(0x0072da53);
    /* 0072da53: fst st(1) */ ST(1) = ST(0);
L_0072da55:; BB(0x0072da55);
    /* 0072da55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072da57: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0072da5b: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072da60: and ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0072da66: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072da68: je 0x72da94 */ if (fZ) goto L_0072da94;
L_0072da6a:; BB(0x0072da6a);
    /* 0072da6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072da6c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072da70: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072da74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072da76: mov eax, 0 */ r_eax = 0x0u;
    /* 0072da7b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0072da7e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0072da81: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0072da85: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0072da89: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0072da8d: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72da92u); f_0071d484();
    /* 0072da92: jmp 0x72dac0 */ goto L_0072dac0;
L_0072da94:; BB(0x0072da94);
    /* 0072da94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072da96: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072da9a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072da9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072daa0: mov eax, 0 */ r_eax = 0x0u;
    /* 0072daa5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0072daa8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0072daab: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0072daaf: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0072dab7: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0072dabb: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72dac0u); f_0071d484();
L_0072dac0:; BB(0x0072dac0);
    /* 0072dac0: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072dac4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072dac6: jne 0x72db2c */ if (!fZ) goto L_0072db2c;
L_0072dac8:; BB(0x0072dac8);
    /* 0072dac8: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dacd: je 0x72dad6 */ if (fZ) goto L_0072dad6;
L_0072dacf:; BB(0x0072dacf);
    /* 0072dacf: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072dad4: jmp 0x72dad8 */ goto L_0072dad8;
L_0072dad6:; BB(0x0072dad6);
    /* 0072dad6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0072dad8:; BB(0x0072dad8);
    /* 0072dad8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0072dadc: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0072dadf: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 0072dae2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072dae6: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072daea: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0072daed: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0072daf1: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0072daf5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0072daf9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72dafeu); f_0071d58c();
L_0072dafe:; BB(0x0072dafe);
    /* 0072dafe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072db00: je 0x72db17 */ if (fZ) goto L_0072db17;
L_0072db02:; BB(0x0072db02);
    /* 0072db02: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072db06: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072db0b: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072db0f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072db12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072db13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072db14: ret 4 */ FN_RET(0x0072d9b4); r_esp += 8; return;
L_0072db17:; BB(0x0072db17);
    /* 0072db17: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072db1b: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072db20: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0072db24:; BB(0x0072db24);
    /* 0072db24: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072db27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072db28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072db29: ret 4 */ FN_RET(0x0072d9b4); r_esp += 8; return;
L_0072db2c:; BB(0x0072db2c);
    /* 0072db2c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0072db30: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0072db33: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 0072db36: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072db3a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072db3e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0072db41: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0072db45: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0072db49: call 0x71d924 */ r_esp -= 4; W32(r_esp, 0x72db4eu); f_0071d924();
    /* 0072db4e: jmp 0x72dafe */ goto L_0072dafe;
}

void f_0072db60(void) /* sub_72DB60 */
{
    FN_ENTER(0x0072db60);
    /* 0072db60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072db61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072db62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072db63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072db64: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072db67: mov edi, ecx */ r_edi = r_ecx;
    /* 0072db69: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0072db6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072db6e: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0072db72: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0072db76: je 0x72db90 */ if (fZ) goto L_0072db90;
L_0072db78:; BB(0x0072db78);
    /* 0072db78: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072db7c: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072db7e: je 0x72db90 */ if (fZ) goto L_0072db90;
L_0072db80:; BB(0x0072db80);
    /* 0072db80: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072db85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072db86: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072db8a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72db8fu); f_00857e98();
    /* 0072db8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072db90:; BB(0x0072db90);
    /* 0072db90: test esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072db96: je 0x72db9b */ if (fZ) goto L_0072db9b;
L_0072db98:; BB(0x0072db98);
    /* 0072db98: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0072db9b:; BB(0x0072db9b);
    /* 0072db9b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072db9d: je 0x72dba7 */ if (fZ) goto L_0072dba7;
L_0072db9f:; BB(0x0072db9f);
    /* 0072db9f: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dba5: jne 0x72dbb3 */ if (!fZ) goto L_0072dbb3;
L_0072dba7:; BB(0x0072dba7);
    /* 0072dba7: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072dbab: mov dword ptr [edi + 0x20], ebp */ W32((u32)(r_edi+0x20u), r_ebp);
    /* 0072dbae: jmp 0x72dd84 */ goto L_0072dd84;
L_0072dbb3:; BB(0x0072dbb3);
    /* 0072dbb3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072dbb4: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72dbb9u); f_00858009();
    /* 0072dbb9: mov ebx, eax */ r_ebx = r_eax;
    /* 0072dbbb: lea edx, [ebx + ebx + 2] */ r_edx = (u32)(r_ebx+r_ebx+0x2u);
    /* 0072dbbf: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0072dbc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072dbc4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72dbc9u); f_008581c5();
    /* 0072dbc9: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0072dbcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072dbce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072dbd0: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0072dbd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072dbd4: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x72dbd9u); f_0086b688();
    /* 0072dbd9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072dbdc: test esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dbe2: je 0x72dd70 */ if (fZ) goto L_0072dd70;
L_0072dbe8:; BB(0x0072dbe8);
    /* 0072dbe8: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 0072dbeb: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0072dbef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dbf1: je 0x72dd7d */ if (fZ) goto L_0072dd7d;
L_0072dbf7:; BB(0x0072dbf7);
    /* 0072dbf7: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0072dbfb: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_0072dbff:; BB(0x0072dbff);
    /* 0072dbff: mov esi, ebp */ r_esi = r_ebp;
    /* 0072dc01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc03: je 0x72dd48 */ if (fZ) goto L_0072dd48;
L_0072dc09:; BB(0x0072dc09);
    /* 0072dc09: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
L_0072dc0d:; BB(0x0072dc0d);
    /* 0072dc0d: mov ebx, esi */ r_ebx = r_esi;
    /* 0072dc0f: mov ecx, 0x970ed4 */ r_ecx = 0x970ed4u;
    /* 0072dc14: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0072dc17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072dc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc1b: je 0x72dc38 */ if (fZ) goto L_0072dc38;
L_0072dc1d:; BB(0x0072dc1d);
    /* 0072dc1d: movzx edi, word ptr [ebx] */ r_edi = (u32)R16((u32)(r_ebx));
    /* 0072dc20: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc22: jne 0x72dde8 */ if (!fZ) goto L_0072dde8;
L_0072dc28:; BB(0x0072dc28);
    /* 0072dc28: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072dc2b: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0072dc2e: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072dc31: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072dc34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc36: jne 0x72dc1d */ if (!fZ) goto L_0072dc1d;
L_0072dc38:; BB(0x0072dc38);
    /* 0072dc38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072dc3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072dc3c: jle 0x72dc90 */ if ((fZ||fS!=fO)) goto L_0072dc90;
L_0072dc3e:; BB(0x0072dc3e);
    /* 0072dc3e: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072dc41: jl 0x72dc7f */ if ((fS!=fO)) goto L_0072dc7f;
L_0072dc43:; BB(0x0072dc43);
    /* 0072dc43: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dc46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc48: je 0x72dc90 */ if (fZ) goto L_0072dc90;
L_0072dc4a:; BB(0x0072dc4a);
    /* 0072dc4a: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dc4d: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dc50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc52: je 0x72dc90 */ if (fZ) goto L_0072dc90;
L_0072dc54:; BB(0x0072dc54);
    /* 0072dc54: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dc57: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dc5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc5c: je 0x72dc90 */ if (fZ) goto L_0072dc90;
L_0072dc5e:; BB(0x0072dc5e);
    /* 0072dc5e: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dc61: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dc64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc66: je 0x72dc90 */ if (fZ) goto L_0072dc90;
L_0072dc68:; BB(0x0072dc68);
    /* 0072dc68: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dc6b: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dc6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc70: je 0x72dc90 */ if (fZ) goto L_0072dc90;
L_0072dc72:; BB(0x0072dc72);
    /* 0072dc72: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dc75: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072dc78: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0072dc7b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072dc7d: jle 0x72dc43 */ if ((fZ||fS!=fO)) goto L_0072dc43;
L_0072dc7f:; BB(0x0072dc7f);
    /* 0072dc7f: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dc82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dc84: je 0x72dc90 */ if (fZ) goto L_0072dc90;
L_0072dc86:; BB(0x0072dc86);
    /* 0072dc86: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dc89: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072dc8c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072dc8e: jl 0x72dc7f */ if ((fS!=fO)) goto L_0072dc7f;
L_0072dc90:; BB(0x0072dc90);
    /* 0072dc90: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0072dc94: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0072dc96:; BB(0x0072dc96);
    /* 0072dc96: mov ebp, esi */ r_ebp = r_esi;
    /* 0072dc98: mov ecx, 0x970ed8 */ r_ecx = 0x970ed8u;
    /* 0072dc9d: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0072dca0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072dca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dca4: je 0x72dddf */ if (fZ) goto L_0072dddf;
L_0072dcaa:; BB(0x0072dcaa);
    /* 0072dcaa: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 0072dcae: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dcb0: jne 0x72ddb9 */ if (!fZ) goto L_0072ddb9;
L_0072dcb6:; BB(0x0072dcb6);
    /* 0072dcb6: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072dcb9: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0072dcbc: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0072dcbf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072dcc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dcc4: jne 0x72dcaa */ if (!fZ) goto L_0072dcaa;
L_0072dcc6:; BB(0x0072dcc6);
    /* 0072dcc6: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_0072dcca:; BB(0x0072dcca);
    /* 0072dcca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072dccc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072dcce: jle 0x72dd22 */ if ((fZ||fS!=fO)) goto L_0072dd22;
L_0072dcd0:; BB(0x0072dcd0);
    /* 0072dcd0: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072dcd3: jl 0x72dd11 */ if ((fS!=fO)) goto L_0072dd11;
L_0072dcd5:; BB(0x0072dcd5);
    /* 0072dcd5: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dcd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dcda: je 0x72dd22 */ if (fZ) goto L_0072dd22;
L_0072dcdc:; BB(0x0072dcdc);
    /* 0072dcdc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dcdf: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dce2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dce4: je 0x72dd22 */ if (fZ) goto L_0072dd22;
L_0072dce6:; BB(0x0072dce6);
    /* 0072dce6: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dce9: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dcec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dcee: je 0x72dd22 */ if (fZ) goto L_0072dd22;
L_0072dcf0:; BB(0x0072dcf0);
    /* 0072dcf0: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dcf3: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dcf6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dcf8: je 0x72dd22 */ if (fZ) goto L_0072dd22;
L_0072dcfa:; BB(0x0072dcfa);
    /* 0072dcfa: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dcfd: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dd00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dd02: je 0x72dd22 */ if (fZ) goto L_0072dd22;
L_0072dd04:; BB(0x0072dd04);
    /* 0072dd04: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dd07: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072dd0a: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0072dd0d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072dd0f: jle 0x72dcd5 */ if ((fZ||fS!=fO)) goto L_0072dcd5;
L_0072dd11:; BB(0x0072dd11);
    /* 0072dd11: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0072dd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dd16: je 0x72dd22 */ if (fZ) goto L_0072dd22;
L_0072dd18:; BB(0x0072dd18);
    /* 0072dd18: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072dd1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072dd1e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072dd20: jl 0x72dd11 */ if ((fS!=fO)) goto L_0072dd11;
L_0072dd22:; BB(0x0072dd22);
    /* 0072dd22: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0072dd25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072dd27: mov word ptr [esp + ebx*2], ax */ W16((u32)(r_esp+r_ebx*2), (u16)r_eax);
    /* 0072dd2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072dd2c: call 0x77cdec */ r_esp -= 4; W32(r_esp, 0x72dd31u); f_0077cdec();
    /* 0072dd31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072dd32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dd34: je 0x72ddb3 */ if (fZ) goto L_0072ddb3;
L_0072dd36:; BB(0x0072dd36);
    /* 0072dd36: mov ebp, esi */ r_ebp = r_esi;
L_0072dd38:; BB(0x0072dd38);
    /* 0072dd38: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0072dd3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dd3e: jne 0x72dc0d */ if (!fZ) goto L_0072dc0d;
L_0072dd44:; BB(0x0072dd44);
    /* 0072dd44: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
L_0072dd48:; BB(0x0072dd48);
    /* 0072dd48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072dd4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072dd4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072dd4c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72dd51u); f_00857dec();
    /* 0072dd51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072dd54: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0072dd57: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0072dd5b: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072dd5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dd60: jne 0x72dbff */ if (!fZ) goto L_0072dbff;
L_0072dd66:; BB(0x0072dd66);
    /* 0072dd66: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0072dd6a: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0072dd6e: jmp 0x72dd7d */ goto L_0072dd7d;
L_0072dd70:; BB(0x0072dd70);
    /* 0072dd70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072dd71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072dd72: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072dd75: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72dd7au); f_00857dec();
    /* 0072dd7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072dd7d:; BB(0x0072dd7d);
    /* 0072dd7d: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072dd81: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072dd84:; BB(0x0072dd84);
    /* 0072dd84: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0072dd87: fcomp dword ptr [0x970eac] */ fx_compare(ST(0), R_F32((u32)(0x970eacu))); FPOP();
    /* 0072dd8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072dd8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072dd90: jbe 0x72dd97 */ if ((fC||fZ)) goto L_0072dd97;
L_0072dd92:; BB(0x0072dd92);
    /* 0072dd92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072dd94: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
L_0072dd97:; BB(0x0072dd97);
    /* 0072dd97: and edx, 0xf52e */ {  u32 a = r_edx; u32 b = 0xf52eu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072dd9d: and esi, 0x2c1 */ {  u32 a = r_esi; u32 b = 0x2c1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0072dda3: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072dda5: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072dda9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072ddac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ddad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ddae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072ddaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072ddb0: ret 8 */ FN_RET(0x0072db60); r_esp += 12; return;
L_0072ddb3:; BB(0x0072ddb3);
    /* 0072ddb3: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0072ddb7: jmp 0x72dd48 */ goto L_0072dd48;
L_0072ddb9:; BB(0x0072ddb9);
    /* 0072ddb9: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0072ddbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ddbd: call 0x85a514 */ r_esp -= 4; W32(r_esp, 0x72ddc2u); f_0085a514();
    /* 0072ddc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ddc3: mov word ptr [esp + ebx*2], ax */ W16((u32)(r_esp+r_ebx*2), (u16)r_eax);
    /* 0072ddc7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072ddca: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072ddcd: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072ddd0: jl 0x72dc96 */ if ((fS!=fO)) goto L_0072dc96;
L_0072ddd6:; BB(0x0072ddd6);
    /* 0072ddd6: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0072ddda: jmp 0x72dd38 */ goto L_0072dd38;
L_0072dddf:; BB(0x0072dddf);
    /* 0072dddf: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0072dde3: jmp 0x72dcca */ goto L_0072dcca;
L_0072dde8:; BB(0x0072dde8);
    /* 0072dde8: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0072ddec: jmp 0x72dd48 */ goto L_0072dd48;
}

void f_0072ddf4(void) /* sub_72DDF4 */
{
    FN_ENTER(0x0072ddf4);
    /* 0072ddf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ddf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ddf6: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ddf9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072ddfb: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0072ddfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072de00: je 0x72dffd */ if (fZ) goto L_0072dffd;
L_0072de06:; BB(0x0072de06);
    /* 0072de06: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0072de09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072de0b: je 0x72dffd */ if (fZ) goto L_0072dffd;
L_0072de11:; BB(0x0072de11);
    /* 0072de11: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072de15: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072de18: je 0x72de26 */ if (fZ) goto L_0072de26;
L_0072de1a:; BB(0x0072de1a);
    /* 0072de1a: fld dword ptr [0x970ea8] */ FPUSH(R_F32((u32)(0x970ea8u)));
    /* 0072de20: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0072de24: jmp 0x72de2e */ goto L_0072de2e;
L_0072de26:; BB(0x0072de26);
    /* 0072de26: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0072de2a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_0072de2e:; BB(0x0072de2e);
    /* 0072de2e: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 0072de33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072de35: jne 0x72de41 */ if (!fZ) goto L_0072de41;
L_0072de37:; BB(0x0072de37);
    /* 0072de37: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0072de3f: jmp 0x72de49 */ goto L_0072de49;
L_0072de41:; BB(0x0072de41);
    /* 0072de41: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
L_0072de49:; BB(0x0072de49);
    /* 0072de49: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072de4c: je 0x72de75 */ if (fZ) goto L_0072de75;
L_0072de4e:; BB(0x0072de4e);
    /* 0072de4e: fld dword ptr [0x970e9c] */ FPUSH(R_F32((u32)(0x970e9cu)));
    /* 0072de54: fld dword ptr [0x970e98] */ FPUSH(R_F32((u32)(0x970e98u)));
    /* 0072de5a: fld dword ptr [0x970e98] */ FPUSH(R_F32((u32)(0x970e98u)));
    /* 0072de60: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072de62: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072de66: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072de6a: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0072de6e: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0072de73: jmp 0x72de97 */ goto L_0072de97;
L_0072de75:; BB(0x0072de75);
    /* 0072de75: fld dword ptr [0x970ea4] */ FPUSH(R_F32((u32)(0x970ea4u)));
    /* 0072de7b: fld dword ptr [0x970ea0] */ FPUSH(R_F32((u32)(0x970ea0u)));
    /* 0072de81: fld dword ptr [0x970ea4] */ FPUSH(R_F32((u32)(0x970ea4u)));
    /* 0072de87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072de89: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072de8d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072de91: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0072de95: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0072de97:; BB(0x0072de97);
    /* 0072de97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072de99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072de9a: and edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072dea0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072dea1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072dea2: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072dea6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072dea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072dea9: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72deaeu); f_0071d484();
    /* 0072deae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072deb1: fld dword ptr [0x970e94] */ FPUSH(R_F32((u32)(0x970e94u)));
    /* 0072deb7: fld dword ptr [0x970e94] */ FPUSH(R_F32((u32)(0x970e94u)));
    /* 0072debd: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0072dec0: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0072dec3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dec5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072dec7: je 0x72dfc3 */ if (fZ) goto L_0072dfc3;
L_0072decd:; BB(0x0072decd);
    /* 0072decd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072decf: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0072ded3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072ded7: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0072dedb: mov esi, eax */ r_esi = r_eax;
    /* 0072dedd: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0072dee1: mov edi, ebp */ r_edi = r_ebp;
L_0072dee3:; BB(0x0072dee3);
    /* 0072dee3: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0072dee7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072dee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072deea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072deeb: call 0x7ac580 */ r_esp -= 4; W32(r_esp, 0x72def0u); f_007ac580();
    /* 0072def0: mov esi, eax */ r_esi = r_eax;
    /* 0072def2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072def5: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0072def8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072defa: je 0x72df9d */ if (fZ) goto L_0072df9d;
L_0072df00:; BB(0x0072df00);
    /* 0072df00: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072df03: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072df06: je 0x72e08a */ if (fZ) goto L_0072e08a;
L_0072df0c:; BB(0x0072df0c);
    /* 0072df0c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072df0e: je 0x72df27 */ if (fZ) goto L_0072df27;
L_0072df10:; BB(0x0072df10);
    /* 0072df10: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0072df13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072df14: call 0x789240 */ r_esp -= 4; W32(r_esp, 0x72df19u); f_00789240();
    /* 0072df19: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
    /* 0072df1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072df1d: call 0x789044 */ r_esp -= 4; W32(r_esp, 0x72df22u); f_00789044();
    /* 0072df22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072df25: jmp 0x72df38 */ goto L_0072df38;
L_0072df27:; BB(0x0072df27);
    /* 0072df27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072df28: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x72df2du); f_008443b4();
    /* 0072df2d: mov ebp, eax */ r_ebp = r_eax;
    /* 0072df2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072df30: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x72df35u); f_007ac24c();
    /* 0072df35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072df38:; BB(0x0072df38);
    /* 0072df38: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0072df3b: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072df3e: je 0x72e013 */ if (fZ) goto L_0072e013;
L_0072df44:; BB(0x0072df44);
    /* 0072df44: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072df48: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0072df4c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072df4f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072df53: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0072df57: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0072df59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072df5b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0072df5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072df5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072df61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072df63: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072df64: jae 0x72df93 */ if (!fC) goto L_0072df93;
L_0072df66:; BB(0x0072df66);
    /* 0072df66: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072df6a: fcomp dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); FPOP();
    /* 0072df6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072df70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072df71: jbe 0x72df7b */ if ((fC||fZ)) goto L_0072df7b;
L_0072df73:; BB(0x0072df73);
    /* 0072df73: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072df77: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_0072df7b:; BB(0x0072df7b);
    /* 0072df7b: fld dword ptr [0x970e94] */ FPUSH(R_F32((u32)(0x970e94u)));
    /* 0072df81: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072df85: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 0072df89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072df8b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0072df8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0072df93:; BB(0x0072df93);
    /* 0072df93: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072df97: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072df99: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_0072df9d:; BB(0x0072df9d);
    /* 0072df9d: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0072dfa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072dfa2: jne 0x72dee3 */ if (!fZ) goto L_0072dee3;
L_0072dfa8:; BB(0x0072dfa8);
    /* 0072dfa8: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0072dfac: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0072dfb0: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072dfb4: fcom dword ptr [0x970e94] */ fx_compare(ST(0), R_F32((u32)(0x970e94u))); 
    /* 0072dfba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072dfbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072dfbd: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072dfc1: ja 0x72dfcf */ if ((!fC&&!fZ)) goto L_0072dfcf;
L_0072dfc3:; BB(0x0072dfc3);
    /* 0072dfc3: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072dfc7: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 0072dfcb: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0072dfcf:; BB(0x0072dfcf);
    /* 0072dfcf: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072dfd1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072dfd3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072dfd4: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0072dfd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072dfda: jb 0x72dfde */ if (fC) goto L_0072dfde;
L_0072dfdc:; BB(0x0072dfdc);
    /* 0072dfdc: fst st(2) */ ST(2) = ST(0);
L_0072dfde:; BB(0x0072dfde);
    /* 0072dfde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072dfe0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072dfe2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072dfe4: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072dfe8: fstp dword ptr [ebx + 0x14] */ W_F32((u32)(r_ebx+0x14u), ST(0)); FPOP();
    /* 0072dfeb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072dfec: jae 0x72dff0 */ if (!fC) goto L_0072dff0;
L_0072dfee:; BB(0x0072dfee);
    /* 0072dfee: fst st(1) */ ST(1) = ST(0);
L_0072dff0:; BB(0x0072dff0);
    /* 0072dff0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072dff2: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0072dff5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072dff8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072dff9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072dffa: ret 4 */ FN_RET(0x0072ddf4); r_esp += 8; return;
L_0072dffd:; BB(0x0072dffd);
    /* 0072dffd: mov dword ptr [ebx + 0x10], 0 */ W32((u32)(r_ebx+0x10u), 0x0u);
    /* 0072e004: mov dword ptr [ebx + 0x14], 0 */ W32((u32)(r_ebx+0x14u), 0x0u);
    /* 0072e00b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072e00e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e00f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e010: ret 4 */ FN_RET(0x0072ddf4); r_esp += 8; return;
L_0072e013:; BB(0x0072e013);
    /* 0072e013: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072e017: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072e01b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072e01e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072e022: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0072e026: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072e028: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e02e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0072e032: je 0x72df9d */ if (fZ) goto L_0072df9d;
L_0072e038:; BB(0x0072e038);
    /* 0072e038: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072e03c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072e040: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0072e043: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0072e04b: call 0x71d4c0 */ r_esp -= 4; W32(r_esp, 0x72e050u); f_0071d4c0();
    /* 0072e050: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e052: je 0x72df9d */ if (fZ) goto L_0072df9d;
L_0072e058:; BB(0x0072e058);
    /* 0072e058: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072e05c: fcomp dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); FPOP();
    /* 0072e060: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072e062: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072e063: jbe 0x72e06d */ if ((fC||fZ)) goto L_0072e06d;
L_0072e065:; BB(0x0072e065);
    /* 0072e065: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072e069: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_0072e06d:; BB(0x0072e06d);
    /* 0072e06d: fld dword ptr [0x970e94] */ FPUSH(R_F32((u32)(0x970e94u)));
    /* 0072e073: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072e077: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 0072e07b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e07d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0072e081: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0072e085: jmp 0x72df9d */ goto L_0072df9d;
L_0072e08a:; BB(0x0072e08a);
    /* 0072e08a: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072e08e: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e094: je 0x72e0af */ if (fZ) goto L_0072e0af;
L_0072e096:; BB(0x0072e096);
    /* 0072e096: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0072e09a: fdiv dword ptr [0x970e90] */ ST(0) = ST(0) / R_F32((u32)(0x970e90u));
    /* 0072e0a0: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072e0a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072e0a6: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0072e0aa: jmp 0x72df9d */ goto L_0072df9d;
L_0072e0af:; BB(0x0072e0af);
    /* 0072e0af: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072e0b3: fcomp dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); FPOP();
    /* 0072e0b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072e0b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072e0ba: jbe 0x72e0c4 */ if ((fC||fZ)) goto L_0072e0c4;
L_0072e0bc:; BB(0x0072e0bc);
    /* 0072e0bc: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0072e0c0: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_0072e0c4:; BB(0x0072e0c4);
    /* 0072e0c4: fld dword ptr [0x970e94] */ FPUSH(R_F32((u32)(0x970e94u)));
    /* 0072e0ca: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072e0ce: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 0072e0d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e0d4: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0072e0d8: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0072e0dc: jmp 0x72df9d */ goto L_0072df9d;
}

