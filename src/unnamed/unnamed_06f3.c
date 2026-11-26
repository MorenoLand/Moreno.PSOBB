#include "protos.h"

void f_006f3014(void) /* sub_6F3014 */
{
    FN_ENTER(0x006f3014);
    /* 006f3014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3015: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3016: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f3019: mov edi, ecx */ r_edi = r_ecx;
    /* 006f301b: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006f3020: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f3022: mov esi, dword ptr [edi + 0xcc] */ r_esi = R32((u32)(r_edi+0xccu));
    /* 006f3028: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006f302c: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x6f3031u); f_007b5290();
    /* 006f3031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f3033: jne 0x6f305b */ if (!fZ) goto L_006f305b;
L_006f3035:; BB(0x006f3035);
    /* 006f3035: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006f3039: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006f303b: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 006f3042: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006f3046: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f3048: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006f304a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f304c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f304d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006f304f: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f3052: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 006f3056: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x6f3059u); call_ind(t); }
    /* 006f3059: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006f305b:; BB(0x006f305b);
    /* 006f305b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f305e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f305f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f3060: ret 4 */ FN_RET(0x006f3014); r_esp += 8; return;
}

void f_006f3064(void) /* sub_6F3064 */
{
    FN_ENTER(0x006f3064);
    /* 006f3064: mov dword ptr [0xa968e4], 0x3f800000 */ W32((u32)(0xa968e4u), 0x3f800000u);
    /* 006f306e: mov dword ptr [0xa968e8], 0x41000000 */ W32((u32)(0xa968e8u), 0x41000000u);
    /* 006f3078: mov dword ptr [0xa968ec], 0x3fc00000 */ W32((u32)(0xa968ecu), 0x3fc00000u);
    /* 006f3082: ret  */ FN_RET(0x006f3064); r_esp += 4; return;
}

void f_006f3084(void) /* sub_6F3084 */
{
    FN_ENTER(0x006f3084);
    /* 006f3084: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f3085: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f3087: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f3089: call 0x6f30a8 */ r_esp -= 4; W32(r_esp, 0x6f308eu); f_006f30a8();
    /* 006f308e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f3092: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f3094: jne 0x6f309a */ if (!fZ) goto L_006f309a;
L_006f3096:; BB(0x006f3096);
    /* 006f3096: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f3097: ret 4 */ FN_RET(0x006f3084); r_esp += 8; return;
L_006f309a:; BB(0x006f309a);
    /* 006f309a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f309b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f30a0u); f_005c2f74();
    /* 006f30a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f30a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f30a2: ret 4 */ FN_RET(0x006f3084); r_esp += 8; return;
}

void f_006f30a8(void) /* sub_6F30A8 */
{
    FN_ENTER(0x006f30a8);
    /* 006f30a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f30a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006f30ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f30ad: push 0x8efddc */ { u32 v = 0x8efddcu; r_esp -= 4; W32(r_esp, v); }
    /* 006f30b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f30b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f30b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f30c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f30c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f30c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f30c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f30cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f30cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f30d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f30d5: mov dword ptr [ecx], 0xb3e968 */ W32((u32)(r_ecx), 0xb3e968u);
    /* 006f30db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f30e2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6f30e7u); f_008171e8();
    /* 006f30e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f30ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f30f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006f30f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f30f4: ret  */ FN_RET(0x006f30a8); r_esp += 4; return;
}

void f_006f30f8(void) /* sub_6F30F8 */
{
    FN_ENTER(0x006f30f8);
    /* 006f30f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f30f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f30fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f30fd: call 0x6f311c */ r_esp -= 4; W32(r_esp, 0x6f3102u); f_006f311c();
    /* 006f3102: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f3106: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f3108: jne 0x6f310e */ if (!fZ) goto L_006f310e;
L_006f310a:; BB(0x006f310a);
    /* 006f310a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f310b: ret 4 */ FN_RET(0x006f30f8); r_esp += 8; return;
L_006f310e:; BB(0x006f310e);
    /* 006f310e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f310f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f3114u); f_005c2f74();
    /* 006f3114: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f3115: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f3116: ret 4 */ FN_RET(0x006f30f8); r_esp += 8; return;
}

