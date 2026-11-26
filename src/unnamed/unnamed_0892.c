#include "protos.h"

void f_00892022(void) /* sub_892022 */
{
    FN_ENTER(0x00892022);
    /* 00892022: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892024: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892029u); f_0089f633();
    /* 00892029: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0089202d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089202e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892031: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892035: call dword ptr [0xa34008] */ { u32 t = R32((u32)(0xa34008u)); r_esp -= 4; W32(r_esp, 0x89203bu); call_ind(t); }
    /* 0089203b: ret 8 */ FN_RET(0x00892022); r_esp += 12; return;
}

void f_0089203e(void) /* sub_89203E */
{
    FN_ENTER(0x0089203e);
    /* 0089203e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089203f: mov ebp, esp */ r_ebp = r_esp;
    /* 00892041: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00892044: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00892047: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089204a: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0089204d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00892050: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00892053: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00892056: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892059: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 0089205b: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089205d: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0089205f: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00892062: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892065: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892067: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892069: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089206c: fldz  */ FPUSH(0.0);
    /* 0089206e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00892071: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892074: fldz  */ FPUSH(0.0);
    /* 00892076: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00892079: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0089207c: fchs  */ ST(0) = -ST(0);
    /* 0089207e: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00892081: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00892084: fldz  */ FPUSH(0.0);
    /* 00892086: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00892089: fldz  */ FPUSH(0.0);
    /* 0089208b: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0089208e: fldz  */ FPUSH(0.0);
    /* 00892090: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00892093: fldz  */ FPUSH(0.0);
    /* 00892095: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00892098: fld1  */ FPUSH(1.0);
    /* 0089209a: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0089209d: fldz  */ FPUSH(0.0);
    /* 0089209f: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 008920a2: fldz  */ FPUSH(0.0);
    /* 008920a4: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 008920a7: fldz  */ FPUSH(0.0);
    /* 008920a9: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 008920ac: fldz  */ FPUSH(0.0);
    /* 008920ae: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 008920b1: fld1  */ FPUSH(1.0);
    /* 008920b3: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 008920b6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008920b7: ret 8 */ FN_RET(0x0089203e); r_esp += 12; return;
}

void f_008920ba(void) /* sub_8920BA */
{
    FN_ENTER(0x008920ba);
    /* 008920ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008920bc: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8920c1u); f_0089f633();
    /* 008920c1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 008920c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008920c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008920c9: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008920cd: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008920d1: call dword ptr [0xa34030] */ { u32 t = R32((u32)(0xa34030u)); r_esp -= 4; W32(r_esp, 0x8920d7u); call_ind(t); }
    /* 008920d7: ret 0xc */ FN_RET(0x008920ba); r_esp += 16; return;
}

void f_008920da(void) /* sub_8920DA */
{
    FN_ENTER(0x008920da);
    /* 008920da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008920db: mov ebp, esp */ r_ebp = r_esp;
    /* 008920dd: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008920e0: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008920e3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008920e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008920e7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008920ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008920eb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008920ee: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008920f1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008920f4: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008920f7: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 008920f9: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 008920fb: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008920fd: fld1  */ FPUSH(1.0);
    /* 008920ff: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00892102: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00892105: lea edi, [ebp - 0x1c] */ r_edi = (u32)(r_ebp+0xffffffe4u);
    /* 00892108: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892109: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0089210c: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0089210f: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892111: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00892114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892115: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892116: call 0x890c33 */ r_esp -= 4; W32(r_esp, 0x89211bu); f_00890c33();
    /* 0089211b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089211e: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892121: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00892124: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00892127: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892129: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0089212c: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089212f: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00892132: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892134: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00892136: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892138: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0089213b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0089213d: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00892140: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00892143: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00892145: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00892148: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0089214a: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089214c: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089214f: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892152: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00892154: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892157: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0089215a: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089215d: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 00892160: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892162: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00892164: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892167: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892169: fldz  */ FPUSH(0.0);
    /* 0089216b: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0089216e: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892171: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00892173: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00892176: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892178: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0089217b: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0089217e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00892180: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00892183: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00892186: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00892189: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089218c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089218e: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00892190: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00892193: fldz  */ FPUSH(0.0);
    /* 00892195: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00892198: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089219b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089219d: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 008921a0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008921a2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008921a4: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 008921a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008921a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008921ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008921ad: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008921af: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008921b1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008921b3: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008921b6: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 008921b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008921ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008921bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008921bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008921bf: fldz  */ FPUSH(0.0);
    /* 008921c1: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 008921c4: fldz  */ FPUSH(0.0);
    /* 008921c6: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 008921c9: fldz  */ FPUSH(0.0);
    /* 008921cb: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 008921ce: fldz  */ FPUSH(0.0);
    /* 008921d0: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 008921d3: fld1  */ FPUSH(1.0);
    /* 008921d5: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 008921d8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008921d9: ret 0xc */ FN_RET(0x008920da); r_esp += 16; return;
}

void f_008921dc(void) /* sub_8921DC */
{
    FN_ENTER(0x008921dc);
    /* 008921dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008921de: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8921e3u); f_0089f633();
    /* 008921e3: jmp dword ptr [0xa34020] */ { u32 t = R32((u32)(0xa34020u)); jmp_ind(t); return; }
}

void f_008921e9(void) /* sub_8921E9 */
{
    FN_ENTER(0x008921e9);
    /* 008921e9: jmp dword ptr [0xa34020] */ { u32 t = R32((u32)(0xa34020u)); jmp_ind(t); return; }
}

void f_008921ef(void) /* sub_8921EF */
{
    FN_ENTER(0x008921ef);
    /* 008921ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008921f0: mov ebp, esp */ r_ebp = r_esp;
    /* 008921f2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008921f5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008921f8: fld dword ptr [0x99b9ec] */ FPUSH(R_F32((u32)(0x99b9ecu)));
    /* 008921fe: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00892200: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892202: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00892205: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00892208: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089220a: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0089220d: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00892210: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892213: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00892216: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892219: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 0089221c: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089221e: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00892221: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892224: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00892226: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00892229: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089222c: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0089222e: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00892231: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00892233: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00892235: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00892238: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089223b: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089223e: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00892241: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00892243: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00892246: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00892249: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089224b: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 0089224e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892251: fld1  */ FPUSH(1.0);
    /* 00892253: fsub dword ptr [ebp - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00892256: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00892258: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0089225a: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0089225d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089225f: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892262: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00892265: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00892267: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0089226a: fldz  */ FPUSH(0.0);
    /* 0089226c: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0089226f: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892272: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00892274: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00892277: fld1  */ FPUSH(1.0);
    /* 00892279: fsub dword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0089227c: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 0089227f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00892281: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00892284: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892286: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892288: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089228b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089228d: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00892290: fldz  */ FPUSH(0.0);
    /* 00892292: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00892295: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00892298: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089229a: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0089229d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089229f: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008922a2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008922a4: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 008922a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008922a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008922ab: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008922ae: fsub dword ptr [ebp - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008922b1: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 008922b4: fldz  */ FPUSH(0.0);
    /* 008922b6: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 008922b9: fldz  */ FPUSH(0.0);
    /* 008922bb: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 008922be: fldz  */ FPUSH(0.0);
    /* 008922c0: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 008922c3: fldz  */ FPUSH(0.0);
    /* 008922c5: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 008922c8: fld1  */ FPUSH(1.0);
    /* 008922ca: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 008922cd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008922ce: ret 8 */ FN_RET(0x008921ef); r_esp += 12; return;
}

