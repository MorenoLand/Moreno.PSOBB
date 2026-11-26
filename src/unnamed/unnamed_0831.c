#include "protos.h"

void f_00831290(void) /* sub_831290 */
{
    FN_ENTER(0x00831290);
    /* 00831290: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 00831295: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00831297: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00831299: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083129c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083129f: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008312a2: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 008312a5: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 008312a8: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 008312ab: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 008312ae: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 008312b0: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008312b2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 008312b4: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008312b6: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008312b9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008312bb: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008312bd: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008312c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008312c2: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008312c4: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008312c7: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008312ca: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 008312cd: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008312d0: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 008312d3: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 008312d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008312d8: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008312db: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 008312de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008312e0: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008312e3: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 008312e6: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008312e9: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 008312ec: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 008312ef: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008312f2: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 008312f5: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 008312f8: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008312fb: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 008312fe: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 00831301: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00831304: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00831307: ret  */ FN_RET(0x00831290); r_esp += 4; return;
}

void f_00831308(void) /* sub_831308 */
{
    FN_ENTER(0x00831308);
    /* 00831308: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00831309: mov ebx, esp */ r_ebx = r_esp;
    /* 0083130b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0083130e: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00831311: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00831313: je 0x8315d2 */ if (fZ) goto L_008315d2;
L_00831319:; BB(0x00831319);
    /* 00831319: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0083131b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083131e: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00831321: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00831325: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00831328: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083132c: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0083132f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00831333: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 00831336: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0083133a: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0083133d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00831341: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00831344: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00831348: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0083134b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0083134f: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00831352: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00831356: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 00831359: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0083135d: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00831360: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00831364: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00831367: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0083136b: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0083136e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00831372: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 00831375: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00831379: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0083137c: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00831380: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 00831383: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
L_00831387:; BB(0x00831387);
    /* 00831387: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00831389: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083138c: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083138f: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00831393: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831395: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00831398: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0083139c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083139e: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 008313a1: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 008313a5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008313a7: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008313a9: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008313ab: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 008313af: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008313b2: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 008313b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008313b8: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008313bb: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 008313bf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008313c1: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 008313c4: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 008313c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008313ca: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008313cd: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008313cf: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 008313d3: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008313d6: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 008313da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008313dc: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008313df: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 008313e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008313e5: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 008313e8: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 008313ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008313ee: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008313f1: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008313f3: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 008313f7: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008313fa: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 008313fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831400: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00831403: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 00831407: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831409: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0083140c: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00831410: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831412: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00831415: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00831418: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083141b: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0083141e: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00831422: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831424: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 00831427: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0083142b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083142d: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00831430: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00831434: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831436: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 00831439: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0083143c: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00831440: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 00831443: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00831447: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831449: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0083144c: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 00831450: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831452: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00831455: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00831459: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083145b: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 0083145e: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00831461: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00831465: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 00831468: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0083146c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083146e: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 00831471: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 00831475: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831477: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0083147a: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0083147e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831480: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 00831483: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00831486: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0083148a: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0083148d: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 00831491: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831493: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 00831496: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0083149a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083149c: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0083149f: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 008314a3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008314a5: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 008314a8: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008314ab: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008314ae: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 008314b1: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 008314b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008314b7: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 008314ba: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 008314be: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008314c0: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 008314c3: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 008314c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008314c9: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 008314cc: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008314cf: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 008314d3: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 008314d6: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 008314da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008314dc: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 008314df: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 008314e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008314e5: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 008314e8: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 008314ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008314ee: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 008314f1: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008314f4: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 008314f8: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 008314fb: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 008314ff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831501: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00831504: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 00831508: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083150a: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0083150d: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00831511: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831513: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 00831516: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00831519: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0083151d: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00831520: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 00831524: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831526: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00831529: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0083152d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083152f: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 00831532: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00831536: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831538: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 0083153b: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 0083153e: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00831541: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 00831544: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00831548: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083154a: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0083154d: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 00831551: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831553: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00831556: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 0083155a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083155c: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 0083155f: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 00831562: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00831566: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 00831569: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0083156d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083156f: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00831572: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 00831576: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831578: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0083157b: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 0083157f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831581: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00831584: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 00831587: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0083158b: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 0083158e: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 00831592: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831594: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00831597: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0083159b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083159d: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 008315a0: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 008315a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008315a6: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 008315a9: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 008315ac: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 008315b0: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 008315b3: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 008315b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008315b9: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 008315bc: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 008315c0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008315c2: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 008315c5: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 008315c9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008315cb: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 008315ce: mov esp, ebx */ r_esp = r_ebx;
    /* 008315d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008315d1: ret  */ FN_RET(0x00831308); r_esp += 4; return;
L_008315d2:; BB(0x008315d2);
    /* 008315d2: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 008315d7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008315d9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008315dc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008315df: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 008315e3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008315e6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008315ea: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 008315ed: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008315f1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 008315f4: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008315f8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 008315fb: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008315ff: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00831602: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00831606: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00831609: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0083160d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00831610: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00831614: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00831617: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0083161b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0083161e: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00831622: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00831625: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00831629: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0083162c: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00831630: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00831633: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00831637: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0083163a: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0083163d: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00831641: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00831645: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0083164b: jmp 0x831387 */ goto L_00831387;
}

void f_00831650(void) /* sub_831650 */
{
    FN_ENTER(0x00831650);
    /* 00831650: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 00831655: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00831657: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00831659: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0083165c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0083165f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00831662: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00831665: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00831668: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0083166b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0083166e: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00831671: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00831674: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00831677: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0083167a: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0083167d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00831680: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00831683: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00831686: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00831689: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0083168c: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0083168f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00831692: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00831695: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00831698: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0083169b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0083169e: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 008316a1: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 008316a4: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 008316a7: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 008316aa: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 008316ad: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 008316b0: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 008316b3: ret  */ FN_RET(0x00831650); r_esp += 4; return;
}