void f_006f311c(void) /* sub_6F311C */
{
    FN_ENTER(0x006f311c);
    /* 006f311c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f311d: mov ebp, esp */ r_ebp = r_esp;
    /* 006f311f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f3121: push 0x8efdf8 */ { u32 v = 0x8efdf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006f3126: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f312c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f312d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f3134: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f3137: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f313a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f313d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f3140: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f3143: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f3146: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f3149: mov dword ptr [ecx], 0xb3e978 */ W32((u32)(r_ecx), 0xb3e978u);
    /* 006f314f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f3156: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6f315bu); f_008171e8();
    /* 006f315b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f315e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f3165: mov esp, ebp */ r_esp = r_ebp;
    /* 006f3167: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f3168: ret  */ FN_RET(0x006f311c); r_esp += 4; return;
}

void f_006f316c(void) /* sub_6F316C */
{
    FN_ENTER(0x006f316c);
    /* 006f316c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f316d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f316e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f3171: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f3173: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f3175: call 0x6f33f0 */ r_esp -= 4; W32(r_esp, 0x6f317au); f_006f33f0();
    /* 006f317a: mov ecx, eax */ r_ecx = r_eax;
    /* 006f317c: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 006f317f: lea eax, [ebx + 0x174] */ r_eax = (u32)(r_ebx+0x174u);
    /* 006f3185: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006f3187: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f3189: jle 0x6f338f */ if ((fZ||fS!=fO)) goto L_006f338f;
L_006f318f:; BB(0x006f318f);
    /* 006f318f: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006f3193: mov edi, ecx */ r_edi = r_ecx;
    /* 006f3195: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006f3199: mov ebp, eax */ r_ebp = r_eax;
L_006f319b:; BB(0x006f319b);
    /* 006f319b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f319d: je 0x6f32e5 */ if (fZ) goto L_006f32e5;
L_006f31a3:; BB(0x006f31a3);
    /* 006f31a3: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f31a6: jne 0x6f3243 */ if (!fZ) goto L_006f3243;
L_006f31ac:; BB(0x006f31ac);
    /* 006f31ac: fld dword ptr [0x96e0f8] */ FPUSH(R_F32((u32)(0x96e0f8u)));
    /* 006f31b2: fdiv dword ptr [ebx + 0x2c] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x2cu));
    /* 006f31b5: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 006f31b8: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 006f31bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f31bd: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006f31c1: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006f31c5: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f31c9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f31ceu); f_008587a5();
    /* 006f31ce: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006f31d1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006f31d4: fdiv dword ptr [0x96e0f0] */ ST(0) = ST(0) / R_F32((u32)(0x96e0f0u));
    /* 006f31da: fadd dword ptr [0x96e0f4] */ ST(0) = ST(0) + R_F32((u32)(0x96e0f4u));
    /* 006f31e0: fmul dword ptr [0x96e0ec] */ ST(0) = ST(0) * R_F32((u32)(0x96e0ecu));
    /* 006f31e6: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f31ec: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006f31f0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f31f5u); f_008587a5();
    /* 006f31f5: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006f31f9: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 006f31fc: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 006f3200: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006f3204: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006f3208: fdiv dword ptr [0x96e0f0] */ ST(0) = ST(0) / R_F32((u32)(0x96e0f0u));
    /* 006f320e: fadd dword ptr [0x96e0f4] */ ST(0) = ST(0) + R_F32((u32)(0x96e0f4u));
    /* 006f3214: fmul dword ptr [0x96e0ec] */ ST(0) = ST(0) * R_F32((u32)(0x96e0ecu));
    /* 006f321a: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3220: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 006f3223: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 006f3227: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3229: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 006f322d: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 006f3230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f3231: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f3236u); f_00782868();
    /* 006f3236: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3238: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f323b: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 006f323e: jmp 0x6f3379 */ goto L_006f3379;
L_006f3243:; BB(0x006f3243);
    /* 006f3243: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f3246: jne 0x6f3379 */ if (!fZ) goto L_006f3379;
L_006f324c:; BB(0x006f324c);
    /* 006f324c: fld dword ptr [0x96e0f8] */ FPUSH(R_F32((u32)(0x96e0f8u)));
    /* 006f3252: fdiv dword ptr [ebx + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x30u));
    /* 006f3255: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 006f3258: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 006f325b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f325d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006f3261: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006f3265: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f3269: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f326eu); f_008587a5();
    /* 006f326e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006f3272: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006f3276: fdiv dword ptr [0x96e0f0] */ ST(0) = ST(0) / R_F32((u32)(0x96e0f0u));
    /* 006f327c: fadd dword ptr [0x96e0f4] */ ST(0) = ST(0) + R_F32((u32)(0x96e0f4u));
    /* 006f3282: fmul dword ptr [0x96e0ec] */ ST(0) = ST(0) * R_F32((u32)(0x96e0ecu));
    /* 006f3288: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f328e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006f3292: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3297u); f_008587a5();
    /* 006f3297: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006f329b: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 006f329e: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 006f32a2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006f32a6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006f32aa: fdiv dword ptr [0x96e0f0] */ ST(0) = ST(0) / R_F32((u32)(0x96e0f0u));
    /* 006f32b0: fadd dword ptr [0x96e0f4] */ ST(0) = ST(0) + R_F32((u32)(0x96e0f4u));
    /* 006f32b6: fmul dword ptr [0x96e0ec] */ ST(0) = ST(0) * R_F32((u32)(0x96e0ecu));
    /* 006f32bc: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f32c2: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 006f32c5: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 006f32c9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f32cb: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 006f32cf: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 006f32d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f32d3: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f32d8u); f_00782868();
    /* 006f32d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f32da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f32dd: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 006f32e0: jmp 0x6f3379 */ goto L_006f3379;
L_006f32e5:; BB(0x006f32e5);
    /* 006f32e5: fld dword ptr [0x96e0f8] */ FPUSH(R_F32((u32)(0x96e0f8u)));
    /* 006f32eb: fdiv dword ptr [ebx + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x28u));
    /* 006f32ee: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 006f32f1: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 006f32f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f32f6: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006f32fa: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006f32fe: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f3302: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3307u); f_008587a5();
    /* 006f3307: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006f330b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006f330f: fdiv dword ptr [0x96e0f0] */ ST(0) = ST(0) / R_F32((u32)(0x96e0f0u));
    /* 006f3315: fadd dword ptr [0x96e0f4] */ ST(0) = ST(0) + R_F32((u32)(0x96e0f4u));
    /* 006f331b: fmul dword ptr [0x96e0ec] */ ST(0) = ST(0) * R_F32((u32)(0x96e0ecu));
    /* 006f3321: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3327: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006f332b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3330u); f_008587a5();
    /* 006f3330: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006f3334: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 006f3337: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 006f333b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006f333f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006f3343: fdiv dword ptr [0x96e0f0] */ ST(0) = ST(0) / R_F32((u32)(0x96e0f0u));
    /* 006f3349: fadd dword ptr [0x96e0f4] */ ST(0) = ST(0) + R_F32((u32)(0x96e0f4u));
    /* 006f334f: fmul dword ptr [0x96e0ec] */ ST(0) = ST(0) * R_F32((u32)(0x96e0ecu));
    /* 006f3355: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f335b: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 006f335e: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 006f3362: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3364: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 006f3368: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 006f336b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f336c: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f3371u); f_00782868();
    /* 006f3371: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3373: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f3376: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
L_006f3379:; BB(0x006f3379);
    /* 006f3379: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006f337c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f337f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3381: jl 0x6f319b */ if ((fS!=fO)) goto L_006f319b;
L_006f3387:; BB(0x006f3387);
    /* 006f3387: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006f338b: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_006f338f:; BB(0x006f338f);
    /* 006f338f: mov esi, 1 */ r_esi = 0x1u;
    /* 006f3394: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 006f3397: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f339a: jle 0x6f33d5 */ if ((fZ||fS!=fO)) goto L_006f33d5;
L_006f339c:; BB(0x006f339c);
    /* 006f339c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f33a1u); f_008587a5();
    /* 006f33a1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006f33a5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006f33a9: fdiv dword ptr [0x96e0f0] */ ST(0) = ST(0) / R_F32((u32)(0x96e0f0u));
    /* 006f33af: fadd dword ptr [0x96e0f4] */ ST(0) = ST(0) + R_F32((u32)(0x96e0f4u));
    /* 006f33b5: fmul dword ptr [0x96e0ec] */ ST(0) = ST(0) * R_F32((u32)(0x96e0ecu));
    /* 006f33bb: fmul dword ptr [0x96e0e0] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e0u));
    /* 006f33c1: fstp dword ptr [ebx + esi*4 + 0x210] */ W_F32((u32)(r_ebx+r_esi*4+0x210u), ST(0)); FPOP();
    /* 006f33c8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f33cb: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 006f33ce: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 006f33d1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f33d3: jl 0x6f339c */ if ((fS!=fO)) goto L_006f339c;
L_006f33d5:; BB(0x006f33d5);
    /* 006f33d5: mov dword ptr [ebx + 0x210], 0 */ W32((u32)(r_ebx+0x210u), 0x0u);
    /* 006f33df: mov dword ptr [ebx + edx*4 + 0x20c], 0 */ W32((u32)(r_ebx+r_edx*4+0x20cu), 0x0u);
    /* 006f33ea: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f33ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f33ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f33ef: ret  */ FN_RET(0x006f316c); r_esp += 4; return;
}

void f_006f33f0(void) /* sub_6F33F0 */
{
    FN_ENTER(0x006f33f0);
    /* 006f33f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f33f1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f33f4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f33f6: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f33f9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x6f33feu); f_0082e900();
    /* 006f33fe: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006f3402: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f3405: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x6f340au); f_0082e900();
    /* 006f340a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f340d: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f3410: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x6f3415u); f_0082e900();
    /* 006f3415: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f3419: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 006f341c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f341e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f341f: jbe 0x6f343d */ if ((fC||fZ)) goto L_006f343d;
L_006f3421:; BB(0x006f3421);
    /* 006f3421: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f3425: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006f3427: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f3429: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f342a: jbe 0x6f3433 */ if ((fC||fZ)) goto L_006f3433;
L_006f342c:; BB(0x006f342c);
    /* 006f342c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f342e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f3431: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f3432: ret  */ FN_RET(0x006f33f0); r_esp += 4; return;
L_006f3433:; BB(0x006f3433);
    /* 006f3433: mov eax, 2 */ r_eax = 0x2u;
    /* 006f3438: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f343b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f343c: ret  */ FN_RET(0x006f33f0); r_esp += 4; return;
L_006f343d:; BB(0x006f343d);
    /* 006f343d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f3440: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006f3442: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f3444: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f3445: jbe 0x6f3433 */ if ((fC||fZ)) goto L_006f3433;
L_006f3447:; BB(0x006f3447);
    /* 006f3447: mov eax, 1 */ r_eax = 0x1u;
    /* 006f344c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f344f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f3450: ret  */ FN_RET(0x006f33f0); r_esp += 4; return;
}

void f_006f3454(void) /* sub_6F3454 */
{
    FN_ENTER(0x006f3454);
    /* 006f3454: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3455: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f3456: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f3459: mov edx, ecx */ r_edx = r_ecx;
    /* 006f345b: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 006f3461: fld dword ptr [0x96e0cc] */ FPUSH(R_F32((u32)(0x96e0ccu)));
    /* 006f3467: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 006f346d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f346f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006f3471: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f3473: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 006f3479: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 006f347f: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 006f3482: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f3484: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f3486: jle 0x6f357b */ if ((fZ||fS!=fO)) goto L_006f357b;
L_006f348c:; BB(0x006f348c);
    /* 006f348c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006f3490: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006f3494: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006f3498: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f349c: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 006f34a0: mov edi, edx */ r_edi = r_edx;
    /* 006f34a2: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006f34a5: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 006f34a9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f34ab: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006f34ae: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f34b0: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006f34b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f34b5: add ebx, dword ptr [esp + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f34b9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 006f34bc: lea esi, [esi + ecx + 0xd8] */ r_esi = (u32)(r_esi+r_ecx+0xd8u);
    /* 006f34c3: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f34c5: mov ebp, eax */ r_ebp = r_eax;
L_006f34c7:; BB(0x006f34c7);
    /* 006f34c7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006f34ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f34cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f34cd: mov edx, esi */ r_edx = r_esi;
    /* 006f34cf: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6f34d4u); f_00830aa0();
    /* 006f34d4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006f34d8: fld dword ptr [0x96e0c8] */ FPUSH(R_F32((u32)(0x96e0c8u)));
    /* 006f34de: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006f34e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f34e2: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f34e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f34e6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f34ea: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006f34ee: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f34f2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f34f5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f34f7: fchs  */ ST(0) = -ST(0);
    /* 006f34f9: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 006f34fd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006f3501: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f3503: ja 0x6f3507 */ if ((!fC&&!fZ)) goto L_006f3507;
L_006f3505:; BB(0x006f3505);
    /* 006f3505: fst st(4) */ ST(4) = ST(0);
L_006f3507:; BB(0x006f3507);
    /* 006f3507: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3509: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f350b: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 006f350f: fchs  */ ST(0) = -ST(0);
    /* 006f3511: fdivr dword ptr [0x96e0c4] */ ST(0) = R_F32((u32)(0x96e0c4u)) / ST(0);
    /* 006f3517: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 006f3519: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f351b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f351d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f351f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 006f3521: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3523: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 006f3527: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 006f3529: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f352d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006f352f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3531: fmul dword ptr [0x96e0c0] */ ST(0) = ST(0) * R_F32((u32)(0x96e0c0u));
    /* 006f3537: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3539: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 006f353d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f353f: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 006f3542: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 006f3545: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3547: fmul dword ptr [edi + 0x244] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x244u));
    /* 006f354d: fstp dword ptr [ecx + ebp*4] */ W_F32((u32)(r_ecx+r_ebp*4), ST(0)); FPOP();
    /* 006f3550: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f3553: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 006f3557: fstp dword ptr [ecx + ebp*4] */ W_F32((u32)(r_ecx+r_ebp*4), ST(0)); FPOP();
    /* 006f355a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006f355d: cmp ebp, dword ptr [edi + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3560: jl 0x6f34c7 */ if ((fS!=fO)) goto L_006f34c7;
L_006f3566:; BB(0x006f3566);
    /* 006f3566: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006f356a: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_006f356e:; BB(0x006f356e);
    /* 006f356e: mov eax, 1 */ r_eax = 0x1u;
    /* 006f3573: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f3576: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f3577: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f3578: ret 0xc */ FN_RET(0x006f3454); r_esp += 16; return;
L_006f357b:; BB(0x006f357b);
    /* 006f357b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006f357d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006f357f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006f3581: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3583: jmp 0x6f356e */ goto L_006f356e;
}

void f_006f3588(void) /* sub_6F3588 */
{
    FN_ENTER(0x006f3588);
    /* 006f3588: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3589: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f358a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f358b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f358c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f358f: fldz  */ FPUSH(0.0);
    /* 006f3591: mov esi, dword ptr [ecx + 0x24c] */ r_esi = R32((u32)(r_ecx+0x24cu));
    /* 006f3597: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 006f359b: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006f359f: fld dword ptr [0x96e0bc] */ FPUSH(R_F32((u32)(0x96e0bcu)));
    /* 006f35a5: fld dword ptr [0x96e0bc] */ FPUSH(R_F32((u32)(0x96e0bcu)));
    /* 006f35ab: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006f35ad: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 006f35b0: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 006f35b3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f35b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f35b8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006f35bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006f35c0: or esi, 0xffffff */ {  u32 a = r_esi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006f35c6: lea ebp, [eax + 0xc] */ r_ebp = (u32)(r_eax+0xcu);
    /* 006f35c9: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006f35cc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006f35ce: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 006f35d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f35d3: jle 0x6f3793 */ if ((fZ||fS!=fO)) goto L_006f3793;
L_006f35d9:; BB(0x006f35d9);
    /* 006f35d9: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 006f35db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f35dd: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006f35e1: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_006f35e5:; BB(0x006f35e5);
    /* 006f35e5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f35e8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f35ec: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 006f35ef: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 006f35f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f35f4: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 006f35f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f35fa: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 006f35fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3600: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 006f3602: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3604: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 006f3608: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f360a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006f360c: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 006f3610: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3612: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006f3614: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3616: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006f3618: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f361a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006f361c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f361e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3620: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f3622: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f3623: je 0x6f37a4 */ if (fZ) goto L_006f37a4;
L_006f3629:; BB(0x006f3629);
    /* 006f3629: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f362a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f362d: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x6f3632u); f_0082f9f8();
    /* 006f3632: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f3636: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f3638: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006f363c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006f363e: fld dword ptr [0x96e0b8] */ FPUSH(R_F32((u32)(0x96e0b8u)));
    /* 006f3644: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 006f3648: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 006f364c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f364f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f3653: fld dword ptr [eax + ebx*4] */ FPUSH(R_F32((u32)(r_eax+r_ebx*4)));
    /* 006f3656: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 006f3659: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006f365d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006f3661: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3663: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 006f3665: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 006f3667: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3669: fst dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0));
    /* 006f366c: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 006f366e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006f3672: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 006f3674: fst dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0));
    /* 006f3677: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f367a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f367c: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 006f367e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f3680: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 006f3683: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f3685: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3687: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 006f3689: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f368d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f368f: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006f3691: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006f3695: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f3697: fchs  */ ST(0) = -ST(0);
    /* 006f3699: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 006f369b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f369d: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 006f369f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f36a1: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f36a5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006f36a9: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f36ac: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 006f36af: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006f36b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f36b6: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006f36ba: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006f36be: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006f36c0: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006f36c3: fld dword ptr [0x96e0bc] */ FPUSH(R_F32((u32)(0x96e0bcu)));
    /* 006f36c9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f36cb: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 006f36cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f36cf: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 006f36d2: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 006f36d5: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006f36d8: mov dword ptr [edi + 0xc], 0 */ W32((u32)(r_edi+0xcu), 0x0u);
    /* 006f36df: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f36e2: mov dword ptr [edi + 0x24], 0x3f800000 */ W32((u32)(r_edi+0x24u), 0x3f800000u);
    /* 006f36e9: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 006f36ec: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006f36ef: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006f36f3: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f36f6: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006f36f9: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 006f36fc: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f36fe: jge 0x6f3707 */ if ((fS==fO)) goto L_006f3707;
L_006f3700:; BB(0x006f3700);
    /* 006f3700: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3702: jmp 0x6f35e5 */ goto L_006f35e5;
L_006f3707:; BB(0x006f3707);
    /* 006f3707: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f370b: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006f370f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006f3713: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3715: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f3717: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3719: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f371b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_006f371d:; BB(0x006f371d);
    /* 006f371d: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006f3721: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f3723: fmul dword ptr [edx + eax*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax*4+0xfffffffcu));
    /* 006f3727: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f3729: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 006f372d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f372f: fmul dword ptr [ecx + eax*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax*4+0xfffffffcu));
    /* 006f3733: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f3736: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f373a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f373c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f373e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006f3740: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 006f3743: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f3745: fst dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0));
    /* 006f3748: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f374a: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 006f374d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f374f: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 006f3752: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f3755: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3757: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 006f3759: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 006f375c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f375e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3760: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 006f3762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f3766: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3768: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 006f376a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f376c: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 006f376f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3771: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006f3774: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006f3778: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f377b: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 006f377e: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 006f3781: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006f3784: mov eax, 1 */ r_eax = 0x1u;
    /* 006f3789: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f378c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f378d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f378e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f378f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f3790: ret 0x10 */ FN_RET(0x006f3588); r_esp += 20; return;
L_006f3793:; BB(0x006f3793);
    /* 006f3793: fld dword ptr [0x96e0b8] */ FPUSH(R_F32((u32)(0x96e0b8u)));
    /* 006f3799: fld dword ptr [0x96e0bc] */ FPUSH(R_F32((u32)(0x96e0bcu)));
    /* 006f379f: jmp 0x6f371d */ goto L_006f371d;
L_006f37a4:; BB(0x006f37a4);
    /* 006f37a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f37a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f37a8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f37ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f37ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f37ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f37ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f37af: ret 0x10 */ FN_RET(0x006f3588); r_esp += 20; return;
}

void f_006f37b4(void) /* sub_6F37B4 */
{
    FN_ENTER(0x006f37b4);
    /* 006f37b4: mov dword ptr [0xa968f4], 0 */ W32((u32)(0xa968f4u), 0x0u);
    /* 006f37be: ret  */ FN_RET(0x006f37b4); r_esp += 4; return;
}

void f_006f37c0(void) /* sub_6F37C0 */
{
    FN_ENTER(0x006f37c0);
    /* 006f37c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f37c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006f37c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f37c5: push 0x8efe14 */ { u32 v = 0x8efe14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f37ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f37d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f37d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f37d8: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f37db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f37de: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 006f37e1: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 006f37e4: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 006f37e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006f37ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f37ed: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006f37f0: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 006f37f3: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006f37f6: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 006f37f9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006f37fc: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006f37ff: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006f3802: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006f3805: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f380au); f_008193cc();
    /* 006f380a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f3811: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f3814: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f3817: mov dword ptr [ecx], 0xb3e968 */ W32((u32)(r_ecx), 0xb3e968u);
    /* 006f381d: mov eax, dword ptr [0x9cfa44] */ r_eax = R32((u32)(0x9cfa44u));
    /* 006f3822: mov dword ptr [ecx + 0x244], 0x3f800000 */ W32((u32)(r_ecx+0x244u), 0x3f800000u);
    /* 006f382c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006f382f: mov dword ptr [ecx + 0x254], 0x8000000 */ W32((u32)(r_ecx+0x254u), 0x8000000u);
    /* 006f3839: mov dword ptr [ecx + 0x258], 0x14 */ W32((u32)(r_ecx+0x258u), 0x14u);
    /* 006f3843: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 006f3845: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006f3847: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f384a: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006f384d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f3850: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 006f3853: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 006f3856: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 006f3859: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006f385c: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 006f385f: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 006f3862: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f3865: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 006f3868: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006f386a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006f386c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006f386f: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 006f3872: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 006f3875: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006f3878: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f387b: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006f387e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 006f3881: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006f3884: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3887: mov dword ptr [ecx + 0x38], 0xd */ W32((u32)(r_ecx+0x38u), 0xdu);
    /* 006f388e: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006f3891: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006f3894: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006f3897: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f3899: mov dword ptr [ecx + 0x250], eax */ W32((u32)(r_ecx+0x250u), r_eax);
    /* 006f389f: mov word ptr [ecx + 0x25c], ax */ W16((u32)(r_ecx+0x25cu), (u16)r_eax);
    /* 006f38a6: mov eax, 0xd */ r_eax = 0xdu;
    /* 006f38ab: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006f38ad:; BB(0x006f38ad);
    /* 006f38ad: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 006f38b0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 006f38b3: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006f38b6: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 006f38b9: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 006f38bc: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 006f38be: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f38c3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f38c6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f38c9: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f38cc: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 006f38ce: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006f38d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f38d3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006f38d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f38d7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006f38d9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f38db: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 006f38de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f38e0: fadd dword ptr [ebp - 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f38e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f38e5: fadd dword ptr [ebp - 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd0u));
    /* 006f38e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f38ea: fadd dword ptr [ebp - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe4u));
    /* 006f38ed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f38ef: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f38f2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f38f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f38f6: fstp dword ptr [edx + ecx + 0x3c] */ W_F32((u32)(r_edx+r_ecx+0x3cu), ST(0)); FPOP();
    /* 006f38fa: fstp dword ptr [edx + ecx + 0x40] */ W_F32((u32)(r_edx+r_ecx+0x40u), ST(0)); FPOP();
    /* 006f38fe: fstp dword ptr [edx + ecx + 0x44] */ W_F32((u32)(r_edx+r_ecx+0x44u), ST(0)); FPOP();
    /* 006f3902: lea esi, [ecx + edx + 0x3c] */ r_esi = (u32)(r_ecx+r_edx+0x3cu);
    /* 006f3906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3907: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6f390cu); f_0050b510();
    /* 006f390c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f390f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f3912: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006f3915: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f3918: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f391a: jge 0x6f3924 */ if ((fS==fO)) goto L_006f3924;
L_006f391c:; BB(0x006f391c);
    /* 006f391c: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 006f391f: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006f3922: jmp 0x6f38ad */ goto L_006f38ad;
L_006f3924:; BB(0x006f3924);
    /* 006f3924: call 0x6f33f0 */ r_esp -= 4; W32(r_esp, 0x6f3929u); f_006f33f0();
    /* 006f3929: mov ebx, eax */ r_ebx = r_eax;
    /* 006f392b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f392e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f3931: lea edi, [edx + 0x174] */ r_edi = (u32)(r_edx+0x174u);
    /* 006f3937: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006f3939: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f393b: jle 0x6f3b11 */ if ((fZ||fS!=fO)) goto L_006f3b11;
L_006f3941:; BB(0x006f3941);
    /* 006f3941: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f3943: je 0x6f3a79 */ if (fZ) goto L_006f3a79;
L_006f3949:; BB(0x006f3949);
    /* 006f3949: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f394c: jne 0x6f39e1 */ if (!fZ) goto L_006f39e1;
L_006f3952:; BB(0x006f3952);
    /* 006f3952: fld dword ptr [0x96e0b4] */ FPUSH(R_F32((u32)(0x96e0b4u)));
    /* 006f3958: fdiv dword ptr [edx + 0x2c] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x2cu));
    /* 006f395b: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 006f395e: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 006f3961: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3963: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f3966: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f3969: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f396c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3971u); f_008587a5();
    /* 006f3971: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f3974: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f3977: fdiv dword ptr [0x96e0ac] */ ST(0) = ST(0) / R_F32((u32)(0x96e0acu));
    /* 006f397d: fadd dword ptr [0x96e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x96e0b0u));
    /* 006f3983: fmul dword ptr [0x96e0a8] */ ST(0) = ST(0) * R_F32((u32)(0x96e0a8u));
    /* 006f3989: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f398f: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3992: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3997u); f_008587a5();
    /* 006f3997: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 006f399a: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f399d: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006f39a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f39a1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f39a4: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f39a7: fdiv dword ptr [0x96e0ac] */ ST(0) = ST(0) / R_F32((u32)(0x96e0acu));
    /* 006f39ad: fadd dword ptr [0x96e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x96e0b0u));
    /* 006f39b3: fmul dword ptr [0x96e0a8] */ ST(0) = ST(0) * R_F32((u32)(0x96e0a8u));
    /* 006f39b9: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f39bf: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 006f39c1: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 006f39c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f39c6: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f39c9: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006f39cc: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f39d1u); f_00782868();
    /* 006f39d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f39d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f39d6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f39d9: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f39dc: jmp 0x6f3b03 */ goto L_006f3b03;
L_006f39e1:; BB(0x006f39e1);
    /* 006f39e1: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f39e4: jne 0x6f3b03 */ if (!fZ) goto L_006f3b03;
L_006f39ea:; BB(0x006f39ea);
    /* 006f39ea: fld dword ptr [0x96e0b4] */ FPUSH(R_F32((u32)(0x96e0b4u)));
    /* 006f39f0: fdiv dword ptr [edx + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x30u));
    /* 006f39f3: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 006f39f6: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 006f39f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f39fb: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f39fe: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f3a01: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f3a04: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3a09u); f_008587a5();
    /* 006f3a09: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f3a0c: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f3a0f: fdiv dword ptr [0x96e0ac] */ ST(0) = ST(0) / R_F32((u32)(0x96e0acu));
    /* 006f3a15: fadd dword ptr [0x96e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x96e0b0u));
    /* 006f3a1b: fmul dword ptr [0x96e0a8] */ ST(0) = ST(0) * R_F32((u32)(0x96e0a8u));
    /* 006f3a21: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3a27: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3a2a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3a2fu); f_008587a5();
    /* 006f3a2f: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 006f3a32: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 006f3a34: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 006f3a37: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f3a3a: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f3a3d: fdiv dword ptr [0x96e0ac] */ ST(0) = ST(0) / R_F32((u32)(0x96e0acu));
    /* 006f3a43: fadd dword ptr [0x96e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x96e0b0u));
    /* 006f3a49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3a4a: fmul dword ptr [0x96e0a8] */ ST(0) = ST(0) * R_F32((u32)(0x96e0a8u));
    /* 006f3a50: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3a56: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 006f3a59: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006f3a5c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3a5e: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f3a61: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 006f3a64: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f3a69u); f_00782868();
    /* 006f3a69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3a6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f3a6e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f3a71: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f3a74: jmp 0x6f3b03 */ goto L_006f3b03;
L_006f3a79:; BB(0x006f3a79);
    /* 006f3a79: fld dword ptr [0x96e0b4] */ FPUSH(R_F32((u32)(0x96e0b4u)));
    /* 006f3a7f: fdiv dword ptr [edx + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x28u));
    /* 006f3a82: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 006f3a85: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 006f3a88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3a8a: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f3a8d: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f3a90: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f3a93: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3a98u); f_008587a5();
    /* 006f3a98: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f3a9b: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f3a9e: fdiv dword ptr [0x96e0ac] */ ST(0) = ST(0) / R_F32((u32)(0x96e0acu));
    /* 006f3aa4: fadd dword ptr [0x96e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x96e0b0u));
    /* 006f3aaa: fmul dword ptr [0x96e0a8] */ ST(0) = ST(0) * R_F32((u32)(0x96e0a8u));
    /* 006f3ab0: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3ab6: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3ab9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3abeu); f_008587a5();
    /* 006f3abe: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 006f3ac1: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 006f3ac4: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 006f3ac7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3ac8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f3acb: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f3ace: fdiv dword ptr [0x96e0ac] */ ST(0) = ST(0) / R_F32((u32)(0x96e0acu));
    /* 006f3ad4: fadd dword ptr [0x96e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x96e0b0u));
    /* 006f3ada: fmul dword ptr [0x96e0a8] */ ST(0) = ST(0) * R_F32((u32)(0x96e0a8u));
    /* 006f3ae0: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3ae6: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f3ae9: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006f3aec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3aee: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f3af1: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 006f3af3: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f3af8u); f_00782868();
    /* 006f3af8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3afa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f3afd: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f3b00: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
L_006f3b03:; BB(0x006f3b03);
    /* 006f3b03: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f3b06: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f3b09: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3b0b: jl 0x6f3941 */ if ((fS!=fO)) goto L_006f3941;
L_006f3b11:; BB(0x006f3b11);
    /* 006f3b11: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006f3b16: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006f3b19: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3b1c: jle 0x6f3b58 */ if ((fZ||fS!=fO)) goto L_006f3b58;
L_006f3b1e:; BB(0x006f3b1e);
    /* 006f3b1e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3b23u); f_008587a5();
    /* 006f3b23: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f3b26: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006f3b29: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006f3b2c: fdiv dword ptr [0x96e0ac] */ ST(0) = ST(0) / R_F32((u32)(0x96e0acu));
    /* 006f3b32: fadd dword ptr [0x96e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x96e0b0u));
    /* 006f3b38: fmul dword ptr [0x96e0a8] */ ST(0) = ST(0) * R_F32((u32)(0x96e0a8u));
    /* 006f3b3e: fmul dword ptr [0x96e0e0] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e0u));
    /* 006f3b44: fstp dword ptr [edx + ebx*4 + 0x210] */ W_F32((u32)(r_edx+r_ebx*4+0x210u), ST(0)); FPOP();
    /* 006f3b4b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f3b4e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f3b51: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006f3b54: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3b56: jl 0x6f3b1e */ if ((fS!=fO)) goto L_006f3b1e;
L_006f3b58:; BB(0x006f3b58);
    /* 006f3b58: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 006f3b5b: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 006f3b5e: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006f3b61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f3b63: mov dword ptr [edx + 0x210], 0 */ W32((u32)(r_edx+0x210u), 0x0u);
    /* 006f3b6d: mov dword ptr [edx + eax*4 + 0x20c], 0 */ W32((u32)(r_edx+r_eax*4+0x20cu), 0x0u);
    /* 006f3b78: mov dword ptr [edx + 0x24c], 0xff000000 */ W32((u32)(r_edx+0x24cu), 0xff000000u);
    /* 006f3b82: mov dword ptr [edx + 0x248], ecx */ W32((u32)(r_edx+0x248u), r_ecx);
    /* 006f3b88: mov word ptr [edx + 0x25e], cx */ W16((u32)(r_edx+0x25eu), (u16)r_ecx);
    /* 006f3b8f: mov eax, edx */ r_eax = r_edx;
    /* 006f3b91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f3b94: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f3b9b: mov esp, ebp */ r_esp = r_ebp;
    /* 006f3b9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f3b9e: ret 0x10 */ FN_RET(0x006f37c0); r_esp += 20; return;
}

void f_006f3ba4(void) /* sub_6F3BA4 */
{
    FN_ENTER(0x006f3ba4);
    /* 006f3ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f3ba5: mov ebp, esp */ r_ebp = r_esp;
    /* 006f3ba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f3ba9: push 0x8efe30 */ { u32 v = 0x8efe30u; r_esp -= 4; W32(r_esp, v); }
    /* 006f3bae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f3bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f3bb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f3bbc: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f3bbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f3bc2: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 006f3bc5: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 006f3bc8: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 006f3bcb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006f3bce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f3bd1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006f3bd4: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 006f3bd7: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006f3bda: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 006f3bdd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006f3be0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006f3be3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006f3be6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006f3be9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006f3bec: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006f3bef: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006f3bf2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006f3bf5: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006f3bf8: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006f3bfb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f3c00u); f_008193cc();
    /* 006f3c00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f3c07: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006f3c0a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006f3c0d: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006f3c10: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 006f3c13: mov dword ptr [ecx + 0x244], edx */ W32((u32)(r_ecx+0x244u), r_edx);
    /* 006f3c19: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f3c1c: mov dword ptr [ecx], 0xb3e968 */ W32((u32)(r_ecx), 0xb3e968u);
    /* 006f3c22: mov eax, dword ptr [0x9cfa44] */ r_eax = R32((u32)(0x9cfa44u));
    /* 006f3c27: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006f3c2a: mov dword ptr [ecx + 0x254], ebx */ W32((u32)(r_ecx+0x254u), r_ebx);
    /* 006f3c30: mov dword ptr [ecx + 0x258], esi */ W32((u32)(r_ecx+0x258u), r_esi);
    /* 006f3c36: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006f3c38: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 006f3c3a: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3c3d: mov dword ptr [ecx + 0x1c], edi */ W32((u32)(r_ecx+0x1cu), r_edi);
    /* 006f3c40: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 006f3c43: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006f3c46: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 006f3c49: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 006f3c4c: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 006f3c4f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006f3c52: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f3c55: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f3c58: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006f3c5b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006f3c5d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006f3c5f: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f3c62: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 006f3c65: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 006f3c68: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006f3c6b: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006f3c6e: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006f3c71: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 006f3c74: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006f3c77: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f3c7a: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006f3c7d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006f3c80: mov dword ptr [ecx + 0x38], 0xd */ W32((u32)(r_ecx+0x38u), 0xdu);
    /* 006f3c87: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006f3c8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f3c8c: mov dword ptr [ecx + 0x250], eax */ W32((u32)(r_ecx+0x250u), r_eax);
    /* 006f3c92: mov word ptr [ecx + 0x25c], ax */ W16((u32)(r_ecx+0x25cu), (u16)r_eax);
    /* 006f3c99: mov eax, 0xd */ r_eax = 0xdu;
    /* 006f3c9e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006f3ca0:; BB(0x006f3ca0);
    /* 006f3ca0: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 006f3ca3: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 006f3ca6: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 006f3ca9: mov dword ptr [ebp - 0x60], ebx */ W32((u32)(r_ebp+0xffffffa0u), r_ebx);
    /* 006f3cac: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 006f3caf: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 006f3cb1: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f3cb6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f3cb9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3cbc: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3cbf: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 006f3cc1: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006f3cc4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3cc6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006f3cc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3cca: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006f3ccc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3cce: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f3cd1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3cd3: fadd dword ptr [ebp - 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd8u));
    /* 006f3cd6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3cd8: fadd dword ptr [ebp - 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd0u));
    /* 006f3cdb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3cdd: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006f3ce0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f3ce2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f3ce5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f3ce7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f3ce9: fstp dword ptr [edx + ecx + 0x3c] */ W_F32((u32)(r_edx+r_ecx+0x3cu), ST(0)); FPOP();
    /* 006f3ced: fstp dword ptr [edx + ecx + 0x40] */ W_F32((u32)(r_edx+r_ecx+0x40u), ST(0)); FPOP();
    /* 006f3cf1: fstp dword ptr [edx + ecx + 0x44] */ W_F32((u32)(r_edx+r_ecx+0x44u), ST(0)); FPOP();
    /* 006f3cf5: lea esi, [ecx + edx + 0x3c] */ r_esi = (u32)(r_ecx+r_edx+0x3cu);
    /* 006f3cf9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3cfa: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6f3cffu); f_0050b510();
    /* 006f3cff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f3d02: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006f3d05: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006f3d08: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f3d0b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3d0d: jge 0x6f3d17 */ if ((fS==fO)) goto L_006f3d17;
L_006f3d0f:; BB(0x006f3d0f);
    /* 006f3d0f: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 006f3d12: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006f3d15: jmp 0x6f3ca0 */ goto L_006f3ca0;
L_006f3d17:; BB(0x006f3d17);
    /* 006f3d17: call 0x6f33f0 */ r_esp -= 4; W32(r_esp, 0x6f3d1cu); f_006f33f0();
    /* 006f3d1c: mov ebx, eax */ r_ebx = r_eax;
    /* 006f3d1e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006f3d21: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f3d24: lea edi, [edx + 0x174] */ r_edi = (u32)(r_edx+0x174u);
    /* 006f3d2a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006f3d2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f3d2e: jle 0x6f3f04 */ if ((fZ||fS!=fO)) goto L_006f3f04;
L_006f3d34:; BB(0x006f3d34);
    /* 006f3d34: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f3d36: je 0x6f3e6c */ if (fZ) goto L_006f3e6c;
L_006f3d3c:; BB(0x006f3d3c);
    /* 006f3d3c: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f3d3f: jne 0x6f3dd4 */ if (!fZ) goto L_006f3dd4;
L_006f3d45:; BB(0x006f3d45);
    /* 006f3d45: fld dword ptr [0x96e09c] */ FPUSH(R_F32((u32)(0x96e09cu)));
    /* 006f3d4b: fdiv dword ptr [edx + 0x2c] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x2cu));
    /* 006f3d4e: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 006f3d51: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 006f3d54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3d56: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f3d59: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f3d5c: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f3d5f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3d64u); f_008587a5();
    /* 006f3d64: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3d67: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3d6a: fdiv dword ptr [0x96e094] */ ST(0) = ST(0) / R_F32((u32)(0x96e094u));
    /* 006f3d70: fadd dword ptr [0x96e098] */ ST(0) = ST(0) + R_F32((u32)(0x96e098u));
    /* 006f3d76: fmul dword ptr [0x96e090] */ ST(0) = ST(0) * R_F32((u32)(0x96e090u));
    /* 006f3d7c: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3d82: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3d85: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3d8au); f_008587a5();
    /* 006f3d8a: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 006f3d8d: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f3d90: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006f3d93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3d94: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3d97: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3d9a: fdiv dword ptr [0x96e094] */ ST(0) = ST(0) / R_F32((u32)(0x96e094u));
    /* 006f3da0: fadd dword ptr [0x96e098] */ ST(0) = ST(0) + R_F32((u32)(0x96e098u));
    /* 006f3da6: fmul dword ptr [0x96e090] */ ST(0) = ST(0) * R_F32((u32)(0x96e090u));
    /* 006f3dac: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3db2: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 006f3db4: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 006f3db7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3db9: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f3dbc: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006f3dbf: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f3dc4u); f_00782868();
    /* 006f3dc4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3dc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f3dc9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006f3dcc: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f3dcf: jmp 0x6f3ef6 */ goto L_006f3ef6;
L_006f3dd4:; BB(0x006f3dd4);
    /* 006f3dd4: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f3dd7: jne 0x6f3ef6 */ if (!fZ) goto L_006f3ef6;
L_006f3ddd:; BB(0x006f3ddd);
    /* 006f3ddd: fld dword ptr [0x96e09c] */ FPUSH(R_F32((u32)(0x96e09cu)));
    /* 006f3de3: fdiv dword ptr [edx + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x30u));
    /* 006f3de6: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 006f3de9: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 006f3dec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3dee: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f3df1: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f3df4: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f3df7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3dfcu); f_008587a5();
    /* 006f3dfc: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3dff: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3e02: fdiv dword ptr [0x96e094] */ ST(0) = ST(0) / R_F32((u32)(0x96e094u));
    /* 006f3e08: fadd dword ptr [0x96e098] */ ST(0) = ST(0) + R_F32((u32)(0x96e098u));
    /* 006f3e0e: fmul dword ptr [0x96e090] */ ST(0) = ST(0) * R_F32((u32)(0x96e090u));
    /* 006f3e14: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3e1a: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3e1d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3e22u); f_008587a5();
    /* 006f3e22: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 006f3e25: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 006f3e27: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006f3e2a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3e2d: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3e30: fdiv dword ptr [0x96e094] */ ST(0) = ST(0) / R_F32((u32)(0x96e094u));
    /* 006f3e36: fadd dword ptr [0x96e098] */ ST(0) = ST(0) + R_F32((u32)(0x96e098u));
    /* 006f3e3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3e3d: fmul dword ptr [0x96e090] */ ST(0) = ST(0) * R_F32((u32)(0x96e090u));
    /* 006f3e43: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3e49: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 006f3e4c: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 006f3e4f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3e51: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f3e54: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 006f3e57: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f3e5cu); f_00782868();
    /* 006f3e5c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3e5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f3e61: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006f3e64: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f3e67: jmp 0x6f3ef6 */ goto L_006f3ef6;
L_006f3e6c:; BB(0x006f3e6c);
    /* 006f3e6c: fld dword ptr [0x96e09c] */ FPUSH(R_F32((u32)(0x96e09cu)));
    /* 006f3e72: fdiv dword ptr [edx + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x28u));
    /* 006f3e75: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 006f3e78: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 006f3e7b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f3e7d: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006f3e80: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006f3e83: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006f3e86: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3e8bu); f_008587a5();
    /* 006f3e8b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3e8e: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3e91: fdiv dword ptr [0x96e094] */ ST(0) = ST(0) / R_F32((u32)(0x96e094u));
    /* 006f3e97: fadd dword ptr [0x96e098] */ ST(0) = ST(0) + R_F32((u32)(0x96e098u));
    /* 006f3e9d: fmul dword ptr [0x96e090] */ ST(0) = ST(0) * R_F32((u32)(0x96e090u));
    /* 006f3ea3: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3ea9: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f3eac: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3eb1u); f_008587a5();
    /* 006f3eb1: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 006f3eb4: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 006f3eb7: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006f3eba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f3ebb: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3ebe: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3ec1: fdiv dword ptr [0x96e094] */ ST(0) = ST(0) / R_F32((u32)(0x96e094u));
    /* 006f3ec7: fadd dword ptr [0x96e098] */ ST(0) = ST(0) + R_F32((u32)(0x96e098u));
    /* 006f3ecd: fmul dword ptr [0x96e090] */ ST(0) = ST(0) * R_F32((u32)(0x96e090u));
    /* 006f3ed3: fmul dword ptr [0x96e0e4] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e4u));
    /* 006f3ed9: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f3edc: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 006f3edf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f3ee1: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 006f3ee4: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 006f3ee6: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6f3eebu); f_00782868();
    /* 006f3eeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f3eed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f3ef0: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006f3ef3: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
L_006f3ef6:; BB(0x006f3ef6);
    /* 006f3ef6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f3ef9: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f3efc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3efe: jl 0x6f3d34 */ if ((fS!=fO)) goto L_006f3d34;
L_006f3f04:; BB(0x006f3f04);
    /* 006f3f04: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006f3f09: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006f3f0c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3f0f: jle 0x6f3f4b */ if ((fZ||fS!=fO)) goto L_006f3f4b;
L_006f3f11:; BB(0x006f3f11);
    /* 006f3f11: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f3f16u); f_008587a5();
    /* 006f3f16: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006f3f19: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f3f1c: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006f3f1f: fdiv dword ptr [0x96e094] */ ST(0) = ST(0) / R_F32((u32)(0x96e094u));
    /* 006f3f25: fadd dword ptr [0x96e098] */ ST(0) = ST(0) + R_F32((u32)(0x96e098u));
    /* 006f3f2b: fmul dword ptr [0x96e090] */ ST(0) = ST(0) * R_F32((u32)(0x96e090u));
    /* 006f3f31: fmul dword ptr [0x96e0e0] */ ST(0) = ST(0) * R_F32((u32)(0x96e0e0u));
    /* 006f3f37: fstp dword ptr [edx + ebx*4 + 0x210] */ W_F32((u32)(r_edx+r_ebx*4+0x210u), ST(0)); FPOP();
    /* 006f3f3e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f3f41: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006f3f44: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006f3f47: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f3f49: jl 0x6f3f11 */ if ((fS!=fO)) goto L_006f3f11;
L_006f3f4b:; BB(0x006f3f4b);
    /* 006f3f4b: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 006f3f4e: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 006f3f51: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006f3f54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f3f56: mov dword ptr [edx + 0x210], 0 */ W32((u32)(r_edx+0x210u), 0x0u);
    /* 006f3f60: mov dword ptr [edx + eax*4 + 0x20c], 0 */ W32((u32)(r_edx+r_eax*4+0x20cu), 0x0u);
    /* 006f3f6b: mov dword ptr [edx + 0x24c], 0xff000000 */ W32((u32)(r_edx+0x24cu), 0xff000000u);
    /* 006f3f75: mov dword ptr [edx + 0x248], ecx */ W32((u32)(r_edx+0x248u), r_ecx);
    /* 006f3f7b: mov word ptr [edx + 0x25e], cx */ W16((u32)(r_edx+0x25eu), (u16)r_ecx);
    /* 006f3f82: mov eax, edx */ r_eax = r_edx;
    /* 006f3f84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f3f87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f3f8e: mov esp, ebp */ r_esp = r_ebp;
    /* 006f3f90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f3f91: ret 0x1c */ FN_RET(0x006f3ba4); r_esp += 32; return;
}

void f_006f3f94(void) /* sub_6F3F94 */
{
    FN_ENTER(0x006f3f94);
    /* 006f3f94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f3f95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f3f97: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f3f9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f3f9d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f3fa2u); f_008193cc();
    /* 006f3fa2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006f3fa6: mov dword ptr [ebx], 0xb3e968 */ W32((u32)(r_ebx), 0xb3e968u);
    /* 006f3fac: mov edx, dword ptr [0x9cfa44] */ r_edx = R32((u32)(0x9cfa44u));
    /* 006f3fb2: mov dword ptr [ebx + 0x38], 0xd */ W32((u32)(r_ebx+0x38u), 0xdu);
    /* 006f3fb9: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006f3fbc: mov dword ptr [ebx + 0x244], eax */ W32((u32)(r_ebx+0x244u), r_eax);
    /* 006f3fc2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006f3fc6: mov dword ptr [ebx + 0x24c], 0xff000000 */ W32((u32)(r_ebx+0x24cu), 0xff000000u);
    /* 006f3fd0: mov dword ptr [ebx + 0x254], eax */ W32((u32)(r_ebx+0x254u), r_eax);
    /* 006f3fd6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006f3fda: mov dword ptr [ebx + 0x258], eax */ W32((u32)(r_ebx+0x258u), r_eax);
    /* 006f3fe0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f3fe2: mov dword ptr [ebx + 0x250], eax */ W32((u32)(r_ebx+0x250u), r_eax);
    /* 006f3fe8: mov word ptr [ebx + 0x25c], ax */ W16((u32)(r_ebx+0x25cu), (u16)r_eax);
    /* 006f3fef: mov dword ptr [ebx + 0x248], eax */ W32((u32)(r_ebx+0x248u), r_eax);
    /* 006f3ff5: mov word ptr [ebx + 0x25e], ax */ W16((u32)(r_ebx+0x25eu), (u16)r_eax);
    /* 006f3ffc: mov eax, ebx */ r_eax = r_ebx;
    /* 006f3ffe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f3fff: ret 0x10 */ FN_RET(0x006f3f94); r_esp += 20; return;
}

