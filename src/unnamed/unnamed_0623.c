#include "protos.h"

void f_00623028(void) /* sub_623028 */
{
    FN_ENTER(0x00623028);
    /* 00623028: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00623029: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062302a: mov esi, ecx */ r_esi = r_ecx;
    /* 0062302c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0062302f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623030: lea eax, [esi + 0xd4] */ r_eax = (u32)(r_esi+0xd4u);
    /* 00623036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623037: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62303cu); f_007a9180();
    /* 0062303c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0062303f: fld dword ptr [0x93170c] */ FPUSH(R_F32((u32)(0x93170cu)));
    /* 00623045: fadd dword ptr [esi + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x70u));
    /* 00623048: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062304a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062304c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062304e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062304f: jbe 0x62305e */ if ((fC||fZ)) goto L_0062305e;
L_00623051:; BB(0x00623051);
    /* 00623051: mov dword ptr [esi + 0xac], 2 */ W32((u32)(r_esi+0xacu), 0x2u);
    /* 0062305b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062305c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062305d: ret  */ FN_RET(0x00623028); r_esp += 4; return;
L_0062305e:; BB(0x0062305e);
    /* 0062305e: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00623064: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00623066: mov edx, esi */ r_edx = r_esi;
    /* 00623068: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x62306du); f_0082ebac();
    /* 0062306d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062306e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062306f: ret  */ FN_RET(0x00623028); r_esp += 4; return;
}

void f_00623070(void) /* sub_623070 */
{
    FN_ENTER(0x00623070);
    /* 00623070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00623071: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623074: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00623076: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 0062307c: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0062307f: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 00623085: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623088: jg 0x62308f */ if ((!fZ&&fS==fO)) goto L_0062308f;
L_0062308a:; BB(0x0062308a);
    /* 0062308a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062308d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062308e: ret  */ FN_RET(0x00623070); r_esp += 4; return;
L_0062308f:; BB(0x0062308f);
    /* 0062308f: push 0x44992000 */ { u32 v = 0x44992000u; r_esp -= 4; W32(r_esp, v); }
    /* 00623094: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00623096: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x62309bu); f_006134c8();
    /* 0062309b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062309e: je 0x6230eb */ if (fZ) goto L_006230eb;
L_006230a0:; BB(0x006230a0);
    /* 006230a0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6230a5u); f_008587a5();
    /* 006230a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006230a6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006230aa: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 006230ae: fdiv dword ptr [0x931700] */ ST(0) = ST(0) / R_F32((u32)(0x931700u));
    /* 006230b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006230b6: fmul dword ptr [0x9316fc] */ ST(0) = ST(0) * R_F32((u32)(0x9316fcu));
    /* 006230bc: fadd dword ptr [0x931704] */ ST(0) = ST(0) + R_F32((u32)(0x931704u));
    /* 006230c2: fmul dword ptr [ebx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x6cu));
    /* 006230c5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006230c8: call 0x623120 */ r_esp -= 4; W32(r_esp, 0x6230cdu); f_00623120();
    /* 006230cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006230d0: jne 0x62308a */ if (!fZ) goto L_0062308a;
L_006230d2:; BB(0x006230d2);
    /* 006230d2: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 006230dc: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 006230e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006230e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006230ea: ret  */ FN_RET(0x00623070); r_esp += 4; return;
L_006230eb:; BB(0x006230eb);
    /* 006230eb: fld dword ptr [0x9316f8] */ FPUSH(R_F32((u32)(0x9316f8u)));
    /* 006230f1: fadd dword ptr [ebx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6cu));
    /* 006230f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006230f5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006230f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006230fa: call 0x623120 */ r_esp -= 4; W32(r_esp, 0x6230ffu); f_00623120();
    /* 006230ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623102: jne 0x62308a */ if (!fZ) goto L_0062308a;
L_00623104:; BB(0x00623104);
    /* 00623104: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0062310e: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 00623118: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062311b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062311c: ret  */ FN_RET(0x00623070); r_esp += 4; return;
}

void f_00623120(void) /* sub_623120 */
{
    FN_ENTER(0x00623120);
    /* 00623120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00623121: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623124: mov edi, ecx */ r_edi = r_ecx;
    /* 00623126: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0062312a: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 00623134: mov dword ptr [0xaab4f4], eax */ W32((u32)(0xaab4f4u), r_eax);
    /* 00623139: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62313eu); f_008587a5();
    /* 0062313e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00623141: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00623144: fdiv dword ptr [0x9316f0] */ ST(0) = ST(0) / R_F32((u32)(0x9316f0u));
    /* 0062314a: fmul dword ptr [edi + 0xd0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xd0u));
    /* 00623150: fstp dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0)); FPOP();
    /* 00623156: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62315bu); f_008587a5();
    /* 0062315b: fld dword ptr [0x9316ec] */ FPUSH(R_F32((u32)(0x9316ecu)));
    /* 00623161: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00623165: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00623169: fdiv dword ptr [0x9316f0] */ ST(0) = ST(0) / R_F32((u32)(0x9316f0u));
    /* 0062316f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00623171: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00623176: fmul dword ptr [0x9316e8] */ ST(0) = ST(0) * R_F32((u32)(0x9316e8u));
    /* 0062317c: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062317e: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00623182: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00623187: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062318c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00623190: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00623194: fistp dword ptr [0xaab4ac] */ W32((u32)(0xaab4acu), (u32)fx_int32(ST(0))); FPOP();
    /* 0062319a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0062319e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6231a3u); f_0082d990();
    /* 006231a3: mov edx, dword ptr [0xaab4ac] */ r_edx = R32((u32)(0xaab4acu));
    /* 006231a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006231ab: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6231b0u); f_0082d8bc();
    /* 006231b0: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006231b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006231b7: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 006231bc: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6231c1u); f_0082eab8();
    /* 006231c1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6231c6u); f_0082da80();
    /* 006231c6: lea edx, [edi + 0x50] */ r_edx = (u32)(r_edi+0x50u);
    /* 006231c9: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 006231ce: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x6231d3u); f_0082ebac();
    /* 006231d3: mov eax, dword ptr [0xaab4f0] */ r_eax = R32((u32)(0xaab4f0u));
    /* 006231d8: mov dword ptr [edi + 0xd4], eax */ W32((u32)(r_edi+0xd4u), r_eax);
    /* 006231de: mov eax, dword ptr [0xaab4f4] */ r_eax = R32((u32)(0xaab4f4u));
    /* 006231e3: mov dword ptr [edi + 0xd8], eax */ W32((u32)(r_edi+0xd8u), r_eax);
    /* 006231e9: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 006231ec: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 006231f1: mov eax, dword ptr [0xaab4f8] */ r_eax = R32((u32)(0xaab4f8u));
    /* 006231f6: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 006231fc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x623201u); f_0082f9c4();
    /* 00623201: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00623206: call 0x7a9158 */ r_esp -= 4; W32(r_esp, 0x62320bu); f_007a9158();
    /* 0062320b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062320c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062320f: je 0x62321a */ if (fZ) goto L_0062321a;
L_00623211:; BB(0x00623211);
    /* 00623211: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623213: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623216: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00623217: ret 4 */ FN_RET(0x00623120); r_esp += 8; return;
L_0062321a:; BB(0x0062321a);
    /* 0062321a: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 00623220: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00623226: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00623228: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0062322c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062322e: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00623232: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 0062323c: mov dword ptr [edi + 0xcc], 0 */ W32((u32)(r_edi+0xccu), 0x0u);
    /* 00623246: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00623248: fmul qword ptr [0x931680] */ ST(0) = ST(0) * R_F64((u32)(0x931680u));
    /* 0062324e: fdiv qword ptr [0x931678] */ ST(0) = ST(0) / R_F64((u32)(0x931678u));
    /* 00623254: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 00623257: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0062325b: fld dword ptr [0xaab4f4] */ FPUSH(R_F32((u32)(0xaab4f4u)));
    /* 00623261: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00623265: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00623267: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0062326b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00623270: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00623275: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00623279: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0062327d: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00623280: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00623284: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00623286: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00623288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062328a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0062328c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062328e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00623290: fstp dword ptr [edi + 0xe0] */ W_F32((u32)(r_edi+0xe0u), ST(0)); FPOP();
    /* 00623296: fstp dword ptr [edi + 0xe4] */ W_F32((u32)(r_edi+0xe4u), ST(0)); FPOP();
    /* 0062329c: fstp dword ptr [edi + 0xe8] */ W_F32((u32)(r_edi+0xe8u), ST(0)); FPOP();
    /* 006232a2: mov eax, 1 */ r_eax = 0x1u;
    /* 006232a7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006232aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006232ab: ret 4 */ FN_RET(0x00623120); r_esp += 8; return;
}

