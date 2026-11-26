#include "protos.h"

void f_00761040(void) /* sub_761040 */
{
    FN_ENTER(0x00761040);
    /* 00761040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761041: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00761044: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00761046: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00761049: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076104c: push 0x974ce0 */ { u32 v = 0x974ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 00761051: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00761054: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x761059u); f_007ac344();
    /* 00761059: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0076105d: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00761061: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00761064: fadd dword ptr [eax*4 + 0x974c88] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x974c88u));
    /* 0076106b: fmul dword ptr [0x974cac] */ ST(0) = ST(0) * R_F32((u32)(0x974cacu));
    /* 00761071: fadd dword ptr [0x974cb0] */ ST(0) = ST(0) + R_F32((u32)(0x974cb0u));
    /* 00761077: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0076107a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0076107c: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0076107f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00761082: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00761083: ret  */ FN_RET(0x00761040); r_esp += 4; return;
}

void f_00761084(void) /* sub_761084 */
{
    FN_ENTER(0x00761084);
    /* 00761084: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761085: mov ebp, esp */ r_ebp = r_esp;
    /* 00761087: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00761089: push 0x8f35a8 */ { u32 v = 0x8f35a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076108e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00761094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761095: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076109c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076109f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007610a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007610a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007610a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007610ab: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 007610ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007610b4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7610b9u); f_005caba4();
    /* 007610b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007610ba: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007610bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007610bf: je 0x761102 */ if (fZ) goto L_00761102;
L_007610c1:; BB(0x007610c1);
    /* 007610c1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007610c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007610cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007610d2: call 0x760f78 */ r_esp -= 4; W32(r_esp, 0x7610d7u); f_00760f78();
    /* 007610d7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007610da: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007610e1:; BB(0x007610e1);
    /* 007610e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007610e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007610ea: call 0x761108 */ r_esp -= 4; W32(r_esp, 0x7610efu); f_00761108();
    /* 007610ef: mov eax, ebx */ r_eax = r_ebx;
    /* 007610f1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007610f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007610f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007610fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00761100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00761101: ret  */ FN_RET(0x00761084); r_esp += 4; return;
L_00761102:; BB(0x00761102);
    /* 00761102: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00761104: jmp 0x7610e1 */ goto L_007610e1;
}

void f_00761108(void) /* sub_761108 */
{
    FN_ENTER(0x00761108);
    /* 00761108: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761109: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076110c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076110e: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00761111: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00761114: push 0x974cf0 */ { u32 v = 0x974cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00761119: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0076111c: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x761121u); f_007ac344();
    /* 00761121: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00761125: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00761129: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076112c: fadd dword ptr [eax*4 + 0x974c80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x974c80u));
    /* 00761133: fmul dword ptr [0x974ca4] */ ST(0) = ST(0) * R_F32((u32)(0x974ca4u));
    /* 00761139: fadd dword ptr [0x974ca8] */ ST(0) = ST(0) + R_F32((u32)(0x974ca8u));
    /* 0076113f: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00761142: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00761144: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00761147: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076114a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076114b: ret  */ FN_RET(0x00761108); r_esp += 4; return;
}

void f_0076114c(void) /* sub_76114C */
{
    FN_ENTER(0x0076114c);
    /* 0076114c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076114d: mov esi, ecx */ r_esi = r_ecx;
    /* 0076114f: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00761152: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00761154: je 0x76116d */ if (fZ) goto L_0076116d;
L_00761156:; BB(0x00761156);
    /* 00761156: movsx edx, word ptr [0xa8fc44] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fc44u));
    /* 0076115d: movsx eax, word ptr [0xa8fc48] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8fc48u));
    /* 00761164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761165: mov ecx, esi */ r_ecx = r_esi;
    /* 00761167: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00761168: call 0x761190 */ r_esp -= 4; W32(r_esp, 0x76116du); f_00761190();
L_0076116d:; BB(0x0076116d);
    /* 0076116d: mov ecx, esi */ r_ecx = r_esi;
    /* 0076116f: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x761174u); f_00710db4();
    /* 00761174: mov ecx, esi */ r_ecx = r_esi;
    /* 00761176: call 0x760ff4 */ r_esp -= 4; W32(r_esp, 0x76117bu); f_00760ff4();
    /* 0076117b: mov ecx, esi */ r_ecx = r_esi;
    /* 0076117d: call 0x7611e4 */ r_esp -= 4; W32(r_esp, 0x761182u); f_007611e4();
    /* 00761182: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00761185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761186: mov ecx, esi */ r_ecx = r_esi;
    /* 00761188: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x76118du); f_0072a5ec();
    /* 0076118d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076118e: ret  */ FN_RET(0x0076114c); r_esp += 4; return;
}

void f_00761190(void) /* sub_761190 */
{
    FN_ENTER(0x00761190);
    /* 00761190: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761191: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00761194: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00761196: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x76119bu); f_00816d30();
    /* 0076119b: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 007611a0: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7611a5u); f_00816cb8();
    /* 007611a5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007611a7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007611ab: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x7611b0u); f_00816684();
    /* 007611b0: push 0x974cd0 */ { u32 v = 0x974cd0u; r_esp -= 4; W32(r_esp, v); }
    /* 007611b5: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7611bau); f_00816cb8();
    /* 007611ba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007611bc: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007611c0: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x7611c5u); f_00816684();
    /* 007611c5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007611c8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007611ca: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007611cf: mov ecx, esi */ r_ecx = r_esi;
    /* 007611d1: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7611d6u); f_0072db60();
    /* 007611d6: mov ecx, esi */ r_ecx = r_esi;
    /* 007611d8: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7611ddu); f_0072e0e4();
    /* 007611dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007611de: ret 8 */ FN_RET(0x00761190); r_esp += 12; return;
}

void f_007611e4(void) /* sub_7611E4 */
{
    FN_ENTER(0x007611e4);
    /* 007611e4: fld dword ptr [0x974ca0] */ FPUSH(R_F32((u32)(0x974ca0u)));
    /* 007611ea: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 007611ed: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 007611f0: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007611f2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007611f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007611f6: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 007611f9: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 007611fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007611fe: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 00761201: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00761203: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00761205: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00761207: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00761209: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 0076120c: ret  */ FN_RET(0x007611e4); r_esp += 4; return;
}

void f_00761210(void) /* sub_761210 */
{
    FN_ENTER(0x00761210);
    /* 00761210: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00761211: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761212: mov edi, ecx */ r_edi = r_ecx;
    /* 00761214: mov ecx, edi */ r_ecx = r_edi;
    /* 00761216: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x76121bu); f_00712644();
    /* 0076121b: mov esi, eax */ r_esi = r_eax;
    /* 0076121d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076121e: mov ecx, edi */ r_ecx = r_edi;
    /* 00761220: call 0x761234 */ r_esp -= 4; W32(r_esp, 0x761225u); f_00761234();
    /* 00761225: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761226: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00761229: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076122a: mov ecx, edi */ r_ecx = r_edi;
    /* 0076122c: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x761231u); f_0072a648();
    /* 00761231: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00761232: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00761233: ret  */ FN_RET(0x00761210); r_esp += 4; return;
}

void f_00761234(void) /* sub_761234 */
{
    FN_ENTER(0x00761234);
    /* 00761234: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00761238: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0076123a: lea eax, [edx + 0x10] */ r_eax = (u32)(r_edx+0x10u);
    /* 0076123d: push 0xc2980000 */ { u32 v = 0xc2980000u; r_esp -= 4; W32(r_esp, v); }
    /* 00761242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761243: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00761244: call 0x760b74 */ r_esp -= 4; W32(r_esp, 0x761249u); f_00760b74();
    /* 00761249: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076124c: ret 4 */ FN_RET(0x00761234); r_esp += 8; return;
}

