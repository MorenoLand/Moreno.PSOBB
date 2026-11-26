#include "protos.h"

void f_00883b80(void) /* sub_883B80 */
{
    FN_ENTER(0x00883b80);
    /* 00883b80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00883b81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00883b82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00883b83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00883b84: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00883b87: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00883b8b: mov ecx, edx */ r_ecx = r_edx;
    /* 00883b8d: mov edx, eax */ r_edx = r_eax;
    /* 00883b8f: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00883b92: mov esi, edx */ r_esi = r_edx;
    /* 00883b94: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00883b97: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00883b99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883b9b: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00883b9f: lea ebx, [ebp + edx] */ r_ebx = (u32)(r_ebp+r_edx);
    /* 00883ba3: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00883ba7: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00883bac: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00883bb0: jle 0x883c53 */ if ((fZ||fS!=fO)) goto L_00883c53;
L_00883bb6:; BB(0x00883bb6);
    /* 00883bb6: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00883bb9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883bbb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883bbd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883bbf: add edi, dword ptr [esp + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883bc3: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00883bc7: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00883bca: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00883bce: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00883bd2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00883bd6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00883bda: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_00883bdd:; BB(0x00883bdd);
    /* 00883bdd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00883be1: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00883be5: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00883be9: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00883bed: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 00883bf0: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00883bf3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883bf5: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00883bf8: fld dword ptr [ecx + ebp*4] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*4)));
    /* 00883bfb: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00883bfe: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00883c02: fadd dword ptr [ecx + ebx*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx*4));
    /* 00883c05: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00883c07: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00883c09: fstp dword ptr [edi + esi*8] */ W_F32((u32)(r_edi+r_esi*8), ST(0)); FPOP();
    /* 00883c0c: fstp dword ptr [eax + esi*8 - 4] */ W_F32((u32)(r_eax+r_esi*8+0xfffffffcu), ST(0)); FPOP();
    /* 00883c10: fld dword ptr [ecx + ebx*4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx*4)));
    /* 00883c13: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00883c17: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00883c1b: fsub dword ptr [ecx + ebp*4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_ebp*4));
    /* 00883c1e: add edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883c22: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883c26: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 00883c29: fsub dword ptr [ecx + esi*4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_esi*4));
    /* 00883c2c: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00883c2f: fstp dword ptr [edi + edx*4] */ W_F32((u32)(r_edi+r_edx*4), ST(0)); FPOP();
    /* 00883c32: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00883c36: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883c38: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883c3a: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00883c3c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883c3e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00883c42: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883c43: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883c45: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00883c49: jl 0x883bdd */ if ((fS!=fO)) goto L_00883bdd;
L_00883c4b:; BB(0x00883c4b);
    /* 00883c4b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00883c4f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00883c53:; BB(0x00883c53);
    /* 00883c53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883c56: jl 0x883ed7 */ if ((fS!=fO)) goto L_00883ed7;
L_00883c5c:; BB(0x00883c5c);
    /* 00883c5c: je 0x883e0e */ if (fZ) goto L_00883e0e;
L_00883c62:; BB(0x00883c62);
    /* 00883c62: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00883c64: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00883c66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883c68: jle 0x883e06 */ if ((fZ||fS!=fO)) goto L_00883e06;
L_00883c6e:; BB(0x00883c6e);
    /* 00883c6e: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00883c71: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00883c74: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883c76: add edi, dword ptr [esp + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883c7a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00883c7e: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00883c82: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00883c86: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_00883c89:; BB(0x00883c89);
    /* 00883c89: mov edi, ebp */ r_edi = r_ebp;
    /* 00883c8b: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 00883c8f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883c91: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00883c95: lea edx, [edx + esi] */ r_edx = (u32)(r_edx+r_esi);
    /* 00883c98: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00883c9d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883ca0: jle 0x883df1 */ if ((fZ||fS!=fO)) goto L_00883df1;
L_00883ca6:; BB(0x00883ca6);
    /* 00883ca6: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00883caa: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00883cae: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00883cb2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00883cb6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00883cba:; BB(0x00883cba);
    /* 00883cba: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883cbd: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883cc0: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883cc3: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00883cc7: lea edx, [eax + edi] */ r_edx = (u32)(r_eax+r_edi);
    /* 00883cca: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00883cce: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 00883cd2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883cd4: fld dword ptr [ebp + ecx*4 - 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffff8u)));
    /* 00883cd8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883cda: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 00883cde: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00883ce1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00883ce3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883ce5: fld dword ptr [ebx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0xfffffffcu)));
    /* 00883ce9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00883ceb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883ced: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883cef: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883cf1: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00883cf3: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00883cf5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883cf7: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 00883cfb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883cfd: fld dword ptr [ebp + ecx*4 - 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffff8u)));
    /* 00883d01: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d03: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00883d07: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00883d0a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00883d0c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883d0e: fld dword ptr [ebx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0xfffffffcu)));
    /* 00883d12: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00883d14: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883d16: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883d18: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00883d1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883d1e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883d20: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00883d22: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00883d26: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883d28: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 00883d2c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d2e: fld dword ptr [ebp + ecx*4 - 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffff8u)));
    /* 00883d32: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d34: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00883d38: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00883d3b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00883d3d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883d3f: fld dword ptr [ebx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0xfffffffcu)));
    /* 00883d43: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00883d45: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883d47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883d49: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883d4b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00883d4d: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00883d4f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00883d51: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00883d53: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883d55: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00883d57: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00883d59: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00883d5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883d5d: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00883d5f: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00883d63: fld dword ptr [ebx + edi*4] */ FPUSH(R_F32((u32)(r_ebx+r_edi*4)));
    /* 00883d66: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d68: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883d6b: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00883d6f: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00883d71: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00883d73: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00883d77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883d79: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00883d7d: fld dword ptr [ebx + edi*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edi*4+0xfffffffcu)));
    /* 00883d81: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d83: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00883d87: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00883d89: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00883d8b: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00883d8d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00883d8f: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00883d91: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00883d93: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00883d95: fstp dword ptr [ebp + esi*4 - 4] */ W_F32((u32)(r_ebp+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883d99: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00883d9b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00883d9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883d9f: fstp dword ptr [ebp + esi*4] */ W_F32((u32)(r_ebp+r_esi*4), ST(0)); FPOP();
    /* 00883da3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883da5: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 00883da7: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883dab: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00883dad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883daf: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00883db1: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00883db5: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00883db7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00883db9: fstp dword ptr [ebp + edx*4] */ W_F32((u32)(r_ebp+r_edx*4), ST(0)); FPOP();
    /* 00883dbd: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00883dc1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883dc3: fstp dword ptr [ebp + esi*4 - 4] */ W_F32((u32)(r_ebp+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883dc7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883dc9: fstp dword ptr [ebp + esi*4] */ W_F32((u32)(r_ebp+r_esi*4), ST(0)); FPOP();
    /* 00883dcd: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883dd1: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 00883dd5: fstp dword ptr [ebp + edx*4] */ W_F32((u32)(r_ebp+r_edx*4), ST(0)); FPOP();
    /* 00883dd9: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00883ddd: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883ddf: jl 0x883cba */ if ((fS!=fO)) goto L_00883cba;
L_00883de5:; BB(0x00883de5);
    /* 00883de5: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00883de9: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00883ded: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00883df1:; BB(0x00883df1);
    /* 00883df1: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883df3: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00883df4: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00883df7: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883df9: jl 0x883c89 */ if ((fS!=fO)) goto L_00883c89;
L_00883dff:; BB(0x00883dff);
    /* 00883dff: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00883e03: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_00883e06:; BB(0x00883e06);
    /* 00883e06: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00883e08: jne 0x883ed7 */ if (!fZ) goto L_00883ed7;
L_00883e0e:; BB(0x00883e0e);
    /* 00883e0e: lea ebp, [eax + edx - 1] */ r_ebp = (u32)(r_eax+r_edx+0xffffffffu);
    /* 00883e12: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00883e15: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883e17: add dword ptr [esp + 0x10], ebp */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00883e1b: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00883e1e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00883e20: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00883e24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883e26: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00883e2a: jle 0x883ed7 */ if ((fZ||fS!=fO)) goto L_00883ed7;
L_00883e30:; BB(0x00883e30);
    /* 00883e30: fld dword ptr [0x99ad38] */ FPUSH(R_F32((u32)(0x99ad38u)));
    /* 00883e36: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883e38: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883e3a: fld dword ptr [0x99ad34] */ FPUSH(R_F32((u32)(0x99ad34u)));
    /* 00883e40: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883e42: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883e44: add esi, dword ptr [esp + 0x58] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883e48: add edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883e4c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00883e50: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00883e54: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00883e58: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00883e5c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00883e60: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00883e64: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00883e67: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_00883e6b:; BB(0x00883e6b);
    /* 00883e6b: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00883e6f: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00883e73: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 00883e77: fld dword ptr [esi + ebp*4] */ FPUSH(R_F32((u32)(r_esi+r_ebp*4)));
    /* 00883e7a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883e7c: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00883e80: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 00883e83: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00883e85: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883e87: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00883e89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883e8b: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00883e8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883e8f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00883e91: fld dword ptr [esi + eax*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4+0xfffffffcu)));
    /* 00883e95: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00883e97: fstp dword ptr [ebx + edx*4 - 4] */ W_F32((u32)(r_ebx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883e9b: fld dword ptr [esi + eax*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4+0xfffffffcu)));
    /* 00883e9f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00883ea1: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00883ea5: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883ea9: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 00883eac: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00883eae: fstp dword ptr [ebx + edx*4] */ W_F32((u32)(r_ebx+r_edx*4), ST(0)); FPOP();
    /* 00883eb1: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 00883eb4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883eb6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00883eba: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 00883ebd: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883ebf: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883ec1: add edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883ec5: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883ec7: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00883ecb: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00883ecc: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00883ecf: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883ed1: jl 0x883e6b */ if ((fS!=fO)) goto L_00883e6b;
L_00883ed3:; BB(0x00883ed3);
    /* 00883ed3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00883ed5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00883ed7:; BB(0x00883ed7);
    /* 00883ed7: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00883eda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00883edb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00883edc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00883edd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00883ede: ret  */ FN_RET(0x00883b80); r_esp += 4; return;
}

void f_00883d6c(void)
{
    FN_ENTER(0x00883d6c);
    goto L_00883d6c;
L_00883c89:; BB(0x00883c89);
    /* 00883c89: mov edi, ebp */ r_edi = r_ebp;
    /* 00883c8b: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 00883c8f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883c91: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00883c95: lea edx, [edx + esi] */ r_edx = (u32)(r_edx+r_esi);
    /* 00883c98: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00883c9d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883ca0: jle 0x883df1 */ if ((fZ||fS!=fO)) goto L_00883df1;
L_00883ca6:; BB(0x00883ca6);
    /* 00883ca6: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00883caa: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00883cae: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00883cb2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00883cb6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00883cba:; BB(0x00883cba);
    /* 00883cba: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883cbd: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883cc0: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883cc3: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00883cc7: lea edx, [eax + edi] */ r_edx = (u32)(r_eax+r_edi);
    /* 00883cca: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00883cce: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 00883cd2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883cd4: fld dword ptr [ebp + ecx*4 - 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffff8u)));
    /* 00883cd8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883cda: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 00883cde: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00883ce1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00883ce3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883ce5: fld dword ptr [ebx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0xfffffffcu)));
    /* 00883ce9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00883ceb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883ced: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883cef: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883cf1: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00883cf3: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00883cf5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883cf7: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 00883cfb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883cfd: fld dword ptr [ebp + ecx*4 - 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffff8u)));
    /* 00883d01: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d03: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00883d07: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00883d0a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00883d0c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883d0e: fld dword ptr [ebx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0xfffffffcu)));
    /* 00883d12: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00883d14: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883d16: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883d18: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00883d1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883d1e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883d20: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00883d22: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00883d26: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883d28: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 00883d2c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d2e: fld dword ptr [ebp + ecx*4 - 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffff8u)));
    /* 00883d32: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d34: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00883d38: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00883d3b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00883d3d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00883d3f: fld dword ptr [ebx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0xfffffffcu)));
    /* 00883d43: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00883d45: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883d47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883d49: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883d4b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00883d4d: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00883d4f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00883d51: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00883d53: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883d55: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00883d57: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00883d59: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00883d5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883d5d: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00883d5f: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00883d63: fld dword ptr [ebx + edi*4] */ FPUSH(R_F32((u32)(r_ebx+r_edi*4)));
    /* 00883d66: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d68: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883d6b: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
L_00883d6c:; BB(0x00883d6c);
    /* 00883d6c: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00883d6d: and al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00883d6f: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00883d71: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00883d73: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00883d77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883d79: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00883d7d: fld dword ptr [ebx + edi*4 - 4] */ FPUSH(R_F32((u32)(r_ebx+r_edi*4+0xfffffffcu)));
    /* 00883d81: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883d83: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00883d87: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00883d89: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00883d8b: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00883d8d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00883d8f: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00883d91: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00883d93: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00883d95: fstp dword ptr [ebp + esi*4 - 4] */ W_F32((u32)(r_ebp+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883d99: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00883d9b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00883d9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883d9f: fstp dword ptr [ebp + esi*4] */ W_F32((u32)(r_ebp+r_esi*4), ST(0)); FPOP();
    /* 00883da3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883da5: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 00883da7: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883dab: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00883dad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883daf: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00883db1: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00883db5: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00883db7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00883db9: fstp dword ptr [ebp + edx*4] */ W_F32((u32)(r_ebp+r_edx*4), ST(0)); FPOP();
    /* 00883dbd: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00883dc1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883dc3: fstp dword ptr [ebp + esi*4 - 4] */ W_F32((u32)(r_ebp+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883dc7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00883dc9: fstp dword ptr [ebp + esi*4] */ W_F32((u32)(r_ebp+r_esi*4), ST(0)); FPOP();
    /* 00883dcd: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883dd1: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 00883dd5: fstp dword ptr [ebp + edx*4] */ W_F32((u32)(r_ebp+r_edx*4), ST(0)); FPOP();
    /* 00883dd9: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00883ddd: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883ddf: jl 0x883cba */ if ((fS!=fO)) goto L_00883cba;
L_00883de5:; BB(0x00883de5);
    /* 00883de5: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00883de9: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00883ded: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00883df1:; BB(0x00883df1);
    /* 00883df1: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883df3: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00883df4: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00883df7: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883df9: jl 0x883c89 */ if ((fS!=fO)) goto L_00883c89;
L_00883dff:; BB(0x00883dff);
    /* 00883dff: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00883e03: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00883e06: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00883e08: jne 0x883ed7 */ if (!fZ) goto L_00883ed7;
L_00883e0e:; BB(0x00883e0e);
    /* 00883e0e: lea ebp, [eax + edx - 1] */ r_ebp = (u32)(r_eax+r_edx+0xffffffffu);
    /* 00883e12: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00883e15: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883e17: add dword ptr [esp + 0x10], ebp */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00883e1b: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00883e1e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00883e20: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00883e24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883e26: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00883e2a: jle 0x883ed7 */ if ((fZ||fS!=fO)) goto L_00883ed7;
L_00883e30:; BB(0x00883e30);
    /* 00883e30: fld dword ptr [0x99ad38] */ FPUSH(R_F32((u32)(0x99ad38u)));
    /* 00883e36: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883e38: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883e3a: fld dword ptr [0x99ad34] */ FPUSH(R_F32((u32)(0x99ad34u)));
    /* 00883e40: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883e42: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883e44: add esi, dword ptr [esp + 0x58] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883e48: add edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883e4c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00883e50: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00883e54: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00883e58: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00883e5c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00883e60: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00883e64: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00883e67: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_00883e6b:; BB(0x00883e6b);
    /* 00883e6b: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00883e6f: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00883e73: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 00883e77: fld dword ptr [esi + ebp*4] */ FPUSH(R_F32((u32)(r_esi+r_ebp*4)));
    /* 00883e7a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00883e7c: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00883e80: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 00883e83: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00883e85: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883e87: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00883e89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883e8b: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00883e8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883e8f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00883e91: fld dword ptr [esi + eax*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4+0xfffffffcu)));
    /* 00883e95: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00883e97: fstp dword ptr [ebx + edx*4 - 4] */ W_F32((u32)(r_ebx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883e9b: fld dword ptr [esi + eax*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4+0xfffffffcu)));
    /* 00883e9f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00883ea1: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00883ea5: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883ea9: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 00883eac: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00883eae: fstp dword ptr [ebx + edx*4] */ W_F32((u32)(r_ebx+r_edx*4), ST(0)); FPOP();
    /* 00883eb1: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 00883eb4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883eb6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00883eba: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 00883ebd: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883ebf: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883ec1: add edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883ec5: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883ec7: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00883ecb: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00883ecc: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00883ecf: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883ed1: jl 0x883e6b */ if ((fS!=fO)) goto L_00883e6b;
L_00883ed3:; BB(0x00883ed3);
    /* 00883ed3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00883ed5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00883ed7:; BB(0x00883ed7);
    /* 00883ed7: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00883eda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00883edb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00883edc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00883edd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00883ede: ret  */ FN_RET(0x00883d6c); r_esp += 4; return;
}

void f_00883ee0(void) /* sub_883EE0 */
{
    FN_ENTER(0x00883ee0);
    /* 00883ee0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00883ee1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00883ee5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00883ee7: je 0x883f0f */ if (fZ) goto L_00883f0f;
L_00883ee9:; BB(0x00883ee9);
    /* 00883ee9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00883eec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00883eee: je 0x883ef7 */ if (fZ) goto L_00883ef7;
L_00883ef0:; BB(0x00883ef0);
    /* 00883ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00883ef1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x883ef6u); f_00858882();
    /* 00883ef6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00883ef7:; BB(0x00883ef7);
    /* 00883ef7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00883efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00883efc: je 0x883f05 */ if (fZ) goto L_00883f05;
L_00883efe:; BB(0x00883efe);
    /* 00883efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00883eff: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x883f04u); f_00858882();
    /* 00883f04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00883f05:; BB(0x00883f05);
    /* 00883f05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00883f07: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00883f09: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00883f0c: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
L_00883f0f:; BB(0x00883f0f);
    /* 00883f0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00883f10: ret  */ FN_RET(0x00883ee0); r_esp += 4; return;
}

void f_00883f14(void) /* sub_883F14 */
{
    FN_ENTER(0x00883f14);
    /* 00883f14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00883f15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00883f16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00883f17: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00883f1a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00883f1c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00883f1f: je 0x884077 */ if (fZ) goto L_00884077;
L_00883f25:; BB(0x00883f25);
    /* 00883f25: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00883f28: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883f2a: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883f2c: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00883f30: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00883f32: mov ebp, eax */ r_ebp = r_eax;
    /* 00883f34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00883f36: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 00883f3b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00883f3f: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00883f43: jmp 0x883f49 */ goto L_00883f49;
L_00883f45:; BB(0x00883f45);
    /* 00883f45: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
L_00883f49:; BB(0x00883f49);
    /* 00883f49: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883f4c: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883f4f: jge 0x883f59 */ if ((fS==fO)) goto L_00883f59;
L_00883f51:; BB(0x00883f51);
    /* 00883f51: mov edi, dword ptr [edx + 0xa2b2e4] */ r_edi = R32((u32)(r_edx+0xa2b2e4u));
    /* 00883f57: jmp 0x883f5c */ goto L_00883f5c;
L_00883f59:; BB(0x00883f59);
    /* 00883f59: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00883f5c:; BB(0x00883f5c);
    /* 00883f5c: mov esi, edi */ r_esi = r_edi;
    /* 00883f5e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00883f60: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
L_00883f64:; BB(0x00883f64);
    /* 00883f64: mov eax, ebp */ r_eax = r_ebp;
    /* 00883f66: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00883f67: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00883f67, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00883f67, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00883f69: mov edx, esi */ r_edx = r_esi;
    /* 00883f6b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00883f6e: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00883f70: jne 0x883f45 */ if (!fZ) goto L_00883f45;
L_00883f72:; BB(0x00883f72);
    /* 00883f72: mov dword ptr [ebx + ecx*4 + 8], edi */ W32((u32)(r_ebx+r_ecx*4+0x8u), r_edi);
    /* 00883f76: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883f77: mov ebp, eax */ r_ebp = r_eax;
    /* 00883f79: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00883f7c: je 0x88407e */ if (fZ) goto L_0088407e;
L_00883f82:; BB(0x00883f82);
    /* 00883f82: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00883f85: jne 0x883f64 */ if (!fZ) goto L_00883f64;
L_00883f87:; BB(0x00883f87);
    /* 00883f87: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00883f8b: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00883f8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883f91: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00883f93: mov edi, 1 */ r_edi = 0x1u;
    /* 00883f98: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 00883f9b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00883f9c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00883f9f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00883fa2: fdivr dword ptr [0xa2b2e0] */ ST(0) = R_F32((u32)(0xa2b2e0u)) / ST(0);
    /* 00883fa8: je 0x884123 */ if (fZ) goto L_00884123;
L_00883fae:; BB(0x00883fae);
    /* 00883fae: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00883fb0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883fb2: jle 0x88412a */ if ((fZ||fS!=fO)) goto L_0088412a;
L_00883fb8:; BB(0x00883fb8);
    /* 00883fb8: fld dword ptr [0x99ad00] */ FPUSH(R_F32((u32)(0x99ad00u)));
    /* 00883fbe: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00883fc2: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00883fc6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00883fca: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 00883fce: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
L_00883fd2:; BB(0x00883fd2);
    /* 00883fd2: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00883fd6: mov ecx, dword ptr [ecx + ebp*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 00883fda: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00883fdc: mov ebx, edi */ r_ebx = r_edi;
    /* 00883fde: imul ebx, ecx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ecx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00883fe1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00883fe5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00883fe6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00883fe7: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00883fe7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00883fe7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00883fe9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883feb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883fed: jle 0x884060 */ if ((fZ||fS!=fO)) goto L_00884060;
L_00883fef:; BB(0x00883fef);
    /* 00883fef: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00883ff3: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00883ff7: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00883ffb: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00883fff:; BB(0x00883fff);
    /* 00883fff: add esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884003: mov ebp, edi */ r_ebp = r_edi;
    /* 00884005: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0088400a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0088400e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884011: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00884015: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00884017: fld dword ptr [0x99ad04] */ FPUSH(R_F32((u32)(0x99ad04u)));
    /* 0088401d: jle 0x884131 */ if ((fZ||fS!=fO)) goto L_00884131;
L_00884023:; BB(0x00884023);
    /* 00884023: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00884027: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_0088402b:; BB(0x0088402b);
    /* 0088402b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088402e: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00884030: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00884032: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00884034: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00884037: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884039: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 0088403b: fstp dword ptr [edi + ebp*4 - 8] */ W_F32((u32)(r_edi+r_ebp*4+0xfffffff8u), ST(0)); FPOP();
    /* 0088403f: fstp dword ptr [edi + ebp*4 - 4] */ W_F32((u32)(r_edi+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
    /* 00884043: jl 0x88402b */ if ((fS!=fO)) goto L_0088402b;
L_00884045:; BB(0x00884045);
    /* 00884045: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884047: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884049: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_0088404d:; BB(0x0088404d);
    /* 0088404d: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088404f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00884050: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884052: jl 0x883fff */ if ((fS!=fO)) goto L_00883fff;
L_00884054:; BB(0x00884054);
    /* 00884054: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00884058: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0088405c: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_00884060:; BB(0x00884060);
    /* 00884060: mov edi, ebx */ r_edi = r_ebx;
    /* 00884062: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884063: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00884067: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884069: jl 0x883fd2 */ if ((fS!=fO)) goto L_00883fd2;
L_0088406f:; BB(0x0088406f);
    /* 0088406f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884073: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_00884077:; BB(0x00884077);
    /* 00884077: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088407a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088407b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088407c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088407d: ret  */ FN_RET(0x00883f14); r_esp += 4; return;
L_0088407e:; BB(0x0088407e);
    /* 0088407e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884081: je 0x883f82 */ if (fZ) goto L_00883f82;
L_00884087:; BB(0x00884087);
    /* 00884087: mov edx, 1 */ r_edx = 0x1u;
    /* 0088408c: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00884090: jle 0x884117 */ if ((fZ||fS!=fO)) goto L_00884117;
L_00884096:; BB(0x00884096);
    /* 00884096: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 00884099: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088409c: jl 0x8840f2 */ if ((fS!=fO)) goto L_008840f2;
L_0088409e:; BB(0x0088409e);
    /* 0088409e: lea edx, [ecx - 6] */ r_edx = (u32)(r_ecx+0xfffffffau);
    /* 008840a1: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 008840a5: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 008840a9: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 008840ad: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
L_008840b1:; BB(0x008840b1);
    /* 008840b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008840b3: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008840b5: mov edi, dword ptr [ebx + ebp*4 + 4] */ r_edi = R32((u32)(r_ebx+r_ebp*4+0x4u));
    /* 008840b9: mov dword ptr [ebx + ebp*4 + 8], edi */ W32((u32)(r_ebx+r_ebp*4+0x8u), r_edi);
    /* 008840bd: mov edi, dword ptr [ebx + ebp*4] */ r_edi = R32((u32)(r_ebx+r_ebp*4));
    /* 008840c0: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008840c3: mov dword ptr [ebx + ebp*4 + 4], edi */ W32((u32)(r_ebx+r_ebp*4+0x4u), r_edi);
    /* 008840c7: mov edi, dword ptr [ebx + ebp*4 - 4] */ r_edi = R32((u32)(r_ebx+r_ebp*4+0xfffffffcu));
    /* 008840cb: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008840cd: mov dword ptr [ebx + ebp*4], edi */ W32((u32)(r_ebx+r_ebp*4), r_edi);
    /* 008840d0: mov edi, dword ptr [ebx + ebp*4 - 8] */ r_edi = R32((u32)(r_ebx+r_ebp*4+0xfffffff8u));
    /* 008840d4: mov dword ptr [ebx + ebp*4 - 4], edi */ W32((u32)(r_ebx+r_ebp*4+0xfffffffcu), r_edi);
    /* 008840d8: mov edi, dword ptr [ebx + ebp*4 - 0xc] */ r_edi = R32((u32)(r_ebx+r_ebp*4+0xfffffff4u));
    /* 008840dc: mov dword ptr [ebx + ebp*4 - 8], edi */ W32((u32)(r_ebx+r_ebp*4+0xfffffff8u), r_edi);
    /* 008840e0: jle 0x8840b1 */ if ((fZ||fS!=fO)) goto L_008840b1;
L_008840e2:; BB(0x008840e2);
    /* 008840e2: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 008840e6: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 008840ea: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008840ee: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_008840f2:; BB(0x008840f2);
    /* 008840f2: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 008840f6: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008840fa: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_008840fe:; BB(0x008840fe);
    /* 008840fe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00884100: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00884102: mov edx, dword ptr [ebx + ebp*4 + 4] */ r_edx = R32((u32)(r_ebx+r_ebp*4+0x4u));
    /* 00884106: mov dword ptr [ebx + ebp*4 + 8], edx */ W32((u32)(r_ebx+r_ebp*4+0x8u), r_edx);
    /* 0088410a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088410b: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088410d: jl 0x8840fe */ if ((fS!=fO)) goto L_008840fe;
L_0088410f:; BB(0x0088410f);
    /* 0088410f: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00884113: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_00884117:; BB(0x00884117);
    /* 00884117: mov dword ptr [ebx + 8], 2 */ W32((u32)(r_ebx+0x8u), 0x2u);
    /* 0088411e: jmp 0x883f82 */ goto L_00883f82;
L_00884123:; BB(0x00884123);
    /* 00884123: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884125: jmp 0x884077 */ goto L_00884077;
L_0088412a:; BB(0x0088412a);
    /* 0088412a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088412c: jmp 0x884077 */ goto L_00884077;
L_00884131:; BB(0x00884131);
    /* 00884131: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884133: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884135: jmp 0x88404d */ goto L_0088404d;
}