void f_006232b0(void) /* sub_6232B0 */
{
    FN_ENTER(0x006232b0);
    /* 006232b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006232b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006232b2: mov esi, ecx */ r_esi = r_ecx;
    /* 006232b4: push 0x44610000 */ { u32 v = 0x44610000u; r_esp -= 4; W32(r_esp, v); }
    /* 006232b9: mov ecx, esi */ r_ecx = r_esi;
    /* 006232bb: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x6232c0u); f_006134c8();
    /* 006232c0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006232c3: je 0x623309 */ if (fZ) goto L_00623309;
L_006232c5:; BB(0x006232c5);
    /* 006232c5: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 006232c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006232c9: lea eax, [esi + 0xd4] */ r_eax = (u32)(r_esi+0xd4u);
    /* 006232cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006232d0: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6232d5u); f_007a9180();
    /* 006232d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006232d8: fld dword ptr [0x9316e0] */ FPUSH(R_F32((u32)(0x9316e0u)));
    /* 006232de: fadd dword ptr [esi + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x70u));
    /* 006232e1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006232e3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006232e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006232e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006232e8: jbe 0x6232f7 */ if ((fC||fZ)) goto L_006232f7;
L_006232ea:; BB(0x006232ea);
    /* 006232ea: mov dword ptr [esi + 0xac], 0 */ W32((u32)(r_esi+0xacu), 0x0u);
    /* 006232f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006232f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006232f6: ret  */ FN_RET(0x006232b0); r_esp += 4; return;
L_006232f7:; BB(0x006232f7);
    /* 006232f7: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006232fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006232ff: mov edx, esi */ r_edx = r_esi;
    /* 00623301: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x623306u); f_0082ebac();
L_00623306:; BB(0x00623306);
    /* 00623306: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00623307: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623308: ret  */ FN_RET(0x006232b0); r_esp += 4; return;
L_00623309:; BB(0x00623309);
    /* 00623309: fld dword ptr [0x9316f8] */ FPUSH(R_F32((u32)(0x9316f8u)));
    /* 0062330f: fadd dword ptr [esi + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x6cu));
    /* 00623312: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00623313: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00623316: mov ecx, esi */ r_ecx = r_esi;
    /* 00623318: call 0x623120 */ r_esp -= 4; W32(r_esp, 0x62331du); f_00623120();
    /* 0062331d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00623320: jne 0x623306 */ if (!fZ) goto L_00623306;
L_00623322:; BB(0x00623322);
    /* 00623322: mov dword ptr [esi + 0xac], 3 */ W32((u32)(r_esi+0xacu), 0x3u);
    /* 0062332c: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
    /* 00623336: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00623337: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623338: ret  */ FN_RET(0x006232b0); r_esp += 4; return;
}

void f_0062333c(void) /* sub_62333C */
{
    FN_ENTER(0x0062333c);
    /* 0062333c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062333d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623340: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00623342: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00623344: push 0x44610000 */ { u32 v = 0x44610000u; r_esp -= 4; W32(r_esp, v); }
    /* 00623349: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x62334eu); f_006134c8();
    /* 0062334e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623351: je 0x6233b2 */ if (fZ) goto L_006233b2;
L_00623353:; BB(0x00623353);
    /* 00623353: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 00623359: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0062335c: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 00623362: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623365: jle 0x6233ad */ if ((fZ||fS!=fO)) goto L_006233ad;
L_00623367:; BB(0x00623367);
    /* 00623367: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62336cu); f_008587a5();
    /* 0062336c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062336d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00623371: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00623375: fdiv dword ptr [0x9316d4] */ ST(0) = ST(0) / R_F32((u32)(0x9316d4u));
    /* 0062337b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062337d: fmul dword ptr [0x9316d0] */ ST(0) = ST(0) * R_F32((u32)(0x9316d0u));
    /* 00623383: fadd dword ptr [0x9316d8] */ ST(0) = ST(0) + R_F32((u32)(0x9316d8u));
    /* 00623389: fmul dword ptr [ebx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x6cu));
    /* 0062338c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062338f: call 0x623120 */ r_esp -= 4; W32(r_esp, 0x623394u); f_00623120();
    /* 00623394: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623397: jne 0x6233ad */ if (!fZ) goto L_006233ad;
L_00623399:; BB(0x00623399);
    /* 00623399: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 006233a3: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
L_006233ad:; BB(0x006233ad);
    /* 006233ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006233b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006233b1: ret  */ FN_RET(0x0062333c); r_esp += 4; return;
L_006233b2:; BB(0x006233b2);
    /* 006233b2: fld dword ptr [0x9316f8] */ FPUSH(R_F32((u32)(0x9316f8u)));
    /* 006233b8: fadd dword ptr [ebx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6cu));
    /* 006233bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006233bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006233bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006233c1: call 0x623120 */ r_esp -= 4; W32(r_esp, 0x6233c6u); f_00623120();
    /* 006233c6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006233c9: jne 0x6233ad */ if (!fZ) goto L_006233ad;
L_006233cb:; BB(0x006233cb);
    /* 006233cb: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 006233d5: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 006233df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006233e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006233e3: ret  */ FN_RET(0x0062333c); r_esp += 4; return;
}

