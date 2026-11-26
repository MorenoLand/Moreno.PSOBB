#include "protos.h"

void f_00846164(void) /* sub_846164 */
{
    FN_ENTER(0x00846164);
    /* 00846164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00846165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00846166: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00846167: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00846168: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084616b: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0084616f: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00846172: movzx ebx, di */ r_ebx = (u32)(u16)r_edi;
    /* 00846175: mov eax, dword ptr [0xacd530] */ r_eax = R32((u32)(0xacd530u));
    /* 0084617a: fld dword ptr [0x98c5a4] */ FPUSH(R_F32((u32)(0x98c5a4u)));
    /* 00846180: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00846186: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846188: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0084618b: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0084618f: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 00846192: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00846195: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00846197: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00846199: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084619b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084619d: add edx, dword ptr [0xacd534] */ {  u32 a = r_edx; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008461a3: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008461a5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008461a7: jg 0x8461ab */ if ((!fZ&&fS==fO)) goto L_008461ab;
L_008461a9:; BB(0x008461a9);
    /* 008461a9: mov ebx, eax */ r_ebx = r_eax;
L_008461ab:; BB(0x008461ab);
    /* 008461ab: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 008461b0: mov dword ptr [0xacd530], ebx */ W32((u32)(0xacd530u), r_ebx);
    /* 008461b6: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008461bb: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008461c0: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 008461c5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008461c8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008461cc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008461d1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008461d5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008461d9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 008461dd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008461e0: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 008461e6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008461e8: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008461ec: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008461ef: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008461f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008461f8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008461fc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00846200: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00846204: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00846207: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 0084620d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00846211: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846213: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00846216: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084621a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084621f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00846223: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00846227: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0084622b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084622e: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00846234: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00846238: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084623a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084623d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00846241: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00846246: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084624a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084624e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00846252: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00846255: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00846259: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084625d: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00846261: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00846265: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_00846269:; BB(0x00846269);
    /* 00846269: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 0084626f: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846275: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 0084627b: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084627d: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0084627f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846281: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846287: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084628a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0084628c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084628e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846290: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00846293: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846295: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846297: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846299: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0084629b: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 008462a1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008462a3: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 008462a9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008462ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008462ad: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 008462b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008462b5: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 008462bb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008462bd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008462bf: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 008462c2: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 008462c8: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008462ca: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 008462d0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008462d2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008462d4: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 008462da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008462dc: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 008462e2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008462e4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008462e6: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 008462e9: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008462ef: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008462f5: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 008462f8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008462fa: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008462fd: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008462ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846301: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00846303: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00846309: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0084630c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084630e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846310: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00846312: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846314: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 00846317: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 0084631d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084631f: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846325: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846327: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846329: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 0084632f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846331: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846333: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00846336: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 0084633c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084633e: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846344: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846346: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846348: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 0084634e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846350: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846352: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 00846355: mov esi, dword ptr [ecx + 0x18] */ r_esi = R32((u32)(r_ecx+0x18u));
    /* 00846358: mov eax, esi */ r_eax = r_esi;
    /* 0084635a: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084635f: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846362: add eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846366: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00846369: mov eax, esi */ r_eax = r_esi;
    /* 0084636b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084636e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00846371: add eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846375: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00846378: mov eax, esi */ r_eax = r_esi;
    /* 0084637a: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084637d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00846380: add eax, dword ptr [esp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846384: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 00846387: shr esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0084638a: add esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084638e: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 00846391: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00846393: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00846395: jg 0x846399 */ if ((!fZ&&fS==fO)) goto L_00846399;
L_00846397:; BB(0x00846397);
    /* 00846397: mov eax, esi */ r_eax = r_esi;
L_00846399:; BB(0x00846399);
    /* 00846399: mov esi, 0xff */ r_esi = 0xffu;
    /* 0084639e: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008463a3: jl 0x8463a7 */ if ((fS!=fO)) goto L_008463a7;
L_008463a5:; BB(0x008463a5);
    /* 008463a5: mov eax, esi */ r_eax = r_esi;
L_008463a7:; BB(0x008463a7);
    /* 008463a7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008463a9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008463ab: jg 0x8463af */ if ((!fZ&&fS==fO)) goto L_008463af;
L_008463ad:; BB(0x008463ad);
    /* 008463ad: mov ebx, esi */ r_ebx = r_esi;
L_008463af:; BB(0x008463af);
    /* 008463af: mov esi, 0xff */ r_esi = 0xffu;
    /* 008463b4: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008463ba: jl 0x8463be */ if ((fS!=fO)) goto L_008463be;
L_008463bc:; BB(0x008463bc);
    /* 008463bc: mov ebx, esi */ r_ebx = r_esi;
L_008463be:; BB(0x008463be);
    /* 008463be: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008463c0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008463c2: jg 0x8463c6 */ if ((!fZ&&fS==fO)) goto L_008463c6;
L_008463c4:; BB(0x008463c4);
    /* 008463c4: mov ebp, esi */ r_ebp = r_esi;
L_008463c6:; BB(0x008463c6);
    /* 008463c6: mov esi, 0xff */ r_esi = 0xffu;
    /* 008463cb: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008463d1: jl 0x8463d5 */ if ((fS!=fO)) goto L_008463d5;
L_008463d3:; BB(0x008463d3);
    /* 008463d3: mov ebp, esi */ r_ebp = r_esi;
L_008463d5:; BB(0x008463d5);
    /* 008463d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008463d7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008463d9: jg 0x8463dd */ if ((!fZ&&fS==fO)) goto L_008463dd;
L_008463db:; BB(0x008463db);
    /* 008463db: mov edi, esi */ r_edi = r_esi;
L_008463dd:; BB(0x008463dd);
    /* 008463dd: mov esi, 0xff */ r_esi = 0xffu;
    /* 008463e2: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008463e8: jl 0x8463ec */ if ((fS!=fO)) goto L_008463ec;
L_008463ea:; BB(0x008463ea);
    /* 008463ea: mov edi, esi */ r_edi = r_esi;
L_008463ec:; BB(0x008463ec);
    /* 008463ec: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008463ef: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008463f1: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008463f4: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 008463f7: or ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008463f9: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008463fb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 008463fe: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00846401: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00846405: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846408: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084640c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084640e: jne 0x846269 */ if (!fZ) goto L_00846269;
L_00846414:; BB(0x00846414);
    /* 00846414: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00846417: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00846418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00846419: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084641a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084641b: ret  */ FN_RET(0x00846164); r_esp += 4; return;
}

void f_0084641c(void) /* sub_84641C */
{
    FN_ENTER(0x0084641c);
    /* 0084641c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084641d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084641e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084641f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00846420: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00846423: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00846427: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00846429: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0084642c: fld dword ptr [0x98c5a0] */ FPUSH(R_F32((u32)(0x98c5a0u)));
    /* 00846432: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00846438: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084643a: and ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00846440: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00846443: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00846446: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846448: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084644a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084644c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084644e: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00846451: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846457: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846459: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084645d: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 00846460: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00846462: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00846466: mov eax, dword ptr [0xacd530] */ r_eax = R32((u32)(0xacd530u));
    /* 0084646b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084646d: jg 0x846471 */ if ((!fZ&&fS==fO)) goto L_00846471;
L_0084646f:; BB(0x0084646f);
    /* 0084646f: mov ecx, eax */ r_ecx = r_eax;
L_00846471:; BB(0x00846471);
    /* 00846471: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00846476: mov dword ptr [0xacd530], ecx */ W32((u32)(0xacd530u), r_ecx);
    /* 0084647c: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00846481: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 00846486: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00846489: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084648d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00846492: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00846496: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084649a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0084649e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008464a1: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 008464a7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008464a9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008464ad: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008464b2: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 008464b5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008464b8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008464bc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008464c1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008464c5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008464c9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 008464cd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008464d0: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 008464d6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008464d8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008464da: jg 0x8464de */ if ((!fZ&&fS==fO)) goto L_008464de;
L_008464dc:; BB(0x008464dc);
    /* 008464dc: mov ebp, edi */ r_ebp = r_edi;
L_008464de:; BB(0x008464de);
    /* 008464de: mov edi, 0xff */ r_edi = 0xffu;
    /* 008464e3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008464e7: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008464ec: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 008464ef: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008464f2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008464f6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008464fb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008464ff: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00846503: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00846507: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084650a: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00846510: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846512: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846518: jl 0x84651c */ if ((fS!=fO)) goto L_0084651c;
L_0084651a:; BB(0x0084651a);
    /* 0084651a: mov ebp, edi */ r_ebp = r_edi;
L_0084651c:; BB(0x0084651c);
    /* 0084651c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084651e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00846522: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846527: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0084652a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084652d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00846531: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00846536: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084653a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084653e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00846542: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00846545: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00846549: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084654e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00846551: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00846553: jg 0x846557 */ if ((!fZ&&fS==fO)) goto L_00846557;
L_00846555:; BB(0x00846555);
    /* 00846555: mov ecx, edi */ r_ecx = r_edi;
L_00846557:; BB(0x00846557);
    /* 00846557: mov edi, 0xff */ r_edi = 0xffu;
    /* 0084655c: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846562: jl 0x846566 */ if ((fS!=fO)) goto L_00846566;
L_00846564:; BB(0x00846564);
    /* 00846564: mov ecx, edi */ r_ecx = r_edi;
L_00846566:; BB(0x00846566);
    /* 00846566: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00846568: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0084656a: jg 0x84656e */ if ((!fZ&&fS==fO)) goto L_0084656e;
L_0084656c:; BB(0x0084656c);
    /* 0084656c: mov edx, edi */ r_edx = r_edi;
L_0084656e:; BB(0x0084656e);
    /* 0084656e: mov edi, 0xff */ r_edi = 0xffu;
    /* 00846573: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846579: jl 0x84657d */ if ((fS!=fO)) goto L_0084657d;
L_0084657b:; BB(0x0084657b);
    /* 0084657b: mov edx, edi */ r_edx = r_edi;
L_0084657d:; BB(0x0084657d);
    /* 0084657d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084657f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00846581: jg 0x846585 */ if ((!fZ&&fS==fO)) goto L_00846585;
L_00846583:; BB(0x00846583);
    /* 00846583: mov eax, edi */ r_eax = r_edi;
L_00846585:; BB(0x00846585);
    /* 00846585: mov edi, 0xff */ r_edi = 0xffu;
    /* 0084658a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084658f: jl 0x846593 */ if ((fS!=fO)) goto L_00846593;
L_00846591:; BB(0x00846591);
    /* 00846591: mov eax, edi */ r_eax = r_edi;
L_00846593:; BB(0x00846593);
    /* 00846593: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00846596: or ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00846598: shl ebp, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0084659b: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0084659e: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008465a0: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008465a2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008465a4: je 0x846870 */ if (fZ) goto L_00846870;
L_008465aa:; BB(0x008465aa);
    /* 008465aa: cmp ebx, 0x200 */ {  u32 a = r_ebx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008465b0: je 0x846711 */ if (fZ) goto L_00846711;
L_008465b6:; BB(0x008465b6);
    /* 008465b6: fld dword ptr [0x98c59c] */ FPUSH(R_F32((u32)(0x98c59cu)));
    /* 008465bc: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008465c0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
L_008465c4:; BB(0x008465c4);
    /* 008465c4: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008465ca: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008465d0: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 008465d3: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008465d5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008465d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008465d9: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 008465df: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008465e2: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008465e4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008465e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008465e8: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008465eb: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008465f1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008465f3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008465f5: mov edi, edx */ r_edi = r_edx;
    /* 008465f7: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008465fa: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 008465fd: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00846601: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00846605: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00846608: fadd dword ptr [edi*4 + 0x98c588] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x98c588u));
    /* 0084660f: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00846611: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846613: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846615: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846617: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846619: fadd dword ptr [ebx + eax*8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8));
    /* 0084661c: fstp dword ptr [ebx + eax*8] */ W_F32((u32)(r_ebx+r_eax*8), ST(0)); FPOP();
    /* 0084661f: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846625: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846627: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 0084662d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084662f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846631: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846637: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846639: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 0084663f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00846641: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846643: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00846645: fadd dword ptr [ebx + eax*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x4u));
    /* 00846649: fstp dword ptr [ebx + eax*8 + 4] */ W_F32((u32)(r_ebx+r_eax*8+0x4u), ST(0)); FPOP();
    /* 0084664d: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846653: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00846655: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 0084665b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084665d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084665f: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846665: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00846667: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 0084666d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084666f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846671: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846673: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846675: fadd dword ptr [ebx + eax*8 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x8u));
    /* 00846679: fstp dword ptr [ebx + eax*8 + 8] */ W_F32((u32)(r_ebx+r_eax*8+0x8u), ST(0)); FPOP();
    /* 0084667d: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846683: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846689: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0084668c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084668e: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00846691: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846693: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846695: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00846697: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 0084669d: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 008466a0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008466a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008466a4: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008466a6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008466a8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008466aa: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008466ad: fadd dword ptr [ebx + eax*8 + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0xcu));
    /* 008466b1: fstp dword ptr [ebx + eax*8 + 0xc] */ W_F32((u32)(r_ebx+r_eax*8+0xcu), ST(0)); FPOP();
    /* 008466b5: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 008466bb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008466bd: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 008466c3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008466c5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008466c7: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008466ca: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 008466d0: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008466d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008466d4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008466d6: fadd dword ptr [ebx + eax*8 + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x10u));
    /* 008466da: fstp dword ptr [ebx + eax*8 + 0x10] */ W_F32((u32)(r_ebx+r_eax*8+0x10u), ST(0)); FPOP();
    /* 008466de: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 008466e4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008466e6: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 008466ec: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008466ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008466f0: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 008466f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008466f8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008466fa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008466fc: fadd dword ptr [ebx + eax*8 + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x14u));
    /* 00846700: fstp dword ptr [ebx + eax*8 + 0x14] */ W_F32((u32)(r_ebx+r_eax*8+0x14u), ST(0)); FPOP();
    /* 00846704: jne 0x8465c4 */ if (!fZ) goto L_008465c4;
L_0084670a:; BB(0x0084670a);
    /* 0084670a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084670c: jmp 0x8469af */ goto L_008469af;
L_00846711:; BB(0x00846711);
    /* 00846711: fld dword ptr [0x98c59c] */ FPUSH(R_F32((u32)(0x98c59cu)));
    /* 00846717: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0084671b: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
L_0084671f:; BB(0x0084671f);
    /* 0084671f: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846725: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 0084672b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0084672e: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00846730: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846732: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846734: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 0084673a: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084673d: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084673f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846741: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846743: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00846746: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 0084674c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084674e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00846750: mov edi, edx */ r_edi = r_edx;
    /* 00846752: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00846755: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00846758: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0084675c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00846760: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00846763: fadd dword ptr [edi*4 + 0x98c588] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x98c588u));
    /* 0084676a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084676c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084676e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846770: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846772: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846774: fadd dword ptr [ebx + eax*8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8));
    /* 00846777: fstp dword ptr [ebx + eax*8] */ W_F32((u32)(r_ebx+r_eax*8), ST(0)); FPOP();
    /* 0084677a: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846780: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846782: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846788: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084678a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084678c: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846792: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846794: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 0084679a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084679c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084679e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008467a0: fadd dword ptr [ebx + eax*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x4u));
    /* 008467a4: fstp dword ptr [ebx + eax*8 + 4] */ W_F32((u32)(r_ebx+r_eax*8+0x4u), ST(0)); FPOP();
    /* 008467a8: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 008467ae: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 008467b0: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 008467b6: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008467b8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008467ba: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 008467c0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008467c2: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 008467c8: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008467ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008467cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008467ce: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008467d0: fadd dword ptr [ebx + eax*8 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x8u));
    /* 008467d4: fstp dword ptr [ebx + eax*8 + 8] */ W_F32((u32)(r_ebx+r_eax*8+0x8u), ST(0)); FPOP();
    /* 008467d8: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008467de: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008467e4: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 008467e7: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008467e9: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008467ec: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008467ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008467f0: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008467f2: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008467f8: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 008467fb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008467fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008467ff: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00846801: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846803: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846805: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846808: fadd dword ptr [ebx + eax*8 + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0xcu));
    /* 0084680c: fstp dword ptr [ebx + eax*8 + 0xc] */ W_F32((u32)(r_ebx+r_eax*8+0xcu), ST(0)); FPOP();
    /* 00846810: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846816: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846818: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 0084681e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846820: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846822: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00846825: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 0084682b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084682d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084682f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846831: fadd dword ptr [ebx + eax*8 + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x10u));
    /* 00846835: fstp dword ptr [ebx + eax*8 + 0x10] */ W_F32((u32)(r_ebx+r_eax*8+0x10u), ST(0)); FPOP();
    /* 00846839: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 0084683f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846841: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846847: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846849: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084684b: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846851: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846853: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846855: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846857: fadd dword ptr [ebx + eax*8 + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*8+0x14u));
    /* 0084685b: mov dword ptr [ebx + eax*8 + 0x18], ebp */ W32((u32)(r_ebx+r_eax*8+0x18u), r_ebp);
    /* 0084685f: fstp dword ptr [ebx + eax*8 + 0x14] */ W_F32((u32)(r_ebx+r_eax*8+0x14u), ST(0)); FPOP();
    /* 00846863: jne 0x84671f */ if (!fZ) goto L_0084671f;
L_00846869:; BB(0x00846869);
    /* 00846869: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084686b: jmp 0x8469af */ goto L_008469af;
L_00846870:; BB(0x00846870);
    /* 00846870: fld dword ptr [0x98c59c] */ FPUSH(R_F32((u32)(0x98c59cu)));
    /* 00846876: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0084687a: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
L_0084687e:; BB(0x0084687e);
    /* 0084687e: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846884: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 0084688a: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0084688d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084688f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846891: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846893: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846899: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084689c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084689e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008468a0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008468a2: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008468a5: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008468ab: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008468ad: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008468af: mov edi, edx */ r_edi = r_edx;
    /* 008468b1: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008468b4: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 008468b7: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008468bb: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 008468bf: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008468c2: fadd dword ptr [edi*4 + 0x98c588] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x98c588u));
    /* 008468c9: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008468cb: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008468cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008468cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008468d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008468d3: fstp dword ptr [ebx + eax*8] */ W_F32((u32)(r_ebx+r_eax*8), ST(0)); FPOP();
    /* 008468d6: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 008468dc: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008468de: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 008468e4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008468e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008468e8: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 008468ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008468f0: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 008468f6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008468f8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008468fa: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008468fc: fstp dword ptr [ebx + eax*8 + 4] */ W_F32((u32)(r_ebx+r_eax*8+0x4u), ST(0)); FPOP();
    /* 00846900: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846906: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00846908: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 0084690e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846910: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846912: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846918: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084691a: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846920: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846922: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846924: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846926: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846928: fstp dword ptr [ebx + eax*8 + 8] */ W_F32((u32)(r_ebx+r_eax*8+0x8u), ST(0)); FPOP();
    /* 0084692c: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0084692f: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846935: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846937: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 0084693d: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00846940: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00846942: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846944: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00846946: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 0084694c: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0084694f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00846951: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846953: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00846955: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846957: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846959: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084695c: fstp dword ptr [ebx + eax*8 + 0xc] */ W_F32((u32)(r_ebx+r_eax*8+0xcu), ST(0)); FPOP();
    /* 00846960: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846966: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846968: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0084696b: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846971: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00846973: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846975: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 0084697b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084697d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084697f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846981: fstp dword ptr [ebx + eax*8 + 0x10] */ W_F32((u32)(r_ebx+r_eax*8+0x10u), ST(0)); FPOP();
    /* 00846985: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 0084698b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084698d: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846993: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846995: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00846997: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 0084699d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084699f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008469a1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008469a3: fstp dword ptr [ebx + eax*8 + 0x14] */ W_F32((u32)(r_ebx+r_eax*8+0x14u), ST(0)); FPOP();
    /* 008469a7: jne 0x84687e */ if (!fZ) goto L_0084687e;
L_008469ad:; BB(0x008469ad);
    /* 008469ad: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008469af:; BB(0x008469af);
    /* 008469af: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 008469b4: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008469b9: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 008469be: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008469c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008469c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008469c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008469c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008469c5: ret  */ FN_RET(0x0084641c); r_esp += 4; return;
}

void f_008469c8(void) /* sub_8469C8 */
{
    FN_ENTER(0x008469c8);
    /* 008469c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008469c9: mov edx, ecx */ r_edx = r_ecx;
    /* 008469cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008469cd: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 008469d0: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008469d6: je 0x846a21 */ if (fZ) goto L_00846a21;
L_008469d8:; BB(0x008469d8);
    /* 008469d8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008469db: mov ebx, edx */ r_ebx = r_edx;
L_008469dd:; BB(0x008469dd);
    /* 008469dd: mov ecx, eax */ r_ecx = r_eax;
    /* 008469df: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008469e5: cmp ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008469eb: je 0x8469f9 */ if (fZ) goto L_008469f9;
L_008469ed:; BB(0x008469ed);
    /* 008469ed: mov dword ptr [0xacd530], 0 */ W32((u32)(0xacd530u), 0x0u);
    /* 008469f7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
L_008469f9:; BB(0x008469f9);
    /* 008469f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008469fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008469fd: call dword ptr [eax*4 + 0xa22b80] */ { u32 t = R32((u32)(r_eax*4+0xa22b80u)); r_esp -= 4; W32(r_esp, 0x846a04u); call_ind(t); }
    /* 00846a04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00846a05: movsx eax, word ptr [ebx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 00846a09: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846a0b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846a0d: lea ebx, [ebx + eax + 4] */ r_ebx = (u32)(r_ebx+r_eax+0x4u);
    /* 00846a11: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00846a13: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00846a16: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00846a1c: jne 0x8469dd */ if (!fZ) goto L_008469dd;
L_00846a1e:; BB(0x00846a1e);
    /* 00846a1e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00846a21:; BB(0x00846a21);
    /* 00846a21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00846a22: ret  */ FN_RET(0x008469c8); r_esp += 4; return;
}

void f_00846a24(void) /* sub_846A24 */
{
    FN_ENTER(0x00846a24);
    /* 00846a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00846a25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00846a26: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00846a2a: mov ebx, dword ptr [0xacd530] */ r_ebx = R32((u32)(0xacd530u));
    /* 00846a30: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00846a33: movzx esi, cx */ r_esi = (u32)(u16)r_ecx;
    /* 00846a36: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00846a39: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 00846a3c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00846a3f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846a41: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846a43: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846a45: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846a47: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846a49: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846a4f: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846a51: jg 0x846a55 */ if ((!fZ&&fS==fO)) goto L_00846a55;
L_00846a53:; BB(0x00846a53);
    /* 00846a53: mov esi, ebx */ r_esi = r_ebx;
L_00846a55:; BB(0x00846a55);
    /* 00846a55: mov ebx, dword ptr [0xacd538] */ r_ebx = R32((u32)(0xacd538u));
    /* 00846a5b: or ebx, 0x900 */ {  u32 a = r_ebx; u32 b = 0x900u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00846a61: mov dword ptr [0xacd530], esi */ W32((u32)(0xacd530u), r_esi);
    /* 00846a67: mov dword ptr [0xacd538], ebx */ W32((u32)(0xacd538u), r_ebx);
    /* 00846a6d: jmp 0x846a72 */ goto L_00846a72;
L_00846a6f:; BB(0x00846a6f);
    /* 00846a6f: fstp dword ptr [eax - 0x18] */ W_F32((u32)(r_eax+0xffffffe8u), ST(0)); FPOP();
L_00846a72:; BB(0x00846a72);
    /* 00846a72: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846a78: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846a7e: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00846a84: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00846a86: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846a88: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846a8a: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846a90: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00846a93: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846a95: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846a97: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846a99: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00846a9c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846a9e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846aa0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846aa2: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00846aa4: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846aa7: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00846aaa: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846ab0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846ab2: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846ab8: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846abe: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846ac0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846ac2: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00846ac8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00846aca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846acc: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00846acf: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846ad5: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846ad7: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846add: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846adf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846ae1: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846ae7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846ae9: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846aef: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846af1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846af3: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846af6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00846af8: jne 0x846a6f */ if (!fZ) goto L_00846a6f;
L_00846afe:; BB(0x00846afe);
    /* 00846afe: fstp dword ptr [eax - 0x18] */ W_F32((u32)(r_eax+0xffffffe8u), ST(0)); FPOP();
    /* 00846b01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00846b02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00846b03: ret  */ FN_RET(0x00846a24); r_esp += 4; return;
}

void f_00846b04(void) /* sub_846B04 */
{
    FN_ENTER(0x00846b04);
    /* 00846b04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00846b05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00846b06: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00846b0a: mov ebx, dword ptr [0xacd530] */ r_ebx = R32((u32)(0xacd530u));
    /* 00846b10: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00846b13: movzx esi, cx */ r_esi = (u32)(u16)r_ecx;
    /* 00846b16: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00846b19: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 00846b1c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00846b1f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846b21: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846b23: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846b25: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846b27: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846b29: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846b2f: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846b31: jg 0x846b35 */ if ((!fZ&&fS==fO)) goto L_00846b35;
L_00846b33:; BB(0x00846b33);
    /* 00846b33: mov esi, ebx */ r_esi = r_ebx;
L_00846b35:; BB(0x00846b35);
    /* 00846b35: mov ebx, dword ptr [0xacd538] */ r_ebx = R32((u32)(0xacd538u));
    /* 00846b3b: and ebx, 0xfffff6ff */ {  u32 a = r_ebx; u32 b = 0xfffff6ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00846b41: mov dword ptr [0xacd530], esi */ W32((u32)(0xacd530u), r_esi);
    /* 00846b47: mov dword ptr [0xacd538], ebx */ W32((u32)(0xacd538u), r_ebx);
    /* 00846b4d: jmp 0x846b52 */ goto L_00846b52;
L_00846b4f:; BB(0x00846b4f);
    /* 00846b4f: fstp dword ptr [eax - 0x18] */ W_F32((u32)(r_eax+0xffffffe8u), ST(0)); FPOP();
L_00846b52:; BB(0x00846b52);
    /* 00846b52: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846b58: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846b5e: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00846b64: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00846b66: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846b68: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846b6a: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846b70: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00846b73: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846b75: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846b77: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846b79: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00846b7c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846b7e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846b80: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846b82: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00846b84: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846b87: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00846b8a: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846b90: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846b92: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846b98: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846b9e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846ba0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846ba2: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00846ba8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00846baa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846bac: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00846baf: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846bb5: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846bb7: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846bbd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846bbf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846bc1: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846bc7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846bc9: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846bcf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846bd1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846bd3: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846bd6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00846bd8: jne 0x846b4f */ if (!fZ) goto L_00846b4f;
L_00846bde:; BB(0x00846bde);
    /* 00846bde: fstp dword ptr [eax - 0x18] */ W_F32((u32)(r_eax+0xffffffe8u), ST(0)); FPOP();
    /* 00846be1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00846be2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00846be3: ret  */ FN_RET(0x00846b04); r_esp += 4; return;
}

void f_00846be4(void) /* sub_846BE4 */
{
    FN_ENTER(0x00846be4);
    /* 00846be4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00846be5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00846be6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00846bea: mov ebx, dword ptr [0xacd530] */ r_ebx = R32((u32)(0xacd530u));
    /* 00846bf0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00846bf3: movzx esi, cx */ r_esi = (u32)(u16)r_ecx;
    /* 00846bf6: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00846bf9: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 00846bfc: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00846bff: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846c01: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846c03: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846c05: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846c07: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846c09: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846c0f: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846c11: jg 0x846c15 */ if ((!fZ&&fS==fO)) goto L_00846c15;
L_00846c13:; BB(0x00846c13);
    /* 00846c13: mov esi, ebx */ r_esi = r_ebx;
L_00846c15:; BB(0x00846c15);
    /* 00846c15: mov ebx, dword ptr [0xacd538] */ r_ebx = R32((u32)(0xacd538u));
    /* 00846c1b: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00846c21: and ebx, 0xfffff7ff */ {  u32 a = r_ebx; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00846c27: mov dword ptr [0xacd530], esi */ W32((u32)(0xacd530u), r_esi);
    /* 00846c2d: mov dword ptr [0xacd538], ebx */ W32((u32)(0xacd538u), r_ebx);
    /* 00846c33: jmp 0x846c38 */ goto L_00846c38;
L_00846c35:; BB(0x00846c35);
    /* 00846c35: fstp dword ptr [eax - 0x18] */ W_F32((u32)(r_eax+0xffffffe8u), ST(0)); FPOP();
L_00846c38:; BB(0x00846c38);
    /* 00846c38: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846c3e: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846c44: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00846c4a: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00846c4c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846c4e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846c50: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846c56: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00846c59: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846c5b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846c5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846c5f: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00846c62: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846c64: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846c66: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846c68: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00846c6a: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846c6d: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00846c70: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846c76: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846c78: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846c7e: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846c84: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846c86: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846c88: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00846c8e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00846c90: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846c92: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00846c95: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846c9b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846c9d: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846ca3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846ca5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846ca7: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846cad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846caf: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846cb5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846cb7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846cb9: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00846cbe: jne 0x846c35 */ if (!fZ) goto L_00846c35;
L_00846cc4:; BB(0x00846cc4);
    /* 00846cc4: fstp dword ptr [eax - 0x18] */ W_F32((u32)(r_eax+0xffffffe8u), ST(0)); FPOP();
    /* 00846cc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00846cc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00846cc9: ret  */ FN_RET(0x00846be4); r_esp += 4; return;
}

void f_00846ccc(void) /* sub_846CCC */
{
    FN_ENTER(0x00846ccc);
    /* 00846ccc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00846ccd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00846cce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00846ccf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00846cd2: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00846cd6: mov esi, dword ptr [0xacd530] */ r_esi = R32((u32)(0xacd530u));
    /* 00846cdc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00846cde: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 00846ce1: and edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00846ce7: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 00846cea: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00846ced: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00846cef: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00846cf1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00846cf3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00846cf5: add ebp, dword ptr [0xacd534] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00846cfb: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00846cfe: lea ecx, [ecx + 8] */ r_ecx = (u32)(r_ecx+0x8u);
    /* 00846d01: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00846d03: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846d05: jg 0x846d09 */ if ((!fZ&&fS==fO)) goto L_00846d09;
L_00846d07:; BB(0x00846d07);
    /* 00846d07: mov eax, esi */ r_eax = r_esi;
L_00846d09:; BB(0x00846d09);
    /* 00846d09: mov dword ptr [0xacd530], eax */ W32((u32)(0xacd530u), r_eax);
    /* 00846d0e: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00846d13: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00846d18: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 00846d1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00846d1f: je 0x846ed3 */ if (fZ) goto L_00846ed3;
L_00846d25:; BB(0x00846d25);
    /* 00846d25: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00846d2b: je 0x846e01 */ if (fZ) goto L_00846e01;
L_00846d31:; BB(0x00846d31);
    /* 00846d31: fld dword ptr [0x98c598] */ FPUSH(R_F32((u32)(0x98c598u)));
L_00846d37:; BB(0x00846d37);
    /* 00846d37: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846d3d: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846d43: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00846d49: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00846d4c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00846d4e: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846d50: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846d52: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846d58: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00846d5b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846d5d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846d5f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846d61: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00846d64: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846d66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846d68: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846d6a: mov eax, edx */ r_eax = r_edx;
    /* 00846d6c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00846d6f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00846d72: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00846d75: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00846d78: fadd dword ptr [eax*4 + 0x98c580] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98c580u));
    /* 00846d7f: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00846d81: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00846d83: movzx esi, dx */ r_esi = (u32)(u16)r_edx;
    /* 00846d86: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846d88: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846d8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846d8c: fadd dword ptr [ebp + esi*8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_esi*8));
    /* 00846d90: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846d93: fstp dword ptr [ebp + esi*8] */ W_F32((u32)(r_ebp+r_esi*8), ST(0)); FPOP();
    /* 00846d97: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846d9d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846d9f: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846da5: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846dab: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846dad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846daf: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00846db2: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00846db8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846dba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846dbc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846dbe: fadd dword ptr [ebp + esi*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_esi*8+0x4u));
    /* 00846dc2: fstp dword ptr [ebp + esi*8 + 4] */ W_F32((u32)(r_ebp+r_esi*8+0x4u), ST(0)); FPOP();
    /* 00846dc6: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846dcc: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00846dce: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846dd4: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846dd6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846dd8: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846dde: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00846de0: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846de6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846de8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846dea: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846dec: fadd dword ptr [ebp + esi*8 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_esi*8+0x8u));
    /* 00846df0: fstp dword ptr [ebp + esi*8 + 8] */ W_F32((u32)(r_ebp+r_esi*8+0x8u), ST(0)); FPOP();
    /* 00846df4: jne 0x846d37 */ if (!fZ) goto L_00846d37;
L_00846dfa:; BB(0x00846dfa);
    /* 00846dfa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00846dfc: jmp 0x846f94 */ goto L_00846f94;
L_00846e01:; BB(0x00846e01);
    /* 00846e01: fld dword ptr [0x98c598] */ FPUSH(R_F32((u32)(0x98c598u)));
L_00846e07:; BB(0x00846e07);
    /* 00846e07: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846e0d: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846e13: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00846e19: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00846e1c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00846e1e: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846e20: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846e22: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846e28: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00846e2b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846e2d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846e2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846e31: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00846e34: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846e36: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846e38: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846e3a: mov eax, edx */ r_eax = r_edx;
    /* 00846e3c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00846e3f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00846e43: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00846e47: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00846e4a: fadd dword ptr [eax*4 + 0x98c580] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98c580u));
    /* 00846e51: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00846e53: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00846e55: movzx esi, dx */ r_esi = (u32)(u16)r_edx;
    /* 00846e58: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846e5a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846e5c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846e5e: fadd dword ptr [ebp + esi*8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_esi*8));
    /* 00846e62: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846e65: fstp dword ptr [ebp + esi*8] */ W_F32((u32)(r_ebp+r_esi*8), ST(0)); FPOP();
    /* 00846e69: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846e6f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846e71: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846e77: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846e7d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846e7f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846e81: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00846e84: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00846e8a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846e8c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846e8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846e90: fadd dword ptr [ebp + esi*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_esi*8+0x4u));
    /* 00846e94: fstp dword ptr [ebp + esi*8 + 4] */ W_F32((u32)(r_ebp+r_esi*8+0x4u), ST(0)); FPOP();
    /* 00846e98: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846e9e: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00846ea0: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846ea6: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846ea8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846eaa: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846eb0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00846eb2: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846eb8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846eba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846ebc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846ebe: fadd dword ptr [ebp + esi*8 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_esi*8+0x8u));
    /* 00846ec2: fstp dword ptr [ebp + esi*8 + 8] */ W_F32((u32)(r_ebp+r_esi*8+0x8u), ST(0)); FPOP();
    /* 00846ec6: jne 0x846e07 */ if (!fZ) goto L_00846e07;
L_00846ecc:; BB(0x00846ecc);
    /* 00846ecc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00846ece: jmp 0x846f94 */ goto L_00846f94;
L_00846ed3:; BB(0x00846ed3);
    /* 00846ed3: fld dword ptr [0x98c598] */ FPUSH(R_F32((u32)(0x98c598u)));
L_00846ed9:; BB(0x00846ed9);
    /* 00846ed9: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846edf: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846ee5: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00846eeb: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00846eee: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00846ef0: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846ef2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846ef4: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846efa: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00846efd: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846eff: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846f01: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846f03: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00846f06: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846f08: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846f0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846f0c: mov eax, edx */ r_eax = r_edx;
    /* 00846f0e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00846f11: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00846f15: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00846f19: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00846f1c: fadd dword ptr [eax*4 + 0x98c580] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98c580u));
    /* 00846f23: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00846f25: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00846f27: movzx esi, dx */ r_esi = (u32)(u16)r_edx;
    /* 00846f2a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846f2c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846f2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846f30: fstp dword ptr [ebp + esi*8] */ W_F32((u32)(r_ebp+r_esi*8), ST(0)); FPOP();
    /* 00846f34: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00846f37: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846f3d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846f3f: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00846f45: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00846f4b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846f4d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846f4f: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00846f55: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846f57: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846f59: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846f5b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00846f5e: fstp dword ptr [ebp + esi*8 + 4] */ W_F32((u32)(r_ebp+r_esi*8+0x4u), ST(0)); FPOP();
    /* 00846f62: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846f68: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00846f6a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846f6c: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00846f72: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00846f78: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00846f7a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00846f7c: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846f82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846f84: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846f86: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846f88: fstp dword ptr [ebp + esi*8 + 8] */ W_F32((u32)(r_ebp+r_esi*8+0x8u), ST(0)); FPOP();
    /* 00846f8c: jne 0x846ed9 */ if (!fZ) goto L_00846ed9;
L_00846f92:; BB(0x00846f92);
    /* 00846f92: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00846f94:; BB(0x00846f94);
    /* 00846f94: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00846f99: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00846f9e: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 00846fa3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00846fa6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00846fa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00846fa8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00846fa9: ret  */ FN_RET(0x00846ccc); r_esp += 4; return;
}

void f_00846fac(void) /* sub_846FAC */
{
    FN_ENTER(0x00846fac);
    /* 00846fac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00846fad: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00846fb0: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00846fb4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00846fb6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00846fb8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00846fbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00846fbc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00846fc0: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x846fc5u); f_008451f8();
    /* 00846fc5: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00846fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00846fca: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00846fce: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00846fd1: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00846fd3: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x846fd8u); f_008451f8();
    /* 00846fd8: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00846fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00846fdd: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00846fe1: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00846fe4: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00846fe6: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x846febu); f_008451f8();
    /* 00846feb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00846fee: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00846ff2: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00846ff6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00846ffa: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 00846ffe: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00847002: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847004: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00847008: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084700a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0084700d: fchs  */ ST(0) = -ST(0);
    /* 0084700f: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 00847013: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00847017: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0084701b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084701d: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00847021: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847023: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00847027: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847029: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0084702c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00847030: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00847034: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00847038: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 0084703c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084703e: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00847042: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847044: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00847047: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847049: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0084704c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00847050: fchs  */ ST(0) = -ST(0);
    /* 00847052: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00847056: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0084705a: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0084705d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084705f: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 00847063: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847065: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00847069: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084706b: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0084706e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847071: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00847072: ret  */ FN_RET(0x00846fac); r_esp += 4; return;
}