void f_008922d1(void) /* sub_8922D1 */
{
    FN_ENTER(0x008922d1);
    /* 008922d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008922d3: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8922d8u); f_0089f633();
    /* 008922d8: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 008922dc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008922df: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008922e3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 008922e7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008922eb: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 008922ef: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008922f2: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008922f6: call dword ptr [0xa34028] */ { u32 t = R32((u32)(0xa34028u)); r_esp -= 4; W32(r_esp, 0x8922fcu); call_ind(t); }
    /* 008922fc: ret 0x10 */ FN_RET(0x008922d1); r_esp += 20; return;
}

void f_008922ff(void) /* sub_8922FF */
{
    FN_ENTER(0x008922ff);
    /* 008922ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892300: mov ebp, esp */ r_ebp = r_esp;
    /* 00892302: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892304: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892309u); f_0089f633();
    /* 00892309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089230a: jmp dword ptr [0xa34024] */ { u32 t = R32((u32)(0xa34024u)); jmp_ind(t); return; }
}

void f_00892310(void) /* sub_892310 */
{
    FN_ENTER(0x00892310);
    /* 00892310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892311: mov ebp, esp */ r_ebp = r_esp;
    /* 00892313: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892315: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x89231au); f_0089f633();
    /* 0089231a: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089231d: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892320: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892323: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892326: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892327: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0089232a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089232d: call dword ptr [0xa3402c] */ { u32 t = R32((u32)(0xa3402cu)); r_esp -= 4; W32(r_esp, 0x892333u); call_ind(t); }
    /* 00892333: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00892334: ret 0x14 */ FN_RET(0x00892310); r_esp += 24; return;
}

void f_00892337(void) /* sub_892337 */
{
    FN_ENTER(0x00892337);
    /* 00892337: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892338: mov ebp, esp */ r_ebp = r_esp;
    /* 0089233a: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0089233d: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00892340: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00892344: fldz  */ FPUSH(0.0);
    /* 00892346: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00892347: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0089234a: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 0089234d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089234e: fldz  */ FPUSH(0.0);
    /* 00892350: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00892353: fldz  */ FPUSH(0.0);
    /* 00892355: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00892358: fldz  */ FPUSH(0.0);
    /* 0089235a: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0089235d: fldz  */ FPUSH(0.0);
    /* 0089235f: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 00892362: fldz  */ FPUSH(0.0);
    /* 00892364: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 00892367: fldz  */ FPUSH(0.0);
    /* 00892369: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0089236c: fldz  */ FPUSH(0.0);
    /* 0089236e: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 00892371: fldz  */ FPUSH(0.0);
    /* 00892373: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00892376: fldz  */ FPUSH(0.0);
    /* 00892378: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 0089237b: fldz  */ FPUSH(0.0);
    /* 0089237d: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00892380: fldz  */ FPUSH(0.0);
    /* 00892382: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00892385: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892388: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
    /* 0089238a: fst dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0));
    /* 0089238d: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 00892390: fld1  */ FPUSH(1.0);
    /* 00892392: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00892395: je 0x8923f2 */ if (fZ) goto L_008923f2;
L_00892397:; BB(0x00892397);
    /* 00892397: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089239a: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0089239e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089239f: call 0x8921e9 */ r_esp -= 4; W32(r_esp, 0x8923a4u); f_008921e9();
    /* 008923a4: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008923a7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008923a9: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008923ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008923ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008923af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008923b0: je 0x8923ed */ if (fZ) goto L_008923ed;
L_008923b2:; BB(0x008923b2);
    /* 008923b2: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 008923b5: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 008923b7: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 008923ba: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 008923bd: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 008923c0: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 008923c3: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 008923c6: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 008923c9: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 008923cc: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x8923d1u); f_00891536();
    /* 008923d1: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008923d3: fadd dword ptr [esi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30u));
    /* 008923d6: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 008923d9: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 008923dc: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 008923df: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 008923e2: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008923e5: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 008923e8: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 008923eb: jmp 0x8923f2 */ goto L_008923f2;
L_008923ed:; BB(0x008923ed);
    /* 008923ed: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x8923f2u); f_00891536();
L_008923f2:; BB(0x008923f2);
    /* 008923f2: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008923f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008923f7: je 0x892413 */ if (fZ) goto L_00892413;
L_008923f9:; BB(0x008923f9);
    /* 008923f9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008923fb: fadd dword ptr [esi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30u));
    /* 008923fe: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00892401: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00892404: fadd dword ptr [esi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x34u));
    /* 00892407: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 0089240a: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089240d: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00892410: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
L_00892413:; BB(0x00892413);
    /* 00892413: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00892414: mov eax, esi */ r_eax = r_esi;
    /* 00892416: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00892417: mov esp, ebp */ r_esp = r_ebp;
    /* 00892419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089241a: ret 0x14 */ FN_RET(0x00892337); r_esp += 24; return;
}

