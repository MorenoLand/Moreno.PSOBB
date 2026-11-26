#include "protos.h"

void f_0045e1a4(void) /* sub_45E1A4 */
{
    FN_ENTER(0x0045e1a4);
    /* 0045e1a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e1a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e1a6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e1a9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045e1ab: movzx eax, word ptr [ebp + 0x3c2] */ r_eax = (u32)R16((u32)(r_ebp+0x3c2u));
    /* 0045e1b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e1b3: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45e1b8u); f_00453ab8();
    /* 0045e1b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e1b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e1bb: je 0x45e224 */ if (fZ) goto L_0045e224;
L_0045e1bd:; BB(0x0045e1bd);
    /* 0045e1bd: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045e1c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e1c5: jne 0x45e21e */ if (!fZ) goto L_0045e21e;
L_0045e1c7:; BB(0x0045e1c7);
    /* 0045e1c7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045e1cc: mov word ptr [ebp + 0x3c0], ax */ W16((u32)(r_ebp+0x3c0u), (u16)r_eax);
    /* 0045e1d3: mov word ptr [ebp + 0x3c2], ax */ W16((u32)(r_ebp+0x3c2u), (u16)r_eax);
    /* 0045e1da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e1dc: call 0x45e284 */ r_esp -= 4; W32(r_esp, 0x45e1e1u); f_0045e284();
    /* 0045e1e1: mov esi, eax */ r_esi = r_eax;
    /* 0045e1e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e1e5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45e1eau); f_007751b0();
    /* 0045e1ea: fld dword ptr [0x9003e4] */ FPUSH(R_F32((u32)(0x9003e4u)));
    /* 0045e1f0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045e1f2: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045e1f5: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045e1f9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e1fe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045e202: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045e206: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045e20a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045e20d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e20f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045e213: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e214: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e217: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e219: call 0x45e338 */ r_esp -= 4; W32(r_esp, 0x45e21eu); f_0045e338();
L_0045e21e:; BB(0x0045e21e);
    /* 0045e21e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e222: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e223: ret  */ FN_RET(0x0045e1a4); r_esp += 4; return;
L_0045e224:; BB(0x0045e224);
    /* 0045e224: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045e229: mov word ptr [ebp + 0x3c0], ax */ W16((u32)(r_ebp+0x3c0u), (u16)r_eax);
    /* 0045e230: mov word ptr [ebp + 0x3c2], ax */ W16((u32)(r_ebp+0x3c2u), (u16)r_eax);
    /* 0045e237: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e239: call 0x45e284 */ r_esp -= 4; W32(r_esp, 0x45e23eu); f_0045e284();
    /* 0045e23e: mov esi, eax */ r_esi = r_eax;
    /* 0045e240: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e242: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45e247u); f_007751b0();
    /* 0045e247: fld dword ptr [0x9003e4] */ FPUSH(R_F32((u32)(0x9003e4u)));
    /* 0045e24d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045e24f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045e252: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045e256: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e25b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045e25f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045e263: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045e267: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045e26a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e26c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045e270: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e271: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e274: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e275: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e276: call 0x45e338 */ r_esp -= 4; W32(r_esp, 0x45e27bu); f_0045e338();
    /* 0045e27b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e27e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e280: ret  */ FN_RET(0x0045e1a4); r_esp += 4; return;
}

void f_0045e27b(void)
{
    FN_ENTER(0x0045e27b);
    /* 0045e27b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e27e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e280: ret  */ FN_RET(0x0045e27b); r_esp += 4; return;
}

void f_0045e284(void) /* sub_45E284 */
{
    FN_ENTER(0x0045e284);
    /* 0045e284: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e285: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e286: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e289: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045e28b: call 0x44d084 */ r_esp -= 4; W32(r_esp, 0x45e290u); f_0044d084();
    /* 0045e290: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 0045e293: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e299: je 0x45e303 */ if (fZ) goto L_0045e303;
L_0045e29b:; BB(0x0045e29b);
    /* 0045e29b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e29c: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45e2a1u); f_00453ab8();
    /* 0045e2a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e2a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e2a4: je 0x45e303 */ if (fZ) goto L_0045e303;
L_0045e2a6:; BB(0x0045e2a6);
    /* 0045e2a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2a7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45e2acu); f_0068d5a8();
    /* 0045e2ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e2ad: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0045e2b0: fsub dword ptr [0xa45860] */ ST(0) = ST(0) - R_F32((u32)(0xa45860u));
    /* 0045e2b6: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0045e2b9: fsub dword ptr [0xa45864] */ ST(0) = ST(0) - R_F32((u32)(0xa45864u));
    /* 0045e2bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045e2c1: fchs  */ ST(0) = -ST(0);
    /* 0045e2c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045e2c5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0045e2c7: fmul qword ptr [0x900348] */ ST(0) = ST(0) * R_F64((u32)(0x900348u));
    /* 0045e2cd: fdiv qword ptr [0x900340] */ ST(0) = ST(0) / R_F64((u32)(0x900340u));
    /* 0045e2d3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045e2d6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e2df: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045e2e3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045e2e7: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045e2eb: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045e2ee: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0045e2f2: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e2f7: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0045e2fa: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045e2fd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e300: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045e301: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045e302: ret  */ FN_RET(0x0045e284); r_esp += 4; return;
L_0045e303:; BB(0x0045e303);
    /* 0045e303: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045e305: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45e30au); f_007751b0();
    /* 0045e30a: fmul dword ptr [0x900318] */ ST(0) = ST(0) * R_F32((u32)(0x900318u));
    /* 0045e310: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045e313: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045e317: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e31c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045e320: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045e324: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045e328: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045e32b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0045e32f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e332: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045e333: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045e334: ret  */ FN_RET(0x0045e284); r_esp += 4; return;
}

void f_0045e338(void) /* sub_45E338 */
{
    FN_ENTER(0x0045e338);
    /* 0045e338: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e339: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 0045e33f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045e341: je 0x45e3a4 */ if (fZ) goto L_0045e3a4;
L_0045e343:; BB(0x0045e343);
    /* 0045e343: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045e347: mov ebx, dword ptr [ecx + 0x3a8] */ r_ebx = R32((u32)(r_ecx+0x3a8u));
    /* 0045e34d: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045e350: and ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045e353: shl ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045e356: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e358: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0045e35c: and ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045e35f: shl ebx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045e362: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e364: mov ebx, dword ptr [ecx + 0x3b0] */ r_ebx = R32((u32)(r_ecx+0x3b0u));
    /* 0045e36a: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045e36d: shl ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045e370: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e372: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0045e376: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045e379: shl ebx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045e37c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e37e: movzx ebx, word ptr [ecx + 0x3c0] */ r_ebx = (u32)R16((u32)(r_ecx+0x3c0u));
    /* 0045e385: movzx ecx, word ptr [ecx + 0x3c2] */ r_ecx = (u32)R16((u32)(r_ecx+0x3c2u));
    /* 0045e38c: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045e38f: shl ebx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045e392: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e394: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e397: shl ecx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045e39a: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e39c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e39d: mov ecx, edx */ r_ecx = r_edx;
    /* 0045e39f: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45e3a4u); f_0044cf88();
L_0045e3a4:; BB(0x0045e3a4);
    /* 0045e3a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045e3a5: ret 0xc */ FN_RET(0x0045e338); r_esp += 16; return;
}