void f_008316b4(void) /* sub_8316B4 */
{
    FN_ENTER(0x008316b4);
    /* 008316b4: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008316b6: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008316b9: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008316bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008316be: je 0x831734 */ if (fZ) goto L_00831734;
L_008316c0:; BB(0x008316c0);
    /* 008316c0: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008316c2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008316c4: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 008316c7: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008316ca: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008316cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008316ce: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 008316d1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008316d3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008316d5: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008316d8: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 008316db: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 008316de: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008316e1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008316e3: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 008316e5: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 008316e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008316ea: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 008316ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008316ee: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008316f0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008316f2: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 008316f4: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 008316f7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008316f9: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 008316fc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008316fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831700: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00831703: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00831706: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00831708: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083170a: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0083170d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083170f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831711: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00831714: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00831716: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00831718: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0083171b: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0083171e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00831720: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00831722: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 00831725: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831727: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00831729: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0083172c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083172e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831730: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00831733: ret  */ FN_RET(0x008316b4); r_esp += 4; return;
L_00831734:; BB(0x00831734);
    /* 00831734: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0083173a: jmp 0x8316c0 */ goto L_008316c0;
}

void f_0083173c(void) /* sub_83173C */
{
    FN_ENTER(0x0083173c);
    /* 0083173c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0083173e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00831740: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00831743: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00831745: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831747: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0083174a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083174c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083174e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083174f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00831752: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x831757u); f_0082dc9c();
    /* 00831757: ret  */ FN_RET(0x0083173c); r_esp += 4; return;
}