void f_0089241d(void) /* sub_89241D */
{
    FN_ENTER(0x0089241d);
    /* 0089241d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089241e: mov ebp, esp */ r_ebp = r_esp;
    /* 00892420: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00892423: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00892426: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00892427: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0089242a: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0089242c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089242d: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0089242f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00892430: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00892433: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00892436: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 00892439: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089243c: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0089243f: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 00892442: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00892445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892446: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00892449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089244a: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089244d: call 0x890c33 */ r_esp -= 4; W32(r_esp, 0x892452u); f_00890c33();
    /* 00892452: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892455: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00892458: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089245b: lea esi, [ebp - 0x24] */ r_esi = (u32)(r_ebp+0xffffffdcu);
    /* 0089245e: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00892461: lea edi, [ebp - 0x18] */ r_edi = (u32)(r_ebp+0xffffffe8u);
    /* 00892464: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00892467: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00892469: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0089246c: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089246f: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00892472: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892475: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00892477: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00892479: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0089247c: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089247f: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00892481: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00892484: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00892487: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0089248a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089248b: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0089248e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00892490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892491: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00892494: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892495: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892496: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892497: call 0x890c33 */ r_esp -= 4; W32(r_esp, 0x89249cu); f_00890c33();
    /* 0089249c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089249f: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008924a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008924a5: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 008924a8: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008924ab: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008924ae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008924b1: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 008924b4: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 008924b7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008924b9: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008924bc: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 008924bf: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008924c2: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 008924c5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008924c7: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008924ca: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 008924cd: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008924d0: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 008924d3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008924d5: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008924d8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008924da: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008924dd: fmul dword ptr [ebx] */ ST(0) = ST(0) * R_F32((u32)(r_ebx));
    /* 008924df: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008924e2: fmul dword ptr [ebx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x4u));
    /* 008924e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008924e7: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008924ea: fmul dword ptr [ebx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x8u));
    /* 008924ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008924ef: fchs  */ ST(0) = -ST(0);
    /* 008924f1: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 008924f4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008924f6: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008924f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008924fc: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008924fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008924ff: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00892502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00892503: fst dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0));
    /* 00892506: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892508: fmul dword ptr [ebx] */ ST(0) = ST(0) * R_F32((u32)(r_ebx));
    /* 0089250a: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089250c: fmul dword ptr [ebx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x4u));
    /* 0089250f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892511: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892513: fmul dword ptr [ebx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x8u));
    /* 00892516: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00892519: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089251c: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0089251f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892521: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00892524: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 00892527: fchs  */ ST(0) = -ST(0);
    /* 00892529: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 0089252c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089252e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892530: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892532: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00892535: fmul dword ptr [ebx] */ ST(0) = ST(0) * R_F32((u32)(r_ebx));
    /* 00892537: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089253a: fmul dword ptr [ebx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x4u));
    /* 0089253d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089253f: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892542: fmul dword ptr [ebx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x8u));
    /* 00892545: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00892546: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892548: fchs  */ ST(0) = -ST(0);
    /* 0089254a: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0089254d: fldz  */ FPUSH(0.0);
    /* 0089254f: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00892552: fldz  */ FPUSH(0.0);
    /* 00892554: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00892557: fldz  */ FPUSH(0.0);
    /* 00892559: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 0089255c: fld1  */ FPUSH(1.0);
    /* 0089255e: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00892561: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892562: ret 0x10 */ FN_RET(0x0089241d); r_esp += 20; return;
}

void f_00892565(void) /* sub_892565 */
{
    FN_ENTER(0x00892565);
    /* 00892565: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892566: mov ebp, esp */ r_ebp = r_esp;
    /* 00892568: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089256b: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089256e: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00892571: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 00892577: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089257a: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0089257d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00892580: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00892583: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00892586: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00892589: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089258c: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 0089258e: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00892590: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892592: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892595: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892598: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0089259b: mov dword ptr [eax + 0x2c], 0xbf800000 */ W32((u32)(r_eax+0x2cu), 0xbf800000u);
    /* 008925a2: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008925a5: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 008925a7: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008925a9: fldz  */ FPUSH(0.0);
    /* 008925ab: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008925ae: fldz  */ FPUSH(0.0);
    /* 008925b0: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008925b3: fldz  */ FPUSH(0.0);
    /* 008925b5: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008925b8: fldz  */ FPUSH(0.0);
    /* 008925ba: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 008925bd: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 008925c0: fldz  */ FPUSH(0.0);
    /* 008925c2: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 008925c5: fldz  */ FPUSH(0.0);
    /* 008925c7: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 008925ca: fldz  */ FPUSH(0.0);
    /* 008925cc: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 008925cf: fldz  */ FPUSH(0.0);
    /* 008925d1: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 008925d4: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 008925d7: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 008925da: fdivr dword ptr [ebp + 0x18] */ ST(0) = R_F32((u32)(r_ebp+0x18u)) / ST(0);
    /* 008925dd: fst dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0));
    /* 008925e0: fldz  */ FPUSH(0.0);
    /* 008925e2: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 008925e5: fldz  */ FPUSH(0.0);
    /* 008925e7: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 008925ea: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 008925ed: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 008925f0: fldz  */ FPUSH(0.0);
    /* 008925f2: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 008925f5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008925f6: ret 0x14 */ FN_RET(0x00892565); r_esp += 24; return;
}

void f_008925f9(void)
{
    FN_ENTER(0x008925f9);
    /* 008925f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008925fb: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892600u); f_0089f633();
    /* 00892600: jmp dword ptr [0xa33ff4] */ { u32 t = R32((u32)(0xa33ff4u)); jmp_ind(t); return; }
}

void f_00892606(void)
{
    FN_ENTER(0x00892606);
    /* 00892606: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892608: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x89260du); f_0089f633();
    /* 0089260d: jmp dword ptr [0xa33ff8] */ { u32 t = R32((u32)(0xa33ff8u)); jmp_ind(t); return; }
}

void f_00892613(void)
{
    FN_ENTER(0x00892613);
    /* 00892613: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892615: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x89261au); f_0089f633();
    /* 0089261a: jmp dword ptr [0xa33fe4] */ { u32 t = R32((u32)(0xa33fe4u)); jmp_ind(t); return; }
}

void f_00892620(void) /* sub_892620 */
{
    FN_ENTER(0x00892620);
    /* 00892620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892621: mov ebp, esp */ r_ebp = r_esp;
    /* 00892623: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00892626: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00892629: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089262a: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0089262d: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00892630: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00892632: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892634: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892636: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892638: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0089263a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089263c: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089263e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00892640: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892642: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00892644: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00892646: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892648: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0089264a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089264c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089264e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892650: fcom dword ptr [0x99b9f0] */ fx_compare(ST(0), R_F32((u32)(0x99b9f0u))); 
    /* 00892656: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892658: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089265b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0089265e: jne 0x892699 */ if (!fZ) goto L_00892699;
L_00892660:; BB(0x00892660);
    /* 00892660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00892662: je 0x892682 */ if (fZ) goto L_00892682;
L_00892664:; BB(0x00892664);
    /* 00892664: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00892666: fdivr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) / ST(0);
    /* 0089266c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089266e: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00892670: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892672: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892674: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00892677: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0089267a: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 0089267d: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892680: jmp 0x892684 */ goto L_00892684;
L_00892682:; BB(0x00892682);
    /* 00892682: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00892684:; BB(0x00892684);
    /* 00892684: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00892687: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892689: je 0x8926b8 */ if (fZ) goto L_008926b8;
L_0089268b:; BB(0x0089268b);
    /* 0089268b: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0089268e: call 0x8c9bf0 */ r_esp -= 4; W32(r_esp, 0x892693u); f_008c9bf0();
    /* 00892693: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00892695: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00892697: jmp 0x8926b8 */ goto L_008926b8;
L_00892699:; BB(0x00892699);
    /* 00892699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089269b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089269d: je 0x8926ad */ if (fZ) goto L_008926ad;
L_0089269f:; BB(0x0089269f);
    /* 0089269f: fld1  */ FPUSH(1.0);
    /* 008926a1: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008926a3: fldz  */ FPUSH(0.0);
    /* 008926a5: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008926a8: fldz  */ FPUSH(0.0);
    /* 008926aa: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_008926ad:; BB(0x008926ad);
    /* 008926ad: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008926b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008926b2: je 0x8926b8 */ if (fZ) goto L_008926b8;
L_008926b4:; BB(0x008926b4);
    /* 008926b4: fldz  */ FPUSH(0.0);
    /* 008926b6: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008926b8:; BB(0x008926b8);
    /* 008926b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008926b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008926ba: ret 0xc */ FN_RET(0x00892620); r_esp += 16; return;
}

