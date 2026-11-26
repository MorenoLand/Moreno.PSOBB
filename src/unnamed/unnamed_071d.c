#include "protos.h"

void f_0071d0b8(void) /* sub_71D0B8 */
{
    FN_ENTER(0x0071d0b8);
    /* 0071d0b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d0b9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071d0bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0071d0bf: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0071d0c3: jle 0x71d100 */ if ((fZ||fS!=fO)) goto L_0071d100;
L_0071d0c5:; BB(0x0071d0c5);
    /* 0071d0c5: lea eax, [eax - 1] */ r_eax = (u32)(r_eax+0xffffffffu);
    /* 0071d0c8: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0071d0cb: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071d0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d0d2: je 0x71d0fc */ if (fZ) goto L_0071d0fc;
L_0071d0d4:; BB(0x0071d0d4);
    /* 0071d0d4: mov eax, dword ptr [eax + edx*4 + 0x84] */ r_eax = R32((u32)(r_eax+r_edx*4+0x84u));
L_0071d0db:; BB(0x0071d0db);
    /* 0071d0db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071d0dd: je 0x71d128 */ if (fZ) goto L_0071d128;
L_0071d0df:; BB(0x0071d0df);
    /* 0071d0df: fld dword ptr [0x970200] */ FPUSH(R_F32((u32)(0x970200u)));
    /* 0071d0e5: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 0071d0e8: fld dword ptr [0x9701fc] */ FPUSH(R_F32((u32)(0x9701fcu)));
    /* 0071d0ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d0f0: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0071d0f2: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 0071d0f5: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0071d0f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d0f9: ret 8 */ FN_RET(0x0071d0b8); r_esp += 12; return;
L_0071d0fc:; BB(0x0071d0fc);
    /* 0071d0fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071d0fe: jmp 0x71d0db */ goto L_0071d0db;
L_0071d100:; BB(0x0071d100);
    /* 0071d100: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0071d102: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x71d107u); f_0073ec50();
    /* 0071d107: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0071d109: fadd dword ptr [0x9701f8] */ ST(0) = ST(0) + R_F32((u32)(0x9701f8u));
    /* 0071d10f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0071d111: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0071d113: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0071d116: fadd dword ptr [0x9701f4] */ ST(0) = ST(0) + R_F32((u32)(0x9701f4u));
    /* 0071d11c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d11e: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0071d120: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0071d123: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071d124: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d125: ret 8 */ FN_RET(0x0071d0b8); r_esp += 12; return;
L_0071d128:; BB(0x0071d128);
    /* 0071d128: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d129: ret 8 */ FN_RET(0x0071d0b8); r_esp += 12; return;
}

void f_0071d12c(void) /* sub_71D12C */
{
    FN_ENTER(0x0071d12c);
    /* 0071d12c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d12d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071d130: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0071d136: fdivr dword ptr [0x9701f0] */ ST(0) = R_F32((u32)(0x9701f0u)) / ST(0);
    /* 0071d13c: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0071d140: movsx eax, word ptr [0x9acb68] */ r_eax = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 0071d147: movsx edx, word ptr [0x9acb6c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb6cu));
    /* 0071d14e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0071d150: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0071d153: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071d156: fsubr dword ptr [0xa48828] */ ST(0) = R_F32((u32)(0xa48828u)) - ST(0);
    /* 0071d15c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d15e: fchs  */ ST(0) = -ST(0);
    /* 0071d160: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071d162: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 0071d165: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0071d167: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071d169: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0071d16f: fdivr dword ptr [0x9701ec] */ ST(0) = R_F32((u32)(0x9701ecu)) / ST(0);
    /* 0071d175: fchs  */ ST(0) = -ST(0);
    /* 0071d177: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071d17b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0071d17f: fsubr dword ptr [0xa4882c] */ ST(0) = R_F32((u32)(0xa4882cu)) - ST(0);
    /* 0071d185: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071d187: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071d18d: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 0071d190: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 0071d193: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x71d198u); f_007199e0();
    /* 0071d198: fdivr dword ptr [0x9701e8] */ ST(0) = R_F32((u32)(0x9701e8u)) / ST(0);
    /* 0071d19e: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0071d1a1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d1a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071d1a5: ret 4 */ FN_RET(0x0071d12c); r_esp += 8; return;
}

void f_0071d1a8(void) /* sub_71D1A8 */
{
    FN_ENTER(0x0071d1a8);
    /* 0071d1a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d1a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d1aa: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071d1ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071d1af: movsx eax, byte ptr [ebx + 0x1e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1eu));
    /* 0071d1b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0071d1b5: jle 0x71d1f1 */ if ((fZ||fS!=fO)) goto L_0071d1f1;
L_0071d1b7:; BB(0x0071d1b7);
    /* 0071d1b7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071d1ba: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0071d1bd: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071d1c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d1c4: je 0x71d307 */ if (fZ) goto L_0071d307;
L_0071d1ca:; BB(0x0071d1ca);
    /* 0071d1ca: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
L_0071d1d1:; BB(0x0071d1d1);
    /* 0071d1d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d1d3: je 0x71d1de */ if (fZ) goto L_0071d1de;
L_0071d1d5:; BB(0x0071d1d5);
    /* 0071d1d5: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x71d1dau); f_00712480();
    /* 0071d1da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d1dc: jne 0x71d1f1 */ if (!fZ) goto L_0071d1f1;
L_0071d1de:; BB(0x0071d1de);
    /* 0071d1de: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0071d1e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071d1e7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0071d1eb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d1ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d1ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d1f0: ret  */ FN_RET(0x0071d1a8); r_esp += 4; return;
L_0071d1f1:; BB(0x0071d1f1);
    /* 0071d1f1: movsx eax, byte ptr [ebx + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1cu));
    /* 0071d1f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d1f7: je 0x71d3ac */ if (fZ) goto L_0071d3ac;
L_0071d1fd:; BB(0x0071d1fd);
    /* 0071d1fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d200: je 0x71d30e */ if (fZ) goto L_0071d30e;
L_0071d206:; BB(0x0071d206);
    /* 0071d206: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d209: je 0x71d249 */ if (fZ) goto L_0071d249;
L_0071d20b:; BB(0x0071d20b);
    /* 0071d20b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d20e: jne 0x71d22e */ if (!fZ) goto L_0071d22e;
L_0071d210:; BB(0x0071d210);
    /* 0071d210: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071d213: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071d216: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071d218: call 0x71d3b8 */ r_esp -= 4; W32(r_esp, 0x71d21du); f_0071d3b8();
    /* 0071d21d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d21f: je 0x71d2e3 */ if (fZ) goto L_0071d2e3;
L_0071d225:; BB(0x0071d225);
    /* 0071d225: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
    /* 0071d229: jmp 0x71d2e3 */ goto L_0071d2e3;
L_0071d22e:; BB(0x0071d22e);
    /* 0071d22e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d231: jne 0x71d2e3 */ if (!fZ) goto L_0071d2e3;
L_0071d237:; BB(0x0071d237);
    /* 0071d237: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0071d23b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071d240: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0071d244: jmp 0x71d2e3 */ goto L_0071d2e3;
L_0071d249:; BB(0x0071d249);
    /* 0071d249: fld dword ptr [0x9701e4] */ FPUSH(R_F32((u32)(0x9701e4u)));
    /* 0071d24f: fsub dword ptr [ebx + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x20u));
    /* 0071d252: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0071d254: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071d256: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0071d259: fsub dword ptr [ebx + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x24u));
    /* 0071d25c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0071d25e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071d260: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0071d263: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071d265: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d267: fcomp dword ptr [0x9701e0] */ fx_compare(ST(0), R_F32((u32)(0x9701e0u))); FPOP();
    /* 0071d26d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d26f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d270: jae 0x71d287 */ if (!fC) goto L_0071d287;
L_0071d272:; BB(0x0071d272);
    /* 0071d272: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d274: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d276: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0071d27a: mov eax, 0x43940000 */ r_eax = 0x43940000u;
    /* 0071d27f: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0071d282: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0071d285: jmp 0x71d2e3 */ goto L_0071d2e3;
L_0071d287:; BB(0x0071d287);
    /* 0071d287: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d289: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071d28b: fmul qword ptr [0x9701c0] */ ST(0) = ST(0) * R_F64((u32)(0x9701c0u));
    /* 0071d291: fdiv qword ptr [0x9701b8] */ ST(0) = ST(0) / R_F64((u32)(0x9701b8u));
    /* 0071d297: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0071d29b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0071d2a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071d2a5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0071d2a9: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0071d2ad: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0071d2b1: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0071d2b5: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0071d2b9: mov ecx, esi */ r_ecx = r_esi;
    /* 0071d2bb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71d2c0u); f_0082ddd8();
    /* 0071d2c0: fld dword ptr [0x9701dc] */ FPUSH(R_F32((u32)(0x9701dcu)));
    /* 0071d2c6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071d2c8: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 0071d2cb: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 0071d2ce: mov ecx, esi */ r_ecx = r_esi;
    /* 0071d2d0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71d2d5u); f_0082dcbc();
    /* 0071d2d5: fld dword ptr [0x9701dc] */ FPUSH(R_F32((u32)(0x9701dcu)));
    /* 0071d2db: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071d2dd: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 0071d2e0: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
L_0071d2e3:; BB(0x0071d2e3);
    /* 0071d2e3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0071d2e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d2e8: je 0x71d301 */ if (fZ) goto L_0071d301;
L_0071d2ea:; BB(0x0071d2ea);
    /* 0071d2ea: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071d2ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d2ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071d2f0: call 0x71d12c */ r_esp -= 4; W32(r_esp, 0x71d2f5u); f_0071d12c();
    /* 0071d2f5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071d2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d2f9: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0071d2fc: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x71d301u); f_00508db8();
L_0071d301:; BB(0x0071d301);
    /* 0071d301: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d304: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d305: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d306: ret  */ FN_RET(0x0071d1a8); r_esp += 4; return;
L_0071d307:; BB(0x0071d307);
    /* 0071d307: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071d309: jmp 0x71d1d1 */ goto L_0071d1d1;
L_0071d30e:; BB(0x0071d30e);
    /* 0071d30e: fld dword ptr [0x9701e4] */ FPUSH(R_F32((u32)(0x9701e4u)));
    /* 0071d314: fsub dword ptr [ebx + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x20u));
    /* 0071d317: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0071d319: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071d31b: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0071d31e: fsub st(0) */ ST(0) = ST(0) - ST(0);
    /* 0071d320: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0071d322: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071d324: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0071d327: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071d329: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d32b: fcomp dword ptr [0x9701e0] */ fx_compare(ST(0), R_F32((u32)(0x9701e0u))); FPOP();
    /* 0071d331: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d333: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d334: jae 0x71d34b */ if (!fC) goto L_0071d34b;
L_0071d336:; BB(0x0071d336);
    /* 0071d336: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d338: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d33a: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
    /* 0071d33e: mov eax, 0x43940000 */ r_eax = 0x43940000u;
    /* 0071d343: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0071d346: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0071d349: jmp 0x71d2e3 */ goto L_0071d2e3;
L_0071d34b:; BB(0x0071d34b);
    /* 0071d34b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d34d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071d34f: fmul qword ptr [0x9701c0] */ ST(0) = ST(0) * R_F64((u32)(0x9701c0u));
    /* 0071d355: fdiv qword ptr [0x9701b8] */ ST(0) = ST(0) / R_F64((u32)(0x9701b8u));
    /* 0071d35b: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0071d35f: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0071d364: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071d369: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0071d36d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0071d371: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0071d375: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0071d379: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0071d37d: mov ecx, esi */ r_ecx = r_esi;
    /* 0071d37f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71d384u); f_0082ddd8();
    /* 0071d384: fld dword ptr [0x9701dc] */ FPUSH(R_F32((u32)(0x9701dcu)));
    /* 0071d38a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071d38c: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 0071d38f: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 0071d392: mov ecx, esi */ r_ecx = r_esi;
    /* 0071d394: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71d399u); f_0082dcbc();
    /* 0071d399: fld dword ptr [0x9701dc] */ FPUSH(R_F32((u32)(0x9701dcu)));
    /* 0071d39f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071d3a1: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 0071d3a4: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
    /* 0071d3a7: jmp 0x71d2e3 */ goto L_0071d2e3;
L_0071d3ac:; BB(0x0071d3ac);
    /* 0071d3ac: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0071d3b0: jmp 0x71d30e */ goto L_0071d30e;
}