void f_00831758(void) /* sub_831758 */
{
    FN_ENTER(0x00831758);
    /* 00831758: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00831759: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083175a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083175d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083175f: call 0x831df4 */ r_esp -= 4; W32(r_esp, 0x831764u); f_00831df4();
    /* 00831764: mov esi, dword ptr [0xad9804] */ r_esi = R32((u32)(0xad9804u));
    /* 0083176a: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831770: je 0x831777 */ if (fZ) goto L_00831777;
L_00831772:; BB(0x00831772);
    /* 00831772: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831777u); f_0082f1d0();
L_00831777:; BB(0x00831777);
    /* 00831777: mov eax, dword ptr [0xacc164] */ r_eax = R32((u32)(0xacc164u));
    /* 0083177c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083177e: je 0x831791 */ if (fZ) goto L_00831791;
L_00831780:; BB(0x00831780);
    /* 00831780: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831786: jne 0x831bc0 */ if (!fZ) goto L_00831bc0;
L_0083178c:; BB(0x0083178c);
    /* 0083178c: jmp 0x831bb5 */ goto L_00831bb5;
L_00831791:; BB(0x00831791);
    /* 00831791: call 0x831e2c */ r_esp -= 4; W32(r_esp, 0x831796u); f_00831e2c();
    /* 00831796: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083179c: je 0x831952 */ if (fZ) goto L_00831952;
L_008317a2:; BB(0x008317a2);
    /* 008317a2: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 008317a7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008317a9: jne 0x831952 */ if (!fZ) goto L_00831952;
L_008317af:; BB(0x008317af);
    /* 008317af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008317b1: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x8317b6u); f_008363ec();
    /* 008317b6: mov edx, dword ptr [0xa2192c] */ r_edx = R32((u32)(0xa2192cu));
    /* 008317bc: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008317bf: mov eax, ebx */ r_eax = r_ebx;
    /* 008317c1: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008317c5: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008317c9: mov ebp, eax */ r_ebp = r_eax;
    /* 008317cb: mov ebx, edx */ r_ebx = r_edx;
L_008317cd:; BB(0x008317cd);
    /* 008317cd: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 008317d0: mov ecx, edi */ r_ecx = r_edi;
    /* 008317d2: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008317d5: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008317d8: jne 0x831802 */ if (!fZ) goto L_00831802;
L_008317da:; BB(0x008317da);
    /* 008317da: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008317e0: jne 0x8317f2 */ if (!fZ) goto L_008317f2;
L_008317e2:; BB(0x008317e2);
    /* 008317e2: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x8317e7u); f_0082f1d0();
    /* 008317e7: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008317ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008317ec: je 0x8317f2 */ if (fZ) goto L_008317f2;
L_008317ee:; BB(0x008317ee);
    /* 008317ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008317ef: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8317f1u); call_ind(t); }
    /* 008317f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008317f2:; BB(0x008317f2);
    /* 008317f2: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 008317f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008317f7: je 0x831869 */ if (fZ) goto L_00831869;
L_008317f9:; BB(0x008317f9);
    /* 008317f9: mov edx, ebx */ r_edx = r_ebx;
    /* 008317fb: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831800u); f_00831d40();
    /* 00831800: jmp 0x831869 */ goto L_00831869;
L_00831802:; BB(0x00831802);
    /* 00831802: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x831807u); f_0082d7b0();
    /* 00831807: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083180d: jne 0x831817 */ if (!fZ) goto L_00831817;
L_0083180f:; BB(0x0083180f);
    /* 0083180f: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00831812: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x831817u); f_0082d838();
L_00831817:; BB(0x00831817);
    /* 00831817: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083181d: jne 0x83182c */ if (!fZ) goto L_0083182c;
L_0083181f:; BB(0x0083181f);
    /* 0083181f: lea ecx, [ebp + 0x14] */ r_ecx = (u32)(r_ebp+0x14u);
    /* 00831822: mov edx, edi */ r_edx = r_edi;
    /* 00831824: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00831827: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x83182cu); f_00830df8();
L_0083182c:; BB(0x0083182c);
    /* 0083182c: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831832: jne 0x83183c */ if (!fZ) goto L_0083183c;
L_00831834:; BB(0x00831834);
    /* 00831834: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 00831837: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x83183cu); f_00831290();
L_0083183c:; BB(0x0083183c);
    /* 0083183c: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831842: jne 0x831856 */ if (!fZ) goto L_00831856;
L_00831844:; BB(0x00831844);
    /* 00831844: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00831847: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831849: je 0x831856 */ if (fZ) goto L_00831856;
L_0083184b:; BB(0x0083184b);
    /* 0083184b: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831850u); f_0082f1d0();
    /* 00831850: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831853: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x831855u); call_ind(t); }
    /* 00831855: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831856:; BB(0x00831856);
    /* 00831856: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00831859: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083185b: je 0x831864 */ if (fZ) goto L_00831864;
L_0083185d:; BB(0x0083185d);
    /* 0083185d: mov edx, ebx */ r_edx = r_ebx;
    /* 0083185f: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831864u); f_00831d40();
L_00831864:; BB(0x00831864);
    /* 00831864: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x831869u); f_0082da80();
L_00831869:; BB(0x00831869);
    /* 00831869: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0083186c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083186e: jne 0x8317cd */ if (!fZ) goto L_008317cd;
L_00831874:; BB(0x00831874);
    /* 00831874: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00831877: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0083187b: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0083187f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00831884: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x831889u); f_008363ec();
    /* 00831889: mov edx, dword ptr [0xa21934] */ r_edx = R32((u32)(0xa21934u));
    /* 0083188f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00831892: mov eax, ebx */ r_eax = r_ebx;
    /* 00831894: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00831898: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0083189c: mov ebp, eax */ r_ebp = r_eax;
    /* 0083189e: mov ebx, edx */ r_ebx = r_edx;
L_008318a0:; BB(0x008318a0);
    /* 008318a0: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 008318a3: mov ecx, edi */ r_ecx = r_edi;
    /* 008318a5: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008318a8: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008318ab: jne 0x8318d5 */ if (!fZ) goto L_008318d5;
L_008318ad:; BB(0x008318ad);
    /* 008318ad: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008318b3: jne 0x8318c5 */ if (!fZ) goto L_008318c5;
L_008318b5:; BB(0x008318b5);
    /* 008318b5: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x8318bau); f_0082f1d0();
    /* 008318ba: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008318bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008318bf: je 0x8318c5 */ if (fZ) goto L_008318c5;
L_008318c1:; BB(0x008318c1);
    /* 008318c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008318c2: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8318c4u); call_ind(t); }
    /* 008318c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008318c5:; BB(0x008318c5);
    /* 008318c5: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 008318c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008318ca: je 0x83193c */ if (fZ) goto L_0083193c;
L_008318cc:; BB(0x008318cc);
    /* 008318cc: mov edx, ebx */ r_edx = r_ebx;
    /* 008318ce: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x8318d3u); f_00831d40();
    /* 008318d3: jmp 0x83193c */ goto L_0083193c;
L_008318d5:; BB(0x008318d5);
    /* 008318d5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8318dau); f_0082d7b0();
    /* 008318da: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008318e0: jne 0x8318ea */ if (!fZ) goto L_008318ea;
L_008318e2:; BB(0x008318e2);
    /* 008318e2: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 008318e5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x8318eau); f_0082d838();
L_008318ea:; BB(0x008318ea);
    /* 008318ea: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008318f0: jne 0x8318ff */ if (!fZ) goto L_008318ff;
L_008318f2:; BB(0x008318f2);
    /* 008318f2: lea ecx, [ebp + 0x14] */ r_ecx = (u32)(r_ebp+0x14u);
    /* 008318f5: mov edx, edi */ r_edx = r_edi;
    /* 008318f7: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008318fa: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x8318ffu); f_00830df8();
L_008318ff:; BB(0x008318ff);
    /* 008318ff: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831905: jne 0x83190f */ if (!fZ) goto L_0083190f;
L_00831907:; BB(0x00831907);
    /* 00831907: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 0083190a: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x83190fu); f_00831290();
L_0083190f:; BB(0x0083190f);
    /* 0083190f: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831915: jne 0x831929 */ if (!fZ) goto L_00831929;
L_00831917:; BB(0x00831917);
    /* 00831917: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0083191a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083191c: je 0x831929 */ if (fZ) goto L_00831929;
L_0083191e:; BB(0x0083191e);
    /* 0083191e: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831923u); f_0082f1d0();
    /* 00831923: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831926: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x831928u); call_ind(t); }
    /* 00831928: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831929:; BB(0x00831929);
    /* 00831929: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 0083192c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083192e: je 0x831937 */ if (fZ) goto L_00831937;
L_00831930:; BB(0x00831930);
    /* 00831930: mov edx, ebx */ r_edx = r_ebx;
    /* 00831932: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831937u); f_00831d40();
L_00831937:; BB(0x00831937);
    /* 00831937: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83193cu); f_0082da80();
L_0083193c:; BB(0x0083193c);
    /* 0083193c: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0083193f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831941: jne 0x8318a0 */ if (!fZ) goto L_008318a0;
L_00831947:; BB(0x00831947);
    /* 00831947: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0083194a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0083194e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00831952:; BB(0x00831952);
    /* 00831952: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831958: je 0x831bb5 */ if (fZ) goto L_00831bb5;
L_0083195e:; BB(0x0083195e);
    /* 0083195e: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00831963: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00831965: je 0x831af7 */ if (fZ) goto L_00831af7;
L_0083196b:; BB(0x0083196b);
    /* 0083196b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00831970: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x831975u); f_008363ec();
    /* 00831975: mov esi, dword ptr [0xa21930] */ r_esi = R32((u32)(0xa21930u));
    /* 0083197b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0083197f: mov eax, ebx */ r_eax = r_ebx;
    /* 00831981: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00831985: mov ebp, eax */ r_ebp = r_eax;
L_00831987:; BB(0x00831987);
    /* 00831987: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0083198a: mov eax, edi */ r_eax = r_edi;
    /* 0083198c: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083198f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831992: jne 0x8319bc */ if (!fZ) goto L_008319bc;
L_00831994:; BB(0x00831994);
    /* 00831994: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083199a: jne 0x8319ac */ if (!fZ) goto L_008319ac;
L_0083199c:; BB(0x0083199c);
    /* 0083199c: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x8319a1u); f_0082f1d0();
    /* 008319a1: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 008319a4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008319a6: je 0x8319ac */ if (fZ) goto L_008319ac;
L_008319a8:; BB(0x008319a8);
    /* 008319a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008319a9: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8319abu); call_ind(t); }
    /* 008319ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008319ac:; BB(0x008319ac);
    /* 008319ac: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 008319af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008319b1: je 0x831a23 */ if (fZ) goto L_00831a23;
L_008319b3:; BB(0x008319b3);
    /* 008319b3: mov edx, esi */ r_edx = r_esi;
    /* 008319b5: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x8319bau); f_00831d40();
    /* 008319ba: jmp 0x831a23 */ goto L_00831a23;
L_008319bc:; BB(0x008319bc);
    /* 008319bc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8319c1u); f_0082d7b0();
    /* 008319c1: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008319c7: jne 0x8319d1 */ if (!fZ) goto L_008319d1;
L_008319c9:; BB(0x008319c9);
    /* 008319c9: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 008319cc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x8319d1u); f_0082d838();
L_008319d1:; BB(0x008319d1);
    /* 008319d1: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008319d7: jne 0x8319e6 */ if (!fZ) goto L_008319e6;
L_008319d9:; BB(0x008319d9);
    /* 008319d9: lea ecx, [ebp + 0x14] */ r_ecx = (u32)(r_ebp+0x14u);
    /* 008319dc: mov edx, edi */ r_edx = r_edi;
    /* 008319de: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008319e1: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x8319e6u); f_00830df8();
L_008319e6:; BB(0x008319e6);
    /* 008319e6: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008319ec: jne 0x8319f6 */ if (!fZ) goto L_008319f6;
L_008319ee:; BB(0x008319ee);
    /* 008319ee: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 008319f1: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x8319f6u); f_00831290();
L_008319f6:; BB(0x008319f6);
    /* 008319f6: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008319fc: jne 0x831a10 */ if (!fZ) goto L_00831a10;
L_008319fe:; BB(0x008319fe);
    /* 008319fe: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 00831a01: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a03: je 0x831a10 */ if (fZ) goto L_00831a10;
L_00831a05:; BB(0x00831a05);
    /* 00831a05: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831a0au); f_0082f1d0();
    /* 00831a0a: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831a0d: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x831a0fu); call_ind(t); }
    /* 00831a0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831a10:; BB(0x00831a10);
    /* 00831a10: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00831a13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a15: je 0x831a1e */ if (fZ) goto L_00831a1e;
L_00831a17:; BB(0x00831a17);
    /* 00831a17: mov edx, esi */ r_edx = r_esi;
    /* 00831a19: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831a1eu); f_00831d40();
L_00831a1e:; BB(0x00831a1e);
    /* 00831a1e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x831a23u); f_0082da80();
L_00831a23:; BB(0x00831a23);
    /* 00831a23: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00831a26: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a28: jne 0x831987 */ if (!fZ) goto L_00831987;
L_00831a2e:; BB(0x00831a2e);
    /* 00831a2e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00831a32: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00831a36: mov esi, dword ptr [0xa21934] */ r_esi = R32((u32)(0xa21934u));
    /* 00831a3c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00831a40: mov eax, ebx */ r_eax = r_ebx;
    /* 00831a42: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00831a46: mov ebp, eax */ r_ebp = r_eax;
L_00831a48:; BB(0x00831a48);
    /* 00831a48: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00831a4b: mov ecx, edi */ r_ecx = r_edi;
    /* 00831a4d: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00831a50: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a53: jne 0x831a7d */ if (!fZ) goto L_00831a7d;
L_00831a55:; BB(0x00831a55);
    /* 00831a55: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a5b: jne 0x831a6d */ if (!fZ) goto L_00831a6d;
L_00831a5d:; BB(0x00831a5d);
    /* 00831a5d: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831a62u); f_0082f1d0();
    /* 00831a62: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00831a65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a67: je 0x831a6d */ if (fZ) goto L_00831a6d;
L_00831a69:; BB(0x00831a69);
    /* 00831a69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00831a6a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x831a6cu); call_ind(t); }
    /* 00831a6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831a6d:; BB(0x00831a6d);
    /* 00831a6d: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00831a70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a72: je 0x831ae4 */ if (fZ) goto L_00831ae4;
L_00831a74:; BB(0x00831a74);
    /* 00831a74: mov edx, esi */ r_edx = r_esi;
    /* 00831a76: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831a7bu); f_00831d40();
    /* 00831a7b: jmp 0x831ae4 */ goto L_00831ae4;
L_00831a7d:; BB(0x00831a7d);
    /* 00831a7d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x831a82u); f_0082d7b0();
    /* 00831a82: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a88: jne 0x831a92 */ if (!fZ) goto L_00831a92;
L_00831a8a:; BB(0x00831a8a);
    /* 00831a8a: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00831a8d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x831a92u); f_0082d838();
L_00831a92:; BB(0x00831a92);
    /* 00831a92: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831a98: jne 0x831aa7 */ if (!fZ) goto L_00831aa7;
L_00831a9a:; BB(0x00831a9a);
    /* 00831a9a: lea ecx, [ebp + 0x14] */ r_ecx = (u32)(r_ebp+0x14u);
    /* 00831a9d: mov edx, edi */ r_edx = r_edi;
    /* 00831a9f: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00831aa2: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x831aa7u); f_00830df8();
L_00831aa7:; BB(0x00831aa7);
    /* 00831aa7: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831aad: jne 0x831ab7 */ if (!fZ) goto L_00831ab7;
L_00831aaf:; BB(0x00831aaf);
    /* 00831aaf: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 00831ab2: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x831ab7u); f_00831290();
L_00831ab7:; BB(0x00831ab7);
    /* 00831ab7: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831abd: jne 0x831ad1 */ if (!fZ) goto L_00831ad1;
L_00831abf:; BB(0x00831abf);
    /* 00831abf: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00831ac2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831ac4: je 0x831ad1 */ if (fZ) goto L_00831ad1;
L_00831ac6:; BB(0x00831ac6);
    /* 00831ac6: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831acbu); f_0082f1d0();
    /* 00831acb: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831ace: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x831ad0u); call_ind(t); }
    /* 00831ad0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831ad1:; BB(0x00831ad1);
    /* 00831ad1: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00831ad4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831ad6: je 0x831adf */ if (fZ) goto L_00831adf;
L_00831ad8:; BB(0x00831ad8);
    /* 00831ad8: mov edx, esi */ r_edx = r_esi;
    /* 00831ada: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831adfu); f_00831d40();
L_00831adf:; BB(0x00831adf);
    /* 00831adf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x831ae4u); f_0082da80();
L_00831ae4:; BB(0x00831ae4);
    /* 00831ae4: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00831ae7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831ae9: jne 0x831a48 */ if (!fZ) goto L_00831a48;
L_00831aef:; BB(0x00831aef);
    /* 00831aef: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00831af3: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00831af7:; BB(0x00831af7);
    /* 00831af7: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00831afc: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x831b01u); f_008363ec();
    /* 00831b01: mov esi, dword ptr [0xa21938] */ r_esi = R32((u32)(0xa21938u));
    /* 00831b07: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_00831b0b:; BB(0x00831b0b);
    /* 00831b0b: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00831b0d: mov eax, ebp */ r_eax = r_ebp;
    /* 00831b0f: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00831b12: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b15: jne 0x831b3f */ if (!fZ) goto L_00831b3f;
L_00831b17:; BB(0x00831b17);
    /* 00831b17: test ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b1d: jne 0x831b2f */ if (!fZ) goto L_00831b2f;
L_00831b1f:; BB(0x00831b1f);
    /* 00831b1f: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831b24u); f_0082f1d0();
    /* 00831b24: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00831b27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b29: je 0x831b2f */ if (fZ) goto L_00831b2f;
L_00831b2b:; BB(0x00831b2b);
    /* 00831b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00831b2c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x831b2eu); call_ind(t); }
    /* 00831b2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831b2f:; BB(0x00831b2f);
    /* 00831b2f: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00831b32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b34: je 0x831ba6 */ if (fZ) goto L_00831ba6;
L_00831b36:; BB(0x00831b36);
    /* 00831b36: mov edx, esi */ r_edx = r_esi;
    /* 00831b38: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831b3du); f_00831d40();
    /* 00831b3d: jmp 0x831ba6 */ goto L_00831ba6;
L_00831b3f:; BB(0x00831b3f);
    /* 00831b3f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x831b44u); f_0082d7b0();
    /* 00831b44: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b4a: jne 0x831b54 */ if (!fZ) goto L_00831b54;
L_00831b4c:; BB(0x00831b4c);
    /* 00831b4c: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00831b4f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x831b54u); f_0082d838();
L_00831b54:; BB(0x00831b54);
    /* 00831b54: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b5a: jne 0x831b69 */ if (!fZ) goto L_00831b69;
L_00831b5c:; BB(0x00831b5c);
    /* 00831b5c: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00831b5f: mov edx, ebp */ r_edx = r_ebp;
    /* 00831b61: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00831b64: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x831b69u); f_00830df8();
L_00831b69:; BB(0x00831b69);
    /* 00831b69: test ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b6f: jne 0x831b79 */ if (!fZ) goto L_00831b79;
L_00831b71:; BB(0x00831b71);
    /* 00831b71: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00831b74: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x831b79u); f_00831290();
L_00831b79:; BB(0x00831b79);
    /* 00831b79: test ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b7f: jne 0x831b93 */ if (!fZ) goto L_00831b93;
L_00831b81:; BB(0x00831b81);
    /* 00831b81: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00831b84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b86: je 0x831b93 */ if (fZ) goto L_00831b93;
L_00831b88:; BB(0x00831b88);
    /* 00831b88: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831b8du); f_0082f1d0();
    /* 00831b8d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831b90: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x831b92u); call_ind(t); }
    /* 00831b92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831b93:; BB(0x00831b93);
    /* 00831b93: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00831b96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831b98: je 0x831ba1 */ if (fZ) goto L_00831ba1;
L_00831b9a:; BB(0x00831b9a);
    /* 00831b9a: mov edx, esi */ r_edx = r_esi;
    /* 00831b9c: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831ba1u); f_00831d40();
L_00831ba1:; BB(0x00831ba1);
    /* 00831ba1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x831ba6u); f_0082da80();
L_00831ba6:; BB(0x00831ba6);
    /* 00831ba6: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00831ba9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831bab: jne 0x831b0b */ if (!fZ) goto L_00831b0b;
L_00831bb1:; BB(0x00831bb1);
    /* 00831bb1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00831bb5:; BB(0x00831bb5);
    /* 00831bb5: call 0x8321a8 */ r_esp -= 4; W32(r_esp, 0x831bbau); f_008321a8();
    /* 00831bba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00831bbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00831bbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00831bbf: ret  */ FN_RET(0x00831758); r_esp += 4; return;
L_00831bc0:; BB(0x00831bc0);
    /* 00831bc0: call 0x83205c */ r_esp -= 4; W32(r_esp, 0x831bc5u); f_0083205c();
    /* 00831bc5: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00831bc9: mov esi, ebx */ r_esi = r_ebx;
L_00831bcb:; BB(0x00831bcb);
    /* 00831bcb: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 00831bcd: mov eax, ebp */ r_eax = r_ebp;
    /* 00831bcf: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00831bd2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831bd5: jne 0x831c05 */ if (!fZ) goto L_00831c05;
L_00831bd7:; BB(0x00831bd7);
    /* 00831bd7: test ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831bdd: jne 0x831bf2 */ if (!fZ) goto L_00831bf2;
L_00831bdf:; BB(0x00831bdf);
    /* 00831bdf: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831be4u); f_0082f1d0();
    /* 00831be4: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00831be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831be9: je 0x831bf2 */ if (fZ) goto L_00831bf2;
L_00831beb:; BB(0x00831beb);
    /* 00831beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00831bec: call 0x832974 */ r_esp -= 4; W32(r_esp, 0x831bf1u); f_00832974();
    /* 00831bf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831bf2:; BB(0x00831bf2);
    /* 00831bf2: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 00831bf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831bf7: je 0x831c72 */ if (fZ) goto L_00831c72;
L_00831bf9:; BB(0x00831bf9);
    /* 00831bf9: mov edx, 0x832974 */ r_edx = 0x832974u;
    /* 00831bfe: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831c03u); f_00831d40();
    /* 00831c03: jmp 0x831c72 */ goto L_00831c72;
L_00831c05:; BB(0x00831c05);
    /* 00831c05: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x831c0au); f_0082d7b0();
    /* 00831c0a: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c10: jne 0x831c1a */ if (!fZ) goto L_00831c1a;
L_00831c12:; BB(0x00831c12);
    /* 00831c12: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00831c15: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x831c1au); f_0082d838();
L_00831c1a:; BB(0x00831c1a);
    /* 00831c1a: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c20: jne 0x831c2f */ if (!fZ) goto L_00831c2f;
L_00831c22:; BB(0x00831c22);
    /* 00831c22: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 00831c25: mov edx, ebp */ r_edx = r_ebp;
    /* 00831c27: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00831c2a: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x831c2fu); f_00830df8();
L_00831c2f:; BB(0x00831c2f);
    /* 00831c2f: test ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c35: jne 0x831c3f */ if (!fZ) goto L_00831c3f;
L_00831c37:; BB(0x00831c37);
    /* 00831c37: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 00831c3a: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x831c3fu); f_00831290();
L_00831c3f:; BB(0x00831c3f);
    /* 00831c3f: test ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c45: jne 0x831c5c */ if (!fZ) goto L_00831c5c;
L_00831c47:; BB(0x00831c47);
    /* 00831c47: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00831c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c4c: je 0x831c5c */ if (fZ) goto L_00831c5c;
L_00831c4e:; BB(0x00831c4e);
    /* 00831c4e: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831c53u); f_0082f1d0();
    /* 00831c53: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831c56: call 0x832974 */ r_esp -= 4; W32(r_esp, 0x831c5bu); f_00832974();
    /* 00831c5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831c5c:; BB(0x00831c5c);
    /* 00831c5c: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 00831c5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c61: je 0x831c6d */ if (fZ) goto L_00831c6d;
L_00831c63:; BB(0x00831c63);
    /* 00831c63: mov edx, 0x832974 */ r_edx = 0x832974u;
    /* 00831c68: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831c6du); f_00831d40();
L_00831c6d:; BB(0x00831c6d);
    /* 00831c6d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x831c72u); f_0082da80();
L_00831c72:; BB(0x00831c72);
    /* 00831c72: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00831c75: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c77: jne 0x831bcb */ if (!fZ) goto L_00831bcb;
L_00831c7d:; BB(0x00831c7d);
    /* 00831c7d: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00831c81:; BB(0x00831c81);
    /* 00831c81: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00831c83: mov eax, esi */ r_eax = r_esi;
    /* 00831c85: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00831c88: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c8b: jne 0x831cbb */ if (!fZ) goto L_00831cbb;
L_00831c8d:; BB(0x00831c8d);
    /* 00831c8d: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c93: jne 0x831ca8 */ if (!fZ) goto L_00831ca8;
L_00831c95:; BB(0x00831c95);
    /* 00831c95: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831c9au); f_0082f1d0();
    /* 00831c9a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00831c9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831c9f: je 0x831ca8 */ if (fZ) goto L_00831ca8;
L_00831ca1:; BB(0x00831ca1);
    /* 00831ca1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00831ca2: call 0x832a50 */ r_esp -= 4; W32(r_esp, 0x831ca7u); f_00832a50();
    /* 00831ca7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831ca8:; BB(0x00831ca8);
    /* 00831ca8: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00831cab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831cad: je 0x831d28 */ if (fZ) goto L_00831d28;
L_00831caf:; BB(0x00831caf);
    /* 00831caf: mov edx, 0x832a50 */ r_edx = 0x832a50u;
    /* 00831cb4: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831cb9u); f_00831d40();
    /* 00831cb9: jmp 0x831d28 */ goto L_00831d28;
L_00831cbb:; BB(0x00831cbb);
    /* 00831cbb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x831cc0u); f_0082d7b0();
    /* 00831cc0: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831cc6: jne 0x831cd0 */ if (!fZ) goto L_00831cd0;
L_00831cc8:; BB(0x00831cc8);
    /* 00831cc8: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00831ccb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x831cd0u); f_0082d838();
L_00831cd0:; BB(0x00831cd0);
    /* 00831cd0: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831cd6: jne 0x831ce5 */ if (!fZ) goto L_00831ce5;
L_00831cd8:; BB(0x00831cd8);
    /* 00831cd8: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00831cdb: mov edx, esi */ r_edx = r_esi;
    /* 00831cdd: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00831ce0: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x831ce5u); f_00830df8();
L_00831ce5:; BB(0x00831ce5);
    /* 00831ce5: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831ceb: jne 0x831cf5 */ if (!fZ) goto L_00831cf5;
L_00831ced:; BB(0x00831ced);
    /* 00831ced: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00831cf0: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x831cf5u); f_00831290();
L_00831cf5:; BB(0x00831cf5);
    /* 00831cf5: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831cfb: jne 0x831d12 */ if (!fZ) goto L_00831d12;
L_00831cfd:; BB(0x00831cfd);
    /* 00831cfd: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00831d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d02: je 0x831d12 */ if (fZ) goto L_00831d12;
L_00831d04:; BB(0x00831d04);
    /* 00831d04: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831d09u); f_0082f1d0();
    /* 00831d09: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831d0c: call 0x832a50 */ r_esp -= 4; W32(r_esp, 0x831d11u); f_00832a50();
    /* 00831d11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831d12:; BB(0x00831d12);
    /* 00831d12: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00831d15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d17: je 0x831d23 */ if (fZ) goto L_00831d23;
L_00831d19:; BB(0x00831d19);
    /* 00831d19: mov edx, 0x832a50 */ r_edx = 0x832a50u;
    /* 00831d1e: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831d23u); f_00831d40();
L_00831d23:; BB(0x00831d23);
    /* 00831d23: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x831d28u); f_0082da80();
L_00831d28:; BB(0x00831d28);
    /* 00831d28: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00831d2b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d2d: jne 0x831c81 */ if (!fZ) goto L_00831c81;
L_00831d33:; BB(0x00831d33);
    /* 00831d33: call 0x82e514 */ r_esp -= 4; W32(r_esp, 0x831d38u); f_0082e514();
    /* 00831d38: jmp 0x831bb5 */ goto L_00831bb5;
}

