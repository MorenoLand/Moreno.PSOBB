#include "protos.h"

void f_005ee030(void) /* sub_5EE030 */
{
    FN_ENTER(0x005ee030);
    /* 005ee030: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee031: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee032: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee033: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee035: mov edi, ecx */ r_edi = r_ecx;
    /* 005ee037: movsx esi, word ptr [edi + 0x292] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x292u));
    /* 005ee03e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee040: je 0x5ee08b */ if (fZ) goto L_005ee08b;
L_005ee042:; BB(0x005ee042);
    /* 005ee042: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005ee047: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005ee04d: mov ebx, dword ptr [edi + 0x298] */ r_ebx = R32((u32)(r_edi+0x298u));
    /* 005ee053: lea ebp, [edi + 0x254] */ r_ebp = (u32)(r_edi+0x254u);
    /* 005ee059: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ee05b: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x005ee05b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ee05b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ee05d: sub ebx, dword ptr [ecx + 0x60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x60u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005ee060: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee062: je 0x5ee091 */ if (fZ) goto L_005ee091;
L_005ee064:; BB(0x005ee064);
    /* 005ee064: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_005ee067:; BB(0x005ee067);
    /* 005ee067: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee068: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee06e: mov eax, ebp */ r_eax = r_ebp;
    /* 005ee070: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ee073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee074: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee076: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ee07bu); f_005e6df8();
    /* 005ee07b: add ebx, dword ptr [esp] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ee07e: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 005ee081: jne 0x5ee067 */ if (!fZ) goto L_005ee067;
L_005ee083:; BB(0x005ee083);
    /* 005ee083: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005ee089: jmp 0x5ee091 */ goto L_005ee091;
L_005ee08b:; BB(0x005ee08b);
    /* 005ee08b: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
L_005ee091:; BB(0x005ee091);
    /* 005ee091: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005ee093: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee099: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee09a: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee09c: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x5ee0a2u); call_ind(t); }
    /* 005ee0a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee0a4: mov word ptr [edi + 0x292], ax */ W16((u32)(r_edi+0x292u), (u16)r_eax);
    /* 005ee0ab: mov edx, 0x87 */ r_edx = 0x87u;
    /* 005ee0b0: mov word ptr [edi + 0x290], dx */ W16((u32)(r_edi+0x290u), (u16)r_edx);
    /* 005ee0b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee0b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee0b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee0ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ee0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ee0bc: ret  */ FN_RET(0x005ee030); r_esp += 4; return;
}

void f_005ee0c0(void) /* sub_5EE0C0 */
{
    FN_ENTER(0x005ee0c0);
    /* 005ee0c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0c1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ee0c5: call 0x5edd90 */ r_esp -= 4; W32(r_esp, 0x5ee0cau); f_005edd90();
    /* 005ee0ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee0cb: ret 4 */ FN_RET(0x005ee0c0); r_esp += 8; return;
}

void f_005ee0d0(void) /* sub_5EE0D0 */
{
    FN_ENTER(0x005ee0d0);
    /* 005ee0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0d1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 005ee0d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0d6: call 0x5ee0e8 */ r_esp -= 4; W32(r_esp, 0x5ee0dbu); f_005ee0e8();
    /* 005ee0db: mov dword ptr [ebp + 0x38], 0x40a00000 */ W32((u32)(r_ebp+0x38u), 0x40a00000u);
    /* 005ee0e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee0e3: ret 4 */ FN_RET(0x005ee0d0); r_esp += 8; return;
}

void f_005ee0e8(void) /* sub_5EE0E8 */
{
    FN_ENTER(0x005ee0e8);
    /* 005ee0e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0ea: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee0ed: mov edi, ecx */ r_edi = r_ecx;
    /* 005ee0ef: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 005ee0f3: mov eax, dword ptr [edi + 0x248] */ r_eax = R32((u32)(r_edi+0x248u));
    /* 005ee0f9: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 005ee0fc: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 005ee0ff: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ee102: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 005ee105: mov dword ptr [ebx + 0x58], 0xc000 */ W32((u32)(r_ebx+0x58u), 0xc000u);
    /* 005ee10c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ee10f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005ee111: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee114: call dword ptr [edx + 0xec] */ { u32 t = R32((u32)(r_edx+0xecu)); r_esp -= 4; W32(r_esp, 0x5ee11au); call_ind(t); }
    /* 005ee11a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005ee11d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005ee121: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005ee124: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ee128: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 005ee12b: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 005ee12e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ee132: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 005ee135: mov eax, dword ptr [edi + 0x250] */ r_eax = R32((u32)(r_edi+0x250u));
    /* 005ee13b: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005ee13e: mov ecx, dword ptr [edi + 0x24c] */ r_ecx = R32((u32)(r_edi+0x24cu));
    /* 005ee144: mov dword ptr [ebx + 0x70], ecx */ W32((u32)(r_ebx+0x70u), r_ecx);
    /* 005ee147: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee14a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee14b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ee14c: ret 4 */ FN_RET(0x005ee0e8); r_esp += 8; return;
}

void f_005ee150(void) /* sub_5EE150 */
{
    FN_ENTER(0x005ee150);
    /* 005ee150: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee153: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 005ee157: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005ee15b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005ee15f: call 0x5ee184 */ r_esp -= 4; W32(r_esp, 0x5ee164u); f_005ee184();
    /* 005ee164: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005ee168: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005ee16c: call 0x5ee204 */ r_esp -= 4; W32(r_esp, 0x5ee171u); f_005ee204();
    /* 005ee171: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee174: ret  */ FN_RET(0x005ee150); r_esp += 4; return;
}

void f_005ee184(void) /* sub_5EE184 */
{
    FN_ENTER(0x005ee184);
    /* 005ee184: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee185: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee186: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee189: mov ebp, edx */ r_ebp = r_edx;
    /* 005ee18b: mov edi, eax */ r_edi = r_eax;
    /* 005ee18d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ee18f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005ee192: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ee195: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ee198: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005ee19c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005ee1a0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005ee1a3: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5ee1a8u); f_0082df08();
    /* 005ee1a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ee1aa: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005ee1ad: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005ee1af: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005ee1b2: mov edi, dword ptr [ecx + 0xa4] */ r_edi = R32((u32)(r_ecx+0xa4u));
    /* 005ee1b8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005ee1bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ee1bd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ee1bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ee1c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ee1c3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ee1c5: fld dword ptr [edi + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0xcu)));
    /* 005ee1c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ee1cb: fchs  */ ST(0) = -ST(0);
    /* 005ee1cd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005ee1cf: fadd dword ptr [edi + edx*4 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4+0x1cu));
    /* 005ee1d3: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 005ee1d6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005ee1da: fchs  */ ST(0) = -ST(0);
    /* 005ee1dc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005ee1de: fadd dword ptr [edi + edx*4 + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4+0x20u));
    /* 005ee1e2: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 005ee1e5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005ee1e9: fchs  */ ST(0) = -ST(0);
    /* 005ee1eb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ee1ed: fadd dword ptr [edi + edx*4 + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4+0x24u));
    /* 005ee1f1: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 005ee1f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee1f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee1f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ee1f9: ret  */ FN_RET(0x005ee184); r_esp += 4; return;
}