void f_0071d1dd(void)
{
    FN_ENTER(0x0071d1dd);
    /* 0071d1dd: adc ecx, dword ptr [edi] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0071d1df: mov bh, 0x43 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x43u) & 0xffu) << 8);
    /* 0071d1e1: or byte ptr [0xffff0001], cl */ { u32 ad = (u32)(0xffff0001u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0071d1e7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0071d1eb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d1ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d1ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d1f0: ret  */ FN_RET(0x0071d1dd); r_esp += 4; return;
}

void f_0071d3b8(void) /* sub_71D3B8 */
{
    FN_ENTER(0x0071d3b8);
    /* 0071d3b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d3b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d3ba: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071d3bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071d3bf: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071d3c3: fsub dword ptr [ebx + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x20u));
    /* 0071d3c6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0071d3c8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071d3ca: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0071d3ce: fsub dword ptr [ebx + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x24u));
    /* 0071d3d1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0071d3d3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071d3d5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071d3d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d3d9: fcomp dword ptr [0x9701d8] */ fx_compare(ST(0), R_F32((u32)(0x9701d8u))); FPOP();
    /* 0071d3df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d3e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d3e2: jae 0x71d403 */ if (!fC) goto L_0071d403;
L_0071d3e4:; BB(0x0071d3e4);
    /* 0071d3e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d3e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d3e8: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0071d3ec: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0071d3f0: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 0071d3f3: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0071d3f6: mov eax, 1 */ r_eax = 0x1u;
    /* 0071d3fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d3fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d3ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071d400: ret 8 */ FN_RET(0x0071d3b8); r_esp += 12; return;
L_0071d403:; BB(0x0071d403);
    /* 0071d403: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d405: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071d407: fmul qword ptr [0x9701b0] */ ST(0) = ST(0) * R_F64((u32)(0x9701b0u));
    /* 0071d40d: fdiv qword ptr [0x9701a8] */ ST(0) = ST(0) / R_F64((u32)(0x9701a8u));
    /* 0071d413: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0071d416: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0071d41a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071d41f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071d423: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0071d427: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071d42b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0071d42e: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0071d432: mov ecx, edi */ r_ecx = r_edi;
    /* 0071d434: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71d439u); f_0082ddd8();
    /* 0071d439: fld dword ptr [0x9701d4] */ FPUSH(R_F32((u32)(0x9701d4u)));
    /* 0071d43f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071d441: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 0071d444: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 0071d447: mov ecx, edi */ r_ecx = r_edi;
    /* 0071d449: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71d44eu); f_0082dcbc();
    /* 0071d44e: fmul dword ptr [0x9701d4] */ ST(0) = ST(0) * R_F32((u32)(0x9701d4u));
    /* 0071d454: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 0071d457: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
    /* 0071d45a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071d45c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d45f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d460: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071d461: ret 8 */ FN_RET(0x0071d3b8); r_esp += 12; return;
}

void f_0071d464(void) /* sub_71D464 */
{
    FN_ENTER(0x0071d464);
    /* 0071d464: mov dword ptr [0xa9859c], 0x3f800000 */ W32((u32)(0xa9859cu), 0x3f800000u);
    /* 0071d46e: mov dword ptr [0xa985a0], 0x41000000 */ W32((u32)(0xa985a0u), 0x41000000u);
    /* 0071d478: mov dword ptr [0xa985a4], 0x3fc00000 */ W32((u32)(0xa985a4u), 0x3fc00000u);
    /* 0071d482: ret  */ FN_RET(0x0071d464); r_esp += 4; return;
}

void f_0071d484(void) /* sub_71D484 */
{
    FN_ENTER(0x0071d484);
    /* 0071d484: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071d488: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0071d48c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0071d490: mov dword ptr [0xa985c0], edx */ W32((u32)(0xa985c0u), r_edx);
    /* 0071d496: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0071d49a: mov dword ptr [0xa985bc], ecx */ W32((u32)(0xa985bcu), r_ecx);
    /* 0071d4a0: mov dword ptr [0xa985b8], edx */ W32((u32)(0xa985b8u), r_edx);
    /* 0071d4a6: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0071d4aa: mov dword ptr [0xa985b4], edx */ W32((u32)(0xa985b4u), r_edx);
    /* 0071d4b0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0071d4b4: mov dword ptr [0xa985b0], edx */ W32((u32)(0xa985b0u), r_edx);
    /* 0071d4ba: mov dword ptr [0xa985ac], eax */ W32((u32)(0xa985acu), r_eax);
    /* 0071d4bf: ret  */ FN_RET(0x0071d484); r_esp += 4; return;
}

void f_0071d4c0(void) /* sub_71D4C0 */
{
    FN_ENTER(0x0071d4c0);
    /* 0071d4c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071d4c3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0071d4c7: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071d4cb: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0071d4cf: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0071d4d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d4d4: je 0x71d55e */ if (fZ) goto L_0071d55e;
L_0071d4da:; BB(0x0071d4da);
    /* 0071d4da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d4dc: je 0x71d581 */ if (fZ) goto L_0071d581;
L_0071d4e2:; BB(0x0071d4e2);
    /* 0071d4e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d4e4: je 0x71d585 */ if (fZ) goto L_0071d585;
L_0071d4ea:; BB(0x0071d4ea);
    /* 0071d4ea: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0071d4ed: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0071d4f1: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0071d4f5: mov ebx, edx */ r_ebx = r_edx;
    /* 0071d4f7: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0071d4fb: mov esi, ecx */ r_esi = r_ecx;
L_0071d4fd:; BB(0x0071d4fd);
    /* 0071d4fd: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d500: je 0x71d566 */ if (fZ) goto L_0071d566;
L_0071d502:; BB(0x0071d502);
    /* 0071d502: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0071d505: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d507: je 0x71d520 */ if (fZ) goto L_0071d520;
L_0071d509:; BB(0x0071d509);
    /* 0071d509: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0071d50c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d50d: call 0x789240 */ r_esp -= 4; W32(r_esp, 0x71d512u); f_00789240();
    /* 0071d512: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0071d515: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d516: call 0x789044 */ r_esp -= 4; W32(r_esp, 0x71d51bu); f_00789044();
    /* 0071d51b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d51e: jmp 0x71d52f */ goto L_0071d52f;
L_0071d520:; BB(0x0071d520);
    /* 0071d520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d521: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x71d526u); f_008443b4();
    /* 0071d526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d527: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x71d52cu); f_007ac24c();
    /* 0071d52c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0071d52f:; BB(0x0071d52f);
    /* 0071d52f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0071d533: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0071d536: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0071d539: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071d53c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071d53e: fcom dword ptr [0xa985b8] */ fx_compare(ST(0), R_F32((u32)(0xa985b8u))); 
    /* 0071d544: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d546: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0071d54a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d54b: ja 0x71d570 */ if ((!fC&&!fZ)) goto L_0071d570;
L_0071d54d:; BB(0x0071d54d);
    /* 0071d54d: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0071d550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d552: jne 0x71d4fd */ if (!fZ) goto L_0071d4fd;
L_0071d554:; BB(0x0071d554);
    /* 0071d554: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0071d558: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0071d55c: jmp 0x71d560 */ goto L_0071d560;
L_0071d55e:; BB(0x0071d55e);
    /* 0071d55e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0071d560:; BB(0x0071d560);
    /* 0071d560: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071d562: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d565: ret  */ FN_RET(0x0071d4c0); r_esp += 4; return;
L_0071d566:; BB(0x0071d566);
    /* 0071d566: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0071d56a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0071d56e: jmp 0x71d560 */ goto L_0071d560;
L_0071d570:; BB(0x0071d570);
    /* 0071d570: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0071d574: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0071d578: mov eax, 1 */ r_eax = 0x1u;
    /* 0071d57d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d580: ret  */ FN_RET(0x0071d4c0); r_esp += 4; return;
L_0071d581:; BB(0x0071d581);
    /* 0071d581: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d583: jmp 0x71d560 */ goto L_0071d560;
L_0071d585:; BB(0x0071d585);
    /* 0071d585: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d587: jmp 0x71d560 */ goto L_0071d560;
}

void f_0071d58c(void) /* sub_71D58C */
{
    FN_ENTER(0x0071d58c);
    /* 0071d58c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d58d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d58e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d58f: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071d592: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0071d596: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0071d59a: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0071d59e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071d5a2: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0071d5a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d5a9: je 0x71d911 */ if (fZ) goto L_0071d911;
L_0071d5af:; BB(0x0071d5af);
    /* 0071d5af: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0071d5b6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0071d5ba: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0071d5bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d5bf: je 0x71d911 */ if (fZ) goto L_0071d911;
L_0071d5c5:; BB(0x0071d5c5);
    /* 0071d5c5: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 0071d5cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d5cd: jne 0x71d5d6 */ if (!fZ) goto L_0071d5d6;
L_0071d5cf:; BB(0x0071d5cf);
    /* 0071d5cf: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
L_0071d5d6:; BB(0x0071d5d6);
    /* 0071d5d6: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0071d5da: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0071d5dd: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0071d5e1: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0071d5e3: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0071d5e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d5e8: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071d5ec: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071d5f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d5f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d5f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d5f3: call 0x7ac580 */ r_esp -= 4; W32(r_esp, 0x71d5f8u); f_007ac580();
    /* 0071d5f8: mov esi, eax */ r_esi = r_eax;
    /* 0071d5fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d5fd: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0071d601: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d604: jne 0x71d60a */ if (!fZ) goto L_0071d60a;
L_0071d606:; BB(0x0071d606);
    /* 0071d606: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_0071d60a:; BB(0x0071d60a);
    /* 0071d60a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071d60c: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x71d611u); f_007ac174();
    /* 0071d611: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071d612: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0071d615: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d617: je 0x71d87d */ if (fZ) goto L_0071d87d;
L_0071d61d:; BB(0x0071d61d);
    /* 0071d61d: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0071d621: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
L_0071d625:; BB(0x0071d625);
    /* 0071d625: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0071d628: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0071d62c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d62d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d62e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d62f: call 0x7ac580 */ r_esp -= 4; W32(r_esp, 0x71d634u); f_007ac580();
    /* 0071d634: mov esi, eax */ r_esi = r_eax;
    /* 0071d636: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d639: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d63c: jne 0x71d646 */ if (!fZ) goto L_0071d646;
L_0071d63e:; BB(0x0071d63e);
    /* 0071d63e: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0071d642: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_0071d646:; BB(0x0071d646);
    /* 0071d646: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0071d649: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d64b: je 0x71d86e */ if (fZ) goto L_0071d86e;
L_0071d651:; BB(0x0071d651);
    /* 0071d651: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0071d654: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d657: je 0x71d8bb */ if (fZ) goto L_0071d8bb;
L_0071d65d:; BB(0x0071d65d);
    /* 0071d65d: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d661: fcomp dword ptr [0x970220] */ fx_compare(ST(0), R_F32((u32)(0x970220u))); FPOP();
    /* 0071d667: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d669: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d66a: ja 0x71d676 */ if ((!fC&&!fZ)) goto L_0071d676;
L_0071d66c:; BB(0x0071d66c);
    /* 0071d66c: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d66f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0071d671: jmp 0x71d871 */ goto L_0071d871;
L_0071d676:; BB(0x0071d676);
    /* 0071d676: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d677: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x71d67cu); f_008443b4();
    /* 0071d67c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0071d680: mov edx, eax */ r_edx = r_eax;
    /* 0071d682: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d683: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x71d688u); f_007ac24c();
    /* 0071d688: mov edi, eax */ r_edi = r_eax;
    /* 0071d68a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d68d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071d691: mov edx, edi */ r_edx = r_edi;
    /* 0071d693: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071d699: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0071d69d: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0071d6a1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071d6a5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071d6a7: fcomp dword ptr [0xa985b8] */ fx_compare(ST(0), R_F32((u32)(0xa985b8u))); FPOP();
    /* 0071d6ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d6af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d6b0: jbe 0x71d6ca */ if ((fC||fZ)) goto L_0071d6ca;
L_0071d6b2:; BB(0x0071d6b2);
    /* 0071d6b2: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0071d6b6: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071d6ba: fadd dword ptr [0x97021c] */ ST(0) = ST(0) + R_F32((u32)(0x97021cu));
    /* 0071d6c0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0071d6c2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071d6c6: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_0071d6ca:; BB(0x0071d6ca);
    /* 0071d6ca: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0071d6ce: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0071d6d1: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d6d4: jne 0x71d783 */ if (!fZ) goto L_0071d783;
L_0071d6da:; BB(0x0071d6da);
    /* 0071d6da: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071d6de: mov edx, dword ptr [0xa985ac] */ r_edx = R32((u32)(0xa985acu));
    /* 0071d6e4: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0071d6ea: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0071d6ee: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0071d6f2: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071d6f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d6f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d6f8: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071d6fc: jne 0x71d703 */ if (!fZ) goto L_0071d703;
L_0071d6fe:; BB(0x0071d6fe);
    /* 0071d6fe: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d701: jmp 0x71d774 */ goto L_0071d774;
L_0071d703:; BB(0x0071d703);
    /* 0071d703: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d708: je 0x71d774 */ if (fZ) goto L_0071d774;
L_0071d70a:; BB(0x0071d70a);
    /* 0071d70a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d70c: je 0x71d774 */ if (fZ) goto L_0071d774;
L_0071d70e:; BB(0x0071d70e);
    /* 0071d70e: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071d712: mov edi, esi */ r_edi = r_esi;
    /* 0071d714: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d716: je 0x71d91d */ if (fZ) goto L_0071d91d;
L_0071d71c:; BB(0x0071d71c);
    /* 0071d71c: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0071d71f: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0071d723: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_0071d727:; BB(0x0071d727);
    /* 0071d727: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d72a: je 0x71d8af */ if (fZ) goto L_0071d8af;
L_0071d730:; BB(0x0071d730);
    /* 0071d730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d731: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071d734: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x71d739u); f_008443b4();
    /* 0071d739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d73a: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x71d73fu); f_007ac24c();
    /* 0071d73f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d742: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0071d746: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0071d749: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0071d74d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0071d751: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071d753: fcom dword ptr [0xa985b8] */ fx_compare(ST(0), R_F32((u32)(0xa985b8u))); 
    /* 0071d759: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d75b: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0071d75f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d760: ja 0x71d88b */ if ((!fC&&!fZ)) goto L_0071d88b;
L_0071d766:; BB(0x0071d766);
    /* 0071d766: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 0071d769: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d76b: jne 0x71d727 */ if (!fZ) goto L_0071d727;
L_0071d76d:; BB(0x0071d76d);
    /* 0071d76d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0071d771: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
L_0071d774:; BB(0x0071d774);
    /* 0071d774: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d778: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071d77a: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071d77e: jmp 0x71d871 */ goto L_0071d871;
L_0071d783:; BB(0x0071d783);
    /* 0071d783: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071d787: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071d78b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d78d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071d791: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071d795: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0071d799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d79a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d79b: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x71d7a0u); f_007ac200();
    /* 0071d7a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d7a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d7a7: fcomp dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); FPOP();
    /* 0071d7ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d7ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d7ae: jae 0x71d7be */ if (!fC) goto L_0071d7be;
L_0071d7b0:; BB(0x0071d7b0);
    /* 0071d7b0: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d7b4: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0071d7b8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0071d7bc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0071d7be:; BB(0x0071d7be);
    /* 0071d7be: mov edx, dword ptr [0xa985b4] */ r_edx = R32((u32)(0xa985b4u));
    /* 0071d7c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d7c6: je 0x71d7dc */ if (fZ) goto L_0071d7dc;
L_0071d7c8:; BB(0x0071d7c8);
    /* 0071d7c8: mov ecx, dword ptr [0xa985c0] */ r_ecx = R32((u32)(0xa985c0u));
    /* 0071d7ce: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0071d7d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d7d3: call 0x71bb78 */ r_esp -= 4; W32(r_esp, 0x71d7d8u); f_0071bb78();
    /* 0071d7d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d7da: je 0x71d84f */ if (fZ) goto L_0071d84f;
L_0071d7dc:; BB(0x0071d7dc);
    /* 0071d7dc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0071d7e0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071d7e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d7e5: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0071d7e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d7ea: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x71d7efu); f_007ac1a0();
    /* 0071d7ef: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0071d7f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d7f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d7f5: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x71d7fau); f_007ac200();
    /* 0071d7fa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d7fd: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d801: fcomp dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); FPOP();
    /* 0071d805: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d807: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d808: jae 0x71d816 */ if (!fC) goto L_0071d816;
L_0071d80a:; BB(0x0071d80a);
    /* 0071d80a: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d80e: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0071d812: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
L_0071d816:; BB(0x0071d816);
    /* 0071d816: mov edx, dword ptr [0xa985b4] */ r_edx = R32((u32)(0xa985b4u));
    /* 0071d81c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d81e: je 0x71d830 */ if (fZ) goto L_0071d830;
L_0071d820:; BB(0x0071d820);
    /* 0071d820: mov ecx, dword ptr [0xa985c0] */ r_ecx = R32((u32)(0xa985c0u));
    /* 0071d826: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0071d82a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d82b: call 0x71ba64 */ r_esp -= 4; W32(r_esp, 0x71d830u); f_0071ba64();
L_0071d830:; BB(0x0071d830);
    /* 0071d830: mov ecx, dword ptr [0xa985c0] */ r_ecx = R32((u32)(0xa985c0u));
    /* 0071d836: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0071d83a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d83b: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x71d840u); f_0071bbb4();
    /* 0071d840: push dword ptr [0xa985bc] */ { u32 v = R32((u32)(0xa985bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071d846: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0071d84a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71d84fu); f_0082b440();
L_0071d84f:; BB(0x0071d84f);
    /* 0071d84f: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0071d853: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071d857: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071d859: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d85d: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d860: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d862: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071d866: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071d868: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071d86c: jmp 0x71d871 */ goto L_0071d871;
L_0071d86e:; BB(0x0071d86e);
    /* 0071d86e: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
L_0071d871:; BB(0x0071d871);
    /* 0071d871: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d873: jne 0x71d625 */ if (!fZ) goto L_0071d625;
L_0071d879:; BB(0x0071d879);
    /* 0071d879: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_0071d87d:; BB(0x0071d87d);
    /* 0071d87d: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x71d882u); f_007ac198();
    /* 0071d882: mov eax, ebx */ r_eax = r_ebx;
    /* 0071d884: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d887: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d888: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d889: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071d88a: ret  */ FN_RET(0x0071d58c); r_esp += 4; return;
L_0071d88b:; BB(0x0071d88b);
    /* 0071d88b: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0071d88f: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0071d893: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071d897: fadd dword ptr [0x97021c] */ ST(0) = ST(0) + R_F32((u32)(0x97021cu));
    /* 0071d89d: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0071d89f: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d8a2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071d8a6: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071d8aa: jmp 0x71d774 */ goto L_0071d774;
L_0071d8af:; BB(0x0071d8af);
    /* 0071d8af: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0071d8b3: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d8b6: jmp 0x71d774 */ goto L_0071d774;
L_0071d8bb:; BB(0x0071d8bb);
    /* 0071d8bb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d8bd: jne 0x71d909 */ if (!fZ) goto L_0071d909;
L_0071d8bf:; BB(0x0071d8bf);
    /* 0071d8bf: mov edx, dword ptr [0xa985b0] */ r_edx = R32((u32)(0xa985b0u));
    /* 0071d8c5: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d8c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d8ca: je 0x71d8ec */ if (fZ) goto L_0071d8ec;
L_0071d8cc:; BB(0x0071d8cc);
    /* 0071d8cc: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071d8d0: fadd dword ptr [0x970218] */ ST(0) = ST(0) + R_F32((u32)(0x970218u));
    /* 0071d8d6: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071d8da: fadd dword ptr [0x970214] */ ST(0) = ST(0) + R_F32((u32)(0x970214u));
    /* 0071d8e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071d8e2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071d8e6: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071d8ea: jmp 0x71d871 */ goto L_0071d871;
L_0071d8ec:; BB(0x0071d8ec);
    /* 0071d8ec: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0071d8f0: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071d8f4: fadd dword ptr [0x97021c] */ ST(0) = ST(0) + R_F32((u32)(0x97021cu));
    /* 0071d8fa: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0071d8fc: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071d900: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071d904: jmp 0x71d871 */ goto L_0071d871;
L_0071d909:; BB(0x0071d909);
    /* 0071d909: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0071d90c: jmp 0x71d871 */ goto L_0071d871;
L_0071d911:; BB(0x0071d911);
    /* 0071d911: mov eax, 1 */ r_eax = 0x1u;
    /* 0071d916: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d919: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d91a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d91b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071d91c: ret  */ FN_RET(0x0071d58c); r_esp += 4; return;
L_0071d91d:; BB(0x0071d91d);
    /* 0071d91d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071d91f: jmp 0x71d774 */ goto L_0071d774;
}

void f_0071d924(void) /* sub_71D924 */
{
    FN_ENTER(0x0071d924);
    /* 0071d924: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d925: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d926: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d927: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071d92a: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0071d92e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071d932: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071d936: mov esi, 1 */ r_esi = 0x1u;
    /* 0071d93b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d93d: je 0x71d946 */ if (fZ) goto L_0071d946;
L_0071d93f:; BB(0x0071d93f);
    /* 0071d93f: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 0071d942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d944: jne 0x71d952 */ if (!fZ) goto L_0071d952;
L_0071d946:; BB(0x0071d946);
    /* 0071d946: mov eax, 1 */ r_eax = 0x1u;
    /* 0071d94b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d94e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071d94f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071d950: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071d951: ret  */ FN_RET(0x0071d924); r_esp += 4; return;
L_0071d952:; BB(0x0071d952);
    /* 0071d952: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0071d956: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0071d95a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0071d95c: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0071d95f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0071d963: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0071d968: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x71d96du); f_0082bb30();
    /* 0071d96d: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0071d973: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x71d978u); f_00829cc8();
    /* 0071d978: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0071d97c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071d97e: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71d983u); f_0082bb60();
    /* 0071d983: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0071d986: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d988: je 0x71da8a */ if (fZ) goto L_0071da8a;
L_0071d98e:; BB(0x0071d98e);
    /* 0071d98e: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0071d992: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
L_0071d996:; BB(0x0071d996);
    /* 0071d996: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0071d999: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0071d99c: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d99f: je 0x71da98 */ if (fZ) goto L_0071da98;
L_0071d9a5:; BB(0x0071d9a5);
    /* 0071d9a5: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071d9a9: fcomp dword ptr [0x970210] */ fx_compare(ST(0), R_F32((u32)(0x970210u))); FPOP();
    /* 0071d9af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071d9b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071d9b2: ja 0x71d9bb */ if ((!fC&&!fZ)) goto L_0071d9bb;
L_0071d9b4:; BB(0x0071d9b4);
    /* 0071d9b4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0071d9b6: jmp 0x71da7b */ goto L_0071da7b;
L_0071d9bb:; BB(0x0071d9bb);
    /* 0071d9bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d9bc: call 0x789240 */ r_esp -= 4; W32(r_esp, 0x71d9c1u); f_00789240();
    /* 0071d9c1: mov edi, eax */ r_edi = r_eax;
    /* 0071d9c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d9c4: call 0x789044 */ r_esp -= 4; W32(r_esp, 0x71d9c9u); f_00789044();
    /* 0071d9c9: mov ebp, eax */ r_ebp = r_eax;
    /* 0071d9cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d9ce: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0071d9d2: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0071d9d6: mov ecx, dword ptr [0xa985b0] */ r_ecx = R32((u32)(0xa985b0u));
    /* 0071d9dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071d9df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071d9e1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071d9e5: je 0x71d9f6 */ if (fZ) goto L_0071d9f6;
L_0071d9e7:; BB(0x0071d9e7);
    /* 0071d9e7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0071d9ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d9eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d9ec: call 0x788fa0 */ r_esp -= 4; W32(r_esp, 0x71d9f1u); f_00788fa0();
    /* 0071d9f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071d9f4: jmp 0x71da03 */ goto L_0071da03;
L_0071d9f6:; BB(0x0071d9f6);
    /* 0071d9f6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0071d9f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d9fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d9fb: call 0x7893a4 */ r_esp -= 4; W32(r_esp, 0x71da00u); f_007893a4();
    /* 0071da00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0071da03:; BB(0x0071da03);
    /* 0071da03: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071da07: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0071da0d: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0071da11: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0071da15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071da17: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0071da19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071da1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071da1c: jae 0x71da2b */ if (!fC) goto L_0071da2b;
L_0071da1e:; BB(0x0071da1e);
    /* 0071da1e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071da22: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0071da25: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071da29: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0071da2b:; BB(0x0071da2b);
    /* 0071da2b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0071da2f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071da31: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071da35: mov eax, dword ptr [0xa985b4] */ r_eax = R32((u32)(0xa985b4u));
    /* 0071da3a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071da3c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0071da40: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071da42: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071da46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071da48: je 0x71da5d */ if (fZ) goto L_0071da5d;
L_0071da4a:; BB(0x0071da4a);
    /* 0071da4a: mov ecx, dword ptr [0xa985c0] */ r_ecx = R32((u32)(0xa985c0u));
    /* 0071da50: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071da53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071da54: call 0x71ba64 */ r_esp -= 4; W32(r_esp, 0x71da59u); f_0071ba64();
    /* 0071da59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071da5b: je 0x71da7b */ if (fZ) goto L_0071da7b;
L_0071da5d:; BB(0x0071da5d);
    /* 0071da5d: mov ecx, dword ptr [0xa985c0] */ r_ecx = R32((u32)(0xa985c0u));
    /* 0071da63: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071da66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071da67: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x71da6cu); f_0071bbb4();
    /* 0071da6c: push dword ptr [0xa985bc] */ { u32 v = R32((u32)(0xa985bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071da72: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0071da76: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71da7bu); f_0082b440();
L_0071da7b:; BB(0x0071da7b);
    /* 0071da7b: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0071da7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071da80: jne 0x71d996 */ if (!fZ) goto L_0071d996;
L_0071da86:; BB(0x0071da86);
    /* 0071da86: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_0071da8a:; BB(0x0071da8a);
    /* 0071da8a: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x71da8fu); f_004ac444();
    /* 0071da8f: mov eax, esi */ r_eax = r_esi;
    /* 0071da91: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071da94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071da95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071da96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071da97: ret  */ FN_RET(0x0071d924); r_esp += 4; return;
L_0071da98:; BB(0x0071da98);
    /* 0071da98: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0071da9c: fadd dword ptr [0x97020c] */ ST(0) = ST(0) + R_F32((u32)(0x97020cu));
    /* 0071daa2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071daa6: fadd dword ptr [0x970208] */ ST(0) = ST(0) + R_F32((u32)(0x970208u));
    /* 0071daac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071daae: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0071dab2: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071dab6: jmp 0x71da7b */ goto L_0071da7b;
}

void f_0071dab8(void) /* sub_71DAB8 */
{
    FN_ENTER(0x0071dab8);
    /* 0071dab8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071dab9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071dabb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071dabd: call 0x71dadc */ r_esp -= 4; W32(r_esp, 0x71dac2u); f_0071dadc();
    /* 0071dac2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071dac6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071dac8: jne 0x71dace */ if (!fZ) goto L_0071dace;
L_0071daca:; BB(0x0071daca);
    /* 0071daca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071dacb: ret 4 */ FN_RET(0x0071dab8); r_esp += 8; return;
L_0071dace:; BB(0x0071dace);
    /* 0071dace: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071dacf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71dad4u); f_005c2f74();
    /* 0071dad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071dad5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071dad6: ret 4 */ FN_RET(0x0071dab8); r_esp += 8; return;
}

void f_0071dadc(void) /* sub_71DADC */
{
    FN_ENTER(0x0071dadc);
    /* 0071dadc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071dadd: mov ebp, esp */ r_ebp = r_esp;
    /* 0071dadf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071dae1: push 0x8f0d18 */ { u32 v = 0x8f0d18u; r_esp -= 4; W32(r_esp, v); }
    /* 0071dae6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071daec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071daed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071daf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071daf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071dafa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071dafd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071db00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071db03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071db06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071db0d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071db10: movzx eax, byte ptr [ecx + 0x85] */ r_eax = (u32)R8((u32)(r_ecx+0x85u));
    /* 0071db17: mov dword ptr [ecx], 0xb3fcc8 */ W32((u32)(r_ecx), 0xb3fcc8u);
    /* 0071db1d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071db1f: je 0x71db3c */ if (fZ) goto L_0071db3c;
L_0071db21:; BB(0x0071db21);
    /* 0071db21: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071db26: mov byte ptr [ecx + 0x85], al */ W8((u32)(r_ecx+0x85u), (u8)r_eax);
    /* 0071db2c: add ecx, 0x87 */ {  u32 a = r_ecx; u32 b = 0x87u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0071db32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071db33: call 0x717c78 */ r_esp -= 4; W32(r_esp, 0x71db38u); f_00717c78();
    /* 0071db38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071db39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0071db3c:; BB(0x0071db3c);
    /* 0071db3c: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0071db42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071db44: je 0x71db5a */ if (fZ) goto L_0071db5a;
L_0071db46:; BB(0x0071db46);
    /* 0071db46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071db47: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x71db4cu); f_00857e98();
    /* 0071db4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071db4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071db50: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_0071db5a:; BB(0x0071db5a);
    /* 0071db5a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071db61: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x71db66u); f_00710788();
    /* 0071db66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071db69: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071db70: mov esp, ebp */ r_esp = r_ebp;
    /* 0071db72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071db73: ret  */ FN_RET(0x0071dadc); r_esp += 4; return;
}

void f_0071db74(void) /* sub_71DB74 */
{
    FN_ENTER(0x0071db74);
    /* 0071db74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071db75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071db76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071db77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071db78: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071db7b: mov edi, ecx */ r_edi = r_ecx;
    /* 0071db7d: movzx eax, word ptr [edi + 0x8a] */ r_eax = (u32)R16((u32)(r_edi+0x8au));
    /* 0071db84: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0071db88: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0071db8c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071db91: je 0x71dc78 */ if (fZ) goto L_0071dc78;
L_0071db97:; BB(0x0071db97);
    /* 0071db97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071db98: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x71db9du); f_007b4d18();
    /* 0071db9d: mov ebx, eax */ r_ebx = r_eax;
    /* 0071db9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071dba2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071dba4: je 0x71dc78 */ if (fZ) goto L_0071dc78;
L_0071dbaa:; BB(0x0071dbaa);
    /* 0071dbaa: movzx eax, word ptr [edi + 0x8a] */ r_eax = (u32)R16((u32)(r_edi+0x8au));
    /* 0071dbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071dbb2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71dbb7u); f_0068d5a8();
    /* 0071dbb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071dbb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071dbba: je 0x71dbd2 */ if (fZ) goto L_0071dbd2;
L_0071dbbc:; BB(0x0071dbbc);
    /* 0071dbbc: movzx eax, word ptr [edi + 0x8a] */ r_eax = (u32)R16((u32)(r_edi+0x8au));
    /* 0071dbc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071dbc4: call 0x6944ec */ r_esp -= 4; W32(r_esp, 0x71dbc9u); f_006944ec();
    /* 0071dbc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071dbca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071dbcc: je 0x71dc78 */ if (fZ) goto L_0071dc78;
L_0071dbd2:; BB(0x0071dbd2);
    /* 0071dbd2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071dbd4: jne 0x71dbda */ if (!fZ) goto L_0071dbda;
L_0071dbd6:; BB(0x0071dbd6);
    /* 0071dbd6: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
L_0071dbda:; BB(0x0071dbda);
    /* 0071dbda: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0071dbdd: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0071dbdf: fld dword ptr [edi + 0x90] */ FPUSH(R_F32((u32)(r_edi+0x90u)));
    /* 0071dbe5: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0071dbe8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071dbea: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0071dbed: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0071dbf0: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0071dbf3: je 0x71dc69 */ if (fZ) goto L_0071dc69;
L_0071dbf5:; BB(0x0071dbf5);
    /* 0071dbf5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x71dbfau); f_0082d7b0();
    /* 0071dbfa: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71dbffu); f_004d2968();
    /* 0071dbff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071dc00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071dc02: mov edx, esi */ r_edx = r_esi;
    /* 0071dc04: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x71dc09u); f_0082f09c();
    /* 0071dc09: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x71dc0eu); f_004d28a4();
    /* 0071dc0e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x71dc13u); f_0082da80();
    /* 0071dc13: mov edx, dword ptr [0xaf0350] */ r_edx = R32((u32)(0xaf0350u));
    /* 0071dc19: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071dc1b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071dc1e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071dc21: mov eax, 1 */ r_eax = 0x1u;
    /* 0071dc26: fsubr dword ptr [0xa48828] */ ST(0) = R_F32((u32)(0xa48828u)) - ST(0);
    /* 0071dc2c: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 0071dc2f: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071dc32: fdiv dword ptr [0xaf0358] */ ST(0) = ST(0) / R_F32((u32)(0xaf0358u));
    /* 0071dc38: mov ecx, dword ptr [0xaf0354] */ r_ecx = R32((u32)(0xaf0354u));
    /* 0071dc3e: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0071dc40: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0071dc44: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0071dc48: fsubr dword ptr [0xa4882c] */ ST(0) = R_F32((u32)(0xa4882cu)) - ST(0);
    /* 0071dc4e: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 0071dc51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071dc53: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071dc56: fdiv dword ptr [0xaf035c] */ ST(0) = ST(0) / R_F32((u32)(0xaf035cu));
    /* 0071dc5c: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071dc5f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071dc62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071dc63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071dc64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071dc65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071dc66: ret 8 */ FN_RET(0x0071db74); r_esp += 12; return;
L_0071dc69:; BB(0x0071dc69);
    /* 0071dc69: mov eax, 1 */ r_eax = 0x1u;
    /* 0071dc6e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071dc71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071dc72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071dc73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071dc74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071dc75: ret 8 */ FN_RET(0x0071db74); r_esp += 12; return;
L_0071dc78:; BB(0x0071dc78);
    /* 0071dc78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071dc7a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071dc7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071dc7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071dc7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071dc80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071dc81: ret 8 */ FN_RET(0x0071db74); r_esp += 12; return;
}

void f_0071dc84(void) /* sub_71DC84 */
{
    FN_ENTER(0x0071dc84);
    /* 0071dc84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071dc85: mov ebp, esp */ r_ebp = r_esp;
    /* 0071dc87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071dc89: push 0x8f0d34 */ { u32 v = 0x8f0d34u; r_esp -= 4; W32(r_esp, v); }
    /* 0071dc8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071dc94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071dc95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071dc9c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071dc9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071dca2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0071dca5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0071dca8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0071dcab: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0071dcaf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0071dcb2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0071dcb5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071dcb8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0071dcbb: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0071dcbe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0071dcc1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0071dcc4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071dcc7: call 0x73ec70 */ r_esp -= 4; W32(r_esp, 0x71dcccu); f_0073ec70();
    /* 0071dccc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071dccf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0071dcd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071dcd3: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 0071dcd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071dcd7: push 0x9f24b0 */ { u32 v = 0x9f24b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071dcdc: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x71dce1u); f_007108c4();
    /* 0071dce1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071dce8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0071dceb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071dcee: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071dcf1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071dcf4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071dcf7: mov dword ptr [ecx], 0xb3fcc8 */ W32((u32)(r_ecx), 0xb3fcc8u);
    /* 0071dcfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071dcfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071dcff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071dd00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071dd01: call 0x720de0 */ r_esp -= 4; W32(r_esp, 0x71dd06u); f_00720de0();
    /* 0071dd06: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0071dd09: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0071dd0c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071dd0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071dd12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071dd19: mov esp, ebp */ r_esp = r_ebp;
    /* 0071dd1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071dd1c: ret 0x10 */ FN_RET(0x0071dc84); r_esp += 20; return;
}

void f_0071dd20(void) /* sub_71DD20 */
{
    FN_ENTER(0x0071dd20);
    /* 0071dd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071dd21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071dd22: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071dd24: movzx eax, byte ptr [ebp + 0x84] */ r_eax = (u32)R8((u32)(r_ebp+0x84u));
    /* 0071dd2b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0071dd2e: ja 0x71df5d */ if ((!fC&&!fZ)) goto L_0071df5d;
L_0071dd34:; BB(0x0071dd34);
    /* 0071dd34: mov eax, dword ptr [eax*4 + 0x970240] */ r_eax = R32((u32)(r_eax*4+0x970240u));
    /* 0071dd3b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071dd20); r_esp += 4; return;
}

void f_0071dd3d(void)
{
    FN_ENTER(0x0071dd3d);
    /* 0071dd3d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0071dd41: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071dd46: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0071dd4a: jmp 0x71df5d */ goto L_0071df5d;
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071dd3d); r_esp += 4; return;
}

void f_0071dd4f(void)
{
    FN_ENTER(0x0071dd4f);
    /* 0071dd4f: movzx edx, byte ptr [ebp + 0x85] */ r_edx = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071dd56: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0071dd59: mov byte ptr [ebp + 0x84], 8 */ W8((u32)(r_ebp+0x84u), 0x8u);
    /* 0071dd60: and edx, 0xfb */ {  u32 a = r_edx; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071dd66: and eax, 0xfffffefe */ {  u32 a = r_eax; u32 b = 0xfffffefeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071dd6b: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0071dd6e: or edx, 0xffffff10 */ {  u32 a = r_edx; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071dd74: mov byte ptr [ebp + 0x85], dl */ W8((u32)(r_ebp+0x85u), (u8)r_edx);
    /* 0071dd7a: fld dword ptr [0x970578] */ FPUSH(R_F32((u32)(0x970578u)));
    /* 0071dd80: fsub dword ptr [ebp + 0x94] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x94u));
    /* 0071dd86: fmul dword ptr [0x970574] */ ST(0) = ST(0) * R_F32((u32)(0x970574u));
    /* 0071dd8c: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071dd8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071dd90: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071dd93: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71dd98u); f_0082e900();
    /* 0071dd98: fcomp dword ptr [0x970570] */ fx_compare(ST(0), R_F32((u32)(0x970570u))); FPOP();
    /* 0071dd9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071dda0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071dda1: jae 0x71ddb6 */ if (!fC) goto L_0071ddb6;
L_0071dda3:; BB(0x0071dda3);
    /* 0071dda3: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 0071ddad: mov byte ptr [ebp + 0x84], 9 */ W8((u32)(r_ebp+0x84u), 0x9u);
    /* 0071ddb4: jmp 0x71ddc5 */ goto L_0071ddc5;
L_0071ddb6:; BB(0x0071ddb6);
    /* 0071ddb6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071ddb9: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0071ddbf: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
L_0071ddc5:; BB(0x0071ddc5);
    /* 0071ddc5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ddc7: call 0x71e010 */ r_esp -= 4; W32(r_esp, 0x71ddccu); f_0071e010();
    /* 0071ddcc: jmp 0x71df5d */ goto L_0071df5d;
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071dd4f); r_esp += 4; return;
}

void f_0071dd7a(void)
{
    FN_ENTER(0x0071dd7a);
    /* 0071dd7a: fld dword ptr [0x970578] */ FPUSH(R_F32((u32)(0x970578u)));
    /* 0071dd80: fsub dword ptr [ebp + 0x94] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x94u));
    /* 0071dd86: fmul dword ptr [0x970574] */ ST(0) = ST(0) * R_F32((u32)(0x970574u));
    /* 0071dd8c: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071dd8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071dd90: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071dd93: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71dd98u); f_0082e900();
    /* 0071dd98: fcomp dword ptr [0x970570] */ fx_compare(ST(0), R_F32((u32)(0x970570u))); FPOP();
    /* 0071dd9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071dda0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071dda1: jae 0x71ddb6 */ if (!fC) goto L_0071ddb6;
L_0071dda3:; BB(0x0071dda3);
    /* 0071dda3: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 0071ddad: mov byte ptr [ebp + 0x84], 9 */ W8((u32)(r_ebp+0x84u), 0x9u);
    /* 0071ddb4: jmp 0x71ddc5 */ goto L_0071ddc5;
L_0071ddb6:; BB(0x0071ddb6);
    /* 0071ddb6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071ddb9: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0071ddbf: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
L_0071ddc5:; BB(0x0071ddc5);
    /* 0071ddc5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ddc7: call 0x71e010 */ r_esp -= 4; W32(r_esp, 0x71ddccu); f_0071e010();
    /* 0071ddcc: jmp 0x71df5d */ goto L_0071df5d;
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071dd7a); r_esp += 4; return;
}

void f_0071ddd1(void)
{
    FN_ENTER(0x0071ddd1);
    /* 0071ddd1: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0071ddd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ddd5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ddd7: call 0x71df80 */ r_esp -= 4; W32(r_esp, 0x71dddcu); f_0071df80();
    /* 0071dddc: movzx edx, byte ptr [ebp + 0x85] */ r_edx = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071dde3: mov eax, 6 */ r_eax = 0x6u;
    /* 0071dde8: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 0071ddeb: and edx, 0xfb */ {  u32 a = r_edx; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071ddf1: mov byte ptr [ebp + 0x85], dl */ W8((u32)(r_ebp+0x85u), (u8)r_edx);
    /* 0071ddf7: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0071ddfa: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071de00: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 0071de03: mov byte ptr [ebp + 0x84], al */ W8((u32)(r_ebp+0x84u), (u8)r_eax);
    /* 0071de09: fld dword ptr [0x97056c] */ FPUSH(R_F32((u32)(0x97056cu)));
    /* 0071de0f: fsub dword ptr [ebp + 0x94] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x94u));
    /* 0071de15: fmul dword ptr [0x970574] */ ST(0) = ST(0) * R_F32((u32)(0x970574u));
    /* 0071de1b: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071de1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071de1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071de22: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71de27u); f_0082e900();
    /* 0071de27: fcomp dword ptr [0x970570] */ fx_compare(ST(0), R_F32((u32)(0x970570u))); FPOP();
    /* 0071de2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071de2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071de30: jae 0x71de45 */ if (!fC) goto L_0071de45;
L_0071de32:; BB(0x0071de32);
    /* 0071de32: mov dword ptr [ebp + 0x94], 0x3f000000 */ W32((u32)(r_ebp+0x94u), 0x3f000000u);
    /* 0071de3c: mov byte ptr [ebp + 0x84], 1 */ W8((u32)(r_ebp+0x84u), 0x1u);
    /* 0071de43: jmp 0x71de54 */ goto L_0071de54;
L_0071de45:; BB(0x0071de45);
    /* 0071de45: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071de48: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0071de4e: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
L_0071de54:; BB(0x0071de54);
    /* 0071de54: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071de56: call 0x71e010 */ r_esp -= 4; W32(r_esp, 0x71de5bu); f_0071e010();
    /* 0071de5b: jmp 0x71df5d */ goto L_0071df5d;
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071ddd1); r_esp += 4; return;
}

void f_0071de09(void)
{
    FN_ENTER(0x0071de09);
    /* 0071de09: fld dword ptr [0x97056c] */ FPUSH(R_F32((u32)(0x97056cu)));
    /* 0071de0f: fsub dword ptr [ebp + 0x94] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x94u));
    /* 0071de15: fmul dword ptr [0x970574] */ ST(0) = ST(0) * R_F32((u32)(0x970574u));
    /* 0071de1b: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071de1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071de1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071de22: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71de27u); f_0082e900();
    /* 0071de27: fcomp dword ptr [0x970570] */ fx_compare(ST(0), R_F32((u32)(0x970570u))); FPOP();
    /* 0071de2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071de2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071de30: jae 0x71de45 */ if (!fC) goto L_0071de45;
L_0071de32:; BB(0x0071de32);
    /* 0071de32: mov dword ptr [ebp + 0x94], 0x3f000000 */ W32((u32)(r_ebp+0x94u), 0x3f000000u);
    /* 0071de3c: mov byte ptr [ebp + 0x84], 1 */ W8((u32)(r_ebp+0x84u), 0x1u);
    /* 0071de43: jmp 0x71de54 */ goto L_0071de54;
L_0071de45:; BB(0x0071de45);
    /* 0071de45: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071de48: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0071de4e: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
L_0071de54:; BB(0x0071de54);
    /* 0071de54: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071de56: call 0x71e010 */ r_esp -= 4; W32(r_esp, 0x71de5bu); f_0071e010();
    /* 0071de5b: jmp 0x71df5d */ goto L_0071df5d;
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071de09); r_esp += 4; return;
}

void f_0071de60(void)
{
    FN_ENTER(0x0071de60);
    /* 0071de60: movzx edx, byte ptr [ebp + 0x85] */ r_edx = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071de67: jmp 0x71de8b */ goto L_0071de8b;
L_0071de8b:; BB(0x0071de8b);
    /* 0071de8b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071de8e: je 0x71df5d */ if (fZ) goto L_0071df5d;
L_0071de94:; BB(0x0071de94);
    /* 0071de94: fld dword ptr [0x970568] */ FPUSH(R_F32((u32)(0x970568u)));
    /* 0071de9a: movsx eax, word ptr [ebp + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x88u));
    /* 0071dea1: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 0071dea4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071dea6: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071dea9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071deab: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 0071deae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071deb0: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0071deb3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071deb6: mov word ptr [ebp + 0x88], ax */ W16((u32)(r_ebp+0x88u), (u16)r_eax);
    /* 0071debd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0071dec0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071dec2: jge 0x71df5d */ if ((fS==fO)) goto L_0071df5d;
L_0071dec8:; BB(0x0071dec8);
    /* 0071dec8: mov byte ptr [ebp + 0x84], 7 */ W8((u32)(r_ebp+0x84u), 0x7u);
    /* 0071decf: jmp 0x71df5d */ goto L_0071df5d;
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071de60); r_esp += 4; return;
}

void f_0071de69(void)
{
    FN_ENTER(0x0071de69);
    /* 0071de69: movzx edx, byte ptr [ebp + 0x85] */ r_edx = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071de70: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0071de73: mov byte ptr [ebp + 0x84], 4 */ W8((u32)(r_ebp+0x84u), 0x4u);
    /* 0071de7a: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071de7d: mov byte ptr [ebp + 0x85], dl */ W8((u32)(r_ebp+0x85u), (u8)r_edx);
    /* 0071de83: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071de88: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0071de8b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071de8e: je 0x71df5d */ if (fZ) goto L_0071df5d;
L_0071de94:; BB(0x0071de94);
    /* 0071de94: fld dword ptr [0x970568] */ FPUSH(R_F32((u32)(0x970568u)));
    /* 0071de9a: movsx eax, word ptr [ebp + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x88u));
    /* 0071dea1: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 0071dea4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071dea6: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071dea9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071deab: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 0071deae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071deb0: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0071deb3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071deb6: mov word ptr [ebp + 0x88], ax */ W16((u32)(r_ebp+0x88u), (u16)r_eax);
    /* 0071debd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0071dec0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071dec2: jge 0x71df5d */ if ((fS==fO)) goto L_0071df5d;
L_0071dec8:; BB(0x0071dec8);
    /* 0071dec8: mov byte ptr [ebp + 0x84], 7 */ W8((u32)(r_ebp+0x84u), 0x7u);
    /* 0071decf: jmp 0x71df5d */ goto L_0071df5d;
L_0071df5d:; BB(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071de69); r_esp += 4; return;
}

void f_0071ded4(void)
{
    FN_ENTER(0x0071ded4);
    /* 0071ded4: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0071ded7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ded8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071deda: call 0x71dfcc */ r_esp -= 4; W32(r_esp, 0x71dedfu); f_0071dfcc();
    /* 0071dedf: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071dee6: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0071dee9: mov dword ptr [ebp + 0x50], 6 */ W32((u32)(r_ebp+0x50u), 0x6u);
    /* 0071def0: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071def5: mov byte ptr [ebp + 0x84], 2 */ W8((u32)(r_ebp+0x84u), 0x2u);
    /* 0071defc: mov byte ptr [ebp + 0x85], al */ W8((u32)(r_ebp+0x85u), (u8)r_eax);
    /* 0071df02: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071df08: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 0071df0b: fld dword ptr [0x970564] */ FPUSH(R_F32((u32)(0x970564u)));
    /* 0071df11: fsub dword ptr [ebp + 0x94] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x94u));
    /* 0071df17: fmul dword ptr [0x970574] */ ST(0) = ST(0) * R_F32((u32)(0x970574u));
    /* 0071df1d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071df20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071df21: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071df24: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71df29u); f_0082e900();
    /* 0071df29: fcomp dword ptr [0x970570] */ fx_compare(ST(0), R_F32((u32)(0x970570u))); FPOP();
    /* 0071df2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071df31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071df32: jae 0x71df47 */ if (!fC) goto L_0071df47;
L_0071df34:; BB(0x0071df34);
    /* 0071df34: mov dword ptr [ebp + 0x94], 0x3f800000 */ W32((u32)(r_ebp+0x94u), 0x3f800000u);
    /* 0071df3e: mov byte ptr [ebp + 0x84], 3 */ W8((u32)(r_ebp+0x84u), 0x3u);
    /* 0071df45: jmp 0x71df56 */ goto L_0071df56;
L_0071df47:; BB(0x0071df47);
    /* 0071df47: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071df4a: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0071df50: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
L_0071df56:; BB(0x0071df56);
    /* 0071df56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df58: call 0x71e010 */ r_esp -= 4; W32(r_esp, 0x71df5du); f_0071e010();
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071ded4); r_esp += 4; return;
}

void f_0071df0b(void)
{
    FN_ENTER(0x0071df0b);
    /* 0071df0b: fld dword ptr [0x970564] */ FPUSH(R_F32((u32)(0x970564u)));
    /* 0071df11: fsub dword ptr [ebp + 0x94] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x94u));
    /* 0071df17: fmul dword ptr [0x970574] */ ST(0) = ST(0) * R_F32((u32)(0x970574u));
    /* 0071df1d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071df20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071df21: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071df24: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71df29u); f_0082e900();
    /* 0071df29: fcomp dword ptr [0x970570] */ fx_compare(ST(0), R_F32((u32)(0x970570u))); FPOP();
    /* 0071df2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071df31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071df32: jae 0x71df47 */ if (!fC) goto L_0071df47;
L_0071df34:; BB(0x0071df34);
    /* 0071df34: mov dword ptr [ebp + 0x94], 0x3f800000 */ W32((u32)(r_ebp+0x94u), 0x3f800000u);
    /* 0071df3e: mov byte ptr [ebp + 0x84], 3 */ W8((u32)(r_ebp+0x84u), 0x3u);
    /* 0071df45: jmp 0x71df56 */ goto L_0071df56;
L_0071df47:; BB(0x0071df47);
    /* 0071df47: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071df4a: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0071df50: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
L_0071df56:; BB(0x0071df56);
    /* 0071df56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df58: call 0x71e010 */ r_esp -= 4; W32(r_esp, 0x71df5du); f_0071e010();
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071df0b); r_esp += 4; return;
}

void f_0071df5d(void)
{
    FN_ENTER(0x0071df5d);
    /* 0071df5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df5f: call 0x71e020 */ r_esp -= 4; W32(r_esp, 0x71df64u); f_0071e020();
    /* 0071df64: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071df6b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071df6d: je 0x71df7a */ if (fZ) goto L_0071df7a;
L_0071df6f:; BB(0x0071df6f);
    /* 0071df6f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0071df72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df75: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x71df7au); f_0072a5ec();
L_0071df7a:; BB(0x0071df7a);
    /* 0071df7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071df7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071df7c: ret  */ FN_RET(0x0071df5d); r_esp += 4; return;
}

void f_0071df80(void) /* sub_71DF80 */
{
    FN_ENTER(0x0071df80);
    /* 0071df80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071df81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071df82: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071df85: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071df87: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0071df8b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071df8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071df8f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071df91: call 0x71dfcc */ r_esp -= 4; W32(r_esp, 0x71df96u); f_0071dfcc();
    /* 0071df96: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071df99: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0071df9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071df9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071dfa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071dfa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071dfa3: jb 0x71dfa7 */ if (fC) goto L_0071dfa7;
L_0071dfa5:; BB(0x0071dfa5);
    /* 0071dfa5: fst st(1) */ ST(1) = ST(0);
L_0071dfa7:; BB(0x0071dfa7);
    /* 0071dfa7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071dfa9: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0071dfab: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0071dfaf: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0071dfb2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071dfb4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071dfb6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071dfb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071dfb9: jb 0x71dfbd */ if (fC) goto L_0071dfbd;
L_0071dfbb:; BB(0x0071dfbb);
    /* 0071dfbb: fst st(1) */ ST(1) = ST(0);
L_0071dfbd:; BB(0x0071dfbd);
    /* 0071dfbd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071dfbf: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0071dfc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071dfc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071dfc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071dfc7: ret 4 */ FN_RET(0x0071df80); r_esp += 8; return;
}

void f_0071dfcc(void) /* sub_71DFCC */
{
    FN_ENTER(0x0071dfcc);
    /* 0071dfcc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071dfd0: movzx edx, byte ptr [ecx + 0x86] */ r_edx = (u32)R8((u32)(r_ecx+0x86u));
    /* 0071dfd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071dfd9: jne 0x71dff8 */ if (!fZ) goto L_0071dff8;
L_0071dfdb:; BB(0x0071dfdb);
    /* 0071dfdb: fld dword ptr [0x970560] */ FPUSH(R_F32((u32)(0x970560u)));
    /* 0071dfe1: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0071dfe4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0071dfe6: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0071dfe9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071dfeb: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0071dfed: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0071dff0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071dff2: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0071dff5: ret 4 */ FN_RET(0x0071dfcc); r_esp += 8; return;
L_0071dff8:; BB(0x0071dff8);
    /* 0071dff8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071dffb: jne 0x71e00a */ if (!fZ) goto L_0071e00a;
L_0071dffd:; BB(0x0071dffd);
    /* 0071dffd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071dffe: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0071e001: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e002: call 0x7147d4 */ r_esp -= 4; W32(r_esp, 0x71e007u); f_007147d4();
    /* 0071e007: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0071e00a:; BB(0x0071e00a);
    /* 0071e00a: ret 4 */ FN_RET(0x0071dfcc); r_esp += 8; return;
}