void f_006233e4(void) /* sub_6233E4 */
{
    FN_ENTER(0x006233e4);
    /* 006233e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006233e5: mov esi, ecx */ r_esi = r_ecx;
    /* 006233e7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006233e9: mov ecx, esi */ r_ecx = r_esi;
    /* 006233eb: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006233f1: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006233f7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6233fau); call_ind(t); }
    /* 006233fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006233fc: je 0x623447 */ if (fZ) goto L_00623447;
L_006233fe:; BB(0x006233fe);
    /* 006233fe: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x623403u); f_0082d7b0();
    /* 00623403: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00623405: push dword ptr [esi + 0xf0] */ { u32 v = R32((u32)(r_esi+0xf0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062340b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062340d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062340f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x623414u); f_00830b74();
    /* 00623414: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00623417: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62341cu); f_0082d838();
    /* 0062341c: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0062341f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00623421: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x623426u); f_0082d8bc();
    /* 00623426: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00623429: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62342eu); f_00829cc8();
    /* 0062342e: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00623434: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00623437: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0062343d: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x623442u); f_0083bd00();
    /* 00623442: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x623447u); f_0082da80();
L_00623447:; BB(0x00623447);
    /* 00623447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623448: ret  */ FN_RET(0x006233e4); r_esp += 4; return;
}

void f_0062344c(void) /* sub_62344C */
{
    FN_ENTER(0x0062344c);
    /* 0062344c: mov ecx, dword ptr [0xa8ecc8] */ r_ecx = R32((u32)(0xa8ecc8u));
    /* 00623452: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00623454: je 0x623469 */ if (fZ) goto L_00623469;
L_00623456:; BB(0x00623456);
    /* 00623456: je 0x62345f */ if (fZ) goto L_0062345f;
L_00623458:; BB(0x00623458);
    /* 00623458: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062345a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62345fu); f_004066a8();
L_0062345f:; BB(0x0062345f);
    /* 0062345f: mov dword ptr [0xa8ecc8], 0 */ W32((u32)(0xa8ecc8u), 0x0u);
L_00623469:; BB(0x00623469);
    /* 00623469: ret  */ FN_RET(0x0062344c); r_esp += 4; return;
}

void f_0062346c(void)
{
    FN_ENTER(0x0062346c);
    /* 0062346c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062346d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062346f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00623471: push 0x8e2544 */ { u32 v = 0x8e2544u; r_esp -= 4; W32(r_esp, v); }
    /* 00623476: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062347c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062347d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00623484: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623487: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062348a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062348d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00623490: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00623493: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00623498: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062349f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6234a4u); f_005caba4();
    /* 006234a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006234a5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006234a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006234aa: je 0x6234dd */ if (fZ) goto L_006234dd;
L_006234ac:; BB(0x006234ac);
    /* 006234ac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006234b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006234ba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006234bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006234c0: call 0x6234e4 */ r_esp -= 4; W32(r_esp, 0x6234c5u); f_006234e4();
    /* 006234c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006234c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006234cf:; BB(0x006234cf);
    /* 006234cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006234d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006234d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006234db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006234dc: ret  */ FN_RET(0x0062346c); r_esp += 4; return;
L_006234dd:; BB(0x006234dd);
    /* 006234dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006234df: jmp 0x6234cf */ goto L_006234cf;
}

void f_006234e4(void) /* sub_6234E4 */
{
    FN_ENTER(0x006234e4);
    /* 006234e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006234e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006234e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006234e9: push 0x8e2560 */ { u32 v = 0x8e2560u; r_esp -= 4; W32(r_esp, v); }
    /* 006234ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006234f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006234f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006234fc: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006234ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00623502: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00623505: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00623508: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062350b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062350e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00623511: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00623514: call 0x623690 */ r_esp -= 4; W32(r_esp, 0x623519u); f_00623690();
    /* 00623519: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00623520: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00623523: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623526: mov dword ptr [ecx], 0xb28204 */ W32((u32)(r_ecx), 0xb28204u);
    /* 0062352c: mov eax, dword ptr [0x9c5648] */ r_eax = R32((u32)(0x9c5648u));
    /* 00623531: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623532: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00623535: call dword ptr [0xb28218] */ { u32 t = R32((u32)(0xb28218u)); r_esp -= 4; W32(r_esp, 0x62353bu); call_ind(t); }
    /* 0062353b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062353e: fild dword ptr [ecx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x84u)));
    /* 00623544: fmul dword ptr [0x9316c0] */ ST(0) = ST(0) * R_F32((u32)(0x9316c0u));
    /* 0062354a: fadd dword ptr [0x9316a8] */ ST(0) = ST(0) + R_F32((u32)(0x9316a8u));
    /* 00623550: mov eax, dword ptr [0xa8ecc8] */ r_eax = R32((u32)(0xa8ecc8u));
    /* 00623555: fld dword ptr [0x9316bc] */ FPUSH(R_F32((u32)(0x9316bcu)));
    /* 0062355b: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 00623561: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00623564: fld dword ptr [0x9316b8] */ FPUSH(R_F32((u32)(0x9316b8u)));
    /* 0062356a: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0062356d: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00623573: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00623576: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00623579: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0062357f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00623582: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 00623588: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0062358b: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0062358e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00623591: fadd dword ptr [ebx*4 + 0x931670] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x931670u));
    /* 00623598: fadd dword ptr [0x9316c8] */ ST(0) = ST(0) + R_F32((u32)(0x9316c8u));
    /* 0062359e: mov dword ptr [ecx + 0xb8], 0x3f8ccccd */ W32((u32)(r_ecx+0xb8u), 0x3f8ccccdu);
    /* 006235a8: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 006235ae: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 006235b8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006235bb: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 006235be: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006235c0: fst dword ptr [ecx + 0xf4] */ W_F32((u32)(r_ecx+0xf4u), ST(0));
    /* 006235c6: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 006235c8: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 006235ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006235cc: fmul dword ptr [0x9316b4] */ ST(0) = ST(0) * R_F32((u32)(0x9316b4u));
    /* 006235d2: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006235d4: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 006235de: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 006235e4: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 006235e7: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 006235eb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006235f0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006235f3: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 006235f6: fistp dword ptr [ecx + 0xf8] */ W32((u32)(r_ecx+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006235fc: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 006235ff: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x623604u); f_008587a5();
    /* 00623604: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00623607: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 0062360d: fmul dword ptr [0x9316c0] */ ST(0) = ST(0) * R_F32((u32)(0x9316c0u));
    /* 00623613: fadd dword ptr [0x9316a4] */ ST(0) = ST(0) + R_F32((u32)(0x9316a4u));
    /* 00623619: fld dword ptr [0x9316bc] */ FPUSH(R_F32((u32)(0x9316bcu)));
    /* 0062361f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00623621: fstp dword ptr [edx + 0xec] */ W_F32((u32)(r_edx+0xecu), ST(0)); FPOP();
    /* 00623627: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062362a: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0062362d: fdiv dword ptr [0x9316b0] */ ST(0) = ST(0) / R_F32((u32)(0x9316b0u));
    /* 00623633: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00623635: fmul dword ptr [0x9316b4] */ ST(0) = ST(0) * R_F32((u32)(0x9316b4u));
    /* 0062363b: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062363d: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00623640: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00623644: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00623649: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062364c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0062364f: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00623652: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00623655: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00623658: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
    /* 0062365e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x623663u); f_0082dcbc();
    /* 00623663: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00623666: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623669: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062366c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062366f: fld dword ptr [eax + 0xec] */ FPUSH(R_F32((u32)(r_eax+0xecu)));
    /* 00623675: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00623677: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 0062367d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623680: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00623687: mov esp, ebp */ r_esp = r_ebp;
    /* 00623689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062368a: ret 4 */ FN_RET(0x006234e4); r_esp += 8; return;
}

void f_00623690(void) /* sub_623690 */
{
    FN_ENTER(0x00623690);
    /* 00623690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623691: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623694: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00623696: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062369c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062369e: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x6236a3u); f_006132e4();
    /* 006236a3: fild dword ptr [ebp + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x84u)));
    /* 006236a9: fmul dword ptr [0x93169c] */ ST(0) = ST(0) * R_F32((u32)(0x93169cu));
    /* 006236af: fadd dword ptr [0x9316a8] */ ST(0) = ST(0) + R_F32((u32)(0x9316a8u));
    /* 006236b5: fld dword ptr [0x931688] */ FPUSH(R_F32((u32)(0x931688u)));
    /* 006236bb: fadd dword ptr [ebp + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x68u));
    /* 006236be: fld dword ptr [0x931698] */ FPUSH(R_F32((u32)(0x931698u)));
    /* 006236c4: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 006236c7: fld dword ptr [0x931694] */ FPUSH(R_F32((u32)(0x931694u)));
    /* 006236cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006236cf: fstp dword ptr [ebp + 0xd0] */ W_F32((u32)(r_ebp+0xd0u), ST(0)); FPOP();
    /* 006236d5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006236d7: fst dword ptr [ebp + 0xf4] */ W_F32((u32)(r_ebp+0xf4u), ST(0));
    /* 006236dd: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006236df: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 006236e1: fmul dword ptr [0x931690] */ ST(0) = ST(0) * R_F32((u32)(0x931690u));
    /* 006236e7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006236e9: mov dword ptr [ebp + 0xd4], eax */ W32((u32)(r_ebp+0xd4u), r_eax);
    /* 006236ef: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 006236f2: mov dword ptr [ebp], 0xb281d0 */ W32((u32)(r_ebp), 0xb281d0u);
    /* 006236f9: mov edx, dword ptr [0x9c5644] */ r_edx = R32((u32)(0x9c5644u));
    /* 006236ff: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00623702: mov dword ptr [ebp + 0xd8], eax */ W32((u32)(r_ebp+0xd8u), r_eax);
    /* 00623708: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0062370b: mov dword ptr [ebp + 0xcc], 0 */ W32((u32)(r_ebp+0xccu), 0x0u);
    /* 00623715: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 0062371b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0062371e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00623722: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00623727: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0062372b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0062372f: fistp dword ptr [ebp + 0xf8] */ W32((u32)(r_ebp+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00623735: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00623738: mov dword ptr [ebp + 0xe8], 0 */ W32((u32)(r_ebp+0xe8u), 0x0u);
    /* 00623742: mov dword ptr [ebp + 0xe4], 0 */ W32((u32)(r_ebp+0xe4u), 0x0u);
    /* 0062374c: mov dword ptr [ebp + 0xe0], 0 */ W32((u32)(r_ebp+0xe0u), 0x0u);
    /* 00623756: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62375bu); f_008587a5();
    /* 0062375b: fild dword ptr [ebp + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x88u)));
    /* 00623761: fmul dword ptr [0x93169c] */ ST(0) = ST(0) * R_F32((u32)(0x93169cu));
    /* 00623767: fadd dword ptr [0x9316a4] */ ST(0) = ST(0) + R_F32((u32)(0x9316a4u));
    /* 0062376d: fld dword ptr [0x931698] */ FPUSH(R_F32((u32)(0x931698u)));
    /* 00623773: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00623775: fstp dword ptr [ebp + 0xec] */ W_F32((u32)(r_ebp+0xecu), ST(0)); FPOP();
    /* 0062377b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062377f: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00623783: fdiv dword ptr [0x93168c] */ ST(0) = ST(0) / R_F32((u32)(0x93168cu));
    /* 00623789: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062378b: fmul dword ptr [0x931690] */ ST(0) = ST(0) * R_F32((u32)(0x931690u));
    /* 00623791: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00623793: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00623796: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0062379a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062379f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006237a3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006237a7: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006237ab: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006237ae: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006237b2: mov dword ptr [ebp + 0xfc], ecx */ W32((u32)(r_ebp+0xfcu), r_ecx);
    /* 006237b8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6237bdu); f_0082dcbc();
    /* 006237bd: fld dword ptr [ebp + 0xec] */ FPUSH(R_F32((u32)(r_ebp+0xecu)));
    /* 006237c3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006237c5: fstp dword ptr [ebp + 0xf0] */ W_F32((u32)(r_ebp+0xf0u), ST(0)); FPOP();
    /* 006237cb: mov eax, ebp */ r_eax = r_ebp;
    /* 006237cd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006237d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006237d1: ret  */ FN_RET(0x00623690); r_esp += 4; return;
}

void f_006237d4(void) /* sub_6237D4 */
{
    FN_ENTER(0x006237d4);
    /* 006237d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006237d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006237d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006237d9: push 0x8e25a2 */ { u32 v = 0x8e25a2u; r_esp -= 4; W32(r_esp, v); }
    /* 006237de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006237e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006237e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006237ec: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006237ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006237f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006237f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006237f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006237fb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x623800u); f_00807ac0();
    /* 00623800: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623803: je 0x62380f */ if (fZ) goto L_0062380f;
L_00623805:; BB(0x00623805);
    /* 00623805: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623808: jl 0x62385f */ if ((fS!=fO)) goto L_0062385f;
L_0062380a:; BB(0x0062380a);
    /* 0062380a: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062380d: jg 0x62385f */ if ((!fZ&&fS==fO)) goto L_0062385f;
L_0062380f:; BB(0x0062380f);
    /* 0062380f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00623816: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062381b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x623820u); f_008581c5();
    /* 00623820: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00623821: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00623824: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623826: je 0x6238b7 */ if (fZ) goto L_006238b7;
L_0062382c:; BB(0x0062382c);
    /* 0062382c: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00623833: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062383a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062383d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062383f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623842: push 0x9c5634 */ { u32 v = 0x9c5634u; r_esp -= 4; W32(r_esp, v); }
    /* 00623847: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00623849: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62384eu); f_005b7a84();
    /* 0062384e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00623851: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00623858:; BB(0x00623858);
    /* 00623858: mov dword ptr [0xa8ecc8], eax */ W32((u32)(0xa8ecc8u), r_eax);
    /* 0062385d: jmp 0x6238a9 */ goto L_006238a9;
L_0062385f:; BB(0x0062385f);
    /* 0062385f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00623866: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062386b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x623870u); f_008581c5();
    /* 00623870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00623871: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00623874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623876: je 0x6238bb */ if (fZ) goto L_006238bb;
L_00623878:; BB(0x00623878);
    /* 00623878: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0062387f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00623886: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00623889: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062388b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062388c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062388d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062388e: push 0x9c5614 */ { u32 v = 0x9c5614u; r_esp -= 4; W32(r_esp, v); }
    /* 00623893: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00623895: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62389au); f_005b7a84();
    /* 0062389a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062389d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006238a4:; BB(0x006238a4);
    /* 006238a4: mov dword ptr [0xa8ecc8], eax */ W32((u32)(0xa8ecc8u), r_eax);
L_006238a9:; BB(0x006238a9);
    /* 006238a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006238ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006238b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006238b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006238b6: ret  */ FN_RET(0x006237d4); r_esp += 4; return;
L_006238b7:; BB(0x006238b7);
    /* 006238b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006238b9: jmp 0x623858 */ goto L_00623858;
L_006238bb:; BB(0x006238bb);
    /* 006238bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006238bd: jmp 0x6238a4 */ goto L_006238a4;
}

void f_006238c0(void) /* sub_6238C0 */
{
    FN_ENTER(0x006238c0);
    /* 006238c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006238c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006238c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006238c5: call 0x6238e4 */ r_esp -= 4; W32(r_esp, 0x6238cau); f_006238e4();
    /* 006238ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006238ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006238d0: jne 0x6238d6 */ if (!fZ) goto L_006238d6;
L_006238d2:; BB(0x006238d2);
    /* 006238d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006238d3: ret 4 */ FN_RET(0x006238c0); r_esp += 8; return;
L_006238d6:; BB(0x006238d6);
    /* 006238d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006238d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6238dcu); f_005c2f74();
    /* 006238dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006238dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006238de: ret 4 */ FN_RET(0x006238c0); r_esp += 8; return;
}

void f_006238e4(void) /* sub_6238E4 */
{
    FN_ENTER(0x006238e4);
    /* 006238e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006238e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006238e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006238e9: push 0x8e25bc */ { u32 v = 0x8e25bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006238ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006238f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006238f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006238fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006238ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00623902: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00623905: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00623908: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062390b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062390e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623911: mov dword ptr [ecx], 0xb282d8 */ W32((u32)(r_ecx), 0xb282d8u);
    /* 00623917: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062391e: call 0x622f58 */ r_esp -= 4; W32(r_esp, 0x623923u); f_00622f58();
    /* 00623923: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623926: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062392d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062392f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623930: ret  */ FN_RET(0x006238e4); r_esp += 4; return;
}

void f_00623934(void) /* sub_623934 */
{
    FN_ENTER(0x00623934);
    /* 00623934: mov eax, dword ptr [0xa8ecec] */ r_eax = R32((u32)(0xa8ececu));
    /* 00623939: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062393c: je 0x623947 */ if (fZ) goto L_00623947;
L_0062393e:; BB(0x0062393e);
    /* 0062393e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623941: mov dword ptr [0xa8ecec], eax */ W32((u32)(0xa8ececu), r_eax);
    /* 00623946: ret  */ FN_RET(0x00623934); r_esp += 4; return;
L_00623947:; BB(0x00623947);
    /* 00623947: mov edx, dword ptr [0xa8ece8] */ r_edx = R32((u32)(0xa8ece8u));
    /* 0062394d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062394f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x623954u); f_0082d8bc();
    /* 00623954: mov eax, dword ptr [0xa8ecec] */ r_eax = R32((u32)(0xa8ececu));
    /* 00623959: jmp 0x62393e */ goto L_0062393e;
}

void f_0062395c(void) /* sub_62395C */
{
    FN_ENTER(0x0062395c);
    /* 0062395c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062395d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062395f: mov ecx, dword ptr [ebx + 0xfc] */ r_ecx = R32((u32)(r_ebx+0xfcu));
    /* 00623965: add ecx, dword ptr [ebx + 0xf8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xf8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062396b: mov dword ptr [ebx + 0xfc], ecx */ W32((u32)(r_ebx+0xfcu), r_ecx);
    /* 00623971: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x623976u); f_0082dcbc();
    /* 00623976: fld dword ptr [ebx + 0xec] */ FPUSH(R_F32((u32)(r_ebx+0xecu)));
    /* 0062397c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062397e: fstp dword ptr [ebx + 0xf0] */ W_F32((u32)(r_ebx+0xf0u), ST(0)); FPOP();
    /* 00623984: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x623989u); f_004f7c84();
    /* 00623989: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062398c: je 0x6239e0 */ if (fZ) goto L_006239e0;
L_0062398e:; BB(0x0062398e);
    /* 0062398e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00623990: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x623995u); f_0061347c();
    /* 00623995: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 0062399b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062399d: je 0x6239d0 */ if (fZ) goto L_006239d0;
L_0062399f:; BB(0x0062399f);
    /* 0062399f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006239a2: je 0x6239c7 */ if (fZ) goto L_006239c7;
L_006239a4:; BB(0x006239a4);
    /* 006239a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006239a7: jne 0x6239b9 */ if (!fZ) goto L_006239b9;
L_006239a9:; BB(0x006239a9);
    /* 006239a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006239ab: call 0x6239ec */ r_esp -= 4; W32(r_esp, 0x6239b0u); f_006239ec();
    /* 006239b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006239b2: call 0x623070 */ r_esp -= 4; W32(r_esp, 0x6239b7u); f_00623070();
    /* 006239b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006239b8: ret  */ FN_RET(0x0062395c); r_esp += 4; return;
L_006239b9:; BB(0x006239b9);
    /* 006239b9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006239bc: jne 0x6239ce */ if (!fZ) goto L_006239ce;
L_006239be:; BB(0x006239be);
    /* 006239be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006239c0: call 0x623028 */ r_esp -= 4; W32(r_esp, 0x6239c5u); f_00623028();
    /* 006239c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006239c6: ret  */ FN_RET(0x0062395c); r_esp += 4; return;
L_006239c7:; BB(0x006239c7);
    /* 006239c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006239c9: call 0x6232b0 */ r_esp -= 4; W32(r_esp, 0x6239ceu); f_006232b0();
L_006239ce:; BB(0x006239ce);
    /* 006239ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006239cf: ret  */ FN_RET(0x0062395c); r_esp += 4; return;
L_006239d0:; BB(0x006239d0);
    /* 006239d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006239d2: call 0x6239ec */ r_esp -= 4; W32(r_esp, 0x6239d7u); f_006239ec();
    /* 006239d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006239d9: call 0x62333c */ r_esp -= 4; W32(r_esp, 0x6239deu); f_0062333c();
    /* 006239de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006239df: ret  */ FN_RET(0x0062395c); r_esp += 4; return;
L_006239e0:; BB(0x006239e0);
    /* 006239e0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006239e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006239e4: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6239e7u); call_ind(t); }
    /* 006239e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006239e8: ret  */ FN_RET(0x0062395c); r_esp += 4; return;
}

void f_006239ec(void) /* sub_6239EC */
{
    FN_ENTER(0x006239ec);
    /* 006239ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006239ed: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006239f0: mov esi, ecx */ r_esi = r_ecx;
    /* 006239f2: movsx eax, word ptr [esi + 0x100] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x100u));
    /* 006239f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006239fb: je 0x623bc9 */ if (fZ) goto L_00623bc9;
L_00623a01:; BB(0x00623a01);
    /* 00623a01: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623a04: je 0x623b67 */ if (fZ) goto L_00623b67;
L_00623a0a:; BB(0x00623a0a);
    /* 00623a0a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623a0d: je 0x623b04 */ if (fZ) goto L_00623b04;
L_00623a13:; BB(0x00623a13);
    /* 00623a13: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623a16: je 0x623aa3 */ if (fZ) goto L_00623aa3;
L_00623a1c:; BB(0x00623a1c);
    /* 00623a1c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623a1f: jne 0x623a83 */ if (!fZ) goto L_00623a83;
L_00623a21:; BB(0x00623a21);
    /* 00623a21: mov eax, dword ptr [esi + 0x104] */ r_eax = R32((u32)(r_esi+0x104u));
    /* 00623a27: sub eax, dword ptr [0xa8ecd4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8ecd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623a2d: cmp eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623a32: jle 0x623a3f */ if ((fZ||fS!=fO)) goto L_00623a3f;
L_00623a34:; BB(0x00623a34);
    /* 00623a34: mov dword ptr [esi + 0x104], eax */ W32((u32)(r_esi+0x104u), r_eax);
    /* 00623a3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623a3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623a3e: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623a3f:; BB(0x00623a3f);
    /* 00623a3f: movsx eax, word ptr [esi + 0x102] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x102u));
    /* 00623a46: mov dword ptr [esi + 0x104], 0xffff0001 */ W32((u32)(r_esi+0x104u), 0xffff0001u);
    /* 00623a50: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623a53: mov word ptr [esi + 0x102], ax */ W16((u32)(r_esi+0x102u), (u16)r_eax);
    /* 00623a5a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00623a5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00623a5f: jg 0x623a72 */ if ((!fZ&&fS==fO)) goto L_00623a72;
L_00623a61:; BB(0x00623a61);
    /* 00623a61: mov eax, 3 */ r_eax = 0x3u;
    /* 00623a66: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623a6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623a70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623a71: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623a72:; BB(0x00623a72);
    /* 00623a72: mov eax, 5 */ r_eax = 0x5u;
    /* 00623a77: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623a7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623a81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623a82: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623a83:; BB(0x00623a83);
    /* 00623a83: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623a86: jne 0x623aff */ if (!fZ) goto L_00623aff;
L_00623a88:; BB(0x00623a88);
    /* 00623a88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623a8a: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623a91: mov dword ptr [esi + 0x104], eax */ W32((u32)(r_esi+0x104u), r_eax);
    /* 00623a97: mov word ptr [esi + 0x102], ax */ W16((u32)(r_esi+0x102u), (u16)r_eax);
    /* 00623a9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623aa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623aa2: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623aa3:; BB(0x00623aa3);
    /* 00623aa3: mov eax, dword ptr [0xa8ecd4] */ r_eax = R32((u32)(0xa8ecd4u));
    /* 00623aa8: add eax, dword ptr [esi + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x104u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623aae: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623ab3: jge 0x623ac0 */ if ((fS==fO)) goto L_00623ac0;
L_00623ab5:; BB(0x00623ab5);
    /* 00623ab5: mov dword ptr [esi + 0x104], eax */ W32((u32)(r_esi+0x104u), r_eax);
    /* 00623abb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623abe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623abf: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623ac0:; BB(0x00623ac0);
    /* 00623ac0: movsx eax, word ptr [esi + 0x102] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x102u));
    /* 00623ac7: mov dword ptr [esi + 0x104], 0xffff */ W32((u32)(r_esi+0x104u), 0xffffu);
    /* 00623ad1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623ad4: mov word ptr [esi + 0x102], ax */ W16((u32)(r_esi+0x102u), (u16)r_eax);
    /* 00623adb: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00623ade: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00623ae0: jg 0x623af3 */ if ((!fZ&&fS==fO)) goto L_00623af3;
L_00623ae2:; BB(0x00623ae2);
    /* 00623ae2: mov eax, 4 */ r_eax = 0x4u;
    /* 00623ae7: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623aee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623af1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623af2: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623af3:; BB(0x00623af3);
    /* 00623af3: mov eax, 5 */ r_eax = 0x5u;
    /* 00623af8: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
L_00623aff:; BB(0x00623aff);
    /* 00623aff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623b02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623b03: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623b04:; BB(0x00623b04);
    /* 00623b04: mov eax, dword ptr [esi + 0x104] */ r_eax = R32((u32)(r_esi+0x104u));
    /* 00623b0a: sub eax, dword ptr [0xa8ecd4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8ecd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623b10: cmp eax, 0xffffdc72 */ {  u32 a = r_eax; u32 b = 0xffffdc72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623b15: jle 0x623b22 */ if ((fZ||fS!=fO)) goto L_00623b22;
L_00623b17:; BB(0x00623b17);
    /* 00623b17: mov dword ptr [esi + 0x104], eax */ W32((u32)(r_esi+0x104u), r_eax);
    /* 00623b1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623b20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623b21: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623b22:; BB(0x00623b22);
    /* 00623b22: movsx eax, word ptr [esi + 0x102] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x102u));
    /* 00623b29: mov dword ptr [esi + 0x104], 0xffffdc72 */ W32((u32)(r_esi+0x104u), 0xffffdc72u);
    /* 00623b33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623b36: mov word ptr [esi + 0x102], ax */ W16((u32)(r_esi+0x102u), (u16)r_eax);
    /* 00623b3d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00623b40: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623b43: jge 0x623b56 */ if ((fS==fO)) goto L_00623b56;
L_00623b45:; BB(0x00623b45);
    /* 00623b45: mov eax, 1 */ r_eax = 0x1u;
    /* 00623b4a: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623b51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623b54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623b55: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623b56:; BB(0x00623b56);
    /* 00623b56: mov eax, 5 */ r_eax = 0x5u;
    /* 00623b5b: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623b62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623b65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623b66: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623b67:; BB(0x00623b67);
    /* 00623b67: mov eax, dword ptr [0xa8ecd4] */ r_eax = R32((u32)(0xa8ecd4u));
    /* 00623b6c: add eax, dword ptr [esi + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x104u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623b72: cmp eax, 0x238e */ {  u32 a = r_eax; u32 b = 0x238eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623b77: jge 0x623b84 */ if ((fS==fO)) goto L_00623b84;
L_00623b79:; BB(0x00623b79);
    /* 00623b79: mov dword ptr [esi + 0x104], eax */ W32((u32)(r_esi+0x104u), r_eax);
    /* 00623b7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623b82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623b83: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623b84:; BB(0x00623b84);
    /* 00623b84: movsx eax, word ptr [esi + 0x102] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x102u));
    /* 00623b8b: mov dword ptr [esi + 0x104], 0x238e */ W32((u32)(r_esi+0x104u), 0x238eu);
    /* 00623b95: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623b98: mov word ptr [esi + 0x102], ax */ W16((u32)(r_esi+0x102u), (u16)r_eax);
    /* 00623b9f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00623ba2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623ba5: jge 0x623bb8 */ if ((fS==fO)) goto L_00623bb8;
L_00623ba7:; BB(0x00623ba7);
    /* 00623ba7: mov eax, 2 */ r_eax = 0x2u;
    /* 00623bac: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623bb3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623bb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623bb7: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623bb8:; BB(0x00623bb8);
    /* 00623bb8: mov eax, 5 */ r_eax = 0x5u;
    /* 00623bbd: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623bc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623bc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623bc8: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623bc9:; BB(0x00623bc9);
    /* 00623bc9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x623bceu); f_008587a5();
    /* 00623bce: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00623bd1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00623bd4: fdiv dword ptr [0x931800] */ ST(0) = ST(0) / R_F32((u32)(0x931800u));
    /* 00623bda: fcom dword ptr [0x9317fc] */ fx_compare(ST(0), R_F32((u32)(0x9317fcu))); 
    /* 00623be0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00623be2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00623be3: ja 0x623bf8 */ if ((!fC&&!fZ)) goto L_00623bf8;
L_00623be5:; BB(0x00623be5);
    /* 00623be5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00623be7: mov eax, 1 */ r_eax = 0x1u;
    /* 00623bec: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623bf3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623bf6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623bf7: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623bf8:; BB(0x00623bf8);
    /* 00623bf8: fcom dword ptr [0x9317f8] */ fx_compare(ST(0), R_F32((u32)(0x9317f8u))); 
    /* 00623bfe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00623c00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00623c01: ja 0x623c16 */ if ((!fC&&!fZ)) goto L_00623c16;
L_00623c03:; BB(0x00623c03);
    /* 00623c03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00623c05: mov eax, 2 */ r_eax = 0x2u;
    /* 00623c0a: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623c11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623c14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623c15: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623c16:; BB(0x00623c16);
    /* 00623c16: fcom dword ptr [0x9317f4] */ fx_compare(ST(0), R_F32((u32)(0x9317f4u))); 
    /* 00623c1c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00623c1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00623c1f: ja 0x623c34 */ if ((!fC&&!fZ)) goto L_00623c34;
L_00623c21:; BB(0x00623c21);
    /* 00623c21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00623c23: mov eax, 3 */ r_eax = 0x3u;
    /* 00623c28: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623c2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623c32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623c33: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623c34:; BB(0x00623c34);
    /* 00623c34: fcomp dword ptr [0x9317f0] */ fx_compare(ST(0), R_F32((u32)(0x9317f0u))); FPOP();
    /* 00623c3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00623c3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00623c3d: ja 0x623c50 */ if ((!fC&&!fZ)) goto L_00623c50;
L_00623c3f:; BB(0x00623c3f);
    /* 00623c3f: mov eax, 4 */ r_eax = 0x4u;
    /* 00623c44: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623c4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623c4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623c4f: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
L_00623c50:; BB(0x00623c50);
    /* 00623c50: mov eax, 5 */ r_eax = 0x5u;
    /* 00623c55: mov word ptr [esi + 0x100], ax */ W16((u32)(r_esi+0x100u), (u16)r_eax);
    /* 00623c5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623c5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623c60: ret  */ FN_RET(0x006239ec); r_esp += 4; return;
}

void f_00623c64(void) /* sub_623C64 */
{
    FN_ENTER(0x00623c64);
    /* 00623c64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00623c65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00623c67: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00623c69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00623c6b: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00623c71: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00623c77: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x623c7au); call_ind(t); }
    /* 00623c7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00623c7c: je 0x623d14 */ if (fZ) goto L_00623d14;
L_00623c82:; BB(0x00623c82);
    /* 00623c82: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x623c87u); f_0082d7b0();
    /* 00623c87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00623c89: push dword ptr [ebx + 0xf0] */ { u32 v = R32((u32)(r_ebx+0xf0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00623c8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00623c91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00623c93: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x623c98u); f_00830b74();
    /* 00623c98: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00623c9b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x623ca0u); f_0082d838();
    /* 00623ca0: movsx eax, word ptr [ebx + 0x100] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x100u));
    /* 00623ca7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623caa: jl 0x623cc3 */ if ((fS!=fO)) goto L_00623cc3;
L_00623cac:; BB(0x00623cac);
    /* 00623cac: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623caf: jg 0x623cc3 */ if ((!fZ&&fS==fO)) goto L_00623cc3;
L_00623cb1:; BB(0x00623cb1);
    /* 00623cb1: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00623cb4: sub edx, dword ptr [ebx + 0x104] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00623cba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00623cbc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x623cc1u); f_0082d8bc();
    /* 00623cc1: jmp 0x623ccd */ goto L_00623ccd;
L_00623cc3:; BB(0x00623cc3);
    /* 00623cc3: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00623cc6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00623cc8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x623ccdu); f_0082d8bc();
L_00623ccd:; BB(0x00623ccd);
    /* 00623ccd: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00623cd0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x623cd5u); f_00829cc8();
    /* 00623cd5: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
    /* 00623cdb: mov dword ptr [0xa8ecec], 0 */ W32((u32)(0xa8ececu), 0x0u);
    /* 00623ce5: mov ecx, 0x623934 */ r_ecx = 0x623934u;
    /* 00623cea: mov dword ptr [0xa8ece8], eax */ W32((u32)(0xa8ece8u), r_eax);
    /* 00623cef: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x623cf4u); f_0082fac4();
    /* 00623cf4: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00623cfa: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00623cfd: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 00623d03: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x623d08u); f_0083bd00();
    /* 00623d08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00623d0a: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x623d0fu); f_0082fac4();
    /* 00623d0f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x623d14u); f_0082da80();
L_00623d14:; BB(0x00623d14);
    /* 00623d14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00623d15: ret  */ FN_RET(0x00623c64); r_esp += 4; return;
}

void f_00623d18(void) /* sub_623D18 */
{
    FN_ENTER(0x00623d18);
    /* 00623d18: mov ecx, dword ptr [0xa8ece4] */ r_ecx = R32((u32)(0xa8ece4u));
    /* 00623d1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00623d20: je 0x623d35 */ if (fZ) goto L_00623d35;
L_00623d22:; BB(0x00623d22);
    /* 00623d22: je 0x623d2b */ if (fZ) goto L_00623d2b;
L_00623d24:; BB(0x00623d24);
    /* 00623d24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00623d26: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x623d2bu); f_004066a8();
L_00623d2b:; BB(0x00623d2b);
    /* 00623d2b: mov dword ptr [0xa8ece4], 0 */ W32((u32)(0xa8ece4u), 0x0u);
L_00623d35:; BB(0x00623d35);
    /* 00623d35: ret  */ FN_RET(0x00623d18); r_esp += 4; return;
}

void f_00623d38(void)
{
    FN_ENTER(0x00623d38);
    /* 00623d38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623d39: mov ebp, esp */ r_ebp = r_esp;
    /* 00623d3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00623d3d: push 0x8e25e4 */ { u32 v = 0x8e25e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00623d42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00623d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623d49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00623d50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623d53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00623d56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00623d59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00623d5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00623d5f: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 00623d64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00623d6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x623d70u); f_005caba4();
    /* 00623d70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00623d71: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00623d74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623d76: je 0x623da9 */ if (fZ) goto L_00623da9;
L_00623d78:; BB(0x00623d78);
    /* 00623d78: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00623d7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00623d86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00623d89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623d8c: call 0x623db0 */ r_esp -= 4; W32(r_esp, 0x623d91u); f_00623db0();
    /* 00623d91: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623d94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00623d9b:; BB(0x00623d9b);
    /* 00623d9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623d9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00623da5: mov esp, ebp */ r_esp = r_ebp;
    /* 00623da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623da8: ret  */ FN_RET(0x00623d38); r_esp += 4; return;
L_00623da9:; BB(0x00623da9);
    /* 00623da9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00623dab: jmp 0x623d9b */ goto L_00623d9b;
}

void f_00623db0(void) /* sub_623DB0 */
{
    FN_ENTER(0x00623db0);
    /* 00623db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00623db3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00623db5: push 0x8e2600 */ { u32 v = 0x8e2600u; r_esp -= 4; W32(r_esp, v); }
    /* 00623dba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00623dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623dc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00623dc8: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623dcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00623dce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00623dd1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00623dd4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00623dd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00623dda: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00623ddd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00623de0: call 0x623690 */ r_esp -= 4; W32(r_esp, 0x623de5u); f_00623690();
    /* 00623de5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00623dec: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00623def: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623df2: mov dword ptr [ecx], 0xb282d8 */ W32((u32)(r_ecx), 0xb282d8u);
    /* 00623df8: mov eax, dword ptr [0x9c567c] */ r_eax = R32((u32)(0x9c567cu));
    /* 00623dfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623dfe: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00623e01: call dword ptr [0xb282ec] */ { u32 t = R32((u32)(0xb282ecu)); r_esp -= 4; W32(r_esp, 0x623e07u); call_ind(t); }
    /* 00623e07: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00623e0a: fild dword ptr [ecx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x84u)));
    /* 00623e10: fmul dword ptr [0x9317e0] */ ST(0) = ST(0) * R_F32((u32)(0x9317e0u));
    /* 00623e16: fadd dword ptr [0x9317c8] */ ST(0) = ST(0) + R_F32((u32)(0x9317c8u));
    /* 00623e1c: mov eax, dword ptr [0xa8ece4] */ r_eax = R32((u32)(0xa8ece4u));
    /* 00623e21: fld dword ptr [0x9317dc] */ FPUSH(R_F32((u32)(0x9317dcu)));
    /* 00623e27: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 00623e2d: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00623e30: fld dword ptr [0x9317d8] */ FPUSH(R_F32((u32)(0x9317d8u)));
    /* 00623e36: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00623e39: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00623e3f: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00623e42: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00623e45: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00623e4b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00623e4e: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 00623e54: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00623e57: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00623e5a: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00623e5d: fadd dword ptr [ebx*4 + 0x9317a0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x9317a0u));
    /* 00623e64: fadd dword ptr [0x9317e8] */ ST(0) = ST(0) + R_F32((u32)(0x9317e8u));
    /* 00623e6a: mov dword ptr [ecx + 0xb8], 0x3f800000 */ W32((u32)(r_ecx+0xb8u), 0x3f800000u);
    /* 00623e74: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 00623e7a: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 00623e84: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00623e87: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00623e8a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00623e8c: fst dword ptr [ecx + 0xf4] */ W_F32((u32)(r_ecx+0xf4u), ST(0));
    /* 00623e92: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00623e94: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 00623e96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00623e98: fmul dword ptr [0x9317d4] */ ST(0) = ST(0) * R_F32((u32)(0x9317d4u));
    /* 00623e9e: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00623ea0: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 00623eaa: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 00623eb0: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00623eb3: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00623eb7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00623ebc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00623ebf: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00623ec2: fistp dword ptr [ecx + 0xf8] */ W32((u32)(r_ecx+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00623ec8: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00623ecb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x623ed0u); f_008587a5();
    /* 00623ed0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00623ed3: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 00623ed9: fmul dword ptr [0x9317e0] */ ST(0) = ST(0) * R_F32((u32)(0x9317e0u));
    /* 00623edf: fadd dword ptr [0x9317c4] */ ST(0) = ST(0) + R_F32((u32)(0x9317c4u));
    /* 00623ee5: fld dword ptr [0x9317dc] */ FPUSH(R_F32((u32)(0x9317dcu)));
    /* 00623eeb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00623eed: fstp dword ptr [edx + 0xec] */ W_F32((u32)(r_edx+0xecu), ST(0)); FPOP();
    /* 00623ef3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00623ef6: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00623ef9: fdiv dword ptr [0x9317d0] */ ST(0) = ST(0) / R_F32((u32)(0x9317d0u));
    /* 00623eff: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00623f01: fmul dword ptr [0x9317d4] */ ST(0) = ST(0) * R_F32((u32)(0x9317d4u));
    /* 00623f07: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00623f09: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00623f0c: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00623f10: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00623f15: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00623f18: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00623f1b: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00623f1e: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00623f21: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00623f24: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
    /* 00623f2a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x623f2fu); f_0082dcbc();
    /* 00623f2f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00623f32: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623f35: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00623f38: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00623f3b: fld dword ptr [eax + 0xec] */ FPUSH(R_F32((u32)(r_eax+0xecu)));
    /* 00623f41: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00623f43: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 00623f49: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00623f4b: mov word ptr [eax + 0x100], dx */ W16((u32)(r_eax+0x100u), (u16)r_edx);
    /* 00623f52: mov word ptr [eax + 0x102], dx */ W16((u32)(r_eax+0x102u), (u16)r_edx);
    /* 00623f59: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 00623f5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623f62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00623f69: mov esp, ebp */ r_esp = r_ebp;
    /* 00623f6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623f6c: ret 4 */ FN_RET(0x00623db0); r_esp += 8; return;
}

void f_00623f70(void) /* sub_623F70 */
{
    FN_ENTER(0x00623f70);
    /* 00623f70: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623f73: fld dword ptr [0x9317bc] */ FPUSH(R_F32((u32)(0x9317bcu)));
    /* 00623f79: fld dword ptr [0x9317b4] */ FPUSH(R_F32((u32)(0x9317b4u)));
    /* 00623f7f: mov dword ptr [0xa8ecd8], 0x40700000 */ W32((u32)(0xa8ecd8u), 0x40700000u);
    /* 00623f89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00623f8b: fdiv dword ptr [0xa8ecd8] */ ST(0) = ST(0) / R_F32((u32)(0xa8ecd8u));
    /* 00623f91: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00623f94: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00623f98: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00623f9d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00623fa1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00623fa5: fistp dword ptr [0xa8ecd4] */ W32((u32)(0xa8ecd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00623fab: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00623fae: mov dword ptr [0xa8ecdc], 0x41f00000 */ W32((u32)(0xa8ecdcu), 0x41f00000u);
    /* 00623fb8: fld dword ptr [0xa8ecdc] */ FPUSH(R_F32((u32)(0xa8ecdcu)));
    /* 00623fbe: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00623fc0: fmul dword ptr [0x9317b0] */ ST(0) = ST(0) * R_F32((u32)(0x9317b0u));
    /* 00623fc6: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00623fc8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00623fcb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00623fcf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00623fd4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00623fd8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00623fdc: fistp dword ptr [0xa8ece0] */ W32((u32)(0xa8ece0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00623fe2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00623fe5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00623fe8: ret  */ FN_RET(0x00623f70); r_esp += 4; return;
}

void f_00623fec(void) /* sub_623FEC */
{
    FN_ENTER(0x00623fec);
    /* 00623fec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623fed: mov ebp, esp */ r_ebp = r_esp;
    /* 00623fef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00623ff1: push 0x8e2628 */ { u32 v = 0x8e2628u; r_esp -= 4; W32(r_esp, v); }
    /* 00623ff6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00623ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623ffd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00624004: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624007: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062400a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062400d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00624010: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00624013: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00624018: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0062401f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x624024u); f_008581c5();
    /* 00624024: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00624025: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00624028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062402a: je 0x6240e4 */ if (fZ) goto L_006240e4;
L_00624030:; BB(0x00624030);
    /* 00624030: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00624037: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062403e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00624041: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624046: push 0x9c566c */ { u32 v = 0x9c566cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062404b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062404d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x624052u); f_005b7a84();
    /* 00624052: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00624055: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0062405c:; BB(0x0062405c);
    /* 0062405c: mov dword ptr [0xa8ece4], eax */ W32((u32)(0xa8ece4u), r_eax);
    /* 00624061: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00624068: mov ecx, dword ptr [0x931794] */ r_ecx = R32((u32)(0x931794u));
    /* 0062406e: movzx ebx, word ptr [0x931798] */ r_ebx = (u32)R16((u32)(0x931798u));
    /* 00624075: movzx esi, word ptr [0x93179a] */ r_esi = (u32)R16((u32)(0x93179au));
    /* 0062407c: movzx edi, word ptr [0x93179c] */ r_edi = (u32)R16((u32)(0x93179cu));
    /* 00624083: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00624085: mov dword ptr [0xa8ecec], edx */ W32((u32)(0xa8ececu), r_edx);
    /* 0062408b: mov dword ptr [0xa8ece8], edx */ W32((u32)(0xa8ece8u), r_edx);
    /* 00624091: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00624097: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0062409a: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 0062409e: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 006240a2: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 006240a6: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006240a9: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006240af: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 006240b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006240b3: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 006240b8: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006240bd: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006240c0: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006240c3: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 006240c5: call 0x60895c */ r_esp -= 4; W32(r_esp, 0x6240cau); f_0060895c();
    /* 006240ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006240cd: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006240d0: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006240d3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006240d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006240d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006240e0: mov esp, ebp */ r_esp = r_ebp;
    /* 006240e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006240e3: ret  */ FN_RET(0x00623fec); r_esp += 4; return;
L_006240e4:; BB(0x006240e4);
    /* 006240e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006240e6: jmp 0x62405c */ goto L_0062405c;
}