void f_00761250(void) /* sub_761250 */
{
    FN_ENTER(0x00761250);
    /* 00761250: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761251: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761252: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00761256: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00761259: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0076125b: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x761260u); f_00816d30();
    /* 00761260: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 00761265: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00761267: shr edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076126a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0076126d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076126f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761271: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00761273: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761275: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761277: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761279: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076127b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076127d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076127f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761281: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761283: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761285: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761287: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00761289: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0076128c: jbe 0x76129b */ if ((fC||fZ)) goto L_0076129b;
L_0076128e:; BB(0x0076128e);
    /* 0076128e: push 0x974cb8 */ { u32 v = 0x974cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00761293: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x761298u); f_00816cb8();
    /* 00761298: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761299: jmp 0x7612e6 */ goto L_007612e6;
L_0076129b:; BB(0x0076129b);
    /* 0076129b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076129d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076129e: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x7612a3u); f_00816684();
    /* 007612a3: push 0x974cc8 */ { u32 v = 0x974cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 007612a8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7612adu); f_00816cb8();
    /* 007612ad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007612af: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 007612b4: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007612b6: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007612b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007612ba: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007612bd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007612bf: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007612c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007612c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007612c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007612c8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007612ca: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007612cc: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x7612d1u); f_00816684();
    /* 007612d1: push 0x974ccc */ { u32 v = 0x974cccu; r_esp -= 4; W32(r_esp, v); }
    /* 007612d6: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7612dbu); f_00816cb8();
    /* 007612db: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007612dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007612de: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x7612e3u); f_00816684();
    /* 007612e3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007612e6:; BB(0x007612e6);
    /* 007612e6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007612e8: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007612ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007612ef: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7612f4u); f_0072db60();
    /* 007612f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007612f6: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7612fbu); f_0072e0e4();
    /* 007612fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007612fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007612fd: ret 4 */ FN_RET(0x00761250); r_esp += 8; return;
}

void f_00761300(void) /* sub_761300 */
{
    FN_ENTER(0x00761300);
    /* 00761300: mov dword ptr [0xa9ad8c], 0x3f800000 */ W32((u32)(0xa9ad8cu), 0x3f800000u);
    /* 0076130a: mov dword ptr [0xa9ad90], 0x41000000 */ W32((u32)(0xa9ad90u), 0x41000000u);
    /* 00761314: mov dword ptr [0xa9ad94], 0x3fc00000 */ W32((u32)(0xa9ad94u), 0x3fc00000u);
    /* 0076131e: ret  */ FN_RET(0x00761300); r_esp += 4; return;
}

