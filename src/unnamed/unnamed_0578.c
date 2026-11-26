#include "protos.h"

void f_00578078(void) /* sub_578078 */
{
    FN_ENTER(0x00578078);
    /* 00578078: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057807b: fld dword ptr [ecx + 0xc4] */ FPUSH(R_F32((u32)(r_ecx+0xc4u)));
    /* 00578081: fcom dword ptr [ecx + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xc0u))); 
    /* 00578087: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00578089: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057808a: ja 0x5780ab */ if ((!fC&&!fZ)) goto L_005780ab;
L_0057808c:; BB(0x0057808c);
    /* 0057808c: fld dword ptr [0x927320] */ FPUSH(R_F32((u32)(0x927320u)));
    /* 00578092: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00578094: fcom dword ptr [0x9272e0] */ fx_compare(ST(0), R_F32((u32)(0x9272e0u))); 
    /* 0057809a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057809c: fst dword ptr [ecx + 0xc4] */ W_F32((u32)(r_ecx+0xc4u), ST(0));
    /* 005780a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005780a3: ja 0x5780ab */ if ((!fC&&!fZ)) goto L_005780ab;
L_005780a5:; BB(0x005780a5);
    /* 005780a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005780a7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005780aa: ret  */ FN_RET(0x00578078); r_esp += 4; return;
L_005780ab:; BB(0x005780ab);
    /* 005780ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005780ad: fld dword ptr [0x9272dc] */ FPUSH(R_F32((u32)(0x9272dcu)));
    /* 005780b3: fld dword ptr [ecx + 0xc8] */ FPUSH(R_F32((u32)(r_ecx+0xc8u)));
    /* 005780b9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005780bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005780bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005780be: jae 0x57811d */ if (!fC) goto L_0057811d;
L_005780c0:; BB(0x005780c0);
    /* 005780c0: fld dword ptr [0x9272d4] */ FPUSH(R_F32((u32)(0x9272d4u)));
    /* 005780c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005780c8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005780ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005780cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005780cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005780cf: jb 0x5780d3 */ if (fC) goto L_005780d3;
L_005780d1:; BB(0x005780d1);
    /* 005780d1: fst st(1) */ ST(1) = ST(0);
L_005780d3:; BB(0x005780d3);
    /* 005780d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005780d5: fld dword ptr [0x9272d8] */ FPUSH(R_F32((u32)(0x9272d8u)));
    /* 005780db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005780dd: fst dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0));
    /* 005780e3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005780e5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005780e8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005780ec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005780f1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005780f5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005780f9: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 005780fd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00578100: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00578104: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00578107: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057810d: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00578110: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00578113: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00578116: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00578119: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057811c: ret  */ FN_RET(0x00578078); r_esp += 4; return;
L_0057811d:; BB(0x0057811d);
    /* 0057811d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0057811f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00578121: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578124: ret  */ FN_RET(0x00578078); r_esp += 4; return;
}