void f_0045e3a8(void) /* sub_45E3A8 */
{
    FN_ENTER(0x0045e3a8);
    /* 0045e3a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3a9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e3ac: mov esi, ecx */ r_esi = r_ecx;
    /* 0045e3ae: movzx eax, word ptr [esi + 0x3c2] */ r_eax = (u32)R16((u32)(r_esi+0x3c2u));
    /* 0045e3b5: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e3ba: je 0x45e484 */ if (fZ) goto L_0045e484;
L_0045e3c0:; BB(0x0045e3c0);
    /* 0045e3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3c1: mov ecx, esi */ r_ecx = r_esi;
    /* 0045e3c3: call 0x45d46c */ r_esp -= 4; W32(r_esp, 0x45e3c8u); f_0045d46c();
    /* 0045e3c8: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 0045e3ce: cmp eax, dword ptr [0xa458ec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e3d4: jne 0x45e406 */ if (!fZ) goto L_0045e406;
L_0045e3d6:; BB(0x0045e3d6);
    /* 0045e3d6: movsx eax, word ptr [esi + 0x3c2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3c2u));
    /* 0045e3dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3e0: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3e5: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x45e3eau); f_006ff4ac();
    /* 0045e3ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e3ed: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045e3f2: mov word ptr [esi + 0x3c0], ax */ W16((u32)(r_esi+0x3c0u), (u16)r_eax);
    /* 0045e3f9: mov word ptr [esi + 0x3c2], ax */ W16((u32)(r_esi+0x3c2u), (u16)r_eax);
    /* 0045e400: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
L_0045e406:; BB(0x0045e406);
    /* 0045e406: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e409: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 0045e40f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045e411: jl 0x45e418 */ if ((fS!=fO)) goto L_0045e418;
L_0045e413:; BB(0x0045e413);
    /* 0045e413: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e416: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e417: ret  */ FN_RET(0x0045e3a8); r_esp += 4; return;
L_0045e418:; BB(0x0045e418);
    /* 0045e418: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0045e41b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0045e41f: lea edx, [esi + 0x42c] */ r_edx = (u32)(r_esi+0x42cu);
    /* 0045e425: lea eax, [esi + 0x440] */ r_eax = (u32)(r_esi+0x440u);
    /* 0045e42b: mov ebp, eax */ r_ebp = r_eax;
    /* 0045e42d: mov edi, edx */ r_edi = r_edx;
L_0045e42f:; BB(0x0045e42f);
    /* 0045e42f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0045e431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e433: je 0x45e442 */ if (fZ) goto L_0045e442;
L_0045e435:; BB(0x0045e435);
    /* 0045e435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e436: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45e43bu); f_005cdcc0();
    /* 0045e43b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e43c: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045e442:; BB(0x0045e442);
    /* 0045e442: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045e445: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045e447: ja 0x45e42f */ if ((!fC&&!fZ)) goto L_0045e42f;
L_0045e449:; BB(0x0045e449);
    /* 0045e449: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0045e44c: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0045e450: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e456: mov ecx, esi */ r_ecx = r_esi;
    /* 0045e458: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0045e462: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45e467u); f_0045d43c();
    /* 0045e467: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045e46d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045e470: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045e477: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e479: je 0x45e47f */ if (fZ) goto L_0045e47f;
L_0045e47b:; BB(0x0045e47b);
    /* 0045e47b: mov ecx, esi */ r_ecx = r_esi;
    /* 0045e47d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e47fu); call_ind(t); }
L_0045e47f:; BB(0x0045e47f);
    /* 0045e47f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e482: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e483: ret  */ FN_RET(0x0045e3a8); r_esp += 4; return;
L_0045e484:; BB(0x0045e484);
    /* 0045e484: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0045e487: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0045e48b: lea edx, [esi + 0x42c] */ r_edx = (u32)(r_esi+0x42cu);
    /* 0045e491: lea eax, [esi + 0x440] */ r_eax = (u32)(r_esi+0x440u);
    /* 0045e497: mov ebp, eax */ r_ebp = r_eax;
    /* 0045e499: mov edi, edx */ r_edi = r_edx;
L_0045e49b:; BB(0x0045e49b);
    /* 0045e49b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0045e49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e49f: je 0x45e4ae */ if (fZ) goto L_0045e4ae;
L_0045e4a1:; BB(0x0045e4a1);
    /* 0045e4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e4a2: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45e4a7u); f_005cdcc0();
    /* 0045e4a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e4a8: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045e4ae:; BB(0x0045e4ae);
    /* 0045e4ae: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045e4b1: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045e4b3: ja 0x45e49b */ if ((!fC&&!fZ)) goto L_0045e49b;
L_0045e4b5:; BB(0x0045e4b5);
    /* 0045e4b5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0045e4b8: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0045e4bc: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e4c2: mov ecx, esi */ r_ecx = r_esi;
    /* 0045e4c4: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0045e4ce: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45e4d3u); f_0045d43c();
    /* 0045e4d3: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045e4d9: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045e4dc: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045e4e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e4e5: je 0x45e4eb */ if (fZ) goto L_0045e4eb;
L_0045e4e7:; BB(0x0045e4e7);
    /* 0045e4e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0045e4e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e4ebu); call_ind(t); }
L_0045e4eb:; BB(0x0045e4eb);
    /* 0045e4eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e4ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e4ef: ret  */ FN_RET(0x0045e3a8); r_esp += 4; return;
}

