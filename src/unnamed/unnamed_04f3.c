#include "protos.h"

void f_004f31f4(void) /* sub_4F31F4 */
{
    FN_ENTER(0x004f31f4);
    /* 004f31f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f31f5: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f31f8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f31fa: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 004f31fd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f31ff: movzx eax, byte ptr [0xa72398] */ r_eax = (u32)R8((u32)(0xa72398u));
    /* 004f3206: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f320a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f320c: jne 0x4f327c */ if (!fZ) goto L_004f327c;
L_004f320e:; BB(0x004f320e);
    /* 004f320e: mov dword ptr [0xa724e4], 0x43750000 */ W32((u32)(0xa724e4u), 0x43750000u);
    /* 004f3218: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f321d: mov byte ptr [0xa72398], al */ W8((u32)(0xa72398u), (u8)r_eax);
    /* 004f3222: mov dword ptr [0xa724e8], 0x43250000 */ W32((u32)(0xa724e8u), 0x43250000u);
    /* 004f322c: mov dword ptr [0xa724ec], 0x43c58000 */ W32((u32)(0xa724ecu), 0x43c58000u);
    /* 004f3236: mov dword ptr [0xa724f0], 0x43250000 */ W32((u32)(0xa724f0u), 0x43250000u);
    /* 004f3240: mov dword ptr [0xa724f4], 0x43c58000 */ W32((u32)(0xa724f4u), 0x43c58000u);
    /* 004f324a: mov dword ptr [0xa724f8], 0x439d8000 */ W32((u32)(0xa724f8u), 0x439d8000u);
    /* 004f3254: mov dword ptr [0xa724fc], 0x43750000 */ W32((u32)(0xa724fcu), 0x43750000u);
    /* 004f325e: mov dword ptr [0xa72500], 0x439d8000 */ W32((u32)(0xa72500u), 0x439d8000u);
    /* 004f3268: mov dword ptr [0xa72504], 0x43750000 */ W32((u32)(0xa72504u), 0x43750000u);
    /* 004f3272: mov dword ptr [0xa72508], 0x43250000 */ W32((u32)(0xa72508u), 0x43250000u);
L_004f327c:; BB(0x004f327c);
    /* 004f327c: fld dword ptr [0x91df24] */ FPUSH(R_F32((u32)(0x91df24u)));
    /* 004f3282: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004f3286: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004f328a: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004f328f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3294: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004f3298: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004f329c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f32a0: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004f32a4: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004f32a8: mov dword ptr [esp], 0xa724e4 */ W32((u32)(r_esp), 0xa724e4u);
    /* 004f32af: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f32b2: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004f32ba: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f32c0: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f32c4: mov dword ptr [esp + 0xc], 5 */ W32((u32)(r_esp+0xcu), 0x5u);
    /* 004f32cc: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004f32d0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004f32d4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004f32d8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004f32dc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004f32e0: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004f32e4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004f32e7: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 004f32e9: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f32ee: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f32f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f32f1: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x4f32f6u); f_0082b558();
    /* 004f32f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f32f9: movzx eax, byte ptr [0xa72398] */ r_eax = (u32)R8((u32)(0xa72398u));
    /* 004f3300: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3302: jne 0x4f3320 */ if (!fZ) goto L_004f3320;
L_004f3304:; BB(0x004f3304);
    /* 004f3304: fld dword ptr [0x91df1c] */ FPUSH(R_F32((u32)(0x91df1cu)));
    /* 004f330a: mov dword ptr [0xa7250c], 0x41700000 */ W32((u32)(0xa7250cu), 0x41700000u);
    /* 004f3314: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3319: mov byte ptr [0xa72398], al */ W8((u32)(0xa72398u), (u8)r_eax);
    /* 004f331e: jmp 0x4f3326 */ goto L_004f3326;
L_004f3320:; BB(0x004f3320);
    /* 004f3320: fld dword ptr [0xa7250c] */ FPUSH(R_F32((u32)(0xa7250cu)));
L_004f3326:; BB(0x004f3326);
    /* 004f3326: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f332a: fmul dword ptr [0x91df18] */ ST(0) = ST(0) * R_F32((u32)(0x91df18u));
    /* 004f3330: fld dword ptr [0x91df14] */ FPUSH(R_F32((u32)(0x91df14u)));
    /* 004f3336: fld dword ptr [0x91df10] */ FPUSH(R_F32((u32)(0x91df10u)));
    /* 004f333c: fld dword ptr [0x91defc] */ FPUSH(R_F32((u32)(0x91defcu)));
    /* 004f3342: fld dword ptr [0x91df30] */ FPUSH(R_F32((u32)(0x91df30u)));
    /* 004f3348: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f334a: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004f334e: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004f3353: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3358: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004f335c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004f3360: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f3364: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004f3368: fld dword ptr [0x91defc] */ FPUSH(R_F32((u32)(0x91defcu)));
    /* 004f336e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f3370: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 004f3372: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004f3374: fadd dword ptr [0x91df28] */ ST(0) = ST(0) + R_F32((u32)(0x91df28u));
    /* 004f337a: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004f337e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004f3381: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 004f3384: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 004f3387: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 004f3389: fst dword ptr [0xa7252c] */ W_F32((u32)(0xa7252cu), ST(0));
    /* 004f338f: fstp dword ptr [0xa72524] */ W_F32((u32)(0xa72524u), ST(0)); FPOP();
    /* 004f3395: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3397: fst dword ptr [0xa7253c] */ W_F32((u32)(0xa7253cu), ST(0));
    /* 004f339d: fstp dword ptr [0xa72534] */ W_F32((u32)(0xa72534u), ST(0)); FPOP();
    /* 004f33a3: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 004f33a5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f33a7: fmul dword ptr [0x91df08] */ ST(0) = ST(0) * R_F32((u32)(0x91df08u));
    /* 004f33ad: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f33af: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 004f33b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33b3: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004f33b5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f33b7: fmul dword ptr [0x91df00] */ ST(0) = ST(0) * R_F32((u32)(0x91df00u));
    /* 004f33bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33bf: fadd dword ptr [0x91df0c] */ ST(0) = ST(0) + R_F32((u32)(0x91df0cu));
    /* 004f33c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33c7: fadd dword ptr [0x91df04] */ ST(0) = ST(0) + R_F32((u32)(0x91df04u));
    /* 004f33cd: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f33d1: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 004f33d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33d5: fst dword ptr [0xa72520] */ W_F32((u32)(0xa72520u), ST(0));
    /* 004f33db: fstp dword ptr [0xa72538] */ W_F32((u32)(0xa72538u), ST(0)); FPOP();
    /* 004f33e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f33e3: fst dword ptr [0xa72528] */ W_F32((u32)(0xa72528u), ST(0));
    /* 004f33e9: fstp dword ptr [0xa72530] */ W_F32((u32)(0xa72530u), ST(0)); FPOP();
    /* 004f33ef: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f33f1: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f33f4: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f33fa: mov dword ptr [0xa7251c], edx */ W32((u32)(0xa7251cu), r_edx);
    /* 004f3400: mov dword ptr [0xa72518], edx */ W32((u32)(0xa72518u), r_edx);
    /* 004f3406: mov dword ptr [0xa72514], edx */ W32((u32)(0xa72514u), r_edx);
    /* 004f340c: mov dword ptr [0xa72510], edx */ W32((u32)(0xa72510u), r_edx);
    /* 004f3412: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3417: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3419: push 0x9b90c4 */ { u32 v = 0x9b90c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f341e: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4f3423u); f_0082b5d8();
    /* 004f3423: fld dword ptr [0x91defc] */ FPUSH(R_F32((u32)(0x91defcu)));
    /* 004f3429: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f342d: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f3431: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3433: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004f3435: fld dword ptr [0xa7250c] */ FPUSH(R_F32((u32)(0xa7250cu)));
    /* 004f343b: fld dword ptr [0x91df34] */ FPUSH(R_F32((u32)(0x91df34u)));
    /* 004f3441: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f3443: fst dword ptr [0xa7252c] */ W_F32((u32)(0xa7252cu), ST(0));
    /* 004f3449: fstp dword ptr [0xa72534] */ W_F32((u32)(0xa72534u), ST(0)); FPOP();
    /* 004f344f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f3451: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004f3453: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3455: fst dword ptr [0xa72524] */ W_F32((u32)(0xa72524u), ST(0));
    /* 004f345b: fstp dword ptr [0xa7253c] */ W_F32((u32)(0xa7253cu), ST(0)); FPOP();
    /* 004f3461: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f3463: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3465: fadd dword ptr [0x91df2c] */ ST(0) = ST(0) + R_F32((u32)(0x91df2cu));
    /* 004f346b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f346d: fst dword ptr [0xa72528] */ W_F32((u32)(0xa72528u), ST(0));
    /* 004f3473: fstp dword ptr [0xa72520] */ W_F32((u32)(0xa72520u), ST(0)); FPOP();
    /* 004f3479: fst dword ptr [0xa72538] */ W_F32((u32)(0xa72538u), ST(0));
    /* 004f347f: fstp dword ptr [0xa72530] */ W_F32((u32)(0xa72530u), ST(0)); FPOP();
    /* 004f3485: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3487: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f348c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f348e: push 0x9b90c4 */ { u32 v = 0x9b90c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3493: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4f3498u); f_0082b5d8();
    /* 004f3498: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f349b: call 0x4ea030 */ r_esp -= 4; W32(r_esp, 0x4f34a0u); f_004ea030();
    /* 004f34a0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f34a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f34a4: ret  */ FN_RET(0x004f31f4); r_esp += 4; return;
}