void f_008926bd(void)
{
    FN_ENTER(0x008926bd);
    /* 008926bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008926bf: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8926c4u); f_0089f633();
    /* 008926c4: jmp dword ptr [0xa33fe8] */ { u32 t = R32((u32)(0xa33fe8u)); jmp_ind(t); return; }
}

void f_008926ca(void) /* sub_8926CA */
{
    FN_ENTER(0x008926ca);
    /* 008926ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008926cb: mov ebp, esp */ r_ebp = r_esp;
    /* 008926cd: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008926d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008926d3: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 008926d6: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 008926d8: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 008926db: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 008926e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008926e3: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008926e6: jne 0x892729 */ if (!fZ) goto L_00892729;
L_008926e8:; BB(0x008926e8);
    /* 008926e8: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 008926ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008926f1: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 008926f3: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008926f9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008926fb: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008926fe: fdivr dword ptr [0x99b9f4] */ ST(0) = R_F32((u32)(0x99b9f4u)) / ST(0);
    /* 00892704: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00892707: fsub dword ptr [ecx + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x24u));
    /* 0089270a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089270c: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0089270e: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00892711: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 00892714: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892716: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892719: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0089271c: fsub dword ptr [ecx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x10u));
    /* 0089271f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892721: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892724: jmp 0x8927f8 */ goto L_008927f8;
L_00892729:; BB(0x00892729);
    /* 00892729: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089272b: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089272f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00892731: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00892732: fsub dword ptr [ecx + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x14u));
    /* 00892735: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00892736: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00892737: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00892739: fsub dword ptr [ecx + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x28u));
    /* 0089273c: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089273d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089273f: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00892740: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 00892743: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00892746: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00892749: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0089274c: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0089274e: fsub dword ptr [ecx + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x28u));
    /* 00892751: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00892754: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00892757: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00892759: fsubr dword ptr [ecx + 0x28] */ ST(0) = R_F32((u32)(r_ecx+0x28u)) - ST(0);
    /* 0089275c: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089275f: fcomp dword ptr [ebp - 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff4u))); FPOP();
    /* 00892762: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892764: test bl, ah */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00892766: jne 0x89276a */ if (!fZ) goto L_0089276a;
L_00892768:; BB(0x00892768);
    /* 00892768: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0089276a:; BB(0x0089276a);
    /* 0089276a: fld dword ptr [ebp + ebx*4 - 0x10] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4+0xfffffff0u)));
    /* 0089276e: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 00892771: fcomp dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 00892774: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892776: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00892779: je 0x892780 */ if (fZ) goto L_00892780;
L_0089277b:; BB(0x0089277b);
    /* 0089277b: mov ebx, edx */ r_ebx = r_edx;
    /* 0089277d: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
L_00892780:; BB(0x00892780);
    /* 00892780: mov edx, ebx */ r_edx = r_ebx;
    /* 00892782: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00892785: fld dword ptr [ebp + edx - 0x10] */ FPUSH(R_F32((u32)(r_ebp+r_edx+0xfffffff0u)));
    /* 00892789: mov edi, dword ptr [ebp + edx - 0x1c] */ r_edi = R32((u32)(r_ebp+r_edx+0xffffffe4u));
    /* 0089278d: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 00892793: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892796: mov esi, edi */ r_esi = r_edi;
    /* 00892798: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089279b: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0089279d: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089279f: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008927a2: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008927a4: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008927aa: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008927ac: fstp dword ptr [edx + eax] */ W_F32((u32)(r_edx+r_eax), ST(0)); FPOP();
    /* 008927af: fdivr dword ptr [0x99b9f4] */ ST(0) = R_F32((u32)(0x99b9f4u)) / ST(0);
    /* 008927b5: fld dword ptr [ecx + ebx*4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx*4)));
    /* 008927b8: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 008927bb: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008927be: mov edi, dword ptr [ebp + esi - 0x1c] */ r_edi = R32((u32)(r_ebp+r_esi+0xffffffe4u));
    /* 008927c2: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008927c5: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008927c7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008927c9: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008927cc: mov edi, dword ptr [ebp + esi - 0x1c] */ r_edi = R32((u32)(r_ebp+r_esi+0xffffffe4u));
    /* 008927d0: fstp dword ptr [esi + eax] */ W_F32((u32)(r_esi+r_eax), ST(0)); FPOP();
    /* 008927d3: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008927d5: fld dword ptr [ecx + ebx*4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx*4)));
    /* 008927d8: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008927da: fadd dword ptr [ecx + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edx*4));
    /* 008927dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008927e0: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008927e3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008927e5: fstp dword ptr [edx + eax] */ W_F32((u32)(r_edx+r_eax), ST(0)); FPOP();
    /* 008927e8: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008927ea: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 008927ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008927ee: fsub dword ptr [ecx + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_edx*4));
    /* 008927f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008927f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008927f3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008927f5: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_008927f8:; BB(0x008927f8);
    /* 008927f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008927fa: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008927fb: ret 8 */ FN_RET(0x008926ca); r_esp += 12; return;
}

void f_008927fe(void) /* sub_8927FE */
{
    FN_ENTER(0x008927fe);
    /* 008927fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892800: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892805u); f_0089f633();
    /* 00892805: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00892809: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089280a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0089280d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892811: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892815: call dword ptr [0xa33ffc] */ { u32 t = R32((u32)(0xa33ffcu)); r_esp -= 4; W32(r_esp, 0x89281bu); call_ind(t); }
    /* 0089281b: ret 0xc */ FN_RET(0x008927fe); r_esp += 16; return;
}

void f_0089281e(void) /* sub_89281E */
{
    FN_ENTER(0x0089281e);
    /* 0089281e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089281f: mov ebp, esp */ r_ebp = r_esp;
    /* 00892821: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00892824: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892827: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0089282a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089282b: call 0x890c33 */ r_esp -= 4; W32(r_esp, 0x892830u); f_00890c33();
    /* 00892830: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892833: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00892836: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 0089283c: lea eax, [ecx + 0xc] */ r_eax = (u32)(r_ecx+0xcu);
    /* 0089283f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00892842: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00892845: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00892848: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0089284b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089284e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00892851: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00892854: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00892856: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00892858: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0089285a: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089285d: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00892860: mov eax, ecx */ r_eax = r_ecx;
    /* 00892862: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00892864: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00892867: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 0089286a: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0089286d: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00892870: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00892873: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00892876: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892877: ret 0xc */ FN_RET(0x0089281e); r_esp += 16; return;
}