void f_0045e4f0(void) /* sub_45E4F0 */
{
    FN_ENTER(0x0045e4f0);
    /* 0045e4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e4f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e4f5: push 0x8cf49e */ { u32 v = 0x8cf49eu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e4fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045e500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e501: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045e508: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e50b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045e50e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0045e511: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045e514: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045e517: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e519: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045e51c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045e51f: push 0x538 */ { u32 v = 0x538u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e524: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x45e529u); f_005caba4();
    /* 0045e529: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e52a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045e52d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e52f: je 0x45e59c */ if (fZ) goto L_0045e59c;
L_0045e531:; BB(0x0045e531);
    /* 0045e531: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0045e538: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045e53f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e541: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x45e546u); f_005caba4();
    /* 0045e546: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e547: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045e54a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e54c: je 0x45e598 */ if (fZ) goto L_0045e598;
L_0045e54e:; BB(0x0045e54e);
    /* 0045e54e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0045e555: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045e55c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e562: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045e565: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x45e56au); f_00787a4c();
    /* 0045e56a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045e56d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0045e574:; BB(0x0045e574);
    /* 0045e574: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e577: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e57a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e57b: call 0x45e5a0 */ r_esp -= 4; W32(r_esp, 0x45e580u); f_0045e5a0();
    /* 0045e580: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e583: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0045e58a:; BB(0x0045e58a);
    /* 0045e58a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e58d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045e594: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e597: ret  */ FN_RET(0x0045e4f0); r_esp += 4; return;
L_0045e598:; BB(0x0045e598);
    /* 0045e598: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e59a: jmp 0x45e574 */ goto L_0045e574;
L_0045e59c:; BB(0x0045e59c);
    /* 0045e59c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045e59e: jmp 0x45e58a */ goto L_0045e58a;
}

void f_0045e5a0(void) /* sub_45E5A0 */
{
    FN_ENTER(0x0045e5a0);
    /* 0045e5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e5a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5a5: push 0x8cf4ee */ { u32 v = 0x8cf4eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045e5b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045e5b8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e5bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045e5be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0045e5c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0045e5c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0045e5c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045e5ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e5cd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045e5d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045e5d3: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x45e5d8u); f_007865e8();
    /* 0045e5d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045e5df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e5e2: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e5e5: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0045e5eb: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045e5ee: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 0045e5f4: mov dword ptr [ecx], 0xaf7a60 */ W32((u32)(r_ecx), 0xaf7a60u);
    /* 0045e5fa: mov eax, dword ptr [0x9a66f4] */ r_eax = R32((u32)(0x9a66f4u));
    /* 0045e5ff: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0045e602: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 0045e604: mov dword ptr [ecx + 0x394], ebx */ W32((u32)(r_ecx+0x394u), r_ebx);
    /* 0045e60a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045e60d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e60e: call dword ptr [0xaf7bac] */ { u32 t = R32((u32)(0xaf7bacu)); r_esp -= 4; W32(r_esp, 0x45e614u); call_ind(t); }
    /* 0045e614: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 0045e619: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e61c: mov dword ptr [edx + 0x398], eax */ W32((u32)(r_edx+0x398u), r_eax);
    /* 0045e622: movzx eax, byte ptr [0xa4585c] */ r_eax = (u32)R8((u32)(0xa4585cu));
    /* 0045e629: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e62b: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0045e62e: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0045e631: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045e633: jne 0x45e663 */ if (!fZ) goto L_0045e663;
L_0045e635:; BB(0x0045e635);
    /* 0045e635: mov ecx, dword ptr [0xa458fc] */ r_ecx = R32((u32)(0xa458fcu));
    /* 0045e63b: mov ebx, dword ptr [0xa45900] */ r_ebx = R32((u32)(0xa45900u));
    /* 0045e641: mov esi, dword ptr [0xa45904] */ r_esi = R32((u32)(0xa45904u));
    /* 0045e647: mov dword ptr [0xa458f0], ecx */ W32((u32)(0xa458f0u), r_ecx);
    /* 0045e64d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e652: mov dword ptr [0xa458f4], ebx */ W32((u32)(0xa458f4u), r_ebx);
    /* 0045e658: mov dword ptr [0xa458f8], esi */ W32((u32)(0xa458f8u), r_esi);
    /* 0045e65e: mov byte ptr [0xa4585c], al */ W8((u32)(0xa4585cu), (u8)r_eax);
L_0045e663:; BB(0x0045e663);
    /* 0045e663: mov eax, dword ptr [0xa458f0] */ r_eax = R32((u32)(0xa458f0u));
    /* 0045e668: mov ebx, dword ptr [0xa458f4] */ r_ebx = R32((u32)(0xa458f4u));
    /* 0045e66e: mov esi, dword ptr [0xa458f8] */ r_esi = R32((u32)(0xa458f8u));
    /* 0045e674: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e676: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0045e679: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e67c: push 0x9a66f8 */ { u32 v = 0x9a66f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e681: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 0045e684: mov dword ptr [edx + 0x40], esi */ W32((u32)(r_edx+0x40u), r_esi);
    /* 0045e687: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0045e68a: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 0045e68d: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0045e690: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 0045e693: mov dword ptr [eax + 0x78], edi */ W32((u32)(r_eax+0x78u), r_edi);
    /* 0045e696: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 0045e699: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 0045e6a0: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0045e6a3: mov dword ptr [eax + 0x54], edi */ W32((u32)(r_eax+0x54u), r_edi);
    /* 0045e6a6: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0045e6a9: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0045e6ac: mov dword ptr [eax + 0x48], edi */ W32((u32)(r_eax+0x48u), r_edi);
    /* 0045e6af: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 0045e6b2: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e6b4: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x45e6b9u); f_007b9a88();
    /* 0045e6b9: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e6bc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0045e6bf: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0045e6c2: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6c4: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 0045e6ca: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0045e6cd: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0045e6d7: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0045e6dd: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0045e6e3: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 0045e6ed: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0045e6f3: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 0045e6fd: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x45e702u); f_0077a684();
    /* 0045e702: mov esi, eax */ r_esi = r_eax;
    /* 0045e704: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e706: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x45e70bu); f_0077a698();
    /* 0045e70b: mov ebx, eax */ r_ebx = r_eax;
    /* 0045e70d: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e70f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x45e714u); f_0077a6b4();
    /* 0045e714: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e717: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e71a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e71b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e71c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e71d: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x45e722u); f_007868f8();
    /* 0045e722: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e725: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0045e72c: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 0045e732: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0045e739: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x45e73eu); f_007b4f54();
    /* 0045e73e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e741: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e743: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x45e748u); f_00787550();
    /* 0045e748: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e74b: mov dword ptr [edx + 0x400], 0x3f19999a */ W32((u32)(r_edx+0x400u), 0x3f19999au);
    /* 0045e755: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e757: mov dword ptr [edx + 0x3f8], eax */ W32((u32)(r_edx+0x3f8u), r_eax);
    /* 0045e75d: mov dword ptr [edx + 0x3fc], 0 */ W32((u32)(r_edx+0x3fcu), 0x0u);
    /* 0045e767: mov dword ptr [edx + 0x404], eax */ W32((u32)(r_edx+0x404u), r_eax);
    /* 0045e76d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0045e76f:; BB(0x0045e76f);
    /* 0045e76f: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045e772: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0045e775: lea eax, [esi + esi*8] */ r_eax = (u32)(r_esi+r_esi*8);
    /* 0045e778: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e77a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e77c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e77e: lea edx, [edx + eax + 0x44c] */ r_edx = (u32)(r_edx+r_eax+0x44cu);
    /* 0045e785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e786: push dword ptr [ecx + 0x9a676c] */ { u32 v = R32((u32)(r_ecx+0x9a676cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e78c: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x45e791u); f_0058836c();
    /* 0045e791: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e794: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e797: mov dword ptr [edx + ebx*2 + 0x440], eax */ W32((u32)(r_edx+r_ebx*2+0x440u), r_eax);
    /* 0045e79e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045e7a1: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e7a4: jl 0x45e76f */ if ((fS!=fO)) goto L_0045e76f;
L_0045e7a6:; BB(0x0045e7a6);
    /* 0045e7a6: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x45e7abu); f_0082fa9c();
    /* 0045e7ab: movzx eax, byte ptr [0xa4585c] */ r_eax = (u32)R8((u32)(0xa4585cu));
    /* 0045e7b2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045e7b4: jne 0x45e7c8 */ if (!fZ) goto L_0045e7c8;
L_0045e7b6:; BB(0x0045e7b6);
    /* 0045e7b6: mov dword ptr [0xa45908], 0x40400000 */ W32((u32)(0xa45908u), 0x40400000u);
    /* 0045e7c0: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e7c3: mov byte ptr [0xa4585c], al */ W8((u32)(0xa4585cu), (u8)r_eax);
L_0045e7c8:; BB(0x0045e7c8);
    /* 0045e7c8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045e7ca: jne 0x45e7e0 */ if (!fZ) goto L_0045e7e0;
L_0045e7cc:; BB(0x0045e7cc);
    /* 0045e7cc: mov dword ptr [0xa4590c], 0x41100000 */ W32((u32)(0xa4590cu), 0x41100000u);
    /* 0045e7d6: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045e7db: mov byte ptr [0xa4585c], al */ W8((u32)(0xa4585cu), (u8)r_eax);
L_0045e7e0:; BB(0x0045e7e0);
    /* 0045e7e0: push dword ptr [0x9a6754] */ { u32 v = R32((u32)(0x9a6754u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e7e6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e7e9: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 0045e7ef: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45e7f4u); f_005b8610();
    /* 0045e7f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045e7f7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0045e7fe: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e800: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x45e805u); f_008581c5();
    /* 0045e805: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e806: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045e809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e80b: je 0x45eaa7 */ if (fZ) goto L_0045eaa7;
L_0045e811:; BB(0x0045e811);
    /* 0045e811: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0045e818: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045e81f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045e822: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e824: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0045e829: push dword ptr [0xa4590c] */ { u32 v = R32((u32)(0xa4590cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e82f: push dword ptr [0xa45908] */ { u32 v = R32((u32)(0xa45908u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e835: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x45e83au); f_005795a0();
    /* 0045e83a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045e83d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0045e844:; BB(0x0045e844);
    /* 0045e844: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e847: mov dword ptr [eax + 0x524], edx */ W32((u32)(r_eax+0x524u), r_edx);
    /* 0045e84d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045e854: push dword ptr [0x9a6484] */ { u32 v = R32((u32)(0x9a6484u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e85a: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 0045e860: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45e865u); f_005b8638();
    /* 0045e865: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e868: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e86a: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e86c: mov ecx, dword ptr [edx + 0x524] */ r_ecx = R32((u32)(r_edx+0x524u));
    /* 0045e872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e873: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e877: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x45e87cu); f_00579a28();
    /* 0045e87c: push 0xffff0088 */ { u32 v = 0xffff0088u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e881: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e886: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x45e88bu); f_00578cc4();
    /* 0045e88b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e88e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0045e895: mov dword ptr [edx + 0x52c], eax */ W32((u32)(r_edx+0x52cu), r_eax);
    /* 0045e89b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e89d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x45e8a2u); f_008581c5();
    /* 0045e8a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e8a5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045e8a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e8aa: je 0x45eaa0 */ if (fZ) goto L_0045eaa0;
L_0045e8b0:; BB(0x0045e8b0);
    /* 0045e8b0: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0045e8b7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0045e8be: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045e8c1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e8c3: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0045e8c8: push dword ptr [0xa4590c] */ { u32 v = R32((u32)(0xa4590cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e8ce: push dword ptr [0xa45908] */ { u32 v = R32((u32)(0xa45908u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e8d4: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x45e8d9u); f_005795a0();
    /* 0045e8d9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045e8dc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0045e8e3:; BB(0x0045e8e3);
    /* 0045e8e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e8e6: mov dword ptr [eax + 0x528], edx */ W32((u32)(r_eax+0x528u), r_edx);
    /* 0045e8ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045e8f3: push dword ptr [0x9a6498] */ { u32 v = R32((u32)(0x9a6498u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e8f9: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 0045e8ff: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45e904u); f_005b8638();
    /* 0045e904: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e907: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0045e909: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e90b: mov ecx, dword ptr [edx + 0x528] */ r_ecx = R32((u32)(r_edx+0x528u));
    /* 0045e911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e912: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e916: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x45e91bu); f_00579a28();
    /* 0045e91b: push 0xffff0088 */ { u32 v = 0xffff0088u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e920: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e925: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x45e92au); f_00578cc4();
    /* 0045e92a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e92d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e930: mov dword ptr [edx + 0x530], eax */ W32((u32)(r_edx+0x530u), r_eax);
    /* 0045e936: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x45e93bu); f_0082faac();
    /* 0045e93b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e93e: call 0x45eda0 */ r_esp -= 4; W32(r_esp, 0x45e943u); f_0045eda0();
    /* 0045e943: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e946: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e948: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e94e: push 0x9003a0 */ { u32 v = 0x9003a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e953: call 0x44d268 */ r_esp -= 4; W32(r_esp, 0x45e958u); f_0044d268();
    /* 0045e958: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e95b: movsx eax, word ptr [edx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045e962: mov dword ptr [edx + 0x3d4], 0 */ W32((u32)(r_edx+0x3d4u), 0x0u);
    /* 0045e96c: mov dword ptr [edx + 0x3dc], eax */ W32((u32)(r_edx+0x3dcu), r_eax);
    /* 0045e972: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e974: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x45e979u); f_0077a6cc();
    /* 0045e979: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e97a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e97d: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0045e982: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0045e985: movsx edi, word ptr [ecx + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0045e98c: mov dword ptr [ecx + 0x3d8], eax */ W32((u32)(r_ecx+0x3d8u), r_eax);
    /* 0045e992: mov dword ptr [ecx + 0x3b8], 0x3f800000 */ W32((u32)(r_ecx+0x3b8u), 0x3f800000u);
    /* 0045e99c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e99e: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 0045e9a4: mov edx, 0x10 */ r_edx = 0x10u;
    /* 0045e9a9: mov dword ptr [ecx + 0x3cc], 0xffffa24c */ W32((u32)(r_ecx+0x3ccu), 0xffffa24cu);
    /* 0045e9b3: mov dword ptr [ecx + 0x3ac], edx */ W32((u32)(r_ecx+0x3acu), r_edx);
    /* 0045e9b9: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
    /* 0045e9bf: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 0045e9c5: mov dword ptr [ecx + 0x3d0], 0 */ W32((u32)(r_ecx+0x3d0u), 0x0u);
    /* 0045e9cf: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 0045e9d5: mov word ptr [ecx + 0x3c0], bx */ W16((u32)(r_ecx+0x3c0u), (u16)r_ebx);
    /* 0045e9dc: mov word ptr [ecx + 0x3c2], bx */ W16((u32)(r_ecx+0x3c2u), (u16)r_ebx);
    /* 0045e9e3: mov dword ptr [ecx + 0x3e4], 0 */ W32((u32)(r_ecx+0x3e4u), 0x0u);
    /* 0045e9ed: mov dword ptr [ecx + 0x3c4], eax */ W32((u32)(r_ecx+0x3c4u), r_eax);
    /* 0045e9f3: mov dword ptr [ecx + 0x3e0], eax */ W32((u32)(r_ecx+0x3e0u), r_eax);
    /* 0045e9f9: lea esi, [edi] */ r_esi = (u32)(r_edi);
    /* 0045e9fb: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045ea05: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0045ea08: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045ea0a: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0045ea0c: mov dword ptr [ecx + 0x3f4], 0x3f800000 */ W32((u32)(r_ecx+0x3f4u), 0x3f800000u);
    /* 0045ea16: mov dword ptr [ecx + 0x3e8], edi */ W32((u32)(r_ecx+0x3e8u), r_edi);
    /* 0045ea1c: mov dword ptr [ecx + 0x534], eax */ W32((u32)(r_ecx+0x534u), r_eax);
    /* 0045ea22: mov esi, 8 */ r_esi = 0x8u;
L_0045ea27:; BB(0x0045ea27);
    /* 0045ea27: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045ea2a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045ea2c: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045ea2e: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 0045ea34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ea36: je 0x45ea4c */ if (fZ) goto L_0045ea4c;
L_0045ea38:; BB(0x0045ea38);
    /* 0045ea38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ea39: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45ea3eu); f_005cdcc0();
    /* 0045ea3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ea3f: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
    /* 0045ea49: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_0045ea4c:; BB(0x0045ea4c);
    /* 0045ea4c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045ea4f: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ea52: jl 0x45ea27 */ if ((fS!=fO)) goto L_0045ea27;
L_0045ea54:; BB(0x0045ea54);
    /* 0045ea54: push dword ptr [0x9a6524] */ { u32 v = R32((u32)(0x9a6524u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045ea5a: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 0045ea64: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45ea69u); f_0045d43c();
    /* 0045ea69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045ea6c: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0045ea72: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045ea75: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045ea7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045ea7e: je 0x45ea85 */ if (fZ) goto L_0045ea85;
L_0045ea80:; BB(0x0045ea80);
    /* 0045ea80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ea82u); call_ind(t); }
    /* 0045ea82: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_0045ea85:; BB(0x0045ea85);
    /* 0045ea85: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ea88: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045ea8b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045ea8e: mov eax, ecx */ r_eax = r_ecx;
    /* 0045ea90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ea93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045ea9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ea9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ea9d: ret 8 */ FN_RET(0x0045e5a0); r_esp += 12; return;
L_0045eaa0:; BB(0x0045eaa0);
    /* 0045eaa0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045eaa2: jmp 0x45e8e3 */ goto L_0045e8e3;
L_0045eaa7:; BB(0x0045eaa7);
    /* 0045eaa7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045eaa9: jmp 0x45e844 */ goto L_0045e844;
}

void f_0045eab0(void) /* sub_45EAB0 */
{
    FN_ENTER(0x0045eab0);
    /* 0045eab0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0045eab4: mov edx, eax */ r_edx = r_eax;
    /* 0045eab6: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045eab9: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045eabc: mov dword ptr [ecx + 0x3ac], edx */ W32((u32)(r_ecx+0x3acu), r_edx);
    /* 0045eac2: mov edx, eax */ r_edx = r_eax;
    /* 0045eac4: sar edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045eac7: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045eaca: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
    /* 0045ead0: mov edx, eax */ r_edx = r_eax;
    /* 0045ead2: sar edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045ead5: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045ead8: mov dword ptr [ecx + 0x3b4], edx */ W32((u32)(r_ecx+0x3b4u), r_edx);
    /* 0045eade: mov edx, eax */ r_edx = r_eax;
    /* 0045eae0: sar edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045eae3: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045eae6: mov dword ptr [ecx + 0x3b0], edx */ W32((u32)(r_ecx+0x3b0u), r_edx);
    /* 0045eaec: mov edx, eax */ r_edx = r_eax;
    /* 0045eaee: sar edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045eaf1: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045eaf4: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eaf7: je 0x45eb36 */ if (fZ) goto L_0045eb36;
L_0045eaf9:; BB(0x0045eaf9);
    /* 0045eaf9: mov word ptr [ecx + 0x3c0], dx */ W16((u32)(r_ecx+0x3c0u), (u16)r_edx);
L_0045eb00:; BB(0x0045eb00);
    /* 0045eb00: mov edx, eax */ r_edx = r_eax;
    /* 0045eb02: sar edx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045eb05: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045eb08: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eb0b: je 0x45eb28 */ if (fZ) goto L_0045eb28;
L_0045eb0d:; BB(0x0045eb0d);
    /* 0045eb0d: mov word ptr [ecx + 0x3c2], dx */ W16((u32)(r_ecx+0x3c2u), (u16)r_edx);
L_0045eb14:; BB(0x0045eb14);
    /* 0045eb14: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045eb17: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045eb1a: jl 0x45eb1f */ if ((fS!=fO)) goto L_0045eb1f;
L_0045eb1c:; BB(0x0045eb1c);
    /* 0045eb1c: ret 4 */ FN_RET(0x0045eab0); r_esp += 8; return;
L_0045eb1f:; BB(0x0045eb1f);
    /* 0045eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb20: call 0x45eb44 */ r_esp -= 4; W32(r_esp, 0x45eb25u); f_0045eb44();
    /* 0045eb25: ret 4 */ FN_RET(0x0045eab0); r_esp += 8; return;
L_0045eb28:; BB(0x0045eb28);
    /* 0045eb28: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0045eb2d: mov word ptr [ecx + 0x3c2], dx */ W16((u32)(r_ecx+0x3c2u), (u16)r_edx);
    /* 0045eb34: jmp 0x45eb14 */ goto L_0045eb14;
L_0045eb36:; BB(0x0045eb36);
    /* 0045eb36: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0045eb3b: mov word ptr [ecx + 0x3c0], dx */ W16((u32)(r_ecx+0x3c0u), (u16)r_edx);
    /* 0045eb42: jmp 0x45eb00 */ goto L_0045eb00;
}

void f_0045eb44(void) /* sub_45EB44 */
{
    FN_ENTER(0x0045eb44);
    /* 0045eb44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb48: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045eb4a: lea edx, [ebp + 0x42c] */ r_edx = (u32)(r_ebp+0x42cu);
    /* 0045eb50: lea eax, [ebp + 0x440] */ r_eax = (u32)(r_ebp+0x440u);
    /* 0045eb56: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0045eb5a: mov edi, ebp */ r_edi = r_ebp;
    /* 0045eb5c: mov ebp, eax */ r_ebp = r_eax;
    /* 0045eb5e: mov ebx, edx */ r_ebx = r_edx;
    /* 0045eb60: mov esi, ecx */ r_esi = r_ecx;
L_0045eb62:; BB(0x0045eb62);
    /* 0045eb62: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0045eb64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eb66: je 0x45eb75 */ if (fZ) goto L_0045eb75;
L_0045eb68:; BB(0x0045eb68);
    /* 0045eb68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb69: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45eb6eu); f_005cdcc0();
    /* 0045eb6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045eb6f: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
L_0045eb75:; BB(0x0045eb75);
    /* 0045eb75: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045eb78: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045eb7a: ja 0x45eb62 */ if ((!fC&&!fZ)) goto L_0045eb62;
L_0045eb7c:; BB(0x0045eb7c);
    /* 0045eb7c: mov ecx, esi */ r_ecx = r_esi;
    /* 0045eb7e: mov ebp, edi */ r_ebp = r_edi;
    /* 0045eb80: mov dword ptr [ebp + 0x37c], ecx */ W32((u32)(r_ebp+0x37cu), r_ecx);
    /* 0045eb86: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 0045eb89: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045eb8b: push dword ptr [eax*4 + 0x9a6524] */ { u32 v = R32((u32)(r_eax*4+0x9a6524u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045eb92: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45eb97u); f_0045d43c();
    /* 0045eb97: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045eb9d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045eba0: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045eba7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045eba9: je 0x45ebaf */ if (fZ) goto L_0045ebaf;
L_0045ebab:; BB(0x0045ebab);
    /* 0045ebab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045ebad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ebafu); call_ind(t); }
L_0045ebaf:; BB(0x0045ebaf);
    /* 0045ebaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ebb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ebb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ebb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ebb3: ret 4 */ FN_RET(0x0045eb44); r_esp += 8; return;
}

void f_0045ebb8(void) /* sub_45EBB8 */
{
    FN_ENTER(0x0045ebb8);
    /* 0045ebb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ebb9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ebbc: mov ecx, 0x31 */ r_ecx = 0x31u;
    /* 0045ebc1: mov edx, 0x93 */ r_edx = 0x93u;
    /* 0045ebc6: mov eax, 0x93 */ r_eax = 0x93u;
    /* 0045ebcb: mov dword ptr [0xa45910], 0x3f800000 */ W32((u32)(0xa45910u), 0x3f800000u);
    /* 0045ebd5: mov dword ptr [0xa458d4], ecx */ W32((u32)(0xa458d4u), r_ecx);
    /* 0045ebdb: mov edi, 0x62 */ r_edi = 0x62u;
    /* 0045ebe0: mov dword ptr [0xa45914], 0x41000000 */ W32((u32)(0xa45914u), 0x41000000u);
    /* 0045ebea: mov dword ptr [0xa45928], edx */ W32((u32)(0xa45928u), r_edx);
    /* 0045ebf0: mov dword ptr [0xa4592c], ecx */ W32((u32)(0xa4592cu), r_ecx);
    /* 0045ebf6: mov dword ptr [0xa45918], 0x3fc00000 */ W32((u32)(0xa45918u), 0x3fc00000u);
    /* 0045ec00: mov dword ptr [0xa4591c], 0xc1200000 */ W32((u32)(0xa4591cu), 0xc1200000u);
    /* 0045ec0a: mov dword ptr [0xa45930], ecx */ W32((u32)(0xa45930u), r_ecx);
    /* 0045ec10: mov dword ptr [0xa458ac], ecx */ W32((u32)(0xa458acu), r_ecx);
    /* 0045ec16: mov dword ptr [0xa45860], 0x461c4000 */ W32((u32)(0xa45860u), 0x461c4000u);
    /* 0045ec20: mov dword ptr [0xa45894], 0xc1200000 */ W32((u32)(0xa45894u), 0xc1200000u);
    /* 0045ec2a: mov dword ptr [0xa458b0], ecx */ W32((u32)(0xa458b0u), r_ecx);
    /* 0045ec30: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045ec33: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0045ec36: fsub dword ptr [0x900384] */ ST(0) = ST(0) - R_F32((u32)(0x900384u));
    /* 0045ec3c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0045ec40: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0045ec45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ec4a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0045ec4e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0045ec52: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045ec56: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045ec5a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0045ec5e: mov dword ptr [0xa458a4], 0x43960000 */ W32((u32)(0xa458a4u), 0x43960000u);
    /* 0045ec68: mov dword ptr [0xa458b8], eax */ W32((u32)(0xa458b8u), r_eax);
    /* 0045ec6d: mov dword ptr [0xa458c0], eax */ W32((u32)(0xa458c0u), r_eax);
    /* 0045ec72: mov dword ptr [0xa45864], 0 */ W32((u32)(0xa45864u), 0x0u);
    /* 0045ec7c: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0045ec81: mov dword ptr [0xa458fc], 0x461c4000 */ W32((u32)(0xa458fcu), 0x461c4000u);
    /* 0045ec8b: mov dword ptr [0xa45938], edx */ W32((u32)(0xa45938u), r_edx);
    /* 0045ec91: mov dword ptr [0xa458c4], edi */ W32((u32)(0xa458c4u), r_edi);
    /* 0045ec97: mov dword ptr [0xa45900], 0xc1200000 */ W32((u32)(0xa45900u), 0xc1200000u);
    /* 0045eca1: mov dword ptr [0xa45904], 0 */ W32((u32)(0xa45904u), 0x0u);
    /* 0045ecab: mov dword ptr [0xa45940], edi */ W32((u32)(0xa45940u), r_edi);
    /* 0045ecb1: mov dword ptr [0xa4594c], edi */ W32((u32)(0xa4594cu), r_edi);
    /* 0045ecb7: mov dword ptr [0xa45920], 0x41a00000 */ W32((u32)(0xa45920u), 0x41a00000u);
    /* 0045ecc1: mov dword ptr [0xa45924], 0x42340000 */ W32((u32)(0xa45924u), 0x42340000u);
    /* 0045eccb: mov dword ptr [0xa458d8], eax */ W32((u32)(0xa458d8u), r_eax);
    /* 0045ecd0: mov dword ptr [0xa458e4], eax */ W32((u32)(0xa458e4u), r_eax);
    /* 0045ecd5: mov dword ptr [0x9a66fc], 0x41a00000 */ W32((u32)(0x9a66fcu), 0x41a00000u);
    /* 0045ecdf: mov dword ptr [0x9a6704], 0x42340000 */ W32((u32)(0x9a6704u), 0x42340000u);
    /* 0045ece9: mov dword ptr [0xa45958], edx */ W32((u32)(0xa45958u), r_edx);
    /* 0045ecef: mov dword ptr [0xa4595c], edi */ W32((u32)(0xa4595cu), r_edi);
    /* 0045ecf5: mov dword ptr [0xa4587c], 0x2a */ W32((u32)(0xa4587cu), 0x2au);
    /* 0045ecff: mov dword ptr [0xa458a8], 0x28 */ W32((u32)(0xa458a8u), 0x28u);
    /* 0045ed09: mov dword ptr [0xa458ec], ecx */ W32((u32)(0xa458ecu), r_ecx);
    /* 0045ed0f: mov dword ptr [0xa45934], 0xc4 */ W32((u32)(0xa45934u), 0xc4u);
    /* 0045ed19: mov dword ptr [0xa458b4], 0x93 */ W32((u32)(0xa458b4u), 0x93u);
    /* 0045ed23: mov dword ptr [0xa458bc], 0x42 */ W32((u32)(0xa458bcu), 0x42u);
    /* 0045ed2d: mov dword ptr [0xa4593c], 0x4a */ W32((u32)(0xa4593cu), 0x4au);
    /* 0045ed37: mov dword ptr [0xa458c8], 0x49 */ W32((u32)(0xa458c8u), 0x49u);
    /* 0045ed41: mov dword ptr [0xa458cc], 0x45 */ W32((u32)(0xa458ccu), 0x45u);
    /* 0045ed4b: mov dword ptr [0xa45944], 0x18 */ W32((u32)(0xa45944u), 0x18u);
    /* 0045ed55: mov dword ptr [0xa45948], 0x4a */ W32((u32)(0xa45948u), 0x4au);
    /* 0045ed5f: mov dword ptr [0xa458d0], 0x46 */ W32((u32)(0xa458d0u), 0x46u);
    /* 0045ed69: mov dword ptr [0xa45950], 0x10 */ W32((u32)(0xa45950u), 0x10u);
    /* 0045ed73: mov dword ptr [0xa45954], 0x1f */ W32((u32)(0xa45954u), 0x1fu);
    /* 0045ed7d: mov dword ptr [0xa458dc], 0x21 */ W32((u32)(0xa458dcu), 0x21u);
    /* 0045ed87: mov dword ptr [0xa458e0], 0x1c */ W32((u32)(0xa458e0u), 0x1cu);
    /* 0045ed91: mov dword ptr [0xa458e8], 0x48 */ W32((u32)(0xa458e8u), 0x48u);
    /* 0045ed9b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ed9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ed9f: ret  */ FN_RET(0x0045ebb8); r_esp += 4; return;
}

void f_0045eda0(void) /* sub_45EDA0 */
{
    FN_ENTER(0x0045eda0);
    /* 0045eda0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045eda1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045eda2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045eda3: mov edx, ecx */ r_edx = r_ecx;
    /* 0045eda5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045eda7: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 0045edaa: mov esi, eax */ r_esi = r_eax;
    /* 0045edac: mov edi, edx */ r_edi = r_edx;
    /* 0045edae: mov ebx, ecx */ r_ebx = r_ecx;
L_0045edb0:; BB(0x0045edb0);
    /* 0045edb0: push dword ptr [esi*4 + 0x900320] */ { u32 v = R32((u32)(r_esi*4+0x900320u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045edb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045edb8: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45edbdu); f_00509590();
    /* 0045edbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045edc0: mov dword ptr [edi + esi*4 + 0x40c], eax */ W32((u32)(r_edi+r_esi*4+0x40cu), r_eax);
    /* 0045edc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045edc9: je 0x45edd4 */ if (fZ) goto L_0045edd4;
L_0045edcb:; BB(0x0045edcb);
    /* 0045edcb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045edcd: mov ecx, eax */ r_ecx = r_eax;
    /* 0045edcf: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45edd4u); f_00508efc();
L_0045edd4:; BB(0x0045edd4);
    /* 0045edd4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045edd7: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045edda: jl 0x45edb0 */ if ((fS!=fO)) goto L_0045edb0;
L_0045eddc:; BB(0x0045eddc);
    /* 0045eddc: mov eax, esi */ r_eax = r_esi;
    /* 0045edde: mov edx, edi */ r_edx = r_edi;
    /* 0045ede0: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045ede3: jge 0x45ee31 */ if ((fS==fO)) goto L_0045ee31;
L_0045ede5:; BB(0x0045ede5);
    /* 0045ede5: mov ecx, eax */ r_ecx = r_eax;
    /* 0045ede7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0045ede9: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045edec: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045edef: jl 0x45ee1e */ if ((fS!=fO)) goto L_0045ee1e;
L_0045edf1:; BB(0x0045edf1);
    /* 0045edf1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045edf3: mov dword ptr [edx + eax*4 + 0x40c], ecx */ W32((u32)(r_edx+r_eax*4+0x40cu), r_ecx);
    /* 0045edfa: mov dword ptr [edx + eax*4 + 0x410], ecx */ W32((u32)(r_edx+r_eax*4+0x410u), r_ecx);
    /* 0045ee01: mov dword ptr [edx + eax*4 + 0x414], ecx */ W32((u32)(r_edx+r_eax*4+0x414u), r_ecx);
    /* 0045ee08: mov dword ptr [edx + eax*4 + 0x418], ecx */ W32((u32)(r_edx+r_eax*4+0x418u), r_ecx);
    /* 0045ee0f: mov dword ptr [edx + eax*4 + 0x41c], ecx */ W32((u32)(r_edx+r_eax*4+0x41cu), r_ecx);
    /* 0045ee16: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045ee19: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ee1c: jl 0x45edf1 */ if ((fS!=fO)) goto L_0045edf1;
L_0045ee1e:; BB(0x0045ee1e);
    /* 0045ee1e: mov dword ptr [edx + eax*4 + 0x40c], 0 */ W32((u32)(r_edx+r_eax*4+0x40cu), 0x0u);
    /* 0045ee29: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045ee2c: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045ee2f: jl 0x45ee1e */ if ((fS!=fO)) goto L_0045ee1e;
L_0045ee31:; BB(0x0045ee31);
    /* 0045ee31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ee32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ee33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ee34: ret  */ FN_RET(0x0045eda0); r_esp += 4; return;
}

void f_0045ee38(void) /* sub_45EE38 */
{
    FN_ENTER(0x0045ee38);
    /* 0045ee38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045ee3b: movzx eax, word ptr [ebx + 0x3c2] */ r_eax = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045ee42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee46: call 0x4535e0 */ r_esp -= 4; W32(r_esp, 0x45ee4bu); f_004535e0();
    /* 0045ee4b: mov eax, dword ptr [0xa4595c] */ r_eax = R32((u32)(0xa4595cu));
    /* 0045ee50: mov dword ptr [ebx + 0x534], 0 */ W32((u32)(r_ebx+0x534u), 0x0u);
    /* 0045ee5a: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045ee60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ee63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ee64: ret  */ FN_RET(0x0045ee38); r_esp += 4; return;
}

void f_0045ee68(void) /* sub_45EE68 */
{
    FN_ENTER(0x0045ee68);
    /* 0045ee68: mov eax, dword ptr [0xa45958] */ r_eax = R32((u32)(0xa45958u));
    /* 0045ee6d: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045ee73: mov dword ptr [ecx + 0x534], 0 */ W32((u32)(r_ecx+0x534u), 0x0u);
    /* 0045ee7d: ret  */ FN_RET(0x0045ee68); r_esp += 4; return;
}

void f_0045ee80(void) /* sub_45EE80 */
{
    FN_ENTER(0x0045ee80);
    /* 0045ee80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045ee83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045ee85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee88: push 0x388 */ { u32 v = 0x388u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee8d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45ee92u); f_00814298();
    /* 0045ee92: mov eax, dword ptr [0xa4594c] */ r_eax = R32((u32)(0xa4594cu));
    /* 0045ee97: mov dword ptr [ebx + 0x534], 0 */ W32((u32)(r_ebx+0x534u), 0x0u);
    /* 0045eea1: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045eea7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045eeaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045eeab: ret  */ FN_RET(0x0045ee80); r_esp += 4; return;
}

void f_0045eeac(void)
{
    FN_ENTER(0x0045eeac);
    /* 0045eeac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045eead: mov edi, ecx */ r_edi = r_ecx;
    /* 0045eeaf: mov edx, dword ptr [edi + 0x3b0] */ r_edx = R32((u32)(r_edi+0x3b0u));
    /* 0045eeb5: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0045eeba: mov dword ptr [edi + 0x3a8], eax */ W32((u32)(r_edi+0x3a8u), r_eax);
    /* 0045eec0: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 0045eec6: mov dword ptr [edi + 0x3b4], edx */ W32((u32)(r_edi+0x3b4u), r_edx);
    /* 0045eecc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045eece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eed1: push 0x395 */ { u32 v = 0x395u; r_esp -= 4; W32(r_esp, v); }
    /* 0045eed6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45eedbu); f_00814298();
    /* 0045eedb: mov eax, dword ptr [0xa45940] */ r_eax = R32((u32)(0xa45940u));
    /* 0045eee0: mov dword ptr [edi + 0x534], 1 */ W32((u32)(r_edi+0x534u), 0x1u);
    /* 0045eeea: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 0045eef0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045eef3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045eef4: ret  */ FN_RET(0x0045eeac); r_esp += 4; return;
}

void f_0045eef8(void) /* sub_45EEF8 */
{
    FN_ENTER(0x0045eef8);
    /* 0045eef8: mov edx, dword ptr [ecx + 0x3b0] */ r_edx = R32((u32)(r_ecx+0x3b0u));
    /* 0045eefe: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0045ef03: mov dword ptr [ecx + 0x3a8], eax */ W32((u32)(r_ecx+0x3a8u), r_eax);
    /* 0045ef09: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 0045ef0f: mov eax, dword ptr [0xa45938] */ r_eax = R32((u32)(0xa45938u));
    /* 0045ef14: mov dword ptr [ecx + 0x534], 1 */ W32((u32)(r_ecx+0x534u), 0x1u);
    /* 0045ef1e: mov dword ptr [ecx + 0x3b4], edx */ W32((u32)(r_ecx+0x3b4u), r_edx);
    /* 0045ef24: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045ef2a: ret  */ FN_RET(0x0045eef8); r_esp += 4; return;
}

void f_0045ef2c(void) /* sub_45EF2C */
{
    FN_ENTER(0x0045ef2c);
    /* 0045ef2c: mov edx, dword ptr [ecx + 0x3b0] */ r_edx = R32((u32)(r_ecx+0x3b0u));
    /* 0045ef32: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0045ef37: mov dword ptr [ecx + 0x3a8], eax */ W32((u32)(r_ecx+0x3a8u), r_eax);
    /* 0045ef3d: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 0045ef43: mov eax, dword ptr [0xa45934] */ r_eax = R32((u32)(0xa45934u));
    /* 0045ef48: mov dword ptr [ecx + 0x534], 1 */ W32((u32)(r_ecx+0x534u), 0x1u);
    /* 0045ef52: mov dword ptr [ecx + 0x3b4], edx */ W32((u32)(r_ecx+0x3b4u), r_edx);
    /* 0045ef58: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045ef5e: ret  */ FN_RET(0x0045ef2c); r_esp += 4; return;
}

void f_0045ef60(void)
{
    FN_ENTER(0x0045ef60);
    /* 0045ef60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef61: mov edi, ecx */ r_edi = r_ecx;
    /* 0045ef63: mov eax, dword ptr [edi + 0x3b0] */ r_eax = R32((u32)(r_edi+0x3b0u));
    /* 0045ef69: mov dword ptr [edi + 0x3b4], eax */ W32((u32)(r_edi+0x3b4u), r_eax);
    /* 0045ef6f: mov dword ptr [edi + 0x3ac], 0x11 */ W32((u32)(r_edi+0x3acu), 0x11u);
    /* 0045ef79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef7b: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0045ef7e: mov dword ptr [edi + 0x3a8], 0x10 */ W32((u32)(r_edi+0x3a8u), 0x10u);
    /* 0045ef88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef8b: push 0x38f */ { u32 v = 0x38fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef90: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45ef95u); f_00814298();
    /* 0045ef95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ef98: movzx eax, word ptr [edi + 0x3c2] */ r_eax = (u32)R16((u32)(r_edi+0x3c2u));
    /* 0045ef9f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045efa4: je 0x45efbd */ if (fZ) goto L_0045efbd;
L_0045efa6:; BB(0x0045efa6);
    /* 0045efa6: mov eax, dword ptr [0xa458b0] */ r_eax = R32((u32)(0xa458b0u));
    /* 0045efab: mov dword ptr [edi + 0x534], 0 */ W32((u32)(r_edi+0x534u), 0x0u);
    /* 0045efb5: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 0045efbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045efbc: ret  */ FN_RET(0x0045ef60); r_esp += 4; return;
L_0045efbd:; BB(0x0045efbd);
    /* 0045efbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045efbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045efc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045efc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045efc2: push 0x38a */ { u32 v = 0x38au; r_esp -= 4; W32(r_esp, v); }
    /* 0045efc7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45efccu); f_00814298();
    /* 0045efcc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045efcf: jmp 0x45efa6 */ goto L_0045efa6;
}

void f_0045efd4(void)
{
    FN_ENTER(0x0045efd4);
    /* 0045efd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045efd5: mov edi, ecx */ r_edi = r_ecx;
    /* 0045efd7: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 0045efdd: mov edx, dword ptr [edi + 0x3b0] */ r_edx = R32((u32)(r_edi+0x3b0u));
    /* 0045efe3: mov dword ptr [edi + 0x3a8], 0x11 */ W32((u32)(r_edi+0x3a8u), 0x11u);
    /* 0045efed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045efef: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 0045eff5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045eff7: mov dword ptr [edi + 0x3b4], edx */ W32((u32)(r_edi+0x3b4u), r_edx);
    /* 0045effd: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0045f000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f001: push 0x38e */ { u32 v = 0x38eu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f006: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45f00bu); f_00814298();
    /* 0045f00b: mov eax, dword ptr [0xa458ac] */ r_eax = R32((u32)(0xa458acu));
    /* 0045f010: mov dword ptr [edi + 0x534], 1 */ W32((u32)(r_edi+0x534u), 0x1u);
    /* 0045f01a: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 0045f020: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045f023: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045f024: ret  */ FN_RET(0x0045efd4); r_esp += 4; return;
}