void f_005780ee(void)
{
    FN_ENTER(0x005780ee);
    /* 005780ee: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005780f0: add byte ptr [ecx - 0x26f7dbbc], cl */ { u32 ad = (u32)(r_ecx+0xd9082444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005780f6: insb byte ptr es:[edi], dx */ UNSUP(0x005780f6, "insb byte ptr es:[edi], dx");
    /* 005780f7: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005780f9: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 005780fd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00578100: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00578104: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00578107: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057810d: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00578110: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00578113: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00578116: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00578119: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057811c: ret  */ FN_RET(0x005780ee); r_esp += 4; return;
}

void f_00578128(void) /* sub_578128 */
{
    FN_ENTER(0x00578128);
    /* 00578128: mov ecx, dword ptr [0xa74074] */ r_ecx = R32((u32)(0xa74074u));
    /* 0057812e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578130: je 0x578145 */ if (fZ) goto L_00578145;
L_00578132:; BB(0x00578132);
    /* 00578132: je 0x57813b */ if (fZ) goto L_0057813b;
L_00578134:; BB(0x00578134);
    /* 00578134: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578136: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x57813bu); f_004066a8();
L_0057813b:; BB(0x0057813b);
    /* 0057813b: mov dword ptr [0xa74074], 0 */ W32((u32)(0xa74074u), 0x0u);
L_00578145:; BB(0x00578145);
    /* 00578145: ret  */ FN_RET(0x00578128); r_esp += 4; return;
}

void f_00578148(void) /* sub_578148 */
{
    FN_ENTER(0x00578148);
    /* 00578148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578149: mov ebp, esp */ r_ebp = r_esp;
    /* 0057814b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057814d: push 0x8d74c4 */ { u32 v = 0x8d74c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00578152: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578159: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578160: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578163: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578166: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057816c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057816f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578174: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057817b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578180u); f_005caba4();
    /* 00578180: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578181: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578186: je 0x5781c6 */ if (fZ) goto L_005781c6;
L_00578188:; BB(0x00578188);
    /* 00578188: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057818f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578196: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578199: mov ecx, eax */ r_ecx = r_eax;
    /* 0057819b: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 005781a1: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 005781a7: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005781ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005781ae: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005781b1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005781b4: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005781ba: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x5781bfu); f_00577a2c();
    /* 005781bf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005781c6:; BB(0x005781c6);
    /* 005781c6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005781c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005781cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005781d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005781d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005781d6: ret  */ FN_RET(0x00578148); r_esp += 4; return;
}

void f_005781d8(void) /* sub_5781D8 */
{
    FN_ENTER(0x005781d8);
    /* 005781d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005781d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005781db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005781dd: push 0x8d74ec */ { u32 v = 0x8d74ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005781e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005781e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005781e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005781f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005781f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005781f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005781f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005781fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005781ff: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578204: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057820b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578210u); f_005caba4();
    /* 00578210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578211: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578214: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578216: je 0x578256 */ if (fZ) goto L_00578256;
L_00578218:; BB(0x00578218);
    /* 00578218: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057821f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578226: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578229: mov ecx, eax */ r_ecx = r_eax;
    /* 0057822b: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 00578231: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00578237: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057823c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057823e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578241: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578244: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057824a: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x57824fu); f_00577a2c();
    /* 0057824f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578256:; BB(0x00578256);
    /* 00578256: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578259: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057825c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578263: mov esp, ebp */ r_esp = r_ebp;
    /* 00578265: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578266: ret  */ FN_RET(0x005781d8); r_esp += 4; return;
}

void f_00578268(void) /* sub_578268 */
{
    FN_ENTER(0x00578268);
    /* 00578268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578269: mov ebp, esp */ r_ebp = r_esp;
    /* 0057826b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057826d: push 0x8d7514 */ { u32 v = 0x8d7514u; r_esp -= 4; W32(r_esp, v); }
    /* 00578272: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578279: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578280: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578283: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578286: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578289: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057828c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057828f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578294: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057829b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5782a0u); f_005caba4();
    /* 005782a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005782a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005782a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005782a6: je 0x5782e6 */ if (fZ) goto L_005782e6;
L_005782a8:; BB(0x005782a8);
    /* 005782a8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005782af: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005782b6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005782b9: mov ecx, eax */ r_ecx = r_eax;
    /* 005782bb: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 005782c1: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 005782c7: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005782cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005782ce: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005782d1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005782d4: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005782da: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x5782dfu); f_00577a2c();
    /* 005782df: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005782e6:; BB(0x005782e6);
    /* 005782e6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005782e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005782ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005782f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005782f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005782f6: ret  */ FN_RET(0x00578268); r_esp += 4; return;
}

void f_005782f8(void) /* sub_5782F8 */
{
    FN_ENTER(0x005782f8);
    /* 005782f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005782f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005782fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005782fd: push 0x8d753c */ { u32 v = 0x8d753cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578302: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578309: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578310: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578313: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578316: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578319: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057831c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057831f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578324: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057832b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578330u); f_005caba4();
    /* 00578330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578331: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578336: je 0x578376 */ if (fZ) goto L_00578376;
L_00578338:; BB(0x00578338);
    /* 00578338: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057833f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578346: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578349: mov ecx, eax */ r_ecx = r_eax;
    /* 0057834b: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 00578351: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00578357: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057835c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057835e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578361: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578364: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057836a: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x57836fu); f_00577a2c();
    /* 0057836f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578376:; BB(0x00578376);
    /* 00578376: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578379: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057837c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578383: mov esp, ebp */ r_esp = r_ebp;
    /* 00578385: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578386: ret  */ FN_RET(0x005782f8); r_esp += 4; return;
}

void f_00578388(void) /* sub_578388 */
{
    FN_ENTER(0x00578388);
    /* 00578388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578389: mov ebp, esp */ r_ebp = r_esp;
    /* 0057838b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057838d: push 0x8d7564 */ { u32 v = 0x8d7564u; r_esp -= 4; W32(r_esp, v); }
    /* 00578392: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578399: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005783a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005783a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005783a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005783a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005783ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005783af: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005783b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005783bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5783c0u); f_005caba4();
    /* 005783c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005783c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005783c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005783c6: je 0x578406 */ if (fZ) goto L_00578406;
L_005783c8:; BB(0x005783c8);
    /* 005783c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005783cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005783d6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005783d9: mov ecx, eax */ r_ecx = r_eax;
    /* 005783db: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 005783e1: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 005783e7: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005783ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005783ee: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005783f1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005783f4: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005783fa: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x5783ffu); f_00577a2c();
    /* 005783ff: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578406:; BB(0x00578406);
    /* 00578406: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578409: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057840c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578413: mov esp, ebp */ r_esp = r_ebp;
    /* 00578415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578416: ret  */ FN_RET(0x00578388); r_esp += 4; return;
}

void f_00578418(void) /* sub_578418 */
{
    FN_ENTER(0x00578418);
    /* 00578418: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578419: mov ebp, esp */ r_ebp = r_esp;
    /* 0057841b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057841d: push 0x8d758c */ { u32 v = 0x8d758cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578422: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578429: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578430: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578433: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578436: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578439: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057843c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057843f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578444: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057844b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578450u); f_005caba4();
    /* 00578450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578451: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578456: je 0x578496 */ if (fZ) goto L_00578496;
L_00578458:; BB(0x00578458);
    /* 00578458: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057845f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578466: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578469: mov ecx, eax */ r_ecx = r_eax;
    /* 0057846b: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 00578471: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00578477: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057847c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057847e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578481: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578484: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057848a: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x57848fu); f_00577a2c();
    /* 0057848f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578496:; BB(0x00578496);
    /* 00578496: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578499: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057849c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005784a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005784a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005784a6: ret  */ FN_RET(0x00578418); r_esp += 4; return;
}

void f_005784a8(void) /* sub_5784A8 */
{
    FN_ENTER(0x005784a8);
    /* 005784a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005784a9: mov ebp, esp */ r_ebp = r_esp;
    /* 005784ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005784ad: push 0x8d75b4 */ { u32 v = 0x8d75b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005784b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005784b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005784b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005784c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005784c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005784c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005784c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005784cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005784cf: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005784d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005784db: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5784e0u); f_005caba4();
    /* 005784e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005784e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005784e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005784e6: je 0x578526 */ if (fZ) goto L_00578526;
L_005784e8:; BB(0x005784e8);
    /* 005784e8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005784ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005784f6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005784f9: mov ecx, eax */ r_ecx = r_eax;
    /* 005784fb: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 00578501: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00578507: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057850c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057850e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578511: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578514: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057851a: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x57851fu); f_00577a2c();
    /* 0057851f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578526:; BB(0x00578526);
    /* 00578526: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578529: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057852c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578533: mov esp, ebp */ r_esp = r_ebp;
    /* 00578535: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578536: ret  */ FN_RET(0x005784a8); r_esp += 4; return;
}

void f_00578538(void) /* sub_578538 */
{
    FN_ENTER(0x00578538);
    /* 00578538: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578539: mov ebp, esp */ r_ebp = r_esp;
    /* 0057853b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057853d: push 0x8d75dc */ { u32 v = 0x8d75dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00578542: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578549: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578550: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578553: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578556: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578559: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057855c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057855f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578564: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057856b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578570u); f_005caba4();
    /* 00578570: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578571: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578576: je 0x5785b6 */ if (fZ) goto L_005785b6;
L_00578578:; BB(0x00578578);
    /* 00578578: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057857f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578586: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578589: mov ecx, eax */ r_ecx = r_eax;
    /* 0057858b: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 00578591: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00578597: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057859c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057859e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005785a1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005785a4: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005785aa: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x5785afu); f_00577a2c();
    /* 005785af: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005785b6:; BB(0x005785b6);
    /* 005785b6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005785b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005785bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005785c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005785c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005785c6: ret  */ FN_RET(0x00578538); r_esp += 4; return;
}

void f_005785c8(void) /* sub_5785C8 */
{
    FN_ENTER(0x005785c8);
    /* 005785c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005785c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005785cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005785cd: push 0x8d7604 */ { u32 v = 0x8d7604u; r_esp -= 4; W32(r_esp, v); }
    /* 005785d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005785d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005785d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005785e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005785e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005785e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005785e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005785ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005785ef: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005785f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005785fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578600u); f_005caba4();
    /* 00578600: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578601: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578606: je 0x578646 */ if (fZ) goto L_00578646;
L_00578608:; BB(0x00578608);
    /* 00578608: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057860f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578616: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578619: mov ecx, eax */ r_ecx = r_eax;
    /* 0057861b: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 00578621: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00578627: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057862c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057862e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578631: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578634: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057863a: call 0x57791c */ r_esp -= 4; W32(r_esp, 0x57863fu); f_0057791c();
    /* 0057863f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578646:; BB(0x00578646);
    /* 00578646: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057864c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578653: mov esp, ebp */ r_esp = r_ebp;
    /* 00578655: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578656: ret  */ FN_RET(0x005785c8); r_esp += 4; return;
}

void f_00578658(void) /* sub_578658 */
{
    FN_ENTER(0x00578658);
    /* 00578658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578659: mov ebp, esp */ r_ebp = r_esp;
    /* 0057865b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057865d: push 0x8d762c */ { u32 v = 0x8d762cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578662: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578669: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578670: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578673: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578676: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578679: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057867c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057867f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00578684: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057868b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578690u); f_005caba4();
    /* 00578690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578691: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578694: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578696: je 0x5786d6 */ if (fZ) goto L_005786d6;
L_00578698:; BB(0x00578698);
    /* 00578698: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057869f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005786a6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005786a9: mov ecx, eax */ r_ecx = r_eax;
    /* 005786ab: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 005786b1: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 005786b7: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005786bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005786be: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005786c1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005786c4: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005786ca: call 0x57791c */ r_esp -= 4; W32(r_esp, 0x5786cfu); f_0057791c();
    /* 005786cf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005786d6:; BB(0x005786d6);
    /* 005786d6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005786d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005786dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005786e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005786e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005786e6: ret  */ FN_RET(0x00578658); r_esp += 4; return;
}

void f_005786e8(void) /* sub_5786E8 */
{
    FN_ENTER(0x005786e8);
    /* 005786e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005786e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005786eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005786ed: push 0x8d7654 */ { u32 v = 0x8d7654u; r_esp -= 4; W32(r_esp, v); }
    /* 005786f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005786f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005786f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578700: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578703: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578706: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578709: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057870c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057870f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00578714: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057871b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578720u); f_005caba4();
    /* 00578720: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578721: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578724: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578726: je 0x578766 */ if (fZ) goto L_00578766;
L_00578728:; BB(0x00578728);
    /* 00578728: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057872f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578736: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578739: mov ecx, eax */ r_ecx = r_eax;
    /* 0057873b: mov edx, dword ptr [0xa74074] */ r_edx = R32((u32)(0xa74074u));
    /* 00578741: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00578747: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057874c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057874e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578751: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578754: push dword ptr [0xa7407c] */ { u32 v = R32((u32)(0xa7407cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057875a: call 0x57791c */ r_esp -= 4; W32(r_esp, 0x57875fu); f_0057791c();
    /* 0057875f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578766:; BB(0x00578766);
    /* 00578766: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578769: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057876c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578773: mov esp, ebp */ r_esp = r_ebp;
    /* 00578775: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578776: ret  */ FN_RET(0x005786e8); r_esp += 4; return;
}

void f_00578778(void) /* sub_578778 */
{
    FN_ENTER(0x00578778);
    /* 00578778: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057877b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057877e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057877f: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578783: call 0x782bb0 */ r_esp -= 4; W32(r_esp, 0x578788u); f_00782bb0();
    /* 00578788: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0057878c: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578792: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00578797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578798: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x57879du); f_0050a984();
    /* 0057879d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005787a0: ret  */ FN_RET(0x00578778); r_esp += 4; return;
}

void f_005787a4(void) /* sub_5787A4 */
{
    FN_ENTER(0x005787a4);
    /* 005787a4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005787a7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005787aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005787ab: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005787af: call 0x782bb0 */ r_esp -= 4; W32(r_esp, 0x5787b4u); f_00782bb0();
    /* 005787b4: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005787b8: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005787bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005787be: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 005787c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005787c4: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5787c9u); f_0050a984();
    /* 005787c9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005787cc: ret  */ FN_RET(0x005787a4); r_esp += 4; return;
}

void f_005787d0(void) /* sub_5787D0 */
{
    FN_ENTER(0x005787d0);
    /* 005787d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005787d1: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005787d5: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 005787da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005787db: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5787e0u); f_0050b510();
    /* 005787e0: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005787e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005787e6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5787ebu); f_0050b510();
    /* 005787eb: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 005787f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005787f1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5787f6u); f_0050b510();
    /* 005787f6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005787f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005787fa: ret  */ FN_RET(0x005787d0); r_esp += 4; return;
}

void f_005787fc(void) /* sub_5787FC */
{
    FN_ENTER(0x005787fc);
    /* 005787fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005787fd: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00578801: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578803: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00578805: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057880a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057880b: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x578810u); f_0050a984();
    /* 00578810: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578812: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00578814: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00578819: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057881a: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x57881fu); f_0050a984();
    /* 0057881f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578822: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00578823: ret  */ FN_RET(0x005787fc); r_esp += 4; return;
}

void f_00578824(void) /* sub_578824 */
{
    FN_ENTER(0x00578824);
    /* 00578824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578825: mov ebp, esp */ r_ebp = r_esp;
    /* 00578827: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578829: push 0x8d767c */ { u32 v = 0x8d767cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057882e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578835: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057883c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057883f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578842: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00578845: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00578848: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0057884b: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0057884d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00578854: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578859u); f_005caba4();
    /* 00578859: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057885c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057885f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00578862: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578864: je 0x5788a7 */ if (fZ) goto L_005788a7;
L_00578866:; BB(0x00578866);
    /* 00578866: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0057886d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578874: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578877: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057887a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057887c: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00578881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578882: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x578887u); f_0050a984();
    /* 00578887: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057888a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057888d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057888e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578891: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578895: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057889b: call 0x5775f8 */ r_esp -= 4; W32(r_esp, 0x5788a0u); f_005775f8();
    /* 005788a0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005788a7:; BB(0x005788a7);
    /* 005788a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005788aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005788b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005788b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005788b4: ret  */ FN_RET(0x00578824); r_esp += 4; return;
}

void f_005788b8(void) /* sub_5788B8 */
{
    FN_ENTER(0x005788b8);
    /* 005788b8: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005788bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005788be: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 005788c3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005788c7: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5788ccu); f_0050a984();
    /* 005788cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005788cf: ret  */ FN_RET(0x005788b8); r_esp += 4; return;
}

void f_005788d0(void) /* sub_5788D0 */
{
    FN_ENTER(0x005788d0);
    /* 005788d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005788d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005788d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005788d5: push 0x8d76a4 */ { u32 v = 0x8d76a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005788da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005788e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005788e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005788e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005788eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005788ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005788f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005788f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005788f7: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005788f9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00578900: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578905u); f_005caba4();
    /* 00578905: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578906: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057890b: je 0x57894e */ if (fZ) goto L_0057894e;
L_0057890d:; BB(0x0057890d);
    /* 0057890d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00578914: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057891b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057891e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578921: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578923: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578929: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x57892eu); f_0050a984();
    /* 0057892e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578931: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578935: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578938: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057893b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057893c: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578942: call 0x577628 */ r_esp -= 4; W32(r_esp, 0x578947u); f_00577628();
    /* 00578947: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0057894e:; BB(0x0057894e);
    /* 0057894e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578951: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578958: mov esp, ebp */ r_esp = r_ebp;
    /* 0057895a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057895b: ret  */ FN_RET(0x005788d0); r_esp += 4; return;
}

void f_0057895c(void) /* sub_57895C */
{
    FN_ENTER(0x0057895c);
    /* 0057895c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057895d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057895e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00578962: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x578967u); f_00807e78();
    /* 00578967: mov eax, dword ptr [eax*8 + 0x9273e0] */ r_eax = R32((u32)(r_eax*8+0x9273e0u));
    /* 0057896e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578970: jne 0x57897d */ if (!fZ) goto L_0057897d;
L_00578972:; BB(0x00578972);
    /* 00578972: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00578977: call 0x52d25c */ r_esp -= 4; W32(r_esp, 0x57897cu); f_0052d25c();
    /* 0057897c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0057897d:; BB(0x0057897d);
    /* 0057897d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057897f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578980: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578981: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00578982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578983: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578988u); f_00814298();
    /* 00578988: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057898b: mov eax, edi */ r_eax = r_edi;
    /* 0057898d: call 0x57899c */ r_esp -= 4; W32(r_esp, 0x578992u); f_0057899c();
    /* 00578992: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578993: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00578994: ret  */ FN_RET(0x0057895c); r_esp += 4; return;
}

void f_0057899c(void) /* sub_57899C */
{
    FN_ENTER(0x0057899c);
    /* 0057899c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057899f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005789a1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005789a4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005789a7: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005789ab: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005789ae: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005789b2: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005789b4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005789b6: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 005789bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005789bc: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5789c1u); f_0050a984();
    /* 005789c1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005789c5: fadd dword ptr [0x92746c] */ ST(0) = ST(0) + R_F32((u32)(0x92746cu));
    /* 005789cb: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005789cf: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005789d3: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 005789d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005789d9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5789deu); f_0050b510();
    /* 005789de: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005789e1: ret  */ FN_RET(0x0057899c); r_esp += 4; return;
}

void f_005789e4(void) /* sub_5789E4 */
{
    FN_ENTER(0x005789e4);
    /* 005789e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005789e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005789e6: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005789ea: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x5789efu); f_00807e78();
    /* 005789ef: mov eax, dword ptr [eax*8 + 0x9273e0] */ r_eax = R32((u32)(r_eax*8+0x9273e0u));
    /* 005789f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005789f8: jne 0x578a05 */ if (!fZ) goto L_00578a05;
L_005789fa:; BB(0x005789fa);
    /* 005789fa: push 0x145 */ { u32 v = 0x145u; r_esp -= 4; W32(r_esp, v); }
    /* 005789ff: call 0x52d25c */ r_esp -= 4; W32(r_esp, 0x578a04u); f_0052d25c();
    /* 00578a04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00578a05:; BB(0x00578a05);
    /* 00578a05: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00578a07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578a08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578a09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00578a0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578a0b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578a10u); f_00814298();
    /* 00578a10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578a13: mov eax, edi */ r_eax = r_edi;
    /* 00578a15: call 0x57899c */ r_esp -= 4; W32(r_esp, 0x578a1au); f_0057899c();
    /* 00578a1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578a1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00578a1c: ret  */ FN_RET(0x005789e4); r_esp += 4; return;
}

void f_00578a20(void) /* sub_578A20 */
{
    FN_ENTER(0x00578a20);
    /* 00578a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578a21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578a24: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00578a28: mov eax, ebp */ r_eax = r_ebp;
    /* 00578a2a: call 0x578a6c */ r_esp -= 4; W32(r_esp, 0x578a2fu); f_00578a6c();
    /* 00578a2f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00578a32: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00578a36: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00578a39: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00578a3d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00578a41: fadd dword ptr [0x927468] */ ST(0) = ST(0) + R_F32((u32)(0x927468u));
    /* 00578a47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578a4a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00578a4e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00578a52: lea ebp, [esp + 4] */ r_ebp = (u32)(r_esp+0x4u);
    /* 00578a56: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 00578a5b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578a5c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x578a61u); f_0050b510();
    /* 00578a61: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578a64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578a65: ret  */ FN_RET(0x00578a20); r_esp += 4; return;
}

void f_00578a68(void) /* sub_578A68 */
{
    FN_ENTER(0x00578a68);
    /* 00578a68: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00578a6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00578a6d: mov edi, eax */ r_edi = r_eax;
    /* 00578a6f: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x578a74u); f_00807e78();
    /* 00578a74: mov eax, dword ptr [eax*8 + 0x9273e4] */ r_eax = R32((u32)(r_eax*8+0x9273e4u));
    /* 00578a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578a7d: jne 0x578a8e */ if (!fZ) goto L_00578a8e;
L_00578a7f:; BB(0x00578a7f);
    /* 00578a7f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00578a81: push 0x1d1 */ { u32 v = 0x1d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578a86: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x578a8bu); f_0052d204();
    /* 00578a8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578a8e:; BB(0x00578a8e);
    /* 00578a8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00578a90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578a91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578a92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00578a93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578a94: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578a99u); f_00814298();
    /* 00578a99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578a9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00578a9d: ret  */ FN_RET(0x00578a68); r_esp += 4; return;
}

void f_00578a6c(void) /* sub_578A6C */
{
    FN_ENTER(0x00578a6c);
    /* 00578a6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00578a6d: mov edi, eax */ r_edi = r_eax;
    /* 00578a6f: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x578a74u); f_00807e78();
    /* 00578a74: mov eax, dword ptr [eax*8 + 0x9273e4] */ r_eax = R32((u32)(r_eax*8+0x9273e4u));
    /* 00578a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578a7d: jne 0x578a8e */ if (!fZ) goto L_00578a8e;
L_00578a7f:; BB(0x00578a7f);
    /* 00578a7f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00578a81: push 0x1d1 */ { u32 v = 0x1d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578a86: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x578a8bu); f_0052d204();
    /* 00578a8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578a8e:; BB(0x00578a8e);
    /* 00578a8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00578a90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578a91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578a92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00578a93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578a94: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578a99u); f_00814298();
    /* 00578a99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578a9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00578a9d: ret  */ FN_RET(0x00578a6c); r_esp += 4; return;
}

void f_00578aa0(void) /* sub_578AA0 */
{
    FN_ENTER(0x00578aa0);
    /* 00578aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578aa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578aa5: push 0x8d76cc */ { u32 v = 0x8d76ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00578aaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578ab1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578ab8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578abb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578abe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578ac1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00578ac4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00578ac7: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00578ac9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00578ad0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578ad5u); f_005caba4();
    /* 00578ad5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578ad6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578adb: je 0x578b0f */ if (fZ) goto L_00578b0f;
L_00578add:; BB(0x00578add);
    /* 00578add: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00578ae4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578aeb: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578aee: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578af1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578af4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578af7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578afa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578afd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578b03: call 0x511c00 */ r_esp -= 4; W32(r_esp, 0x578b08u); f_00511c00();
    /* 00578b08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578b0f:; BB(0x00578b0f);
    /* 00578b0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578b12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578b19: mov esp, ebp */ r_esp = r_ebp;
    /* 00578b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578b1c: ret  */ FN_RET(0x00578aa0); r_esp += 4; return;
}

void f_00578b20(void) /* sub_578B20 */
{
    FN_ENTER(0x00578b20);
    /* 00578b20: mov dword ptr [0xa74078], 1 */ W32((u32)(0xa74078u), 0x1u);
    /* 00578b2a: ret  */ FN_RET(0x00578b20); r_esp += 4; return;
}

void f_00578b2c(void) /* sub_578B2C */
{
    FN_ENTER(0x00578b2c);
    /* 00578b2c: mov dword ptr [0xa74078], 0 */ W32((u32)(0xa74078u), 0x0u);
    /* 00578b36: ret  */ FN_RET(0x00578b2c); r_esp += 4; return;
}

void f_00578b38(void) /* sub_578B38 */
{
    FN_ENTER(0x00578b38);
    /* 00578b38: mov eax, dword ptr [0xa74078] */ r_eax = R32((u32)(0xa74078u));
    /* 00578b3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578b3f: je 0x578b47 */ if (fZ) goto L_00578b47;
L_00578b41:; BB(0x00578b41);
    /* 00578b41: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x578b46u); f_0082dab0();
    /* 00578b46: ret  */ FN_RET(0x00578b38); r_esp += 4; return;
L_00578b47:; BB(0x00578b47);
    /* 00578b47: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x578b4cu); f_0082dbac();
    /* 00578b4c: ret  */ FN_RET(0x00578b38); r_esp += 4; return;
}

void f_00578b50(void) /* sub_578B50 */
{
    FN_ENTER(0x00578b50);
    /* 00578b50: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x578b55u); f_00807ac0();
    /* 00578b55: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 00578b58: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00578b5b: ja 0x578baa */ if ((!fC&&!fZ)) goto L_00578baa;
L_00578b5d:; BB(0x00578b5d);
    /* 00578b5d: mov eax, dword ptr [eax*4 + 0x9272e4] */ r_eax = R32((u32)(r_eax*4+0x9272e4u));
    /* 00578b64: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00578baa:; BB(0x00578baa);
    /* 00578baa: ret  */ FN_RET(0x00578b50); r_esp += 4; return;
}

void f_00578b66(void)
{
    FN_ENTER(0x00578b66);
    /* 00578b66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578b6a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00578b6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578b6f: push 0x311 */ { u32 v = 0x311u; r_esp -= 4; W32(r_esp, v); }
    /* 00578b74: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578b79u); f_00814298();
    /* 00578b79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578b7c: ret  */ FN_RET(0x00578b66); r_esp += 4; return;
}

void f_00578b7d(void)
{
    FN_ENTER(0x00578b7d);
    /* 00578b7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578b7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578b81: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00578b85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578b86: push 0x288 */ { u32 v = 0x288u; r_esp -= 4; W32(r_esp, v); }
    /* 00578b8b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578b90u); f_00814298();
    /* 00578b90: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578b93: ret  */ FN_RET(0x00578b7d); r_esp += 4; return;
}

void f_00578b94(void)
{
    FN_ENTER(0x00578b94);
    /* 00578b94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578b96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578b98: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00578b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578b9d: push 0x24d */ { u32 v = 0x24du; r_esp -= 4; W32(r_esp, v); }
    /* 00578ba2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578ba7u); f_00814298();
    /* 00578ba7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578baa: ret  */ FN_RET(0x00578b94); r_esp += 4; return;
}

void f_00578baa(void)
{
    FN_ENTER(0x00578baa);
    /* 00578baa: ret  */ FN_RET(0x00578baa); r_esp += 4; return;
}

void f_00578bac(void) /* sub_578BAC */
{
    FN_ENTER(0x00578bac);
    /* 00578bac: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x578bb1u); f_00807ac0();
    /* 00578bb1: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 00578bb4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00578bb7: ja 0x578c06 */ if ((!fC&&!fZ)) goto L_00578c06;
L_00578bb9:; BB(0x00578bb9);
    /* 00578bb9: mov eax, dword ptr [eax*4 + 0x927314] */ r_eax = R32((u32)(r_eax*4+0x927314u));
    /* 00578bc0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00578c06:; BB(0x00578c06);
    /* 00578c06: ret  */ FN_RET(0x00578bac); r_esp += 4; return;
}

void f_00578bc2(void)
{
    FN_ENTER(0x00578bc2);
    /* 00578bc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578bc6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00578bca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578bcb: push 0x312 */ { u32 v = 0x312u; r_esp -= 4; W32(r_esp, v); }
    /* 00578bd0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578bd5u); f_00814298();
    /* 00578bd5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578bd8: ret  */ FN_RET(0x00578bc2); r_esp += 4; return;
}

void f_00578bd9(void)
{
    FN_ENTER(0x00578bd9);
    /* 00578bd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578bdd: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00578be1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578be2: push 0x289 */ { u32 v = 0x289u; r_esp -= 4; W32(r_esp, v); }
    /* 00578be7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578becu); f_00814298();
    /* 00578bec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578bef: ret  */ FN_RET(0x00578bd9); r_esp += 4; return;
}

void f_00578bf0(void)
{
    FN_ENTER(0x00578bf0);
    /* 00578bf0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578bf4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00578bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578bf9: push 0x24e */ { u32 v = 0x24eu; r_esp -= 4; W32(r_esp, v); }
    /* 00578bfe: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x578c03u); f_00814298();
    /* 00578c03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578c06: ret  */ FN_RET(0x00578bf0); r_esp += 4; return;
}

void f_00578c06(void)
{
    FN_ENTER(0x00578c06);
    /* 00578c06: ret  */ FN_RET(0x00578c06); r_esp += 4; return;
}

void f_00578c08(void) /* sub_578C08 */
{
    FN_ENTER(0x00578c08);
    /* 00578c08: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x578c0du); f_00807ac0();
    /* 00578c0d: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 00578c10: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00578c13: ja 0x578c71 */ if ((!fC&&!fZ)) goto L_00578c71;
L_00578c15:; BB(0x00578c15);
    /* 00578c15: mov eax, dword ptr [eax*4 + 0x927344] */ r_eax = R32((u32)(r_eax*4+0x927344u));
    /* 00578c1c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00578c71:; BB(0x00578c71);
    /* 00578c71: ret  */ FN_RET(0x00578c08); r_esp += 4; return;
}

void f_00578c1e(void)
{
    FN_ENTER(0x00578c1e);
    /* 00578c1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578c21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578c22: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00578c26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c27: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00578c2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c2c: push 0x313 */ { u32 v = 0x313u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c31: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x578c36u); f_008144b0();
    /* 00578c36: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578c39: ret  */ FN_RET(0x00578c1e); r_esp += 4; return;
}

void f_00578c3a(void)
{
    FN_ENTER(0x00578c3a);
    /* 00578c3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578c3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578c3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578c3e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00578c42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c43: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00578c47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c48: push 0x28a */ { u32 v = 0x28au; r_esp -= 4; W32(r_esp, v); }
    /* 00578c4d: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x578c52u); f_008144b0();
    /* 00578c52: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578c55: ret  */ FN_RET(0x00578c3a); r_esp += 4; return;
}

void f_00578c56(void)
{
    FN_ENTER(0x00578c56);
    /* 00578c56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578c58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578c5a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00578c5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c5f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00578c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c64: push 0x24f */ { u32 v = 0x24fu; r_esp -= 4; W32(r_esp, v); }
    /* 00578c69: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x578c6eu); f_008144b0();
    /* 00578c6e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00578c71: ret  */ FN_RET(0x00578c56); r_esp += 4; return;
}

void f_00578c71(void)
{
    FN_ENTER(0x00578c71);
    /* 00578c71: ret  */ FN_RET(0x00578c71); r_esp += 4; return;
}

void f_00578c74(void) /* sub_578C74 */
{
    FN_ENTER(0x00578c74);
    /* 00578c74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c75: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00578c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578c7b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x578c80u); f_007b4d18();
    /* 00578c80: mov ebx, eax */ r_ebx = r_eax;
    /* 00578c82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c83: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x578c88u); f_006ea71c();
    /* 00578c88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578c8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578c8d: jne 0x578c91 */ if (!fZ) goto L_00578c91;
L_00578c8f:; BB(0x00578c8f);
    /* 00578c8f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00578c91:; BB(0x00578c91);
    /* 00578c91: mov eax, ebx */ r_eax = r_ebx;
    /* 00578c93: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00578c94: ret  */ FN_RET(0x00578c74); r_esp += 4; return;
}

void f_00578c98(void) /* sub_578C98 */
{
    FN_ENTER(0x00578c98);
    /* 00578c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578c99: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00578c9d: mov ebp, dword ptr [eax*4 + 0xaad6e0] */ r_ebp = R32((u32)(r_eax*4+0xaad6e0u));
    /* 00578ca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578ca5: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x578caau); f_006ea71c();
    /* 00578caa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578cad: jne 0x578cb1 */ if (!fZ) goto L_00578cb1;
L_00578caf:; BB(0x00578caf);
    /* 00578caf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00578cb1:; BB(0x00578cb1);
    /* 00578cb1: mov eax, ebp */ r_eax = r_ebp;
    /* 00578cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578cb4: ret  */ FN_RET(0x00578c98); r_esp += 4; return;
}

void f_00578cb8(void) /* sub_578CB8 */
{
    FN_ENTER(0x00578cb8);
    /* 00578cb8: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 00578cbd: mov dword ptr [0xa7407c], eax */ W32((u32)(0xa7407cu), r_eax);
    /* 00578cc2: ret  */ FN_RET(0x00578cb8); r_esp += 4; return;
}

void f_00578cc4(void) /* sub_578CC4 */
{
    FN_ENTER(0x00578cc4);
    /* 00578cc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578cc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00578cc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578cc9: push 0x8d76f4 */ { u32 v = 0x8d76f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00578cce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578cd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578cdc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578cdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578ce2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578ce5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00578ce8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00578ceb: push 0x128 */ { u32 v = 0x128u; r_esp -= 4; W32(r_esp, v); }
    /* 00578cf0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00578cf7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578cfcu); f_005caba4();
    /* 00578cfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578cfd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578d02: je 0x578d3e */ if (fZ) goto L_00578d3e;
L_00578d04:; BB(0x00578d04);
    /* 00578d04: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00578d0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578d12: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578d15: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578d18: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578d1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578d21: call 0x576e64 */ r_esp -= 4; W32(r_esp, 0x578d26u); f_00576e64();
    /* 00578d26: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578d29: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578d30:; BB(0x00578d30);
    /* 00578d30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578d33: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578d3a: mov esp, ebp */ r_esp = r_ebp;
    /* 00578d3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578d3d: ret  */ FN_RET(0x00578cc4); r_esp += 4; return;
L_00578d3e:; BB(0x00578d3e);
    /* 00578d3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578d40: jmp 0x578d30 */ goto L_00578d30;
}

void f_00578d44(void) /* sub_578D44 */
{
    FN_ENTER(0x00578d44);
    /* 00578d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578d45: mov ebp, esp */ r_ebp = r_esp;
    /* 00578d47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578d49: push 0x8d771c */ { u32 v = 0x8d771cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578d4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578d55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578d5c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578d5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578d62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00578d65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00578d68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00578d6b: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00578d70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00578d72: jl 0x578da8 */ if ((fS!=fO)) goto L_00578da8;
L_00578d74:; BB(0x00578d74);
    /* 00578d74: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00578d77: jg 0x578d8f */ if ((!fZ&&fS==fO)) goto L_00578d8f;
L_00578d79:; BB(0x00578d79);
    /* 00578d79: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 00578d7e: mov dword ptr [0x9bedd8], 1 */ W32((u32)(0x9bedd8u), 0x1u);
    /* 00578d88: mov dword ptr [0xa7407c], eax */ W32((u32)(0xa7407cu), r_eax);
    /* 00578d8d: jmp 0x578da8 */ goto L_00578da8;
L_00578d8f:; BB(0x00578d8f);
    /* 00578d8f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578d92: jne 0x578da8 */ if (!fZ) goto L_00578da8;
L_00578d94:; BB(0x00578d94);
    /* 00578d94: mov eax, dword ptr [0xaca378] */ r_eax = R32((u32)(0xaca378u));
    /* 00578d99: mov dword ptr [0x9bedd8], 0 */ W32((u32)(0x9bedd8u), 0x0u);
    /* 00578da3: mov dword ptr [0xa7407c], eax */ W32((u32)(0xa7407cu), r_eax);
L_00578da8:; BB(0x00578da8);
    /* 00578da8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00578daf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00578db4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x578db9u); f_008581c5();
    /* 00578db9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00578dbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578dbf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00578dc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578dc4: je 0x578e0e */ if (fZ) goto L_00578e0e;
L_00578dc6:; BB(0x00578dc6);
    /* 00578dc6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00578dcd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578dd4: mov ecx, eax */ r_ecx = r_eax;
    /* 00578dd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578dd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578ddb: push 0x9bedc8 */ { u32 v = 0x9bedc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578de0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578de2: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x578de7u); f_005b7a84();
    /* 00578de7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00578dee:; BB(0x00578dee);
    /* 00578dee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00578df1: mov dword ptr [0xa74074], eax */ W32((u32)(0xa74074u), r_eax);
    /* 00578df6: mov dword ptr [0xa74078], 1 */ W32((u32)(0xa74078u), 0x1u);
    /* 00578e00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578e03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578e0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00578e0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578e0d: ret  */ FN_RET(0x00578d44); r_esp += 4; return;
L_00578e0e:; BB(0x00578e0e);
    /* 00578e0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578e10: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00578e13: jmp 0x578dee */ goto L_00578dee;
}

void f_00578e18(void) /* sub_578E18 */
{
    FN_ENTER(0x00578e18);
    /* 00578e18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00578e19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00578e1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00578e1d: call 0x578e3c */ r_esp -= 4; W32(r_esp, 0x578e22u); f_00578e3c();
    /* 00578e22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00578e26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578e28: jne 0x578e2e */ if (!fZ) goto L_00578e2e;
L_00578e2a:; BB(0x00578e2a);
    /* 00578e2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00578e2b: ret 4 */ FN_RET(0x00578e18); r_esp += 8; return;
L_00578e2e:; BB(0x00578e2e);
    /* 00578e2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00578e2f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x578e34u); f_005c2f74();
    /* 00578e34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578e35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00578e36: ret 4 */ FN_RET(0x00578e18); r_esp += 8; return;
}

void f_00578e3c(void) /* sub_578E3C */
{
    FN_ENTER(0x00578e3c);
    /* 00578e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578e3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00578e3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578e41: push 0x8d7738 */ { u32 v = 0x8d7738u; r_esp -= 4; W32(r_esp, v); }
    /* 00578e46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578e4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578e54: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578e57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578e5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578e5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00578e60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00578e63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00578e66: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578e6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578e70: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 00578e76: mov dword ptr [ecx], 0xb06ed8 */ W32((u32)(r_ecx), 0xb06ed8u);
    /* 00578e7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578e7e: je 0x578e94 */ if (fZ) goto L_00578e94;
L_00578e80:; BB(0x00578e80);
    /* 00578e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578e81: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x578e86u); f_005cdcc0();
    /* 00578e86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578e87: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578e8a: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_00578e94:; BB(0x00578e94);
    /* 00578e94: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00578e9b: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x578ea0u); f_007ba1f0();
    /* 00578ea0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578ea3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578eaa: mov esp, ebp */ r_esp = r_ebp;
    /* 00578eac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578ead: ret  */ FN_RET(0x00578e3c); r_esp += 4; return;
}

void f_00578eb0(void) /* sub_578EB0 */
{
    FN_ENTER(0x00578eb0);
    /* 00578eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578eb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578eb5: push 0x8d7760 */ { u32 v = 0x8d7760u; r_esp -= 4; W32(r_esp, v); }
    /* 00578eba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578ec1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578ec8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578ecb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578ece: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00578ed1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00578ed4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00578ed7: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578edc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00578ee3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x578ee8u); f_005caba4();
    /* 00578ee8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578ee9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00578eec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578eee: je 0x578f16 */ if (fZ) goto L_00578f16;
L_00578ef0:; BB(0x00578ef0);
    /* 00578ef0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00578ef7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578efe: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578f01: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00578f04: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578f07: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578f0a: call 0x578f24 */ r_esp -= 4; W32(r_esp, 0x578f0fu); f_00578f24();
    /* 00578f0f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578f16:; BB(0x00578f16);
    /* 00578f16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578f19: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578f20: mov esp, ebp */ r_esp = r_ebp;
    /* 00578f22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578f23: ret  */ FN_RET(0x00578eb0); r_esp += 4; return;
}

void f_00578f24(void) /* sub_578F24 */
{
    FN_ENTER(0x00578f24);
    /* 00578f24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578f25: mov ebp, esp */ r_ebp = r_esp;
    /* 00578f27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578f29: push 0x8d777c */ { u32 v = 0x8d777cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578f2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578f35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00578f3c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578f3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00578f42: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00578f45: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00578f48: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00578f4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578f4e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00578f54: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00578f57: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00578f5a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00578f5d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00578f60: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00578f63: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00578f66: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x578f6bu); f_007ba278();
    /* 00578f6b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578f72: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00578f75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578f78: mov dword ptr [eax], 0xb06ed8 */ W32((u32)(r_eax), 0xb06ed8u);
    /* 00578f7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578f80: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 00578f8a: je 0x57905d */ if (fZ) goto L_0057905d;
L_00578f90:; BB(0x00578f90);
    /* 00578f90: mov edx, dword ptr [0x9beddc] */ r_edx = R32((u32)(0x9beddcu));
    /* 00578f96: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00578f99: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00578f9c: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00578f9f: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00578fa2: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 00578fa5: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 00578fa8: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 00578fab: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 00578fae: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00578fb2: mov word ptr [eax + 0x94], dx */ W16((u32)(r_eax+0x94u), (u16)r_edx);
    /* 00578fb9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00578fbc: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 00578fc2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00578fc5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578fc8: je 0x57901d */ if (fZ) goto L_0057901d;
L_00578fca:; BB(0x00578fca);
    /* 00578fca: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578fcd: jne 0x578fe0 */ if (!fZ) goto L_00578fe0;
L_00578fcf:; BB(0x00578fcf);
    /* 00578fcf: mov dword ptr [eax + 0x98], 0x20f */ W32((u32)(r_eax+0x98u), 0x20fu);
    /* 00578fd9: mov edx, 0x20f */ r_edx = 0x20fu;
    /* 00578fde: jmp 0x57902c */ goto L_0057902c;
L_00578fe0:; BB(0x00578fe0);
    /* 00578fe0: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578fe3: jne 0x578ff6 */ if (!fZ) goto L_00578ff6;
L_00578fe5:; BB(0x00578fe5);
    /* 00578fe5: mov dword ptr [eax + 0x98], 0x223 */ W32((u32)(r_eax+0x98u), 0x223u);
    /* 00578fef: mov edx, 0x223 */ r_edx = 0x223u;
    /* 00578ff4: jmp 0x57902c */ goto L_0057902c;
L_00578ff6:; BB(0x00578ff6);
    /* 00578ff6: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00578ff9: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00578ffc: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578fff: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00579003: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579009: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0057900d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579010: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00579017: mov esp, ebp */ r_esp = r_ebp;
    /* 00579019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057901a: ret 0xc */ FN_RET(0x00578f24); r_esp += 16; return;
L_0057901d:; BB(0x0057901d);
    /* 0057901d: mov dword ptr [eax + 0x98], 0x12f */ W32((u32)(r_eax+0x98u), 0x12fu);
    /* 00579027: mov edx, 0x12f */ r_edx = 0x12fu;
L_0057902c:; BB(0x0057902c);
    /* 0057902c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057902d: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579030: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579031: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x579036u); f_00509590();
    /* 00579036: mov edx, eax */ r_edx = r_eax;
    /* 00579038: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057903b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057903e: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
L_00579044:; BB(0x00579044);
    /* 00579044: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00579047: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057904a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057904d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579050: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00579057: mov esp, ebp */ r_esp = r_ebp;
    /* 00579059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057905a: ret 0xc */ FN_RET(0x00578f24); r_esp += 16; return;
L_0057905d:; BB(0x0057905d);
    /* 0057905d: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00579061: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579067: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0057906b: jmp 0x579044 */ goto L_00579044;
}