void f_0089287a(void) /* sub_89287A */
{
    FN_ENTER(0x0089287a);
    /* 0089287a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089287c: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892881u); f_0089f633();
    /* 00892881: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00892885: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00892888: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0089288c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00892890: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892894: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00892898: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0089289b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089289f: call dword ptr [0xa33fec] */ { u32 t = R32((u32)(0xa33fecu)); r_esp -= 4; W32(r_esp, 0x8928a5u); call_ind(t); }
    /* 008928a5: ret 0x10 */ FN_RET(0x0089287a); r_esp += 20; return;
}

void f_008928a8(void) /* sub_8928A8 */
{
    FN_ENTER(0x008928a8);
    /* 008928a8: jmp dword ptr [0xa33fec] */ { u32 t = R32((u32)(0xa33fecu)); jmp_ind(t); return; }
}

void f_008928ae(void) /* sub_8928AE */
{
    FN_ENTER(0x008928ae);
    /* 008928ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008928af: mov ebp, esp */ r_ebp = r_esp;
    /* 008928b1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008928b4: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 008928b7: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008928ba: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008928c0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008928c3: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 008928c6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008928c9: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008928cc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008928cf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008928d2: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008928d5: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 008928d7: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 008928d9: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008928db: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008928de: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008928e1: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008928e7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008928ea: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 008928ed: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008928f0: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008928f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008928f6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008928f9: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008928fc: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 008928fe: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00892900: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892902: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892905: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00892908: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 0089290e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00892911: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00892914: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00892917: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0089291a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089291d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00892920: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892923: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00892925: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00892927: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892929: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089292c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089292f: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00892932: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00892935: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00892938: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0089293b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089293d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089293f: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 00892942: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892944: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892946: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892948: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0089294b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089294d: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 00892950: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00892952: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892955: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892957: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892959: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089295c: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089295f: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00892962: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00892965: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892967: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 0089296a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089296c: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0089296f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00892971: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892974: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 00892977: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892979: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0089297c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089297e: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00892981: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892983: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892984: ret 0x10 */ FN_RET(0x008928ae); r_esp += 20; return;
}

void f_00892987(void) /* sub_892987 */
{
    FN_ENTER(0x00892987);
    /* 00892987: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892989: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x89298eu); f_0089f633();
    /* 0089298e: jmp dword ptr [0xa33fd4] */ { u32 t = R32((u32)(0xa33fd4u)); jmp_ind(t); return; }
}

void f_00892994(void) /* sub_892994 */
{
    FN_ENTER(0x00892994);
    /* 00892994: jmp dword ptr [0xa33fd4] */ { u32 t = R32((u32)(0xa33fd4u)); jmp_ind(t); return; }
}

void f_0089299a(void) /* sub_89299A */
{
    FN_ENTER(0x0089299a);
    /* 0089299a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0089299e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008929a2: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008929a6: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008929a9: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008929ab: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008929ae: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008929b1: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008929b4: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008929b7: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008929ba: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008929bd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008929bf: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008929c1: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008929c4: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008929c6: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008929c9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008929cb: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008929ce: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008929d0: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008929d2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008929d4: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008929d6: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 008929d8: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008929da: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 008929dc: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008929df: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008929e2: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008929e5: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008929e7: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008929ea: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008929ed: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008929f0: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008929f3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008929f5: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008929f7: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008929f9: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 008929fb: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 008929fd: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00892a00: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00892a03: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00892a06: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00892a09: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00892a0c: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00892a0e: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00892a11: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00892a14: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00892a16: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00892a18: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00892a1a: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00892a1c: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00892a1e: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00892a20: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00892a23: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00892a26: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00892a29: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00892a2d: ret 0xc */ FN_RET(0x0089299a); r_esp += 16; return;
}

void f_00892a30(void)
{
    FN_ENTER(0x00892a30);
    /* 00892a30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892a32: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892a37u); f_0089f633();
    /* 00892a37: jmp dword ptr [0xa33fd8] */ { u32 t = R32((u32)(0xa33fd8u)); jmp_ind(t); return; }
}

void f_00892a3d(void) /* sub_892A3D */
{
    FN_ENTER(0x00892a3d);
    /* 00892a3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892a3e: mov ebp, esp */ r_ebp = r_esp;
    /* 00892a40: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00892a43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00892a44: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00892a47: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00892a4a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00892a4b: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00892a4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892a4f: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00892a52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892a53: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00892a55: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892a57: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892a59: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892a5b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00892a5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892a5f: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00892a61: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00892a63: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892a65: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00892a67: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00892a69: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892a6b: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00892a6e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892a70: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892a72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892a74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892a76: fld1  */ FPUSH(1.0);
    /* 00892a78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892a7c: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892a7f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892a82: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x892a87u); f_008909c2();
    /* 00892a87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00892a8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00892a8c: je 0x892a9d */ if (fZ) goto L_00892a9d;
L_00892a8e:; BB(0x00892a8e);
    /* 00892a8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892a91: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00892a93: je 0x892af0 */ if (fZ) goto L_00892af0;
L_00892a95:; BB(0x00892a95);
    /* 00892a95: mov edi, eax */ r_edi = r_eax;
    /* 00892a97: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892a98: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892a99: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892a9a: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892a9b: jmp 0x892af0 */ goto L_00892af0;
L_00892a9d:; BB(0x00892a9d);
    /* 00892a9d: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892aa0: fcomp dword ptr [0x99b9f0] */ fx_compare(ST(0), R_F32((u32)(0x99b9f0u))); FPOP();
    /* 00892aa6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892aa8: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892aab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892aae: jne 0x892add */ if (!fZ) goto L_00892add;
L_00892ab0:; BB(0x00892ab0);
    /* 00892ab0: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892ab3: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00892ab5: fdivr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) / ST(0);
    /* 00892abb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892abd: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00892abf: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00892ac2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892ac4: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00892ac7: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00892aca: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892acc: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00892acf: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00892ad2: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00892ad5: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 00892ad8: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00892adb: jmp 0x892a95 */ goto L_00892a95;
L_00892add:; BB(0x00892add);
    /* 00892add: fldz  */ FPUSH(0.0);
    /* 00892adf: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892ae1: fldz  */ FPUSH(0.0);
    /* 00892ae3: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892ae6: fldz  */ FPUSH(0.0);
    /* 00892ae8: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892aeb: fldz  */ FPUSH(0.0);
    /* 00892aed: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_00892af0:; BB(0x00892af0);
    /* 00892af0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00892af1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00892af2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892af3: ret 8 */ FN_RET(0x00892a3d); r_esp += 12; return;
}

void f_00892af6(void) /* sub_892AF6 */
{
    FN_ENTER(0x00892af6);
    /* 00892af6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892af8: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892afdu); f_0089f633();
    /* 00892afd: jmp dword ptr [0xa34038] */ { u32 t = R32((u32)(0xa34038u)); jmp_ind(t); return; }
}

