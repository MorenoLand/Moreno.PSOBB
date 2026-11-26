#include "protos.h"

void f_00492034(void) /* sub_492034 */
{
    FN_ENTER(0x00492034);
    /* 00492034: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00492035: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00492037: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00492039: call 0x492054 */ r_esp -= 4; W32(r_esp, 0x49203eu); f_00492054();
    /* 0049203e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00492040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492043: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00492044: push 0x3d4 */ { u32 v = 0x3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00492049: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x49204eu); f_008144b0();
    /* 0049204e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492051: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00492052: ret  */ FN_RET(0x00492034); r_esp += 4; return;
}

void f_00492054(void) /* sub_492054 */
{
    FN_ENTER(0x00492054);
    /* 00492054: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00492055: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00492056: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00492059: mov esi, ecx */ r_esi = r_ecx;
    /* 0049205b: mov edx, dword ptr [0xa47260] */ r_edx = R32((u32)(0xa47260u));
    /* 00492061: add edx, dword ptr [esi + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492064: mov eax, dword ptr [0xa47264] */ r_eax = R32((u32)(0xa47264u));
    /* 00492069: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049206b: jl 0x49206f */ if ((fS!=fO)) goto L_0049206f;
L_0049206d:; BB(0x0049206d);
    /* 0049206d: mov edx, eax */ r_edx = r_eax;
L_0049206f:; BB(0x0049206f);
    /* 0049206f: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00492072: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x492077u); f_008587a5();
    /* 00492077: mov edi, eax */ r_edi = r_eax;
    /* 00492079: fild dword ptr [esi + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x24u)));
    /* 0049207c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049207d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00492080: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x492085u); f_0082e900();
    /* 00492085: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00492088: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049208b: fdiv dword ptr [0x9023c0] */ ST(0) = ST(0) / R_F32((u32)(0x9023c0u));
    /* 00492091: fadd dword ptr [0x9023c4] */ ST(0) = ST(0) + R_F32((u32)(0x9023c4u));
    /* 00492097: fmul dword ptr [0x9023c8] */ ST(0) = ST(0) * R_F32((u32)(0x9023c8u));
    /* 0049209d: fmul dword ptr [0x902320] */ ST(0) = ST(0) * R_F32((u32)(0x902320u));
    /* 004920a3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004920a5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004920a9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004920ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004920b3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004920b7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004920bb: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004920bf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004920c3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004920c7: add eax, dword ptr [esi + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004920ca: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 004920cd: add dword ptr [esi + 0x28], eax */ { u32 ad = (u32)(r_esi+0x28u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004920d0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004920d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004920d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004920d5: ret  */ FN_RET(0x00492054); r_esp += 4; return;
}

void f_004920d8(void) /* sub_4920D8 */
{
    FN_ENTER(0x004920d8);
    /* 004920d8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004920db: fld dword ptr [0xa4728c] */ FPUSH(R_F32((u32)(0xa4728cu)));
    /* 004920e1: fcomp dword ptr [0x9023bc] */ fx_compare(ST(0), R_F32((u32)(0x9023bcu))); FPOP();
    /* 004920e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004920e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004920ea: jne 0x492101 */ if (!fZ) goto L_00492101;
L_004920ec:; BB(0x004920ec);
    /* 004920ec: mov eax, dword ptr [0xa47290] */ r_eax = R32((u32)(0xa47290u));
    /* 004920f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004920f3: jne 0x492106 */ if (!fZ) goto L_00492106;
L_004920f5:; BB(0x004920f5);
    /* 004920f5: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 004920f8: mov dword ptr [0xa47290], eax */ W32((u32)(0xa47290u), r_eax);
    /* 004920fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492100: ret  */ FN_RET(0x004920d8); r_esp += 4; return;
L_00492101:; BB(0x00492101);
    /* 00492101: mov eax, dword ptr [0xa47290] */ r_eax = R32((u32)(0xa47290u));
L_00492106:; BB(0x00492106);
    /* 00492106: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00492109: mov dword ptr [0xa47290], edx */ W32((u32)(0xa47290u), r_edx);
    /* 0049210f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00492111: and eax, 0x7ffff */ {  u32 a = r_eax; u32 b = 0x7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00492116: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00492119: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049211c: fdiv dword ptr [0x9023b4] */ ST(0) = ST(0) / R_F32((u32)(0x9023b4u));
    /* 00492122: fadd dword ptr [0x9023b8] */ ST(0) = ST(0) + R_F32((u32)(0x9023b8u));
    /* 00492128: fmul dword ptr [0xa47268] */ ST(0) = ST(0) * R_F32((u32)(0xa47268u));
    /* 0049212e: fstp dword ptr [0xa4728c] */ W_F32((u32)(0xa4728cu), ST(0)); FPOP();
    /* 00492134: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492137: ret  */ FN_RET(0x004920d8); r_esp += 4; return;
}

void f_00492138(void) /* sub_492138 */
{
    FN_ENTER(0x00492138);
    /* 00492138: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0049213b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049213e: cmp eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00492143: jl 0x492169 */ if ((fS!=fO)) goto L_00492169;
L_00492145:; BB(0x00492145);
    /* 00492145: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
    /* 0049214c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049214e: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00492151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492152: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492154: push 0x3d3 */ { u32 v = 0x3d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00492159: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49215eu); f_00814298();
    /* 0049215e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00492160: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x492165u); f_004d4288();
    /* 00492165: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492168: ret  */ FN_RET(0x00492138); r_esp += 4; return;
L_00492169:; BB(0x00492169);
    /* 00492169: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0049216c: ret  */ FN_RET(0x00492138); r_esp += 4; return;
}

void f_00492170(void) /* sub_492170 */
{
    FN_ENTER(0x00492170);
    /* 00492170: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00492171: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00492172: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00492175: mov edi, ecx */ r_edi = r_ecx;
    /* 00492177: fld dword ptr [0xa4726c] */ FPUSH(R_F32((u32)(0xa4726cu)));
    /* 0049217d: fld dword ptr [0xa47270] */ FPUSH(R_F32((u32)(0xa47270u)));
    /* 00492183: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492185: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00492189: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0049218d: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x492192u); f_00520db8();
    /* 00492192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492194: je 0x49219c */ if (fZ) goto L_0049219c;
L_00492196:; BB(0x00492196);
    /* 00492196: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492199: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049219a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049219b: ret  */ FN_RET(0x00492170); r_esp += 4; return;
L_0049219c:; BB(0x0049219c);
    /* 0049219c: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0049219f: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 004921a5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004921a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004921aa: je 0x4921bd */ if (fZ) goto L_004921bd;
L_004921ac:; BB(0x004921ac);
    /* 004921ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004921af: je 0x4921b6 */ if (fZ) goto L_004921b6;
L_004921b1:; BB(0x004921b1);
    /* 004921b1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004921b4: jne 0x4921e6 */ if (!fZ) goto L_004921e6;
L_004921b6:; BB(0x004921b6);
    /* 004921b6: mov ebx, 3 */ r_ebx = 0x3u;
    /* 004921bb: jmp 0x4921e6 */ goto L_004921e6;
L_004921bd:; BB(0x004921bd);
    /* 004921bd: call 0x48e580 */ r_esp -= 4; W32(r_esp, 0x4921c2u); f_0048e580();
    /* 004921c2: fcom dword ptr [0x902334] */ fx_compare(ST(0), R_F32((u32)(0x902334u))); 
    /* 004921c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004921ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004921cb: jae 0x4921d6 */ if (!fC) goto L_004921d6;
L_004921cd:; BB(0x004921cd);
    /* 004921cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004921cf: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004921d4: jmp 0x4921e6 */ goto L_004921e6;
L_004921d6:; BB(0x004921d6);
    /* 004921d6: fcomp dword ptr [0x902330] */ fx_compare(ST(0), R_F32((u32)(0x902330u))); FPOP();
    /* 004921dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004921de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004921df: jbe 0x4921e6 */ if ((fC||fZ)) goto L_004921e6;
L_004921e1:; BB(0x004921e1);
    /* 004921e1: mov ebx, 2 */ r_ebx = 0x2u;
L_004921e6:; BB(0x004921e6);
    /* 004921e6: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004921e9: je 0x492225 */ if (fZ) goto L_00492225;
L_004921eb:; BB(0x004921eb);
    /* 004921eb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004921ee: jne 0x492208 */ if (!fZ) goto L_00492208;
L_004921f0:; BB(0x004921f0);
    /* 004921f0: fld dword ptr [0xa4727c] */ FPUSH(R_F32((u32)(0xa4727cu)));
    /* 004921f6: fld dword ptr [0xa47278] */ FPUSH(R_F32((u32)(0xa47278u)));
    /* 004921fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004921fe: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00492202: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00492206: jmp 0x49223b */ goto L_0049223b;
L_00492208:; BB(0x00492208);
    /* 00492208: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049220b: jne 0x49223b */ if (!fZ) goto L_0049223b;
L_0049220d:; BB(0x0049220d);
    /* 0049220d: fld dword ptr [0xa47274] */ FPUSH(R_F32((u32)(0xa47274u)));
    /* 00492213: fld dword ptr [0xa47278] */ FPUSH(R_F32((u32)(0xa47278u)));
    /* 00492219: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049221b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0049221f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00492223: jmp 0x49223b */ goto L_0049223b;
L_00492225:; BB(0x00492225);
    /* 00492225: fld dword ptr [0xa47274] */ FPUSH(R_F32((u32)(0xa47274u)));
    /* 0049222b: fld dword ptr [0xa47280] */ FPUSH(R_F32((u32)(0xa47280u)));
    /* 00492231: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492233: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00492237: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_0049223b:; BB(0x0049223b);
    /* 0049223b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0049223f: mov ecx, dword ptr [0xa47294] */ r_ecx = R32((u32)(0xa47294u));
    /* 00492245: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00492248: and eax, 0x7ffff */ {  u32 a = r_eax; u32 b = 0x7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0049224d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00492250: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00492253: fdiv dword ptr [0x9023ac] */ ST(0) = ST(0) / R_F32((u32)(0x9023acu));
    /* 00492259: fadd dword ptr [0x9023b0] */ ST(0) = ST(0) + R_F32((u32)(0x9023b0u));
    /* 0049225f: fmul dword ptr [0xa47268] */ ST(0) = ST(0) * R_F32((u32)(0xa47268u));
    /* 00492265: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00492267: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0049226b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x492270u); f_00829cc8();
    /* 00492270: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00492272: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x492277u); f_007a94a0();
    /* 00492277: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00492278: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x49227du); f_00835068();
    /* 0049227d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00492281: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00492285: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00492287:; BB(0x00492287);
    /* 00492287: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492289: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049228b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0049228d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049228e: jbe 0x49231b */ if ((fC||fZ)) goto L_0049231b;
L_00492294:; BB(0x00492294);
    /* 00492294: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00492298: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049229a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0049229c:; BB(0x0049229c);
    /* 0049229c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4922a1u); f_0082d7b0();
    /* 004922a1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004922a4: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004922a8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004922ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004922ae: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004922b5: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004922bd: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4922c2u); f_00830b74();
    /* 004922c2: push dword ptr [ebx*4 + 0x902324] */ { u32 v = R32((u32)(r_ebx*4+0x902324u)); r_esp -= 4; W32(r_esp, v); }
    /* 004922c9: mov ecx, dword ptr [0xa47298] */ r_ecx = R32((u32)(0xa47298u));
    /* 004922cf: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4922d4u); f_005b8610();
    /* 004922d4: mov ecx, eax */ r_ecx = r_eax;
    /* 004922d6: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x4922dbu); f_00835090();
    /* 004922db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4922e0u); f_0082da80();
    /* 004922e0: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004922e4: fadd dword ptr [0xa47268] */ ST(0) = ST(0) + R_F32((u32)(0xa47268u));
    /* 004922ea: fcom dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); 
    /* 004922ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004922f0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004922f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004922f5: jb 0x49229c */ if (fC) goto L_0049229c;
L_004922f7:; BB(0x004922f7);
    /* 004922f7: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004922fb: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
L_004922ff:; BB(0x004922ff);
    /* 004922ff: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00492302: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492305: jl 0x492287 */ if ((fS!=fO)) goto L_00492287;
L_00492307:; BB(0x00492307);
    /* 00492307: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00492309: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049230b: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x492310u); f_00835078();
    /* 00492310: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x492315u); f_007a94b0();
    /* 00492315: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492318: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00492319: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049231a: ret  */ FN_RET(0x00492170); r_esp += 4; return;
L_0049231b:; BB(0x0049231b);
    /* 0049231b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049231d: jmp 0x4922ff */ goto L_004922ff;
}

void f_00492320(void) /* sub_492320 */
{
    FN_ENTER(0x00492320);
    /* 00492320: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
    /* 00492327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00492329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049232a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049232b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049232c: push 0x3d3 */ { u32 v = 0x3d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00492331: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x492336u); f_00814298();
    /* 00492336: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492339: ret  */ FN_RET(0x00492320); r_esp += 4; return;
}

void f_0049233c(void) /* sub_49233C */
{
    FN_ENTER(0x0049233c);
    /* 0049233c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049233d: mov ebp, esp */ r_ebp = r_esp;
    /* 0049233f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00492341: push 0x8d024c */ { u32 v = 0x8d024cu; r_esp -= 4; W32(r_esp, v); }
    /* 00492346: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049234c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049234d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00492354: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00492357: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049235a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0049235d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00492360: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00492363: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00492365: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0049236c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x492371u); f_005caba4();
    /* 00492371: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00492372: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00492375: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492377: je 0x4923aa */ if (fZ) goto L_004923aa;
L_00492379:; BB(0x00492379);
    /* 00492379: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00492380: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00492387: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049238a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049238d: call 0x4923b0 */ r_esp -= 4; W32(r_esp, 0x492392u); f_004923b0();
    /* 00492392: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00492395: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0049239c:; BB(0x0049239c);
    /* 0049239c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049239f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004923a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004923a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004923a9: ret  */ FN_RET(0x0049233c); r_esp += 4; return;
L_004923aa:; BB(0x004923aa);
    /* 004923aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004923ac: jmp 0x49239c */ goto L_0049239c;
}

void f_004923b0(void) /* sub_4923B0 */
{
    FN_ENTER(0x004923b0);
    /* 004923b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004923b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004923b2: mov edi, ecx */ r_edi = r_ecx;
    /* 004923b4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004923b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004923b9: mov ecx, edi */ r_ecx = r_edi;
    /* 004923bb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4923c0u); f_008193cc();
    /* 004923c0: mov dword ptr [edi], 0xaf9788 */ W32((u32)(r_edi), 0xaf9788u);
    /* 004923c6: mov eax, dword ptr [0x9a6da8] */ r_eax = R32((u32)(0x9a6da8u));
    /* 004923cb: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004923ce: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 004923d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004923d3: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 004923d6: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 004923d9: call 0x492760 */ r_esp -= 4; W32(r_esp, 0x4923deu); f_00492760();
    /* 004923de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004923e0: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004923e3: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004923e6: mov eax, edi */ r_eax = r_edi;
    /* 004923e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004923e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004923ea: ret 4 */ FN_RET(0x004923b0); r_esp += 8; return;
}

void f_004923f0(void) /* sub_4923F0 */
{
    FN_ENTER(0x004923f0);
    /* 004923f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004923f1: mov ecx, dword ptr [0xa47298] */ r_ecx = R32((u32)(0xa47298u));
    /* 004923f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004923f9: je 0x492428 */ if (fZ) goto L_00492428;
L_004923fb:; BB(0x004923fb);
    /* 004923fb: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004923fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00492400: mov ebx, eax */ r_ebx = r_eax;
    /* 00492402: jmp 0x49240a */ goto L_0049240a;
L_00492404:; BB(0x00492404);
    /* 00492404: mov ecx, dword ptr [0xa47298] */ r_ecx = R32((u32)(0xa47298u));
L_0049240a:; BB(0x0049240a);
    /* 0049240a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049240b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x492410u); f_005b8610();
    /* 00492410: mov ecx, eax */ r_ecx = r_eax;
    /* 00492412: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x492417u); f_00834f64();
    /* 00492417: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049241a: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049241d: jb 0x492404 */ if (fC) goto L_00492404;
L_0049241f:; BB(0x0049241f);
    /* 0049241f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00492422: mov ecx, dword ptr [0xa47298] */ r_ecx = R32((u32)(0xa47298u));
L_00492428:; BB(0x00492428);
    /* 00492428: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049242a: je 0x49243f */ if (fZ) goto L_0049243f;
L_0049242c:; BB(0x0049242c);
    /* 0049242c: je 0x492435 */ if (fZ) goto L_00492435;
L_0049242e:; BB(0x0049242e);
    /* 0049242e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00492430: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x492435u); f_004066a8();
L_00492435:; BB(0x00492435);
    /* 00492435: mov dword ptr [0xa47298], 0 */ W32((u32)(0xa47298u), 0x0u);
L_0049243f:; BB(0x0049243f);
    /* 0049243f: mov ecx, dword ptr [0xa47294] */ r_ecx = R32((u32)(0xa47294u));
    /* 00492445: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492447: je 0x492464 */ if (fZ) goto L_00492464;
L_00492449:; BB(0x00492449);
    /* 00492449: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x49244eu); f_00829de0();
    /* 0049244e: push dword ptr [0xa47294] */ { u32 v = R32((u32)(0xa47294u)); r_esp -= 4; W32(r_esp, v); }
    /* 00492454: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x492459u); f_0082e960();
    /* 00492459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049245a: mov dword ptr [0xa47294], 0 */ W32((u32)(0xa47294u), 0x0u);
L_00492464:; BB(0x00492464);
    /* 00492464: call 0x492760 */ r_esp -= 4; W32(r_esp, 0x492469u); f_00492760();
    /* 00492469: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049246a: ret  */ FN_RET(0x004923f0); r_esp += 4; return;
}

void f_0049246c(void) /* sub_49246C */
{
    FN_ENTER(0x0049246c);
    /* 0049246c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049246f: fld dword ptr [0x902384] */ FPUSH(R_F32((u32)(0x902384u)));
    /* 00492475: mov dword ptr [0xa47284], 0x44480000 */ W32((u32)(0xa47284u), 0x44480000u);
    /* 0049247f: fld dword ptr [0xa47284] */ FPUSH(R_F32((u32)(0xa47284u)));
    /* 00492485: fdiv dword ptr [0x902368] */ ST(0) = ST(0) / R_F32((u32)(0x902368u));
    /* 0049248b: fst dword ptr [0xa47288] */ W_F32((u32)(0xa47288u), ST(0));
    /* 00492491: mov dword ptr [0xa47268], 0x44480000 */ W32((u32)(0xa47268u), 0x44480000u);
    /* 0049249b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049249d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004924a0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004924a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004924a9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004924ad: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004924b1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004924b5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004924b8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004924bc: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 004924c1: mov dword ptr [0xa4726c], 0xc4c80000 */ W32((u32)(0xa4726cu), 0xc4c80000u);
    /* 004924cb: mov dword ptr [0xa47264], ecx */ W32((u32)(0xa47264u), r_ecx);
    /* 004924d1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004924d3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004924d5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004924d7: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004924d9: mov dword ptr [0xa47270], 0x45160000 */ W32((u32)(0xa47270u), 0x45160000u);
    /* 004924e3: sar edx, 9 */ { u32 c = (9u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004924e6: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004924e9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004924eb: mov dword ptr [0xa4727c], 0xc4480000 */ W32((u32)(0xa4727cu), 0xc4480000u);
    /* 004924f5: mov dword ptr [0xa47260], edx */ W32((u32)(0xa47260u), r_edx);
    /* 004924fb: mov dword ptr [0xa47280], 0x44c80000 */ W32((u32)(0xa47280u), 0x44c80000u);
    /* 00492505: mov dword ptr [0xa47274], 0xc5960000 */ W32((u32)(0xa47274u), 0xc5960000u);
    /* 0049250f: mov dword ptr [0xa47278], 0x45af0000 */ W32((u32)(0xa47278u), 0x45af0000u);
    /* 00492519: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049251c: ret  */ FN_RET(0x0049246c); r_esp += 4; return;
}

void f_00492520(void) /* sub_492520 */
{
    FN_ENTER(0x00492520);
    /* 00492520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00492521: mov ebp, esp */ r_ebp = r_esp;
    /* 00492523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00492525: push 0x8d0274 */ { u32 v = 0x8d0274u; r_esp -= 4; W32(r_esp, v); }
    /* 0049252a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00492530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00492538: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049253b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049253e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00492541: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00492544: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00492547: call 0x492760 */ r_esp -= 4; W32(r_esp, 0x49254cu); f_00492760();
    /* 0049254c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00492553: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00492558: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x49255du); f_008581c5();
    /* 0049255d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049255e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00492561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492563: je 0x492746 */ if (fZ) goto L_00492746;
L_00492569:; BB(0x00492569);
    /* 00492569: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00492570: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00492577: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049257a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049257c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049257d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049257e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049257f: push 0x9a6d98 */ { u32 v = 0x9a6d98u; r_esp -= 4; W32(r_esp, v); }
    /* 00492584: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00492586: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x49258bu); f_005b7a84();
    /* 0049258b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049258e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00492595:; BB(0x00492595);
    /* 00492595: mov dword ptr [0xa47298], eax */ W32((u32)(0xa47298u), r_eax);
    /* 0049259a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004925a1: push 0x90241c */ { u32 v = 0x90241cu; r_esp -= 4; W32(r_esp, v); }
    /* 004925a6: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x4925abu); f_008009dc();
    /* 004925ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004925ac: mov ecx, dword ptr [0xa47298] */ r_ecx = R32((u32)(0xa47298u));
    /* 004925b2: mov dword ptr [0xa47294], eax */ W32((u32)(0xa47294u), r_eax);
    /* 004925b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004925b9: je 0x49272f */ if (fZ) goto L_0049272f;
L_004925bf:; BB(0x004925bf);
    /* 004925bf: mov eax, dword ptr [0xa47294] */ r_eax = R32((u32)(0xa47294u));
    /* 004925c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004925c6: je 0x49272f */ if (fZ) goto L_0049272f;
L_004925cc:; BB(0x004925cc);
    /* 004925cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004925ce: je 0x4925ef */ if (fZ) goto L_004925ef;
L_004925d0:; BB(0x004925d0);
    /* 004925d0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004925d2:; BB(0x004925d2);
    /* 004925d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004925d3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4925d8u); f_005b8610();
    /* 004925d8: mov ecx, eax */ r_ecx = r_eax;
    /* 004925da: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x4925dfu); f_00834c58();
    /* 004925df: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004925e2: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004925e5: jae 0x4925ef */ if (!fC) goto L_004925ef;
L_004925e7:; BB(0x004925e7);
    /* 004925e7: mov ecx, dword ptr [0xa47298] */ r_ecx = R32((u32)(0xa47298u));
    /* 004925ed: jmp 0x4925d2 */ goto L_004925d2;
L_004925ef:; BB(0x004925ef);
    /* 004925ef: call 0x482a30 */ r_esp -= 4; W32(r_esp, 0x4925f4u); f_00482a30();
    /* 004925f4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004925f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004925f9: je 0x4926e4 */ if (fZ) goto L_004926e4;
L_004925ff:; BB(0x004925ff);
    /* 004925ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00492602: jne 0x492671 */ if (!fZ) goto L_00492671;
L_00492604:; BB(0x00492604);
    /* 00492604: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 0049260a: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 00492610: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 00492616: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00492618: fld dword ptr [0x902364] */ FPUSH(R_F32((u32)(0x902364u)));
    /* 0049261e: fld dword ptr [0x902360] */ FPUSH(R_F32((u32)(0x902360u)));
    /* 00492624: fld dword ptr [0x902354] */ FPUSH(R_F32((u32)(0x902354u)));
    /* 0049262a: fld dword ptr [0x902350] */ FPUSH(R_F32((u32)(0x902350u)));
    /* 00492630: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00492632: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00492634: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00492636: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00492638: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049263a: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0049263c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0049263e: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 00492640: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492642: fstp dword ptr [0xa4726c] */ W_F32((u32)(0xa4726cu), ST(0)); FPOP();
    /* 00492648: fstp dword ptr [0xa47270] */ W_F32((u32)(0xa47270u), ST(0)); FPOP();
    /* 0049264e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492650: fstp dword ptr [0xa47280] */ W_F32((u32)(0xa47280u), ST(0)); FPOP();
    /* 00492656: fstp dword ptr [0xa47274] */ W_F32((u32)(0xa47274u), ST(0)); FPOP();
    /* 0049265c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049265e: fstp dword ptr [0xa47278] */ W_F32((u32)(0xa47278u), ST(0)); FPOP();
    /* 00492664: fchs  */ ST(0) = -ST(0);
    /* 00492666: fstp dword ptr [0xa4727c] */ W_F32((u32)(0xa4727cu), ST(0)); FPOP();
    /* 0049266c: jmp 0x49272f */ goto L_0049272f;
L_00492671:; BB(0x00492671);
    /* 00492671: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00492674: jne 0x49272f */ if (!fZ) goto L_0049272f;
L_0049267a:; BB(0x0049267a);
    /* 0049267a: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 00492680: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 00492686: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 0049268c: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0049268e: fld dword ptr [0x902364] */ FPUSH(R_F32((u32)(0x902364u)));
    /* 00492694: fld dword ptr [0x902360] */ FPUSH(R_F32((u32)(0x902360u)));
    /* 0049269a: fld dword ptr [0x90235c] */ FPUSH(R_F32((u32)(0x90235cu)));
    /* 004926a0: fld dword ptr [0x902358] */ FPUSH(R_F32((u32)(0x902358u)));
    /* 004926a6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004926a8: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 004926aa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004926ac: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 004926ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004926b0: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 004926b2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004926b4: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 004926b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004926b8: fstp dword ptr [0xa4726c] */ W_F32((u32)(0xa4726cu), ST(0)); FPOP();
    /* 004926be: fstp dword ptr [0xa47270] */ W_F32((u32)(0xa47270u), ST(0)); FPOP();
    /* 004926c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004926c6: fstp dword ptr [0xa47280] */ W_F32((u32)(0xa47280u), ST(0)); FPOP();
    /* 004926cc: fstp dword ptr [0xa47274] */ W_F32((u32)(0xa47274u), ST(0)); FPOP();
    /* 004926d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004926d4: fstp dword ptr [0xa47278] */ W_F32((u32)(0xa47278u), ST(0)); FPOP();
    /* 004926da: fchs  */ ST(0) = -ST(0);
    /* 004926dc: fstp dword ptr [0xa4727c] */ W_F32((u32)(0xa4727cu), ST(0)); FPOP();
    /* 004926e2: jmp 0x49272f */ goto L_0049272f;
L_004926e4:; BB(0x004926e4);
    /* 004926e4: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 004926ea: fld dword ptr [0xa47268] */ FPUSH(R_F32((u32)(0xa47268u)));
    /* 004926f0: mov eax, dword ptr [0xa47268] */ r_eax = R32((u32)(0xa47268u));
    /* 004926f5: fld dword ptr [0x902364] */ FPUSH(R_F32((u32)(0x902364u)));
    /* 004926fb: fld dword ptr [0x902360] */ FPUSH(R_F32((u32)(0x902360u)));
    /* 00492701: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492703: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00492705: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492707: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00492709: fstp dword ptr [0xa47274] */ W_F32((u32)(0xa47274u), ST(0)); FPOP();
    /* 0049270f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492711: fstp dword ptr [0xa47278] */ W_F32((u32)(0xa47278u), ST(0)); FPOP();
    /* 00492717: fchs  */ ST(0) = -ST(0);
    /* 00492719: fst dword ptr [0xa4726c] */ W_F32((u32)(0xa4726cu), ST(0));
    /* 0049271f: fstp dword ptr [0xa4727c] */ W_F32((u32)(0xa4727cu), ST(0)); FPOP();
    /* 00492725: mov dword ptr [0xa47270], eax */ W32((u32)(0xa47270u), r_eax);
    /* 0049272a: mov dword ptr [0xa47280], eax */ W32((u32)(0xa47280u), r_eax);
L_0049272f:; BB(0x0049272f);
    /* 0049272f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00492732: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00492735: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00492738: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049273b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00492742: mov esp, ebp */ r_esp = r_ebp;
    /* 00492744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00492745: ret  */ FN_RET(0x00492520); r_esp += 4; return;
L_00492746:; BB(0x00492746);
    /* 00492746: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00492748: jmp 0x492595 */ goto L_00492595;
}

void f_00492750(void) /* sub_492750 */
{
    FN_ENTER(0x00492750);
    /* 00492750: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00492757: mov dword ptr [ecx + 0x1c], 2 */ W32((u32)(r_ecx+0x1cu), 0x2u);
    /* 0049275e: ret  */ FN_RET(0x00492750); r_esp += 4; return;
}

void f_00492760(void) /* sub_492760 */
{
    FN_ENTER(0x00492760);
    /* 00492760: mov dword ptr [0xa4728c], 0 */ W32((u32)(0xa4728cu), 0x0u);
    /* 0049276a: mov dword ptr [0xa47290], 0 */ W32((u32)(0xa47290u), 0x0u);
    /* 00492774: ret  */ FN_RET(0x00492760); r_esp += 4; return;
}

void f_00492778(void) /* sub_492778 */
{
    FN_ENTER(0x00492778);
    /* 00492778: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00492779: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049277c: mov edi, ecx */ r_edi = r_ecx;
    /* 0049277e: movzx edx, byte ptr [0xa47248] */ r_edx = (u32)R8((u32)(0xa47248u));
    /* 00492785: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00492788: jne 0x4927bc */ if (!fZ) goto L_004927bc;
L_0049278a:; BB(0x0049278a);
    /* 0049278a: fild dword ptr [0xa47260] */ FPUSH((long double)(i32)R32((u32)(0xa47260u)));
    /* 00492790: fmul dword ptr [0x902348] */ ST(0) = ST(0) * R_F32((u32)(0x902348u));
    /* 00492796: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00492799: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049279d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004927a2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004927a6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004927aa: fistp dword ptr [0xa4724c] */ W32((u32)(0xa4724cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004927b0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004927b3: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004927b6: mov byte ptr [0xa47248], dl */ W8((u32)(0xa47248u), (u8)r_edx);
L_004927bc:; BB(0x004927bc);
    /* 004927bc: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004927bf: jne 0x4927f3 */ if (!fZ) goto L_004927f3;
L_004927c1:; BB(0x004927c1);
    /* 004927c1: fild dword ptr [0xa47260] */ FPUSH((long double)(i32)R32((u32)(0xa47260u)));
    /* 004927c7: fmul dword ptr [0x902344] */ ST(0) = ST(0) * R_F32((u32)(0x902344u));
    /* 004927cd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004927d0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004927d4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004927d9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004927dd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004927e1: fistp dword ptr [0xa47250] */ W32((u32)(0xa47250u), (u32)fx_int32(ST(0))); FPOP();
    /* 004927e7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004927ea: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004927ed: mov byte ptr [0xa47248], dl */ W8((u32)(0xa47248u), (u8)r_edx);
L_004927f3:; BB(0x004927f3);
    /* 004927f3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004927f6: jne 0x492814 */ if (!fZ) goto L_00492814;
L_004927f8:; BB(0x004927f8);
    /* 004927f8: mov eax, dword ptr [0xa47250] */ r_eax = R32((u32)(0xa47250u));
    /* 004927fd: sub eax, dword ptr [0xa4724c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa4724cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00492803: mov dword ptr [0xa47254], eax */ W32((u32)(0xa47254u), r_eax);
    /* 00492808: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049280e: mov byte ptr [0xa47248], dl */ W8((u32)(0xa47248u), (u8)r_edx);
L_00492814:; BB(0x00492814);
    /* 00492814: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x492819u); f_008587a5();
    /* 00492819: fild dword ptr [0xa4724c] */ FPUSH((long double)(i32)R32((u32)(0xa4724cu)));
    /* 0049281f: fild dword ptr [0xa47254] */ FPUSH((long double)(i32)R32((u32)(0xa47254u)));
    /* 00492825: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00492829: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0049282d: fdiv dword ptr [0x902340] */ ST(0) = ST(0) / R_F32((u32)(0x902340u));
    /* 00492833: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00492835: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00492837: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049283a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049283e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00492843: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00492847: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049284b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049284f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00492852: fld dword ptr [0x90233c] */ FPUSH(R_F32((u32)(0x90233cu)));
    /* 00492858: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0049285c: add edx, dword ptr [edi + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049285f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00492863: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00492867: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00492869: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049286b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049286c: ja 0x492941 */ if ((!fC&&!fZ)) goto L_00492941;
L_00492872:; BB(0x00492872);
    /* 00492872: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492874: movzx edx, byte ptr [0xa47248] */ r_edx = (u32)R8((u32)(0xa47248u));
    /* 0049287b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049287e: jne 0x4928ac */ if (!fZ) goto L_004928ac;
L_00492880:; BB(0x00492880);
    /* 00492880: fild dword ptr [0xa47264] */ FPUSH((long double)(i32)R32((u32)(0xa47264u)));
    /* 00492886: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00492889: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049288d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00492892: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00492896: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049289a: fistp dword ptr [0xa47258] */ W32((u32)(0xa47258u), (u32)fx_int32(ST(0))); FPOP();
    /* 004928a0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004928a3: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004928a6: mov byte ptr [0xa47248], dl */ W8((u32)(0xa47248u), (u8)r_edx);
L_004928ac:; BB(0x004928ac);
    /* 004928ac: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004928af: jne 0x4928e6 */ if (!fZ) goto L_004928e6;
L_004928b1:; BB(0x004928b1);
    /* 004928b1: fild dword ptr [0xa47258] */ FPUSH((long double)(i32)R32((u32)(0xa47258u)));
    /* 004928b7: fmul dword ptr [0x902338] */ ST(0) = ST(0) * R_F32((u32)(0x902338u));
    /* 004928bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004928c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004928c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004928c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004928cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004928d1: fistp dword ptr [0xa4725c] */ W32((u32)(0xa4725cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004928d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004928da: or edx, 0xffffff10 */ {  u32 a = r_edx; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004928e0: mov byte ptr [0xa47248], dl */ W8((u32)(0xa47248u), (u8)r_edx);
L_004928e6:; BB(0x004928e6);
    /* 004928e6: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 004928ed: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4928f2u); f_008587a5();
    /* 004928f2: fild dword ptr [0xa4725c] */ FPUSH((long double)(i32)R32((u32)(0xa4725cu)));
    /* 004928f8: fild dword ptr [0xa47258] */ FPUSH((long double)(i32)R32((u32)(0xa47258u)));
    /* 004928fe: fild dword ptr [edi + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x28u)));
    /* 00492901: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00492904: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00492908: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0049290c: fdiv dword ptr [0x902340] */ ST(0) = ST(0) / R_F32((u32)(0x902340u));
    /* 00492912: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00492914: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00492916: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00492918: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049291a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049291d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00492921: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00492926: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049292a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049292e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00492932: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00492935: fld dword ptr [0x90233c] */ FPUSH(R_F32((u32)(0x90233cu)));
    /* 0049293b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0049293f: jmp 0x492947 */ goto L_00492947;
L_00492941:; BB(0x00492941);
    /* 00492941: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00492944: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
L_00492947:; BB(0x00492947);
    /* 00492947: fstp dword ptr [0xa4728c] */ W_F32((u32)(0xa4728cu), ST(0)); FPOP();
    /* 0049294d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049294f: mov dword ptr [0xa47290], eax */ W32((u32)(0xa47290u), r_eax);
    /* 00492954: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 00492957: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049295a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049295b: ret  */ FN_RET(0x00492778); r_esp += 4; return;
}

void f_0049295c(void) /* sub_49295C */
{
    FN_ENTER(0x0049295c);
    /* 0049295c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049295d: mov ebp, esp */ r_ebp = r_esp;
    /* 0049295f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00492961: push 0x8d0290 */ { u32 v = 0x8d0290u; r_esp -= 4; W32(r_esp, v); }
    /* 00492966: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049296c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049296d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00492974: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00492977: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049297a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0049297d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00492980: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00492983: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00492986: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00492989: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00492990: mov dword ptr [ecx], 0xaf9820 */ W32((u32)(r_ecx), 0xaf9820u);
    /* 00492996: call 0x492a60 */ r_esp -= 4; W32(r_esp, 0x49299bu); f_00492a60();
    /* 0049299b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049299e: call 0x497138 */ r_esp -= 4; W32(r_esp, 0x4929a3u); f_00497138();
    /* 004929a3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004929a5:; BB(0x004929a5);
    /* 004929a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004929a8: mov eax, dword ptr [eax + esi*4 + 0x500] */ r_eax = R32((u32)(r_eax+r_esi*4+0x500u));
    /* 004929af: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004929b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004929b4: je 0x4929cb */ if (fZ) goto L_004929cb;
L_004929b6:; BB(0x004929b6);
    /* 004929b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004929b7: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4929bcu); f_005cdcc0();
    /* 004929bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004929bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004929c0: mov dword ptr [eax + ebx*2 + 0x500], 0 */ W32((u32)(r_eax+r_ebx*2+0x500u), 0x0u);
L_004929cb:; BB(0x004929cb);
    /* 004929cb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004929ce: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004929d1: jl 0x4929a5 */ if ((fS!=fO)) goto L_004929a5;
L_004929d3:; BB(0x004929d3);
    /* 004929d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004929d6: lea ecx, [eax + 0x674] */ r_ecx = (u32)(r_eax+0x674u);
    /* 004929dc: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x4929e1u); f_0048ead0();
    /* 004929e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004929e4: lea ecx, [eax + 0x660] */ r_ecx = (u32)(r_eax+0x660u);
    /* 004929ea: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x4929efu); f_0048ead0();
    /* 004929ef: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004929f1:; BB(0x004929f1);
    /* 004929f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004929f4: mov ecx, dword ptr [eax + esi*4 + 0x658] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x658u));
    /* 004929fb: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004929fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492a00: je 0x492a15 */ if (fZ) goto L_00492a15;
L_00492a02:; BB(0x00492a02);
    /* 00492a02: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x492a07u); f_005883f0();
    /* 00492a07: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00492a0a: mov dword ptr [eax + ebx*2 + 0x658], 0 */ W32((u32)(r_eax+r_ebx*2+0x658u), 0x0u);
L_00492a15:; BB(0x00492a15);
    /* 00492a15: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492a18: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492a1b: jl 0x4929f1 */ if ((fS!=fO)) goto L_004929f1;
L_00492a1d:; BB(0x00492a1d);
    /* 00492a1d: mov ecx, eax */ r_ecx = r_eax;
    /* 00492a1f: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x492a24u); f_007b9c8c();
    /* 00492a24: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00492a2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00492a2e: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x492a33u); f_0078638c();
    /* 00492a33: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00492a36: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00492a38: jne 0x492a53 */ if (!fZ) goto L_00492a53;
L_00492a3a:; BB(0x00492a3a);
    /* 00492a3a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00492a3d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00492a40: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00492a43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00492a46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00492a4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00492a4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00492a50: ret 4 */ FN_RET(0x0049295c); r_esp += 8; return;
L_00492a53:; BB(0x00492a53);
    /* 00492a53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00492a56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492a57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x492a5cu); f_005c2f74();
    /* 00492a5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00492a5d: jmp 0x492a3a */ goto L_00492a3a;
}

void f_00492a60(void) /* sub_492A60 */
{
    FN_ENTER(0x00492a60);
    /* 00492a60: mov edx, dword ptr [ecx + 0x688] */ r_edx = R32((u32)(r_ecx+0x688u));
    /* 00492a66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00492a68: je 0x492a81 */ if (fZ) goto L_00492a81;
L_00492a6a:; BB(0x00492a6a);
    /* 00492a6a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00492a6e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00492a73: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00492a77: mov dword ptr [ecx + 0x688], 0 */ W32((u32)(r_ecx+0x688u), 0x0u);
L_00492a81:; BB(0x00492a81);
    /* 00492a81: ret  */ FN_RET(0x00492a60); r_esp += 4; return;
}

void f_00492a84(void) /* sub_492A84 */
{
    FN_ENTER(0x00492a84);
    /* 00492a84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00492a85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00492a86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00492a87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00492a88: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00492a8b: mov edi, ecx */ r_edi = r_ecx;
    /* 00492a8d: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00492a93: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00492a96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492a98: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00492a9a: mov eax, dword ptr [edx*8 + 0x9a70b4] */ r_eax = R32((u32)(r_edx*8+0x9a70b4u));
    /* 00492aa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492aa3: je 0x492aa9 */ if (fZ) goto L_00492aa9;
L_00492aa5:; BB(0x00492aa5);
    /* 00492aa5: mov ecx, edi */ r_ecx = r_edi;
    /* 00492aa7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x492aa9u); call_ind(t); }
L_00492aa9:; BB(0x00492aa9);
    /* 00492aa9: mov eax, dword ptr [edi + 0x400] */ r_eax = R32((u32)(r_edi+0x400u));
    /* 00492aaf: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00492ab5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492ab7: jne 0x492ad5 */ if (!fZ) goto L_00492ad5;
L_00492ab9:; BB(0x00492ab9);
    /* 00492ab9: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00492abf: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00492ac2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492ac4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00492ac6: mov eax, dword ptr [edx*8 + 0x9a70b0] */ r_eax = R32((u32)(r_edx*8+0x9a70b0u));
    /* 00492acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492acf: je 0x492ad5 */ if (fZ) goto L_00492ad5;
L_00492ad1:; BB(0x00492ad1);
    /* 00492ad1: mov ecx, edi */ r_ecx = r_edi;
    /* 00492ad3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x492ad5u); call_ind(t); }
L_00492ad5:; BB(0x00492ad5);
    /* 00492ad5: mov edx, dword ptr [edi + 0x44c] */ r_edx = R32((u32)(r_edi+0x44cu));
    /* 00492adb: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 00492ade: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00492ae1: fld dword ptr [edi + 0x450] */ FPUSH(R_F32((u32)(r_edi+0x450u)));
    /* 00492ae7: fadd dword ptr [edi + 0x454] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x454u));
    /* 00492aed: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00492af0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492af2: fadd dword ptr [eax*4 + 0x902958] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x902958u));
    /* 00492af9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492afb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492afd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492afe: ja 0x492b0a */ if ((!fC&&!fZ)) goto L_00492b0a;
L_00492b00:; BB(0x00492b00);
    /* 00492b00: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00492b02: fstp dword ptr [edi + 0x450] */ W_F32((u32)(r_edi+0x450u), ST(0)); FPOP();
    /* 00492b08: jmp 0x492b12 */ goto L_00492b12;
L_00492b0a:; BB(0x00492b0a);
    /* 00492b0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492b0c: fstp dword ptr [edi + 0x450] */ W_F32((u32)(r_edi+0x450u), ST(0)); FPOP();
L_00492b12:; BB(0x00492b12);
    /* 00492b12: fld dword ptr [0x902c90] */ FPUSH(R_F32((u32)(0x902c90u)));
    /* 00492b18: fld dword ptr [edi + 0x458] */ FPUSH(R_F32((u32)(r_edi+0x458u)));
    /* 00492b1e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492b20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492b22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492b23: je 0x493070 */ if (fZ) goto L_00493070;
L_00492b29:; BB(0x00492b29);
    /* 00492b29: fld dword ptr [edi + 0x45c] */ FPUSH(R_F32((u32)(r_edi+0x45cu)));
    /* 00492b2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00492b31: fcom dword ptr [0x902c8c] */ fx_compare(ST(0), R_F32((u32)(0x902c8cu))); 
    /* 00492b37: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492b39: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492b3a: jb 0x492b48 */ if (fC) goto L_00492b48;
L_00492b3c:; BB(0x00492b3c);
    /* 00492b3c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492b3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00492b40: mov dword ptr [edi + 0x458], eax */ W32((u32)(r_edi+0x458u), r_eax);
    /* 00492b46: jmp 0x492b4e */ goto L_00492b4e;
L_00492b48:; BB(0x00492b48);
    /* 00492b48: fstp dword ptr [edi + 0x458] */ W_F32((u32)(r_edi+0x458u), ST(0)); FPOP();
L_00492b4e:; BB(0x00492b4e);
    /* 00492b4e: mov eax, dword ptr [edi + 0x468] */ r_eax = R32((u32)(r_edi+0x468u));
    /* 00492b54: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00492b57: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00492b5a: fld dword ptr [edi + 0x46c] */ FPUSH(R_F32((u32)(r_edi+0x46cu)));
    /* 00492b60: fadd dword ptr [edi + 0x470] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x470u));
    /* 00492b66: mov eax, dword ptr [edi + 0x448] */ r_eax = R32((u32)(r_edi+0x448u));
    /* 00492b6c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00492b6f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492b71: fadd dword ptr [edx*4 + 0x902958] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x902958u));
    /* 00492b78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492b7a: jne 0x492b9d */ if (!fZ) goto L_00492b9d;
L_00492b7c:; BB(0x00492b7c);
    /* 00492b7c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492b7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492b80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492b81: ja 0x492b90 */ if ((!fC&&!fZ)) goto L_00492b90;
L_00492b83:; BB(0x00492b83);
    /* 00492b83: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00492b85: fstp dword ptr [edi + 0x46c] */ W_F32((u32)(r_edi+0x46cu), ST(0)); FPOP();
    /* 00492b8b: jmp 0x492c56 */ goto L_00492c56;
L_00492b90:; BB(0x00492b90);
    /* 00492b90: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492b92: fstp dword ptr [edi + 0x46c] */ W_F32((u32)(r_edi+0x46cu), ST(0)); FPOP();
    /* 00492b98: jmp 0x492c56 */ goto L_00492c56;
L_00492b9d:; BB(0x00492b9d);
    /* 00492b9d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492ba0: jne 0x492c4e */ if (!fZ) goto L_00492c4e;
L_00492ba6:; BB(0x00492ba6);
    /* 00492ba6: fld dword ptr [0x902c94] */ FPUSH(R_F32((u32)(0x902c94u)));
    /* 00492bac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00492bae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492bb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492bb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492bb3: jbe 0x492bc2 */ if ((fC||fZ)) goto L_00492bc2;
L_00492bb5:; BB(0x00492bb5);
    /* 00492bb5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492bb7: fstp dword ptr [edi + 0x46c] */ W_F32((u32)(r_edi+0x46cu), ST(0)); FPOP();
    /* 00492bbd: jmp 0x492c56 */ goto L_00492c56;
L_00492bc2:; BB(0x00492bc2);
    /* 00492bc2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00492bc4: mov edx, dword ptr [edi + 0x444] */ r_edx = R32((u32)(r_edi+0x444u));
    /* 00492bca: fstp dword ptr [edi + 0x46c] */ W_F32((u32)(r_edi+0x46cu), ST(0)); FPOP();
    /* 00492bd0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00492bd3: mov eax, dword ptr [eax*8 + 0x9a6dc4] */ r_eax = R32((u32)(r_eax*8+0x9a6dc4u));
    /* 00492bda: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492bdd: je 0x492c56 */ if (fZ) goto L_00492c56;
L_00492bdf:; BB(0x00492bdf);
    /* 00492bdf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492be1: je 0x492c56 */ if (fZ) goto L_00492c56;
L_00492be3:; BB(0x00492be3);
    /* 00492be3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492be5: mov dword ptr [edi + 0x444], eax */ W32((u32)(r_edi+0x444u), r_eax);
    /* 00492beb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492bed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492bef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492bf1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492bf3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00492bf5: mov edx, dword ptr [eax + 0x9a6dc0] */ r_edx = R32((u32)(r_eax+0x9a6dc0u));
    /* 00492bfb: mov dword ptr [edi + 0x448], edx */ W32((u32)(r_edi+0x448u), r_edx);
    /* 00492c01: lea edx, [edi + 0x44c] */ r_edx = (u32)(r_edi+0x44cu);
    /* 00492c07: mov esi, eax */ r_esi = r_eax;
    /* 00492c09: mov ebx, edx */ r_ebx = r_edx;
    /* 00492c0b: mov ebp, ecx */ r_ebp = r_ecx;
L_00492c0d:; BB(0x00492c0d);
    /* 00492c0d: push dword ptr [esi + ebp*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_esi+r_ebp*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00492c14: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 00492c1a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x492c1fu); f_005b8638();
    /* 00492c1f: fld dword ptr [0x902c90] */ FPUSH(R_F32((u32)(0x902c90u)));
    /* 00492c25: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00492c28: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 00492c2b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00492c2d: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 00492c30: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00492c33: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
    /* 00492c3a: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00492c3d: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00492c3f: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00492c42: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00492c45: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492c48: jge 0x492c56 */ if ((fS==fO)) goto L_00492c56;
L_00492c4a:; BB(0x00492c4a);
    /* 00492c4a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492c4c: jmp 0x492c0d */ goto L_00492c0d;
L_00492c4e:; BB(0x00492c4e);
    /* 00492c4e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492c50: fstp dword ptr [edi + 0x46c] */ W_F32((u32)(r_edi+0x46cu), ST(0)); FPOP();
L_00492c56:; BB(0x00492c56);
    /* 00492c56: fld dword ptr [edi + 0x474] */ FPUSH(R_F32((u32)(r_edi+0x474u)));
    /* 00492c5c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492c5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492c60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492c61: je 0x493077 */ if (fZ) goto L_00493077;
L_00492c67:; BB(0x00492c67);
    /* 00492c67: fld dword ptr [edi + 0x478] */ FPUSH(R_F32((u32)(r_edi+0x478u)));
    /* 00492c6d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00492c6f: fcom dword ptr [0x902c8c] */ fx_compare(ST(0), R_F32((u32)(0x902c8cu))); 
    /* 00492c75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492c77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492c78: jb 0x492c84 */ if (fC) goto L_00492c84;
L_00492c7a:; BB(0x00492c7a);
    /* 00492c7a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492c7c: fstp dword ptr [edi + 0x474] */ W_F32((u32)(r_edi+0x474u), ST(0)); FPOP();
    /* 00492c82: jmp 0x492c8c */ goto L_00492c8c;
L_00492c84:; BB(0x00492c84);
    /* 00492c84: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00492c86: fstp dword ptr [edi + 0x474] */ W_F32((u32)(r_edi+0x474u), ST(0)); FPOP();
L_00492c8c:; BB(0x00492c8c);
    /* 00492c8c: mov ecx, edi */ r_ecx = r_edi;
    /* 00492c8e: call 0x493080 */ r_esp -= 4; W32(r_esp, 0x492c93u); f_00493080();
    /* 00492c93: mov ecx, edi */ r_ecx = r_edi;
    /* 00492c95: call 0x4931c0 */ r_esp -= 4; W32(r_esp, 0x492c9au); f_004931c0();
    /* 00492c9a: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 00492ca0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492ca2: je 0x492d79 */ if (fZ) goto L_00492d79;
L_00492ca8:; BB(0x00492ca8);
    /* 00492ca8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00492caa: mov ebp, eax */ r_ebp = r_eax;
    /* 00492cac: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00492cae: jmp 0x492cb6 */ goto L_00492cb6;
L_00492cb0:; BB(0x00492cb0);
    /* 00492cb0: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
L_00492cb6:; BB(0x00492cb6);
    /* 00492cb6: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00492cba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492cbc: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00492cbe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492cc0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492cc2: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00492cc4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492cc6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492cc8: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00492cca: mov edx, dword ptr [ebp*8 + 0x902460] */ r_edx = R32((u32)(r_ebp*8+0x902460u));
    /* 00492cd1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492cd4: jne 0x492cde */ if (!fZ) goto L_00492cde;
L_00492cd6:; BB(0x00492cd6);
    /* 00492cd6: lea eax, [edi + 0x580] */ r_eax = (u32)(r_edi+0x580u);
    /* 00492cdc: jmp 0x492cec */ goto L_00492cec;
L_00492cde:; BB(0x00492cde);
    /* 00492cde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492ce0: jne 0x492d79 */ if (!fZ) goto L_00492d79;
L_00492ce6:; BB(0x00492ce6);
    /* 00492ce6: lea eax, [edi + 0x604] */ r_eax = (u32)(r_edi+0x604u);
L_00492cec:; BB(0x00492cec);
    /* 00492cec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492cee: je 0x492d79 */ if (fZ) goto L_00492d79;
L_00492cf4:; BB(0x00492cf4);
    /* 00492cf4: mov edx, dword ptr [ebp*8 + 0x902464] */ r_edx = R32((u32)(r_ebp*8+0x902464u));
    /* 00492cfb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00492cfe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492d00: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00492d02: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00492d05: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492d07: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 00492d0a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00492d0d: mov edx, dword ptr [eax + esi + 4] */ r_edx = R32((u32)(r_eax+r_esi+0x4u));
    /* 00492d11: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00492d15: mov edx, dword ptr [eax + esi + 8] */ r_edx = R32((u32)(r_eax+r_esi+0x8u));
    /* 00492d19: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00492d1c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00492d20: mov edx, esi */ r_edx = r_esi;
    /* 00492d22: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x492d27u); f_0082f9c4();
    /* 00492d27: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x492d2cu); f_0082d7b0();
    /* 00492d2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00492d2e: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x492d33u); f_00830cd8();
    /* 00492d33: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00492d36: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00492d38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00492d3a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x492d3fu); f_0082d8bc();
    /* 00492d3f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00492d40: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00492d44: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00492d46: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x492d4bu); f_00830aa0();
    /* 00492d4b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x492d50u); f_0082da80();
    /* 00492d50: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00492d52: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00492d55: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00492d58: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 00492d5b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00492d5e: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00492d61: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00492d64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00492d66: mov edx, esi */ r_edx = r_esi;
    /* 00492d68: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x492d6du); f_0082ebac();
    /* 00492d6d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00492d70: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492d73: jl 0x492cb0 */ if ((fS!=fO)) goto L_00492cb0;
L_00492d79:; BB(0x00492d79);
    /* 00492d79: mov ecx, edi */ r_ecx = r_edi;
    /* 00492d7b: call 0x493200 */ r_esp -= 4; W32(r_esp, 0x492d80u); f_00493200();
    /* 00492d80: mov ecx, edi */ r_ecx = r_edi;
    /* 00492d82: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x492d87u); f_007b6880();
    /* 00492d87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00492d89: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00492d8a: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x492d8fu); f_006946a8();
    /* 00492d8f: lea edx, [edi + 0x58c] */ r_edx = (u32)(r_edi+0x58cu);
    /* 00492d95: mov eax, 1 */ r_eax = 0x1u;
    /* 00492d9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00492d9c: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00492da1: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00492da6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00492da7: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x492dacu); f_0080575c();
    /* 00492dac: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00492daf: mov ecx, edi */ r_ecx = r_edi;
    /* 00492db1: call 0x493318 */ r_esp -= 4; W32(r_esp, 0x492db6u); f_00493318();
    /* 00492db6: fld dword ptr [0x90245c] */ FPUSH(R_F32((u32)(0x90245cu)));
    /* 00492dbc: fadd dword ptr [edi + 0x4dc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4dcu));
    /* 00492dc2: fld dword ptr [0x902c90] */ FPUSH(R_F32((u32)(0x902c90u)));
    /* 00492dc8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492dca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492dcc: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 00492dd3: lea ecx, [edi + 0x660] */ r_ecx = (u32)(r_edi+0x660u);
    /* 00492dd9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00492ddd: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00492de1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492de2: movsx eax, word ptr [edi + 0x346] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x346u));
    /* 00492de9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00492ded: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00492df1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00492df3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492df5: jb 0x492df9 */ if (fC) goto L_00492df9;
L_00492df7:; BB(0x00492df7);
    /* 00492df7: fst st(2) */ ST(2) = ST(0);
L_00492df9:; BB(0x00492df9);
    /* 00492df9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492dfb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492dfd: fstp dword ptr [edi + 0x4dc] */ W_F32((u32)(r_edi+0x4dcu), ST(0)); FPOP();
    /* 00492e03: fstp dword ptr [edi + 0x4e0] */ W_F32((u32)(r_edi+0x4e0u), ST(0)); FPOP();
    /* 00492e09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00492e0b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00492e0d: call 0x48eb24 */ r_esp -= 4; W32(r_esp, 0x492e12u); f_0048eb24();
    /* 00492e12: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00492e14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00492e16: lea ecx, [edi + 0x674] */ r_ecx = (u32)(r_edi+0x674u);
    /* 00492e1c: call 0x48eb24 */ r_esp -= 4; W32(r_esp, 0x492e21u); f_0048eb24();
    /* 00492e21: mov eax, dword ptr [edi + 0x4fc] */ r_eax = R32((u32)(r_edi+0x4fcu));
    /* 00492e27: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492e2a: mov dword ptr [edi + 0x4fc], eax */ W32((u32)(r_edi+0x4fcu), r_eax);
    /* 00492e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00492e32: jl 0x492fef */ if ((fS!=fO)) goto L_00492fef;
L_00492e38:; BB(0x00492e38);
    /* 00492e38: fld dword ptr [0x902c90] */ FPUSH(R_F32((u32)(0x902c90u)));
    /* 00492e3e: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00492e44: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492e47: jl 0x492e62 */ if ((fS!=fO)) goto L_00492e62;
L_00492e49:; BB(0x00492e49);
    /* 00492e49: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492e4c: jg 0x492e59 */ if ((!fZ&&fS==fO)) goto L_00492e59;
L_00492e4e:; BB(0x00492e4e);
    /* 00492e4e: fld dword ptr [edi + 0x4f0] */ FPUSH(R_F32((u32)(r_edi+0x4f0u)));
    /* 00492e54: jmp 0x492ef7 */ goto L_00492ef7;
L_00492e59:; BB(0x00492e59);
    /* 00492e59: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492e5c: je 0x492ef1 */ if (fZ) goto L_00492ef1;
L_00492e62:; BB(0x00492e62);
    /* 00492e62: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492e65: jne 0x492e8f */ if (!fZ) goto L_00492e8f;
L_00492e67:; BB(0x00492e67);
    /* 00492e67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492e69: mov ecx, dword ptr [edi + 0x4f4] */ r_ecx = R32((u32)(r_edi+0x4f4u));
    /* 00492e6f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x492e74u); f_0082dcbc();
    /* 00492e74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00492e75: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00492e78: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x492e7du); f_0082e900();
    /* 00492e7d: fld dword ptr [0x902c74] */ FPUSH(R_F32((u32)(0x902c74u)));
    /* 00492e83: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00492e85: fld dword ptr [edi + 0x4f0] */ FPUSH(R_F32((u32)(r_edi+0x4f0u)));
    /* 00492e8b: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00492e8d: jmp 0x492ef7 */ goto L_00492ef7;
L_00492e8f:; BB(0x00492e8f);
    /* 00492e8f: fcomp dword ptr [edi + 0x4f0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x4f0u))); FPOP();
    /* 00492e95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492e97: mov ecx, dword ptr [edi + 0x4f8] */ r_ecx = R32((u32)(r_edi+0x4f8u));
    /* 00492e9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492e9e: jbe 0x492ed0 */ if ((fC||fZ)) goto L_00492ed0;
L_00492ea0:; BB(0x00492ea0);
    /* 00492ea0: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00492ea4: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00492ea8: fmul dword ptr [0x902458] */ ST(0) = ST(0) * R_F32((u32)(0x902458u));
    /* 00492eae: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00492eb2: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00492eb7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00492ebc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00492ec0: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00492ec4: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00492ec8: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00492ecc: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
L_00492ed0:; BB(0x00492ed0);
    /* 00492ed0: add ecx, dword ptr [edi + 0x4f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x4f4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00492ed6: mov dword ptr [edi + 0x4f4], ecx */ W32((u32)(r_edi+0x4f4u), r_ecx);
    /* 00492edc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x492ee1u); f_0082dcbc();
    /* 00492ee1: fld dword ptr [0x902454] */ FPUSH(R_F32((u32)(0x902454u)));
    /* 00492ee7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00492ee9: fld dword ptr [edi + 0x4f0] */ FPUSH(R_F32((u32)(r_edi+0x4f0u)));
    /* 00492eef: jmp 0x492ef7 */ goto L_00492ef7;
L_00492ef1:; BB(0x00492ef1);
    /* 00492ef1: fld dword ptr [edi + 0x4f0] */ FPUSH(R_F32((u32)(r_edi+0x4f0u)));
L_00492ef7:; BB(0x00492ef7);
    /* 00492ef7: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00492ef9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492efb: fmul dword ptr [0x902450] */ ST(0) = ST(0) * R_F32((u32)(0x902450u));
    /* 00492f01: fld dword ptr [0x902c70] */ FPUSH(R_F32((u32)(0x902c70u)));
    /* 00492f07: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492f09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492f0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492f0c: jbe 0x492f12 */ if ((fC||fZ)) goto L_00492f12;
L_00492f0e:; BB(0x00492f0e);
    /* 00492f0e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00492f10: jmp 0x492f27 */ goto L_00492f27;
L_00492f12:; BB(0x00492f12);
    /* 00492f12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00492f14: fld dword ptr [0x90244c] */ FPUSH(R_F32((u32)(0x90244cu)));
    /* 00492f1a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00492f1c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00492f1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00492f1f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00492f21: jb 0x492f25 */ if (fC) goto L_00492f25;
L_00492f23:; BB(0x00492f23);
    /* 00492f23: fst st(1) */ ST(1) = ST(0);
L_00492f25:; BB(0x00492f25);
    /* 00492f25: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00492f27:; BB(0x00492f27);
    /* 00492f27: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00492f29: fstp dword ptr [edi + 0x4f0] */ W_F32((u32)(r_edi+0x4f0u), ST(0)); FPOP();
    /* 00492f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00492f31: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00492f33: mov ebx, eax */ r_ebx = r_eax;
    /* 00492f35: mov ebp, edx */ r_ebp = r_edx;
L_00492f37:; BB(0x00492f37);
    /* 00492f37: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00492f3a: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00492f3d: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 00492f40: mov ecx, dword ptr [edi + ebx*4 + 0x500] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x500u));
    /* 00492f47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492f49: je 0x492fd1 */ if (fZ) goto L_00492fd1;
L_00492f4f:; BB(0x00492f4f);
    /* 00492f4f: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00492f53: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00492f57: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00492f5b: mov esi, dword ptr [ebp + 0x902994] */ r_esi = R32((u32)(r_ebp+0x902994u));
    /* 00492f61: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00492f63: jl 0x492fad */ if ((fS!=fO)) goto L_00492fad;
L_00492f65:; BB(0x00492f65);
    /* 00492f65: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492f67: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492f69: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00492f6c: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492f6e: mov esi, dword ptr [eax + edi + 0x580] */ r_esi = R32((u32)(r_eax+r_edi+0x580u));
    /* 00492f75: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00492f79: mov esi, dword ptr [ebp + 0x902994] */ r_esi = R32((u32)(r_ebp+0x902994u));
    /* 00492f7f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492f81: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492f83: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00492f86: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492f88: mov esi, dword ptr [eax + edi + 0x584] */ r_esi = R32((u32)(r_eax+r_edi+0x584u));
    /* 00492f8f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00492f93: mov esi, dword ptr [ebp + 0x902994] */ r_esi = R32((u32)(r_ebp+0x902994u));
    /* 00492f99: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492f9b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00492f9d: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00492fa0: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00492fa2: mov esi, dword ptr [eax + edi + 0x588] */ r_esi = R32((u32)(r_eax+r_edi+0x588u));
    /* 00492fa9: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
L_00492fad:; BB(0x00492fad);
    /* 00492fad: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 00492fb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00492fb2: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x492fb7u); f_00508db8();
    /* 00492fb7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00492fb9: jl 0x492fd1 */ if ((fS!=fO)) goto L_00492fd1;
L_00492fbb:; BB(0x00492fbb);
    /* 00492fbb: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492fbe: jg 0x492fd1 */ if ((!fZ&&fS==fO)) goto L_00492fd1;
L_00492fc0:; BB(0x00492fc0);
    /* 00492fc0: push 0x902440 */ { u32 v = 0x902440u; r_esp -= 4; W32(r_esp, v); }
    /* 00492fc5: mov ecx, dword ptr [edi + ebx*4 + 0x500] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x500u));
    /* 00492fcc: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x492fd1u); f_00508dd0();
L_00492fd1:; BB(0x00492fd1);
    /* 00492fd1: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00492fd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00492fd7: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00492fda: jl 0x492f37 */ if ((fS!=fO)) goto L_00492f37;
L_00492fe0:; BB(0x00492fe0);
    /* 00492fe0: add dword ptr [edi + 0x410], 1 */ { u32 ad = (u32)(r_edi+0x410u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00492fe7: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00492fea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00492feb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00492fec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00492fed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00492fee: ret  */ FN_RET(0x00492a84); r_esp += 4; return;
L_00492fef:; BB(0x00492fef);
    /* 00492fef: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x492ff4u); f_008587a5();
    /* 00492ff4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00492ff8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00492ffc: fdiv dword ptr [0x902c7c] */ ST(0) = ST(0) / R_F32((u32)(0x902c7cu));
    /* 00493002: fmul dword ptr [0x902c80] */ ST(0) = ST(0) * R_F32((u32)(0x902c80u));
    /* 00493008: fadd dword ptr [0x902c84] */ ST(0) = ST(0) + R_F32((u32)(0x902c84u));
    /* 0049300e: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00493012: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00493017: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049301c: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493020: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00493024: fistp dword ptr [edi + 0x4f8] */ W32((u32)(r_edi+0x4f8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049302a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0049302e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493033u); f_008587a5();
    /* 00493033: fld dword ptr [0x902c78] */ FPUSH(R_F32((u32)(0x902c78u)));
    /* 00493039: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0049303d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00493041: fdiv dword ptr [0x902c7c] */ ST(0) = ST(0) / R_F32((u32)(0x902c7cu));
    /* 00493047: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00493049: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049304b: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0049304f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00493054: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00493059: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0049305d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00493061: fistp dword ptr [edi + 0x4fc] */ W32((u32)(r_edi+0x4fcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00493067: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0049306b: jmp 0x492e38 */ goto L_00492e38;
L_00493070:; BB(0x00493070);
    /* 00493070: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493072: jmp 0x492b4e */ goto L_00492b4e;
L_00493077:; BB(0x00493077);
    /* 00493077: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00493079: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049307b: jmp 0x492c8c */ goto L_00492c8c;
}