void f_00831d40(void) /* sub_831D40 */
{
    FN_ENTER(0x00831d40);
    /* 00831d40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00831d41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00831d42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00831d43: mov esi, edx */ r_esi = r_edx;
    /* 00831d45: mov ebx, ecx */ r_ebx = r_ecx;
L_00831d47:; BB(0x00831d47);
    /* 00831d47: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00831d49: mov eax, edi */ r_eax = r_edi;
    /* 00831d4b: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00831d4e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d51: jne 0x831d7b */ if (!fZ) goto L_00831d7b;
L_00831d53:; BB(0x00831d53);
    /* 00831d53: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d59: jne 0x831d6b */ if (!fZ) goto L_00831d6b;
L_00831d5b:; BB(0x00831d5b);
    /* 00831d5b: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831d60u); f_0082f1d0();
    /* 00831d60: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00831d63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d65: je 0x831d6b */ if (fZ) goto L_00831d6b;
L_00831d67:; BB(0x00831d67);
    /* 00831d67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00831d68: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x831d6au); call_ind(t); }
    /* 00831d6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831d6b:; BB(0x00831d6b);
    /* 00831d6b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00831d6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d70: je 0x831de2 */ if (fZ) goto L_00831de2;
L_00831d72:; BB(0x00831d72);
    /* 00831d72: mov edx, esi */ r_edx = r_esi;
    /* 00831d74: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831d79u); f_00831d40();
    /* 00831d79: jmp 0x831de2 */ goto L_00831de2;
L_00831d7b:; BB(0x00831d7b);
    /* 00831d7b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x831d80u); f_0082d7b0();
    /* 00831d80: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d86: jne 0x831d90 */ if (!fZ) goto L_00831d90;
L_00831d88:; BB(0x00831d88);
    /* 00831d88: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00831d8b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x831d90u); f_0082d838();
L_00831d90:; BB(0x00831d90);
    /* 00831d90: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831d96: jne 0x831da5 */ if (!fZ) goto L_00831da5;
L_00831d98:; BB(0x00831d98);
    /* 00831d98: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00831d9b: mov edx, edi */ r_edx = r_edi;
    /* 00831d9d: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00831da0: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x831da5u); f_00830df8();
L_00831da5:; BB(0x00831da5);
    /* 00831da5: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831dab: jne 0x831db5 */ if (!fZ) goto L_00831db5;
L_00831dad:; BB(0x00831dad);
    /* 00831dad: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00831db0: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x831db5u); f_00831290();
L_00831db5:; BB(0x00831db5);
    /* 00831db5: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831dbb: jne 0x831dcf */ if (!fZ) goto L_00831dcf;
L_00831dbd:; BB(0x00831dbd);
    /* 00831dbd: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00831dc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831dc2: je 0x831dcf */ if (fZ) goto L_00831dcf;
L_00831dc4:; BB(0x00831dc4);
    /* 00831dc4: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x831dc9u); f_0082f1d0();
    /* 00831dc9: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00831dcc: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x831dceu); call_ind(t); }
    /* 00831dce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00831dcf:; BB(0x00831dcf);
    /* 00831dcf: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00831dd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831dd4: je 0x831ddd */ if (fZ) goto L_00831ddd;
L_00831dd6:; BB(0x00831dd6);
    /* 00831dd6: mov edx, esi */ r_edx = r_esi;
    /* 00831dd8: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x831dddu); f_00831d40();
L_00831ddd:; BB(0x00831ddd);
    /* 00831ddd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x831de2u); f_0082da80();
L_00831de2:; BB(0x00831de2);
    /* 00831de2: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00831de5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00831de7: jne 0x831d47 */ if (!fZ) goto L_00831d47;
L_00831ded:; BB(0x00831ded);
    /* 00831ded: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00831dee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00831def: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00831df0: ret  */ FN_RET(0x00831d40); r_esp += 4; return;
}