void f_00892b03(void) /* sub_892B03 */
{
    FN_ENTER(0x00892b03);
    /* 00892b03: jmp dword ptr [0xa34038] */ { u32 t = R32((u32)(0xa34038u)); jmp_ind(t); return; }
}

void f_00892b09(void) /* sub_892B09 */
{
    FN_ENTER(0x00892b09);
    /* 00892b09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892b0a: mov ebp, esp */ r_ebp = r_esp;
    /* 00892b0c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00892b0f: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00892b12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00892b15: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00892b18: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00892b1b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00892b1d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892b1f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892b21: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892b23: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00892b25: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892b27: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00892b29: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00892b2b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892b2d: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00892b2f: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00892b31: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892b33: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00892b36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892b38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892b3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892b3c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892b3e: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892b41: fcomp dword ptr [0x99b9f8] */ fx_compare(ST(0), R_F32((u32)(0x99b9f8u))); FPOP();
    /* 00892b47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892b49: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892b4c: jne 0x892ba4 */ if (!fZ) goto L_00892ba4;
L_00892b4e:; BB(0x00892b4e);
    /* 00892b4e: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00892b50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892b51: fchs  */ ST(0) = -ST(0);
    /* 00892b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892b54: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00892b56: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00892b59: fchs  */ ST(0) = -ST(0);
    /* 00892b5b: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00892b5e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00892b61: fchs  */ ST(0) = -ST(0);
    /* 00892b63: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00892b66: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00892b69: fld1  */ FPUSH(1.0);
    /* 00892b6b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00892b6e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892b72: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892b75: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892b78: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x892b7du); f_008909c2();
    /* 00892b7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00892b80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892b82: jne 0x892bb7 */ if (!fZ) goto L_00892bb7;
L_00892b84:; BB(0x00892b84);
    /* 00892b84: fld1  */ FPUSH(1.0);
    /* 00892b86: fdiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xcu));
    /* 00892b89: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892b8b: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00892b8d: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00892b8f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892b91: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00892b94: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00892b97: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892b99: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00892b9c: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00892b9f: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00892ba2: jmp 0x892bb4 */ goto L_00892bb4;
L_00892ba4:; BB(0x00892ba4);
    /* 00892ba4: fldz  */ FPUSH(0.0);
    /* 00892ba6: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00892ba8: fldz  */ FPUSH(0.0);
    /* 00892baa: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00892bad: fldz  */ FPUSH(0.0);
    /* 00892baf: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00892bb2: fldz  */ FPUSH(0.0);
L_00892bb4:; BB(0x00892bb4);
    /* 00892bb4: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
L_00892bb7:; BB(0x00892bb7);
    /* 00892bb7: mov eax, ecx */ r_eax = r_ecx;
    /* 00892bb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00892bba: ret 8 */ FN_RET(0x00892b09); r_esp += 12; return;
}

void f_00892bbd(void) /* sub_892BBD */
{
    FN_ENTER(0x00892bbd);
    /* 00892bbd: jmp dword ptr [0xa34064] */ { u32 t = R32((u32)(0xa34064u)); jmp_ind(t); return; }
}

void f_00892bc3(void) /* sub_892BC3 */
{
    FN_ENTER(0x00892bc3);
    /* 00892bc3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892bc4: mov ebp, esp */ r_ebp = r_esp;
    /* 00892bc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892bc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00892bc8: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00892bcb: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00892bce: fcomp dword ptr [0x99b9b8] */ fx_compare(ST(0), R_F32((u32)(0x99b9b8u))); FPOP();
    /* 00892bd4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892bd6: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892bd9: jp 0x892c24 */ if (fP) goto L_00892c24;
L_00892bdb:; BB(0x00892bdb);
    /* 00892bdb: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00892bde: call 0x8c9bf0 */ r_esp -= 4; W32(r_esp, 0x892be3u); f_008c9bf0();
    /* 00892be3: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 00892be6: fsin  */ ST(0) = sinl(ST(0));
    /* 00892be8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892be9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892bea: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00892bed: fldz  */ FPUSH(0.0);
    /* 00892bef: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892bf3: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892bf6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892bf9: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x892bfeu); f_008909c2();
    /* 00892bfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00892c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892c03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892c06: jne 0x892c27 */ if (!fZ) goto L_00892c27;
L_00892c08:; BB(0x00892c08);
    /* 00892c08: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892c0b: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00892c0e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892c10: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00892c12: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892c14: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892c16: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00892c19: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892c1c: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00892c1f: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892c22: jmp 0x892c37 */ goto L_00892c37;
L_00892c24:; BB(0x00892c24);
    /* 00892c24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00892c27:; BB(0x00892c27);
    /* 00892c27: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00892c29: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892c2b: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00892c2e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00892c31: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00892c34: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
L_00892c37:; BB(0x00892c37);
    /* 00892c37: fldz  */ FPUSH(0.0);
    /* 00892c39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00892c3a: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00892c3d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892c3e: ret 8 */ FN_RET(0x00892bc3); r_esp += 12; return;
}

void f_00892c41(void) /* sub_892C41 */
{
    FN_ENTER(0x00892c41);
    /* 00892c41: jmp dword ptr [0xa34068] */ { u32 t = R32((u32)(0xa34068u)); jmp_ind(t); return; }
}

void f_00892c47(void) /* sub_892C47 */
{
    FN_ENTER(0x00892c47);
    /* 00892c47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892c48: mov ebp, esp */ r_ebp = r_esp;
    /* 00892c4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892c4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892c4c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00892c4f: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00892c52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00892c53: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00892c56: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00892c59: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00892c5b: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 00892c5e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892c60: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00892c63: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892c65: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00892c68: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892c6a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00892c6d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00892c6f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892c71: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00892c73: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00892c75: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892c77: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00892c79: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00892c7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892c7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892c7f: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00892c82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00892c85: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00892c88: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00892c8b: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00892c8d: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00892c8f: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892c91: fldz  */ FPUSH(0.0);
    /* 00892c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892c94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892c95: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892c99: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892c9c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892c9f: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x892ca4u); f_008909c2();
    /* 00892ca4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00892ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892ca9: je 0x892cc1 */ if (fZ) goto L_00892cc1;
L_00892cab:; BB(0x00892cab);
    /* 00892cab: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00892cad: je 0x892cdb */ if (fZ) goto L_00892cdb;
L_00892caf:; BB(0x00892caf);
    /* 00892caf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00892cb1: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00892cb3: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00892cb6: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00892cb9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00892cbc: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00892cbf: jmp 0x892cdb */ goto L_00892cdb;
L_00892cc1:; BB(0x00892cc1);
    /* 00892cc1: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892cc4: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00892cc7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892cc9: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00892ccb: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00892ccd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892ccf: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00892cd2: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00892cd5: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00892cd8: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
L_00892cdb:; BB(0x00892cdb);
    /* 00892cdb: mov eax, esi */ r_eax = r_esi;
    /* 00892cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00892cde: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892cdf: ret 8 */ FN_RET(0x00892c47); r_esp += 12; return;
}

