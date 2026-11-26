#include "protos.h"

void f_0075d0b8(void) /* sub_75D0B8 */
{
    FN_ENTER(0x0075d0b8);
    /* 0075d0b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075d0bb: fld dword ptr [0x97493c] */ FPUSH(R_F32((u32)(0x97493cu)));
    /* 0075d0c1: movsx eax, byte ptr [ecx + 0x86] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x86u));
    /* 0075d0c8: movsx edx, byte ptr [ecx + 0x87] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x87u));
    /* 0075d0cf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0075d0d3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075d0d7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0075d0d9: fadd dword ptr [0x974940] */ ST(0) = ST(0) + R_F32((u32)(0x974940u));
    /* 0075d0df: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0075d0e3: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0075d0e7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0075d0e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075d0eb: fadd dword ptr [0x974938] */ ST(0) = ST(0) + R_F32((u32)(0x974938u));
    /* 0075d0f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075d0f3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075d0f6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0075d0fa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075d0fd: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0075d102: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d108: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d10c: call 0x75afb8 */ r_esp -= 4; W32(r_esp, 0x75d111u); f_0075afb8();
    /* 0075d111: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d114: ret 4 */ FN_RET(0x0075d0b8); r_esp += 8; return;
}

void f_0075d111(void)
{
    FN_ENTER(0x0075d111);
    /* 0075d111: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d114: ret 4 */ FN_RET(0x0075d111); r_esp += 8; return;
}

void f_0075d118(void) /* sub_75D118 */
{
    FN_ENTER(0x0075d118);
    /* 0075d118: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d119: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d11a: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d11c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0075d120: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d125: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 0075d12b: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0075d131: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0075d134: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0075d137: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0075d139: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d13e: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0075d142: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075d147: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0075d14b: mov ecx, esi */ r_ecx = r_esi;
    /* 0075d14d: call 0x72e7d0 */ r_esp -= 4; W32(r_esp, 0x75d152u); f_0072e7d0();
    /* 0075d152: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d157: mov ecx, esi */ r_ecx = r_esi;
    /* 0075d159: push 0x43390000 */ { u32 v = 0x43390000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d15e: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x75d163u); f_0072e7e4();
    /* 0075d163: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
    /* 0075d16a: mov eax, 0x44 */ r_eax = 0x44u;
    /* 0075d16f: mov word ptr [edi + 0x8a], ax */ W16((u32)(r_edi+0x8au), (u16)r_eax);
    /* 0075d176: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d178: call 0x75d18c */ r_esp -= 4; W32(r_esp, 0x75d17du); f_0075d18c();
    /* 0075d17d: mov byte ptr [edi + 0x85], 0 */ W8((u32)(r_edi+0x85u), 0x0u);
    /* 0075d184: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d185: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d186: ret 4 */ FN_RET(0x0075d118); r_esp += 8; return;
}

void f_0075d18c(void) /* sub_75D18C */
{
    FN_ENTER(0x0075d18c);
    /* 0075d18c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d18d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075d190: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d192: movsx eax, word ptr [edi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
    /* 0075d199: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d19a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0075d19e: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0075d1a2: fdiv dword ptr [0x974920] */ ST(0) = ST(0) / R_F32((u32)(0x974920u));
    /* 0075d1a8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075d1ab: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x75d1b0u); f_0083a248();
    /* 0075d1b0: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0075d1b3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0075d1b7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0075d1bc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075d1c1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0075d1c5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0075d1c9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0075d1cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0075d1d1: movsx eax, byte ptr [esp + 0x18] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x18u));
    /* 0075d1d6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0075d1da: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0075d1de: fmul dword ptr [0x974918] */ ST(0) = ST(0) * R_F32((u32)(0x974918u));
    /* 0075d1e4: fadd dword ptr [0x97491c] */ ST(0) = ST(0) + R_F32((u32)(0x97491cu));
    /* 0075d1ea: mov byte ptr [edi + 0x88], al */ W8((u32)(r_edi+0x88u), (u8)r_eax);
    /* 0075d1f0: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0075d1f3: mov dword ptr [edx], 0x431e0000 */ W32((u32)(r_edx), 0x431e0000u);
    /* 0075d1f9: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d1fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d1fd: ret  */ FN_RET(0x0075d18c); r_esp += 4; return;
}

void f_0075d200(void) /* sub_75D200 */
{
    FN_ENTER(0x0075d200);
    /* 0075d200: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d201: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d203: mov edx, 0xc0 */ r_edx = 0xc0u;
    /* 0075d208: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075d20c: mov dword ptr [edi + 0x8c], eax */ W32((u32)(r_edi+0x8cu), r_eax);
    /* 0075d212: mov word ptr [edi + 0x8a], dx */ W16((u32)(r_edi+0x8au), (u16)r_edx);
    /* 0075d219: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d21b: call 0x75d18c */ r_esp -= 4; W32(r_esp, 0x75d220u); f_0075d18c();
    /* 0075d220: mov byte ptr [edi + 0x85], 1 */ W8((u32)(r_edi+0x85u), 0x1u);
    /* 0075d227: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d228: ret 4 */ FN_RET(0x0075d200); r_esp += 8; return;
}

void f_0075d22c(void) /* sub_75D22C */
{
    FN_ENTER(0x0075d22c);
    /* 0075d22c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d22d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d22e: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d230: call 0x77d99c */ r_esp -= 4; W32(r_esp, 0x75d235u); f_0077d99c();
    /* 0075d235: mov esi, eax */ r_esi = r_eax;
    /* 0075d237: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75d23cu); f_0077d9f0();
    /* 0075d23c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075d23e: lea eax, [esi + eax + 0xc] */ r_eax = (u32)(r_esi+r_eax+0xcu);
    /* 0075d242: mov word ptr [edi + 0x8a], ax */ W16((u32)(r_edi+0x8au), (u16)r_eax);
    /* 0075d249: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d24b: call 0x75d18c */ r_esp -= 4; W32(r_esp, 0x75d250u); f_0075d18c();
    /* 0075d250: mov byte ptr [edi + 0x85], 2 */ W8((u32)(r_edi+0x85u), 0x2u);
    /* 0075d257: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d258: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d259: ret  */ FN_RET(0x0075d22c); r_esp += 4; return;
}

void f_0075d25c(void) /* sub_75D25C */
{
    FN_ENTER(0x0075d25c);
    /* 0075d25c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d25d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075d260: movsx edx, word ptr [ecx + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 0075d267: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0075d26b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075d26d: jl 0x75d272 */ if ((fS!=fO)) goto L_0075d272;
L_0075d26f:; BB(0x0075d26f);
    /* 0075d26f: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_0075d272:; BB(0x0075d272);
    /* 0075d272: fld dword ptr [0x974900] */ FPUSH(R_F32((u32)(0x974900u)));
    /* 0075d278: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 0075d27b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0075d27f: mov edx, eax */ r_edx = r_eax;
    /* 0075d281: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0075d283: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0075d28a: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0075d28d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075d28f: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0075d292: movsx ebx, dl */ r_ebx = (u32)(i32)(i8)(u8)r_edx;
    /* 0075d295: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0075d299: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075d29d: fmul dword ptr [0x97490c] */ ST(0) = ST(0) * R_F32((u32)(0x97490cu));
    /* 0075d2a3: fadd dword ptr [0x974910] */ ST(0) = ST(0) + R_F32((u32)(0x974910u));
    /* 0075d2a9: fadd dword ptr [0x974908] */ ST(0) = ST(0) + R_F32((u32)(0x974908u));
    /* 0075d2af: mov byte ptr [ecx + 0x87], bl */ W8((u32)(r_ecx+0x87u), (u8)r_ebx);
    /* 0075d2b5: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0075d2b8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0075d2b9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d2bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075d2bd: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075d2c0: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d2c2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075d2c4: mov byte ptr [ecx + 0x86], al */ W8((u32)(r_ecx+0x86u), (u8)r_eax);
    /* 0075d2ca: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075d2cd: lea edx, [ecx + 0x70] */ r_edx = (u32)(r_ecx+0x70u);
    /* 0075d2d0: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0075d2d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d2d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d2d5: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x75d2dau); f_0073f8a4();
    /* 0075d2da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d2dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d2de: ret 4 */ FN_RET(0x0075d25c); r_esp += 8; return;
}

void f_0075d2e4(void) /* sub_75D2E4 */
{
    FN_ENTER(0x0075d2e4);
    /* 0075d2e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d2e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d2e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d2e7: call 0x75ca48 */ r_esp -= 4; W32(r_esp, 0x75d2ecu); f_0075ca48();
    /* 0075d2ec: mov esi, dword ptr [0xa9b418] */ r_esi = R32((u32)(0xa9b418u));
    /* 0075d2f2: mov ebx, eax */ r_ebx = r_eax;
    /* 0075d2f4: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75d2f9u); f_0077d9f0();
    /* 0075d2f9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075d2fb: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d2fe: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075d300: jle 0x75d30e */ if ((fZ||fS!=fO)) goto L_0075d30e;
L_0075d302:; BB(0x0075d302);
    /* 0075d302: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d303: mov ecx, esi */ r_ecx = r_esi;
    /* 0075d305: call 0x77dc28 */ r_esp -= 4; W32(r_esp, 0x75d30au); f_0077dc28();
    /* 0075d30a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d30b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d30c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d30d: ret  */ FN_RET(0x0075d2e4); r_esp += 4; return;
L_0075d30e:; BB(0x0075d30e);
    /* 0075d30e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0075d311: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0075d313: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d315: mov edi, ebx */ r_edi = r_ebx;
    /* 0075d317: mov ebx, eax */ r_ebx = r_eax;
L_0075d319:; BB(0x0075d319);
    /* 0075d319: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d31a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075d31c: call 0x77dbf0 */ r_esp -= 4; W32(r_esp, 0x75d321u); f_0077dbf0();
    /* 0075d321: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d323: je 0x75d32e */ if (fZ) goto L_0075d32e;
L_0075d325:; BB(0x0075d325);
    /* 0075d325: mov edx, edi */ r_edx = r_edi;
    /* 0075d327: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075d32a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075d32c: jle 0x75d33d */ if ((fZ||fS!=fO)) goto L_0075d33d;
L_0075d32e:; BB(0x0075d32e);
    /* 0075d32e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075d331: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075d334: jl 0x75d319 */ if ((fS!=fO)) goto L_0075d319;
L_0075d336:; BB(0x0075d336);
    /* 0075d336: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0075d339: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d33a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d33b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d33c: ret  */ FN_RET(0x0075d2e4); r_esp += 4; return;
L_0075d33d:; BB(0x0075d33d);
    /* 0075d33d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0075d340: mov eax, ebx */ r_eax = r_ebx;
    /* 0075d342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d343: mov ecx, esi */ r_ecx = r_esi;
    /* 0075d345: call 0x77dc14 */ r_esp -= 4; W32(r_esp, 0x75d34au); f_0077dc14();
    /* 0075d34a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d34b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d34c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d34d: ret  */ FN_RET(0x0075d2e4); r_esp += 4; return;
}