void f_00831df4(void) /* sub_831DF4 */
{
    FN_ENTER(0x00831df4);
    /* 00831df4: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00831dfa: mov dword ptr [0xacc184], 0xffffffff */ W32((u32)(0xacc184u), 0xffffffffu);
    /* 00831e04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00831e06: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
    /* 00831e0b: mov dword ptr [0xacc188], eax */ W32((u32)(0xacc188u), r_eax);
    /* 00831e10: mov dword ptr [0xacc168], eax */ W32((u32)(0xacc168u), r_eax);
    /* 00831e15: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00831e1b: je 0x831e2a */ if (fZ) goto L_00831e2a;
L_00831e1d:; BB(0x00831e1d);
    /* 00831e1d: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00831e22: or eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00831e25: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
L_00831e2a:; BB(0x00831e2a);
    /* 00831e2a: ret  */ FN_RET(0x00831df4); r_esp += 4; return;
}

void f_00831e2c(void) /* sub_831E2C */
{
    FN_ENTER(0x00831e2c);
    /* 00831e2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00831e2f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00831e34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00831e36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00831e38: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 00831e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00831e3e: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x831e44u); call_ind(t); }
    /* 00831e44: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00831e49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00831e4b: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00831e50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00831e52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00831e53: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x831e59u); call_ind(t); }
    /* 00831e59: mov edx, dword ptr [0xacc18c] */ r_edx = R32((u32)(0xacc18cu));
    /* 00831e5f: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00831e64: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00831e67: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00831e69: je 0x831f61 */ if (fZ) goto L_00831f61;
L_00831e6f:; BB(0x00831e6f);
    /* 00831e6f: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00831e75: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00831e7b: fld dword ptr [0x98a598] */ FPUSH(R_F32((u32)(0x98a598u)));
    /* 00831e81: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00831e83: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 00831e89: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 00831e8f: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00831e95: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00831e97: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00831e9a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00831e9e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00831ea3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00831ea7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00831eab: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00831eaf: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00831eb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831eb4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00831eb6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831eb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00831eba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00831ebc: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00831ebe: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00831ec2: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00831ec5: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00831ec9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00831ece: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00831ed2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00831ed6: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00831eda: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00831edd: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00831ee2: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00831ee5: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00831ee8: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00831eea: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00831eed: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00831ef1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00831ef6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00831efa: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00831efe: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00831f02: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00831f05: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00831f0a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00831f0d: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00831f0f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00831f12: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00831f16: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00831f1b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00831f1f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00831f23: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00831f27: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00831f2a: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00831f2f: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00831f31: fcomp dword ptr [0x98a590] */ fx_compare(ST(0), R_F32((u32)(0x98a590u))); FPOP();
    /* 00831f37: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00831f39: mov dword ptr [0xacc16c], ecx */ W32((u32)(0xacc16cu), r_ecx);
    /* 00831f3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00831f40: jae 0x831f4d */ if (!fC) goto L_00831f4d;
L_00831f42:; BB(0x00831f42);
    /* 00831f42: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00831f45: mov dword ptr [0xacc18c], edx */ W32((u32)(0xacc18cu), r_edx);
    /* 00831f4b: jmp 0x831f53 */ goto L_00831f53;
L_00831f4d:; BB(0x00831f4d);
    /* 00831f4d: mov dword ptr [0xacc18c], edx */ W32((u32)(0xacc18cu), r_edx);
L_00831f53:; BB(0x00831f53);
    /* 00831f53: mov dword ptr [0xacc168], 8 */ W32((u32)(0xacc168u), 0x8u);
    /* 00831f5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00831f60: ret  */ FN_RET(0x00831e2c); r_esp += 4; return;
L_00831f61:; BB(0x00831f61);
    /* 00831f61: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00831f63: jne 0x831f6f */ if (!fZ) goto L_00831f6f;
L_00831f65:; BB(0x00831f65);
    /* 00831f65: mov dword ptr [0xacc18c], edx */ W32((u32)(0xacc18cu), r_edx);
    /* 00831f6b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00831f6e: ret  */ FN_RET(0x00831e2c); r_esp += 4; return;
L_00831f6f:; BB(0x00831f6f);
    /* 00831f6f: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00831f75: fld dword ptr [0x98a598] */ FPUSH(R_F32((u32)(0x98a598u)));
    /* 00831f7b: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00831f81: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00831f83: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00831f86: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00831f8a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00831f8f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00831f93: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00831f97: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00831f9b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00831f9e: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 00831fa4: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00831fa8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00831faa: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00831fad: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00831fb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00831fb6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00831fba: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00831fbe: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00831fc2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00831fc5: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 00831fcb: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00831fd0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00831fd2: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00831fd5: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00831fd8: mov dword ptr [0xacc168], 0x10 */ W32((u32)(0xacc168u), 0x10u);
    /* 00831fe2: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00831fe4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00831fe7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00831feb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00831ff0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00831ff4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00831ff8: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00831ffc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00831fff: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00832005: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00832007: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0083200c: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0083200f: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00832011: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00832014: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00832018: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083201d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832021: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00832025: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00832029: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0083202c: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00832031: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00832033: fcomp dword ptr [0x98a594] */ fx_compare(ST(0), R_F32((u32)(0x98a594u))); FPOP();
    /* 00832039: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083203b: mov dword ptr [0xacc16c], ecx */ W32((u32)(0xacc16cu), r_ecx);
    /* 00832041: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832042: jae 0x832051 */ if (!fC) goto L_00832051;
L_00832044:; BB(0x00832044);
    /* 00832044: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00832047: mov dword ptr [0xacc18c], edx */ W32((u32)(0xacc18cu), r_edx);
    /* 0083204d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00832050: ret  */ FN_RET(0x00831e2c); r_esp += 4; return;
L_00832051:; BB(0x00832051);
    /* 00832051: mov dword ptr [0xacc18c], edx */ W32((u32)(0xacc18cu), r_edx);
    /* 00832057: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083205a: ret  */ FN_RET(0x00831e2c); r_esp += 4; return;
}