void f_00892ce2(void) /* sub_892CE2 */
{
    FN_ENTER(0x00892ce2);
    /* 00892ce2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892ce4: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892ce9u); f_0089f633();
    /* 00892ce9: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00892ced: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892cee: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892cf1: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892cf5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892cf9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892cfd: call dword ptr [0xa34014] */ { u32 t = R32((u32)(0xa34014u)); r_esp -= 4; W32(r_esp, 0x892d03u); call_ind(t); }
    /* 00892d03: ret 0x10 */ FN_RET(0x00892ce2); r_esp += 20; return;
}

void f_00892d06(void) /* sub_892D06 */
{
    FN_ENTER(0x00892d06);
    /* 00892d06: jmp dword ptr [0xa34014] */ { u32 t = R32((u32)(0xa34014u)); jmp_ind(t); return; }
}

void f_00892d0c(void) /* sub_892D0C */
{
    FN_ENTER(0x00892d0c);
    /* 00892d0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892d0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00892d0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892d10: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00892d13: fld1  */ FPUSH(1.0);
    /* 00892d15: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 00892d18: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00892d1b: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00892d1d: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00892d1f: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00892d22: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00892d25: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892d27: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00892d2a: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00892d2d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892d2f: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00892d32: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00892d35: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892d37: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 00892d3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892d3f: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00892d42: jne 0x892d4b */ if (!fZ) goto L_00892d4b;
L_00892d44:; BB(0x00892d44);
    /* 00892d44: fld1  */ FPUSH(1.0);
    /* 00892d46: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00892d49: jmp 0x892d52 */ goto L_00892d52;
L_00892d4b:; BB(0x00892d4b);
    /* 00892d4b: mov dword ptr [ebp + 0xc], 0xbf800000 */ W32((u32)(r_ebp+0xcu), 0xbf800000u);
L_00892d52:; BB(0x00892d52);
    /* 00892d52: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892d55: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892d57: fst dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0));
    /* 00892d5a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00892d5c: fld1  */ FPUSH(1.0);
    /* 00892d5e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00892d60: fcomp dword ptr [0x99b9d8] */ fx_compare(ST(0), R_F32((u32)(0x99b9d8u))); FPOP();
    /* 00892d66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892d68: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892d6b: jne 0x892da7 */ if (!fZ) goto L_00892da7;
L_00892d6d:; BB(0x00892d6d);
    /* 00892d6d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892d6f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892d71: fsubr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) - ST(0);
    /* 00892d77: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00892d79: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00892d7b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892d7d: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892d80: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00892d82: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00892d85: fld1  */ FPUSH(1.0);
    /* 00892d87: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00892d89: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00892d8c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892d8e: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892d91: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892d93: fsin  */ ST(0) = sinl(ST(0));
    /* 00892d95: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00892d97: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00892d9a: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00892d9d: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 00892da0: fsin  */ ST(0) = sinl(ST(0));
    /* 00892da2: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00892da5: jmp 0x892dac */ goto L_00892dac;
L_00892da7:; BB(0x00892da7);
    /* 00892da7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892da9: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
L_00892dac:; BB(0x00892dac);
    /* 00892dac: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00892daf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892db2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892db4: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00892db6: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892db8: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00892dba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892dbc: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892dbe: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892dc0: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00892dc3: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892dc5: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00892dc8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892dca: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892dcd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892dcf: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00892dd2: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892dd4: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00892dd7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892dd9: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892ddc: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00892ddf: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00892de1: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00892de4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892de6: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00892de9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892deb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892dec: ret 0x10 */ FN_RET(0x00892d0c); r_esp += 20; return;
}

void f_00892def(void) /* sub_892DEF */
{
    FN_ENTER(0x00892def);
    /* 00892def: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892df0: mov ebp, esp */ r_ebp = r_esp;
    /* 00892df2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892df4: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892df9u); f_0089f633();
    /* 00892df9: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00892dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892dfd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892e00: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e03: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e06: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e09: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e0c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e0f: call dword ptr [0xa34034] */ { u32 t = R32((u32)(0xa34034u)); r_esp -= 4; W32(r_esp, 0x892e15u); call_ind(t); }
    /* 00892e15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00892e16: ret 0x18 */ FN_RET(0x00892def); r_esp += 28; return;
}

void f_00892e19(void) /* sub_892E19 */
{
    FN_ENTER(0x00892e19);
    /* 00892e19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892e1a: mov ebp, esp */ r_ebp = r_esp;
    /* 00892e1c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00892e1f: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00892e22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892e23: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892e26: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e29: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00892e2c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892e30: call 0x892d06 */ r_esp -= 4; W32(r_esp, 0x892e35u); f_00892d06();
    /* 00892e35: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00892e38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892e39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892e3c: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e3f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00892e42: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892e46: call 0x892d06 */ r_esp -= 4; W32(r_esp, 0x892e4bu); f_00892d06();
    /* 00892e4b: fld1  */ FPUSH(1.0);
    /* 00892e4d: fsub dword ptr [ebp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x1cu));
    /* 00892e50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892e51: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00892e54: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00892e57: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00892e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892e5d: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00892e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892e61: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e64: call 0x892d06 */ r_esp -= 4; W32(r_esp, 0x892e69u); f_00892d06();
    /* 00892e69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892e6c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892e6d: ret 0x18 */ FN_RET(0x00892e19); r_esp += 28; return;
}

void f_00892e70(void) /* sub_892E70 */
{
    FN_ENTER(0x00892e70);
    /* 00892e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00892e73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892e75: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892e7au); f_0089f633();
    /* 00892e7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00892e7b: jmp dword ptr [0xa3403c] */ { u32 t = R32((u32)(0xa3403cu)); jmp_ind(t); return; }
}

void f_00892e81(void) /* sub_892E81 */
{
    FN_ENTER(0x00892e81);
    /* 00892e81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892e82: mov ebp, esp */ r_ebp = r_esp;
    /* 00892e84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892e86: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892e8bu); f_0089f633();
    /* 00892e8b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00892e8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892e8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892e90: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892e94: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00892e97: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892e9a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892e9d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892ea0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892ea3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892ea6: call dword ptr [0xa34018] */ { u32 t = R32((u32)(0xa34018u)); r_esp -= 4; W32(r_esp, 0x892eacu); call_ind(t); }
    /* 00892eac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00892ead: ret 0x18 */ FN_RET(0x00892e81); r_esp += 28; return;
}