void f_004f32c7(void)
{
    FN_ENTER(0x004f32c7);
    /* 004f32c7: or al, 5 */ {  u32 a = (u8)r_eax; u32 b = 0x5u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f32c9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f32cb: add byte ptr [ecx - 0x76fbdbbc], cl */ { u32 ad = (u32)(r_ecx+0x89042444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f32d1: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 004f32d2: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f32d4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004f32d8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004f32dc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004f32e0: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004f32e4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004f32e7: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 004f32e9: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f32ee: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f32f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f32f1: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x4f32f6u); f_0082b558();
    /* 004f32f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f32f9: movzx eax, byte ptr [0xa72398] */ r_eax = (u32)R8((u32)(0xa72398u));
    /* 004f3300: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3302: jne 0x4f3320 */ if (!fZ) goto L_004f3320;
L_004f3304:; BB(0x004f3304);
    /* 004f3304: fld dword ptr [0x91df1c] */ FPUSH(R_F32((u32)(0x91df1cu)));
    /* 004f330a: mov dword ptr [0xa7250c], 0x41700000 */ W32((u32)(0xa7250cu), 0x41700000u);
    /* 004f3314: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3319: mov byte ptr [0xa72398], al */ W8((u32)(0xa72398u), (u8)r_eax);
    /* 004f331e: jmp 0x4f3326 */ goto L_004f3326;
L_004f3320:; BB(0x004f3320);
    /* 004f3320: fld dword ptr [0xa7250c] */ FPUSH(R_F32((u32)(0xa7250cu)));
L_004f3326:; BB(0x004f3326);
    /* 004f3326: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f332a: fmul dword ptr [0x91df18] */ ST(0) = ST(0) * R_F32((u32)(0x91df18u));
    /* 004f3330: fld dword ptr [0x91df14] */ FPUSH(R_F32((u32)(0x91df14u)));
    /* 004f3336: fld dword ptr [0x91df10] */ FPUSH(R_F32((u32)(0x91df10u)));
    /* 004f333c: fld dword ptr [0x91defc] */ FPUSH(R_F32((u32)(0x91defcu)));
    /* 004f3342: fld dword ptr [0x91df30] */ FPUSH(R_F32((u32)(0x91df30u)));
    /* 004f3348: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f334a: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004f334e: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004f3353: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3358: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004f335c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004f3360: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f3364: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004f3368: fld dword ptr [0x91defc] */ FPUSH(R_F32((u32)(0x91defcu)));
    /* 004f336e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f3370: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 004f3372: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004f3374: fadd dword ptr [0x91df28] */ ST(0) = ST(0) + R_F32((u32)(0x91df28u));
    /* 004f337a: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004f337e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004f3381: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 004f3384: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 004f3387: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 004f3389: fst dword ptr [0xa7252c] */ W_F32((u32)(0xa7252cu), ST(0));
    /* 004f338f: fstp dword ptr [0xa72524] */ W_F32((u32)(0xa72524u), ST(0)); FPOP();
    /* 004f3395: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3397: fst dword ptr [0xa7253c] */ W_F32((u32)(0xa7253cu), ST(0));
    /* 004f339d: fstp dword ptr [0xa72534] */ W_F32((u32)(0xa72534u), ST(0)); FPOP();
    /* 004f33a3: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 004f33a5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f33a7: fmul dword ptr [0x91df08] */ ST(0) = ST(0) * R_F32((u32)(0x91df08u));
    /* 004f33ad: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f33af: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 004f33b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33b3: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004f33b5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f33b7: fmul dword ptr [0x91df00] */ ST(0) = ST(0) * R_F32((u32)(0x91df00u));
    /* 004f33bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33bf: fadd dword ptr [0x91df0c] */ ST(0) = ST(0) + R_F32((u32)(0x91df0cu));
    /* 004f33c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33c7: fadd dword ptr [0x91df04] */ ST(0) = ST(0) + R_F32((u32)(0x91df04u));
    /* 004f33cd: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f33d1: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 004f33d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f33d5: fst dword ptr [0xa72520] */ W_F32((u32)(0xa72520u), ST(0));
    /* 004f33db: fstp dword ptr [0xa72538] */ W_F32((u32)(0xa72538u), ST(0)); FPOP();
    /* 004f33e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f33e3: fst dword ptr [0xa72528] */ W_F32((u32)(0xa72528u), ST(0));
    /* 004f33e9: fstp dword ptr [0xa72530] */ W_F32((u32)(0xa72530u), ST(0)); FPOP();
    /* 004f33ef: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f33f1: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f33f4: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f33fa: mov dword ptr [0xa7251c], edx */ W32((u32)(0xa7251cu), r_edx);
    /* 004f3400: mov dword ptr [0xa72518], edx */ W32((u32)(0xa72518u), r_edx);
    /* 004f3406: mov dword ptr [0xa72514], edx */ W32((u32)(0xa72514u), r_edx);
    /* 004f340c: mov dword ptr [0xa72510], edx */ W32((u32)(0xa72510u), r_edx);
    /* 004f3412: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3417: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3419: push 0x9b90c4 */ { u32 v = 0x9b90c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f341e: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4f3423u); f_0082b5d8();
    /* 004f3423: fld dword ptr [0x91defc] */ FPUSH(R_F32((u32)(0x91defcu)));
    /* 004f3429: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f342d: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f3431: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3433: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004f3435: fld dword ptr [0xa7250c] */ FPUSH(R_F32((u32)(0xa7250cu)));
    /* 004f343b: fld dword ptr [0x91df34] */ FPUSH(R_F32((u32)(0x91df34u)));
    /* 004f3441: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f3443: fst dword ptr [0xa7252c] */ W_F32((u32)(0xa7252cu), ST(0));
    /* 004f3449: fstp dword ptr [0xa72534] */ W_F32((u32)(0xa72534u), ST(0)); FPOP();
    /* 004f344f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f3451: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004f3453: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3455: fst dword ptr [0xa72524] */ W_F32((u32)(0xa72524u), ST(0));
    /* 004f345b: fstp dword ptr [0xa7253c] */ W_F32((u32)(0xa7253cu), ST(0)); FPOP();
    /* 004f3461: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f3463: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3465: fadd dword ptr [0x91df2c] */ ST(0) = ST(0) + R_F32((u32)(0x91df2cu));
    /* 004f346b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f346d: fst dword ptr [0xa72528] */ W_F32((u32)(0xa72528u), ST(0));
    /* 004f3473: fstp dword ptr [0xa72520] */ W_F32((u32)(0xa72520u), ST(0)); FPOP();
    /* 004f3479: fst dword ptr [0xa72538] */ W_F32((u32)(0xa72538u), ST(0));
    /* 004f347f: fstp dword ptr [0xa72530] */ W_F32((u32)(0xa72530u), ST(0)); FPOP();
    /* 004f3485: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3487: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f348c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f348e: push 0x9b90c4 */ { u32 v = 0x9b90c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3493: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4f3498u); f_0082b5d8();
    /* 004f3498: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f349b: call 0x4ea030 */ r_esp -= 4; W32(r_esp, 0x4f34a0u); f_004ea030();
    /* 004f34a0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f34a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f34a4: ret  */ FN_RET(0x004f32c7); r_esp += 4; return;
}

void f_004f34a8(void) /* sub_4F34A8 */
{
    FN_ENTER(0x004f34a8);
    /* 004f34a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f34a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004f34ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f34ad: push 0x8d2ee4 */ { u32 v = 0x8d2ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f34b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f34b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f34b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f34c0: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f34c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f34c6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004f34c9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004f34cc: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004f34cf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004f34d2: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004f34d5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f34d8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f34db: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 004f34de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f34e0: jne 0x4f35d7 */ if (!fZ) goto L_004f35d7;
L_004f34e6:; BB(0x004f34e6);
    /* 004f34e6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f34e9: jg 0x4f34f9 */ if ((!fZ&&fS==fO)) goto L_004f34f9;
L_004f34eb:; BB(0x004f34eb);
    /* 004f34eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f34ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f34f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004f34f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f34f8: ret  */ FN_RET(0x004f34a8); r_esp += 4; return;
L_004f34f9:; BB(0x004f34f9);
    /* 004f34f9: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 004f3500: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3502: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f3507u); f_005caba4();
    /* 004f3507: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f350a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f350d: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004f3510: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3512: je 0x4f3760 */ if (fZ) goto L_004f3760;
L_004f3518:; BB(0x004f3518);
    /* 004f3518: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 004f351f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f3526: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f352bu); f_006dc358();
    /* 004f352b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f352e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f352f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f3532: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3534: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3536: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f3538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3539: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x4f353eu); f_0078eba4();
    /* 004f353e: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004f3545:; BB(0x004f3545);
    /* 004f3545: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f3548: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f354b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004f354e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f3555: mov eax, edx */ r_eax = r_edx;
    /* 004f3557: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f355a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004f355d: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3561: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x4f3566u); f_0078ed74();
    /* 004f3566: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004f356c: fld dword ptr [0x91de8c] */ FPUSH(R_F32((u32)(0x91de8cu)));
    /* 004f3572: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f3575: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f3578: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004f357a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f357c: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 004f357f: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 004f3582: mov dword ptr [ebp - 0x5c], 0x43140000 */ W32((u32)(r_ebp+0xffffffa4u), 0x43140000u);
    /* 004f3589: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 004f358c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f358d: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x4f3592u); f_0078ed84();
    /* 004f3592: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 004f3595: fmul dword ptr [0x91de84] */ ST(0) = ST(0) * R_F32((u32)(0x91de84u));
    /* 004f359b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f359e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f35a1: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 004f35a4: mov dword ptr [ebp - 0x5c], 0x42540000 */ W32((u32)(r_ebp+0xffffffa4u), 0x42540000u);
    /* 004f35ab: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 004f35ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f35af: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x4f35b4u); f_00779df0();
    /* 004f35b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f35b7: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004f35ba: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x4f35bfu); f_0078ee74();
    /* 004f35bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f35c2: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 004f35c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f35cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f35d3: mov esp, ebp */ r_esp = r_ebp;
    /* 004f35d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f35d6: ret  */ FN_RET(0x004f34a8); r_esp += 4; return;
L_004f35d7:; BB(0x004f35d7);
    /* 004f35d7: mov eax, ecx */ r_eax = r_ecx;
    /* 004f35d9: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004f35dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004f35de: jne 0x4f3623 */ if (!fZ) goto L_004f3623;
L_004f35e0:; BB(0x004f35e0);
    /* 004f35e0: fld dword ptr [0x91e12c] */ FPUSH(R_F32((u32)(0x91e12cu)));
    /* 004f35e6: mov edx, eax */ r_edx = r_eax;
    /* 004f35e8: fadd dword ptr [edx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x30u));
    /* 004f35eb: fcom dword ptr [0x91def8] */ fx_compare(ST(0), R_F32((u32)(0x91def8u))); 
    /* 004f35f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f35f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f35f4: jbe 0x4f35fd */ if ((fC||fZ)) goto L_004f35fd;
L_004f35f6:; BB(0x004f35f6);
    /* 004f35f6: mov eax, edx */ r_eax = r_edx;
    /* 004f35f8: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 004f35fb: jmp 0x4f3612 */ goto L_004f3612;
L_004f35fd:; BB(0x004f35fd);
    /* 004f35fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f35ff: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004f3603: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f3605: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004f3608: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f360e: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_004f3612:; BB(0x004f3612);
    /* 004f3612: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f3615: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f3618: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f361f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f3621: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3622: ret  */ FN_RET(0x004f34a8); r_esp += 4; return;
L_004f3623:; BB(0x004f3623);
    /* 004f3623: fld dword ptr [0x91e130] */ FPUSH(R_F32((u32)(0x91e130u)));
    /* 004f3629: mov edx, eax */ r_edx = r_eax;
    /* 004f362b: fadd dword ptr [edx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x30u));
    /* 004f362e: fcom dword ptr [0x91def4] */ fx_compare(ST(0), R_F32((u32)(0x91def4u))); 
    /* 004f3634: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f3636: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f3637: jbe 0x4f3645 */ if ((fC||fZ)) goto L_004f3645;
L_004f3639:; BB(0x004f3639);
    /* 004f3639: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f363b: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f3640: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004f3643: jmp 0x4f364a */ goto L_004f364a;
L_004f3645:; BB(0x004f3645);
    /* 004f3645: mov eax, edx */ r_eax = r_edx;
    /* 004f3647: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
L_004f364a:; BB(0x004f364a);
    /* 004f364a: mov eax, edx */ r_eax = r_edx;
    /* 004f364c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004f364f: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x4f3654u); f_0078ed14();
    /* 004f3654: mov ebx, eax */ r_ebx = r_eax;
    /* 004f3656: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f3659: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f365c: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x4f3661u); f_0078ed20();
    /* 004f3661: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3663: jne 0x4f3669 */ if (!fZ) goto L_004f3669;
L_004f3665:; BB(0x004f3665);
    /* 004f3665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3667: je 0x4f3612 */ if (fZ) goto L_004f3612;
L_004f3669:; BB(0x004f3669);
    /* 004f3669: mov esi, 0x573 */ r_esi = 0x573u;
    /* 004f366e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3670: je 0x4f3710 */ if (fZ) goto L_004f3710;
L_004f3676:; BB(0x004f3676);
    /* 004f3676: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f3679: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004f367c: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x4f3681u); f_0078ed4c();
    /* 004f3681: mov ebx, eax */ r_ebx = r_eax;
    /* 004f3683: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 004f3686: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f3688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3689: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f368a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4f368fu); f_00857dec();
    /* 004f368f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3690: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f3692: mov word ptr [ebp - 0x3c], dx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_edx);
    /* 004f3696: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f369bu); f_00857e98();
    /* 004f369b: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 004f369e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f369f: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f36a4u); f_004e732c();
    /* 004f36a4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f36a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f36a9: jne 0x4f36b0 */ if (!fZ) goto L_004f36b0;
L_004f36ab:; BB(0x004f36ab);
    /* 004f36ab: mov esi, 0x57c */ r_esi = 0x57cu;
L_004f36b0:; BB(0x004f36b0);
    /* 004f36b0: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 004f36b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f36b4: call 0x4e2f24 */ r_esp -= 4; W32(r_esp, 0x4f36b9u); f_004e2f24();
    /* 004f36b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f36bc: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 004f36bf: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f36c1: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004f36c4: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f36c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f36c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f36c9: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4f36ceu); f_00857dec();
    /* 004f36ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f36d1: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 004f36d4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004f36d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f36d9: mov word ptr [ecx + 0x68], dx */ W16((u32)(r_ecx+0x68u), (u16)r_edx);
    /* 004f36dd: push dword ptr [0xa46b8c] */ { u32 v = R32((u32)(0xa46b8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f36e3: push 0x91e284 */ { u32 v = 0x91e284u; r_esp -= 4; W32(r_esp, v); }
    /* 004f36e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f36e9: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x4f36eeu); f_00858bf5();
    /* 004f36ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f36f1: mov byte ptr [ebp - 0x2c], 0 */ W8((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004f36f5: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 004f36f8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f36fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f36fb: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f36fe: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f3703u); f_00858900();
    /* 004f3703: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f3706: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f3709: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004f370c: mov byte ptr [edx + 0xc], 0 */ W8((u32)(r_edx+0xcu), 0x0u);
L_004f3710:; BB(0x004f3710);
    /* 004f3710: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f3712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3713: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3715: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3716: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f371bu); f_00814298();
    /* 004f371b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f371e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f3721: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f3724: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f3727: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 004f372a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f372e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f3730: mov dword ptr [0xa72570], 1 */ W32((u32)(0xa72570u), 0x1u);
    /* 004f373a: mov dword ptr [0xa72574], ecx */ W32((u32)(0xa72574u), r_ecx);
    /* 004f3740: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3745: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f3749: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 004f374c: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 004f374f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f3752: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f3755: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f375c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f375e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f375f: ret  */ FN_RET(0x004f34a8); r_esp += 4; return;
L_004f3760:; BB(0x004f3760);
    /* 004f3760: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f3762: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f3765: jmp 0x4f3545 */ goto L_004f3545;
}

void f_004f376c(void) /* sub_4F376C */
{
    FN_ENTER(0x004f376c);
    /* 004f376c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f376d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f3770: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f3772: movzx edx, byte ptr [0xa7239c] */ r_edx = (u32)R8((u32)(0xa7239cu));
    /* 004f3779: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f377c: jne 0x4f3799 */ if (!fZ) goto L_004f3799;
L_004f377e:; BB(0x004f377e);
    /* 004f377e: fld dword ptr [0x91dee0] */ FPUSH(R_F32((u32)(0x91dee0u)));
    /* 004f3784: mov dword ptr [0xa72540], 0x3ea8f5c3 */ W32((u32)(0xa72540u), 0x3ea8f5c3u);
    /* 004f378e: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f3791: mov byte ptr [0xa7239c], dl */ W8((u32)(0xa7239cu), (u8)r_edx);
    /* 004f3797: jmp 0x4f379f */ goto L_004f379f;
L_004f3799:; BB(0x004f3799);
    /* 004f3799: fld dword ptr [0xa72540] */ FPUSH(R_F32((u32)(0xa72540u)));
L_004f379f:; BB(0x004f379f);
    /* 004f379f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f37a2: jne 0x4f37b7 */ if (!fZ) goto L_004f37b7;
L_004f37a4:; BB(0x004f37a4);
    /* 004f37a4: mov dword ptr [0xa72544], 0x3f28f5c3 */ W32((u32)(0xa72544u), 0x3f28f5c3u);
    /* 004f37ae: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f37b1: mov byte ptr [0xa7239c], dl */ W8((u32)(0xa7239cu), (u8)r_edx);
L_004f37b7:; BB(0x004f37b7);
    /* 004f37b7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f37ba: jne 0x4f37d2 */ if (!fZ) goto L_004f37d2;
L_004f37bc:; BB(0x004f37bc);
    /* 004f37bc: mov dword ptr [0xa72548], 0x42e60000 */ W32((u32)(0xa72548u), 0x42e60000u);
    /* 004f37c6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004f37c9: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f37cc: mov byte ptr [0xa7239c], dl */ W8((u32)(0xa7239cu), (u8)r_edx);
L_004f37d2:; BB(0x004f37d2);
    /* 004f37d2: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 004f37d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f37d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f37d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f37da: jbe 0x4f3960 */ if ((fC||fZ)) goto L_004f3960;
L_004f37e0:; BB(0x004f37e0);
    /* 004f37e0: fld dword ptr [0xa72544] */ FPUSH(R_F32((u32)(0xa72544u)));
    /* 004f37e6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f37e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f37ea: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 004f37ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f37f0: ja 0x4f3800 */ if ((!fC&&!fZ)) goto L_004f3800;
L_004f37f2:; BB(0x004f37f2);
    /* 004f37f2: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004f37f4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f37f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f37f8: fld dword ptr [0x91deec] */ FPUSH(R_F32((u32)(0x91deecu)));
    /* 004f37fe: jmp 0x4f380a */ goto L_004f380a;
L_004f3800:; BB(0x004f3800);
    /* 004f3800: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3802: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004f3804: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f3806: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004f3808: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_004f380a:; BB(0x004f380a);
    /* 004f380a: fld dword ptr [0xa72548] */ FPUSH(R_F32((u32)(0xa72548u)));
    /* 004f3810: mov eax, dword ptr [0xa72548] */ r_eax = R32((u32)(0xa72548u));
    /* 004f3815: fld dword ptr [0x91ded4] */ FPUSH(R_F32((u32)(0x91ded4u)));
    /* 004f381b: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f381d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004f381f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f3821: mov dword ptr [esp + 0x1c], 0x42f80000 */ W32((u32)(r_esp+0x1cu), 0x42f80000u);
    /* 004f3829: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004f382d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004f3831: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f3835: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3838: jne 0x4f3850 */ if (!fZ) goto L_004f3850;
L_004f383a:; BB(0x004f383a);
    /* 004f383a: mov dword ptr [0xa7254c], 9 */ W32((u32)(0xa7254cu), 0x9u);
    /* 004f3844: or edx, 0xffffff08 */ {  u32 a = r_edx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f384a: mov byte ptr [0xa7239c], dl */ W8((u32)(0xa7239cu), (u8)r_edx);
L_004f3850:; BB(0x004f3850);
    /* 004f3850: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f3853: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f3856: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f385bu); f_0082dcbc();
    /* 004f385b: fild dword ptr [0xa7254c] */ FPUSH((long double)(i32)R32((u32)(0xa7254cu)));
    /* 004f3861: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f3863: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 004f3867: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004f386b: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004f386f: fsubr dword ptr [esp + 0x20] */ ST(0) = R_F32((u32)(r_esp+0x20u)) - ST(0);
    /* 004f3873: fdiv dword ptr [0x91ded0] */ ST(0) = ST(0) / R_F32((u32)(0x91ded0u));
    /* 004f3879: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f387d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f3881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3882: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3883: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3888: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f388a: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4f388fu); f_004e9eb8();
    /* 004f388f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f3893: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f3897: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 004f389b: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 004f38a3: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004f38a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f38a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f38a9: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f38ae: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004f38b0: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4f38b5u); f_004e9eb8();
    /* 004f38b5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f38b8: movzx edx, byte ptr [0xa7239c] */ r_edx = (u32)R8((u32)(0xa7239cu));
    /* 004f38bf: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
L_004f38c2:; BB(0x004f38c2);
    /* 004f38c2: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f38c5: jne 0x4f38dd */ if (!fZ) goto L_004f38dd;
L_004f38c7:; BB(0x004f38c7);
    /* 004f38c7: mov dword ptr [0xa72550], 0x3ea8f5c3 */ W32((u32)(0xa72550u), 0x3ea8f5c3u);
    /* 004f38d1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004f38d4: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f38d7: mov byte ptr [0xa7239c], dl */ W8((u32)(0xa7239cu), (u8)r_edx);
L_004f38dd:; BB(0x004f38dd);
    /* 004f38dd: fld dword ptr [0x91decc] */ FPUSH(R_F32((u32)(0x91deccu)));
    /* 004f38e3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f38e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f38e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f38e8: jae 0x4f3957 */ if (!fC) goto L_004f3957;
L_004f38ea:; BB(0x004f38ea);
    /* 004f38ea: fld dword ptr [0xa72550] */ FPUSH(R_F32((u32)(0xa72550u)));
    /* 004f38f0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004f38f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f38f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f38f5: ja 0x4f3905 */ if ((!fC&&!fZ)) goto L_004f3905;
L_004f38f7:; BB(0x004f38f7);
    /* 004f38f7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f38f9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f38fb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f38fd: fld dword ptr [0x91deec] */ FPUSH(R_F32((u32)(0x91deecu)));
    /* 004f3903: jmp 0x4f390d */ goto L_004f390d;
L_004f3905:; BB(0x004f3905);
    /* 004f3905: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f3907: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f3909: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004f390b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_004f390d:; BB(0x004f390d);
    /* 004f390d: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3910: jne 0x4f3932 */ if (!fZ) goto L_004f3932;
L_004f3912:; BB(0x004f3912);
    /* 004f3912: mov dword ptr [0xa72554], 0x42be0000 */ W32((u32)(0xa72554u), 0x42be0000u);
    /* 004f391c: or edx, 0xffffff20 */ {  u32 a = r_edx; u32 b = 0xffffff20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f3922: mov byte ptr [0xa7239c], dl */ W8((u32)(0xa7239cu), (u8)r_edx);
    /* 004f3928: mov dword ptr [0xa72558], 0x42f80000 */ W32((u32)(0xa72558u), 0x42f80000u);
L_004f3932:; BB(0x004f3932);
    /* 004f3932: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f3936: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004f393d: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f3945: mov dword ptr [esp + 8], 0xa72554 */ W32((u32)(r_esp+0x8u), 0xa72554u);
    /* 004f394d: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f3952u); f_004e9ef8();
    /* 004f3952: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3955: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f3956: ret  */ FN_RET(0x004f376c); r_esp += 4; return;
L_004f3957:; BB(0x004f3957);
    /* 004f3957: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f3959: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f395b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f395e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f395f: ret  */ FN_RET(0x004f376c); r_esp += 4; return;
L_004f3960:; BB(0x004f3960);
    /* 004f3960: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f3962: jmp 0x4f38c2 */ goto L_004f38c2;
}

void f_004f3968(void) /* sub_4F3968 */
{
    FN_ENTER(0x004f3968);
    /* 004f3968: mov dword ptr [0xa7255c], 0x3f800000 */ W32((u32)(0xa7255cu), 0x3f800000u);
    /* 004f3972: mov dword ptr [0xa72560], 0x41000000 */ W32((u32)(0xa72560u), 0x41000000u);
    /* 004f397c: mov dword ptr [0xa72564], 0x3fc00000 */ W32((u32)(0xa72564u), 0x3fc00000u);
    /* 004f3986: ret  */ FN_RET(0x004f3968); r_esp += 4; return;
}

void f_004f3988(void) /* sub_4F3988 */
{
    FN_ENTER(0x004f3988);
    /* 004f3988: mov eax, dword ptr [0xa72568] */ r_eax = R32((u32)(0xa72568u));
    /* 004f398d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f398f: je 0x4f3992 */ if (fZ) goto L_004f3992;
L_004f3991:; BB(0x004f3991);
    /* 004f3991: ret  */ FN_RET(0x004f3988); r_esp += 4; return;
L_004f3992:; BB(0x004f3992);
    /* 004f3992: mov dword ptr [0xa72568], ecx */ W32((u32)(0xa72568u), r_ecx);
    /* 004f3998: call 0x4ef354 */ r_esp -= 4; W32(r_esp, 0x4f399du); f_004ef354();
    /* 004f399d: ret  */ FN_RET(0x004f3988); r_esp += 4; return;
}

void f_004f39a0(void) /* sub_4F39A0 */
{
    FN_ENTER(0x004f39a0);
    /* 004f39a0: mov eax, dword ptr [0xa725d4] */ r_eax = R32((u32)(0xa725d4u));
    /* 004f39a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f39a7: je 0x4f39bb */ if (fZ) goto L_004f39bb;
L_004f39a9:; BB(0x004f39a9);
    /* 004f39a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f39aa: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4f39afu); f_0082e960();
    /* 004f39af: mov dword ptr [0xa725d4], 0 */ W32((u32)(0xa725d4u), 0x0u);
    /* 004f39b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f39ba: ret  */ FN_RET(0x004f39a0); r_esp += 4; return;
L_004f39bb:; BB(0x004f39bb);
    /* 004f39bb: ret  */ FN_RET(0x004f39a0); r_esp += 4; return;
}

void f_004f39bc(void) /* sub_4F39BC */
{
    FN_ENTER(0x004f39bc);
    /* 004f39bc: mov eax, dword ptr [0xa725d4] */ r_eax = R32((u32)(0xa725d4u));
    /* 004f39c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f39c3: je 0x4f39df */ if (fZ) goto L_004f39df;
L_004f39c5:; BB(0x004f39c5);
    /* 004f39c5: mov eax, dword ptr [0xa725d0] */ r_eax = R32((u32)(0xa725d0u));
    /* 004f39ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f39cc: je 0x4f39cf */ if (fZ) goto L_004f39cf;
L_004f39ce:; BB(0x004f39ce);
    /* 004f39ce: ret  */ FN_RET(0x004f39bc); r_esp += 4; return;
L_004f39cf:; BB(0x004f39cf);
    /* 004f39cf: push 0x50000 */ { u32 v = 0x50000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f39d4: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4f39d9u); f_0082e940();
    /* 004f39d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f39da: mov dword ptr [0xa725d0], eax */ W32((u32)(0xa725d0u), r_eax);
L_004f39df:; BB(0x004f39df);
    /* 004f39df: ret  */ FN_RET(0x004f39bc); r_esp += 4; return;
}

void f_004f39e0(void) /* sub_4F39E0 */
{
    FN_ENTER(0x004f39e0);
    /* 004f39e0: mov eax, dword ptr [0xa725d4] */ r_eax = R32((u32)(0xa725d4u));
    /* 004f39e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f39e7: je 0x4f3a03 */ if (fZ) goto L_004f3a03;
L_004f39e9:; BB(0x004f39e9);
    /* 004f39e9: mov eax, dword ptr [0xa725d0] */ r_eax = R32((u32)(0xa725d0u));
    /* 004f39ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f39f0: je 0x4f3a03 */ if (fZ) goto L_004f3a03;
L_004f39f2:; BB(0x004f39f2);
    /* 004f39f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f39f3: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4f39f8u); f_0082e960();
    /* 004f39f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f39f9: mov dword ptr [0xa725d0], 0 */ W32((u32)(0xa725d0u), 0x0u);
L_004f3a03:; BB(0x004f3a03);
    /* 004f3a03: ret  */ FN_RET(0x004f39e0); r_esp += 4; return;
}

void f_004f3a04(void) /* sub_4F3A04 */
{
    FN_ENTER(0x004f3a04);
    /* 004f3a04: mov edx, dword ptr [0xa725d4] */ r_edx = R32((u32)(0xa725d4u));
    /* 004f3a0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3a0c: jne 0x4f3a11 */ if (!fZ) goto L_004f3a11;
L_004f3a0e:; BB(0x004f3a0e);
    /* 004f3a0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3a10: ret  */ FN_RET(0x004f3a04); r_esp += 4; return;
L_004f3a11:; BB(0x004f3a11);
    /* 004f3a11: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004f3a15: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3a18: jge 0x4f3a39 */ if ((fS==fO)) goto L_004f3a39;
L_004f3a1a:; BB(0x004f3a1a);
    /* 004f3a1a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004f3a1e: mov eax, dword ptr [ecx*4 + 0xa725c0] */ r_eax = R32((u32)(r_ecx*4+0xa725c0u));
    /* 004f3a25: lea ecx, [ecx + ecx*4] */ r_ecx = (u32)(r_ecx+r_ecx*4);
    /* 004f3a28: shl ecx, 0xd */ { u32 c = (13u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f3a2b: lea edx, [edx + ecx + 0xa000] */ r_edx = (u32)(r_edx+r_ecx+0xa000u);
    /* 004f3a32: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f3a34: jb 0x4f3a5f */ if (fC) goto L_004f3a5f;
L_004f3a36:; BB(0x004f3a36);
    /* 004f3a36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3a38: ret  */ FN_RET(0x004f3a04); r_esp += 4; return;
L_004f3a39:; BB(0x004f3a39);
    /* 004f3a39: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004f3a3d: mov eax, dword ptr [edx*4 + 0xa72590] */ r_eax = R32((u32)(r_edx*4+0xa72590u));
    /* 004f3a44: mov ecx, dword ptr [0xa725d0] */ r_ecx = R32((u32)(0xa725d0u));
    /* 004f3a4a: lea edx, [edx + edx*4 - 0x14] */ r_edx = (u32)(r_edx+r_edx*4+0xffffffecu);
    /* 004f3a4e: shl edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f3a51: lea edx, [ecx + edx + 0xa000] */ r_edx = (u32)(r_ecx+r_edx+0xa000u);
    /* 004f3a58: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f3a5a: jb 0x4f3a6b */ if (fC) goto L_004f3a6b;
L_004f3a5c:; BB(0x004f3a5c);
    /* 004f3a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3a5e: ret  */ FN_RET(0x004f3a04); r_esp += 4; return;
L_004f3a5f:; BB(0x004f3a5f);
    /* 004f3a5f: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004f3a63: mov dword ptr [edx*4 + 0xa725c0], eax */ W32((u32)(r_edx*4+0xa725c0u), r_eax);
    /* 004f3a6a: ret  */ FN_RET(0x004f3a04); r_esp += 4; return;
L_004f3a6b:; BB(0x004f3a6b);
    /* 004f3a6b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004f3a6f: mov dword ptr [edx*4 + 0xa72590], eax */ W32((u32)(r_edx*4+0xa72590u), r_eax);
    /* 004f3a76: ret  */ FN_RET(0x004f3a04); r_esp += 4; return;
}

void f_004f3a78(void) /* sub_4F3A78 */
{
    FN_ENTER(0x004f3a78);
    /* 004f3a78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3a79: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004f3a7d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f3a81: mov esi, dword ptr [0xa725d4] */ r_esi = R32((u32)(0xa725d4u));
    /* 004f3a87: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3a89: jne 0x4f3a8f */ if (!fZ) goto L_004f3a8f;
L_004f3a8b:; BB(0x004f3a8b);
    /* 004f3a8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3a8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f3a8e: ret  */ FN_RET(0x004f3a78); r_esp += 4; return;
L_004f3a8f:; BB(0x004f3a8f);
    /* 004f3a8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f3a91: jl 0x4f3ae4 */ if ((fS!=fO)) goto L_004f3ae4;
L_004f3a93:; BB(0x004f3a93);
    /* 004f3a93: cmp eax, 0xa000 */ {  u32 a = r_eax; u32 b = 0xa000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3a98: jg 0x4f3ae4 */ if ((!fZ&&fS==fO)) goto L_004f3ae4;
L_004f3a9a:; BB(0x004f3a9a);
    /* 004f3a9a: lea eax, [eax + 0x1f] */ r_eax = (u32)(r_eax+0x1fu);
    /* 004f3a9d: and eax, 0xffffffe0 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004f3aa0: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3aa3: jge 0x4f3ac3 */ if ((fS==fO)) goto L_004f3ac3;
L_004f3aa5:; BB(0x004f3aa5);
    /* 004f3aa5: mov edx, dword ptr [ecx*4 + 0xa725c0] */ r_edx = R32((u32)(r_ecx*4+0xa725c0u));
    /* 004f3aac: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3aae: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 004f3ab1: shl eax, 0xd */ { u32 c = (13u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f3ab4: lea esi, [esi + eax + 0xa000] */ r_esi = (u32)(r_esi+r_eax+0xa000u);
    /* 004f3abb: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f3abd: jb 0x4f3af1 */ if (fC) goto L_004f3af1;
L_004f3abf:; BB(0x004f3abf);
    /* 004f3abf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3ac1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f3ac2: ret  */ FN_RET(0x004f3a78); r_esp += 4; return;
L_004f3ac3:; BB(0x004f3ac3);
    /* 004f3ac3: mov edx, dword ptr [ecx*4 + 0xa72590] */ r_edx = R32((u32)(r_ecx*4+0xa72590u));
    /* 004f3aca: mov esi, dword ptr [0xa725d0] */ r_esi = R32((u32)(0xa725d0u));
    /* 004f3ad0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f3ad2: lea edx, [ecx + ecx*4 - 0x14] */ r_edx = (u32)(r_ecx+r_ecx*4+0xffffffecu);
    /* 004f3ad6: shl edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f3ad9: lea edx, [esi + edx + 0xa000] */ r_edx = (u32)(r_esi+r_edx+0xa000u);
    /* 004f3ae0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f3ae2: jb 0x4f3ae8 */ if (fC) goto L_004f3ae8;
L_004f3ae4:; BB(0x004f3ae4);
    /* 004f3ae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3ae6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f3ae7: ret  */ FN_RET(0x004f3a78); r_esp += 4; return;
L_004f3ae8:; BB(0x004f3ae8);
    /* 004f3ae8: mov dword ptr [ecx*4 + 0xa72590], eax */ W32((u32)(r_ecx*4+0xa72590u), r_eax);
    /* 004f3aef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f3af0: ret  */ FN_RET(0x004f3a78); r_esp += 4; return;
L_004f3af1:; BB(0x004f3af1);
    /* 004f3af1: mov dword ptr [ecx*4 + 0xa725c0], edx */ W32((u32)(r_ecx*4+0xa725c0u), r_edx);
    /* 004f3af8: mov eax, edx */ r_eax = r_edx;
    /* 004f3afa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f3afb: ret  */ FN_RET(0x004f3a78); r_esp += 4; return;
}

void f_004f3afc(void) /* sub_4F3AFC */
{
    FN_ENTER(0x004f3afc);
    /* 004f3afc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004f3b00: mov ecx, dword ptr [0xa725d4] */ r_ecx = R32((u32)(0xa725d4u));
    /* 004f3b06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3b08: jne 0x4f3b0d */ if (!fZ) goto L_004f3b0d;
L_004f3b0a:; BB(0x004f3b0a);
    /* 004f3b0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3b0c: ret  */ FN_RET(0x004f3afc); r_esp += 4; return;
L_004f3b0d:; BB(0x004f3b0d);
    /* 004f3b0d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3b10: jge 0x4f3b24 */ if ((fS==fO)) goto L_004f3b24;
L_004f3b12:; BB(0x004f3b12);
    /* 004f3b12: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3b15: shl edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f3b18: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3b1a: mov dword ptr [eax*4 + 0xa725c0], ecx */ W32((u32)(r_eax*4+0xa725c0u), r_ecx);
    /* 004f3b21: mov eax, ecx */ r_eax = r_ecx;
    /* 004f3b23: ret  */ FN_RET(0x004f3afc); r_esp += 4; return;
L_004f3b24:; BB(0x004f3b24);
    /* 004f3b24: lea edx, [eax + eax*4 - 0x14] */ r_edx = (u32)(r_eax+r_eax*4+0xffffffecu);
    /* 004f3b28: shl edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f3b2b: add edx, dword ptr [0xa725d0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa725d0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3b31: mov dword ptr [eax*4 + 0xa72590], edx */ W32((u32)(r_eax*4+0xa72590u), r_edx);
    /* 004f3b38: mov eax, edx */ r_eax = r_edx;
    /* 004f3b3a: ret  */ FN_RET(0x004f3afc); r_esp += 4; return;
}

void f_004f3b3c(void) /* sub_4F3B3C */
{
    FN_ENTER(0x004f3b3c);
    /* 004f3b3c: mov eax, dword ptr [0xa725d4] */ r_eax = R32((u32)(0xa725d4u));
    /* 004f3b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3b43: je 0x4f3b46 */ if (fZ) goto L_004f3b46;
L_004f3b45:; BB(0x004f3b45);
    /* 004f3b45: ret  */ FN_RET(0x004f3b3c); r_esp += 4; return;
L_004f3b46:; BB(0x004f3b46);
    /* 004f3b46: push 0x28000 */ { u32 v = 0x28000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3b4b: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4f3b50u); f_0082e940();
    /* 004f3b50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f3b51: mov dword ptr [0xa725d4], eax */ W32((u32)(0xa725d4u), r_eax);
    /* 004f3b56: ret  */ FN_RET(0x004f3b3c); r_esp += 4; return;
}

void f_004f3b58(void) /* sub_4F3B58 */
{
    FN_ENTER(0x004f3b58);
    /* 004f3b58: mov eax, dword ptr [0x91e290] */ r_eax = R32((u32)(0x91e290u));
    /* 004f3b5d: mov edx, dword ptr [0x91e294] */ r_edx = R32((u32)(0x91e294u));
    /* 004f3b63: mov ecx, dword ptr [0x91e298] */ r_ecx = R32((u32)(0x91e298u));
    /* 004f3b69: mov dword ptr [0xa72608], eax */ W32((u32)(0xa72608u), r_eax);
    /* 004f3b6e: mov eax, dword ptr [0x91e29c] */ r_eax = R32((u32)(0x91e29cu));
    /* 004f3b73: mov dword ptr [0xa7260c], edx */ W32((u32)(0xa7260cu), r_edx);
    /* 004f3b79: mov dword ptr [0xa72610], ecx */ W32((u32)(0xa72610u), r_ecx);
    /* 004f3b7f: mov dword ptr [0xa72614], eax */ W32((u32)(0xa72614u), r_eax);
    /* 004f3b84: mov eax, dword ptr [0x91e2a0] */ r_eax = R32((u32)(0x91e2a0u));
    /* 004f3b89: mov dword ptr [0xa72618], eax */ W32((u32)(0xa72618u), r_eax);
    /* 004f3b8e: mov eax, dword ptr [0x91e2a4] */ r_eax = R32((u32)(0x91e2a4u));
    /* 004f3b93: mov dword ptr [0xa7261c], eax */ W32((u32)(0xa7261cu), r_eax);
    /* 004f3b98: ret  */ FN_RET(0x004f3b58); r_esp += 4; return;
}

void f_004f3b9c(void) /* sub_4F3B9C */
{
    FN_ENTER(0x004f3b9c);
    /* 004f3b9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3b9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f3b9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3b9f: mov edi, dword ptr [0xa72614] */ r_edi = R32((u32)(0xa72614u));
    /* 004f3ba5: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3baau); f_006dc358();
    /* 004f3baa: movzx ebx, byte ptr [0xa725d8] */ r_ebx = (u32)R8((u32)(0xa725d8u));
    /* 004f3bb1: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3bb4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3bb6: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3bb9: mov ebp, dword ptr [edx*8 + 0xaae75c] */ r_ebp = R32((u32)(r_edx*8+0xaae75cu));
    /* 004f3bc0: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
    /* 004f3bc6: jne 0x4f3bed */ if (!fZ) goto L_004f3bed;
L_004f3bc8:; BB(0x004f3bc8);
    /* 004f3bc8: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 004f3bcd: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3bd3: or ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004f3bd6: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3bdc: or eax, dword ptr [0xa0f670] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3be2: mov dword ptr [0xa725dc], eax */ W32((u32)(0xa725dcu), r_eax);
    /* 004f3be7: mov byte ptr [0xa725d8], bl */ W8((u32)(0xa725d8u), (u8)r_ebx);
L_004f3bed:; BB(0x004f3bed);
    /* 004f3bed: test dword ptr [0xa725dc], ebp */ {  u32 a = R32((u32)(0xa725dcu)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3bf3: jne 0x4f3cfe */ if (!fZ) goto L_004f3cfe;
L_004f3bf9:; BB(0x004f3bf9);
    /* 004f3bf9: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3bfeu); f_006dc358();
    /* 004f3bfe: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3c01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3c03: movsx ecx, word ptr [edx*8 + 0xaae770] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae770u));
    /* 004f3c0b: cmp ecx, -0x73 */ {  u32 a = r_ecx; u32 b = 0xffffff8du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3c0e: jge 0x4f3c21 */ if ((fS==fO)) goto L_004f3c21;
L_004f3c10:; BB(0x004f3c10);
    /* 004f3c10: or ebp, dword ptr [0xa0f66c] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f3c16: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
    /* 004f3c1c: jmp 0x4f3cfe */ goto L_004f3cfe;
L_004f3c21:; BB(0x004f3c21);
    /* 004f3c21: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3c26u); f_006dc358();
    /* 004f3c26: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3c29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3c2b: movsx ecx, word ptr [edx*8 + 0xaae770] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae770u));
    /* 004f3c33: cmp ecx, 0x73 */ {  u32 a = r_ecx; u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3c36: jle 0x4f3c49 */ if ((fZ||fS!=fO)) goto L_004f3c49;
L_004f3c38:; BB(0x004f3c38);
    /* 004f3c38: or ebp, dword ptr [0xa0f670] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f3c3e: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
    /* 004f3c44: jmp 0x4f3cfe */ goto L_004f3cfe;
L_004f3c49:; BB(0x004f3c49);
    /* 004f3c49: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3c4eu); f_006dc358();
    /* 004f3c4e: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3c51: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3c53: movsx ecx, word ptr [edx*8 + 0xaae772] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae772u));
    /* 004f3c5b: cmp ecx, -0x73 */ {  u32 a = r_ecx; u32 b = 0xffffff8du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3c5e: jge 0x4f3c71 */ if ((fS==fO)) goto L_004f3c71;
L_004f3c60:; BB(0x004f3c60);
    /* 004f3c60: or ebp, dword ptr [0xa0f664] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f664u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f3c66: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
    /* 004f3c6c: jmp 0x4f3cfe */ goto L_004f3cfe;
L_004f3c71:; BB(0x004f3c71);
    /* 004f3c71: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3c76u); f_006dc358();
    /* 004f3c76: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3c79: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3c7b: movsx ecx, word ptr [edx*8 + 0xaae772] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae772u));
    /* 004f3c83: cmp ecx, 0x73 */ {  u32 a = r_ecx; u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3c86: jle 0x4f3c96 */ if ((fZ||fS!=fO)) goto L_004f3c96;
L_004f3c88:; BB(0x004f3c88);
    /* 004f3c88: or ebp, dword ptr [0xa0f668] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f3c8e: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
    /* 004f3c94: jmp 0x4f3cfe */ goto L_004f3cfe;
L_004f3c96:; BB(0x004f3c96);
    /* 004f3c96: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3c99: jne 0x4f3cd5 */ if (!fZ) goto L_004f3cd5;
L_004f3c9b:; BB(0x004f3c9b);
    /* 004f3c9b: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 004f3ca0: mov edx, dword ptr [0xa0f668] */ r_edx = R32((u32)(0xa0f668u));
    /* 004f3ca6: mov ecx, dword ptr [0xa0f66c] */ r_ecx = R32((u32)(0xa0f66cu));
    /* 004f3cac: mov ebp, dword ptr [0xa0f670] */ r_ebp = R32((u32)(0xa0f670u));
    /* 004f3cb2: or ebx, 0xffffff02 */ {  u32 a = r_ebx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004f3cb8: mov dword ptr [0xa725e0], eax */ W32((u32)(0xa725e0u), r_eax);
    /* 004f3cbd: mov dword ptr [0xa725e4], edx */ W32((u32)(0xa725e4u), r_edx);
    /* 004f3cc3: mov dword ptr [0xa725e8], ecx */ W32((u32)(0xa725e8u), r_ecx);
    /* 004f3cc9: mov dword ptr [0xa725ec], ebp */ W32((u32)(0xa725ecu), r_ebp);
    /* 004f3ccf: mov byte ptr [0xa725d8], bl */ W8((u32)(0xa725d8u), (u8)r_ebx);
L_004f3cd5:; BB(0x004f3cd5);
    /* 004f3cd5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f3cd7:; BB(0x004f3cd7);
    /* 004f3cd7: push dword ptr [ebx*4 + 0xa725e0] */ { u32 v = R32((u32)(r_ebx*4+0xa725e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f3cde: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004f3ce3: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f3ce8u); f_007c1160();
    /* 004f3ce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3cea: jne 0x4f3ea0 */ if (!fZ) goto L_004f3ea0;
L_004f3cf0:; BB(0x004f3cf0);
    /* 004f3cf0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f3cf3: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3cf6: jl 0x4f3cd7 */ if ((fS!=fO)) goto L_004f3cd7;
L_004f3cf8:; BB(0x004f3cf8);
    /* 004f3cf8: mov ebp, dword ptr [0xa72614] */ r_ebp = R32((u32)(0xa72614u));
L_004f3cfe:; BB(0x004f3cfe);
    /* 004f3cfe: mov ebx, dword ptr [0xa0f674] */ r_ebx = R32((u32)(0xa0f674u));
    /* 004f3d04: test ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3d06: jne 0x4f3d41 */ if (!fZ) goto L_004f3d41;
L_004f3d08:; BB(0x004f3d08);
    /* 004f3d08: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3d0du); f_006dc358();
    /* 004f3d0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3d0e: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3d11: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3d13: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3d15: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3d17: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f3d1e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f3d23u); f_007c1160();
    /* 004f3d23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3d25: je 0x4f3d3b */ if (fZ) goto L_004f3d3b;
L_004f3d27:; BB(0x004f3d27);
    /* 004f3d27: mov ebp, dword ptr [0xa72614] */ r_ebp = R32((u32)(0xa72614u));
    /* 004f3d2d: or ebp, dword ptr [0xa0f674] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f674u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f3d33: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
    /* 004f3d39: jmp 0x4f3d41 */ goto L_004f3d41;
L_004f3d3b:; BB(0x004f3d3b);
    /* 004f3d3b: mov ebp, dword ptr [0xa72614] */ r_ebp = R32((u32)(0xa72614u));
L_004f3d41:; BB(0x004f3d41);
    /* 004f3d41: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 004f3d47: test ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3d49: jne 0x4f3d84 */ if (!fZ) goto L_004f3d84;
L_004f3d4b:; BB(0x004f3d4b);
    /* 004f3d4b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3d50u); f_006dc358();
    /* 004f3d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3d51: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3d54: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3d56: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3d58: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3d5a: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f3d61: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f3d66u); f_007c1160();
    /* 004f3d66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3d68: jne 0x4f3d72 */ if (!fZ) goto L_004f3d72;
L_004f3d6a:; BB(0x004f3d6a);
    /* 004f3d6a: mov ebp, dword ptr [0xa72614] */ r_ebp = R32((u32)(0xa72614u));
    /* 004f3d70: jmp 0x4f3d84 */ goto L_004f3d84;
L_004f3d72:; BB(0x004f3d72);
    /* 004f3d72: mov ebp, dword ptr [0xa72614] */ r_ebp = R32((u32)(0xa72614u));
    /* 004f3d78: or ebp, dword ptr [0xa0f678] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f3d7e: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
L_004f3d84:; BB(0x004f3d84);
    /* 004f3d84: movzx eax, byte ptr [0xa725f0] */ r_eax = (u32)R8((u32)(0xa725f0u));
    /* 004f3d8b: not edi */ r_edi = ~r_edi;
    /* 004f3d8d: and edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 004f3d8f: mov dword ptr [0xa72618], edi */ W32((u32)(0xa72618u), r_edi);
    /* 004f3d95: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3d97: jne 0x4f3dbf */ if (!fZ) goto L_004f3dbf;
L_004f3d99:; BB(0x004f3d99);
    /* 004f3d99: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 004f3d9f: or edx, dword ptr [0xa0f668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f3da5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3da8: or edx, dword ptr [0xa0f66c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f3dae: or edx, dword ptr [0xa0f670] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f3db4: mov dword ptr [0xa725f4], edx */ W32((u32)(0xa725f4u), r_edx);
    /* 004f3dba: mov byte ptr [0xa725f0], al */ W8((u32)(0xa725f0u), (u8)r_eax);
L_004f3dbf:; BB(0x004f3dbf);
    /* 004f3dbf: and ebp, dword ptr [0xa725f4] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa725f4u)); u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 004f3dc5: jne 0x4f3ddc */ if (!fZ) goto L_004f3ddc;
L_004f3dc7:; BB(0x004f3dc7);
    /* 004f3dc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3dc9: mov dword ptr [0xa72610], eax */ W32((u32)(0xa72610u), r_eax);
    /* 004f3dce: mov dword ptr [0xa7260c], eax */ W32((u32)(0xa7260cu), r_eax);
    /* 004f3dd3: mov dword ptr [0xa7261c], eax */ W32((u32)(0xa7261cu), r_eax);
    /* 004f3dd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f3dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3dda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f3ddb: ret  */ FN_RET(0x004f3b9c); r_esp += 4; return;
L_004f3ddc:; BB(0x004f3ddc);
    /* 004f3ddc: mov edx, dword ptr [0xa7260c] */ r_edx = R32((u32)(0xa7260cu));
    /* 004f3de2: test edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3de4: je 0x4f3e1f */ if (fZ) goto L_004f3e1f;
L_004f3de6:; BB(0x004f3de6);
    /* 004f3de6: mov eax, dword ptr [0xa72610] */ r_eax = R32((u32)(0xa72610u));
    /* 004f3deb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f3dee: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f3df1: je 0x4f3e0b */ if (fZ) goto L_004f3e0b;
L_004f3df3:; BB(0x004f3df3);
    /* 004f3df3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f3df6: jge 0x4f3e0b */ if ((fS==fO)) goto L_004f3e0b;
L_004f3df8:; BB(0x004f3df8);
    /* 004f3df8: mov dword ptr [0xa7261c], 0 */ W32((u32)(0xa7261cu), 0x0u);
    /* 004f3e02: mov dword ptr [0xa72610], eax */ W32((u32)(0xa72610u), r_eax);
    /* 004f3e07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f3e08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3e09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f3e0a: ret  */ FN_RET(0x004f3b9c); r_esp += 4; return;
L_004f3e0b:; BB(0x004f3e0b);
    /* 004f3e0b: mov dword ptr [0xa72610], 7 */ W32((u32)(0xa72610u), 0x7u);
    /* 004f3e15: mov dword ptr [0xa7261c], edx */ W32((u32)(0xa7261cu), r_edx);
    /* 004f3e1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f3e1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3e1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f3e1e: ret  */ FN_RET(0x004f3b9c); r_esp += 4; return;
L_004f3e1f:; BB(0x004f3e1f);
    /* 004f3e1f: mov dword ptr [0xa7261c], 0 */ W32((u32)(0xa7261cu), 0x0u);
    /* 004f3e29: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f3e2b: jne 0x4f3e67 */ if (!fZ) goto L_004f3e67;
L_004f3e2d:; BB(0x004f3e2d);
    /* 004f3e2d: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 004f3e33: mov ecx, dword ptr [0xa0f668] */ r_ecx = R32((u32)(0xa0f668u));
    /* 004f3e39: mov ebx, dword ptr [0xa0f66c] */ r_ebx = R32((u32)(0xa0f66cu));
    /* 004f3e3f: mov edi, dword ptr [0xa0f670] */ r_edi = R32((u32)(0xa0f670u));
    /* 004f3e45: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3e4a: mov dword ptr [0xa725f8], edx */ W32((u32)(0xa725f8u), r_edx);
    /* 004f3e50: mov dword ptr [0xa725fc], ecx */ W32((u32)(0xa725fcu), r_ecx);
    /* 004f3e56: mov dword ptr [0xa72600], ebx */ W32((u32)(0xa72600u), r_ebx);
    /* 004f3e5c: mov dword ptr [0xa72604], edi */ W32((u32)(0xa72604u), r_edi);
    /* 004f3e62: mov byte ptr [0xa725f0], al */ W8((u32)(0xa725f0u), (u8)r_eax);
L_004f3e67:; BB(0x004f3e67);
    /* 004f3e67: mov edx, 0xa725f8 */ r_edx = 0xa725f8u;
    /* 004f3e6c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f3e6e: mov eax, ecx */ r_eax = r_ecx;
    /* 004f3e70: not eax */ r_eax = ~r_eax;
    /* 004f3e72: and eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f3e74: je 0x4f3e84 */ if (fZ) goto L_004f3e84;
L_004f3e76:; BB(0x004f3e76);
    /* 004f3e76: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004f3e79: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3e7c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f3e7e: not ebx */ r_ebx = ~r_ebx;
    /* 004f3e80: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f3e82: jne 0x4f3e76 */ if (!fZ) goto L_004f3e76;
L_004f3e84:; BB(0x004f3e84);
    /* 004f3e84: mov dword ptr [0xa72610], 0 */ W32((u32)(0xa72610u), 0x0u);
    /* 004f3e8e: and ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3e90: mov dword ptr [0xa7260c], ebp */ W32((u32)(0xa7260cu), r_ebp);
    /* 004f3e96: mov dword ptr [0xa7261c], ebp */ W32((u32)(0xa7261cu), r_ebp);
    /* 004f3e9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f3e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3e9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f3e9f: ret  */ FN_RET(0x004f3b9c); r_esp += 4; return;
L_004f3ea0:; BB(0x004f3ea0);
    /* 004f3ea0: mov ebp, dword ptr [0xa72614] */ r_ebp = R32((u32)(0xa72614u));
    /* 004f3ea6: or ebp, dword ptr [ebx*4 + 0xa725e0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx*4+0xa725e0u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004f3ead: mov dword ptr [0xa72614], ebp */ W32((u32)(0xa72614u), r_ebp);
    /* 004f3eb3: jmp 0x4f3cfe */ goto L_004f3cfe;
}

void f_004f3eb8(void) /* sub_4F3EB8 */
{
    FN_ENTER(0x004f3eb8);
    /* 004f3eb8: mov edx, dword ptr [0xa72618] */ r_edx = R32((u32)(0xa72618u));
    /* 004f3ebe: test dword ptr [esp + 4], edx */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3ec2: mov eax, 0 */ r_eax = 0x0u;
    /* 004f3ec7: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004f3eca: ret  */ FN_RET(0x004f3eb8); r_esp += 4; return;
}

void f_004f3ecc(void) /* sub_4F3ECC */
{
    FN_ENTER(0x004f3ecc);
    /* 004f3ecc: mov edx, dword ptr [0xa72614] */ r_edx = R32((u32)(0xa72614u));
    /* 004f3ed2: test dword ptr [esp + 4], edx */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f3ed6: mov eax, 0 */ r_eax = 0x0u;
    /* 004f3edb: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004f3ede: ret  */ FN_RET(0x004f3ecc); r_esp += 4; return;
}

void f_004f3ee0(void) /* sub_4F3EE0 */
{
    FN_ENTER(0x004f3ee0);
    /* 004f3ee0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3ee1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f3ee2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3ee3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f3ee6: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 004f3eea: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004f3eee: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3ef3u); f_006dc358();
    /* 004f3ef3: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3ef6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3ef8: movsx ecx, word ptr [edx*8 + 0xaae770] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae770u));
    /* 004f3f00: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004f3f03: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004f3f06: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f3f0a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3f0fu); f_006dc358();
    /* 004f3f0f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f3f13: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 004f3f16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f3f18: movsx edi, word ptr [ecx*8 + 0xaae772] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xaae772u));
    /* 004f3f20: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004f3f24: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004f3f28: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 004f3f2c: fchs  */ ST(0) = -ST(0);
    /* 004f3f2e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004f3f30: fmul qword ptr [0x91e2b0] */ ST(0) = ST(0) * R_F64((u32)(0x91e2b0u));
    /* 004f3f36: fdiv qword ptr [0x91e2a8] */ ST(0) = ST(0) / R_F64((u32)(0x91e2a8u));
    /* 004f3f3c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f3f40: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f3f45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3f4a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f3f4e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f3f52: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f3f56: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f3f5a: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 004f3f5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3f5f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f3f63: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f3f65: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f3f69: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f3f6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f3f6d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f3f70: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4f3f75u); f_0082dc9c();
    /* 004f3f75: fld dword ptr [0x91e2c8] */ FPUSH(R_F32((u32)(0x91e2c8u)));
    /* 004f3f7b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f3f7d: fcom dword ptr [0x91e2c4] */ fx_compare(ST(0), R_F32((u32)(0x91e2c4u))); 
    /* 004f3f83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f3f85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f3f86: jbe 0x4f3f92 */ if ((fC||fZ)) goto L_004f3f92;
L_004f3f88:; BB(0x004f3f88);
    /* 004f3f88: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f3f8a: fld dword ptr [0x91e2c4] */ FPUSH(R_F32((u32)(0x91e2c4u)));
    /* 004f3f90: jmp 0x4f3fa7 */ goto L_004f3fa7;
L_004f3f92:; BB(0x004f3f92);
    /* 004f3f92: fcom dword ptr [0x91e2c0] */ fx_compare(ST(0), R_F32((u32)(0x91e2c0u))); 
    /* 004f3f98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f3f9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f3f9b: jae 0x4f3fa7 */ if (!fC) goto L_004f3fa7;
L_004f3f9d:; BB(0x004f3f9d);
    /* 004f3f9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f3f9f: fld dword ptr [0x91e2bc] */ FPUSH(R_F32((u32)(0x91e2bcu)));
    /* 004f3fa5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004f3fa7:; BB(0x004f3fa7);
    /* 004f3fa7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3fa9: je 0x4f3fae */ if (fZ) goto L_004f3fae;
L_004f3fab:; BB(0x004f3fab);
    /* 004f3fab: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
L_004f3fae:; BB(0x004f3fae);
    /* 004f3fae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3fb0: je 0x4f3fb4 */ if (fZ) goto L_004f3fb4;
L_004f3fb2:; BB(0x004f3fb2);
    /* 004f3fb2: fst dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0));
L_004f3fb4:; BB(0x004f3fb4);
    /* 004f3fb4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f3fb6: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3fb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f3fba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3fbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f3fbc: ret  */ FN_RET(0x004f3ee0); r_esp += 4; return;
}

void f_004f3fc0(void) /* sub_4F3FC0 */
{
    FN_ENTER(0x004f3fc0);
    /* 004f3fc0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f3fc3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3fc8u); f_006dc358();
    /* 004f3fc8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3fcb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3fcd: movzx ecx, word ptr [edx*8 + 0xaae76e] */ r_ecx = (u32)R16((u32)(r_edx*8+0xaae76eu));
    /* 004f3fd5: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004f3fd8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004f3fdb: fdiv dword ptr [0x91e2b8] */ ST(0) = ST(0) / R_F32((u32)(0x91e2b8u));
    /* 004f3fe1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3fe4: ret  */ FN_RET(0x004f3fc0); r_esp += 4; return;
}

void f_004f3fe8(void) /* sub_4F3FE8 */
{
    FN_ENTER(0x004f3fe8);
    /* 004f3fe8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f3feb: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f3ff0u); f_006dc358();
    /* 004f3ff0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f3ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f3ff5: movzx ecx, word ptr [edx*8 + 0xaae76c] */ r_ecx = (u32)R16((u32)(r_edx*8+0xaae76cu));
    /* 004f3ffd: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004f4000: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004f4003: fdiv dword ptr [0x91e2b8] */ ST(0) = ST(0) / R_F32((u32)(0x91e2b8u));
    /* 004f4009: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f400c: ret  */ FN_RET(0x004f3fe8); r_esp += 4; return;
}