void f_0075d350(void) /* sub_75D350 */
{
    FN_ENTER(0x0075d350);
    /* 0075d350: mov dword ptr [0xa9ad2c], 0x3f800000 */ W32((u32)(0xa9ad2cu), 0x3f800000u);
    /* 0075d35a: mov dword ptr [0xa9ad30], 0x41000000 */ W32((u32)(0xa9ad30u), 0x41000000u);
    /* 0075d364: mov dword ptr [0xa9ad34], 0x3fc00000 */ W32((u32)(0xa9ad34u), 0x3fc00000u);
    /* 0075d36e: ret  */ FN_RET(0x0075d350); r_esp += 4; return;
}

void f_0075d370(void) /* sub_75D370 */
{
    FN_ENTER(0x0075d370);
    /* 0075d370: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d371: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075d373: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d375: call 0x75d394 */ r_esp -= 4; W32(r_esp, 0x75d37au); f_0075d394();
    /* 0075d37a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075d37e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075d380: jne 0x75d386 */ if (!fZ) goto L_0075d386;
L_0075d382:; BB(0x0075d382);
    /* 0075d382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d383: ret 4 */ FN_RET(0x0075d370); r_esp += 8; return;
L_0075d386:; BB(0x0075d386);
    /* 0075d386: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d387: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75d38cu); f_005c2f74();
    /* 0075d38c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d38d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d38e: ret 4 */ FN_RET(0x0075d370); r_esp += 8; return;
}

