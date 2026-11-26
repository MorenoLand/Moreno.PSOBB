#include "protos.h"

void f_0089c106(void) /* sub_89C106 */
{
    FN_ENTER(0x0089c106);
    /* 0089c106: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c107: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c109: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089c10c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c10d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c10f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c110: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089c113: cmp dword ptr [ecx + 0x1048], ebx */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089c119: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c11a: je 0x89c12a */ if (fZ) goto L_0089c12a;
L_0089c11c:; BB(0x0089c11c);
    /* 0089c11c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089c11f: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89c124u); f_00899f81();
    /* 0089c124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c127: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089c12a:; BB(0x0089c12a);
    /* 0089c12a: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089c130: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089c133: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089c139: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c13c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089c13f: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c142: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c144: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c147: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c14a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c14d: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c150: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089c153: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089c156: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c15bu); f_0089a712();
    /* 0089c15b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c15e: cmp dword ptr [eax + 0x1058], ebx */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c164: jbe 0x89c1ca */ if ((fC||fZ)) goto L_0089c1ca;
L_0089c166:; BB(0x0089c166);
    /* 0089c166: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0089c168:; BB(0x0089c168);
    /* 0089c168: mov eax, ebx */ r_eax = r_ebx;
    /* 0089c16a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c16d: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089c170: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c173: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0089c176: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 0089c179: fmul dword ptr [0x99bab8] */ ST(0) = ST(0) * R_F32((u32)(0x99bab8u));
    /* 0089c17f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089c181: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089c184: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c186: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089c189: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c18c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c18f: fld dword ptr [esi + eax + 4] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x4u)));
    /* 0089c193: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089c196: fmul dword ptr [0x99bab8] */ ST(0) = ST(0) * R_F32((u32)(0x99bab8u));
    /* 0089c19c: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0089c19f: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089c1a2: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089c1a5: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c1a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089c1ab: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c1ae: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c1b4: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c1b6: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089c1b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c1bb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c1be: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c1bf: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089c1c2: cmp ebx, dword ptr [eax + 0x1058] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c1c8: jb 0x89c168 */ if (fC) goto L_0089c168;
L_0089c1ca:; BB(0x0089c1ca);
    /* 0089c1ca: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c1cf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089c1d2: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 0089c1d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c1d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c1d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089c1d8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c1d9: ret 0xc */ FN_RET(0x0089c106); r_esp += 16; return;
}