void f_00892eb0(void) /* sub_892EB0 */
{
    FN_ENTER(0x00892eb0);
    /* 00892eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00892eb3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00892eb6: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00892eb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00892eba: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00892ebd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892ebe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892ebf: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00892ec2: fldz  */ FPUSH(0.0);
    /* 00892ec4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892ec8: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00892ecb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892ece: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x892ed3u); f_008909c2();
    /* 00892ed3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00892ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00892ed8: je 0x892eed */ if (fZ) goto L_00892eed;
L_00892eda:; BB(0x00892eda);
    /* 00892eda: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00892edd: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00892ee0: je 0x892f33 */ if (fZ) goto L_00892f33;
L_00892ee2:; BB(0x00892ee2);
    /* 00892ee2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00892ee3: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00892ee6: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892ee7: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892ee8: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892ee9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892eea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00892eeb: jmp 0x892f33 */ goto L_00892f33;
L_00892eed:; BB(0x00892eed);
    /* 00892eed: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00892ef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892ef1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892ef4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892ef7: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00892efa: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892efd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892efe: call 0x892d06 */ r_esp -= 4; W32(r_esp, 0x892f03u); f_00892d06();
    /* 00892f03: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00892f06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892f07: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892f0a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892f0d: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00892f10: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00892f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892f14: call 0x892d06 */ r_esp -= 4; W32(r_esp, 0x892f19u); f_00892d06();
    /* 00892f19: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00892f1c: fdiv dword ptr [ebp + 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x18u));
    /* 00892f1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892f20: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00892f23: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892f26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892f27: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00892f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00892f2b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00892f2e: call 0x892d06 */ r_esp -= 4; W32(r_esp, 0x892f33u); f_00892d06();
L_00892f33:; BB(0x00892f33);
    /* 00892f33: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892f36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00892f37: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00892f38: ret 0x18 */ FN_RET(0x00892eb0); r_esp += 28; return;
}

void f_00892f3b(void) /* sub_892F3B */
{
    FN_ENTER(0x00892f3b);
    /* 00892f3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892f3d: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892f42u); f_0089f633();
    /* 00892f42: jmp dword ptr [0xa33fdc] */ { u32 t = R32((u32)(0xa33fdcu)); jmp_ind(t); return; }
}

void f_00892f48(void) /* sub_892F48 */
{
    FN_ENTER(0x00892f48);
    /* 00892f48: jmp dword ptr [0xa33fdc] */ { u32 t = R32((u32)(0xa33fdcu)); jmp_ind(t); return; }
}

void f_00892f4e(void) /* sub_892F4E */
{
    FN_ENTER(0x00892f4e);
    /* 00892f4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00892f4f: mov ebp, esp */ r_ebp = r_esp;
    /* 00892f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00892f52: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00892f55: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00892f58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892f59: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00892f5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00892f5d: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00892f5f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892f61: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00892f63: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00892f65: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00892f67: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892f69: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00892f6b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00892f6d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00892f6f: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00892f72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892f74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892f76: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00892f78: fld1  */ FPUSH(1.0);
    /* 00892f7a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00892f7e: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892f81: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00892f84: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x892f89u); f_008909c2();
    /* 00892f89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00892f8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00892f8e: je 0x892fa1 */ if (fZ) goto L_00892fa1;
L_00892f90:; BB(0x00892f90);
    /* 00892f90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892f93: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00892f95: je 0x892fed */ if (fZ) goto L_00892fed;
L_00892f97:; BB(0x00892f97);
    /* 00892f97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00892f98: mov edi, eax */ r_edi = r_eax;
    /* 00892f9a: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892f9b: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892f9c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892f9d: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00892f9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00892f9f: jmp 0x892fed */ goto L_00892fed;
L_00892fa1:; BB(0x00892fa1);
    /* 00892fa1: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892fa4: fcomp dword ptr [0x99b9f0] */ fx_compare(ST(0), R_F32((u32)(0x99b9f0u))); FPOP();
    /* 00892faa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00892fac: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00892faf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00892fb2: jne 0x892fda */ if (!fZ) goto L_00892fda;
L_00892fb4:; BB(0x00892fb4);
    /* 00892fb4: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00892fb7: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00892fb9: fdivr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) / ST(0);
    /* 00892fbf: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892fc1: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00892fc3: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892fc5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892fc7: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00892fca: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892fcd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00892fcf: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00892fd2: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892fd5: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00892fd8: jmp 0x892fea */ goto L_00892fea;
L_00892fda:; BB(0x00892fda);
    /* 00892fda: fldz  */ FPUSH(0.0);
    /* 00892fdc: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00892fde: fldz  */ FPUSH(0.0);
    /* 00892fe0: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00892fe3: fldz  */ FPUSH(0.0);
    /* 00892fe5: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00892fe8: fldz  */ FPUSH(0.0);
L_00892fea:; BB(0x00892fea);
    /* 00892fea: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_00892fed:; BB(0x00892fed);
    /* 00892fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00892fee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00892fef: ret 8 */ FN_RET(0x00892f4e); r_esp += 12; return;
}

void f_00892ff2(void)
{
    FN_ENTER(0x00892ff2);
    /* 00892ff2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00892ff4: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x892ff9u); f_0089f633();
    /* 00892ff9: jmp dword ptr [0xa33fe0] */ { u32 t = R32((u32)(0xa33fe0u)); jmp_ind(t); return; }
}

void f_00892fff(void) /* sub_892FFF */
{
    FN_ENTER(0x00892fff);
    /* 00892fff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893000: mov ebp, esp */ r_ebp = r_esp;
    /* 00893002: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00893005: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00893007: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893008: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0089300b: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 0089300d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089300e: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00893011: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00893014: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00893017: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893019: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0089301c: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 0089301f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893021: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00893023: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00893025: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00893028: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 0089302b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089302d: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00893030: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00893033: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893035: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00893037: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 0089303d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089303f: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00893042: jp 0x89304a */ if (fP) goto L_0089304a;
L_00893044:; BB(0x00893044);
    /* 00893044: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893046: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893048: jmp 0x89306b */ goto L_0089306b;
L_0089304a:; BB(0x0089304a);
    /* 0089304a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089304c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089304d: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 00893050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893051: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00893053: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00893056: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893058: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089305a: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089305d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00893060: call 0x8cb083 */ r_esp -= 4; W32(r_esp, 0x893065u); f_008cb083();
    /* 00893065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00893067: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00893068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00893069: jne 0x89306f */ if (!fZ) goto L_0089306f;
L_0089306b:; BB(0x0089306b);
    /* 0089306b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089306d: jmp 0x89309b */ goto L_0089309b;
L_0089306f:; BB(0x0089306f);
    /* 0089306f: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00893071: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00893074: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 00893076: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00893079: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 0089307b: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0089307d: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00893080: fsub dword ptr [esi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4u));
    /* 00893083: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00893086: fadd dword ptr [esi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4u));
    /* 00893089: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0089308c: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0089308f: fsub dword ptr [esi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x8u));
    /* 00893092: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00893095: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00893098: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_0089309b:; BB(0x0089309b);
    /* 0089309b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089309c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089309d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089309e: ret 0x10 */ FN_RET(0x00892fff); r_esp += 20; return;
}