void f_0075d394(void) /* sub_75D394 */
{
    FN_ENTER(0x0075d394);
    /* 0075d394: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d395: mov ebp, esp */ r_ebp = r_esp;
    /* 0075d397: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075d399: push 0x8f3394 */ { u32 v = 0x8f3394u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d39e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075d3a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d3a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075d3ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075d3af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075d3b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075d3b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075d3b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075d3bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075d3be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075d3c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075d3c8: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0075d3ce: mov dword ptr [eax], 0xb42c18 */ W32((u32)(r_eax), 0xb42c18u);
    /* 0075d3d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d3d6: je 0x75d3e2 */ if (fZ) goto L_0075d3e2;
L_0075d3d8:; BB(0x0075d3d8);
    /* 0075d3d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d3da: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x75d3dfu); f_00728a10();
    /* 0075d3df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075d3e2:; BB(0x0075d3e2);
    /* 0075d3e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075d3e9: mov ecx, eax */ r_ecx = r_eax;
    /* 0075d3eb: call 0x714148 */ r_esp -= 4; W32(r_esp, 0x75d3f0u); f_00714148();
    /* 0075d3f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075d3f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075d3fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0075d3fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075d3fd: ret  */ FN_RET(0x0075d394); r_esp += 4; return;
}

void f_0075d400(void) /* sub_75D400 */
{
    FN_ENTER(0x0075d400);
    /* 0075d400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d401: mov ebp, esp */ r_ebp = r_esp;
    /* 0075d403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075d405: push 0x8f33ca */ { u32 v = 0x8f33cau; r_esp -= 4; W32(r_esp, v); }
    /* 0075d40a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075d410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d411: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075d418: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075d41b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075d41e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0075d421: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0075d424: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0075d427: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0075d42b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0075d42e: push 0x9749f0 */ { u32 v = 0x9749f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d433: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d436: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0075d439: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075d43c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0075d43f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0075d442: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075d445: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x75d44au); f_00714468();
    /* 0075d44a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075d451: push 0x47436e00 */ { u32 v = 0x47436e00u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d456: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075d459: mov dword ptr [ecx], 0xb42c18 */ W32((u32)(r_ecx), 0xb42c18u);
    /* 0075d45f: mov eax, dword ptr [0x9f57a0] */ r_eax = R32((u32)(0x9f57a0u));
    /* 0075d464: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0075d467: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75d46cu); f_00712624();
    /* 0075d46c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075d46f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075d472: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075d475: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075d478: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d47a: mov byte ptr [esi + 0x68], al */ W8((u32)(r_esi+0x68u), (u8)r_eax);
    /* 0075d47d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0075d480: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d482: mov word ptr [esi + 0x6a], ax */ W16((u32)(r_esi+0x6au), (u16)r_eax);
    /* 0075d486: mov word ptr [esi + 0x6c], ax */ W16((u32)(r_esi+0x6cu), (u16)r_eax);
    /* 0075d48a: mov word ptr [esi + 0x6e], dx */ W16((u32)(r_esi+0x6eu), (u16)r_edx);
    /* 0075d48e: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 0075d491: mov dword ptr [esi + 0x7c], ecx */ W32((u32)(r_esi+0x7cu), r_ecx);
    /* 0075d494: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 0075d49a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x75d49fu); f_008581c5();
    /* 0075d49f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075d4a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075d4a5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0075d4a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d4aa: je 0x75d53c */ if (fZ) goto L_0075d53c;
L_0075d4b0:; BB(0x0075d4b0);
    /* 0075d4b0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0075d4b7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0075d4be: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d4c0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75d4c5u); f_0079317c();
    /* 0075d4c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d4c6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075d4c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075d4cc: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0075d4d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d4d2: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x75d4d7u); f_00761320();
    /* 0075d4d7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0075d4de:; BB(0x0075d4de);
    /* 0075d4de: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075d4e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075d4e4: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 0075d4ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075d4f1: push dword ptr [0xa9b418] */ { u32 v = R32((u32)(0xa9b418u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d4f7: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0075d4fa: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075d4fd: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0075d500: mov dword ptr [ecx + 0x8c], 0x41700000 */ W32((u32)(r_ecx+0x8cu), 0x41700000u);
    /* 0075d50a: mov dword ptr [ecx + 0x90], 0x42440000 */ W32((u32)(r_ecx+0x90u), 0x42440000u);
    /* 0075d514: mov dword ptr [ecx + 0x94], 0x3f800000 */ W32((u32)(r_ecx+0x94u), 0x3f800000u);
    /* 0075d51e: call 0x714584 */ r_esp -= 4; W32(r_esp, 0x75d523u); f_00714584();
    /* 0075d523: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075d526: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075d529: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075d52c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075d52f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075d536: mov esp, ebp */ r_esp = r_ebp;
    /* 0075d538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075d539: ret 0x10 */ FN_RET(0x0075d400); r_esp += 20; return;
L_0075d53c:; BB(0x0075d53c);
    /* 0075d53c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d53e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075d541: jmp 0x75d4de */ goto L_0075d4de;
}

void f_0075d544(void) /* sub_75D544 */
{
    FN_ENTER(0x0075d544);
    /* 0075d544: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d545: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d547: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075d54a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075d54c: jne 0x75d555 */ if (!fZ) goto L_0075d555;
L_0075d54e:; BB(0x0075d54e);
    /* 0075d54e: mov dword ptr [edi + 0x5c], 0x1000000 */ W32((u32)(r_edi+0x5cu), 0x1000000u);
L_0075d555:; BB(0x0075d555);
    /* 0075d555: movzx eax, byte ptr [edi + 0x68] */ r_eax = (u32)R8((u32)(r_edi+0x68u));
    /* 0075d559: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075d55b: jne 0x75d5c4 */ if (!fZ) goto L_0075d5c4;
L_0075d55d:; BB(0x0075d55d);
    /* 0075d55d: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d55f: call 0x75d600 */ r_esp -= 4; W32(r_esp, 0x75d564u); f_0075d600();
    /* 0075d564: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d569u); f_00694c6c();
    /* 0075d569: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0075d56f: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075d575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d576: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d579: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d57b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d57d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d57f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d586: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75d58bu); f_007c1160();
    /* 0075d58b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d58d: je 0x75d596 */ if (fZ) goto L_0075d596;
L_0075d58f:; BB(0x0075d58f);
    /* 0075d58f: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d591: call 0x75d794 */ r_esp -= 4; W32(r_esp, 0x75d596u); f_0075d794();
L_0075d596:; BB(0x0075d596);
    /* 0075d596: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d59bu); f_00694c6c();
    /* 0075d59b: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075d5a1: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d5a4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d5a6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d5a8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d5aa: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075d5ac: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d5b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d5b4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75d5b9u); f_007c1160();
    /* 0075d5b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d5bb: je 0x75d5c4 */ if (fZ) goto L_0075d5c4;
L_0075d5bd:; BB(0x0075d5bd);
    /* 0075d5bd: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d5bf: call 0x75d7c4 */ r_esp -= 4; W32(r_esp, 0x75d5c4u); f_0075d7c4();
L_0075d5c4:; BB(0x0075d5c4);
    /* 0075d5c4: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d5c6: call 0x75d7f4 */ r_esp -= 4; W32(r_esp, 0x75d5cbu); f_0075d7f4();
    /* 0075d5cb: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d5cd: call 0x75d84c */ r_esp -= 4; W32(r_esp, 0x75d5d2u); f_0075d84c();
    /* 0075d5d2: fild dword ptr [edi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x5cu)));
    /* 0075d5d5: fcomp dword ptr [0x9749ec] */ fx_compare(ST(0), R_F32((u32)(0x9749ecu))); FPOP();
    /* 0075d5db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075d5dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075d5de: jb 0x75d5eb */ if (fC) goto L_0075d5eb;
L_0075d5e0:; BB(0x0075d5e0);
    /* 0075d5e0: mov ecx, dword ptr [edi + 0x88] */ r_ecx = R32((u32)(r_edi+0x88u));
    /* 0075d5e6: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x75d5ebu); f_00761388();
L_0075d5eb:; BB(0x0075d5eb);
    /* 0075d5eb: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d5ed: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x75d5f2u); f_00710db4();
    /* 0075d5f2: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0075d5f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d5f6: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d5f8: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x75d5fdu); f_0072a5ec();
    /* 0075d5fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d5fe: ret  */ FN_RET(0x0075d544); r_esp += 4; return;
}

void f_0075d600(void) /* sub_75D600 */
{
    FN_ENTER(0x0075d600);
    /* 0075d600: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d601: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075d603: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d608u); f_00694c6c();
    /* 0075d608: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 0075d60e: or edx, dword ptr [0xa0f668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075d614: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d617: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d619: or edx, dword ptr [0xa0f670] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075d61f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d621: or edx, dword ptr [0xa0f66c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075d627: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d628: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d62a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d631: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x75d636u); f_007c1100();
    /* 0075d636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075d638: jne 0x75d63c */ if (!fZ) goto L_0075d63c;
L_0075d63a:; BB(0x0075d63a);
    /* 0075d63a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d63b: ret  */ FN_RET(0x0075d600); r_esp += 4; return;
L_0075d63c:; BB(0x0075d63c);
    /* 0075d63c: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d641u); f_00694c6c();
    /* 0075d641: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d647: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d64a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d64c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d64e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d650: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d657: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x75d65cu); f_007c1100();
    /* 0075d65c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d65e: je 0x75d665 */ if (fZ) goto L_0075d665;
L_0075d660:; BB(0x0075d660);
    /* 0075d660: add word ptr [ebx + 0x6a], 1 */ { u32 ad = (u32)(r_ebx+0x6au);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0075d665:; BB(0x0075d665);
    /* 0075d665: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d66au); f_00694c6c();
    /* 0075d66a: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d670: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d673: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d675: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d677: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d679: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d680: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x75d685u); f_007c1100();
    /* 0075d685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d687: je 0x75d68e */ if (fZ) goto L_0075d68e;
L_0075d689:; BB(0x0075d689);
    /* 0075d689: add word ptr [ebx + 0x6a], -1 */ { u32 ad = (u32)(r_ebx+0x6au);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0075d68e:; BB(0x0075d68e);
    /* 0075d68e: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d693u); f_00694c6c();
    /* 0075d693: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d699: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d69c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d69e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d6a0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d6a2: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d6a9: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x75d6aeu); f_007c1100();
    /* 0075d6ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d6b0: je 0x75d6b7 */ if (fZ) goto L_0075d6b7;
L_0075d6b2:; BB(0x0075d6b2);
    /* 0075d6b2: add word ptr [ebx + 0x6c], -1 */ { u32 ad = (u32)(r_ebx+0x6cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0075d6b7:; BB(0x0075d6b7);
    /* 0075d6b7: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d6bcu); f_00694c6c();
    /* 0075d6bc: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d6c2: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d6c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d6c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d6c9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d6cb: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d6d2: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x75d6d7u); f_007c1100();
    /* 0075d6d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d6d9: je 0x75d6e0 */ if (fZ) goto L_0075d6e0;
L_0075d6db:; BB(0x0075d6db);
    /* 0075d6db: add word ptr [ebx + 0x6c], 1 */ { u32 ad = (u32)(r_ebx+0x6cu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0075d6e0:; BB(0x0075d6e0);
    /* 0075d6e0: movsx eax, byte ptr [ebx + 0x69] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x69u));
    /* 0075d6e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d6e6: je 0x75d751 */ if (fZ) goto L_0075d751;
L_0075d6e8:; BB(0x0075d6e8);
    /* 0075d6e8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d6eb: je 0x75d751 */ if (fZ) goto L_0075d751;
L_0075d6ed:; BB(0x0075d6ed);
    /* 0075d6ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d6f0: je 0x75d6fb */ if (fZ) goto L_0075d6fb;
L_0075d6f2:; BB(0x0075d6f2);
    /* 0075d6f2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075d6f5: jne 0x75d791 */ if (!fZ) goto L_0075d791;
L_0075d6fb:; BB(0x0075d6fb);
    /* 0075d6fb: movsx eax, word ptr [ebx + 0x6a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x6au));
    /* 0075d6ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075d701: jge 0x75d70b */ if ((fS==fO)) goto L_0075d70b;
L_0075d703:; BB(0x0075d703);
    /* 0075d703: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d705: mov word ptr [ebx + 0x6a], ax */ W16((u32)(r_ebx+0x6au), (u16)r_eax);
    /* 0075d709: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0075d70b:; BB(0x0075d70b);
    /* 0075d70b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075d70e: jl 0x75d71e */ if ((fS!=fO)) goto L_0075d71e;
L_0075d710:; BB(0x0075d710);
    /* 0075d710: mov eax, 1 */ r_eax = 0x1u;
    /* 0075d715: mov word ptr [ebx + 0x6a], ax */ W16((u32)(r_ebx+0x6au), (u16)r_eax);
    /* 0075d719: mov eax, 1 */ r_eax = 0x1u;
L_0075d71e:; BB(0x0075d71e);
    /* 0075d71e: movsx edx, word ptr [ebx + 0x6c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6cu));
    /* 0075d722: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075d724: jge 0x75d72e */ if ((fS==fO)) goto L_0075d72e;
L_0075d726:; BB(0x0075d726);
    /* 0075d726: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075d728: mov word ptr [ebx + 0x6c], dx */ W16((u32)(r_ebx+0x6cu), (u16)r_edx);
    /* 0075d72c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075d72e:; BB(0x0075d72e);
    /* 0075d72e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075d731: jl 0x75d741 */ if ((fS!=fO)) goto L_0075d741;
L_0075d733:; BB(0x0075d733);
    /* 0075d733: mov edx, 1 */ r_edx = 0x1u;
    /* 0075d738: mov word ptr [ebx + 0x6c], dx */ W16((u32)(r_ebx+0x6cu), (u16)r_edx);
    /* 0075d73c: mov edx, 1 */ r_edx = 0x1u;
L_0075d741:; BB(0x0075d741);
    /* 0075d741: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075d743: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075d745: mov dword ptr [ebx + 0x74], edx */ W32((u32)(r_ebx+0x74u), r_edx);
    /* 0075d748: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d74a: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x75d74fu); f_00714598();
    /* 0075d74f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d750: ret  */ FN_RET(0x0075d600); r_esp += 4; return;
L_0075d751:; BB(0x0075d751);
    /* 0075d751: movsx edx, word ptr [ebx + 0x6a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6au));
    /* 0075d755: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d757: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075d759: jg 0x75d75d */ if ((!fZ&&fS==fO)) goto L_0075d75d;
L_0075d75b:; BB(0x0075d75b);
    /* 0075d75b: mov edx, eax */ r_edx = r_eax;
L_0075d75d:; BB(0x0075d75d);
    /* 0075d75d: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075d760: jl 0x75d76d */ if ((fS!=fO)) goto L_0075d76d;
L_0075d762:; BB(0x0075d762);
    /* 0075d762: mov eax, 0x3f */ r_eax = 0x3fu;
    /* 0075d767: mov word ptr [ebx + 0x6a], ax */ W16((u32)(r_ebx+0x6au), (u16)r_eax);
    /* 0075d76b: jmp 0x75d771 */ goto L_0075d771;
L_0075d76d:; BB(0x0075d76d);
    /* 0075d76d: mov word ptr [ebx + 0x6a], dx */ W16((u32)(r_ebx+0x6au), (u16)r_edx);
L_0075d771:; BB(0x0075d771);
    /* 0075d771: movsx edx, word ptr [ebx + 0x6c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6cu));
    /* 0075d775: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d777: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075d779: jg 0x75d77d */ if ((!fZ&&fS==fO)) goto L_0075d77d;
L_0075d77b:; BB(0x0075d77b);
    /* 0075d77b: mov edx, eax */ r_edx = r_eax;
L_0075d77d:; BB(0x0075d77d);
    /* 0075d77d: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075d780: jge 0x75d788 */ if ((fS==fO)) goto L_0075d788;
L_0075d782:; BB(0x0075d782);
    /* 0075d782: mov word ptr [ebx + 0x6c], dx */ W16((u32)(r_ebx+0x6cu), (u16)r_edx);
    /* 0075d786: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d787: ret  */ FN_RET(0x0075d600); r_esp += 4; return;
L_0075d788:; BB(0x0075d788);
    /* 0075d788: mov eax, 0x3f */ r_eax = 0x3fu;
    /* 0075d78d: mov word ptr [ebx + 0x6c], ax */ W16((u32)(r_ebx+0x6cu), (u16)r_eax);
L_0075d791:; BB(0x0075d791);
    /* 0075d791: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d792: ret  */ FN_RET(0x0075d600); r_esp += 4; return;
}

void f_0075d794(void) /* sub_75D794 */
{
    FN_ENTER(0x0075d794);
    /* 0075d794: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d795: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d797: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d79a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d79c: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7a1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75d7a6u); f_00814298();
    /* 0075d7a6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075d7a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7ab: movzx eax, byte ptr [edi + 0x68] */ r_eax = (u32)R8((u32)(r_edi+0x68u));
    /* 0075d7af: mov ecx, dword ptr [edi + 0x88] */ r_ecx = R32((u32)(r_edi+0x88u));
    /* 0075d7b5: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075d7ba: mov byte ptr [edi + 0x68], al */ W8((u32)(r_edi+0x68u), (u8)r_eax);
    /* 0075d7bd: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75d7c2u); f_00760acc();
    /* 0075d7c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d7c3: ret  */ FN_RET(0x0075d794); r_esp += 4; return;
}

void f_0075d7c4(void) /* sub_75D7C4 */
{
    FN_ENTER(0x0075d7c4);
    /* 0075d7c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7c5: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d7c7: movzx eax, byte ptr [edi + 0x68] */ r_eax = (u32)R8((u32)(r_edi+0x68u));
    /* 0075d7cb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075d7cd: je 0x75d7d1 */ if (fZ) goto L_0075d7d1;
L_0075d7cf:; BB(0x0075d7cf);
    /* 0075d7cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d7d0: ret  */ FN_RET(0x0075d7c4); r_esp += 4; return;
L_0075d7d1:; BB(0x0075d7d1);
    /* 0075d7d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075d7d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7d6: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7db: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75d7e0u); f_00814298();
    /* 0075d7e0: movzx eax, byte ptr [edi + 0x68] */ r_eax = (u32)R8((u32)(r_edi+0x68u));
    /* 0075d7e4: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075d7e9: mov byte ptr [edi + 0x68], al */ W8((u32)(r_edi+0x68u), (u8)r_eax);
    /* 0075d7ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d7ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d7f0: ret  */ FN_RET(0x0075d7c4); r_esp += 4; return;
}

void f_0075d7f4(void) /* sub_75D7F4 */
{
    FN_ENTER(0x0075d7f4);
    /* 0075d7f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d7f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075d7f7: movsx eax, byte ptr [ebx + 0x69] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x69u));
    /* 0075d7fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d7fd: je 0x75d804 */ if (fZ) goto L_0075d804;
L_0075d7ff:; BB(0x0075d7ff);
    /* 0075d7ff: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075d802: jne 0x75d84a */ if (!fZ) goto L_0075d84a;
L_0075d804:; BB(0x0075d804);
    /* 0075d804: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 0075d807: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075d80a: jae 0x75d84a */ if (!fC) goto L_0075d84a;
L_0075d80c:; BB(0x0075d80c);
    /* 0075d80c: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75d811u); f_00694c6c();
    /* 0075d811: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d817: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075d81a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d81c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d81e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075d820: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075d827: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75d82cu); f_007c1160();
    /* 0075d82c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075d82e: je 0x75d84a */ if (fZ) goto L_0075d84a;
L_0075d830:; BB(0x0075d830);
    /* 0075d830: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 0075d836: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0075d838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075d83a: je 0x75d844 */ if (fZ) goto L_0075d844;
L_0075d83c:; BB(0x0075d83c);
    /* 0075d83c: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0075d842: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d843: ret  */ FN_RET(0x0075d7f4); r_esp += 4; return;
L_0075d844:; BB(0x0075d844);
    /* 0075d844: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
L_0075d84a:; BB(0x0075d84a);
    /* 0075d84a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d84b: ret  */ FN_RET(0x0075d7f4); r_esp += 4; return;
}

void f_0075d84c(void) /* sub_75D84C */
{
    FN_ENTER(0x0075d84c);
    /* 0075d84c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d84d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d84e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d84f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d850: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d851: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075d853: movsx eax, byte ptr [ebx + 0x69] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x69u));
    /* 0075d857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d859: je 0x75d904 */ if (fZ) goto L_0075d904;
L_0075d85f:; BB(0x0075d85f);
    /* 0075d85f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d862: je 0x75d904 */ if (fZ) goto L_0075d904;
L_0075d868:; BB(0x0075d868);
    /* 0075d868: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d86b: jne 0x75d8a7 */ if (!fZ) goto L_0075d8a7;
L_0075d86d:; BB(0x0075d86d);
    /* 0075d86d: push dword ptr [ebx + 0x78] */ { u32 v = R32((u32)(r_ebx+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d870: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d872: call 0x714428 */ r_esp -= 4; W32(r_esp, 0x75d877u); f_00714428();
    /* 0075d877: mov esi, eax */ r_esi = r_eax;
    /* 0075d879: push dword ptr [ebx + 0x78] */ { u32 v = R32((u32)(r_ebx+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d87c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d87e: call 0x714438 */ r_esp -= 4; W32(r_esp, 0x75d883u); f_00714438();
    /* 0075d883: mov ebp, eax */ r_ebp = r_eax;
    /* 0075d885: push dword ptr [ebx + 0x78] */ { u32 v = R32((u32)(r_ebx+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d888: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d88a: call 0x714448 */ r_esp -= 4; W32(r_esp, 0x75d88fu); f_00714448();
    /* 0075d88f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075d891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d894: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d895: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075d89a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d89b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d89c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d89d: call 0x714198 */ r_esp -= 4; W32(r_esp, 0x75d8a2u); f_00714198();
    /* 0075d8a2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075d8a5: jmp 0x75d8b0 */ goto L_0075d8b0;
L_0075d8a7:; BB(0x0075d8a7);
    /* 0075d8a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075d8aa: jne 0x75d9c3 */ if (!fZ) goto L_0075d9c3;
L_0075d8b0:; BB(0x0075d8b0);
    /* 0075d8b0: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d8b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d8b5: call 0x714428 */ r_esp -= 4; W32(r_esp, 0x75d8bau); f_00714428();
    /* 0075d8ba: mov ebp, eax */ r_ebp = r_eax;
    /* 0075d8bc: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d8bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d8c1: call 0x714438 */ r_esp -= 4; W32(r_esp, 0x75d8c6u); f_00714438();
    /* 0075d8c6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0075d8c9: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d8cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d8ce: call 0x714448 */ r_esp -= 4; W32(r_esp, 0x75d8d3u); f_00714448();
    /* 0075d8d3: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d8d6: movzx edx, word ptr [ebx + 0x6e] */ r_edx = (u32)R16((u32)(r_ebx+0x6eu));
    /* 0075d8da: mov esi, dword ptr [ebx + 0x70] */ r_esi = R32((u32)(r_ebx+0x70u));
    /* 0075d8dd: movsx ecx, byte ptr [esi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0075d8e0: mov esi, dword ptr [ebx + 0x7c] */ r_esi = R32((u32)(r_ebx+0x7cu));
    /* 0075d8e3: mov edi, dword ptr [ebx + 0x80] */ r_edi = R32((u32)(r_ebx+0x80u));
    /* 0075d8e9: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d8eb: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d8ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d8ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d8ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d8f0: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0075d8f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d8f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d8f6: call 0x714198 */ r_esp -= 4; W32(r_esp, 0x75d8fbu); f_00714198();
    /* 0075d8fb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d8fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d8ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d900: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075d901: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d902: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d903: ret  */ FN_RET(0x0075d84c); r_esp += 4; return;
L_0075d904:; BB(0x0075d904);
    /* 0075d904: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d907: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d909: call 0x714458 */ r_esp -= 4; W32(r_esp, 0x75d90eu); f_00714458();
    /* 0075d90e: mov ebp, eax */ r_ebp = r_eax;
    /* 0075d910: movsx esi, word ptr [ebx + 0x6a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x6au));
    /* 0075d914: movsx edx, word ptr [ebx + 0x6c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6cu));
    /* 0075d918: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d919: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d91a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d91b: call 0x71433c */ r_esp -= 4; W32(r_esp, 0x75d920u); f_0071433c();
    /* 0075d920: movsx edi, word ptr [ebx + 0x6e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x6eu));
    /* 0075d924: mov esi, dword ptr [ebx + 0x7c] */ r_esi = R32((u32)(r_ebx+0x7cu));
    /* 0075d927: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 0075d92d: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d92f: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d931: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d932: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d933: call 0x714374 */ r_esp -= 4; W32(r_esp, 0x75d938u); f_00714374();
    /* 0075d938: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075d93b: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 0075d941: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075d943: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d945: jne 0x75d96b */ if (!fZ) goto L_0075d96b;
L_0075d947:; BB(0x0075d947);
    /* 0075d947: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 0075d94a: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075d94d: jae 0x75d9c3 */ if (!fC) goto L_0075d9c3;
L_0075d94f:; BB(0x0075d94f);
    /* 0075d94f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d950: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d952: call 0x714458 */ r_esp -= 4; W32(r_esp, 0x75d957u); f_00714458();
    /* 0075d957: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0075d95b: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075d961: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 0075d965: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d966: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d967: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075d968: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d969: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d96a: ret  */ FN_RET(0x0075d84c); r_esp += 4; return;
L_0075d96b:; BB(0x0075d96b);
    /* 0075d96b: push dword ptr [ebx + 0x78] */ { u32 v = R32((u32)(r_ebx+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d96e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075d970: call 0x714458 */ r_esp -= 4; W32(r_esp, 0x75d975u); f_00714458();
    /* 0075d975: mov ebp, eax */ r_ebp = r_eax;
    /* 0075d977: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0075d97b: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075d981: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0075d985: movsx esi, word ptr [ebx + 0x6a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x6au));
    /* 0075d989: movsx edi, word ptr [ebx + 0x6c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x6cu));
    /* 0075d98d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d98e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0075d990: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075d993: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 0075d996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d997: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d998: call 0x71433c */ r_esp -= 4; W32(r_esp, 0x75d99du); f_0071433c();
    /* 0075d99d: movsx eax, word ptr [ebx + 0x6e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x6eu));
    /* 0075d9a1: mov esi, dword ptr [ebx + 0x7c] */ r_esi = R32((u32)(r_ebx+0x7cu));
    /* 0075d9a4: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0075d9a6: mov ebx, dword ptr [ebx + 0x80] */ r_ebx = R32((u32)(r_ebx+0x80u));
    /* 0075d9ac: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075d9ae: mov edx, 0 */ r_edx = 0x0u;
    /* 0075d9b3: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0075d9b6: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d9b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d9b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075d9ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d9bb: call 0x714374 */ r_esp -= 4; W32(r_esp, 0x75d9c0u); f_00714374();
    /* 0075d9c0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0075d9c3:; BB(0x0075d9c3);
    /* 0075d9c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075d9c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d9c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075d9c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d9c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d9c8: ret  */ FN_RET(0x0075d84c); r_esp += 4; return;
}

void f_0075d9cc(void) /* sub_75D9CC */
{
    FN_ENTER(0x0075d9cc);
    /* 0075d9cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d9cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d9ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d9cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d9d0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075d9d3: mov edi, ecx */ r_edi = r_ecx;
    /* 0075d9d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d9d7: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x75d9dcu); f_00712644();
    /* 0075d9dc: mov esi, eax */ r_esi = r_eax;
    /* 0075d9de: mov ebp, dword ptr [esi + 0x10] */ r_ebp = R32((u32)(r_esi+0x10u));
    /* 0075d9e1: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 0075d9e4: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0075d9e7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0075d9eb: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 0075d9ee: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0075d9f1: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0075d9f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075d9f6: jge 0x75da07 */ if ((fS==fO)) goto L_0075da07;
L_0075d9f8:; BB(0x0075d9f8);
    /* 0075d9f8: fild dword ptr [edi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x5cu)));
    /* 0075d9fb: fdiv dword ptr [0x9749e8] */ ST(0) = ST(0) / R_F32((u32)(0x9749e8u));
    /* 0075da01: fst dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0));
    /* 0075da04: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
L_0075da07:; BB(0x0075da07);
    /* 0075da07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075da08: mov ecx, edi */ r_ecx = r_edi;
    /* 0075da0a: call 0x7119d4 */ r_esp -= 4; W32(r_esp, 0x75da0fu); f_007119d4();
    /* 0075da0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075da10: fld dword ptr [edi + 0x8c] */ FPUSH(R_F32((u32)(r_edi+0x8cu)));
    /* 0075da16: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 0075da19: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0075da1c: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0075da1f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075da21: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 0075da24: fld dword ptr [edi + 0x90] */ FPUSH(R_F32((u32)(r_edi+0x90u)));
    /* 0075da2a: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 0075da2d: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 0075da30: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0075da33: fmul dword ptr [edi + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x94u));
    /* 0075da39: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0075da3c: fmul dword ptr [edi + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x94u));
    /* 0075da42: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0075da45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075da46: mov ecx, edi */ r_ecx = r_edi;
    /* 0075da48: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x75da4du); f_0072a648();
    /* 0075da4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075da4e: mov ecx, edi */ r_ecx = r_edi;
    /* 0075da50: call 0x75da7c */ r_esp -= 4; W32(r_esp, 0x75da55u); f_0075da7c();
    /* 0075da55: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0075da59: mov dword ptr [esi + 0x10], ebp */ W32((u32)(r_esi+0x10u), r_ebp);
    /* 0075da5c: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 0075da5f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075da62: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0075da65: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075da68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075da69: mov ecx, dword ptr [edi + 0x88] */ r_ecx = R32((u32)(r_edi+0x88u));
    /* 0075da6f: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x75da74u); f_00761390();
    /* 0075da74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075da77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075da78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075da79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075da7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075da7b: ret  */ FN_RET(0x0075d9cc); r_esp += 4; return;
}

void f_0075da7c(void) /* sub_75DA7C */
{
    FN_ENTER(0x0075da7c);
    /* 0075da7c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075da7f: movsx eax, byte ptr [ecx + 0x69] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x69u));
    /* 0075da83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075da85: je 0x75dad1 */ if (fZ) goto L_0075dad1;
L_0075da87:; BB(0x0075da87);
    /* 0075da87: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075da8a: je 0x75dad1 */ if (fZ) goto L_0075dad1;
L_0075da8c:; BB(0x0075da8c);
    /* 0075da8c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075da8f: je 0x75da96 */ if (fZ) goto L_0075da96;
L_0075da91:; BB(0x0075da91);
    /* 0075da91: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075da94: jne 0x75dad1 */ if (!fZ) goto L_0075dad1;
L_0075da96:; BB(0x0075da96);
    /* 0075da96: push dword ptr [ecx + 0x74] */ { u32 v = R32((u32)(r_ecx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075da99: call 0x714428 */ r_esp -= 4; W32(r_esp, 0x75da9eu); f_00714428();
    /* 0075da9e: fld dword ptr [0x9749e4] */ FPUSH(R_F32((u32)(0x9749e4u)));
    /* 0075daa4: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0075daa7: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0075daa9: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0075daac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075daae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075dab1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075dab3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0075dab7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075daba: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0075dabf: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075dac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075dac5: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075dac9: call 0x75afb8 */ r_esp -= 4; W32(r_esp, 0x75daceu); f_0075afb8();
    /* 0075dace: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0075dad1:; BB(0x0075dad1);
    /* 0075dad1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dad4: ret 4 */ FN_RET(0x0075da7c); r_esp += 8; return;
}

void f_0075dad8(void) /* sub_75DAD8 */
{
    FN_ENTER(0x0075dad8);
    /* 0075dad8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dad9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dada: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075dadb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075dadc: mov esi, ecx */ r_esi = r_ecx;
    /* 0075dade: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0075dae2: mov dword ptr [esi + 0x94], 0x40000000 */ W32((u32)(r_esi+0x94u), 0x40000000u);
    /* 0075daec: mov dword ptr [esi + 0x84], eax */ W32((u32)(r_esi+0x84u), r_eax);
    /* 0075daf2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075daf4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075daf7: je 0x75db8c */ if (fZ) goto L_0075db8c;
L_0075dafd:; BB(0x0075dafd);
    /* 0075dafd: mov eax, 0x20 */ r_eax = 0x20u;
    /* 0075db02: mov word ptr [esi + 0x6a], ax */ W16((u32)(r_esi+0x6au), (u16)r_eax);
    /* 0075db06: mov word ptr [esi + 0x6c], ax */ W16((u32)(r_esi+0x6cu), (u16)r_eax);
L_0075db0a:; BB(0x0075db0a);
    /* 0075db0a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0075db0c:; BB(0x0075db0c);
    /* 0075db0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075db0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0075db0f: call 0x714428 */ r_esp -= 4; W32(r_esp, 0x75db14u); f_00714428();
    /* 0075db14: mov edi, eax */ r_edi = r_eax;
    /* 0075db16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075db17: mov ecx, esi */ r_ecx = r_esi;
    /* 0075db19: call 0x714438 */ r_esp -= 4; W32(r_esp, 0x75db1eu); f_00714438();
    /* 0075db1e: mov ebp, eax */ r_ebp = r_eax;
    /* 0075db20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075db21: mov ecx, esi */ r_ecx = r_esi;
    /* 0075db23: call 0x714448 */ r_esp -= 4; W32(r_esp, 0x75db28u); f_00714448();
    /* 0075db28: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0075db2c: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075db32: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0075db36: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0075db3a: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0075db40: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 0075db44: movzx ebp, word ptr [eax + 4] */ r_ebp = (u32)R16((u32)(r_eax+0x4u));
    /* 0075db48: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0075db4e: mov word ptr [eax + 4], bp */ W16((u32)(r_eax+0x4u), (u16)r_ebp);
    /* 0075db52: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075db55: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075db58: jl 0x75db0c */ if ((fS!=fO)) goto L_0075db0c;
L_0075db5a:; BB(0x0075db5a);
    /* 0075db5a: mov ebx, dword ptr [0xa9b418] */ r_ebx = R32((u32)(0xa9b418u));
    /* 0075db60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075db62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075db64: call 0x77dc6c */ r_esp -= 4; W32(r_esp, 0x75db69u); f_0077dc6c();
    /* 0075db69: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0075db6c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075db6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075db70: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075db72: call 0x77dc6c */ r_esp -= 4; W32(r_esp, 0x75db77u); f_0077dc6c();
    /* 0075db77: mov byte ptr [esi + 0x69], 0 */ W8((u32)(r_esi+0x69u), 0x0u);
    /* 0075db7b: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0075db7e: mov ecx, esi */ r_ecx = r_esi;
    /* 0075db80: call 0x75d84c */ r_esp -= 4; W32(r_esp, 0x75db85u); f_0075d84c();
    /* 0075db85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075db86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075db87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075db88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075db89: ret 4 */ FN_RET(0x0075dad8); r_esp += 8; return;
L_0075db8c:; BB(0x0075db8c);
    /* 0075db8c: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0075db91: mov word ptr [esi + 0x6a], ax */ W16((u32)(r_esi+0x6au), (u16)r_eax);
    /* 0075db95: mov edx, 0x20 */ r_edx = 0x20u;
    /* 0075db9a: mov word ptr [esi + 0x6c], dx */ W16((u32)(r_esi+0x6cu), (u16)r_edx);
    /* 0075db9e: jmp 0x75db0a */ goto L_0075db0a;
}

void f_0075dba4(void) /* sub_75DBA4 */
{
    FN_ENTER(0x0075dba4);
    /* 0075dba4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0075dba8: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0075dbab: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 0075dbb2: mov byte ptr [ecx + 0x69], 1 */ W8((u32)(r_ecx+0x69u), 0x1u);
    /* 0075dbb6: call 0x75d84c */ r_esp -= 4; W32(r_esp, 0x75dbbbu); f_0075d84c();
    /* 0075dbbb: ret 4 */ FN_RET(0x0075dba4); r_esp += 8; return;
}

void f_0075dbc0(void) /* sub_75DBC0 */
{
    FN_ENTER(0x0075dbc0);
    /* 0075dbc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dbc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dbc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075dbc3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dbc4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075dbc6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0075dbca: mov dword ptr [ebp + 0x84], eax */ W32((u32)(r_ebp+0x84u), r_eax);
    /* 0075dbd0: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0075dbd6: mov edi, dword ptr [0xa9b418] */ r_edi = R32((u32)(0xa9b418u));
    /* 0075dbdc: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75dbe1u); f_0077d9f0();
    /* 0075dbe1: movsx esi, word ptr [ebp + 0x6e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x6eu));
    /* 0075dbe5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075dbe7: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075dbea: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075dbec: jg 0x75dc32 */ if ((!fZ&&fS==fO)) goto L_0075dc32;
L_0075dbee:; BB(0x0075dbee);
    /* 0075dbee: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075dbf2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075dbf5: mov byte ptr [ebp + 0x69], 3 */ W8((u32)(r_ebp+0x69u), 0x3u);
    /* 0075dbf9: mov dword ptr [ebp + 0x70], edx */ W32((u32)(r_ebp+0x70u), r_edx);
    /* 0075dbfc: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0075dbfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075dc00: mov ebx, eax */ r_ebx = r_eax;
L_0075dc02:; BB(0x0075dc02);
    /* 0075dc02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075dc03: mov ecx, edi */ r_ecx = r_edi;
    /* 0075dc05: call 0x77dbf0 */ r_esp -= 4; W32(r_esp, 0x75dc0au); f_0077dbf0();
    /* 0075dc0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075dc0c: je 0x75dc1b */ if (fZ) goto L_0075dc1b;
L_0075dc0e:; BB(0x0075dc0e);
    /* 0075dc0e: mov edx, esi */ r_edx = r_esi;
    /* 0075dc10: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075dc13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075dc15: jle 0x75dce8 */ if ((fZ||fS!=fO)) goto L_0075dce8;
L_0075dc1b:; BB(0x0075dc1b);
    /* 0075dc1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075dc1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075dc21: jl 0x75dc02 */ if ((fS!=fO)) goto L_0075dc02;
L_0075dc23:; BB(0x0075dc23);
    /* 0075dc23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075dc26: mov eax, 1 */ r_eax = 0x1u;
    /* 0075dc2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075dc2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dc2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dc2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dc2f: ret 8 */ FN_RET(0x0075dbc0); r_esp += 12; return;
L_0075dc32:; BB(0x0075dc32);
    /* 0075dc32: mov dword ptr [ebp + 0x94], 0x40000000 */ W32((u32)(r_ebp+0x94u), 0x40000000u);
    /* 0075dc3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075dc3e: mov dword ptr [ebp + 0x74], esi */ W32((u32)(r_ebp+0x74u), r_esi);
    /* 0075dc41: mov ecx, edi */ r_ecx = r_edi;
    /* 0075dc43: call 0x77dc6c */ r_esp -= 4; W32(r_esp, 0x75dc48u); f_0077dc6c();
    /* 0075dc48: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075dc4b: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 0075dc4e: movsx eax, byte ptr [edi + esi*4 + 0x38] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+r_esi*4+0x38u));
    /* 0075dc53: mov word ptr [ebp + 0x6e], ax */ W16((u32)(r_ebp+0x6eu), (u16)r_eax);
    /* 0075dc57: movzx edx, byte ptr [edi + esi*4 + 0x39] */ r_edx = (u32)R8((u32)(r_edi+r_esi*4+0x39u));
    /* 0075dc5c: mov word ptr [ebp + 0x6a], dx */ W16((u32)(r_ebp+0x6au), (u16)r_edx);
    /* 0075dc60: movzx eax, byte ptr [edi + esi*4 + 0x3a] */ r_eax = (u32)R8((u32)(r_edi+r_esi*4+0x3au));
    /* 0075dc65: mov edx, dword ptr [ebp + 0x7c] */ r_edx = R32((u32)(r_ebp+0x7cu));
    /* 0075dc68: mov word ptr [ebp + 0x6c], ax */ W16((u32)(r_ebp+0x6cu), (u16)r_eax);
    /* 0075dc6c: movzx eax, byte ptr [edi + esi*4 + 0x3b] */ r_eax = (u32)R8((u32)(r_edi+r_esi*4+0x3bu));
    /* 0075dc71: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075dc74: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0075dc76: movzx esi, byte ptr [edi + esi*4 + 0x3b] */ r_esi = (u32)R8((u32)(r_edi+r_esi*4+0x3bu));
    /* 0075dc7b: mov edi, dword ptr [ebp + 0x80] */ r_edi = R32((u32)(r_ebp+0x80u));
    /* 0075dc81: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0075dc83: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0075dc86: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0075dc88: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0075dc8a:; BB(0x0075dc8a);
    /* 0075dc8a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dc8b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075dc8d: call 0x714428 */ r_esp -= 4; W32(r_esp, 0x75dc92u); f_00714428();
    /* 0075dc92: mov edi, eax */ r_edi = r_eax;
    /* 0075dc94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dc95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075dc97: call 0x714438 */ r_esp -= 4; W32(r_esp, 0x75dc9cu); f_00714438();
    /* 0075dc9c: mov ebx, eax */ r_ebx = r_eax;
    /* 0075dc9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dc9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075dca1: call 0x714448 */ r_esp -= 4; W32(r_esp, 0x75dca6u); f_00714448();
    /* 0075dca6: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0075dcaa: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075dcb0: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0075dcb4: movzx edi, word ptr [ebx + 4] */ r_edi = (u32)R16((u32)(r_ebx+0x4u));
    /* 0075dcb8: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0075dcbe: mov word ptr [ebx + 4], di */ W16((u32)(r_ebx+0x4u), (u16)r_edi);
    /* 0075dcc2: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0075dcc6: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075dccc: mov word ptr [eax + 4], bx */ W16((u32)(r_eax+0x4u), (u16)r_ebx);
    /* 0075dcd0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075dcd3: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075dcd6: jl 0x75dc8a */ if ((fS!=fO)) goto L_0075dc8a;
L_0075dcd8:; BB(0x0075dcd8);
    /* 0075dcd8: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075dcdb: mov byte ptr [ebp + 0x69], 2 */ W8((u32)(r_ebp+0x69u), 0x2u);
    /* 0075dcdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075dce1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075dce2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dce3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dce4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dce5: ret 8 */ FN_RET(0x0075dbc0); r_esp += 12; return;
L_0075dce8:; BB(0x0075dce8);
    /* 0075dce8: mov eax, ebx */ r_eax = r_ebx;
    /* 0075dcea: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075dced: movzx esi, word ptr [edi + eax*2 + 0x30] */ r_esi = (u32)R16((u32)(r_edi+r_eax*2+0x30u));
    /* 0075dcf2: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0075dcf5: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 0075dcf8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0075dcf9: mov ecx, eax */ r_ecx = r_eax;
    /* 0075dcfb: mov edi, eax */ r_edi = r_eax;
    /* 0075dcfd: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0075dcff: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0075dd01: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0075dd04: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0075dd06: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0075dd08: mov edx, dword ptr [ebp + 0x70] */ r_edx = R32((u32)(r_ebp+0x70u));
    /* 0075dd0b: mov word ptr [ebp + 0x6a], cx */ W16((u32)(r_ebp+0x6au), (u16)r_ecx);
    /* 0075dd0f: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0075dd12: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075dd14: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0075dd16: mov word ptr [ebp + 0x6c], ax */ W16((u32)(r_ebp+0x6cu), (u16)r_eax);
    /* 0075dd1a: mov eax, esi */ r_eax = r_esi;
    /* 0075dd1c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075dd21: mov word ptr [ebp + 0x6e], ax */ W16((u32)(r_ebp+0x6eu), (u16)r_eax);
    /* 0075dd25: mov eax, esi */ r_eax = r_esi;
    /* 0075dd27: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0075dd2a: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075dd2d: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0075dd2f: mov edx, dword ptr [ebp + 0x7c] */ r_edx = R32((u32)(r_ebp+0x7cu));
    /* 0075dd32: mov eax, esi */ r_eax = r_esi;
    /* 0075dd34: sar eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0075dd37: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075dd3a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0075dd3c: mov ebp, dword ptr [ebp + 0x80] */ r_ebp = R32((u32)(r_ebp+0x80u));
    /* 0075dd42: sar esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0075dd45: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075dd48: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0075dd4b: mov eax, 1 */ r_eax = 0x1u;
    /* 0075dd50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075dd51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dd52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dd53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dd54: ret 8 */ FN_RET(0x0075dbc0); r_esp += 12; return;
}

void f_0075dd58(void) /* sub_75DD58 */
{
    FN_ENTER(0x0075dd58);
    /* 0075dd58: mov dword ptr [0xa9ad3c], 0x3f800000 */ W32((u32)(0xa9ad3cu), 0x3f800000u);
    /* 0075dd62: mov dword ptr [0xa9ad40], 0x41000000 */ W32((u32)(0xa9ad40u), 0x41000000u);
    /* 0075dd6c: mov dword ptr [0xa9ad44], 0x3fc00000 */ W32((u32)(0xa9ad44u), 0x3fc00000u);
    /* 0075dd76: ret  */ FN_RET(0x0075dd58); r_esp += 4; return;
}

void f_0075dd78(void) /* sub_75DD78 */
{
    FN_ENTER(0x0075dd78);
    /* 0075dd78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075dd79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075dd7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075dd7d: call 0x75dd9c */ r_esp -= 4; W32(r_esp, 0x75dd82u); f_0075dd9c();
    /* 0075dd82: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075dd86: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075dd88: jne 0x75dd8e */ if (!fZ) goto L_0075dd8e;
L_0075dd8a:; BB(0x0075dd8a);
    /* 0075dd8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dd8b: ret 4 */ FN_RET(0x0075dd78); r_esp += 8; return;
L_0075dd8e:; BB(0x0075dd8e);
    /* 0075dd8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075dd8f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75dd94u); f_005c2f74();
    /* 0075dd94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075dd95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dd96: ret 4 */ FN_RET(0x0075dd78); r_esp += 8; return;
}

void f_0075dd9c(void) /* sub_75DD9C */
{
    FN_ENTER(0x0075dd9c);
    /* 0075dd9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075dd9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075dd9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075dda1: push 0x8f33e4 */ { u32 v = 0x8f33e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075dda6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075ddac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ddad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075ddb4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075ddb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075ddba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075ddbd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075ddc0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075ddc3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075ddc6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ddcd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ddd0: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075ddd3: mov dword ptr [eax], 0xb42c78 */ W32((u32)(r_eax), 0xb42c78u);
    /* 0075ddd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075dddb: je 0x75ddec */ if (fZ) goto L_0075ddec;
L_0075dddd:; BB(0x0075dddd);
    /* 0075dddd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75dde2u); f_007127b0();
    /* 0075dde2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075dde5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075ddec:; BB(0x0075ddec);
    /* 0075ddec: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075ddef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ddf1: je 0x75de02 */ if (fZ) goto L_0075de02;
L_0075ddf3:; BB(0x0075ddf3);
    /* 0075ddf3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ddf8u); f_007127b0();
    /* 0075ddf8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ddfb: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075de02:; BB(0x0075de02);
    /* 0075de02: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075de05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075de07: je 0x75de18 */ if (fZ) goto L_0075de18;
L_0075de09:; BB(0x0075de09);
    /* 0075de09: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75de0eu); f_007127b0();
    /* 0075de0e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075de11: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075de18:; BB(0x0075de18);
    /* 0075de18: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075de1f: mov ecx, eax */ r_ecx = r_eax;
    /* 0075de21: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75de26u); f_008171e8();
    /* 0075de26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075de29: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075de30: mov esp, ebp */ r_esp = r_ebp;
    /* 0075de32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075de33: ret  */ FN_RET(0x0075dd9c); r_esp += 4; return;
}

void f_0075de34(void) /* sub_75DE34 */
{
    FN_ENTER(0x0075de34);
    /* 0075de34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075de35: mov ebp, esp */ r_ebp = r_esp;
    /* 0075de37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075de39: push 0x8f3400 */ { u32 v = 0x8f3400u; r_esp -= 4; W32(r_esp, v); }
    /* 0075de3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075de44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075de45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075de4c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075de4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075de52: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075de55: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075de58: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075de5b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075de5e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075de61: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075de64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075de65: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0075de68: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075de6b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75de70u); f_008193cc();
    /* 0075de70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075de77: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075de7a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075de7d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075de80: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0075de83: mov dword ptr [ecx + 0x28], ebx */ W32((u32)(r_ecx+0x28u), r_ebx);
    /* 0075de86: mov dword ptr [ecx], 0xb42c78 */ W32((u32)(r_ecx), 0xb42c78u);
    /* 0075de8c: mov eax, dword ptr [0x9f57a4] */ r_eax = R32((u32)(0x9f57a4u));
    /* 0075de91: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0075de94: call 0x75ded0 */ r_esp -= 4; W32(r_esp, 0x75de99u); f_0075ded0();
    /* 0075de99: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075de9c: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0075de9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075dea1: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 0075dea4: mov dword ptr [ebx + 0x2c], 0xffffffff */ W32((u32)(r_ebx+0x2cu), 0xffffffffu);
    /* 0075deab: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0075deae: mov edx, 0x13 */ r_edx = 0x13u;
    /* 0075deb3: mov word ptr [ebx + 0x1e], dx */ W16((u32)(r_ebx+0x1eu), (u16)r_edx);
    /* 0075deb7: mov byte ptr [ebx + 0x1c], cl */ W8((u32)(r_ebx+0x1cu), (u8)r_ecx);
    /* 0075deba: mov eax, ebx */ r_eax = r_ebx;
    /* 0075debc: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075debf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075dec2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075dec9: mov esp, ebp */ r_esp = r_ebp;
    /* 0075decb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075decc: ret 8 */ FN_RET(0x0075de34); r_esp += 12; return;
}

void f_0075ded0(void) /* sub_75DED0 */
{
    FN_ENTER(0x0075ded0);
    /* 0075ded0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ded1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ded2: mov esi, ecx */ r_esi = r_ecx;
    /* 0075ded4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ded6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75dedbu); f_0073ec50();
    /* 0075dedb: mov edi, eax */ r_edi = r_eax;
    /* 0075dedd: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0075dedf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75dee4u); f_0079317c();
    /* 0075dee4: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075dee7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075dee8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075deea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075deeb: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x75def0u); f_0073566c();
    /* 0075def0: mov edi, eax */ r_edi = r_eax;
    /* 0075def2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075def5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075def7: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0075defa: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75deffu); f_007336fc();
    /* 0075deff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075df00: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075df03: mov ecx, edi */ r_ecx = r_edi;
    /* 0075df05: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75df0au); f_00712624();
    /* 0075df0a: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 0075df0f: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 0075df16: or edx, 0xffff0100 */ {  u32 a = r_edx; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075df1c: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 0075df23: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75df28u); f_0079317c();
    /* 0075df28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075df29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df2b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df2d: mov ecx, edi */ r_ecx = r_edi;
    /* 0075df2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075df30: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75df35u); f_00735c90();
    /* 0075df35: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 0075df3a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75df3fu); f_0079317c();
    /* 0075df3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075df40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df42: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df44: mov ecx, edi */ r_ecx = r_edi;
    /* 0075df46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075df47: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75df4cu); f_00735c90();
    /* 0075df4c: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0075df51: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75df56u); f_0079317c();
    /* 0075df56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075df57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df59: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df5b: mov ecx, edi */ r_ecx = r_edi;
    /* 0075df5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075df5e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75df63u); f_00735c90();
    /* 0075df63: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 0075df68: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75df6du); f_0079317c();
    /* 0075df6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075df6e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df70: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df72: mov ecx, edi */ r_ecx = r_edi;
    /* 0075df74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075df75: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75df7au); f_00735c90();
    /* 0075df7a: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 0075df7f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75df84u); f_0079317c();
    /* 0075df84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075df85: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df87: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df89: mov ecx, edi */ r_ecx = r_edi;
    /* 0075df8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075df8c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75df91u); f_00735c90();
    /* 0075df91: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075df96: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 0075df9d: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075dfa3: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 0075dfaa: mov ecx, edi */ r_ecx = r_edi;
    /* 0075dfac: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75dfb1u); f_00736138();
    /* 0075dfb1: mov ecx, edi */ r_ecx = r_edi;
    /* 0075dfb3: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75dfb8u); f_00736458();
    /* 0075dfb8: mov eax, edi */ r_eax = r_edi;
    /* 0075dfba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfbc: ret  */ FN_RET(0x0075ded0); r_esp += 4; return;
}

void f_0075dfc0(void) /* sub_75DFC0 */
{
    FN_ENTER(0x0075dfc0);
    /* 0075dfc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dfc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075dfc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075dfc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075dfc4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075dfc7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075dfc9: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075dfcc: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x75dfd1u); f_00719140();
    /* 0075dfd1: mov esi, eax */ r_esi = r_eax;
    /* 0075dfd3: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075dfd6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75dfdbu); f_0068d5a8();
    /* 0075dfdb: mov ebp, eax */ r_ebp = r_eax;
    /* 0075dfdd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075dfe0: movzx edx, byte ptr [ebx + 0x1c] */ r_edx = (u32)R8((u32)(r_ebx+0x1cu));
    /* 0075dfe4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075dfe6: jge 0x75dff0 */ if ((fS==fO)) goto L_0075dff0;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075dfc0); r_esp += 4; return;
L_0075dff0:; BB(0x0075dff0);
    /* 0075dff0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075dff3: jg 0x75e1c4 */ if ((!fZ&&fS==fO)) goto L_0075e1c4;
L_0075dff9:; BB(0x0075dff9);
    /* 0075dff9: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0075dffc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075dffe: je 0x75e015 */ if (fZ) goto L_0075e015;
L_0075e000:; BB(0x0075e000);
    /* 0075e000: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e005u); f_007127b0();
    /* 0075e005: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 0075e00c: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0075e011: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
L_0075e015:; BB(0x0075e015);
    /* 0075e015: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0075e018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e01a: je 0x75e529 */ if (fZ) goto L_0075e529;
L_0075e020:; BB(0x0075e020);
    /* 0075e020: movzx ebp, word ptr [eax + 0x84] */ r_ebp = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e027: or ebp, 0xffff0040 */ {  u32 a = r_ebp; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e02d: mov word ptr [eax + 0x84], bp */ W16((u32)(r_eax+0x84u), (u16)r_ebp);
    /* 0075e034: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 0075e037: movzx esi, word ptr [edi + 0x84] */ r_esi = (u32)R16((u32)(r_edi+0x84u));
    /* 0075e03e: or esi, 0xffff0080 */ {  u32 a = r_esi; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0075e044: mov word ptr [edi + 0x84], si */ W16((u32)(r_edi+0x84u), (u16)r_esi);
    /* 0075e04b: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075e04e: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 0075e051: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0075e054: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e059u); f_0075e580();
    /* 0075e059: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0075e05c: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075e063: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075e068: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0075e06b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075e072: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e074: je 0x75e07d */ if (fZ) goto L_0075e07d;
L_0075e076:; BB(0x0075e076);
    /* 0075e076: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e078: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75e07du); f_00760acc();
L_0075e07d:; BB(0x0075e07d);
    /* 0075e07d: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
L_0075e081:; BB(0x0075e081);
    /* 0075e081: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e083: call 0x75e764 */ r_esp -= 4; W32(r_esp, 0x75e088u); f_0075e764();
    /* 0075e088: mov edi, eax */ r_edi = r_eax;
    /* 0075e08a: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e08d: je 0x75e0a5 */ if (fZ) goto L_0075e0a5;
L_0075e08f:; BB(0x0075e08f);
    /* 0075e08f: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075e092: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 0075e095: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0075e098: call 0x75e79c */ r_esp -= 4; W32(r_esp, 0x75e09du); f_0075e79c();
    /* 0075e09d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e09f: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e0a5:; BB(0x0075e0a5);
    /* 0075e0a5: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0075e0a8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e0adu); f_007365f4();
    /* 0075e0ad: mov edx, dword ptr [eax*4 + 0x9f57a8] */ r_edx = R32((u32)(r_eax*4+0x9f57a8u));
    /* 0075e0b4: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e0b7: movsx ebp, word ptr [esi + 0x8c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 0075e0be: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0075e0c2: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e0c4: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75e0c9u); f_00736578();
    /* 0075e0c9: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0075e0cd: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0075e0d0: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e0d3: je 0x75e165 */ if (fZ) goto L_0075e165;
L_0075e0d9:; BB(0x0075e0d9);
    /* 0075e0d9: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0075e0dd: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0075e0e1: mov esi, eax */ r_esi = r_eax;
    /* 0075e0e3: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0075e0e7: mov edi, edx */ r_edi = r_edx;
    /* 0075e0e9: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e0ed:; BB(0x0075e0ed);
    /* 0075e0ed: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e0f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e0f2: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e0f5: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e0fau); f_00793000();
    /* 0075e0fa: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e0fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e0ff: mov eax, esi */ r_eax = r_esi;
    /* 0075e101: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e103: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e108u); f_0075e54d();
    /* 0075e108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e10a: jne 0x75e11b */ if (!fZ) goto L_0075e11b;
L_0075e10c:; BB(0x0075e10c);
    /* 0075e10c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e10d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e10f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e110: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075e114: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e119u); f_00735ee0();
    /* 0075e119: jmp 0x75e149 */ goto L_0075e149;
L_0075e11b:; BB(0x0075e11b);
    /* 0075e11b: mov eax, esi */ r_eax = r_esi;
    /* 0075e11d: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e11f: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e124u); f_0075e611();
    /* 0075e124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e126: jne 0x75e13c */ if (!fZ) goto L_0075e13c;
L_0075e128:; BB(0x0075e128);
    /* 0075e128: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e12d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e12e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e130: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e131: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e135: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e13au); f_00735db8();
    /* 0075e13a: jmp 0x75e149 */ goto L_0075e149;
L_0075e13c:; BB(0x0075e13c);
    /* 0075e13c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e13d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e13f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e140: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075e144: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e149u); f_00735c90();
L_0075e149:; BB(0x0075e149);
    /* 0075e149: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e14d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e150: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e153: jne 0x75e0ed */ if (!fZ) goto L_0075e0ed;
L_0075e155:; BB(0x0075e155);
    /* 0075e155: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0075e159: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0075e15d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0075e161: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e165:; BB(0x0075e165);
    /* 0075e165: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e16a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e16c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e171u); f_00736138();
    /* 0075e171: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e173: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e178u); f_00736458();
    /* 0075e178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e179: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e17b: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e180u); f_00736510();
    /* 0075e180: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e182: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e184:; BB(0x0075e184);
    /* 0075e184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e186: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e189: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e18eu); f_00736510();
L_0075e18e:; BB(0x0075e18e);
    /* 0075e18e: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0075e191: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e198: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e19a: je 0x75e1b0 */ if (fZ) goto L_0075e1b0;
L_0075e19c:; BB(0x0075e19c);
    /* 0075e19c: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0075e19f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075e1a1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75e1a4u); call_ind(t); }
    /* 0075e1a4: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 0075e1a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1af: ret  */ FN_RET(0x0075dfc0); r_esp += 4; return;
L_0075e1b0:; BB(0x0075e1b0);
    /* 0075e1b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e1b2: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e1b8:; BB(0x0075e1b8);
    /* 0075e1b8: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0075e1bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1c3: ret  */ FN_RET(0x0075dfc0); r_esp += 4; return;
L_0075e1c4:; BB(0x0075e1c4);
    /* 0075e1c4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e1c7: je 0x75e081 */ if (fZ) goto L_0075e081;
L_0075e1cd:; BB(0x0075e1cd);
    /* 0075e1cd: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e1d0: je 0x75e346 */ if (fZ) goto L_0075e346;
L_0075e1d6:; BB(0x0075e1d6);
    /* 0075e1d6: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e1d9: je 0x75e3f5 */ if (fZ) goto L_0075e3f5;
L_0075e1df:; BB(0x0075e1df);
    /* 0075e1df: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e1e2: jne 0x75dfe8 */ if (!fZ) goto L_0075dfe8;
L_0075e1e8:; BB(0x0075e1e8);
    /* 0075e1e8: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e1eb: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e1f0u); f_007365f4();
    /* 0075e1f0: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e1f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e1f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075e1f6: call 0x69a4dc */ r_esp -= 4; W32(r_esp, 0x75e1fbu); f_0069a4dc();
    /* 0075e1fb: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e1fe: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e203u); f_007365f4();
    /* 0075e203: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0075e206: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e209: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e20eu); f_0075e611();
    /* 0075e20e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e210: je 0x75e238 */ if (fZ) goto L_0075e238;
L_0075e212:; BB(0x0075e212);
    /* 0075e212: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075e218: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075e21b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075e21d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075e21f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075e221: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075e223: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075e22a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e22b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75e230u); f_007c1160();
    /* 0075e230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e232: je 0x75e31f */ if (fZ) goto L_0075e31f;
L_0075e238:; BB(0x0075e238);
    /* 0075e238: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e23b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e23c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e23d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e242: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75e247u); f_00814298();
    /* 0075e247: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e24a: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0075e24d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e252u); f_007365f4();
    /* 0075e252: mov edi, dword ptr [eax*4 + 0x9f57a8] */ r_edi = R32((u32)(r_eax*4+0x9f57a8u));
    /* 0075e259: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e25c: movsx ebp, word ptr [esi + 0x8c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 0075e263: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e265: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75e26au); f_00736578();
    /* 0075e26a: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0075e26d: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e270: je 0x75e2f8 */ if (fZ) goto L_0075e2f8;
L_0075e276:; BB(0x0075e276);
    /* 0075e276: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0075e27a: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0075e27e: mov esi, eax */ r_esi = r_eax;
    /* 0075e280: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e284:; BB(0x0075e284);
    /* 0075e284: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e288: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e289: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e28c: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e291u); f_00793000();
    /* 0075e291: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e293: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e296: mov eax, esi */ r_eax = r_esi;
    /* 0075e298: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e29a: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e29fu); f_0075e54d();
    /* 0075e29f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e2a1: jne 0x75e2b2 */ if (!fZ) goto L_0075e2b2;
L_0075e2a3:; BB(0x0075e2a3);
    /* 0075e2a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2a4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2a7: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e2ab: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e2b0u); f_00735ee0();
    /* 0075e2b0: jmp 0x75e2e0 */ goto L_0075e2e0;
L_0075e2b2:; BB(0x0075e2b2);
    /* 0075e2b2: mov eax, esi */ r_eax = r_esi;
    /* 0075e2b4: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e2b6: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e2bbu); f_0075e611();
    /* 0075e2bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e2bd: jne 0x75e2d3 */ if (!fZ) goto L_0075e2d3;
L_0075e2bf:; BB(0x0075e2bf);
    /* 0075e2bf: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c5: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c8: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0075e2cc: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e2d1u); f_00735db8();
    /* 0075e2d1: jmp 0x75e2e0 */ goto L_0075e2e0;
L_0075e2d3:; BB(0x0075e2d3);
    /* 0075e2d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2d4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2d7: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e2db: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e2e0u); f_00735c90();
L_0075e2e0:; BB(0x0075e2e0);
    /* 0075e2e0: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e2e4: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e2e7: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e2ea: jne 0x75e284 */ if (!fZ) goto L_0075e284;
L_0075e2ec:; BB(0x0075e2ec);
    /* 0075e2ec: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0075e2f0: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0075e2f4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e2f8:; BB(0x0075e2f8);
    /* 0075e2f8: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2fd: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e2ff: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e304u); f_00736138();
    /* 0075e304: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e306: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e30bu); f_00736458();
    /* 0075e30b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e30c: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e30e: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e313u); f_00736510();
    /* 0075e313: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e317: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e31a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e31b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e31c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e31d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e31e: ret  */ FN_RET(0x0075dfc0); r_esp += 4; return;
L_0075e31f:; BB(0x0075e31f);
    /* 0075e31f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e322: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e327u); f_007365f4();
    /* 0075e327: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e32a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e32b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075e32d: call 0x69a2cc */ r_esp -= 4; W32(r_esp, 0x75e332u); f_0069a2cc();
    /* 0075e332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e334: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e33a:; BB(0x0075e33a);
    /* 0075e33a: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e33e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e341: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e343: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e344: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e345: ret  */ FN_RET(0x0075dfc0); r_esp += 4; return;
L_0075e346:; BB(0x0075e346);
    /* 0075e346: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e348: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75e34du); f_0073ec50();
    /* 0075e34d: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e350: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e352: push 0x974a08 */ { u32 v = 0x974a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e358: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75e35du); f_0073aa40();
    /* 0075e35d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e360: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0075e363: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e365: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0075e368: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75e36du); f_007336fc();
    /* 0075e36d: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0075e370: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e371: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075e374: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75e379u); f_00712624();
    /* 0075e379: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e37c: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e37f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x75e384u); f_0061cdb0();
    /* 0075e384: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e387: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e38a: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075e391: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e397: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075e39e: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0075e3a1: movzx edi, word ptr [edx + 0x84] */ r_edi = (u32)R16((u32)(r_edx+0x84u));
    /* 0075e3a8: and edi, 0xff7f */ {  u32 a = r_edi; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0075e3ae: mov word ptr [edx + 0x84], di */ W16((u32)(r_edx+0x84u), (u16)r_edi);
    /* 0075e3b5: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e3b8: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075e3bf: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e3c5: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075e3c8: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075e3cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e3d1: je 0x75e3da */ if (fZ) goto L_0075e3da;
L_0075e3d3:; BB(0x0075e3d3);
    /* 0075e3d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e3d5: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75e3dau); f_00760acc();
L_0075e3da:; BB(0x0075e3da);
    /* 0075e3da: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e3dd: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075e3e4: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e3ea: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075e3f1: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
L_0075e3f5:; BB(0x0075e3f5);
    /* 0075e3f5: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e3f8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e3fdu); f_007365f4();
    /* 0075e3fd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e401: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075e403: call 0x69a4dc */ r_esp -= 4; W32(r_esp, 0x75e408u); f_0069a4dc();
    /* 0075e408: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075e40b: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 0075e40e: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0075e411: call 0x75e79c */ r_esp -= 4; W32(r_esp, 0x75e416u); f_0075e79c();
    /* 0075e416: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e418: je 0x75e4e7 */ if (fZ) goto L_0075e4e7;
L_0075e41e:; BB(0x0075e41e);
    /* 0075e41e: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0075e421: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e426u); f_007365f4();
    /* 0075e426: mov edi, dword ptr [eax*4 + 0x9f57a8] */ r_edi = R32((u32)(r_eax*4+0x9f57a8u));
    /* 0075e42d: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e430: movsx ebp, word ptr [esi + 0x8c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 0075e437: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e439: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75e43eu); f_00736578();
    /* 0075e43e: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0075e441: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e444: je 0x75e4cc */ if (fZ) goto L_0075e4cc;
L_0075e44a:; BB(0x0075e44a);
    /* 0075e44a: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0075e44e: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0075e452: mov esi, eax */ r_esi = r_eax;
    /* 0075e454: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e458:; BB(0x0075e458);
    /* 0075e458: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e45c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e45d: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e460: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e465u); f_00793000();
    /* 0075e465: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e467: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e46a: mov eax, esi */ r_eax = r_esi;
    /* 0075e46c: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e46e: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e473u); f_0075e54d();
    /* 0075e473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e475: jne 0x75e486 */ if (!fZ) goto L_0075e486;
L_0075e477:; BB(0x0075e477);
    /* 0075e477: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e478: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e47a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e47b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e47f: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e484u); f_00735ee0();
    /* 0075e484: jmp 0x75e4b4 */ goto L_0075e4b4;
L_0075e486:; BB(0x0075e486);
    /* 0075e486: mov eax, esi */ r_eax = r_esi;
    /* 0075e488: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e48a: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e48fu); f_0075e611();
    /* 0075e48f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e491: jne 0x75e4a7 */ if (!fZ) goto L_0075e4a7;
L_0075e493:; BB(0x0075e493);
    /* 0075e493: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e499: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e49b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e49c: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0075e4a0: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e4a5u); f_00735db8();
    /* 0075e4a5: jmp 0x75e4b4 */ goto L_0075e4b4;
L_0075e4a7:; BB(0x0075e4a7);
    /* 0075e4a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4ab: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e4af: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e4b4u); f_00735c90();
L_0075e4b4:; BB(0x0075e4b4);
    /* 0075e4b4: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e4b8: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e4bb: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e4be: jne 0x75e458 */ if (!fZ) goto L_0075e458;
L_0075e4c0:; BB(0x0075e4c0);
    /* 0075e4c0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0075e4c4: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0075e4c8: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e4cc:; BB(0x0075e4cc);
    /* 0075e4cc: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4d3: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e4d8u); f_00736138();
    /* 0075e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4da: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e4dfu); f_00736458();
    /* 0075e4df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4e2: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e4e7u); f_00736510();
L_0075e4e7:; BB(0x0075e4e7);
    /* 0075e4e7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e4ea: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e4efu); f_007365f4();
    /* 0075e4ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e4f5: call 0x75e668 */ r_esp -= 4; W32(r_esp, 0x75e4fau); f_0075e668();
    /* 0075e4fa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0075e4fd: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e504: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e507: je 0x75e514 */ if (fZ) goto L_0075e514;
L_0075e509:; BB(0x0075e509);
    /* 0075e509: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e50d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0075e514:; BB(0x0075e514);
    /* 0075e514: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e517: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e51d:; BB(0x0075e51d);
    /* 0075e51d: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 0075e521: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e524: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e528: ret  */ FN_RET(0x0075dfc0); r_esp += 4; return;
L_0075e529:; BB(0x0075e529);
    /* 0075e529: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0075e52c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e531u); f_007365f4();
    /* 0075e531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e534: call 0x75e5b0 */ r_esp -= 4; W32(r_esp, 0x75e539u); f_0075e5b0();
    /* 0075e539: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0075e53c: jmp 0x75e020 */ goto L_0075e020;
}

