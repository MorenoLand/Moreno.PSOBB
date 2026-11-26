#include "protos.h"

void f_0087c20c(void) /* sub_87C20C */
{
    FN_ENTER(0x0087c20c);
    /* 0087c20c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087c20d: mov ebx, esp */ r_ebx = r_esp;
    /* 0087c20f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087c212: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087c213: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087c214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087c215: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087c218: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0087c21b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c21d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0087c21f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0087c222: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0087c228: mov esi, dword ptr [eax + 0x1fc] */ r_esi = R32((u32)(r_eax+0x1fcu));
    /* 0087c22e: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c230: jl 0x87c234 */ if ((fS!=fO)) goto L_0087c234;
L_0087c232:; BB(0x0087c232);
    /* 0087c232: mov esi, edx */ r_esi = r_edx;
L_0087c234:; BB(0x0087c234);
    /* 0087c234: cmp dword ptr [eax + 0x1f4], 0 */ {  u32 a = R32((u32)(r_eax+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087c23b: je 0x87c39d */ if (fZ) goto L_0087c39d;
L_0087c241:; BB(0x0087c241);
    /* 0087c241: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c243: jle 0x87c298 */ if ((fZ||fS!=fO)) goto L_0087c298;
L_0087c245:; BB(0x0087c245);
    /* 0087c245: fld dword ptr [0x99ac44] */ FPUSH(R_F32((u32)(0x99ac44u)));
    /* 0087c24b: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0087c24e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0087c252: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0087c256: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0087c259: jmp 0x87c25f */ goto L_0087c25f;
L_0087c25b:; BB(0x0087c25b);
    /* 0087c25b: fstp dword ptr [edx + ebp*4 - 4] */ W_F32((u32)(r_edx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
L_0087c25f:; BB(0x0087c25f);
    /* 0087c25f: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 0087c262: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087c264: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0087c268: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0087c26d: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c272: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087c277: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0087c27b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0087c27f: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0087c281: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0087c285: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c286: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c288: jl 0x87c25b */ if ((fS!=fO)) goto L_0087c25b;
L_0087c28a:; BB(0x0087c28a);
    /* 0087c28a: fstp dword ptr [edx + ebp*4 - 4] */ W_F32((u32)(r_edx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087c28e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c290: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0087c294: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_0087c298:; BB(0x0087c298);
    /* 0087c298: lea edi, [ebp + ecx] */ r_edi = (u32)(r_ebp+r_ecx);
    /* 0087c29c: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c29e: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0087c2a2: jl 0x87c39d */ if ((fS!=fO)) goto L_0087c39d;
L_0087c2a8:; BB(0x0087c2a8);
    /* 0087c2a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087c2aa: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087c2ac: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0087c2af: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c2b1: lea esi, [ecx - 6] */ r_esi = (u32)(r_ecx+0xfffffffau);
    /* 0087c2b4: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0087c2b8: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0087c2bc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0087c2c0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0087c2c4: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0087c2c7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_0087c2cb:; BB(0x0087c2cb);
    /* 0087c2cb: fld dword ptr [0x99ac40] */ FPUSH(R_F32((u32)(0x99ac40u)));
    /* 0087c2d1: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c2d3: jge 0x87c2ec */ if ((fS==fO)) goto L_0087c2ec;
L_0087c2d5:; BB(0x0087c2d5);
    /* 0087c2d5: lea edi, [esi + ebp*4] */ r_edi = (u32)(r_esi+r_ebp*4);
    /* 0087c2d8: lea edx, [esi + eax*4] */ r_edx = (u32)(r_esi+r_eax*4);
    /* 0087c2db: jmp 0x87c2df */ goto L_0087c2df;
L_0087c2dd:; BB(0x0087c2dd);
    /* 0087c2dd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0087c2df:; BB(0x0087c2df);
    /* 0087c2df: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0087c2e1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087c2e3: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c2e6: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087c2e8: jb 0x87c2dd */ if (fC) goto L_0087c2dd;
L_0087c2ea:; BB(0x0087c2ea);
    /* 0087c2ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0087c2ec:; BB(0x0087c2ec);
    /* 0087c2ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087c2ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c2f0: jle 0x87c4c1 */ if ((fZ||fS!=fO)) goto L_0087c4c1;
L_0087c2f6:; BB(0x0087c2f6);
    /* 0087c2f6: fld dword ptr [0x99ac44] */ FPUSH(R_F32((u32)(0x99ac44u)));
    /* 0087c2fc: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0087c300: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c302: add edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c306: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 0087c309: fld dword ptr [0x99ac3c] */ FPUSH(R_F32((u32)(0x99ac3cu)));
    /* 0087c30f: fld qword ptr [0x99aaf8] */ FPUSH(R_F64((u32)(0x99aaf8u)));
    /* 0087c315: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0087c319: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0087c31d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_0087c321:; BB(0x0087c321);
    /* 0087c321: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0087c325: mov ebp, dword ptr [ebp + edx*4] */ r_ebp = R32((u32)(r_ebp+r_edx*4));
    /* 0087c329: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0087c32c: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 0087c32f: mov eax, dword ptr [edi + ebp*4] */ r_eax = R32((u32)(r_edi+r_ebp*4));
    /* 0087c332: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087c334: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0087c338: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087c33a: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0087c33c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c33e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c33f: jb 0x87c3ee */ if (fC) goto L_0087c3ee;
L_0087c345:; BB(0x0087c345);
    /* 0087c345: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0087c347: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0087c34b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0087c350: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c355: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087c35a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0087c35e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0087c362: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0087c364: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0087c368: fstp dword ptr [esi + ebp*4] */ W_F32((u32)(r_esi+r_ebp*4), ST(0)); FPOP();
    /* 0087c36b: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0087c36e: fld dword ptr [eax + ebp*4] */ FPUSH(R_F32((u32)(r_eax+r_ebp*4)));
    /* 0087c371: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087c373: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0087c375: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_0087c377:; BB(0x0087c377);
    /* 0087c377: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c378: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c37a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087c37c: jl 0x87c321 */ if ((fS!=fO)) goto L_0087c321;
L_0087c37e:; BB(0x0087c37e);
    /* 0087c37e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c380: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c382: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c384: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c386: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0087c38a: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
L_0087c38d:; BB(0x0087c38d);
    /* 0087c38d: mov ebp, eax */ r_ebp = r_eax;
    /* 0087c38f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c391: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0087c395: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c397: jge 0x87c2cb */ if ((fS==fO)) goto L_0087c2cb;
L_0087c39d:; BB(0x0087c39d);
    /* 0087c39d: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c39f: jge 0x87c3e4 */ if ((fS==fO)) goto L_0087c3e4;
L_0087c3a1:; BB(0x0087c3a1);
    /* 0087c3a1: fld dword ptr [0x99ac44] */ FPUSH(R_F32((u32)(0x99ac44u)));
    /* 0087c3a7: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0087c3aa: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0087c3ad: jmp 0x87c3b3 */ goto L_0087c3b3;
L_0087c3af:; BB(0x0087c3af);
    /* 0087c3af: fstp dword ptr [ecx + ebp*4 - 4] */ W_F32((u32)(r_ecx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
L_0087c3b3:; BB(0x0087c3b3);
    /* 0087c3b3: fld dword ptr [esi + ebp*4] */ FPUSH(R_F32((u32)(r_esi+r_ebp*4)));
    /* 0087c3b6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087c3b8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0087c3bc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0087c3c1: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c3c6: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087c3cb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0087c3cf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0087c3d3: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0087c3d5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0087c3d9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c3da: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c3dc: jl 0x87c3af */ if ((fS!=fO)) goto L_0087c3af;
L_0087c3de:; BB(0x0087c3de);
    /* 0087c3de: fstp dword ptr [ecx + ebp*4 - 4] */ W_F32((u32)(r_ecx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087c3e2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087c3e4:; BB(0x0087c3e4);
    /* 0087c3e4: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087c3e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087c3e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087c3e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087c3ea: mov esp, ebx */ r_esp = r_ebx;
    /* 0087c3ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087c3ed: ret  */ FN_RET(0x0087c20c); r_esp += 4; return;
L_0087c3ee:; BB(0x0087c3ee);
    /* 0087c3ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c3f0: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0087c3f4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087c3f6: fcom qword ptr [edi + 0x208] */ fx_compare(ST(0), R_F64((u32)(r_edi+0x208u))); 
    /* 0087c3fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c3fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c3ff: jb 0x87c41c */ if (fC) goto L_0087c41c;
L_0087c401:; BB(0x0087c401);
    /* 0087c401: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0087c405: and eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c40a: or eax, 0x3f800000 */ {  u32 a = r_eax; u32 b = 0x3f800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087c40f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0087c412: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0087c414: mov dword ptr [esi + ebp*4], eax */ W32((u32)(r_esi+r_ebp*4), r_eax);
    /* 0087c417: jmp 0x87c377 */ goto L_0087c377;
L_0087c41c:; BB(0x0087c41c);
    /* 0087c41c: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087c41e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c420: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c422: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c424: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0087c428: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0087c42c: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
L_0087c42f:; BB(0x0087c42f);
    /* 0087c42f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c431: jge 0x87c38d */ if ((fS==fO)) goto L_0087c38d;
L_0087c437:; BB(0x0087c437);
    /* 0087c437: mov edi, ecx */ r_edi = r_ecx;
    /* 0087c439: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c43b: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c43e: jl 0x87c4b7 */ if ((fS!=fO)) goto L_0087c4b7;
L_0087c440:; BB(0x0087c440);
    /* 0087c440: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c442: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c444: add ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c448: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087c44c: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0087c450: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0087c454: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
L_0087c457:; BB(0x0087c457);
    /* 0087c457: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 0087c45b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087c45d: mov dword ptr [ecx + edi*4], esi */ W32((u32)(r_ecx+r_edi*4), r_esi);
    /* 0087c460: mov edi, dword ptr [ebp + edx*4 + 4] */ r_edi = R32((u32)(r_ebp+r_edx*4+0x4u));
    /* 0087c464: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087c466: mov dword ptr [ecx + edi*4], esi */ W32((u32)(r_ecx+r_edi*4), r_esi);
    /* 0087c469: mov edi, dword ptr [ebp + edx*4 + 8] */ r_edi = R32((u32)(r_ebp+r_edx*4+0x8u));
    /* 0087c46d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087c46f: mov dword ptr [ecx + edi*4], esi */ W32((u32)(r_ecx+r_edi*4), r_esi);
    /* 0087c472: mov edi, dword ptr [ebp + edx*4 + 0xc] */ r_edi = R32((u32)(r_ebp+r_edx*4+0xcu));
    /* 0087c476: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087c478: mov dword ptr [ecx + edi*4], esi */ W32((u32)(r_ecx+r_edi*4), r_esi);
    /* 0087c47b: mov edi, dword ptr [ebp + edx*4 + 0x10] */ r_edi = R32((u32)(r_ebp+r_edx*4+0x10u));
    /* 0087c47f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087c481: mov dword ptr [ecx + edi*4], esi */ W32((u32)(r_ecx+r_edi*4), r_esi);
    /* 0087c484: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c487: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c489: jle 0x87c457 */ if ((fZ||fS!=fO)) goto L_0087c457;
L_0087c48b:; BB(0x0087c48b);
    /* 0087c48b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0087c48f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0087c493: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
L_0087c496:; BB(0x0087c496);
    /* 0087c496: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087c49a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087c49c: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
L_0087c49f:; BB(0x0087c49f);
    /* 0087c49f: mov eax, dword ptr [ebp + edx*4] */ r_eax = R32((u32)(r_ebp+r_edx*4));
    /* 0087c4a3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c4a4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c4a6: mov dword ptr [edi + eax*4], esi */ W32((u32)(r_edi+r_eax*4), r_esi);
    /* 0087c4a9: jl 0x87c49f */ if ((fS!=fO)) goto L_0087c49f;
L_0087c4ab:; BB(0x0087c4ab);
    /* 0087c4ab: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0087c4af: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0087c4b2: jmp 0x87c38d */ goto L_0087c38d;
L_0087c4b7:; BB(0x0087c4b7);
    /* 0087c4b7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c4b9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c4bb: add ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c4bf: jmp 0x87c496 */ goto L_0087c496;
L_0087c4c1:; BB(0x0087c4c1);
    /* 0087c4c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c4c3: jmp 0x87c42f */ goto L_0087c42f;
}

void f_0087c4c8(void) /* sub_87C4C8 */
{
    FN_ENTER(0x0087c4c8);
    /* 0087c4c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087c4c9: mov ebx, esp */ r_ebx = r_esp;
    /* 0087c4cb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087c4ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087c4cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087c4d0: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087c4d3: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0087c4d6: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087c4d9: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0087c4db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087c4dd: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 0087c4e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c4e5: jle 0x87c56b */ if ((fZ||fS!=fO)) goto L_0087c56b;
L_0087c4eb:; BB(0x0087c4eb);
    /* 0087c4eb: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0087c4ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c4f1: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087c4f4: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 0087c4f7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c4f9: add edi, dword ptr [ebx + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c4fc: fld dword ptr [0x99ac38] */ FPUSH(R_F32((u32)(0x99ac38u)));
    /* 0087c502: fld dword ptr [0x99ac30] */ FPUSH(R_F32((u32)(0x99ac30u)));
    /* 0087c508: fld qword ptr [0x99aae0] */ FPUSH(R_F64((u32)(0x99aae0u)));
    /* 0087c50e: fld dword ptr [0x99ac2c] */ FPUSH(R_F32((u32)(0x99ac2cu)));
    /* 0087c514: fld qword ptr [0x99aae8] */ FPUSH(R_F64((u32)(0x99aae8u)));
    /* 0087c51a: fld dword ptr [0x99ac34] */ FPUSH(R_F32((u32)(0x99ac34u)));
    /* 0087c520: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0087c524: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0087c528: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0087c52c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c52e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c530: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c532: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c534: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c536: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087c538:; BB(0x0087c538);
    /* 0087c538: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0087c53b: mov esi, dword ptr [esi + edx*4 + 0x488] */ r_esi = R32((u32)(r_esi+r_edx*4+0x488u));
    /* 0087c542: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0087c545: cmp dword ptr [eax + esi*4], 0 */ {  u32 a = R32((u32)(r_eax+r_esi*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087c549: jne 0x87c574 */ if (!fZ) goto L_0087c574;
L_0087c54b:; BB(0x0087c54b);
    /* 0087c54b: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087c54e: mov eax, dword ptr [eax + edx*4 + 0x888] */ r_eax = R32((u32)(r_eax+r_edx*4+0x888u));
    /* 0087c555: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c557: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c559: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 0087c55c: cmp dword ptr [edi + eax], 0 */ {  u32 a = R32((u32)(r_edi+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087c560: jne 0x87c582 */ if (!fZ) goto L_0087c582;
L_0087c562:; BB(0x0087c562);
    /* 0087c562: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c563: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c565: jl 0x87c538 */ if ((fS!=fO)) goto L_0087c538;
L_0087c567:; BB(0x0087c567);
    /* 0087c567: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_0087c56b:; BB(0x0087c56b);
    /* 0087c56b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087c56e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087c56f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087c570: mov esp, ebx */ r_esp = r_ebx;
    /* 0087c572: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087c573: ret  */ FN_RET(0x0087c4c8); r_esp += 4; return;
L_0087c574:; BB(0x0087c574);
    /* 0087c574: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087c577: mov eax, dword ptr [eax + edx*4 + 0x888] */ r_eax = R32((u32)(r_eax+r_edx*4+0x888u));
    /* 0087c57e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c580: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0087c582:; BB(0x0087c582);
    /* 0087c582: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0087c586: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0087c589: mov edi, dword ptr [edx + esi*4] */ r_edi = R32((u32)(r_edx+r_esi*4));
    /* 0087c58c: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0087c590: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0087c593: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0087c597: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0087c59b: lea edi, [edx + edi] */ r_edi = (u32)(r_edx+r_edi);
    /* 0087c59e: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 0087c5a1: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 0087c5a5: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0087c5a8: mov eax, dword ptr [ecx + eax] */ r_eax = R32((u32)(r_ecx+r_eax));
    /* 0087c5ab: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0087c5af: mov edx, dword ptr [ecx + esi*4] */ r_edx = R32((u32)(r_ecx+r_esi*4));
    /* 0087c5b2: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0087c5b5: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0087c5b9: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0087c5bc: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0087c5c0: mov eax, dword ptr [edx + ecx*4 + 0xfc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xfcu));
    /* 0087c5c7: fld qword ptr [eax*8 + 0xa2ae80] */ FPUSH(R_F64((u32)(r_eax*8+0xa2ae80u)));
    /* 0087c5ce: mov eax, dword ptr [edx + ecx*4 + 0x138] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x138u));
    /* 0087c5d5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0087c5d9: fld qword ptr [eax*8 + 0xa2ae80] */ FPUSH(R_F64((u32)(r_eax*8+0xa2ae80u)));
    /* 0087c5e0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0087c5e3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0087c5e6: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087c5ed: je 0x87c5fb */ if (fZ) goto L_0087c5fb;
L_0087c5ef:; BB(0x0087c5ef);
    /* 0087c5ef: mov eax, dword ptr [ecx + 0x200] */ r_eax = R32((u32)(r_ecx+0x200u));
    /* 0087c5f5: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0087c5f9: jmp 0x87c5ff */ goto L_0087c5ff;
L_0087c5fb:; BB(0x0087c5fb);
    /* 0087c5fb: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
L_0087c5ff:; BB(0x0087c5ff);
    /* 0087c5ff: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0087c601: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c603: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c605: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0087c608: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c60a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c60c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c60e: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c610: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0087c614: mov ecx, dword ptr [edi + eax + 0x84] */ r_ecx = R32((u32)(r_edi+r_eax+0x84u));
    /* 0087c61b: mov eax, 1 */ r_eax = 0x1u;
    /* 0087c620: mov ebp, dword ptr [ebx + 0x28] */ r_ebp = R32((u32)(r_ebx+0x28u));
    /* 0087c623: mov dword ptr [ebp + esi*4], eax */ W32((u32)(r_ebp+r_esi*4), r_eax);
    /* 0087c627: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0087c62a: mov esi, dword ptr [esi + edx*4 + 0x888] */ r_esi = R32((u32)(r_esi+r_edx*4+0x888u));
    /* 0087c631: mov dword ptr [ebp + esi*4], eax */ W32((u32)(r_ebp+r_esi*4), r_eax);
    /* 0087c635: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087c637: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 0087c63a: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0087c63d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c63f: jle 0x87ca17 */ if ((fZ||fS!=fO)) goto L_0087ca17;
L_0087c645:; BB(0x0087c645);
    /* 0087c645: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0087c649: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0087c64c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0087c650: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
L_0087c654:; BB(0x0087c654);
    /* 0087c654: fld dword ptr [0x99ac38] */ FPUSH(R_F32((u32)(0x99ac38u)));
    /* 0087c65a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087c65c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c65e: jle 0x87ca05 */ if ((fZ||fS!=fO)) goto L_0087ca05;
L_0087c664:; BB(0x0087c664);
    /* 0087c664: lea ebp, [esi + eax] */ r_ebp = (u32)(r_esi+r_eax);
    /* 0087c667: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0087c66b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0087c66f:; BB(0x0087c66f);
    /* 0087c66f: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0087c672: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c674: jge 0x87c87f */ if ((fS==fO)) goto L_0087c87f;
L_0087c67a:; BB(0x0087c67a);
    /* 0087c67a: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0087c67e: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c680: jl 0x87c6b5 */ if ((fS!=fO)) goto L_0087c6b5;
L_0087c682:; BB(0x0087c682);
    /* 0087c682: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0087c686: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c688: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0087c68c: fld dword ptr [edx + edi] */ FPUSH(R_F32((u32)(r_edx+r_edi)));
    /* 0087c68f: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c691: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087c693: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c695: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c696: jae 0x87c6ac */ if (!fC) goto L_0087c6ac;
L_0087c698:; BB(0x0087c698);
    /* 0087c698: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0087c69c: fld dword ptr [ecx + edi] */ FPUSH(R_F32((u32)(r_ecx+r_edi)));
    /* 0087c69f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087c6a1: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c6a3: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0087c6a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c6a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c6a8: jb 0x87c6e9 */ if (fC) goto L_0087c6e9;
L_0087c6aa:; BB(0x0087c6aa);
    /* 0087c6aa: jmp 0x87c6cb */ goto L_0087c6cb;
L_0087c6ac:; BB(0x0087c6ac);
    /* 0087c6ac: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0087c6b0: fld dword ptr [eax + edi] */ FPUSH(R_F32((u32)(r_eax+r_edi)));
    /* 0087c6b3: jmp 0x87c6cb */ goto L_0087c6cb;
L_0087c6b5:; BB(0x0087c6b5);
    /* 0087c6b5: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0087c6b9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c6bb: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0087c6bf: fld dword ptr [eax + edi] */ FPUSH(R_F32((u32)(r_eax+r_edi)));
    /* 0087c6c2: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c6c4: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0087c6c8: fld dword ptr [edx + edi] */ FPUSH(R_F32((u32)(r_edx+r_edi)));
L_0087c6cb:; BB(0x0087c6cb);
    /* 0087c6cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c6cd: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0087c6cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c6d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c6d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c6d4: jae 0x87c7ba */ if (!fC) goto L_0087c7ba;
L_0087c6da:; BB(0x0087c6da);
    /* 0087c6da: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087c6dc: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c6de: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 0087c6e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c6e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c6e3: jae 0x87c7ba */ if (!fC) goto L_0087c7ba;
L_0087c6e9:; BB(0x0087c6e9);
    /* 0087c6e9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087c6eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c6ed: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0087c6f1: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0087c6f4: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0087c6f8: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 0087c6fc: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0087c6ff: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0087c704: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0087c708: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0087c70c: mov esi, dword ptr [eax + edi] */ r_esi = R32((u32)(r_eax+r_edi));
    /* 0087c70f: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0087c713: mov ebp, dword ptr [eax + edi] */ r_ebp = R32((u32)(r_eax+r_edi));
    /* 0087c716: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c718: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0087c71b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c71c: mov eax, esi */ r_eax = r_esi;
    /* 0087c71e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087c720: and ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c722: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087c723: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087c725: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087c727: add edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c72a: mov eax, edx */ r_eax = r_edx;
    /* 0087c72c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087c72f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087c730: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c732: fld dword ptr [eax*4 + 0xa2ae00] */ FPUSH(R_F32((u32)(r_eax*4+0xa2ae00u)));
    /* 0087c739: not ecx */ r_ecx = ~r_ecx;
    /* 0087c73b: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0087c73d: fadd dword ptr [0x99ac34] */ ST(0) = ST(0) + R_F32((u32)(0x99ac34u));
    /* 0087c743: or ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c745: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0087c749: fmul dword ptr [ebp*4 + 0xa2aee0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*4+0xa2aee0u));
    /* 0087c750: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0087c754: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0087c758: fmul dword ptr [edi + eax] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_eax));
    /* 0087c75b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087c75d: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0087c761: fstp dword ptr [edi + ecx] */ W_F32((u32)(r_edi+r_ecx), ST(0)); FPOP();
    /* 0087c764: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0087c768: mov dword ptr [edx + edi], eax */ W32((u32)(r_edx+r_edi), r_eax);
    /* 0087c76b: fld dword ptr [edi + ecx] */ FPUSH(R_F32((u32)(r_edi+r_ecx)));
    /* 0087c76e: fld dword ptr [0x99ac30] */ FPUSH(R_F32((u32)(0x99ac30u)));
    /* 0087c774: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087c776: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0087c77a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0087c77f: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c784: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087c789: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0087c78d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0087c791: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0087c793: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0087c797: fcomp qword ptr [0x99aae0] */ fx_compare(ST(0), R_F64((u32)(0x99aae0u))); FPOP();
    /* 0087c79d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c79f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c7a0: je 0x87c7a9 */ if (fZ) goto L_0087c7a9;
L_0087c7a2:; BB(0x0087c7a2);
    /* 0087c7a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c7a4: jmp 0x87c891 */ goto L_0087c891;
L_0087c7a9:; BB(0x0087c7a9);
    /* 0087c7a9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087c7ab: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0087c7af: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087c7b1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0087c7b5: jmp 0x87c891 */ goto L_0087c891;
L_0087c7ba:; BB(0x0087c7ba);
    /* 0087c7ba: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0087c7be: lea edx, [edx + edi] */ r_edx = (u32)(r_edx+r_edi);
    /* 0087c7c1: add edi, dword ptr [esp + 0x40] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c7c5: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0087c7c7: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0087c7c9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087c7cb: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c7cd: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0087c7d1: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0087c7d3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087c7d5: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c7d7: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087c7d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c7db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c7dc: jbe 0x87c7e5 */ if ((fC||fZ)) goto L_0087c7e5;
L_0087c7de:; BB(0x0087c7de);
    /* 0087c7de: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0087c7e3: jmp 0x87c7e7 */ goto L_0087c7e7;
L_0087c7e5:; BB(0x0087c7e5);
    /* 0087c7e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087c7e7:; BB(0x0087c7e7);
    /* 0087c7e7: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 0087c7eb: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0087c7ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c7ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c7f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c7f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c7f4: mov eax, 1 */ r_eax = 0x1u;
    /* 0087c7f9: mov edi, 0 */ r_edi = 0x0u;
    /* 0087c7fe: jb 0x87c802 */ if (fC) goto L_0087c802;
L_0087c800:; BB(0x0087c800);
    /* 0087c800: mov eax, edi */ r_eax = r_edi;
L_0087c802:; BB(0x0087c802);
    /* 0087c802: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0087c804: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0087c808: jne 0x87c824 */ if (!fZ) goto L_0087c824;
L_0087c80a:; BB(0x0087c80a);
    /* 0087c80a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087c80c: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c80e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c810: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0087c812: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c814: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c815: mov eax, 1 */ r_eax = 0x1u;
    /* 0087c81a: jb 0x87c81e */ if (fC) goto L_0087c81e;
L_0087c81c:; BB(0x0087c81c);
    /* 0087c81c: mov eax, ecx */ r_eax = r_ecx;
L_0087c81e:; BB(0x0087c81e);
    /* 0087c81e: lea ecx, [eax + eax - 1] */ r_ecx = (u32)(r_eax+r_eax+0xffffffffu);
    /* 0087c822: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0087c824:; BB(0x0087c824);
    /* 0087c824: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087c826: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087c828: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087c82b: je 0x87c9de */ if (fZ) goto L_0087c9de;
L_0087c831:; BB(0x0087c831);
    /* 0087c831: fcom dword ptr [0x99ac38] */ fx_compare(ST(0), R_F32((u32)(0x99ac38u))); 
    /* 0087c837: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c839: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c83a: jbe 0x87c844 */ if ((fC||fZ)) goto L_0087c844;
L_0087c83c:; BB(0x0087c83c);
    /* 0087c83c: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087c83e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c840: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0087c842: jmp 0x87c84a */ goto L_0087c84a;
L_0087c844:; BB(0x0087c844);
    /* 0087c844: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 0087c846: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c848: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
L_0087c84a:; BB(0x0087c84a);
    /* 0087c84a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0087c84e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0087c850: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
L_0087c852:; BB(0x0087c852);
    /* 0087c852: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c854: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087c856: fld qword ptr [0x99aaf0] */ FPUSH(R_F64((u32)(0x99aaf0u)));
    /* 0087c85c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087c85e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0087c860: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c862: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c864: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c866: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c867: jae 0x87ca29 */ if (!fC) goto L_0087ca29;
L_0087c86d:; BB(0x0087c86d);
    /* 0087c86d: fchs  */ ST(0) = -ST(0);
    /* 0087c86f: fmul qword ptr [0x99aae8] */ ST(0) = ST(0) * R_F64((u32)(0x99aae8u));
    /* 0087c875: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0087c877: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0087c879: fchs  */ ST(0) = -ST(0);
    /* 0087c87b: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0087c87d: jmp 0x87c891 */ goto L_0087c891;
L_0087c87f:; BB(0x0087c87f);
    /* 0087c87f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087c881: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0087c885: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c887: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 0087c88a: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0087c88e: mov dword ptr [edi + ebp*4], ecx */ W32((u32)(r_edi+r_ebp*4), r_ecx);
L_0087c891:; BB(0x0087c891);
    /* 0087c891: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c892: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087c893: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0087c897: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c899: jl 0x87c66f */ if ((fS!=fO)) goto L_0087c66f;
L_0087c89f:; BB(0x0087c89f);
    /* 0087c89f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0087c8a3: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0087c8a7: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0087c8aa: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0087c8ae: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0087c8b1: cmp dword ptr [esi + 0x1f8], 0 */ {  u32 a = R32((u32)(r_esi+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087c8b8: je 0x87c95e */ if (fZ) goto L_0087c95e;
L_0087c8be:; BB(0x0087c8be);
    /* 0087c8be: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c8c2: jle 0x87c9ba */ if ((fZ||fS!=fO)) goto L_0087c9ba;
L_0087c8c8:; BB(0x0087c8c8);
    /* 0087c8c8: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0087c8cb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c8cd: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0087c8d1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0087c8d5: fld dword ptr [0x99ac2c] */ FPUSH(R_F32((u32)(0x99ac2cu)));
    /* 0087c8db: fld qword ptr [0x99aae0] */ FPUSH(R_F64((u32)(0x99aae0u)));
    /* 0087c8e1: fld dword ptr [0x99ac30] */ FPUSH(R_F32((u32)(0x99ac30u)));
    /* 0087c8e7: jmp 0x87c8ee */ goto L_0087c8ee;
L_0087c8e9:; BB(0x0087c8e9);
    /* 0087c8e9: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0087c8ec: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_0087c8ee:; BB(0x0087c8ee);
    /* 0087c8ee: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087c8f0: fcom qword ptr [esi + 0x208] */ fx_compare(ST(0), R_F64((u32)(r_esi+0x208u))); 
    /* 0087c8f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c8f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c8f9: jb 0x87c9aa */ if (fC) goto L_0087c9aa;
L_0087c8ff:; BB(0x0087c8ff);
    /* 0087c8ff: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0087c903: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 0087c906: mov edi, dword ptr [esi + eax*4] */ r_edi = R32((u32)(r_esi+r_eax*4));
    /* 0087c909: add edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c90d: mov esi, dword ptr [edi + ebp*4] */ r_esi = R32((u32)(r_edi+r_ebp*4));
    /* 0087c910: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0087c913: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c915: jge 0x87c957 */ if ((fS==fO)) goto L_0087c957;
L_0087c917:; BB(0x0087c917);
    /* 0087c917: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0087c91b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c91d: jl 0x87c957 */ if ((fS!=fO)) goto L_0087c957;
L_0087c91f:; BB(0x0087c91f);
    /* 0087c91f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0087c923: mov eax, dword ptr [edi + esi*4] */ r_eax = R32((u32)(r_edi+r_esi*4));
    /* 0087c926: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 0087c929: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0087c92b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0087c92f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0087c933: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0087c938: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c93d: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087c942: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0087c946: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0087c94a: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0087c94c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0087c950: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0087c952: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c954: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c955: je 0x87c982 */ if (fZ) goto L_0087c982;
L_0087c957:; BB(0x0087c957);
    /* 0087c957: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087c958: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c95a: jl 0x87c8e9 */ if ((fS!=fO)) goto L_0087c8e9;
L_0087c95c:; BB(0x0087c95c);
    /* 0087c95c: jmp 0x87c99a */ goto L_0087c99a;
L_0087c95e:; BB(0x0087c95e);
    /* 0087c95e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c960: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
L_0087c962:; BB(0x0087c962);
    /* 0087c962: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c964: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c966: jl 0x87c654 */ if ((fS!=fO)) goto L_0087c654;
L_0087c96c:; BB(0x0087c96c);
    /* 0087c96c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c96e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c970: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0087c974: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087c977: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 0087c97d: jmp 0x87c562 */ goto L_0087c562;
L_0087c982:; BB(0x0087c982);
    /* 0087c982: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0087c986: and eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087c98b: or eax, 0x3f800000 */ {  u32 a = r_eax; u32 b = 0x3f800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087c990: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0087c993: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087c995: mov dword ptr [edi + esi*4], eax */ W32((u32)(r_edi+r_esi*4), r_eax);
    /* 0087c998: jmp 0x87c957 */ goto L_0087c957;
L_0087c99a:; BB(0x0087c99a);
    /* 0087c99a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c99c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087c99e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0087c9a2: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0087c9a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9a8: jmp 0x87c962 */ goto L_0087c962;
L_0087c9aa:; BB(0x0087c9aa);
    /* 0087c9aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9ac: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087c9ae: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0087c9b2: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0087c9b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9b8: jmp 0x87c962 */ goto L_0087c962;
L_0087c9ba:; BB(0x0087c9ba);
    /* 0087c9ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9bc: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c9be: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0087c9c0: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c9c2: jl 0x87c654 */ if ((fS!=fO)) goto L_0087c654;
L_0087c9c8:; BB(0x0087c9c8);
    /* 0087c9c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087c9cc: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0087c9d0: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087c9d3: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 0087c9d9: jmp 0x87c562 */ goto L_0087c562;
L_0087c9de:; BB(0x0087c9de);
    /* 0087c9de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c9e0: fcom dword ptr [0x99ac38] */ fx_compare(ST(0), R_F32((u32)(0x99ac38u))); 
    /* 0087c9e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087c9e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087c9e9: jbe 0x87c9f8 */ if ((fC||fZ)) goto L_0087c9f8;
L_0087c9eb:; BB(0x0087c9eb);
    /* 0087c9eb: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087c9ed: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 0087c9ef: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0087c9f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087c9f3: jmp 0x87c852 */ goto L_0087c852;
L_0087c9f8:; BB(0x0087c9f8);
    /* 0087c9f8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087c9fa: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 0087c9fc: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0087c9fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087ca00: jmp 0x87c852 */ goto L_0087c852;
L_0087ca05:; BB(0x0087ca05);
    /* 0087ca05: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0087ca08: cmp dword ptr [esi + 0x1f8], 0 */ {  u32 a = R32((u32)(r_esi+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087ca0f: jne 0x87c8be */ if (!fZ) goto L_0087c8be;
L_0087ca15:; BB(0x0087ca15);
    /* 0087ca15: jmp 0x87ca30 */ goto L_0087ca30;
L_0087ca17:; BB(0x0087ca17);
    /* 0087ca17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ca19: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ca1b: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087ca1e: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 0087ca24: jmp 0x87c562 */ goto L_0087c562;
L_0087ca29:; BB(0x0087ca29);
    /* 0087ca29: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ca2b: jmp 0x87c891 */ goto L_0087c891;
L_0087ca30:; BB(0x0087ca30);
    /* 0087ca30: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ca32: jmp 0x87c962 */ goto L_0087c962;
}

void f_0087ca38(void) /* sub_87CA38 */
{
    FN_ENTER(0x0087ca38);
L_0087ca38:; BB(0x0087ca38);
    /* 0087ca38: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087ca42: jne 0x87ca60 */ if (!fZ) goto L_0087ca60;
L_0087ca48:; BB(0x0087ca48);
    /* 0087ca48: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087ca52: jne 0x87e1d0 */ if (!fZ) goto L_0087e1d0;
L_0087ca58:; BB(0x0087ca58);
    /* 0087ca58: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x87ca5du); f_0086b8a0();
    /* 0087ca5d: jmp 0x87ca38 */ goto L_0087ca38;
L_0087ca60:; BB(0x0087ca60);
    /* 0087ca60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087ca61: mov ebx, esp */ r_ebx = r_esp;
    /* 0087ca63: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087ca66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087ca67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087ca68: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0087ca6b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0087ca6f: mov ebp, esp */ r_ebp = r_esp;
    /* 0087ca71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087ca72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087ca73: mov eax, 0x7f90 */ r_eax = 0x7f90u;
    /* 0087ca78: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87ca7du); f_00858020();
    /* 0087ca7d: mov edx, dword ptr [esp + 0x7f94] */ r_edx = R32((u32)(r_esp+0x7f94u));
    /* 0087ca84: mov eax, dword ptr [esp + 0x7f90] */ r_eax = R32((u32)(r_esp+0x7f90u));
    /* 0087ca8b: mov dword ptr [ebp - 0x84], edi */ W32((u32)(r_ebp+0xffffff7cu), r_edi);
    /* 0087ca91: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 0087ca97: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0087ca9d: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 0087caa0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087caa2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0087caa5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087caa8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087caaa: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87caafu); f_00858020();
    /* 0087caaf: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087cab2: mov eax, esp */ r_eax = r_esp;
    /* 0087cab4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0087cab7: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0087cab9: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87cabeu); f_00859c55();
    /* 0087cabe: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0087cac4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087cac7: lea eax, [ebp - 0x7f98] */ r_eax = (u32)(r_ebp+0xffff8068u);
    /* 0087cacd: push 0x7700 */ { u32 v = 0x7700u; r_esp -= 4; W32(r_esp, v); }
    /* 0087cad2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087cad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087cad5: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x87cadau); f_0086b5cc();
    /* 0087cada: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087cadd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087cadf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087cae1: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0087cae4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0087cae7:; BB(0x0087cae7);
    /* 0087cae7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cae9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087caec: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0087caef: lea esi, [eax + 2] */ r_esi = (u32)(r_eax+0x2u);
    /* 0087caf2: lea edi, [eax + 3] */ r_edi = (u32)(r_eax+0x3u);
    /* 0087caf5: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 0087caf8: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
L_0087cafb:; BB(0x0087cafb);
    /* 0087cafb: cmp eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087cafe: jge 0x87cb1b */ if ((fS==fO)) goto L_0087cb1b;
L_0087cb00:; BB(0x0087cb00);
    /* 0087cb00: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087cb03: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0087cb06: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087cb08: movss xmm1, dword ptr [edi + ecx*4 + 0xa2aca0] */ { u32 v = R32((u32)(r_edi+r_ecx*4+0xa2aca0u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087cb11: minss xmm1, dword ptr [0x99ac04] */ { XMM s; s.d[0] = R32((u32)(0x99ac04u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
    /* 0087cb19: jmp 0x87cb2f */ goto L_0087cb2f;
L_0087cb1b:; BB(0x0087cb1b);
    /* 0087cb1b: movss xmm1, dword ptr [0xa2adfc] */ { u32 v = R32((u32)(0xa2adfcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087cb23: movss xmm0, dword ptr [0x99ac04] */ { u32 v = R32((u32)(0x99ac04u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cb2b: minss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
L_0087cb2f:; BB(0x0087cb2f);
    /* 0087cb2f: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0087cb32: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087cb34: cmp edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087cb37: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0087cb3a: jge 0x87cb4e */ if ((fS==fO)) goto L_0087cb4e;
L_0087cb3c:; BB(0x0087cb3c);
    /* 0087cb3c: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087cb3f: movss xmm0, dword ptr [esi + edi*4 + 0xa2aca4] */ { u32 v = R32((u32)(r_esi+r_edi*4+0xa2aca4u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cb48: minss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087cb4c: jmp 0x87cb5a */ goto L_0087cb5a;
L_0087cb4e:; BB(0x0087cb4e);
    /* 0087cb4e: movss xmm0, dword ptr [0xa2adfc] */ { u32 v = R32((u32)(0xa2adfcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cb56: minss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
L_0087cb5a:; BB(0x0087cb5a);
    /* 0087cb5a: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087cb5d: cmp esi, 0x58 */ {  u32 a = r_esi; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087cb60: jge 0x87cb77 */ if ((fS==fO)) goto L_0087cb77;
L_0087cb62:; BB(0x0087cb62);
    /* 0087cb62: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087cb65: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087cb68: movss xmm1, dword ptr [esi + edi*4 + 0xa2aca8] */ { u32 v = R32((u32)(r_esi+r_edi*4+0xa2aca8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087cb71: minss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
    /* 0087cb75: jmp 0x87cb83 */ goto L_0087cb83;
L_0087cb77:; BB(0x0087cb77);
    /* 0087cb77: movss xmm1, dword ptr [0xa2adfc] */ { u32 v = R32((u32)(0xa2adfcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087cb7f: minss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
L_0087cb83:; BB(0x0087cb83);
    /* 0087cb83: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087cb86: cmp esi, 0x58 */ {  u32 a = r_esi; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087cb89: jge 0x87cba0 */ if ((fS==fO)) goto L_0087cba0;
L_0087cb8b:; BB(0x0087cb8b);
    /* 0087cb8b: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087cb8e: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087cb91: movss xmm0, dword ptr [esi + edi*4 + 0xa2acac] */ { u32 v = R32((u32)(r_esi+r_edi*4+0xa2acacu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cb9a: minss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087cb9e: jmp 0x87cbac */ goto L_0087cbac;
L_0087cba0:; BB(0x0087cba0);
    /* 0087cba0: movss xmm0, dword ptr [0xa2adfc] */ { u32 v = R32((u32)(0xa2adfcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cba8: minss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
L_0087cbac:; BB(0x0087cbac);
    /* 0087cbac: movss dword ptr [ebp + ecx*4 - 0x198], xmm0 */ W32((u32)(r_ebp+r_ecx*4+0xfffffe68u), xmm[0].d[0]);
    /* 0087cbb5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbb6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087cbb7: inc dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087cbba: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cbbb: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087cbbe: cmp ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087cbc1: jl 0x87cafb */ if ((fS!=fO)) goto L_0087cafb;
L_0087cbc7:; BB(0x0087cbc7);
    /* 0087cbc7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087cbca: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0087cbcd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087cbcf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087cbd1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087cbd3: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0087cbd6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087cbd9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087cbdb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087cbdd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087cbe0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbe2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbe4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbe6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbe8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cbf0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087cbf3: lea edi, [esi + 0x1c0] */ r_edi = (u32)(r_esi+0x1c0u);
    /* 0087cbf9: lea ecx, [eax + eax + 0x540] */ r_ecx = (u32)(r_eax+r_eax+0x540u);
    /* 0087cc00: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0087cc03: mov esi, edx */ r_esi = r_edx;
    /* 0087cc05: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0087cc08: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_0087cc0b:; BB(0x0087cc0b);
    /* 0087cc0b: lea eax, [ebp - 0x7f98] */ r_eax = (u32)(r_ebp+0xffff8068u);
    /* 0087cc11: lea eax, [eax + edi] */ r_eax = (u32)(r_eax+r_edi);
    /* 0087cc14: lea ecx, [esi + 0xa25360] */ r_ecx = (u32)(r_esi+0xa25360u);
    /* 0087cc1a: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc21: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87cc26u); f_0086b6b8();
    /* 0087cc26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087cc29: add edi, 0xe0 */ {  u32 a = r_edi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087cc2f: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087cc35: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087cc38: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087cc3a: jg 0x87cc0b */ if ((!fZ&&fS==fO)) goto L_0087cc0b;
L_0087cc3c:; BB(0x0087cc3c);
    /* 0087cc3c: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087cc3f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087cc42: lea edi, [eax + eax + 0xa25360] */ r_edi = (u32)(r_eax+r_eax+0xa25360u);
    /* 0087cc49: lea eax, [ebp - 0x7f98] */ r_eax = (u32)(r_ebp+0xffff8068u);
    /* 0087cc4f: lea edx, [eax + esi] */ r_edx = (u32)(r_eax+r_esi);
    /* 0087cc52: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc59: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87cc5eu); f_0086b6b8();
    /* 0087cc5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087cc61: lea eax, [ebp + esi - 0x7eb8] */ r_eax = (u32)(r_ebp+r_esi+0xffff8148u);
    /* 0087cc68: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087cc6f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87cc74u); f_0086b6b8();
    /* 0087cc74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087cc77: movss xmm1, dword ptr [0x99ac10] */ { u32 v = R32((u32)(0x99ac10u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087cc7f: movss xmm0, dword ptr [0x99ac10] */ { u32 v = R32((u32)(0x99ac10u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cc87: mov ecx, esi */ r_ecx = r_esi;
    /* 0087cc89: lea edx, [esi + 0x700] */ r_edx = (u32)(r_esi+0x700u);
    /* 0087cc8f: movss xmm2, dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087cc94: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
L_0087cc97:; BB(0x0087cc97);
    /* 0087cc97: mov esi, ecx */ r_esi = r_ecx;
    /* 0087cc99: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0087cc9e: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_0087cca1:; BB(0x0087cca1);
    /* 0087cca1: mov edi, eax */ r_edi = r_eax;
    /* 0087cca3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087cca4: xor edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087cca6: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fC = (a < b); }
    /* 0087cca8: cvtsi2ss xmm3, edi */ xmm[3].fs[0] = (float)(i32)(r_edi);
    /* 0087ccac: mulss xmm3, dword ptr [ebx + 0x18] */ { XMM s; s.d[0] = R32((u32)(r_ebx+0x18u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 0087ccb1: addss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 0087ccb5: comiss xmm3, xmm1 */ { XMM s = xmm[1]; float a = xmm[3].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087ccb8: jae 0x87ccc5 */ if (!fC) goto L_0087ccc5;
L_0087ccba:; BB(0x0087ccba);
    /* 0087ccba: comiss xmm2, xmm0 */ { XMM s = xmm[0]; float a = xmm[2].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087ccbd: jbe 0x87ccc5 */ if ((fC||fZ)) goto L_0087ccc5;
L_0087ccbf:; BB(0x0087ccbf);
    /* 0087ccbf: movss xmm3, xmm0 */ xmm[3].d[0] = xmm[0].d[0];
    /* 0087ccc3: jmp 0x87ccd3 */ goto L_0087ccd3;
L_0087ccc5:; BB(0x0087ccc5);
    /* 0087ccc5: comiss xmm3, xmm1 */ { XMM s = xmm[1]; float a = xmm[3].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087ccc8: jbe 0x87ccd3 */ if ((fC||fZ)) goto L_0087ccd3;
L_0087ccca:; BB(0x0087ccca);
    /* 0087ccca: comiss xmm2, xmm0 */ { XMM s = xmm[0]; float a = xmm[2].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087cccd: jae 0x87ccd3 */ if (!fC) goto L_0087ccd3;
L_0087cccf:; BB(0x0087cccf);
    /* 0087cccf: movss xmm3, xmm0 */ xmm[3].d[0] = xmm[0].d[0];
L_0087ccd3:; BB(0x0087ccd3);
    /* 0087ccd3: addss xmm3, dword ptr [ebp + esi - 0x7f98] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_esi+0xffff8068u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 0087ccdc: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087ccdd: movss dword ptr [ebp + esi - 0x7f98], xmm3 */ W32((u32)(r_ebp+r_esi+0xffff8068u), xmm[3].d[0]);
    /* 0087cce6: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087cce9: cmp eax, -0x28 */ {  u32 a = r_eax; u32 b = 0xffffffd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ccec: jg 0x87cca1 */ if ((!fZ&&fS==fO)) goto L_0087cca1;
L_0087ccee:; BB(0x0087ccee);
    /* 0087ccee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0087ccf1: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ccf7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ccf9: jg 0x87cc97 */ if ((!fZ&&fS==fO)) goto L_0087cc97;
L_0087ccfb:; BB(0x0087ccfb);
    /* 0087ccfb: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087ccfe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087cd00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087cd02: fld qword ptr [0x99aa60] */ FPUSH(R_F64((u32)(0x99aa60u)));
    /* 0087cd08: mov ecx, esi */ r_ecx = r_esi;
    /* 0087cd0a: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0087cd0d: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0087cd10: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087cd13: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_0087cd16:; BB(0x0087cd16);
    /* 0087cd16: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087cd19: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087cd1c: mov eax, 2 */ r_eax = 0x2u;
    /* 0087cd21: cmovge eax, esi */ if ((fS==fO)) { r_eax = r_esi; }
    /* 0087cd24: lea edx, [ebp - 0x7f98] */ r_edx = (u32)(r_ebp+0xffff8068u);
    /* 0087cd2a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0087cd2d: lea esi, [edx + ecx] */ r_esi = (u32)(r_edx+r_ecx);
    /* 0087cd30: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087cd33: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087cd36: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 0087cd39: mov edx, 0x38 */ r_edx = 0x38u;
    /* 0087cd3e: mov ecx, esi */ r_ecx = r_esi;
    /* 0087cd40: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087cd46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087cd48: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0087cd4b: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087cd51: fmul qword ptr [0x99aa58] */ ST(0) = ST(0) * R_F64((u32)(0x99aa58u));
    /* 0087cd57: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087cd59: je 0x87cd83 */ if (fZ) goto L_0087cd83;
L_0087cd5b:; BB(0x0087cd5b);
    /* 0087cd5b: test cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0087cd5e: jne 0x87cdca */ if (!fZ) goto L_0087cdca;
L_0087cd60:; BB(0x0087cd60);
    /* 0087cd60: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cd62: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cd65: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087cd68: mov edx, ecx */ r_edx = r_ecx;
    /* 0087cd6a: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087cd6c: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087cd6f: jmp 0x87cd75 */ goto L_0087cd75;
L_0087cd71:; BB(0x0087cd71);
    /* 0087cd71: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_0087cd75:; BB(0x0087cd75);
    /* 0087cd75: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0087cd78: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087cd7a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cd7b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cd7d: jb 0x87cd71 */ if (fC) goto L_0087cd71;
L_0087cd7f:; BB(0x0087cd7f);
    /* 0087cd7f: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_0087cd83:; BB(0x0087cd83);
    /* 0087cd83: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0087cd86: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087cd88: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087cd8b: fst dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0));
    /* 0087cd91: movss xmm0, dword ptr [ebp - 0xb0] */ { u32 v = R32((u32)(r_ebp+0xffffff50u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cd99: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
L_0087cd9d:; BB(0x0087cd9d);
    /* 0087cd9d: prefetchnta byte ptr [esi + eax*4 + 0x40] */ ;
    /* 0087cda2: movaps xmm1, xmmword ptr [esi + eax*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+r_eax*4), 16); xmm[1] = s; }
    /* 0087cda6: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 0087cda9: movaps xmmword ptr [esi + eax*4], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esi+r_eax*4), &xmm[1], 16);
    /* 0087cdad: movaps xmm2, xmmword ptr [esi + eax*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+r_eax*4+0x10u), 16); xmm[2] = s; }
    /* 0087cdb2: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 0087cdb5: movaps xmmword ptr [esi + eax*4 + 0x10], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_esi+r_eax*4+0x10u), &xmm[2], 16);
    /* 0087cdba: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cdbd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cdbf: jb 0x87cd9d */ if (fC) goto L_0087cd9d;
L_0087cdc1:; BB(0x0087cdc1);
    /* 0087cdc1: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cdc4: jae 0x87e1c2 */ if (!fC) goto L_0087e1c2;
L_0087cdca:; BB(0x0087cdca);
    /* 0087cdca: jmp 0x87cdd0 */ goto L_0087cdd0;
L_0087cdcc:; BB(0x0087cdcc);
    /* 0087cdcc: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_0087cdd0:; BB(0x0087cdd0);
    /* 0087cdd0: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0087cdd3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087cdd5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cdd6: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cdd9: jb 0x87cdcc */ if (fC) goto L_0087cdcc;
L_0087cddb:; BB(0x0087cddb);
    /* 0087cddb: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087cddf: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087cde1:; BB(0x0087cde1);
    /* 0087cde1: lea eax, [ebp - 0x898] */ r_eax = (u32)(r_ebp+0xfffff768u);
    /* 0087cde7: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0087cdea: lea edi, [eax + edx] */ r_edi = (u32)(r_eax+r_edx);
    /* 0087cded: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 0087cdf0: lea ecx, [ebp - 0x198] */ r_ecx = (u32)(r_ebp+0xfffffe68u);
    /* 0087cdf6: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087cdfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087cdfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087cdfd: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87ce02u); f_0086b6b8();
    /* 0087ce02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087ce05: fld qword ptr [0x99aa60] */ FPUSH(R_F64((u32)(0x99aa60u)));
    /* 0087ce0b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087ce0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087ce10: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087ce16: mov eax, 0x38 */ r_eax = 0x38u;
    /* 0087ce1b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0087ce1e: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087ce24: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0087ce27: fmul dword ptr [0x99ac0c] */ ST(0) = ST(0) * R_F32((u32)(0x99ac0cu));
    /* 0087ce2d: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0087ce2f: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0087ce32: je 0x87ce60 */ if (fZ) goto L_0087ce60;
L_0087ce34:; BB(0x0087ce34);
    /* 0087ce34: mov eax, ecx */ r_eax = r_ecx;
    /* 0087ce36: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0087ce38: jne 0x87ceaa */ if (!fZ) goto L_0087ceaa;
L_0087ce3a:; BB(0x0087ce3a);
    /* 0087ce3a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ce3c: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ce3f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087ce42: mov eax, ecx */ r_eax = r_ecx;
    /* 0087ce44: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087ce46: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ce49: mov edi, dword ptr [ebp - 0x7c] */ r_edi = R32((u32)(r_ebp+0xffffff84u));
    /* 0087ce4c: jmp 0x87ce52 */ goto L_0087ce52;
L_0087ce4e:; BB(0x0087ce4e);
    /* 0087ce4e: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0087ce52:; BB(0x0087ce52);
    /* 0087ce52: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 0087ce55: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ce57: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ce58: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087ce5a: jb 0x87ce4e */ if (fC) goto L_0087ce4e;
L_0087ce5c:; BB(0x0087ce5c);
    /* 0087ce5c: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0087ce60:; BB(0x0087ce60);
    /* 0087ce60: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087ce63: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087ce65: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ce68: fst dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0));
    /* 0087ce6e: movss xmm0, dword ptr [ebp - 0xb0] */ { u32 v = R32((u32)(r_ebp+0xffffff50u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087ce76: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 0087ce7a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
L_0087ce7d:; BB(0x0087ce7d);
    /* 0087ce7d: prefetchnta byte ptr [ecx + edx*4 + 0x40] */ ;
    /* 0087ce82: movaps xmm1, xmmword ptr [ecx + edx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edx*4), 16); xmm[1] = s; }
    /* 0087ce86: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 0087ce89: movaps xmmword ptr [ecx + edx*4], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edx*4), &xmm[1], 16);
    /* 0087ce8d: movaps xmm2, xmmword ptr [ecx + edx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edx*4+0x10u), 16); xmm[2] = s; }
    /* 0087ce92: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 0087ce95: movaps xmmword ptr [ecx + edx*4 + 0x10], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edx*4+0x10u), &xmm[2], 16);
    /* 0087ce9a: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ce9d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087ce9f: jb 0x87ce7d */ if (fC) goto L_0087ce7d;
L_0087cea1:; BB(0x0087cea1);
    /* 0087cea1: cmp edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cea4: jae 0x87e1c9 */ if (!fC) goto L_0087e1c9;
L_0087ceaa:; BB(0x0087ceaa);
    /* 0087ceaa: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0087cead: jmp 0x87ceb3 */ goto L_0087ceb3;
L_0087ceaf:; BB(0x0087ceaf);
    /* 0087ceaf: fstp dword ptr [eax + edx*4 - 4] */ W_F32((u32)(r_eax+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0087ceb3:; BB(0x0087ceb3);
    /* 0087ceb3: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 0087ceb6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ceb8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ceb9: cmp edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cebc: jb 0x87ceaf */ if (fC) goto L_0087ceaf;
L_0087cebe:; BB(0x0087cebe);
    /* 0087cebe: fstp dword ptr [eax + edx*4 - 4] */ W_F32((u32)(r_eax+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087cec2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087cec4:; BB(0x0087cec4);
    /* 0087cec4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087cec6: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0087cec9: lea edx, [eax + 0xe0] */ r_edx = (u32)(r_eax+0xe0u);
    /* 0087cecf: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087ced1: jb 0x87e1af */ if (fC) goto L_0087e1af;
L_0087ced7:; BB(0x0087ced7);
    /* 0087ced7: mov ecx, 0x38 */ r_ecx = 0x38u;
    /* 0087cedc: mov eax, esi */ r_eax = r_esi;
    /* 0087cede: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0087cee1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087cee3: je 0x87cf1f */ if (fZ) goto L_0087cf1f;
L_0087cee5:; BB(0x0087cee5);
    /* 0087cee5: mov eax, edx */ r_eax = r_edx;
    /* 0087cee7: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0087cee9: jne 0x87cf94 */ if (!fZ) goto L_0087cf94;
L_0087ceef:; BB(0x0087ceef);
    /* 0087ceef: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087cef1: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 0087cef4: lea eax, [esi + eax + 0x10] */ r_eax = (u32)(r_esi+r_eax+0x10u);
    /* 0087cef8: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0087cefb: mov ecx, edx */ r_ecx = r_edx;
    /* 0087cefd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ceff: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cf02: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0087cf05: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
L_0087cf08:; BB(0x0087cf08);
    /* 0087cf08: movss xmm0, dword ptr [esi + edi*4] */ { u32 v = R32((u32)(r_esi+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cf0d: maxss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] > s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087cf12: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087cf17: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087cf18: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cf1a: jb 0x87cf08 */ if (fC) goto L_0087cf08;
L_0087cf1c:; BB(0x0087cf1c);
    /* 0087cf1c: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
L_0087cf1f:; BB(0x0087cf1f);
    /* 0087cf1f: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cf22: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cf24: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087cf27: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0087cf29: jne 0x87cf5c */ if (!fZ) goto L_0087cf5c;
L_0087cf2b:; BB(0x0087cf2b);
    /* 0087cf2b: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
L_0087cf2e:; BB(0x0087cf2e);
    /* 0087cf2e: prefetchnta byte ptr [eax + edi*4 + 0x40] */ ;
    /* 0087cf33: movaps xmm0, xmmword ptr [esi + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+r_edi*4), 16); xmm[0] = s; }
    /* 0087cf37: prefetchnta byte ptr [esi + edi*4 + 0x40] */ ;
    /* 0087cf3c: maxps xmm0, xmmword ptr [eax + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4), 16); xmm[0].fs[0] = (xmm[0].fs[0] > s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; xmm[0].fs[1] = (xmm[0].fs[1] > s.fs[1]) ? xmm[0].fs[1] : s.fs[1]; xmm[0].fs[2] = (xmm[0].fs[2] > s.fs[2]) ? xmm[0].fs[2] : s.fs[2]; xmm[0].fs[3] = (xmm[0].fs[3] > s.fs[3]) ? xmm[0].fs[3] : s.fs[3]; }
    /* 0087cf40: movaps xmmword ptr [eax + edi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edi*4), &xmm[0], 16);
    /* 0087cf44: movaps xmm1, xmmword ptr [esi + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+r_edi*4+0x10u), 16); xmm[1] = s; }
    /* 0087cf49: maxps xmm1, xmmword ptr [eax + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4+0x10u), 16); xmm[1].fs[0] = (xmm[1].fs[0] > s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; xmm[1].fs[1] = (xmm[1].fs[1] > s.fs[1]) ? xmm[1].fs[1] : s.fs[1]; xmm[1].fs[2] = (xmm[1].fs[2] > s.fs[2]) ? xmm[1].fs[2] : s.fs[2]; xmm[1].fs[3] = (xmm[1].fs[3] > s.fs[3]) ? xmm[1].fs[3] : s.fs[3]; }
    /* 0087cf4e: movaps xmmword ptr [eax + edi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edi*4+0x10u), &xmm[1], 16);
    /* 0087cf53: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087cf56: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cf58: jb 0x87cf2e */ if (fC) goto L_0087cf2e;
L_0087cf5a:; BB(0x0087cf5a);
    /* 0087cf5a: jmp 0x87cf8b */ goto L_0087cf8b;
L_0087cf5c:; BB(0x0087cf5c);
    /* 0087cf5c: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
L_0087cf5f:; BB(0x0087cf5f);
    /* 0087cf5f: movups xmm0, xmmword ptr [esi + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+r_edi*4), 16); xmm[0] = s; }
    /* 0087cf63: prefetchnta byte ptr [eax + edi*4 + 0x40] */ ;
    /* 0087cf68: prefetchnta byte ptr [esi + edi*4 + 0x40] */ ;
    /* 0087cf6d: maxps xmm0, xmmword ptr [eax + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4), 16); xmm[0].fs[0] = (xmm[0].fs[0] > s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; xmm[0].fs[1] = (xmm[0].fs[1] > s.fs[1]) ? xmm[0].fs[1] : s.fs[1]; xmm[0].fs[2] = (xmm[0].fs[2] > s.fs[2]) ? xmm[0].fs[2] : s.fs[2]; xmm[0].fs[3] = (xmm[0].fs[3] > s.fs[3]) ? xmm[0].fs[3] : s.fs[3]; }
    /* 0087cf71: movaps xmmword ptr [eax + edi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edi*4), &xmm[0], 16);
    /* 0087cf75: movups xmm1, xmmword ptr [esi + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+r_edi*4+0x10u), 16); xmm[1] = s; }
    /* 0087cf7a: maxps xmm1, xmmword ptr [eax + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4+0x10u), 16); xmm[1].fs[0] = (xmm[1].fs[0] > s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; xmm[1].fs[1] = (xmm[1].fs[1] > s.fs[1]) ? xmm[1].fs[1] : s.fs[1]; xmm[1].fs[2] = (xmm[1].fs[2] > s.fs[2]) ? xmm[1].fs[2] : s.fs[2]; xmm[1].fs[3] = (xmm[1].fs[3] > s.fs[3]) ? xmm[1].fs[3] : s.fs[3]; }
    /* 0087cf7f: movaps xmmword ptr [eax + edi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edi*4+0x10u), &xmm[1], 16);
    /* 0087cf84: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087cf87: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cf89: jb 0x87cf5f */ if (fC) goto L_0087cf5f;
L_0087cf8b:; BB(0x0087cf8b);
    /* 0087cf8b: cmp edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cf8e: jae 0x87d01a */ if (!fC) goto L_0087d01a;
L_0087cf94:; BB(0x0087cf94);
    /* 0087cf94: mov eax, edi */ r_eax = r_edi;
    /* 0087cf96: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087cf98: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087cf9b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087cf9e: jb 0x87d002 */ if (fC) goto L_0087d002;
L_0087cfa0:; BB(0x0087cfa0);
    /* 0087cfa0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
L_0087cfa3:; BB(0x0087cfa3);
    /* 0087cfa3: movss xmm0, dword ptr [esi + edi*4] */ { u32 v = R32((u32)(r_esi+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087cfa8: maxss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] > s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087cfad: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087cfb2: movss xmm1, dword ptr [esi + edi*4 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087cfb8: maxss xmm1, dword ptr [eax + edi*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = (xmm[1].fs[0] > s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
    /* 0087cfbe: movss dword ptr [eax + edi*4 + 4], xmm1 */ W32((u32)(r_eax+r_edi*4+0x4u), xmm[1].d[0]);
    /* 0087cfc4: movss xmm2, dword ptr [esi + edi*4 + 8] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087cfca: maxss xmm2, dword ptr [eax + edi*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = (xmm[2].fs[0] > s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; }
    /* 0087cfd0: movss dword ptr [eax + edi*4 + 8], xmm2 */ W32((u32)(r_eax+r_edi*4+0x8u), xmm[2].d[0]);
    /* 0087cfd6: movss xmm3, dword ptr [esi + edi*4 + 0xc] */ { u32 v = R32((u32)(r_esi+r_edi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0087cfdc: maxss xmm3, dword ptr [eax + edi*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = (xmm[3].fs[0] > s.fs[0]) ? xmm[3].fs[0] : s.fs[0]; }
    /* 0087cfe2: movss dword ptr [eax + edi*4 + 0xc], xmm3 */ W32((u32)(r_eax+r_edi*4+0xcu), xmm[3].d[0]);
    /* 0087cfe8: movss xmm4, dword ptr [esi + edi*4 + 0x10] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x10u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087cfee: maxss xmm4, dword ptr [eax + edi*4 + 0x10] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4+0x10u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = (xmm[4].fs[0] > s.fs[0]) ? xmm[4].fs[0] : s.fs[0]; }
    /* 0087cff4: movss dword ptr [eax + edi*4 + 0x10], xmm4 */ W32((u32)(r_eax+r_edi*4+0x10u), xmm[4].d[0]);
    /* 0087cffa: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087cffd: cmp edi, 0x32 */ {  u32 a = r_edi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087d000: jbe 0x87cfa3 */ if ((fC||fZ)) goto L_0087cfa3;
L_0087d002:; BB(0x0087d002);
    /* 0087d002: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
L_0087d005:; BB(0x0087d005);
    /* 0087d005: movss xmm0, dword ptr [esi + edi*4] */ { u32 v = R32((u32)(r_esi+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d00a: maxss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] > s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d00f: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087d014: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d015: cmp edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d018: jb 0x87d005 */ if (fC) goto L_0087d005;
L_0087d01a:; BB(0x0087d01a);
    /* 0087d01a: add dword ptr [ebp - 0x70], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffff90u);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087d021: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087d024: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d025: add dword ptr [ebp - 0x74], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffff8cu);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087d02c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d02f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0087d032: jl 0x87cd16 */ if ((fS!=fO)) goto L_0087cd16;
L_0087d038:; BB(0x0087d038);
    /* 0087d038: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087d03a: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087d03d: mov edx, 0xe0 */ r_edx = 0xe0u;
    /* 0087d042: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087d044: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d04a: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0087d04d: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087d050: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_0087d053:; BB(0x0087d053);
    /* 0087d053: lea eax, [ebp - 0x898] */ r_eax = (u32)(r_ebp+0xfffff768u);
    /* 0087d059: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0087d05c: lea eax, [eax + edx] */ r_eax = (u32)(r_eax+r_edx);
    /* 0087d05f: lea ecx, [ebp - 0x898] */ r_ecx = (u32)(r_ebp+0xfffff768u);
    /* 0087d065: mov esi, dword ptr [ebp - 0x70] */ r_esi = R32((u32)(r_ebp+0xffffff90u));
    /* 0087d068: lea ecx, [ecx + esi] */ r_ecx = (u32)(r_ecx+r_esi);
    /* 0087d06b: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0087d06e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087d070: lea edx, [ebp + edx - 0x7b8] */ r_edx = (u32)(r_ebp+r_edx+0xfffff848u);
    /* 0087d077: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 0087d07a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d07c: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0087d07f: jb 0x87e19a */ if (fC) goto L_0087e19a;
L_0087d085:; BB(0x0087d085);
    /* 0087d085: mov esi, 0x38 */ r_esi = 0x38u;
    /* 0087d08a: mov edx, eax */ r_edx = r_eax;
    /* 0087d08c: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087d08f: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087d092: je 0x87d0d5 */ if (fZ) goto L_0087d0d5;
L_0087d094:; BB(0x0087d094);
    /* 0087d094: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0087d097: jne 0x87d15c */ if (!fZ) goto L_0087d15c;
L_0087d09d:; BB(0x0087d09d);
    /* 0087d09d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087d09f: lea ecx, [edx + 0x10] */ r_ecx = (u32)(r_edx+0x10u);
    /* 0087d0a2: mov esi, edi */ r_esi = r_edi;
    /* 0087d0a4: lea edi, [esi + edx + 0x10] */ r_edi = (u32)(r_esi+r_edx+0x10u);
    /* 0087d0a8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087d0ab: mov esi, ecx */ r_esi = r_ecx;
    /* 0087d0ad: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087d0af: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d0b2: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0087d0b5: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0087d0b8: mov edi, dword ptr [ebp - 0x7c] */ r_edi = R32((u32)(r_ebp+0xffffff84u));
L_0087d0bb:; BB(0x0087d0bb);
    /* 0087d0bb: movss xmm0, dword ptr [edx + edi*4] */ { u32 v = R32((u32)(r_edx+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d0c0: minss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d0c5: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087d0ca: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d0cb: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d0cd: jb 0x87d0bb */ if (fC) goto L_0087d0bb;
L_0087d0cf:; BB(0x0087d0cf);
    /* 0087d0cf: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 0087d0d2: mov edi, dword ptr [ebp - 0x78] */ r_edi = R32((u32)(r_ebp+0xffffff88u));
L_0087d0d5:; BB(0x0087d0d5);
    /* 0087d0d5: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0087d0d8: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087d0da: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d0dd: test edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087d0e3: jne 0x87d11c */ if (!fZ) goto L_0087d11c;
L_0087d0e5:; BB(0x0087d0e5);
    /* 0087d0e5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0087d0e8: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
L_0087d0eb:; BB(0x0087d0eb);
    /* 0087d0eb: prefetchnta byte ptr [eax + ecx*4 + 0x40] */ ;
    /* 0087d0f0: movaps xmm0, xmmword ptr [edx + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4), 16); xmm[0] = s; }
    /* 0087d0f4: prefetchnta byte ptr [edx + ecx*4 + 0x40] */ ;
    /* 0087d0f9: minps xmm0, xmmword ptr [eax + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4), 16); xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; xmm[0].fs[1] = (xmm[0].fs[1] < s.fs[1]) ? xmm[0].fs[1] : s.fs[1]; xmm[0].fs[2] = (xmm[0].fs[2] < s.fs[2]) ? xmm[0].fs[2] : s.fs[2]; xmm[0].fs[3] = (xmm[0].fs[3] < s.fs[3]) ? xmm[0].fs[3] : s.fs[3]; }
    /* 0087d0fd: movaps xmmword ptr [eax + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4), &xmm[0], 16);
    /* 0087d101: movaps xmm1, xmmword ptr [edx + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4+0x10u), 16); xmm[1] = s; }
    /* 0087d106: minps xmm1, xmmword ptr [eax + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), 16); xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; xmm[1].fs[1] = (xmm[1].fs[1] < s.fs[1]) ? xmm[1].fs[1] : s.fs[1]; xmm[1].fs[2] = (xmm[1].fs[2] < s.fs[2]) ? xmm[1].fs[2] : s.fs[2]; xmm[1].fs[3] = (xmm[1].fs[3] < s.fs[3]) ? xmm[1].fs[3] : s.fs[3]; }
    /* 0087d10b: movaps xmmword ptr [eax + ecx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), &xmm[1], 16);
    /* 0087d110: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d113: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d115: jb 0x87d0eb */ if (fC) goto L_0087d0eb;
L_0087d117:; BB(0x0087d117);
    /* 0087d117: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0087d11a: jmp 0x87d151 */ goto L_0087d151;
L_0087d11c:; BB(0x0087d11c);
    /* 0087d11c: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0087d11f: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
L_0087d122:; BB(0x0087d122);
    /* 0087d122: movups xmm0, xmmword ptr [edx + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4), 16); xmm[0] = s; }
    /* 0087d126: prefetchnta byte ptr [eax + ecx*4 + 0x40] */ ;
    /* 0087d12b: prefetchnta byte ptr [edx + ecx*4 + 0x40] */ ;
    /* 0087d130: minps xmm0, xmmword ptr [eax + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4), 16); xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; xmm[0].fs[1] = (xmm[0].fs[1] < s.fs[1]) ? xmm[0].fs[1] : s.fs[1]; xmm[0].fs[2] = (xmm[0].fs[2] < s.fs[2]) ? xmm[0].fs[2] : s.fs[2]; xmm[0].fs[3] = (xmm[0].fs[3] < s.fs[3]) ? xmm[0].fs[3] : s.fs[3]; }
    /* 0087d134: movaps xmmword ptr [eax + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4), &xmm[0], 16);
    /* 0087d138: movups xmm1, xmmword ptr [edx + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4+0x10u), 16); xmm[1] = s; }
    /* 0087d13d: minps xmm1, xmmword ptr [eax + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), 16); xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; xmm[1].fs[1] = (xmm[1].fs[1] < s.fs[1]) ? xmm[1].fs[1] : s.fs[1]; xmm[1].fs[2] = (xmm[1].fs[2] < s.fs[2]) ? xmm[1].fs[2] : s.fs[2]; xmm[1].fs[3] = (xmm[1].fs[3] < s.fs[3]) ? xmm[1].fs[3] : s.fs[3]; }
    /* 0087d142: movaps xmmword ptr [eax + ecx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), &xmm[1], 16);
    /* 0087d147: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d14a: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d14c: jb 0x87d122 */ if (fC) goto L_0087d122;
L_0087d14e:; BB(0x0087d14e);
    /* 0087d14e: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
L_0087d151:; BB(0x0087d151);
    /* 0087d151: mov edx, ecx */ r_edx = r_ecx;
    /* 0087d153: cmp edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d156: jae 0x87d1ec */ if (!fC) goto L_0087d1ec;
L_0087d15c:; BB(0x0087d15c);
    /* 0087d15c: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0087d15f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087d161: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d164: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d167: jb 0x87d1d1 */ if (fC) goto L_0087d1d1;
L_0087d169:; BB(0x0087d169);
    /* 0087d169: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0087d16c: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
L_0087d16f:; BB(0x0087d16f);
    /* 0087d16f: movss xmm0, dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d174: minss xmm0, dword ptr [eax + ecx*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ecx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d179: movss dword ptr [eax + ecx*4], xmm0 */ W32((u32)(r_eax+r_ecx*4), xmm[0].d[0]);
    /* 0087d17e: movss xmm1, dword ptr [edx + ecx*4 + 4] */ { u32 v = R32((u32)(r_edx+r_ecx*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087d184: minss xmm1, dword ptr [eax + ecx*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ecx*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
    /* 0087d18a: movss dword ptr [eax + ecx*4 + 4], xmm1 */ W32((u32)(r_eax+r_ecx*4+0x4u), xmm[1].d[0]);
    /* 0087d190: movss xmm2, dword ptr [edx + ecx*4 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087d196: minss xmm2, dword ptr [eax + ecx*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ecx*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = (xmm[2].fs[0] < s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; }
    /* 0087d19c: movss dword ptr [eax + ecx*4 + 8], xmm2 */ W32((u32)(r_eax+r_ecx*4+0x8u), xmm[2].d[0]);
    /* 0087d1a2: movss xmm3, dword ptr [edx + ecx*4 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0087d1a8: minss xmm3, dword ptr [eax + ecx*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ecx*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = (xmm[3].fs[0] < s.fs[0]) ? xmm[3].fs[0] : s.fs[0]; }
    /* 0087d1ae: movss dword ptr [eax + ecx*4 + 0xc], xmm3 */ W32((u32)(r_eax+r_ecx*4+0xcu), xmm[3].d[0]);
    /* 0087d1b4: movss xmm4, dword ptr [edx + ecx*4 + 0x10] */ { u32 v = R32((u32)(r_edx+r_ecx*4+0x10u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087d1ba: minss xmm4, dword ptr [eax + ecx*4 + 0x10] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ecx*4+0x10u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = (xmm[4].fs[0] < s.fs[0]) ? xmm[4].fs[0] : s.fs[0]; }
    /* 0087d1c0: movss dword ptr [eax + ecx*4 + 0x10], xmm4 */ W32((u32)(r_eax+r_ecx*4+0x10u), xmm[4].d[0]);
    /* 0087d1c6: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d1c9: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087d1cc: jbe 0x87d16f */ if ((fC||fZ)) goto L_0087d16f;
L_0087d1ce:; BB(0x0087d1ce);
    /* 0087d1ce: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
L_0087d1d1:; BB(0x0087d1d1);
    /* 0087d1d1: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0087d1d4: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
L_0087d1d7:; BB(0x0087d1d7);
    /* 0087d1d7: movss xmm0, dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d1dc: minss xmm0, dword ptr [eax + ecx*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ecx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d1e1: movss dword ptr [eax + ecx*4], xmm0 */ W32((u32)(r_eax+r_ecx*4), xmm[0].d[0]);
    /* 0087d1e6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d1e7: cmp ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d1ea: jb 0x87d1d7 */ if (fC) goto L_0087d1d7;
L_0087d1ec:; BB(0x0087d1ec);
    /* 0087d1ec: lea esi, [ebp - 0x7f98] */ r_esi = (u32)(r_ebp+0xffff8068u);
    /* 0087d1f2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087d1f5: lea edx, [esi + ecx] */ r_edx = (u32)(r_esi+r_ecx);
    /* 0087d1f8: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0087d1fb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087d1fd: lea edi, [ebp + ecx - 0x7eb8] */ r_edi = (u32)(r_ebp+r_ecx+0xffff8148u);
    /* 0087d204: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d206: jb 0x87e18a */ if (fC) goto L_0087e18a;
L_0087d20c:; BB(0x0087d20c);
    /* 0087d20c: mov ecx, 0x38 */ r_ecx = 0x38u;
    /* 0087d211: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087d214: mov edi, eax */ r_edi = r_eax;
    /* 0087d216: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0087d219: je 0x87d256 */ if (fZ) goto L_0087d256;
L_0087d21b:; BB(0x0087d21b);
    /* 0087d21b: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0087d21e: jne 0x87d2cf */ if (!fZ) goto L_0087d2cf;
L_0087d224:; BB(0x0087d224);
    /* 0087d224: mov ecx, edx */ r_ecx = r_edx;
    /* 0087d226: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d228: lea edx, [ecx + 0x10] */ r_edx = (u32)(r_ecx+0x10u);
    /* 0087d22b: lea edi, [eax + ecx + 0x10] */ r_edi = (u32)(r_eax+r_ecx+0x10u);
    /* 0087d22f: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0087d232: mov ecx, edx */ r_ecx = r_edx;
    /* 0087d234: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d236: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d239: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 0087d23c: mov edi, dword ptr [ebp - 0x7c] */ r_edi = R32((u32)(r_ebp+0xffffff84u));
L_0087d23f:; BB(0x0087d23f);
    /* 0087d23f: movss xmm0, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d244: minss xmm0, dword ptr [edi + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d249: movss dword ptr [edi + esi*4], xmm0 */ W32((u32)(r_edi+r_esi*4), xmm[0].d[0]);
    /* 0087d24e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d24f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d251: jb 0x87d23f */ if (fC) goto L_0087d23f;
L_0087d253:; BB(0x0087d253);
    /* 0087d253: mov edi, dword ptr [ebp - 0x74] */ r_edi = R32((u32)(r_ebp+0xffffff8cu));
L_0087d256:; BB(0x0087d256);
    /* 0087d256: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d259: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d25b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d25e: test edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087d264: jne 0x87d297 */ if (!fZ) goto L_0087d297;
L_0087d266:; BB(0x0087d266);
    /* 0087d266: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
L_0087d269:; BB(0x0087d269);
    /* 0087d269: prefetchnta byte ptr [edx + esi*4 + 0x40] */ ;
    /* 0087d26e: movaps xmm0, xmmword ptr [eax + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4), 16); xmm[0] = s; }
    /* 0087d272: prefetchnta byte ptr [eax + esi*4 + 0x40] */ ;
    /* 0087d277: minps xmm0, xmmword ptr [edx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4), 16); xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; xmm[0].fs[1] = (xmm[0].fs[1] < s.fs[1]) ? xmm[0].fs[1] : s.fs[1]; xmm[0].fs[2] = (xmm[0].fs[2] < s.fs[2]) ? xmm[0].fs[2] : s.fs[2]; xmm[0].fs[3] = (xmm[0].fs[3] < s.fs[3]) ? xmm[0].fs[3] : s.fs[3]; }
    /* 0087d27b: movaps xmmword ptr [edx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[0], 16);
    /* 0087d27f: movaps xmm1, xmmword ptr [eax + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 0087d284: minps xmm1, xmmword ptr [edx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), 16); xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; xmm[1].fs[1] = (xmm[1].fs[1] < s.fs[1]) ? xmm[1].fs[1] : s.fs[1]; xmm[1].fs[2] = (xmm[1].fs[2] < s.fs[2]) ? xmm[1].fs[2] : s.fs[2]; xmm[1].fs[3] = (xmm[1].fs[3] < s.fs[3]) ? xmm[1].fs[3] : s.fs[3]; }
    /* 0087d289: movaps xmmword ptr [edx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[1], 16);
    /* 0087d28e: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d291: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d293: jb 0x87d269 */ if (fC) goto L_0087d269;
L_0087d295:; BB(0x0087d295);
    /* 0087d295: jmp 0x87d2c6 */ goto L_0087d2c6;
L_0087d297:; BB(0x0087d297);
    /* 0087d297: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
L_0087d29a:; BB(0x0087d29a);
    /* 0087d29a: movups xmm0, xmmword ptr [eax + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4), 16); xmm[0] = s; }
    /* 0087d29e: prefetchnta byte ptr [edx + esi*4 + 0x40] */ ;
    /* 0087d2a3: prefetchnta byte ptr [eax + esi*4 + 0x40] */ ;
    /* 0087d2a8: minps xmm0, xmmword ptr [edx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4), 16); xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; xmm[0].fs[1] = (xmm[0].fs[1] < s.fs[1]) ? xmm[0].fs[1] : s.fs[1]; xmm[0].fs[2] = (xmm[0].fs[2] < s.fs[2]) ? xmm[0].fs[2] : s.fs[2]; xmm[0].fs[3] = (xmm[0].fs[3] < s.fs[3]) ? xmm[0].fs[3] : s.fs[3]; }
    /* 0087d2ac: movaps xmmword ptr [edx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[0], 16);
    /* 0087d2b0: movups xmm1, xmmword ptr [eax + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 0087d2b5: minps xmm1, xmmword ptr [edx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), 16); xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; xmm[1].fs[1] = (xmm[1].fs[1] < s.fs[1]) ? xmm[1].fs[1] : s.fs[1]; xmm[1].fs[2] = (xmm[1].fs[2] < s.fs[2]) ? xmm[1].fs[2] : s.fs[2]; xmm[1].fs[3] = (xmm[1].fs[3] < s.fs[3]) ? xmm[1].fs[3] : s.fs[3]; }
    /* 0087d2ba: movaps xmmword ptr [edx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[1], 16);
    /* 0087d2bf: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d2c2: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d2c4: jb 0x87d29a */ if (fC) goto L_0087d29a;
L_0087d2c6:; BB(0x0087d2c6);
    /* 0087d2c6: cmp esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d2c9: jae 0x87d355 */ if (!fC) goto L_0087d355;
L_0087d2cf:; BB(0x0087d2cf);
    /* 0087d2cf: mov edx, esi */ r_edx = r_esi;
    /* 0087d2d1: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087d2d3: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d2d6: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d2d9: jb 0x87d33d */ if (fC) goto L_0087d33d;
L_0087d2db:; BB(0x0087d2db);
    /* 0087d2db: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
L_0087d2de:; BB(0x0087d2de);
    /* 0087d2de: movss xmm0, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d2e3: minss xmm0, dword ptr [edx + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d2e8: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0087d2ed: movss xmm1, dword ptr [eax + esi*4 + 4] */ { u32 v = R32((u32)(r_eax+r_esi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087d2f3: minss xmm1, dword ptr [edx + esi*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_esi*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
    /* 0087d2f9: movss dword ptr [edx + esi*4 + 4], xmm1 */ W32((u32)(r_edx+r_esi*4+0x4u), xmm[1].d[0]);
    /* 0087d2ff: movss xmm2, dword ptr [eax + esi*4 + 8] */ { u32 v = R32((u32)(r_eax+r_esi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087d305: minss xmm2, dword ptr [edx + esi*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_esi*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = (xmm[2].fs[0] < s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; }
    /* 0087d30b: movss dword ptr [edx + esi*4 + 8], xmm2 */ W32((u32)(r_edx+r_esi*4+0x8u), xmm[2].d[0]);
    /* 0087d311: movss xmm3, dword ptr [eax + esi*4 + 0xc] */ { u32 v = R32((u32)(r_eax+r_esi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0087d317: minss xmm3, dword ptr [edx + esi*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_esi*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = (xmm[3].fs[0] < s.fs[0]) ? xmm[3].fs[0] : s.fs[0]; }
    /* 0087d31d: movss dword ptr [edx + esi*4 + 0xc], xmm3 */ W32((u32)(r_edx+r_esi*4+0xcu), xmm[3].d[0]);
    /* 0087d323: movss xmm4, dword ptr [eax + esi*4 + 0x10] */ { u32 v = R32((u32)(r_eax+r_esi*4+0x10u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087d329: minss xmm4, dword ptr [edx + esi*4 + 0x10] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_esi*4+0x10u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = (xmm[4].fs[0] < s.fs[0]) ? xmm[4].fs[0] : s.fs[0]; }
    /* 0087d32f: movss dword ptr [edx + esi*4 + 0x10], xmm4 */ W32((u32)(r_edx+r_esi*4+0x10u), xmm[4].d[0]);
    /* 0087d335: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d338: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087d33b: jbe 0x87d2de */ if ((fC||fZ)) goto L_0087d2de;
L_0087d33d:; BB(0x0087d33d);
    /* 0087d33d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
L_0087d340:; BB(0x0087d340);
    /* 0087d340: movss xmm0, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d345: minss xmm0, dword ptr [edx + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d34a: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0087d34f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087d350: cmp esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d353: jb 0x87d340 */ if (fC) goto L_0087d340;
L_0087d355:; BB(0x0087d355);
    /* 0087d355: add dword ptr [ebp - 0x34], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087d35c: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087d35f: add eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d364: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087d367: add dword ptr [ebp - 0x38], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffffc8u);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087d36e: cmp eax, 0x620 */ {  u32 a = r_eax; u32 b = 0x620u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d373: jl 0x87d053 */ if ((fS!=fO)) goto L_0087d053;
L_0087d379:; BB(0x0087d379);
    /* 0087d379: add dword ptr [ebp - 0x30], 4 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087d37d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087d380: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d381: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087d384: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d387: jl 0x87cae7 */ if ((fS!=fO)) goto L_0087cae7;
L_0087d38d:; BB(0x0087d38d);
    /* 0087d38d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087d38f: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087d395: lea eax, [esi - 5] */ r_eax = (u32)(r_esi+0xfffffffbu);
    /* 0087d398: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0087d39b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087d39e: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d3a1: mov edx, ecx */ r_edx = r_ecx;
    /* 0087d3a3: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0087d3a6: mov eax, ecx */ r_eax = r_ecx;
    /* 0087d3a8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087d3aa: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d3ad: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087d3b0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087d3b2: mov dword ptr [ebp - 0x94], esi */ W32((u32)(r_ebp+0xffffff6cu), r_esi);
    /* 0087d3b8: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0087d3be: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0087d3c4: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0087d3ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_0087d3cd:; BB(0x0087d3cd);
    /* 0087d3cd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0087d3cf: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87d3d4u); f_00859c55();
    /* 0087d3d4: mov ecx, eax */ r_ecx = r_eax;
    /* 0087d3d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d3d9: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087d3df: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087d3e2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d3e5: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 0087d3e8: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0087d3ee: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087d3f4: fst qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 0087d3f7: fld qword ptr [0x99aa48] */ FPUSH(R_F64((u32)(0x99aa48u)));
    /* 0087d3fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087d3ff: fadd qword ptr [0x99aa50] */ ST(0) = ST(0) + R_F64((u32)(0x99aa50u));
    /* 0087d405: fmul qword ptr [0x99aa40] */ ST(0) = ST(0) * R_F64((u32)(0x99aa40u));
    /* 0087d40b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d40e: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87d413u); f_008c9b28();
    /* 0087d413: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d416: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d419: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087d41c: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d41f: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x87d424u); f_008c9b50();
    /* 0087d424: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d427: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087d42d: mov esi, dword ptr [ebp - 0xb8] */ r_esi = R32((u32)(r_ebp+0xffffff48u));
    /* 0087d433: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087d439: mov ecx, edx */ r_ecx = r_edx;
    /* 0087d43b: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087d43e: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d444: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d44a: jle 0x87d46d */ if ((fZ||fS!=fO)) goto L_0087d46d;
L_0087d44c:; BB(0x0087d44c);
    /* 0087d44c: mov eax, edx */ r_eax = r_edx;
    /* 0087d44e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d450: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d456: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087d45a: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087d45f: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087d461: mov edi, eax */ r_edi = r_eax;
    /* 0087d463: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087d465: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d468: cmovge edi, eax */ if ((fS==fO)) { r_edi = r_eax; }
    /* 0087d46b: jmp 0x87d46f */ goto L_0087d46f;
L_0087d46d:; BB(0x0087d46d);
    /* 0087d46d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0087d46f:; BB(0x0087d46f);
    /* 0087d46f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d472: mov dword ptr [ebp - 0xb0], edi */ W32((u32)(r_ebp+0xffffff50u), r_edi);
    /* 0087d478: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087d47e: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087d481: fadd dword ptr [0x99ac08] */ ST(0) = ST(0) + R_F32((u32)(0x99ac08u));
    /* 0087d487: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d48a: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87d48fu); f_0084d1ac();
    /* 0087d48f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d492: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d495: fmul qword ptr [0x99aa30] */ ST(0) = ST(0) * R_F64((u32)(0x99aa30u));
    /* 0087d49b: fadd qword ptr [0x99aa38] */ ST(0) = ST(0) + R_F64((u32)(0x99aa38u));
    /* 0087d4a1: fmul qword ptr [0x99aa28] */ ST(0) = ST(0) * R_F64((u32)(0x99aa28u));
    /* 0087d4a7: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d4aa: call 0x8c9b78 */ r_esp -= 4; W32(r_esp, 0x87d4afu); f_008c9b78();
    /* 0087d4af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d4b2: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087d4b8: mov esi, dword ptr [ebp - 0xb8] */ r_esi = R32((u32)(r_ebp+0xffffff48u));
    /* 0087d4be: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087d4c4: mov ecx, edx */ r_ecx = r_edx;
    /* 0087d4c6: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087d4c9: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d4cf: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d4d5: jle 0x87d4f8 */ if ((fZ||fS!=fO)) goto L_0087d4f8;
L_0087d4d7:; BB(0x0087d4d7);
    /* 0087d4d7: mov eax, edx */ r_eax = r_edx;
    /* 0087d4d9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d4db: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d4e1: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087d4e5: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087d4ea: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087d4ec: mov esi, eax */ r_esi = r_eax;
    /* 0087d4ee: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087d4f0: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d4f3: cmovge esi, eax */ if ((fS==fO)) { r_esi = r_eax; }
    /* 0087d4f6: jmp 0x87d4fa */ goto L_0087d4fa;
L_0087d4f8:; BB(0x0087d4f8);
    /* 0087d4f8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0087d4fa:; BB(0x0087d4fa);
    /* 0087d4fa: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d4fd: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d4fe: mov dword ptr [ebp - 0xb0], edi */ W32((u32)(r_ebp+0xffffff50u), r_edi);
    /* 0087d504: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087d50a: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087d50d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d510: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87d515u); f_0084d1ac();
    /* 0087d515: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d518: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d51b: fmul qword ptr [0x99aa30] */ ST(0) = ST(0) * R_F64((u32)(0x99aa30u));
    /* 0087d521: fadd qword ptr [0x99aa38] */ ST(0) = ST(0) + R_F64((u32)(0x99aa38u));
    /* 0087d527: fmul qword ptr [0x99aa28] */ ST(0) = ST(0) * R_F64((u32)(0x99aa28u));
    /* 0087d52d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d530: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x87d535u); f_008c9b50();
    /* 0087d535: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d538: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087d53e: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0087d544: mov edi, dword ptr [ebp - 0xb4] */ r_edi = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087d54a: mov ecx, edi */ r_ecx = r_edi;
    /* 0087d54c: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087d54f: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d555: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d55b: jle 0x87d57e */ if ((fZ||fS!=fO)) goto L_0087d57e;
L_0087d55d:; BB(0x0087d55d);
    /* 0087d55d: mov eax, edi */ r_eax = r_edi;
    /* 0087d55f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d561: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d567: shld eax, edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_edx; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087d56b: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087d570: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087d572: mov edx, eax */ r_edx = r_eax;
    /* 0087d574: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087d576: cmp edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d579: cmovge edx, eax */ if ((fS==fO)) { r_edx = r_eax; }
    /* 0087d57c: jmp 0x87d580 */ goto L_0087d580;
L_0087d57e:; BB(0x0087d57e);
    /* 0087d57e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0087d580:; BB(0x0087d580);
    /* 0087d580: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087d583: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d585: mov edi, 0 */ r_edi = 0x0u;
    /* 0087d58a: jge 0x87d58e */ if ((fS==fO)) goto L_0087d58e;
L_0087d58c:; BB(0x0087d58c);
    /* 0087d58c: mov esi, ecx */ r_esi = r_ecx;
L_0087d58e:; BB(0x0087d58e);
    /* 0087d58e: cmp esi, 0 */ {  u32 a = r_esi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d591: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0087d596: cmovle esi, edi */ if ((fZ||fS!=fO)) { r_esi = r_edi; }
    /* 0087d599: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d59c: mov edi, 0 */ r_edi = 0x0u;
    /* 0087d5a1: cmovge edx, eax */ if ((fS==fO)) { r_edx = r_eax; }
    /* 0087d5a4: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0087d5a7: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 0087d5ab: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0087d5ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d5b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d5b2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d5b4: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0087d5b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087d5b9: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0087d5bc: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0087d5bf: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0087d5c5: mov dword ptr [ebp - 0x90], esi */ W32((u32)(r_ebp+0xffffff70u), r_esi);
    /* 0087d5cb: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
L_0087d5d1:; BB(0x0087d5d1);
    /* 0087d5d1: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0087d5d6: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87d5dbu); f_00859c55();
    /* 0087d5db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087d5dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087d5df: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087d5e5: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0087d5e8: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 0087d5eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087d5ed: jle 0x87d669 */ if ((fZ||fS!=fO)) goto L_0087d669;
L_0087d5ef:; BB(0x0087d5ef);
    /* 0087d5ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d5f1: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d5f4: jb 0x87d659 */ if (fC) goto L_0087d659;
L_0087d5f6:; BB(0x0087d5f6);
    /* 0087d5f6: mov edx, esi */ r_edx = r_esi;
    /* 0087d5f8: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0087d5fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087d600: je 0x87d634 */ if (fZ) goto L_0087d634;
L_0087d602:; BB(0x0087d602);
    /* 0087d602: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0087d608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087d60a: jne 0x87d659 */ if (!fZ) goto L_0087d659;
L_0087d60c:; BB(0x0087d60c);
    /* 0087d60c: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087d612: mov eax, 0x4479c000 */ r_eax = 0x4479c000u;
    /* 0087d617: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 0087d61a: mov edi, dword ptr [ebp - 0x98] */ r_edi = R32((u32)(r_ebp+0xffffff68u));
    /* 0087d620: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_0087d623:; BB(0x0087d623);
    /* 0087d623: mov dword ptr [esi + ecx*4], eax */ W32((u32)(r_esi+r_ecx*4), r_eax);
    /* 0087d626: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d627: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d629: jb 0x87d623 */ if (fC) goto L_0087d623;
L_0087d62b:; BB(0x0087d62b);
    /* 0087d62b: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087d62e: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
L_0087d634:; BB(0x0087d634);
    /* 0087d634: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0087d637: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087d639: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d63b: movaps xmm0, xmmword ptr [0x99a820] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99a820u), 16); xmm[0] = s; }
    /* 0087d642: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_0087d645:; BB(0x0087d645);
    /* 0087d645: movaps xmmword ptr [eax + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4), &xmm[0], 16);
    /* 0087d649: movaps xmmword ptr [eax + ecx*4 + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), &xmm[0], 16);
    /* 0087d64e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d651: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d653: jb 0x87d645 */ if (fC) goto L_0087d645;
L_0087d655:; BB(0x0087d655);
    /* 0087d655: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d657: jae 0x87d669 */ if (!fC) goto L_0087d669;
L_0087d659:; BB(0x0087d659);
    /* 0087d659: mov eax, 0x4479c000 */ r_eax = 0x4479c000u;
    /* 0087d65e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
L_0087d661:; BB(0x0087d661);
    /* 0087d661: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0087d664: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d665: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087d667: jb 0x87d661 */ if (fC) goto L_0087d661;
L_0087d669:; BB(0x0087d669);
    /* 0087d669: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0087d66f: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0087d675: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d677: jg 0x87e173 */ if ((!fZ&&fS==fO)) goto L_0087e173;
L_0087d67d:; BB(0x0087d67d);
    /* 0087d67d: fld qword ptr [0x99aa48] */ FPUSH(R_F64((u32)(0x99aa48u)));
    /* 0087d683: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0087d686: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d688: fld qword ptr [0x99aa40] */ FPUSH(R_F64((u32)(0x99aa40u)));
    /* 0087d68e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d690: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d692: fld qword ptr [0x99aa18] */ FPUSH(R_F64((u32)(0x99aa18u)));
    /* 0087d698: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d69a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d69c: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087d6a2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d6a4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d6a6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d6a8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087d6ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d6ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d6af: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087d6b1: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0087d6b4: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d6b6: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 0087d6b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087d6bb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087d6bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0087d6bf:; BB(0x0087d6bf);
    /* 0087d6bf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087d6c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d6c3: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087d6c9: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087d6cf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087d6d1: fld qword ptr [0x99aa10] */ FPUSH(R_F64((u32)(0x99aa10u)));
    /* 0087d6d7: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087d6d9: fld qword ptr [0x99aa20] */ FPUSH(R_F64((u32)(0x99aa20u)));
    /* 0087d6df: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087d6e1: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0087d6e4: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0087d6e7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0087d6ea: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0087d6ec: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0087d6ef: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087d6f1: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0087d6f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087d6f6: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0087d6f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087d6fb: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0087d6fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087d700: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0087d703: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087d705:; BB(0x0087d705);
    /* 0087d705: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087d708: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d70b: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087d711: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087d717: fmul qword ptr [ebp - 0x50] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb0u));
    /* 0087d71a: fst qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0));
    /* 0087d71d: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0087d720: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087d722: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087d725: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d728: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87d72du); f_008c9b28();
    /* 0087d72d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d730: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087d733: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087d739: mov esi, dword ptr [ebp - 0xb8] */ r_esi = R32((u32)(r_ebp+0xffffff48u));
    /* 0087d73f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087d745: mov ecx, edx */ r_ecx = r_edx;
    /* 0087d747: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087d74a: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d750: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d756: jle 0x87d779 */ if ((fZ||fS!=fO)) goto L_0087d779;
L_0087d758:; BB(0x0087d758);
    /* 0087d758: mov eax, edx */ r_eax = r_edx;
    /* 0087d75a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d75c: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d762: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087d766: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087d76b: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087d76d: mov esi, eax */ r_esi = r_eax;
    /* 0087d76f: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087d771: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d774: cmovge esi, eax */ if ((fS==fO)) { r_esi = r_eax; }
    /* 0087d777: jmp 0x87d77b */ goto L_0087d77b;
L_0087d779:; BB(0x0087d779);
    /* 0087d779: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0087d77b:; BB(0x0087d77b);
    /* 0087d77b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d77e: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 0087d781: fadd qword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa8u));
    /* 0087d784: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087d787: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087d78a: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87d78fu); f_008c9b28();
    /* 0087d78f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087d792: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087d795: fadd qword ptr [0x99aa08] */ ST(0) = ST(0) + R_F64((u32)(0x99aa08u));
    /* 0087d79b: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087d7a1: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0087d7a7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087d7ad: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087d7b0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0087d7b3: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087d7b6: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d7bc: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d7c2: jle 0x87d7f1 */ if ((fZ||fS!=fO)) goto L_0087d7f1;
L_0087d7c4:; BB(0x0087d7c4);
    /* 0087d7c4: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0087d7c7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087d7ca: mov eax, edx */ r_eax = r_edx;
    /* 0087d7cc: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087d7cf: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d7d1: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d7d7: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087d7db: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087d7e0: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087d7e2: mov ecx, eax */ r_ecx = r_eax;
    /* 0087d7e4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d7e6: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d7e9: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087d7ec: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 0087d7ef: jmp 0x87d7f3 */ goto L_0087d7f3;
L_0087d7f1:; BB(0x0087d7f1);
    /* 0087d7f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087d7f3:; BB(0x0087d7f3);
    /* 0087d7f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087d7f5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087d7f7: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0087d7fd: jge 0x87d801 */ if ((fS==fO)) goto L_0087d801;
L_0087d7ff:; BB(0x0087d7ff);
    /* 0087d7ff: mov esi, eax */ r_esi = r_eax;
L_0087d801:; BB(0x0087d801);
    /* 0087d801: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d803: jl 0x87d807 */ if ((fS!=fO)) goto L_0087d807;
L_0087d805:; BB(0x0087d805);
    /* 0087d805: mov esi, edx */ r_esi = r_edx;
L_0087d807:; BB(0x0087d807);
    /* 0087d807: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d809: cmovl edi, esi */ if ((fS!=fO)) { r_edi = r_esi; }
    /* 0087d80c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087d80e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087d810: jge 0x87d814 */ if ((fS==fO)) goto L_0087d814;
L_0087d812:; BB(0x0087d812);
    /* 0087d812: mov ecx, esi */ r_ecx = r_esi;
L_0087d814:; BB(0x0087d814);
    /* 0087d814: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d816: cmovge ecx, edx */ if ((fS==fO)) { r_ecx = r_edx; }
    /* 0087d819: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d81b: jge 0x87d8f3 */ if ((fS==fO)) goto L_0087d8f3;
L_0087d821:; BB(0x0087d821);
    /* 0087d821: mov eax, ecx */ r_eax = r_ecx;
    /* 0087d823: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087d825: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d828: jl 0x87d8bf */ if ((fS!=fO)) goto L_0087d8bf;
L_0087d82e:; BB(0x0087d82e);
    /* 0087d82e: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087d831: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087d834: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d836: add edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d839: lea eax, [ecx - 5] */ r_eax = (u32)(r_ecx+0xfffffffbu);
    /* 0087d83c: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087d842: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0087d845: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
L_0087d848:; BB(0x0087d848);
    /* 0087d848: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d84a: jge 0x87e143 */ if ((fS==fO)) goto L_0087e143;
L_0087d850:; BB(0x0087d850);
    /* 0087d850: movss xmm0, dword ptr [ebp + edx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d859: minss xmm0, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d85e: movss dword ptr [ecx + edi*4], xmm0 */ W32((u32)(r_ecx+r_edi*4), xmm[0].d[0]);
    /* 0087d863: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d864: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d866: jge 0x87e113 */ if ((fS==fO)) goto L_0087e113;
L_0087d86c:; BB(0x0087d86c);
    /* 0087d86c: movss xmm0, dword ptr [ebp + edx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d875: minss xmm0, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d87a: movss dword ptr [ecx + edi*4], xmm0 */ W32((u32)(r_ecx+r_edi*4), xmm[0].d[0]);
    /* 0087d87f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d880: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d882: jge 0x87e0e3 */ if ((fS==fO)) goto L_0087e0e3;
L_0087d888:; BB(0x0087d888);
    /* 0087d888: movss xmm0, dword ptr [ebp + edx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d891: minss xmm0, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d896: movss dword ptr [ecx + edi*4], xmm0 */ W32((u32)(r_ecx+r_edi*4), xmm[0].d[0]);
    /* 0087d89b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d89c: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d89e: jge 0x87e0b3 */ if ((fS==fO)) goto L_0087e0b3;
L_0087d8a4:; BB(0x0087d8a4);
    /* 0087d8a4: movss xmm0, dword ptr [ebp + edx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d8ad: minss xmm0, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d8b2: movss dword ptr [ecx + edi*4], xmm0 */ W32((u32)(r_ecx+r_edi*4), xmm[0].d[0]);
    /* 0087d8b7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d8b8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d8ba: jle 0x87d848 */ if ((fZ||fS!=fO)) goto L_0087d848;
L_0087d8bc:; BB(0x0087d8bc);
    /* 0087d8bc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
L_0087d8bf:; BB(0x0087d8bf);
    /* 0087d8bf: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087d8c2: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0087d8c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d8c7: add eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d8ca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087d8cd: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
L_0087d8d3:; BB(0x0087d8d3);
    /* 0087d8d3: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d8d5: jge 0x87e083 */ if ((fS==fO)) goto L_0087e083;
L_0087d8db:; BB(0x0087d8db);
    /* 0087d8db: movss xmm0, dword ptr [ebp + eax - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d8e4: minss xmm0, dword ptr [edx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d8e9: movss dword ptr [edx + edi*4], xmm0 */ W32((u32)(r_edx+r_edi*4), xmm[0].d[0]);
    /* 0087d8ee: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d8ef: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d8f1: jl 0x87d8d3 */ if ((fS!=fO)) goto L_0087d8d3;
L_0087d8f3:; BB(0x0087d8f3);
    /* 0087d8f3: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087d8f6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d8f7: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d8fa: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087d8fd: jl 0x87d705 */ if ((fS!=fO)) goto L_0087d705;
L_0087d903:; BB(0x0087d903);
    /* 0087d903: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087d906: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087d909: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087d90f: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087d912: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d914: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087d917: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087d91a: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087d920: jge 0x87d9c5 */ if ((fS==fO)) goto L_0087d9c5;
L_0087d926:; BB(0x0087d926);
    /* 0087d926: mov ecx, esi */ r_ecx = r_esi;
    /* 0087d928: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087d92a: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d92d: jl 0x87e078 */ if ((fS!=fO)) goto L_0087e078;
L_0087d933:; BB(0x0087d933);
    /* 0087d933: lea ecx, [edx + 0xdc] */ r_ecx = (u32)(r_edx+0xdcu);
    /* 0087d939: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087d93c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0087d93f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_0087d942:; BB(0x0087d942);
    /* 0087d942: movss xmm0, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d94b: minss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d950: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087d955: movss xmm1, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087d95e: minss xmm1, dword ptr [eax + edi*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
    /* 0087d964: movss dword ptr [eax + edi*4 + 4], xmm1 */ W32((u32)(r_eax+r_edi*4+0x4u), xmm[1].d[0]);
    /* 0087d96a: movss xmm2, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087d973: minss xmm2, dword ptr [eax + edi*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = (xmm[2].fs[0] < s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; }
    /* 0087d979: movss dword ptr [eax + edi*4 + 8], xmm2 */ W32((u32)(r_eax+r_edi*4+0x8u), xmm[2].d[0]);
    /* 0087d97f: movss xmm3, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0087d988: minss xmm3, dword ptr [eax + edi*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = (xmm[3].fs[0] < s.fs[0]) ? xmm[3].fs[0] : s.fs[0]; }
    /* 0087d98e: movss dword ptr [eax + edi*4 + 0xc], xmm3 */ W32((u32)(r_eax+r_edi*4+0xcu), xmm[3].d[0]);
    /* 0087d994: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d997: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d999: jle 0x87d942 */ if ((fZ||fS!=fO)) goto L_0087d942;
L_0087d99b:; BB(0x0087d99b);
    /* 0087d99b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087d99e: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
L_0087d9a4:; BB(0x0087d9a4);
    /* 0087d9a4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0087d9a7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_0087d9aa:; BB(0x0087d9aa);
    /* 0087d9aa: movss xmm0, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087d9b3: minss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087d9b8: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087d9bd: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087d9be: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d9c0: jl 0x87d9aa */ if ((fS!=fO)) goto L_0087d9aa;
L_0087d9c2:; BB(0x0087d9c2);
    /* 0087d9c2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_0087d9c5:; BB(0x0087d9c5);
    /* 0087d9c5: add edx, 0x700 */ {  u32 a = r_edx; u32 b = 0x700u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087d9cb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087d9cc: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0087d9d2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d9d4: jle 0x87d6bf */ if ((fZ||fS!=fO)) goto L_0087d6bf;
L_0087d9da:; BB(0x0087d9da);
    /* 0087d9da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087d9dc: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087d9df: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0087d9e1:; BB(0x0087d9e1);
    /* 0087d9e1: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0087d9e4: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087d9e7: jl 0x87dc89 */ if ((fS!=fO)) goto L_0087dc89;
L_0087d9ed:; BB(0x0087d9ed);
    /* 0087d9ed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087d9ef: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
L_0087d9f2:; BB(0x0087d9f2);
    /* 0087d9f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087d9f4: mov edx, 0xc479c000 */ r_edx = 0xc479c000u;
    /* 0087d9f9: mov ecx, 0xc479c000 */ r_ecx = 0xc479c000u;
    /* 0087d9fe: fadd qword ptr [0x99aa00] */ ST(0) = ST(0) + R_F64((u32)(0x99aa00u));
    /* 0087da04: mov esi, eax */ r_esi = r_eax;
    /* 0087da06: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 0087da09: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087da0b: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0087da0e: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0087da11: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
L_0087da14:; BB(0x0087da14);
    /* 0087da14: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087da17: mov dword ptr [ebp - 0xb0], esi */ W32((u32)(r_ebp+0xffffff50u), r_esi);
    /* 0087da1d: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087da23: fmul qword ptr [ebp - 0x50] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb0u));
    /* 0087da26: fadd qword ptr [ebp - 0x68] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff98u));
    /* 0087da29: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087da2c: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087da2f: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87da34u); f_008c9b28();
    /* 0087da34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087da37: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087da3a: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087da40: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0087da46: mov edi, dword ptr [ebp - 0xb4] */ r_edi = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087da4c: mov ecx, edi */ r_ecx = r_edi;
    /* 0087da4e: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087da51: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087da57: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087da5d: jle 0x87da81 */ if ((fZ||fS!=fO)) goto L_0087da81;
L_0087da5f:; BB(0x0087da5f);
    /* 0087da5f: mov edx, edi */ r_edx = r_edi;
    /* 0087da61: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087da63: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087da69: shld edx, eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087da6d: or edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087da73: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0087da75: mov eax, edx */ r_eax = r_edx;
    /* 0087da77: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087da79: cmp edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087da7c: cmovge eax, edx */ if ((fS==fO)) { r_eax = r_edx; }
    /* 0087da7f: jmp 0x87da83 */ goto L_0087da83;
L_0087da81:; BB(0x0087da81);
    /* 0087da81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0087da83:; BB(0x0087da83);
    /* 0087da83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087da85: jl 0x87df95 */ if ((fS!=fO)) goto L_0087df95;
L_0087da8b:; BB(0x0087da8b);
    /* 0087da8b: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0087da8e: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0087da94: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087da96: jl 0x87dab5 */ if ((fS!=fO)) goto L_0087dab5;
L_0087da98:; BB(0x0087da98);
    /* 0087da98: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087da9e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087daa1: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 0087daa4: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087daa7: mov edi, dword ptr [edx + edi*4] */ r_edi = R32((u32)(r_edx+r_edi*4));
    /* 0087daaa: mov edx, 0xc479c000 */ r_edx = 0xc479c000u;
    /* 0087daaf: mov dword ptr [edi + ecx*2 + 8], edx */ W32((u32)(r_edi+r_ecx*2+0x8u), r_edx);
    /* 0087dab3: jmp 0x87dad1 */ goto L_0087dad1;
L_0087dab5:; BB(0x0087dab5);
    /* 0087dab5: mov edi, dword ptr [ebp - 0xa4] */ r_edi = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087dabb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087dabe: mov edx, dword ptr [edi + edx*4] */ r_edx = R32((u32)(r_edi+r_edx*4));
    /* 0087dac1: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087dac4: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 0087dac7: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087daca: mov edi, dword ptr [edi + eax*4] */ r_edi = R32((u32)(r_edi+r_eax*4));
    /* 0087dacd: mov dword ptr [edx + ecx*2 + 8], edi */ W32((u32)(r_edx+r_ecx*2+0x8u), r_edi);
L_0087dad1:; BB(0x0087dad1);
    /* 0087dad1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087dad2: cmp esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dad5: jl 0x87da14 */ if ((fS!=fO)) goto L_0087da14;
L_0087dadb:; BB(0x0087dadb);
    /* 0087dadb: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087dade: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087dae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = 0; }
    /* 0087dae6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087dae9: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087daef: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0087daf2: mov ecx, dword ptr [edx + edi*4] */ r_ecx = R32((u32)(r_edx+r_edi*4));
    /* 0087daf5: movss xmm0, dword ptr [0x99abfc] */ { u32 v = R32((u32)(0x99abfcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087dafd: movss xmm1, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db02: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db05: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db0b:; BB(0x0087db0b);
    /* 0087db0b: mov eax, 1 */ r_eax = 0x1u;
    /* 0087db10: movss xmm1, dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db15: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db18: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db1e:; BB(0x0087db1e);
    /* 0087db1e: mov eax, 2 */ r_eax = 0x2u;
    /* 0087db23: movss xmm1, dword ptr [ecx + 0x10] */ { u32 v = R32((u32)(r_ecx+0x10u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db28: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db2b: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db31:; BB(0x0087db31);
    /* 0087db31: mov eax, 3 */ r_eax = 0x3u;
    /* 0087db36: movss xmm1, dword ptr [ecx + 0x14] */ { u32 v = R32((u32)(r_ecx+0x14u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db3b: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db3e: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db44:; BB(0x0087db44);
    /* 0087db44: mov eax, 4 */ r_eax = 0x4u;
    /* 0087db49: movss xmm1, dword ptr [ecx + 0x18] */ { u32 v = R32((u32)(r_ecx+0x18u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db4e: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db51: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db57:; BB(0x0087db57);
    /* 0087db57: mov eax, 5 */ r_eax = 0x5u;
    /* 0087db5c: movss xmm1, dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db61: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db64: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db6a:; BB(0x0087db6a);
    /* 0087db6a: mov eax, 6 */ r_eax = 0x6u;
    /* 0087db6f: movss xmm1, dword ptr [ecx + 0x20] */ { u32 v = R32((u32)(r_ecx+0x20u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db74: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db77: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db7d:; BB(0x0087db7d);
    /* 0087db7d: mov eax, 7 */ r_eax = 0x7u;
    /* 0087db82: movss xmm1, dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db87: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db8a: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db90:; BB(0x0087db90);
    /* 0087db90: mov eax, 8 */ r_eax = 0x8u;
    /* 0087db95: movss xmm1, dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087db9a: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087db9d: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087db9f:; BB(0x0087db9f);
    /* 0087db9f: mov eax, 9 */ r_eax = 0x9u;
    /* 0087dba4: movss xmm1, dword ptr [ecx + 0x2c] */ { u32 v = R32((u32)(r_ecx+0x2cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dba9: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dbac: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087dbae:; BB(0x0087dbae);
    /* 0087dbae: mov eax, 0xa */ r_eax = 0xau;
    /* 0087dbb3: movss xmm1, dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dbb8: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dbbb: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087dbbd:; BB(0x0087dbbd);
    /* 0087dbbd: mov eax, 0xb */ r_eax = 0xbu;
    /* 0087dbc2: movss xmm1, dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dbc7: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dbca: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087dbcc:; BB(0x0087dbcc);
    /* 0087dbcc: mov eax, 0xc */ r_eax = 0xcu;
    /* 0087dbd1: movss xmm1, dword ptr [ecx + 0x38] */ { u32 v = R32((u32)(r_ecx+0x38u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dbd6: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dbd9: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087dbdb:; BB(0x0087dbdb);
    /* 0087dbdb: mov eax, 0xd */ r_eax = 0xdu;
    /* 0087dbe0: movss xmm1, dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dbe5: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dbe8: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087dbea:; BB(0x0087dbea);
    /* 0087dbea: mov eax, 0xe */ r_eax = 0xeu;
    /* 0087dbef: movss xmm1, dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dbf4: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dbf7: ja 0x87dc0e */ if ((!fC&&!fZ)) goto L_0087dc0e;
L_0087dbf9:; BB(0x0087dbf9);
    /* 0087dbf9: movss xmm3, dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0087dbfe: mov edx, 0xf */ r_edx = 0xfu;
    /* 0087dc03: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0087dc08: comiss xmm3, xmm0 */ { XMM s = xmm[0]; float a = xmm[3].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dc0b: cmova eax, edx */ if ((!fC&&!fZ)) { r_eax = r_edx; }
L_0087dc0e:; BB(0x0087dc0e);
    /* 0087dc0e: cvtsi2ss xmm3, eax */ xmm[3].fs[0] = (float)(i32)(r_eax);
    /* 0087dc12: mov eax, 0x37 */ r_eax = 0x37u;
    /* 0087dc17: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087dc1d: movss dword ptr [ecx], xmm3 */ W32((u32)(r_ecx), xmm[3].d[0]);
    /* 0087dc21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087dc24: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0087dc27: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
L_0087dc2a:; BB(0x0087dc2a);
    /* 0087dc2a: movss xmm1, dword ptr [edx + eax*4 + 8] */ { u32 v = R32((u32)(r_edx+r_eax*4+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dc30: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dc33: ja 0x87dc47 */ if ((!fC&&!fZ)) goto L_0087dc47;
L_0087dc35:; BB(0x0087dc35);
    /* 0087dc35: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0087dc36: movss xmm1, dword ptr [edx + eax*4 + 8] */ { u32 v = R32((u32)(r_edx+r_eax*4+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087dc3c: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0087dc3f: ja 0x87dc47 */ if ((!fC&&!fZ)) goto L_0087dc47;
L_0087dc41:; BB(0x0087dc41);
    /* 0087dc41: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087dc42: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087dc45: jg 0x87dc2a */ if ((!fZ&&fS==fO)) goto L_0087dc2a;
L_0087dc47:; BB(0x0087dc47);
    /* 0087dc47: cvtsi2ss xmm0, eax */ xmm[0].fs[0] = (float)(i32)(r_eax);
    /* 0087dc4b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087dc4c: movss dword ptr [edx + 4], xmm0 */ W32((u32)(r_edx+0x4u), xmm[0].d[0]);
    /* 0087dc51: add dword ptr [ebp - 0x74], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffff8cu);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087dc58: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dc5b: jl 0x87d5d1 */ if ((fS!=fO)) goto L_0087d5d1;
L_0087dc61:; BB(0x0087dc61);
    /* 0087dc61: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0087dc64: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087dc67: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0087dc6a: jl 0x87d3cd */ if ((fS!=fO)) goto L_0087d3cd;
L_0087dc70:; BB(0x0087dc70);
    /* 0087dc70: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087dc76: mov esi, dword ptr [ebp - 0x88] */ r_esi = R32((u32)(r_ebp+0xffffff78u));
    /* 0087dc7c: mov edi, dword ptr [ebp - 0x84] */ r_edi = R32((u32)(r_ebp+0xffffff7cu));
    /* 0087dc82: mov esp, ebp */ r_esp = r_ebp;
    /* 0087dc84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087dc85: mov esp, ebx */ r_esp = r_ebx;
    /* 0087dc87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087dc88: ret  */ FN_RET(0x0087ca38); r_esp += 4; return;
L_0087dc89:; BB(0x0087dc89);
    /* 0087dc89: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087dc8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087dc8d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0087dc90: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087dc93: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0087dc96: lea eax, [ecx + eax] */ r_eax = (u32)(r_ecx+r_eax);
    /* 0087dc99: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087dc9b: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 0087dc9e: fld qword ptr [0x99aa20] */ FPUSH(R_F64((u32)(0x99aa20u)));
    /* 0087dca4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087dca6: fld qword ptr [0x99aa10] */ FPUSH(R_F64((u32)(0x99aa10u)));
    /* 0087dcac: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087dcae: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087dcb4: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087dcb7: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 0087dcba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087dcbc: mov edi, edx */ r_edi = r_edx;
    /* 0087dcbe: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0087dcc1: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0087dcc4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087dcc6: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0087dcc9: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0087dccc: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
L_0087dccf:; BB(0x0087dccf);
    /* 0087dccf: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087dcd2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087dcd5: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087dcdb: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 0087dce1: fmul qword ptr [ebp - 0x50] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb0u));
    /* 0087dce4: fst qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 0087dce7: fld qword ptr [ebp - 0x58] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa8u)));
    /* 0087dcea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087dcec: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087dcef: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087dcf2: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87dcf7u); f_008c9b28();
    /* 0087dcf7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087dcfa: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087dcfd: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087dd03: mov esi, dword ptr [ebp - 0xb8] */ r_esi = R32((u32)(r_ebp+0xffffff48u));
    /* 0087dd09: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087dd0f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0087dd12: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087dd15: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087dd1b: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dd21: jle 0x87dd48 */ if ((fZ||fS!=fO)) goto L_0087dd48;
L_0087dd23:; BB(0x0087dd23);
    /* 0087dd23: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087dd26: mov edx, eax */ r_edx = r_eax;
    /* 0087dd28: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087dd2a: shld edx, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087dd2e: or edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0087dd34: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087dd3a: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0087dd3c: mov esi, edx */ r_esi = r_edx;
    /* 0087dd3e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087dd40: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dd43: cmovge esi, edx */ if ((fS==fO)) { r_esi = r_edx; }
    /* 0087dd46: jmp 0x87dd4a */ goto L_0087dd4a;
L_0087dd48:; BB(0x0087dd48);
    /* 0087dd48: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0087dd4a:; BB(0x0087dd4a);
    /* 0087dd4a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087dd4d: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0087dd50: fadd qword ptr [ebp - 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa0u));
    /* 0087dd53: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087dd56: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087dd59: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87dd5eu); f_008c9b28();
    /* 0087dd5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087dd61: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0087dd64: fadd qword ptr [0x99aa08] */ ST(0) = ST(0) + R_F64((u32)(0x99aa08u));
    /* 0087dd6a: fstp qword ptr [ebp - 0xb8] */ W_F64((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0087dd70: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0087dd76: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0087dd7c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0087dd7f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0087dd82: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087dd85: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087dd8b: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dd91: jle 0x87ddc0 */ if ((fZ||fS!=fO)) goto L_0087ddc0;
L_0087dd93:; BB(0x0087dd93);
    /* 0087dd93: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0087dd96: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087dd99: mov eax, edx */ r_eax = r_edx;
    /* 0087dd9b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087dd9e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087dda0: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087dda6: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087ddaa: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087ddaf: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087ddb1: mov ecx, eax */ r_ecx = r_eax;
    /* 0087ddb3: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ddb5: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ddb8: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087ddbb: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 0087ddbe: jmp 0x87ddc2 */ goto L_0087ddc2;
L_0087ddc0:; BB(0x0087ddc0);
    /* 0087ddc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087ddc2:; BB(0x0087ddc2);
    /* 0087ddc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087ddc4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ddc6: jge 0x87ddca */ if ((fS==fO)) goto L_0087ddca;
L_0087ddc8:; BB(0x0087ddc8);
    /* 0087ddc8: mov esi, eax */ r_esi = r_eax;
L_0087ddca:; BB(0x0087ddca);
    /* 0087ddca: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 0087ddd0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ddd2: jl 0x87ddd6 */ if ((fS!=fO)) goto L_0087ddd6;
L_0087ddd4:; BB(0x0087ddd4);
    /* 0087ddd4: mov esi, eax */ r_esi = r_eax;
L_0087ddd6:; BB(0x0087ddd6);
    /* 0087ddd6: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ddd8: cmovl edi, esi */ if ((fS!=fO)) { r_edi = r_esi; }
    /* 0087dddb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087dddd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087dddf: jge 0x87dde3 */ if ((fS==fO)) goto L_0087dde3;
L_0087dde1:; BB(0x0087dde1);
    /* 0087dde1: mov ecx, esi */ r_ecx = r_esi;
L_0087dde3:; BB(0x0087dde3);
    /* 0087dde3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dde5: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 0087dde8: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ddea: jge 0x87dec8 */ if ((fS==fO)) goto L_0087dec8;
L_0087ddf0:; BB(0x0087ddf0);
    /* 0087ddf0: mov eax, ecx */ r_eax = r_ecx;
    /* 0087ddf2: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087ddf4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ddf7: jl 0x87de8e */ if ((fS!=fO)) goto L_0087de8e;
L_0087ddfd:; BB(0x0087ddfd);
    /* 0087ddfd: lea esi, [ecx - 5] */ r_esi = (u32)(r_ecx+0xfffffffbu);
    /* 0087de00: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087de03: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0087de09: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0087de0c:; BB(0x0087de0c);
    /* 0087de0c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087de0e: jge 0x87e051 */ if ((fS==fO)) goto L_0087e051;
L_0087de14:; BB(0x0087de14);
    /* 0087de14: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087de17: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 0087de1a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087de1c: add ecx, dword ptr [ebp - 0x70] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087de1f: movss xmm0, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087de28: minss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087de2d: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087de32: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087de33: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087de35: jge 0x87e02a */ if ((fS==fO)) goto L_0087e02a;
L_0087de3b:; BB(0x0087de3b);
    /* 0087de3b: movss xmm0, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087de44: minss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087de49: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087de4e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087de4f: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087de51: jge 0x87e003 */ if ((fS==fO)) goto L_0087e003;
L_0087de57:; BB(0x0087de57);
    /* 0087de57: movss xmm0, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087de60: minss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087de65: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087de6a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087de6b: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087de6d: jge 0x87dfdc */ if ((fS==fO)) goto L_0087dfdc;
L_0087de73:; BB(0x0087de73);
    /* 0087de73: movss xmm0, dword ptr [ebp + ecx - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_ecx+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087de7c: minss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087de81: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 0087de86: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087de87: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087de89: jle 0x87de0c */ if ((fZ||fS!=fO)) goto L_0087de0c;
L_0087de8b:; BB(0x0087de8b);
    /* 0087de8b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_0087de8e:; BB(0x0087de8e);
    /* 0087de8e: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0087de91: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087de94: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087de97: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
L_0087de9d:; BB(0x0087de9d);
    /* 0087de9d: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087de9f: jge 0x87dfb5 */ if ((fS==fO)) goto L_0087dfb5;
L_0087dea5:; BB(0x0087dea5);
    /* 0087dea5: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0087dea8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087deaa: add esi, dword ptr [ebp - 0x70] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087dead: movss xmm0, dword ptr [ebp + esi - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_esi+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087deb6: minss xmm0, dword ptr [edx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087debb: movss dword ptr [edx + edi*4], xmm0 */ W32((u32)(r_edx+r_edi*4), xmm[0].d[0]);
    /* 0087dec0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087dec1: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087dec4: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dec6: jl 0x87de9d */ if ((fS!=fO)) goto L_0087de9d;
L_0087dec8:; BB(0x0087dec8);
    /* 0087dec8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087decb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087decc: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087decf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087ded2: jl 0x87dccf */ if ((fS!=fO)) goto L_0087dccf;
L_0087ded8:; BB(0x0087ded8);
    /* 0087ded8: mov edx, edi */ r_edx = r_edi;
    /* 0087deda: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087dedd: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087dee0: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087dee6: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dee8: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087deeb: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087deee: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087def1: jge 0x87d9f2 */ if ((fS==fO)) goto L_0087d9f2;
L_0087def7:; BB(0x0087def7);
    /* 0087def7: mov ecx, esi */ r_ecx = r_esi;
    /* 0087def9: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087defb: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087defe: jl 0x87df8e */ if ((fS!=fO)) goto L_0087df8e;
L_0087df04:; BB(0x0087df04);
    /* 0087df04: add eax, 0xdc */ {  u32 a = r_eax; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087df09: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087df0c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
L_0087df0f:; BB(0x0087df0f);
    /* 0087df0f: movss xmm0, dword ptr [ebp + eax - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087df18: minss xmm0, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087df1d: movss dword ptr [ecx + edx*4], xmm0 */ W32((u32)(r_ecx+r_edx*4), xmm[0].d[0]);
    /* 0087df22: movss xmm1, dword ptr [ebp + eax - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffff8068u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087df2b: minss xmm1, dword ptr [ecx + edx*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = (xmm[1].fs[0] < s.fs[0]) ? xmm[1].fs[0] : s.fs[0]; }
    /* 0087df31: movss dword ptr [ecx + edx*4 + 4], xmm1 */ W32((u32)(r_ecx+r_edx*4+0x4u), xmm[1].d[0]);
    /* 0087df37: movss xmm2, dword ptr [ebp + eax - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffff8068u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087df40: minss xmm2, dword ptr [ecx + edx*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = (xmm[2].fs[0] < s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; }
    /* 0087df46: movss dword ptr [ecx + edx*4 + 8], xmm2 */ W32((u32)(r_ecx+r_edx*4+0x8u), xmm[2].d[0]);
    /* 0087df4c: movss xmm3, dword ptr [ebp + eax - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffff8068u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0087df55: minss xmm3, dword ptr [ecx + edx*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = (xmm[3].fs[0] < s.fs[0]) ? xmm[3].fs[0] : s.fs[0]; }
    /* 0087df5b: movss dword ptr [ecx + edx*4 + 0xc], xmm3 */ W32((u32)(r_ecx+r_edx*4+0xcu), xmm[3].d[0]);
    /* 0087df61: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087df64: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087df66: jle 0x87df0f */ if ((fZ||fS!=fO)) goto L_0087df0f;
L_0087df68:; BB(0x0087df68);
    /* 0087df68: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
L_0087df6e:; BB(0x0087df6e);
    /* 0087df6e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
L_0087df71:; BB(0x0087df71);
    /* 0087df71: movss xmm0, dword ptr [ebp + eax - 0x7f98] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffff8068u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087df7a: minss xmm0, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = (xmm[0].fs[0] < s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087df7f: movss dword ptr [ecx + edx*4], xmm0 */ W32((u32)(r_ecx+r_edx*4), xmm[0].d[0]);
    /* 0087df84: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087df85: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087df87: jl 0x87df71 */ if ((fS!=fO)) goto L_0087df71;
L_0087df89:; BB(0x0087df89);
    /* 0087df89: jmp 0x87d9f2 */ goto L_0087d9f2;
L_0087df8e:; BB(0x0087df8e);
    /* 0087df8e: add eax, 0xdc */ {  u32 a = r_eax; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087df93: jmp 0x87df6e */ goto L_0087df6e;
L_0087df95:; BB(0x0087df95);
    /* 0087df95: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0087df9b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087df9e: mov edi, dword ptr [edx + ecx*4] */ r_edi = R32((u32)(r_edx+r_ecx*4));
    /* 0087dfa1: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0087dfa4: mov ecx, dword ptr [edi + edx*4] */ r_ecx = R32((u32)(r_edi+r_edx*4));
    /* 0087dfa7: mov edx, 0xc479c000 */ r_edx = 0xc479c000u;
    /* 0087dfac: mov dword ptr [ecx + esi*4 + 8], edx */ W32((u32)(r_ecx+r_esi*4+0x8u), r_edx);
    /* 0087dfb0: jmp 0x87dad1 */ goto L_0087dad1;
L_0087dfb5:; BB(0x0087dfb5);
    /* 0087dfb5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087dfb8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087dfb9: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dfbc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087dfbf: jl 0x87dccf */ if ((fS!=fO)) goto L_0087dccf;
L_0087dfc5:; BB(0x0087dfc5);
    /* 0087dfc5: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087dfc8: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087dfce: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087dfd1: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087dfd4: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087dfd7: jmp 0x87d9f2 */ goto L_0087d9f2;
L_0087dfdc:; BB(0x0087dfdc);
    /* 0087dfdc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087dfdf: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087dfe0: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087dfe3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087dfe6: jl 0x87dccf */ if ((fS!=fO)) goto L_0087dccf;
L_0087dfec:; BB(0x0087dfec);
    /* 0087dfec: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087dfef: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087dff5: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087dff8: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087dffb: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087dffe: jmp 0x87d9f2 */ goto L_0087d9f2;
L_0087e003:; BB(0x0087e003);
    /* 0087e003: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e006: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e007: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e00a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087e00d: jl 0x87dccf */ if ((fS!=fO)) goto L_0087dccf;
L_0087e013:; BB(0x0087e013);
    /* 0087e013: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087e016: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e01c: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e01f: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e022: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e025: jmp 0x87d9f2 */ goto L_0087d9f2;
L_0087e02a:; BB(0x0087e02a);
    /* 0087e02a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e02d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e02e: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e031: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087e034: jl 0x87dccf */ if ((fS!=fO)) goto L_0087dccf;
L_0087e03a:; BB(0x0087e03a);
    /* 0087e03a: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087e03d: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e043: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e046: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e049: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e04c: jmp 0x87d9f2 */ goto L_0087d9f2;
L_0087e051:; BB(0x0087e051);
    /* 0087e051: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e054: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e055: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e058: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087e05b: jl 0x87dccf */ if ((fS!=fO)) goto L_0087dccf;
L_0087e061:; BB(0x0087e061);
    /* 0087e061: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087e064: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e06a: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e06d: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e070: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e073: jmp 0x87d9f2 */ goto L_0087d9f2;
L_0087e078:; BB(0x0087e078);
    /* 0087e078: lea ecx, [edx + 0xdc] */ r_ecx = (u32)(r_edx+0xdcu);
    /* 0087e07e: jmp 0x87d9a4 */ goto L_0087d9a4;
L_0087e083:; BB(0x0087e083);
    /* 0087e083: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087e086: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e087: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e08a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087e08d: jl 0x87d705 */ if ((fS!=fO)) goto L_0087d705;
L_0087e093:; BB(0x0087e093);
    /* 0087e093: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087e096: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087e099: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e09f: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e0a2: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e0a5: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e0a8: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087e0ae: jmp 0x87d9c5 */ goto L_0087d9c5;
L_0087e0b3:; BB(0x0087e0b3);
    /* 0087e0b3: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087e0b6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e0b7: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e0ba: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087e0bd: jl 0x87d705 */ if ((fS!=fO)) goto L_0087d705;
L_0087e0c3:; BB(0x0087e0c3);
    /* 0087e0c3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087e0c6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087e0c9: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e0cf: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e0d2: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e0d5: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e0d8: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087e0de: jmp 0x87d9c5 */ goto L_0087d9c5;
L_0087e0e3:; BB(0x0087e0e3);
    /* 0087e0e3: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087e0e6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e0e7: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e0ea: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087e0ed: jl 0x87d705 */ if ((fS!=fO)) goto L_0087d705;
L_0087e0f3:; BB(0x0087e0f3);
    /* 0087e0f3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087e0f6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087e0f9: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e0ff: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e102: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e105: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e108: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087e10e: jmp 0x87d9c5 */ goto L_0087d9c5;
L_0087e113:; BB(0x0087e113);
    /* 0087e113: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087e116: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e117: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e11a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087e11d: jl 0x87d705 */ if ((fS!=fO)) goto L_0087d705;
L_0087e123:; BB(0x0087e123);
    /* 0087e123: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087e126: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087e129: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e12f: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e132: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e135: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e138: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087e13e: jmp 0x87d9c5 */ goto L_0087d9c5;
L_0087e143:; BB(0x0087e143);
    /* 0087e143: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0087e146: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e147: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e14a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0087e14d: jl 0x87d705 */ if ((fS!=fO)) goto L_0087d705;
L_0087e153:; BB(0x0087e153);
    /* 0087e153: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087e156: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087e159: mov esi, dword ptr [ebp - 0xa8] */ r_esi = R32((u32)(r_ebp+0xffffff58u));
    /* 0087e15f: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087e162: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087e165: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0087e168: fld qword ptr [0x99aa08] */ FPUSH(R_F64((u32)(0x99aa08u)));
    /* 0087e16e: jmp 0x87d9c5 */ goto L_0087d9c5;
L_0087e173:; BB(0x0087e173);
    /* 0087e173: fld qword ptr [0x99aa48] */ FPUSH(R_F64((u32)(0x99aa48u)));
    /* 0087e179: fld qword ptr [0x99aa40] */ FPUSH(R_F64((u32)(0x99aa40u)));
    /* 0087e17f: fld qword ptr [0x99aa18] */ FPUSH(R_F64((u32)(0x99aa18u)));
    /* 0087e185: jmp 0x87d9e1 */ goto L_0087d9e1;
L_0087e18a:; BB(0x0087e18a);
    /* 0087e18a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0087e18d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087e18f: jb 0x87d2cf */ if (fC) goto L_0087d2cf;
L_0087e195:; BB(0x0087e195);
    /* 0087e195: jmp 0x87d20c */ goto L_0087d20c;
L_0087e19a:; BB(0x0087e19a);
    /* 0087e19a: mov edx, ecx */ r_edx = r_ecx;
    /* 0087e19c: lea ecx, [edx + 0xe0] */ r_ecx = (u32)(r_edx+0xe0u);
    /* 0087e1a2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087e1a4: jb 0x87d15c */ if (fC) goto L_0087d15c;
L_0087e1aa:; BB(0x0087e1aa);
    /* 0087e1aa: jmp 0x87d085 */ goto L_0087d085;
L_0087e1af:; BB(0x0087e1af);
    /* 0087e1af: lea edx, [esi + 0xe0] */ r_edx = (u32)(r_esi+0xe0u);
    /* 0087e1b5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087e1b7: jb 0x87cf94 */ if (fC) goto L_0087cf94;
L_0087e1bd:; BB(0x0087e1bd);
    /* 0087e1bd: jmp 0x87ced7 */ goto L_0087ced7;
L_0087e1c2:; BB(0x0087e1c2);
    /* 0087e1c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e1c4: jmp 0x87cde1 */ goto L_0087cde1;
L_0087e1c9:; BB(0x0087e1c9);
    /* 0087e1c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e1cb: jmp 0x87cec4 */ goto L_0087cec4;
L_0087e1d0:; BB(0x0087e1d0);
    /* 0087e1d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087e1d1: mov ebx, esp */ r_ebx = r_esp;
    /* 0087e1d3: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087e1d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087e1d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087e1d8: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0087e1db: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0087e1df: mov ebp, esp */ r_ebp = r_esp;
    /* 0087e1e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087e1e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087e1e3: mov eax, 0x7f90 */ r_eax = 0x7f90u;
    /* 0087e1e8: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87e1edu); f_00858020();
    /* 0087e1ed: mov edx, dword ptr [esp + 0x7f94] */ r_edx = R32((u32)(r_esp+0x7f94u));
    /* 0087e1f4: mov eax, dword ptr [esp + 0x7f90] */ r_eax = R32((u32)(r_esp+0x7f90u));
    /* 0087e1fb: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 0087e1fe: mov esi, edx */ r_esi = r_edx;
    /* 0087e200: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0087e203: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e205: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0087e208: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0087e20b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e20d: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87e212u); f_00858020();
    /* 0087e212: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087e215: mov eax, esp */ r_eax = r_esp;
    /* 0087e217: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0087e21a: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e21c: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87e221u); f_00859c55();
    /* 0087e221: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0087e227: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e22a: lea eax, [ebp - 0x7f98] */ r_eax = (u32)(r_ebp+0xffff8068u);
    /* 0087e230: push 0x7700 */ { u32 v = 0x7700u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e235: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087e238: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x87e23du); f_0086b5cc();
    /* 0087e23d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e240: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087e242: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e244: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0087e247: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0087e24a: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 0087e250: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
L_0087e253:; BB(0x0087e253);
    /* 0087e253: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087e255: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087e258: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 0087e25b: lea eax, [edx + 2] */ r_eax = (u32)(r_edx+0x2u);
    /* 0087e25e: lea edi, [edx + 3] */ r_edi = (u32)(r_edx+0x3u);
    /* 0087e261: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0087e264: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_0087e267:; BB(0x0087e267);
    /* 0087e267: cmp edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e26a: jge 0x87e292 */ if ((fS==fO)) goto L_0087e292;
L_0087e26c:; BB(0x0087e26c);
    /* 0087e26c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087e26f: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0087e272: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e274: fld dword ptr [eax + esi*4 + 0xa2aca0] */ FPUSH(R_F32((u32)(r_eax+r_esi*4+0xa2aca0u)));
    /* 0087e27b: fcom dword ptr [0x99abf0] */ fx_compare(ST(0), R_F32((u32)(0x99abf0u))); 
    /* 0087e281: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e283: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e284: fld dword ptr [0x99abf0] */ FPUSH(R_F32((u32)(0x99abf0u)));
    /* 0087e28a: jb 0x87e28e */ if (fC) goto L_0087e28e;
L_0087e28c:; BB(0x0087e28c);
    /* 0087e28c: fst st(1) */ ST(1) = ST(0);
L_0087e28e:; BB(0x0087e28e);
    /* 0087e28e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e290: jmp 0x87e2af */ goto L_0087e2af;
L_0087e292:; BB(0x0087e292);
    /* 0087e292: fld dword ptr [0xa2adfc] */ FPUSH(R_F32((u32)(0xa2adfcu)));
    /* 0087e298: fld dword ptr [0x99abf0] */ FPUSH(R_F32((u32)(0x99abf0u)));
    /* 0087e29e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0087e2a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e2a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e2a3: fld dword ptr [0x99abf0] */ FPUSH(R_F32((u32)(0x99abf0u)));
    /* 0087e2a9: ja 0x87e2ad */ if ((!fC&&!fZ)) goto L_0087e2ad;
L_0087e2ab:; BB(0x0087e2ab);
    /* 0087e2ab: fst st(1) */ ST(1) = ST(0);
L_0087e2ad:; BB(0x0087e2ad);
    /* 0087e2ad: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087e2af:; BB(0x0087e2af);
    /* 0087e2af: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0087e2b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e2b4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087e2b7: cmp ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e2ba: jge 0x87e2d8 */ if ((fS==fO)) goto L_0087e2d8;
L_0087e2bc:; BB(0x0087e2bc);
    /* 0087e2bc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087e2bf: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e2c2: fld dword ptr [edi + eax*4 + 0xa2aca4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0xa2aca4u)));
    /* 0087e2c9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e2cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e2cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e2ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e2d0: jb 0x87e2d4 */ if (fC) goto L_0087e2d4;
L_0087e2d2:; BB(0x0087e2d2);
    /* 0087e2d2: fst st(1) */ ST(1) = ST(0);
L_0087e2d4:; BB(0x0087e2d4);
    /* 0087e2d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e2d6: jmp 0x87e2eb */ goto L_0087e2eb;
L_0087e2d8:; BB(0x0087e2d8);
    /* 0087e2d8: fld dword ptr [0xa2adfc] */ FPUSH(R_F32((u32)(0xa2adfcu)));
    /* 0087e2de: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e2e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e2e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e2e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e2e5: jb 0x87e2e9 */ if (fC) goto L_0087e2e9;
L_0087e2e7:; BB(0x0087e2e7);
    /* 0087e2e7: fst st(1) */ ST(1) = ST(0);
L_0087e2e9:; BB(0x0087e2e9);
    /* 0087e2e9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087e2eb:; BB(0x0087e2eb);
    /* 0087e2eb: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087e2ee: cmp eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e2f1: jge 0x87e30f */ if ((fS==fO)) goto L_0087e30f;
L_0087e2f3:; BB(0x0087e2f3);
    /* 0087e2f3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087e2f6: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e2f9: fld dword ptr [edi + eax*4 + 0xa2aca8] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0xa2aca8u)));
    /* 0087e300: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e302: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e304: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e305: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e307: jb 0x87e30b */ if (fC) goto L_0087e30b;
L_0087e309:; BB(0x0087e309);
    /* 0087e309: fst st(1) */ ST(1) = ST(0);
L_0087e30b:; BB(0x0087e30b);
    /* 0087e30b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e30d: jmp 0x87e322 */ goto L_0087e322;
L_0087e30f:; BB(0x0087e30f);
    /* 0087e30f: fld dword ptr [0xa2adfc] */ FPUSH(R_F32((u32)(0xa2adfcu)));
    /* 0087e315: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e317: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e319: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e31a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e31c: jb 0x87e320 */ if (fC) goto L_0087e320;
L_0087e31e:; BB(0x0087e31e);
    /* 0087e31e: fst st(1) */ ST(1) = ST(0);
L_0087e320:; BB(0x0087e320);
    /* 0087e320: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087e322:; BB(0x0087e322);
    /* 0087e322: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087e325: cmp eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e328: jge 0x87e346 */ if ((fS==fO)) goto L_0087e346;
L_0087e32a:; BB(0x0087e32a);
    /* 0087e32a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087e32d: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e330: fld dword ptr [edi + eax*4 + 0xa2acac] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0xa2acacu)));
    /* 0087e337: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e339: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e33b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e33c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e33e: jb 0x87e342 */ if (fC) goto L_0087e342;
L_0087e340:; BB(0x0087e340);
    /* 0087e340: fst st(1) */ ST(1) = ST(0);
L_0087e342:; BB(0x0087e342);
    /* 0087e342: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e344: jmp 0x87e359 */ goto L_0087e359;
L_0087e346:; BB(0x0087e346);
    /* 0087e346: fld dword ptr [0xa2adfc] */ FPUSH(R_F32((u32)(0xa2adfcu)));
    /* 0087e34c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e34e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e350: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e351: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e353: jb 0x87e357 */ if (fC) goto L_0087e357;
L_0087e355:; BB(0x0087e355);
    /* 0087e355: fst st(1) */ ST(1) = ST(0);
L_0087e357:; BB(0x0087e357);
    /* 0087e357: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087e359:; BB(0x0087e359);
    /* 0087e359: fstp dword ptr [ebp + esi*4 - 0x198] */ W_F32((u32)(r_ebp+r_esi*4+0xfffffe68u), ST(0)); FPOP();
    /* 0087e360: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e361: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e362: inc dword ptr [ebp - 0x68] */ { u32 ad = (u32)(r_ebp+0xffffff98u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087e365: inc dword ptr [ebp - 0x30] */ { u32 ad = (u32)(r_ebp+0xffffffd0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087e368: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087e369: cmp esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e36c: jl 0x87e267 */ if ((fS!=fO)) goto L_0087e267;
L_0087e372:; BB(0x0087e372);
    /* 0087e372: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087e375: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0087e378: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087e37a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087e37c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087e37e: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0087e381: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087e384: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e386: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087e388: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087e38b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e38d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e38f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087e391: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e393: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e395: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e397: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e399: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e39b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087e39e: lea edi, [esi + 0x1c0] */ r_edi = (u32)(r_esi+0x1c0u);
    /* 0087e3a4: lea ecx, [eax + eax + 0x540] */ r_ecx = (u32)(r_eax+r_eax+0x540u);
    /* 0087e3ab: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0087e3ae: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0087e3b1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087e3b4: mov esi, edx */ r_esi = r_edx;
L_0087e3b6:; BB(0x0087e3b6);
    /* 0087e3b6: lea eax, [ebp - 0x7f98] */ r_eax = (u32)(r_ebp+0xffff8068u);
    /* 0087e3bc: lea eax, [eax + edi] */ r_eax = (u32)(r_eax+r_edi);
    /* 0087e3bf: lea ecx, [esi + 0xa25360] */ r_ecx = (u32)(r_esi+0xa25360u);
    /* 0087e3c5: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e3ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087e3cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087e3cc: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87e3d1u); f_0086b6b8();
    /* 0087e3d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e3d4: add edi, 0xe0 */ {  u32 a = r_edi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087e3da: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087e3e0: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087e3e3: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e3e5: jg 0x87e3b6 */ if ((!fZ&&fS==fO)) goto L_0087e3b6;
L_0087e3e7:; BB(0x0087e3e7);
    /* 0087e3e7: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087e3ea: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e3ed: lea edi, [eax + eax + 0xa25360] */ r_edi = (u32)(r_eax+r_eax+0xa25360u);
    /* 0087e3f4: lea eax, [ebp - 0x7f98] */ r_eax = (u32)(r_ebp+0xffff8068u);
    /* 0087e3fa: lea edx, [eax + esi] */ r_edx = (u32)(r_eax+r_esi);
    /* 0087e3fd: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e402: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087e403: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087e404: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87e409u); f_0086b6b8();
    /* 0087e409: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e40c: lea eax, [ebp + esi - 0x7eb8] */ r_eax = (u32)(r_ebp+r_esi+0xffff8148u);
    /* 0087e413: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e418: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087e419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087e41a: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87e41fu); f_0086b6b8();
    /* 0087e41f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e422: fld qword ptr [0x99a9f8] */ FPUSH(R_F64((u32)(0x99a9f8u)));
    /* 0087e428: fld dword ptr [0x99abf8] */ FPUSH(R_F32((u32)(0x99abf8u)));
    /* 0087e42e: mov ecx, esi */ r_ecx = r_esi;
    /* 0087e430: lea edx, [esi + 0x700] */ r_edx = (u32)(r_esi+0x700u);
    /* 0087e436: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0087e439: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
L_0087e43c:; BB(0x0087e43c);
    /* 0087e43c: mov edi, ecx */ r_edi = r_ecx;
    /* 0087e43e: mov esi, 0x10 */ r_esi = 0x10u;
    /* 0087e443: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0087e446:; BB(0x0087e446);
    /* 0087e446: mov eax, esi */ r_eax = r_esi;
    /* 0087e448: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087e449: mov eax, esi */ r_eax = r_esi;
    /* 0087e44b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087e44d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087e44f: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0087e455: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087e45b: fmul dword ptr [ebx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x18u));
    /* 0087e45e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e460: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0087e462: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e464: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e465: jae 0x87e47c */ if (!fC) goto L_0087e47c;
L_0087e467:; BB(0x0087e467);
    /* 0087e467: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e469: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087e46b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e46d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e46e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e470: jbe 0x87e47c */ if ((fC||fZ)) goto L_0087e47c;
L_0087e472:; BB(0x0087e472);
    /* 0087e472: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e474: fld dword ptr [0x99abf8] */ FPUSH(R_F32((u32)(0x99abf8u)));
    /* 0087e47a: jmp 0x87e496 */ goto L_0087e496;
L_0087e47c:; BB(0x0087e47c);
    /* 0087e47c: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0087e47e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e480: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e481: jbe 0x87e496 */ if ((fC||fZ)) goto L_0087e496;
L_0087e483:; BB(0x0087e483);
    /* 0087e483: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e485: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087e487: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e489: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e48a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e48c: jae 0x87e496 */ if (!fC) goto L_0087e496;
L_0087e48e:; BB(0x0087e48e);
    /* 0087e48e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e490: fld dword ptr [0x99abf8] */ FPUSH(R_F32((u32)(0x99abf8u)));
L_0087e496:; BB(0x0087e496);
    /* 0087e496: fadd dword ptr [ebp + edi - 0x7f98] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edi+0xffff8068u));
    /* 0087e49d: fstp dword ptr [ebp + edi - 0x7f98] */ W_F32((u32)(r_ebp+r_edi+0xffff8068u), ST(0)); FPOP();
    /* 0087e4a4: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087e4a7: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087e4a8: cmp esi, -0x28 */ {  u32 a = r_esi; u32 b = 0xffffffd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e4ab: jg 0x87e446 */ if ((!fZ&&fS==fO)) goto L_0087e446;
L_0087e4ad:; BB(0x0087e4ad);
    /* 0087e4ad: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e4b0: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e4b6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e4b8: jg 0x87e43c */ if ((!fZ&&fS==fO)) goto L_0087e43c;
L_0087e4ba:; BB(0x0087e4ba);
    /* 0087e4ba: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087e4bc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087e4be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e4c0: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087e4c3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087e4c5: fld qword ptr [0x99a9f0] */ FPUSH(R_F64((u32)(0x99a9f0u)));
    /* 0087e4cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087e4cd: mov edx, esi */ r_edx = r_esi;
    /* 0087e4cf: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0087e4d2: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0087e4d5: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_0087e4d8:; BB(0x0087e4d8);
    /* 0087e4d8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e4db: mov eax, 2 */ r_eax = 0x2u;
    /* 0087e4e0: jl 0x87e4e4 */ if ((fS!=fO)) goto L_0087e4e4;
L_0087e4e2:; BB(0x0087e4e2);
    /* 0087e4e2: mov eax, edi */ r_eax = r_edi;
L_0087e4e4:; BB(0x0087e4e4);
    /* 0087e4e4: lea ecx, [ebp - 0x7f98] */ r_ecx = (u32)(r_ebp+0xffff8068u);
    /* 0087e4ea: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0087e4ed: lea esi, [ecx + edx] */ r_esi = (u32)(r_ecx+r_edx);
    /* 0087e4f0: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0087e4f3: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087e4f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087e4f9: fadd dword ptr [ecx + esi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*4));
    /* 0087e4fc: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0087e502: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087e508: fmul qword ptr [0x99a9e8] */ ST(0) = ST(0) * R_F64((u32)(0x99a9e8u));
    /* 0087e50e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087e510: lea ecx, [ebp + edx - 0x7f98] */ r_ecx = (u32)(r_ebp+r_edx+0xffff8068u);
    /* 0087e517: lea eax, [ebp + edx - 0x7eb8] */ r_eax = (u32)(r_ebp+r_edx+0xffff8148u);
    /* 0087e51e: jmp 0x87e523 */ goto L_0087e523;
L_0087e520:; BB(0x0087e520);
    /* 0087e520: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
L_0087e523:; BB(0x0087e523);
    /* 0087e523: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0087e525: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e527: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0087e529: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0087e52c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e52e: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0087e531: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0087e534: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e536: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0087e539: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0087e53c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e53e: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e541: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087e543: ja 0x87e520 */ if ((!fC&&!fZ)) goto L_0087e520;
L_0087e545:; BB(0x0087e545);
    /* 0087e545: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 0087e548: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e54a: lea esi, [ebp - 0x898] */ r_esi = (u32)(r_ebp+0xfffff768u);
    /* 0087e550: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087e553: lea esi, [esi + eax] */ r_esi = (u32)(r_esi+r_eax);
    /* 0087e556: lea edx, [ebp - 0x198] */ r_edx = (u32)(r_ebp+0xfffffe68u);
    /* 0087e55c: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e561: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087e562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087e563: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x87e568u); f_0086b6b8();
    /* 0087e568: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e56b: fld qword ptr [0x99a9f0] */ FPUSH(R_F64((u32)(0x99a9f0u)));
    /* 0087e571: mov dword ptr [ebp - 0xa8], edi */ W32((u32)(r_ebp+0xffffff58u), r_edi);
    /* 0087e577: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087e57d: fmul dword ptr [0x99abf4] */ ST(0) = ST(0) * R_F32((u32)(0x99abf4u));
    /* 0087e583: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0087e585: mov edx, esi */ r_edx = r_esi;
    /* 0087e587: lea eax, [esi + 0xe0] */ r_eax = (u32)(r_esi+0xe0u);
    /* 0087e58d: jmp 0x87e592 */ goto L_0087e592;
L_0087e58f:; BB(0x0087e58f);
    /* 0087e58f: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_0087e592:; BB(0x0087e592);
    /* 0087e592: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0087e594: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e596: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0087e598: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0087e59b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e59d: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0087e5a0: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0087e5a3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e5a5: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0087e5a8: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0087e5ab: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087e5ad: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e5b0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087e5b2: ja 0x87e58f */ if ((!fC&&!fZ)) goto L_0087e58f;
L_0087e5b4:; BB(0x0087e5b4);
    /* 0087e5b4: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0087e5b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e5b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087e5bb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e5be: jmp 0x87e5c4 */ goto L_0087e5c4;
L_0087e5c0:; BB(0x0087e5c0);
    /* 0087e5c0: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0087e5c4:; BB(0x0087e5c4);
    /* 0087e5c4: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 0087e5c7: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 0087e5ca: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e5cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e5ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e5cf: jb 0x87e5d3 */ if (fC) goto L_0087e5d3;
L_0087e5d1:; BB(0x0087e5d1);
    /* 0087e5d1: fst st(1) */ ST(1) = ST(0);
L_0087e5d3:; BB(0x0087e5d3);
    /* 0087e5d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e5d5: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087e5d8: fld dword ptr [ecx + edx*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x4u)));
    /* 0087e5dc: fld dword ptr [esi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x4u)));
    /* 0087e5e0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e5e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e5e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e5e5: jb 0x87e5e9 */ if (fC) goto L_0087e5e9;
L_0087e5e7:; BB(0x0087e5e7);
    /* 0087e5e7: fst st(1) */ ST(1) = ST(0);
L_0087e5e9:; BB(0x0087e5e9);
    /* 0087e5e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e5eb: fstp dword ptr [esi + edx*4 + 4] */ W_F32((u32)(r_esi+r_edx*4+0x4u), ST(0)); FPOP();
    /* 0087e5ef: fld dword ptr [ecx + edx*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x8u)));
    /* 0087e5f3: fld dword ptr [esi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x8u)));
    /* 0087e5f7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e5f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e5fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e5fc: jb 0x87e600 */ if (fC) goto L_0087e600;
L_0087e5fe:; BB(0x0087e5fe);
    /* 0087e5fe: fst st(1) */ ST(1) = ST(0);
L_0087e600:; BB(0x0087e600);
    /* 0087e600: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e602: fstp dword ptr [esi + edx*4 + 8] */ W_F32((u32)(r_esi+r_edx*4+0x8u), ST(0)); FPOP();
    /* 0087e606: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 0087e60a: fld dword ptr [esi + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0xcu)));
    /* 0087e60e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e610: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e612: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e613: jb 0x87e617 */ if (fC) goto L_0087e617;
L_0087e615:; BB(0x0087e615);
    /* 0087e615: fst st(1) */ ST(1) = ST(0);
L_0087e617:; BB(0x0087e617);
    /* 0087e617: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e619: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e61c: cmp edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e61f: jl 0x87e5c0 */ if ((fS!=fO)) goto L_0087e5c0;
L_0087e621:; BB(0x0087e621);
    /* 0087e621: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087e625: add dword ptr [ebp - 0x68], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffff98u);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087e62c: add dword ptr [ebp - 0x6c], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffff94u);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087e633: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087e634: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e637: jl 0x87e4d8 */ if ((fS!=fO)) goto L_0087e4d8;
L_0087e63d:; BB(0x0087e63d);
    /* 0087e63d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e63f: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087e642: mov ecx, 0xe0 */ r_ecx = 0xe0u;
    /* 0087e647: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087e649: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0087e64f:; BB(0x0087e64f);
    /* 0087e64f: lea edx, [ebp - 0x898] */ r_edx = (u32)(r_ebp+0xfffff768u);
    /* 0087e655: lea edi, [edx + ecx] */ r_edi = (u32)(r_edx+r_ecx);
    /* 0087e658: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0087e65b: lea edx, [ebp - 0x898] */ r_edx = (u32)(r_ebp+0xfffff768u);
    /* 0087e661: lea edx, [edx + eax] */ r_edx = (u32)(r_edx+r_eax);
    /* 0087e664: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0087e667: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087e669: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0087e66c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0087e66f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0087e672: jmp 0x87e678 */ goto L_0087e678;
L_0087e674:; BB(0x0087e674);
    /* 0087e674: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0087e678:; BB(0x0087e678);
    /* 0087e678: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 0087e67b: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 0087e67e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e680: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e682: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e683: ja 0x87e687 */ if ((!fC&&!fZ)) goto L_0087e687;
L_0087e685:; BB(0x0087e685);
    /* 0087e685: fst st(1) */ ST(1) = ST(0);
L_0087e687:; BB(0x0087e687);
    /* 0087e687: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e689: fstp dword ptr [edi + edx*4] */ W_F32((u32)(r_edi+r_edx*4), ST(0)); FPOP();
    /* 0087e68c: fld dword ptr [ecx + edx*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x4u)));
    /* 0087e690: fld dword ptr [edi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x4u)));
    /* 0087e694: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e696: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e698: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e699: ja 0x87e69d */ if ((!fC&&!fZ)) goto L_0087e69d;
L_0087e69b:; BB(0x0087e69b);
    /* 0087e69b: fst st(1) */ ST(1) = ST(0);
L_0087e69d:; BB(0x0087e69d);
    /* 0087e69d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e69f: fstp dword ptr [edi + edx*4 + 4] */ W_F32((u32)(r_edi+r_edx*4+0x4u), ST(0)); FPOP();
    /* 0087e6a3: fld dword ptr [ecx + edx*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x8u)));
    /* 0087e6a7: fld dword ptr [edi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x8u)));
    /* 0087e6ab: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e6ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e6af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e6b0: ja 0x87e6b4 */ if ((!fC&&!fZ)) goto L_0087e6b4;
L_0087e6b2:; BB(0x0087e6b2);
    /* 0087e6b2: fst st(1) */ ST(1) = ST(0);
L_0087e6b4:; BB(0x0087e6b4);
    /* 0087e6b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e6b6: fstp dword ptr [edi + edx*4 + 8] */ W_F32((u32)(r_edi+r_edx*4+0x8u), ST(0)); FPOP();
    /* 0087e6ba: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 0087e6be: fld dword ptr [edi + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0xcu)));
    /* 0087e6c2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e6c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e6c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e6c7: ja 0x87e6cb */ if ((!fC&&!fZ)) goto L_0087e6cb;
L_0087e6c9:; BB(0x0087e6c9);
    /* 0087e6c9: fst st(1) */ ST(1) = ST(0);
L_0087e6cb:; BB(0x0087e6cb);
    /* 0087e6cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e6cd: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e6d0: cmp edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e6d3: jl 0x87e674 */ if ((fS!=fO)) goto L_0087e674;
L_0087e6d5:; BB(0x0087e6d5);
    /* 0087e6d5: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087e6d9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087e6dc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e6df: lea edx, [ebp - 0x7f98] */ r_edx = (u32)(r_ebp+0xffff8068u);
    /* 0087e6e5: lea edx, [edx + esi] */ r_edx = (u32)(r_edx+r_esi);
    /* 0087e6e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087e6ea: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 0087e6ed: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0087e6f0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0087e6f3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0087e6f6: jmp 0x87e6fc */ goto L_0087e6fc;
L_0087e6f8:; BB(0x0087e6f8);
    /* 0087e6f8: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087e6fc:; BB(0x0087e6fc);
    /* 0087e6fc: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087e6ff: fld dword ptr [edx + edi*4] */ FPUSH(R_F32((u32)(r_edx+r_edi*4)));
    /* 0087e702: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e704: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e706: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e707: ja 0x87e70b */ if ((!fC&&!fZ)) goto L_0087e70b;
L_0087e709:; BB(0x0087e709);
    /* 0087e709: fst st(1) */ ST(1) = ST(0);
L_0087e70b:; BB(0x0087e70b);
    /* 0087e70b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e70d: fstp dword ptr [edx + edi*4] */ W_F32((u32)(r_edx+r_edi*4), ST(0)); FPOP();
    /* 0087e710: fld dword ptr [ecx + edi*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x4u)));
    /* 0087e714: fld dword ptr [edx + edi*4 + 4] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x4u)));
    /* 0087e718: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e71a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e71c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e71d: ja 0x87e721 */ if ((!fC&&!fZ)) goto L_0087e721;
L_0087e71f:; BB(0x0087e71f);
    /* 0087e71f: fst st(1) */ ST(1) = ST(0);
L_0087e721:; BB(0x0087e721);
    /* 0087e721: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e723: fstp dword ptr [edx + edi*4 + 4] */ W_F32((u32)(r_edx+r_edi*4+0x4u), ST(0)); FPOP();
    /* 0087e727: fld dword ptr [ecx + edi*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x8u)));
    /* 0087e72b: fld dword ptr [edx + edi*4 + 8] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x8u)));
    /* 0087e72f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e731: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e733: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e734: ja 0x87e738 */ if ((!fC&&!fZ)) goto L_0087e738;
L_0087e736:; BB(0x0087e736);
    /* 0087e736: fst st(1) */ ST(1) = ST(0);
L_0087e738:; BB(0x0087e738);
    /* 0087e738: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e73a: fstp dword ptr [edx + edi*4 + 8] */ W_F32((u32)(r_edx+r_edi*4+0x8u), ST(0)); FPOP();
    /* 0087e73e: fld dword ptr [ecx + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0xcu)));
    /* 0087e742: fld dword ptr [edx + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0xcu)));
    /* 0087e746: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087e748: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087e74a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087e74b: ja 0x87e74f */ if ((!fC&&!fZ)) goto L_0087e74f;
L_0087e74d:; BB(0x0087e74d);
    /* 0087e74d: fst st(1) */ ST(1) = ST(0);
L_0087e74f:; BB(0x0087e74f);
    /* 0087e74f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087e751: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087e754: cmp edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e757: jl 0x87e6f8 */ if ((fS!=fO)) goto L_0087e6f8;
L_0087e759:; BB(0x0087e759);
    /* 0087e759: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087e75d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087e760: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087e763: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e769: add eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e76e: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087e774: cmp eax, 0x620 */ {  u32 a = r_eax; u32 b = 0x620u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e779: jl 0x87e64f */ if ((fS!=fO)) goto L_0087e64f;
L_0087e77f:; BB(0x0087e77f);
    /* 0087e77f: add dword ptr [ebp - 0x28], 4 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087e783: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087e786: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e787: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0087e78a: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e78d: jl 0x87e253 */ if ((fS!=fO)) goto L_0087e253;
L_0087e793:; BB(0x0087e793);
    /* 0087e793: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
    /* 0087e799: mov edi, dword ptr [ebp - 0x70] */ r_edi = R32((u32)(r_ebp+0xffffff90u));
    /* 0087e79c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087e79e: lea ecx, [esi - 5] */ r_ecx = (u32)(r_esi+0xfffffffbu);
    /* 0087e7a1: lea edx, [esi - 6] */ r_edx = (u32)(r_esi+0xfffffffau);
    /* 0087e7a4: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0087e7aa: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0087e7ad: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 0087e7b3: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 0087e7b6: mov esi, eax */ r_esi = r_eax;
L_0087e7b8:; BB(0x0087e7b8);
    /* 0087e7b8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e7ba: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87e7bfu); f_00859c55();
    /* 0087e7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087e7c0: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087e7c6: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 0087e7c9: mov dword ptr [ebp - 0xa8], esi */ W32((u32)(r_ebp+0xffffff58u), r_esi);
    /* 0087e7cf: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087e7d5: fst qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0));
    /* 0087e7d8: fld qword ptr [0x99a9d8] */ FPUSH(R_F64((u32)(0x99a9d8u)));
    /* 0087e7de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087e7e0: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e7e3: fadd qword ptr [0x99a9e0] */ ST(0) = ST(0) + R_F64((u32)(0x99a9e0u));
    /* 0087e7e9: fmul qword ptr [0x99a9d0] */ ST(0) = ST(0) * R_F64((u32)(0x99a9d0u));
    /* 0087e7ef: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087e7f2: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87e7f7u); f_008c9b28();
    /* 0087e7f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e7fa: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0087e7fd: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0087e7ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087e801: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087e807: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087e80e: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087e813: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087e818: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087e81e: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087e824: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087e82a: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087e830: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0087e836: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0087e839: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e83c: fild dword ptr [ebp - 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff60u)));
    /* 0087e842: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087e844: fadd dword ptr [0x99abec] */ ST(0) = ST(0) + R_F32((u32)(0x99abecu));
    /* 0087e84a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087e84d: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87e852u); f_0084d1ac();
    /* 0087e852: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e855: fmul qword ptr [0x99a9c0] */ ST(0) = ST(0) * R_F64((u32)(0x99a9c0u));
    /* 0087e85b: fadd qword ptr [0x99a9c8] */ ST(0) = ST(0) + R_F64((u32)(0x99a9c8u));
    /* 0087e861: fmul qword ptr [0x99a9b8] */ ST(0) = ST(0) * R_F64((u32)(0x99a9b8u));
    /* 0087e867: fchs  */ ST(0) = -ST(0);
    /* 0087e869: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087e86f: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087e876: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087e87b: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087e880: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087e886: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087e88c: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0087e88e: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087e894: fchs  */ ST(0) = -ST(0);
    /* 0087e896: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087e89c: mov edi, dword ptr [ebp - 0xa0] */ r_edi = R32((u32)(r_ebp+0xffffff60u));
    /* 0087e8a2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e8a5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087e8a8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e8a9: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0087e8af: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087e8b5: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087e8b8: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087e8bb: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87e8c0u); f_0084d1ac();
    /* 0087e8c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087e8c3: fmul qword ptr [0x99a9c0] */ ST(0) = ST(0) * R_F64((u32)(0x99a9c0u));
    /* 0087e8c9: fadd qword ptr [0x99a9c8] */ ST(0) = ST(0) + R_F64((u32)(0x99a9c8u));
    /* 0087e8cf: fmul qword ptr [0x99a9b8] */ ST(0) = ST(0) * R_F64((u32)(0x99a9b8u));
    /* 0087e8d5: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087e8db: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087e8e2: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087e8e7: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087e8ec: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087e8f2: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087e8f8: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087e8fe: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087e904: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0087e90a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e90c: jge 0x87e910 */ if ((fS==fO)) goto L_0087e910;
L_0087e90e:; BB(0x0087e90e);
    /* 0087e90e: mov edi, esi */ r_edi = r_esi;
L_0087e910:; BB(0x0087e910);
    /* 0087e910: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e912: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087e914: jge 0x87e918 */ if ((fS==fO)) goto L_0087e918;
L_0087e916:; BB(0x0087e916);
    /* 0087e916: mov edi, ecx */ r_edi = r_ecx;
L_0087e918:; BB(0x0087e918);
    /* 0087e918: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e91b: jl 0x87e922 */ if ((fS!=fO)) goto L_0087e922;
L_0087e91d:; BB(0x0087e91d);
    /* 0087e91d: mov edx, 0x10 */ r_edx = 0x10u;
L_0087e922:; BB(0x0087e922);
    /* 0087e922: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e924: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0087e927: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 0087e92a: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0087e92d: lea eax, [esi + esi + 2] */ r_eax = (u32)(r_esi+r_esi+0x2u);
    /* 0087e931: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e933: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087e935: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087e937: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087e93a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087e93c: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0087e93f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0087e942: mov dword ptr [ebp - 0x84], edi */ W32((u32)(r_ebp+0xffffff7cu), r_edi);
    /* 0087e948: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0087e94e: mov dword ptr [ebp - 0x90], esi */ W32((u32)(r_ebp+0xffffff70u), r_esi);
    /* 0087e954: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
L_0087e95a:; BB(0x0087e95a);
    /* 0087e95a: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0087e95f: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87e964u); f_00859c55();
    /* 0087e964: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087e965: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087e96b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0087e971: mov edi, dword ptr [edx + ecx*4] */ r_edi = R32((u32)(r_edx+r_ecx*4));
    /* 0087e974: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087e977: mov dword ptr [edi + edx*4], eax */ W32((u32)(r_edi+r_edx*4), r_eax);
    /* 0087e97a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087e97c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087e97e: jle 0x87e9e6 */ if ((fZ||fS!=fO)) goto L_0087e9e6;
L_0087e980:; BB(0x0087e980);
    /* 0087e980: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e983: jl 0x87f1e1 */ if ((fS!=fO)) goto L_0087f1e1;
L_0087e989:; BB(0x0087e989);
    /* 0087e989: mov ecx, 0x4479c000 */ r_ecx = 0x4479c000u;
    /* 0087e98e: mov eax, 0x4479c000 */ r_eax = 0x4479c000u;
    /* 0087e993: mov edi, 0x4479c000 */ r_edi = 0x4479c000u;
    /* 0087e998: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0087e99b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0087e9a1: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
L_0087e9a4:; BB(0x0087e9a4);
    /* 0087e9a4: mov edi, 0x4479c000 */ r_edi = 0x4479c000u;
    /* 0087e9a9: mov dword ptr [esi + edx*4], edi */ W32((u32)(r_esi+r_edx*4), r_edi);
    /* 0087e9ac: mov edi, 0x4479c000 */ r_edi = 0x4479c000u;
    /* 0087e9b1: mov dword ptr [esi + edx*4 + 4], edi */ W32((u32)(r_esi+r_edx*4+0x4u), r_edi);
    /* 0087e9b5: mov edi, 0x4479c000 */ r_edi = 0x4479c000u;
    /* 0087e9ba: mov dword ptr [esi + edx*4 + 8], edi */ W32((u32)(r_esi+r_edx*4+0x8u), r_edi);
    /* 0087e9be: mov edi, 0x4479c000 */ r_edi = 0x4479c000u;
    /* 0087e9c3: mov dword ptr [esi + edx*4 + 0xc], edi */ W32((u32)(r_esi+r_edx*4+0xcu), r_edi);
    /* 0087e9c7: mov dword ptr [esi + edx*4 + 0x10], eax */ W32((u32)(r_esi+r_edx*4+0x10u), r_eax);
    /* 0087e9cb: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e9ce: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e9d0: jle 0x87e9a4 */ if ((fZ||fS!=fO)) goto L_0087e9a4;
L_0087e9d2:; BB(0x0087e9d2);
    /* 0087e9d2: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0087e9d5: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
L_0087e9db:; BB(0x0087e9db);
    /* 0087e9db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0087e9de:; BB(0x0087e9de);
    /* 0087e9de: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 0087e9e1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087e9e2: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e9e4: jl 0x87e9de */ if ((fS!=fO)) goto L_0087e9de;
L_0087e9e6:; BB(0x0087e9e6);
    /* 0087e9e6: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0087e9ec: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0087e9f2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087e9f4: jg 0x87f1ca */ if ((!fZ&&fS==fO)) goto L_0087f1ca;
L_0087e9fa:; BB(0x0087e9fa);
    /* 0087e9fa: fld qword ptr [0x99a9d8] */ FPUSH(R_F64((u32)(0x99a9d8u)));
    /* 0087ea00: fld qword ptr [0x99a9d0] */ FPUSH(R_F64((u32)(0x99a9d0u)));
    /* 0087ea06: fld qword ptr [0x99a9a8] */ FPUSH(R_F64((u32)(0x99a9a8u)));
    /* 0087ea0c: fld qword ptr [0x99a998] */ FPUSH(R_F64((u32)(0x99a998u)));
    /* 0087ea12: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ea15: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087ea18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea1a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea1c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea20: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea22: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea28: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0087ea2b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ea2d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ea2f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087ea31: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087ea34: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ea36: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087ea38: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0087ea3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087ea3d: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0087ea40: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087ea42:; BB(0x0087ea42);
    /* 0087ea42: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087ea44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087ea46: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0087ea4c: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087ea52: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087ea54: fld qword ptr [0x99a9a0] */ FPUSH(R_F64((u32)(0x99a9a0u)));
    /* 0087ea5a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ea5c: fld qword ptr [0x99a9b0] */ FPUSH(R_F64((u32)(0x99a9b0u)));
    /* 0087ea62: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087ea64: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0087ea67: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0087ea6a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0087ea6d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087ea6f: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0087ea72: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0087ea75: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
L_0087ea78:; BB(0x0087ea78);
    /* 0087ea78: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087ea7b: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0087ea81: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087ea87: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087ea8a: fst qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0));
    /* 0087ea8d: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087ea90: fld qword ptr [ebp - 0x38] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc8u)));
    /* 0087ea93: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087ea95: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0087ea98: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087ea9b: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87eaa0u); f_008c9b28();
    /* 0087eaa0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087eaa3: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087eaa6: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087eaac: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087eab3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087eab8: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087eabe: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087eac4: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087eaca: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087ead0: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0087ead6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0087ead9: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087eadc: fld qword ptr [ebp - 0x58] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa8u)));
    /* 0087eadf: fadd qword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffb0u));
    /* 0087eae2: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0087eae5: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087eae8: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87eaedu); f_008c9b28();
    /* 0087eaed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087eaf0: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087eaf3: fadd qword ptr [0x99a998] */ ST(0) = ST(0) + R_F64((u32)(0x99a998u));
    /* 0087eaf9: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087eaff: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087eb06: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087eb0b: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087eb11: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087eb17: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087eb1d: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087eb23: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0087eb29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087eb2b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087eb2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087eb30: jge 0x87eb34 */ if ((fS==fO)) goto L_0087eb34;
L_0087eb32:; BB(0x0087eb32);
    /* 0087eb32: mov ecx, edx */ r_ecx = r_edx;
L_0087eb34:; BB(0x0087eb34);
    /* 0087eb34: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eb36: jge 0x87eb3a */ if ((fS==fO)) goto L_0087eb3a;
L_0087eb38:; BB(0x0087eb38);
    /* 0087eb38: mov ecx, esi */ r_ecx = r_esi;
L_0087eb3a:; BB(0x0087eb3a);
    /* 0087eb3a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eb3c: jge 0x87eb40 */ if ((fS==fO)) goto L_0087eb40;
L_0087eb3e:; BB(0x0087eb3e);
    /* 0087eb3e: mov edi, ecx */ r_edi = r_ecx;
L_0087eb40:; BB(0x0087eb40);
    /* 0087eb40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087eb42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087eb44: jge 0x87eb48 */ if ((fS==fO)) goto L_0087eb48;
L_0087eb46:; BB(0x0087eb46);
    /* 0087eb46: mov eax, edx */ r_eax = r_edx;
L_0087eb48:; BB(0x0087eb48);
    /* 0087eb48: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eb4a: jge 0x87eb4e */ if ((fS==fO)) goto L_0087eb4e;
L_0087eb4c:; BB(0x0087eb4c);
    /* 0087eb4c: mov eax, esi */ r_eax = r_esi;
L_0087eb4e:; BB(0x0087eb4e);
    /* 0087eb4e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eb50: jge 0x87eb8b */ if ((fS==fO)) goto L_0087eb8b;
L_0087eb52:; BB(0x0087eb52);
    /* 0087eb52: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0087eb55: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0087eb58: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087eb5a: add edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087eb5d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0087eb60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
L_0087eb63:; BB(0x0087eb63);
    /* 0087eb63: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eb65: jge 0x87f1ac */ if ((fS==fO)) goto L_0087f1ac;
L_0087eb6b:; BB(0x0087eb6b);
    /* 0087eb6b: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087eb72: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087eb75: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087eb77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087eb79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087eb7a: ja 0x87eb7e */ if ((!fC&&!fZ)) goto L_0087eb7e;
L_0087eb7c:; BB(0x0087eb7c);
    /* 0087eb7c: fst st(1) */ ST(1) = ST(0);
L_0087eb7e:; BB(0x0087eb7e);
    /* 0087eb7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087eb80: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0087eb83: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087eb84: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087eb87: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eb89: jl 0x87eb63 */ if ((fS!=fO)) goto L_0087eb63;
L_0087eb8b:; BB(0x0087eb8b);
    /* 0087eb8b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087eb8e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087eb8f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0087eb92: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eb95: jl 0x87ea78 */ if ((fS!=fO)) goto L_0087ea78;
L_0087eb9b:; BB(0x0087eb9b);
    /* 0087eb9b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087eb9e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087eba1: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 0087eba4: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eba6: jge 0x87ec7d */ if ((fS==fO)) goto L_0087ec7d;
L_0087ebac:; BB(0x0087ebac);
    /* 0087ebac: mov edx, esi */ r_edx = r_esi;
    /* 0087ebae: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087ebb0: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ebb3: jl 0x87f1a1 */ if ((fS!=fO)) goto L_0087f1a1;
L_0087ebb9:; BB(0x0087ebb9);
    /* 0087ebb9: lea edx, [eax + 0xdc] */ r_edx = (u32)(r_eax+0xdcu);
    /* 0087ebbf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0087ebc2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0087ebc5: mov esi, dword ptr [ebp - 0x6c] */ r_esi = R32((u32)(r_ebp+0xffffff94u));
    /* 0087ebc8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087ebcb: jmp 0x87ebd1 */ goto L_0087ebd1;
L_0087ebcd:; BB(0x0087ebcd);
    /* 0087ebcd: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087ebd1:; BB(0x0087ebd1);
    /* 0087ebd1: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087ebd8: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087ebdb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ebdd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ebdf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ebe0: ja 0x87ebe4 */ if ((!fC&&!fZ)) goto L_0087ebe4;
L_0087ebe2:; BB(0x0087ebe2);
    /* 0087ebe2: fst st(1) */ ST(1) = ST(0);
L_0087ebe4:; BB(0x0087ebe4);
    /* 0087ebe4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ebe6: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0087ebe9: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087ebf0: fld dword ptr [ecx + edi*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x4u)));
    /* 0087ebf4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ebf6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ebf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ebf9: ja 0x87ebfd */ if ((!fC&&!fZ)) goto L_0087ebfd;
L_0087ebfb:; BB(0x0087ebfb);
    /* 0087ebfb: fst st(1) */ ST(1) = ST(0);
L_0087ebfd:; BB(0x0087ebfd);
    /* 0087ebfd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ebff: fstp dword ptr [ecx + edi*4 + 4] */ W_F32((u32)(r_ecx+r_edi*4+0x4u), ST(0)); FPOP();
    /* 0087ec03: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087ec0a: fld dword ptr [ecx + edi*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x8u)));
    /* 0087ec0e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ec10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ec12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ec13: ja 0x87ec17 */ if ((!fC&&!fZ)) goto L_0087ec17;
L_0087ec15:; BB(0x0087ec15);
    /* 0087ec15: fst st(1) */ ST(1) = ST(0);
L_0087ec17:; BB(0x0087ec17);
    /* 0087ec17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ec19: fstp dword ptr [ecx + edi*4 + 8] */ W_F32((u32)(r_ecx+r_edi*4+0x8u), ST(0)); FPOP();
    /* 0087ec1d: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087ec24: fld dword ptr [ecx + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0xcu)));
    /* 0087ec28: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ec2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ec2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ec2d: ja 0x87ec31 */ if ((!fC&&!fZ)) goto L_0087ec31;
L_0087ec2f:; BB(0x0087ec2f);
    /* 0087ec2f: fst st(1) */ ST(1) = ST(0);
L_0087ec31:; BB(0x0087ec31);
    /* 0087ec31: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ec33: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087ec36: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ec38: jle 0x87ebcd */ if ((fZ||fS!=fO)) goto L_0087ebcd;
L_0087ec3a:; BB(0x0087ec3a);
    /* 0087ec3a: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087ec3e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087ec41: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087ec44: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
L_0087ec4a:; BB(0x0087ec4a);
    /* 0087ec4a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0087ec4d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0087ec50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087ec53: jmp 0x87ec59 */ goto L_0087ec59;
L_0087ec55:; BB(0x0087ec55);
    /* 0087ec55: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087ec59:; BB(0x0087ec59);
    /* 0087ec59: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087ec60: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087ec63: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ec65: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ec67: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ec68: ja 0x87ec6c */ if ((!fC&&!fZ)) goto L_0087ec6c;
L_0087ec6a:; BB(0x0087ec6a);
    /* 0087ec6a: fst st(1) */ ST(1) = ST(0);
L_0087ec6c:; BB(0x0087ec6c);
    /* 0087ec6c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ec6e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087ec6f: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ec71: jl 0x87ec55 */ if ((fS!=fO)) goto L_0087ec55;
L_0087ec73:; BB(0x0087ec73);
    /* 0087ec73: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087ec77: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087ec7a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
L_0087ec7d:; BB(0x0087ec7d);
    /* 0087ec7d: add eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ec82: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ec83: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0087ec89: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ec8b: jle 0x87ea42 */ if ((fZ||fS!=fO)) goto L_0087ea42;
L_0087ec91:; BB(0x0087ec91);
    /* 0087ec91: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087ec94: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0087ec97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0087ec99:; BB(0x0087ec99);
    /* 0087ec99: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0087ec9c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ec9f: jl 0x87ef16 */ if ((fS!=fO)) goto L_0087ef16;
L_0087eca5:; BB(0x0087eca5);
    /* 0087eca5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087eca7: fmul qword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe0u));
L_0087ecaa:; BB(0x0087ecaa);
    /* 0087ecaa: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087ecac: fadd qword ptr [0x99a990] */ ST(0) = ST(0) + R_F64((u32)(0x99a990u));
    /* 0087ecb2: mov eax, 0xc479c000 */ r_eax = 0xc479c000u;
    /* 0087ecb7: mov edx, 0xc479c000 */ r_edx = 0xc479c000u;
    /* 0087ecbc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087ecbe: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0087ecc1: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0087ecc4: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
L_0087ecc7:; BB(0x0087ecc7);
    /* 0087ecc7: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087ecca: mov dword ptr [ebp - 0xa8], edi */ W32((u32)(r_ebp+0xffffff58u), r_edi);
    /* 0087ecd0: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087ecd6: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087ecd9: fadd qword ptr [ebp - 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa0u));
    /* 0087ecdc: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0087ecdf: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087ece2: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87ece7u); f_008c9b28();
    /* 0087ece7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087ecea: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087eced: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087ecf3: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087ecfa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087ecff: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087ed05: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087ed0b: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087ed11: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087ed17: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0087ed1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ed1f: jl 0x87f159 */ if ((fS!=fO)) goto L_0087f159;
L_0087ed25:; BB(0x0087ed25);
    /* 0087ed25: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0087ed28: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0087ed2e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ed30: jl 0x87ed52 */ if ((fS!=fO)) goto L_0087ed52;
L_0087ed32:; BB(0x0087ed32);
    /* 0087ed32: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087ed38: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0087ed3e: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 0087ed41: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ed44: mov edx, dword ptr [esi + eax*4] */ r_edx = R32((u32)(r_esi+r_eax*4));
    /* 0087ed47: mov eax, 0xc479c000 */ r_eax = 0xc479c000u;
    /* 0087ed4c: mov dword ptr [edx + ecx*2 + 8], eax */ W32((u32)(r_edx+r_ecx*2+0x8u), r_eax);
    /* 0087ed50: jmp 0x87ed71 */ goto L_0087ed71;
L_0087ed52:; BB(0x0087ed52);
    /* 0087ed52: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087ed58: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0087ed5e: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 0087ed61: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ed64: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 0087ed67: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087ed6a: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 0087ed6d: mov dword ptr [eax + ecx*2 + 8], edx */ W32((u32)(r_eax+r_ecx*2+0x8u), r_edx);
L_0087ed71:; BB(0x0087ed71);
    /* 0087ed71: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087ed72: cmp edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ed75: jl 0x87ecc7 */ if ((fS!=fO)) goto L_0087ecc7;
L_0087ed7b:; BB(0x0087ed7b);
    /* 0087ed7b: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
    /* 0087ed81: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087ed83: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087ed89: mov edi, dword ptr [ebp - 0x90] */ r_edi = R32((u32)(r_ebp+0xffffff70u));
    /* 0087ed8f: mov eax, dword ptr [ecx + edi*4] */ r_eax = R32((u32)(r_ecx+r_edi*4));
    /* 0087ed92: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ed95: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0087ed98: fld dword ptr [0x99abe8] */ FPUSH(R_F32((u32)(0x99abe8u)));
    /* 0087ed9e: fcom dword ptr [ecx + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x8u))); 
    /* 0087eda1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087eda3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087eda4: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087edaa:; BB(0x0087edaa);
    /* 0087edaa: mov edx, 1 */ r_edx = 0x1u;
    /* 0087edaf: fcom dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); 
    /* 0087edb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087edb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087edb5: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087edbb:; BB(0x0087edbb);
    /* 0087edbb: mov edx, 2 */ r_edx = 0x2u;
    /* 0087edc0: fcom dword ptr [ecx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x10u))); 
    /* 0087edc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087edc5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087edc6: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087edcc:; BB(0x0087edcc);
    /* 0087edcc: mov edx, 3 */ r_edx = 0x3u;
    /* 0087edd1: fcom dword ptr [ecx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x14u))); 
    /* 0087edd4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087edd6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087edd7: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087eddd:; BB(0x0087eddd);
    /* 0087eddd: mov edx, 4 */ r_edx = 0x4u;
    /* 0087ede2: fcom dword ptr [ecx + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x18u))); 
    /* 0087ede5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ede7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ede8: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087edee:; BB(0x0087edee);
    /* 0087edee: mov edx, 5 */ r_edx = 0x5u;
    /* 0087edf3: fcom dword ptr [ecx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x1cu))); 
    /* 0087edf6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087edf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087edf9: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087edff:; BB(0x0087edff);
    /* 0087edff: mov edx, 6 */ r_edx = 0x6u;
    /* 0087ee04: fcom dword ptr [ecx + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x20u))); 
    /* 0087ee07: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee09: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee0a: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee10:; BB(0x0087ee10);
    /* 0087ee10: mov edx, 7 */ r_edx = 0x7u;
    /* 0087ee15: fcom dword ptr [ecx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x24u))); 
    /* 0087ee18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee1b: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee1d:; BB(0x0087ee1d);
    /* 0087ee1d: mov edx, 8 */ r_edx = 0x8u;
    /* 0087ee22: fcom dword ptr [ecx + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x28u))); 
    /* 0087ee25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee28: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee2a:; BB(0x0087ee2a);
    /* 0087ee2a: mov edx, 9 */ r_edx = 0x9u;
    /* 0087ee2f: fcom dword ptr [ecx + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x2cu))); 
    /* 0087ee32: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee34: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee35: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee37:; BB(0x0087ee37);
    /* 0087ee37: mov edx, 0xa */ r_edx = 0xau;
    /* 0087ee3c: fcom dword ptr [ecx + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x30u))); 
    /* 0087ee3f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee41: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee42: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee44:; BB(0x0087ee44);
    /* 0087ee44: mov edx, 0xb */ r_edx = 0xbu;
    /* 0087ee49: fcom dword ptr [ecx + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x34u))); 
    /* 0087ee4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee4f: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee51:; BB(0x0087ee51);
    /* 0087ee51: mov edx, 0xc */ r_edx = 0xcu;
    /* 0087ee56: fcom dword ptr [ecx + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x38u))); 
    /* 0087ee59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee5c: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee5e:; BB(0x0087ee5e);
    /* 0087ee5e: mov edx, 0xd */ r_edx = 0xdu;
    /* 0087ee63: fcom dword ptr [ecx + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3cu))); 
    /* 0087ee66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee69: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee6b:; BB(0x0087ee6b);
    /* 0087ee6b: mov edx, 0xe */ r_edx = 0xeu;
    /* 0087ee70: fcom dword ptr [ecx + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x40u))); 
    /* 0087ee73: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee75: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee76: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee78:; BB(0x0087ee78);
    /* 0087ee78: mov edx, 0xf */ r_edx = 0xfu;
    /* 0087ee7d: fcom dword ptr [ecx + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x44u))); 
    /* 0087ee80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ee82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ee83: jb 0x87ee8a */ if (fC) goto L_0087ee8a;
L_0087ee85:; BB(0x0087ee85);
    /* 0087ee85: mov edx, 0x10 */ r_edx = 0x10u;
L_0087ee8a:; BB(0x0087ee8a);
    /* 0087ee8a: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0087ee90: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087ee96: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0087ee98: mov edx, 0x37 */ r_edx = 0x37u;
    /* 0087ee9d: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087eea3: mov ecx, edi */ r_ecx = r_edi;
    /* 0087eea5: mov edi, dword ptr [eax + ecx*4] */ r_edi = R32((u32)(r_eax+r_ecx*4));
    /* 0087eea8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087eeab: mov ecx, dword ptr [edi + eax*4] */ r_ecx = R32((u32)(r_edi+r_eax*4));
L_0087eeae:; BB(0x0087eeae);
    /* 0087eeae: fcom dword ptr [ecx + edx*4 + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx*4+0x8u))); 
    /* 0087eeb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087eeb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087eeb5: jb 0x87f152 */ if (fC) goto L_0087f152;
L_0087eebb:; BB(0x0087eebb);
    /* 0087eebb: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087eebc: fcom dword ptr [ecx + edx*4 + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx*4+0x8u))); 
    /* 0087eec0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087eec2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087eec3: jb 0x87f17c */ if (fC) goto L_0087f17c;
L_0087eec9:; BB(0x0087eec9);
    /* 0087eec9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087eeca: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eecd: jg 0x87eeae */ if ((!fZ&&fS==fO)) goto L_0087eeae;
L_0087eecf:; BB(0x0087eecf);
    /* 0087eecf: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087eed1:; BB(0x0087eed1);
    /* 0087eed1: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0087eed7: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087eedd: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0087eee0: add dword ptr [ebp - 0x78], 0xe0 */ { u32 ad = (u32)(r_ebp+0xffffff88u);  u32 a = R32(ad); u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087eee7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087eeea: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087eeeb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0087eeee: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087eef1: jl 0x87e95a */ if ((fS!=fO)) goto L_0087e95a;
L_0087eef7:; BB(0x0087eef7);
    /* 0087eef7: mov esi, dword ptr [ebp - 0x80] */ r_esi = R32((u32)(r_ebp+0xffffff80u));
    /* 0087eefa: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087eefd: jl 0x87e7b8 */ if ((fS!=fO)) goto L_0087e7b8;
L_0087ef03:; BB(0x0087ef03);
    /* 0087ef03: mov edi, dword ptr [ebp - 0x70] */ r_edi = R32((u32)(r_ebp+0xffffff90u));
    /* 0087ef06: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087ef0c: mov esi, dword ptr [ebp - 0x74] */ r_esi = R32((u32)(r_ebp+0xffffff8cu));
    /* 0087ef0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0087ef11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087ef12: mov esp, ebx */ r_esp = r_ebx;
    /* 0087ef14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087ef15: ret  */ FN_RET(0x0087ca38); r_esp += 4; return;
L_0087ef16:; BB(0x0087ef16);
    /* 0087ef16: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087ef18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087ef1a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087ef1c: fmul qword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe0u));
    /* 0087ef1f: fld qword ptr [0x99a9b0] */ FPUSH(R_F64((u32)(0x99a9b0u)));
    /* 0087ef25: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ef27: fld qword ptr [0x99a9a0] */ FPUSH(R_F64((u32)(0x99a9a0u)));
    /* 0087ef2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087ef2f: fld qword ptr [0x99a998] */ FPUSH(R_F64((u32)(0x99a998u)));
    /* 0087ef35: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0087ef38: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0087ef3b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 0087ef3e: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0087ef41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ef43: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0087ef46: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0087ef49: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087ef4b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0087ef4e: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0087ef51: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0087ef54: mov esi, eax */ r_esi = r_eax;
L_0087ef56:; BB(0x0087ef56);
    /* 0087ef56: mov dword ptr [ebp - 0xa8], esi */ W32((u32)(r_ebp+0xffffff58u), r_esi);
    /* 0087ef5c: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 0087ef62: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0087ef65: fst qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 0087ef68: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087ef6b: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 0087ef6e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087ef70: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0087ef73: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087ef76: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87ef7bu); f_008c9b28();
    /* 0087ef7b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087ef7e: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087ef81: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087ef87: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087ef8e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087ef93: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087ef99: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087ef9f: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087efa5: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087efab: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0087efb1: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0087efb4: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087efb7: fld qword ptr [ebp - 0x38] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc8u)));
    /* 0087efba: fadd qword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa8u));
    /* 0087efbd: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0087efc0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087efc3: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87efc8u); f_008c9b28();
    /* 0087efc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087efcb: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087efce: fadd qword ptr [0x99a998] */ ST(0) = ST(0) + R_F64((u32)(0x99a998u));
    /* 0087efd4: fnstcw word ptr [ebp - 0xb8] */ W16((u32)(r_ebp+0xffffff48u), fcw);
    /* 0087efda: movzx eax, word ptr [ebp - 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff48u));
    /* 0087efe1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087efe6: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0087efec: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 0087eff2: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087eff8: fldcw word ptr [ebp - 0xb8] */ fcw = R16((u32)(r_ebp+0xffffff48u));
    /* 0087effe: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0087f004: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087f006: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087f009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087f00b: jge 0x87f00f */ if ((fS==fO)) goto L_0087f00f;
L_0087f00d:; BB(0x0087f00d);
    /* 0087f00d: mov eax, edx */ r_eax = r_edx;
L_0087f00f:; BB(0x0087f00f);
    /* 0087f00f: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0087f015: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f017: jge 0x87f01b */ if ((fS==fO)) goto L_0087f01b;
L_0087f019:; BB(0x0087f019);
    /* 0087f019: mov eax, edx */ r_eax = r_edx;
L_0087f01b:; BB(0x0087f01b);
    /* 0087f01b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f01d: jge 0x87f021 */ if ((fS==fO)) goto L_0087f021;
L_0087f01f:; BB(0x0087f01f);
    /* 0087f01f: mov edi, eax */ r_edi = r_eax;
L_0087f021:; BB(0x0087f021);
    /* 0087f021: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087f023: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087f025: jge 0x87f029 */ if ((fS==fO)) goto L_0087f029;
L_0087f027:; BB(0x0087f027);
    /* 0087f027: mov ecx, eax */ r_ecx = r_eax;
L_0087f029:; BB(0x0087f029);
    /* 0087f029: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f02b: jge 0x87f02f */ if ((fS==fO)) goto L_0087f02f;
L_0087f02d:; BB(0x0087f02d);
    /* 0087f02d: mov ecx, edx */ r_ecx = r_edx;
L_0087f02f:; BB(0x0087f02f);
    /* 0087f02f: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f031: jge 0x87f06f */ if ((fS==fO)) goto L_0087f06f;
L_0087f033:; BB(0x0087f033);
    /* 0087f033: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0087f036: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087f039: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
L_0087f03f:; BB(0x0087f03f);
    /* 0087f03f: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f041: jge 0x87f183 */ if ((fS==fO)) goto L_0087f183;
L_0087f047:; BB(0x0087f047);
    /* 0087f047: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0087f04a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087f04c: add eax, dword ptr [ebp - 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087f04f: fld dword ptr [ebp + eax - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_eax+0xffff8068u)));
    /* 0087f056: fld dword ptr [edx + edi*4] */ FPUSH(R_F32((u32)(r_edx+r_edi*4)));
    /* 0087f059: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087f05b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f05d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f05e: ja 0x87f062 */ if ((!fC&&!fZ)) goto L_0087f062;
L_0087f060:; BB(0x0087f060);
    /* 0087f060: fst st(1) */ ST(1) = ST(0);
L_0087f062:; BB(0x0087f062);
    /* 0087f062: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f064: fstp dword ptr [edx + edi*4] */ W_F32((u32)(r_edx+r_edi*4), ST(0)); FPOP();
    /* 0087f067: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087f068: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087f06b: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f06d: jl 0x87f03f */ if ((fS!=fO)) goto L_0087f03f;
L_0087f06f:; BB(0x0087f06f);
    /* 0087f06f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087f070: cmp esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f073: jl 0x87ef56 */ if ((fS!=fO)) goto L_0087ef56;
L_0087f079:; BB(0x0087f079);
    /* 0087f079: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0087f07c: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
    /* 0087f082: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087f085: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0087f088: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 0087f08b: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f08d: jge 0x87ecaa */ if ((fS==fO)) goto L_0087ecaa;
L_0087f093:; BB(0x0087f093);
    /* 0087f093: mov eax, esi */ r_eax = r_esi;
    /* 0087f095: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087f097: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f09a: jl 0x87f14a */ if ((fS!=fO)) goto L_0087f14a;
L_0087f0a0:; BB(0x0087f0a0);
    /* 0087f0a0: add edx, 0xdc */ {  u32 a = r_edx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087f0a6: mov esi, dword ptr [ebp - 0x6c] */ r_esi = R32((u32)(r_ebp+0xffffff94u));
    /* 0087f0a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087f0ac: jmp 0x87f0b2 */ goto L_0087f0b2;
L_0087f0ae:; BB(0x0087f0ae);
    /* 0087f0ae: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087f0b2:; BB(0x0087f0b2);
    /* 0087f0b2: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087f0b9: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087f0bc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087f0be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f0c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f0c1: ja 0x87f0c5 */ if ((!fC&&!fZ)) goto L_0087f0c5;
L_0087f0c3:; BB(0x0087f0c3);
    /* 0087f0c3: fst st(1) */ ST(1) = ST(0);
L_0087f0c5:; BB(0x0087f0c5);
    /* 0087f0c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f0c7: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0087f0ca: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087f0d1: fld dword ptr [ecx + edi*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x4u)));
    /* 0087f0d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087f0d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f0d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f0da: ja 0x87f0de */ if ((!fC&&!fZ)) goto L_0087f0de;
L_0087f0dc:; BB(0x0087f0dc);
    /* 0087f0dc: fst st(1) */ ST(1) = ST(0);
L_0087f0de:; BB(0x0087f0de);
    /* 0087f0de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f0e0: fstp dword ptr [ecx + edi*4 + 4] */ W_F32((u32)(r_ecx+r_edi*4+0x4u), ST(0)); FPOP();
    /* 0087f0e4: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087f0eb: fld dword ptr [ecx + edi*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x8u)));
    /* 0087f0ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087f0f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f0f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f0f4: ja 0x87f0f8 */ if ((!fC&&!fZ)) goto L_0087f0f8;
L_0087f0f6:; BB(0x0087f0f6);
    /* 0087f0f6: fst st(1) */ ST(1) = ST(0);
L_0087f0f8:; BB(0x0087f0f8);
    /* 0087f0f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f0fa: fstp dword ptr [ecx + edi*4 + 8] */ W_F32((u32)(r_ecx+r_edi*4+0x8u), ST(0)); FPOP();
    /* 0087f0fe: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087f105: fld dword ptr [ecx + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0xcu)));
    /* 0087f109: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087f10b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f10d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f10e: ja 0x87f112 */ if ((!fC&&!fZ)) goto L_0087f112;
L_0087f110:; BB(0x0087f110);
    /* 0087f110: fst st(1) */ ST(1) = ST(0);
L_0087f112:; BB(0x0087f112);
    /* 0087f112: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f114: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087f117: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f119: jle 0x87f0ae */ if ((fZ||fS!=fO)) goto L_0087f0ae;
L_0087f11b:; BB(0x0087f11b);
    /* 0087f11b: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087f11f: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
L_0087f125:; BB(0x0087f125);
    /* 0087f125: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
L_0087f128:; BB(0x0087f128);
    /* 0087f128: fld dword ptr [ebp + edx - 0x7f98] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xffff8068u)));
    /* 0087f12f: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087f132: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087f134: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f136: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f137: ja 0x87f13b */ if ((!fC&&!fZ)) goto L_0087f13b;
L_0087f139:; BB(0x0087f139);
    /* 0087f139: fst st(1) */ ST(1) = ST(0);
L_0087f13b:; BB(0x0087f13b);
    /* 0087f13b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f13d: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0087f140: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087f141: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f143: jl 0x87f128 */ if ((fS!=fO)) goto L_0087f128;
L_0087f145:; BB(0x0087f145);
    /* 0087f145: jmp 0x87ecaa */ goto L_0087ecaa;
L_0087f14a:; BB(0x0087f14a);
    /* 0087f14a: add edx, 0xdc */ {  u32 a = r_edx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087f150: jmp 0x87f125 */ goto L_0087f125;
L_0087f152:; BB(0x0087f152);
    /* 0087f152: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f154: jmp 0x87eed1 */ goto L_0087eed1;
L_0087f159:; BB(0x0087f159);
    /* 0087f159: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0087f15f: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0087f165: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0087f168: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087f16b: mov edx, dword ptr [ecx + esi*4] */ r_edx = R32((u32)(r_ecx+r_esi*4));
    /* 0087f16e: mov eax, 0xc479c000 */ r_eax = 0xc479c000u;
    /* 0087f173: mov dword ptr [edx + edi*4 + 8], eax */ W32((u32)(r_edx+r_edi*4+0x8u), r_eax);
    /* 0087f177: jmp 0x87ed71 */ goto L_0087ed71;
L_0087f17c:; BB(0x0087f17c);
    /* 0087f17c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f17e: jmp 0x87eed1 */ goto L_0087eed1;
L_0087f183:; BB(0x0087f183);
    /* 0087f183: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087f184: cmp esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f187: jl 0x87ef56 */ if ((fS!=fO)) goto L_0087ef56;
L_0087f18d:; BB(0x0087f18d);
    /* 0087f18d: mov esi, dword ptr [ebp - 0x98] */ r_esi = R32((u32)(r_ebp+0xffffff68u));
    /* 0087f193: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0087f196: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0087f199: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 0087f19c: jmp 0x87ecaa */ goto L_0087ecaa;
L_0087f1a1:; BB(0x0087f1a1);
    /* 0087f1a1: lea edx, [eax + 0xdc] */ r_edx = (u32)(r_eax+0xdcu);
    /* 0087f1a7: jmp 0x87ec4a */ goto L_0087ec4a;
L_0087f1ac:; BB(0x0087f1ac);
    /* 0087f1ac: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0087f1af: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087f1b0: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0087f1b3: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f1b6: jl 0x87ea78 */ if ((fS!=fO)) goto L_0087ea78;
L_0087f1bc:; BB(0x0087f1bc);
    /* 0087f1bc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087f1bf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087f1c2: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 0087f1c5: jmp 0x87ec7d */ goto L_0087ec7d;
L_0087f1ca:; BB(0x0087f1ca);
    /* 0087f1ca: fld qword ptr [0x99a9d8] */ FPUSH(R_F64((u32)(0x99a9d8u)));
    /* 0087f1d0: fld qword ptr [0x99a9d0] */ FPUSH(R_F64((u32)(0x99a9d0u)));
    /* 0087f1d6: fld qword ptr [0x99a9a8] */ FPUSH(R_F64((u32)(0x99a9a8u)));
    /* 0087f1dc: jmp 0x87ec99 */ goto L_0087ec99;
L_0087f1e1:; BB(0x0087f1e1);
    /* 0087f1e1: mov ecx, 0x4479c000 */ r_ecx = 0x4479c000u;
    /* 0087f1e6: jmp 0x87e9db */ goto L_0087e9db;
}