void f_00761320(void) /* sub_761320 */
{
    FN_ENTER(0x00761320);
    /* 00761320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761321: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00761323: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00761327: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00761329: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076132b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076132f: push 0x974d00 */ { u32 v = 0x974d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00761334: call 0x760a28 */ r_esp -= 4; W32(r_esp, 0x761339u); f_00760a28();
    /* 00761339: mov eax, ebp */ r_eax = r_ebp;
    /* 0076133b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076133c: ret 8 */ FN_RET(0x00761320); r_esp += 12; return;
}

void f_00761340(void) /* sub_761340 */
{
    FN_ENTER(0x00761340);
    /* 00761340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761341: mov ebp, esp */ r_ebp = r_esp;
    /* 00761343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00761345: push 0x8f35c4 */ { u32 v = 0x8f35c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076134a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00761350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761351: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00761358: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076135b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076135e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00761361: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00761364: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00761367: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076136a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00761371: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761374: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x761379u); f_0061cdb0();
    /* 00761379: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076137c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00761383: mov esp, ebp */ r_esp = r_ebp;
    /* 00761385: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00761386: ret  */ FN_RET(0x00761340); r_esp += 4; return;
}

void f_00761388(void) /* sub_761388 */
{
    FN_ENTER(0x00761388);
    /* 00761388: call 0x760b0c */ r_esp -= 4; W32(r_esp, 0x76138du); f_00760b0c();
    /* 0076138d: ret  */ FN_RET(0x00761388); r_esp += 4; return;
}

void f_0076139c(void) /* sub_76139C */
{
    FN_ENTER(0x0076139c);
    /* 0076139c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076139d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076139f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007613a1: call 0x7613c0 */ r_esp -= 4; W32(r_esp, 0x7613a6u); f_007613c0();
    /* 007613a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007613aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007613ac: jne 0x7613b2 */ if (!fZ) goto L_007613b2;
L_007613ae:; BB(0x007613ae);
    /* 007613ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007613af: ret 4 */ FN_RET(0x0076139c); r_esp += 8; return;
L_007613b2:; BB(0x007613b2);
    /* 007613b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007613b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7613b8u); f_005c2f74();
    /* 007613b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007613b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007613ba: ret 4 */ FN_RET(0x0076139c); r_esp += 8; return;
}

void f_007613c0(void) /* sub_7613C0 */
{
    FN_ENTER(0x007613c0);
    /* 007613c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007613c1: mov ebp, esp */ r_ebp = r_esp;
    /* 007613c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007613c5: push 0x8f35e0 */ { u32 v = 0x8f35e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007613ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007613d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007613d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007613d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007613db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007613de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007613e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007613e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007613e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007613ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007613f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007613f4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007613f7: mov dword ptr [eax], 0xb42f48 */ W32((u32)(r_eax), 0xb42f48u);
    /* 007613fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007613ff: je 0x761410 */ if (fZ) goto L_00761410;
L_00761401:; BB(0x00761401);
    /* 00761401: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x761406u); f_0073d160();
    /* 00761406: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761409: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00761410:; BB(0x00761410);
    /* 00761410: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761416: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x76141bu); f_007180a8();
    /* 0076141b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761421: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x761426u); f_00718108();
    /* 00761426: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076142c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x761431u); f_0068d5a8();
    /* 00761431: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761436: je 0x76143f */ if (fZ) goto L_0076143f;
L_00761438:; BB(0x00761438);
    /* 00761438: mov ecx, eax */ r_ecx = r_eax;
    /* 0076143a: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x76143fu); f_00693728();
L_0076143f:; BB(0x0076143f);
    /* 0076143f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761442: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00761445: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761448: jne 0x76145d */ if (!fZ) goto L_0076145d;
L_0076144a:; BB(0x0076144a);
    /* 0076144a: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0076144c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761452: call 0x7181ec */ r_esp -= 4; W32(r_esp, 0x761457u); f_007181ec();
    /* 00761457: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076145a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0076145d:; BB(0x0076145d);
    /* 0076145d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00761464: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x761469u); f_008171e8();
    /* 00761469: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076146c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00761473: mov esp, ebp */ r_esp = r_ebp;
    /* 00761475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00761476: ret  */ FN_RET(0x007613c0); r_esp += 4; return;
}

void f_00761478(void) /* sub_761478 */
{
    FN_ENTER(0x00761478);
    /* 00761478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761479: mov ebp, esp */ r_ebp = r_esp;
    /* 0076147b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076147d: push 0x8f35fc */ { u32 v = 0x8f35fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00761482: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00761488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761489: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00761490: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00761493: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00761496: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00761499: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076149c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076149f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007614a2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007614a5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7614aau); f_008193cc();
    /* 007614aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007614b1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007614b4: movsx ecx, byte ptr [0xaca904] */ r_ecx = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 007614bb: mov dword ptr [edx], 0xb42f48 */ W32((u32)(r_edx), 0xb42f48u);
    /* 007614c1: mov eax, dword ptr [0x9f5900] */ r_eax = R32((u32)(0x9f5900u));
    /* 007614c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007614c7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007614ca: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7614cfu); f_0068d5a8();
    /* 007614cf: mov ebx, eax */ r_ebx = r_eax;
    /* 007614d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007614d4: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x7614d9u); f_00816d30();
    /* 007614d9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007614db: je 0x7614eb */ if (fZ) goto L_007614eb;
L_007614dd:; BB(0x007614dd);
    /* 007614dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007614df: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7614e4u); f_006936b4();
    /* 007614e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007614e5: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7614eau); f_00816cb8();
    /* 007614ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007614eb:; BB(0x007614eb);
    /* 007614eb: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 007614f0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7614f5u); f_0079317c();
    /* 007614f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007614f6: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7614fbu); f_00816cb8();
    /* 007614fb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761501: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761504: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x761509u); f_0073cd8c();
    /* 00761509: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076150c: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00761511: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00761514: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x761519u); f_0073ec50();
    /* 00761519: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076151c: push 0x43820000 */ { u32 v = 0x43820000u; r_esp -= 4; W32(r_esp, v); }
    /* 00761521: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761524: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00761527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761528: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0076152d: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x761532u); f_0073ce70();
    /* 00761532: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761535: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00761538: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x76153du); f_0073d170();
    /* 0076153d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761543: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x761548u); f_0068d5a8();
    /* 00761548: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076154b: je 0x761554 */ if (fZ) goto L_00761554;
L_0076154d:; BB(0x0076154d);
    /* 0076154d: mov ecx, eax */ r_ecx = r_eax;
    /* 0076154f: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x761554u); f_006936ec();
L_00761554:; BB(0x00761554);
    /* 00761554: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076155a: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x76155fu); f_007181b8();
    /* 0076155f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761565: call 0x7180d8 */ r_esp -= 4; W32(r_esp, 0x76156au); f_007180d8();
    /* 0076156a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076156c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x761571u); f_00791748();
    /* 00761571: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00761574: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761577: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076157a: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00761581: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00761584: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076158b: mov esp, ebp */ r_esp = r_ebp;
    /* 0076158d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076158e: ret 4 */ FN_RET(0x00761478); r_esp += 8; return;
}

void f_00761594(void) /* sub_761594 */
{
    FN_ENTER(0x00761594);
    /* 00761594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761595: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00761597: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0076159a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076159c: jb 0x7615f2 */ if (fC) goto L_007615f2;
L_0076159e:; BB(0x0076159e);
    /* 0076159e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007615a1: ja 0x7615f2 */ if ((!fC&&!fZ)) goto L_007615f2;
L_007615a3:; BB(0x007615a3);
    /* 007615a3: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007615a6: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7615abu); f_0073d114();
    /* 007615ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007615ad: je 0x7615c2 */ if (fZ) goto L_007615c2;
L_007615af:; BB(0x007615af);
    /* 007615af: call 0x826194 */ r_esp -= 4; W32(r_esp, 0x7615b4u); f_00826194();
    /* 007615b4: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x7615b9u); f_00717da4();
    /* 007615b9: mov dword ptr [ebp + 0x1c], 3 */ W32((u32)(r_ebp+0x1cu), 0x3u);
    /* 007615c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007615c1: ret  */ FN_RET(0x00761594); r_esp += 4; return;
L_007615c2:; BB(0x007615c2);
    /* 007615c2: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007615c5: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7615cau); f_0073ce50();
    /* 007615ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007615cc: je 0x7615f2 */ if (fZ) goto L_007615f2;
L_007615ce:; BB(0x007615ce);
    /* 007615ce: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007615d1: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7615d6u); f_0073d134();
    /* 007615d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007615d8: je 0x7615e1 */ if (fZ) goto L_007615e1;
L_007615da:; BB(0x007615da);
    /* 007615da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007615dd: jne 0x7615f2 */ if (!fZ) goto L_007615f2;
L_007615df:; BB(0x007615df);
    /* 007615df: jmp 0x7615f4 */ goto L_007615f4;
L_007615e1:; BB(0x007615e1);
    /* 007615e1: call 0x826284 */ r_esp -= 4; W32(r_esp, 0x7615e6u); f_00826284();
    /* 007615e6: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x7615ebu); f_00717da4();
    /* 007615eb: mov dword ptr [ebp + 0x1c], 2 */ W32((u32)(r_ebp+0x1cu), 0x2u);
L_007615f2:; BB(0x007615f2);
    /* 007615f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007615f3: ret  */ FN_RET(0x00761594); r_esp += 4; return;
L_007615f4:; BB(0x007615f4);
    /* 007615f4: call 0x826194 */ r_esp -= 4; W32(r_esp, 0x7615f9u); f_00826194();
    /* 007615f9: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x7615feu); f_00717da4();
    /* 007615fe: mov dword ptr [ebp + 0x1c], 3 */ W32((u32)(r_ebp+0x1cu), 0x3u);
    /* 00761605: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00761606: ret  */ FN_RET(0x00761594); r_esp += 4; return;
}

void f_00761608(void) /* sub_761608 */
{
    FN_ENTER(0x00761608);
    /* 00761608: mov dword ptr [0xa9ad9c], 0x3f800000 */ W32((u32)(0xa9ad9cu), 0x3f800000u);
    /* 00761612: mov dword ptr [0xa9ada0], 0x41000000 */ W32((u32)(0xa9ada0u), 0x41000000u);
    /* 0076161c: mov dword ptr [0xa9ada4], 0x3fc00000 */ W32((u32)(0xa9ada4u), 0x3fc00000u);
    /* 00761626: ret  */ FN_RET(0x00761608); r_esp += 4; return;
}

void f_00761628(void) /* sub_761628 */
{
    FN_ENTER(0x00761628);
    /* 00761628: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761629: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076162b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076162d: call 0x76164c */ r_esp -= 4; W32(r_esp, 0x761632u); f_0076164c();
    /* 00761632: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00761636: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761638: jne 0x76163e */ if (!fZ) goto L_0076163e;
L_0076163a:; BB(0x0076163a);
    /* 0076163a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076163b: ret 4 */ FN_RET(0x00761628); r_esp += 8; return;
L_0076163e:; BB(0x0076163e);
    /* 0076163e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076163f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x761644u); f_005c2f74();
    /* 00761644: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761645: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00761646: ret 4 */ FN_RET(0x00761628); r_esp += 8; return;
}

void f_0076164c(void) /* sub_76164C */
{
    FN_ENTER(0x0076164c);
    /* 0076164c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076164d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076164f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00761651: push 0x8f3618 */ { u32 v = 0x8f3618u; r_esp -= 4; W32(r_esp, v); }
    /* 00761656: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076165c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076165d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00761664: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00761667: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076166a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076166d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00761670: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00761673: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00761676: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076167d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761680: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761683: mov dword ptr [eax], 0xb43050 */ W32((u32)(r_eax), 0xb43050u);
    /* 00761689: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x76168eu); f_00857e98();
    /* 0076168e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761691: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761694: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x761699u); f_00857e98();
    /* 00761699: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076169c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076169f: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007616a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007616a4: je 0x7616bd */ if (fZ) goto L_007616bd;
L_007616a6:; BB(0x007616a6);
    /* 007616a6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007616aa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007616af: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007616b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007616b6: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_007616bd:; BB(0x007616bd);
    /* 007616bd: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007616c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007616c2: je 0x7616d3 */ if (fZ) goto L_007616d3;
L_007616c4:; BB(0x007616c4);
    /* 007616c4: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7616c9u); f_0073d160();
    /* 007616c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007616cc: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_007616d3:; BB(0x007616d3);
    /* 007616d3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007616d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007616d8: je 0x7616e9 */ if (fZ) goto L_007616e9;
L_007616da:; BB(0x007616da);
    /* 007616da: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7616dfu); f_007127b0();
    /* 007616df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007616e2: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_007616e9:; BB(0x007616e9);
    /* 007616e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007616f0: mov ecx, eax */ r_ecx = r_eax;
    /* 007616f2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7616f7u); f_008171e8();
    /* 007616f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007616fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00761701: mov esp, ebp */ r_esp = r_ebp;
    /* 00761703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00761704: ret  */ FN_RET(0x0076164c); r_esp += 4; return;
}

void f_00761708(void) /* sub_761708 */
{
    FN_ENTER(0x00761708);
    /* 00761708: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761709: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076170b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076170d: call 0x76172c */ r_esp -= 4; W32(r_esp, 0x761712u); f_0076172c();
    /* 00761712: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00761716: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761718: jne 0x76171e */ if (!fZ) goto L_0076171e;
L_0076171a:; BB(0x0076171a);
    /* 0076171a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076171b: ret 4 */ FN_RET(0x00761708); r_esp += 8; return;
L_0076171e:; BB(0x0076171e);
    /* 0076171e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076171f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x761724u); f_005c2f74();
    /* 00761724: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761725: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00761726: ret 4 */ FN_RET(0x00761708); r_esp += 8; return;
}

void f_0076172c(void) /* sub_76172C */
{
    FN_ENTER(0x0076172c);
    /* 0076172c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076172d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076172f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00761731: push 0x8f3634 */ { u32 v = 0x8f3634u; r_esp -= 4; W32(r_esp, v); }
    /* 00761736: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076173c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076173d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00761744: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00761747: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076174a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076174d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00761750: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00761753: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00761756: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076175d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761760: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761763: mov dword ptr [eax], 0xb43060 */ W32((u32)(r_eax), 0xb43060u);
    /* 00761769: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x76176eu); f_00857e98();
    /* 0076176e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761771: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761774: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x761779u); f_00857e98();
    /* 00761779: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076177c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076177f: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00761782: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761784: je 0x76179d */ if (fZ) goto L_0076179d;
L_00761786:; BB(0x00761786);
    /* 00761786: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076178a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076178f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00761793: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761796: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0076179d:; BB(0x0076179d);
    /* 0076179d: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007617a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007617a2: je 0x7617b3 */ if (fZ) goto L_007617b3;
L_007617a4:; BB(0x007617a4);
    /* 007617a4: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7617a9u); f_0073d160();
    /* 007617a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007617ac: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_007617b3:; BB(0x007617b3);
    /* 007617b3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007617b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007617b8: je 0x7617c9 */ if (fZ) goto L_007617c9;
L_007617ba:; BB(0x007617ba);
    /* 007617ba: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7617bfu); f_007127b0();
    /* 007617bf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007617c2: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_007617c9:; BB(0x007617c9);
    /* 007617c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007617d0: mov ecx, eax */ r_ecx = r_eax;
    /* 007617d2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7617d7u); f_008171e8();
    /* 007617d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007617da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007617e1: mov esp, ebp */ r_esp = r_ebp;
    /* 007617e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007617e4: ret  */ FN_RET(0x0076172c); r_esp += 4; return;
}

void f_007617e8(void) /* sub_7617E8 */
{
    FN_ENTER(0x007617e8);
    /* 007617e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007617e9: mov ebp, esp */ r_ebp = r_esp;
    /* 007617eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007617ed: push 0x8f3650 */ { u32 v = 0x8f3650u; r_esp -= 4; W32(r_esp, v); }
    /* 007617f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007617f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007617f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00761800: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00761801: mov eax, 0x1140 */ r_eax = 0x1140u;
    /* 00761806: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x76180bu); f_00858020();
    /* 0076180b: mov ecx, dword ptr [esp + 0x1140] */ r_ecx = R32((u32)(r_esp+0x1140u));
    /* 00761812: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00761815: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00761818: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076181b: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076181e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761821: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00761824: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x761829u); f_008193cc();
    /* 00761829: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00761830: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761833: mov dword ptr [edx], 0xb43050 */ W32((u32)(r_edx), 0xb43050u);
    /* 00761839: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076183b: mov esi, dword ptr [0x9f5904] */ r_esi = R32((u32)(0x9f5904u));
    /* 00761841: mov dword ptr [0xa3a940], eax */ W32((u32)(0xa3a940u), r_eax);
    /* 00761846: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00761848: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0076184b: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0076184e: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 00761851: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x761856u); f_008581c5();
    /* 00761856: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761859: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0076185b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0076185e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x761863u); f_008581c5();
    /* 00761863: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761866: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761869: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0076186c: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0076186f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00761871: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00761873: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00761876: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00761879: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0076187c: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0076187f: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00761882: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00761885: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00761888: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0076188b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0076188e: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00761891: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00761894: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00761897: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0076189a: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0076189d: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 007618a0: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 007618a3: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 007618a6: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 007618a9: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 007618ac: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 007618af: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 007618b2: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 007618b5: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 007618b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007618bb: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007618be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007618c0: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 007618c2: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 007618c5: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 007618c8: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 007618cb: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 007618ce: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 007618d1: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007618d4: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 007618d7: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007618da: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 007618dd: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 007618e0: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 007618e3: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x7618e8u); f_0082d2f8();
    /* 007618e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007618ea: je 0x761952 */ if (fZ) goto L_00761952;
L_007618ec:; BB(0x007618ec);
    /* 007618ec: call 0x82d300 */ r_esp -= 4; W32(r_esp, 0x7618f1u); f_0082d300();
    /* 007618f1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007618f4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007618f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007618f7: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007618fa: call 0x857f98 */ r_esp -= 4; W32(r_esp, 0x7618ffu); f_00857f98();
    /* 007618ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761902: call 0x82d308 */ r_esp -= 4; W32(r_esp, 0x761907u); f_0082d308();
    /* 00761907: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076190a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0076190c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076190d: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761910: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x761915u); f_00858900();
    /* 00761915: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761918: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076191b: call 0x761c48 */ r_esp -= 4; W32(r_esp, 0x761920u); f_00761c48();
    /* 00761920: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761923: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00761926: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00761928: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761929: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 0076192c: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 0076192f: mov ecx, eax */ r_ecx = r_eax;
    /* 00761931: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x761936u); f_00736510();
L_00761936:; BB(0x00761936);
    /* 00761936: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761939: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076193c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076193f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00761942: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00761945: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076194c: mov esp, ebp */ r_esp = r_ebp;
    /* 0076194e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076194f: ret 4 */ FN_RET(0x007617e8); r_esp += 8; return;
L_00761952:; BB(0x00761952);
    /* 00761952: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761955: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761958: push 0x974ec8 */ { u32 v = 0x974ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076195d: call 0x82d4c4 */ r_esp -= 4; W32(r_esp, 0x761962u); f_0082d4c4();
    /* 00761962: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761965: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00761968: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761969: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x76196eu); f_00858009();
    /* 0076196e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761971: mov esi, ebx */ r_esi = r_ebx;
    /* 00761973: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00761975: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00761977: jle 0x761993 */ if ((fZ||fS!=fO)) goto L_00761993;
L_00761979:; BB(0x00761979);
    /* 00761979: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0076197c: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076197f: je 0x761989 */ if (fZ) goto L_00761989;
L_00761981:; BB(0x00761981);
    /* 00761981: mov ecx, esi */ r_ecx = r_esi;
    /* 00761983: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00761986: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
L_00761989:; BB(0x00761989);
    /* 00761989: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076198c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076198f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761991: jl 0x761979 */ if ((fS!=fO)) goto L_00761979;
L_00761993:; BB(0x00761993);
    /* 00761993: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761996: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761999: push 0x8f8808 */ { u32 v = 0x8f8808u; r_esp -= 4; W32(r_esp, v); }
    /* 0076199e: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x7619a3u); f_0082d3c0();
    /* 007619a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007619a6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007619a9: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007619ac: movsx ecx, byte ptr [edx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 007619af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007619b1: jne 0x761a18 */ if (!fZ) goto L_00761a18;
L_007619b3:; BB(0x007619b3);
    /* 007619b3: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x7619b8u); f_00762d2c();
    /* 007619b8: mov edx, eax */ r_edx = r_eax;
    /* 007619ba: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007619bd: jge 0x761ae0 */ if ((fS==fO)) goto L_00761ae0;
L_007619c3:; BB(0x007619c3);
    /* 007619c3: mov ecx, edx */ r_ecx = r_edx;
    /* 007619c5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007619c7: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007619ca: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007619cd: jl 0x761acc */ if ((fS!=fO)) goto L_00761acc;
L_007619d3:; BB(0x007619d3);
    /* 007619d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007619d6: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
    /* 007619d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007619db: mov word ptr [ebx + edx*2], ax */ W16((u32)(r_ebx+r_edx*2), (u16)r_eax);
    /* 007619df: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007619e2: mov edi, dword ptr [esi + 0x20] */ r_edi = R32((u32)(r_esi+0x20u));
    /* 007619e5: mov word ptr [edi + edx*2 + 2], ax */ W16((u32)(r_edi+r_edx*2+0x2u), (u16)r_eax);
    /* 007619ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007619ed: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 007619f0: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 007619f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007619f8: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 007619fb: mov word ptr [ecx + edx*2 + 6], ax */ W16((u32)(r_ecx+r_edx*2+0x6u), (u16)r_eax);
    /* 00761a00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761a03: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00761a06: mov word ptr [ecx + edx*2 + 8], ax */ W16((u32)(r_ecx+r_edx*2+0x8u), (u16)r_eax);
    /* 00761a0b: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00761a0e: cmp edx, 0x2a */ {  u32 a = r_edx; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761a11: jl 0x7619d3 */ if ((fS!=fO)) goto L_007619d3;
L_00761a13:; BB(0x00761a13);
    /* 00761a13: jmp 0x761acc */ goto L_00761acc;
L_00761a18:; BB(0x00761a18);
    /* 00761a18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00761a1a: mov dword ptr [ebp - 0x1150], eax */ W32((u32)(r_ebp+0xffffeeb0u), r_eax);
    /* 00761a20: mov dword ptr [ebp - 0x114c], eax */ W32((u32)(r_ebp+0xffffeeb4u), r_eax);
    /* 00761a26: mov dword ptr [ebp - 0x1148], eax */ W32((u32)(r_ebp+0xffffeeb8u), r_eax);
    /* 00761a2c: mov dword ptr [ebp - 0x1144], eax */ W32((u32)(r_ebp+0xffffeebcu), r_eax);
    /* 00761a32: mov dword ptr [ebp - 0x1140], eax */ W32((u32)(r_ebp+0xffffeec0u), r_eax);
    /* 00761a38: mov dword ptr [ebp - 0x113c], eax */ W32((u32)(r_ebp+0xffffeec4u), r_eax);
    /* 00761a3e: mov dword ptr [ebp - 0x1138], eax */ W32((u32)(r_ebp+0xffffeec8u), r_eax);
    /* 00761a44: mov dword ptr [ebp - 0x1134], eax */ W32((u32)(r_ebp+0xffffeeccu), r_eax);
    /* 00761a4a: mov dword ptr [ebp - 0x1130], eax */ W32((u32)(r_ebp+0xffffeed0u), r_eax);
    /* 00761a50: mov dword ptr [ebp - 0x112c], eax */ W32((u32)(r_ebp+0xffffeed4u), r_eax);
    /* 00761a56: mov dword ptr [ebp - 0x1128], eax */ W32((u32)(r_ebp+0xffffeed8u), r_eax);
    /* 00761a5c: mov dword ptr [ebp - 0x1124], eax */ W32((u32)(r_ebp+0xffffeedcu), r_eax);
    /* 00761a62: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761a65: lea edx, [ebp - 0x1150] */ r_edx = (u32)(r_ebp+0xffffeeb0u);
    /* 00761a6b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00761a6d: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761a70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00761a71: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x761a76u); f_00858618();
    /* 00761a76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761a79: lea eax, [ebp - 0x1150] */ r_eax = (u32)(r_ebp+0xffffeeb0u);
    /* 00761a7f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00761a81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761a82: lea ecx, [ebp - 0x1120] */ r_ecx = (u32)(r_ebp+0xffffeee0u);
    /* 00761a88: call 0x763fd0 */ r_esp -= 4; W32(r_esp, 0x761a8du); f_00763fd0();
    /* 00761a8d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761a90: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00761a92: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761a95: lea ecx, [ebp - 0x1120] */ r_ecx = (u32)(r_ebp+0xffffeee0u);
    /* 00761a9b: call 0x763e70 */ r_esp -= 4; W32(r_esp, 0x761aa0u); f_00763e70();
    /* 00761aa0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761aa3: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00761aa6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00761aa8:; BB(0x00761aa8);
    /* 00761aa8: movsx eax, byte ptr [ecx + edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_edx));
    /* 00761aac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761aae: je 0x7619b3 */ if (fZ) goto L_007619b3;
L_00761ab4:; BB(0x00761ab4);
    /* 00761ab4: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00761ab9: jae 0x761b95 */ if (!fC) goto L_00761b95;
L_00761abf:; BB(0x00761abf);
    /* 00761abf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00761ac2: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761ac5: jl 0x761aa8 */ if ((fS!=fO)) goto L_00761aa8;
L_00761ac7:; BB(0x00761ac7);
    /* 00761ac7: jmp 0x7619b3 */ goto L_007619b3;
L_00761acc:; BB(0x00761acc);
    /* 00761acc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761acf: mov esi, dword ptr [ecx + 0x20] */ r_esi = R32((u32)(r_ecx+0x20u));
    /* 00761ad2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00761ad4: mov word ptr [esi + edx*2], bx */ W16((u32)(r_esi+r_edx*2), (u16)r_ebx);
    /* 00761ad8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00761adb: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761ade: jl 0x761acc */ if ((fS!=fO)) goto L_00761acc;
L_00761ae0:; BB(0x00761ae0);
    /* 00761ae0: call 0x762d00 */ r_esp -= 4; W32(r_esp, 0x761ae5u); f_00762d00();
    /* 00761ae5: mov edx, eax */ r_edx = r_eax;
    /* 00761ae7: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761aea: jge 0x761b45 */ if ((fS==fO)) goto L_00761b45;
L_00761aec:; BB(0x00761aec);
    /* 00761aec: mov ecx, edx */ r_ecx = r_edx;
    /* 00761aee: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00761af0: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00761af3: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761af6: jl 0x761b33 */ if ((fS!=fO)) goto L_00761b33;
L_00761af8:; BB(0x00761af8);
    /* 00761af8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761afb: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00761afe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00761b00: mov byte ptr [edx + ebx], al */ W8((u32)(r_edx+r_ebx), (u8)r_eax);
    /* 00761b03: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b06: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 00761b09: mov byte ptr [edx + edi + 1], al */ W8((u32)(r_edx+r_edi+0x1u), (u8)r_eax);
    /* 00761b0d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b10: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00761b13: mov byte ptr [edx + ecx + 2], al */ W8((u32)(r_edx+r_ecx+0x2u), (u8)r_eax);
    /* 00761b17: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b1a: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00761b1d: mov byte ptr [edx + ecx + 3], al */ W8((u32)(r_edx+r_ecx+0x3u), (u8)r_eax);
    /* 00761b21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b24: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00761b27: mov byte ptr [edx + ecx + 4], al */ W8((u32)(r_edx+r_ecx+0x4u), (u8)r_eax);
    /* 00761b2b: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00761b2e: cmp edx, 0x2a */ {  u32 a = r_edx; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761b31: jl 0x761af8 */ if ((fS!=fO)) goto L_00761af8;
L_00761b33:; BB(0x00761b33);
    /* 00761b33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b36: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00761b39: mov byte ptr [edx + ebx], 0 */ W8((u32)(r_edx+r_ebx), 0x0u);
    /* 00761b3d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00761b40: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00761b43: jl 0x761b33 */ if ((fS!=fO)) goto L_00761b33;
L_00761b45:; BB(0x00761b45);
    /* 00761b45: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b48: call 0x761c48 */ r_esp -= 4; W32(r_esp, 0x761b4du); f_00761c48();
    /* 00761b4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b50: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00761b53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00761b55: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00761b58: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00761b5b: call 0x761bc0 */ r_esp -= 4; W32(r_esp, 0x761b60u); f_00761bc0();
    /* 00761b60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00761b63: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00761b66: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00761b69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761b6b: je 0x761b86 */ if (fZ) goto L_00761b86;
L_00761b6d:; BB(0x00761b6d);
    /* 00761b6d: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 00761b70: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00761b73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761b75: je 0x761b86 */ if (fZ) goto L_00761b86;
L_00761b77:; BB(0x00761b77);
    /* 00761b77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00761b79: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00761b7c: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x761b81u); f_00736510();
    /* 00761b81: jmp 0x761936 */ goto L_00761936;
L_00761b86:; BB(0x00761b86);
    /* 00761b86: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00761b88: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00761b8b: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x761b90u); f_00736510();
    /* 00761b90: jmp 0x761936 */ goto L_00761936;
L_00761b95:; BB(0x00761b95);
    /* 00761b95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00761b97: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00761b99: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00761b9c: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00761b9f: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00761ba2: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00761ba5: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00761ba8: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00761bab: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00761bae: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00761bb1: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00761bb4: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00761bb7: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00761bba: jmp 0x7619b3 */ goto L_007619b3;
}

void f_00761bc0(void) /* sub_761BC0 */
{
    FN_ENTER(0x00761bc0);
    /* 00761bc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00761bc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761bc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761bc3: mov edi, ecx */ r_edi = r_ecx;
    /* 00761bc5: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00761bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761bca: je 0x761c43 */ if (fZ) goto L_00761c43;
L_00761bcc:; BB(0x00761bcc);
    /* 00761bcc: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x761bd1u); f_00762d2c();
    /* 00761bd1: lea eax, [eax + eax + 6] */ r_eax = (u32)(r_eax+r_eax+0x6u);
    /* 00761bd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761bd6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x761bdbu); f_008581c5();
    /* 00761bdb: mov esi, eax */ r_esi = r_eax;
    /* 00761bdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761be0: mov ebp, dword ptr [edi + 0x20] */ r_ebp = R32((u32)(r_edi+0x20u));
    /* 00761be3: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00761be7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761be9: jne 0x761c00 */ if (!fZ) goto L_00761c00;
L_00761beb:; BB(0x00761beb);
    /* 00761beb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00761bed: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761bef: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761bf4u); f_00792fe8();
    /* 00761bf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761bf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761bf6: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x761bfbu); f_00857fed();
    /* 00761bfb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761bfe: jmp 0x761c0f */ goto L_00761c0f;
L_00761c00:; BB(0x00761c00);
    /* 00761c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761c01: push 0x974ebc */ { u32 v = 0x974ebcu; r_esp -= 4; W32(r_esp, v); }
    /* 00761c06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761c07: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x761c0cu); f_00857e29();
    /* 00761c0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00761c0f:; BB(0x00761c0f);
    /* 00761c0f: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00761c12: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00761c15: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 00761c18: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761c1a: je 0x761c37 */ if (fZ) goto L_00761c37;
L_00761c1c:; BB(0x00761c1c);
    /* 00761c1c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761c1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00761c21: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x761c26u); f_0072db60();
    /* 00761c26: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00761c2a: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00761c30: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00761c34: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
L_00761c37:; BB(0x00761c37);
    /* 00761c37: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x761c3cu); f_00736458();
    /* 00761c3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761c3d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x761c42u); f_00857e98();
    /* 00761c42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00761c43:; BB(0x00761c43);
    /* 00761c43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00761c44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00761c45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00761c46: ret  */ FN_RET(0x00761bc0); r_esp += 4; return;
}

void f_00761c48(void) /* sub_761C48 */
{
    FN_ENTER(0x00761c48);
    /* 00761c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00761c49: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00761c4c: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x761c51u); f_0082d2f8();
    /* 00761c51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761c53: je 0x761cba */ if (fZ) goto L_00761cba;
L_00761c55:; BB(0x00761c55);
    /* 00761c55: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c57: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c59: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761c5eu); f_00792fe8();
    /* 00761c5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761c61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c63: push 0x974e08 */ { u32 v = 0x974e08u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c68: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x761c6du); f_0073566c();
    /* 00761c6d: mov esi, eax */ r_esi = r_eax;
    /* 00761c6f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761c72: push 0x974e00 */ { u32 v = 0x974e00u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c77: mov ecx, esi */ r_ecx = r_esi;
    /* 00761c79: call 0x712c14 */ r_esp -= 4; W32(r_esp, 0x761c7eu); f_00712c14();
    /* 00761c7e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c80: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c82: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761c87u); f_00792fe8();
    /* 00761c87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761c8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c8c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00761c8e: mov ecx, esi */ r_ecx = r_esi;
    /* 00761c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761c91: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x761c96u); f_00735c90();
    /* 00761c96: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c98: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761c9a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761c9fu); f_00792fe8();
    /* 00761c9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761ca2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00761ca4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00761ca6: mov ecx, esi */ r_ecx = r_esi;
    /* 00761ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761ca9: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x761caeu); f_00735c90();
    /* 00761cae: mov ecx, esi */ r_ecx = r_esi;
    /* 00761cb0: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x761cb5u); f_00736458();
    /* 00761cb5: jmp 0x761d8a */ goto L_00761d8a;
L_00761cba:; BB(0x00761cba);
    /* 00761cba: mov eax, dword ptr [0xa96968] */ r_eax = R32((u32)(0xa96968u));
    /* 00761cbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761cc1: je 0x761cd5 */ if (fZ) goto L_00761cd5;
L_00761cc3:; BB(0x00761cc3);
    /* 00761cc3: mov dword ptr [esp + 4], 0x43a50000 */ W32((u32)(r_esp+0x4u), 0x43a50000u);
    /* 00761ccb: mov eax, 0x43520000 */ r_eax = 0x43520000u;
    /* 00761cd0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00761cd3: jmp 0x761ce5 */ goto L_00761ce5;
L_00761cd5:; BB(0x00761cd5);
    /* 00761cd5: mov dword ptr [esp + 4], 0x43960000 */ W32((u32)(r_esp+0x4u), 0x43960000u);
    /* 00761cdd: mov eax, 0x43520000 */ r_eax = 0x43520000u;
    /* 00761ce2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00761ce5:; BB(0x00761ce5);
    /* 00761ce5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00761ce7: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761ce9: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761ceeu); f_00792fe8();
    /* 00761cee: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00761cf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00761cf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761cf5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00761cf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00761cf8: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x761cfdu); f_0073566c();
    /* 00761cfd: mov esi, eax */ r_esi = r_eax;
    /* 00761cff: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761d02: push 0x974e10 */ { u32 v = 0x974e10u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d07: mov ecx, esi */ r_ecx = r_esi;
    /* 00761d09: call 0x712c14 */ r_esp -= 4; W32(r_esp, 0x761d0eu); f_00712c14();
    /* 00761d0e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d10: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d12: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761d17u); f_00792fe8();
    /* 00761d17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761d1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d1c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00761d1e: mov ecx, esi */ r_ecx = r_esi;
    /* 00761d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761d21: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x761d26u); f_00735c90();
    /* 00761d26: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d28: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d2a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761d2fu); f_00792fe8();
    /* 00761d2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761d32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d34: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00761d36: mov ecx, esi */ r_ecx = r_esi;
    /* 00761d38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761d39: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x761d3eu); f_00735c90();
    /* 00761d3e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d40: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d42: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761d47u); f_00792fe8();
    /* 00761d47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761d4a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d4c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00761d4e: mov ecx, esi */ r_ecx = r_esi;
    /* 00761d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761d51: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x761d56u); f_00735c90();
    /* 00761d56: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d58: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d5a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x761d5fu); f_00792fe8();
    /* 00761d5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761d62: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d64: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00761d66: mov ecx, esi */ r_ecx = r_esi;
    /* 00761d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761d69: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x761d6eu); f_00735c90();
    /* 00761d6e: push 0xffffcc33 */ { u32 v = 0xffffcc33u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d73: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d75: mov ecx, esi */ r_ecx = r_esi;
    /* 00761d77: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d79: push 0x974eb8 */ { u32 v = 0x974eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d7e: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x761d83u); f_00735db8();
    /* 00761d83: mov ecx, esi */ r_ecx = r_esi;
    /* 00761d85: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x761d8au); f_00736458();
L_00761d8a:; BB(0x00761d8a);
    /* 00761d8a: mov eax, esi */ r_eax = r_esi;
    /* 00761d8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00761d8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00761d90: ret  */ FN_RET(0x00761c48); r_esp += 4; return;
}

void f_00761d94(void) /* sub_761D94 */
{
    FN_ENTER(0x00761d94);
    /* 00761d94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00761d95: mov ebp, esp */ r_ebp = r_esp;
    /* 00761d97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00761d99: push 0x8f3678 */ { u32 v = 0x8f3678u; r_esp -= 4; W32(r_esp, v); }
    /* 00761d9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00761da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761da5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00761dac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00761daf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00761db2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00761db5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00761db8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00761dbb: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00761dbf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00761dc2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00761dc5: ja 0x7620cd */ if ((!fC&&!fZ)) goto L_007620cd;
L_00761dcb:; BB(0x00761dcb);
    /* 00761dcb: mov eax, dword ptr [eax*4 + 0x974e18] */ r_eax = R32((u32)(r_eax*4+0x974e18u));
    /* 00761dd2: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x00761d94); r_esp += 4; return;
}

void f_00761dd4(void)
{
    FN_ENTER(0x00761dd4);
    /* 00761dd4: mov edx, ecx */ r_edx = r_ecx;
    /* 00761dd6: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00761dda: mov dword ptr [0xa3a940], 1 */ W32((u32)(0xa3a940u), 0x1u);
    /* 00761de4: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761de9: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 00761ded: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 00761df0: jmp 0x7620cd */ goto L_007620cd;
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x00761dd4); r_esp += 4; return;
}

void f_00761df5(void)
{
    FN_ENTER(0x00761df5);
    /* 00761df5: mov eax, ecx */ r_eax = r_ecx;
    /* 00761df7: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00761dfa: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x761dffu); f_0073ce50();
    /* 00761dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761e01: je 0x761e4d */ if (fZ) goto L_00761e4d;
L_00761e03:; BB(0x00761e03);
    /* 00761e03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761e06: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00761e09: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x761e0eu); f_0073d134();
    /* 00761e0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761e10: jne 0x761e27 */ if (!fZ) goto L_00761e27;
L_00761e12:; BB(0x00761e12);
    /* 00761e12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00761e15: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00761e19: mov byte ptr [edx + 0x1c], 9 */ W8((u32)(r_edx+0x1cu), 0x9u);
    /* 00761e1d: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00761e22: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 00761e25: jmp 0x761e2e */ goto L_00761e2e;
L_00761e27:; BB(0x00761e27);
    /* 00761e27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761e2a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00761e2e:; BB(0x00761e2e);
    /* 00761e2e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00761e31: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00761e34: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00761e38: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761e3d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00761e41: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00761e48: jmp 0x7620cd */ goto L_007620cd;
L_00761e4d:; BB(0x00761e4d);
    /* 00761e4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761e50: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00761e53: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x761e58u); f_0073d114();
    /* 00761e58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761e5a: je 0x7620cd */ if (fZ) goto L_007620cd;
L_00761e60:; BB(0x00761e60);
    /* 00761e60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00761e63: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00761e66: mov byte ptr [ecx + 0x1c], 1 */ W8((u32)(r_ecx+0x1cu), 0x1u);
    /* 00761e6a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00761e6e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761e73: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00761e77: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00761e7e: jmp 0x7620cd */ goto L_007620cd;
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x00761df5); r_esp += 4; return;
}

void f_00761e83(void)
{
    FN_ENTER(0x00761e83);
    /* 00761e83: call 0x762490 */ r_esp -= 4; W32(r_esp, 0x761e88u); f_00762490();
    /* 00761e88: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00761e8b: mov byte ptr [edx + 0x1c], 6 */ W8((u32)(r_edx+0x1cu), 0x6u);
    /* 00761e8f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00761e92: jmp 0x7620cd */ goto L_007620cd;
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x00761e83); r_esp += 4; return;
}

void f_00761e97(void)
{
    FN_ENTER(0x00761e97);
    /* 00761e97: mov eax, ecx */ r_eax = r_ecx;
    /* 00761e99: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00761e9c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00761e9f: jmp 0x761f30 */ goto L_00761f30;
L_00761f30:; BB(0x00761f30);
    /* 00761f30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761f35: jne 0x761f3e */ if (!fZ) goto L_00761f3e;
L_00761f37:; BB(0x00761f37);
    /* 00761f37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761f3a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00761f3e:; BB(0x00761f3e);
    /* 00761f3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f41: movzx eax, byte ptr [eax + 0x1d] */ r_eax = (u32)R8((u32)(r_eax+0x1du));
    /* 00761f45: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00761f47: je 0x761ffc */ if (fZ) goto L_00761ffc;
L_00761f4d:; BB(0x00761f4d);
    /* 00761f4d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f50: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00761f53: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761f55: je 0x76212c */ if (fZ) goto L_0076212c;
L_00761f5b:; BB(0x00761f5b);
    /* 00761f5b: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x761f60u); f_00762d2c();
    /* 00761f60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00761f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761f64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761f67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761f68: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761f6b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x761f70u); f_00857dec();
    /* 00761f70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761f73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761f76: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00761f79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00761f7b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00761f7d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00761f80: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00761f83: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00761f86: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00761f89: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00761f8c: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00761f8f: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00761f92: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00761f95: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00761f98: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00761f9b: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00761f9e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00761fa1: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 00761fa4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761fa6: je 0x762122 */ if (fZ) goto L_00762122;
L_00761fac:; BB(0x00761fac);
    /* 00761fac: call 0x762d00 */ r_esp -= 4; W32(r_esp, 0x761fb1u); f_00762d00();
    /* 00761fb1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00761fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761fb5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761fb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761fb9: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761fbc: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x761fc1u); f_00858618();
    /* 00761fc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761fc4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x761fc9u); f_006dc358();
    /* 00761fc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761fcc: je 0x7620e4 */ if (fZ) goto L_007620e4;
L_00761fd2:; BB(0x00761fd2);
    /* 00761fd2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761fd5: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00761fd8: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00761fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761fdd: je 0x7620e4 */ if (fZ) goto L_007620e4;
L_00761fe3:; BB(0x00761fe3);
    /* 00761fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761fe4: call 0x85a514 */ r_esp -= 4; W32(r_esp, 0x761fe9u); f_0085a514();
    /* 00761fe9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761fea: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00761fed: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00761ff0: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00761ff3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761ff5: jne 0x761fe3 */ if (!fZ) goto L_00761fe3;
L_00761ff7:; BB(0x00761ff7);
    /* 00761ff7: jmp 0x7620e4 */ goto L_007620e4;
L_00761ffc:; BB(0x00761ffc);
    /* 00761ffc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761ffe: je 0x7620cd */ if (fZ) goto L_007620cd;
L_00762004:; BB(0x00762004);
    /* 00762004: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762007: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076200a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076200e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00762013: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00762017: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0076201a: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 00762021: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x762026u); f_00712714();
    /* 00762026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00762028: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0076202b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0076202e: xor eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762031: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00762034: mov byte ptr [ecx + 0x1c], 1 */ W8((u32)(r_ecx+0x1cu), 0x1u);
    /* 00762038: jmp 0x7620cd */ goto L_007620cd;
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x00761e97); r_esp += 4; return;
L_007620e4:; BB(0x007620e4);
    /* 007620e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007620e7: call 0x761bc0 */ r_esp -= 4; W32(r_esp, 0x7620ecu); f_00761bc0();
    /* 007620ec: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007620ef: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 007620f2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007620f6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007620fb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007620ff: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762102: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 00762109: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x76210eu); f_00712714();
    /* 0076210e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00762110: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00762113: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00762116: xor eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762119: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0076211c: mov byte ptr [ecx + 0x1c], 1 */ W8((u32)(r_ecx+0x1cu), 0x1u);
    /* 00762120: jmp 0x7620cd */ goto L_007620cd;
L_00762122:; BB(0x00762122);
    /* 00762122: mov ebx, 0x8f8818 */ r_ebx = 0x8f8818u;
    /* 00762127: jmp 0x761fac */ goto L_00761fac;
L_0076212c:; BB(0x0076212c);
    /* 0076212c: mov ebx, 0x8f8818 */ r_ebx = 0x8f8818u;
    /* 00762131: jmp 0x761f5b */ goto L_00761f5b;
}

void f_00761ea4(void)
{
    FN_ENTER(0x00761ea4);
    /* 00761ea4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00761ea6: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00761ea9: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00761eac: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00761eaf: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00761eb2: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00761eb5: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x761ebau); f_007127c8();
    /* 00761eba: mov eax, ebx */ r_eax = r_ebx;
    /* 00761ebc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00761ebf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761ec1: je 0x761ed9 */ if (fZ) goto L_00761ed9;
L_00761ec3:; BB(0x00761ec3);
    /* 00761ec3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00761ec7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00761ecc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00761ed0: mov edx, ebx */ r_edx = r_ebx;
    /* 00761ed2: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
L_00761ed9:; BB(0x00761ed9);
    /* 00761ed9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00761ee0: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00761ee2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x761ee7u); f_005caba4();
    /* 00761ee7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00761eea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761eed: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00761ef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761ef2: je 0x762136 */ if (fZ) goto L_00762136;
L_00761ef8:; BB(0x00761ef8);
    /* 00761ef8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00761eff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00761f06: mov eax, ebx */ r_eax = r_ebx;
    /* 00761f08: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761f0b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761f0f: call 0x762224 */ r_esp -= 4; W32(r_esp, 0x761f14u); f_00762224();
    /* 00761f14: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00761f1b:; BB(0x00761f1b);
    /* 00761f1b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f1e: mov edx, ebx */ r_edx = r_ebx;
    /* 00761f20: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00761f23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00761f2a: mov eax, edx */ r_eax = r_edx;
    /* 00761f2c: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00761f30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761f35: jne 0x761f3e */ if (!fZ) goto L_00761f3e;
L_00761f37:; BB(0x00761f37);
    /* 00761f37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761f3a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00761f3e:; BB(0x00761f3e);
    /* 00761f3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f41: movzx eax, byte ptr [eax + 0x1d] */ r_eax = (u32)R8((u32)(r_eax+0x1du));
    /* 00761f45: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00761f47: je 0x761ffc */ if (fZ) goto L_00761ffc;
L_00761f4d:; BB(0x00761f4d);
    /* 00761f4d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00761f50: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00761f53: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761f55: je 0x76212c */ if (fZ) goto L_0076212c;
L_00761f5b:; BB(0x00761f5b);
    /* 00761f5b: call 0x762d2c */ r_esp -= 4; W32(r_esp, 0x761f60u); f_00762d2c();
    /* 00761f60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00761f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761f64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761f67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761f68: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761f6b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x761f70u); f_00857dec();
    /* 00761f70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761f73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761f76: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00761f79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00761f7b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00761f7d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00761f80: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00761f83: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00761f86: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00761f89: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00761f8c: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00761f8f: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00761f92: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00761f95: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00761f98: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00761f9b: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00761f9e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00761fa1: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 00761fa4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761fa6: je 0x762122 */ if (fZ) goto L_00762122;
L_00761fac:; BB(0x00761fac);
    /* 00761fac: call 0x762d00 */ r_esp -= 4; W32(r_esp, 0x761fb1u); f_00762d00();
    /* 00761fb1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00761fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761fb5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761fb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00761fb9: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761fbc: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x761fc1u); f_00858618();
    /* 00761fc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00761fc4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x761fc9u); f_006dc358();
    /* 00761fc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761fcc: je 0x7620e4 */ if (fZ) goto L_007620e4;
L_00761fd2:; BB(0x00761fd2);
    /* 00761fd2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00761fd5: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00761fd8: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00761fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761fdd: je 0x7620e4 */ if (fZ) goto L_007620e4;
L_00761fe3:; BB(0x00761fe3);
    /* 00761fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00761fe4: call 0x85a514 */ r_esp -= 4; W32(r_esp, 0x761fe9u); f_0085a514();
    /* 00761fe9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761fea: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00761fed: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00761ff0: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00761ff3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00761ff5: jne 0x761fe3 */ if (!fZ) goto L_00761fe3;
L_00761ff7:; BB(0x00761ff7);
    /* 00761ff7: jmp 0x7620e4 */ goto L_007620e4;
L_00761ffc:; BB(0x00761ffc);
    /* 00761ffc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00761ffe: je 0x7620cd */ if (fZ) goto L_007620cd;
L_00762004:; BB(0x00762004);
    /* 00762004: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00762007: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076200a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076200e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00762013: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00762017: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0076201a: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 00762021: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x762026u); f_00712714();
    /* 00762026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00762028: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0076202b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0076202e: xor eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762031: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00762034: mov byte ptr [ecx + 0x1c], 1 */ W8((u32)(r_ecx+0x1cu), 0x1u);
    /* 00762038: jmp 0x7620cd */ goto L_007620cd;
L_007620cd:; BB(0x007620cd);
    /* 007620cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007620d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007620d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007620d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007620d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007620e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007620e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007620e3: ret  */ FN_RET(0x00761ea4); r_esp += 4; return;
L_007620e4:; BB(0x007620e4);
    /* 007620e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007620e7: call 0x761bc0 */ r_esp -= 4; W32(r_esp, 0x7620ecu); f_00761bc0();
    /* 007620ec: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007620ef: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 007620f2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007620f6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007620fb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007620ff: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00762102: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 00762109: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x76210eu); f_00712714();
    /* 0076210e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00762110: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00762113: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00762116: xor eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00762119: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0076211c: mov byte ptr [ecx + 0x1c], 1 */ W8((u32)(r_ecx+0x1cu), 0x1u);
    /* 00762120: jmp 0x7620cd */ goto L_007620cd;
L_00762122:; BB(0x00762122);
    /* 00762122: mov ebx, 0x8f8818 */ r_ebx = 0x8f8818u;
    /* 00762127: jmp 0x761fac */ goto L_00761fac;
L_0076212c:; BB(0x0076212c);
    /* 0076212c: mov ebx, 0x8f8818 */ r_ebx = 0x8f8818u;
    /* 00762131: jmp 0x761f5b */ goto L_00761f5b;
L_00762136:; BB(0x00762136);
    /* 00762136: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00762138: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076213b: jmp 0x761f1b */ goto L_00761f1b;
}

