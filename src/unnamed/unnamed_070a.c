#include "protos.h"

void f_0070a024(void) /* sub_70A024 */
{
    FN_ENTER(0x0070a024);
    /* 0070a024: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070a028: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070a02b: movsx edx, word ptr [0xa97f34] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa97f34u));
    /* 0070a032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070a035: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0070a038: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0070a03a: movsx ecx, word ptr [0xa97f36] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa97f36u));
    /* 0070a041: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0070a045: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0070a049: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0070a04c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a04f: ret  */ FN_RET(0x0070a024); r_esp += 4; return;
}

void f_0070a028(void) /* sub_70A028 */
{
    FN_ENTER(0x0070a028);
    /* 0070a028: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070a02b: movsx edx, word ptr [0xa97f34] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa97f34u));
    /* 0070a032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070a035: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0070a038: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0070a03a: movsx ecx, word ptr [0xa97f36] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa97f36u));
    /* 0070a041: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0070a045: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0070a049: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0070a04c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a04f: ret  */ FN_RET(0x0070a028); r_esp += 4; return;
}

void f_0070a050(void) /* sub_70A050 */
{
    FN_ENTER(0x0070a050);
    /* 0070a050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070a051: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070a054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a056: call 0x83fdfc */ r_esp -= 4; W32(r_esp, 0x70a05bu); f_0083fdfc();
    /* 0070a05b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a05d: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x70a062u); f_0083fde4();
    /* 0070a062: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a064: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070a067: mov edx, dword ptr [0xa97f28] */ r_edx = R32((u32)(0xa97f28u));
    /* 0070a06d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a06f: jne 0x70a0f5 */ if (!fZ) goto L_0070a0f5;
L_0070a075:; BB(0x0070a075);
    /* 0070a075: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0070a078: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070a07a: je 0x70a277 */ if (fZ) goto L_0070a277;
L_0070a080:; BB(0x0070a080);
    /* 0070a080: fld dword ptr [0xa48828] */ FPUSH(R_F32((u32)(0xa48828u)));
    /* 0070a086: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a08a: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a08f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a094: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a098: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a09c: fistp dword ptr [0xa97f2c] */ W32((u32)(0xa97f2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a0a2: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a0a6: fld dword ptr [0x96ed98] */ FPUSH(R_F32((u32)(0x96ed98u)));
    /* 0070a0ac: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 0070a0b2: fadd dword ptr [0xa4882c] */ ST(0) = ST(0) + R_F32((u32)(0xa4882cu));
    /* 0070a0b8: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a0bc: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a0c1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a0c6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a0ca: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a0ce: fistp dword ptr [0xa97f30] */ W32((u32)(0xa97f30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a0d4: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a0d8: mov dword ptr [0xa97f28], 1 */ W32((u32)(0xa97f28u), 0x1u);
    /* 0070a0e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070a0e4: mov word ptr [0xa97f34], ax */ W16((u32)(0xa97f34u), (u16)r_eax);
    /* 0070a0ea: mov word ptr [0xa97f36], ax */ W16((u32)(0xa97f36u), (u16)r_eax);
    /* 0070a0f0: jmp 0x70a277 */ goto L_0070a277;
L_0070a0f5:; BB(0x0070a0f5);
    /* 0070a0f5: fld dword ptr [0xa48828] */ FPUSH(R_F32((u32)(0xa48828u)));
    /* 0070a0fb: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a0ff: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a104: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a109: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a10d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a111: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a115: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a119: fld dword ptr [0x96ed98] */ FPUSH(R_F32((u32)(0x96ed98u)));
    /* 0070a11f: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 0070a125: fadd dword ptr [0xa4882c] */ ST(0) = ST(0) + R_F32((u32)(0xa4882cu));
    /* 0070a12b: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0070a12f: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a133: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a138: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a13d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a141: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a145: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a149: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a14d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0070a151: mov dword ptr [0xa97f28], 1 */ W32((u32)(0xa97f28u), 0x1u);
    /* 0070a15b: mov dword ptr [0xa97f2c], edx */ W32((u32)(0xa97f2cu), r_edx);
    /* 0070a161: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0070a163: mov dword ptr [0xa97f30], eax */ W32((u32)(0xa97f30u), r_eax);
    /* 0070a168: mov word ptr [0xa97f34], di */ W16((u32)(0xa97f34u), (u16)r_edi);
    /* 0070a16f: mov word ptr [0xa97f36], di */ W16((u32)(0xa97f36u), (u16)r_edi);
    /* 0070a176: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0070a179: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070a17c: je 0x70a1ae */ if (fZ) goto L_0070a1ae;
L_0070a17e:; BB(0x0070a17e);
    /* 0070a17e: mov dword ptr [0xa97f38], 0 */ W32((u32)(0xa97f38u), 0x0u);
    /* 0070a188: mov dword ptr [0xa97f2c], edx */ W32((u32)(0xa97f2cu), r_edx);
    /* 0070a18e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070a190: mov dword ptr [0xa97f28], ecx */ W32((u32)(0xa97f28u), r_ecx);
    /* 0070a196: mov dword ptr [0xa97f30], eax */ W32((u32)(0xa97f30u), r_eax);
    /* 0070a19b: mov word ptr [0xa97f34], cx */ W16((u32)(0xa97f34u), (u16)r_ecx);
    /* 0070a1a2: mov word ptr [0xa97f36], cx */ W16((u32)(0xa97f36u), (u16)r_ecx);
    /* 0070a1a9: jmp 0x70a277 */ goto L_0070a277;
L_0070a1ae:; BB(0x0070a1ae);
    /* 0070a1ae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070a1b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a1b2: call dword ptr [0x8f8330] */ { u32 t = R32((u32)(0x8f8330u)); r_esp -= 4; W32(r_esp, 0x70a1b8u); call_ind(t); }
    /* 0070a1b8: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0070a1bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a1bf: jne 0x70a1cd */ if (!fZ) goto L_0070a1cd;
L_0070a1c1:; BB(0x0070a1c1);
    /* 0070a1c1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070a1c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070a1c8: jmp 0x70a25e */ goto L_0070a25e;
L_0070a1cd:; BB(0x0070a1cd);
    /* 0070a1cd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070a1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a1d1: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a1d7: call dword ptr [0x8f832c] */ { u32 t = R32((u32)(0x8f832cu)); r_esp -= 4; W32(r_esp, 0x70a1ddu); call_ind(t); }
    /* 0070a1dd: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0070a1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a1e2: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a1e8: call dword ptr [0x8f8328] */ { u32 t = R32((u32)(0x8f8328u)); r_esp -= 4; W32(r_esp, 0x70a1eeu); call_ind(t); }
    /* 0070a1ee: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0070a1f1: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0070a1f5: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070a1f7: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0070a1fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070a1ff: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0070a203: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0070a207: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070a209: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a20b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a20f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a214: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a219: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a21d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a221: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a225: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a229: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0070a22f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070a231: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0070a235: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a239: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a23e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a243: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a247: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a24b: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a24f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a253: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0070a257: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070a25a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_0070a25e:; BB(0x0070a25e);
    /* 0070a25e: sub edx, dword ptr [0xa97f2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa97f2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0070a264: sub eax, dword ptr [0xa97f30] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa97f30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0070a26a: mov word ptr [0xa97f34], dx */ W16((u32)(0xa97f34u), (u16)r_edx);
    /* 0070a271: mov word ptr [0xa97f36], ax */ W16((u32)(0xa97f36u), (u16)r_eax);
L_0070a277:; BB(0x0070a277);
    /* 0070a277: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a279: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x70a27fu); call_ind(t); }
    /* 0070a27f: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 0070a284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070a286: jge 0x70a299 */ if ((fS==fO)) goto L_0070a299;
L_0070a288:; BB(0x0070a288);
    /* 0070a288: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a28a: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x70a290u); call_ind(t); }
    /* 0070a290: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 0070a295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070a297: jl 0x70a288 */ if ((fS!=fO)) goto L_0070a288;
L_0070a299:; BB(0x0070a299);
    /* 0070a299: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a29c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070a29d: ret  */ FN_RET(0x0070a050); r_esp += 4; return;
}

void f_0070a2a0(void) /* sub_70A2A0 */
{
    FN_ENTER(0x0070a2a0);
    /* 0070a2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070a2a1: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070a2a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a2a6: call 0x83fdfc */ r_esp -= 4; W32(r_esp, 0x70a2abu); f_0083fdfc();
    /* 0070a2ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a2ad: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x70a2b2u); f_0083fde4();
    /* 0070a2b2: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a2b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070a2b7: mov edx, dword ptr [0xa97f28] */ r_edx = R32((u32)(0xa97f28u));
    /* 0070a2bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a2bf: jne 0x70a43d */ if (!fZ) goto L_0070a43d;
L_0070a2c5:; BB(0x0070a2c5);
    /* 0070a2c5: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0070a2c8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070a2ca: je 0x70a405 */ if (fZ) goto L_0070a405;
L_0070a2d0:; BB(0x0070a2d0);
    /* 0070a2d0: mov eax, dword ptr [0xacbeec] */ r_eax = R32((u32)(0xacbeecu));
    /* 0070a2d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a2d7: jne 0x70a405 */ if (!fZ) goto L_0070a405;
L_0070a2dd:; BB(0x0070a2dd);
    /* 0070a2dd: fld dword ptr [0xa48828] */ FPUSH(R_F32((u32)(0xa48828u)));
    /* 0070a2e3: mov ecx, dword ptr [0xacbef0] */ r_ecx = R32((u32)(0xacbef0u));
    /* 0070a2e9: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a2ed: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a2f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a2f7: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a2fb: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a2ff: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a303: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a307: fld dword ptr [0x96ed90] */ FPUSH(R_F32((u32)(0x96ed90u)));
    /* 0070a30d: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 0070a313: fadd dword ptr [0xa4882c] */ ST(0) = ST(0) + R_F32((u32)(0xa4882cu));
    /* 0070a319: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0070a31d: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a321: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a326: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a32b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a32f: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a333: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a337: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a33b: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0070a33f: mov dword ptr [0xa97f2c], edx */ W32((u32)(0xa97f2cu), r_edx);
    /* 0070a345: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a347: mov dword ptr [0xa97f30], ebp */ W32((u32)(0xa97f30u), r_ebp);
    /* 0070a34d: mov eax, 0 */ r_eax = 0x0u;
    /* 0070a352: mov dword ptr [0xa97f28], 1 */ W32((u32)(0xa97f28u), 0x1u);
    /* 0070a35c: mov word ptr [0xa97f34], ax */ W16((u32)(0xa97f34u), (u16)r_eax);
    /* 0070a362: mov word ptr [0xa97f36], ax */ W16((u32)(0xa97f36u), (u16)r_eax);
    /* 0070a368: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070a36b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0070a36f: je 0x70a3fd */ if (fZ) goto L_0070a3fd;
L_0070a375:; BB(0x0070a375);
    /* 0070a375: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0070a379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a37a: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a380: call dword ptr [0x8f8328] */ { u32 t = R32((u32)(0x8f8328u)); r_esp -= 4; W32(r_esp, 0x70a386u); call_ind(t); }
    /* 0070a386: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0070a389: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0070a38f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070a391: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0070a395: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070a397: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0070a39b: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0070a3a1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070a3a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a3a5: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a3a9: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a3ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a3b3: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a3b7: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a3bb: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a3be: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a3c2: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0070a3c6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070a3c8: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a3cc: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a3d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a3d6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a3da: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a3de: fistp dword ptr [esp + 4] */ W32((u32)(r_esp+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a3e2: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a3e6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070a3e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a3ea: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a3f0: call dword ptr [0x8f8340] */ { u32 t = R32((u32)(0x8f8340u)); r_esp -= 4; W32(r_esp, 0x70a3f6u); call_ind(t); }
    /* 0070a3f6: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070a3f9: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0070a3fd:; BB(0x0070a3fd);
    /* 0070a3fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070a3fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070a3ff: call dword ptr [0x8f8344] */ { u32 t = R32((u32)(0x8f8344u)); r_esp -= 4; W32(r_esp, 0x70a405u); call_ind(t); }
L_0070a405:; BB(0x0070a405);
    /* 0070a405: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0070a40a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a40c: jne 0x70a5e6 */ if (!fZ) goto L_0070a5e6;
L_0070a412:; BB(0x0070a412);
    /* 0070a412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a414: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x70a41au); call_ind(t); }
    /* 0070a41a: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 0070a41f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070a421: jl 0x70a5e6 */ if ((fS!=fO)) goto L_0070a5e6;
L_0070a427:; BB(0x0070a427);
    /* 0070a427: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a429: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x70a42fu); call_ind(t); }
    /* 0070a42f: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 0070a434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070a436: jge 0x70a427 */ if ((fS==fO)) goto L_0070a427;
L_0070a438:; BB(0x0070a438);
    /* 0070a438: jmp 0x70a5e6 */ goto L_0070a5e6;
L_0070a43d:; BB(0x0070a43d);
    /* 0070a43d: fld dword ptr [0xa48828] */ FPUSH(R_F32((u32)(0xa48828u)));
    /* 0070a443: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a447: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a44c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a451: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a455: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a459: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a45d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a461: fld dword ptr [0x96ed90] */ FPUSH(R_F32((u32)(0x96ed90u)));
    /* 0070a467: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 0070a46d: fadd dword ptr [0xa4882c] */ ST(0) = ST(0) + R_F32((u32)(0xa4882cu));
    /* 0070a473: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0070a477: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a47b: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a480: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a485: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a489: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a48d: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a491: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a495: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0070a499: mov dword ptr [0xa97f28], 1 */ W32((u32)(0xa97f28u), 0x1u);
    /* 0070a4a3: mov dword ptr [0xa97f2c], edx */ W32((u32)(0xa97f2cu), r_edx);
    /* 0070a4a9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0070a4ab: mov dword ptr [0xa97f30], eax */ W32((u32)(0xa97f30u), r_eax);
    /* 0070a4b0: mov word ptr [0xa97f34], bp */ W16((u32)(0xa97f34u), (u16)r_ebp);
    /* 0070a4b7: mov word ptr [0xa97f36], bp */ W16((u32)(0xa97f36u), (u16)r_ebp);
    /* 0070a4be: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0070a4c0: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070a4c3: je 0x70a599 */ if (fZ) goto L_0070a599;
L_0070a4c9:; BB(0x0070a4c9);
    /* 0070a4c9: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0070a4cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a4ce: call dword ptr [0x8f8330] */ { u32 t = R32((u32)(0x8f8330u)); r_esp -= 4; W32(r_esp, 0x70a4d4u); call_ind(t); }
    /* 0070a4d4: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0070a4d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a4db: jne 0x70a4ea */ if (!fZ) goto L_0070a4ea;
L_0070a4dd:; BB(0x0070a4dd);
    /* 0070a4dd: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0070a4e1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0070a4e5: jmp 0x70a57e */ goto L_0070a57e;
L_0070a4ea:; BB(0x0070a4ea);
    /* 0070a4ea: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0070a4ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a4ef: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a4f5: call dword ptr [0x8f832c] */ { u32 t = R32((u32)(0x8f832cu)); r_esp -= 4; W32(r_esp, 0x70a4fbu); call_ind(t); }
    /* 0070a4fb: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0070a4ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a500: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a506: call dword ptr [0x8f8328] */ { u32 t = R32((u32)(0x8f8328u)); r_esp -= 4; W32(r_esp, 0x70a50cu); call_ind(t); }
    /* 0070a50c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0070a510: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0070a514: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070a516: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0070a51c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070a51e: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0070a522: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0070a526: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070a528: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a52a: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a52e: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a533: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a538: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a53c: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a540: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a544: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a548: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0070a54e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070a550: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0070a554: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070a558: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070a55d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a562: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070a566: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070a56a: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a56e: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070a572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0070a576: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0070a57a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
L_0070a57e:; BB(0x0070a57e);
    /* 0070a57e: sub edx, dword ptr [0xa97f2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa97f2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0070a584: sub eax, dword ptr [0xa97f30] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa97f30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0070a58a: mov word ptr [0xa97f34], dx */ W16((u32)(0xa97f34u), (u16)r_edx);
    /* 0070a591: mov word ptr [0xa97f36], ax */ W16((u32)(0xa97f36u), (u16)r_eax);
    /* 0070a597: jmp 0x70a5c4 */ goto L_0070a5c4;
L_0070a599:; BB(0x0070a599);
    /* 0070a599: mov dword ptr [0xa97f38], 0 */ W32((u32)(0xa97f38u), 0x0u);
    /* 0070a5a3: mov dword ptr [0xa97f2c], edx */ W32((u32)(0xa97f2cu), r_edx);
    /* 0070a5a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070a5ab: mov dword ptr [0xa97f28], ecx */ W32((u32)(0xa97f28u), r_ecx);
    /* 0070a5b1: mov dword ptr [0xa97f30], eax */ W32((u32)(0xa97f30u), r_eax);
    /* 0070a5b6: mov word ptr [0xa97f34], cx */ W16((u32)(0xa97f34u), (u16)r_ecx);
    /* 0070a5bd: mov word ptr [0xa97f36], cx */ W16((u32)(0xa97f36u), (u16)r_ecx);
L_0070a5c4:; BB(0x0070a5c4);
    /* 0070a5c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a5c6: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x70a5ccu); call_ind(t); }
    /* 0070a5cc: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 0070a5d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070a5d3: jge 0x70a5e6 */ if ((fS==fO)) goto L_0070a5e6;
L_0070a5d5:; BB(0x0070a5d5);
    /* 0070a5d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a5d7: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x70a5ddu); call_ind(t); }
    /* 0070a5dd: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 0070a5e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070a5e4: jl 0x70a5d5 */ if ((fS!=fO)) goto L_0070a5d5;
L_0070a5e6:; BB(0x0070a5e6);
    /* 0070a5e6: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a5e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070a5ea: ret  */ FN_RET(0x0070a2a0); r_esp += 4; return;
}

void f_0070a5ec(void) /* sub_70A5EC */
{
    FN_ENTER(0x0070a5ec);
    /* 0070a5ec: mov dword ptr [0x9d09e8], 1 */ W32((u32)(0x9d09e8u), 0x1u);
    /* 0070a5f6: ret  */ FN_RET(0x0070a5ec); r_esp += 4; return;
}

void f_0070a5f8(void) /* sub_70A5F8 */
{
    FN_ENTER(0x0070a5f8);
    /* 0070a5f8: mov dword ptr [0x9d09e8], 0 */ W32((u32)(0x9d09e8u), 0x0u);
    /* 0070a602: ret  */ FN_RET(0x0070a5f8); r_esp += 4; return;
}

void f_0070a604(void) /* sub_70A604 */
{
    FN_ENTER(0x0070a604);
    /* 0070a604: mov eax, dword ptr [0x9d09e8] */ r_eax = R32((u32)(0x9d09e8u));
    /* 0070a609: ret  */ FN_RET(0x0070a604); r_esp += 4; return;
}

void f_0070a60c(void) /* sub_70A60C */
{
    FN_ENTER(0x0070a60c);
    /* 0070a60c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070a60d: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070a610: call 0x7c04e4 */ r_esp -= 4; W32(r_esp, 0x70a615u); f_007c04e4();
    /* 0070a615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a617: je 0x70a74c */ if (fZ) goto L_0070a74c;
L_0070a61d:; BB(0x0070a61d);
    /* 0070a61d: fld dword ptr [0x96ed88] */ FPUSH(R_F32((u32)(0x96ed88u)));
    /* 0070a623: fld dword ptr [0x96ed88] */ FPUSH(R_F32((u32)(0x96ed88u)));
    /* 0070a629: movsx edx, word ptr [0xa97f48] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa97f48u));
    /* 0070a630: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a632: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0070a636: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0070a63a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a63d: jne 0x70a655 */ if (!fZ) goto L_0070a655;
L_0070a63f:; BB(0x0070a63f);
    /* 0070a63f: fld dword ptr [0x96ed84] */ FPUSH(R_F32((u32)(0x96ed84u)));
    /* 0070a645: fld dword ptr [0x96ed84] */ FPUSH(R_F32((u32)(0x96ed84u)));
    /* 0070a64b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a64d: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0070a651: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_0070a655:; BB(0x0070a655);
    /* 0070a655: mov eax, dword ptr [0x9d09e8] */ r_eax = R32((u32)(0x9d09e8u));
    /* 0070a65a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a65c: jne 0x70a6b5 */ if (!fZ) goto L_0070a6b5;
L_0070a65e:; BB(0x0070a65e);
    /* 0070a65e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a660: je 0x70a6b0 */ if (fZ) goto L_0070a6b0;
L_0070a662:; BB(0x0070a662);
    /* 0070a662: fld dword ptr [0xa97f50] */ FPUSH(R_F32((u32)(0xa97f50u)));
    /* 0070a668: fsub dword ptr [0x96ed7c] */ ST(0) = ST(0) - R_F32((u32)(0x96ed7cu));
    /* 0070a66e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070a672: fchs  */ ST(0) = -ST(0);
    /* 0070a674: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070a676: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a678: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a679: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a67b: ja 0x70a67f */ if ((!fC&&!fZ)) goto L_0070a67f;
L_0070a67d:; BB(0x0070a67d);
    /* 0070a67d: fst st(1) */ ST(1) = ST(0);
L_0070a67f:; BB(0x0070a67f);
    /* 0070a67f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a681: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0070a685: fst dword ptr [0xa97f50] */ W_F32((u32)(0xa97f50u), ST(0));
    /* 0070a68b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a68f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a694: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a699: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a69d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a6a1: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a6a5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a6a9: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0070a6ad: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
L_0070a6b0:; BB(0x0070a6b0);
    /* 0070a6b0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a6b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070a6b4: ret  */ FN_RET(0x0070a60c); r_esp += 4; return;
L_0070a6b5:; BB(0x0070a6b5);
    /* 0070a6b5: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a6bau); f_00791b48();
    /* 0070a6ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a6bc: je 0x70a74c */ if (fZ) goto L_0070a74c;
L_0070a6c2:; BB(0x0070a6c2);
    /* 0070a6c2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0070a6c4: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x70a6c9u); f_007917b8();
    /* 0070a6c9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0070a6cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a6cf: je 0x70aab7 */ if (fZ) goto L_0070aab7;
L_0070a6d5:; BB(0x0070a6d5);
    /* 0070a6d5: mov eax, 1 */ r_eax = 0x1u;
L_0070a6da:; BB(0x0070a6da);
    /* 0070a6da: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0070a6e1: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0070a6e5: mov esi, ebp */ r_esi = r_ebp;
    /* 0070a6e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070a6e9: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 0070a6ed: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 0070a6f5: mov ebp, eax */ r_ebp = r_eax;
    /* 0070a6f7: mov dword ptr [esp + 8], 2 */ W32((u32)(r_esp+0x8u), 0x2u);
    /* 0070a6ff: mov edi, edx */ r_edi = r_edx;
    /* 0070a701: mov dword ptr [esp + 0xc], 3 */ W32((u32)(r_esp+0xcu), 0x3u);
    /* 0070a709: mov dword ptr [esp + 0x10], 4 */ W32((u32)(r_esp+0x10u), 0x4u);
    /* 0070a711: mov dword ptr [esp + 0x14], 5 */ W32((u32)(r_esp+0x14u), 0x5u);
L_0070a719:; BB(0x0070a719);
    /* 0070a719: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a71eu); f_00791b48();
    /* 0070a71e: push dword ptr [esp + edi*4] */ { u32 v = R32((u32)(r_esp+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a721: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a723: call 0x78fee0 */ r_esp -= 4; W32(r_esp, 0x70a728u); f_0078fee0();
    /* 0070a728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a72a: jne 0x70aaa3 */ if (!fZ) goto L_0070aaa3;
L_0070a730:; BB(0x0070a730);
    /* 0070a730: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070a733: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070a736: jl 0x70a719 */ if ((fS!=fO)) goto L_0070a719;
L_0070a738:; BB(0x0070a738);
    /* 0070a738: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0070a73c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070a73e: mov ebp, esi */ r_ebp = r_esi;
    /* 0070a740: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
L_0070a744:; BB(0x0070a744);
    /* 0070a744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a746: je 0x70a751 */ if (fZ) goto L_0070a751;
L_0070a748:; BB(0x0070a748);
    /* 0070a748: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a74a: je 0x70a751 */ if (fZ) goto L_0070a751;
L_0070a74c:; BB(0x0070a74c);
    /* 0070a74c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a74f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070a750: ret  */ FN_RET(0x0070a60c); r_esp += 4; return;
L_0070a751:; BB(0x0070a751);
    /* 0070a751: movsx eax, word ptr [0xa97f48] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa97f48u));
    /* 0070a758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a75a: je 0x70a785 */ if (fZ) goto L_0070a785;
L_0070a75c:; BB(0x0070a75c);
    /* 0070a75c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a762: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70a767u); f_0068d5a8();
    /* 0070a767: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070a768: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 0070a76e: test al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070a770: je 0x70a77d */ if (fZ) goto L_0070a77d;
L_0070a772:; BB(0x0070a772);
    /* 0070a772: movsx eax, word ptr [0xaae8b2] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae8b2u));
    /* 0070a779: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070a77b: jle 0x70a785 */ if ((fZ||fS!=fO)) goto L_0070a785;
L_0070a77d:; BB(0x0070a77d);
    /* 0070a77d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070a77f: mov word ptr [0xa97f48], ax */ W16((u32)(0xa97f48u), (u16)r_eax);
L_0070a785:; BB(0x0070a785);
    /* 0070a785: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a78au); f_00791b48();
    /* 0070a78a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a78c: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a78e: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x70a793u); f_0078fd68();
    /* 0070a793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a795: je 0x70a7bb */ if (fZ) goto L_0070a7bb;
L_0070a797:; BB(0x0070a797);
    /* 0070a797: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x70a79cu); f_007c00d0();
    /* 0070a79c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a79e: jne 0x70a7bb */ if (!fZ) goto L_0070a7bb;
L_0070a7a0:; BB(0x0070a7a0);
    /* 0070a7a0: movsx eax, word ptr [0xa97f48] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa97f48u));
    /* 0070a7a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a7aa: je 0x70a9ad */ if (fZ) goto L_0070a9ad;
L_0070a7b0:; BB(0x0070a7b0);
    /* 0070a7b0: mov eax, 2 */ r_eax = 0x2u;
    /* 0070a7b5: mov word ptr [0xa97f48], ax */ W16((u32)(0xa97f48u), (u16)r_eax);
L_0070a7bb:; BB(0x0070a7bb);
    /* 0070a7bb: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a7c0u); f_00791b48();
    /* 0070a7c0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a7c2: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a7c4: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x70a7c9u); f_0078fd68();
    /* 0070a7c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a7cb: je 0x70a7f1 */ if (fZ) goto L_0070a7f1;
L_0070a7cd:; BB(0x0070a7cd);
    /* 0070a7cd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x70a7d2u); f_007c00d0();
    /* 0070a7d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a7d4: jne 0x70a7f1 */ if (!fZ) goto L_0070a7f1;
L_0070a7d6:; BB(0x0070a7d6);
    /* 0070a7d6: movsx eax, word ptr [0xa97f48] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa97f48u));
    /* 0070a7dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a7e0: je 0x70a9ba */ if (fZ) goto L_0070a9ba;
L_0070a7e6:; BB(0x0070a7e6);
    /* 0070a7e6: mov eax, 1 */ r_eax = 0x1u;
    /* 0070a7eb: mov word ptr [0xa97f48], ax */ W16((u32)(0xa97f48u), (u16)r_eax);
L_0070a7f1:; BB(0x0070a7f1);
    /* 0070a7f1: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a7f6u); f_00791b48();
    /* 0070a7f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a7f8: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a7fa: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x70a7ffu); f_0078fcd4();
    /* 0070a7ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a801: je 0x70a82a */ if (fZ) goto L_0070a82a;
L_0070a803:; BB(0x0070a803);
    /* 0070a803: fld dword ptr [0xa97f50] */ FPUSH(R_F32((u32)(0xa97f50u)));
    /* 0070a809: fsub dword ptr [0x96ed7c] */ ST(0) = ST(0) - R_F32((u32)(0x96ed7cu));
    /* 0070a80f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070a813: fchs  */ ST(0) = -ST(0);
    /* 0070a815: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070a817: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a819: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a81a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a81c: ja 0x70a820 */ if ((!fC&&!fZ)) goto L_0070a820;
L_0070a81e:; BB(0x0070a81e);
    /* 0070a81e: fst st(1) */ ST(1) = ST(0);
L_0070a820:; BB(0x0070a820);
    /* 0070a820: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a822: fstp dword ptr [0xa97f50] */ W_F32((u32)(0xa97f50u), ST(0)); FPOP();
    /* 0070a828: jmp 0x70a8a5 */ goto L_0070a8a5;
L_0070a82a:; BB(0x0070a82a);
    /* 0070a82a: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a82fu); f_00791b48();
    /* 0070a82f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a831: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a833: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x70a838u); f_0078fcd4();
    /* 0070a838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a83a: je 0x70a881 */ if (fZ) goto L_0070a881;
L_0070a83c:; BB(0x0070a83c);
    /* 0070a83c: fld dword ptr [0xa97f50] */ FPUSH(R_F32((u32)(0xa97f50u)));
    /* 0070a842: fadd dword ptr [0x96ed7c] */ ST(0) = ST(0) + R_F32((u32)(0x96ed7cu));
    /* 0070a848: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070a84c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070a84e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a850: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a851: ja 0x70a855 */ if ((!fC&&!fZ)) goto L_0070a855;
L_0070a853:; BB(0x0070a853);
    /* 0070a853: fst st(1) */ ST(1) = ST(0);
L_0070a855:; BB(0x0070a855);
    /* 0070a855: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a857: movsx edx, word ptr [0xa97f48] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa97f48u));
    /* 0070a85e: fst dword ptr [0xa97f50] */ W_F32((u32)(0xa97f50u), ST(0));
    /* 0070a864: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a866: je 0x70aabe */ if (fZ) goto L_0070aabe;
L_0070a86c:; BB(0x0070a86c);
    /* 0070a86c: fcomp dword ptr [0x96ed80] */ fx_compare(ST(0), R_F32((u32)(0x96ed80u))); FPOP();
    /* 0070a872: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a874: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a875: jb 0x70a8a5 */ if (fC) goto L_0070a8a5;
L_0070a877:; BB(0x0070a877);
    /* 0070a877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070a879: mov word ptr [0xa97f48], ax */ W16((u32)(0xa97f48u), (u16)r_eax);
    /* 0070a87f: jmp 0x70a8a5 */ goto L_0070a8a5;
L_0070a881:; BB(0x0070a881);
    /* 0070a881: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0070a885: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0070a888: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070a88c: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0070a890: fcom dword ptr [0x96ed80] */ fx_compare(ST(0), R_F32((u32)(0x96ed80u))); 
    /* 0070a896: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a898: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a899: je 0x70aa60 */ if (fZ) goto L_0070aa60;
L_0070a89f:; BB(0x0070a89f);
    /* 0070a89f: fstp dword ptr [0xa97f50] */ W_F32((u32)(0xa97f50u), ST(0)); FPOP();
L_0070a8a5:; BB(0x0070a8a5);
    /* 0070a8a5: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a8aau); f_00791b48();
    /* 0070a8aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a8ac: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a8ae: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x70a8b3u); f_0078fcd4();
    /* 0070a8b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a8b5: je 0x70a8ea */ if (fZ) goto L_0070a8ea;
L_0070a8b7:; BB(0x0070a8b7);
    /* 0070a8b7: fld dword ptr [0xa97f4c] */ FPUSH(R_F32((u32)(0xa97f4cu)));
    /* 0070a8bd: fsub dword ptr [0x96ed7c] */ ST(0) = ST(0) - R_F32((u32)(0x96ed7cu));
    /* 0070a8c3: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0070a8c7: fchs  */ ST(0) = -ST(0);
    /* 0070a8c9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070a8cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a8cd: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0070a8d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a8d2: jb 0x70a8e2 */ if (fC) goto L_0070a8e2;
L_0070a8d4:; BB(0x0070a8d4);
    /* 0070a8d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a8d6: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0070a8da: fst dword ptr [0xa97f4c] */ W_F32((u32)(0xa97f4cu), ST(0));
    /* 0070a8e0: jmp 0x70a94f */ goto L_0070a94f;
L_0070a8e2:; BB(0x0070a8e2);
    /* 0070a8e2: fst dword ptr [0xa97f4c] */ W_F32((u32)(0xa97f4cu), ST(0));
    /* 0070a8e8: jmp 0x70a94f */ goto L_0070a94f;
L_0070a8ea:; BB(0x0070a8ea);
    /* 0070a8ea: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70a8efu); f_00791b48();
    /* 0070a8ef: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0070a8f1: mov ecx, eax */ r_ecx = r_eax;
    /* 0070a8f3: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x70a8f8u); f_0078fcd4();
    /* 0070a8f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a8fa: je 0x70a927 */ if (fZ) goto L_0070a927;
L_0070a8fc:; BB(0x0070a8fc);
    /* 0070a8fc: fld dword ptr [0xa97f4c] */ FPUSH(R_F32((u32)(0xa97f4cu)));
    /* 0070a902: fadd dword ptr [0x96ed7c] */ ST(0) = ST(0) + R_F32((u32)(0x96ed7cu));
    /* 0070a908: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0070a90c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a90e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a90f: jb 0x70a91f */ if (fC) goto L_0070a91f;
L_0070a911:; BB(0x0070a911);
    /* 0070a911: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a913: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0070a917: fst dword ptr [0xa97f4c] */ W_F32((u32)(0xa97f4cu), ST(0));
    /* 0070a91d: jmp 0x70a94f */ goto L_0070a94f;
L_0070a91f:; BB(0x0070a91f);
    /* 0070a91f: fst dword ptr [0xa97f4c] */ W_F32((u32)(0xa97f4cu), ST(0));
    /* 0070a925: jmp 0x70a94f */ goto L_0070a94f;
L_0070a927:; BB(0x0070a927);
    /* 0070a927: fld dword ptr [0x96ed80] */ FPUSH(R_F32((u32)(0x96ed80u)));
    /* 0070a92d: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0070a931: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0070a934: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070a938: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0070a93c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070a93e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a940: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a941: je 0x70a9c7 */ if (fZ) goto L_0070a9c7;
L_0070a947:; BB(0x0070a947);
    /* 0070a947: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070a949: fst dword ptr [0xa97f4c] */ W_F32((u32)(0xa97f4cu), ST(0));
L_0070a94f:; BB(0x0070a94f);
    /* 0070a94f: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0070a953: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0070a957: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a95b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a960: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a965: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a969: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a96d: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a971: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a975: fld dword ptr [0xa97f50] */ FPUSH(R_F32((u32)(0xa97f50u)));
    /* 0070a97b: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0070a97f: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070a983: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070a988: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070a98d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070a991: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070a995: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070a999: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070a99d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0070a9a1: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0070a9a4: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0070a9a8: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a9ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070a9ac: ret  */ FN_RET(0x0070a60c); r_esp += 4; return;
L_0070a9ad:; BB(0x0070a9ad);
    /* 0070a9ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070a9af: mov word ptr [0xa97f48], ax */ W16((u32)(0xa97f48u), (u16)r_eax);
    /* 0070a9b5: jmp 0x70a7bb */ goto L_0070a7bb;
L_0070a9ba:; BB(0x0070a9ba);
    /* 0070a9ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070a9bc: mov word ptr [0xa97f48], ax */ W16((u32)(0xa97f48u), (u16)r_eax);
    /* 0070a9c2: jmp 0x70a7f1 */ goto L_0070a7f1;
L_0070a9c7:; BB(0x0070a9c7);
    /* 0070a9c7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a9c9: movsx eax, word ptr [0xa97f48] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa97f48u));
    /* 0070a9d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070a9d2: je 0x70aa4c */ if (fZ) goto L_0070aa4c;
L_0070a9d4:; BB(0x0070a9d4);
    /* 0070a9d4: fld dword ptr [0xa97f4c] */ FPUSH(R_F32((u32)(0xa97f4cu)));
    /* 0070a9da: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070a9dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a9de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a9df: jbe 0x70aa11 */ if ((fC||fZ)) goto L_0070aa11;
L_0070a9e1:; BB(0x0070a9e1);
    /* 0070a9e1: fadd dword ptr [0x96ed74] */ ST(0) = ST(0) + R_F32((u32)(0x96ed74u));
    /* 0070a9e7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070a9e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070a9eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a9ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070a9ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070a9f0: jae 0x70aa06 */ if (!fC) goto L_0070aa06;
L_0070a9f2:; BB(0x0070a9f2);
    /* 0070a9f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070a9f4: fld dword ptr [0x96ed80] */ FPUSH(R_F32((u32)(0x96ed80u)));
    /* 0070a9fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070a9fc: mov dword ptr [0xa97f4c], eax */ W32((u32)(0xa97f4cu), r_eax);
    /* 0070aa01: jmp 0x70a94f */ goto L_0070a94f;
L_0070aa06:; BB(0x0070aa06);
    /* 0070aa06: fst dword ptr [0xa97f4c] */ W_F32((u32)(0xa97f4cu), ST(0));
    /* 0070aa0c: jmp 0x70a94f */ goto L_0070a94f;
L_0070aa11:; BB(0x0070aa11);
    /* 0070aa11: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070aa13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070aa15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070aa16: jae 0x70aac5 */ if (!fC) goto L_0070aac5;
L_0070aa1c:; BB(0x0070aa1c);
    /* 0070aa1c: fadd dword ptr [0x96ed78] */ ST(0) = ST(0) + R_F32((u32)(0x96ed78u));
    /* 0070aa22: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070aa24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070aa26: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070aa28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070aa2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070aa2b: jbe 0x70aa41 */ if ((fC||fZ)) goto L_0070aa41;
L_0070aa2d:; BB(0x0070aa2d);
    /* 0070aa2d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070aa2f: fld dword ptr [0x96ed80] */ FPUSH(R_F32((u32)(0x96ed80u)));
    /* 0070aa35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070aa37: mov dword ptr [0xa97f4c], eax */ W32((u32)(0xa97f4cu), r_eax);
    /* 0070aa3c: jmp 0x70a94f */ goto L_0070a94f;
L_0070aa41:; BB(0x0070aa41);
    /* 0070aa41: fst dword ptr [0xa97f4c] */ W_F32((u32)(0xa97f4cu), ST(0));
    /* 0070aa47: jmp 0x70a94f */ goto L_0070a94f;
L_0070aa4c:; BB(0x0070aa4c);
    /* 0070aa4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070aa4e: fld dword ptr [0x96ed80] */ FPUSH(R_F32((u32)(0x96ed80u)));
    /* 0070aa54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070aa56: mov dword ptr [0xa97f4c], eax */ W32((u32)(0xa97f4cu), r_eax);
    /* 0070aa5b: jmp 0x70a94f */ goto L_0070a94f;
L_0070aa60:; BB(0x0070aa60);
    /* 0070aa60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070aa62: movsx eax, word ptr [0xa97f48] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa97f48u));
    /* 0070aa69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070aa6b: je 0x70aa97 */ if (fZ) goto L_0070aa97;
L_0070aa6d:; BB(0x0070aa6d);
    /* 0070aa6d: fld dword ptr [0xa97f50] */ FPUSH(R_F32((u32)(0xa97f50u)));
    /* 0070aa73: fsub dword ptr [0x96ed7c] */ ST(0) = ST(0) - R_F32((u32)(0x96ed7cu));
    /* 0070aa79: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0070aa7d: fchs  */ ST(0) = -ST(0);
    /* 0070aa7f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070aa81: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070aa83: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070aa84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070aa86: ja 0x70aa8a */ if ((!fC&&!fZ)) goto L_0070aa8a;
L_0070aa88:; BB(0x0070aa88);
    /* 0070aa88: fst st(1) */ ST(1) = ST(0);
L_0070aa8a:; BB(0x0070aa8a);
    /* 0070aa8a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070aa8c: fstp dword ptr [0xa97f50] */ W_F32((u32)(0xa97f50u), ST(0)); FPOP();
    /* 0070aa92: jmp 0x70a8a5 */ goto L_0070a8a5;
L_0070aa97:; BB(0x0070aa97);
    /* 0070aa97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070aa99: mov dword ptr [0xa97f50], eax */ W32((u32)(0xa97f50u), r_eax);
    /* 0070aa9e: jmp 0x70a8a5 */ goto L_0070a8a5;
L_0070aaa3:; BB(0x0070aaa3);
    /* 0070aaa3: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0070aaa7: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0070aaab: mov eax, ebp */ r_eax = r_ebp;
    /* 0070aaad: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0070aab2: jmp 0x70a744 */ goto L_0070a744;
L_0070aab7:; BB(0x0070aab7);
    /* 0070aab7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070aab9: jmp 0x70a6da */ goto L_0070a6da;
L_0070aabe:; BB(0x0070aabe);
    /* 0070aabe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070aac0: jmp 0x70a8a5 */ goto L_0070a8a5;
L_0070aac5:; BB(0x0070aac5);
    /* 0070aac5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070aac7: jmp 0x70a94f */ goto L_0070a94f;
}

void f_0070aacc(void) /* sub_70AACC */
{
    FN_ENTER(0x0070aacc);
    /* 0070aacc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070aacf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070aad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070aad3: call dword ptr [0x8f8330] */ { u32 t = R32((u32)(0x8f8330u)); r_esp -= 4; W32(r_esp, 0x70aad9u); call_ind(t); }
    /* 0070aad9: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0070aade: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070aae0: jne 0x70aaee */ if (!fZ) goto L_0070aaee;
L_0070aae2:; BB(0x0070aae2);
    /* 0070aae2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070aae5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070aae9: jmp 0x70ab78 */ goto L_0070ab78;
L_0070aaee:; BB(0x0070aaee);
    /* 0070aaee: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070aaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070aaf2: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070aaf8: call dword ptr [0x8f832c] */ { u32 t = R32((u32)(0x8f832cu)); r_esp -= 4; W32(r_esp, 0x70aafeu); call_ind(t); }
    /* 0070aafe: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0070ab02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ab03: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ab09: call dword ptr [0x8f8328] */ { u32 t = R32((u32)(0x8f8328u)); r_esp -= 4; W32(r_esp, 0x70ab0fu); call_ind(t); }
    /* 0070ab0f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0070ab12: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0070ab16: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070ab18: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0070ab1e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070ab20: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0070ab24: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0070ab28: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070ab2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070ab2c: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070ab30: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070ab35: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070ab3a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070ab3e: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070ab42: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070ab46: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070ab4a: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0070ab50: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070ab52: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0070ab56: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0070ab5a: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0070ab5f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070ab64: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070ab68: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070ab6c: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070ab70: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070ab74: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
L_0070ab78:; BB(0x0070ab78);
    /* 0070ab78: mov word ptr [0xa97f34], dx */ W16((u32)(0xa97f34u), (u16)r_edx);
    /* 0070ab7f: mov word ptr [0xa97f36], ax */ W16((u32)(0xa97f36u), (u16)r_eax);
    /* 0070ab85: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070ab88: ret  */ FN_RET(0x0070aacc); r_esp += 4; return;
}

void f_0070ab8c(void) /* sub_70AB8C */
{
    FN_ENTER(0x0070ab8c);
    /* 0070ab8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070ab8d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070ab8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070ab91: push 0x8f01a8 */ { u32 v = 0x8f01a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ab96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070ab9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ab9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070aba4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070aba7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070abaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070abad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070abb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070abb3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070abb5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0070abbc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70abc1u); f_005caba4();
    /* 0070abc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070abc2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0070abc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070abc7: je 0x70abe9 */ if (fZ) goto L_0070abe9;
L_0070abc9:; BB(0x0070abc9);
    /* 0070abc9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070abd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070abd7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070abda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070abdd: call 0x70abf8 */ r_esp -= 4; W32(r_esp, 0x70abe2u); f_0070abf8();
    /* 0070abe2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0070abe9:; BB(0x0070abe9);
    /* 0070abe9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070abec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070abf3: mov esp, ebp */ r_esp = r_ebp;
    /* 0070abf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070abf6: ret  */ FN_RET(0x0070ab8c); r_esp += 4; return;
}

void f_0070abf8(void) /* sub_70ABF8 */
{
    FN_ENTER(0x0070abf8);
    /* 0070abf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070abf9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070abfb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070abff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070ac01: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x70ac06u); f_008193cc();
    /* 0070ac06: mov dword ptr [ebp], 0xb3edb0 */ W32((u32)(r_ebp), 0xb3edb0u);
    /* 0070ac0d: mov eax, ebp */ r_eax = r_ebp;
    /* 0070ac0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070ac10: ret 4 */ FN_RET(0x0070abf8); r_esp += 8; return;
}

void f_0070ac14(void) /* sub_70AC14 */
{
    FN_ENTER(0x0070ac14);
    /* 0070ac14: mov dword ptr [0xa97f54], 0x3f800000 */ W32((u32)(0xa97f54u), 0x3f800000u);
    /* 0070ac1e: mov dword ptr [0xa97f58], 0x41000000 */ W32((u32)(0xa97f58u), 0x41000000u);
    /* 0070ac28: mov dword ptr [0xa97f5c], 0x3fc00000 */ W32((u32)(0xa97f5cu), 0x3fc00000u);
    /* 0070ac32: ret  */ FN_RET(0x0070ac14); r_esp += 4; return;
}

void f_0070ac34(void) /* sub_70AC34 */
{
    FN_ENTER(0x0070ac34);
    /* 0070ac34: mov ecx, dword ptr [0xa97f68] */ r_ecx = R32((u32)(0xa97f68u));
    /* 0070ac3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ac3c: je 0x70ac45 */ if (fZ) goto L_0070ac45;
L_0070ac3e:; BB(0x0070ac3e);
    /* 0070ac3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ac40: call 0x6dbd5c */ r_esp -= 4; W32(r_esp, 0x70ac45u); f_006dbd5c();
L_0070ac45:; BB(0x0070ac45);
    /* 0070ac45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ac47: mov dword ptr [0xa97f68], eax */ W32((u32)(0xa97f68u), r_eax);
    /* 0070ac4c: mov dword ptr [0xa97f64], eax */ W32((u32)(0xa97f64u), r_eax);
    /* 0070ac51: mov dword ptr [0xa97f60], eax */ W32((u32)(0xa97f60u), r_eax);
    /* 0070ac56: ret  */ FN_RET(0x0070ac34); r_esp += 4; return;
}

void f_0070ac58(void) /* sub_70AC58 */
{
    FN_ENTER(0x0070ac58);
    /* 0070ac58: mov eax, dword ptr [0xa97f60] */ r_eax = R32((u32)(0xa97f60u));
    /* 0070ac5d: ret  */ FN_RET(0x0070ac58); r_esp += 4; return;
}

void f_0070ac60(void) /* sub_70AC60 */
{
    FN_ENTER(0x0070ac60);
    /* 0070ac60: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0070ac64: mov eax, dword ptr [0xa97f68] */ r_eax = R32((u32)(0xa97f68u));
    /* 0070ac69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ac6b: je 0x70ac79 */ if (fZ) goto L_0070ac79;
L_0070ac6d:; BB(0x0070ac6d);
    /* 0070ac6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070ac6f: jl 0x70ac79 */ if ((fS!=fO)) goto L_0070ac79;
L_0070ac71:; BB(0x0070ac71);
    /* 0070ac71: cmp ecx, dword ptr [0xa97f60] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa97f60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ac77: jl 0x70ac7c */ if ((fS!=fO)) goto L_0070ac7c;
L_0070ac79:; BB(0x0070ac79);
    /* 0070ac79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ac7b: ret  */ FN_RET(0x0070ac60); r_esp += 4; return;
L_0070ac7c:; BB(0x0070ac7c);
    /* 0070ac7c: mov edx, dword ptr [0xa97f64] */ r_edx = R32((u32)(0xa97f64u));
    /* 0070ac82: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0070ac85: ret  */ FN_RET(0x0070ac60); r_esp += 4; return;
}

void f_0070ac88(void) /* sub_70AC88 */
{
    FN_ENTER(0x0070ac88);
    /* 0070ac88: push 0x96ee00 */ { u32 v = 0x96ee00u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ac8d: call 0x70b084 */ r_esp -= 4; W32(r_esp, 0x70ac92u); f_0070b084();
    /* 0070ac92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070ac93: mov dword ptr [0xa97f68], eax */ W32((u32)(0xa97f68u), r_eax);
    /* 0070ac98: mov ecx, eax */ r_ecx = r_eax;
    /* 0070ac9a: call 0x70b070 */ r_esp -= 4; W32(r_esp, 0x70ac9fu); f_0070b070();
    /* 0070ac9f: mov ecx, dword ptr [0xa97f68] */ r_ecx = R32((u32)(0xa97f68u));
    /* 0070aca5: mov dword ptr [0xa97f64], eax */ W32((u32)(0xa97f64u), r_eax);
    /* 0070acaa: call 0x70b080 */ r_esp -= 4; W32(r_esp, 0x70acafu); f_0070b080();
    /* 0070acaf: mov dword ptr [0xa97f60], eax */ W32((u32)(0xa97f60u), r_eax);
    /* 0070acb4: ret  */ FN_RET(0x0070ac88); r_esp += 4; return;
}

void f_0070acb8(void) /* sub_70ACB8 */
{
    FN_ENTER(0x0070acb8);
    /* 0070acb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070acb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070acbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070acbd: call 0x70acdc */ r_esp -= 4; W32(r_esp, 0x70acc2u); f_0070acdc();
    /* 0070acc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070acc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070acc8: jne 0x70acce */ if (!fZ) goto L_0070acce;
L_0070acca:; BB(0x0070acca);
    /* 0070acca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070accb: ret 4 */ FN_RET(0x0070acb8); r_esp += 8; return;
L_0070acce:; BB(0x0070acce);
    /* 0070acce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070accf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70acd4u); f_005c2f74();
    /* 0070acd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070acd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070acd6: ret 4 */ FN_RET(0x0070acb8); r_esp += 8; return;
}

void f_0070acdc(void) /* sub_70ACDC */
{
    FN_ENTER(0x0070acdc);
    /* 0070acdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070acdd: mov ebp, esp */ r_ebp = r_esp;
    /* 0070acdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070ace1: push 0x8f01c4 */ { u32 v = 0x8f01c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ace6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070acec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070aced: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070acf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070acf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070acfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070acfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070ad00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070ad03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070ad06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070ad0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070ad10: mov dword ptr [eax], 0xb3ee40 */ W32((u32)(r_eax), 0xb3ee40u);
    /* 0070ad16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ad18: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x70ad1du); f_007a60dc();
    /* 0070ad1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070ad1e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070ad25: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070ad28: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x70ad2du); f_008171e8();
    /* 0070ad2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070ad30: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070ad37: mov esp, ebp */ r_esp = r_ebp;
    /* 0070ad39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070ad3a: ret  */ FN_RET(0x0070acdc); r_esp += 4; return;
}

void f_0070ad3c(void) /* sub_70AD3C */
{
    FN_ENTER(0x0070ad3c);
    /* 0070ad3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ad3d: mov edi, ecx */ r_edi = r_ecx;
    /* 0070ad3f: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0070ad42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ad44: je 0x70ad85 */ if (fZ) goto L_0070ad85;
L_0070ad46:; BB(0x0070ad46);
    /* 0070ad46: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0070ad49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ad4b: je 0x70ad5c */ if (fZ) goto L_0070ad5c;
L_0070ad4d:; BB(0x0070ad4d);
    /* 0070ad4d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0070ad51: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ad56: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0070ad5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ad5b: ret  */ FN_RET(0x0070ad3c); r_esp += 4; return;
L_0070ad5c:; BB(0x0070ad5c);
    /* 0070ad5c: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0070ad61: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070ad67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ad68: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0070ad6d: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x70ad72u); f_007c1100();
    /* 0070ad72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ad74: je 0x70ad83 */ if (fZ) goto L_0070ad83;
L_0070ad76:; BB(0x0070ad76);
    /* 0070ad76: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0070ad7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ad7f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0070ad83:; BB(0x0070ad83);
    /* 0070ad83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ad84: ret  */ FN_RET(0x0070ad3c); r_esp += 4; return;
L_0070ad85:; BB(0x0070ad85);
    /* 0070ad85: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0070ad89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ad8e: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0070ad92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ad93: ret  */ FN_RET(0x0070ad3c); r_esp += 4; return;
}

void f_0070ad94(void)
{
    FN_ENTER(0x0070ad94);
    /* 0070ad94: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x70ad99u); f_007becd4();
    /* 0070ad99: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x70ad9eu); f_007bfba0();
    /* 0070ad9e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0070ada3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x70ada8u); f_0061cdb0();
    /* 0070ada8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0070adad: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x70adb2u); f_0081745c();
    /* 0070adb2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0070adb7: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x70adbcu); f_00817604();
    /* 0070adbc: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0070adc1: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x70adc6u); f_00818f80();
    /* 0070adc6: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x70adcbu); f_005ba748();
    /* 0070adcb: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x70add0u); f_00814168();
    /* 0070add0: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x70add5u); f_007bfedc();
    /* 0070add5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0070add8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070adda: je 0x70ade1 */ if (fZ) goto L_0070ade1;
L_0070addc:; BB(0x0070addc);
    /* 0070addc: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x70ade1u); f_007a6174();
L_0070ade1:; BB(0x0070ade1);
    /* 0070ade1: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x70ade6u); f_0080030c();
    /* 0070ade6: ret  */ FN_RET(0x0070ad94); r_esp += 4; return;
}

void f_0070ade8(void)
{
    FN_ENTER(0x0070ade8);
    /* 0070ade8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0070aded: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x70adf2u); f_00818560();
    /* 0070adf2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070adf4: push 0x9d0a04 */ { u32 v = 0x9d0a04u; r_esp -= 4; W32(r_esp, v); }
    /* 0070adf9: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x70adfeu); f_0078b0a0();
    /* 0070adfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ae01: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x70ae06u); f_0080030c();
    /* 0070ae06: ret  */ FN_RET(0x0070ade8); r_esp += 4; return;
}

void f_0070ae08(void) /* sub_70AE08 */
{
    FN_ENTER(0x0070ae08);
    /* 0070ae08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae09: mov ebp, esp */ r_ebp = r_esp;
    /* 0070ae0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae0d: push 0x8f01e0 */ { u32 v = 0x8f01e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070ae18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070ae20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070ae23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070ae26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070ae29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070ae2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070ae2f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ae32: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070ae35: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x70ae3au); f_008193cc();
    /* 0070ae3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070ae41: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070ae44: mov dword ptr [edx], 0xb3ee40 */ W32((u32)(r_edx), 0xb3ee40u);
    /* 0070ae4a: mov eax, dword ptr [0x9d0a00] */ r_eax = R32((u32)(0x9d0a00u));
    /* 0070ae4f: push 0x399 */ { u32 v = 0x399u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae54: push 0x96ee34 */ { u32 v = 0x96ee34u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae59: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0070ae5c: push 0x96ee28 */ { u32 v = 0x96ee28u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae61: call 0x70f41c */ r_esp -= 4; W32(r_esp, 0x70ae66u); f_0070f41c();
    /* 0070ae66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ae69: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070ae6c: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0070ae6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ae71: je 0x70ae87 */ if (fZ) goto L_0070ae87;
L_0070ae73:; BB(0x0070ae73);
    /* 0070ae73: push 0x1ba8 */ { u32 v = 0x1ba8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae78: push 0x1af4 */ { u32 v = 0x1af4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae7d: mov ecx, eax */ r_ecx = r_eax;
    /* 0070ae7f: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x70ae84u); f_0070f5a4();
    /* 0070ae84: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_0070ae87:; BB(0x0070ae87);
    /* 0070ae87: mov eax, edx */ r_eax = r_edx;
    /* 0070ae89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070ae8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070ae93: mov esp, ebp */ r_esp = r_ebp;
    /* 0070ae95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070ae96: ret 4 */ FN_RET(0x0070ae08); r_esp += 8; return;
}

void f_0070ae9c(void)
{
    FN_ENTER(0x0070ae9c);
    /* 0070ae9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070ae9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070ae9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070aea1: push 0x8f0222 */ { u32 v = 0x8f0222u; r_esp -= 4; W32(r_esp, v); }
    /* 0070aea6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070aeac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070aead: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070aeb4: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070aeb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070aeba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070aebd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070aec0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070aec3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070aec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070aec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070aec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070aec8: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x70aecdu); f_0082acd8();
    /* 0070aecd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070aed0: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x70aed5u); f_007bebe8();
    /* 0070aed5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070aed7: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x70aedcu); f_007a6198();
    /* 0070aedc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070aede: push 0x9d0a04 */ { u32 v = 0x9d0a04u; r_esp -= 4; W32(r_esp, v); }
    /* 0070aee3: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x70aee8u); f_0078b184();
    /* 0070aee8: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0070aeef: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070aef4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70aef9u); f_005caba4();
    /* 0070aef9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070aefc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0070aeff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070af01: je 0x70af26 */ if (fZ) goto L_0070af26;
L_0070af03:; BB(0x0070af03);
    /* 0070af03: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0070af0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070af11: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070af17: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0070af1a: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x70af1fu); f_004d3408();
    /* 0070af1f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0070af26:; BB(0x0070af26);
    /* 0070af26: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070af2d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0070af34: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0070af36: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0070af3d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0070af44: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0070af4b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0070af52: mov dword ptr [ebp - 0x28], 0xc2c80000 */ W32((u32)(r_ebp+0xffffffd8u), 0xc2c80000u);
    /* 0070af59: call 0x4d30fc */ r_esp -= 4; W32(r_esp, 0x70af5eu); f_004d30fc();
    /* 0070af5e: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0070af61: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0070af64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070af65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070af66: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x70af6bu); f_004d33c0();
    /* 0070af6b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0070af72: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0070af74: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70af79u); f_005caba4();
    /* 0070af79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070af7c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0070af7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070af81: je 0x70afa6 */ if (fZ) goto L_0070afa6;
L_0070af83:; BB(0x0070af83);
    /* 0070af83: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070af8a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0070af91: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070af97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070af9a: call 0x70ae08 */ r_esp -= 4; W32(r_esp, 0x70af9fu); f_0070ae08();
    /* 0070af9f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0070afa6:; BB(0x0070afa6);
    /* 0070afa6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070afad: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x70afb2u); f_0080030c();
    /* 0070afb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070afb5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070afbc: mov esp, ebp */ r_esp = r_ebp;
    /* 0070afbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070afbf: ret  */ FN_RET(0x0070ae9c); r_esp += 4; return;
}

void f_0070afc0(void) /* sub_70AFC0 */
{
    FN_ENTER(0x0070afc0);
    /* 0070afc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070afc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070afc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070afc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070afc4: mov edi, ecx */ r_edi = r_ecx;
    /* 0070afc6: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0070afca: push 0x9d0a14 */ { u32 v = 0x9d0a14u; r_esp -= 4; W32(r_esp, v); }
    /* 0070afcf: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x70afd4u); f_005b7a44();
    /* 0070afd4: mov esi, eax */ r_esi = r_eax;
    /* 0070afd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070afd7: call 0x5b9554 */ r_esp -= 4; W32(r_esp, 0x70afdcu); f_005b9554();
    /* 0070afdc: mov ebx, eax */ r_ebx = r_eax;
    /* 0070afde: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070afe1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070afe3: je 0x70b03a */ if (fZ) goto L_0070b03a;
L_0070afe5:; BB(0x0070afe5);
    /* 0070afe5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070afe7: je 0x70b03a */ if (fZ) goto L_0070b03a;
L_0070afe9:; BB(0x0070afe9);
    /* 0070afe9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070afea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070afeb: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x70aff0u); f_00788154();
    /* 0070aff0: mov ebp, eax */ r_ebp = r_eax;
    /* 0070aff2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070aff3: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70aff8u); f_0082e960();
    /* 0070aff8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070aff9: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x70affeu); f_0082e940();
    /* 0070affe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b001: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0070b004: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b006: je 0x70b02a */ if (fZ) goto L_0070b02a;
L_0070b008:; BB(0x0070b008);
    /* 0070b008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b009: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b00b: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x70b010u); f_0086b6b8();
    /* 0070b010: push 0x9d0a14 */ { u32 v = 0x9d0a14u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b015: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x70b01au); f_005b9008();
    /* 0070b01a: mov dword ptr [edi], 1 */ W32((u32)(r_edi), 0x1u);
    /* 0070b020: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070b023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070b024: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b025: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b026: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b027: ret 4 */ FN_RET(0x0070afc0); r_esp += 8; return;
L_0070b02a:; BB(0x0070b02a);
    /* 0070b02a: push 0x96ee50 */ { u32 v = 0x96ee50u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b02f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x70b034u); f_0061cdb0();
    /* 0070b034: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070b035: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0070b038: jmp 0x70b008 */ goto L_0070b008;
L_0070b03a:; BB(0x0070b03a);
    /* 0070b03a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b03b: push 0x96ee40 */ { u32 v = 0x96ee40u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b040: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x70b045u); f_0061cdb0();
    /* 0070b045: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b048: jmp 0x70afe9 */ goto L_0070afe9;
}

