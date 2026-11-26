#include "protos.h"

void f_005b64ed(void) /* _WinMain@16_74_1 */
{
    FN_ENTER(0x005b64ed);
    /* 005b64ed: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b64f0: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 005b64f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b64f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b64f8: ret  */ FN_RET(0x005b64ed); r_esp += 4; return;
}

void f_006140f7(void) /* _WinMain@16_77_0 */
{
    FN_ENTER(0x006140f7);
    /* 006140f7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006140f9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006140fb: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006140fe: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614101: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x614106u); f_008581c5();
    /* 00614106: mov edx, ebx */ r_edx = r_ebx;
    /* 00614108: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0061410e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00614114: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614116: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614119: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61411eu); f_008581c5();
    /* 0061411e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614121: mov edx, ebx */ r_edx = r_ebx;
    /* 00614123: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 00614129: mov eax, 0x930080 */ r_eax = 0x930080u;
    /* 0061412e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00614130: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00614133: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00614136: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00614139: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061413c: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00614142: mov dword ptr [ebp - 0x84], ebx */ W32((u32)(r_ebp+0xffffff7cu), r_ebx);
    /* 00614148: mov dword ptr [ebp - 0x80], esi */ W32((u32)(r_ebp+0xffffff80u), r_esi);
    /* 0061414b: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 0061414e: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00614151: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00614154: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00614157: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0061415a: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0061415d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00614160: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00614163: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00614166: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00614169: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0061416c: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0061416f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00614172: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00614175: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00614178: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0061417b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0061417e: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00614181: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00614184: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00614187: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0061418a: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0061418d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00614190: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00614193: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00614196: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 00614199: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0061419c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061419f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006141a2: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 006141a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006141aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006141ac: jle 0x6141f6 */ if ((fZ||fS!=fO)) goto L_006141f6;
L_006141ae:; BB(0x006141ae);
    /* 006141ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006141b1: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006141b7: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 006141ba: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006141bc: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006141bf: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006141c1: mov edi, dword ptr [ebp + ecx - 0x88] */ r_edi = R32((u32)(r_ebp+r_ecx+0xffffff78u));
    /* 006141c8: mov dword ptr [eax + ecx], edi */ W32((u32)(r_eax+r_ecx), r_edi);
    /* 006141cb: mov esi, dword ptr [ebp + ecx - 0x84] */ r_esi = R32((u32)(r_ebp+r_ecx+0xffffff7cu));
    /* 006141d2: mov dword ptr [eax + ecx + 4], esi */ W32((u32)(r_eax+r_ecx+0x4u), r_esi);
    /* 006141d6: mov esi, dword ptr [ebp + ecx - 0x80] */ r_esi = R32((u32)(r_ebp+r_ecx+0xffffff80u));
    /* 006141da: mov dword ptr [eax + ecx + 8], esi */ W32((u32)(r_eax+r_ecx+0x8u), r_esi);
    /* 006141de: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006141e4: mov dword ptr [eax + ebx*4], 0x8000 */ W32((u32)(r_eax+r_ebx*4), 0x8000u);
    /* 006141eb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006141ee: cmp ebx, dword ptr [edx + 0xb8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0xb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006141f4: jl 0x6141ae */ if ((fS!=fO)) goto L_006141ae;
L_006141f6:; BB(0x006141f6);
    /* 006141f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006141f9: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 006141ff: fmul dword ptr [0x930134] */ ST(0) = ST(0) * R_F32((u32)(0x930134u));
    /* 00614205: fadd dword ptr [0x930164] */ ST(0) = ST(0) + R_F32((u32)(0x930164u));
    /* 0061420b: fld dword ptr [0x930130] */ FPUSH(R_F32((u32)(0x930130u)));
    /* 00614211: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00614213: fst dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0));
    /* 00614219: fdivr dword ptr [0x93012c] */ ST(0) = R_F32((u32)(0x93012cu)) / ST(0);
    /* 0061421f: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00614221: fmul dword ptr [0x930128] */ ST(0) = ST(0) * R_F32((u32)(0x930128u));
    /* 00614227: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00614229: mov dword ptr [edx + 0xcc], 0 */ W32((u32)(r_edx+0xccu), 0x0u);
    /* 00614233: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614236: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0061423a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061423f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614242: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614245: fistp dword ptr [edx + 0xdc] */ W32((u32)(r_edx+0xdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0061424b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0061424e: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00614258: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 00614262: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614267u); f_008587a5();
    /* 00614267: fld dword ptr [0x930130] */ FPUSH(R_F32((u32)(0x930130u)));
    /* 0061426d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00614270: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00614273: fdiv dword ptr [0x930124] */ ST(0) = ST(0) / R_F32((u32)(0x930124u));
    /* 00614279: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0061427b: fmul dword ptr [0x930128] */ ST(0) = ST(0) * R_F32((u32)(0x930128u));
    /* 00614281: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00614283: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614286: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0061428a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061428f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614292: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614295: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614298: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0061429b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061429e: fild dword ptr [eax + 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8cu)));
    /* 006142a4: fmul dword ptr [0x930134] */ ST(0) = ST(0) * R_F32((u32)(0x930134u));
    /* 006142aa: fadd dword ptr [0x930160] */ ST(0) = ST(0) + R_F32((u32)(0x930160u));
    /* 006142b0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006142b3: fstp dword ptr [eax + 0xd0] */ W_F32((u32)(r_eax+0xd0u), ST(0)); FPOP();
    /* 006142b9: mov dword ptr [eax + 0xe0], ecx */ W32((u32)(r_eax+0xe0u), r_ecx);
    /* 006142bf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6142c4u); f_0082dcbc();
    /* 006142c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006142c7: fld dword ptr [eax + 0xd0] */ FPUSH(R_F32((u32)(r_eax+0xd0u)));
    /* 006142cd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006142cf: fstp dword ptr [eax + 0xd4] */ W_F32((u32)(r_eax+0xd4u), ST(0)); FPOP();
    /* 006142d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006142d7: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 006142dd: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 006142e3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006142e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006142e9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006142ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006142ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006142f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006142f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006142f9: ret  */ FN_RET(0x006140f7); r_esp += 4; return;
}

void f_0061430b(void) /* _WinMain@16_77 */
{
    FN_ENTER(0x0061430b);
    /* 0061430b: jmp 0x6140f7 */ f_006140f7(); return;
}

void f_00626e54(void) /* _WinMain@16_78_0 */
{
    FN_ENTER(0x00626e54);
    /* 00626e54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626e57: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626e5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00626e60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626e61: ret  */ FN_RET(0x00626e54); r_esp += 4; return;
}

void f_00626f1f(void) /* _WinMain@16_78 */
{
    FN_ENTER(0x00626f1f);
    /* 00626f1f: jmp 0x626e54 */ f_00626e54(); return;
}

void f_006276b6(void) /* _WinMain@16_79_0 */
{
    FN_ENTER(0x006276b6);
    /* 006276b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006276b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006276ba: ret  */ FN_RET(0x006276b6); r_esp += 4; return;
}

void f_0062773a(void) /* _WinMain@16_79 */
{
    FN_ENTER(0x0062773a);
    /* 0062773a: jmp 0x6276b6 */ f_006276b6(); return;
}

void f_00627750(void) /* _WinMain@16_80 */
{
    FN_ENTER(0x00627750);
    /* 00627750: jmp 0x6276b6 */ f_006276b6(); return;
}

void f_006404a5(void) /* _WinMain@16_81 */
{
    FN_ENTER(0x006404a5);
    /* 006404a5: jmp 0x6405f7 */ f_006405f7(); return;
}

void f_006405e8(void) /* _WinMain@16_82 */
{
    FN_ENTER(0x006405e8);
    /* 006405e8: jmp 0x6406af */ f_006406af(); return;
}

void f_006405f7(void) /* _WinMain@16_81_0 */
{
    FN_ENTER(0x006405f7);
    /* 006405f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006405fa: mov esi, dword ptr [edx + 0x80] */ r_esi = R32((u32)(r_edx+0x80u));
    /* 00640600: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640602: je 0x64062b */ if (fZ) goto L_0064062b;
L_00640604:; BB(0x00640604);
    /* 00640604: movsx ebx, word ptr [esi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00640608: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064060a: jl 0x64062b */ if ((fS!=fO)) goto L_0064062b;
L_0064060c:; BB(0x0064060c);
    /* 0064060c: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00640612: jg 0x64062b */ if ((!fZ&&fS==fO)) goto L_0064062b;
L_00640614:; BB(0x00640614);
    /* 00640614: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0064061a: movzx edx, word ptr [ecx + ebx*4] */ r_edx = (u32)R16((u32)(r_ecx+r_ebx*4));
    /* 0064061e: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 00640622: movzx ebx, word ptr [ecx + ebx*4 + 2] */ r_ebx = (u32)R16((u32)(r_ecx+r_ebx*4+0x2u));
    /* 00640627: mov word ptr [ebp - 0x26], bx */ W16((u32)(r_ebp+0xffffffdau), (u16)r_ebx);
L_0064062b:; BB(0x0064062b);
    /* 0064062b: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0064062f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640631: je 0x64065a */ if (fZ) goto L_0064065a;
L_00640633:; BB(0x00640633);
    /* 00640633: movsx ebx, word ptr [esi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00640637: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00640639: jl 0x64065a */ if ((fS!=fO)) goto L_0064065a;
L_0064063b:; BB(0x0064063b);
    /* 0064063b: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00640641: jg 0x64065a */ if ((!fZ&&fS==fO)) goto L_0064065a;
L_00640643:; BB(0x00640643);
    /* 00640643: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00640649: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0064064d: mov word ptr [ecx + ebx*4], ax */ W16((u32)(r_ecx+r_ebx*4), (u16)r_eax);
    /* 00640651: movzx edx, word ptr [ebp - 0x26] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffdau));
    /* 00640655: mov word ptr [ecx + ebx*4 + 2], dx */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_edx);
L_0064065a:; BB(0x0064065a);
    /* 0064065a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064065d: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00640660: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640662: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00640664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640665: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x640668u); call_ind(t); }
    /* 00640668: jmp 0x640698 */ goto L_00640698;
L_00640698:; BB(0x00640698);
    /* 00640698: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064069b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064069e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006406a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006406a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006406ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006406ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006406ae: ret  */ FN_RET(0x006405f7); r_esp += 4; return;
}

void f_006406af(void) /* _WinMain@16_82_0 */
{
    FN_ENTER(0x006406af);
    /* 006406af: mov eax, esi */ r_eax = r_esi;
    /* 006406b1: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006406b3: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 006406b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006406b7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6406bcu); f_0050b510();
    /* 006406bc: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006406be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006406bf: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6406c4u); f_0050b510();
    /* 006406c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006406c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006406c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006406c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006406c9: push 0x552 */ { u32 v = 0x552u; r_esp -= 4; W32(r_esp, v); }
    /* 006406ce: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6406d3u); f_00814298();
    /* 006406d3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006406d6: mov eax, esi */ r_eax = r_esi;
    /* 006406d8: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 006406df: jmp 0x6405f7 */ f_006405f7(); return;
}

void f_0065cbd1(void) /* _WinMain@16_83_0 */
{
    FN_ENTER(0x0065cbd1);
    /* 0065cbd1: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065cbd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbdb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cbde: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cbe1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cbe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cbe7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cbee: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cbf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cbf1: ret  */ FN_RET(0x0065cbd1); r_esp += 4; return;
}

void f_0065cc82(void) /* _WinMain@16_83 */
{
    FN_ENTER(0x0065cc82);
    /* 0065cc82: jmp 0x65cbd1 */ f_0065cbd1(); return;
}

void f_0065cc8c(void) /* _WinMain@16_84 */
{
    FN_ENTER(0x0065cc8c);
    goto L_0065cc8c;
L_0065cbd8:; BB(0x0065cbd8);
    /* 0065cbd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbdb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cbde: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cbe1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cbe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cbe7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cbee: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cbf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cbf1: ret  */ FN_RET(0x0065cc8c); r_esp += 4; return;
L_0065cc8c:; BB(0x0065cc8c);
    /* 0065cc8c: jmp 0x65cbd8 */ goto L_0065cbd8;
}

void f_0065cd7d(void) /* _WinMain@16_85_0 */
{
    FN_ENTER(0x0065cd7d);
    /* 0065cd7d: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065cd84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cd87: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cd8a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cd8d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cd90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cd93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cd9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cd9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cd9d: ret  */ FN_RET(0x0065cd7d); r_esp += 4; return;
}

void f_0065ce2e(void) /* _WinMain@16_85 */
{
    FN_ENTER(0x0065ce2e);
    /* 0065ce2e: jmp 0x65cd7d */ f_0065cd7d(); return;
}

void f_0065ce38(void) /* _WinMain@16_86 */
{
    FN_ENTER(0x0065ce38);
    goto L_0065ce38;
L_0065cd84:; BB(0x0065cd84);
    /* 0065cd84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cd87: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cd8a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cd8d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cd90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cd93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cd9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cd9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cd9d: ret  */ FN_RET(0x0065ce38); r_esp += 4; return;
L_0065ce38:; BB(0x0065ce38);
    /* 0065ce38: jmp 0x65cd84 */ goto L_0065cd84;
}

void f_0065cf29(void) /* _WinMain@16_87_0 */
{
    FN_ENTER(0x0065cf29);
    /* 0065cf29: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065cf30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf33: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cf36: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cf39: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cf3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cf3f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cf46: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cf48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cf49: ret  */ FN_RET(0x0065cf29); r_esp += 4; return;
}

void f_0065cfda(void) /* _WinMain@16_87 */
{
    FN_ENTER(0x0065cfda);
    /* 0065cfda: jmp 0x65cf29 */ f_0065cf29(); return;
}

void f_0065cfe4(void) /* _WinMain@16_88 */
{
    FN_ENTER(0x0065cfe4);
    goto L_0065cfe4;
L_0065cf30:; BB(0x0065cf30);
    /* 0065cf30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf33: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cf36: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cf39: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cf3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cf3f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cf46: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cf48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cf49: ret  */ FN_RET(0x0065cfe4); r_esp += 4; return;
L_0065cfe4:; BB(0x0065cfe4);
    /* 0065cfe4: jmp 0x65cf30 */ goto L_0065cf30;
}

void f_0065d0d5(void) /* _WinMain@16_89_0 */
{
    FN_ENTER(0x0065d0d5);
    /* 0065d0d5: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065d0dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d0df: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d0e2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d0e5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d0e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d0eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d0f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d0f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d0f5: ret  */ FN_RET(0x0065d0d5); r_esp += 4; return;
}

void f_0065d186(void) /* _WinMain@16_89 */
{
    FN_ENTER(0x0065d186);
    /* 0065d186: jmp 0x65d0d5 */ f_0065d0d5(); return;
}

void f_0065d190(void) /* _WinMain@16_90 */
{
    FN_ENTER(0x0065d190);
    goto L_0065d190;
L_0065d0dc:; BB(0x0065d0dc);
    /* 0065d0dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d0df: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d0e2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d0e5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d0e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d0eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d0f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d0f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d0f5: ret  */ FN_RET(0x0065d190); r_esp += 4; return;
L_0065d190:; BB(0x0065d190);
    /* 0065d190: jmp 0x65d0dc */ goto L_0065d0dc;
}

void f_0065d281(void) /* _WinMain@16_91_0 */
{
    FN_ENTER(0x0065d281);
    /* 0065d281: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065d288: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d28b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d28e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d291: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d294: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d297: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d29e: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d2a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d2a1: ret  */ FN_RET(0x0065d281); r_esp += 4; return;
}

void f_0065d332(void) /* _WinMain@16_91 */
{
    FN_ENTER(0x0065d332);
    /* 0065d332: jmp 0x65d281 */ f_0065d281(); return;
}

void f_0065d33c(void) /* _WinMain@16_92 */
{
    FN_ENTER(0x0065d33c);
    goto L_0065d33c;
L_0065d288:; BB(0x0065d288);
    /* 0065d288: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d28b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d28e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d291: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d294: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d297: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d29e: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d2a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d2a1: ret  */ FN_RET(0x0065d33c); r_esp += 4; return;
L_0065d33c:; BB(0x0065d33c);
    /* 0065d33c: jmp 0x65d288 */ goto L_0065d288;
}

void f_0065d42d(void) /* _WinMain@16_93_0 */
{
    FN_ENTER(0x0065d42d);
    /* 0065d42d: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065d434: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d437: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d43a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d43d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d440: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d443: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d44a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d44c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d44d: ret  */ FN_RET(0x0065d42d); r_esp += 4; return;
}

void f_0065d4de(void) /* _WinMain@16_93 */
{
    FN_ENTER(0x0065d4de);
    /* 0065d4de: jmp 0x65d42d */ f_0065d42d(); return;
}

void f_0065d4e8(void) /* _WinMain@16_94 */
{
    FN_ENTER(0x0065d4e8);
    goto L_0065d4e8;
L_0065d434:; BB(0x0065d434);
    /* 0065d434: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d437: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d43a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d43d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d440: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d443: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d44a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d44c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d44d: ret  */ FN_RET(0x0065d4e8); r_esp += 4; return;
L_0065d4e8:; BB(0x0065d4e8);
    /* 0065d4e8: jmp 0x65d434 */ goto L_0065d434;
}

void f_0066c610(void) /* _WinMain@16_95_0 */
{
    FN_ENTER(0x0066c610);
    /* 0066c610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c612: mov word ptr [edx + 0xe4], ax */ W16((u32)(r_edx+0xe4u), (u16)r_eax);
    /* 0066c619: mov word ptr [edx + 0xe6], ax */ W16((u32)(r_edx+0xe6u), (u16)r_eax);
    /* 0066c620: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 0066c626: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0066c62c: mov edx, dword ptr [edx + 0xb4] */ r_edx = R32((u32)(r_edx+0xb4u));
    /* 0066c632: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c634: je 0x66c650 */ if (fZ) goto L_0066c650;
L_0066c636:; BB(0x0066c636);
    /* 0066c636: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066c63a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066c63f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066c643: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c646: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
L_0066c650:; BB(0x0066c650);
    /* 0066c650: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c653: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c655: mov dword ptr [eax + 0x1a8], edx */ W32((u32)(r_eax+0x1a8u), r_edx);
    /* 0066c65b: mov dword ptr [eax + 0x1ac], edx */ W32((u32)(r_eax+0x1acu), r_edx);
    /* 0066c661: mov dword ptr [eax + 0x1b0], edx */ W32((u32)(r_eax+0x1b0u), r_edx);
    /* 0066c667: mov dword ptr [eax + 0x1b4], edx */ W32((u32)(r_eax+0x1b4u), r_edx);
    /* 0066c66d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0066c670: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c673: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066c67a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c67c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c67d: ret  */ FN_RET(0x0066c610); r_esp += 4; return;
}

void f_0066c6a8(void) /* _WinMain@16_95 */
{
    FN_ENTER(0x0066c6a8);
    /* 0066c6a8: jmp 0x66c610 */ f_0066c610(); return;
}

void f_006b2954(void) /* _WinMain@16_96_0 */
{
    FN_ENTER(0x006b2954);
    /* 006b2954: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b295b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b295e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2960: je 0x6b29c2 */ if (fZ) goto L_006b29c2;
L_006b2962:; BB(0x006b2962);
    /* 006b2962: mov edx, eax */ r_edx = r_eax;
    /* 006b2964: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b2967: lea ebx, [ebp - 0x58] */ r_ebx = (u32)(r_ebp+0xffffffa8u);
    /* 006b296a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b296b: mov eax, 6 */ r_eax = 0x6u;
    /* 006b2970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2971: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2973: mov word ptr [edx + 0x32c], ax */ W16((u32)(r_edx+0x32cu), (u16)r_eax);
    /* 006b297a: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x6b297fu); f_00688ee4();
    /* 006b297f: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2982: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2985: push dword ptr [ebp - 0x58] */ { u32 v = R32((u32)(r_ebp+0xffffffa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2988: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b298b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b298c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b298e: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x6b2993u); f_006986ac();
    /* 006b2993: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2996: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2999: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b299b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6b299eu); call_ind(t); }
    /* 006b299e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b29a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b29a4: jne 0x6b29c2 */ if (!fZ) goto L_006b29c2;
L_006b29a6:; BB(0x006b29a6);
    /* 006b29a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b29a9: call 0x69adc8 */ r_esp -= 4; W32(r_esp, 0x6b29aeu); f_0069adc8();
    /* 006b29ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b29b1: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006b29b7: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b29bc: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
L_006b29c2:; BB(0x006b29c2);
    /* 006b29c2: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b29c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b29ca: je 0x6b29d9 */ if (fZ) goto L_006b29d9;
L_006b29cc:; BB(0x006b29cc);
    /* 006b29cc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b29d0: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b29d5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b29d9:; BB(0x006b29d9);
    /* 006b29d9: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b29dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b29df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b29e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006b29e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b29e9: ret  */ FN_RET(0x006b2954); r_esp += 4; return;
}

void f_006b29ef(void) /* _WinMain@16_96 */
{
    FN_ENTER(0x006b29ef);
    /* 006b29ef: jmp 0x6b2954 */ f_006b2954(); return;
}

void f_006b2ae9(void) /* _WinMain@16_97_0 */
{
    FN_ENTER(0x006b2ae9);
    /* 006b2ae9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b2af0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2af3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2af5: je 0x6b2b59 */ if (fZ) goto L_006b2b59;
L_006b2af7:; BB(0x006b2af7);
    /* 006b2af7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b2afa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b2afd: lea esi, [ebp - 0x5c] */ r_esi = (u32)(r_ebp+0xffffffa4u);
    /* 006b2b00: mov ebx, 6 */ r_ebx = 0x6u;
    /* 006b2b05: mov word ptr [eax + 0x32c], bx */ W16((u32)(r_eax+0x32cu), (u16)r_ebx);
    /* 006b2b0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b0e: movzx ebx, dx */ r_ebx = (u32)(u16)r_edx;
    /* 006b2b11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b12: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x6b2b17u); f_00688ee4();
    /* 006b2b17: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2b1a: push dword ptr [ebp - 0x58] */ { u32 v = R32((u32)(r_ebp+0xffffffa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2b1d: push dword ptr [ebp - 0x5c] */ { u32 v = R32((u32)(r_ebp+0xffffffa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2b20: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b2b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b25: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x6b2b2au); f_006986ac();
    /* 006b2b2a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2b2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2b30: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b2b32: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6b2b35u); call_ind(t); }
    /* 006b2b35: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b2b38: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2b3b: jne 0x6b2b59 */ if (!fZ) goto L_006b2b59;
L_006b2b3d:; BB(0x006b2b3d);
    /* 006b2b3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2b40: call 0x69adc8 */ r_esp -= 4; W32(r_esp, 0x6b2b45u); f_0069adc8();
    /* 006b2b45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2b48: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006b2b4e: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2b53: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
L_006b2b59:; BB(0x006b2b59);
    /* 006b2b59: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b2b5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b2b61: je 0x6b2b70 */ if (fZ) goto L_006b2b70;
L_006b2b63:; BB(0x006b2b63);
    /* 006b2b63: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2b67: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b2b6c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b2b70:; BB(0x006b2b70);
    /* 006b2b70: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006b2b73: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b2b76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b2b79: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b2b80: mov esp, ebp */ r_esp = r_ebp;
    /* 006b2b82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2b83: ret  */ FN_RET(0x006b2ae9); r_esp += 4; return;
}

void f_006b2b89(void) /* _WinMain@16_97 */
{
    FN_ENTER(0x006b2b89);
    /* 006b2b89: jmp 0x6b2ae9 */ f_006b2ae9(); return;
}

void f_006b386c(void) /* _WinMain@16_98 */
{
    FN_ENTER(0x006b386c);
L_006b386c:; BB(0x006b386c);
    /* 006b386c: jmp 0x6b386c */ goto L_006b386c;
}

void f_006b62a4(void) /* _WinMain@16_99_0 */
{
    FN_ENTER(0x006b62a4);
    /* 006b62a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b62ab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b62ae: lea edx, [ebp - 0x828] */ r_edx = (u32)(r_ebp+0xfffff7d8u);
    /* 006b62b4: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b62b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b62ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b62bb: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b62c0u); f_00857dec();
    /* 006b62c0: lea eax, [ebp - 0x828] */ r_eax = (u32)(r_ebp+0xfffff7d8u);
    /* 006b62c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b62c7: call 0x815844 */ r_esp -= 4; W32(r_esp, 0x6b62ccu); f_00815844();
    /* 006b62cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b62cf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b62d2: lea eax, [ebp - 0x828] */ r_eax = (u32)(r_ebp+0xfffff7d8u);
    /* 006b62d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b62d9: call 0x815ad8 */ r_esp -= 4; W32(r_esp, 0x6b62deu); f_00815ad8();
    /* 006b62de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b62e1: mov edx, dword ptr [eax + 0x209c] */ r_edx = R32((u32)(r_eax+0x209cu));
    /* 006b62e7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b62ea: jle 0x6b6306 */ if ((fZ||fS!=fO)) goto L_006b6306;
L_006b62ec:; BB(0x006b62ec);
    /* 006b62ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b62ee: je 0x6b62f8 */ if (fZ) goto L_006b62f8;
L_006b62f0:; BB(0x006b62f0);
    /* 006b62f0: mov ecx, eax */ r_ecx = r_eax;
    /* 006b62f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b62f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b62f6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6b62f8u); call_ind(t); }
L_006b62f8:; BB(0x006b62f8);
    /* 006b62f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b62fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b6302: mov esp, ebp */ r_esp = r_ebp;
    /* 006b6304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b6305: ret  */ FN_RET(0x006b62a4); r_esp += 4; return;
L_006b6306:; BB(0x006b6306);
    /* 006b6306: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b630c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b630f: push dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6312: lea edi, [eax + 0x1c] */ r_edi = (u32)(r_eax+0x1cu);
    /* 006b6315: mov esi, 0x40 */ r_esi = 0x40u;
    /* 006b631a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b631b: lea ebx, [eax + 0x5c] */ r_ebx = (u32)(r_eax+0x5cu);
    /* 006b631e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b631f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6321: call 0x813790 */ r_esp -= 4; W32(r_esp, 0x6b6326u); f_00813790();
    /* 006b6326: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b6329: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b632c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b632e: je 0x6b6338 */ if (fZ) goto L_006b6338;
L_006b6330:; BB(0x006b6330);
    /* 006b6330: mov ecx, eax */ r_ecx = r_eax;
    /* 006b6332: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6334: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b6336: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6b6338u); call_ind(t); }
L_006b6338:; BB(0x006b6338);
    /* 006b6338: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b633b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b633e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b6341: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b6344: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b634b: mov esp, ebp */ r_esp = r_ebp;
    /* 006b634d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b634e: ret  */ FN_RET(0x006b62a4); r_esp += 4; return;
}

void f_006b6354(void) /* _WinMain@16_99 */
{
    FN_ENTER(0x006b6354);
    /* 006b6354: jmp 0x6b62a4 */ f_006b62a4(); return;
}

void f_006bffc3(void) /* _WinMain@16_100_0 */
{
    FN_ENTER(0x006bffc3);
    /* 006bffc3: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006bffc6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bffcbu); f_007127b0();
    /* 006bffcb: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006bffd2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006bffd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bffd6: je 0x6bfffd */ if (fZ) goto L_006bfffd;
L_006bffd8:; BB(0x006bffd8);
    /* 006bffd8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bffdf: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bffe1: je 0x6bfffd */ if (fZ) goto L_006bfffd;
L_006bffe3:; BB(0x006bffe3);
    /* 006bffe3: mov dword ptr [edi + 0x24], 4 */ W32((u32)(r_edi+0x24u), 0x4u);
    /* 006bffea: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bffefu); f_007127b0();
    /* 006bffef: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006bfff6: mov ecx, edi */ r_ecx = r_edi;
    /* 006bfff8: call 0x6c0084 */ r_esp -= 4; W32(r_esp, 0x6bfffdu); f_006c0084();
L_006bfffd:; BB(0x006bfffd);
    /* 006bfffd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfffe: ret  */ FN_RET(0x006bffc3); r_esp += 4; return;
}

void f_006c0052(void) /* _WinMain@16_100 */
{
    FN_ENTER(0x006c0052);
    /* 006c0052: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c007c(void) /* _WinMain@16_101 */
{
    FN_ENTER(0x006c007c);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006cb1d2(void) /* _WinMain@16_102_0 */
{
    FN_ENTER(0x006cb1d2);
    /* 006cb1d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb1d5: mov dword ptr [eax + 0x44], 1 */ W32((u32)(r_eax+0x44u), 0x1u);
    /* 006cb1dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb1df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb1e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb1e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb1e9: ret  */ FN_RET(0x006cb1d2); r_esp += 4; return;
}

void f_006cb259(void) /* _WinMain@16_102 */
{
    FN_ENTER(0x006cb259);
    /* 006cb259: jmp 0x6cb1d2 */ f_006cb1d2(); return;
}

void f_0076f74f(void) /* _WinMain@16_103 */
{
    FN_ENTER(0x0076f74f);
    /* 0076f74f: jmp 0x76f7dd */ f_0076f7dd(); return;
}

void f_0076f7dd(void) /* _WinMain@16_103_0 */
{
    FN_ENTER(0x0076f7dd);
    /* 0076f7dd: fld dword ptr [ecx + 0xa8] */ FPUSH(R_F32((u32)(r_ecx+0xa8u)));
    /* 0076f7e3: fadd dword ptr [ecx + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb0u));
    /* 0076f7e9: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 0076f7ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076f7f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076f7f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076f7f4: ja 0x76f7ff */ if ((!fC&&!fZ)) goto L_0076f7ff;
L_0076f7f6:; BB(0x0076f7f6);
    /* 0076f7f6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0076f7f8: fstp dword ptr [ecx + 0xa8] */ W_F32((u32)(r_ecx+0xa8u), ST(0)); FPOP();
    /* 0076f7fe: ret  */ FN_RET(0x0076f7dd); r_esp += 4; return;
L_0076f7ff:; BB(0x0076f7ff);
    /* 0076f7ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076f801: fstp dword ptr [ecx + 0xa8] */ W_F32((u32)(r_ecx+0xa8u), ST(0)); FPOP();
    /* 0076f807: ret  */ FN_RET(0x0076f7dd); r_esp += 4; return;
}

void f_0079284b(void) /* _WinMain@16_104_1 */
{
    FN_ENTER(0x0079284b);
    /* 0079284b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079284d: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792852u); f_00792f98();
    /* 00792852: mov eax, dword ptr [0xa9ccd8] */ r_eax = R32((u32)(0xa9ccd8u));
    /* 00792857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792859: je 0x792ab5 */ if (fZ) goto L_00792ab5;
L_0079285f:; BB(0x0079285f);
    /* 0079285f: mov dword ptr [eax], 0xa9ccf4 */ W32((u32)(r_eax), 0xa9ccf4u);
    /* 00792865: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792867: mov ebx, eax */ r_ebx = r_eax;
    /* 00792869: mov esi, edx */ r_esi = r_edx;
L_0079286b:; BB(0x0079286b);
    /* 0079286b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079286d: je 0x792b3f */ if (fZ) goto L_00792b3f;
L_00792873:; BB(0x00792873);
    /* 00792873: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792876: je 0x7928c0 */ if (fZ) goto L_007928c0;
L_00792878:; BB(0x00792878);
    /* 00792878: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079287b: jne 0x79289c */ if (!fZ) goto L_0079289c;
L_0079287d:; BB(0x0079287d);
    /* 0079287d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0079287f: mov ecx, esi */ r_ecx = r_esi;
    /* 00792881: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00792887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792889: je 0x792aca */ if (fZ) goto L_00792aca;
L_0079288f:; BB(0x0079288f);
    /* 0079288f: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_00792893:; BB(0x00792893);
    /* 00792893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00792894: call 0x84265c */ r_esp -= 4; W32(r_esp, 0x792899u); f_0084265c();
    /* 00792899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079289a: jmp 0x7928dd */ goto L_007928dd;
L_0079289c:; BB(0x0079289c);
    /* 0079289c: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079289f: jne 0x7928dd */ if (!fZ) goto L_007928dd;
L_007928a1:; BB(0x007928a1);
    /* 007928a1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007928a3: mov ecx, esi */ r_ecx = r_esi;
    /* 007928a5: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007928ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928ad: je 0x792ad1 */ if (fZ) goto L_00792ad1;
L_007928b3:; BB(0x007928b3);
    /* 007928b3: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_007928b7:; BB(0x007928b7);
    /* 007928b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007928b8: call 0x842668 */ r_esp -= 4; W32(r_esp, 0x7928bdu); f_00842668();
    /* 007928bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007928be: jmp 0x7928dd */ goto L_007928dd;
L_007928c0:; BB(0x007928c0);
    /* 007928c0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007928c2: mov ecx, esi */ r_ecx = r_esi;
    /* 007928c4: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007928ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928cc: je 0x792b38 */ if (fZ) goto L_00792b38;
L_007928d2:; BB(0x007928d2);
    /* 007928d2: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_007928d6:; BB(0x007928d6);
    /* 007928d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007928d7: call 0x842650 */ r_esp -= 4; W32(r_esp, 0x7928dcu); f_00842650();
    /* 007928dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007928dd:; BB(0x007928dd);
    /* 007928dd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007928e0: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007928e3: jl 0x79286b */ if ((fS!=fO)) goto L_0079286b;
L_007928e5:; BB(0x007928e5);
    /* 007928e5: mov eax, ebx */ r_eax = r_ebx;
    /* 007928e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007928e9:; BB(0x007928e9);
    /* 007928e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007928eb: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 007928ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f0: je 0x7928fa */ if (fZ) goto L_007928fa;
L_007928f2:; BB(0x007928f2);
    /* 007928f2: mov ebx, dword ptr [edx + esi*4 + 4] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x4u));
    /* 007928f6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f8: jne 0x792968 */ if (!fZ) goto L_00792968;
L_007928fa:; BB(0x007928fa);
    /* 007928fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928fc: jne 0x792902 */ if (!fZ) goto L_00792902;
L_007928fe:; BB(0x007928fe);
    /* 007928fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792900: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792902:; BB(0x00792902);
    /* 00792902: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792905: jne 0x79290b */ if (!fZ) goto L_0079290b;
L_00792907:; BB(0x00792907);
    /* 00792907: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792909: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079290b:; BB(0x0079290b);
    /* 0079290b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079290e: jne 0x792914 */ if (!fZ) goto L_00792914;
L_00792910:; BB(0x00792910);
    /* 00792910: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792912: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792914:; BB(0x00792914);
    /* 00792914: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792917: jne 0x79291d */ if (!fZ) goto L_0079291d;
L_00792919:; BB(0x00792919);
    /* 00792919: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079291b: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079291d:; BB(0x0079291d);
    /* 0079291d: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792920: jne 0x792926 */ if (!fZ) goto L_00792926;
L_00792922:; BB(0x00792922);
    /* 00792922: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792924: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792926:; BB(0x00792926);
    /* 00792926: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792929: jne 0x79292f */ if (!fZ) goto L_0079292f;
L_0079292b:; BB(0x0079292b);
    /* 0079292b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079292d: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079292f:; BB(0x0079292f);
    /* 0079292f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792932: jne 0x792938 */ if (!fZ) goto L_00792938;
L_00792934:; BB(0x00792934);
    /* 00792934: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792936: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792938:; BB(0x00792938);
    /* 00792938: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293b: jne 0x792941 */ if (!fZ) goto L_00792941;
L_0079293d:; BB(0x0079293d);
    /* 0079293d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293f: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792941:; BB(0x00792941);
    /* 00792941: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792944: jne 0x79294a */ if (!fZ) goto L_0079294a;
L_00792946:; BB(0x00792946);
    /* 00792946: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792948: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079294a:; BB(0x0079294a);
    /* 0079294a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079294d: jne 0x792953 */ if (!fZ) goto L_00792953;
L_0079294f:; BB(0x0079294f);
    /* 0079294f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792951: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792953:; BB(0x00792953);
    /* 00792953: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792956: jne 0x792968 */ if (!fZ) goto L_00792968;
L_00792958:; BB(0x00792958);
    /* 00792958: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079295a: je 0x792968 */ if (fZ) goto L_00792968;
L_0079295c:; BB(0x0079295c);
    /* 0079295c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792963: jmp 0x792aaa */ f_00792aaa(); return;
L_00792968:; BB(0x00792968);
    /* 00792968: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079296b: ja 0x792a77 */ if ((!fC&&!fZ)) goto L_00792a77;
L_00792971:; BB(0x00792971);
    /* 00792971: mov ebx, dword ptr [ecx*4 + 0x97ac28] */ r_ebx = R32((u32)(r_ecx*4+0x97ac28u));
    /* 00792978: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792a77:; BB(0x00792a77);
    /* 00792a77: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792a7a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a7d: jl 0x7928e9 */ if ((fS!=fO)) goto L_007928e9;
L_00792a83:; BB(0x00792a83);
    /* 00792a83: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792a89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a8b: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a8d:; BB(0x00792a8d);
    /* 00792a8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792a8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a91: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a93:; BB(0x00792a93);
    /* 00792a93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792a95:; BB(0x00792a95);
    /* 00792a95: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792a99: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792a9c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a9f: jge 0x792b2c */ if ((fS==fO)) goto L_00792b2c;
L_00792aa5:; BB(0x00792aa5);
    /* 00792aa5: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792aa8: jl 0x792a95 */ if ((fS!=fO)) goto L_00792a95;
L_00792aaa:; BB(0x00792aaa);
    /* 00792aaa: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00792ab0: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x792ab5u); f_00792c64();
L_00792ab5:; BB(0x00792ab5);
    /* 00792ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792ab7: ret  */ FN_RET(0x0079284b); r_esp += 4; return;
L_00792aca:; BB(0x00792aca);
    /* 00792aca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792acc: jmp 0x792893 */ goto L_00792893;
L_00792ad1:; BB(0x00792ad1);
    /* 00792ad1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ad3: jmp 0x7928b7 */ goto L_007928b7;
L_00792b2c:; BB(0x00792b2c);
    /* 00792b2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792b2e: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792b33u); f_00792f98();
    /* 00792b33: jmp 0x792aaa */ f_00792aaa(); return;
L_00792b38:; BB(0x00792b38);
    /* 00792b38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792b3a: jmp 0x7928d6 */ goto L_007928d6;
L_00792b3f:; BB(0x00792b3f);
    /* 00792b3f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00792b41: mov ecx, esi */ r_ecx = r_esi;
    /* 00792b43: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00792b49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792b4b: je 0x792b5d */ if (fZ) goto L_00792b5d;
L_00792b4d:; BB(0x00792b4d);
    /* 00792b4d: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_00792b51:; BB(0x00792b51);
    /* 00792b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00792b52: call 0x842644 */ r_esp -= 4; W32(r_esp, 0x792b57u); f_00842644();
    /* 00792b57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00792b58: jmp 0x7928dd */ goto L_007928dd;
L_00792b5d:; BB(0x00792b5d);
    /* 00792b5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792b5f: jmp 0x792b51 */ goto L_00792b51;
}

void f_00792aaa(void) /* _WinMain@16_104_0 */
{
    FN_ENTER(0x00792aaa);
    /* 00792aaa: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00792ab0: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x792ab5u); f_00792c64();
    /* 00792ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792ab7: ret  */ FN_RET(0x00792aaa); r_esp += 4; return;
}

void f_00792ac5(void) /* _WinMain@16_104 */
{
    FN_ENTER(0x00792ac5);
    /* 00792ac5: jmp 0x79284b */ f_0079284b(); return;
}

void f_007b3f97(void) /* _WinMain@16_105 */
{
    FN_ENTER(0x007b3f97);
    /* 007b3f97: jmp 0x7b40d4 */ f_007b40d4(); return;
}

void f_007b40d4(void) /* _WinMain@16_105_0 */
{
    FN_ENTER(0x007b40d4);
    /* 007b40d4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007b40d7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007b40da: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007b40dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b40e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b40e7: mov esp, ebp */ r_esp = r_ebp;
    /* 007b40e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b40ea: ret  */ FN_RET(0x007b40d4); r_esp += 4; return;
}

void f_007b41c2(void) /* _WinMain@16_106 */
{
    FN_ENTER(0x007b41c2);
    /* 007b41c2: jmp 0x7b40d4 */ f_007b40d4(); return;
}

void f_007b41ef(void) /* _WinMain@16_107 */
{
    FN_ENTER(0x007b41ef);
    /* 007b41ef: jmp 0x7b40d4 */ f_007b40d4(); return;
}

void f_007c1a6f(void) /* _WinMain@16_108 */
{
    FN_ENTER(0x007c1a6f);
    /* 007c1a6f: jmp 0x7c4c90 */ f_007c4c90(); return;
}

void f_007c4c90(void) /* _WinMain@16_108_0 */
{
    FN_ENTER(0x007c4c90);
    /* 007c4c90: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007c4c91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007c4c94: lea ebx, [eax + 0x28] */ r_ebx = (u32)(r_eax+0x28u);
    /* 007c4c97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4c98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4c99: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c4c9eu); f_00813a78();
    /* 007c4c9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c4ca1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007c4ca4: mov ecx, dword ptr [eax + 0x1e138] */ r_ecx = R32((u32)(r_eax+0x1e138u));
    /* 007c4caa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4cac: je 0x7c4cbb */ if (fZ) goto L_007c4cbb;
L_007c4cae:; BB(0x007c4cae);
    /* 007c4cae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007c4cb1: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007c4cb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4cb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4cb6: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x7c4cb8u); call_ind(t); }
    /* 007c4cb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c4cbb:; BB(0x007c4cbb);
    /* 007c4cbb: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007c4cbc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c4cbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c4cc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c4cc2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c4cc4: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7c4ccau); call_ind(t); }
    /* 007c4cca: jmp 0x7c4cea */ goto L_007c4cea;
L_007c4cea:; BB(0x007c4cea);
    /* 007c4cea: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007c4ceb: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 007c4cee: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 007c4cf1: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c4cf4: mov esp, ebp */ r_esp = r_ebp;
    /* 007c4cf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c4cf7: ret 4 */ FN_RET(0x007c4c90); r_esp += 8; return;
}

void f_007c9547(void) /* _WinMain@16_109 */
{
    FN_ENTER(0x007c9547);
    /* 007c9547: jmp 0x7cc768 */ f_007cc768(); return;
}

void f_007cc768(void) /* _WinMain@16_109_0 */
{
    FN_ENTER(0x007cc768);
    /* 007cc768: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007cc769: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007cc76c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007cc76f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007cc771: ja 0x7cc777 */ if ((!fC&&!fZ)) goto L_007cc777;
L_007cc773:; BB(0x007cc773);
    /* 007cc773: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007cc775: jmp 0x7cc789 */ goto L_007cc789;
L_007cc777:; BB(0x007cc777);
    /* 007cc777: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007cc77a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007cc77b: lea ecx, [eax + 0x14] */ r_ecx = (u32)(r_eax+0x14u);
    /* 007cc77e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007cc77f: call 0x5ba050 */ r_esp -= 4; W32(r_esp, 0x7cc784u); f_005ba050();
    /* 007cc784: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007cc787: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7cc789u); call_ind(t); }
L_007cc789:; BB(0x007cc789);
    /* 007cc789: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 007cc78c: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007cc78f: mov esi, 8 */ r_esi = 0x8u;
    /* 007cc794: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007cc796: mov ebx, 0x10 */ r_ebx = 0x10u;
    /* 007cc79b: mov byte ptr [ebp - 0x1e], 0xb3 */ W8((u32)(r_ebp+0xffffffe2u), 0xb3u);
    /* 007cc79f: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 007cc7a3: mov byte ptr [ebp - 0x1d], dl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_edx);
    /* 007cc7a6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007cc7a9: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 007cc7ac: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 007cc7af: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 007cc7b3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007cc7b6: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007cc7b9: call 0x7a61b4 */ r_esp -= 4; W32(r_esp, 0x7cc7beu); f_007a61b4();
    /* 007cc7be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007cc7c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007cc7c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007cc7c7: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 007cc7ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007cc7cb: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7cc7d0u); f_007c4fb4();
    /* 007cc7d0: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007cc7d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007cc7d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007cc7d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007cc7d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007cc7d9: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7cc7dfu); call_ind(t); }
    /* 007cc7df: jmp 0x7cc7ff */ goto L_007cc7ff;
L_007cc7ff:; BB(0x007cc7ff);
    /* 007cc7ff: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007cc800: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 007cc803: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 007cc806: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007cc809: mov esp, ebp */ r_esp = r_ebp;
    /* 007cc80b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007cc80c: ret 4 */ FN_RET(0x007cc768); r_esp += 8; return;
}

void f_007cc877(void) /* _WinMain@16_110 */
{
    FN_ENTER(0x007cc877);
    /* 007cc877: jmp 0x7cfa98 */ f_007cfa98(); return;
}

void f_007cfa98(void) /* _WinMain@16_110_0 */
{
    FN_ENTER(0x007cfa98);
    /* 007cfa98: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007cfa99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007cfa9c: mov edx, dword ptr [eax + 0x1e144] */ r_edx = R32((u32)(r_eax+0x1e144u));
    /* 007cfaa2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007cfaa4: je 0x7cfaaf */ if (fZ) goto L_007cfaaf;
L_007cfaa6:; BB(0x007cfaa6);
    /* 007cfaa6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007cfaa9: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007cfaac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7cfaaeu); call_ind(t); }
    /* 007cfaae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007cfaaf:; BB(0x007cfaaf);
    /* 007cfaaf: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007cfab0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007cfab2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007cfab4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007cfab6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007cfab8: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7cfabeu); call_ind(t); }
    /* 007cfabe: jmp 0x7cfade */ goto L_007cfade;
L_007cfade:; BB(0x007cfade);
    /* 007cfade: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007cfadf: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007cfae2: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007cfae5: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007cfae8: mov esp, ebp */ r_esp = r_ebp;
    /* 007cfaea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007cfaeb: ret 4 */ FN_RET(0x007cfa98); r_esp += 8; return;
}

void f_007cfb16(void) /* _WinMain@16_111 */
{
    FN_ENTER(0x007cfb16);
    /* 007cfb16: jmp 0x7d2d37 */ f_007d2d37(); return;
}

void f_007d2d37(void) /* _WinMain@16_111_0 */
{
    FN_ENTER(0x007d2d37);
    /* 007d2d37: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007d2d38: push 0x97e820 */ { u32 v = 0x97e820u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2d3d: lea eax, [ebp - 0x90] */ r_eax = (u32)(r_ebp+0xffffff70u);
    /* 007d2d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d2d44: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7d2d49u); f_00858bf5();
    /* 007d2d49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d2d4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007d2d4f: mov eax, dword ptr [eax + 0x1e13c] */ r_eax = R32((u32)(r_eax+0x1e13cu));
    /* 007d2d55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d2d57: je 0x7d2d5e */ if (fZ) goto L_007d2d5e;
L_007d2d59:; BB(0x007d2d59);
    /* 007d2d59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2d5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x7d2d5du); call_ind(t); }
    /* 007d2d5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007d2d5e:; BB(0x007d2d5e);
    /* 007d2d5e: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007d2d5f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2d61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2d63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2d65: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d2d67: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7d2d6du); call_ind(t); }
    /* 007d2d6d: jmp 0x7d2d8d */ goto L_007d2d8d;
L_007d2d8d:; BB(0x007d2d8d);
    /* 007d2d8d: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007d2d8e: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007d2d91: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007d2d94: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007d2d97: mov esp, ebp */ r_esp = r_ebp;
    /* 007d2d99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d2d9a: ret 4 */ FN_RET(0x007d2d37); r_esp += 8; return;
}

void f_007db11a(void) /* _WinMain@16_112 */
{
    FN_ENTER(0x007db11a);
    /* 007db11a: jmp 0x7de33b */ f_007de33b(); return;
}

void f_007de33b(void) /* _WinMain@16_112_0 */
{
    FN_ENTER(0x007de33b);
    /* 007de33b: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007de33c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007de33f: lea edi, [ebp - 0x1c0] */ r_edi = (u32)(r_ebp+0xfffffe40u);
    /* 007de345: mov ecx, 0xc8 */ r_ecx = 0xc8u;
    /* 007de34a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de34b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007de34e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007de350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007de351: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007de354: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007de356: mov edi, dword ptr [0xa0fb80] */ r_edi = R32((u32)(0xa0fb80u));
    /* 007de35c: lea esi, [ebp - 0x1b8] */ r_esi = (u32)(r_ebp+0xfffffe48u);
L_007de362:; BB(0x007de362);
    /* 007de362: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 007de364: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 007de366: jne 0x7de382 */ if (!fZ) goto L_007de382;
L_007de368:; BB(0x007de368);
    /* 007de368: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 007de36a: je 0x7de37e */ if (fZ) goto L_007de37e;
L_007de36c:; BB(0x007de36c);
    /* 007de36c: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 007de36f: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 007de372: jne 0x7de382 */ if (!fZ) goto L_007de382;
L_007de374:; BB(0x007de374);
    /* 007de374: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007de377: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007de37a: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 007de37c: jne 0x7de362 */ if (!fZ) goto L_007de362;
L_007de37e:; BB(0x007de37e);
    /* 007de37e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007de380: jmp 0x7de387 */ goto L_007de387;
L_007de382:; BB(0x007de382);
    /* 007de382: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 007de384: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007de387:; BB(0x007de387);
    /* 007de387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007de389: je 0x7de398 */ if (fZ) goto L_007de398;
L_007de38b:; BB(0x007de38b);
    /* 007de38b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de38e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007de390: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x7de393u); call_ind(t); }
    /* 007de393: jmp 0x7de67d */ goto L_007de67d;
L_007de398:; BB(0x007de398);
    /* 007de398: mov byte ptr [ebp - 0xf8], 0x19 */ W8((u32)(r_ebp+0xffffff08u), 0x19u);
    /* 007de39f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007de3a1: mov eax, 1 */ r_eax = 0x1u;
    /* 007de3a6: mov ebx, 2 */ r_ebx = 0x2u;
    /* 007de3ab: mov byte ptr [ebp - 0xf7], 0x16 */ W8((u32)(r_ebp+0xffffff09u), 0x16u);
    /* 007de3b2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007de3b5: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007de3ba: mov byte ptr [ebp - 0xf6], 0x18 */ W8((u32)(r_ebp+0xffffff0au), 0x18u);
L_007de3c1:; BB(0x007de3c1);
    /* 007de3c1: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de3c6: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de3c8: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de3ca: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007de3cd: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007de3cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007de3d2: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007de3d4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007de3d6: movzx eax, byte ptr [ebp + edi - 0xf8] */ r_eax = (u32)R8((u32)(r_ebp+r_edi+0xffffff08u));
    /* 007de3de: xor byte ptr [ebp + esi - 0x158], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffea8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de3e5: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de3ea: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de3ec: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de3ee: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007de3f1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de3f3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007de3f5: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de3f8: movzx eax, byte ptr [ebp + eax - 0xf8] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff08u));
    /* 007de400: xor byte ptr [ebp + esi - 0x157], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffea9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de407: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de40c: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de40e: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de410: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007de414: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007de417: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de419: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007de41b: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de41d: movzx eax, byte ptr [ebp + eax - 0xf8] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff08u));
    /* 007de425: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007de428: xor byte ptr [ebp + esi - 0x156], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffeaau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de42f: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de434: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de436: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de438: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007de43b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de43d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007de43f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de441: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007de444: movzx eax, byte ptr [ebp + eax - 0xf8] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff08u));
    /* 007de44c: xor byte ptr [ebp + esi - 0x155], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffeabu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de453: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007de456: cmp esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007de459: jl 0x7de3c1 */ if ((fS!=fO)) goto L_007de3c1;
L_007de45f:; BB(0x007de45f);
    /* 007de45f: mov byte ptr [ebp - 0xf4], 0x19 */ W8((u32)(r_ebp+0xffffff0cu), 0x19u);
    /* 007de466: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007de468: mov eax, 1 */ r_eax = 0x1u;
    /* 007de46d: mov ebx, 2 */ r_ebx = 0x2u;
    /* 007de472: mov byte ptr [ebp - 0xf3], 0x16 */ W8((u32)(r_ebp+0xffffff0du), 0x16u);
    /* 007de479: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007de47c: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007de481: mov byte ptr [ebp - 0xf2], 0x18 */ W8((u32)(r_ebp+0xffffff0eu), 0x18u);
L_007de488:; BB(0x007de488);
    /* 007de488: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de48d: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de48f: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de491: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007de494: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007de496: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007de499: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007de49b: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007de49d: movzx eax, byte ptr [ebp + edi - 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+r_edi+0xffffff0cu));
    /* 007de4a5: xor byte ptr [ebp + esi - 0x128], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffed8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de4ac: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de4b1: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de4b3: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de4b5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007de4b8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de4ba: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007de4bc: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de4bf: movzx eax, byte ptr [ebp + eax - 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff0cu));
    /* 007de4c7: xor byte ptr [ebp + esi - 0x127], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffed9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de4ce: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de4d3: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de4d5: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de4d7: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007de4db: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007de4de: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de4e0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007de4e2: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de4e4: movzx eax, byte ptr [ebp + eax - 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff0cu));
    /* 007de4ec: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007de4ef: xor byte ptr [ebp + esi - 0x126], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffedau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de4f6: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007de4fb: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007de4fd: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007de4ff: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007de502: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de504: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007de506: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007de508: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007de50b: movzx eax, byte ptr [ebp + eax - 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff0cu));
    /* 007de513: xor byte ptr [ebp + esi - 0x125], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffedbu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007de51a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007de51d: cmp esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007de520: jl 0x7de488 */ if ((fS!=fO)) goto L_007de488;
L_007de526:; BB(0x007de526);
    /* 007de526: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de529: lea ecx, [eax + 0x110d4] */ r_ecx = (u32)(r_eax+0x110d4u);
    /* 007de52f: lea edx, [ebp - 0x158] */ r_edx = (u32)(r_ebp+0xfffffea8u);
    /* 007de535: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007de537: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de538: call 0x763fd0 */ r_esp -= 4; W32(r_esp, 0x7de53du); f_00763fd0();
    /* 007de53d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de540: lea ecx, [eax + 0x1008c] */ r_ecx = (u32)(r_eax+0x1008cu);
    /* 007de546: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 007de54c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007de54e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de54f: call 0x763fd0 */ r_esp -= 4; W32(r_esp, 0x7de554u); f_00763fd0();
    /* 007de554: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de557: mov dword ptr [esi + 0x1211c], 1 */ W32((u32)(r_esi+0x1211cu), 0x1u);
    /* 007de561: mov edi, 8 */ r_edi = 0x8u;
    /* 007de566: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007de568: mov word ptr [ebp - 0xf0], di */ W16((u32)(r_ebp+0xffffff10u), (u16)r_edi);
    /* 007de56f: mov byte ptr [ebp - 0xee], al */ W8((u32)(r_ebp+0xffffff12u), (u8)r_eax);
    /* 007de575: mov byte ptr [ebp - 0xed], al */ W8((u32)(r_ebp+0xffffff13u), (u8)r_eax);
    /* 007de57b: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 007de581: lea edx, [ebp - 0xf0] */ r_edx = (u32)(r_ebp+0xffffff10u);
    /* 007de587: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 007de58c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007de58e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de58f: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7de594u); f_0086b688();
    /* 007de594: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de597: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de59a: mov byte ptr [ebp - 0xee], 0xdb */ W8((u32)(r_ebp+0xffffff12u), 0xdbu);
    /* 007de5a1: mov eax, 0xdc */ r_eax = 0xdcu;
    /* 007de5a6: mov word ptr [ebp - 0xf0], ax */ W16((u32)(r_ebp+0xffffff10u), (u16)r_eax);
    /* 007de5ad: lea ebx, [ebp - 0xe8] */ r_ebx = (u32)(r_ebp+0xffffff18u);
    /* 007de5b3: lea ecx, [edx + 0x16300] */ r_ecx = (u32)(r_edx+0x16300u);
    /* 007de5b9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007de5bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de5bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007de5bd: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7de5c2u); f_00858900();
    /* 007de5c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de5c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de5c8: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 007de5ce: lea edx, [eax + 0x16311] */ r_edx = (u32)(r_eax+0x16311u);
    /* 007de5d4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007de5d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de5d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de5d8: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7de5ddu); f_00858900();
    /* 007de5dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de5e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de5e3: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 007de5e9: lea edx, [eax + 0x163d2] */ r_edx = (u32)(r_eax+0x163d2u);
    /* 007de5ef: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007de5f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de5f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de5f3: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7de5f8u); f_00858900();
    /* 007de5f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de5fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de5fe: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 007de604: lea edx, [eax + 0x163e3] */ r_edx = (u32)(r_eax+0x163e3u);
    /* 007de60a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007de60c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de60d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de60e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7de613u); f_00858900();
    /* 007de613: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de616: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de619: movzx eax, word ptr [edx + 0x12128] */ r_eax = (u32)R16((u32)(r_edx+0x12128u));
    /* 007de620: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 007de626: lea ebx, [ebp - 0xa4] */ r_ebx = (u32)(r_ebp+0xffffff5cu);
    /* 007de62c: lea ecx, [edx + 0x16322] */ r_ecx = (u32)(r_edx+0x16322u);
    /* 007de632: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007de634: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de635: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007de636: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7de63bu); f_00858900();
    /* 007de63b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de63e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de641: lea ecx, [ebp - 0x74] */ r_ecx = (u32)(r_ebp+0xffffff8cu);
    /* 007de644: lea edx, [eax + 0x16352] */ r_edx = (u32)(r_eax+0x16352u);
    /* 007de64a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007de64c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de64d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de64e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7de653u); f_00858900();
    /* 007de653: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de656: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de659: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 007de65c: lea edx, [eax + 0x16382] */ r_edx = (u32)(r_eax+0x16382u);
    /* 007de662: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007de664: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007de665: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007de666: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7de66bu); f_00858900();
    /* 007de66b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007de66e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007de671: lea eax, [ebp - 0xf0] */ r_eax = (u32)(r_ebp+0xffffff10u);
    /* 007de677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007de678: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7de67du); f_007c4fb4();
L_007de67d:; BB(0x007de67d);
    /* 007de67d: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007de67e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007de680: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007de682: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007de684: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007de686: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7de68cu); call_ind(t); }
    /* 007de68c: jmp 0x7de6ac */ goto L_007de6ac;
L_007de6ac:; BB(0x007de6ac);
    /* 007de6ac: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007de6ad: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007de6b0: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007de6b3: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007de6b6: mov esp, ebp */ r_esp = r_ebp;
    /* 007de6b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007de6b9: ret 4 */ FN_RET(0x007de33b); r_esp += 8; return;
}

void f_007de6df(void) /* _WinMain@16_113 */
{
    FN_ENTER(0x007de6df);
    /* 007de6df: jmp 0x7e1900 */ f_007e1900(); return;
}

void f_007e1900(void) /* _WinMain@16_113_0 */
{
    FN_ENTER(0x007e1900);
    /* 007e1900: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007e1901: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e1904: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007e1907: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e190a: mov dword ptr [ecx + 0x1212c], edx */ W32((u32)(r_ecx+0x1212cu), r_edx);
    /* 007e1910: mov edx, dword ptr [ecx + 0x1e0c0] */ r_edx = R32((u32)(r_ecx+0x1e0c0u));
    /* 007e1916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007e1918: je 0x7e1923 */ if (fZ) goto L_007e1923;
L_007e191a:; BB(0x007e191a);
    /* 007e191a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e191d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007e1920: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7e1922u); call_ind(t); }
    /* 007e1922: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007e1923:; BB(0x007e1923);
    /* 007e1923: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007e1924: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e1926: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e1928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e192a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e192c: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7e1932u); call_ind(t); }
    /* 007e1932: jmp 0x7e1952 */ goto L_007e1952;
L_007e1952:; BB(0x007e1952);
    /* 007e1952: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007e1953: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007e1956: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007e1959: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007e195c: mov esp, ebp */ r_esp = r_ebp;
    /* 007e195e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007e195f: ret 4 */ FN_RET(0x007e1900); r_esp += 8; return;
}

void f_007e1987(void) /* _WinMain@16_114 */
{
    FN_ENTER(0x007e1987);
    /* 007e1987: jmp 0x7e4ba8 */ f_007e4ba8(); return;
}

void f_007e4ba8(void) /* _WinMain@16_114_0 */
{
    FN_ENTER(0x007e4ba8);
    /* 007e4ba8: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007e4ba9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e4bac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007e4baf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e4bb2: mov dword ptr [ecx + 0x1212c], edx */ W32((u32)(r_ecx+0x1212cu), r_edx);
    /* 007e4bb8: mov edx, dword ptr [ecx + 0x1e0c4] */ r_edx = R32((u32)(r_ecx+0x1e0c4u));
    /* 007e4bbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007e4bc0: je 0x7e4bcb */ if (fZ) goto L_007e4bcb;
L_007e4bc2:; BB(0x007e4bc2);
    /* 007e4bc2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e4bc5: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007e4bc8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7e4bcau); call_ind(t); }
    /* 007e4bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007e4bcb:; BB(0x007e4bcb);
    /* 007e4bcb: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007e4bcc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4bce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4bd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4bd2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4bd4: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7e4bdau); call_ind(t); }
    /* 007e4bda: jmp 0x7e4bfa */ goto L_007e4bfa;
L_007e4bfa:; BB(0x007e4bfa);
    /* 007e4bfa: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007e4bfb: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007e4bfe: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007e4c01: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007e4c04: mov esp, ebp */ r_esp = r_ebp;
    /* 007e4c06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007e4c07: ret 4 */ FN_RET(0x007e4ba8); r_esp += 8; return;
}

void f_007ebde2(void) /* _WinMain@16_115 */
{
    FN_ENTER(0x007ebde2);
    /* 007ebde2: jmp 0x7ef003 */ f_007ef003(); return;
}

void f_007ef003(void) /* _WinMain@16_115_0 */
{
    FN_ENTER(0x007ef003);
    /* 007ef003: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007ef004: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007ef007: lea edi, [ebp - 0x198] */ r_edi = (u32)(r_ebp+0xfffffe68u);
    /* 007ef00d: mov ecx, 0xc8 */ r_ecx = 0xc8u;
    /* 007ef012: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ef013: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007ef016: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007ef018: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ef019: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007ef01c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007ef01e: mov edi, dword ptr [0xa0fb84] */ r_edi = R32((u32)(0xa0fb84u));
    /* 007ef024: lea esi, [ebp - 0x190] */ r_esi = (u32)(r_ebp+0xfffffe70u);
L_007ef02a:; BB(0x007ef02a);
    /* 007ef02a: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 007ef02c: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 007ef02e: jne 0x7ef04a */ if (!fZ) goto L_007ef04a;
L_007ef030:; BB(0x007ef030);
    /* 007ef030: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 007ef032: je 0x7ef046 */ if (fZ) goto L_007ef046;
L_007ef034:; BB(0x007ef034);
    /* 007ef034: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 007ef037: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 007ef03a: jne 0x7ef04a */ if (!fZ) goto L_007ef04a;
L_007ef03c:; BB(0x007ef03c);
    /* 007ef03c: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ef03f: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007ef042: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 007ef044: jne 0x7ef02a */ if (!fZ) goto L_007ef02a;
L_007ef046:; BB(0x007ef046);
    /* 007ef046: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ef048: jmp 0x7ef04f */ goto L_007ef04f;
L_007ef04a:; BB(0x007ef04a);
    /* 007ef04a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 007ef04c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007ef04f:; BB(0x007ef04f);
    /* 007ef04f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ef051: je 0x7ef060 */ if (fZ) goto L_007ef060;
L_007ef053:; BB(0x007ef053);
    /* 007ef053: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ef056: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007ef058: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x7ef05bu); call_ind(t); }
    /* 007ef05b: jmp 0x7ef290 */ goto L_007ef290;
L_007ef060:; BB(0x007ef060);
    /* 007ef060: mov byte ptr [ebp - 0xd0], 0x19 */ W8((u32)(r_ebp+0xffffff30u), 0x19u);
    /* 007ef067: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007ef069: mov eax, 1 */ r_eax = 0x1u;
    /* 007ef06e: mov ebx, 2 */ r_ebx = 0x2u;
    /* 007ef073: mov byte ptr [ebp - 0xcf], 0x16 */ W8((u32)(r_ebp+0xffffff31u), 0x16u);
    /* 007ef07a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007ef07d: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007ef082: mov byte ptr [ebp - 0xce], 0x18 */ W8((u32)(r_ebp+0xffffff32u), 0x18u);
L_007ef089:; BB(0x007ef089);
    /* 007ef089: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef08e: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef090: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef092: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007ef095: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ef097: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007ef09a: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007ef09c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ef09e: movzx eax, byte ptr [ebp + edi - 0xd0] */ r_eax = (u32)R8((u32)(r_ebp+r_edi+0xffffff30u));
    /* 007ef0a6: xor byte ptr [ebp + esi - 0x130], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffed0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef0ad: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef0b2: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef0b4: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef0b6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007ef0b9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef0bb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007ef0bd: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef0c0: movzx eax, byte ptr [ebp + eax - 0xd0] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff30u));
    /* 007ef0c8: xor byte ptr [ebp + esi - 0x12f], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffed1u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef0cf: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef0d4: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef0d6: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef0d8: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007ef0dc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007ef0df: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef0e1: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007ef0e3: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef0e5: movzx eax, byte ptr [ebp + eax - 0xd0] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff30u));
    /* 007ef0ed: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ef0f0: xor byte ptr [ebp + esi - 0x12e], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffed2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef0f7: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef0fc: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef0fe: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef100: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007ef103: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef105: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007ef107: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef109: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ef10c: movzx eax, byte ptr [ebp + eax - 0xd0] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff30u));
    /* 007ef114: xor byte ptr [ebp + esi - 0x12d], al */ { u32 ad = (u32)(r_ebp+r_esi+0xfffffed3u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef11b: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007ef11e: cmp esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ef121: jl 0x7ef089 */ if ((fS!=fO)) goto L_007ef089;
L_007ef127:; BB(0x007ef127);
    /* 007ef127: mov byte ptr [ebp - 0xcc], 0x19 */ W8((u32)(r_ebp+0xffffff34u), 0x19u);
    /* 007ef12e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007ef130: mov eax, 1 */ r_eax = 0x1u;
    /* 007ef135: mov ebx, 2 */ r_ebx = 0x2u;
    /* 007ef13a: mov byte ptr [ebp - 0xcb], 0x16 */ W8((u32)(r_ebp+0xffffff35u), 0x16u);
    /* 007ef141: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007ef144: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007ef149: mov byte ptr [ebp - 0xca], 0x18 */ W8((u32)(r_ebp+0xffffff36u), 0x18u);
L_007ef150:; BB(0x007ef150);
    /* 007ef150: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef155: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef157: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef159: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007ef15c: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ef15e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007ef161: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007ef163: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ef165: movzx eax, byte ptr [ebp + edi - 0xcc] */ r_eax = (u32)R8((u32)(r_ebp+r_edi+0xffffff34u));
    /* 007ef16d: xor byte ptr [ebp + esi - 0x100], al */ { u32 ad = (u32)(r_ebp+r_esi+0xffffff00u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef174: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef179: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef17b: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef17d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007ef180: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef182: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007ef184: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef187: movzx eax, byte ptr [ebp + eax - 0xcc] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff34u));
    /* 007ef18f: xor byte ptr [ebp + esi - 0xff], al */ { u32 ad = (u32)(r_ebp+r_esi+0xffffff01u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef196: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef19b: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef19d: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef19f: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007ef1a3: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007ef1a6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef1a8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007ef1aa: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef1ac: movzx eax, byte ptr [ebp + eax - 0xcc] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff34u));
    /* 007ef1b4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ef1b7: xor byte ptr [ebp + esi - 0xfe], al */ { u32 ad = (u32)(r_ebp+r_esi+0xffffff02u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef1be: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007ef1c3: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007ef1c5: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007ef1c7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007ef1ca: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef1cc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007ef1ce: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ef1d0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ef1d3: movzx eax, byte ptr [ebp + eax - 0xcc] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffff34u));
    /* 007ef1db: xor byte ptr [ebp + esi - 0xfd], al */ { u32 ad = (u32)(r_ebp+r_esi+0xffffff03u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ef1e2: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007ef1e5: cmp esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ef1e8: jl 0x7ef150 */ if ((fS!=fO)) goto L_007ef150;
L_007ef1ee:; BB(0x007ef1ee);
    /* 007ef1ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ef1f1: lea ecx, [eax + 0x110d4] */ r_ecx = (u32)(r_eax+0x110d4u);
    /* 007ef1f7: lea edx, [ebp - 0x130] */ r_edx = (u32)(r_ebp+0xfffffed0u);
    /* 007ef1fd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007ef1ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ef200: call 0x763fd0 */ r_esp -= 4; W32(r_esp, 0x7ef205u); f_00763fd0();
    /* 007ef205: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ef208: lea ecx, [eax + 0x1008c] */ r_ecx = (u32)(r_eax+0x1008cu);
    /* 007ef20e: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 007ef214: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007ef216: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ef217: call 0x763fd0 */ r_esp -= 4; W32(r_esp, 0x7ef21cu); f_00763fd0();
    /* 007ef21c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ef21f: movzx edx, byte ptr [0xa46b96] */ r_edx = (u32)R8((u32)(0xa46b96u));
    /* 007ef226: mov dword ptr [eax + 0x1211c], 1 */ W32((u32)(r_eax+0x1211cu), 0x1u);
    /* 007ef230: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ef233: je 0x7ef265 */ if (fZ) goto L_007ef265;
L_007ef235:; BB(0x007ef235);
    /* 007ef235: mov edx, dword ptr [eax + 0x12138] */ r_edx = R32((u32)(r_eax+0x12138u));
    /* 007ef23b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ef23d: je 0x7ef25e */ if (fZ) goto L_007ef25e;
L_007ef23f:; BB(0x007ef23f);
    /* 007ef23f: mov eax, dword ptr [0xaaec20] */ r_eax = R32((u32)(0xaaec20u));
    /* 007ef244: mov edx, dword ptr [0xaaec24] */ r_edx = R32((u32)(0xaaec24u));
    /* 007ef24a: mov byte ptr [0xa46b96], 6 */ W8((u32)(0xa46b96u), 0x6u);
    /* 007ef251: mov dword ptr [0xa46bfc], eax */ W32((u32)(0xa46bfcu), r_eax);
    /* 007ef256: mov dword ptr [0xa46c00], edx */ W32((u32)(0xa46c00u), r_edx);
    /* 007ef25c: jmp 0x7ef265 */ goto L_007ef265;
L_007ef25e:; BB(0x007ef25e);
    /* 007ef25e: mov byte ptr [0xa46b96], 5 */ W8((u32)(0xa46b96u), 0x5u);
L_007ef265:; BB(0x007ef265);
    /* 007ef265: lea edi, [ebp - 0xc8] */ r_edi = (u32)(r_ebp+0xffffff38u);
    /* 007ef26b: mov esi, 0xa46b80 */ r_esi = 0xa46b80u;
    /* 007ef270: mov ecx, 0xb4 */ r_ecx = 0xb4u;
    /* 007ef275: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ef276: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007ef279: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007ef27b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ef27c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007ef27f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007ef281: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ef284: lea eax, [ebp - 0xc8] */ r_eax = (u32)(r_ebp+0xffffff38u);
    /* 007ef28a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ef28b: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7ef290u); f_007c4fb4();
L_007ef290:; BB(0x007ef290);
    /* 007ef290: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ef293: mov dword ptr [eax + 0x12138], 0 */ W32((u32)(r_eax+0x12138u), 0x0u);
    /* 007ef29d: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007ef29e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007ef2a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ef2a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ef2a4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ef2a6: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7ef2acu); call_ind(t); }
    /* 007ef2ac: jmp 0x7ef2cc */ goto L_007ef2cc;
L_007ef2cc:; BB(0x007ef2cc);
    /* 007ef2cc: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007ef2cd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007ef2d0: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007ef2d3: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007ef2d6: mov esp, ebp */ r_esp = r_ebp;
    /* 007ef2d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ef2d9: ret 4 */ FN_RET(0x007ef003); r_esp += 8; return;
}

void f_007ef2ff(void) /* _WinMain@16_116 */
{
    FN_ENTER(0x007ef2ff);
    /* 007ef2ff: jmp 0x7f2520 */ f_007f2520(); return;
}

void f_007f2520(void) /* _WinMain@16_116_0 */
{
    FN_ENTER(0x007f2520);
    /* 007f2520: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007f2521: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007f2524: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007f2526: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007f2529: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 007f252c: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 007f252f: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 007f2532: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 007f2535: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007f2538: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 007f253b: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
    /* 007f253e: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 007f2541: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 007f2544: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 007f2547: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007f254a: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 007f254d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007f2550: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 007f2553: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007f2556: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 007f2559: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007f255c: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 007f255f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007f2562: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 007f2565: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 007f2568: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 007f256b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007f256e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007f2571: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007f2574: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 007f2577: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007f257a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007f257d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007f2580: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007f2583: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 007f2586: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007f2589: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007f258c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f258e: je 0x7f262d */ if (fZ) goto L_007f262d;
L_007f2594:; BB(0x007f2594);
    /* 007f2594: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f2597: je 0x7f25de */ if (fZ) goto L_007f25de;
L_007f2599:; BB(0x007f2599);
    /* 007f2599: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007f259c: jl 0x7f25b5 */ if ((fS!=fO)) goto L_007f25b5;
L_007f259e:; BB(0x007f259e);
    /* 007f259e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007f25a1: jg 0x7f25b5 */ if ((!fZ&&fS==fO)) goto L_007f25b5;
L_007f25a3:; BB(0x007f25a3);
    /* 007f25a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007f25a6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007f25aa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007f25af: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007f25b3: jmp 0x7f25ee */ goto L_007f25ee;
L_007f25b5:; BB(0x007f25b5);
    /* 007f25b5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f25b8: jne 0x7f25cc */ if (!fZ) goto L_007f25cc;
L_007f25ba:; BB(0x007f25ba);
    /* 007f25ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007f25bd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007f25c1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007f25c6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007f25ca: jmp 0x7f25ee */ goto L_007f25ee;
L_007f25cc:; BB(0x007f25cc);
    /* 007f25cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007f25cf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007f25d3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007f25d8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007f25dc: jmp 0x7f25ee */ goto L_007f25ee;
L_007f25de:; BB(0x007f25de);
    /* 007f25de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007f25e1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007f25e5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007f25ea: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007f25ee:; BB(0x007f25ee);
    /* 007f25ee: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007f25ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f25f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f25f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f25f5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f25f7: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7f25fdu); call_ind(t); }
    /* 007f25fd: jmp 0x7f261d */ goto L_007f261d;
L_007f261d:; BB(0x007f261d);
    /* 007f261d: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007f261e: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007f2621: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007f2624: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007f2627: mov esp, ebp */ r_esp = r_ebp;
    /* 007f2629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f262a: ret 4 */ FN_RET(0x007f2520); r_esp += 8; return;
L_007f262d:; BB(0x007f262d);
    /* 007f262d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007f2630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007f2633: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 007f2636: mov dword ptr [ecx + 0x12120], eax */ W32((u32)(r_ecx+0x12120u), r_eax);
    /* 007f263c: mov dword ptr [ecx + 0x12124], edx */ W32((u32)(r_ecx+0x12124u), r_edx);
    /* 007f2642: mov byte ptr [0xa46b96], 5 */ W8((u32)(0xa46b96u), 0x5u);
    /* 007f2649: jmp 0x7f25ee */ goto L_007f25ee;
}

void f_007f9c83(void) /* _WinMain@16_117 */
{
    FN_ENTER(0x007f9c83);
    /* 007f9c83: jmp 0x7fcea4 */ f_007fcea4(); return;
}

void f_007fcea4(void) /* _WinMain@16_117_0 */
{
    FN_ENTER(0x007fcea4);
    /* 007fcea4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007fcea5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007fcea8: mov edx, dword ptr [eax + 0x1e140] */ r_edx = R32((u32)(r_eax+0x1e140u));
    /* 007fceae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007fceb0: je 0x7fcebb */ if (fZ) goto L_007fcebb;
L_007fceb2:; BB(0x007fceb2);
    /* 007fceb2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007fceb5: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007fceb8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7fcebau); call_ind(t); }
    /* 007fceba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007fcebb:; BB(0x007fcebb);
    /* 007fcebb: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007fcebc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007fcebe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007fcec0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007fcec2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007fcec4: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7fcecau); call_ind(t); }
    /* 007fceca: jmp 0x7fceea */ goto L_007fceea;
L_007fceea:; BB(0x007fceea);
    /* 007fceea: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007fceeb: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007fceee: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007fcef1: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007fcef4: mov esp, ebp */ r_esp = r_ebp;
    /* 007fcef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007fcef7: ret 4 */ FN_RET(0x007fcea4); r_esp += 8; return;
}

void f_0086b680(void) /* _WinMain@16_118 */
{
    FN_ENTER(0x0086b680);
    /* 0086b680: jmp 0x86ba20 */ f_0086ba20(); return;
}

void f_0086b6b0(void) /* _WinMain@16_119 */
{
    FN_ENTER(0x0086b6b0);
    /* 0086b6b0: jmp 0x86c4a0 */ f_0086c4a0(); return;
}

void f_0086ba20(void) /* _WinMain@16_118_0 */
{
    FN_ENTER(0x0086ba20);
    /* 0086ba20: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0086ba24: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0086ba29: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ba2c: jne 0x86ba37 */ if (!fZ) goto L_0086ba37;
L_0086ba2e:; BB(0x0086ba2e);
    /* 0086ba2e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086ba32: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0086ba34: mov eax, edx */ r_eax = r_edx;
    /* 0086ba36: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086ba37:; BB(0x0086ba37);
    /* 0086ba37: jl 0x86ba60 */ if ((fS!=fO)) goto L_0086ba60;
L_0086ba39:; BB(0x0086ba39);
    /* 0086ba39: mov ah, al */ r_eax = (r_eax & 0xffff00ffu) | ((((u8)r_eax) & 0xffu) << 8);
    /* 0086ba3b: mov edx, eax */ r_edx = r_eax;
    /* 0086ba3d: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086ba40: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086ba42: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086ba46: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ba4c: jne 0x86ba65 */ if (!fZ) goto L_0086ba65;
L_0086ba4e:; BB(0x0086ba4e);
    /* 0086ba4e: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ba51: jge 0x86bc82 */ if ((fS==fO)) goto L_0086bc82;
L_0086ba57:; BB(0x0086ba57);
    /* 0086ba57: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086ba59: jmp dword ptr [ecx*4 + 0x86ba90] */ { u32 t = R32((u32)(r_ecx*4+0x86ba90u)); switch (t) { case 0x86bbd0u: goto L_0086bbd0; case 0x86bc05u: goto L_0086bc05; case 0x86bc3du: goto L_0086bc3d; case 0x86bc76u: goto L_0086bc76; case 0x86bbcdu: goto L_0086bbcd; case 0x86bc02u: goto L_0086bc02; case 0x86bc3au: goto L_0086bc3a; case 0x86bc73u: goto L_0086bc73; case 0x86bbcau: goto L_0086bbca; case 0x86bbffu: goto L_0086bbff; case 0x86bc37u: goto L_0086bc37; case 0x86bc70u: goto L_0086bc70; case 0x86bbc7u: goto L_0086bbc7; case 0x86bbfcu: goto L_0086bbfc; case 0x86bc34u: goto L_0086bc34; case 0x86bc6du: goto L_0086bc6d; case 0x86bbc4u: goto L_0086bbc4; case 0x86bbf9u: goto L_0086bbf9; case 0x86bc31u: goto L_0086bc31; case 0x86bc6au: goto L_0086bc6a; case 0x86bbc1u: goto L_0086bbc1; case 0x86bbf6u: goto L_0086bbf6; case 0x86bc2eu: goto L_0086bc2e; case 0x86bc67u: goto L_0086bc67; case 0x86bbbeu: goto L_0086bbbe; case 0x86bbf3u: goto L_0086bbf3; case 0x86bc2bu: goto L_0086bc2b; case 0x86bc64u: goto L_0086bc64; case 0x86bbbbu: goto L_0086bbbb; case 0x86bbf0u: goto L_0086bbf0; case 0x86bc28u: goto L_0086bc28; case 0x86bc61u: goto L_0086bc61; case 0x86bbb8u: goto L_0086bbb8; case 0x86bbedu: goto L_0086bbed; case 0x86bc25u: goto L_0086bc25; case 0x86bc5eu: goto L_0086bc5e; case 0x86bbb5u: goto L_0086bbb5; case 0x86bbeau: goto L_0086bbea; case 0x86bc22u: goto L_0086bc22; case 0x86bc5bu: goto L_0086bc5b; case 0x86bbb2u: goto L_0086bbb2; case 0x86bbe7u: goto L_0086bbe7; case 0x86bc1fu: goto L_0086bc1f; case 0x86bc58u: goto L_0086bc58; case 0x86bbafu: goto L_0086bbaf; case 0x86bbe4u: goto L_0086bbe4; case 0x86bc1cu: goto L_0086bc1c; case 0x86bc55u: goto L_0086bc55; case 0x86bbacu: goto L_0086bbac; case 0x86bbe1u: goto L_0086bbe1; case 0x86bc19u: goto L_0086bc19; case 0x86bc52u: goto L_0086bc52; case 0x86bba9u: goto L_0086bba9; case 0x86bbdeu: goto L_0086bbde; case 0x86bc16u: goto L_0086bc16; case 0x86bc4fu: goto L_0086bc4f; case 0x86bba6u: goto L_0086bba6; case 0x86bbdbu: goto L_0086bbdb; case 0x86bc13u: goto L_0086bc13; case 0x86bc4cu: goto L_0086bc4c; case 0x86bba3u: goto L_0086bba3; case 0x86bbd8u: goto L_0086bbd8; case 0x86bc10u: goto L_0086bc10; case 0x86bc49u: goto L_0086bc49; case 0x86bba0u: goto L_0086bba0; case 0x86bbd5u: goto L_0086bbd5; case 0x86bc0du: goto L_0086bc0d; case 0x86bc46u: goto L_0086bc46; default: UNSUP(0x0086ba59, "jump table entry is not a known target"); } }
L_0086ba60:; BB(0x0086ba60);
    /* 0086ba60: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086ba64: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086ba65:; BB(0x0086ba65);
    /* 0086ba65: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ba68: jle 0x86ba4e */ if ((fZ||fS!=fO)) goto L_0086ba4e;
L_0086ba6a:; BB(0x0086ba6a);
    /* 0086ba6a: test edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ba70: je 0x86ba7a */ if (fZ) goto L_0086ba7a;
L_0086ba72:; BB(0x0086ba72);
    /* 0086ba72: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0086ba74: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ba77: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0086ba7a:; BB(0x0086ba7a);
    /* 0086ba7a: test edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ba80: je 0x86ba4e */ if (fZ) goto L_0086ba4e;
L_0086ba82:; BB(0x0086ba82);
    /* 0086ba82: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0086ba85: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ba88: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ba8b: jmp 0x86ba4e */ goto L_0086ba4e;
L_0086bba0:; BB(0x0086bba0);
    /* 0086bba0: mov dword ptr [edx - 0x40], eax */ W32((u32)(r_edx+0xffffffc0u), r_eax);
L_0086bba3:; BB(0x0086bba3);
    /* 0086bba3: mov dword ptr [edx - 0x3c], eax */ W32((u32)(r_edx+0xffffffc4u), r_eax);
L_0086bba6:; BB(0x0086bba6);
    /* 0086bba6: mov dword ptr [edx - 0x38], eax */ W32((u32)(r_edx+0xffffffc8u), r_eax);
L_0086bba9:; BB(0x0086bba9);
    /* 0086bba9: mov dword ptr [edx - 0x34], eax */ W32((u32)(r_edx+0xffffffccu), r_eax);
L_0086bbac:; BB(0x0086bbac);
    /* 0086bbac: mov dword ptr [edx - 0x30], eax */ W32((u32)(r_edx+0xffffffd0u), r_eax);
L_0086bbaf:; BB(0x0086bbaf);
    /* 0086bbaf: mov dword ptr [edx - 0x2c], eax */ W32((u32)(r_edx+0xffffffd4u), r_eax);
L_0086bbb2:; BB(0x0086bbb2);
    /* 0086bbb2: mov dword ptr [edx - 0x28], eax */ W32((u32)(r_edx+0xffffffd8u), r_eax);
L_0086bbb5:; BB(0x0086bbb5);
    /* 0086bbb5: mov dword ptr [edx - 0x24], eax */ W32((u32)(r_edx+0xffffffdcu), r_eax);
L_0086bbb8:; BB(0x0086bbb8);
    /* 0086bbb8: mov dword ptr [edx - 0x20], eax */ W32((u32)(r_edx+0xffffffe0u), r_eax);
L_0086bbbb:; BB(0x0086bbbb);
    /* 0086bbbb: mov dword ptr [edx - 0x1c], eax */ W32((u32)(r_edx+0xffffffe4u), r_eax);
L_0086bbbe:; BB(0x0086bbbe);
    /* 0086bbbe: mov dword ptr [edx - 0x18], eax */ W32((u32)(r_edx+0xffffffe8u), r_eax);
L_0086bbc1:; BB(0x0086bbc1);
    /* 0086bbc1: mov dword ptr [edx - 0x14], eax */ W32((u32)(r_edx+0xffffffecu), r_eax);
L_0086bbc4:; BB(0x0086bbc4);
    /* 0086bbc4: mov dword ptr [edx - 0x10], eax */ W32((u32)(r_edx+0xfffffff0u), r_eax);
L_0086bbc7:; BB(0x0086bbc7);
    /* 0086bbc7: mov dword ptr [edx - 0xc], eax */ W32((u32)(r_edx+0xfffffff4u), r_eax);
L_0086bbca:; BB(0x0086bbca);
    /* 0086bbca: mov dword ptr [edx - 8], eax */ W32((u32)(r_edx+0xfffffff8u), r_eax);
L_0086bbcd:; BB(0x0086bbcd);
    /* 0086bbcd: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
L_0086bbd0:; BB(0x0086bbd0);
    /* 0086bbd0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bbd4: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bbd5:; BB(0x0086bbd5);
    /* 0086bbd5: mov dword ptr [edx - 0x41], eax */ W32((u32)(r_edx+0xffffffbfu), r_eax);
L_0086bbd8:; BB(0x0086bbd8);
    /* 0086bbd8: mov dword ptr [edx - 0x3d], eax */ W32((u32)(r_edx+0xffffffc3u), r_eax);
L_0086bbdb:; BB(0x0086bbdb);
    /* 0086bbdb: mov dword ptr [edx - 0x39], eax */ W32((u32)(r_edx+0xffffffc7u), r_eax);
L_0086bbde:; BB(0x0086bbde);
    /* 0086bbde: mov dword ptr [edx - 0x35], eax */ W32((u32)(r_edx+0xffffffcbu), r_eax);
L_0086bbe1:; BB(0x0086bbe1);
    /* 0086bbe1: mov dword ptr [edx - 0x31], eax */ W32((u32)(r_edx+0xffffffcfu), r_eax);
L_0086bbe4:; BB(0x0086bbe4);
    /* 0086bbe4: mov dword ptr [edx - 0x2d], eax */ W32((u32)(r_edx+0xffffffd3u), r_eax);
L_0086bbe7:; BB(0x0086bbe7);
    /* 0086bbe7: mov dword ptr [edx - 0x29], eax */ W32((u32)(r_edx+0xffffffd7u), r_eax);
L_0086bbea:; BB(0x0086bbea);
    /* 0086bbea: mov dword ptr [edx - 0x25], eax */ W32((u32)(r_edx+0xffffffdbu), r_eax);
L_0086bbed:; BB(0x0086bbed);
    /* 0086bbed: mov dword ptr [edx - 0x21], eax */ W32((u32)(r_edx+0xffffffdfu), r_eax);
L_0086bbf0:; BB(0x0086bbf0);
    /* 0086bbf0: mov dword ptr [edx - 0x1d], eax */ W32((u32)(r_edx+0xffffffe3u), r_eax);
L_0086bbf3:; BB(0x0086bbf3);
    /* 0086bbf3: mov dword ptr [edx - 0x19], eax */ W32((u32)(r_edx+0xffffffe7u), r_eax);
L_0086bbf6:; BB(0x0086bbf6);
    /* 0086bbf6: mov dword ptr [edx - 0x15], eax */ W32((u32)(r_edx+0xffffffebu), r_eax);
L_0086bbf9:; BB(0x0086bbf9);
    /* 0086bbf9: mov dword ptr [edx - 0x11], eax */ W32((u32)(r_edx+0xffffffefu), r_eax);
L_0086bbfc:; BB(0x0086bbfc);
    /* 0086bbfc: mov dword ptr [edx - 0xd], eax */ W32((u32)(r_edx+0xfffffff3u), r_eax);
L_0086bbff:; BB(0x0086bbff);
    /* 0086bbff: mov dword ptr [edx - 9], eax */ W32((u32)(r_edx+0xfffffff7u), r_eax);
L_0086bc02:; BB(0x0086bc02);
    /* 0086bc02: mov dword ptr [edx - 5], eax */ W32((u32)(r_edx+0xfffffffbu), r_eax);
L_0086bc05:; BB(0x0086bc05);
    /* 0086bc05: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086bc08: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bc0c: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bc0d:; BB(0x0086bc0d);
    /* 0086bc0d: mov dword ptr [edx - 0x42], eax */ W32((u32)(r_edx+0xffffffbeu), r_eax);
L_0086bc10:; BB(0x0086bc10);
    /* 0086bc10: mov dword ptr [edx - 0x3e], eax */ W32((u32)(r_edx+0xffffffc2u), r_eax);
L_0086bc13:; BB(0x0086bc13);
    /* 0086bc13: mov dword ptr [edx - 0x3a], eax */ W32((u32)(r_edx+0xffffffc6u), r_eax);
L_0086bc16:; BB(0x0086bc16);
    /* 0086bc16: mov dword ptr [edx - 0x36], eax */ W32((u32)(r_edx+0xffffffcau), r_eax);
L_0086bc19:; BB(0x0086bc19);
    /* 0086bc19: mov dword ptr [edx - 0x32], eax */ W32((u32)(r_edx+0xffffffceu), r_eax);
L_0086bc1c:; BB(0x0086bc1c);
    /* 0086bc1c: mov dword ptr [edx - 0x2e], eax */ W32((u32)(r_edx+0xffffffd2u), r_eax);
L_0086bc1f:; BB(0x0086bc1f);
    /* 0086bc1f: mov dword ptr [edx - 0x2a], eax */ W32((u32)(r_edx+0xffffffd6u), r_eax);
L_0086bc22:; BB(0x0086bc22);
    /* 0086bc22: mov dword ptr [edx - 0x26], eax */ W32((u32)(r_edx+0xffffffdau), r_eax);
L_0086bc25:; BB(0x0086bc25);
    /* 0086bc25: mov dword ptr [edx - 0x22], eax */ W32((u32)(r_edx+0xffffffdeu), r_eax);
L_0086bc28:; BB(0x0086bc28);
    /* 0086bc28: mov dword ptr [edx - 0x1e], eax */ W32((u32)(r_edx+0xffffffe2u), r_eax);
L_0086bc2b:; BB(0x0086bc2b);
    /* 0086bc2b: mov dword ptr [edx - 0x1a], eax */ W32((u32)(r_edx+0xffffffe6u), r_eax);
L_0086bc2e:; BB(0x0086bc2e);
    /* 0086bc2e: mov dword ptr [edx - 0x16], eax */ W32((u32)(r_edx+0xffffffeau), r_eax);
L_0086bc31:; BB(0x0086bc31);
    /* 0086bc31: mov dword ptr [edx - 0x12], eax */ W32((u32)(r_edx+0xffffffeeu), r_eax);
L_0086bc34:; BB(0x0086bc34);
    /* 0086bc34: mov dword ptr [edx - 0xe], eax */ W32((u32)(r_edx+0xfffffff2u), r_eax);
L_0086bc37:; BB(0x0086bc37);
    /* 0086bc37: mov dword ptr [edx - 0xa], eax */ W32((u32)(r_edx+0xfffffff6u), r_eax);
L_0086bc3a:; BB(0x0086bc3a);
    /* 0086bc3a: mov dword ptr [edx - 6], eax */ W32((u32)(r_edx+0xfffffffau), r_eax);
L_0086bc3d:; BB(0x0086bc3d);
    /* 0086bc3d: mov word ptr [edx - 2], ax */ W16((u32)(r_edx+0xfffffffeu), (u16)r_eax);
    /* 0086bc41: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bc45: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bc46:; BB(0x0086bc46);
    /* 0086bc46: mov dword ptr [edx - 0x43], eax */ W32((u32)(r_edx+0xffffffbdu), r_eax);
L_0086bc49:; BB(0x0086bc49);
    /* 0086bc49: mov dword ptr [edx - 0x3f], eax */ W32((u32)(r_edx+0xffffffc1u), r_eax);
L_0086bc4c:; BB(0x0086bc4c);
    /* 0086bc4c: mov dword ptr [edx - 0x3b], eax */ W32((u32)(r_edx+0xffffffc5u), r_eax);
L_0086bc4f:; BB(0x0086bc4f);
    /* 0086bc4f: mov dword ptr [edx - 0x37], eax */ W32((u32)(r_edx+0xffffffc9u), r_eax);
L_0086bc52:; BB(0x0086bc52);
    /* 0086bc52: mov dword ptr [edx - 0x33], eax */ W32((u32)(r_edx+0xffffffcdu), r_eax);
L_0086bc55:; BB(0x0086bc55);
    /* 0086bc55: mov dword ptr [edx - 0x2f], eax */ W32((u32)(r_edx+0xffffffd1u), r_eax);
L_0086bc58:; BB(0x0086bc58);
    /* 0086bc58: mov dword ptr [edx - 0x2b], eax */ W32((u32)(r_edx+0xffffffd5u), r_eax);
L_0086bc5b:; BB(0x0086bc5b);
    /* 0086bc5b: mov dword ptr [edx - 0x27], eax */ W32((u32)(r_edx+0xffffffd9u), r_eax);
L_0086bc5e:; BB(0x0086bc5e);
    /* 0086bc5e: mov dword ptr [edx - 0x23], eax */ W32((u32)(r_edx+0xffffffddu), r_eax);
L_0086bc61:; BB(0x0086bc61);
    /* 0086bc61: mov dword ptr [edx - 0x1f], eax */ W32((u32)(r_edx+0xffffffe1u), r_eax);
L_0086bc64:; BB(0x0086bc64);
    /* 0086bc64: mov dword ptr [edx - 0x1b], eax */ W32((u32)(r_edx+0xffffffe5u), r_eax);
L_0086bc67:; BB(0x0086bc67);
    /* 0086bc67: mov dword ptr [edx - 0x17], eax */ W32((u32)(r_edx+0xffffffe9u), r_eax);
L_0086bc6a:; BB(0x0086bc6a);
    /* 0086bc6a: mov dword ptr [edx - 0x13], eax */ W32((u32)(r_edx+0xffffffedu), r_eax);
L_0086bc6d:; BB(0x0086bc6d);
    /* 0086bc6d: mov dword ptr [edx - 0xf], eax */ W32((u32)(r_edx+0xfffffff1u), r_eax);
L_0086bc70:; BB(0x0086bc70);
    /* 0086bc70: mov dword ptr [edx - 0xb], eax */ W32((u32)(r_edx+0xfffffff5u), r_eax);
L_0086bc73:; BB(0x0086bc73);
    /* 0086bc73: mov dword ptr [edx - 7], eax */ W32((u32)(r_edx+0xfffffff9u), r_eax);
L_0086bc76:; BB(0x0086bc76);
    /* 0086bc76: mov word ptr [edx - 3], ax */ W16((u32)(r_edx+0xfffffffdu), (u16)r_eax);
    /* 0086bc7a: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086bc7d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bc81: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bc82:; BB(0x0086bc82);
    /* 0086bc82: cmp dword ptr [0xa24e34], 1 */ {  u32 a = R32((u32)(0xa24e34u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086bc89: je 0x86c090 */ if (fZ) goto L_0086c090;
L_0086bc8f:; BB(0x0086bc8f);
    /* 0086bc8f: jl 0x86c210 */ if ((fS!=fO)) goto L_0086c210;
L_0086bc95:; BB(0x0086bc95);
    /* 0086bc95: pxor xmm1, xmm1 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[1] = r.q; }
    /* 0086bc99: pxor xmm0, xmm0 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[1] = r.q; }
    /* 0086bc9d: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086bca0: je 0x86bcc4 */ if (fZ) goto L_0086bcc4;
L_0086bca2:; BB(0x0086bca2);
    /* 0086bca2: movd xmm0, eax */ { u32 v = r_eax; xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0086bca6: por xmm1, xmm0 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q | b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q | b.q; xmm[1].q[1] = r.q; }
    /* 0086bcaa: pslldq xmm0, 4 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (4 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (4 * 8); xmm[0].q[1] = 4 ? (hi << (4 * 8)) | (lo >> (64 - (4 * 8))) : hi; } }
    /* 0086bcaf: por xmm1, xmm0 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q | b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q | b.q; xmm[1].q[1] = r.q; }
    /* 0086bcb3: por xmm0, xmm1 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086bcb7: pslldq xmm1, 8 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (8 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = lo << (8 * 8); xmm[1].q[1] = 8 ? (hi << (8 * 8)) | (lo >> (64 - (8 * 8))) : hi; } }
    /* 0086bcbc: por xmm0, xmm1 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086bcc0: por xmm1, xmm0 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q | b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q | b.q; xmm[1].q[1] = r.q; }
L_0086bcc4:; BB(0x0086bcc4);
    /* 0086bcc4: test edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086bcca: jne 0x86bce1 */ if (!fZ) goto L_0086bce1;
L_0086bccc:; BB(0x0086bccc);
    /* 0086bccc: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086bcd2: jge 0x86c155 */ if ((fS==fO)) goto L_0086c155;
L_0086bcd8:; BB(0x0086bcd8);
    /* 0086bcd8: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086bcda: jmp dword ptr [ecx*4 + 0x86c260] */ { u32 t = R32((u32)(r_ecx*4+0x86c260u)); switch (t) { case 0x86bd38u: goto L_0086bd38; case 0x86bd68u: goto L_0086bd68; case 0x86bd9bu: goto L_0086bd9b; case 0x86bdcfu: goto L_0086bdcf; case 0x86be06u: goto L_0086be06; case 0x86be39u: goto L_0086be39; case 0x86be6fu: goto L_0086be6f; case 0x86bea6u: goto L_0086bea6; case 0x86bee0u: goto L_0086bee0; case 0x86bf15u: goto L_0086bf15; case 0x86bf4du: goto L_0086bf4d; case 0x86bf86u: goto L_0086bf86; case 0x86bfc2u: goto L_0086bfc2; case 0x86bffau: goto L_0086bffa; case 0x86c035u: goto L_0086c035; case 0x86c071u: goto L_0086c071; case 0x86bd33u: goto L_0086bd33; case 0x86bd63u: goto L_0086bd63; case 0x86bd96u: goto L_0086bd96; case 0x86bdcau: goto L_0086bdca; case 0x86be01u: goto L_0086be01; case 0x86be34u: goto L_0086be34; case 0x86be6au: goto L_0086be6a; case 0x86bea1u: goto L_0086bea1; case 0x86bedbu: goto L_0086bedb; case 0x86bf10u: goto L_0086bf10; case 0x86bf48u: goto L_0086bf48; case 0x86bf81u: goto L_0086bf81; case 0x86bfbdu: goto L_0086bfbd; case 0x86bff5u: goto L_0086bff5; case 0x86c030u: goto L_0086c030; case 0x86c06cu: goto L_0086c06c; case 0x86bd2eu: goto L_0086bd2e; case 0x86bd5eu: goto L_0086bd5e; case 0x86bd91u: goto L_0086bd91; case 0x86bdc5u: goto L_0086bdc5; case 0x86bdfcu: goto L_0086bdfc; case 0x86be2fu: goto L_0086be2f; case 0x86be65u: goto L_0086be65; case 0x86be9cu: goto L_0086be9c; case 0x86bed6u: goto L_0086bed6; case 0x86bf0bu: goto L_0086bf0b; case 0x86bf43u: goto L_0086bf43; case 0x86bf7cu: goto L_0086bf7c; case 0x86bfb8u: goto L_0086bfb8; case 0x86bff0u: goto L_0086bff0; case 0x86c02bu: goto L_0086c02b; case 0x86c067u: goto L_0086c067; case 0x86bd29u: goto L_0086bd29; case 0x86bd59u: goto L_0086bd59; case 0x86bd8cu: goto L_0086bd8c; case 0x86bdc0u: goto L_0086bdc0; case 0x86bdf7u: goto L_0086bdf7; case 0x86be2au: goto L_0086be2a; case 0x86be60u: goto L_0086be60; case 0x86be97u: goto L_0086be97; case 0x86bed1u: goto L_0086bed1; case 0x86bf06u: goto L_0086bf06; case 0x86bf3eu: goto L_0086bf3e; case 0x86bf77u: goto L_0086bf77; case 0x86bfb3u: goto L_0086bfb3; case 0x86bfebu: goto L_0086bfeb; case 0x86c026u: goto L_0086c026; case 0x86c062u: goto L_0086c062; case 0x86bd24u: goto L_0086bd24; case 0x86bd54u: goto L_0086bd54; case 0x86bd87u: goto L_0086bd87; case 0x86bdbbu: goto L_0086bdbb; case 0x86bdf2u: goto L_0086bdf2; case 0x86be25u: goto L_0086be25; case 0x86be5bu: goto L_0086be5b; case 0x86be92u: goto L_0086be92; case 0x86beccu: goto L_0086becc; case 0x86bf01u: goto L_0086bf01; case 0x86bf39u: goto L_0086bf39; case 0x86bf72u: goto L_0086bf72; case 0x86bfaeu: goto L_0086bfae; case 0x86bfe6u: goto L_0086bfe6; case 0x86c021u: goto L_0086c021; case 0x86c05du: goto L_0086c05d; case 0x86bd1fu: goto L_0086bd1f; case 0x86bd4fu: goto L_0086bd4f; case 0x86bd82u: goto L_0086bd82; case 0x86bdb6u: goto L_0086bdb6; case 0x86bdedu: goto L_0086bded; case 0x86be20u: goto L_0086be20; case 0x86be56u: goto L_0086be56; case 0x86be8du: goto L_0086be8d; case 0x86bec7u: goto L_0086bec7; case 0x86befcu: goto L_0086befc; case 0x86bf34u: goto L_0086bf34; case 0x86bf6du: goto L_0086bf6d; case 0x86bfa9u: goto L_0086bfa9; case 0x86bfe1u: goto L_0086bfe1; case 0x86c01cu: goto L_0086c01c; case 0x86c058u: goto L_0086c058; case 0x86bd1au: goto L_0086bd1a; case 0x86bd4au: goto L_0086bd4a; case 0x86bd7du: goto L_0086bd7d; case 0x86bdb1u: goto L_0086bdb1; case 0x86bde8u: goto L_0086bde8; case 0x86be1bu: goto L_0086be1b; case 0x86be51u: goto L_0086be51; case 0x86be88u: goto L_0086be88; case 0x86bec2u: goto L_0086bec2; case 0x86bef7u: goto L_0086bef7; case 0x86bf2fu: goto L_0086bf2f; case 0x86bf68u: goto L_0086bf68; case 0x86bfa4u: goto L_0086bfa4; case 0x86bfdcu: goto L_0086bfdc; case 0x86c017u: goto L_0086c017; case 0x86c053u: goto L_0086c053; case 0x86bd15u: goto L_0086bd15; case 0x86bd45u: goto L_0086bd45; case 0x86bd78u: goto L_0086bd78; case 0x86bdacu: goto L_0086bdac; case 0x86bde3u: goto L_0086bde3; case 0x86be16u: goto L_0086be16; case 0x86be4cu: goto L_0086be4c; case 0x86be83u: goto L_0086be83; case 0x86bebdu: goto L_0086bebd; case 0x86bef2u: goto L_0086bef2; case 0x86bf2au: goto L_0086bf2a; case 0x86bf63u: goto L_0086bf63; case 0x86bf9fu: goto L_0086bf9f; case 0x86bfd7u: goto L_0086bfd7; case 0x86c012u: goto L_0086c012; case 0x86c04eu: goto L_0086c04e; case 0x86bd10u: goto L_0086bd10; case 0x86bd3du: goto L_0086bd3d; case 0x86bd70u: goto L_0086bd70; case 0x86bda4u: goto L_0086bda4; case 0x86bddbu: goto L_0086bddb; case 0x86be0eu: goto L_0086be0e; case 0x86be44u: goto L_0086be44; case 0x86be7bu: goto L_0086be7b; case 0x86beb5u: goto L_0086beb5; case 0x86beeau: goto L_0086beea; case 0x86bf22u: goto L_0086bf22; case 0x86bf5bu: goto L_0086bf5b; case 0x86bf97u: goto L_0086bf97; case 0x86bfcfu: goto L_0086bfcf; case 0x86c00au: goto L_0086c00a; case 0x86c046u: goto L_0086c046; default: UNSUP(0x0086bcda, "jump table entry is not a known target"); } }
L_0086bce1:; BB(0x0086bce1);
    /* 0086bce1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086bce3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086bce6: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086bce9: test edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086bcef: je 0x86bccc */ if (fZ) goto L_0086bccc;
L_0086bcf1:; BB(0x0086bcf1);
    /* 0086bcf1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086bcf3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086bcf6: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086bcf9: test edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086bcff: je 0x86bccc */ if (fZ) goto L_0086bccc;
L_0086bd01:; BB(0x0086bd01);
    /* 0086bd01: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086bd03: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086bd06: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086bd09: jmp 0x86bccc */ goto L_0086bccc;
L_0086bd10:; BB(0x0086bd10);
    /* 0086bd10: movdqa xmmword ptr [edx - 0x80], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff80u), &xmm[0], 16);
L_0086bd15:; BB(0x0086bd15);
    /* 0086bd15: movdqa xmmword ptr [edx - 0x70], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff90u), &xmm[0], 16);
L_0086bd1a:; BB(0x0086bd1a);
    /* 0086bd1a: movdqa xmmword ptr [edx - 0x60], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa0u), &xmm[0], 16);
L_0086bd1f:; BB(0x0086bd1f);
    /* 0086bd1f: movdqa xmmword ptr [edx - 0x50], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb0u), &xmm[0], 16);
L_0086bd24:; BB(0x0086bd24);
    /* 0086bd24: movdqa xmmword ptr [edx - 0x40], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc0u), &xmm[0], 16);
L_0086bd29:; BB(0x0086bd29);
    /* 0086bd29: movdqa xmmword ptr [edx - 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd0u), &xmm[0], 16);
L_0086bd2e:; BB(0x0086bd2e);
    /* 0086bd2e: movdqa xmmword ptr [edx - 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe0u), &xmm[0], 16);
L_0086bd33:; BB(0x0086bd33);
    /* 0086bd33: movdqa xmmword ptr [edx - 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xfffffff0u), &xmm[0], 16);
L_0086bd38:; BB(0x0086bd38);
    /* 0086bd38: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bd3c: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bd3d:; BB(0x0086bd3d);
    /* 0086bd3d: movdqa xmmword ptr [edx - 0x81], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff7fu), &xmm[0], 16);
L_0086bd45:; BB(0x0086bd45);
    /* 0086bd45: movdqa xmmword ptr [edx - 0x71], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff8fu), &xmm[0], 16);
L_0086bd4a:; BB(0x0086bd4a);
    /* 0086bd4a: movdqa xmmword ptr [edx - 0x61], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff9fu), &xmm[0], 16);
L_0086bd4f:; BB(0x0086bd4f);
    /* 0086bd4f: movdqa xmmword ptr [edx - 0x51], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffafu), &xmm[0], 16);
L_0086bd54:; BB(0x0086bd54);
    /* 0086bd54: movdqa xmmword ptr [edx - 0x41], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffbfu), &xmm[0], 16);
L_0086bd59:; BB(0x0086bd59);
    /* 0086bd59: movdqa xmmword ptr [edx - 0x31], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffcfu), &xmm[0], 16);
L_0086bd5e:; BB(0x0086bd5e);
    /* 0086bd5e: movdqa xmmword ptr [edx - 0x21], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffdfu), &xmm[0], 16);
L_0086bd63:; BB(0x0086bd63);
    /* 0086bd63: movdqa xmmword ptr [edx - 0x11], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffefu), &xmm[0], 16);
L_0086bd68:; BB(0x0086bd68);
    /* 0086bd68: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086bd6b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bd6f: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bd70:; BB(0x0086bd70);
    /* 0086bd70: movdqa xmmword ptr [edx - 0x82], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff7eu), &xmm[0], 16);
L_0086bd78:; BB(0x0086bd78);
    /* 0086bd78: movdqa xmmword ptr [edx - 0x72], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff8eu), &xmm[0], 16);
L_0086bd7d:; BB(0x0086bd7d);
    /* 0086bd7d: movdqa xmmword ptr [edx - 0x62], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff9eu), &xmm[0], 16);
L_0086bd82:; BB(0x0086bd82);
    /* 0086bd82: movdqa xmmword ptr [edx - 0x52], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffaeu), &xmm[0], 16);
L_0086bd87:; BB(0x0086bd87);
    /* 0086bd87: movdqa xmmword ptr [edx - 0x42], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffbeu), &xmm[0], 16);
L_0086bd8c:; BB(0x0086bd8c);
    /* 0086bd8c: movdqa xmmword ptr [edx - 0x32], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffceu), &xmm[0], 16);
L_0086bd91:; BB(0x0086bd91);
    /* 0086bd91: movdqa xmmword ptr [edx - 0x22], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffdeu), &xmm[0], 16);
L_0086bd96:; BB(0x0086bd96);
    /* 0086bd96: movdqa xmmword ptr [edx - 0x12], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffeeu), &xmm[0], 16);
L_0086bd9b:; BB(0x0086bd9b);
    /* 0086bd9b: mov word ptr [edx - 2], ax */ W16((u32)(r_edx+0xfffffffeu), (u16)r_eax);
    /* 0086bd9f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bda3: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bda4:; BB(0x0086bda4);
    /* 0086bda4: movdqa xmmword ptr [edx - 0x83], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff7du), &xmm[0], 16);
L_0086bdac:; BB(0x0086bdac);
    /* 0086bdac: movdqa xmmword ptr [edx - 0x73], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff8du), &xmm[0], 16);
L_0086bdb1:; BB(0x0086bdb1);
    /* 0086bdb1: movdqa xmmword ptr [edx - 0x63], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff9du), &xmm[0], 16);
L_0086bdb6:; BB(0x0086bdb6);
    /* 0086bdb6: movdqa xmmword ptr [edx - 0x53], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffadu), &xmm[0], 16);
L_0086bdbb:; BB(0x0086bdbb);
    /* 0086bdbb: movdqa xmmword ptr [edx - 0x43], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffbdu), &xmm[0], 16);
L_0086bdc0:; BB(0x0086bdc0);
    /* 0086bdc0: movdqa xmmword ptr [edx - 0x33], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffcdu), &xmm[0], 16);
L_0086bdc5:; BB(0x0086bdc5);
    /* 0086bdc5: movdqa xmmword ptr [edx - 0x23], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffddu), &xmm[0], 16);
L_0086bdca:; BB(0x0086bdca);
    /* 0086bdca: movdqa xmmword ptr [edx - 0x13], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffedu), &xmm[0], 16);
L_0086bdcf:; BB(0x0086bdcf);
    /* 0086bdcf: mov word ptr [edx - 3], ax */ W16((u32)(r_edx+0xfffffffdu), (u16)r_eax);
    /* 0086bdd3: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086bdd6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bdda: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bddb:; BB(0x0086bddb);
    /* 0086bddb: movdqa xmmword ptr [edx - 0x84], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff7cu), &xmm[0], 16);
L_0086bde3:; BB(0x0086bde3);
    /* 0086bde3: movdqa xmmword ptr [edx - 0x74], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff8cu), &xmm[0], 16);
L_0086bde8:; BB(0x0086bde8);
    /* 0086bde8: movdqa xmmword ptr [edx - 0x64], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff9cu), &xmm[0], 16);
L_0086bded:; BB(0x0086bded);
    /* 0086bded: movdqa xmmword ptr [edx - 0x54], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffacu), &xmm[0], 16);
L_0086bdf2:; BB(0x0086bdf2);
    /* 0086bdf2: movdqa xmmword ptr [edx - 0x44], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffbcu), &xmm[0], 16);
L_0086bdf7:; BB(0x0086bdf7);
    /* 0086bdf7: movdqa xmmword ptr [edx - 0x34], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffccu), &xmm[0], 16);
L_0086bdfc:; BB(0x0086bdfc);
    /* 0086bdfc: movdqa xmmword ptr [edx - 0x24], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffdcu), &xmm[0], 16);
L_0086be01:; BB(0x0086be01);
    /* 0086be01: movdqa xmmword ptr [edx - 0x14], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffecu), &xmm[0], 16);
L_0086be06:; BB(0x0086be06);
    /* 0086be06: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 0086be09: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086be0d: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086be0e:; BB(0x0086be0e);
    /* 0086be0e: movdqa xmmword ptr [edx - 0x85], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff7bu), &xmm[0], 16);
L_0086be16:; BB(0x0086be16);
    /* 0086be16: movdqa xmmword ptr [edx - 0x75], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff8bu), &xmm[0], 16);
L_0086be1b:; BB(0x0086be1b);
    /* 0086be1b: movdqa xmmword ptr [edx - 0x65], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff9bu), &xmm[0], 16);
L_0086be20:; BB(0x0086be20);
    /* 0086be20: movdqa xmmword ptr [edx - 0x55], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffabu), &xmm[0], 16);
L_0086be25:; BB(0x0086be25);
    /* 0086be25: movdqa xmmword ptr [edx - 0x45], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffbbu), &xmm[0], 16);
L_0086be2a:; BB(0x0086be2a);
    /* 0086be2a: movdqa xmmword ptr [edx - 0x35], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffcbu), &xmm[0], 16);
L_0086be2f:; BB(0x0086be2f);
    /* 0086be2f: movdqa xmmword ptr [edx - 0x25], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffdbu), &xmm[0], 16);
L_0086be34:; BB(0x0086be34);
    /* 0086be34: movdqa xmmword ptr [edx - 0x15], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffebu), &xmm[0], 16);
L_0086be39:; BB(0x0086be39);
    /* 0086be39: mov dword ptr [edx - 5], eax */ W32((u32)(r_edx+0xfffffffbu), r_eax);
    /* 0086be3c: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086be3f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086be43: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086be44:; BB(0x0086be44);
    /* 0086be44: movdqa xmmword ptr [edx - 0x86], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff7au), &xmm[0], 16);
L_0086be4c:; BB(0x0086be4c);
    /* 0086be4c: movdqa xmmword ptr [edx - 0x76], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff8au), &xmm[0], 16);
L_0086be51:; BB(0x0086be51);
    /* 0086be51: movdqa xmmword ptr [edx - 0x66], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff9au), &xmm[0], 16);
L_0086be56:; BB(0x0086be56);
    /* 0086be56: movdqa xmmword ptr [edx - 0x56], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffaau), &xmm[0], 16);
L_0086be5b:; BB(0x0086be5b);
    /* 0086be5b: movdqa xmmword ptr [edx - 0x46], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffbau), &xmm[0], 16);
L_0086be60:; BB(0x0086be60);
    /* 0086be60: movdqa xmmword ptr [edx - 0x36], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffcau), &xmm[0], 16);
L_0086be65:; BB(0x0086be65);
    /* 0086be65: movdqa xmmword ptr [edx - 0x26], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffdau), &xmm[0], 16);
L_0086be6a:; BB(0x0086be6a);
    /* 0086be6a: movdqa xmmword ptr [edx - 0x16], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffeau), &xmm[0], 16);
L_0086be6f:; BB(0x0086be6f);
    /* 0086be6f: mov dword ptr [edx - 6], eax */ W32((u32)(r_edx+0xfffffffau), r_eax);
    /* 0086be72: mov word ptr [edx - 2], ax */ W16((u32)(r_edx+0xfffffffeu), (u16)r_eax);
    /* 0086be76: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086be7a: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086be7b:; BB(0x0086be7b);
    /* 0086be7b: movdqa xmmword ptr [edx - 0x87], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff79u), &xmm[0], 16);
L_0086be83:; BB(0x0086be83);
    /* 0086be83: movdqa xmmword ptr [edx - 0x77], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff89u), &xmm[0], 16);
L_0086be88:; BB(0x0086be88);
    /* 0086be88: movdqa xmmword ptr [edx - 0x67], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff99u), &xmm[0], 16);
L_0086be8d:; BB(0x0086be8d);
    /* 0086be8d: movdqa xmmword ptr [edx - 0x57], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa9u), &xmm[0], 16);
L_0086be92:; BB(0x0086be92);
    /* 0086be92: movdqa xmmword ptr [edx - 0x47], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb9u), &xmm[0], 16);
L_0086be97:; BB(0x0086be97);
    /* 0086be97: movdqa xmmword ptr [edx - 0x37], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc9u), &xmm[0], 16);
L_0086be9c:; BB(0x0086be9c);
    /* 0086be9c: movdqa xmmword ptr [edx - 0x27], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd9u), &xmm[0], 16);
L_0086bea1:; BB(0x0086bea1);
    /* 0086bea1: movdqa xmmword ptr [edx - 0x17], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe9u), &xmm[0], 16);
L_0086bea6:; BB(0x0086bea6);
    /* 0086bea6: mov dword ptr [edx - 7], eax */ W32((u32)(r_edx+0xfffffff9u), r_eax);
    /* 0086bea9: mov word ptr [edx - 3], ax */ W16((u32)(r_edx+0xfffffffdu), (u16)r_eax);
    /* 0086bead: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086beb0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086beb4: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086beb5:; BB(0x0086beb5);
    /* 0086beb5: movdqa xmmword ptr [edx - 0x88], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff78u), &xmm[0], 16);
L_0086bebd:; BB(0x0086bebd);
    /* 0086bebd: movdqa xmmword ptr [edx - 0x78], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff88u), &xmm[0], 16);
L_0086bec2:; BB(0x0086bec2);
    /* 0086bec2: movdqa xmmword ptr [edx - 0x68], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff98u), &xmm[0], 16);
L_0086bec7:; BB(0x0086bec7);
    /* 0086bec7: movdqa xmmword ptr [edx - 0x58], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa8u), &xmm[0], 16);
L_0086becc:; BB(0x0086becc);
    /* 0086becc: movdqa xmmword ptr [edx - 0x48], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb8u), &xmm[0], 16);
L_0086bed1:; BB(0x0086bed1);
    /* 0086bed1: movdqa xmmword ptr [edx - 0x38], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc8u), &xmm[0], 16);
L_0086bed6:; BB(0x0086bed6);
    /* 0086bed6: movdqa xmmword ptr [edx - 0x28], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd8u), &xmm[0], 16);
L_0086bedb:; BB(0x0086bedb);
    /* 0086bedb: movdqa xmmword ptr [edx - 0x18], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe8u), &xmm[0], 16);
L_0086bee0:; BB(0x0086bee0);
    /* 0086bee0: movq qword ptr [edx - 8], xmm0 */ W64((u32)(r_edx+0xfffffff8u), xmm[0].q[0]);
    /* 0086bee5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bee9: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086beea:; BB(0x0086beea);
    /* 0086beea: movdqa xmmword ptr [edx - 0x89], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff77u), &xmm[0], 16);
L_0086bef2:; BB(0x0086bef2);
    /* 0086bef2: movdqa xmmword ptr [edx - 0x79], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff87u), &xmm[0], 16);
L_0086bef7:; BB(0x0086bef7);
    /* 0086bef7: movdqa xmmword ptr [edx - 0x69], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff97u), &xmm[0], 16);
L_0086befc:; BB(0x0086befc);
    /* 0086befc: movdqa xmmword ptr [edx - 0x59], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa7u), &xmm[0], 16);
L_0086bf01:; BB(0x0086bf01);
    /* 0086bf01: movdqa xmmword ptr [edx - 0x49], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb7u), &xmm[0], 16);
L_0086bf06:; BB(0x0086bf06);
    /* 0086bf06: movdqa xmmword ptr [edx - 0x39], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc7u), &xmm[0], 16);
L_0086bf0b:; BB(0x0086bf0b);
    /* 0086bf0b: movdqa xmmword ptr [edx - 0x29], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd7u), &xmm[0], 16);
L_0086bf10:; BB(0x0086bf10);
    /* 0086bf10: movdqa xmmword ptr [edx - 0x19], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe7u), &xmm[0], 16);
L_0086bf15:; BB(0x0086bf15);
    /* 0086bf15: movq qword ptr [edx - 9], xmm0 */ W64((u32)(r_edx+0xfffffff7u), xmm[0].q[0]);
    /* 0086bf1a: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086bf1d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bf21: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bf22:; BB(0x0086bf22);
    /* 0086bf22: movdqa xmmword ptr [edx - 0x8a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff76u), &xmm[0], 16);
L_0086bf2a:; BB(0x0086bf2a);
    /* 0086bf2a: movdqa xmmword ptr [edx - 0x7a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff86u), &xmm[0], 16);
L_0086bf2f:; BB(0x0086bf2f);
    /* 0086bf2f: movdqa xmmword ptr [edx - 0x6a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff96u), &xmm[0], 16);
L_0086bf34:; BB(0x0086bf34);
    /* 0086bf34: movdqa xmmword ptr [edx - 0x5a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa6u), &xmm[0], 16);
L_0086bf39:; BB(0x0086bf39);
    /* 0086bf39: movdqa xmmword ptr [edx - 0x4a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb6u), &xmm[0], 16);
L_0086bf3e:; BB(0x0086bf3e);
    /* 0086bf3e: movdqa xmmword ptr [edx - 0x3a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc6u), &xmm[0], 16);
L_0086bf43:; BB(0x0086bf43);
    /* 0086bf43: movdqa xmmword ptr [edx - 0x2a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd6u), &xmm[0], 16);
L_0086bf48:; BB(0x0086bf48);
    /* 0086bf48: movdqa xmmword ptr [edx - 0x1a], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe6u), &xmm[0], 16);
L_0086bf4d:; BB(0x0086bf4d);
    /* 0086bf4d: movq qword ptr [edx - 0xa], xmm0 */ W64((u32)(r_edx+0xfffffff6u), xmm[0].q[0]);
    /* 0086bf52: mov word ptr [edx - 2], ax */ W16((u32)(r_edx+0xfffffffeu), (u16)r_eax);
    /* 0086bf56: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bf5a: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bf5b:; BB(0x0086bf5b);
    /* 0086bf5b: movdqa xmmword ptr [edx - 0x8b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff75u), &xmm[0], 16);
L_0086bf63:; BB(0x0086bf63);
    /* 0086bf63: movdqa xmmword ptr [edx - 0x7b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff85u), &xmm[0], 16);
L_0086bf68:; BB(0x0086bf68);
    /* 0086bf68: movdqa xmmword ptr [edx - 0x6b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff95u), &xmm[0], 16);
L_0086bf6d:; BB(0x0086bf6d);
    /* 0086bf6d: movdqa xmmword ptr [edx - 0x5b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa5u), &xmm[0], 16);
L_0086bf72:; BB(0x0086bf72);
    /* 0086bf72: movdqa xmmword ptr [edx - 0x4b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb5u), &xmm[0], 16);
L_0086bf77:; BB(0x0086bf77);
    /* 0086bf77: movdqa xmmword ptr [edx - 0x3b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc5u), &xmm[0], 16);
L_0086bf7c:; BB(0x0086bf7c);
    /* 0086bf7c: movdqa xmmword ptr [edx - 0x2b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd5u), &xmm[0], 16);
L_0086bf81:; BB(0x0086bf81);
    /* 0086bf81: movdqa xmmword ptr [edx - 0x1b], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe5u), &xmm[0], 16);
L_0086bf86:; BB(0x0086bf86);
    /* 0086bf86: movq qword ptr [edx - 0xb], xmm0 */ W64((u32)(r_edx+0xfffffff5u), xmm[0].q[0]);
    /* 0086bf8b: mov word ptr [edx - 3], ax */ W16((u32)(r_edx+0xfffffffdu), (u16)r_eax);
    /* 0086bf8f: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086bf92: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bf96: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bf97:; BB(0x0086bf97);
    /* 0086bf97: movdqa xmmword ptr [edx - 0x8c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff74u), &xmm[0], 16);
L_0086bf9f:; BB(0x0086bf9f);
    /* 0086bf9f: movdqa xmmword ptr [edx - 0x7c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff84u), &xmm[0], 16);
L_0086bfa4:; BB(0x0086bfa4);
    /* 0086bfa4: movdqa xmmword ptr [edx - 0x6c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff94u), &xmm[0], 16);
L_0086bfa9:; BB(0x0086bfa9);
    /* 0086bfa9: movdqa xmmword ptr [edx - 0x5c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa4u), &xmm[0], 16);
L_0086bfae:; BB(0x0086bfae);
    /* 0086bfae: movdqa xmmword ptr [edx - 0x4c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb4u), &xmm[0], 16);
L_0086bfb3:; BB(0x0086bfb3);
    /* 0086bfb3: movdqa xmmword ptr [edx - 0x3c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc4u), &xmm[0], 16);
L_0086bfb8:; BB(0x0086bfb8);
    /* 0086bfb8: movdqa xmmword ptr [edx - 0x2c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd4u), &xmm[0], 16);
L_0086bfbd:; BB(0x0086bfbd);
    /* 0086bfbd: movdqa xmmword ptr [edx - 0x1c], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe4u), &xmm[0], 16);
L_0086bfc2:; BB(0x0086bfc2);
    /* 0086bfc2: movq qword ptr [edx - 0xc], xmm0 */ W64((u32)(r_edx+0xfffffff4u), xmm[0].q[0]);
    /* 0086bfc7: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 0086bfca: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086bfce: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086bfcf:; BB(0x0086bfcf);
    /* 0086bfcf: movdqa xmmword ptr [edx - 0x8d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff73u), &xmm[0], 16);
L_0086bfd7:; BB(0x0086bfd7);
    /* 0086bfd7: movdqa xmmword ptr [edx - 0x7d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff83u), &xmm[0], 16);
L_0086bfdc:; BB(0x0086bfdc);
    /* 0086bfdc: movdqa xmmword ptr [edx - 0x6d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff93u), &xmm[0], 16);
L_0086bfe1:; BB(0x0086bfe1);
    /* 0086bfe1: movdqa xmmword ptr [edx - 0x5d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa3u), &xmm[0], 16);
L_0086bfe6:; BB(0x0086bfe6);
    /* 0086bfe6: movdqa xmmword ptr [edx - 0x4d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb3u), &xmm[0], 16);
L_0086bfeb:; BB(0x0086bfeb);
    /* 0086bfeb: movdqa xmmword ptr [edx - 0x3d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc3u), &xmm[0], 16);
L_0086bff0:; BB(0x0086bff0);
    /* 0086bff0: movdqa xmmword ptr [edx - 0x2d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd3u), &xmm[0], 16);
L_0086bff5:; BB(0x0086bff5);
    /* 0086bff5: movdqa xmmword ptr [edx - 0x1d], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe3u), &xmm[0], 16);
L_0086bffa:; BB(0x0086bffa);
    /* 0086bffa: movq qword ptr [edx - 0xd], xmm0 */ W64((u32)(r_edx+0xfffffff3u), xmm[0].q[0]);
    /* 0086bfff: mov dword ptr [edx - 5], eax */ W32((u32)(r_edx+0xfffffffbu), r_eax);
    /* 0086c002: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086c005: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c009: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086c00a:; BB(0x0086c00a);
    /* 0086c00a: movdqa xmmword ptr [edx - 0x8e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff72u), &xmm[0], 16);
L_0086c012:; BB(0x0086c012);
    /* 0086c012: movdqa xmmword ptr [edx - 0x7e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff82u), &xmm[0], 16);
L_0086c017:; BB(0x0086c017);
    /* 0086c017: movdqa xmmword ptr [edx - 0x6e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff92u), &xmm[0], 16);
L_0086c01c:; BB(0x0086c01c);
    /* 0086c01c: movdqa xmmword ptr [edx - 0x5e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa2u), &xmm[0], 16);
L_0086c021:; BB(0x0086c021);
    /* 0086c021: movdqa xmmword ptr [edx - 0x4e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb2u), &xmm[0], 16);
L_0086c026:; BB(0x0086c026);
    /* 0086c026: movdqa xmmword ptr [edx - 0x3e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc2u), &xmm[0], 16);
L_0086c02b:; BB(0x0086c02b);
    /* 0086c02b: movdqa xmmword ptr [edx - 0x2e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd2u), &xmm[0], 16);
L_0086c030:; BB(0x0086c030);
    /* 0086c030: movdqa xmmword ptr [edx - 0x1e], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe2u), &xmm[0], 16);
L_0086c035:; BB(0x0086c035);
    /* 0086c035: movq qword ptr [edx - 0xe], xmm0 */ W64((u32)(r_edx+0xfffffff2u), xmm[0].q[0]);
    /* 0086c03a: mov dword ptr [edx - 6], eax */ W32((u32)(r_edx+0xfffffffau), r_eax);
    /* 0086c03d: mov word ptr [edx - 2], ax */ W16((u32)(r_edx+0xfffffffeu), (u16)r_eax);
    /* 0086c041: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c045: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086c046:; BB(0x0086c046);
    /* 0086c046: movdqa xmmword ptr [edx - 0x8f], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff71u), &xmm[0], 16);
L_0086c04e:; BB(0x0086c04e);
    /* 0086c04e: movdqa xmmword ptr [edx - 0x7f], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff81u), &xmm[0], 16);
L_0086c053:; BB(0x0086c053);
    /* 0086c053: movdqa xmmword ptr [edx - 0x6f], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff91u), &xmm[0], 16);
L_0086c058:; BB(0x0086c058);
    /* 0086c058: movdqa xmmword ptr [edx - 0x5f], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa1u), &xmm[0], 16);
L_0086c05d:; BB(0x0086c05d);
    /* 0086c05d: movdqa xmmword ptr [edx - 0x4f], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb1u), &xmm[0], 16);
L_0086c062:; BB(0x0086c062);
    /* 0086c062: movdqa xmmword ptr [edx - 0x3f], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc1u), &xmm[0], 16);
L_0086c067:; BB(0x0086c067);
    /* 0086c067: movdqa xmmword ptr [edx - 0x2f], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd1u), &xmm[0], 16);
L_0086c06c:; BB(0x0086c06c);
    /* 0086c06c: movdqa xmmword ptr [edx - 0x1f], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe1u), &xmm[1], 16);
L_0086c071:; BB(0x0086c071);
    /* 0086c071: movq qword ptr [edx - 0xf], xmm0 */ W64((u32)(r_edx+0xfffffff1u), xmm[0].q[0]);
    /* 0086c076: mov dword ptr [edx - 7], eax */ W32((u32)(r_edx+0xfffffff9u), r_eax);
    /* 0086c079: mov word ptr [edx - 3], ax */ W16((u32)(r_edx+0xfffffffdu), (u16)r_eax);
    /* 0086c07d: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086c080: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c084: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
L_0086c090:; BB(0x0086c090);
    /* 0086c090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086c091: mov edi, eax */ r_edi = r_eax;
    /* 0086c093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086c095: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0086c097: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086c09c: mov eax, edi */ r_eax = r_edi;
    /* 0086c09e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086c09f: jne 0x86c23c */ if (!fZ) goto L_0086c23c;
L_0086c0a5:; BB(0x0086c0a5);
    /* 0086c0a5: test edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086c0ab: jne 0x86c0d3 */ if (!fZ) goto L_0086c0d3;
L_0086c0ad:; BB(0x0086c0ad);
    /* 0086c0ad: pxor mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 0086c0b0: movd mm0, eax */ { u64 v = r_eax; fpr[0] = (long double)(i64)v; }
    /* 0086c0b3: movd mm1, eax */ { u64 v = r_eax; fpr[1] = (long double)(i64)v; }
    /* 0086c0b6: psllq mm0, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q << c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086c0ba: por mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086c0bd: por mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q | b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 0086c0c0: cmp dword ptr [0xae7f08], 0 */ {  u32 a = R32((u32)(0xae7f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c0c7: jle 0x86c120 */ if ((fZ||fS!=fO)) goto L_0086c120;
L_0086c0c9:; BB(0x0086c0c9);
    /* 0086c0c9: cmp ecx, dword ptr [0xae7f08] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xae7f08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c0cf: jg 0x86c0f0 */ if ((!fZ&&fS==fO)) goto L_0086c0f0;
L_0086c0d1:; BB(0x0086c0d1);
    /* 0086c0d1: jmp 0x86c120 */ goto L_0086c120;
L_0086c0d3:; BB(0x0086c0d3);
    /* 0086c0d3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086c0d5: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c0d8: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c0db: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c0de: jl 0x86c14c */ if ((fS!=fO)) goto L_0086c14c;
L_0086c0e0:; BB(0x0086c0e0);
    /* 0086c0e0: jmp 0x86c0ad */ goto L_0086c0ad;
L_0086c0f0:; BB(0x0086c0f0);
    /* 0086c0f0: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c0f3: prefetchnta byte ptr [edx + 0x40] */ ;
    /* 0086c0f7: movntq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086c0fa: movntq qword ptr [edx + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086c0fe: movntq qword ptr [edx + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086c102: movntq qword ptr [edx + 0x18], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086c106: movntq qword ptr [edx + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x20u), r.q); }
    /* 0086c10a: movntq qword ptr [edx + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x28u), r.q); }
    /* 0086c10e: movntq qword ptr [edx + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x30u), r.q); }
    /* 0086c112: movntq qword ptr [edx + 0x38], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x38u), r.q); }
    /* 0086c116: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c119: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c11c: jge 0x86c0f0 */ if ((fS==fO)) goto L_0086c0f0;
L_0086c11e:; BB(0x0086c11e);
    /* 0086c11e: jmp 0x86c14a */ goto L_0086c14a;
L_0086c120:; BB(0x0086c120);
    /* 0086c120: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c123: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086c126: movq qword ptr [edx + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086c12a: movq qword ptr [edx + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086c12e: movq qword ptr [edx + 0x18], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086c132: movq qword ptr [edx + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x20u), r.q); }
    /* 0086c136: movq qword ptr [edx + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x28u), r.q); }
    /* 0086c13a: movq qword ptr [edx + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x30u), r.q); }
    /* 0086c13e: movq qword ptr [edx + 0x38], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x38u), r.q); }
    /* 0086c142: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c145: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c148: jge 0x86c120 */ if ((fS==fO)) goto L_0086c120;
L_0086c14a:; BB(0x0086c14a);
    /* 0086c14a: emms  */ ; /* the MMX tag state is not modelled */
L_0086c14c:; BB(0x0086c14c);
    /* 0086c14c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086c14e: jmp dword ptr [ecx*4 + 0x86ba90] */ { u32 t = R32((u32)(r_ecx*4+0x86ba90u)); switch (t) { case 0x86bbd0u: goto L_0086bbd0; case 0x86bc05u: goto L_0086bc05; case 0x86bc3du: goto L_0086bc3d; case 0x86bc76u: goto L_0086bc76; case 0x86bbcdu: goto L_0086bbcd; case 0x86bc02u: goto L_0086bc02; case 0x86bc3au: goto L_0086bc3a; case 0x86bc73u: goto L_0086bc73; case 0x86bbcau: goto L_0086bbca; case 0x86bbffu: goto L_0086bbff; case 0x86bc37u: goto L_0086bc37; case 0x86bc70u: goto L_0086bc70; case 0x86bbc7u: goto L_0086bbc7; case 0x86bbfcu: goto L_0086bbfc; case 0x86bc34u: goto L_0086bc34; case 0x86bc6du: goto L_0086bc6d; case 0x86bbc4u: goto L_0086bbc4; case 0x86bbf9u: goto L_0086bbf9; case 0x86bc31u: goto L_0086bc31; case 0x86bc6au: goto L_0086bc6a; case 0x86bbc1u: goto L_0086bbc1; case 0x86bbf6u: goto L_0086bbf6; case 0x86bc2eu: goto L_0086bc2e; case 0x86bc67u: goto L_0086bc67; case 0x86bbbeu: goto L_0086bbbe; case 0x86bbf3u: goto L_0086bbf3; case 0x86bc2bu: goto L_0086bc2b; case 0x86bc64u: goto L_0086bc64; case 0x86bbbbu: goto L_0086bbbb; case 0x86bbf0u: goto L_0086bbf0; case 0x86bc28u: goto L_0086bc28; case 0x86bc61u: goto L_0086bc61; case 0x86bbb8u: goto L_0086bbb8; case 0x86bbedu: goto L_0086bbed; case 0x86bc25u: goto L_0086bc25; case 0x86bc5eu: goto L_0086bc5e; case 0x86bbb5u: goto L_0086bbb5; case 0x86bbeau: goto L_0086bbea; case 0x86bc22u: goto L_0086bc22; case 0x86bc5bu: goto L_0086bc5b; case 0x86bbb2u: goto L_0086bbb2; case 0x86bbe7u: goto L_0086bbe7; case 0x86bc1fu: goto L_0086bc1f; case 0x86bc58u: goto L_0086bc58; case 0x86bbafu: goto L_0086bbaf; case 0x86bbe4u: goto L_0086bbe4; case 0x86bc1cu: goto L_0086bc1c; case 0x86bc55u: goto L_0086bc55; case 0x86bbacu: goto L_0086bbac; case 0x86bbe1u: goto L_0086bbe1; case 0x86bc19u: goto L_0086bc19; case 0x86bc52u: goto L_0086bc52; case 0x86bba9u: goto L_0086bba9; case 0x86bbdeu: goto L_0086bbde; case 0x86bc16u: goto L_0086bc16; case 0x86bc4fu: goto L_0086bc4f; case 0x86bba6u: goto L_0086bba6; case 0x86bbdbu: goto L_0086bbdb; case 0x86bc13u: goto L_0086bc13; case 0x86bc4cu: goto L_0086bc4c; case 0x86bba3u: goto L_0086bba3; case 0x86bbd8u: goto L_0086bbd8; case 0x86bc10u: goto L_0086bc10; case 0x86bc49u: goto L_0086bc49; case 0x86bba0u: goto L_0086bba0; case 0x86bbd5u: goto L_0086bbd5; case 0x86bc0du: goto L_0086bc0d; case 0x86bc46u: goto L_0086bc46; default: UNSUP(0x0086c14e, "jump table entry is not a known target"); } }
L_0086c155:; BB(0x0086c155);
    /* 0086c155: cmp dword ptr [0xae7f08], 0 */ {  u32 a = R32((u32)(0xae7f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c15c: jle 0x86c170 */ if ((fZ||fS!=fO)) goto L_0086c170;
L_0086c15e:; BB(0x0086c15e);
    /* 0086c15e: cmp ecx, dword ptr [0xae7f08] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xae7f08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c164: jg 0x86c1c0 */ if ((!fZ&&fS==fO)) goto L_0086c1c0;
L_0086c166:; BB(0x0086c166);
    /* 0086c166: jmp 0x86c170 */ goto L_0086c170;
L_0086c170:; BB(0x0086c170);
    /* 0086c170: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c176: movdqa xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 0086c17a: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086c17f: movdqa xmmword ptr [edx + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x20u), &xmm[0], 16);
    /* 0086c184: movdqa xmmword ptr [edx + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x30u), &xmm[0], 16);
    /* 0086c189: movdqa xmmword ptr [edx + 0x40], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x40u), &xmm[0], 16);
    /* 0086c18e: movdqa xmmword ptr [edx + 0x50], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x50u), &xmm[0], 16);
    /* 0086c193: movdqa xmmword ptr [edx + 0x60], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x60u), &xmm[0], 16);
    /* 0086c198: movdqa xmmword ptr [edx + 0x70], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x70u), &xmm[0], 16);
    /* 0086c19d: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c1a3: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c1a9: jge 0x86c170 */ if ((fS==fO)) goto L_0086c170;
L_0086c1ab:; BB(0x0086c1ab);
    /* 0086c1ab: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086c1ad: jmp dword ptr [ecx*4 + 0x86c260] */ { u32 t = R32((u32)(r_ecx*4+0x86c260u)); switch (t) { case 0x86bd38u: goto L_0086bd38; case 0x86bd68u: goto L_0086bd68; case 0x86bd9bu: goto L_0086bd9b; case 0x86bdcfu: goto L_0086bdcf; case 0x86be06u: goto L_0086be06; case 0x86be39u: goto L_0086be39; case 0x86be6fu: goto L_0086be6f; case 0x86bea6u: goto L_0086bea6; case 0x86bee0u: goto L_0086bee0; case 0x86bf15u: goto L_0086bf15; case 0x86bf4du: goto L_0086bf4d; case 0x86bf86u: goto L_0086bf86; case 0x86bfc2u: goto L_0086bfc2; case 0x86bffau: goto L_0086bffa; case 0x86c035u: goto L_0086c035; case 0x86c071u: goto L_0086c071; case 0x86bd33u: goto L_0086bd33; case 0x86bd63u: goto L_0086bd63; case 0x86bd96u: goto L_0086bd96; case 0x86bdcau: goto L_0086bdca; case 0x86be01u: goto L_0086be01; case 0x86be34u: goto L_0086be34; case 0x86be6au: goto L_0086be6a; case 0x86bea1u: goto L_0086bea1; case 0x86bedbu: goto L_0086bedb; case 0x86bf10u: goto L_0086bf10; case 0x86bf48u: goto L_0086bf48; case 0x86bf81u: goto L_0086bf81; case 0x86bfbdu: goto L_0086bfbd; case 0x86bff5u: goto L_0086bff5; case 0x86c030u: goto L_0086c030; case 0x86c06cu: goto L_0086c06c; case 0x86bd2eu: goto L_0086bd2e; case 0x86bd5eu: goto L_0086bd5e; case 0x86bd91u: goto L_0086bd91; case 0x86bdc5u: goto L_0086bdc5; case 0x86bdfcu: goto L_0086bdfc; case 0x86be2fu: goto L_0086be2f; case 0x86be65u: goto L_0086be65; case 0x86be9cu: goto L_0086be9c; case 0x86bed6u: goto L_0086bed6; case 0x86bf0bu: goto L_0086bf0b; case 0x86bf43u: goto L_0086bf43; case 0x86bf7cu: goto L_0086bf7c; case 0x86bfb8u: goto L_0086bfb8; case 0x86bff0u: goto L_0086bff0; case 0x86c02bu: goto L_0086c02b; case 0x86c067u: goto L_0086c067; case 0x86bd29u: goto L_0086bd29; case 0x86bd59u: goto L_0086bd59; case 0x86bd8cu: goto L_0086bd8c; case 0x86bdc0u: goto L_0086bdc0; case 0x86bdf7u: goto L_0086bdf7; case 0x86be2au: goto L_0086be2a; case 0x86be60u: goto L_0086be60; case 0x86be97u: goto L_0086be97; case 0x86bed1u: goto L_0086bed1; case 0x86bf06u: goto L_0086bf06; case 0x86bf3eu: goto L_0086bf3e; case 0x86bf77u: goto L_0086bf77; case 0x86bfb3u: goto L_0086bfb3; case 0x86bfebu: goto L_0086bfeb; case 0x86c026u: goto L_0086c026; case 0x86c062u: goto L_0086c062; case 0x86bd24u: goto L_0086bd24; case 0x86bd54u: goto L_0086bd54; case 0x86bd87u: goto L_0086bd87; case 0x86bdbbu: goto L_0086bdbb; case 0x86bdf2u: goto L_0086bdf2; case 0x86be25u: goto L_0086be25; case 0x86be5bu: goto L_0086be5b; case 0x86be92u: goto L_0086be92; case 0x86beccu: goto L_0086becc; case 0x86bf01u: goto L_0086bf01; case 0x86bf39u: goto L_0086bf39; case 0x86bf72u: goto L_0086bf72; case 0x86bfaeu: goto L_0086bfae; case 0x86bfe6u: goto L_0086bfe6; case 0x86c021u: goto L_0086c021; case 0x86c05du: goto L_0086c05d; case 0x86bd1fu: goto L_0086bd1f; case 0x86bd4fu: goto L_0086bd4f; case 0x86bd82u: goto L_0086bd82; case 0x86bdb6u: goto L_0086bdb6; case 0x86bdedu: goto L_0086bded; case 0x86be20u: goto L_0086be20; case 0x86be56u: goto L_0086be56; case 0x86be8du: goto L_0086be8d; case 0x86bec7u: goto L_0086bec7; case 0x86befcu: goto L_0086befc; case 0x86bf34u: goto L_0086bf34; case 0x86bf6du: goto L_0086bf6d; case 0x86bfa9u: goto L_0086bfa9; case 0x86bfe1u: goto L_0086bfe1; case 0x86c01cu: goto L_0086c01c; case 0x86c058u: goto L_0086c058; case 0x86bd1au: goto L_0086bd1a; case 0x86bd4au: goto L_0086bd4a; case 0x86bd7du: goto L_0086bd7d; case 0x86bdb1u: goto L_0086bdb1; case 0x86bde8u: goto L_0086bde8; case 0x86be1bu: goto L_0086be1b; case 0x86be51u: goto L_0086be51; case 0x86be88u: goto L_0086be88; case 0x86bec2u: goto L_0086bec2; case 0x86bef7u: goto L_0086bef7; case 0x86bf2fu: goto L_0086bf2f; case 0x86bf68u: goto L_0086bf68; case 0x86bfa4u: goto L_0086bfa4; case 0x86bfdcu: goto L_0086bfdc; case 0x86c017u: goto L_0086c017; case 0x86c053u: goto L_0086c053; case 0x86bd15u: goto L_0086bd15; case 0x86bd45u: goto L_0086bd45; case 0x86bd78u: goto L_0086bd78; case 0x86bdacu: goto L_0086bdac; case 0x86bde3u: goto L_0086bde3; case 0x86be16u: goto L_0086be16; case 0x86be4cu: goto L_0086be4c; case 0x86be83u: goto L_0086be83; case 0x86bebdu: goto L_0086bebd; case 0x86bef2u: goto L_0086bef2; case 0x86bf2au: goto L_0086bf2a; case 0x86bf63u: goto L_0086bf63; case 0x86bf9fu: goto L_0086bf9f; case 0x86bfd7u: goto L_0086bfd7; case 0x86c012u: goto L_0086c012; case 0x86c04eu: goto L_0086c04e; case 0x86bd10u: goto L_0086bd10; case 0x86bd3du: goto L_0086bd3d; case 0x86bd70u: goto L_0086bd70; case 0x86bda4u: goto L_0086bda4; case 0x86bddbu: goto L_0086bddb; case 0x86be0eu: goto L_0086be0e; case 0x86be44u: goto L_0086be44; case 0x86be7bu: goto L_0086be7b; case 0x86beb5u: goto L_0086beb5; case 0x86beeau: goto L_0086beea; case 0x86bf22u: goto L_0086bf22; case 0x86bf5bu: goto L_0086bf5b; case 0x86bf97u: goto L_0086bf97; case 0x86bfcfu: goto L_0086bfcf; case 0x86c00au: goto L_0086c00a; case 0x86c046u: goto L_0086c046; default: UNSUP(0x0086c1ad, "jump table entry is not a known target"); } }
L_0086c1c0:; BB(0x0086c1c0);
    /* 0086c1c0: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c1c6: movntdq xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 0086c1ca: movntdq xmmword ptr [edx + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[1], 16);
    /* 0086c1cf: movntdq xmmword ptr [edx + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x20u), &xmm[0], 16);
    /* 0086c1d4: movntdq xmmword ptr [edx + 0x30], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x30u), &xmm[1], 16);
    /* 0086c1d9: movntdq xmmword ptr [edx + 0x40], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x40u), &xmm[0], 16);
    /* 0086c1de: movntdq xmmword ptr [edx + 0x50], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x50u), &xmm[1], 16);
    /* 0086c1e3: movntdq xmmword ptr [edx + 0x60], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x60u), &xmm[0], 16);
    /* 0086c1e8: movntdq xmmword ptr [edx + 0x70], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x70u), &xmm[1], 16);
    /* 0086c1ed: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c1f3: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c1f9: jge 0x86c1c0 */ if ((fS==fO)) goto L_0086c1c0;
L_0086c1fb:; BB(0x0086c1fb);
    /* 0086c1fb: sfence  */ ;
    /* 0086c1fe: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086c200: jmp dword ptr [ecx*4 + 0x86c260] */ { u32 t = R32((u32)(r_ecx*4+0x86c260u)); switch (t) { case 0x86bd38u: goto L_0086bd38; case 0x86bd68u: goto L_0086bd68; case 0x86bd9bu: goto L_0086bd9b; case 0x86bdcfu: goto L_0086bdcf; case 0x86be06u: goto L_0086be06; case 0x86be39u: goto L_0086be39; case 0x86be6fu: goto L_0086be6f; case 0x86bea6u: goto L_0086bea6; case 0x86bee0u: goto L_0086bee0; case 0x86bf15u: goto L_0086bf15; case 0x86bf4du: goto L_0086bf4d; case 0x86bf86u: goto L_0086bf86; case 0x86bfc2u: goto L_0086bfc2; case 0x86bffau: goto L_0086bffa; case 0x86c035u: goto L_0086c035; case 0x86c071u: goto L_0086c071; case 0x86bd33u: goto L_0086bd33; case 0x86bd63u: goto L_0086bd63; case 0x86bd96u: goto L_0086bd96; case 0x86bdcau: goto L_0086bdca; case 0x86be01u: goto L_0086be01; case 0x86be34u: goto L_0086be34; case 0x86be6au: goto L_0086be6a; case 0x86bea1u: goto L_0086bea1; case 0x86bedbu: goto L_0086bedb; case 0x86bf10u: goto L_0086bf10; case 0x86bf48u: goto L_0086bf48; case 0x86bf81u: goto L_0086bf81; case 0x86bfbdu: goto L_0086bfbd; case 0x86bff5u: goto L_0086bff5; case 0x86c030u: goto L_0086c030; case 0x86c06cu: goto L_0086c06c; case 0x86bd2eu: goto L_0086bd2e; case 0x86bd5eu: goto L_0086bd5e; case 0x86bd91u: goto L_0086bd91; case 0x86bdc5u: goto L_0086bdc5; case 0x86bdfcu: goto L_0086bdfc; case 0x86be2fu: goto L_0086be2f; case 0x86be65u: goto L_0086be65; case 0x86be9cu: goto L_0086be9c; case 0x86bed6u: goto L_0086bed6; case 0x86bf0bu: goto L_0086bf0b; case 0x86bf43u: goto L_0086bf43; case 0x86bf7cu: goto L_0086bf7c; case 0x86bfb8u: goto L_0086bfb8; case 0x86bff0u: goto L_0086bff0; case 0x86c02bu: goto L_0086c02b; case 0x86c067u: goto L_0086c067; case 0x86bd29u: goto L_0086bd29; case 0x86bd59u: goto L_0086bd59; case 0x86bd8cu: goto L_0086bd8c; case 0x86bdc0u: goto L_0086bdc0; case 0x86bdf7u: goto L_0086bdf7; case 0x86be2au: goto L_0086be2a; case 0x86be60u: goto L_0086be60; case 0x86be97u: goto L_0086be97; case 0x86bed1u: goto L_0086bed1; case 0x86bf06u: goto L_0086bf06; case 0x86bf3eu: goto L_0086bf3e; case 0x86bf77u: goto L_0086bf77; case 0x86bfb3u: goto L_0086bfb3; case 0x86bfebu: goto L_0086bfeb; case 0x86c026u: goto L_0086c026; case 0x86c062u: goto L_0086c062; case 0x86bd24u: goto L_0086bd24; case 0x86bd54u: goto L_0086bd54; case 0x86bd87u: goto L_0086bd87; case 0x86bdbbu: goto L_0086bdbb; case 0x86bdf2u: goto L_0086bdf2; case 0x86be25u: goto L_0086be25; case 0x86be5bu: goto L_0086be5b; case 0x86be92u: goto L_0086be92; case 0x86beccu: goto L_0086becc; case 0x86bf01u: goto L_0086bf01; case 0x86bf39u: goto L_0086bf39; case 0x86bf72u: goto L_0086bf72; case 0x86bfaeu: goto L_0086bfae; case 0x86bfe6u: goto L_0086bfe6; case 0x86c021u: goto L_0086c021; case 0x86c05du: goto L_0086c05d; case 0x86bd1fu: goto L_0086bd1f; case 0x86bd4fu: goto L_0086bd4f; case 0x86bd82u: goto L_0086bd82; case 0x86bdb6u: goto L_0086bdb6; case 0x86bdedu: goto L_0086bded; case 0x86be20u: goto L_0086be20; case 0x86be56u: goto L_0086be56; case 0x86be8du: goto L_0086be8d; case 0x86bec7u: goto L_0086bec7; case 0x86befcu: goto L_0086befc; case 0x86bf34u: goto L_0086bf34; case 0x86bf6du: goto L_0086bf6d; case 0x86bfa9u: goto L_0086bfa9; case 0x86bfe1u: goto L_0086bfe1; case 0x86c01cu: goto L_0086c01c; case 0x86c058u: goto L_0086c058; case 0x86bd1au: goto L_0086bd1a; case 0x86bd4au: goto L_0086bd4a; case 0x86bd7du: goto L_0086bd7d; case 0x86bdb1u: goto L_0086bdb1; case 0x86bde8u: goto L_0086bde8; case 0x86be1bu: goto L_0086be1b; case 0x86be51u: goto L_0086be51; case 0x86be88u: goto L_0086be88; case 0x86bec2u: goto L_0086bec2; case 0x86bef7u: goto L_0086bef7; case 0x86bf2fu: goto L_0086bf2f; case 0x86bf68u: goto L_0086bf68; case 0x86bfa4u: goto L_0086bfa4; case 0x86bfdcu: goto L_0086bfdc; case 0x86c017u: goto L_0086c017; case 0x86c053u: goto L_0086c053; case 0x86bd15u: goto L_0086bd15; case 0x86bd45u: goto L_0086bd45; case 0x86bd78u: goto L_0086bd78; case 0x86bdacu: goto L_0086bdac; case 0x86bde3u: goto L_0086bde3; case 0x86be16u: goto L_0086be16; case 0x86be4cu: goto L_0086be4c; case 0x86be83u: goto L_0086be83; case 0x86bebdu: goto L_0086bebd; case 0x86bef2u: goto L_0086bef2; case 0x86bf2au: goto L_0086bf2a; case 0x86bf63u: goto L_0086bf63; case 0x86bf9fu: goto L_0086bf9f; case 0x86bfd7u: goto L_0086bfd7; case 0x86c012u: goto L_0086c012; case 0x86c04eu: goto L_0086c04e; case 0x86bd10u: goto L_0086bd10; case 0x86bd3du: goto L_0086bd3d; case 0x86bd70u: goto L_0086bd70; case 0x86bda4u: goto L_0086bda4; case 0x86bddbu: goto L_0086bddb; case 0x86be0eu: goto L_0086be0e; case 0x86be44u: goto L_0086be44; case 0x86be7bu: goto L_0086be7b; case 0x86beb5u: goto L_0086beb5; case 0x86beeau: goto L_0086beea; case 0x86bf22u: goto L_0086bf22; case 0x86bf5bu: goto L_0086bf5b; case 0x86bf97u: goto L_0086bf97; case 0x86bfcfu: goto L_0086bfcf; case 0x86c00au: goto L_0086c00a; case 0x86c046u: goto L_0086c046; default: UNSUP(0x0086c200, "jump table entry is not a known target"); } }
L_0086c210:; BB(0x0086c210);
    /* 0086c210: cmp dword ptr [0xa24e34], -1 */ {  u32 a = R32((u32)(0xa24e34u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086c217: jne 0x86c23c */ if (!fZ) goto L_0086c23c;
L_0086c219:; BB(0x0086c219);
    /* 0086c219: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086c21a: mov edi, eax */ r_edi = r_eax;
    /* 0086c21c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086c21e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0086c220: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086c225: mov eax, edi */ r_eax = r_edi;
    /* 0086c227: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086c228: jne 0x86c23c */ if (!fZ) goto L_0086c23c;
L_0086c22a:; BB(0x0086c22a);
    /* 0086c22a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086c22b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086c22c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086c22d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086c22e: call 0x86d720 */ r_esp -= 4; W32(r_esp, 0x86c233u); f_0086d720();
    /* 0086c233: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086c234: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086c235: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0086c236: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086c237: jmp 0x86bc82 */ goto L_0086bc82;
L_0086c23c:; BB(0x0086c23c);
    /* 0086c23c: cld  */ rt_df = 0;
    /* 0086c23d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086c23e: mov edi, edx */ r_edi = r_edx;
    /* 0086c240: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086c242: jb 0x86c24e */ if (fC) goto L_0086c24e;
L_0086c244:; BB(0x0086c244);
    /* 0086c244: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086c246: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086c248: jae 0x86c257 */ if (!fC) goto L_0086c257;
L_0086c24a:; BB(0x0086c24a);
    /* 0086c24a: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 0086c24c: jmp 0x86c257 */ goto L_0086c257;
L_0086c24e:; BB(0x0086c24e);
    /* 0086c24e: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086c250: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086c252: jae 0x86c256 */ if (!fC) goto L_0086c256;
L_0086c254:; BB(0x0086c254);
    /* 0086c254: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
L_0086c256:; BB(0x0086c256);
    /* 0086c256: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
L_0086c257:; BB(0x0086c257);
    /* 0086c257: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086c258: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c25c: ret  */ FN_RET(0x0086ba20); r_esp += 4; return;
}

void f_0086c4a0(void) /* _WinMain@16_119_0 */
{
    FN_ENTER(0x0086c4a0);
    /* 0086c4a0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0086c4a4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086c4a8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086c4ac: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c4af: jg 0x86c4f0 */ if ((!fZ&&fS==fO)) goto L_0086c4f0;
L_0086c4b1:; BB(0x0086c4b1);
    /* 0086c4b1: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086c4b4: jne 0x86c4be */ if (!fZ) goto L_0086c4be;
L_0086c4b6:; BB(0x0086c4b6);
    /* 0086c4b6: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0086c4b9: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0086c4bb: mov eax, edx */ r_eax = r_edx;
    /* 0086c4bd: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c4be:; BB(0x0086c4be);
    /* 0086c4be: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086c4c1: jne 0x86c4cc */ if (!fZ) goto L_0086c4cc;
L_0086c4c3:; BB(0x0086c4c3);
    /* 0086c4c3: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0086c4c6: mov eax, edx */ r_eax = r_edx;
    /* 0086c4c8: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0086c4cb: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c4cc:; BB(0x0086c4cc);
    /* 0086c4cc: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086c4cf: jl 0x86c4ea */ if ((fS!=fO)) goto L_0086c4ea;
L_0086c4d1:; BB(0x0086c4d1);
    /* 0086c4d1: jne 0x86c4e3 */ if (!fZ) goto L_0086c4e3;
L_0086c4d3:; BB(0x0086c4d3);
    /* 0086c4d3: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0086c4d6: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 0086c4da: mov byte ptr [edx + 2], al */ W8((u32)(r_edx+0x2u), (u8)r_eax);
    /* 0086c4dd: mov eax, edx */ r_eax = r_edx;
    /* 0086c4df: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0086c4e2: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c4e3:; BB(0x0086c4e3);
    /* 0086c4e3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086c4e5: mov eax, edx */ r_eax = r_edx;
    /* 0086c4e7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0086c4e9: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c4ea:; BB(0x0086c4ea);
    /* 0086c4ea: mov eax, edx */ r_eax = r_edx;
    /* 0086c4ec: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c4f0:; BB(0x0086c4f0);
    /* 0086c4f0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086c4f2: jbe 0x86c502 */ if ((fC||fZ)) goto L_0086c502;
L_0086c4f4:; BB(0x0086c4f4);
    /* 0086c4f4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086c4f6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086c4f8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086c4fc: jb 0x86d2c4 */ if (fC) goto L_0086d2c4;
L_0086c502:; BB(0x0086c502);
    /* 0086c502: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086c508: jne 0x86c673 */ if (!fZ) goto L_0086c673;
L_0086c50e:; BB(0x0086c50e);
    /* 0086c50e: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c511: jge 0x86c8c0 */ if ((fS==fO)) goto L_0086c8c0;
L_0086c517:; BB(0x0086c517);
    /* 0086c517: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c519: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086c51b: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086c51b, "jump table entry is not a known target"); } }
L_0086c673:; BB(0x0086c673);
    /* 0086c673: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c676: jle 0x86c50e */ if ((fZ||fS!=fO)) goto L_0086c50e;
L_0086c67c:; BB(0x0086c67c);
    /* 0086c67c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086c67d: mov esi, eax */ r_esi = r_eax;
    /* 0086c67f: test edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086c685: je 0x86c69d */ if (fZ) goto L_0086c69d;
L_0086c687:; BB(0x0086c687);
    /* 0086c687: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 0086c68a: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0086c68c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c68f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c692: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c695: test edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086c69b: je 0x86c6ac */ if (fZ) goto L_0086c6ac;
L_0086c69d:; BB(0x0086c69d);
    /* 0086c69d: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0086c6a0: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0086c6a3: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c6a6: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c6a9: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0086c6ac:; BB(0x0086c6ac);
    /* 0086c6ac: mov eax, esi */ r_eax = r_esi;
    /* 0086c6ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086c6af: jmp 0x86c50e */ goto L_0086c50e;
L_0086c6c0:; BB(0x0086c6c0);
    /* 0086c6c0: mov ecx, dword ptr [eax - 0x4c] */ r_ecx = R32((u32)(r_eax+0xffffffb4u));
    /* 0086c6c3: mov dword ptr [edx - 0x4c], ecx */ W32((u32)(r_edx+0xffffffb4u), r_ecx);
L_0086c6c6:; BB(0x0086c6c6);
    /* 0086c6c6: mov ecx, dword ptr [eax - 0x48] */ r_ecx = R32((u32)(r_eax+0xffffffb8u));
    /* 0086c6c9: mov dword ptr [edx - 0x48], ecx */ W32((u32)(r_edx+0xffffffb8u), r_ecx);
L_0086c6cc:; BB(0x0086c6cc);
    /* 0086c6cc: mov ecx, dword ptr [eax - 0x44] */ r_ecx = R32((u32)(r_eax+0xffffffbcu));
    /* 0086c6cf: mov dword ptr [edx - 0x44], ecx */ W32((u32)(r_edx+0xffffffbcu), r_ecx);
L_0086c6d2:; BB(0x0086c6d2);
    /* 0086c6d2: mov ecx, dword ptr [eax - 0x40] */ r_ecx = R32((u32)(r_eax+0xffffffc0u));
    /* 0086c6d5: mov dword ptr [edx - 0x40], ecx */ W32((u32)(r_edx+0xffffffc0u), r_ecx);
L_0086c6d8:; BB(0x0086c6d8);
    /* 0086c6d8: mov ecx, dword ptr [eax - 0x3c] */ r_ecx = R32((u32)(r_eax+0xffffffc4u));
    /* 0086c6db: mov dword ptr [edx - 0x3c], ecx */ W32((u32)(r_edx+0xffffffc4u), r_ecx);
L_0086c6de:; BB(0x0086c6de);
    /* 0086c6de: mov ecx, dword ptr [eax - 0x38] */ r_ecx = R32((u32)(r_eax+0xffffffc8u));
    /* 0086c6e1: mov dword ptr [edx - 0x38], ecx */ W32((u32)(r_edx+0xffffffc8u), r_ecx);
L_0086c6e4:; BB(0x0086c6e4);
    /* 0086c6e4: mov ecx, dword ptr [eax - 0x34] */ r_ecx = R32((u32)(r_eax+0xffffffccu));
    /* 0086c6e7: mov dword ptr [edx - 0x34], ecx */ W32((u32)(r_edx+0xffffffccu), r_ecx);
L_0086c6ea:; BB(0x0086c6ea);
    /* 0086c6ea: mov ecx, dword ptr [eax - 0x30] */ r_ecx = R32((u32)(r_eax+0xffffffd0u));
    /* 0086c6ed: mov dword ptr [edx - 0x30], ecx */ W32((u32)(r_edx+0xffffffd0u), r_ecx);
L_0086c6f0:; BB(0x0086c6f0);
    /* 0086c6f0: mov ecx, dword ptr [eax - 0x2c] */ r_ecx = R32((u32)(r_eax+0xffffffd4u));
    /* 0086c6f3: mov dword ptr [edx - 0x2c], ecx */ W32((u32)(r_edx+0xffffffd4u), r_ecx);
L_0086c6f6:; BB(0x0086c6f6);
    /* 0086c6f6: mov ecx, dword ptr [eax - 0x28] */ r_ecx = R32((u32)(r_eax+0xffffffd8u));
    /* 0086c6f9: mov dword ptr [edx - 0x28], ecx */ W32((u32)(r_edx+0xffffffd8u), r_ecx);
L_0086c6fc:; BB(0x0086c6fc);
    /* 0086c6fc: mov ecx, dword ptr [eax - 0x24] */ r_ecx = R32((u32)(r_eax+0xffffffdcu));
    /* 0086c6ff: mov dword ptr [edx - 0x24], ecx */ W32((u32)(r_edx+0xffffffdcu), r_ecx);
L_0086c702:; BB(0x0086c702);
    /* 0086c702: mov ecx, dword ptr [eax - 0x20] */ r_ecx = R32((u32)(r_eax+0xffffffe0u));
    /* 0086c705: mov dword ptr [edx - 0x20], ecx */ W32((u32)(r_edx+0xffffffe0u), r_ecx);
L_0086c708:; BB(0x0086c708);
    /* 0086c708: mov ecx, dword ptr [eax - 0x1c] */ r_ecx = R32((u32)(r_eax+0xffffffe4u));
    /* 0086c70b: mov dword ptr [edx - 0x1c], ecx */ W32((u32)(r_edx+0xffffffe4u), r_ecx);
L_0086c70e:; BB(0x0086c70e);
    /* 0086c70e: mov ecx, dword ptr [eax - 0x18] */ r_ecx = R32((u32)(r_eax+0xffffffe8u));
    /* 0086c711: mov dword ptr [edx - 0x18], ecx */ W32((u32)(r_edx+0xffffffe8u), r_ecx);
L_0086c714:; BB(0x0086c714);
    /* 0086c714: mov ecx, dword ptr [eax - 0x14] */ r_ecx = R32((u32)(r_eax+0xffffffecu));
    /* 0086c717: mov dword ptr [edx - 0x14], ecx */ W32((u32)(r_edx+0xffffffecu), r_ecx);
L_0086c71a:; BB(0x0086c71a);
    /* 0086c71a: mov ecx, dword ptr [eax - 0x10] */ r_ecx = R32((u32)(r_eax+0xfffffff0u));
    /* 0086c71d: mov dword ptr [edx - 0x10], ecx */ W32((u32)(r_edx+0xfffffff0u), r_ecx);
L_0086c720:; BB(0x0086c720);
    /* 0086c720: mov ecx, dword ptr [eax - 0xc] */ r_ecx = R32((u32)(r_eax+0xfffffff4u));
    /* 0086c723: mov dword ptr [edx - 0xc], ecx */ W32((u32)(r_edx+0xfffffff4u), r_ecx);
L_0086c726:; BB(0x0086c726);
    /* 0086c726: mov ecx, dword ptr [eax - 8] */ r_ecx = R32((u32)(r_eax+0xfffffff8u));
    /* 0086c729: mov dword ptr [edx - 8], ecx */ W32((u32)(r_edx+0xfffffff8u), r_ecx);
L_0086c72c:; BB(0x0086c72c);
    /* 0086c72c: mov ecx, dword ptr [eax - 4] */ r_ecx = R32((u32)(r_eax+0xfffffffcu));
    /* 0086c72f: mov dword ptr [edx - 4], ecx */ W32((u32)(r_edx+0xfffffffcu), r_ecx);
L_0086c732:; BB(0x0086c732);
    /* 0086c732: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c736: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c737:; BB(0x0086c737);
    /* 0086c737: mov ecx, dword ptr [eax - 0x4d] */ r_ecx = R32((u32)(r_eax+0xffffffb3u));
    /* 0086c73a: mov dword ptr [edx - 0x4d], ecx */ W32((u32)(r_edx+0xffffffb3u), r_ecx);
L_0086c73d:; BB(0x0086c73d);
    /* 0086c73d: mov ecx, dword ptr [eax - 0x49] */ r_ecx = R32((u32)(r_eax+0xffffffb7u));
    /* 0086c740: mov dword ptr [edx - 0x49], ecx */ W32((u32)(r_edx+0xffffffb7u), r_ecx);
L_0086c743:; BB(0x0086c743);
    /* 0086c743: mov ecx, dword ptr [eax - 0x45] */ r_ecx = R32((u32)(r_eax+0xffffffbbu));
    /* 0086c746: mov dword ptr [edx - 0x45], ecx */ W32((u32)(r_edx+0xffffffbbu), r_ecx);
L_0086c749:; BB(0x0086c749);
    /* 0086c749: mov ecx, dword ptr [eax - 0x41] */ r_ecx = R32((u32)(r_eax+0xffffffbfu));
    /* 0086c74c: mov dword ptr [edx - 0x41], ecx */ W32((u32)(r_edx+0xffffffbfu), r_ecx);
L_0086c74f:; BB(0x0086c74f);
    /* 0086c74f: mov ecx, dword ptr [eax - 0x3d] */ r_ecx = R32((u32)(r_eax+0xffffffc3u));
    /* 0086c752: mov dword ptr [edx - 0x3d], ecx */ W32((u32)(r_edx+0xffffffc3u), r_ecx);
L_0086c755:; BB(0x0086c755);
    /* 0086c755: mov ecx, dword ptr [eax - 0x39] */ r_ecx = R32((u32)(r_eax+0xffffffc7u));
    /* 0086c758: mov dword ptr [edx - 0x39], ecx */ W32((u32)(r_edx+0xffffffc7u), r_ecx);
L_0086c75b:; BB(0x0086c75b);
    /* 0086c75b: mov ecx, dword ptr [eax - 0x35] */ r_ecx = R32((u32)(r_eax+0xffffffcbu));
    /* 0086c75e: mov dword ptr [edx - 0x35], ecx */ W32((u32)(r_edx+0xffffffcbu), r_ecx);
L_0086c761:; BB(0x0086c761);
    /* 0086c761: mov ecx, dword ptr [eax - 0x31] */ r_ecx = R32((u32)(r_eax+0xffffffcfu));
    /* 0086c764: mov dword ptr [edx - 0x31], ecx */ W32((u32)(r_edx+0xffffffcfu), r_ecx);
L_0086c767:; BB(0x0086c767);
    /* 0086c767: mov ecx, dword ptr [eax - 0x2d] */ r_ecx = R32((u32)(r_eax+0xffffffd3u));
    /* 0086c76a: mov dword ptr [edx - 0x2d], ecx */ W32((u32)(r_edx+0xffffffd3u), r_ecx);
L_0086c76d:; BB(0x0086c76d);
    /* 0086c76d: mov ecx, dword ptr [eax - 0x29] */ r_ecx = R32((u32)(r_eax+0xffffffd7u));
    /* 0086c770: mov dword ptr [edx - 0x29], ecx */ W32((u32)(r_edx+0xffffffd7u), r_ecx);
L_0086c773:; BB(0x0086c773);
    /* 0086c773: mov ecx, dword ptr [eax - 0x25] */ r_ecx = R32((u32)(r_eax+0xffffffdbu));
    /* 0086c776: mov dword ptr [edx - 0x25], ecx */ W32((u32)(r_edx+0xffffffdbu), r_ecx);
L_0086c779:; BB(0x0086c779);
    /* 0086c779: mov ecx, dword ptr [eax - 0x21] */ r_ecx = R32((u32)(r_eax+0xffffffdfu));
    /* 0086c77c: mov dword ptr [edx - 0x21], ecx */ W32((u32)(r_edx+0xffffffdfu), r_ecx);
L_0086c77f:; BB(0x0086c77f);
    /* 0086c77f: mov ecx, dword ptr [eax - 0x1d] */ r_ecx = R32((u32)(r_eax+0xffffffe3u));
    /* 0086c782: mov dword ptr [edx - 0x1d], ecx */ W32((u32)(r_edx+0xffffffe3u), r_ecx);
L_0086c785:; BB(0x0086c785);
    /* 0086c785: mov ecx, dword ptr [eax - 0x19] */ r_ecx = R32((u32)(r_eax+0xffffffe7u));
    /* 0086c788: mov dword ptr [edx - 0x19], ecx */ W32((u32)(r_edx+0xffffffe7u), r_ecx);
L_0086c78b:; BB(0x0086c78b);
    /* 0086c78b: mov ecx, dword ptr [eax - 0x15] */ r_ecx = R32((u32)(r_eax+0xffffffebu));
    /* 0086c78e: mov dword ptr [edx - 0x15], ecx */ W32((u32)(r_edx+0xffffffebu), r_ecx);
L_0086c791:; BB(0x0086c791);
    /* 0086c791: mov ecx, dword ptr [eax - 0x11] */ r_ecx = R32((u32)(r_eax+0xffffffefu));
    /* 0086c794: mov dword ptr [edx - 0x11], ecx */ W32((u32)(r_edx+0xffffffefu), r_ecx);
L_0086c797:; BB(0x0086c797);
    /* 0086c797: mov ecx, dword ptr [eax - 0xd] */ r_ecx = R32((u32)(r_eax+0xfffffff3u));
    /* 0086c79a: mov dword ptr [edx - 0xd], ecx */ W32((u32)(r_edx+0xfffffff3u), r_ecx);
L_0086c79d:; BB(0x0086c79d);
    /* 0086c79d: mov ecx, dword ptr [eax - 9] */ r_ecx = R32((u32)(r_eax+0xfffffff7u));
    /* 0086c7a0: mov dword ptr [edx - 9], ecx */ W32((u32)(r_edx+0xfffffff7u), r_ecx);
L_0086c7a3:; BB(0x0086c7a3);
    /* 0086c7a3: mov ecx, dword ptr [eax - 5] */ r_ecx = R32((u32)(r_eax+0xfffffffbu));
    /* 0086c7a6: mov dword ptr [edx - 5], ecx */ W32((u32)(r_edx+0xfffffffbu), r_ecx);
L_0086c7a9:; BB(0x0086c7a9);
    /* 0086c7a9: movzx ecx, byte ptr [eax - 1] */ r_ecx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 0086c7ad: mov byte ptr [edx - 1], cl */ W8((u32)(r_edx+0xffffffffu), (u8)r_ecx);
    /* 0086c7b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c7b4: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c7b5:; BB(0x0086c7b5);
    /* 0086c7b5: mov ecx, dword ptr [eax - 0x4e] */ r_ecx = R32((u32)(r_eax+0xffffffb2u));
    /* 0086c7b8: mov dword ptr [edx - 0x4e], ecx */ W32((u32)(r_edx+0xffffffb2u), r_ecx);
L_0086c7bb:; BB(0x0086c7bb);
    /* 0086c7bb: mov ecx, dword ptr [eax - 0x4a] */ r_ecx = R32((u32)(r_eax+0xffffffb6u));
    /* 0086c7be: mov dword ptr [edx - 0x4a], ecx */ W32((u32)(r_edx+0xffffffb6u), r_ecx);
L_0086c7c1:; BB(0x0086c7c1);
    /* 0086c7c1: mov ecx, dword ptr [eax - 0x46] */ r_ecx = R32((u32)(r_eax+0xffffffbau));
    /* 0086c7c4: mov dword ptr [edx - 0x46], ecx */ W32((u32)(r_edx+0xffffffbau), r_ecx);
L_0086c7c7:; BB(0x0086c7c7);
    /* 0086c7c7: mov ecx, dword ptr [eax - 0x42] */ r_ecx = R32((u32)(r_eax+0xffffffbeu));
    /* 0086c7ca: mov dword ptr [edx - 0x42], ecx */ W32((u32)(r_edx+0xffffffbeu), r_ecx);
L_0086c7cd:; BB(0x0086c7cd);
    /* 0086c7cd: mov ecx, dword ptr [eax - 0x3e] */ r_ecx = R32((u32)(r_eax+0xffffffc2u));
    /* 0086c7d0: mov dword ptr [edx - 0x3e], ecx */ W32((u32)(r_edx+0xffffffc2u), r_ecx);
L_0086c7d3:; BB(0x0086c7d3);
    /* 0086c7d3: mov ecx, dword ptr [eax - 0x3a] */ r_ecx = R32((u32)(r_eax+0xffffffc6u));
    /* 0086c7d6: mov dword ptr [edx - 0x3a], ecx */ W32((u32)(r_edx+0xffffffc6u), r_ecx);
L_0086c7d9:; BB(0x0086c7d9);
    /* 0086c7d9: mov ecx, dword ptr [eax - 0x36] */ r_ecx = R32((u32)(r_eax+0xffffffcau));
    /* 0086c7dc: mov dword ptr [edx - 0x36], ecx */ W32((u32)(r_edx+0xffffffcau), r_ecx);
L_0086c7df:; BB(0x0086c7df);
    /* 0086c7df: mov ecx, dword ptr [eax - 0x32] */ r_ecx = R32((u32)(r_eax+0xffffffceu));
    /* 0086c7e2: mov dword ptr [edx - 0x32], ecx */ W32((u32)(r_edx+0xffffffceu), r_ecx);
L_0086c7e5:; BB(0x0086c7e5);
    /* 0086c7e5: mov ecx, dword ptr [eax - 0x2e] */ r_ecx = R32((u32)(r_eax+0xffffffd2u));
    /* 0086c7e8: mov dword ptr [edx - 0x2e], ecx */ W32((u32)(r_edx+0xffffffd2u), r_ecx);
L_0086c7eb:; BB(0x0086c7eb);
    /* 0086c7eb: mov ecx, dword ptr [eax - 0x2a] */ r_ecx = R32((u32)(r_eax+0xffffffd6u));
    /* 0086c7ee: mov dword ptr [edx - 0x2a], ecx */ W32((u32)(r_edx+0xffffffd6u), r_ecx);
L_0086c7f1:; BB(0x0086c7f1);
    /* 0086c7f1: mov ecx, dword ptr [eax - 0x26] */ r_ecx = R32((u32)(r_eax+0xffffffdau));
    /* 0086c7f4: mov dword ptr [edx - 0x26], ecx */ W32((u32)(r_edx+0xffffffdau), r_ecx);
L_0086c7f7:; BB(0x0086c7f7);
    /* 0086c7f7: mov ecx, dword ptr [eax - 0x22] */ r_ecx = R32((u32)(r_eax+0xffffffdeu));
    /* 0086c7fa: mov dword ptr [edx - 0x22], ecx */ W32((u32)(r_edx+0xffffffdeu), r_ecx);
L_0086c7fd:; BB(0x0086c7fd);
    /* 0086c7fd: mov ecx, dword ptr [eax - 0x1e] */ r_ecx = R32((u32)(r_eax+0xffffffe2u));
    /* 0086c800: mov dword ptr [edx - 0x1e], ecx */ W32((u32)(r_edx+0xffffffe2u), r_ecx);
L_0086c803:; BB(0x0086c803);
    /* 0086c803: mov ecx, dword ptr [eax - 0x1a] */ r_ecx = R32((u32)(r_eax+0xffffffe6u));
    /* 0086c806: mov dword ptr [edx - 0x1a], ecx */ W32((u32)(r_edx+0xffffffe6u), r_ecx);
L_0086c809:; BB(0x0086c809);
    /* 0086c809: mov ecx, dword ptr [eax - 0x16] */ r_ecx = R32((u32)(r_eax+0xffffffeau));
    /* 0086c80c: mov dword ptr [edx - 0x16], ecx */ W32((u32)(r_edx+0xffffffeau), r_ecx);
L_0086c80f:; BB(0x0086c80f);
    /* 0086c80f: mov ecx, dword ptr [eax - 0x12] */ r_ecx = R32((u32)(r_eax+0xffffffeeu));
    /* 0086c812: mov dword ptr [edx - 0x12], ecx */ W32((u32)(r_edx+0xffffffeeu), r_ecx);
L_0086c815:; BB(0x0086c815);
    /* 0086c815: mov ecx, dword ptr [eax - 0xe] */ r_ecx = R32((u32)(r_eax+0xfffffff2u));
    /* 0086c818: mov dword ptr [edx - 0xe], ecx */ W32((u32)(r_edx+0xfffffff2u), r_ecx);
L_0086c81b:; BB(0x0086c81b);
    /* 0086c81b: mov ecx, dword ptr [eax - 0xa] */ r_ecx = R32((u32)(r_eax+0xfffffff6u));
    /* 0086c81e: mov dword ptr [edx - 0xa], ecx */ W32((u32)(r_edx+0xfffffff6u), r_ecx);
L_0086c821:; BB(0x0086c821);
    /* 0086c821: mov ecx, dword ptr [eax - 6] */ r_ecx = R32((u32)(r_eax+0xfffffffau));
    /* 0086c824: mov dword ptr [edx - 6], ecx */ W32((u32)(r_edx+0xfffffffau), r_ecx);
L_0086c827:; BB(0x0086c827);
    /* 0086c827: movzx ecx, word ptr [eax - 2] */ r_ecx = (u32)R16((u32)(r_eax+0xfffffffeu));
    /* 0086c82b: mov word ptr [edx - 2], cx */ W16((u32)(r_edx+0xfffffffeu), (u16)r_ecx);
    /* 0086c82f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c833: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c834:; BB(0x0086c834);
    /* 0086c834: mov ecx, dword ptr [eax - 0x4f] */ r_ecx = R32((u32)(r_eax+0xffffffb1u));
    /* 0086c837: mov dword ptr [edx - 0x4f], ecx */ W32((u32)(r_edx+0xffffffb1u), r_ecx);
L_0086c83a:; BB(0x0086c83a);
    /* 0086c83a: mov ecx, dword ptr [eax - 0x4b] */ r_ecx = R32((u32)(r_eax+0xffffffb5u));
    /* 0086c83d: mov dword ptr [edx - 0x4b], ecx */ W32((u32)(r_edx+0xffffffb5u), r_ecx);
L_0086c840:; BB(0x0086c840);
    /* 0086c840: mov ecx, dword ptr [eax - 0x47] */ r_ecx = R32((u32)(r_eax+0xffffffb9u));
    /* 0086c843: mov dword ptr [edx - 0x47], ecx */ W32((u32)(r_edx+0xffffffb9u), r_ecx);
L_0086c846:; BB(0x0086c846);
    /* 0086c846: mov ecx, dword ptr [eax - 0x43] */ r_ecx = R32((u32)(r_eax+0xffffffbdu));
    /* 0086c849: mov dword ptr [edx - 0x43], ecx */ W32((u32)(r_edx+0xffffffbdu), r_ecx);
L_0086c84c:; BB(0x0086c84c);
    /* 0086c84c: mov ecx, dword ptr [eax - 0x3f] */ r_ecx = R32((u32)(r_eax+0xffffffc1u));
    /* 0086c84f: mov dword ptr [edx - 0x3f], ecx */ W32((u32)(r_edx+0xffffffc1u), r_ecx);
L_0086c852:; BB(0x0086c852);
    /* 0086c852: mov ecx, dword ptr [eax - 0x3b] */ r_ecx = R32((u32)(r_eax+0xffffffc5u));
    /* 0086c855: mov dword ptr [edx - 0x3b], ecx */ W32((u32)(r_edx+0xffffffc5u), r_ecx);
L_0086c858:; BB(0x0086c858);
    /* 0086c858: mov ecx, dword ptr [eax - 0x37] */ r_ecx = R32((u32)(r_eax+0xffffffc9u));
    /* 0086c85b: mov dword ptr [edx - 0x37], ecx */ W32((u32)(r_edx+0xffffffc9u), r_ecx);
L_0086c85e:; BB(0x0086c85e);
    /* 0086c85e: mov ecx, dword ptr [eax - 0x33] */ r_ecx = R32((u32)(r_eax+0xffffffcdu));
    /* 0086c861: mov dword ptr [edx - 0x33], ecx */ W32((u32)(r_edx+0xffffffcdu), r_ecx);
L_0086c864:; BB(0x0086c864);
    /* 0086c864: mov ecx, dword ptr [eax - 0x2f] */ r_ecx = R32((u32)(r_eax+0xffffffd1u));
    /* 0086c867: mov dword ptr [edx - 0x2f], ecx */ W32((u32)(r_edx+0xffffffd1u), r_ecx);
L_0086c86a:; BB(0x0086c86a);
    /* 0086c86a: mov ecx, dword ptr [eax - 0x2b] */ r_ecx = R32((u32)(r_eax+0xffffffd5u));
    /* 0086c86d: mov dword ptr [edx - 0x2b], ecx */ W32((u32)(r_edx+0xffffffd5u), r_ecx);
L_0086c870:; BB(0x0086c870);
    /* 0086c870: mov ecx, dword ptr [eax - 0x27] */ r_ecx = R32((u32)(r_eax+0xffffffd9u));
    /* 0086c873: mov dword ptr [edx - 0x27], ecx */ W32((u32)(r_edx+0xffffffd9u), r_ecx);
L_0086c876:; BB(0x0086c876);
    /* 0086c876: mov ecx, dword ptr [eax - 0x23] */ r_ecx = R32((u32)(r_eax+0xffffffddu));
    /* 0086c879: mov dword ptr [edx - 0x23], ecx */ W32((u32)(r_edx+0xffffffddu), r_ecx);
L_0086c87c:; BB(0x0086c87c);
    /* 0086c87c: mov ecx, dword ptr [eax - 0x1f] */ r_ecx = R32((u32)(r_eax+0xffffffe1u));
    /* 0086c87f: mov dword ptr [edx - 0x1f], ecx */ W32((u32)(r_edx+0xffffffe1u), r_ecx);
L_0086c882:; BB(0x0086c882);
    /* 0086c882: mov ecx, dword ptr [eax - 0x1b] */ r_ecx = R32((u32)(r_eax+0xffffffe5u));
    /* 0086c885: mov dword ptr [edx - 0x1b], ecx */ W32((u32)(r_edx+0xffffffe5u), r_ecx);
L_0086c888:; BB(0x0086c888);
    /* 0086c888: mov ecx, dword ptr [eax - 0x17] */ r_ecx = R32((u32)(r_eax+0xffffffe9u));
    /* 0086c88b: mov dword ptr [edx - 0x17], ecx */ W32((u32)(r_edx+0xffffffe9u), r_ecx);
L_0086c88e:; BB(0x0086c88e);
    /* 0086c88e: mov ecx, dword ptr [eax - 0x13] */ r_ecx = R32((u32)(r_eax+0xffffffedu));
    /* 0086c891: mov dword ptr [edx - 0x13], ecx */ W32((u32)(r_edx+0xffffffedu), r_ecx);
L_0086c894:; BB(0x0086c894);
    /* 0086c894: mov ecx, dword ptr [eax - 0xf] */ r_ecx = R32((u32)(r_eax+0xfffffff1u));
    /* 0086c897: mov dword ptr [edx - 0xf], ecx */ W32((u32)(r_edx+0xfffffff1u), r_ecx);
L_0086c89a:; BB(0x0086c89a);
    /* 0086c89a: mov ecx, dword ptr [eax - 0xb] */ r_ecx = R32((u32)(r_eax+0xfffffff5u));
    /* 0086c89d: mov dword ptr [edx - 0xb], ecx */ W32((u32)(r_edx+0xfffffff5u), r_ecx);
L_0086c8a0:; BB(0x0086c8a0);
    /* 0086c8a0: mov ecx, dword ptr [eax - 7] */ r_ecx = R32((u32)(r_eax+0xfffffff9u));
    /* 0086c8a3: mov dword ptr [edx - 7], ecx */ W32((u32)(r_edx+0xfffffff9u), r_ecx);
L_0086c8a6:; BB(0x0086c8a6);
    /* 0086c8a6: movzx ecx, word ptr [eax - 3] */ r_ecx = (u32)R16((u32)(r_eax+0xfffffffdu));
    /* 0086c8aa: movzx eax, byte ptr [eax - 1] */ r_eax = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 0086c8ae: mov word ptr [edx - 3], cx */ W16((u32)(r_edx+0xfffffffdu), (u16)r_ecx);
    /* 0086c8b2: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086c8b5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c8b9: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086c8c0:; BB(0x0086c8c0);
    /* 0086c8c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086c8c1: mov esi, eax */ r_esi = r_eax;
L_0086c8c3:; BB(0x0086c8c3);
    /* 0086c8c3: cmp dword ptr [0xa24e34], 1 */ {  u32 a = R32((u32)(0xa24e34u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c8ca: je 0x86cf94 */ if (fZ) goto L_0086cf94;
L_0086c8d0:; BB(0x0086c8d0);
    /* 0086c8d0: jl 0x86d280 */ if ((fS!=fO)) goto L_0086d280;
L_0086c8d6:; BB(0x0086c8d6);
    /* 0086c8d6: test edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086c8dc: jne 0x86d232 */ if (!fZ) goto L_0086d232;
L_0086c8e2:; BB(0x0086c8e2);
    /* 0086c8e2: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c8e5: jl 0x86c970 */ if ((fS!=fO)) goto L_0086c970;
L_0086c8eb:; BB(0x0086c8eb);
    /* 0086c8eb: mov eax, dword ptr [0xae7f08] */ r_eax = R32((u32)(0xae7f08u));
    /* 0086c8f0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086c8f2: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c8f5: cmovle eax, ecx */ if ((fZ||fS!=fO)) { r_eax = r_ecx; }
    /* 0086c8f8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c8fa: jg 0x86ce60 */ if ((!fZ&&fS==fO)) goto L_0086ce60;
L_0086c900:; BB(0x0086c900);
    /* 0086c900: test esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086c906: je 0x86cee5 */ if (fZ) goto L_0086cee5;
L_0086c90c:; BB(0x0086c90c);
    /* 0086c90c: mov eax, esi */ r_eax = r_esi;
    /* 0086c90e: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086c911: movdqu xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086c915: movdqa xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 0086c919: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c91c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086c91e: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c921: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c924: movdqa xmm1, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[1] = s; }
    /* 0086c928: jmp dword ptr [eax*4 + 0x86c930] */ { u32 t = R32((u32)(r_eax*4+0x86c930u)); switch (t) { case 0x86cef0u: goto L_0086cef0; case 0x86c9a0u: goto L_0086c9a0; case 0x86c9f0u: goto L_0086c9f0; case 0x86ca40u: goto L_0086ca40; case 0x86ca90u: goto L_0086ca90; case 0x86cae0u: goto L_0086cae0; case 0x86cb30u: goto L_0086cb30; case 0x86cb80u: goto L_0086cb80; case 0x86cbd0u: goto L_0086cbd0; case 0x86cc20u: goto L_0086cc20; case 0x86cc70u: goto L_0086cc70; case 0x86ccc0u: goto L_0086ccc0; case 0x86cd10u: goto L_0086cd10; case 0x86cd60u: goto L_0086cd60; case 0x86cdb0u: goto L_0086cdb0; case 0x86ce00u: goto L_0086ce00; default: UNSUP(0x0086c928, "jump table entry is not a known target"); } }
L_0086c970:; BB(0x0086c970);
    /* 0086c970: mov eax, ecx */ r_eax = r_ecx;
    /* 0086c972: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086c975: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086c978: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c97a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c97c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c97e: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086c981: jmp dword ptr [eax*4 + 0x86d1b0] */ { u32 t = R32((u32)(r_eax*4+0x86d1b0u)); switch (t) { case 0x86d224u: goto L_0086d224; case 0x86d21au: goto L_0086d21a; case 0x86d210u: goto L_0086d210; case 0x86d206u: goto L_0086d206; case 0x86d1fcu: goto L_0086d1fc; case 0x86d1f2u: goto L_0086d1f2; case 0x86d1e8u: goto L_0086d1e8; case 0x86d1deu: goto L_0086d1de; case 0x86d1d4u: goto L_0086d1d4; default: UNSUP(0x0086c981, "jump table entry is not a known target"); } }
L_0086c9a0:; BB(0x0086c9a0);
    /* 0086c9a0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c9a3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086c9a8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086c9ad: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c9b0: psrldq xmm1, 1 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (1 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 1 ? (lo >> (1 * 8)) | (hi << (64 - (1 * 8))) : lo; xmm[1].q[1] = hi >> (1 * 8); } }
    /* 0086c9b5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086c9b9: pslldq xmm3, 0xf */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (15 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (15 * 8); xmm[3].q[1] = 15 ? (hi << (15 * 8)) | (lo >> (64 - (15 * 8))) : hi; } }
    /* 0086c9be: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086c9c2: psrldq xmm2, 1 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (1 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 1 ? (lo >> (1 * 8)) | (hi << (64 - (1 * 8))) : lo; xmm[2].q[1] = hi >> (1 * 8); } }
    /* 0086c9c7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086c9cb: pslldq xmm0, 0xf */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (15 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (15 * 8); xmm[0].q[1] = 15 ? (hi << (15 * 8)) | (lo >> (64 - (15 * 8))) : hi; } }
    /* 0086c9d0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086c9d4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086c9d8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086c9dd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c9e0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c9e3: jge 0x86c9a0 */ if ((fS==fO)) goto L_0086c9a0;
L_0086c9e5:; BB(0x0086c9e5);
    /* 0086c9e5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086c9f0:; BB(0x0086c9f0);
    /* 0086c9f0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c9f3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086c9f8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086c9fd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ca00: psrldq xmm1, 2 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (2 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 2 ? (lo >> (2 * 8)) | (hi << (64 - (2 * 8))) : lo; xmm[1].q[1] = hi >> (2 * 8); } }
    /* 0086ca05: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ca09: pslldq xmm3, 0xe */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (14 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (14 * 8); xmm[3].q[1] = 14 ? (hi << (14 * 8)) | (lo >> (64 - (14 * 8))) : hi; } }
    /* 0086ca0e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086ca12: psrldq xmm2, 2 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (2 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 2 ? (lo >> (2 * 8)) | (hi << (64 - (2 * 8))) : lo; xmm[2].q[1] = hi >> (2 * 8); } }
    /* 0086ca17: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086ca1b: pslldq xmm0, 0xe */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (14 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (14 * 8); xmm[0].q[1] = 14 ? (hi << (14 * 8)) | (lo >> (64 - (14 * 8))) : hi; } }
    /* 0086ca20: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ca24: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ca28: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ca2d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ca30: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ca33: jge 0x86c9f0 */ if ((fS==fO)) goto L_0086c9f0;
L_0086ca35:; BB(0x0086ca35);
    /* 0086ca35: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ca40:; BB(0x0086ca40);
    /* 0086ca40: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ca43: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ca48: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086ca4d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ca50: psrldq xmm1, 3 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (3 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 3 ? (lo >> (3 * 8)) | (hi << (64 - (3 * 8))) : lo; xmm[1].q[1] = hi >> (3 * 8); } }
    /* 0086ca55: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ca59: pslldq xmm3, 0xd */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (13 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (13 * 8); xmm[3].q[1] = 13 ? (hi << (13 * 8)) | (lo >> (64 - (13 * 8))) : hi; } }
    /* 0086ca5e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086ca62: psrldq xmm2, 3 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (3 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 3 ? (lo >> (3 * 8)) | (hi << (64 - (3 * 8))) : lo; xmm[2].q[1] = hi >> (3 * 8); } }
    /* 0086ca67: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086ca6b: pslldq xmm0, 0xd */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (13 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (13 * 8); xmm[0].q[1] = 13 ? (hi << (13 * 8)) | (lo >> (64 - (13 * 8))) : hi; } }
    /* 0086ca70: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ca74: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ca78: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ca7d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ca80: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ca83: jge 0x86ca40 */ if ((fS==fO)) goto L_0086ca40;
L_0086ca85:; BB(0x0086ca85);
    /* 0086ca85: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ca90:; BB(0x0086ca90);
    /* 0086ca90: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ca93: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ca98: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086ca9d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086caa0: psrldq xmm1, 4 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (4 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 4 ? (lo >> (4 * 8)) | (hi << (64 - (4 * 8))) : lo; xmm[1].q[1] = hi >> (4 * 8); } }
    /* 0086caa5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086caa9: pslldq xmm3, 0xc */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (12 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (12 * 8); xmm[3].q[1] = 12 ? (hi << (12 * 8)) | (lo >> (64 - (12 * 8))) : hi; } }
    /* 0086caae: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cab2: psrldq xmm2, 4 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (4 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 4 ? (lo >> (4 * 8)) | (hi << (64 - (4 * 8))) : lo; xmm[2].q[1] = hi >> (4 * 8); } }
    /* 0086cab7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cabb: pslldq xmm0, 0xc */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (12 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (12 * 8); xmm[0].q[1] = 12 ? (hi << (12 * 8)) | (lo >> (64 - (12 * 8))) : hi; } }
    /* 0086cac0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cac4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cac8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cacd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cad0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cad3: jge 0x86ca90 */ if ((fS==fO)) goto L_0086ca90;
L_0086cad5:; BB(0x0086cad5);
    /* 0086cad5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cae0:; BB(0x0086cae0);
    /* 0086cae0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cae3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cae8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086caed: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086caf0: psrldq xmm1, 5 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (5 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 5 ? (lo >> (5 * 8)) | (hi << (64 - (5 * 8))) : lo; xmm[1].q[1] = hi >> (5 * 8); } }
    /* 0086caf5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086caf9: pslldq xmm3, 0xb */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (11 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (11 * 8); xmm[3].q[1] = 11 ? (hi << (11 * 8)) | (lo >> (64 - (11 * 8))) : hi; } }
    /* 0086cafe: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cb02: psrldq xmm2, 5 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (5 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 5 ? (lo >> (5 * 8)) | (hi << (64 - (5 * 8))) : lo; xmm[2].q[1] = hi >> (5 * 8); } }
    /* 0086cb07: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cb0b: pslldq xmm0, 0xb */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (11 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (11 * 8); xmm[0].q[1] = 11 ? (hi << (11 * 8)) | (lo >> (64 - (11 * 8))) : hi; } }
    /* 0086cb10: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cb14: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cb18: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cb1d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cb20: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cb23: jge 0x86cae0 */ if ((fS==fO)) goto L_0086cae0;
L_0086cb25:; BB(0x0086cb25);
    /* 0086cb25: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cb30:; BB(0x0086cb30);
    /* 0086cb30: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cb33: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cb38: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cb3d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cb40: psrldq xmm1, 6 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (6 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 6 ? (lo >> (6 * 8)) | (hi << (64 - (6 * 8))) : lo; xmm[1].q[1] = hi >> (6 * 8); } }
    /* 0086cb45: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cb49: pslldq xmm3, 0xa */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (10 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (10 * 8); xmm[3].q[1] = 10 ? (hi << (10 * 8)) | (lo >> (64 - (10 * 8))) : hi; } }
    /* 0086cb4e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cb52: psrldq xmm2, 6 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (6 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 6 ? (lo >> (6 * 8)) | (hi << (64 - (6 * 8))) : lo; xmm[2].q[1] = hi >> (6 * 8); } }
    /* 0086cb57: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cb5b: pslldq xmm0, 0xa */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (10 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (10 * 8); xmm[0].q[1] = 10 ? (hi << (10 * 8)) | (lo >> (64 - (10 * 8))) : hi; } }
    /* 0086cb60: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cb64: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cb68: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cb6d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cb70: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cb73: jge 0x86cb30 */ if ((fS==fO)) goto L_0086cb30;
L_0086cb75:; BB(0x0086cb75);
    /* 0086cb75: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cb80:; BB(0x0086cb80);
    /* 0086cb80: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cb83: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cb88: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cb8d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cb90: psrldq xmm1, 7 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (7 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 7 ? (lo >> (7 * 8)) | (hi << (64 - (7 * 8))) : lo; xmm[1].q[1] = hi >> (7 * 8); } }
    /* 0086cb95: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cb99: pslldq xmm3, 9 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (9 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (9 * 8); xmm[3].q[1] = 9 ? (hi << (9 * 8)) | (lo >> (64 - (9 * 8))) : hi; } }
    /* 0086cb9e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cba2: psrldq xmm2, 7 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (7 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 7 ? (lo >> (7 * 8)) | (hi << (64 - (7 * 8))) : lo; xmm[2].q[1] = hi >> (7 * 8); } }
    /* 0086cba7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cbab: pslldq xmm0, 9 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (9 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (9 * 8); xmm[0].q[1] = 9 ? (hi << (9 * 8)) | (lo >> (64 - (9 * 8))) : hi; } }
    /* 0086cbb0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cbb4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cbb8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cbbd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cbc0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cbc3: jge 0x86cb80 */ if ((fS==fO)) goto L_0086cb80;
L_0086cbc5:; BB(0x0086cbc5);
    /* 0086cbc5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cbd0:; BB(0x0086cbd0);
    /* 0086cbd0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cbd3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cbd8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cbdd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cbe0: psrldq xmm1, 8 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (8 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 8 ? (lo >> (8 * 8)) | (hi << (64 - (8 * 8))) : lo; xmm[1].q[1] = hi >> (8 * 8); } }
    /* 0086cbe5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cbe9: pslldq xmm3, 8 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (8 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (8 * 8); xmm[3].q[1] = 8 ? (hi << (8 * 8)) | (lo >> (64 - (8 * 8))) : hi; } }
    /* 0086cbee: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cbf2: psrldq xmm2, 8 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (8 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 8 ? (lo >> (8 * 8)) | (hi << (64 - (8 * 8))) : lo; xmm[2].q[1] = hi >> (8 * 8); } }
    /* 0086cbf7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cbfb: pslldq xmm0, 8 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (8 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (8 * 8); xmm[0].q[1] = 8 ? (hi << (8 * 8)) | (lo >> (64 - (8 * 8))) : hi; } }
    /* 0086cc00: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cc04: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cc08: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cc0d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cc10: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cc13: jge 0x86cbd0 */ if ((fS==fO)) goto L_0086cbd0;
L_0086cc15:; BB(0x0086cc15);
    /* 0086cc15: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cc20:; BB(0x0086cc20);
    /* 0086cc20: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cc23: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cc28: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cc2d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cc30: psrldq xmm1, 9 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (9 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 9 ? (lo >> (9 * 8)) | (hi << (64 - (9 * 8))) : lo; xmm[1].q[1] = hi >> (9 * 8); } }
    /* 0086cc35: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cc39: pslldq xmm3, 7 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (7 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (7 * 8); xmm[3].q[1] = 7 ? (hi << (7 * 8)) | (lo >> (64 - (7 * 8))) : hi; } }
    /* 0086cc3e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cc42: psrldq xmm2, 9 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (9 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 9 ? (lo >> (9 * 8)) | (hi << (64 - (9 * 8))) : lo; xmm[2].q[1] = hi >> (9 * 8); } }
    /* 0086cc47: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cc4b: pslldq xmm0, 7 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (7 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (7 * 8); xmm[0].q[1] = 7 ? (hi << (7 * 8)) | (lo >> (64 - (7 * 8))) : hi; } }
    /* 0086cc50: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cc54: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cc58: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cc5d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cc60: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cc63: jge 0x86cc20 */ if ((fS==fO)) goto L_0086cc20;
L_0086cc65:; BB(0x0086cc65);
    /* 0086cc65: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cc70:; BB(0x0086cc70);
    /* 0086cc70: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cc73: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cc78: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cc7d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cc80: psrldq xmm1, 0xa */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (10 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 10 ? (lo >> (10 * 8)) | (hi << (64 - (10 * 8))) : lo; xmm[1].q[1] = hi >> (10 * 8); } }
    /* 0086cc85: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cc89: pslldq xmm3, 6 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (6 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (6 * 8); xmm[3].q[1] = 6 ? (hi << (6 * 8)) | (lo >> (64 - (6 * 8))) : hi; } }
    /* 0086cc8e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cc92: psrldq xmm2, 0xa */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (10 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 10 ? (lo >> (10 * 8)) | (hi << (64 - (10 * 8))) : lo; xmm[2].q[1] = hi >> (10 * 8); } }
    /* 0086cc97: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cc9b: pslldq xmm0, 6 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (6 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (6 * 8); xmm[0].q[1] = 6 ? (hi << (6 * 8)) | (lo >> (64 - (6 * 8))) : hi; } }
    /* 0086cca0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cca4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cca8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ccad: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ccb0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ccb3: jge 0x86cc70 */ if ((fS==fO)) goto L_0086cc70;
L_0086ccb5:; BB(0x0086ccb5);
    /* 0086ccb5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ccc0:; BB(0x0086ccc0);
    /* 0086ccc0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ccc3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ccc8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cccd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ccd0: psrldq xmm1, 0xb */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (11 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 11 ? (lo >> (11 * 8)) | (hi << (64 - (11 * 8))) : lo; xmm[1].q[1] = hi >> (11 * 8); } }
    /* 0086ccd5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ccd9: pslldq xmm3, 5 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (5 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (5 * 8); xmm[3].q[1] = 5 ? (hi << (5 * 8)) | (lo >> (64 - (5 * 8))) : hi; } }
    /* 0086ccde: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cce2: psrldq xmm2, 0xb */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (11 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 11 ? (lo >> (11 * 8)) | (hi << (64 - (11 * 8))) : lo; xmm[2].q[1] = hi >> (11 * 8); } }
    /* 0086cce7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cceb: pslldq xmm0, 5 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (5 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (5 * 8); xmm[0].q[1] = 5 ? (hi << (5 * 8)) | (lo >> (64 - (5 * 8))) : hi; } }
    /* 0086ccf0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ccf4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ccf8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ccfd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cd00: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cd03: jge 0x86ccc0 */ if ((fS==fO)) goto L_0086ccc0;
L_0086cd05:; BB(0x0086cd05);
    /* 0086cd05: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cd10:; BB(0x0086cd10);
    /* 0086cd10: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cd13: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cd18: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cd1d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cd20: psrldq xmm1, 0xc */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (12 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 12 ? (lo >> (12 * 8)) | (hi << (64 - (12 * 8))) : lo; xmm[1].q[1] = hi >> (12 * 8); } }
    /* 0086cd25: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cd29: pslldq xmm3, 4 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (4 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (4 * 8); xmm[3].q[1] = 4 ? (hi << (4 * 8)) | (lo >> (64 - (4 * 8))) : hi; } }
    /* 0086cd2e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cd32: psrldq xmm2, 0xc */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (12 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 12 ? (lo >> (12 * 8)) | (hi << (64 - (12 * 8))) : lo; xmm[2].q[1] = hi >> (12 * 8); } }
    /* 0086cd37: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cd3b: pslldq xmm0, 4 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (4 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (4 * 8); xmm[0].q[1] = 4 ? (hi << (4 * 8)) | (lo >> (64 - (4 * 8))) : hi; } }
    /* 0086cd40: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cd44: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cd48: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cd4d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cd50: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cd53: jge 0x86cd10 */ if ((fS==fO)) goto L_0086cd10;
L_0086cd55:; BB(0x0086cd55);
    /* 0086cd55: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cd60:; BB(0x0086cd60);
    /* 0086cd60: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cd63: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cd68: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cd6d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cd70: psrldq xmm1, 0xd */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (13 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 13 ? (lo >> (13 * 8)) | (hi << (64 - (13 * 8))) : lo; xmm[1].q[1] = hi >> (13 * 8); } }
    /* 0086cd75: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cd79: pslldq xmm3, 3 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (3 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (3 * 8); xmm[3].q[1] = 3 ? (hi << (3 * 8)) | (lo >> (64 - (3 * 8))) : hi; } }
    /* 0086cd7e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cd82: psrldq xmm2, 0xd */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (13 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 13 ? (lo >> (13 * 8)) | (hi << (64 - (13 * 8))) : lo; xmm[2].q[1] = hi >> (13 * 8); } }
    /* 0086cd87: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cd8b: pslldq xmm0, 3 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (3 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (3 * 8); xmm[0].q[1] = 3 ? (hi << (3 * 8)) | (lo >> (64 - (3 * 8))) : hi; } }
    /* 0086cd90: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cd94: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cd98: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cd9d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cda0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cda3: jge 0x86cd60 */ if ((fS==fO)) goto L_0086cd60;
L_0086cda5:; BB(0x0086cda5);
    /* 0086cda5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cdb0:; BB(0x0086cdb0);
    /* 0086cdb0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cdb3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cdb8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cdbd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cdc0: psrldq xmm1, 0xe */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (14 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 14 ? (lo >> (14 * 8)) | (hi << (64 - (14 * 8))) : lo; xmm[1].q[1] = hi >> (14 * 8); } }
    /* 0086cdc5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cdc9: pslldq xmm3, 2 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (2 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (2 * 8); xmm[3].q[1] = 2 ? (hi << (2 * 8)) | (lo >> (64 - (2 * 8))) : hi; } }
    /* 0086cdce: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cdd2: psrldq xmm2, 0xe */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (14 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 14 ? (lo >> (14 * 8)) | (hi << (64 - (14 * 8))) : lo; xmm[2].q[1] = hi >> (14 * 8); } }
    /* 0086cdd7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cddb: pslldq xmm0, 2 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (2 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (2 * 8); xmm[0].q[1] = 2 ? (hi << (2 * 8)) | (lo >> (64 - (2 * 8))) : hi; } }
    /* 0086cde0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cde4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cde8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cded: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cdf0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cdf3: jge 0x86cdb0 */ if ((fS==fO)) goto L_0086cdb0;
L_0086cdf5:; BB(0x0086cdf5);
    /* 0086cdf5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ce00:; BB(0x0086ce00);
    /* 0086ce00: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ce03: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ce08: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086ce0d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ce10: psrldq xmm1, 0xf */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (15 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 15 ? (lo >> (15 * 8)) | (hi << (64 - (15 * 8))) : lo; xmm[1].q[1] = hi >> (15 * 8); } }
    /* 0086ce15: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ce19: pslldq xmm3, 1 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (1 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (1 * 8); xmm[3].q[1] = 1 ? (hi << (1 * 8)) | (lo >> (64 - (1 * 8))) : hi; } }
    /* 0086ce1e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086ce22: psrldq xmm2, 0xf */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (15 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 15 ? (lo >> (15 * 8)) | (hi << (64 - (15 * 8))) : lo; xmm[2].q[1] = hi >> (15 * 8); } }
    /* 0086ce27: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086ce2b: pslldq xmm0, 1 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (1 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (1 * 8); xmm[0].q[1] = 1 ? (hi << (1 * 8)) | (lo >> (64 - (1 * 8))) : hi; } }
    /* 0086ce30: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ce34: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ce38: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ce3d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ce40: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ce43: jge 0x86ce00 */ if ((fS==fO)) goto L_0086ce00;
L_0086ce45:; BB(0x0086ce45);
    /* 0086ce45: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ce47: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ce49: mov eax, esi */ r_eax = r_esi;
    /* 0086ce4b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086ce4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ce4e: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086ce4e, "jump table entry is not a known target"); } }
L_0086ce60:; BB(0x0086ce60);
    /* 0086ce60: add esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ce66: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ce6c: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ce72: movdqu xmm0, xmmword ptr [esi - 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff80u), 16); xmm[0] = s; }
    /* 0086ce77: movdqu xmm1, xmmword ptr [esi - 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff90u), 16); xmm[1] = s; }
    /* 0086ce7c: movdqu xmm2, xmmword ptr [esi - 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffa0u), 16); xmm[2] = s; }
    /* 0086ce81: movdqu xmm3, xmmword ptr [esi - 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffb0u), 16); xmm[3] = s; }
    /* 0086ce86: movdqu xmm4, xmmword ptr [esi - 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffc0u), 16); xmm[4] = s; }
    /* 0086ce8b: movdqu xmm5, xmmword ptr [esi - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffd0u), 16); xmm[5] = s; }
    /* 0086ce90: movdqu xmm6, xmmword ptr [esi - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffe0u), 16); xmm[6] = s; }
    /* 0086ce95: movdqu xmm7, xmmword ptr [esi - 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xfffffff0u), 16); xmm[7] = s; }
    /* 0086ce9a: movntdq xmmword ptr [edx - 0x80], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff80u), &xmm[0], 16);
    /* 0086ce9f: movntdq xmmword ptr [edx - 0x70], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff90u), &xmm[1], 16);
    /* 0086cea4: movntdq xmmword ptr [edx - 0x60], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa0u), &xmm[2], 16);
    /* 0086cea9: movntdq xmmword ptr [edx - 0x50], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb0u), &xmm[3], 16);
    /* 0086ceae: movntdq xmmword ptr [edx - 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc0u), &xmm[4], 16);
    /* 0086ceb3: movntdq xmmword ptr [edx - 0x30], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd0u), &xmm[5], 16);
    /* 0086ceb8: movntdq xmmword ptr [edx - 0x20], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe0u), &xmm[6], 16);
    /* 0086cebd: movntdq xmmword ptr [edx - 0x10], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xfffffff0u), &xmm[7], 16);
    /* 0086cec2: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cec8: jge 0x86ce60 */ if ((fS==fO)) goto L_0086ce60;
L_0086ceca:; BB(0x0086ceca);
    /* 0086ceca: mov eax, ecx */ r_eax = r_ecx;
    /* 0086cecc: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cecf: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086ced2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ced4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ced6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ced8: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cedb: sfence  */ ;
    /* 0086cede: jmp dword ptr [eax*4 + 0x86d1b0] */ { u32 t = R32((u32)(r_eax*4+0x86d1b0u)); switch (t) { case 0x86d224u: goto L_0086d224; case 0x86d21au: goto L_0086d21a; case 0x86d210u: goto L_0086d210; case 0x86d206u: goto L_0086d206; case 0x86d1fcu: goto L_0086d1fc; case 0x86d1f2u: goto L_0086d1f2; case 0x86d1e8u: goto L_0086d1e8; case 0x86d1deu: goto L_0086d1de; case 0x86d1d4u: goto L_0086d1d4; default: UNSUP(0x0086cede, "jump table entry is not a known target"); } }
L_0086cee5:; BB(0x0086cee5);
    /* 0086cee5: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ceeb: jge 0x86cef0 */ if ((fS==fO)) goto L_0086cef0;
L_0086ceed:; BB(0x0086ceed);
    /* 0086ceed: jmp 0x86cf58 */ goto L_0086cf58;
L_0086cef0:; BB(0x0086cef0);
    /* 0086cef0: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cef6: movdqa xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086cefa: movdqa xmm1, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[1] = s; }
    /* 0086ceff: movdqa xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 0086cf03: movdqa xmmword ptr [edx + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[1], 16);
    /* 0086cf08: movdqa xmm2, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[2] = s; }
    /* 0086cf0d: movdqa xmm3, xmmword ptr [esi + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x30u), 16); xmm[3] = s; }
    /* 0086cf12: movdqa xmmword ptr [edx + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x20u), &xmm[2], 16);
    /* 0086cf17: movdqa xmmword ptr [edx + 0x30], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x30u), &xmm[3], 16);
    /* 0086cf1c: movdqa xmm4, xmmword ptr [esi + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x40u), 16); xmm[4] = s; }
    /* 0086cf21: movdqa xmm5, xmmword ptr [esi + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x50u), 16); xmm[5] = s; }
    /* 0086cf26: movdqa xmmword ptr [edx + 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x40u), &xmm[4], 16);
    /* 0086cf2b: movdqa xmmword ptr [edx + 0x50], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x50u), &xmm[5], 16);
    /* 0086cf30: movdqa xmm6, xmmword ptr [esi + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x60u), 16); xmm[6] = s; }
    /* 0086cf35: movdqa xmm7, xmmword ptr [esi + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x70u), 16); xmm[7] = s; }
    /* 0086cf3a: add esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cf40: movdqa xmmword ptr [edx + 0x60], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x60u), &xmm[6], 16);
    /* 0086cf45: movdqa xmmword ptr [edx + 0x70], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x70u), &xmm[7], 16);
    /* 0086cf4a: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cf50: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cf56: jge 0x86cef0 */ if ((fS==fO)) goto L_0086cef0;
L_0086cf58:; BB(0x0086cf58);
    /* 0086cf58: mov eax, ecx */ r_eax = r_ecx;
    /* 0086cf5a: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cf5d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086cf60: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cf62: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cf64: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cf66: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cf69: jmp dword ptr [eax*4 + 0x86cf70] */ { u32 t = R32((u32)(r_eax*4+0x86cf70u)); switch (t) { case 0x86cf70u: goto L_0086cf70; case 0x86d196u: goto L_0086d196; case 0x86d18cu: goto L_0086d18c; case 0x86d182u: goto L_0086d182; case 0x86d178u: goto L_0086d178; case 0x86d16eu: goto L_0086d16e; case 0x86d164u: goto L_0086d164; case 0x86d15au: goto L_0086d15a; case 0x86d150u: goto L_0086d150; case 0x86d146u: goto L_0086d146; default: UNSUP(0x0086cf69, "jump table entry is not a known target"); } }
L_0086cf70:; BB(0x0086cf70);
    /* 0086cf70: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 0086cf71: rol dword ptr [esi - 0x792e7400], 1 */ { u32 ad = (u32)(r_esi+0x86d18c00u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 0086cf77: add byte ptr [edx + 0x780086d1], al */ { u32 ad = (u32)(r_edx+0x780086d1u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086cf7d: rol dword ptr [esi - 0x792e9200], 1 */ { u32 ad = (u32)(r_esi+0x86d16e00u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 0086cf83: add byte ptr [ecx + edx*8 - 0x7a], ah */ { u32 ad = (u32)(r_ecx+r_edx*8+0xffffff86u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086cf87: add byte ptr [edx - 0x2f], bl */ { u32 ad = (u32)(r_edx+0xffffffd1u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086cf8a: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 0086cf8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086cf8d: rol dword ptr [esi - 0x792eba00], 1 */ { u32 ad = (u32)(r_esi+0x86d14600u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 0086cf93: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
L_0086cf94:; BB(0x0086cf94);
    /* 0086cf94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086cf95: rcr bh, 0xe0 */ UNSUP(0x0086cf95, "rcr bh, 0xe0");
    /* 0086cf96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0086cf98: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086cf9d: jne 0x86d2a6 */ if (!fZ) goto L_0086d2a6;
L_0086cfa3:; BB(0x0086cfa3);
    /* 0086cfa3: test edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086cfa9: jne 0x86cfbb */ if (!fZ) goto L_0086cfbb;
L_0086cfab:; BB(0x0086cfab);
    /* 0086cfab: mov eax, esi */ r_eax = r_esi;
    /* 0086cfad: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086cfb0: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086cfb3: je 0x86d070 */ if (fZ) goto L_0086d070;
L_0086cfb9:; BB(0x0086cfb9);
    /* 0086cfb9: jmp 0x86cfd3 */ goto L_0086cfd3;
L_0086cfbb:; BB(0x0086cfbb);
    /* 0086cfbb: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cfbe: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086cfc0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086cfc2: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cfc5: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cfc8: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cfcb: jl 0x86d0dc */ if ((fS!=fO)) goto L_0086d0dc;
L_0086cfd1:; BB(0x0086cfd1);
    /* 0086cfd1: jmp 0x86cfab */ goto L_0086cfab;
L_0086cfd3:; BB(0x0086cfd3);
    /* 0086cfd3: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 0086cfd6: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086cfd9: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cfdc: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086cfde: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cfe1: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cfe4: movq mm1, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[1] = (long double)(i64)(r.q); }
    /* 0086cfe7: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086cfea: movd mm2, eax */ { u64 v = r_eax; fpr[2] = (long double)(i64)v; }
    /* 0086cfed: sub eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cff0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cff2: movd mm3, eax */ { u64 v = r_eax; fpr[3] = (long double)(i64)v; }
    /* 0086cff5: sub eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cff8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cffa: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cffd: jmp 0x86d000 */ goto L_0086d000;
L_0086d000:; BB(0x0086d000);
    /* 0086d000: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d003: movq mm4, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d007: movq mm5, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d00b: movq mm6, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d00f: movq mm7, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d013: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d016: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d019: movq mm1, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d01c: psllq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d01f: por mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d022: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086d025: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d028: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d02b: movq mm1, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d02e: psllq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d031: por mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d034: movq qword ptr [edx + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086d038: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d03b: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d03e: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d041: psllq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d044: por mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d047: movq qword ptr [edx + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086d04b: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d04e: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d051: movq mm1, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d054: psllq mm7, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d057: por mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d05a: movq qword ptr [edx + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086d05e: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d061: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d064: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d067: jge 0x86d000 */ if ((fS==fO)) goto L_0086d000;
L_0086d069:; BB(0x0086d069);
    /* 0086d069: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d06b: jmp 0x86d0dc */ goto L_0086d0dc;
L_0086d070:; BB(0x0086d070);
    /* 0086d070: mov eax, dword ptr [0xae7f08] */ r_eax = R32((u32)(0xae7f08u));
    /* 0086d075: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086d077: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d07a: cmovle eax, ecx */ if ((fZ||fS!=fO)) { r_eax = r_ecx; }
    /* 0086d07d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d07f: jg 0x86d0f0 */ if ((!fZ&&fS==fO)) goto L_0086d0f0;
L_0086d081:; BB(0x0086d081);
    /* 0086d081: jmp 0x86d090 */ goto L_0086d090;
L_0086d090:; BB(0x0086d090);
    /* 0086d090: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d093: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d096: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086d099: movq mm1, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 0086d09d: movq qword ptr [edx + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086d0a1: movq mm2, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 0086d0a5: movq qword ptr [edx + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086d0a9: movq mm3, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[3] = (long double)(i64)(r.q); }
    /* 0086d0ad: movq qword ptr [edx + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086d0b1: movq mm4, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d0b5: movq qword ptr [edx + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_edx+0x20u), r.q); }
    /* 0086d0b9: movq mm5, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d0bd: movq qword ptr [edx + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_edx+0x28u), r.q); }
    /* 0086d0c1: movq mm6, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d0c5: movq qword ptr [edx + 0x30], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_edx+0x30u), r.q); }
    /* 0086d0c9: movq mm7, qword ptr [esi + 0x38] */ { MM64 r; r.q = R64((u32)(r_esi+0x38u)); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d0cd: movq qword ptr [edx + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_edx+0x38u), r.q); }
    /* 0086d0d1: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d0d4: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d0d7: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d0da: jge 0x86d090 */ if ((fS==fO)) goto L_0086d090;
L_0086d0dc:; BB(0x0086d0dc);
    /* 0086d0dc: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086d0de: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d0e0: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086d0e2: mov eax, esi */ r_eax = r_esi;
    /* 0086d0e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d0e5: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086d0e5, "jump table entry is not a known target"); } }
L_0086d0f0:; BB(0x0086d0f0);
    /* 0086d0f0: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d0f3: prefetchnta byte ptr [edx + 0x40] */ ;
    /* 0086d0f7: prefetchnta byte ptr [edx + 0x60] */ ;
    /* 0086d0fb: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d0fe: movntq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086d101: movq mm1, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 0086d105: movntq qword ptr [edx + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086d109: movq mm2, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 0086d10d: movntq qword ptr [edx + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086d111: movq mm3, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[3] = (long double)(i64)(r.q); }
    /* 0086d115: movntq qword ptr [edx + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086d119: movq mm4, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d11d: movntq qword ptr [edx + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_edx+0x20u), r.q); }
    /* 0086d121: movq mm5, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d125: movntq qword ptr [edx + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_edx+0x28u), r.q); }
    /* 0086d129: movq mm6, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d12d: movntq qword ptr [edx + 0x30], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_edx+0x30u), r.q); }
    /* 0086d131: movq mm7, qword ptr [esi + 0x38] */ { MM64 r; r.q = R64((u32)(r_esi+0x38u)); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d135: movntq qword ptr [edx + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_edx+0x38u), r.q); }
    /* 0086d139: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d13c: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d13f: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d142: jge 0x86d0f0 */ if ((fS==fO)) goto L_0086d0f0;
L_0086d144:; BB(0x0086d144);
    /* 0086d144: jmp 0x86d0dc */ goto L_0086d0dc;
L_0086d146:; BB(0x0086d146);
    /* 0086d146: movdqa xmm7, xmmword ptr [esi - 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff80u), 16); xmm[7] = s; }
    /* 0086d14b: movdqa xmmword ptr [edx - 0x80], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff80u), &xmm[7], 16);
L_0086d150:; BB(0x0086d150);
    /* 0086d150: movdqa xmm6, xmmword ptr [esi - 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff90u), 16); xmm[6] = s; }
    /* 0086d155: movdqa xmmword ptr [edx - 0x70], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff90u), &xmm[6], 16);
L_0086d15a:; BB(0x0086d15a);
    /* 0086d15a: movdqa xmm5, xmmword ptr [esi - 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffa0u), 16); xmm[5] = s; }
    /* 0086d15f: movdqa xmmword ptr [edx - 0x60], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa0u), &xmm[5], 16);
L_0086d164:; BB(0x0086d164);
    /* 0086d164: movdqa xmm4, xmmword ptr [esi - 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffb0u), 16); xmm[4] = s; }
    /* 0086d169: movdqa xmmword ptr [edx - 0x50], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb0u), &xmm[4], 16);
L_0086d16e:; BB(0x0086d16e);
    /* 0086d16e: movdqa xmm3, xmmword ptr [esi - 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffc0u), 16); xmm[3] = s; }
    /* 0086d173: movdqa xmmword ptr [edx - 0x40], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc0u), &xmm[3], 16);
L_0086d178:; BB(0x0086d178);
    /* 0086d178: movdqa xmm2, xmmword ptr [esi - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffd0u), 16); xmm[2] = s; }
    /* 0086d17d: movdqa xmmword ptr [edx - 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd0u), &xmm[2], 16);
L_0086d182:; BB(0x0086d182);
    /* 0086d182: movdqa xmm1, xmmword ptr [esi - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffe0u), 16); xmm[1] = s; }
    /* 0086d187: movdqa xmmword ptr [edx - 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe0u), &xmm[1], 16);
L_0086d18c:; BB(0x0086d18c);
    /* 0086d18c: movdqa xmm0, xmmword ptr [esi - 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xfffffff0u), 16); xmm[0] = s; }
    /* 0086d191: movdqa xmmword ptr [edx - 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xfffffff0u), &xmm[0], 16);
L_0086d196:; BB(0x0086d196);
    /* 0086d196: mov eax, esi */ r_eax = r_esi;
    /* 0086d198: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d199: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086d19b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086d19d: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086d19d, "jump table entry is not a known target"); } }
L_0086d1d4:; BB(0x0086d1d4);
    /* 0086d1d4: movdqu xmm7, xmmword ptr [esi - 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff80u), 16); xmm[7] = s; }
    /* 0086d1d9: movdqa xmmword ptr [edx - 0x80], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff80u), &xmm[7], 16);
L_0086d1de:; BB(0x0086d1de);
    /* 0086d1de: movdqu xmm6, xmmword ptr [esi - 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff90u), 16); xmm[6] = s; }
    /* 0086d1e3: movdqa xmmword ptr [edx - 0x70], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff90u), &xmm[6], 16);
L_0086d1e8:; BB(0x0086d1e8);
    /* 0086d1e8: movdqu xmm5, xmmword ptr [esi - 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffa0u), 16); xmm[5] = s; }
    /* 0086d1ed: movdqa xmmword ptr [edx - 0x60], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa0u), &xmm[5], 16);
L_0086d1f2:; BB(0x0086d1f2);
    /* 0086d1f2: movdqu xmm4, xmmword ptr [esi - 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffb0u), 16); xmm[4] = s; }
    /* 0086d1f7: movdqa xmmword ptr [edx - 0x50], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb0u), &xmm[4], 16);
L_0086d1fc:; BB(0x0086d1fc);
    /* 0086d1fc: movdqu xmm3, xmmword ptr [esi - 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffc0u), 16); xmm[3] = s; }
    /* 0086d201: movdqa xmmword ptr [edx - 0x40], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc0u), &xmm[3], 16);
L_0086d206:; BB(0x0086d206);
    /* 0086d206: movdqu xmm2, xmmword ptr [esi - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffd0u), 16); xmm[2] = s; }
    /* 0086d20b: movdqa xmmword ptr [edx - 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd0u), &xmm[2], 16);
L_0086d210:; BB(0x0086d210);
    /* 0086d210: movdqu xmm1, xmmword ptr [esi - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffe0u), 16); xmm[1] = s; }
    /* 0086d215: movdqa xmmword ptr [edx - 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe0u), &xmm[1], 16);
L_0086d21a:; BB(0x0086d21a);
    /* 0086d21a: movdqu xmm0, xmmword ptr [esi - 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xfffffff0u), 16); xmm[0] = s; }
    /* 0086d21f: movdqa xmmword ptr [edx - 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xfffffff0u), &xmm[0], 16);
L_0086d224:; BB(0x0086d224);
    /* 0086d224: mov eax, esi */ r_eax = r_esi;
    /* 0086d226: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d227: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086d229: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086d22b: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086d22b, "jump table entry is not a known target"); } }
L_0086d232:; BB(0x0086d232);
    /* 0086d232: mov eax, edx */ r_eax = r_edx;
    /* 0086d234: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086d237: jmp dword ptr [eax + 0x86d240] */ { u32 t = R32((u32)(r_eax+0x86d240u)); jmp_ind(t); return; }
L_0086d280:; BB(0x0086d280);
    /* 0086d280: cmp dword ptr [0xa24e34], -1 */ {  u32 a = R32((u32)(0xa24e34u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086d287: jne 0x86d2a6 */ if (!fZ) goto L_0086d2a6;
L_0086d289:; BB(0x0086d289);
    /* 0086d289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086d28b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0086d28d: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086d292: jne 0x86d2a6 */ if (!fZ) goto L_0086d2a6;
L_0086d294:; BB(0x0086d294);
    /* 0086d294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086d295: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d296: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d297: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d298: call 0x86d720 */ r_esp -= 4; W32(r_esp, 0x86d29du); f_0086d720();
    /* 0086d29d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d29e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086d29f: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0086d2a0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086d2a1: jmp 0x86c8c3 */ goto L_0086c8c3;
L_0086d2a6:; BB(0x0086d2a6);
    /* 0086d2a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d2a7: cld  */ rt_df = 0;
    /* 0086d2a8: mov edi, edx */ r_edi = r_edx;
    /* 0086d2aa: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086d2ac: jb 0x86d2b8 */ if (fC) goto L_0086d2b8;
L_0086d2ae:; BB(0x0086d2ae);
    /* 0086d2ae: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086d2b0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086d2b2: jae 0x86d2c1 */ if (!fC) goto L_0086d2c1;
L_0086d2b4:; BB(0x0086d2b4);
    /* 0086d2b4: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 0086d2b6: jmp 0x86d2c1 */ goto L_0086d2c1;
L_0086d2b8:; BB(0x0086d2b8);
    /* 0086d2b8: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086d2ba: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086d2bc: jae 0x86d2c0 */ if (!fC) goto L_0086d2c0;
L_0086d2be:; BB(0x0086d2be);
    /* 0086d2be: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
L_0086d2c0:; BB(0x0086d2c0);
    /* 0086d2c0: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
L_0086d2c1:; BB(0x0086d2c1);
    /* 0086d2c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086d2c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d2c3: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086d2c4:; BB(0x0086d2c4);
    /* 0086d2c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d2c5: mov esi, eax */ r_esi = r_eax;
    /* 0086d2c7: lea edx, [ecx + edx] */ r_edx = (u32)(r_ecx+r_edx);
    /* 0086d2ca: lea esi, [ecx + esi] */ r_esi = (u32)(r_ecx+r_esi);
    /* 0086d2cd: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d2d3: jne 0x86d2f6 */ if (!fZ) goto L_0086d2f6;
L_0086d2d5:; BB(0x0086d2d5);
    /* 0086d2d5: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d2d8: jge 0x86d3b2 */ if ((fS==fO)) goto L_0086d3b2;
L_0086d2de:; BB(0x0086d2de);
    /* 0086d2de: mov eax, esi */ r_eax = r_esi;
    /* 0086d2e0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d2e2: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086d2e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d2e5: jmp dword ptr [ecx*4 + 0x86d610] */ { u32 t = R32((u32)(r_ecx*4+0x86d610u)); switch (t) { case 0x86d4beu: goto L_0086d4be; case 0x86d523u: goto L_0086d523; case 0x86d58du: goto L_0086d58d; case 0x86d5f8u: goto L_0086d5f8; case 0x86d4bau: goto L_0086d4ba; case 0x86d51du: goto L_0086d51d; case 0x86d587u: goto L_0086d587; case 0x86d5f2u: goto L_0086d5f2; case 0x86d4b4u: goto L_0086d4b4; case 0x86d517u: goto L_0086d517; case 0x86d581u: goto L_0086d581; case 0x86d5ecu: goto L_0086d5ec; case 0x86d4aeu: goto L_0086d4ae; case 0x86d511u: goto L_0086d511; case 0x86d57bu: goto L_0086d57b; case 0x86d5e6u: goto L_0086d5e6; case 0x86d4a8u: goto L_0086d4a8; case 0x86d50bu: goto L_0086d50b; case 0x86d575u: goto L_0086d575; case 0x86d5e0u: goto L_0086d5e0; case 0x86d4a2u: goto L_0086d4a2; case 0x86d505u: goto L_0086d505; case 0x86d56fu: goto L_0086d56f; case 0x86d5dau: goto L_0086d5da; case 0x86d49cu: goto L_0086d49c; case 0x86d4ffu: goto L_0086d4ff; case 0x86d569u: goto L_0086d569; case 0x86d5d4u: goto L_0086d5d4; case 0x86d496u: goto L_0086d496; case 0x86d4f9u: goto L_0086d4f9; case 0x86d563u: goto L_0086d563; case 0x86d5ceu: goto L_0086d5ce; case 0x86d490u: goto L_0086d490; case 0x86d4f3u: goto L_0086d4f3; case 0x86d55du: goto L_0086d55d; case 0x86d5c8u: goto L_0086d5c8; case 0x86d48au: goto L_0086d48a; case 0x86d4edu: goto L_0086d4ed; case 0x86d557u: goto L_0086d557; case 0x86d5c2u: goto L_0086d5c2; case 0x86d484u: goto L_0086d484; case 0x86d4e7u: goto L_0086d4e7; case 0x86d551u: goto L_0086d551; case 0x86d5bcu: goto L_0086d5bc; case 0x86d47eu: goto L_0086d47e; case 0x86d4e1u: goto L_0086d4e1; case 0x86d54bu: goto L_0086d54b; case 0x86d5b6u: goto L_0086d5b6; case 0x86d478u: goto L_0086d478; case 0x86d4dbu: goto L_0086d4db; case 0x86d545u: goto L_0086d545; case 0x86d5b0u: goto L_0086d5b0; case 0x86d472u: goto L_0086d472; case 0x86d4d5u: goto L_0086d4d5; case 0x86d53fu: goto L_0086d53f; case 0x86d5aau: goto L_0086d5aa; case 0x86d46cu: goto L_0086d46c; case 0x86d4cfu: goto L_0086d4cf; case 0x86d539u: goto L_0086d539; case 0x86d5a4u: goto L_0086d5a4; case 0x86d466u: goto L_0086d466; case 0x86d4c9u: goto L_0086d4c9; case 0x86d533u: goto L_0086d533; case 0x86d59eu: goto L_0086d59e; case 0x86d460u: goto L_0086d460; case 0x86d4c3u: goto L_0086d4c3; case 0x86d52du: goto L_0086d52d; case 0x86d598u: goto L_0086d598; default: UNSUP(0x0086d2e5, "jump table entry is not a known target"); } }
L_0086d2ec:; BB(0x0086d2ec);
    /* 0086d2ec: test edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d2f2: jne 0x86d32a */ if (!fZ) goto L_0086d32a;
L_0086d2f4:; BB(0x0086d2f4);
    /* 0086d2f4: jmp 0x86d361 */ goto L_0086d361;
L_0086d2f6:; BB(0x0086d2f6);
    /* 0086d2f6: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d2f9: jle 0x86d2d5 */ if ((fZ||fS!=fO)) goto L_0086d2d5;
L_0086d2fb:; BB(0x0086d2fb);
    /* 0086d2fb: test edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d301: je 0x86d319 */ if (fZ) goto L_0086d319;
L_0086d303:; BB(0x0086d303);
    /* 0086d303: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086d306: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d309: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d30c: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 0086d30f: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0086d311: test edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d317: je 0x86d2d5 */ if (fZ) goto L_0086d2d5;
L_0086d319:; BB(0x0086d319);
    /* 0086d319: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d31c: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d31f: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086d322: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0086d325: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0086d328: jmp 0x86d2d5 */ goto L_0086d2d5;
L_0086d32a:; BB(0x0086d32a);
    /* 0086d32a: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d32d: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086d330: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d333: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086d335: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086d337: test edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d33d: je 0x86d361 */ if (fZ) goto L_0086d361;
L_0086d33f:; BB(0x0086d33f);
    /* 0086d33f: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d342: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086d345: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d348: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086d34a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086d34c: test edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d352: je 0x86d361 */ if (fZ) goto L_0086d361;
L_0086d354:; BB(0x0086d354);
    /* 0086d354: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d357: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086d35a: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d35d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086d35f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0086d361:; BB(0x0086d361);
    /* 0086d361: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d364: jl 0x86d3a4 */ if ((fS!=fO)) goto L_0086d3a4;
L_0086d366:; BB(0x0086d366);
    /* 0086d366: jmp 0x86d370 */ goto L_0086d370;
L_0086d370:; BB(0x0086d370);
    /* 0086d370: sub esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086d373: sub edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d376: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d379: movdqu xmm3, xmmword ptr [esi + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x30u), 16); xmm[3] = s; }
    /* 0086d37e: movdqa xmmword ptr [edx + 0x30], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x30u), &xmm[3], 16);
    /* 0086d383: movdqu xmm2, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[2] = s; }
    /* 0086d388: movdqa xmmword ptr [edx + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x20u), &xmm[2], 16);
    /* 0086d38d: movdqu xmm1, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[1] = s; }
    /* 0086d392: movdqa xmmword ptr [edx + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[1], 16);
    /* 0086d397: movdqu xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086d39b: movdqa xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 0086d39f: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d3a2: jge 0x86d370 */ if ((fS==fO)) goto L_0086d370;
L_0086d3a4:; BB(0x0086d3a4);
    /* 0086d3a4: mov eax, esi */ r_eax = r_esi;
    /* 0086d3a6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d3a8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086d3aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d3ab: jmp dword ptr [ecx*4 + 0x86d610] */ { u32 t = R32((u32)(r_ecx*4+0x86d610u)); switch (t) { case 0x86d4beu: goto L_0086d4be; case 0x86d523u: goto L_0086d523; case 0x86d58du: goto L_0086d58d; case 0x86d5f8u: goto L_0086d5f8; case 0x86d4bau: goto L_0086d4ba; case 0x86d51du: goto L_0086d51d; case 0x86d587u: goto L_0086d587; case 0x86d5f2u: goto L_0086d5f2; case 0x86d4b4u: goto L_0086d4b4; case 0x86d517u: goto L_0086d517; case 0x86d581u: goto L_0086d581; case 0x86d5ecu: goto L_0086d5ec; case 0x86d4aeu: goto L_0086d4ae; case 0x86d511u: goto L_0086d511; case 0x86d57bu: goto L_0086d57b; case 0x86d5e6u: goto L_0086d5e6; case 0x86d4a8u: goto L_0086d4a8; case 0x86d50bu: goto L_0086d50b; case 0x86d575u: goto L_0086d575; case 0x86d5e0u: goto L_0086d5e0; case 0x86d4a2u: goto L_0086d4a2; case 0x86d505u: goto L_0086d505; case 0x86d56fu: goto L_0086d56f; case 0x86d5dau: goto L_0086d5da; case 0x86d49cu: goto L_0086d49c; case 0x86d4ffu: goto L_0086d4ff; case 0x86d569u: goto L_0086d569; case 0x86d5d4u: goto L_0086d5d4; case 0x86d496u: goto L_0086d496; case 0x86d4f9u: goto L_0086d4f9; case 0x86d563u: goto L_0086d563; case 0x86d5ceu: goto L_0086d5ce; case 0x86d490u: goto L_0086d490; case 0x86d4f3u: goto L_0086d4f3; case 0x86d55du: goto L_0086d55d; case 0x86d5c8u: goto L_0086d5c8; case 0x86d48au: goto L_0086d48a; case 0x86d4edu: goto L_0086d4ed; case 0x86d557u: goto L_0086d557; case 0x86d5c2u: goto L_0086d5c2; case 0x86d484u: goto L_0086d484; case 0x86d4e7u: goto L_0086d4e7; case 0x86d551u: goto L_0086d551; case 0x86d5bcu: goto L_0086d5bc; case 0x86d47eu: goto L_0086d47e; case 0x86d4e1u: goto L_0086d4e1; case 0x86d54bu: goto L_0086d54b; case 0x86d5b6u: goto L_0086d5b6; case 0x86d478u: goto L_0086d478; case 0x86d4dbu: goto L_0086d4db; case 0x86d545u: goto L_0086d545; case 0x86d5b0u: goto L_0086d5b0; case 0x86d472u: goto L_0086d472; case 0x86d4d5u: goto L_0086d4d5; case 0x86d53fu: goto L_0086d53f; case 0x86d5aau: goto L_0086d5aa; case 0x86d46cu: goto L_0086d46c; case 0x86d4cfu: goto L_0086d4cf; case 0x86d539u: goto L_0086d539; case 0x86d5a4u: goto L_0086d5a4; case 0x86d466u: goto L_0086d466; case 0x86d4c9u: goto L_0086d4c9; case 0x86d533u: goto L_0086d533; case 0x86d59eu: goto L_0086d59e; case 0x86d460u: goto L_0086d460; case 0x86d4c3u: goto L_0086d4c3; case 0x86d52du: goto L_0086d52d; case 0x86d598u: goto L_0086d598; default: UNSUP(0x0086d3ab, "jump table entry is not a known target"); } }
L_0086d3b2:; BB(0x0086d3b2);
    /* 0086d3b2: cmp dword ptr [0xa24e34], 2 */ {  u32 a = R32((u32)(0xa24e34u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d3b9: je 0x86d2ec */ if (fZ) goto L_0086d2ec;
L_0086d3bf:; BB(0x0086d3bf);
    /* 0086d3bf: cmp dword ptr [0xa24e34], -1 */ {  u32 a = R32((u32)(0xa24e34u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086d3c6: jne 0x86d3d7 */ if (!fZ) goto L_0086d3d7;
L_0086d3c8:; BB(0x0086d3c8);
    /* 0086d3c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086d3c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d3ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086d3cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d3cc: call 0x86d720 */ r_esp -= 4; W32(r_esp, 0x86d3d1u); f_0086d720();
    /* 0086d3d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d3d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086d3d3: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0086d3d4: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086d3d5: jmp 0x86d3b2 */ goto L_0086d3b2;
L_0086d3d7:; BB(0x0086d3d7);
    /* 0086d3d7: jmp 0x86d3e0 */ goto L_0086d3e0;
L_0086d3e0:; BB(0x0086d3e0);
    /* 0086d3e0: sub esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086d3e3: sub edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d3e6: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0086d3e9: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0086d3ec: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0086d3ef: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0086d3f2: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0086d3f5: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0086d3f8: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0086d3fb: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0086d3fe: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0086d401: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0086d404: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0086d407: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0086d40a: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0086d40d: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0086d410: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0086d413: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0086d416: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0086d419: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0086d41c: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0086d41f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0086d422: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0086d425: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0086d428: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0086d42b: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0086d42e: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0086d431: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0086d434: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0086d437: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0086d43a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0086d43d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0086d440: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086d442: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086d444: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d447: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d44a: jge 0x86d3e0 */ if ((fS==fO)) goto L_0086d3e0;
L_0086d44c:; BB(0x0086d44c);
    /* 0086d44c: mov eax, esi */ r_eax = r_esi;
    /* 0086d44e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086d450: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086d452: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d453: jmp dword ptr [ecx*4 + 0x86d610] */ { u32 t = R32((u32)(r_ecx*4+0x86d610u)); switch (t) { case 0x86d4beu: goto L_0086d4be; case 0x86d523u: goto L_0086d523; case 0x86d58du: goto L_0086d58d; case 0x86d5f8u: goto L_0086d5f8; case 0x86d4bau: goto L_0086d4ba; case 0x86d51du: goto L_0086d51d; case 0x86d587u: goto L_0086d587; case 0x86d5f2u: goto L_0086d5f2; case 0x86d4b4u: goto L_0086d4b4; case 0x86d517u: goto L_0086d517; case 0x86d581u: goto L_0086d581; case 0x86d5ecu: goto L_0086d5ec; case 0x86d4aeu: goto L_0086d4ae; case 0x86d511u: goto L_0086d511; case 0x86d57bu: goto L_0086d57b; case 0x86d5e6u: goto L_0086d5e6; case 0x86d4a8u: goto L_0086d4a8; case 0x86d50bu: goto L_0086d50b; case 0x86d575u: goto L_0086d575; case 0x86d5e0u: goto L_0086d5e0; case 0x86d4a2u: goto L_0086d4a2; case 0x86d505u: goto L_0086d505; case 0x86d56fu: goto L_0086d56f; case 0x86d5dau: goto L_0086d5da; case 0x86d49cu: goto L_0086d49c; case 0x86d4ffu: goto L_0086d4ff; case 0x86d569u: goto L_0086d569; case 0x86d5d4u: goto L_0086d5d4; case 0x86d496u: goto L_0086d496; case 0x86d4f9u: goto L_0086d4f9; case 0x86d563u: goto L_0086d563; case 0x86d5ceu: goto L_0086d5ce; case 0x86d490u: goto L_0086d490; case 0x86d4f3u: goto L_0086d4f3; case 0x86d55du: goto L_0086d55d; case 0x86d5c8u: goto L_0086d5c8; case 0x86d48au: goto L_0086d48a; case 0x86d4edu: goto L_0086d4ed; case 0x86d557u: goto L_0086d557; case 0x86d5c2u: goto L_0086d5c2; case 0x86d484u: goto L_0086d484; case 0x86d4e7u: goto L_0086d4e7; case 0x86d551u: goto L_0086d551; case 0x86d5bcu: goto L_0086d5bc; case 0x86d47eu: goto L_0086d47e; case 0x86d4e1u: goto L_0086d4e1; case 0x86d54bu: goto L_0086d54b; case 0x86d5b6u: goto L_0086d5b6; case 0x86d478u: goto L_0086d478; case 0x86d4dbu: goto L_0086d4db; case 0x86d545u: goto L_0086d545; case 0x86d5b0u: goto L_0086d5b0; case 0x86d472u: goto L_0086d472; case 0x86d4d5u: goto L_0086d4d5; case 0x86d53fu: goto L_0086d53f; case 0x86d5aau: goto L_0086d5aa; case 0x86d46cu: goto L_0086d46c; case 0x86d4cfu: goto L_0086d4cf; case 0x86d539u: goto L_0086d539; case 0x86d5a4u: goto L_0086d5a4; case 0x86d466u: goto L_0086d466; case 0x86d4c9u: goto L_0086d4c9; case 0x86d533u: goto L_0086d533; case 0x86d59eu: goto L_0086d59e; case 0x86d460u: goto L_0086d460; case 0x86d4c3u: goto L_0086d4c3; case 0x86d52du: goto L_0086d52d; case 0x86d598u: goto L_0086d598; default: UNSUP(0x0086d453, "jump table entry is not a known target"); } }
L_0086d460:; BB(0x0086d460);
    /* 0086d460: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0086d463: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
L_0086d466:; BB(0x0086d466);
    /* 0086d466: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0086d469: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
L_0086d46c:; BB(0x0086d46c);
    /* 0086d46c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0086d46f: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
L_0086d472:; BB(0x0086d472);
    /* 0086d472: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0086d475: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
L_0086d478:; BB(0x0086d478);
    /* 0086d478: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0086d47b: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
L_0086d47e:; BB(0x0086d47e);
    /* 0086d47e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0086d481: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
L_0086d484:; BB(0x0086d484);
    /* 0086d484: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0086d487: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
L_0086d48a:; BB(0x0086d48a);
    /* 0086d48a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0086d48d: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
L_0086d490:; BB(0x0086d490);
    /* 0086d490: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0086d493: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
L_0086d496:; BB(0x0086d496);
    /* 0086d496: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0086d499: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
L_0086d49c:; BB(0x0086d49c);
    /* 0086d49c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0086d49f: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
L_0086d4a2:; BB(0x0086d4a2);
    /* 0086d4a2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0086d4a5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
L_0086d4a8:; BB(0x0086d4a8);
    /* 0086d4a8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0086d4ab: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
L_0086d4ae:; BB(0x0086d4ae);
    /* 0086d4ae: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0086d4b1: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_0086d4b4:; BB(0x0086d4b4);
    /* 0086d4b4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0086d4b7: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_0086d4ba:; BB(0x0086d4ba);
    /* 0086d4ba: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086d4bc: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_0086d4be:; BB(0x0086d4be);
    /* 0086d4be: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086d4c2: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086d4c3:; BB(0x0086d4c3);
    /* 0086d4c3: mov ecx, dword ptr [eax + 0x3d] */ r_ecx = R32((u32)(r_eax+0x3du));
    /* 0086d4c6: mov dword ptr [edx + 0x3d], ecx */ W32((u32)(r_edx+0x3du), r_ecx);
L_0086d4c9:; BB(0x0086d4c9);
    /* 0086d4c9: mov ecx, dword ptr [eax + 0x39] */ r_ecx = R32((u32)(r_eax+0x39u));
    /* 0086d4cc: mov dword ptr [edx + 0x39], ecx */ W32((u32)(r_edx+0x39u), r_ecx);
L_0086d4cf:; BB(0x0086d4cf);
    /* 0086d4cf: mov ecx, dword ptr [eax + 0x35] */ r_ecx = R32((u32)(r_eax+0x35u));
    /* 0086d4d2: mov dword ptr [edx + 0x35], ecx */ W32((u32)(r_edx+0x35u), r_ecx);
L_0086d4d5:; BB(0x0086d4d5);
    /* 0086d4d5: mov ecx, dword ptr [eax + 0x31] */ r_ecx = R32((u32)(r_eax+0x31u));
    /* 0086d4d8: mov dword ptr [edx + 0x31], ecx */ W32((u32)(r_edx+0x31u), r_ecx);
L_0086d4db:; BB(0x0086d4db);
    /* 0086d4db: mov ecx, dword ptr [eax + 0x2d] */ r_ecx = R32((u32)(r_eax+0x2du));
    /* 0086d4de: mov dword ptr [edx + 0x2d], ecx */ W32((u32)(r_edx+0x2du), r_ecx);
L_0086d4e1:; BB(0x0086d4e1);
    /* 0086d4e1: mov ecx, dword ptr [eax + 0x29] */ r_ecx = R32((u32)(r_eax+0x29u));
    /* 0086d4e4: mov dword ptr [edx + 0x29], ecx */ W32((u32)(r_edx+0x29u), r_ecx);
L_0086d4e7:; BB(0x0086d4e7);
    /* 0086d4e7: mov ecx, dword ptr [eax + 0x25] */ r_ecx = R32((u32)(r_eax+0x25u));
    /* 0086d4ea: mov dword ptr [edx + 0x25], ecx */ W32((u32)(r_edx+0x25u), r_ecx);
L_0086d4ed:; BB(0x0086d4ed);
    /* 0086d4ed: mov ecx, dword ptr [eax + 0x21] */ r_ecx = R32((u32)(r_eax+0x21u));
    /* 0086d4f0: mov dword ptr [edx + 0x21], ecx */ W32((u32)(r_edx+0x21u), r_ecx);
L_0086d4f3:; BB(0x0086d4f3);
    /* 0086d4f3: mov ecx, dword ptr [eax + 0x1d] */ r_ecx = R32((u32)(r_eax+0x1du));
    /* 0086d4f6: mov dword ptr [edx + 0x1d], ecx */ W32((u32)(r_edx+0x1du), r_ecx);
L_0086d4f9:; BB(0x0086d4f9);
    /* 0086d4f9: mov ecx, dword ptr [eax + 0x19] */ r_ecx = R32((u32)(r_eax+0x19u));
    /* 0086d4fc: mov dword ptr [edx + 0x19], ecx */ W32((u32)(r_edx+0x19u), r_ecx);
L_0086d4ff:; BB(0x0086d4ff);
    /* 0086d4ff: mov ecx, dword ptr [eax + 0x15] */ r_ecx = R32((u32)(r_eax+0x15u));
    /* 0086d502: mov dword ptr [edx + 0x15], ecx */ W32((u32)(r_edx+0x15u), r_ecx);
L_0086d505:; BB(0x0086d505);
    /* 0086d505: mov ecx, dword ptr [eax + 0x11] */ r_ecx = R32((u32)(r_eax+0x11u));
    /* 0086d508: mov dword ptr [edx + 0x11], ecx */ W32((u32)(r_edx+0x11u), r_ecx);
L_0086d50b:; BB(0x0086d50b);
    /* 0086d50b: mov ecx, dword ptr [eax + 0xd] */ r_ecx = R32((u32)(r_eax+0xdu));
    /* 0086d50e: mov dword ptr [edx + 0xd], ecx */ W32((u32)(r_edx+0xdu), r_ecx);
L_0086d511:; BB(0x0086d511);
    /* 0086d511: mov ecx, dword ptr [eax + 9] */ r_ecx = R32((u32)(r_eax+0x9u));
    /* 0086d514: mov dword ptr [edx + 9], ecx */ W32((u32)(r_edx+0x9u), r_ecx);
L_0086d517:; BB(0x0086d517);
    /* 0086d517: mov ecx, dword ptr [eax + 5] */ r_ecx = R32((u32)(r_eax+0x5u));
    /* 0086d51a: mov dword ptr [edx + 5], ecx */ W32((u32)(r_edx+0x5u), r_ecx);
L_0086d51d:; BB(0x0086d51d);
    /* 0086d51d: mov ecx, dword ptr [eax + 1] */ r_ecx = R32((u32)(r_eax+0x1u));
    /* 0086d520: mov dword ptr [edx + 1], ecx */ W32((u32)(r_edx+0x1u), r_ecx);
L_0086d523:; BB(0x0086d523);
    /* 0086d523: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0086d526: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0086d528: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086d52c: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086d52d:; BB(0x0086d52d);
    /* 0086d52d: mov ecx, dword ptr [eax + 0x3e] */ r_ecx = R32((u32)(r_eax+0x3eu));
    /* 0086d530: mov dword ptr [edx + 0x3e], ecx */ W32((u32)(r_edx+0x3eu), r_ecx);
L_0086d533:; BB(0x0086d533);
    /* 0086d533: mov ecx, dword ptr [eax + 0x3a] */ r_ecx = R32((u32)(r_eax+0x3au));
    /* 0086d536: mov dword ptr [edx + 0x3a], ecx */ W32((u32)(r_edx+0x3au), r_ecx);
L_0086d539:; BB(0x0086d539);
    /* 0086d539: mov ecx, dword ptr [eax + 0x36] */ r_ecx = R32((u32)(r_eax+0x36u));
    /* 0086d53c: mov dword ptr [edx + 0x36], ecx */ W32((u32)(r_edx+0x36u), r_ecx);
L_0086d53f:; BB(0x0086d53f);
    /* 0086d53f: mov ecx, dword ptr [eax + 0x32] */ r_ecx = R32((u32)(r_eax+0x32u));
    /* 0086d542: mov dword ptr [edx + 0x32], ecx */ W32((u32)(r_edx+0x32u), r_ecx);
L_0086d545:; BB(0x0086d545);
    /* 0086d545: mov ecx, dword ptr [eax + 0x2e] */ r_ecx = R32((u32)(r_eax+0x2eu));
    /* 0086d548: mov dword ptr [edx + 0x2e], ecx */ W32((u32)(r_edx+0x2eu), r_ecx);
L_0086d54b:; BB(0x0086d54b);
    /* 0086d54b: mov ecx, dword ptr [eax + 0x2a] */ r_ecx = R32((u32)(r_eax+0x2au));
    /* 0086d54e: mov dword ptr [edx + 0x2a], ecx */ W32((u32)(r_edx+0x2au), r_ecx);
L_0086d551:; BB(0x0086d551);
    /* 0086d551: mov ecx, dword ptr [eax + 0x26] */ r_ecx = R32((u32)(r_eax+0x26u));
    /* 0086d554: mov dword ptr [edx + 0x26], ecx */ W32((u32)(r_edx+0x26u), r_ecx);
L_0086d557:; BB(0x0086d557);
    /* 0086d557: mov ecx, dword ptr [eax + 0x22] */ r_ecx = R32((u32)(r_eax+0x22u));
    /* 0086d55a: mov dword ptr [edx + 0x22], ecx */ W32((u32)(r_edx+0x22u), r_ecx);
L_0086d55d:; BB(0x0086d55d);
    /* 0086d55d: mov ecx, dword ptr [eax + 0x1e] */ r_ecx = R32((u32)(r_eax+0x1eu));
    /* 0086d560: mov dword ptr [edx + 0x1e], ecx */ W32((u32)(r_edx+0x1eu), r_ecx);
L_0086d563:; BB(0x0086d563);
    /* 0086d563: mov ecx, dword ptr [eax + 0x1a] */ r_ecx = R32((u32)(r_eax+0x1au));
    /* 0086d566: mov dword ptr [edx + 0x1a], ecx */ W32((u32)(r_edx+0x1au), r_ecx);
L_0086d569:; BB(0x0086d569);
    /* 0086d569: mov ecx, dword ptr [eax + 0x16] */ r_ecx = R32((u32)(r_eax+0x16u));
    /* 0086d56c: mov dword ptr [edx + 0x16], ecx */ W32((u32)(r_edx+0x16u), r_ecx);
L_0086d56f:; BB(0x0086d56f);
    /* 0086d56f: mov ecx, dword ptr [eax + 0x12] */ r_ecx = R32((u32)(r_eax+0x12u));
    /* 0086d572: mov dword ptr [edx + 0x12], ecx */ W32((u32)(r_edx+0x12u), r_ecx);
L_0086d575:; BB(0x0086d575);
    /* 0086d575: mov ecx, dword ptr [eax + 0xe] */ r_ecx = R32((u32)(r_eax+0xeu));
    /* 0086d578: mov dword ptr [edx + 0xe], ecx */ W32((u32)(r_edx+0xeu), r_ecx);
L_0086d57b:; BB(0x0086d57b);
    /* 0086d57b: mov ecx, dword ptr [eax + 0xa] */ r_ecx = R32((u32)(r_eax+0xau));
    /* 0086d57e: mov dword ptr [edx + 0xa], ecx */ W32((u32)(r_edx+0xau), r_ecx);
L_0086d581:; BB(0x0086d581);
    /* 0086d581: mov ecx, dword ptr [eax + 6] */ r_ecx = R32((u32)(r_eax+0x6u));
    /* 0086d584: mov dword ptr [edx + 6], ecx */ W32((u32)(r_edx+0x6u), r_ecx);
L_0086d587:; BB(0x0086d587);
    /* 0086d587: mov ecx, dword ptr [eax + 2] */ r_ecx = R32((u32)(r_eax+0x2u));
    /* 0086d58a: mov dword ptr [edx + 2], ecx */ W32((u32)(r_edx+0x2u), r_ecx);
L_0086d58d:; BB(0x0086d58d);
    /* 0086d58d: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0086d590: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0086d593: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086d597: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
L_0086d598:; BB(0x0086d598);
    /* 0086d598: mov ecx, dword ptr [eax + 0x3f] */ r_ecx = R32((u32)(r_eax+0x3fu));
    /* 0086d59b: mov dword ptr [edx + 0x3f], ecx */ W32((u32)(r_edx+0x3fu), r_ecx);
L_0086d59e:; BB(0x0086d59e);
    /* 0086d59e: mov ecx, dword ptr [eax + 0x3b] */ r_ecx = R32((u32)(r_eax+0x3bu));
    /* 0086d5a1: mov dword ptr [edx + 0x3b], ecx */ W32((u32)(r_edx+0x3bu), r_ecx);
L_0086d5a4:; BB(0x0086d5a4);
    /* 0086d5a4: mov ecx, dword ptr [eax + 0x37] */ r_ecx = R32((u32)(r_eax+0x37u));
    /* 0086d5a7: mov dword ptr [edx + 0x37], ecx */ W32((u32)(r_edx+0x37u), r_ecx);
L_0086d5aa:; BB(0x0086d5aa);
    /* 0086d5aa: mov ecx, dword ptr [eax + 0x33] */ r_ecx = R32((u32)(r_eax+0x33u));
    /* 0086d5ad: mov dword ptr [edx + 0x33], ecx */ W32((u32)(r_edx+0x33u), r_ecx);
L_0086d5b0:; BB(0x0086d5b0);
    /* 0086d5b0: mov ecx, dword ptr [eax + 0x2f] */ r_ecx = R32((u32)(r_eax+0x2fu));
    /* 0086d5b3: mov dword ptr [edx + 0x2f], ecx */ W32((u32)(r_edx+0x2fu), r_ecx);
L_0086d5b6:; BB(0x0086d5b6);
    /* 0086d5b6: mov ecx, dword ptr [eax + 0x2b] */ r_ecx = R32((u32)(r_eax+0x2bu));
    /* 0086d5b9: mov dword ptr [edx + 0x2b], ecx */ W32((u32)(r_edx+0x2bu), r_ecx);
L_0086d5bc:; BB(0x0086d5bc);
    /* 0086d5bc: mov ecx, dword ptr [eax + 0x27] */ r_ecx = R32((u32)(r_eax+0x27u));
    /* 0086d5bf: mov dword ptr [edx + 0x27], ecx */ W32((u32)(r_edx+0x27u), r_ecx);
L_0086d5c2:; BB(0x0086d5c2);
    /* 0086d5c2: mov ecx, dword ptr [eax + 0x23] */ r_ecx = R32((u32)(r_eax+0x23u));
    /* 0086d5c5: mov dword ptr [edx + 0x23], ecx */ W32((u32)(r_edx+0x23u), r_ecx);
L_0086d5c8:; BB(0x0086d5c8);
    /* 0086d5c8: mov ecx, dword ptr [eax + 0x1f] */ r_ecx = R32((u32)(r_eax+0x1fu));
    /* 0086d5cb: mov dword ptr [edx + 0x1f], ecx */ W32((u32)(r_edx+0x1fu), r_ecx);
L_0086d5ce:; BB(0x0086d5ce);
    /* 0086d5ce: mov ecx, dword ptr [eax + 0x1b] */ r_ecx = R32((u32)(r_eax+0x1bu));
    /* 0086d5d1: mov dword ptr [edx + 0x1b], ecx */ W32((u32)(r_edx+0x1bu), r_ecx);
L_0086d5d4:; BB(0x0086d5d4);
    /* 0086d5d4: mov ecx, dword ptr [eax + 0x17] */ r_ecx = R32((u32)(r_eax+0x17u));
    /* 0086d5d7: mov dword ptr [edx + 0x17], ecx */ W32((u32)(r_edx+0x17u), r_ecx);
L_0086d5da:; BB(0x0086d5da);
    /* 0086d5da: mov ecx, dword ptr [eax + 0x13] */ r_ecx = R32((u32)(r_eax+0x13u));
    /* 0086d5dd: mov dword ptr [edx + 0x13], ecx */ W32((u32)(r_edx+0x13u), r_ecx);
L_0086d5e0:; BB(0x0086d5e0);
    /* 0086d5e0: mov ecx, dword ptr [eax + 0xf] */ r_ecx = R32((u32)(r_eax+0xfu));
    /* 0086d5e3: mov dword ptr [edx + 0xf], ecx */ W32((u32)(r_edx+0xfu), r_ecx);
L_0086d5e6:; BB(0x0086d5e6);
    /* 0086d5e6: mov ecx, dword ptr [eax + 0xb] */ r_ecx = R32((u32)(r_eax+0xbu));
    /* 0086d5e9: mov dword ptr [edx + 0xb], ecx */ W32((u32)(r_edx+0xbu), r_ecx);
L_0086d5ec:; BB(0x0086d5ec);
    /* 0086d5ec: mov ecx, dword ptr [eax + 7] */ r_ecx = R32((u32)(r_eax+0x7u));
    /* 0086d5ef: mov dword ptr [edx + 7], ecx */ W32((u32)(r_edx+0x7u), r_ecx);
L_0086d5f2:; BB(0x0086d5f2);
    /* 0086d5f2: mov ecx, dword ptr [eax + 3] */ r_ecx = R32((u32)(r_eax+0x3u));
    /* 0086d5f5: mov dword ptr [edx + 3], ecx */ W32((u32)(r_edx+0x3u), r_ecx);
L_0086d5f8:; BB(0x0086d5f8);
    /* 0086d5f8: movzx ecx, word ptr [eax + 1] */ r_ecx = (u32)R16((u32)(r_eax+0x1u));
    /* 0086d5fc: mov word ptr [edx + 1], cx */ W16((u32)(r_edx+0x1u), (u16)r_ecx);
    /* 0086d600: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0086d603: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0086d605: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086d609: ret  */ FN_RET(0x0086c4a0); r_esp += 4; return;
}

void f_0086c8e2(void) /* _WinMain@16_120_0 */
{
    FN_ENTER(0x0086c8e2);
    goto L_0086c8e2;
L_0086c6c0:; BB(0x0086c6c0);
    /* 0086c6c0: mov ecx, dword ptr [eax - 0x4c] */ r_ecx = R32((u32)(r_eax+0xffffffb4u));
    /* 0086c6c3: mov dword ptr [edx - 0x4c], ecx */ W32((u32)(r_edx+0xffffffb4u), r_ecx);
L_0086c6c6:; BB(0x0086c6c6);
    /* 0086c6c6: mov ecx, dword ptr [eax - 0x48] */ r_ecx = R32((u32)(r_eax+0xffffffb8u));
    /* 0086c6c9: mov dword ptr [edx - 0x48], ecx */ W32((u32)(r_edx+0xffffffb8u), r_ecx);
L_0086c6cc:; BB(0x0086c6cc);
    /* 0086c6cc: mov ecx, dword ptr [eax - 0x44] */ r_ecx = R32((u32)(r_eax+0xffffffbcu));
    /* 0086c6cf: mov dword ptr [edx - 0x44], ecx */ W32((u32)(r_edx+0xffffffbcu), r_ecx);
L_0086c6d2:; BB(0x0086c6d2);
    /* 0086c6d2: mov ecx, dword ptr [eax - 0x40] */ r_ecx = R32((u32)(r_eax+0xffffffc0u));
    /* 0086c6d5: mov dword ptr [edx - 0x40], ecx */ W32((u32)(r_edx+0xffffffc0u), r_ecx);
L_0086c6d8:; BB(0x0086c6d8);
    /* 0086c6d8: mov ecx, dword ptr [eax - 0x3c] */ r_ecx = R32((u32)(r_eax+0xffffffc4u));
    /* 0086c6db: mov dword ptr [edx - 0x3c], ecx */ W32((u32)(r_edx+0xffffffc4u), r_ecx);
L_0086c6de:; BB(0x0086c6de);
    /* 0086c6de: mov ecx, dword ptr [eax - 0x38] */ r_ecx = R32((u32)(r_eax+0xffffffc8u));
    /* 0086c6e1: mov dword ptr [edx - 0x38], ecx */ W32((u32)(r_edx+0xffffffc8u), r_ecx);
L_0086c6e4:; BB(0x0086c6e4);
    /* 0086c6e4: mov ecx, dword ptr [eax - 0x34] */ r_ecx = R32((u32)(r_eax+0xffffffccu));
    /* 0086c6e7: mov dword ptr [edx - 0x34], ecx */ W32((u32)(r_edx+0xffffffccu), r_ecx);
L_0086c6ea:; BB(0x0086c6ea);
    /* 0086c6ea: mov ecx, dword ptr [eax - 0x30] */ r_ecx = R32((u32)(r_eax+0xffffffd0u));
    /* 0086c6ed: mov dword ptr [edx - 0x30], ecx */ W32((u32)(r_edx+0xffffffd0u), r_ecx);
L_0086c6f0:; BB(0x0086c6f0);
    /* 0086c6f0: mov ecx, dword ptr [eax - 0x2c] */ r_ecx = R32((u32)(r_eax+0xffffffd4u));
    /* 0086c6f3: mov dword ptr [edx - 0x2c], ecx */ W32((u32)(r_edx+0xffffffd4u), r_ecx);
L_0086c6f6:; BB(0x0086c6f6);
    /* 0086c6f6: mov ecx, dword ptr [eax - 0x28] */ r_ecx = R32((u32)(r_eax+0xffffffd8u));
    /* 0086c6f9: mov dword ptr [edx - 0x28], ecx */ W32((u32)(r_edx+0xffffffd8u), r_ecx);
L_0086c6fc:; BB(0x0086c6fc);
    /* 0086c6fc: mov ecx, dword ptr [eax - 0x24] */ r_ecx = R32((u32)(r_eax+0xffffffdcu));
    /* 0086c6ff: mov dword ptr [edx - 0x24], ecx */ W32((u32)(r_edx+0xffffffdcu), r_ecx);
L_0086c702:; BB(0x0086c702);
    /* 0086c702: mov ecx, dword ptr [eax - 0x20] */ r_ecx = R32((u32)(r_eax+0xffffffe0u));
    /* 0086c705: mov dword ptr [edx - 0x20], ecx */ W32((u32)(r_edx+0xffffffe0u), r_ecx);
L_0086c708:; BB(0x0086c708);
    /* 0086c708: mov ecx, dword ptr [eax - 0x1c] */ r_ecx = R32((u32)(r_eax+0xffffffe4u));
    /* 0086c70b: mov dword ptr [edx - 0x1c], ecx */ W32((u32)(r_edx+0xffffffe4u), r_ecx);
L_0086c70e:; BB(0x0086c70e);
    /* 0086c70e: mov ecx, dword ptr [eax - 0x18] */ r_ecx = R32((u32)(r_eax+0xffffffe8u));
    /* 0086c711: mov dword ptr [edx - 0x18], ecx */ W32((u32)(r_edx+0xffffffe8u), r_ecx);
L_0086c714:; BB(0x0086c714);
    /* 0086c714: mov ecx, dword ptr [eax - 0x14] */ r_ecx = R32((u32)(r_eax+0xffffffecu));
    /* 0086c717: mov dword ptr [edx - 0x14], ecx */ W32((u32)(r_edx+0xffffffecu), r_ecx);
L_0086c71a:; BB(0x0086c71a);
    /* 0086c71a: mov ecx, dword ptr [eax - 0x10] */ r_ecx = R32((u32)(r_eax+0xfffffff0u));
    /* 0086c71d: mov dword ptr [edx - 0x10], ecx */ W32((u32)(r_edx+0xfffffff0u), r_ecx);
L_0086c720:; BB(0x0086c720);
    /* 0086c720: mov ecx, dword ptr [eax - 0xc] */ r_ecx = R32((u32)(r_eax+0xfffffff4u));
    /* 0086c723: mov dword ptr [edx - 0xc], ecx */ W32((u32)(r_edx+0xfffffff4u), r_ecx);
L_0086c726:; BB(0x0086c726);
    /* 0086c726: mov ecx, dword ptr [eax - 8] */ r_ecx = R32((u32)(r_eax+0xfffffff8u));
    /* 0086c729: mov dword ptr [edx - 8], ecx */ W32((u32)(r_edx+0xfffffff8u), r_ecx);
L_0086c72c:; BB(0x0086c72c);
    /* 0086c72c: mov ecx, dword ptr [eax - 4] */ r_ecx = R32((u32)(r_eax+0xfffffffcu));
    /* 0086c72f: mov dword ptr [edx - 4], ecx */ W32((u32)(r_edx+0xfffffffcu), r_ecx);
L_0086c732:; BB(0x0086c732);
    /* 0086c732: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c736: ret  */ FN_RET(0x0086c8e2); r_esp += 4; return;
L_0086c737:; BB(0x0086c737);
    /* 0086c737: mov ecx, dword ptr [eax - 0x4d] */ r_ecx = R32((u32)(r_eax+0xffffffb3u));
    /* 0086c73a: mov dword ptr [edx - 0x4d], ecx */ W32((u32)(r_edx+0xffffffb3u), r_ecx);
L_0086c73d:; BB(0x0086c73d);
    /* 0086c73d: mov ecx, dword ptr [eax - 0x49] */ r_ecx = R32((u32)(r_eax+0xffffffb7u));
    /* 0086c740: mov dword ptr [edx - 0x49], ecx */ W32((u32)(r_edx+0xffffffb7u), r_ecx);
L_0086c743:; BB(0x0086c743);
    /* 0086c743: mov ecx, dword ptr [eax - 0x45] */ r_ecx = R32((u32)(r_eax+0xffffffbbu));
    /* 0086c746: mov dword ptr [edx - 0x45], ecx */ W32((u32)(r_edx+0xffffffbbu), r_ecx);
L_0086c749:; BB(0x0086c749);
    /* 0086c749: mov ecx, dword ptr [eax - 0x41] */ r_ecx = R32((u32)(r_eax+0xffffffbfu));
    /* 0086c74c: mov dword ptr [edx - 0x41], ecx */ W32((u32)(r_edx+0xffffffbfu), r_ecx);
L_0086c74f:; BB(0x0086c74f);
    /* 0086c74f: mov ecx, dword ptr [eax - 0x3d] */ r_ecx = R32((u32)(r_eax+0xffffffc3u));
    /* 0086c752: mov dword ptr [edx - 0x3d], ecx */ W32((u32)(r_edx+0xffffffc3u), r_ecx);
L_0086c755:; BB(0x0086c755);
    /* 0086c755: mov ecx, dword ptr [eax - 0x39] */ r_ecx = R32((u32)(r_eax+0xffffffc7u));
    /* 0086c758: mov dword ptr [edx - 0x39], ecx */ W32((u32)(r_edx+0xffffffc7u), r_ecx);
L_0086c75b:; BB(0x0086c75b);
    /* 0086c75b: mov ecx, dword ptr [eax - 0x35] */ r_ecx = R32((u32)(r_eax+0xffffffcbu));
    /* 0086c75e: mov dword ptr [edx - 0x35], ecx */ W32((u32)(r_edx+0xffffffcbu), r_ecx);
L_0086c761:; BB(0x0086c761);
    /* 0086c761: mov ecx, dword ptr [eax - 0x31] */ r_ecx = R32((u32)(r_eax+0xffffffcfu));
    /* 0086c764: mov dword ptr [edx - 0x31], ecx */ W32((u32)(r_edx+0xffffffcfu), r_ecx);
L_0086c767:; BB(0x0086c767);
    /* 0086c767: mov ecx, dword ptr [eax - 0x2d] */ r_ecx = R32((u32)(r_eax+0xffffffd3u));
    /* 0086c76a: mov dword ptr [edx - 0x2d], ecx */ W32((u32)(r_edx+0xffffffd3u), r_ecx);
L_0086c76d:; BB(0x0086c76d);
    /* 0086c76d: mov ecx, dword ptr [eax - 0x29] */ r_ecx = R32((u32)(r_eax+0xffffffd7u));
    /* 0086c770: mov dword ptr [edx - 0x29], ecx */ W32((u32)(r_edx+0xffffffd7u), r_ecx);
L_0086c773:; BB(0x0086c773);
    /* 0086c773: mov ecx, dword ptr [eax - 0x25] */ r_ecx = R32((u32)(r_eax+0xffffffdbu));
    /* 0086c776: mov dword ptr [edx - 0x25], ecx */ W32((u32)(r_edx+0xffffffdbu), r_ecx);
L_0086c779:; BB(0x0086c779);
    /* 0086c779: mov ecx, dword ptr [eax - 0x21] */ r_ecx = R32((u32)(r_eax+0xffffffdfu));
    /* 0086c77c: mov dword ptr [edx - 0x21], ecx */ W32((u32)(r_edx+0xffffffdfu), r_ecx);
L_0086c77f:; BB(0x0086c77f);
    /* 0086c77f: mov ecx, dword ptr [eax - 0x1d] */ r_ecx = R32((u32)(r_eax+0xffffffe3u));
    /* 0086c782: mov dword ptr [edx - 0x1d], ecx */ W32((u32)(r_edx+0xffffffe3u), r_ecx);
L_0086c785:; BB(0x0086c785);
    /* 0086c785: mov ecx, dword ptr [eax - 0x19] */ r_ecx = R32((u32)(r_eax+0xffffffe7u));
    /* 0086c788: mov dword ptr [edx - 0x19], ecx */ W32((u32)(r_edx+0xffffffe7u), r_ecx);
L_0086c78b:; BB(0x0086c78b);
    /* 0086c78b: mov ecx, dword ptr [eax - 0x15] */ r_ecx = R32((u32)(r_eax+0xffffffebu));
    /* 0086c78e: mov dword ptr [edx - 0x15], ecx */ W32((u32)(r_edx+0xffffffebu), r_ecx);
L_0086c791:; BB(0x0086c791);
    /* 0086c791: mov ecx, dword ptr [eax - 0x11] */ r_ecx = R32((u32)(r_eax+0xffffffefu));
    /* 0086c794: mov dword ptr [edx - 0x11], ecx */ W32((u32)(r_edx+0xffffffefu), r_ecx);
L_0086c797:; BB(0x0086c797);
    /* 0086c797: mov ecx, dword ptr [eax - 0xd] */ r_ecx = R32((u32)(r_eax+0xfffffff3u));
    /* 0086c79a: mov dword ptr [edx - 0xd], ecx */ W32((u32)(r_edx+0xfffffff3u), r_ecx);
L_0086c79d:; BB(0x0086c79d);
    /* 0086c79d: mov ecx, dword ptr [eax - 9] */ r_ecx = R32((u32)(r_eax+0xfffffff7u));
    /* 0086c7a0: mov dword ptr [edx - 9], ecx */ W32((u32)(r_edx+0xfffffff7u), r_ecx);
L_0086c7a3:; BB(0x0086c7a3);
    /* 0086c7a3: mov ecx, dword ptr [eax - 5] */ r_ecx = R32((u32)(r_eax+0xfffffffbu));
    /* 0086c7a6: mov dword ptr [edx - 5], ecx */ W32((u32)(r_edx+0xfffffffbu), r_ecx);
L_0086c7a9:; BB(0x0086c7a9);
    /* 0086c7a9: movzx ecx, byte ptr [eax - 1] */ r_ecx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 0086c7ad: mov byte ptr [edx - 1], cl */ W8((u32)(r_edx+0xffffffffu), (u8)r_ecx);
    /* 0086c7b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c7b4: ret  */ FN_RET(0x0086c8e2); r_esp += 4; return;
L_0086c7b5:; BB(0x0086c7b5);
    /* 0086c7b5: mov ecx, dword ptr [eax - 0x4e] */ r_ecx = R32((u32)(r_eax+0xffffffb2u));
    /* 0086c7b8: mov dword ptr [edx - 0x4e], ecx */ W32((u32)(r_edx+0xffffffb2u), r_ecx);
L_0086c7bb:; BB(0x0086c7bb);
    /* 0086c7bb: mov ecx, dword ptr [eax - 0x4a] */ r_ecx = R32((u32)(r_eax+0xffffffb6u));
    /* 0086c7be: mov dword ptr [edx - 0x4a], ecx */ W32((u32)(r_edx+0xffffffb6u), r_ecx);
L_0086c7c1:; BB(0x0086c7c1);
    /* 0086c7c1: mov ecx, dword ptr [eax - 0x46] */ r_ecx = R32((u32)(r_eax+0xffffffbau));
    /* 0086c7c4: mov dword ptr [edx - 0x46], ecx */ W32((u32)(r_edx+0xffffffbau), r_ecx);
L_0086c7c7:; BB(0x0086c7c7);
    /* 0086c7c7: mov ecx, dword ptr [eax - 0x42] */ r_ecx = R32((u32)(r_eax+0xffffffbeu));
    /* 0086c7ca: mov dword ptr [edx - 0x42], ecx */ W32((u32)(r_edx+0xffffffbeu), r_ecx);
L_0086c7cd:; BB(0x0086c7cd);
    /* 0086c7cd: mov ecx, dword ptr [eax - 0x3e] */ r_ecx = R32((u32)(r_eax+0xffffffc2u));
    /* 0086c7d0: mov dword ptr [edx - 0x3e], ecx */ W32((u32)(r_edx+0xffffffc2u), r_ecx);
L_0086c7d3:; BB(0x0086c7d3);
    /* 0086c7d3: mov ecx, dword ptr [eax - 0x3a] */ r_ecx = R32((u32)(r_eax+0xffffffc6u));
    /* 0086c7d6: mov dword ptr [edx - 0x3a], ecx */ W32((u32)(r_edx+0xffffffc6u), r_ecx);
L_0086c7d9:; BB(0x0086c7d9);
    /* 0086c7d9: mov ecx, dword ptr [eax - 0x36] */ r_ecx = R32((u32)(r_eax+0xffffffcau));
    /* 0086c7dc: mov dword ptr [edx - 0x36], ecx */ W32((u32)(r_edx+0xffffffcau), r_ecx);
L_0086c7df:; BB(0x0086c7df);
    /* 0086c7df: mov ecx, dword ptr [eax - 0x32] */ r_ecx = R32((u32)(r_eax+0xffffffceu));
    /* 0086c7e2: mov dword ptr [edx - 0x32], ecx */ W32((u32)(r_edx+0xffffffceu), r_ecx);
L_0086c7e5:; BB(0x0086c7e5);
    /* 0086c7e5: mov ecx, dword ptr [eax - 0x2e] */ r_ecx = R32((u32)(r_eax+0xffffffd2u));
    /* 0086c7e8: mov dword ptr [edx - 0x2e], ecx */ W32((u32)(r_edx+0xffffffd2u), r_ecx);
L_0086c7eb:; BB(0x0086c7eb);
    /* 0086c7eb: mov ecx, dword ptr [eax - 0x2a] */ r_ecx = R32((u32)(r_eax+0xffffffd6u));
    /* 0086c7ee: mov dword ptr [edx - 0x2a], ecx */ W32((u32)(r_edx+0xffffffd6u), r_ecx);
L_0086c7f1:; BB(0x0086c7f1);
    /* 0086c7f1: mov ecx, dword ptr [eax - 0x26] */ r_ecx = R32((u32)(r_eax+0xffffffdau));
    /* 0086c7f4: mov dword ptr [edx - 0x26], ecx */ W32((u32)(r_edx+0xffffffdau), r_ecx);
L_0086c7f7:; BB(0x0086c7f7);
    /* 0086c7f7: mov ecx, dword ptr [eax - 0x22] */ r_ecx = R32((u32)(r_eax+0xffffffdeu));
    /* 0086c7fa: mov dword ptr [edx - 0x22], ecx */ W32((u32)(r_edx+0xffffffdeu), r_ecx);
L_0086c7fd:; BB(0x0086c7fd);
    /* 0086c7fd: mov ecx, dword ptr [eax - 0x1e] */ r_ecx = R32((u32)(r_eax+0xffffffe2u));
    /* 0086c800: mov dword ptr [edx - 0x1e], ecx */ W32((u32)(r_edx+0xffffffe2u), r_ecx);
L_0086c803:; BB(0x0086c803);
    /* 0086c803: mov ecx, dword ptr [eax - 0x1a] */ r_ecx = R32((u32)(r_eax+0xffffffe6u));
    /* 0086c806: mov dword ptr [edx - 0x1a], ecx */ W32((u32)(r_edx+0xffffffe6u), r_ecx);
L_0086c809:; BB(0x0086c809);
    /* 0086c809: mov ecx, dword ptr [eax - 0x16] */ r_ecx = R32((u32)(r_eax+0xffffffeau));
    /* 0086c80c: mov dword ptr [edx - 0x16], ecx */ W32((u32)(r_edx+0xffffffeau), r_ecx);
L_0086c80f:; BB(0x0086c80f);
    /* 0086c80f: mov ecx, dword ptr [eax - 0x12] */ r_ecx = R32((u32)(r_eax+0xffffffeeu));
    /* 0086c812: mov dword ptr [edx - 0x12], ecx */ W32((u32)(r_edx+0xffffffeeu), r_ecx);
L_0086c815:; BB(0x0086c815);
    /* 0086c815: mov ecx, dword ptr [eax - 0xe] */ r_ecx = R32((u32)(r_eax+0xfffffff2u));
    /* 0086c818: mov dword ptr [edx - 0xe], ecx */ W32((u32)(r_edx+0xfffffff2u), r_ecx);
L_0086c81b:; BB(0x0086c81b);
    /* 0086c81b: mov ecx, dword ptr [eax - 0xa] */ r_ecx = R32((u32)(r_eax+0xfffffff6u));
    /* 0086c81e: mov dword ptr [edx - 0xa], ecx */ W32((u32)(r_edx+0xfffffff6u), r_ecx);
L_0086c821:; BB(0x0086c821);
    /* 0086c821: mov ecx, dword ptr [eax - 6] */ r_ecx = R32((u32)(r_eax+0xfffffffau));
    /* 0086c824: mov dword ptr [edx - 6], ecx */ W32((u32)(r_edx+0xfffffffau), r_ecx);
L_0086c827:; BB(0x0086c827);
    /* 0086c827: movzx ecx, word ptr [eax - 2] */ r_ecx = (u32)R16((u32)(r_eax+0xfffffffeu));
    /* 0086c82b: mov word ptr [edx - 2], cx */ W16((u32)(r_edx+0xfffffffeu), (u16)r_ecx);
    /* 0086c82f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c833: ret  */ FN_RET(0x0086c8e2); r_esp += 4; return;
L_0086c834:; BB(0x0086c834);
    /* 0086c834: mov ecx, dword ptr [eax - 0x4f] */ r_ecx = R32((u32)(r_eax+0xffffffb1u));
    /* 0086c837: mov dword ptr [edx - 0x4f], ecx */ W32((u32)(r_edx+0xffffffb1u), r_ecx);
L_0086c83a:; BB(0x0086c83a);
    /* 0086c83a: mov ecx, dword ptr [eax - 0x4b] */ r_ecx = R32((u32)(r_eax+0xffffffb5u));
    /* 0086c83d: mov dword ptr [edx - 0x4b], ecx */ W32((u32)(r_edx+0xffffffb5u), r_ecx);
L_0086c840:; BB(0x0086c840);
    /* 0086c840: mov ecx, dword ptr [eax - 0x47] */ r_ecx = R32((u32)(r_eax+0xffffffb9u));
    /* 0086c843: mov dword ptr [edx - 0x47], ecx */ W32((u32)(r_edx+0xffffffb9u), r_ecx);
L_0086c846:; BB(0x0086c846);
    /* 0086c846: mov ecx, dword ptr [eax - 0x43] */ r_ecx = R32((u32)(r_eax+0xffffffbdu));
    /* 0086c849: mov dword ptr [edx - 0x43], ecx */ W32((u32)(r_edx+0xffffffbdu), r_ecx);
L_0086c84c:; BB(0x0086c84c);
    /* 0086c84c: mov ecx, dword ptr [eax - 0x3f] */ r_ecx = R32((u32)(r_eax+0xffffffc1u));
    /* 0086c84f: mov dword ptr [edx - 0x3f], ecx */ W32((u32)(r_edx+0xffffffc1u), r_ecx);
L_0086c852:; BB(0x0086c852);
    /* 0086c852: mov ecx, dword ptr [eax - 0x3b] */ r_ecx = R32((u32)(r_eax+0xffffffc5u));
    /* 0086c855: mov dword ptr [edx - 0x3b], ecx */ W32((u32)(r_edx+0xffffffc5u), r_ecx);
L_0086c858:; BB(0x0086c858);
    /* 0086c858: mov ecx, dword ptr [eax - 0x37] */ r_ecx = R32((u32)(r_eax+0xffffffc9u));
    /* 0086c85b: mov dword ptr [edx - 0x37], ecx */ W32((u32)(r_edx+0xffffffc9u), r_ecx);
L_0086c85e:; BB(0x0086c85e);
    /* 0086c85e: mov ecx, dword ptr [eax - 0x33] */ r_ecx = R32((u32)(r_eax+0xffffffcdu));
    /* 0086c861: mov dword ptr [edx - 0x33], ecx */ W32((u32)(r_edx+0xffffffcdu), r_ecx);
L_0086c864:; BB(0x0086c864);
    /* 0086c864: mov ecx, dword ptr [eax - 0x2f] */ r_ecx = R32((u32)(r_eax+0xffffffd1u));
    /* 0086c867: mov dword ptr [edx - 0x2f], ecx */ W32((u32)(r_edx+0xffffffd1u), r_ecx);
L_0086c86a:; BB(0x0086c86a);
    /* 0086c86a: mov ecx, dword ptr [eax - 0x2b] */ r_ecx = R32((u32)(r_eax+0xffffffd5u));
    /* 0086c86d: mov dword ptr [edx - 0x2b], ecx */ W32((u32)(r_edx+0xffffffd5u), r_ecx);
L_0086c870:; BB(0x0086c870);
    /* 0086c870: mov ecx, dword ptr [eax - 0x27] */ r_ecx = R32((u32)(r_eax+0xffffffd9u));
    /* 0086c873: mov dword ptr [edx - 0x27], ecx */ W32((u32)(r_edx+0xffffffd9u), r_ecx);
L_0086c876:; BB(0x0086c876);
    /* 0086c876: mov ecx, dword ptr [eax - 0x23] */ r_ecx = R32((u32)(r_eax+0xffffffddu));
    /* 0086c879: mov dword ptr [edx - 0x23], ecx */ W32((u32)(r_edx+0xffffffddu), r_ecx);
L_0086c87c:; BB(0x0086c87c);
    /* 0086c87c: mov ecx, dword ptr [eax - 0x1f] */ r_ecx = R32((u32)(r_eax+0xffffffe1u));
    /* 0086c87f: mov dword ptr [edx - 0x1f], ecx */ W32((u32)(r_edx+0xffffffe1u), r_ecx);
L_0086c882:; BB(0x0086c882);
    /* 0086c882: mov ecx, dword ptr [eax - 0x1b] */ r_ecx = R32((u32)(r_eax+0xffffffe5u));
    /* 0086c885: mov dword ptr [edx - 0x1b], ecx */ W32((u32)(r_edx+0xffffffe5u), r_ecx);
L_0086c888:; BB(0x0086c888);
    /* 0086c888: mov ecx, dword ptr [eax - 0x17] */ r_ecx = R32((u32)(r_eax+0xffffffe9u));
    /* 0086c88b: mov dword ptr [edx - 0x17], ecx */ W32((u32)(r_edx+0xffffffe9u), r_ecx);
L_0086c88e:; BB(0x0086c88e);
    /* 0086c88e: mov ecx, dword ptr [eax - 0x13] */ r_ecx = R32((u32)(r_eax+0xffffffedu));
    /* 0086c891: mov dword ptr [edx - 0x13], ecx */ W32((u32)(r_edx+0xffffffedu), r_ecx);
L_0086c894:; BB(0x0086c894);
    /* 0086c894: mov ecx, dword ptr [eax - 0xf] */ r_ecx = R32((u32)(r_eax+0xfffffff1u));
    /* 0086c897: mov dword ptr [edx - 0xf], ecx */ W32((u32)(r_edx+0xfffffff1u), r_ecx);
L_0086c89a:; BB(0x0086c89a);
    /* 0086c89a: mov ecx, dword ptr [eax - 0xb] */ r_ecx = R32((u32)(r_eax+0xfffffff5u));
    /* 0086c89d: mov dword ptr [edx - 0xb], ecx */ W32((u32)(r_edx+0xfffffff5u), r_ecx);
L_0086c8a0:; BB(0x0086c8a0);
    /* 0086c8a0: mov ecx, dword ptr [eax - 7] */ r_ecx = R32((u32)(r_eax+0xfffffff9u));
    /* 0086c8a3: mov dword ptr [edx - 7], ecx */ W32((u32)(r_edx+0xfffffff9u), r_ecx);
L_0086c8a6:; BB(0x0086c8a6);
    /* 0086c8a6: movzx ecx, word ptr [eax - 3] */ r_ecx = (u32)R16((u32)(r_eax+0xfffffffdu));
    /* 0086c8aa: movzx eax, byte ptr [eax - 1] */ r_eax = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 0086c8ae: mov word ptr [edx - 3], cx */ W16((u32)(r_edx+0xfffffffdu), (u16)r_ecx);
    /* 0086c8b2: mov byte ptr [edx - 1], al */ W8((u32)(r_edx+0xffffffffu), (u8)r_eax);
    /* 0086c8b5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086c8b9: ret  */ FN_RET(0x0086c8e2); r_esp += 4; return;
L_0086c8e2:; BB(0x0086c8e2);
    /* 0086c8e2: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c8e5: jl 0x86c970 */ if ((fS!=fO)) goto L_0086c970;
L_0086c8eb:; BB(0x0086c8eb);
    /* 0086c8eb: mov eax, dword ptr [0xae7f08] */ r_eax = R32((u32)(0xae7f08u));
    /* 0086c8f0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086c8f2: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c8f5: cmovle eax, ecx */ if ((fZ||fS!=fO)) { r_eax = r_ecx; }
    /* 0086c8f8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c8fa: jg 0x86ce60 */ if ((!fZ&&fS==fO)) goto L_0086ce60;
L_0086c900:; BB(0x0086c900);
    /* 0086c900: test esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086c906: je 0x86cee5 */ if (fZ) goto L_0086cee5;
L_0086c90c:; BB(0x0086c90c);
    /* 0086c90c: mov eax, esi */ r_eax = r_esi;
    /* 0086c90e: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086c911: movdqu xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086c915: movdqa xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 0086c919: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c91c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086c91e: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c921: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c924: movdqa xmm1, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[1] = s; }
    /* 0086c928: jmp dword ptr [eax*4 + 0x86c930] */ { u32 t = R32((u32)(r_eax*4+0x86c930u)); switch (t) { case 0x86cef0u: goto L_0086cef0; case 0x86c9a0u: goto L_0086c9a0; case 0x86c9f0u: goto L_0086c9f0; case 0x86ca40u: goto L_0086ca40; case 0x86ca90u: goto L_0086ca90; case 0x86cae0u: goto L_0086cae0; case 0x86cb30u: goto L_0086cb30; case 0x86cb80u: goto L_0086cb80; case 0x86cbd0u: goto L_0086cbd0; case 0x86cc20u: goto L_0086cc20; case 0x86cc70u: goto L_0086cc70; case 0x86ccc0u: goto L_0086ccc0; case 0x86cd10u: goto L_0086cd10; case 0x86cd60u: goto L_0086cd60; case 0x86cdb0u: goto L_0086cdb0; case 0x86ce00u: goto L_0086ce00; default: UNSUP(0x0086c928, "jump table entry is not a known target"); } }
L_0086c970:; BB(0x0086c970);
    /* 0086c970: mov eax, ecx */ r_eax = r_ecx;
    /* 0086c972: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086c975: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086c978: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c97a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c97c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c97e: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086c981: jmp dword ptr [eax*4 + 0x86d1b0] */ { u32 t = R32((u32)(r_eax*4+0x86d1b0u)); switch (t) { case 0x86d224u: goto L_0086d224; case 0x86d21au: goto L_0086d21a; case 0x86d210u: goto L_0086d210; case 0x86d206u: goto L_0086d206; case 0x86d1fcu: goto L_0086d1fc; case 0x86d1f2u: goto L_0086d1f2; case 0x86d1e8u: goto L_0086d1e8; case 0x86d1deu: goto L_0086d1de; case 0x86d1d4u: goto L_0086d1d4; default: UNSUP(0x0086c981, "jump table entry is not a known target"); } }
L_0086c9a0:; BB(0x0086c9a0);
    /* 0086c9a0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c9a3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086c9a8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086c9ad: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086c9b0: psrldq xmm1, 1 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (1 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 1 ? (lo >> (1 * 8)) | (hi << (64 - (1 * 8))) : lo; xmm[1].q[1] = hi >> (1 * 8); } }
    /* 0086c9b5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086c9b9: pslldq xmm3, 0xf */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (15 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (15 * 8); xmm[3].q[1] = 15 ? (hi << (15 * 8)) | (lo >> (64 - (15 * 8))) : hi; } }
    /* 0086c9be: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086c9c2: psrldq xmm2, 1 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (1 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 1 ? (lo >> (1 * 8)) | (hi << (64 - (1 * 8))) : lo; xmm[2].q[1] = hi >> (1 * 8); } }
    /* 0086c9c7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086c9cb: pslldq xmm0, 0xf */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (15 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (15 * 8); xmm[0].q[1] = 15 ? (hi << (15 * 8)) | (lo >> (64 - (15 * 8))) : hi; } }
    /* 0086c9d0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086c9d4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086c9d8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086c9dd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086c9e0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086c9e3: jge 0x86c9a0 */ if ((fS==fO)) goto L_0086c9a0;
L_0086c9e5:; BB(0x0086c9e5);
    /* 0086c9e5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086c9f0:; BB(0x0086c9f0);
    /* 0086c9f0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086c9f3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086c9f8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086c9fd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ca00: psrldq xmm1, 2 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (2 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 2 ? (lo >> (2 * 8)) | (hi << (64 - (2 * 8))) : lo; xmm[1].q[1] = hi >> (2 * 8); } }
    /* 0086ca05: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ca09: pslldq xmm3, 0xe */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (14 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (14 * 8); xmm[3].q[1] = 14 ? (hi << (14 * 8)) | (lo >> (64 - (14 * 8))) : hi; } }
    /* 0086ca0e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086ca12: psrldq xmm2, 2 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (2 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 2 ? (lo >> (2 * 8)) | (hi << (64 - (2 * 8))) : lo; xmm[2].q[1] = hi >> (2 * 8); } }
    /* 0086ca17: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086ca1b: pslldq xmm0, 0xe */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (14 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (14 * 8); xmm[0].q[1] = 14 ? (hi << (14 * 8)) | (lo >> (64 - (14 * 8))) : hi; } }
    /* 0086ca20: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ca24: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ca28: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ca2d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ca30: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ca33: jge 0x86c9f0 */ if ((fS==fO)) goto L_0086c9f0;
L_0086ca35:; BB(0x0086ca35);
    /* 0086ca35: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ca40:; BB(0x0086ca40);
    /* 0086ca40: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ca43: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ca48: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086ca4d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ca50: psrldq xmm1, 3 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (3 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 3 ? (lo >> (3 * 8)) | (hi << (64 - (3 * 8))) : lo; xmm[1].q[1] = hi >> (3 * 8); } }
    /* 0086ca55: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ca59: pslldq xmm3, 0xd */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (13 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (13 * 8); xmm[3].q[1] = 13 ? (hi << (13 * 8)) | (lo >> (64 - (13 * 8))) : hi; } }
    /* 0086ca5e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086ca62: psrldq xmm2, 3 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (3 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 3 ? (lo >> (3 * 8)) | (hi << (64 - (3 * 8))) : lo; xmm[2].q[1] = hi >> (3 * 8); } }
    /* 0086ca67: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086ca6b: pslldq xmm0, 0xd */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (13 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (13 * 8); xmm[0].q[1] = 13 ? (hi << (13 * 8)) | (lo >> (64 - (13 * 8))) : hi; } }
    /* 0086ca70: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ca74: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ca78: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ca7d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ca80: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ca83: jge 0x86ca40 */ if ((fS==fO)) goto L_0086ca40;
L_0086ca85:; BB(0x0086ca85);
    /* 0086ca85: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ca90:; BB(0x0086ca90);
    /* 0086ca90: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ca93: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ca98: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086ca9d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086caa0: psrldq xmm1, 4 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (4 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 4 ? (lo >> (4 * 8)) | (hi << (64 - (4 * 8))) : lo; xmm[1].q[1] = hi >> (4 * 8); } }
    /* 0086caa5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086caa9: pslldq xmm3, 0xc */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (12 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (12 * 8); xmm[3].q[1] = 12 ? (hi << (12 * 8)) | (lo >> (64 - (12 * 8))) : hi; } }
    /* 0086caae: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cab2: psrldq xmm2, 4 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (4 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 4 ? (lo >> (4 * 8)) | (hi << (64 - (4 * 8))) : lo; xmm[2].q[1] = hi >> (4 * 8); } }
    /* 0086cab7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cabb: pslldq xmm0, 0xc */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (12 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (12 * 8); xmm[0].q[1] = 12 ? (hi << (12 * 8)) | (lo >> (64 - (12 * 8))) : hi; } }
    /* 0086cac0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cac4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cac8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cacd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cad0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cad3: jge 0x86ca90 */ if ((fS==fO)) goto L_0086ca90;
L_0086cad5:; BB(0x0086cad5);
    /* 0086cad5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cae0:; BB(0x0086cae0);
    /* 0086cae0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cae3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cae8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086caed: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086caf0: psrldq xmm1, 5 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (5 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 5 ? (lo >> (5 * 8)) | (hi << (64 - (5 * 8))) : lo; xmm[1].q[1] = hi >> (5 * 8); } }
    /* 0086caf5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086caf9: pslldq xmm3, 0xb */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (11 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (11 * 8); xmm[3].q[1] = 11 ? (hi << (11 * 8)) | (lo >> (64 - (11 * 8))) : hi; } }
    /* 0086cafe: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cb02: psrldq xmm2, 5 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (5 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 5 ? (lo >> (5 * 8)) | (hi << (64 - (5 * 8))) : lo; xmm[2].q[1] = hi >> (5 * 8); } }
    /* 0086cb07: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cb0b: pslldq xmm0, 0xb */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (11 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (11 * 8); xmm[0].q[1] = 11 ? (hi << (11 * 8)) | (lo >> (64 - (11 * 8))) : hi; } }
    /* 0086cb10: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cb14: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cb18: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cb1d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cb20: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cb23: jge 0x86cae0 */ if ((fS==fO)) goto L_0086cae0;
L_0086cb25:; BB(0x0086cb25);
    /* 0086cb25: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cb30:; BB(0x0086cb30);
    /* 0086cb30: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cb33: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cb38: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cb3d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cb40: psrldq xmm1, 6 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (6 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 6 ? (lo >> (6 * 8)) | (hi << (64 - (6 * 8))) : lo; xmm[1].q[1] = hi >> (6 * 8); } }
    /* 0086cb45: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cb49: pslldq xmm3, 0xa */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (10 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (10 * 8); xmm[3].q[1] = 10 ? (hi << (10 * 8)) | (lo >> (64 - (10 * 8))) : hi; } }
    /* 0086cb4e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cb52: psrldq xmm2, 6 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (6 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 6 ? (lo >> (6 * 8)) | (hi << (64 - (6 * 8))) : lo; xmm[2].q[1] = hi >> (6 * 8); } }
    /* 0086cb57: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cb5b: pslldq xmm0, 0xa */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (10 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (10 * 8); xmm[0].q[1] = 10 ? (hi << (10 * 8)) | (lo >> (64 - (10 * 8))) : hi; } }
    /* 0086cb60: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cb64: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cb68: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cb6d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cb70: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cb73: jge 0x86cb30 */ if ((fS==fO)) goto L_0086cb30;
L_0086cb75:; BB(0x0086cb75);
    /* 0086cb75: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cb80:; BB(0x0086cb80);
    /* 0086cb80: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cb83: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cb88: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cb8d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cb90: psrldq xmm1, 7 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (7 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 7 ? (lo >> (7 * 8)) | (hi << (64 - (7 * 8))) : lo; xmm[1].q[1] = hi >> (7 * 8); } }
    /* 0086cb95: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cb99: pslldq xmm3, 9 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (9 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (9 * 8); xmm[3].q[1] = 9 ? (hi << (9 * 8)) | (lo >> (64 - (9 * 8))) : hi; } }
    /* 0086cb9e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cba2: psrldq xmm2, 7 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (7 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 7 ? (lo >> (7 * 8)) | (hi << (64 - (7 * 8))) : lo; xmm[2].q[1] = hi >> (7 * 8); } }
    /* 0086cba7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cbab: pslldq xmm0, 9 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (9 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (9 * 8); xmm[0].q[1] = 9 ? (hi << (9 * 8)) | (lo >> (64 - (9 * 8))) : hi; } }
    /* 0086cbb0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cbb4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cbb8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cbbd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cbc0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cbc3: jge 0x86cb80 */ if ((fS==fO)) goto L_0086cb80;
L_0086cbc5:; BB(0x0086cbc5);
    /* 0086cbc5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cbd0:; BB(0x0086cbd0);
    /* 0086cbd0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cbd3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cbd8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cbdd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cbe0: psrldq xmm1, 8 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (8 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 8 ? (lo >> (8 * 8)) | (hi << (64 - (8 * 8))) : lo; xmm[1].q[1] = hi >> (8 * 8); } }
    /* 0086cbe5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cbe9: pslldq xmm3, 8 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (8 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (8 * 8); xmm[3].q[1] = 8 ? (hi << (8 * 8)) | (lo >> (64 - (8 * 8))) : hi; } }
    /* 0086cbee: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cbf2: psrldq xmm2, 8 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (8 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 8 ? (lo >> (8 * 8)) | (hi << (64 - (8 * 8))) : lo; xmm[2].q[1] = hi >> (8 * 8); } }
    /* 0086cbf7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cbfb: pslldq xmm0, 8 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (8 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (8 * 8); xmm[0].q[1] = 8 ? (hi << (8 * 8)) | (lo >> (64 - (8 * 8))) : hi; } }
    /* 0086cc00: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cc04: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cc08: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cc0d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cc10: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cc13: jge 0x86cbd0 */ if ((fS==fO)) goto L_0086cbd0;
L_0086cc15:; BB(0x0086cc15);
    /* 0086cc15: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cc20:; BB(0x0086cc20);
    /* 0086cc20: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cc23: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cc28: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cc2d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cc30: psrldq xmm1, 9 */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (9 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 9 ? (lo >> (9 * 8)) | (hi << (64 - (9 * 8))) : lo; xmm[1].q[1] = hi >> (9 * 8); } }
    /* 0086cc35: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cc39: pslldq xmm3, 7 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (7 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (7 * 8); xmm[3].q[1] = 7 ? (hi << (7 * 8)) | (lo >> (64 - (7 * 8))) : hi; } }
    /* 0086cc3e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cc42: psrldq xmm2, 9 */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (9 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 9 ? (lo >> (9 * 8)) | (hi << (64 - (9 * 8))) : lo; xmm[2].q[1] = hi >> (9 * 8); } }
    /* 0086cc47: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cc4b: pslldq xmm0, 7 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (7 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (7 * 8); xmm[0].q[1] = 7 ? (hi << (7 * 8)) | (lo >> (64 - (7 * 8))) : hi; } }
    /* 0086cc50: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cc54: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cc58: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cc5d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cc60: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cc63: jge 0x86cc20 */ if ((fS==fO)) goto L_0086cc20;
L_0086cc65:; BB(0x0086cc65);
    /* 0086cc65: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cc70:; BB(0x0086cc70);
    /* 0086cc70: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cc73: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cc78: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cc7d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cc80: psrldq xmm1, 0xa */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (10 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 10 ? (lo >> (10 * 8)) | (hi << (64 - (10 * 8))) : lo; xmm[1].q[1] = hi >> (10 * 8); } }
    /* 0086cc85: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cc89: pslldq xmm3, 6 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (6 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (6 * 8); xmm[3].q[1] = 6 ? (hi << (6 * 8)) | (lo >> (64 - (6 * 8))) : hi; } }
    /* 0086cc8e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cc92: psrldq xmm2, 0xa */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (10 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 10 ? (lo >> (10 * 8)) | (hi << (64 - (10 * 8))) : lo; xmm[2].q[1] = hi >> (10 * 8); } }
    /* 0086cc97: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cc9b: pslldq xmm0, 6 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (6 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (6 * 8); xmm[0].q[1] = 6 ? (hi << (6 * 8)) | (lo >> (64 - (6 * 8))) : hi; } }
    /* 0086cca0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cca4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cca8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ccad: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ccb0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ccb3: jge 0x86cc70 */ if ((fS==fO)) goto L_0086cc70;
L_0086ccb5:; BB(0x0086ccb5);
    /* 0086ccb5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ccc0:; BB(0x0086ccc0);
    /* 0086ccc0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ccc3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ccc8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cccd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ccd0: psrldq xmm1, 0xb */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (11 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 11 ? (lo >> (11 * 8)) | (hi << (64 - (11 * 8))) : lo; xmm[1].q[1] = hi >> (11 * 8); } }
    /* 0086ccd5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ccd9: pslldq xmm3, 5 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (5 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (5 * 8); xmm[3].q[1] = 5 ? (hi << (5 * 8)) | (lo >> (64 - (5 * 8))) : hi; } }
    /* 0086ccde: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cce2: psrldq xmm2, 0xb */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (11 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 11 ? (lo >> (11 * 8)) | (hi << (64 - (11 * 8))) : lo; xmm[2].q[1] = hi >> (11 * 8); } }
    /* 0086cce7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cceb: pslldq xmm0, 5 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (5 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (5 * 8); xmm[0].q[1] = 5 ? (hi << (5 * 8)) | (lo >> (64 - (5 * 8))) : hi; } }
    /* 0086ccf0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ccf4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ccf8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ccfd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cd00: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cd03: jge 0x86ccc0 */ if ((fS==fO)) goto L_0086ccc0;
L_0086cd05:; BB(0x0086cd05);
    /* 0086cd05: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cd10:; BB(0x0086cd10);
    /* 0086cd10: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cd13: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cd18: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cd1d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cd20: psrldq xmm1, 0xc */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (12 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 12 ? (lo >> (12 * 8)) | (hi << (64 - (12 * 8))) : lo; xmm[1].q[1] = hi >> (12 * 8); } }
    /* 0086cd25: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cd29: pslldq xmm3, 4 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (4 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (4 * 8); xmm[3].q[1] = 4 ? (hi << (4 * 8)) | (lo >> (64 - (4 * 8))) : hi; } }
    /* 0086cd2e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cd32: psrldq xmm2, 0xc */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (12 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 12 ? (lo >> (12 * 8)) | (hi << (64 - (12 * 8))) : lo; xmm[2].q[1] = hi >> (12 * 8); } }
    /* 0086cd37: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cd3b: pslldq xmm0, 4 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (4 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (4 * 8); xmm[0].q[1] = 4 ? (hi << (4 * 8)) | (lo >> (64 - (4 * 8))) : hi; } }
    /* 0086cd40: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cd44: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cd48: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cd4d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cd50: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cd53: jge 0x86cd10 */ if ((fS==fO)) goto L_0086cd10;
L_0086cd55:; BB(0x0086cd55);
    /* 0086cd55: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cd60:; BB(0x0086cd60);
    /* 0086cd60: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cd63: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cd68: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cd6d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cd70: psrldq xmm1, 0xd */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (13 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 13 ? (lo >> (13 * 8)) | (hi << (64 - (13 * 8))) : lo; xmm[1].q[1] = hi >> (13 * 8); } }
    /* 0086cd75: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cd79: pslldq xmm3, 3 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (3 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (3 * 8); xmm[3].q[1] = 3 ? (hi << (3 * 8)) | (lo >> (64 - (3 * 8))) : hi; } }
    /* 0086cd7e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cd82: psrldq xmm2, 0xd */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (13 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 13 ? (lo >> (13 * 8)) | (hi << (64 - (13 * 8))) : lo; xmm[2].q[1] = hi >> (13 * 8); } }
    /* 0086cd87: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cd8b: pslldq xmm0, 3 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (3 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (3 * 8); xmm[0].q[1] = 3 ? (hi << (3 * 8)) | (lo >> (64 - (3 * 8))) : hi; } }
    /* 0086cd90: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cd94: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cd98: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cd9d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cda0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cda3: jge 0x86cd60 */ if ((fS==fO)) goto L_0086cd60;
L_0086cda5:; BB(0x0086cda5);
    /* 0086cda5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086cdb0:; BB(0x0086cdb0);
    /* 0086cdb0: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cdb3: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086cdb8: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086cdbd: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cdc0: psrldq xmm1, 0xe */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (14 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 14 ? (lo >> (14 * 8)) | (hi << (64 - (14 * 8))) : lo; xmm[1].q[1] = hi >> (14 * 8); } }
    /* 0086cdc5: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086cdc9: pslldq xmm3, 2 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (2 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (2 * 8); xmm[3].q[1] = 2 ? (hi << (2 * 8)) | (lo >> (64 - (2 * 8))) : hi; } }
    /* 0086cdce: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086cdd2: psrldq xmm2, 0xe */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (14 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 14 ? (lo >> (14 * 8)) | (hi << (64 - (14 * 8))) : lo; xmm[2].q[1] = hi >> (14 * 8); } }
    /* 0086cdd7: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086cddb: pslldq xmm0, 2 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (2 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (2 * 8); xmm[0].q[1] = 2 ? (hi << (2 * 8)) | (lo >> (64 - (2 * 8))) : hi; } }
    /* 0086cde0: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086cde4: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086cde8: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086cded: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cdf0: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cdf3: jge 0x86cdb0 */ if ((fS==fO)) goto L_0086cdb0;
L_0086cdf5:; BB(0x0086cdf5);
    /* 0086cdf5: jmp 0x86ce45 */ goto L_0086ce45;
L_0086ce00:; BB(0x0086ce00);
    /* 0086ce00: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ce03: movdqa xmm3, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[3] = s; }
    /* 0086ce08: movdqa xmm0, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[0] = s; }
    /* 0086ce0d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ce10: psrldq xmm1, 0xf */ { u64 lo = xmm[1].q[0], hi = xmm[1].q[1]; if (15 >= 16) { xmm[1].q[0] = 0; xmm[1].q[1] = 0; } else { xmm[1].q[0] = 15 ? (lo >> (15 * 8)) | (hi << (64 - (15 * 8))) : lo; xmm[1].q[1] = hi >> (15 * 8); } }
    /* 0086ce15: movdqa xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 0086ce19: pslldq xmm3, 1 */ { u64 lo = xmm[3].q[0], hi = xmm[3].q[1]; if (1 >= 16) { xmm[3].q[0] = 0; xmm[3].q[1] = 0; } else { xmm[3].q[0] = lo << (1 * 8); xmm[3].q[1] = 1 ? (hi << (1 * 8)) | (lo >> (64 - (1 * 8))) : hi; } }
    /* 0086ce1e: por xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q | b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q | b.q; xmm[3].q[1] = r.q; }
    /* 0086ce22: psrldq xmm2, 0xf */ { u64 lo = xmm[2].q[0], hi = xmm[2].q[1]; if (15 >= 16) { xmm[2].q[0] = 0; xmm[2].q[1] = 0; } else { xmm[2].q[0] = 15 ? (lo >> (15 * 8)) | (hi << (64 - (15 * 8))) : lo; xmm[2].q[1] = hi >> (15 * 8); } }
    /* 0086ce27: movdqa xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 0086ce2b: pslldq xmm0, 1 */ { u64 lo = xmm[0].q[0], hi = xmm[0].q[1]; if (1 >= 16) { xmm[0].q[0] = 0; xmm[0].q[1] = 0; } else { xmm[0].q[0] = lo << (1 * 8); xmm[0].q[1] = 1 ? (hi << (1 * 8)) | (lo >> (64 - (1 * 8))) : hi; } }
    /* 0086ce30: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 0086ce34: movdqa xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 0086ce38: movdqa xmmword ptr [edx + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[0], 16);
    /* 0086ce3d: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ce40: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ce43: jge 0x86ce00 */ if ((fS==fO)) goto L_0086ce00;
L_0086ce45:; BB(0x0086ce45);
    /* 0086ce45: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ce47: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ce49: mov eax, esi */ r_eax = r_esi;
    /* 0086ce4b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086ce4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ce4e: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086ce4e, "jump table entry is not a known target"); } }
L_0086ce60:; BB(0x0086ce60);
    /* 0086ce60: add esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ce66: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ce6c: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ce72: movdqu xmm0, xmmword ptr [esi - 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff80u), 16); xmm[0] = s; }
    /* 0086ce77: movdqu xmm1, xmmword ptr [esi - 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff90u), 16); xmm[1] = s; }
    /* 0086ce7c: movdqu xmm2, xmmword ptr [esi - 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffa0u), 16); xmm[2] = s; }
    /* 0086ce81: movdqu xmm3, xmmword ptr [esi - 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffb0u), 16); xmm[3] = s; }
    /* 0086ce86: movdqu xmm4, xmmword ptr [esi - 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffc0u), 16); xmm[4] = s; }
    /* 0086ce8b: movdqu xmm5, xmmword ptr [esi - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffd0u), 16); xmm[5] = s; }
    /* 0086ce90: movdqu xmm6, xmmword ptr [esi - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffe0u), 16); xmm[6] = s; }
    /* 0086ce95: movdqu xmm7, xmmword ptr [esi - 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xfffffff0u), 16); xmm[7] = s; }
    /* 0086ce9a: movntdq xmmword ptr [edx - 0x80], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff80u), &xmm[0], 16);
    /* 0086ce9f: movntdq xmmword ptr [edx - 0x70], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff90u), &xmm[1], 16);
    /* 0086cea4: movntdq xmmword ptr [edx - 0x60], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa0u), &xmm[2], 16);
    /* 0086cea9: movntdq xmmword ptr [edx - 0x50], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb0u), &xmm[3], 16);
    /* 0086ceae: movntdq xmmword ptr [edx - 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc0u), &xmm[4], 16);
    /* 0086ceb3: movntdq xmmword ptr [edx - 0x30], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd0u), &xmm[5], 16);
    /* 0086ceb8: movntdq xmmword ptr [edx - 0x20], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe0u), &xmm[6], 16);
    /* 0086cebd: movntdq xmmword ptr [edx - 0x10], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xfffffff0u), &xmm[7], 16);
    /* 0086cec2: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cec8: jge 0x86ce60 */ if ((fS==fO)) goto L_0086ce60;
L_0086ceca:; BB(0x0086ceca);
    /* 0086ceca: mov eax, ecx */ r_eax = r_ecx;
    /* 0086cecc: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cecf: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086ced2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086ced4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ced6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ced8: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cedb: sfence  */ ;
    /* 0086cede: jmp dword ptr [eax*4 + 0x86d1b0] */ { u32 t = R32((u32)(r_eax*4+0x86d1b0u)); switch (t) { case 0x86d224u: goto L_0086d224; case 0x86d21au: goto L_0086d21a; case 0x86d210u: goto L_0086d210; case 0x86d206u: goto L_0086d206; case 0x86d1fcu: goto L_0086d1fc; case 0x86d1f2u: goto L_0086d1f2; case 0x86d1e8u: goto L_0086d1e8; case 0x86d1deu: goto L_0086d1de; case 0x86d1d4u: goto L_0086d1d4; default: UNSUP(0x0086cede, "jump table entry is not a known target"); } }
L_0086cee5:; BB(0x0086cee5);
    /* 0086cee5: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ceeb: jge 0x86cef0 */ if ((fS==fO)) goto L_0086cef0;
L_0086ceed:; BB(0x0086ceed);
    /* 0086ceed: jmp 0x86cf58 */ goto L_0086cf58;
L_0086cef0:; BB(0x0086cef0);
    /* 0086cef0: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cef6: movdqa xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086cefa: movdqa xmm1, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[1] = s; }
    /* 0086ceff: movdqa xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 0086cf03: movdqa xmmword ptr [edx + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[1], 16);
    /* 0086cf08: movdqa xmm2, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[2] = s; }
    /* 0086cf0d: movdqa xmm3, xmmword ptr [esi + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x30u), 16); xmm[3] = s; }
    /* 0086cf12: movdqa xmmword ptr [edx + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x20u), &xmm[2], 16);
    /* 0086cf17: movdqa xmmword ptr [edx + 0x30], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x30u), &xmm[3], 16);
    /* 0086cf1c: movdqa xmm4, xmmword ptr [esi + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x40u), 16); xmm[4] = s; }
    /* 0086cf21: movdqa xmm5, xmmword ptr [esi + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x50u), 16); xmm[5] = s; }
    /* 0086cf26: movdqa xmmword ptr [edx + 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x40u), &xmm[4], 16);
    /* 0086cf2b: movdqa xmmword ptr [edx + 0x50], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x50u), &xmm[5], 16);
    /* 0086cf30: movdqa xmm6, xmmword ptr [esi + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x60u), 16); xmm[6] = s; }
    /* 0086cf35: movdqa xmm7, xmmword ptr [esi + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x70u), 16); xmm[7] = s; }
    /* 0086cf3a: add esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cf40: movdqa xmmword ptr [edx + 0x60], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x60u), &xmm[6], 16);
    /* 0086cf45: movdqa xmmword ptr [edx + 0x70], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x70u), &xmm[7], 16);
    /* 0086cf4a: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cf50: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cf56: jge 0x86cef0 */ if ((fS==fO)) goto L_0086cef0;
L_0086cf58:; BB(0x0086cf58);
    /* 0086cf58: mov eax, ecx */ r_eax = r_ecx;
    /* 0086cf5a: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cf5d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086cf60: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cf62: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cf64: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cf66: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cf69: jmp dword ptr [eax*4 + 0x86cf70] */ { u32 t = R32((u32)(r_eax*4+0x86cf70u)); switch (t) { case 0x86cf70u: goto L_0086cf70; case 0x86d196u: goto L_0086d196; case 0x86d18cu: goto L_0086d18c; case 0x86d182u: goto L_0086d182; case 0x86d178u: goto L_0086d178; case 0x86d16eu: goto L_0086d16e; case 0x86d164u: goto L_0086d164; case 0x86d15au: goto L_0086d15a; case 0x86d150u: goto L_0086d150; case 0x86d146u: goto L_0086d146; default: UNSUP(0x0086cf69, "jump table entry is not a known target"); } }
L_0086cf70:; BB(0x0086cf70);
    /* 0086cf70: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 0086cf71: rol dword ptr [esi - 0x792e7400], 1 */ { u32 ad = (u32)(r_esi+0x86d18c00u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 0086cf77: add byte ptr [edx + 0x780086d1], al */ { u32 ad = (u32)(r_edx+0x780086d1u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086cf7d: rol dword ptr [esi - 0x792e9200], 1 */ { u32 ad = (u32)(r_esi+0x86d16e00u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 0086cf83: add byte ptr [ecx + edx*8 - 0x7a], ah */ { u32 ad = (u32)(r_ecx+r_edx*8+0xffffff86u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086cf87: add byte ptr [edx - 0x2f], bl */ { u32 ad = (u32)(r_edx+0xffffffd1u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086cf8a: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 0086cf8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086cf8d: rol dword ptr [esi - 0x792eba00], 1 */ { u32 ad = (u32)(r_esi+0x86d14600u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 0086cf93: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0086cf95: rcr bh, 0xe0 */ UNSUP(0x0086cf95, "rcr bh, 0xe0");
    /* 0086cf98: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086cf9d: jne 0x86d2a6 */ if (!fZ) goto L_0086d2a6;
L_0086cfa3:; BB(0x0086cfa3);
    /* 0086cfa3: test edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086cfa9: jne 0x86cfbb */ if (!fZ) goto L_0086cfbb;
L_0086cfab:; BB(0x0086cfab);
    /* 0086cfab: mov eax, esi */ r_eax = r_esi;
    /* 0086cfad: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086cfb0: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086cfb3: je 0x86d070 */ if (fZ) goto L_0086d070;
L_0086cfb9:; BB(0x0086cfb9);
    /* 0086cfb9: jmp 0x86cfd3 */ goto L_0086cfd3;
L_0086cfbb:; BB(0x0086cfbb);
    /* 0086cfbb: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cfbe: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086cfc0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0086cfc2: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cfc5: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cfc8: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086cfcb: jl 0x86d0dc */ if ((fS!=fO)) goto L_0086d0dc;
L_0086cfd1:; BB(0x0086cfd1);
    /* 0086cfd1: jmp 0x86cfab */ goto L_0086cfab;
L_0086cfd3:; BB(0x0086cfd3);
    /* 0086cfd3: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 0086cfd6: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086cfd9: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086cfdc: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086cfde: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086cfe1: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086cfe4: movq mm1, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[1] = (long double)(i64)(r.q); }
    /* 0086cfe7: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086cfea: movd mm2, eax */ { u64 v = r_eax; fpr[2] = (long double)(i64)v; }
    /* 0086cfed: sub eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cff0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cff2: movd mm3, eax */ { u64 v = r_eax; fpr[3] = (long double)(i64)v; }
    /* 0086cff5: sub eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cff8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086cffa: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086cffd: jmp 0x86d000 */ goto L_0086d000;
L_0086d000:; BB(0x0086d000);
    /* 0086d000: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d003: movq mm4, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d007: movq mm5, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d00b: movq mm6, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d00f: movq mm7, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d013: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d016: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d019: movq mm1, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d01c: psllq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d01f: por mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d022: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086d025: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d028: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d02b: movq mm1, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d02e: psllq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d031: por mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d034: movq qword ptr [edx + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086d038: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d03b: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d03e: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d041: psllq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d044: por mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d047: movq qword ptr [edx + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086d04b: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d04e: psrlq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[2]); r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d051: movq mm1, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[1] = (long double)(i64)(r.q); }
    /* 0086d054: psllq mm7, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; u32 c = (u32)(0xffu & (u64)(i64)fpr[3]); r.q = c > 63 ? 0 : (a.q << c); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d057: por mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086d05a: movq qword ptr [edx + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086d05e: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d061: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d064: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d067: jge 0x86d000 */ if ((fS==fO)) goto L_0086d000;
L_0086d069:; BB(0x0086d069);
    /* 0086d069: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d06b: jmp 0x86d0dc */ goto L_0086d0dc;
L_0086d070:; BB(0x0086d070);
    /* 0086d070: mov eax, dword ptr [0xae7f08] */ r_eax = R32((u32)(0xae7f08u));
    /* 0086d075: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086d077: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d07a: cmovle eax, ecx */ if ((fZ||fS!=fO)) { r_eax = r_ecx; }
    /* 0086d07d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d07f: jg 0x86d0f0 */ if ((!fZ&&fS==fO)) goto L_0086d0f0;
L_0086d081:; BB(0x0086d081);
    /* 0086d081: jmp 0x86d090 */ goto L_0086d090;
L_0086d090:; BB(0x0086d090);
    /* 0086d090: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d093: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d096: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086d099: movq mm1, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 0086d09d: movq qword ptr [edx + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086d0a1: movq mm2, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 0086d0a5: movq qword ptr [edx + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086d0a9: movq mm3, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[3] = (long double)(i64)(r.q); }
    /* 0086d0ad: movq qword ptr [edx + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086d0b1: movq mm4, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d0b5: movq qword ptr [edx + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_edx+0x20u), r.q); }
    /* 0086d0b9: movq mm5, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d0bd: movq qword ptr [edx + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_edx+0x28u), r.q); }
    /* 0086d0c1: movq mm6, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d0c5: movq qword ptr [edx + 0x30], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_edx+0x30u), r.q); }
    /* 0086d0c9: movq mm7, qword ptr [esi + 0x38] */ { MM64 r; r.q = R64((u32)(r_esi+0x38u)); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d0cd: movq qword ptr [edx + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_edx+0x38u), r.q); }
    /* 0086d0d1: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d0d4: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d0d7: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d0da: jge 0x86d090 */ if ((fS==fO)) goto L_0086d090;
L_0086d0dc:; BB(0x0086d0dc);
    /* 0086d0dc: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086d0de: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d0e0: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086d0e2: mov eax, esi */ r_eax = r_esi;
    /* 0086d0e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d0e5: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086d0e5, "jump table entry is not a known target"); } }
L_0086d0f0:; BB(0x0086d0f0);
    /* 0086d0f0: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086d0f3: prefetchnta byte ptr [edx + 0x40] */ ;
    /* 0086d0f7: prefetchnta byte ptr [edx + 0x60] */ ;
    /* 0086d0fb: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 0086d0fe: movntq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 0086d101: movq mm1, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 0086d105: movntq qword ptr [edx + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x8u), r.q); }
    /* 0086d109: movq mm2, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 0086d10d: movntq qword ptr [edx + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_edx+0x10u), r.q); }
    /* 0086d111: movq mm3, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[3] = (long double)(i64)(r.q); }
    /* 0086d115: movntq qword ptr [edx + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_edx+0x18u), r.q); }
    /* 0086d119: movq mm4, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[4] = (long double)(i64)(r.q); }
    /* 0086d11d: movntq qword ptr [edx + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_edx+0x20u), r.q); }
    /* 0086d121: movq mm5, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[5] = (long double)(i64)(r.q); }
    /* 0086d125: movntq qword ptr [edx + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_edx+0x28u), r.q); }
    /* 0086d129: movq mm6, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[6] = (long double)(i64)(r.q); }
    /* 0086d12d: movntq qword ptr [edx + 0x30], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_edx+0x30u), r.q); }
    /* 0086d131: movq mm7, qword ptr [esi + 0x38] */ { MM64 r; r.q = R64((u32)(r_esi+0x38u)); fpr[7] = (long double)(i64)(r.q); }
    /* 0086d135: movntq qword ptr [edx + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_edx+0x38u), r.q); }
    /* 0086d139: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086d13c: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086d13f: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086d142: jge 0x86d0f0 */ if ((fS==fO)) goto L_0086d0f0;
L_0086d144:; BB(0x0086d144);
    /* 0086d144: jmp 0x86d0dc */ goto L_0086d0dc;
L_0086d146:; BB(0x0086d146);
    /* 0086d146: movdqa xmm7, xmmword ptr [esi - 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff80u), 16); xmm[7] = s; }
    /* 0086d14b: movdqa xmmword ptr [edx - 0x80], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff80u), &xmm[7], 16);
L_0086d150:; BB(0x0086d150);
    /* 0086d150: movdqa xmm6, xmmword ptr [esi - 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff90u), 16); xmm[6] = s; }
    /* 0086d155: movdqa xmmword ptr [edx - 0x70], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff90u), &xmm[6], 16);
L_0086d15a:; BB(0x0086d15a);
    /* 0086d15a: movdqa xmm5, xmmword ptr [esi - 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffa0u), 16); xmm[5] = s; }
    /* 0086d15f: movdqa xmmword ptr [edx - 0x60], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa0u), &xmm[5], 16);
L_0086d164:; BB(0x0086d164);
    /* 0086d164: movdqa xmm4, xmmword ptr [esi - 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffb0u), 16); xmm[4] = s; }
    /* 0086d169: movdqa xmmword ptr [edx - 0x50], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb0u), &xmm[4], 16);
L_0086d16e:; BB(0x0086d16e);
    /* 0086d16e: movdqa xmm3, xmmword ptr [esi - 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffc0u), 16); xmm[3] = s; }
    /* 0086d173: movdqa xmmword ptr [edx - 0x40], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc0u), &xmm[3], 16);
L_0086d178:; BB(0x0086d178);
    /* 0086d178: movdqa xmm2, xmmword ptr [esi - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffd0u), 16); xmm[2] = s; }
    /* 0086d17d: movdqa xmmword ptr [edx - 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd0u), &xmm[2], 16);
L_0086d182:; BB(0x0086d182);
    /* 0086d182: movdqa xmm1, xmmword ptr [esi - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffe0u), 16); xmm[1] = s; }
    /* 0086d187: movdqa xmmword ptr [edx - 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe0u), &xmm[1], 16);
L_0086d18c:; BB(0x0086d18c);
    /* 0086d18c: movdqa xmm0, xmmword ptr [esi - 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xfffffff0u), 16); xmm[0] = s; }
    /* 0086d191: movdqa xmmword ptr [edx - 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xfffffff0u), &xmm[0], 16);
L_0086d196:; BB(0x0086d196);
    /* 0086d196: mov eax, esi */ r_eax = r_esi;
    /* 0086d198: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d199: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086d19b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086d19d: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086d19d, "jump table entry is not a known target"); } }
L_0086d1d4:; BB(0x0086d1d4);
    /* 0086d1d4: movdqu xmm7, xmmword ptr [esi - 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff80u), 16); xmm[7] = s; }
    /* 0086d1d9: movdqa xmmword ptr [edx - 0x80], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff80u), &xmm[7], 16);
L_0086d1de:; BB(0x0086d1de);
    /* 0086d1de: movdqu xmm6, xmmword ptr [esi - 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffff90u), 16); xmm[6] = s; }
    /* 0086d1e3: movdqa xmmword ptr [edx - 0x70], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffff90u), &xmm[6], 16);
L_0086d1e8:; BB(0x0086d1e8);
    /* 0086d1e8: movdqu xmm5, xmmword ptr [esi - 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffa0u), 16); xmm[5] = s; }
    /* 0086d1ed: movdqa xmmword ptr [edx - 0x60], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffa0u), &xmm[5], 16);
L_0086d1f2:; BB(0x0086d1f2);
    /* 0086d1f2: movdqu xmm4, xmmword ptr [esi - 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffb0u), 16); xmm[4] = s; }
    /* 0086d1f7: movdqa xmmword ptr [edx - 0x50], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffb0u), &xmm[4], 16);
L_0086d1fc:; BB(0x0086d1fc);
    /* 0086d1fc: movdqu xmm3, xmmword ptr [esi - 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffc0u), 16); xmm[3] = s; }
    /* 0086d201: movdqa xmmword ptr [edx - 0x40], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffc0u), &xmm[3], 16);
L_0086d206:; BB(0x0086d206);
    /* 0086d206: movdqu xmm2, xmmword ptr [esi - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffd0u), 16); xmm[2] = s; }
    /* 0086d20b: movdqa xmmword ptr [edx - 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffd0u), &xmm[2], 16);
L_0086d210:; BB(0x0086d210);
    /* 0086d210: movdqu xmm1, xmmword ptr [esi - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xffffffe0u), 16); xmm[1] = s; }
    /* 0086d215: movdqa xmmword ptr [edx - 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xffffffe0u), &xmm[1], 16);
L_0086d21a:; BB(0x0086d21a);
    /* 0086d21a: movdqu xmm0, xmmword ptr [esi - 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0xfffffff0u), 16); xmm[0] = s; }
    /* 0086d21f: movdqa xmmword ptr [edx - 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0xfffffff0u), &xmm[0], 16);
L_0086d224:; BB(0x0086d224);
    /* 0086d224: mov eax, esi */ r_eax = r_esi;
    /* 0086d226: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d227: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086d229: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086d22b: jmp dword ptr [ecx*4 + 0x86c530] */ { u32 t = R32((u32)(r_ecx*4+0x86c530u)); switch (t) { case 0x86c732u: goto L_0086c732; case 0x86c7a9u: goto L_0086c7a9; case 0x86c827u: goto L_0086c827; case 0x86c8a6u: goto L_0086c8a6; case 0x86c72cu: goto L_0086c72c; case 0x86c7a3u: goto L_0086c7a3; case 0x86c821u: goto L_0086c821; case 0x86c8a0u: goto L_0086c8a0; case 0x86c726u: goto L_0086c726; case 0x86c79du: goto L_0086c79d; case 0x86c81bu: goto L_0086c81b; case 0x86c89au: goto L_0086c89a; case 0x86c720u: goto L_0086c720; case 0x86c797u: goto L_0086c797; case 0x86c815u: goto L_0086c815; case 0x86c894u: goto L_0086c894; case 0x86c71au: goto L_0086c71a; case 0x86c791u: goto L_0086c791; case 0x86c80fu: goto L_0086c80f; case 0x86c88eu: goto L_0086c88e; case 0x86c714u: goto L_0086c714; case 0x86c78bu: goto L_0086c78b; case 0x86c809u: goto L_0086c809; case 0x86c888u: goto L_0086c888; case 0x86c70eu: goto L_0086c70e; case 0x86c785u: goto L_0086c785; case 0x86c803u: goto L_0086c803; case 0x86c882u: goto L_0086c882; case 0x86c708u: goto L_0086c708; case 0x86c77fu: goto L_0086c77f; case 0x86c7fdu: goto L_0086c7fd; case 0x86c87cu: goto L_0086c87c; case 0x86c702u: goto L_0086c702; case 0x86c779u: goto L_0086c779; case 0x86c7f7u: goto L_0086c7f7; case 0x86c876u: goto L_0086c876; case 0x86c6fcu: goto L_0086c6fc; case 0x86c773u: goto L_0086c773; case 0x86c7f1u: goto L_0086c7f1; case 0x86c870u: goto L_0086c870; case 0x86c6f6u: goto L_0086c6f6; case 0x86c76du: goto L_0086c76d; case 0x86c7ebu: goto L_0086c7eb; case 0x86c86au: goto L_0086c86a; case 0x86c6f0u: goto L_0086c6f0; case 0x86c767u: goto L_0086c767; case 0x86c7e5u: goto L_0086c7e5; case 0x86c864u: goto L_0086c864; case 0x86c6eau: goto L_0086c6ea; case 0x86c761u: goto L_0086c761; case 0x86c7dfu: goto L_0086c7df; case 0x86c85eu: goto L_0086c85e; case 0x86c6e4u: goto L_0086c6e4; case 0x86c75bu: goto L_0086c75b; case 0x86c7d9u: goto L_0086c7d9; case 0x86c858u: goto L_0086c858; case 0x86c6deu: goto L_0086c6de; case 0x86c755u: goto L_0086c755; case 0x86c7d3u: goto L_0086c7d3; case 0x86c852u: goto L_0086c852; case 0x86c6d8u: goto L_0086c6d8; case 0x86c74fu: goto L_0086c74f; case 0x86c7cdu: goto L_0086c7cd; case 0x86c84cu: goto L_0086c84c; case 0x86c6d2u: goto L_0086c6d2; case 0x86c749u: goto L_0086c749; case 0x86c7c7u: goto L_0086c7c7; case 0x86c846u: goto L_0086c846; case 0x86c6ccu: goto L_0086c6cc; case 0x86c743u: goto L_0086c743; case 0x86c7c1u: goto L_0086c7c1; case 0x86c840u: goto L_0086c840; case 0x86c6c6u: goto L_0086c6c6; case 0x86c73du: goto L_0086c73d; case 0x86c7bbu: goto L_0086c7bb; case 0x86c83au: goto L_0086c83a; case 0x86c6c0u: goto L_0086c6c0; case 0x86c737u: goto L_0086c737; case 0x86c7b5u: goto L_0086c7b5; case 0x86c834u: goto L_0086c834; default: UNSUP(0x0086d22b, "jump table entry is not a known target"); } }
L_0086d2a6:; BB(0x0086d2a6);
    /* 0086d2a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086d2a7: cld  */ rt_df = 0;
    /* 0086d2a8: mov edi, edx */ r_edi = r_edx;
    /* 0086d2aa: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086d2ac: jb 0x86d2b8 */ if (fC) goto L_0086d2b8;
L_0086d2ae:; BB(0x0086d2ae);
    /* 0086d2ae: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086d2b0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086d2b2: jae 0x86d2c1 */ if (!fC) goto L_0086d2c1;
L_0086d2b4:; BB(0x0086d2b4);
    /* 0086d2b4: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 0086d2b6: jmp 0x86d2c1 */ goto L_0086d2c1;
L_0086d2b8:; BB(0x0086d2b8);
    /* 0086d2b8: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086d2ba: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086d2bc: jae 0x86d2c0 */ if (!fC) goto L_0086d2c0;
L_0086d2be:; BB(0x0086d2be);
    /* 0086d2be: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
L_0086d2c0:; BB(0x0086d2c0);
    /* 0086d2c0: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
L_0086d2c1:; BB(0x0086d2c1);
    /* 0086d2c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086d2c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086d2c3: ret  */ FN_RET(0x0086c8e2); r_esp += 4; return;
}

void f_0086d277(void) /* _WinMain@16_120 */
{
    FN_ENTER(0x0086d277);
    /* 0086d277: jmp 0x86c8e2 */ f_0086c8e2(); return;
}

void f_008997f3(void) /* _WinMain@16_121 */
{
    FN_ENTER(0x008997f3);
    /* 008997f3: jmp 0x89976e */ f_0089976e(); return;
}

void f_00899c0b(void) /* _WinMain@16_122 */
{
    FN_ENTER(0x00899c0b);
    /* 00899c0b: jmp 0x8997dd */ f_008997dd(); return;
}

void f_0089e619(void) /* _WinMain@16_123 */
{
    FN_ENTER(0x0089e619);
    /* 0089e619: jmp 0x899f6b */ f_00899f6b(); return;
}

void f_0089e9bb(void) /* _WinMain@16_124 */
{
    FN_ENTER(0x0089e9bb);
    /* 0089e9bb: jmp 0x89a278 */ f_0089a278(); return;
}

void f_0089f215(void) /* _WinMain@16_125 */
{
    FN_ENTER(0x0089f215);
    /* 0089f215: jmp 0x89ea08 */ f_0089ea08(); return;
}

void f_008a2101(void) /* _WinMain@16_126 */
{
    FN_ENTER(0x008a2101);
    /* 008a2101: jmp 0x8a9d23 */ f_008a9d23(); return;
}

void f_008a635a(void) /* _WinMain@16_127 */
{
    FN_ENTER(0x008a635a);
    /* 008a635a: jmp 0x8aa8d5 */ f_008aa8d5(); return;
}

void f_008b3902(void) /* _WinMain@16_128 */
{
    FN_ENTER(0x008b3902);
    /* 008b3902: jmp 0x8b36b0 */ f_008b36b0(); return;
}

void f_008bb8d5(void) /* _WinMain@16_129 */
{
    FN_ENTER(0x008bb8d5);
    /* 008bb8d5: jmp 0x8bb9b7 */ f_008bb9b7(); return;
}

void f_008bb9b7(void) /* _WinMain@16_129_0 */
{
    FN_ENTER(0x008bb9b7);
    /* 008bb9b7: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb9ba: pfrcp mm2, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008bb9be: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb9c1: pfrcpit1 mm0, mm2 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008bb9c5: pfrcpit2 mm0, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008bb9c9: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bb9cd: ret  */ FN_RET(0x008bb9b7); r_esp += 4; return;
}

void f_008c8650(void) /* _WinMain@16_132 */
{
    FN_ENTER(0x008c8650);
    /* 008c8650: jmp 0x8c8830 */ f_008c8830(); return;
}

void f_008c9df1(void) /* _WinMain@16_134 */
{
    FN_ENTER(0x008c9df1);
    /* 008c9df1: jmp 0x8c9e00 */ f_008c9e00(); return;
}

void f_008c9e00(void) /* _WinMain@16_134_0 */
{
    FN_ENTER(0x008c9e00);
    /* 008c9e00: mov edx, 0xf */ r_edx = 0xfu;
    /* 008c9e05: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9e08: movlpd qword ptr [esp + 0x10], xmm0 */ W64((u32)(r_esp+0x10u), xmm[0].q[0]);
    /* 008c9e0e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008c9e12: mov edx, esp */ r_edx = r_esp;
    /* 008c9e14: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9e17: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008c9e1b: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9e1e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008c9e22: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008c9e25: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8c9e2au); f_00850eb4();
    /* 008c9e2a: movlpd xmm0, qword ptr [esp + 0x10] */ xmm[0].q[0] = R64((u32)(r_esp+0x10u));
    /* 008c9e30: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c9e33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9e36: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008c9e3c: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008c9e40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9e43: ret  */ FN_RET(0x008c9e00); r_esp += 4; return;
}