void f_0089c1dc(void) /* sub_89C1DC */
{
    FN_ENTER(0x0089c1dc);
    /* 0089c1dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c1dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c1df: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089c1e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c1e3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c1e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c1e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089c1e9: cmp dword ptr [ecx + 0x1048], ebx */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089c1ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c1f0: je 0x89c200 */ if (fZ) goto L_0089c200;
L_0089c1f2:; BB(0x0089c1f2);
    /* 0089c1f2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089c1f5: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89c1fau); f_00899f81();
    /* 0089c1fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c1fd: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089c200:; BB(0x0089c200);
    /* 0089c200: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089c206: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089c209: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089c20f: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c212: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089c215: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c218: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c21b: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c21d: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c220: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c223: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c226: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089c229: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 0089c22c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089c22f: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c234u); f_0089a712();
    /* 0089c234: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c237: cmp dword ptr [eax + 0x1058], ebx */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c23d: jbe 0x89c2d4 */ if ((fC||fZ)) goto L_0089c2d4;
L_0089c243:; BB(0x0089c243);
    /* 0089c243: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0089c245:; BB(0x0089c245);
    /* 0089c245: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089c248: mov eax, ebx */ r_eax = r_ebx;
    /* 0089c24a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c24d: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0089c250: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c253: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089c256: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089c259: fmul dword ptr [0x99bac0] */ ST(0) = ST(0) * R_F32((u32)(0x99bac0u));
    /* 0089c25f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089c261: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089c264: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c266: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089c269: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c26c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c26f: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089c273: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0089c276: fmul dword ptr [0x99babc] */ ST(0) = ST(0) * R_F32((u32)(0x99babcu));
    /* 0089c27c: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089c27f: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089c282: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089c285: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c288: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0089c28b: fld dword ptr [ecx + edi + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edi+0x8u)));
    /* 0089c28f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089c292: fmul dword ptr [0x99babc] */ ST(0) = ST(0) * R_F32((u32)(0x99babcu));
    /* 0089c298: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089c29b: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089c29e: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089c2a1: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c2a4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089c2a7: and eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c2ac: shl edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0089c2af: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c2b1: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c2b4: and esi, 0x3ff */ {  u32 a = r_esi; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c2ba: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c2bc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089c2be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c2c1: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c2c4: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c2c5: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c2c8: cmp ebx, dword ptr [eax + 0x1058] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c2ce: jb 0x89c245 */ if (fC) goto L_0089c245;
L_0089c2d4:; BB(0x0089c2d4);
    /* 0089c2d4: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c2d9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089c2dc: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0089c2df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c2e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c2e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089c2e2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c2e3: ret 0xc */ FN_RET(0x0089c1dc); r_esp += 16; return;
}

void f_0089c2e6(void) /* sub_89C2E6 */
{
    FN_ENTER(0x0089c2e6);
    /* 0089c2e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c2e7: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c2e9: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089c2ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c2ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c2ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c2ef: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089c2f1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089c2f4: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089c2fa: je 0x89c30a */ if (fZ) goto L_0089c30a;
L_0089c2fc:; BB(0x0089c2fc);
    /* 0089c2fc: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089c2ff: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89c304u); f_00899f81();
    /* 0089c304: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c307: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089c30a:; BB(0x0089c30a);
    /* 0089c30a: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089c310: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089c313: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089c319: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c31c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089c31f: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c322: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c325: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c327: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c32a: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c32d: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c330: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089c333: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 0089c336: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089c339: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c33eu); f_0089a712();
    /* 0089c33e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c341: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c347: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0089c34a: jbe 0x89c40a */ if ((fC||fZ)) goto L_0089c40a;
L_0089c350:; BB(0x0089c350);
    /* 0089c350: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c352: mov esi, 0x3ff */ r_esi = 0x3ffu;
L_0089c357:; BB(0x0089c357);
    /* 0089c357: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089c35a: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089c35d: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c360: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089c363: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c366: fst dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0));
    /* 0089c369: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089c36c: fmul dword ptr [0x99bac0] */ ST(0) = ST(0) * R_F32((u32)(0x99bac0u));
    /* 0089c372: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089c374: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c377: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c379: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c37c: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c37f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c382: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089c386: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089c389: fmul dword ptr [0x99bac0] */ ST(0) = ST(0) * R_F32((u32)(0x99bac0u));
    /* 0089c38f: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c392: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c395: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c398: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c39b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089c39e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0089c3a1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c3a4: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0089c3a8: fmul dword ptr [0x99bac0] */ ST(0) = ST(0) * R_F32((u32)(0x99bac0u));
    /* 0089c3ae: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c3b1: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c3b4: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c3b7: fistp dword ptr [ebp - 0x20] */ W32((u32)(r_ebp+0xffffffe0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c3ba: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089c3bd: fld dword ptr [ecx + ebx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0xcu)));
    /* 0089c3c1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0089c3c4: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 0089c3c6: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c3c9: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c3cc: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c3cf: fistp dword ptr [ebp - 0x24] */ W32((u32)(r_ebp+0xffffffdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c3d2: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0089c3d5: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c3d7: shl ebx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0089c3da: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c3dc: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089c3df: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c3e2: and ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c3e4: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c3e6: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c3e9: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089c3eb: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c3ed: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089c3ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c3f2: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c3f5: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089c3f8: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089c3fb: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c3fe: cmp edi, dword ptr [eax + 0x1058] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c404: jb 0x89c357 */ if (fC) goto L_0089c357;
L_0089c40a:; BB(0x0089c40a);
    /* 0089c40a: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c40f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0089c412: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 0089c415: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c416: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c417: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089c418: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c419: ret 0xc */ FN_RET(0x0089c2e6); r_esp += 16; return;
}

void f_0089c41c(void) /* sub_89C41C */
{
    FN_ENTER(0x0089c41c);
    /* 0089c41c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c41d: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c41f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089c422: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c423: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c425: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089c427: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089c42a: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089c430: je 0x89c440 */ if (fZ) goto L_0089c440;
L_0089c432:; BB(0x0089c432);
    /* 0089c432: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089c435: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89c43au); f_00899f81();
    /* 0089c43a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c43d: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089c440:; BB(0x0089c440);
    /* 0089c440: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089c446: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089c449: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089c44f: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c452: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089c455: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c458: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c45a: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c45d: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c460: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c463: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c466: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089c469: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 0089c46c: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c471u); f_0089a712();
    /* 0089c471: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c474: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c476: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c47c: jbe 0x89c4d1 */ if ((fC||fZ)) goto L_0089c4d1;
L_0089c47e:; BB(0x0089c47e);
    /* 0089c47e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c481: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c483: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089c486: fmul dword ptr [0x99b9c8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c8u));
    /* 0089c48c: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089c48f: fmul dword ptr [0x99b9c4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c4u));
    /* 0089c495: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089c497: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089c499: mov eax, ecx */ r_eax = r_ecx;
    /* 0089c49b: fmul dword ptr [0x99b9c0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c0u));
    /* 0089c4a1: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c4a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089c4a6: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c4ac: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0089c4af: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089c4b1: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089c4b4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089c4b7: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c4ba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089c4bd: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0089c4c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c4c3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c4c4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c4c5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c4c6: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089c4c9: cmp ecx, dword ptr [eax + 0x1058] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c4cf: jb 0x89c47e */ if (fC) goto L_0089c47e;
L_0089c4d1:; BB(0x0089c4d1);
    /* 0089c4d1: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c4d6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089c4d9: fldcw word ptr [ebp - 0xc] */ fcw = R16((u32)(r_ebp+0xfffffff4u));
    /* 0089c4dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c4dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c4de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089c4df: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c4e0: ret 0xc */ FN_RET(0x0089c41c); r_esp += 16; return;
}

void f_0089c4e3(void) /* sub_89C4E3 */
{
    FN_ENTER(0x0089c4e3);
    /* 0089c4e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c4e4: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c4e6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089c4e9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089c4ec: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089c4f3: je 0x89c503 */ if (fZ) goto L_0089c503;
L_0089c4f5:; BB(0x0089c4f5);
    /* 0089c4f5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089c4f8: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89c4fdu); f_00899f81();
    /* 0089c4fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c500: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089c503:; BB(0x0089c503);
    /* 0089c503: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089c509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089c50c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c50d: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c510: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089c513: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c514: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089c51a: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c51d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c51f: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c522: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c525: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c528: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c52b: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089c52e: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089c531: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c536u); f_0089a712();
    /* 0089c536: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c539: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089c53b: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c541: jbe 0x89c5c0 */ if ((fC||fZ)) goto L_0089c5c0;
L_0089c543:; BB(0x0089c543);
    /* 0089c543: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c545: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089c546:; BB(0x0089c546);
    /* 0089c546: mov eax, esi */ r_eax = r_esi;
    /* 0089c548: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c54b: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089c54e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c551: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0089c554: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c556: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089c559: fmul dword ptr [0x99b9c8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c8u));
    /* 0089c55f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089c562: fmul dword ptr [0x99b9c4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c4u));
    /* 0089c568: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089c56a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089c56c: fmul dword ptr [0x99b9c0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c0u));
    /* 0089c572: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089c574: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c57a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089c57c: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089c57f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c581: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089c584: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c587: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c58a: fld dword ptr [ecx + eax + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0xcu)));
    /* 0089c58e: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089c591: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c597: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0089c59a: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089c59d: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089c5a0: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c5a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089c5a6: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c5a9: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c5ab: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089c5ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c5b0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c5b3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089c5b4: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c5b7: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c5bd: jb 0x89c546 */ if (fC) goto L_0089c546;
L_0089c5bf:; BB(0x0089c5bf);
    /* 0089c5bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089c5c0:; BB(0x0089c5c0);
    /* 0089c5c0: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c5c5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089c5c8: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 0089c5cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c5cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c5cd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c5ce: ret 0xc */ FN_RET(0x0089c4e3); r_esp += 16; return;
}

void f_0089c5d1(void) /* sub_89C5D1 */
{
    FN_ENTER(0x0089c5d1);
    /* 0089c5d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c5d2: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c5d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089c5d7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089c5da: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089c5e1: je 0x89c5f1 */ if (fZ) goto L_0089c5f1;
L_0089c5e3:; BB(0x0089c5e3);
    /* 0089c5e3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089c5e6: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89c5ebu); f_00899f81();
    /* 0089c5eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c5ee: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089c5f1:; BB(0x0089c5f1);
    /* 0089c5f1: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089c5f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089c5fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c5fb: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c5fe: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089c601: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c602: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089c608: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c60b: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c60d: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c610: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c613: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c616: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c619: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089c61c: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089c61f: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c624u); f_0089a712();
    /* 0089c624: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c627: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089c629: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c62f: jbe 0x89c6af */ if ((fC||fZ)) goto L_0089c6af;
L_0089c631:; BB(0x0089c631);
    /* 0089c631: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0089c633:; BB(0x0089c633);
    /* 0089c633: mov ecx, esi */ r_ecx = r_esi;
    /* 0089c635: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c638: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0089c63b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089c63e: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089c641: fld dword ptr [eax + ecx + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x8u)));
    /* 0089c645: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c64b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089c64d: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089c650: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c652: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089c655: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c658: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089c65b: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0089c65e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089c661: fld dword ptr [eax + ecx + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x4u)));
    /* 0089c665: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c66b: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089c66e: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089c671: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089c674: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c677: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089c67a: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 0089c67e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089c681: fld dword ptr [eax + ecx] */ FPUSH(R_F32((u32)(r_eax+r_ecx)));
    /* 0089c684: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c68a: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089c68d: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089c690: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089c693: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c696: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089c699: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0089c69d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c6a0: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c6a3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089c6a4: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c6a7: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c6ad: jb 0x89c633 */ if (fC) goto L_0089c633;
L_0089c6af:; BB(0x0089c6af);
    /* 0089c6af: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c6b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0089c6b7: fldcw word ptr [ebp - 0x18] */ fcw = R16((u32)(r_ebp+0xffffffe8u));
    /* 0089c6ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c6bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c6bc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c6bd: ret 0xc */ FN_RET(0x0089c5d1); r_esp += 16; return;
}

void f_0089c6c0(void) /* sub_89C6C0 */
{
    FN_ENTER(0x0089c6c0);
    /* 0089c6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c6c3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089c6c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c6c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c6c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c6c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089c6cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089c6ce: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089c6d4: je 0x89c6e4 */ if (fZ) goto L_0089c6e4;
L_0089c6d6:; BB(0x0089c6d6);
    /* 0089c6d6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089c6d9: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89c6deu); f_00899f81();
    /* 0089c6de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c6e1: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089c6e4:; BB(0x0089c6e4);
    /* 0089c6e4: mov esi, dword ptr [ecx + 0x1050] */ r_esi = R32((u32)(r_ecx+0x1050u));
    /* 0089c6ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089c6ed: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089c6f3: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c6f6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0089c6f9: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c6fc: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c6ff: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089c701: add esi, dword ptr [ecx + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089c704: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c707: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0089c70a: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0089c70d: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 0089c710: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089c713: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c718u); f_0089a712();
    /* 0089c718: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c71b: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c721: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0089c724: jbe 0x89c80a */ if ((fC||fZ)) goto L_0089c80a;
L_0089c72a:; BB(0x0089c72a);
    /* 0089c72a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0089c72c:; BB(0x0089c72c);
    /* 0089c72c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089c72f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089c732: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c735: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 0089c738: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c73b: fst dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0));
    /* 0089c73e: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089c741: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c747: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089c749: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c74c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c74e: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c751: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c754: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c757: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089c75b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089c75e: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c764: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c767: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c76a: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c76d: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c770: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089c773: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0089c776: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c779: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0089c77d: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c783: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c786: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c789: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c78c: fistp dword ptr [ebp - 0x20] */ W32((u32)(r_ebp+0xffffffe0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c78f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0089c792: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0089c795: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c798: fld dword ptr [ecx + eax + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0xcu)));
    /* 0089c79c: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089c7a2: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c7a5: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c7a8: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c7ab: fistp dword ptr [ebp - 0x24] */ W32((u32)(r_ebp+0xffffffdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c7ae: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0089c7b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0089c7b2: shld edx, eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0089c7b6: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c7b9: mov ebx, eax */ r_ebx = r_eax;
    /* 0089c7bb: mov eax, edx */ r_eax = r_edx;
    /* 0089c7bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089c7c0: mov eax, edi */ r_eax = r_edi;
    /* 0089c7c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0089c7c3: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c7c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089c7c8: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c7ca: shld eax, ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 b = r_ebx; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0089c7ce: mov edi, eax */ r_edi = r_eax;
    /* 0089c7d0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089c7d3: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0089c7d6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0089c7d7: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c7d9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0089c7dc: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0089c7de: shld edi, ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 b = r_ebx; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 0089c7e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0089c7e3: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0089c7e6: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c7e8: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0089c7ea: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 0089c7ec: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0089c7ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c7f2: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089c7f5: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089c7f8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089c7fb: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c7fe: cmp edx, dword ptr [eax + 0x1058] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c804: jb 0x89c72c */ if (fC) goto L_0089c72c;
L_0089c80a:; BB(0x0089c80a);
    /* 0089c80a: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c80f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0089c812: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 0089c815: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c816: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c817: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089c818: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c819: ret 0xc */ FN_RET(0x0089c6c0); r_esp += 16; return;
}

void f_0089c81c(void) /* sub_89C81C */
{
    FN_ENTER(0x0089c81c);
    /* 0089c81c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c81d: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c81f: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089c825: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c829: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089c82f: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c833: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c835: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c838: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089c83b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c83c: mov esi, dword ptr [ecx + 0x1064] */ r_esi = R32((u32)(r_ecx+0x1064u));
    /* 0089c842: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089c844: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089c846: jae 0x89c88c */ if (!fC) goto L_0089c88c;
L_0089c848:; BB(0x0089c848);
    /* 0089c848: fld dword ptr [0x99ba7c] */ FPUSH(R_F32((u32)(0x99ba7cu)));
    /* 0089c84e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089c84f:; BB(0x0089c84f);
    /* 0089c84f: movzx edi, byte ptr [eax + 2] */ r_edi = (u32)R8((u32)(r_eax+0x2u));
    /* 0089c853: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c856: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c859: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c85b: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089c85d: movzx edi, byte ptr [eax + 1] */ r_edi = (u32)R8((u32)(r_eax+0x1u));
    /* 0089c861: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c864: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c867: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c86a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c86c: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089c86f: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 0089c872: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c875: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c878: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089c87a: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c87d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c87f: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089c882: fld1  */ FPUSH(1.0);
    /* 0089c884: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089c887: jb 0x89c84f */ if (fC) goto L_0089c84f;
L_0089c889:; BB(0x0089c889);
    /* 0089c889: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c88b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089c88c:; BB(0x0089c88c);
    /* 0089c88c: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c890: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c891: je 0x89c8a4 */ if (fZ) goto L_0089c8a4;
L_0089c893:; BB(0x0089c893);
    /* 0089c893: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089c899: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c89c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089c89e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c89f: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89c8a4u); f_0089aae4();
L_0089c8a4:; BB(0x0089c8a4);
    /* 0089c8a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089c8a5: ret 0xc */ FN_RET(0x0089c81c); r_esp += 16; return;
}

void f_0089c8a8(void) /* sub_89C8A8 */
{
    FN_ENTER(0x0089c8a8);
    /* 0089c8a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c8a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c8ab: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089c8b1: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c8b5: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089c8bb: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c8bf: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c8c1: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c8c4: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089c8ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c8cb: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 0089c8ce: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089c8d0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089c8d3: jae 0x89c932 */ if (!fC) goto L_0089c932;
L_0089c8d5:; BB(0x0089c8d5);
    /* 0089c8d5: fld dword ptr [0x99ba7c] */ FPUSH(R_F32((u32)(0x99ba7cu)));
    /* 0089c8db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089c8dc:; BB(0x0089c8dc);
    /* 0089c8dc: movzx edi, byte ptr [eax + 2] */ r_edi = (u32)R8((u32)(r_eax+0x2u));
    /* 0089c8e0: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c8e3: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c8e6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c8e8: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089c8ea: movzx edi, byte ptr [eax + 1] */ r_edi = (u32)R8((u32)(r_eax+0x1u));
    /* 0089c8ee: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c8f1: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c8f4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c8f6: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0089c8f9: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0089c8fb: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089c901: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089c903: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c906: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c909: jge 0x89c911 */ if ((fS==fO)) goto L_0089c911;
L_0089c90b:; BB(0x0089c90b);
    /* 0089c90b: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089c911:; BB(0x0089c911);
    /* 0089c911: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c913: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c916: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c919: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089c91b: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089c91e: movzx edi, byte ptr [eax - 1] */ r_edi = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 0089c922: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c925: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c928: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c92a: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089c92d: jb 0x89c8dc */ if (fC) goto L_0089c8dc;
L_0089c92f:; BB(0x0089c92f);
    /* 0089c92f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089c932:; BB(0x0089c932);
    /* 0089c932: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c936: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c937: je 0x89c94a */ if (fZ) goto L_0089c94a;
L_0089c939:; BB(0x0089c939);
    /* 0089c939: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089c93f: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c942: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089c944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c945: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89c94au); f_0089aae4();
L_0089c94a:; BB(0x0089c94a);
    /* 0089c94a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089c94b: ret 0xc */ FN_RET(0x0089c8a8); r_esp += 16; return;
}

void f_0089c94e(void) /* sub_89C94E */
{
    FN_ENTER(0x0089c94e);
    /* 0089c94e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c94f: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c951: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089c957: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c95b: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089c961: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c965: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c967: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c96a: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089c970: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c971: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 0089c974: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089c976: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089c979: jae 0x89c9ce */ if (!fC) goto L_0089c9ce;
L_0089c97b:; BB(0x0089c97b);
    /* 0089c97b: fld dword ptr [0x99ba7c] */ FPUSH(R_F32((u32)(0x99ba7cu)));
    /* 0089c981: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089c982:; BB(0x0089c982);
    /* 0089c982: movzx edi, byte ptr [eax + 2] */ r_edi = (u32)R8((u32)(r_eax+0x2u));
    /* 0089c986: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c989: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c98c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c98e: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089c990: movzx edi, byte ptr [eax + 1] */ r_edi = (u32)R8((u32)(r_eax+0x1u));
    /* 0089c994: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c997: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c99a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c99c: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0089c99f: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0089c9a1: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089c9a7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089c9a9: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089c9ac: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089c9af: jge 0x89c9b7 */ if ((fS==fO)) goto L_0089c9b7;
L_0089c9b1:; BB(0x0089c9b1);
    /* 0089c9b1: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089c9b7:; BB(0x0089c9b7);
    /* 0089c9b7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089c9b9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089c9bc: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c9bf: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089c9c1: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089c9c4: fld1  */ FPUSH(1.0);
    /* 0089c9c6: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089c9c9: jb 0x89c982 */ if (fC) goto L_0089c982;
L_0089c9cb:; BB(0x0089c9cb);
    /* 0089c9cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c9cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089c9ce:; BB(0x0089c9ce);
    /* 0089c9ce: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c9d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c9d3: je 0x89c9e6 */ if (fZ) goto L_0089c9e6;
L_0089c9d5:; BB(0x0089c9d5);
    /* 0089c9d5: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089c9db: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c9de: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089c9e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089c9e1: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89c9e6u); f_0089aae4();
L_0089c9e6:; BB(0x0089c9e6);
    /* 0089c9e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089c9e7: ret 0xc */ FN_RET(0x0089c94e); r_esp += 16; return;
}

void f_0089c9ea(void) /* sub_89C9EA */
{
    FN_ENTER(0x0089c9ea);
    /* 0089c9ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089c9eb: mov ebp, esp */ r_ebp = r_esp;
    /* 0089c9ed: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089c9f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089c9f1: mov esi, ecx */ r_esi = r_ecx;
    /* 0089c9f3: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089c9f9: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c9fd: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089ca03: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ca07: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ca09: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ca0c: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089ca12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ca13: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089ca16: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089ca18: jae 0x89ca70 */ if (!fC) goto L_0089ca70;
L_0089ca1a:; BB(0x0089ca1a);
    /* 0089ca1a: fld dword ptr [0x99bac8] */ FPUSH(R_F32((u32)(0x99bac8u)));
L_0089ca20:; BB(0x0089ca20);
    /* 0089ca20: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089ca23: shr cx, 0xb */ { u32 c = (11u) & 31; u32 a = (u16)r_ecx; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089ca27: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0089ca2a: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089ca2d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ca2f: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ca32: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089ca34: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089ca36: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089ca39: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ca3c: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089ca3f: and ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ca42: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089ca45: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ca48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ca4a: fmul dword ptr [0x99bac4] */ ST(0) = ST(0) * R_F32((u32)(0x99bac4u));
    /* 0089ca50: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089ca53: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089ca55: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ca58: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089ca5b: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ca5e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ca5f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ca60: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089ca62: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089ca64: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089ca67: fld1  */ FPUSH(1.0);
    /* 0089ca69: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089ca6c: jb 0x89ca20 */ if (fC) goto L_0089ca20;
L_0089ca6e:; BB(0x0089ca6e);
    /* 0089ca6e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089ca70:; BB(0x0089ca70);
    /* 0089ca70: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ca74: je 0x89ca89 */ if (fZ) goto L_0089ca89;
L_0089ca76:; BB(0x0089ca76);
    /* 0089ca76: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089ca7c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089ca7f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089ca81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089ca82: mov ecx, esi */ r_ecx = r_esi;
    /* 0089ca84: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89ca89u); f_0089aae4();
L_0089ca89:; BB(0x0089ca89);
    /* 0089ca89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089ca8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ca8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089ca8c: ret 0xc */ FN_RET(0x0089c9ea); r_esp += 16; return;
}

void f_0089ca8f(void) /* sub_89CA8F */
{
    FN_ENTER(0x0089ca8f);
    /* 0089ca8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089ca90: mov ebp, esp */ r_ebp = r_esp;
    /* 0089ca92: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089ca95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ca96: mov esi, ecx */ r_esi = r_ecx;
    /* 0089ca98: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089ca9e: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089caa2: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089caa8: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089caac: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089caae: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cab1: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089cab7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cab8: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089cabb: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cabd: jae 0x89cb12 */ if (!fC) goto L_0089cb12;
L_0089cabf:; BB(0x0089cabf);
    /* 0089cabf: fld dword ptr [0x99bac8] */ FPUSH(R_F32((u32)(0x99bac8u)));
L_0089cac5:; BB(0x0089cac5);
    /* 0089cac5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cac7: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089caca: shr ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089cacd: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cad0: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cad3: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cad6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cad8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cada: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089cadc: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089cadf: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089cae2: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089cae5: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cae8: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089caeb: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089caee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089caf0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089caf2: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089caf5: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089caf7: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cafa: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cafd: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cb00: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cb01: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cb02: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cb04: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cb06: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089cb09: fld1  */ FPUSH(1.0);
    /* 0089cb0b: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089cb0e: jb 0x89cac5 */ if (fC) goto L_0089cac5;
L_0089cb10:; BB(0x0089cb10);
    /* 0089cb10: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089cb12:; BB(0x0089cb12);
    /* 0089cb12: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089cb16: je 0x89cb2b */ if (fZ) goto L_0089cb2b;
L_0089cb18:; BB(0x0089cb18);
    /* 0089cb18: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089cb1e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089cb21: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089cb23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089cb24: mov ecx, esi */ r_ecx = r_esi;
    /* 0089cb26: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89cb2bu); f_0089aae4();
L_0089cb2b:; BB(0x0089cb2b);
    /* 0089cb2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089cb2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089cb2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089cb2e: ret 0xc */ FN_RET(0x0089ca8f); r_esp += 16; return;
}

void f_0089cb31(void) /* sub_89CB31 */
{
    FN_ENTER(0x0089cb31);
    /* 0089cb31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089cb32: mov ebp, esp */ r_ebp = r_esp;
    /* 0089cb34: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089cb37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cb38: mov esi, ecx */ r_esi = r_ecx;
    /* 0089cb3a: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089cb40: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cb44: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089cb4a: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cb4e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cb50: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cb53: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089cb59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cb5a: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089cb5d: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cb5f: jae 0x89cbc2 */ if (!fC) goto L_0089cbc2;
L_0089cb61:; BB(0x0089cb61);
    /* 0089cb61: fld dword ptr [0x99bac8] */ FPUSH(R_F32((u32)(0x99bac8u)));
L_0089cb67:; BB(0x0089cb67);
    /* 0089cb67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cb69: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089cb6c: shr ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089cb6f: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cb72: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cb75: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cb78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cb7a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cb7c: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089cb7e: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089cb81: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089cb84: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089cb87: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cb8a: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cb8d: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cb90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cb92: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cb94: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089cb97: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089cb99: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cb9c: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cb9f: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cba2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cba4: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089cba7: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089cbaa: shr cx, 0xf */ { u32 c = (15u) & 31; u32 a = (u16)r_ecx; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089cbae: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0089cbb1: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cbb4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cbb5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cbb6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cbb8: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cbbb: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089cbbe: jb 0x89cb67 */ if (fC) goto L_0089cb67;
L_0089cbc0:; BB(0x0089cbc0);
    /* 0089cbc0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089cbc2:; BB(0x0089cbc2);
    /* 0089cbc2: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089cbc6: je 0x89cbdb */ if (fZ) goto L_0089cbdb;
L_0089cbc8:; BB(0x0089cbc8);
    /* 0089cbc8: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089cbce: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089cbd1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089cbd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089cbd4: mov ecx, esi */ r_ecx = r_esi;
    /* 0089cbd6: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89cbdbu); f_0089aae4();
L_0089cbdb:; BB(0x0089cbdb);
    /* 0089cbdb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089cbdc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089cbdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089cbde: ret 0xc */ FN_RET(0x0089cb31); r_esp += 16; return;
}

void f_0089cbe1(void) /* sub_89CBE1 */
{
    FN_ENTER(0x0089cbe1);
    /* 0089cbe1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089cbe2: mov ebp, esp */ r_ebp = r_esp;
    /* 0089cbe4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089cbe7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cbe8: mov esi, ecx */ r_esi = r_ecx;
    /* 0089cbea: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089cbf0: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cbf4: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089cbfa: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cbfe: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cc00: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cc03: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089cc09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cc0a: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089cc0d: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cc0f: jae 0x89cc71 */ if (!fC) goto L_0089cc71;
L_0089cc11:; BB(0x0089cc11);
    /* 0089cc11: fld dword ptr [0x99bacc] */ FPUSH(R_F32((u32)(0x99baccu)));
L_0089cc17:; BB(0x0089cc17);
    /* 0089cc17: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0089cc1a: and cl, 0xf */ {  u32 a = (u8)r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089cc1d: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0089cc20: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cc23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cc25: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cc28: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cc2a: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089cc2c: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089cc2e: shr cl, 4 */ { u32 c = (4u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089cc31: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089cc34: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cc37: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cc3a: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cc3d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cc3f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cc41: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089cc44: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089cc46: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cc49: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cc4c: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cc4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cc51: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089cc54: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089cc57: shr cx, 0xc */ { u32 c = (12u) & 31; u32 a = (u16)r_ecx; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089cc5b: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0089cc5e: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cc61: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cc62: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cc63: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cc65: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cc68: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cc6a: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089cc6d: jb 0x89cc17 */ if (fC) goto L_0089cc17;
L_0089cc6f:; BB(0x0089cc6f);
    /* 0089cc6f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089cc71:; BB(0x0089cc71);
    /* 0089cc71: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089cc75: je 0x89cc8a */ if (fZ) goto L_0089cc8a;
L_0089cc77:; BB(0x0089cc77);
    /* 0089cc77: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089cc7d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089cc80: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089cc82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089cc83: mov ecx, esi */ r_ecx = r_esi;
    /* 0089cc85: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89cc8au); f_0089aae4();
L_0089cc8a:; BB(0x0089cc8a);
    /* 0089cc8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089cc8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089cc8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089cc8d: ret 0xc */ FN_RET(0x0089cbe1); r_esp += 16; return;
}

void f_0089cc90(void) /* sub_89CC90 */
{
    FN_ENTER(0x0089cc90);
    /* 0089cc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089cc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0089cc93: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089cc99: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cc9d: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089cca3: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cca7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cca9: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ccac: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089ccb2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ccb3: lea edi, [eax + edx*4] */ r_edi = (u32)(r_eax+r_edx*4);
    /* 0089ccb6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089ccb8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089ccbb: jae 0x89cd4a */ if (!fC) goto L_0089cd4a;
L_0089ccc1:; BB(0x0089ccc1);
    /* 0089ccc1: fld dword ptr [0x99bad4] */ FPUSH(R_F32((u32)(0x99bad4u)));
    /* 0089ccc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089ccc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ccc9: mov esi, 0x3ff */ r_esi = 0x3ffu;
L_0089ccce:; BB(0x0089ccce);
    /* 0089ccce: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0089ccd0: and ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089ccd2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089ccd4: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 0089ccd7: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ccda: jge 0x89cce2 */ if ((fS==fO)) goto L_0089cce2;
L_0089ccdc:; BB(0x0089ccdc);
    /* 0089ccdc: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089cce2:; BB(0x0089cce2);
    /* 0089cce2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cce4: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089cce6: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0089cce8: shr ebx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0089cceb: and ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089cced: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089ccef: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 0089ccf2: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ccf5: jge 0x89ccfd */ if ((fS==fO)) goto L_0089ccfd;
L_0089ccf7:; BB(0x0089ccf7);
    /* 0089ccf7: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089ccfd:; BB(0x0089ccfd);
    /* 0089ccfd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089ccff: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0089cd02: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0089cd04: shr ebx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0089cd07: and ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089cd09: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089cd0b: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 0089cd0e: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cd11: jge 0x89cd19 */ if ((fS==fO)) goto L_0089cd19;
L_0089cd13:; BB(0x0089cd13);
    /* 0089cd13: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089cd19:; BB(0x0089cd19);
    /* 0089cd19: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cd1b: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0089cd1e: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0089cd20: shr ebx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0089cd23: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089cd25: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 0089cd28: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cd2b: jge 0x89cd33 */ if ((fS==fO)) goto L_0089cd33;
L_0089cd2d:; BB(0x0089cd2d);
    /* 0089cd2d: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089cd33:; BB(0x0089cd33);
    /* 0089cd33: fmul dword ptr [0x99bad0] */ ST(0) = ST(0) * R_F32((u32)(0x99bad0u));
    /* 0089cd39: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cd3c: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089cd3f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cd41: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089cd44: jb 0x89ccce */ if (fC) goto L_0089ccce;
L_0089cd46:; BB(0x0089cd46);
    /* 0089cd46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089cd47: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089cd49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089cd4a:; BB(0x0089cd4a);
    /* 0089cd4a: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089cd4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089cd4f: je 0x89cd62 */ if (fZ) goto L_0089cd62;
L_0089cd51:; BB(0x0089cd51);
    /* 0089cd51: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089cd57: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089cd5a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089cd5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089cd5d: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89cd62u); f_0089aae4();
L_0089cd62:; BB(0x0089cd62);
    /* 0089cd62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089cd63: ret 0xc */ FN_RET(0x0089cc90); r_esp += 16; return;
}

void f_0089cd66(void) /* sub_89CD66 */
{
    FN_ENTER(0x0089cd66);
    /* 0089cd66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089cd67: mov ebp, esp */ r_ebp = r_esp;
    /* 0089cd69: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089cd6f: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cd73: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089cd79: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cd7d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cd7f: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cd82: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089cd88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cd89: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 0089cd8c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cd8e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089cd91: jae 0x89cddc */ if (!fC) goto L_0089cddc;
L_0089cd93:; BB(0x0089cd93);
    /* 0089cd93: fld dword ptr [0x99bad8] */ FPUSH(R_F32((u32)(0x99bad8u)));
    /* 0089cd99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089cd9a:; BB(0x0089cd9a);
    /* 0089cd9a: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0089cd9c: and edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089cda2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089cda4: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089cda7: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cdaa: jge 0x89cdb2 */ if ((fS==fO)) goto L_0089cdb2;
L_0089cdac:; BB(0x0089cdac);
    /* 0089cdac: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089cdb2:; BB(0x0089cdb2);
    /* 0089cdb2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cdb4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cdb7: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089cdb9: movzx edi, word ptr [eax - 2] */ r_edi = (u32)R16((u32)(r_eax+0xfffffffeu));
    /* 0089cdbd: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089cdc0: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089cdc3: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cdc5: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cdc8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cdca: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089cdcd: fld1  */ FPUSH(1.0);
    /* 0089cdcf: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089cdd2: fld1  */ FPUSH(1.0);
    /* 0089cdd4: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089cdd7: jb 0x89cd9a */ if (fC) goto L_0089cd9a;
L_0089cdd9:; BB(0x0089cdd9);
    /* 0089cdd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089cddb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089cddc:; BB(0x0089cddc);
    /* 0089cddc: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089cde0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089cde1: je 0x89cdf4 */ if (fZ) goto L_0089cdf4;
L_0089cde3:; BB(0x0089cde3);
    /* 0089cde3: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089cde9: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089cdec: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089cdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089cdef: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89cdf4u); f_0089aae4();
L_0089cdf4:; BB(0x0089cdf4);
    /* 0089cdf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089cdf5: ret 0xc */ FN_RET(0x0089cd66); r_esp += 16; return;
}

void f_0089cdf8(void) /* sub_89CDF8 */
{
    FN_ENTER(0x0089cdf8);
    /* 0089cdf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089cdf9: mov ebp, esp */ r_ebp = r_esp;
    /* 0089cdfb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089cdfe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cdff: mov esi, ecx */ r_esi = r_ecx;
    /* 0089ce01: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089ce07: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ce0b: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089ce11: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ce15: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ce17: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ce1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ce1b: mov edi, dword ptr [esi + 0x1058] */ r_edi = R32((u32)(r_esi+0x1058u));
    /* 0089ce21: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089ce23: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089ce25: jae 0x89ce7b */ if (!fC) goto L_0089ce7b;
L_0089ce27:; BB(0x0089ce27);
    /* 0089ce27: fld dword ptr [0x99badc] */ FPUSH(R_F32((u32)(0x99badcu)));
L_0089ce2d:; BB(0x0089ce2d);
    /* 0089ce2d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089ce2f: shr cl, 5 */ { u32 c = (5u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089ce32: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0089ce35: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089ce38: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ce3b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089ce3d: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089ce3f: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089ce41: shr cl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089ce44: and cl, 7 */ {  u32 a = (u8)r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089ce47: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0089ce4a: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089ce4d: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ce50: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ce53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089ce55: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089ce58: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089ce5a: and cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089ce5d: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0089ce60: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089ce63: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ce64: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089ce66: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089ce69: fmul dword ptr [0x99bad0] */ ST(0) = ST(0) * R_F32((u32)(0x99bad0u));
    /* 0089ce6f: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089ce72: fld1  */ FPUSH(1.0);
    /* 0089ce74: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089ce77: jb 0x89ce2d */ if (fC) goto L_0089ce2d;
L_0089ce79:; BB(0x0089ce79);
    /* 0089ce79: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089ce7b:; BB(0x0089ce7b);
    /* 0089ce7b: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ce7f: je 0x89ce94 */ if (fZ) goto L_0089ce94;
L_0089ce81:; BB(0x0089ce81);
    /* 0089ce81: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089ce87: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089ce8a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089ce8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089ce8d: mov ecx, esi */ r_ecx = r_esi;
    /* 0089ce8f: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89ce94u); f_0089aae4();
L_0089ce94:; BB(0x0089ce94);
    /* 0089ce94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089ce95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ce96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089ce97: ret 0xc */ FN_RET(0x0089cdf8); r_esp += 16; return;
}

void f_0089ce9a(void) /* sub_89CE9A */
{
    FN_ENTER(0x0089ce9a);
    /* 0089ce9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089ce9b: mov ebp, esp */ r_ebp = r_esp;
    /* 0089ce9d: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089cea3: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cea7: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089cead: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ceb1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ceb3: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ceb6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089ceb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ceba: mov esi, dword ptr [ecx + 0x1058] */ r_esi = R32((u32)(r_ecx+0x1058u));
    /* 0089cec0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089cec2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cec4: jae 0x89cef0 */ if (!fC) goto L_0089cef0;
L_0089cec6:; BB(0x0089cec6);
    /* 0089cec6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089cec7:; BB(0x0089cec7);
    /* 0089cec7: fldz  */ FPUSH(0.0);
    /* 0089cec9: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089cecb: fldz  */ FPUSH(0.0);
    /* 0089cecd: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ced0: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089ced3: fldz  */ FPUSH(0.0);
    /* 0089ced5: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089ced8: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 0089cedb: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089cede: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cedf: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cee1: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cee4: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 0089ceea: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089ceed: jb 0x89cec7 */ if (fC) goto L_0089cec7;
L_0089ceef:; BB(0x0089ceef);
    /* 0089ceef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089cef0:; BB(0x0089cef0);
    /* 0089cef0: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089cef4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089cef5: je 0x89cf08 */ if (fZ) goto L_0089cf08;
L_0089cef7:; BB(0x0089cef7);
    /* 0089cef7: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089cefd: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089cf00: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089cf02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089cf03: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89cf08u); f_0089aae4();
L_0089cf08:; BB(0x0089cf08);
    /* 0089cf08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089cf09: ret 0xc */ FN_RET(0x0089ce9a); r_esp += 16; return;
}

void f_0089cf0c(void) /* sub_89CF0C */
{
    FN_ENTER(0x0089cf0c);
    /* 0089cf0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089cf0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0089cf0f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089cf12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cf13: mov esi, ecx */ r_esi = r_ecx;
    /* 0089cf15: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089cf1b: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cf1f: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089cf25: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cf29: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cf2b: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cf2e: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089cf34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cf35: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089cf38: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cf3a: jae 0x89cf9f */ if (!fC) goto L_0089cf9f;
L_0089cf3c:; BB(0x0089cf3c);
    /* 0089cf3c: fld dword ptr [0x99badc] */ FPUSH(R_F32((u32)(0x99badcu)));
L_0089cf42:; BB(0x0089cf42);
    /* 0089cf42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cf44: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089cf46: shr cl, 5 */ { u32 c = (5u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089cf49: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cf4c: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cf4f: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cf52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cf54: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cf56: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089cf58: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089cf5a: shr cl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089cf5d: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089cf60: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cf63: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cf66: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cf69: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cf6b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089cf6d: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089cf70: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089cf72: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089cf75: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cf78: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cf7b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cf7c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cf7d: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cf7f: fmul dword ptr [0x99bad0] */ ST(0) = ST(0) * R_F32((u32)(0x99bad0u));
    /* 0089cf85: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089cf88: movzx ecx, byte ptr [eax - 1] */ r_ecx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 0089cf8c: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089cf8f: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089cf92: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 0089cf98: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089cf9b: jb 0x89cf42 */ if (fC) goto L_0089cf42;
L_0089cf9d:; BB(0x0089cf9d);
    /* 0089cf9d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089cf9f:; BB(0x0089cf9f);
    /* 0089cf9f: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089cfa3: je 0x89cfb8 */ if (fZ) goto L_0089cfb8;
L_0089cfa5:; BB(0x0089cfa5);
    /* 0089cfa5: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089cfab: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089cfae: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089cfb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089cfb1: mov ecx, esi */ r_ecx = r_esi;
    /* 0089cfb3: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89cfb8u); f_0089aae4();
L_0089cfb8:; BB(0x0089cfb8);
    /* 0089cfb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089cfb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089cfba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089cfbb: ret 0xc */ FN_RET(0x0089cf0c); r_esp += 16; return;
}

void f_0089cfbe(void) /* sub_89CFBE */
{
    FN_ENTER(0x0089cfbe);
    /* 0089cfbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089cfbf: mov ebp, esp */ r_ebp = r_esp;
    /* 0089cfc1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089cfc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cfc5: mov esi, ecx */ r_esi = r_ecx;
    /* 0089cfc7: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089cfcd: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cfd1: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089cfd7: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089cfdb: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cfdd: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089cfe0: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089cfe6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089cfe7: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089cfea: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089cfec: jae 0x89d03e */ if (!fC) goto L_0089d03e;
L_0089cfee:; BB(0x0089cfee);
    /* 0089cfee: fld dword ptr [0x99bacc] */ FPUSH(R_F32((u32)(0x99baccu)));
L_0089cff4:; BB(0x0089cff4);
    /* 0089cff4: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0089cff7: and cl, 0xf */ {  u32 a = (u8)r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089cffa: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0089cffd: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d000: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d002: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d005: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d007: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d009: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089d00b: shr cl, 4 */ { u32 c = (4u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089d00e: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d011: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d014: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d017: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d01a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d01c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d01e: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d021: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089d023: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d026: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d029: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d02c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d02d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d02e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d030: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d032: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d035: fld1  */ FPUSH(1.0);
    /* 0089d037: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d03a: jb 0x89cff4 */ if (fC) goto L_0089cff4;
L_0089d03c:; BB(0x0089d03c);
    /* 0089d03c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089d03e:; BB(0x0089d03e);
    /* 0089d03e: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d042: je 0x89d057 */ if (fZ) goto L_0089d057;
L_0089d044:; BB(0x0089d044);
    /* 0089d044: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089d04a: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d04d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d04f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d050: mov ecx, esi */ r_ecx = r_esi;
    /* 0089d052: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d057u); f_0089aae4();
L_0089d057:; BB(0x0089d057);
    /* 0089d057: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d058: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d05a: ret 0xc */ FN_RET(0x0089cfbe); r_esp += 16; return;
}

