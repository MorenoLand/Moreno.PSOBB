#include "protos.h"

void f_0051b078(void) /* sub_51B078 */
{
    FN_ENTER(0x0051b078);
    /* 0051b078: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b079: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051b07b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051b07d: call 0x51b09c */ r_esp -= 4; W32(r_esp, 0x51b082u); f_0051b09c();
    /* 0051b082: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051b086: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051b088: jne 0x51b08e */ if (!fZ) goto L_0051b08e;
L_0051b08a:; BB(0x0051b08a);
    /* 0051b08a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051b08b: ret 4 */ FN_RET(0x0051b078); r_esp += 8; return;
L_0051b08e:; BB(0x0051b08e);
    /* 0051b08e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b08f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x51b094u); f_005c2f74();
    /* 0051b094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051b096: ret 4 */ FN_RET(0x0051b078); r_esp += 8; return;
}

void f_0051b09c(void) /* sub_51B09C */
{
    FN_ENTER(0x0051b09c);
    /* 0051b09c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051b09d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051b09f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0a1: push 0x8d468a */ { u32 v = 0x8d468au; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051b0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051b0b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051b0b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051b0ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051b0bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051b0c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051b0c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0051b0c6: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0051b0cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051b0d0: mov ecx, dword ptr [eax + 0x418] */ r_ecx = R32((u32)(r_eax+0x418u));
    /* 0051b0d6: mov dword ptr [eax], 0xb00260 */ W32((u32)(r_eax), 0xb00260u);
    /* 0051b0dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b0de: je 0x51b105 */ if (fZ) goto L_0051b105;
L_0051b0e0:; BB(0x0051b0e0);
    /* 0051b0e0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x51b0e5u); f_007b9c8c();
    /* 0051b0e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051b0e8: mov ecx, dword ptr [eax + 0x418] */ r_ecx = R32((u32)(r_eax+0x418u));
    /* 0051b0ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b0f0: je 0x51b0fb */ if (fZ) goto L_0051b0fb;
L_0051b0f2:; BB(0x0051b0f2);
    /* 0051b0f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051b0f6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x51b0f8u); call_ind(t); }
    /* 0051b0f8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0051b0fb:; BB(0x0051b0fb);
    /* 0051b0fb: mov dword ptr [eax + 0x418], 0 */ W32((u32)(r_eax+0x418u), 0x0u);
L_0051b105:; BB(0x0051b105);
    /* 0051b105: mov ecx, eax */ r_ecx = r_eax;
    /* 0051b107: call 0x51b144 */ r_esp -= 4; W32(r_esp, 0x51b10cu); f_0051b144();
    /* 0051b10c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051b10f: mov eax, dword ptr [ecx + 0x3e0] */ r_eax = R32((u32)(r_ecx+0x3e0u));
    /* 0051b115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b117: je 0x51b121 */ if (fZ) goto L_0051b121;
L_0051b119:; BB(0x0051b119);
    /* 0051b119: call 0x51b16c */ r_esp -= 4; W32(r_esp, 0x51b11eu); f_0051b16c();
    /* 0051b11e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0051b121:; BB(0x0051b121);
    /* 0051b121: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x51b126u); f_007b9c8c();
    /* 0051b126: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051b12d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051b130: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x51b135u); f_0051f4fc();
    /* 0051b135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051b138: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051b13f: mov esp, ebp */ r_esp = r_ebp;
    /* 0051b141: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051b142: ret  */ FN_RET(0x0051b09c); r_esp += 4; return;
}

void f_0051b144(void) /* sub_51B144 */
{
    FN_ENTER(0x0051b144);
    /* 0051b144: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b14a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b14b: mov ecx, 0xa72e60 */ r_ecx = 0xa72e60u;
    /* 0051b150: call 0x51b158 */ r_esp -= 4; W32(r_esp, 0x51b155u); f_0051b158();
    /* 0051b155: ret  */ FN_RET(0x0051b144); r_esp += 4; return;
}

void f_0051b158(void) /* sub_51B158 */
{
    FN_ENTER(0x0051b158);
    /* 0051b158: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 0051b15b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b15c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b15d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0051b161: call 0x5ae5f0 */ r_esp -= 4; W32(r_esp, 0x51b166u); f_005ae5f0();
    /* 0051b166: ret 4 */ FN_RET(0x0051b158); r_esp += 8; return;
}

void f_0051b16c(void) /* sub_51B16C */
{
    FN_ENTER(0x0051b16c);
    /* 0051b16c: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b173: mov ecx, 0xa72e58 */ r_ecx = 0xa72e58u;
    /* 0051b178: call 0x51b158 */ r_esp -= 4; W32(r_esp, 0x51b17du); f_0051b158();
    /* 0051b17d: ret  */ FN_RET(0x0051b16c); r_esp += 4; return;
}

void f_0051b180(void) /* sub_51B180 */
{
    FN_ENTER(0x0051b180);
    /* 0051b180: mov eax, dword ptr [0xa72e54] */ r_eax = R32((u32)(0xa72e54u));
    /* 0051b185: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051b188: jl 0x51b18f */ if ((fS!=fO)) goto L_0051b18f;
L_0051b18a:; BB(0x0051b18a);
    /* 0051b18a: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051b18d: jl 0x51b198 */ if ((fS!=fO)) goto L_0051b198;
L_0051b18f:; BB(0x0051b18f);
    /* 0051b18f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051b192: mov dword ptr [0xa72e54], eax */ W32((u32)(0xa72e54u), r_eax);
    /* 0051b197: ret  */ FN_RET(0x0051b180); r_esp += 4; return;
L_0051b198:; BB(0x0051b198);
    /* 0051b198: mov edx, dword ptr [0xa72e50] */ r_edx = R32((u32)(0xa72e50u));
    /* 0051b19e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b1a0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51b1a5u); f_0082d8bc();
    /* 0051b1a5: mov eax, dword ptr [0xa72e54] */ r_eax = R32((u32)(0xa72e54u));
    /* 0051b1aa: jmp 0x51b18f */ goto L_0051b18f;
}

void f_0051b1ac(void) /* sub_51B1AC */
{
    FN_ENTER(0x0051b1ac);
    /* 0051b1ac: mov eax, dword ptr [ecx + 0x3e0] */ r_eax = R32((u32)(r_ecx+0x3e0u));
    /* 0051b1b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b1b4: je 0x51b1c1 */ if (fZ) goto L_0051b1c1;
L_0051b1b6:; BB(0x0051b1b6);
    /* 0051b1b6: push 0x43af0000 */ { u32 v = 0x43af0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1bb: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x51b1c0u); f_00520ea0();
    /* 0051b1c0: ret  */ FN_RET(0x0051b1ac); r_esp += 4; return;
L_0051b1c1:; BB(0x0051b1c1);
    /* 0051b1c1: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1c6: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x51b1cbu); f_00520ea0();
    /* 0051b1cb: ret  */ FN_RET(0x0051b1ac); r_esp += 4; return;
}

void f_0051b1cc(void) /* sub_51B1CC */
{
    FN_ENTER(0x0051b1cc);
    /* 0051b1cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1cd: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051b1d0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051b1d2: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0051b1d5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51b1dau); f_0082dcbc();
    /* 0051b1da: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0051b1de: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0051b1e2: fmul dword ptr [0x9213b4] */ ST(0) = ST(0) * R_F32((u32)(0x9213b4u));
    /* 0051b1e8: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0051b1eb: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0051b1ee: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0051b1f2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51b1f7u); f_0082ddd8();
    /* 0051b1f7: fmul dword ptr [0x9213b4] */ ST(0) = ST(0) * R_F32((u32)(0x9213b4u));
    /* 0051b1fd: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0051b200: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0051b206: fsubr dword ptr [eax + 0x40] */ ST(0) = R_F32((u32)(r_eax+0x40u)) - ST(0);
    /* 0051b209: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0051b20c: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 0051b210: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051b212: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0051b214: fmul qword ptr [0x921150] */ ST(0) = ST(0) * R_F64((u32)(0x921150u));
    /* 0051b21a: fdiv qword ptr [0x921148] */ ST(0) = ST(0) / R_F64((u32)(0x921148u));
    /* 0051b220: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051b223: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051b227: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051b22c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051b230: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051b234: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051b238: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051b23b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051b23d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b242: call 0x51cc28 */ r_esp -= 4; W32(r_esp, 0x51b247u); f_0051cc28();
    /* 0051b247: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051b24a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051b24b: ret  */ FN_RET(0x0051b1cc); r_esp += 4; return;
}

void f_0051b24c(void)
{
    FN_ENTER(0x0051b24c);
    /* 0051b24c: mov ecx, dword ptr [0xa72e20] */ r_ecx = R32((u32)(0xa72e20u));
    /* 0051b252: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051b254: je 0x51b269 */ if (fZ) goto L_0051b269;
L_0051b256:; BB(0x0051b256);
    /* 0051b256: je 0x51b25f */ if (fZ) goto L_0051b25f;
L_0051b258:; BB(0x0051b258);
    /* 0051b258: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b25a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x51b25fu); f_004066a8();
L_0051b25f:; BB(0x0051b25f);
    /* 0051b25f: mov dword ptr [0xa72e20], 0 */ W32((u32)(0xa72e20u), 0x0u);
L_0051b269:; BB(0x0051b269);
    /* 0051b269: ret  */ FN_RET(0x0051b24c); r_esp += 4; return;
}

void f_0051b26c(void)
{
    FN_ENTER(0x0051b26c);
    /* 0051b26c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051b26d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051b26f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b271: push 0x8d46b0 */ { u32 v = 0x8d46b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b276: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051b27c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b27d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051b284: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051b287: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051b28a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051b28d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051b290: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051b293: push 0x474 */ { u32 v = 0x474u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b298: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0051b29f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x51b2a4u); f_005caba4();
    /* 0051b2a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b2a5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051b2a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b2aa: je 0x51b2e3 */ if (fZ) goto L_0051b2e3;
L_0051b2ac:; BB(0x0051b2ac);
    /* 0051b2ac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0051b2b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051b2ba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051b2bd: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051b2c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051b2c6: call 0x51b2e8 */ r_esp -= 4; W32(r_esp, 0x51b2cbu); f_0051b2e8();
    /* 0051b2cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051b2ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0051b2d5:; BB(0x0051b2d5);
    /* 0051b2d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051b2d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051b2df: mov esp, ebp */ r_esp = r_ebp;
    /* 0051b2e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051b2e2: ret  */ FN_RET(0x0051b26c); r_esp += 4; return;
L_0051b2e3:; BB(0x0051b2e3);
    /* 0051b2e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051b2e5: jmp 0x51b2d5 */ goto L_0051b2d5;
}

void f_0051b2e8(void) /* sub_51B2E8 */
{
    FN_ENTER(0x0051b2e8);
    /* 0051b2e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0051b2eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2ed: push 0x8d46e8 */ { u32 v = 0x8d46e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051b2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051b300: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051b303: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051b306: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0051b309: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0051b30c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0051b30f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051b312: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051b315: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0051b318: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051b31b: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x51b320u); f_005216f4();
    /* 0051b320: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051b327: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b32a: mov dword ptr [ecx], 0xb00260 */ W32((u32)(r_ecx), 0xb00260u);
    /* 0051b330: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b336: call 0x564e84 */ r_esp -= 4; W32(r_esp, 0x51b33bu); f_00564e84();
    /* 0051b33b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0051b342: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b345: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b34b: call 0x564e84 */ r_esp -= 4; W32(r_esp, 0x51b350u); f_00564e84();
    /* 0051b350: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0051b357: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b35a: mov eax, dword ptr [0x9bb9e8] */ r_eax = R32((u32)(0x9bb9e8u));
    /* 0051b35f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051b362: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b363: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0051b366: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x51b36bu); f_0051f750();
    /* 0051b36b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b36e: call 0x51b660 */ r_esp -= 4; W32(r_esp, 0x51b373u); f_0051b660();
    /* 0051b373: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b376: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x51b37bu); f_00521840();
    /* 0051b37b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b37e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b380: push 0x9bb7c0 */ { u32 v = 0x9bb7c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b385: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x51b38au); f_0051ff3c();
    /* 0051b38a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b38d: mov eax, dword ptr [0xa72e20] */ r_eax = R32((u32)(0xa72e20u));
    /* 0051b392: mov dword ptr [ecx + 0xd8], 0x9bb860 */ W32((u32)(r_ecx+0xd8u), 0x9bb860u);
    /* 0051b39c: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0051b3a2: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0051b3a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0051b3aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3ab: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 0051b3b2: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x51b3b7u); f_007aa4c8();
    /* 0051b3b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b3ba: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0051b3c1: mov edx, dword ptr [ecx + 0x3e0] */ r_edx = R32((u32)(r_ecx+0x3e0u));
    /* 0051b3c7: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0051b3ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b3d0: je 0x51b3d9 */ if (fZ) goto L_0051b3d9;
L_0051b3d2:; BB(0x0051b3d2);
    /* 0051b3d2: mov eax, 1 */ r_eax = 0x1u;
    /* 0051b3d7: jmp 0x51b3db */ goto L_0051b3db;
L_0051b3d9:; BB(0x0051b3d9);
    /* 0051b3d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051b3db:; BB(0x0051b3db);
    /* 0051b3db: push dword ptr [eax*4 + 0xa72e2c] */ { u32 v = R32((u32)(r_eax*4+0xa72e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051b3e2: push dword ptr [eax*4 + 0xa72e34] */ { u32 v = R32((u32)(r_eax*4+0xa72e34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051b3e9: push dword ptr [eax*4 + 0xa72e3c] */ { u32 v = R32((u32)(r_eax*4+0xa72e3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051b3f0: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x51b3f5u); f_00520c70();
    /* 0051b3f5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b3f8: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x51b3fdu); f_00520350();
    /* 0051b3fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b400: mov eax, dword ptr [ecx + 0x3e0] */ r_eax = R32((u32)(r_ecx+0x3e0u));
    /* 0051b406: mov dword ptr [ecx + 0x358], 0x9bb9ec */ W32((u32)(r_ecx+0x358u), 0x9bb9ecu);
    /* 0051b410: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b412: je 0x51b41d */ if (fZ) goto L_0051b41d;
L_0051b414:; BB(0x0051b414);
    /* 0051b414: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b416: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x51b41bu); f_00520390();
    /* 0051b41b: jmp 0x51b424 */ goto L_0051b424;
L_0051b41d:; BB(0x0051b41d);
    /* 0051b41d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b41f: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x51b424u); f_00520390();
L_0051b424:; BB(0x0051b424);
    /* 0051b424: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b427: mov dword ptr [ecx + 0x384], 0x41700000 */ W32((u32)(r_ecx+0x384u), 0x41700000u);
    /* 0051b431: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b433: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x51b438u); f_00521820();
    /* 0051b438: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b43b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b43d: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x51b442u); f_005217fc();
    /* 0051b442: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b446: lea ecx, [eax + 0x3c8] */ r_ecx = (u32)(r_eax+0x3c8u);
    /* 0051b44c: call 0x51b708 */ r_esp -= 4; W32(r_esp, 0x51b451u); f_0051b708();
    /* 0051b451: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b454: call 0x51b6f4 */ r_esp -= 4; W32(r_esp, 0x51b459u); f_0051b6f4();
    /* 0051b459: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b45c: mov edx, dword ptr [eax + 0x3e0] */ r_edx = R32((u32)(r_eax+0x3e0u));
    /* 0051b462: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b464: je 0x51b47d */ if (fZ) goto L_0051b47d;
L_0051b466:; BB(0x0051b466);
    /* 0051b466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b467: lea ecx, [eax + 0x3d4] */ r_ecx = (u32)(r_eax+0x3d4u);
    /* 0051b46d: call 0x51b708 */ r_esp -= 4; W32(r_esp, 0x51b472u); f_0051b708();
    /* 0051b472: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b475: call 0x51b718 */ r_esp -= 4; W32(r_esp, 0x51b47au); f_0051b718();
    /* 0051b47a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0051b47d:; BB(0x0051b47d);
    /* 0051b47d: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0051b480: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 0051b483: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 0051b486: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0051b48b: mov word ptr [eax + 0x3e8], dx */ W16((u32)(r_eax+0x3e8u), (u16)r_edx);
    /* 0051b492: mov dword ptr [eax + 0x408], 0 */ W32((u32)(r_eax+0x408u), 0x0u);
    /* 0051b49c: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4a1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0051b4a3: mov dword ptr [eax + 0x40c], 0 */ W32((u32)(r_eax+0x40cu), 0x0u);
    /* 0051b4ad: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0051b4b0: mov dword ptr [eax + 0x3ec], edi */ W32((u32)(r_eax+0x3ecu), r_edi);
    /* 0051b4b6: mov dword ptr [eax + 0x414], 0 */ W32((u32)(r_eax+0x414u), 0x0u);
    /* 0051b4c0: mov dword ptr [eax + 0x3f0], ecx */ W32((u32)(r_eax+0x3f0u), r_ecx);
    /* 0051b4c6: mov dword ptr [eax + 0x3f4], ebx */ W32((u32)(r_eax+0x3f4u), r_ebx);
    /* 0051b4cc: mov dword ptr [eax + 0x3f8], esi */ W32((u32)(r_eax+0x3f8u), r_esi);
    /* 0051b4d2: mov dword ptr [eax + 0x3fc], ecx */ W32((u32)(r_eax+0x3fcu), r_ecx);
    /* 0051b4d8: mov dword ptr [eax + 0x400], ebx */ W32((u32)(r_eax+0x400u), r_ebx);
    /* 0051b4de: mov dword ptr [eax + 0x404], esi */ W32((u32)(r_eax+0x404u), r_esi);
    /* 0051b4e4: mov dword ptr [eax + 0x410], edi */ W32((u32)(r_eax+0x410u), r_edi);
    /* 0051b4ea: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x51b4efu); f_005caba4();
    /* 0051b4ef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051b4f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b4f5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0051b4f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b4fa: je 0x51b656 */ if (fZ) goto L_0051b656;
L_0051b500:; BB(0x0051b500);
    /* 0051b500: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0051b507: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0051b50e: mov ecx, eax */ r_ecx = r_eax;
    /* 0051b510: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b512: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x51b517u); f_007b4b48();
    /* 0051b517: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0051b51e:; BB(0x0051b51e);
    /* 0051b51e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b521: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051b524: mov dword ptr [edx + 0x418], eax */ W32((u32)(r_edx+0x418u), r_eax);
    /* 0051b52a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0051b531: mov ecx, eax */ r_ecx = r_eax;
    /* 0051b533: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b535: push 0x9bb7ec */ { u32 v = 0x9bb7ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b53a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x51b53fu); f_007b9a88();
    /* 0051b53f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b542: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051b544: mov dword ptr [ecx + 0x41c], 0 */ W32((u32)(r_ecx+0x41cu), 0x0u);
    /* 0051b54e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0051b553: mov word ptr [ecx + 0x420], ax */ W16((u32)(r_ecx+0x420u), (u16)r_eax);
    /* 0051b55a: call dword ptr [edx + 0x190] */ { u32 t = R32((u32)(r_edx+0x190u)); r_esp -= 4; W32(r_esp, 0x51b560u); call_ind(t); }
    /* 0051b560: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b563: mov dword ptr [ecx + 0x43c], 0 */ W32((u32)(r_ecx+0x43cu), 0x0u);
    /* 0051b56d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051b56f: mov dword ptr [ecx + 0x424], eax */ W32((u32)(r_ecx+0x424u), r_eax);
    /* 0051b575: mov dword ptr [ecx + 0x440], 0 */ W32((u32)(r_ecx+0x440u), 0x0u);
    /* 0051b57f: mov dword ptr [ecx + 0x428], eax */ W32((u32)(r_ecx+0x428u), r_eax);
    /* 0051b585: mov dword ptr [ecx + 0x42c], eax */ W32((u32)(r_ecx+0x42cu), r_eax);
    /* 0051b58b: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 0051b591: mov dword ptr [ecx + 0x444], 0 */ W32((u32)(r_ecx+0x444u), 0x0u);
    /* 0051b59b: mov dword ptr [ecx + 0x434], eax */ W32((u32)(r_ecx+0x434u), r_eax);
    /* 0051b5a1: mov dword ptr [ecx + 0x438], eax */ W32((u32)(r_ecx+0x438u), r_eax);
    /* 0051b5a7: mov dword ptr [ecx + 0x470], eax */ W32((u32)(r_ecx+0x470u), r_eax);
    /* 0051b5ad: mov dword ptr [ecx + 0x448], 0 */ W32((u32)(r_ecx+0x448u), 0x0u);
    /* 0051b5b7: mov dword ptr [ecx + 0x44c], 0 */ W32((u32)(r_ecx+0x44cu), 0x0u);
    /* 0051b5c1: mov dword ptr [ecx + 0x450], 0 */ W32((u32)(r_ecx+0x450u), 0x0u);
    /* 0051b5cb: mov dword ptr [ecx + 0x454], 0 */ W32((u32)(r_ecx+0x454u), 0x0u);
    /* 0051b5d5: mov dword ptr [ecx + 0x458], 0 */ W32((u32)(r_ecx+0x458u), 0x0u);
    /* 0051b5df: mov dword ptr [ecx + 0x45c], 0 */ W32((u32)(r_ecx+0x45cu), 0x0u);
    /* 0051b5e9: mov dword ptr [ecx + 0x460], 0 */ W32((u32)(r_ecx+0x460u), 0x0u);
    /* 0051b5f3: mov dword ptr [ecx + 0x464], 0 */ W32((u32)(r_ecx+0x464u), 0x0u);
    /* 0051b5fd: mov dword ptr [ecx + 0x468], 0 */ W32((u32)(r_ecx+0x468u), 0x0u);
    /* 0051b607: mov dword ptr [ecx + 0x46c], 0 */ W32((u32)(r_ecx+0x46cu), 0x0u);
    /* 0051b611: call 0x51b72c */ r_esp -= 4; W32(r_esp, 0x51b616u); f_0051b72c();
    /* 0051b616: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b619: call 0x51b760 */ r_esp -= 4; W32(r_esp, 0x51b61eu); f_0051b760();
    /* 0051b61e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b621: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x51b626u); f_0051ffdc();
    /* 0051b626: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b629: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b62b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051b62d: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0051b634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b635: call 0x51b778 */ r_esp -= 4; W32(r_esp, 0x51b63au); f_0051b778();
    /* 0051b63a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051b63d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051b640: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051b643: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051b646: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051b649: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051b650: mov esp, ebp */ r_esp = r_ebp;
    /* 0051b652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051b653: ret 8 */ FN_RET(0x0051b2e8); r_esp += 12; return;
L_0051b656:; BB(0x0051b656);
    /* 0051b656: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051b658: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051b65b: jmp 0x51b51e */ goto L_0051b51e;
}

void f_0051b660(void) /* sub_51B660 */
{
    FN_ENTER(0x0051b660);
    /* 0051b660: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051b663: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0051b669: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 0051b66f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051b671: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051b674: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051b678: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0051b67d: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051b682: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051b686: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051b68a: fistp dword ptr [ecx + 0x3e4] */ W32((u32)(r_ecx+0x3e4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051b690: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051b693: fcomp dword ptr [0x9213a8] */ fx_compare(ST(0), R_F32((u32)(0x9213a8u))); FPOP();
    /* 0051b699: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051b69b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051b69c: jb 0x51b6c9 */ if (fC) goto L_0051b6c9;
L_0051b69e:; BB(0x0051b69e);
    /* 0051b69e: mov eax, dword ptr [0xa72e20] */ r_eax = R32((u32)(0xa72e20u));
    /* 0051b6a3: mov dword ptr [ecx + 0x3e0], 1 */ W32((u32)(r_ecx+0x3e0u), 0x1u);
    /* 0051b6ad: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0051b6b3: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0051b6b6: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0051b6b9: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0051b6bf: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0051b6c2: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0051b6c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051b6c8: ret  */ FN_RET(0x0051b660); r_esp += 4; return;
L_0051b6c9:; BB(0x0051b6c9);
    /* 0051b6c9: mov eax, dword ptr [0xa72e20] */ r_eax = R32((u32)(0xa72e20u));
    /* 0051b6ce: mov dword ptr [ecx + 0x3e0], 0 */ W32((u32)(r_ecx+0x3e0u), 0x0u);
    /* 0051b6d8: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0051b6de: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0051b6e1: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0051b6e4: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0051b6ea: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0051b6ed: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0051b6f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051b6f3: ret  */ FN_RET(0x0051b660); r_esp += 4; return;
}

void f_0051b6f4(void) /* sub_51B6F4 */
{
    FN_ENTER(0x0051b6f4);
    /* 0051b6f4: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b6fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6fb: mov ecx, 0xa72e60 */ r_ecx = 0xa72e60u;
    /* 0051b700: call 0x5aecd4 */ r_esp -= 4; W32(r_esp, 0x51b705u); f_005aecd4();
    /* 0051b705: ret  */ FN_RET(0x0051b6f4); r_esp += 4; return;
}

void f_0051b708(void) /* sub_51B708 */
{
    FN_ENTER(0x0051b708);
    /* 0051b708: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0051b70c: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0051b710: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0051b714: ret 4 */ FN_RET(0x0051b708); r_esp += 8; return;
}

void f_0051b718(void) /* sub_51B718 */
{
    FN_ENTER(0x0051b718);
    /* 0051b718: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b71e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b71f: mov ecx, 0xa72e58 */ r_ecx = 0xa72e58u;
    /* 0051b724: call 0x5aecd4 */ r_esp -= 4; W32(r_esp, 0x51b729u); f_005aecd4();
    /* 0051b729: ret  */ FN_RET(0x0051b718); r_esp += 4; return;
}

void f_0051b72c(void) /* sub_51B72C */
{
    FN_ENTER(0x0051b72c);
    /* 0051b72c: fld dword ptr [0x9213a4] */ FPUSH(R_F32((u32)(0x9213a4u)));
    /* 0051b732: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0051b735: fadd dword ptr [ecx + 0x414] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x414u));
    /* 0051b73b: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0051b73e: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0051b741: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0051b747: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0051b74a: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0051b750: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0051b756: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0051b759: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0051b75c: ret  */ FN_RET(0x0051b72c); r_esp += 4; return;
}

void f_0051b760(void) /* sub_51B760 */
{
    FN_ENTER(0x0051b760);
    /* 0051b760: fld dword ptr [0x9213a4] */ FPUSH(R_F32((u32)(0x9213a4u)));
    /* 0051b766: fadd dword ptr [ecx + 0x414] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x414u));
    /* 0051b76c: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0051b772: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0051b775: ret  */ FN_RET(0x0051b760); r_esp += 4; return;
}

void f_0051b778(void) /* sub_51B778 */
{
    FN_ENTER(0x0051b778);
    /* 0051b778: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051b779: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051b77a: mov edi, ecx */ r_edi = r_ecx;
    /* 0051b77c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0051b780: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051b783: ja 0x51b946 */ if ((!fC&&!fZ)) goto L_0051b946;
L_0051b789:; BB(0x0051b789);
    /* 0051b789: mov eax, dword ptr [eax*4 + 0x9210a0] */ r_eax = R32((u32)(r_eax*4+0x9210a0u));
    /* 0051b790: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b778); r_esp += 12; return;
}

void f_0051b792(void)
{
    FN_ENTER(0x0051b792);
    /* 0051b792: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b796: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b797: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b799: call 0x571174 */ r_esp -= 4; W32(r_esp, 0x51b79eu); f_00571174();
    /* 0051b79e: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b792); r_esp += 12; return;
}

void f_0051b7a3(void)
{
    FN_ENTER(0x0051b7a3);
    /* 0051b7a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b7a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7a8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b7aa: call 0x51ba20 */ r_esp -= 4; W32(r_esp, 0x51b7afu); f_0051ba20();
    /* 0051b7af: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b7a3); r_esp += 12; return;
}

void f_0051b7b4(void)
{
    FN_ENTER(0x0051b7b4);
    /* 0051b7b4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7b9: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b7bb: call 0x51bec0 */ r_esp -= 4; W32(r_esp, 0x51b7c0u); f_0051bec0();
    /* 0051b7c0: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b7b4); r_esp += 12; return;
}

void f_0051b7c5(void)
{
    FN_ENTER(0x0051b7c5);
    /* 0051b7c5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b7c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b7cc: call 0x51c0ac */ r_esp -= 4; W32(r_esp, 0x51b7d1u); f_0051c0ac();
    /* 0051b7d1: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b7c5); r_esp += 12; return;
}

void f_0051b7d6(void)
{
    FN_ENTER(0x0051b7d6);
    /* 0051b7d6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b7da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7db: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b7dd: call 0x51c264 */ r_esp -= 4; W32(r_esp, 0x51b7e2u); f_0051c264();
    /* 0051b7e2: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b7d6); r_esp += 12; return;
}

void f_0051b7e7(void)
{
    FN_ENTER(0x0051b7e7);
    /* 0051b7e7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7ec: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b7ee: call 0x51c5ac */ r_esp -= 4; W32(r_esp, 0x51b7f3u); f_0051c5ac();
    /* 0051b7f3: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b7e7); r_esp += 12; return;
}

void f_0051b7f8(void)
{
    FN_ENTER(0x0051b7f8);
    /* 0051b7f8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b7fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7fd: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b7ff: call 0x51c810 */ r_esp -= 4; W32(r_esp, 0x51b804u); f_0051c810();
    /* 0051b804: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b7f8); r_esp += 12; return;
}

void f_0051b809(void)
{
    FN_ENTER(0x0051b809);
    /* 0051b809: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b80d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b80e: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b810: call 0x51cdfc */ r_esp -= 4; W32(r_esp, 0x51b815u); f_0051cdfc();
    /* 0051b815: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b809); r_esp += 12; return;
}

void f_0051b81a(void)
{
    FN_ENTER(0x0051b81a);
    /* 0051b81a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b81e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b81f: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b821: call 0x51d45c */ r_esp -= 4; W32(r_esp, 0x51b826u); f_0051d45c();
    /* 0051b826: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b81a); r_esp += 12; return;
}

void f_0051b82b(void)
{
    FN_ENTER(0x0051b82b);
    /* 0051b82b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b82f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b830: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b832: call 0x51d798 */ r_esp -= 4; W32(r_esp, 0x51b837u); f_0051d798();
    /* 0051b837: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b82b); r_esp += 12; return;
}

void f_0051b83c(void)
{
    FN_ENTER(0x0051b83c);
    /* 0051b83c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b841: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b843: call 0x51d9b8 */ r_esp -= 4; W32(r_esp, 0x51b848u); f_0051d9b8();
    /* 0051b848: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b83c); r_esp += 12; return;
}

void f_0051b84d(void)
{
    FN_ENTER(0x0051b84d);
    /* 0051b84d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b851: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b854: je 0x51b9f0 */ if (fZ) goto L_0051b9f0;
L_0051b85a:; BB(0x0051b85a);
    /* 0051b85a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b85e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b861: je 0x51b8ed */ if (fZ) goto L_0051b8ed;
L_0051b867:; BB(0x0051b867);
    /* 0051b867: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b86b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051b86d: jne 0x51b946 */ if (!fZ) goto L_0051b946;
L_0051b873:; BB(0x0051b873);
    /* 0051b873: add dword ptr [edi + 0x424], 1 */ { u32 ad = (u32)(r_edi+0x424u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051b87a: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b87c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51b881u); f_007aa094();
    /* 0051b881: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0051b888: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b88b: je 0x51b9df */ if (fZ) goto L_0051b9df;
L_0051b891:; BB(0x0051b891);
    /* 0051b891: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b894: je 0x51b99d */ if (fZ) goto L_0051b99d;
L_0051b89a:; BB(0x0051b89a);
    /* 0051b89a: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0051b8a0: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b8a3: je 0x51b954 */ if (fZ) goto L_0051b954;
L_0051b8a9:; BB(0x0051b8a9);
    /* 0051b8a9: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b8ab: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x51b8b0u); f_0052126c();
    /* 0051b8b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b8b2: je 0x51b8d0 */ if (fZ) goto L_0051b8d0;
L_0051b8b4:; BB(0x0051b8b4);
    /* 0051b8b4: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0051b8bb: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b8be: je 0x51b94b */ if (fZ) goto L_0051b94b;
L_0051b8c4:; BB(0x0051b8c4);
    /* 0051b8c4: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 0051b8ce: jmp 0x51b8d7 */ goto L_0051b8d7;
L_0051b8d0:; BB(0x0051b8d0);
    /* 0051b8d0: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b8d2: call 0x51b1ac */ r_esp -= 4; W32(r_esp, 0x51b8d7u); f_0051b1ac();
L_0051b8d7:; BB(0x0051b8d7);
    /* 0051b8d7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051b8d9: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b8db: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x51b8e1u); call_ind(t); }
    /* 0051b8e1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051b8e3: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b8e5: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x51b8ebu); call_ind(t); }
    /* 0051b8eb: jmp 0x51b946 */ goto L_0051b946;
L_0051b8ed:; BB(0x0051b8ed);
    /* 0051b8ed: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0051b8f3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051b8f5: je 0x51b946 */ if (fZ) goto L_0051b946;
L_0051b8f7:; BB(0x0051b8f7);
    /* 0051b8f7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b8fb: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51b900u); f_0051f62c();
    /* 0051b900: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b84d); r_esp += 12; return;
L_0051b94b:; BB(0x0051b94b);
    /* 0051b94b: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b94d: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51b952u); f_0051b1cc();
    /* 0051b952: jmp 0x51b8d7 */ goto L_0051b8d7;
L_0051b954:; BB(0x0051b954);
    /* 0051b954: mov eax, dword ptr [0xa72e58] */ r_eax = R32((u32)(0xa72e58u));
    /* 0051b959: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b95b: je 0x51b8a9 */ if (fZ) goto L_0051b8a9;
L_0051b961:; BB(0x0051b961);
    /* 0051b961: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051b964: mov ebx, eax */ r_ebx = r_eax;
L_0051b966:; BB(0x0051b966);
    /* 0051b966: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0051b96a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b96b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51b970u); f_007b4d18();
    /* 0051b970: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b971: mov edx, dword ptr [eax + 0x3e4] */ r_edx = R32((u32)(r_eax+0x3e4u));
    /* 0051b977: cmp edx, dword ptr [edi + 0x3e4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x3e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b97d: jne 0x51b98e */ if (!fZ) goto L_0051b98e;
L_0051b97f:; BB(0x0051b97f);
    /* 0051b97f: mov edx, dword ptr [eax + 0x410] */ r_edx = R32((u32)(r_eax+0x410u));
    /* 0051b985: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0051b988: mov dword ptr [eax + 0x410], edx */ W32((u32)(r_eax+0x410u), r_edx);
L_0051b98e:; BB(0x0051b98e);
    /* 0051b98e: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0051b991: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b993: jne 0x51b966 */ if (!fZ) goto L_0051b966;
L_0051b995:; BB(0x0051b995);
    /* 0051b995: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0051b998: jmp 0x51b8a9 */ goto L_0051b8a9;
L_0051b99d:; BB(0x0051b99d);
    /* 0051b99d: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b9a4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51b9a9u); f_007aaa30();
    /* 0051b9a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051b9ab: je 0x51b89a */ if (fZ) goto L_0051b89a;
L_0051b9b1:; BB(0x0051b9b1);
    /* 0051b9b1: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9b6: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b9b8: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51b9bdu); f_007879b8();
    /* 0051b9bd: mov ecx, eax */ r_ecx = r_eax;
    /* 0051b9bf: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0051b9c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051b9c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51b9cdu); f_00814298();
    /* 0051b9cd: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9d2: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51b9d7u); f_00814680();
    /* 0051b9d7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b9da: jmp 0x51b89a */ goto L_0051b89a;
L_0051b9df:; BB(0x0051b9df);
    /* 0051b9df: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9e4: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b9e6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51b9ebu); f_007aaa30();
    /* 0051b9eb: jmp 0x51b89a */ goto L_0051b89a;
L_0051b9f0:; BB(0x0051b9f0);
    /* 0051b9f0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9f2: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0051b9f7: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0051b9fe: mov ecx, edi */ r_ecx = r_edi;
    /* 0051ba00: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51ba05u); f_0051f664();
    /* 0051ba05: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051ba07: mov ecx, edi */ r_ecx = r_edi;
    /* 0051ba09: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x51ba0fu); call_ind(t); }
    /* 0051ba0f: mov dword ptr [edi + 0x424], 0 */ W32((u32)(r_edi+0x424u), 0x0u);
    /* 0051ba19: jmp 0x51b946 */ goto L_0051b946;
}

void f_0051b902(void)
{
    FN_ENTER(0x0051b902);
    /* 0051b902: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b907: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b909: call 0x51df70 */ r_esp -= 4; W32(r_esp, 0x51b90eu); f_0051df70();
    /* 0051b90e: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b902); r_esp += 12; return;
}

void f_0051b910(void)
{
    FN_ENTER(0x0051b910);
    /* 0051b910: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b915: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b917: call 0x51e028 */ r_esp -= 4; W32(r_esp, 0x51b91cu); f_0051e028();
    /* 0051b91c: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b910); r_esp += 12; return;
}

void f_0051b91e(void)
{
    FN_ENTER(0x0051b91e);
    /* 0051b91e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b922: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b923: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b925: call 0x51e104 */ r_esp -= 4; W32(r_esp, 0x51b92au); f_0051e104();
    /* 0051b92a: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b91e); r_esp += 12; return;
}

void f_0051b92c(void)
{
    FN_ENTER(0x0051b92c);
    /* 0051b92c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b931: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b933: call 0x51e1fc */ r_esp -= 4; W32(r_esp, 0x51b938u); f_0051e1fc();
    /* 0051b938: jmp 0x51b946 */ goto L_0051b946;
L_0051b946:; BB(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b92c); r_esp += 12; return;
}

void f_0051b93a(void)
{
    FN_ENTER(0x0051b93a);
    /* 0051b93a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051b93e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b93f: mov ecx, edi */ r_ecx = r_edi;
    /* 0051b941: call 0x51ebe0 */ r_esp -= 4; W32(r_esp, 0x51b946u); f_0051ebe0();
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b93a); r_esp += 12; return;
}

void f_0051b946(void)
{
    FN_ENTER(0x0051b946);
    /* 0051b946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051b947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051b948: ret 8 */ FN_RET(0x0051b946); r_esp += 12; return;
}

void f_0051ba20(void) /* sub_51BA20 */
{
    FN_ENTER(0x0051ba20);
    /* 0051ba20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba22: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ba25: mov esi, ecx */ r_esi = r_ecx;
    /* 0051ba27: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0051ba2b: lea ebx, [esi + 0x434] */ r_ebx = (u32)(r_esi+0x434u);
    /* 0051ba31: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ba34: je 0x51bc2c */ if (fZ) goto L_0051bc2c;
L_0051ba3a:; BB(0x0051ba3a);
    /* 0051ba3a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ba3d: je 0x51bc10 */ if (fZ) goto L_0051bc10;
L_0051ba43:; BB(0x0051ba43);
    /* 0051ba43: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ba46: je 0x51bbfc */ if (fZ) goto L_0051bbfc;
L_0051ba4c:; BB(0x0051ba4c);
    /* 0051ba4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ba4e: jne 0x51bbee */ if (!fZ) goto L_0051bbee;
L_0051ba54:; BB(0x0051ba54);
    /* 0051ba54: mov eax, dword ptr [esi + 0x424] */ r_eax = R32((u32)(r_esi+0x424u));
    /* 0051ba5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ba5c: jne 0x51bbb4 */ if (!fZ) goto L_0051bbb4;
L_0051ba62:; BB(0x0051ba62);
    /* 0051ba62: mov ecx, esi */ r_ecx = r_esi;
    /* 0051ba64: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51ba69u); f_007aa094();
    /* 0051ba69: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0051ba6f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051ba71: je 0x51badd */ if (fZ) goto L_0051badd;
L_0051ba73:; BB(0x0051ba73);
    /* 0051ba73: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0051ba7a: mov dword ptr [esi + 0x424], 1 */ W32((u32)(r_esi+0x424u), 0x1u);
    /* 0051ba84: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ba87: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0051ba8f: je 0x51bc18 */ if (fZ) goto L_0051bc18;
L_0051ba95:; BB(0x0051ba95);
    /* 0051ba95: mov dword ptr [esp], 0xc1400000 */ W32((u32)(r_esp), 0xc1400000u);
    /* 0051ba9c: mov dword ptr [esp + 8], 0xc1200000 */ W32((u32)(r_esp+0x8u), 0xc1200000u);
L_0051baa4:; BB(0x0051baa4);
    /* 0051baa4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0051baa7: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0051baab: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051baae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051baaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bab0: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x51bab5u); f_00782b64();
    /* 0051bab5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bab8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0051babb: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0051babe: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x51bac3u); f_0082ebac();
    /* 0051bac3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051bac6: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bac9: call 0x5782f8 */ r_esp -= 4; W32(r_esp, 0x51baceu); f_005782f8();
    /* 0051bace: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0051bad2: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bad5: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x51badau); f_00578778();
    /* 0051bada: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051badd:; BB(0x0051badd);
    /* 0051badd: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bae2: push dword ptr [esi + 0x434] */ { u32 v = R32((u32)(r_esi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051bae8: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051baeb: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51baf0u); f_007a8c74();
    /* 0051baf0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051baf3: fld dword ptr [esi + 0x384] */ FPUSH(R_F32((u32)(r_esi+0x384u)));
    /* 0051baf9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0051bafc: fcom dword ptr [0x921374] */ fx_compare(ST(0), R_F32((u32)(0x921374u))); 
    /* 0051bb02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051bb04: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 0051bb07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051bb08: jae 0x51bb18 */ if (!fC) goto L_0051bb18;
L_0051bb0a:; BB(0x0051bb0a);
    /* 0051bb0a: fld dword ptr [esi + 0x43c] */ FPUSH(R_F32((u32)(r_esi+0x43cu)));
    /* 0051bb10: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0051bb12: fstp dword ptr [esi + 0x384] */ W_F32((u32)(r_esi+0x384u), ST(0)); FPOP();
L_0051bb18:; BB(0x0051bb18);
    /* 0051bb18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051bb1a: mov eax, dword ptr [esi + 0x30c] */ r_eax = R32((u32)(r_esi+0x30cu));
    /* 0051bb20: mov edx, dword ptr [esi + 0x310] */ r_edx = R32((u32)(r_esi+0x310u));
    /* 0051bb26: mov ebx, dword ptr [esi + 0x314] */ r_ebx = R32((u32)(r_esi+0x314u));
    /* 0051bb2c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0051bb30: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0051bb34: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0051bb38: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0051bb3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb3d: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x51bb42u); f_007828e4();
    /* 0051bb42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051bb43: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bb46: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0051bb4a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0051bb4e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051bb52: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bb54: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051bb57: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0051bb5b: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x51bb60u); f_005209d4();
    /* 0051bb60: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb65: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bb67: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51bb6cu); f_007aaa30();
    /* 0051bb6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bb6e: je 0x51bb7c */ if (fZ) goto L_0051bb7c;
L_0051bb70:; BB(0x0051bb70);
    /* 0051bb70: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0051bb74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb75: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bb77: call 0x51bd6c */ r_esp -= 4; W32(r_esp, 0x51bb7cu); f_0051bd6c();
L_0051bb7c:; BB(0x0051bb7c);
    /* 0051bb7c: fld dword ptr [0x92138c] */ FPUSH(R_F32((u32)(0x92138cu)));
    /* 0051bb82: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051bb85: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 0051bb8b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051bb8d: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
    /* 0051bb93: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051bb95: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 0051bb9b: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 0051bba1: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bba3: call 0x51cc28 */ r_esp -= 4; W32(r_esp, 0x51bba8u); f_0051cc28();
    /* 0051bba8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051bbaa: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bbac: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x51bbb2u); call_ind(t); }
    /* 0051bbb2: jmp 0x51bc10 */ goto L_0051bc10;
L_0051bbb4:; BB(0x0051bbb4);
    /* 0051bbb4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bbb7: jne 0x51bc10 */ if (!fZ) goto L_0051bc10;
L_0051bbb9:; BB(0x0051bbb9);
    /* 0051bbb9: fld dword ptr [0x921384] */ FPUSH(R_F32((u32)(0x921384u)));
    /* 0051bbbf: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0051bbc2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0051bbc4: fld dword ptr [esi + 0x444] */ FPUSH(R_F32((u32)(r_esi+0x444u)));
    /* 0051bbca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051bbcc: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0051bbcf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051bbd1: fcom dword ptr [0x921380] */ fx_compare(ST(0), R_F32((u32)(0x921380u))); 
    /* 0051bbd7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051bbd9: fstp dword ptr [esi + 0x444] */ W_F32((u32)(r_esi+0x444u), ST(0)); FPOP();
    /* 0051bbdf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051bbe0: jbe 0x51bc10 */ if ((fC||fZ)) goto L_0051bc10;
L_0051bbe2:; BB(0x0051bbe2);
    /* 0051bbe2: mov dword ptr [esi + 0x424], 2 */ W32((u32)(r_esi+0x424u), 0x2u);
    /* 0051bbec: jmp 0x51bc10 */ goto L_0051bc10;
L_0051bbee:; BB(0x0051bbee);
    /* 0051bbee: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bbf1: jne 0x51bc10 */ if (!fZ) goto L_0051bc10;
L_0051bbf3:; BB(0x0051bbf3);
    /* 0051bbf3: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bbf5: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x51bbfau); f_00520be8();
    /* 0051bbfa: jmp 0x51bc10 */ goto L_0051bc10;
L_0051bbfc:; BB(0x0051bbfc);
    /* 0051bbfc: mov eax, dword ptr [esi + 0x424] */ r_eax = R32((u32)(r_esi+0x424u));
    /* 0051bc02: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bc05: jne 0x51bc10 */ if (!fZ) goto L_0051bc10;
L_0051bc07:; BB(0x0051bc07);
    /* 0051bc07: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc09: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bc0b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51bc10u); f_0051f62c();
L_0051bc10:; BB(0x0051bc10);
    /* 0051bc10: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051bc13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051bc14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051bc15: ret 4 */ FN_RET(0x0051ba20); r_esp += 8; return;
L_0051bc18:; BB(0x0051bc18);
    /* 0051bc18: mov dword ptr [esp], 0x41400000 */ W32((u32)(r_esp), 0x41400000u);
    /* 0051bc1f: mov dword ptr [esp + 8], 0xc1200000 */ W32((u32)(r_esp+0x8u), 0xc1200000u);
    /* 0051bc27: jmp 0x51baa4 */ goto L_0051baa4;
L_0051bc2c:; BB(0x0051bc2c);
    /* 0051bc2c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051bc2e: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bc30: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51bc36u); call_ind(t); }
    /* 0051bc36: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bc38: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x51bc3du); f_0051f894();
    /* 0051bc3d: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc42: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bc44: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51bc49u); f_007879b8();
    /* 0051bc49: mov ecx, eax */ r_ecx = r_eax;
    /* 0051bc4b: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0051bc4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051bc50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc54: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51bc59u); f_00814298();
    /* 0051bc59: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc5e: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51bc63u); f_00814680();
    /* 0051bc63: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bc66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc67: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bc69: call 0x51bdb8 */ r_esp -= 4; W32(r_esp, 0x51bc6eu); f_0051bdb8();
    /* 0051bc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bc70: jne 0x51bc80 */ if (!fZ) goto L_0051bc80;
L_0051bc72:; BB(0x0051bc72);
    /* 0051bc72: mov eax, 0xf */ r_eax = 0xfu;
    /* 0051bc77: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0051bc7e: jmp 0x51bc8c */ goto L_0051bc8c;
L_0051bc80:; BB(0x0051bc80);
    /* 0051bc80: mov eax, 0xe */ r_eax = 0xeu;
    /* 0051bc85: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_0051bc8c:; BB(0x0051bc8c);
    /* 0051bc8c: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc91: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bc93: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x51bc98u); f_00779df0();
    /* 0051bc98: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 0051bc9e: mov dword ptr [esi + 0x424], 0 */ W32((u32)(r_esi+0x424u), 0x0u);
    /* 0051bca8: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bcaa: push dword ptr [eax + 0x98] */ { u32 v = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051bcb0: call 0x51be80 */ r_esp -= 4; W32(r_esp, 0x51bcb5u); f_0051be80();
    /* 0051bcb5: mov eax, dword ptr [esi + 0x3e0] */ r_eax = R32((u32)(r_esi+0x3e0u));
    /* 0051bcbb: fstp dword ptr [esi + 0x43c] */ W_F32((u32)(r_esi+0x43cu), ST(0)); FPOP();
    /* 0051bcc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bcc3: mov dword ptr [esi + 0x444], 0 */ W32((u32)(r_esi+0x444u), 0x0u);
    /* 0051bccd: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 0051bcd7: je 0x51bd5f */ if (fZ) goto L_0051bd5f;
L_0051bcdd:; BB(0x0051bcdd);
    /* 0051bcdd: mov ebx, dword ptr [0xa72e60] */ r_ebx = R32((u32)(0xa72e60u));
    /* 0051bce3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bce5: je 0x51bd5f */ if (fZ) goto L_0051bd5f;
L_0051bce7:; BB(0x0051bce7);
    /* 0051bce7: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
L_0051bceb:; BB(0x0051bceb);
    /* 0051bceb: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0051bcef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcf0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51bcf5u); f_007b4d18();
    /* 0051bcf5: mov edi, eax */ r_edi = r_eax;
    /* 0051bcf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bcfa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bcfc: je 0x51bd54 */ if (fZ) goto L_0051bd54;
L_0051bcfe:; BB(0x0051bcfe);
    /* 0051bcfe: mov edx, dword ptr [edi + 0x3e4] */ r_edx = R32((u32)(r_edi+0x3e4u));
    /* 0051bd04: cmp edx, dword ptr [esi + 0x3e4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bd0a: jne 0x51bd54 */ if (!fZ) goto L_0051bd54;
L_0051bd0c:; BB(0x0051bd0c);
    /* 0051bd0c: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bd0e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51bd13u); f_007751b0();
    /* 0051bd13: fld dword ptr [0x921388] */ FPUSH(R_F32((u32)(0x921388u)));
    /* 0051bd19: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051bd1b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0051bd1f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0051bd24: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051bd29: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0051bd2d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0051bd31: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051bd35: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0051bd39: movzx eax, word ptr [esi + 0x2d8] */ r_eax = (u32)R16((u32)(r_esi+0x2d8u));
    /* 0051bd40: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0051bd44: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bd47: mov dword ptr [edi + 0x41c], edx */ W32((u32)(r_edi+0x41cu), r_edx);
    /* 0051bd4d: mov word ptr [edi + 0x420], ax */ W16((u32)(r_edi+0x420u), (u16)r_eax);
L_0051bd54:; BB(0x0051bd54);
    /* 0051bd54: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0051bd57: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bd59: jne 0x51bceb */ if (!fZ) goto L_0051bceb;
L_0051bd5b:; BB(0x0051bd5b);
    /* 0051bd5b: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_0051bd5f:; BB(0x0051bd5f);
    /* 0051bd5f: mov ecx, esi */ r_ecx = r_esi;
    /* 0051bd61: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x51bd66u); f_00520bdc();
    /* 0051bd66: jmp 0x51bc10 */ goto L_0051bc10;
}

void f_0051bd6c(void) /* sub_51BD6C */
{
    FN_ENTER(0x0051bd6c);
    /* 0051bd6c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051bd6f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051bd73: fld dword ptr [0x921370] */ FPUSH(R_F32((u32)(0x921370u)));
    /* 0051bd79: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0051bd7c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0051bd7f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0051bd82: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0051bd86: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0051bd89: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0051bd8d: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0051bd8f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051bd91: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0051bd94: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051bd97: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0051bd9a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051bd9c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051bd9f: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0051bda3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051bda7: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdad: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51bdb2u); f_0050b510();
    /* 0051bdb2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051bdb5: ret 4 */ FN_RET(0x0051bd6c); r_esp += 8; return;
}

void f_0051bdb8(void) /* sub_51BDB8 */
{
    FN_ENTER(0x0051bdb8);
    /* 0051bdb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdba: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051bdbd: mov edi, ecx */ r_edi = r_ecx;
    /* 0051bdbf: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0051bdc3: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 0051bdc9: mov edx, dword ptr [edi + 0x314] */ r_edx = R32((u32)(r_edi+0x314u));
    /* 0051bdcf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051bdd2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0051bdd6: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0051bdde: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051bde1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bde2: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x51bde7u); f_007828e4();
    /* 0051bde7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051bde8: fcomp dword ptr [0x92136c] */ fx_compare(ST(0), R_F32((u32)(0x92136cu))); FPOP();
    /* 0051bdee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051bdf0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051bdf1: je 0x51be6a */ if (fZ) goto L_0051be6a;
L_0051bdf3:; BB(0x0051bdf3);
    /* 0051bdf3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051bdf6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0051bdfa: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0051bdfc: fmul qword ptr [0x921140] */ ST(0) = ST(0) * R_F64((u32)(0x921140u));
    /* 0051be02: fdiv qword ptr [0x921138] */ ST(0) = ST(0) / R_F64((u32)(0x921138u));
    /* 0051be08: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0051be0c: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0051be11: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051be16: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0051be1a: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0051be1e: fistp dword ptr [ebx] */ W32((u32)(r_ebx), (u32)fx_int32(ST(0))); FPOP();
    /* 0051be20: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0051be24: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0051be27: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51be2cu); f_0082dcbc();
    /* 0051be2c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0051be2f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0051be33: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51be38u); f_0082ddd8();
    /* 0051be38: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0051be3c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0051be40: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051be43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051be44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051be45: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x51be4au); f_007829cc();
    /* 0051be4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051be4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051be4f: je 0x51be5c */ if (fZ) goto L_0051be5c;
L_0051be51:; BB(0x0051be51);
    /* 0051be51: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051be53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051be55: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051be5a: jmp 0x51be6f */ goto L_0051be6f;
L_0051be5c:; BB(0x0051be5c);
    /* 0051be5c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051be5e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0051be63: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051be68: jmp 0x51be6f */ goto L_0051be6f;
L_0051be6a:; BB(0x0051be6a);
    /* 0051be6a: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0051be6d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0051be6f:; BB(0x0051be6f);
    /* 0051be6f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0051be72: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 0051be74: mov eax, ecx */ r_eax = r_ecx;
    /* 0051be76: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051be79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051be7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051be7b: ret 4 */ FN_RET(0x0051bdb8); r_esp += 8; return;
}

void f_0051be80(void) /* sub_51BE80 */
{
    FN_ENTER(0x0051be80);
    /* 0051be80: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051be83: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 0051be89: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 0051be8f: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 0051be95: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0051be99: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0051be9c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051be9f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051bea2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0051bea5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0051bea8: fadd dword ptr [eax*4 + 0x921130] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x921130u));
    /* 0051beaf: fdiv dword ptr [esp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xcu));
    /* 0051beb3: fdivr dword ptr [0x921374] */ ST(0) = R_F32((u32)(0x921374u)) / ST(0);
    /* 0051beb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051bebc: ret 4 */ FN_RET(0x0051be80); r_esp += 8; return;
}

void f_0051bec0(void) /* sub_51BEC0 */
{
    FN_ENTER(0x0051bec0);
    /* 0051bec0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051bec1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051bec4: mov edi, ecx */ r_edi = r_ecx;
    /* 0051bec6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0051beca: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051becd: je 0x51c02a */ if (fZ) goto L_0051c02a;
L_0051bed3:; BB(0x0051bed3);
    /* 0051bed3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bed6: je 0x51bfe1 */ if (fZ) goto L_0051bfe1;
L_0051bedc:; BB(0x0051bedc);
    /* 0051bedc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bede: jne 0x51bfc7 */ if (!fZ) goto L_0051bfc7;
L_0051bee4:; BB(0x0051bee4);
    /* 0051bee4: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bee6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51beebu); f_007aa094();
    /* 0051beeb: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 0051bef1: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 0051bef7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051befa: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 0051bf00: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0051bf04: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051bf08: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051bf0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf0c: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x51bf11u); f_007828e4();
    /* 0051bf11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051bf12: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bf15: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0051bf19: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0051bf1d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051bf21: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bf23: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051bf26: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0051bf2a: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51bf2fu); f_005207c4();
    /* 0051bf2f: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0051bf35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bf37: jne 0x51bf5d */ if (!fZ) goto L_0051bf5d;
L_0051bf39:; BB(0x0051bf39);
    /* 0051bf39: fld dword ptr [0x921360] */ FPUSH(R_F32((u32)(0x921360u)));
    /* 0051bf3f: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0051bf45: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051bf47: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0051bf4d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051bf4f: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0051bf55: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0051bf5b: jmp 0x51bfb6 */ goto L_0051bfb6;
L_0051bf5d:; BB(0x0051bf5d);
    /* 0051bf5d: fld dword ptr [0x921368] */ FPUSH(R_F32((u32)(0x921368u)));
    /* 0051bf63: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf68: push dword ptr [edi + 0x434] */ { u32 v = R32((u32)(r_edi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051bf6e: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0051bf74: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051bf76: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051bf79: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0051bf7f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051bf81: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0051bf87: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0051bf8d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51bf92u); f_007a8c74();
    /* 0051bf92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bf95: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf9a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0051bf9d: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0051bfa0: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bfa2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51bfa7u); f_007aaa30();
    /* 0051bfa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bfa9: je 0x51bfb6 */ if (fZ) goto L_0051bfb6;
L_0051bfab:; BB(0x0051bfab);
    /* 0051bfab: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051bfae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfaf: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bfb1: call 0x51bd6c */ r_esp -= 4; W32(r_esp, 0x51bfb6u); f_0051bd6c();
L_0051bfb6:; BB(0x0051bfb6);
    /* 0051bfb6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051bfb8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bfba: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51bfc0u); call_ind(t); }
    /* 0051bfc0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051bfc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051bfc4: ret 4 */ FN_RET(0x0051bec0); r_esp += 8; return;
L_0051bfc7:; BB(0x0051bfc7);
    /* 0051bfc7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bfca: jne 0x51c023 */ if (!fZ) goto L_0051c023;
L_0051bfcc:; BB(0x0051bfcc);
    /* 0051bfcc: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bfce: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x51bfd3u); f_0051f81c();
    /* 0051bfd3: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bfd5: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x51bfdau); f_00520be8();
    /* 0051bfda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051bfdd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051bfde: ret 4 */ FN_RET(0x0051bec0); r_esp += 8; return;
L_0051bfe1:; BB(0x0051bfe1);
    /* 0051bfe1: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0051bfe7: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051bfe9: je 0x51c023 */ if (fZ) goto L_0051c023;
L_0051bfeb:; BB(0x0051bfeb);
    /* 0051bfeb: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 0051bff1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051bff4: jne 0x51c006 */ if (!fZ) goto L_0051c006;
L_0051bff6:; BB(0x0051bff6);
    /* 0051bff6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bff8: mov ecx, edi */ r_ecx = r_edi;
    /* 0051bffa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51bfffu); f_0051f62c();
    /* 0051bfff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c002: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c003: ret 4 */ FN_RET(0x0051bec0); r_esp += 8; return;
L_0051c006:; BB(0x0051c006);
    /* 0051c006: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c009: jne 0x51c01b */ if (!fZ) goto L_0051c01b;
L_0051c00b:; BB(0x0051c00b);
    /* 0051c00b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c00d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c00f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51c014u); f_0051f62c();
    /* 0051c014: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c017: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c018: ret 4 */ FN_RET(0x0051bec0); r_esp += 8; return;
L_0051c01b:; BB(0x0051c01b);
    /* 0051c01b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c01c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c01e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51c023u); f_0051f62c();
L_0051c023:; BB(0x0051c023);
    /* 0051c023: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c026: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c027: ret 4 */ FN_RET(0x0051bec0); r_esp += 8; return;
L_0051c02a:; BB(0x0051c02a);
    /* 0051c02a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051c02c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c02e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51c034u); call_ind(t); }
    /* 0051c034: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c039: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c03b: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x51c040u); f_00779df0();
    /* 0051c040: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051c042: mov dword ptr [edi + 0x428], edx */ W32((u32)(r_edi+0x428u), r_edx);
    /* 0051c048: mov dword ptr [edi + 0x434], edx */ W32((u32)(r_edi+0x434u), r_edx);
    /* 0051c04e: mov eax, 6 */ r_eax = 0x6u;
    /* 0051c053: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0051c05a: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0051c061: mov dword ptr [edi + 0x424], edx */ W32((u32)(r_edi+0x424u), r_edx);
    /* 0051c067: movsx edx, word ptr [edi + 0x346] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x346u));
    /* 0051c06e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051c070: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c073: jge 0x51c09e */ if ((fS==fO)) goto L_0051c09e;
L_0051c075:; BB(0x0051c075);
    /* 0051c075: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c07a: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c07c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51c081u); f_007879b8();
    /* 0051c081: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c083: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0051c086: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051c088: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c089: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c08a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c08b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c08c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51c091u); f_00814298();
    /* 0051c091: push 0xfffffb00 */ { u32 v = 0xfffffb00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c096: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51c09bu); f_00814680();
    /* 0051c09b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c09e:; BB(0x0051c09e);
    /* 0051c09e: mov ecx, edi */ r_ecx = r_edi;
    /* 0051c0a0: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x51c0a5u); f_00520bdc();
    /* 0051c0a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051c0a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051c0a9: ret 4 */ FN_RET(0x0051bec0); r_esp += 8; return;
}