void f_005ee204(void) /* sub_5EE204 */
{
    FN_ENTER(0x005ee204);
    /* 005ee204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee205: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee206: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee209: mov ebx, edx */ r_ebx = r_edx;
    /* 005ee20b: mov esi, eax */ r_esi = r_eax;
    /* 005ee20d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee20f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee211: push 0x1ef */ { u32 v = 0x1efu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee216: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee217: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5ee21cu); f_0050a984();
    /* 005ee21c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee21f: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005ee221: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 005ee224: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee226: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005ee229: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ee22b: fmul qword ptr [0x92d860] */ ST(0) = ST(0) * R_F64((u32)(0x92d860u));
    /* 005ee231: fdiv qword ptr [0x92d858] */ ST(0) = ST(0) / R_F64((u32)(0x92d858u));
    /* 005ee237: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005ee23b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005ee240: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ee245: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005ee249: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005ee24d: fistp dword ptr [esp + 4] */ W32((u32)(r_esp+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ee251: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005ee255: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005ee259: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ee25c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee25e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee260: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee261: push 0x1b8 */ { u32 v = 0x1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee266: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee267: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee268: call 0x50b1dc */ r_esp -= 4; W32(r_esp, 0x5ee26du); f_0050b1dc();
    /* 005ee26d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee272: je 0x5ee282 */ if (fZ) goto L_005ee282;
L_005ee274:; BB(0x005ee274);
    /* 005ee274: mov dword ptr [eax + 0x44], 0x3fc00000 */ W32((u32)(r_eax+0x44u), 0x3fc00000u);
    /* 005ee27b: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
L_005ee282:; BB(0x005ee282);
    /* 005ee282: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee285: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ee287: ret  */ FN_RET(0x005ee204); r_esp += 4; return;
}

void f_005ee288(void) /* sub_5EE288 */
{
    FN_ENTER(0x005ee288);
    /* 005ee288: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee28b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ee28f: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005ee291: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ee294: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005ee298: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005ee29c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ee29f: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005ee2a3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005ee2a7: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005ee2ab: call 0x5ee204 */ r_esp -= 4; W32(r_esp, 0x5ee2b0u); f_005ee204();
    /* 005ee2b0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee2b3: ret  */ FN_RET(0x005ee288); r_esp += 4; return;
}

void f_005ee2b4(void) /* sub_5EE2B4 */
{
    FN_ENTER(0x005ee2b4);
    /* 005ee2b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee2b5: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 005ee2b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee2ba: call 0x5ee0e8 */ r_esp -= 4; W32(r_esp, 0x5ee2bfu); f_005ee0e8();
    /* 005ee2bf: mov dword ptr [ebp + 0x50], 0x8000 */ W32((u32)(r_ebp+0x50u), 0x8000u);
    /* 005ee2c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee2c7: ret 4 */ FN_RET(0x005ee2b4); r_esp += 8; return;
}

void f_005ee2cc(void) /* sub_5EE2CC */
{
    FN_ENTER(0x005ee2cc);
    /* 005ee2cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee2cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee2ce: mov edi, ecx */ r_edi = r_ecx;
    /* 005ee2d0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005ee2d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee2d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee2d7: call 0x5ee0e8 */ r_esp -= 4; W32(r_esp, 0x5ee2dcu); f_005ee0e8();
    /* 005ee2dc: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee2de: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ee2e3u); f_005e90b0();
    /* 005ee2e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee2e5: je 0x5ee30a */ if (fZ) goto L_005ee30a;
L_005ee2e7:; BB(0x005ee2e7);
    /* 005ee2e7: push 0x3d8f5c29 */ { u32 v = 0x3d8f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee2ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee2ee: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5ee2f3u); f_005e75bc();
    /* 005ee2f3: mov dword ptr [ebx + 0x10], 0xa */ W32((u32)(r_ebx+0x10u), 0xau);
    /* 005ee2fa: mov eax, dword ptr [edi + 0x1ac] */ r_eax = R32((u32)(r_edi+0x1acu));
    /* 005ee300: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 005ee303: mov dword ptr [ebx + 0x4c], 0x3f800000 */ W32((u32)(r_ebx+0x4cu), 0x3f800000u);
L_005ee30a:; BB(0x005ee30a);
    /* 005ee30a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee30b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ee30c: ret 4 */ FN_RET(0x005ee2cc); r_esp += 8; return;
}

void f_005ee310(void) /* sub_5EE310 */
{
    FN_ENTER(0x005ee310);
    /* 005ee310: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee313: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005ee317: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 005ee31b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005ee31f: call 0x5ee184 */ r_esp -= 4; W32(r_esp, 0x5ee324u); f_005ee184();
    /* 005ee324: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005ee328: call 0x5ee338 */ r_esp -= 4; W32(r_esp, 0x5ee32du); f_005ee338();
    /* 005ee32d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee330: ret  */ FN_RET(0x005ee310); r_esp += 4; return;
}

void f_005ee338(void) /* sub_5EE338 */
{
    FN_ENTER(0x005ee338);
    /* 005ee338: push 0x1bf */ { u32 v = 0x1bfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee33d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee33e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ee343u); f_0050b510();
    /* 005ee343: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee346: ret  */ FN_RET(0x005ee338); r_esp += 4; return;
}

void f_005ee348(void) /* sub_5EE348 */
{
    FN_ENTER(0x005ee348);
    /* 005ee348: mov dword ptr [0xa8ddbc], 0x3f800000 */ W32((u32)(0xa8ddbcu), 0x3f800000u);
    /* 005ee352: mov dword ptr [0xa8ddc0], 0x41000000 */ W32((u32)(0xa8ddc0u), 0x41000000u);
    /* 005ee35c: mov dword ptr [0xa8ddc4], 0x3fc00000 */ W32((u32)(0xa8ddc4u), 0x3fc00000u);
    /* 005ee366: ret  */ FN_RET(0x005ee348); r_esp += 4; return;
}

void f_005ee368(void) /* sub_5EE368 */
{
    FN_ENTER(0x005ee368);
    /* 005ee368: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee369: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ee36b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee36d: call 0x5ee38c */ r_esp -= 4; W32(r_esp, 0x5ee372u); f_005ee38c();
    /* 005ee372: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ee376: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee378: jne 0x5ee37e */ if (!fZ) goto L_005ee37e;
L_005ee37a:; BB(0x005ee37a);
    /* 005ee37a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee37b: ret 4 */ FN_RET(0x005ee368); r_esp += 8; return;
L_005ee37e:; BB(0x005ee37e);
    /* 005ee37e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee37f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ee384u); f_005c2f74();
    /* 005ee384: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee385: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee386: ret 4 */ FN_RET(0x005ee368); r_esp += 8; return;
}

void f_005ee38c(void) /* sub_5EE38C */
{
    FN_ENTER(0x005ee38c);
    /* 005ee38c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee38d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee38f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee391: push 0x8dc5f4 */ { u32 v = 0x8dc5f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee396: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee39c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee39d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee3a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee3a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee3aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ee3ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ee3b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ee3b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ee3b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee3b9: mov dword ptr [ecx], 0xb12e40 */ W32((u32)(r_ecx), 0xb12e40u);
    /* 005ee3bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ee3c6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ee3cbu); f_005e61c8();
    /* 005ee3cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee3ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee3d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee3d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee3d8: ret  */ FN_RET(0x005ee38c); r_esp += 4; return;
}

void f_005ee3dc(void) /* sub_5EE3DC */
{
    FN_ENTER(0x005ee3dc);
    /* 005ee3dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3de: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ee3e0: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3e2: mov ebp, dword ptr [ebx + 0xfc] */ r_ebp = R32((u32)(r_ebx+0xfcu));
    /* 005ee3e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee3ea: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5ee3efu); f_005e6334();
    /* 005ee3ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee3f3: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5ee3f8u); f_005e6254();
    /* 005ee3f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee3fc: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5ee401u); f_005e6254();
    /* 005ee401: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee403: mov eax, dword ptr [ebx + 0x1ac] */ r_eax = R32((u32)(r_ebx+0x1acu));
    /* 005ee409: mov dword ptr [ebx + 0xfc], eax */ W32((u32)(r_ebx+0xfcu), r_eax);
    /* 005ee40f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee411: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5ee416u); f_005e6334();
    /* 005ee416: mov dword ptr [ebx + 0xfc], ebp */ W32((u32)(r_ebx+0xfcu), r_ebp);
    /* 005ee41c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee41d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee41e: ret  */ FN_RET(0x005ee3dc); r_esp += 4; return;
}

void f_005ee420(void) /* sub_5EE420 */
{
    FN_ENTER(0x005ee420);
    /* 005ee420: fld dword ptr [0x92d8c8] */ FPUSH(R_F32((u32)(0x92d8c8u)));
    /* 005ee426: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 005ee42c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ee42e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ee430: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ee431: jae 0x5ee45a */ if (!fC) goto L_005ee45a;
L_005ee433:; BB(0x005ee433);
    /* 005ee433: fld dword ptr [0x92d8c4] */ FPUSH(R_F32((u32)(0x92d8c4u)));
    /* 005ee439: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005ee43b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ee43d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ee43f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ee440: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ee442: jb 0x5ee446 */ if (fC) goto L_005ee446;
L_005ee444:; BB(0x005ee444);
    /* 005ee444: fst st(1) */ ST(1) = ST(0);
L_005ee446:; BB(0x005ee446);
    /* 005ee446: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ee448: fst dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0));
    /* 005ee44e: fst dword ptr [ecx + 0x244] */ W_F32((u32)(r_ecx+0x244u), ST(0));
    /* 005ee454: fst dword ptr [ecx + 0x240] */ W_F32((u32)(r_ecx+0x240u), ST(0));
L_005ee45a:; BB(0x005ee45a);
    /* 005ee45a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ee45c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ee45e: ret  */ FN_RET(0x005ee420); r_esp += 4; return;
}

void f_005ee460(void) /* sub_5EE460 */
{
    FN_ENTER(0x005ee460);
    /* 005ee460: fld dword ptr [0x92d8c0] */ FPUSH(R_F32((u32)(0x92d8c0u)));
    /* 005ee466: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 005ee46c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ee46e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ee470: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ee471: jbe 0x5ee49a */ if ((fC||fZ)) goto L_005ee49a;
L_005ee473:; BB(0x005ee473);
    /* 005ee473: fld dword ptr [0x92d8c4] */ FPUSH(R_F32((u32)(0x92d8c4u)));
    /* 005ee479: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005ee47b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ee47d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ee47f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ee480: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ee482: ja 0x5ee486 */ if ((!fC&&!fZ)) goto L_005ee486;
L_005ee484:; BB(0x005ee484);
    /* 005ee484: fst st(1) */ ST(1) = ST(0);
L_005ee486:; BB(0x005ee486);
    /* 005ee486: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ee488: fst dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0));
    /* 005ee48e: fst dword ptr [ecx + 0x244] */ W_F32((u32)(r_ecx+0x244u), ST(0));
    /* 005ee494: fst dword ptr [ecx + 0x240] */ W_F32((u32)(r_ecx+0x240u), ST(0));
L_005ee49a:; BB(0x005ee49a);
    /* 005ee49a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ee49c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ee49e: ret  */ FN_RET(0x005ee460); r_esp += 4; return;
}

void f_005ee4a0(void) /* sub_5EE4A0 */
{
    FN_ENTER(0x005ee4a0);
    /* 005ee4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee4a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee4a5: push 0x8dc61c */ { u32 v = 0x8dc61cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee4aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee4b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee4b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee4b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee4bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee4be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ee4c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ee4c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ee4c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee4cc: je 0x5ee523 */ if (fZ) goto L_005ee523;
L_005ee4ce:; BB(0x005ee4ce);
    /* 005ee4ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ee4d5: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee4da: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ee4dfu); f_005caba4();
    /* 005ee4df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee4e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ee4e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee4e5: je 0x5ee51f */ if (fZ) goto L_005ee51f;
L_005ee4e7:; BB(0x005ee4e7);
    /* 005ee4e7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ee4ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ee4f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee4f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee4fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee4fc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee502: call 0x5ee534 */ r_esp -= 4; W32(r_esp, 0x5ee507u); f_005ee534();
    /* 005ee507: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee50a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ee511:; BB(0x005ee511);
    /* 005ee511: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee514: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee51b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee51d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee51e: ret  */ FN_RET(0x005ee4a0); r_esp += 4; return;
L_005ee51f:; BB(0x005ee51f);
    /* 005ee51f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee521: jmp 0x5ee511 */ goto L_005ee511;
L_005ee523:; BB(0x005ee523);
    /* 005ee523: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee525: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee528: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee52f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee532: ret  */ FN_RET(0x005ee4a0); r_esp += 4; return;
}

void f_005ee534(void) /* sub_5EE534 */
{
    FN_ENTER(0x005ee534);
    /* 005ee534: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee535: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ee537: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee53b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee53f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee541: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ee546u); f_005e959c();
    /* 005ee546: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ee54c: mov dword ptr [ebx], 0xb12e40 */ W32((u32)(r_ebx), 0xb12e40u);
    /* 005ee552: or edx, 0x201 */ {  u32 a = r_edx; u32 b = 0x201u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee558: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ee55e: mov dword ptr [ebx + 0x248], 0 */ W32((u32)(r_ebx+0x248u), 0x0u);
    /* 005ee568: mov eax, ebx */ r_eax = r_ebx;
    /* 005ee56a: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 005ee574: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005ee57e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee57f: ret 8 */ FN_RET(0x005ee534); r_esp += 12; return;
}

void f_005ee584(void) /* sub_5EE584 */
{
    FN_ENTER(0x005ee584);
    /* 005ee584: mov dword ptr [0xa8ddc8], 0x3f800000 */ W32((u32)(0xa8ddc8u), 0x3f800000u);
    /* 005ee58e: mov dword ptr [0xa8ddcc], 0x41000000 */ W32((u32)(0xa8ddccu), 0x41000000u);
    /* 005ee598: mov dword ptr [0xa8ddd0], 0x3fc00000 */ W32((u32)(0xa8ddd0u), 0x3fc00000u);
    /* 005ee5a2: ret  */ FN_RET(0x005ee584); r_esp += 4; return;
}

void f_005ee5a4(void) /* sub_5EE5A4 */
{
    FN_ENTER(0x005ee5a4);
    /* 005ee5a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee5a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee5a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee5a9: push 0x8dc638 */ { u32 v = 0x8dc638u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee5ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee5b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee5b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee5bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee5bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee5c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ee5c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ee5c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ee5cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ee5ce: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ee5d1: mov eax, ecx */ r_eax = r_ecx;
    /* 005ee5d3: mov dword ptr [eax], 0xb12fa0 */ W32((u32)(r_eax), 0xb12fa0u);
    /* 005ee5d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ee5e0: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ee5e5u); f_005e61c8();
    /* 005ee5e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee5e8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee5ea: jne 0x5ee5fc */ if (!fZ) goto L_005ee5fc;
L_005ee5ec:; BB(0x005ee5ec);
    /* 005ee5ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee5ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee5f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee5f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee5f9: ret 4 */ FN_RET(0x005ee5a4); r_esp += 8; return;
L_005ee5fc:; BB(0x005ee5fc);
    /* 005ee5fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ee5ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee600: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ee605u); f_005c2f74();
    /* 005ee605: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee606: jmp 0x5ee5ec */ goto L_005ee5ec;
}

void f_005ee608(void) /* sub_5EE608 */
{
    FN_ENTER(0x005ee608);
    /* 005ee608: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 005ee60e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee610: je 0x5ee629 */ if (fZ) goto L_005ee629;
L_005ee612:; BB(0x005ee612);
    /* 005ee612: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee614: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee616: movsx eax, word ptr [ecx + 0x240] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x240u));
    /* 005ee61d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee61e: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee621: call 0x5c5834 */ r_esp -= 4; W32(r_esp, 0x5ee626u); f_005c5834();
    /* 005ee626: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ee629:; BB(0x005ee629);
    /* 005ee629: ret  */ FN_RET(0x005ee608); r_esp += 4; return;
}

void f_005ee62c(void) /* sub_5EE62C */
{
    FN_ENTER(0x005ee62c);
    /* 005ee62c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee62d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee62f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee631: push 0x8dc660 */ { u32 v = 0x8dc660u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee636: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee63c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee63d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee644: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee647: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee64a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ee64d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ee650: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ee653: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee658: je 0x5ee6af */ if (fZ) goto L_005ee6af;
L_005ee65a:; BB(0x005ee65a);
    /* 005ee65a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ee661: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee666: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ee66bu); f_005caba4();
    /* 005ee66b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee66c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ee66f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee671: je 0x5ee6ab */ if (fZ) goto L_005ee6ab;
L_005ee673:; BB(0x005ee673);
    /* 005ee673: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ee67a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ee681: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee684: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee688: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee68e: call 0x5ee6c0 */ r_esp -= 4; W32(r_esp, 0x5ee693u); f_005ee6c0();
    /* 005ee693: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee696: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ee69d:; BB(0x005ee69d);
    /* 005ee69d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee6a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee6a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee6a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee6aa: ret  */ FN_RET(0x005ee62c); r_esp += 4; return;
L_005ee6ab:; BB(0x005ee6ab);
    /* 005ee6ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee6ad: jmp 0x5ee69d */ goto L_005ee69d;
L_005ee6af:; BB(0x005ee6af);
    /* 005ee6af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee6b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee6b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee6bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee6bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee6be: ret  */ FN_RET(0x005ee62c); r_esp += 4; return;
}

void f_005ee6c0(void) /* sub_5EE6C0 */
{
    FN_ENTER(0x005ee6c0);
    /* 005ee6c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee6c1: mov edi, ecx */ r_edi = r_ecx;
    /* 005ee6c3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee6c7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee6cb: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee6cd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ee6d2u); f_005e959c();
    /* 005ee6d2: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005ee6d8: mov dword ptr [edi], 0xb12fa0 */ W32((u32)(r_edi), 0xb12fa0u);
    /* 005ee6de: mov edx, 2 */ r_edx = 0x2u;
    /* 005ee6e3: mov word ptr [edi + 0x240], dx */ W16((u32)(r_edi+0x240u), (u16)r_edx);
    /* 005ee6ea: mov byte ptr [edi + 0x20e], 1 */ W8((u32)(r_edi+0x20eu), 0x1u);
    /* 005ee6f1: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee6f6: mov byte ptr [edi + 0x20f], dl */ W8((u32)(r_edi+0x20fu), (u8)r_edx);
    /* 005ee6fc: mov dword ptr [edi + 0x238], 0x5cc0e0 */ W32((u32)(r_edi+0x238u), 0x5cc0e0u);
    /* 005ee706: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005ee70c: mov eax, edi */ r_eax = r_edi;
    /* 005ee70e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ee70f: ret 8 */ FN_RET(0x005ee6c0); r_esp += 12; return;
}

void f_005ee714(void) /* sub_5EE714 */
{
    FN_ENTER(0x005ee714);
    /* 005ee714: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee715: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ee717: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee719: call 0x5ee738 */ r_esp -= 4; W32(r_esp, 0x5ee71eu); f_005ee738();
    /* 005ee71e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ee722: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee724: jne 0x5ee72a */ if (!fZ) goto L_005ee72a;
L_005ee726:; BB(0x005ee726);
    /* 005ee726: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee727: ret 4 */ FN_RET(0x005ee714); r_esp += 8; return;
L_005ee72a:; BB(0x005ee72a);
    /* 005ee72a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee72b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ee730u); f_005c2f74();
    /* 005ee730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee732: ret 4 */ FN_RET(0x005ee714); r_esp += 8; return;
}

void f_005ee738(void) /* sub_5EE738 */
{
    FN_ENTER(0x005ee738);
    /* 005ee738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee739: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee73b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee73d: push 0x8dc67c */ { u32 v = 0x8dc67cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee742: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee749: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee750: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee753: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee756: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ee759: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ee75c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ee75f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ee762: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee765: mov dword ptr [ecx], 0xb13100 */ W32((u32)(r_ecx), 0xb13100u);
    /* 005ee76b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ee772: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ee777u); f_005e61c8();
    /* 005ee777: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee77a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee781: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee783: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee784: ret  */ FN_RET(0x005ee738); r_esp += 4; return;
}

void f_005ee788(void) /* sub_5EE788 */
{
    FN_ENTER(0x005ee788);
    /* 005ee788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee789: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee78b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee78d: push 0x8dc6a4 */ { u32 v = 0x8dc6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee792: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee799: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee7a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee7a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee7a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ee7a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ee7ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ee7af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee7b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee7b4: je 0x5ee80b */ if (fZ) goto L_005ee80b;
L_005ee7b6:; BB(0x005ee7b6);
    /* 005ee7b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ee7bd: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee7c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ee7c7u); f_005caba4();
    /* 005ee7c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee7c8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ee7cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee7cd: je 0x5ee807 */ if (fZ) goto L_005ee807;
L_005ee7cf:; BB(0x005ee7cf);
    /* 005ee7cf: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ee7d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ee7dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee7e0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee7e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee7e4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee7ea: call 0x5ee81c */ r_esp -= 4; W32(r_esp, 0x5ee7efu); f_005ee81c();
    /* 005ee7ef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee7f2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ee7f9:; BB(0x005ee7f9);
    /* 005ee7f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee7fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee803: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee805: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee806: ret  */ FN_RET(0x005ee788); r_esp += 4; return;
L_005ee807:; BB(0x005ee807);
    /* 005ee807: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee809: jmp 0x5ee7f9 */ goto L_005ee7f9;
L_005ee80b:; BB(0x005ee80b);
    /* 005ee80b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee80d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee810: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee817: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee819: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee81a: ret  */ FN_RET(0x005ee788); r_esp += 4; return;
}

void f_005ee81c(void) /* sub_5EE81C */
{
    FN_ENTER(0x005ee81c);
    /* 005ee81c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee81d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ee81f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee823: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee827: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ee829: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ee82eu); f_005e959c();
    /* 005ee82e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ee834: mov dword ptr [ebx], 0xb13100 */ W32((u32)(r_ebx), 0xb13100u);
    /* 005ee83a: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee840: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ee846: mov eax, ebx */ r_eax = r_ebx;
    /* 005ee848: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee849: ret 8 */ FN_RET(0x005ee81c); r_esp += 12; return;
}

void f_005ee84c(void) /* sub_5EE84C */
{
    FN_ENTER(0x005ee84c);
    /* 005ee84c: mov dword ptr [0xa8ddd4], 0x3f800000 */ W32((u32)(0xa8ddd4u), 0x3f800000u);
    /* 005ee856: mov dword ptr [0xa8ddd8], 0x41000000 */ W32((u32)(0xa8ddd8u), 0x41000000u);
    /* 005ee860: mov dword ptr [0xa8dddc], 0x3fc00000 */ W32((u32)(0xa8dddcu), 0x3fc00000u);
    /* 005ee86a: ret  */ FN_RET(0x005ee84c); r_esp += 4; return;
}

void f_005ee86c(void) /* sub_5EE86C */
{
    FN_ENTER(0x005ee86c);
    /* 005ee86c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee86d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee86f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee871: push 0x8dc6c0 */ { u32 v = 0x8dc6c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee876: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee87c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee87d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee884: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee887: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee88a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ee88d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ee890: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ee893: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ee896: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ee899: mov eax, ecx */ r_eax = r_ecx;
    /* 005ee89b: mov dword ptr [eax], 0xb13260 */ W32((u32)(r_eax), 0xb13260u);
    /* 005ee8a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ee8a8: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ee8adu); f_005e61c8();
    /* 005ee8ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee8b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee8b2: jne 0x5ee8c4 */ if (!fZ) goto L_005ee8c4;
L_005ee8b4:; BB(0x005ee8b4);
    /* 005ee8b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee8b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee8be: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee8c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee8c1: ret 4 */ FN_RET(0x005ee86c); r_esp += 8; return;
L_005ee8c4:; BB(0x005ee8c4);
    /* 005ee8c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ee8c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8c8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ee8cdu); f_005c2f74();
    /* 005ee8cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee8ce: jmp 0x5ee8b4 */ goto L_005ee8b4;
}

void f_005ee8d0(void) /* sub_5EE8D0 */
{
    FN_ENTER(0x005ee8d0);
    /* 005ee8d0: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 005ee8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee8d8: je 0x5ee8f1 */ if (fZ) goto L_005ee8f1;
L_005ee8da:; BB(0x005ee8da);
    /* 005ee8da: movsx ecx, word ptr [ecx + 0x240] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x240u));
    /* 005ee8e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ee8e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8e6: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee8e9: call 0x5c5834 */ r_esp -= 4; W32(r_esp, 0x5ee8eeu); f_005c5834();
    /* 005ee8ee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ee8f1:; BB(0x005ee8f1);
    /* 005ee8f1: ret  */ FN_RET(0x005ee8d0); r_esp += 4; return;
}

void f_005ee8f4(void) /* sub_5EE8F4 */
{
    FN_ENTER(0x005ee8f4);
    /* 005ee8f4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee8f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ee8fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8fd: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ee902u); f_005e83c8();
    /* 005ee902: fld dword ptr [0x92d8d8] */ FPUSH(R_F32((u32)(0x92d8d8u)));
    /* 005ee908: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005ee90c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005ee910: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ee913: push 0x1d2 */ { u32 v = 0x1d2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee919: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ee91eu); f_0050b510();
    /* 005ee91e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ee921: ret  */ FN_RET(0x005ee8f4); r_esp += 4; return;
}

void f_005ee924(void) /* sub_5EE924 */
{
    FN_ENTER(0x005ee924);
    /* 005ee924: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee925: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee927: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee929: push 0x8dc6e8 */ { u32 v = 0x8dc6e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee92e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ee934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee935: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ee93c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee93f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ee942: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ee945: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ee948: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ee94b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee94e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee950: je 0x5ee9a7 */ if (fZ) goto L_005ee9a7;
L_005ee952:; BB(0x005ee952);
    /* 005ee952: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ee959: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee95e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ee963u); f_005caba4();
    /* 005ee963: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee964: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ee967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee969: je 0x5ee9a3 */ if (fZ) goto L_005ee9a3;
L_005ee96b:; BB(0x005ee96b);
    /* 005ee96b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ee972: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ee979: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee97c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee97f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee980: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee986: call 0x5ee9b8 */ r_esp -= 4; W32(r_esp, 0x5ee98bu); f_005ee9b8();
    /* 005ee98b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee98e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ee995:; BB(0x005ee995);
    /* 005ee995: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee998: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee99f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee9a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee9a2: ret  */ FN_RET(0x005ee924); r_esp += 4; return;
L_005ee9a3:; BB(0x005ee9a3);
    /* 005ee9a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee9a5: jmp 0x5ee995 */ goto L_005ee995;
L_005ee9a7:; BB(0x005ee9a7);
    /* 005ee9a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee9a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee9ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee9b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee9b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee9b6: ret  */ FN_RET(0x005ee924); r_esp += 4; return;
}

void f_005ee9b8(void) /* sub_5EE9B8 */
{
    FN_ENTER(0x005ee9b8);
    /* 005ee9b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ee9b9: mov edi, ecx */ r_edi = r_ecx;
    /* 005ee9bb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee9bf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ee9c3: mov ecx, edi */ r_ecx = r_edi;
    /* 005ee9c5: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ee9cau); f_005e959c();
    /* 005ee9ca: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005ee9d0: mov dword ptr [edi], 0xb13260 */ W32((u32)(r_edi), 0xb13260u);
    /* 005ee9d6: mov edx, 0x23 */ r_edx = 0x23u;
    /* 005ee9db: mov word ptr [edi + 0x240], dx */ W16((u32)(r_edi+0x240u), (u16)r_edx);
    /* 005ee9e2: mov byte ptr [edi + 0x20e], 0 */ W8((u32)(r_edi+0x20eu), 0x0u);
    /* 005ee9e9: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ee9ee: mov byte ptr [edi + 0x20f], dl */ W8((u32)(r_edi+0x20fu), (u8)r_edx);
    /* 005ee9f4: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005ee9fa: mov eax, edi */ r_eax = r_edi;
    /* 005ee9fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ee9fd: ret 8 */ FN_RET(0x005ee9b8); r_esp += 12; return;
}

void f_005eea00(void) /* sub_5EEA00 */
{
    FN_ENTER(0x005eea00);
    /* 005eea00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eea01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eea03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eea05: call 0x5eea24 */ r_esp -= 4; W32(r_esp, 0x5eea0au); f_005eea24();
    /* 005eea0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eea0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eea10: jne 0x5eea16 */ if (!fZ) goto L_005eea16;
L_005eea12:; BB(0x005eea12);
    /* 005eea12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eea13: ret 4 */ FN_RET(0x005eea00); r_esp += 8; return;
L_005eea16:; BB(0x005eea16);
    /* 005eea16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eea17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eea1cu); f_005c2f74();
    /* 005eea1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eea1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eea1e: ret 4 */ FN_RET(0x005eea00); r_esp += 8; return;
}

void f_005eea24(void) /* sub_5EEA24 */
{
    FN_ENTER(0x005eea24);
    /* 005eea24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eea25: mov ebp, esp */ r_ebp = r_esp;
    /* 005eea27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eea29: push 0x8dc704 */ { u32 v = 0x8dc704u; r_esp -= 4; W32(r_esp, v); }
    /* 005eea2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eea34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eea35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eea3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eea3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eea42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eea45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eea48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eea4b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eea4e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eea51: mov dword ptr [ecx], 0xb133c0 */ W32((u32)(r_ecx), 0xb133c0u);
    /* 005eea57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eea5e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eea63u); f_005e61c8();
    /* 005eea63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eea66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eea6d: mov esp, ebp */ r_esp = r_ebp;
    /* 005eea6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eea70: ret  */ FN_RET(0x005eea24); r_esp += 4; return;
}

void f_005eea74(void) /* sub_5EEA74 */
{
    FN_ENTER(0x005eea74);
    /* 005eea74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eea75: mov ebp, esp */ r_ebp = r_esp;
    /* 005eea77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eea79: push 0x8dc72c */ { u32 v = 0x8dc72cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eea7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eea84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eea85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eea8c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eea8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eea92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eea95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eea98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eea9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eea9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeaa0: je 0x5eeaf7 */ if (fZ) goto L_005eeaf7;
L_005eeaa2:; BB(0x005eeaa2);
    /* 005eeaa2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eeaa9: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005eeaae: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eeab3u); f_005caba4();
    /* 005eeab3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eeab4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eeab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeab9: je 0x5eeaf3 */ if (fZ) goto L_005eeaf3;
L_005eeabb:; BB(0x005eeabb);
    /* 005eeabb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eeac2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eeac9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eeacc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eeacf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eead0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eead6: call 0x5eeb08 */ r_esp -= 4; W32(r_esp, 0x5eeadbu); f_005eeb08();
    /* 005eeadb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eeade: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eeae5:; BB(0x005eeae5);
    /* 005eeae5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eeae8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eeaef: mov esp, ebp */ r_esp = r_ebp;
    /* 005eeaf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eeaf2: ret  */ FN_RET(0x005eea74); r_esp += 4; return;
L_005eeaf3:; BB(0x005eeaf3);
    /* 005eeaf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eeaf5: jmp 0x5eeae5 */ goto L_005eeae5;
L_005eeaf7:; BB(0x005eeaf7);
    /* 005eeaf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eeaf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eeafc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eeb03: mov esp, ebp */ r_esp = r_ebp;
    /* 005eeb05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eeb06: ret  */ FN_RET(0x005eea74); r_esp += 4; return;
}

void f_005eeb08(void) /* sub_5EEB08 */
{
    FN_ENTER(0x005eeb08);
    /* 005eeb08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb09: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005eeb0b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eeb0f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eeb13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005eeb15: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eeb1au); f_005e959c();
    /* 005eeb1a: mov dword ptr [ebp], 0xb133c0 */ W32((u32)(r_ebp), 0xb133c0u);
    /* 005eeb21: mov eax, ebp */ r_eax = r_ebp;
    /* 005eeb23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eeb24: ret 8 */ FN_RET(0x005eeb08); r_esp += 12; return;
}

void f_005eeb28(void) /* sub_5EEB28 */
{
    FN_ENTER(0x005eeb28);
    /* 005eeb28: mov dword ptr [0xa8dde0], 0x3f800000 */ W32((u32)(0xa8dde0u), 0x3f800000u);
    /* 005eeb32: mov dword ptr [0xa8dde4], 0x41000000 */ W32((u32)(0xa8dde4u), 0x41000000u);
    /* 005eeb3c: mov dword ptr [0xa8dde8], 0x3fc00000 */ W32((u32)(0xa8dde8u), 0x3fc00000u);
    /* 005eeb46: ret  */ FN_RET(0x005eeb28); r_esp += 4; return;
}

void f_005eeb48(void) /* sub_5EEB48 */
{
    FN_ENTER(0x005eeb48);
    /* 005eeb48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eeb4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eeb4d: call 0x5eeb6c */ r_esp -= 4; W32(r_esp, 0x5eeb52u); f_005eeb6c();
    /* 005eeb52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eeb56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eeb58: jne 0x5eeb5e */ if (!fZ) goto L_005eeb5e;
L_005eeb5a:; BB(0x005eeb5a);
    /* 005eeb5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eeb5b: ret 4 */ FN_RET(0x005eeb48); r_esp += 8; return;
L_005eeb5e:; BB(0x005eeb5e);
    /* 005eeb5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eeb64u); f_005c2f74();
    /* 005eeb64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eeb65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eeb66: ret 4 */ FN_RET(0x005eeb48); r_esp += 8; return;
}

void f_005eeb6c(void) /* sub_5EEB6C */
{
    FN_ENTER(0x005eeb6c);
    /* 005eeb6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb6d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eeb6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb71: push 0x8dc748 */ { u32 v = 0x8dc748u; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eeb7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eeb84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eeb87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eeb8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eeb8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eeb90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eeb93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eeb96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eeb99: mov dword ptr [ecx], 0xb13520 */ W32((u32)(r_ecx), 0xb13520u);
    /* 005eeb9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eeba6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eebabu); f_005e61c8();
    /* 005eebab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eebae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eebb5: mov esp, ebp */ r_esp = r_ebp;
    /* 005eebb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eebb8: ret  */ FN_RET(0x005eeb6c); r_esp += 4; return;
}

void f_005eebbc(void) /* sub_5EEBBC */
{
    FN_ENTER(0x005eebbc);
    /* 005eebbc: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005eebc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eebc4: je 0x5eebf4 */ if (fZ) goto L_005eebf4;
L_005eebc6:; BB(0x005eebc6);
    /* 005eebc6: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005eebcc: add eax, 0x38e */ {  u32 a = r_eax; u32 b = 0x38eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eebd1: cmp eax, 0x1555 */ {  u32 a = r_eax; u32 b = 0x1555u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005eebd6: jge 0x5eebdf */ if ((fS==fO)) goto L_005eebdf;
L_005eebd8:; BB(0x005eebd8);
    /* 005eebd8: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005eebde: ret  */ FN_RET(0x005eebbc); r_esp += 4; return;
L_005eebdf:; BB(0x005eebdf);
    /* 005eebdf: mov dword ptr [ecx + 0x240], 0x1555 */ W32((u32)(r_ecx+0x240u), 0x1555u);
    /* 005eebe9: mov dword ptr [ecx + 0x244], 0 */ W32((u32)(r_ecx+0x244u), 0x0u);
    /* 005eebf3: ret  */ FN_RET(0x005eebbc); r_esp += 4; return;
L_005eebf4:; BB(0x005eebf4);
    /* 005eebf4: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005eebfa: add eax, 0xfffffc72 */ {  u32 a = r_eax; u32 b = 0xfffffc72u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eebff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eec01: jle 0x5eec0a */ if ((fZ||fS!=fO)) goto L_005eec0a;
L_005eec03:; BB(0x005eec03);
    /* 005eec03: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005eec09: ret  */ FN_RET(0x005eebbc); r_esp += 4; return;
L_005eec0a:; BB(0x005eec0a);
    /* 005eec0a: mov dword ptr [ecx + 0x240], 0x1555 */ W32((u32)(r_ecx+0x240u), 0x1555u);
    /* 005eec14: mov dword ptr [ecx + 0x244], 1 */ W32((u32)(r_ecx+0x244u), 0x1u);
    /* 005eec1e: ret  */ FN_RET(0x005eebbc); r_esp += 4; return;
}

void f_005eec20(void) /* sub_5EEC20 */
{
    FN_ENTER(0x005eec20);
    /* 005eec20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eec21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eec23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eec25: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5eec2au); f_005e7f6c();
    /* 005eec2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eec2c: jne 0x5eec3f */ if (!fZ) goto L_005eec3f;
L_005eec2e:; BB(0x005eec2e);
    /* 005eec2e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005eec30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eec31: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eec37: call 0x5cc554 */ r_esp -= 4; W32(r_esp, 0x5eec3cu); f_005cc554();
    /* 005eec3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005eec3f:; BB(0x005eec3f);
    /* 005eec3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eec40: ret  */ FN_RET(0x005eec20); r_esp += 4; return;
}

void f_005eec44(void) /* sub_5EEC44 */
{
    FN_ENTER(0x005eec44);
    /* 005eec44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005eec45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eec46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eec47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eec48: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eec4b: mov edi, ecx */ r_edi = r_ecx;
    /* 005eec4d: mov edx, dword ptr [edi + 0xfc] */ r_edx = R32((u32)(r_edi+0xfcu));
    /* 005eec53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eec55: je 0x5eed34 */ if (fZ) goto L_005eed34;
L_005eec5b:; BB(0x005eec5b);
    /* 005eec5b: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005eec61: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005eec63: jne 0x5eed34 */ if (!fZ) goto L_005eed34;
L_005eec69:; BB(0x005eec69);
    /* 005eec69: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005eec6b: mov ebp, dword ptr [edx + 0x2c] */ r_ebp = R32((u32)(r_edx+0x2cu));
    /* 005eec6e: mov ebx, dword ptr [ebp + 0x2c] */ r_ebx = R32((u32)(r_ebp+0x2cu));
    /* 005eec71: mov ecx, edi */ r_ecx = r_edi;
    /* 005eec73: or dword ptr [ebp], 8 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005eec77: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 005eec7a: or dword ptr [ebx], 8 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005eec7d: or dword ptr [esi], 8 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005eec80: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5eec85u); f_005e6334();
    /* 005eec85: and dword ptr [ebp], 0xfffffff7 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005eec89: and dword ptr [ebx], 0xfffffff7 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005eec8c: and dword ptr [esi], 0xfffffff7 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005eec8f: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5eec94u); f_005cb0c8();
    /* 005eec94: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005eec99: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005eec9c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005eeca1: mov ecx, edi */ r_ecx = r_edi;
    /* 005eeca3: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5eeca8u); f_005c3538();
    /* 005eeca8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005eecab: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5eecb0u); f_005cb158();
    /* 005eecb0: or dword ptr [ebp], 1 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005eecb4: mov ecx, edi */ r_ecx = r_edi;
    /* 005eecb6: and dword ptr [ebx], 0xfffffffd */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005eecb9: mov eax, dword ptr [edi + 0x240] */ r_eax = R32((u32)(r_edi+0x240u));
    /* 005eecbf: add dword ptr [ebx + 0x18], eax */ { u32 ad = (u32)(r_ebx+0x18u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005eecc2: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 005eecc5: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005eecc9: and dword ptr [esi], 0xfffffffd */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005eeccc: sub edx, dword ptr [edi + 0x240] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x240u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005eecd2: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 005eecd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eecd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eecd8: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5eecddu); f_005e83c8();
    /* 005eecdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eecdf: je 0x5eed0b */ if (fZ) goto L_005eed0b;
L_005eece1:; BB(0x005eece1);
    /* 005eece1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5eece6u); f_0082d7b0();
    /* 005eece6: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005eecea: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5eecefu); f_0082d838();
    /* 005eecef: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005eecf5: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005eecf8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eecfa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5eecffu); f_0082d8bc();
    /* 005eecff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005eed01: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5eed06u); f_00831758();
    /* 005eed06: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5eed0bu); f_0082da80();
L_005eed0b:; BB(0x005eed0b);
    /* 005eed0b: and dword ptr [ebp], 0xfffffffe */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005eed0f: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 005eed12: or dword ptr [ebx], 2 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005eed15: sub eax, dword ptr [edi + 0x240] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x240u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eed1b: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 005eed1e: or dword ptr [esi], 2 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005eed21: mov edx, dword ptr [edi + 0x240] */ r_edx = R32((u32)(r_edi+0x240u));
    /* 005eed27: add dword ptr [esi + 0x18], edx */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005eed2a: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5eed2fu); f_005cb228();
    /* 005eed2f: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5eed34u); f_005cb114();
L_005eed34:; BB(0x005eed34);
    /* 005eed34: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eed37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eed38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eed39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eed3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005eed3b: ret  */ FN_RET(0x005eec44); r_esp += 4; return;
}

void f_005eed3c(void) /* sub_5EED3C */
{
    FN_ENTER(0x005eed3c);
    /* 005eed3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eed3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eed3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eed41: push 0x8dc770 */ { u32 v = 0x8dc770u; r_esp -= 4; W32(r_esp, v); }
    /* 005eed46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eed4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eed4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eed54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eed57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eed5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eed5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eed60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eed63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eed66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eed68: je 0x5eedbf */ if (fZ) goto L_005eedbf;
L_005eed6a:; BB(0x005eed6a);
    /* 005eed6a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eed71: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005eed76: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eed7bu); f_005caba4();
    /* 005eed7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eed7c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eed7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eed81: je 0x5eedbb */ if (fZ) goto L_005eedbb;
L_005eed83:; BB(0x005eed83);
    /* 005eed83: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eed8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eed91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eed94: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eed97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eed98: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eed9e: call 0x5eedd0 */ r_esp -= 4; W32(r_esp, 0x5eeda3u); f_005eedd0();
    /* 005eeda3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eeda6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eedad:; BB(0x005eedad);
    /* 005eedad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eedb0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eedb7: mov esp, ebp */ r_esp = r_ebp;
    /* 005eedb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eedba: ret  */ FN_RET(0x005eed3c); r_esp += 4; return;
L_005eedbb:; BB(0x005eedbb);
    /* 005eedbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eedbd: jmp 0x5eedad */ goto L_005eedad;
L_005eedbf:; BB(0x005eedbf);
    /* 005eedbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eedc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eedc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eedcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005eedcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eedce: ret  */ FN_RET(0x005eed3c); r_esp += 4; return;
}

void f_005eedd0(void) /* sub_5EEDD0 */
{
    FN_ENTER(0x005eedd0);
    /* 005eedd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eedd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eedd3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eedd7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eeddb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eeddd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eede2u); f_005e959c();
    /* 005eede2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005eede8: mov dword ptr [ebx], 0xb13520 */ W32((u32)(r_ebx), 0xb13520u);
    /* 005eedee: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eedf1: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005eedf7: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005eee01: mov eax, ebx */ r_eax = r_ebx;
    /* 005eee03: mov dword ptr [ebx + 0x244], 1 */ W32((u32)(r_ebx+0x244u), 0x1u);
    /* 005eee0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eee0e: ret 8 */ FN_RET(0x005eedd0); r_esp += 12; return;
}

void f_005eee14(void) /* sub_5EEE14 */
{
    FN_ENTER(0x005eee14);
    /* 005eee14: mov dword ptr [0xa8ddec], 0x3f800000 */ W32((u32)(0xa8ddecu), 0x3f800000u);
    /* 005eee1e: mov dword ptr [0xa8ddf0], 0x41000000 */ W32((u32)(0xa8ddf0u), 0x41000000u);
    /* 005eee28: mov dword ptr [0xa8ddf4], 0x3fc00000 */ W32((u32)(0xa8ddf4u), 0x3fc00000u);
    /* 005eee32: ret  */ FN_RET(0x005eee14); r_esp += 4; return;
}

void f_005eee34(void) /* sub_5EEE34 */
{
    FN_ENTER(0x005eee34);
    /* 005eee34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eee35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eee37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eee39: call 0x5eee58 */ r_esp -= 4; W32(r_esp, 0x5eee3eu); f_005eee58();
    /* 005eee3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eee42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eee44: jne 0x5eee4a */ if (!fZ) goto L_005eee4a;
L_005eee46:; BB(0x005eee46);
    /* 005eee46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eee47: ret 4 */ FN_RET(0x005eee34); r_esp += 8; return;
L_005eee4a:; BB(0x005eee4a);
    /* 005eee4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eee4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eee50u); f_005c2f74();
    /* 005eee50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eee51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eee52: ret 4 */ FN_RET(0x005eee34); r_esp += 8; return;
}

void f_005eee58(void) /* sub_5EEE58 */
{
    FN_ENTER(0x005eee58);
    /* 005eee58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eee59: mov ebp, esp */ r_ebp = r_esp;
    /* 005eee5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eee5d: push 0x8dc78c */ { u32 v = 0x8dc78cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eee62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eee68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eee69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eee70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eee73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eee76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eee79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eee7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eee7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eee82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eee85: mov dword ptr [ecx], 0xb13680 */ W32((u32)(r_ecx), 0xb13680u);
    /* 005eee8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eee92: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eee97u); f_005e61c8();
    /* 005eee97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eee9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eeea1: mov esp, ebp */ r_esp = r_ebp;
    /* 005eeea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eeea4: ret  */ FN_RET(0x005eee58); r_esp += 4; return;
}

void f_005eeea8(void) /* sub_5EEEA8 */
{
    FN_ENTER(0x005eeea8);
    /* 005eeea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eeea9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeeaa: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eeeac: mov ebp, dword ptr [ebx + 0xfc] */ r_ebp = R32((u32)(r_ebx+0xfcu));
    /* 005eeeb2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eeeb4: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5eeeb9u); f_005e84a8();
    /* 005eeeb9: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005eeebb: mov eax, dword ptr [ebx + 0x1ac] */ r_eax = R32((u32)(r_ebx+0x1acu));
    /* 005eeec1: mov dword ptr [ebx + 0xfc], eax */ W32((u32)(r_ebx+0xfcu), r_eax);
    /* 005eeec7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eeec9: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5eeeceu); f_005e6334();
    /* 005eeece: mov dword ptr [ebx + 0xfc], ebp */ W32((u32)(r_ebx+0xfcu), r_ebp);
    /* 005eeed4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eeed5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eeed6: ret  */ FN_RET(0x005eeea8); r_esp += 4; return;
}

void f_005eeed8(void) /* sub_5EEED8 */
{
    FN_ENTER(0x005eeed8);
    /* 005eeed8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eeed9: mov ebp, esp */ r_ebp = r_esp;
    /* 005eeedb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eeedd: push 0x8dc7b4 */ { u32 v = 0x8dc7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005eeee2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eeee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eeee9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eeef0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eeef3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eeef6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eeef9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eeefc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eeeff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eef02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eef04: je 0x5eef5b */ if (fZ) goto L_005eef5b;
L_005eef06:; BB(0x005eef06);
    /* 005eef06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eef0d: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005eef12: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eef17u); f_005caba4();
    /* 005eef17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eef18: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eef1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eef1d: je 0x5eef57 */ if (fZ) goto L_005eef57;
L_005eef1f:; BB(0x005eef1f);
    /* 005eef1f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eef26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eef2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eef30: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eef33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eef34: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eef3a: call 0x5eef6c */ r_esp -= 4; W32(r_esp, 0x5eef3fu); f_005eef6c();
    /* 005eef3f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eef42: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eef49:; BB(0x005eef49);
    /* 005eef49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eef4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eef53: mov esp, ebp */ r_esp = r_ebp;
    /* 005eef55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eef56: ret  */ FN_RET(0x005eeed8); r_esp += 4; return;
L_005eef57:; BB(0x005eef57);
    /* 005eef57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eef59: jmp 0x5eef49 */ goto L_005eef49;
L_005eef5b:; BB(0x005eef5b);
    /* 005eef5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eef5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eef60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eef67: mov esp, ebp */ r_esp = r_ebp;
    /* 005eef69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eef6a: ret  */ FN_RET(0x005eeed8); r_esp += 4; return;
}

void f_005eef6c(void) /* sub_5EEF6C */
{
    FN_ENTER(0x005eef6c);
    /* 005eef6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eef6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eef6f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eef73: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eef77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eef79: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eef7eu); f_005e959c();
    /* 005eef7e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005eef84: mov dword ptr [ebx], 0xb13680 */ W32((u32)(r_ebx), 0xb13680u);
    /* 005eef8a: mov eax, ebx */ r_eax = r_ebx;
    /* 005eef8c: or edx, 0x800201 */ {  u32 a = r_edx; u32 b = 0x800201u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eef92: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005eef98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eef99: ret 8 */ FN_RET(0x005eef6c); r_esp += 12; return;
}

void f_005eef9c(void) /* sub_5EEF9C */
{
    FN_ENTER(0x005eef9c);
    /* 005eef9c: mov dword ptr [0xa8ddf8], 0x3f800000 */ W32((u32)(0xa8ddf8u), 0x3f800000u);
    /* 005eefa6: mov dword ptr [0xa8ddfc], 0x41000000 */ W32((u32)(0xa8ddfcu), 0x41000000u);
    /* 005eefb0: mov dword ptr [0xa8de00], 0x3fc00000 */ W32((u32)(0xa8de00u), 0x3fc00000u);
    /* 005eefba: ret  */ FN_RET(0x005eef9c); r_esp += 4; return;
}

void f_005eefbc(void) /* sub_5EEFBC */
{
    FN_ENTER(0x005eefbc);
    /* 005eefbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eefbd: mov ebp, esp */ r_ebp = r_esp;
    /* 005eefbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eefc1: push 0x8dc7d0 */ { u32 v = 0x8dc7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eefc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eefcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eefcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eefd4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eefd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eefda: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005eefdd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005eefe0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005eefe3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eefe6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005eefe9: mov eax, ecx */ r_eax = r_ecx;
    /* 005eefeb: mov dword ptr [eax], 0xb137e0 */ W32((u32)(r_eax), 0xb137e0u);
    /* 005eeff1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eeff8: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eeffdu); f_005e61c8();
    /* 005eeffd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef000: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef002: jne 0x5ef014 */ if (!fZ) goto L_005ef014;
L_005ef004:; BB(0x005ef004);
    /* 005ef004: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef007: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef00e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef010: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef011: ret 4 */ FN_RET(0x005eefbc); r_esp += 8; return;
L_005ef014:; BB(0x005ef014);
    /* 005ef014: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef018: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ef01du); f_005c2f74();
    /* 005ef01d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ef01e: jmp 0x5ef004 */ goto L_005ef004;
}

