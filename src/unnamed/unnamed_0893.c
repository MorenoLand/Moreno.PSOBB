#include "protos.h"

void f_008930a1(void)
{
    FN_ENTER(0x008930a1);
    /* 008930a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008930a3: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8930a8u); f_0089f633();
    /* 008930a8: jmp dword ptr [0xa33fb8] */ { u32 t = R32((u32)(0xa33fb8u)); jmp_ind(t); return; }
}

void f_008930ae(void) /* sub_8930AE */
{
    FN_ENTER(0x008930ae);
    /* 008930ae: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008930b2: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008930b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008930b8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008930ba: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008930bd: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 008930c0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 008930c3: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008930c6: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008930ca: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008930cd: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008930d0: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008930d3: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008930d6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008930d8: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008930da: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008930dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008930de: fchs  */ ST(0) = -ST(0);
    /* 008930e0: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008930e3: ret 0xc */ FN_RET(0x008930ae); r_esp += 16; return;
}

void f_008930e6(void)
{
    FN_ENTER(0x008930e6);
    /* 008930e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008930e8: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8930edu); f_0089f633();
    /* 008930ed: jmp dword ptr [0xa33fbc] */ { u32 t = R32((u32)(0xa33fbcu)); jmp_ind(t); return; }
}

void f_008930f3(void) /* sub_8930F3 */
{
    FN_ENTER(0x008930f3);
    /* 008930f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008930f4: mov ebp, esp */ r_ebp = r_esp;
    /* 008930f6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008930f9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008930fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008930fd: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00893100: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00893102: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893103: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00893105: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00893106: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00893109: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0089310c: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 0089310f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00893112: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00893115: lea esi, [ebp - 0x18] */ r_esi = (u32)(r_ebp+0xffffffe8u);
    /* 00893118: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 0089311b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0089311e: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00893120: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00893123: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00893125: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00893128: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0089312b: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 0089312e: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00893131: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00893134: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 00893137: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893139: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0089313b: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089313e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893140: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00893142: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00893145: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893147: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089314a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089314c: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0089314e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00893150: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00893153: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893155: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893157: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089315a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089315c: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089315f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00893161: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00893163: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00893166: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893167: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893168: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089316a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089316c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089316d: call 0x890c33 */ r_esp -= 4; W32(r_esp, 0x893172u); f_00890c33();
    /* 00893172: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00893175: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00893176: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00893179: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089317a: fmul dword ptr [ebx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x8u));
    /* 0089317d: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00893180: fmul dword ptr [ebx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x4u));
    /* 00893183: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893185: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00893187: fmul dword ptr [ebx] */ ST(0) = ST(0) * R_F32((u32)(r_ebx));
    /* 00893189: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089318a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089318c: fchs  */ ST(0) = -ST(0);
    /* 0089318e: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00893191: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00893192: ret 0x10 */ FN_RET(0x008930f3); r_esp += 20; return;
}

void f_00893195(void)
{
    FN_ENTER(0x00893195);
    /* 00893195: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00893197: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x89319cu); f_0089f633();
    /* 0089319c: jmp dword ptr [0xa34010] */ { u32 t = R32((u32)(0xa34010u)); jmp_ind(t); return; }
}

void f_008931a2(void) /* sub_8931A2 */
{
    FN_ENTER(0x008931a2);
    /* 008931a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008931a3: mov ebp, esp */ r_ebp = r_esp;
    /* 008931a5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008931a8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008931ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008931ae: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 008931b1: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 008931b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008931b5: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 008931b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008931b9: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 008931bc: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 008931bf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008931c1: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008931c4: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008931c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008931c9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008931cb: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008931cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008931cf: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008931d2: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 008931d5: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 008931d8: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008931db: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008931dd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008931df: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 008931e2: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 008931e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008931e7: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 008931ea: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008931ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008931ef: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008931f2: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 008931f5: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 008931f8: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008931fb: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008931fd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008931ff: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00893202: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00893205: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893207: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0089320a: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089320d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089320f: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00893212: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 00893215: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00893218: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0089321b: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0089321d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089321f: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00893222: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00893225: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893227: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0089322a: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089322d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00893230: mov edi, eax */ r_edi = r_eax;
    /* 00893232: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893234: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00893237: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893238: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893239: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089323a: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089323b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089323c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089323d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089323e: ret 0xc */ FN_RET(0x008931a2); r_esp += 16; return;
}

void f_00893241(void) /* sub_893241 */
{
    FN_ENTER(0x00893241);
    /* 00893241: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893242: mov ebp, esp */ r_ebp = r_esp;
    /* 00893244: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893245: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893246: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00893249: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0089324c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089324d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0089324f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893250: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893252: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00893254: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893256: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893258: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089325a: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0089325d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089325f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893261: fld1  */ FPUSH(1.0);
    /* 00893263: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00893267: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089326a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0089326d: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x893272u); f_008909c2();
    /* 00893272: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00893275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893277: je 0x89328c */ if (fZ) goto L_0089328c;
L_00893279:; BB(0x00893279);
    /* 00893279: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089327c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089327e: je 0x8932ca */ if (fZ) goto L_008932ca;
L_00893280:; BB(0x00893280);
    /* 00893280: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00893282: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00893284: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
L_00893287:; BB(0x00893287);
    /* 00893287: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0089328a: jmp 0x8932ca */ goto L_008932ca;
L_0089328c:; BB(0x0089328c);
    /* 0089328c: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089328f: fcomp dword ptr [0x99b9f0] */ fx_compare(ST(0), R_F32((u32)(0x99b9f0u))); FPOP();
    /* 00893295: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00893297: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089329a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089329d: jne 0x8932c1 */ if (!fZ) goto L_008932c1;
L_0089329f:; BB(0x0089329f);
    /* 0089329f: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008932a2: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 008932a4: fdivr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) / ST(0);
    /* 008932aa: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008932ac: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008932ae: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008932b1: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008932b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008932b7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008932b9: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008932bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008932bf: jmp 0x893287 */ goto L_00893287;
L_008932c1:; BB(0x008932c1);
    /* 008932c1: fldz  */ FPUSH(0.0);
    /* 008932c3: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008932c5: fldz  */ FPUSH(0.0);
    /* 008932c7: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
L_008932ca:; BB(0x008932ca);
    /* 008932ca: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008932cb: ret 8 */ FN_RET(0x00893241); r_esp += 12; return;
}

void f_0089324c(void)
{
    FN_ENTER(0x0089324c);
    /* 0089324c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089324d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0089324f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893250: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893252: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00893254: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893256: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893258: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089325a: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0089325d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089325f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893261: fld1  */ FPUSH(1.0);
    /* 00893263: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00893267: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089326a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0089326d: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x893272u); f_008909c2();
    /* 00893272: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00893275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893277: je 0x89328c */ if (fZ) goto L_0089328c;
L_00893279:; BB(0x00893279);
    /* 00893279: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089327c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089327e: je 0x8932ca */ if (fZ) goto L_008932ca;
L_00893280:; BB(0x00893280);
    /* 00893280: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00893282: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00893284: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
L_00893287:; BB(0x00893287);
    /* 00893287: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0089328a: jmp 0x8932ca */ goto L_008932ca;
L_0089328c:; BB(0x0089328c);
    /* 0089328c: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089328f: fcomp dword ptr [0x99b9f0] */ fx_compare(ST(0), R_F32((u32)(0x99b9f0u))); FPOP();
    /* 00893295: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00893297: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089329a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089329d: jne 0x8932c1 */ if (!fZ) goto L_008932c1;
L_0089329f:; BB(0x0089329f);
    /* 0089329f: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008932a2: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 008932a4: fdivr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) / ST(0);
    /* 008932aa: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008932ac: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008932ae: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008932b1: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008932b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008932b7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008932b9: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008932bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008932bf: jmp 0x893287 */ goto L_00893287;
L_008932c1:; BB(0x008932c1);
    /* 008932c1: fldz  */ FPUSH(0.0);
    /* 008932c3: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008932c5: fldz  */ FPUSH(0.0);
    /* 008932c7: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
L_008932ca:; BB(0x008932ca);
    /* 008932ca: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008932cb: ret 8 */ FN_RET(0x0089324c); r_esp += 12; return;
}

void f_008932ce(void) /* sub_8932CE */
{
    FN_ENTER(0x008932ce);
    /* 008932ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008932cf: mov ebp, esp */ r_ebp = r_esp;
    /* 008932d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008932d4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008932d7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008932da: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 008932dd: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008932e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008932e1: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008932e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008932e4: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008932e6: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 008932e9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008932eb: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 008932ee: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008932f1: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008932f4: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008932f6: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 008932f9: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008932fc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008932fe: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 00893301: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00893304: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00893307: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00893309: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0089330c: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 0089330f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893311: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 00893314: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00893317: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0089331a: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0089331c: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0089331f: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00893322: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893324: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00893327: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089332a: mov edi, eax */ r_edi = r_eax;
    /* 0089332c: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089332f: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893330: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893331: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893332: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893333: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00893334: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00893335: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00893336: ret 0xc */ FN_RET(0x008932ce); r_esp += 16; return;
}

void f_00893339(void) /* sub_893339 */
{
    FN_ENTER(0x00893339);
    /* 00893339: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089333a: mov ebp, esp */ r_ebp = r_esp;
    /* 0089333c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089333d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00893340: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00893343: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00893346: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00893348: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 0089334a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089334c: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 0089334f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00893351: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00893354: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00893356: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00893359: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 0089335c: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089335f: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 00893362: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00893365: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 00893368: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0089336a: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0089336c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0089336e: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00893370: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 00893373: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893375: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 00893378: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0089337a: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0089337d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0089337f: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00893381: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00893384: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00893387: fld1  */ FPUSH(1.0);
    /* 00893389: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089338a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089338b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0089338f: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00893392: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00893395: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x89339au); f_008909c2();
    /* 0089339a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089339d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089339f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008933a2: jne 0x8933b5 */ if (!fZ) goto L_008933b5;
L_008933a4:; BB(0x008933a4);
    /* 008933a4: fld1  */ FPUSH(1.0);
    /* 008933a6: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008933a9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008933ab: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008933ad: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008933af: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008933b2: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
L_008933b5:; BB(0x008933b5);
    /* 008933b5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008933b6: ret 0xc */ FN_RET(0x00893339); r_esp += 16; return;
}

void f_008933b9(void) /* sub_8933B9 */
{
    FN_ENTER(0x008933b9);
    /* 008933b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008933ba: mov ebp, esp */ r_ebp = r_esp;
    /* 008933bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008933bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008933be: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008933c1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008933c4: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008933c7: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008933ca: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008933cc: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008933ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008933d0: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008933d3: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008933d6: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008933d8: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 008933db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008933de: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008933e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008933e4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008933e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008933e8: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008933eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008933ee: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008933f1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008933f2: ret 0xc */ FN_RET(0x008933b9); r_esp += 16; return;
}

void f_008933f5(void) /* sub_8933F5 */
{
    FN_ENTER(0x008933f5);
    /* 008933f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008933f6: mov ebp, esp */ r_ebp = r_esp;
    /* 008933f8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008933fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008933fc: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008933ff: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00893402: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00893403: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00893406: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893407: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00893409: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089340a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089340c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089340e: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893410: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893412: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893414: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00893416: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00893418: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089341a: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0089341d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089341f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893421: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893423: fld1  */ FPUSH(1.0);
    /* 00893425: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00893429: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089342c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0089342f: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x893434u); f_008909c2();
    /* 00893434: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00893437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893439: je 0x893449 */ if (fZ) goto L_00893449;
L_0089343b:; BB(0x0089343b);
    /* 0089343b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089343e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00893440: je 0x89348f */ if (fZ) goto L_0089348f;
L_00893442:; BB(0x00893442);
    /* 00893442: mov edi, eax */ r_edi = r_eax;
    /* 00893444: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893445: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893446: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893447: jmp 0x89348f */ goto L_0089348f;
L_00893449:; BB(0x00893449);
    /* 00893449: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089344c: fcomp dword ptr [0x99b9f0] */ fx_compare(ST(0), R_F32((u32)(0x99b9f0u))); FPOP();
    /* 00893452: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00893454: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00893457: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089345a: jne 0x893481 */ if (!fZ) goto L_00893481;
L_0089345c:; BB(0x0089345c);
    /* 0089345c: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089345f: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00893461: fdivr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) / ST(0);
    /* 00893467: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893469: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 0089346b: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089346e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893470: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00893473: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00893476: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00893479: lea esi, [ebp - 0xc] */ r_esi = (u32)(r_ebp+0xfffffff4u);
    /* 0089347c: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089347f: jmp 0x893442 */ goto L_00893442;
L_00893481:; BB(0x00893481);
    /* 00893481: fldz  */ FPUSH(0.0);
    /* 00893483: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00893485: fldz  */ FPUSH(0.0);
    /* 00893487: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0089348a: fldz  */ FPUSH(0.0);
    /* 0089348c: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_0089348f:; BB(0x0089348f);
    /* 0089348f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00893490: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00893491: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00893492: ret 8 */ FN_RET(0x008933f5); r_esp += 12; return;
}

void f_00893495(void) /* sub_893495 */
{
    FN_ENTER(0x00893495);
    /* 00893495: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893496: mov ebp, esp */ r_ebp = r_esp;
    /* 00893498: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893499: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0089349c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089349f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008934a2: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008934a4: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008934a6: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008934a8: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008934ab: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008934ad: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008934b0: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008934b2: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008934b5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008934b7: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008934ba: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 008934bd: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008934c0: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 008934c3: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008934c6: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 008934c9: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008934cc: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 008934cf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008934d1: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934d3: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934d5: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934d7: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934d9: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008934dc: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 008934df: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008934e2: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 008934e5: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008934e8: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 008934eb: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008934ee: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 008934f1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008934f3: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934f5: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934f7: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934f9: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008934fb: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 008934fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893500: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 00893503: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00893505: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00893508: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0089350a: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0089350d: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0089350f: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00893511: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00893514: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00893517: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089351a: fld1  */ FPUSH(1.0);
    /* 0089351c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089351d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089351e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00893522: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00893525: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00893528: call 0x8909c2 */ r_esp -= 4; W32(r_esp, 0x89352du); f_008909c2();
    /* 0089352d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00893530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00893532: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00893535: jne 0x893550 */ if (!fZ) goto L_00893550;
L_00893537:; BB(0x00893537);
    /* 00893537: fld1  */ FPUSH(1.0);
    /* 00893539: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0089353c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089353e: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00893540: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00893542: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893544: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00893547: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0089354a: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 0089354d: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_00893550:; BB(0x00893550);
    /* 00893550: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00893551: ret 0xc */ FN_RET(0x00893495); r_esp += 16; return;
}

void f_00893554(void) /* sub_893554 */
{
    FN_ENTER(0x00893554);
    /* 00893554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893555: mov ebp, esp */ r_ebp = r_esp;
    /* 00893557: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0089355a: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089355d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00893560: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00893562: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893564: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00893567: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00893568: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0089356b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089356d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089356e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089356f: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00893572: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00893574: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893576: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00893579: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
    /* 0089357d: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089357f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00893581: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00893583: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893585: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00893588: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089358a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089358d: ja 0x89362f */ if ((!fC&&!fZ)) goto L_0089362f;
L_00893593:; BB(0x00893593);
    /* 00893593: jmp dword ptr [eax*4 + 0x8936c1] */ { u32 t = R32((u32)(r_eax*4+0x8936c1u)); switch (t) { case 0x89359au: goto L_0089359a; case 0x8935fcu: goto L_008935fc; case 0x893600u: goto L_00893600; case 0x893604u: goto L_00893604; case 0x893608u: goto L_00893608; case 0x89360cu: goto L_0089360c; case 0x89360fu: goto L_0089360f; case 0x893613u: goto L_00893613; default: UNSUP(0x00893593, "jump table entry is not a known target"); } }
L_0089359a:; BB(0x0089359a);
    /* 0089359a: fldz  */ FPUSH(0.0);
    /* 0089359c: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008935a0: fldz  */ FPUSH(0.0);
    /* 008935a2: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 008935a6: fldz  */ FPUSH(0.0);
    /* 008935a8: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 008935ac: fldz  */ FPUSH(0.0);
    /* 008935ae: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 008935b2: fldz  */ FPUSH(0.0);
    /* 008935b4: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 008935b8: fldz  */ FPUSH(0.0);
    /* 008935ba: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008935be: fldz  */ FPUSH(0.0);
    /* 008935c0: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 008935c4: fldz  */ FPUSH(0.0);
    /* 008935c6: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 008935ca: fldz  */ FPUSH(0.0);
    /* 008935cc: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008935d0: fldz  */ FPUSH(0.0);
    /* 008935d2: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 008935d6: fldz  */ FPUSH(0.0);
    /* 008935d8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 008935dc: fldz  */ FPUSH(0.0);
    /* 008935de: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 008935e2: fld1  */ FPUSH(1.0);
    /* 008935e4: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 008935e8: fld1  */ FPUSH(1.0);
    /* 008935ea: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 008935ee: fld1  */ FPUSH(1.0);
    /* 008935f0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 008935f4: fld1  */ FPUSH(1.0);
    /* 008935f6: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008935fa: jmp 0x89362f */ goto L_0089362f;
L_008935fc:; BB(0x008935fc);
    /* 008935fc: mov esi, ebx */ r_esi = r_ebx;
    /* 008935fe: jmp 0x89362f */ goto L_0089362f;
L_00893600:; BB(0x00893600);
    /* 00893600: mov esi, edi */ r_esi = r_edi;
    /* 00893602: jmp 0x89362f */ goto L_0089362f;
L_00893604:; BB(0x00893604);
    /* 00893604: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00893605: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00893606: jmp 0x893625 */ goto L_00893625;
L_00893608:; BB(0x00893608);
    /* 00893608: mov esi, ecx */ r_esi = r_ecx;
    /* 0089360a: jmp 0x89362f */ goto L_0089362f;
L_0089360c:; BB(0x0089360c);
    /* 0089360c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089360d: jmp 0x893610 */ goto L_00893610;
L_0089360f:; BB(0x0089360f);
    /* 0089360f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00893610:; BB(0x00893610);
    /* 00893610: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893611: jmp 0x893625 */ goto L_00893625;
L_00893613:; BB(0x00893613);
    /* 00893613: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00893614: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893615: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00893619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089361a: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x89361fu); f_00891536();
    /* 0089361f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00893620: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00893624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_00893625:; BB(0x00893625);
    /* 00893625: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00893629: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089362a: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x89362fu); f_00891536();
L_0089362f:; BB(0x0089362f);
    /* 0089362f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893630: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00893633: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00893636: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893637: call 0x890f3d */ r_esp -= 4; W32(r_esp, 0x89363cu); f_00890f3d();
    /* 0089363c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089363f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00893641: je 0x8936b6 */ if (fZ) goto L_008936b6;
L_00893643:; BB(0x00893643);
    /* 00893643: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00893645: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00893648: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089364a: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 00893650: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 00893653: jge 0x89365b */ if ((fS==fO)) goto L_0089365b;
L_00893655:; BB(0x00893655);
    /* 00893655: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089365b:; BB(0x0089365b);
    /* 0089365b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089365d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0089365f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00893661: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 00893667: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 00893669: jge 0x893671 */ if ((fS==fO)) goto L_00893671;
L_0089366b:; BB(0x0089366b);
    /* 0089366b: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00893671:; BB(0x00893671);
    /* 00893671: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893673: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00893675: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00893678: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089367a: fld1  */ FPUSH(1.0);
    /* 0089367c: fsub dword ptr [esi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4u));
    /* 0089367f: fild dword ptr [eax + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+0xcu)));
    /* 00893682: jge 0x89368a */ if ((fS==fO)) goto L_0089368a;
L_00893684:; BB(0x00893684);
    /* 00893684: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089368a:; BB(0x0089368a);
    /* 0089368a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0089368d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0089368f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00893691: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 00893697: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0089369a: jge 0x8936a2 */ if ((fS==fO)) goto L_008936a2;
L_0089369c:; BB(0x0089369c);
    /* 0089369c: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008936a2:; BB(0x008936a2);
    /* 008936a2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008936a4: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 008936a7: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 008936aa: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 008936ad: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 008936b0: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 008936b3: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
L_008936b6:; BB(0x008936b6);
    /* 008936b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008936b7: mov eax, esi */ r_eax = r_esi;
    /* 008936b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008936ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008936bb: mov esp, ebp */ r_esp = r_ebp;
    /* 008936bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008936be: ret 0x18 */ FN_RET(0x00893554); r_esp += 28; return;
}

void f_008936e1(void) /* sub_8936E1 */
{
    FN_ENTER(0x008936e1);
    /* 008936e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008936e2: mov ebp, esp */ r_ebp = r_esp;
    /* 008936e4: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008936e7: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008936ea: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008936ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008936ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008936f0: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008936f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008936f4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008936f6: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008936f8: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008936fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008936fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008936fe: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00893701: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00893703: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893705: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00893708: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089370a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089370c: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089370e: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893710: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00893713: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00893715: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00893718: ja 0x8937c7 */ if ((!fC&&!fZ)) goto L_008937c7;
L_0089371e:; BB(0x0089371e);
    /* 0089371e: jmp dword ptr [eax*4 + 0x893867] */ { u32 t = R32((u32)(r_eax*4+0x893867u)); switch (t) { case 0x893725u: goto L_00893725; case 0x893787u: goto L_00893787; case 0x89378au: goto L_0089378a; case 0x89378du: goto L_0089378d; case 0x893791u: goto L_00893791; case 0x893794u: goto L_00893794; case 0x893797u: goto L_00893797; case 0x89379bu: goto L_0089379b; default: UNSUP(0x0089371e, "jump table entry is not a known target"); } }
L_00893725:; BB(0x00893725);
    /* 00893725: fldz  */ FPUSH(0.0);
    /* 00893727: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0089372b: fldz  */ FPUSH(0.0);
    /* 0089372d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00893731: fldz  */ FPUSH(0.0);
    /* 00893733: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00893737: fldz  */ FPUSH(0.0);
    /* 00893739: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0089373d: fldz  */ FPUSH(0.0);
    /* 0089373f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00893743: fldz  */ FPUSH(0.0);
    /* 00893745: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00893749: fldz  */ FPUSH(0.0);
    /* 0089374b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0089374f: fldz  */ FPUSH(0.0);
    /* 00893751: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00893755: fldz  */ FPUSH(0.0);
    /* 00893757: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0089375b: fldz  */ FPUSH(0.0);
    /* 0089375d: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00893761: fldz  */ FPUSH(0.0);
    /* 00893763: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00893767: fldz  */ FPUSH(0.0);
    /* 00893769: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0089376d: fld1  */ FPUSH(1.0);
    /* 0089376f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00893773: fld1  */ FPUSH(1.0);
    /* 00893775: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00893779: fld1  */ FPUSH(1.0);
    /* 0089377b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0089377f: fld1  */ FPUSH(1.0);
    /* 00893781: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00893785: jmp 0x8937c7 */ goto L_008937c7;
L_00893787:; BB(0x00893787);
    /* 00893787: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00893788: jmp 0x8937bc */ goto L_008937bc;
L_0089378a:; BB(0x0089378a);
    /* 0089378a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089378b: jmp 0x8937bc */ goto L_008937bc;
L_0089378d:; BB(0x0089378d);
    /* 0089378d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089378e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089378f: jmp 0x8937ad */ goto L_008937ad;
L_00893791:; BB(0x00893791);
    /* 00893791: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893792: jmp 0x8937bc */ goto L_008937bc;
L_00893794:; BB(0x00893794);
    /* 00893794: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00893795: jmp 0x893798 */ goto L_00893798;
L_00893797:; BB(0x00893797);
    /* 00893797: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00893798:; BB(0x00893798);
    /* 00893798: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00893799: jmp 0x8937ad */ goto L_008937ad;
L_0089379b:; BB(0x0089379b);
    /* 0089379b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089379c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089379d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008937a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008937a2: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x8937a7u); f_00891536();
    /* 008937a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008937a8: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008937ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_008937ad:; BB(0x008937ad);
    /* 008937ad: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008937b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008937b2: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x8937b7u); f_00891536();
    /* 008937b7: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008937bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_008937bc:; BB(0x008937bc);
    /* 008937bc: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008937c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008937c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008937c2: call 0x891a42 */ r_esp -= 4; W32(r_esp, 0x8937c7u); f_00891a42();
L_008937c7:; BB(0x008937c7);
    /* 008937c7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008937ca: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008937cc: je 0x89384b */ if (fZ) goto L_0089384b;
L_008937ce:; BB(0x008937ce);
    /* 008937ce: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008937d0: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 008937d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008937d4: jge 0x8937dc */ if ((fS==fO)) goto L_008937dc;
L_008937d6:; BB(0x008937d6);
    /* 008937d6: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008937dc:; BB(0x008937dc);
    /* 008937dc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008937df: fsubr dword ptr [ecx] */ ST(0) = R_F32((u32)(r_ecx)) - ST(0);
    /* 008937e1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008937e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008937e6: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 008937e9: jge 0x8937f1 */ if ((fS==fO)) goto L_008937f1;
L_008937eb:; BB(0x008937eb);
    /* 008937eb: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008937f1:; BB(0x008937f1);
    /* 008937f1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 008937f3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008937f6: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 008937f8: fsub dword ptr [0x99b9b8] */ ST(0) = ST(0) - R_F32((u32)(0x99b9b8u));
    /* 008937fe: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00893800: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00893803: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00893805: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00893808: jge 0x893810 */ if ((fS==fO)) goto L_00893810;
L_0089380a:; BB(0x0089380a);
    /* 0089380a: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00893810:; BB(0x00893810);
    /* 00893810: fsubr dword ptr [ecx + 4] */ ST(0) = R_F32((u32)(r_ecx+0x4u)) - ST(0);
    /* 00893813: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00893816: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00893818: fild dword ptr [eax + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+0xcu)));
    /* 0089381b: jge 0x893823 */ if ((fS==fO)) goto L_00893823;
L_0089381d:; BB(0x0089381d);
    /* 0089381d: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00893823:; BB(0x00893823);
    /* 00893823: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00893825: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00893827: fsub dword ptr [0x99b9b8] */ ST(0) = ST(0) - R_F32((u32)(0x99b9b8u));
    /* 0089382d: fchs  */ ST(0) = -ST(0);
    /* 0089382f: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00893832: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00893835: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 00893838: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0089383b: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 0089383e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00893842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893843: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00893845: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893846: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00893849: jmp 0x893856 */ goto L_00893856;
L_0089384b:; BB(0x0089384b);
    /* 0089384b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0089384e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00893852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893853: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
L_00893856:; BB(0x00893856);
    /* 00893856: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893857: call 0x890f3d */ r_esp -= 4; W32(r_esp, 0x89385cu); f_00890f3d();
    /* 0089385c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089385d: mov eax, esi */ r_eax = r_esi;
    /* 0089385f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00893860: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00893861: mov esp, ebp */ r_esp = r_ebp;
    /* 00893863: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00893864: ret 0x18 */ FN_RET(0x008936e1); r_esp += 28; return;
}

void f_00893887(void) /* sub_893887 */
{
    FN_ENTER(0x00893887);
    /* 00893887: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893888: mov ebp, esp */ r_ebp = r_esp;
    /* 0089388a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089388d: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00893890: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00893893: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00893897: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0089389a: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0089389d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008938a1: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008938a4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008938a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008938a8: call 0x8928a8 */ r_esp -= 4; W32(r_esp, 0x8938adu); f_008928a8();
    /* 008938ad: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 008938b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008938b1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008938b4: call 0x8921e9 */ r_esp -= 4; W32(r_esp, 0x8938b9u); f_008921e9();
    /* 008938b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008938bc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008938bd: ret 0x10 */ FN_RET(0x00893887); r_esp += 20; return;
}

void f_008938c0(void) /* sub_8938C0 */
{
    FN_ENTER(0x008938c0);
    /* 008938c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008938c1: mov ebp, esp */ r_ebp = r_esp;
    /* 008938c3: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008938c6: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008938cc: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008938cf: fldz  */ FPUSH(0.0);
    /* 008938d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008938d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008938d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008938d5: je 0x893a98 */ if (fZ) goto L_00893a98;
L_008938db:; BB(0x008938db);
    /* 008938db: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008938df: je 0x893a44 */ if (fZ) goto L_00893a44;
L_008938e5:; BB(0x008938e5);
    /* 008938e5: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008938e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008938eb: fldz  */ FPUSH(0.0);
    /* 008938ed: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008938f0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008938f4: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008938f8: fldz  */ FPUSH(0.0);
    /* 008938fa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008938fd: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00893901: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00893904: fldz  */ FPUSH(0.0);
    /* 00893906: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0089390a: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 0089390e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00893912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893913: fldz  */ FPUSH(0.0);
    /* 00893915: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00893919: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0089391d: fldz  */ FPUSH(0.0);
    /* 0089391f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00893923: fldz  */ FPUSH(0.0);
    /* 00893925: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00893929: fldz  */ FPUSH(0.0);
    /* 0089392b: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0089392f: fldz  */ FPUSH(0.0);
    /* 00893931: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00893935: fldz  */ FPUSH(0.0);
    /* 00893937: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0089393b: fldz  */ FPUSH(0.0);
    /* 0089393d: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00893941: fldz  */ FPUSH(0.0);
    /* 00893943: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00893947: fld1  */ FPUSH(1.0);
    /* 00893949: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0089394d: call 0x8921e9 */ r_esp -= 4; W32(r_esp, 0x893952u); f_008921e9();
    /* 00893952: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00893955: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893957: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 0089395b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089395c: je 0x893a1e */ if (fZ) goto L_00893a1e;
L_00893962:; BB(0x00893962);
    /* 00893962: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 00893969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089396a: call 0x89177f */ r_esp -= 4; W32(r_esp, 0x89396fu); f_0089177f();
    /* 0089396f: fldz  */ FPUSH(0.0);
    /* 00893971: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00893974: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00893977: fldz  */ FPUSH(0.0);
    /* 00893979: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 00893980: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00893983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893984: fldz  */ FPUSH(0.0);
    /* 00893986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893987: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893988: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 0089398b: fldz  */ FPUSH(0.0);
    /* 0089398d: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 00893990: fldz  */ FPUSH(0.0);
    /* 00893992: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 00893995: fldz  */ FPUSH(0.0);
    /* 00893997: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0089399a: fldz  */ FPUSH(0.0);
    /* 0089399c: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0089399f: fldz  */ FPUSH(0.0);
    /* 008939a1: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 008939a4: fldz  */ FPUSH(0.0);
    /* 008939a6: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 008939a9: fldz  */ FPUSH(0.0);
    /* 008939ab: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 008939ae: fldz  */ FPUSH(0.0);
    /* 008939b0: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 008939b3: fldz  */ FPUSH(0.0);
    /* 008939b5: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 008939b8: fld1  */ FPUSH(1.0);
    /* 008939ba: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 008939bd: fld1  */ FPUSH(1.0);
    /* 008939bf: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 008939c2: fld1  */ FPUSH(1.0);
    /* 008939c4: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 008939c7: fld1  */ FPUSH(1.0);
    /* 008939c9: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008939cb: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008939cd: fchs  */ ST(0) = -ST(0);
    /* 008939cf: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 008939d2: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008939d5: fchs  */ ST(0) = -ST(0);
    /* 008939d7: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 008939da: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008939dd: fchs  */ ST(0) = -ST(0);
    /* 008939df: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 008939e2: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x8939e7u); f_00891536();
    /* 008939e7: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008939eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008939ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008939ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008939ee: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x8939f3u); f_00891536();
    /* 008939f3: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 008939f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008939f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008939f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008939fa: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x8939ffu); f_00891536();
    /* 008939ff: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 00893a02: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 00893a04: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00893a07: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00893a0a: fadd dword ptr [esi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x34u));
    /* 00893a0d: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00893a10: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00893a13: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 00893a16: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00893a19: jmp 0x893ae8 */ goto L_00893ae8;
L_00893a1e:; BB(0x00893a1e);
    /* 00893a1e: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00893a21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893a22: call 0x89177f */ r_esp -= 4; W32(r_esp, 0x893a27u); f_0089177f();
    /* 00893a27: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00893a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893a2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893a2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893a2e: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x893a33u); f_00891536();
    /* 00893a33: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 00893a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893a38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893a39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893a3a: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x893a3fu); f_00891536();
    /* 00893a3f: jmp 0x893ae8 */ goto L_00893ae8;
L_00893a44:; BB(0x00893a44);
    /* 00893a44: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00893a47: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00893a4a: fldz  */ FPUSH(0.0);
    /* 00893a4c: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00893a4f: fldz  */ FPUSH(0.0);
    /* 00893a51: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00893a54: fldz  */ FPUSH(0.0);
    /* 00893a56: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 00893a59: fldz  */ FPUSH(0.0);
    /* 00893a5b: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 00893a5e: fldz  */ FPUSH(0.0);
    /* 00893a60: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 00893a63: fldz  */ FPUSH(0.0);
    /* 00893a65: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 00893a68: fldz  */ FPUSH(0.0);
    /* 00893a6a: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 00893a6d: fldz  */ FPUSH(0.0);
    /* 00893a6f: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00893a72: fldz  */ FPUSH(0.0);
    /* 00893a74: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00893a77: fldz  */ FPUSH(0.0);
    /* 00893a79: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00893a7c: fldz  */ FPUSH(0.0);
    /* 00893a7e: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00893a81: fld1  */ FPUSH(1.0);
    /* 00893a83: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00893a85: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00893a87: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00893a8a: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 00893a8d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00893a90: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00893a93: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00893a96: jmp 0x893ae8 */ goto L_00893ae8;
L_00893a98:; BB(0x00893a98);
    /* 00893a98: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00893a9b: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00893a9e: fldz  */ FPUSH(0.0);
    /* 00893aa0: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00893aa3: fldz  */ FPUSH(0.0);
    /* 00893aa5: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00893aa8: fldz  */ FPUSH(0.0);
    /* 00893aaa: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 00893aad: fldz  */ FPUSH(0.0);
    /* 00893aaf: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 00893ab2: fldz  */ FPUSH(0.0);
    /* 00893ab4: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 00893ab7: fldz  */ FPUSH(0.0);
    /* 00893ab9: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 00893abc: fldz  */ FPUSH(0.0);
    /* 00893abe: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 00893ac1: fldz  */ FPUSH(0.0);
    /* 00893ac3: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00893ac6: fldz  */ FPUSH(0.0);
    /* 00893ac8: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00893acb: fldz  */ FPUSH(0.0);
    /* 00893acd: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00893ad0: fldz  */ FPUSH(0.0);
    /* 00893ad2: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00893ad5: fld1  */ FPUSH(1.0);
    /* 00893ad7: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00893ada: fld1  */ FPUSH(1.0);
    /* 00893adc: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 00893adf: fld1  */ FPUSH(1.0);
    /* 00893ae1: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 00893ae4: fld1  */ FPUSH(1.0);
    /* 00893ae6: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
L_00893ae8:; BB(0x00893ae8);
    /* 00893ae8: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893aec: je 0x893b49 */ if (fZ) goto L_00893b49;
L_00893aee:; BB(0x00893aee);
    /* 00893aee: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00893af1: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00893af5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893af6: call 0x8921e9 */ r_esp -= 4; W32(r_esp, 0x893afbu); f_008921e9();
    /* 00893afb: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00893afe: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00893b00: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 00893b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893b05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893b06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893b07: je 0x893b44 */ if (fZ) goto L_00893b44;
L_00893b09:; BB(0x00893b09);
    /* 00893b09: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 00893b0c: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00893b0e: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00893b11: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 00893b14: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 00893b17: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00893b1a: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00893b1d: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 00893b20: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00893b23: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x893b28u); f_00891536();
    /* 00893b28: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 00893b2b: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 00893b2d: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00893b30: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 00893b33: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00893b36: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00893b39: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00893b3c: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 00893b3f: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00893b42: jmp 0x893b49 */ goto L_00893b49;
L_00893b44:; BB(0x00893b44);
    /* 00893b44: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x893b49u); f_00891536();
L_00893b49:; BB(0x00893b49);
    /* 00893b49: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00893b4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00893b4e: je 0x893b6a */ if (fZ) goto L_00893b6a;
L_00893b50:; BB(0x00893b50);
    /* 00893b50: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 00893b53: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00893b55: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 00893b58: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00893b5b: fadd dword ptr [esi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x34u));
    /* 00893b5e: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00893b61: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00893b64: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00893b67: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
L_00893b6a:; BB(0x00893b6a);
    /* 00893b6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00893b6b: mov eax, esi */ r_eax = r_esi;
    /* 00893b6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00893b6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00893b70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00893b71: ret 0x1c */ FN_RET(0x008938c0); r_esp += 32; return;
}

void f_00893b74(void) /* sub_893B74 */
{
    FN_ENTER(0x00893b74);
    /* 00893b74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893b75: mov ebp, esp */ r_ebp = r_esp;
    /* 00893b77: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00893b7a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00893b7d: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00893b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893b81: call 0x892f48 */ r_esp -= 4; W32(r_esp, 0x893b86u); f_00892f48();
    /* 00893b86: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00893b89: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00893b8c: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00893b8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00893b92: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00893b95: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00893b97: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893b99: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00893b9c: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00893b9f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893ba1: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893ba4: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00893ba7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893ba9: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00893bac: fchs  */ ST(0) = -ST(0);
    /* 00893bae: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00893bb1: fchs  */ ST(0) = -ST(0);
    /* 00893bb3: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893bb6: fchs  */ ST(0) = -ST(0);
    /* 00893bb8: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00893bbb: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00893bbe: fchs  */ ST(0) = -ST(0);
    /* 00893bc0: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00893bc3: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00893bc5: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00893bc7: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00893bc9: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00893bcb: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893bcd: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00893bcf: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00893bd2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893bd4: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00893bd6: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00893bd9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893bdb: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00893bdd: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00893be0: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00893be2: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00893be5: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00893be8: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893bea: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00893bed: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00893bef: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00893bf2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893bf4: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00893bf7: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00893bfa: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00893bfc: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00893bff: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00893c02: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00893c04: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00893c07: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00893c0a: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893c0c: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00893c0f: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00893c12: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893c14: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00893c17: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00893c19: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00893c1c: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00893c1f: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00893c22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893c24: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893c26: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00893c29: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00893c2c: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00893c2f: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00893c32: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893c34: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00893c37: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00893c3a: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00893c3d: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00893c40: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00893c43: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00893c45: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00893c48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893c4a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00893c4b: ret 0xc */ FN_RET(0x00893b74); r_esp += 16; return;
}

void f_00893c4e(void) /* sub_893C4E */
{
    FN_ENTER(0x00893c4e);
    /* 00893c4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893c4f: mov ebp, esp */ r_ebp = r_esp;
    /* 00893c51: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00893c54: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00893c57: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00893c5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893c5b: call 0x892f48 */ r_esp -= 4; W32(r_esp, 0x893c60u); f_00892f48();
    /* 00893c60: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00893c63: fmul dword ptr [0x99b9fc] */ ST(0) = ST(0) * R_F32((u32)(0x99b9fcu));
    /* 00893c69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00893c6c: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00893c6f: fmul dword ptr [0x99b9fc] */ ST(0) = ST(0) * R_F32((u32)(0x99b9fcu));
    /* 00893c75: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893c78: fmul dword ptr [0x99b9fc] */ ST(0) = ST(0) * R_F32((u32)(0x99b9fcu));
    /* 00893c7e: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 00893c81: fld dword ptr [0x99b9b8] */ FPUSH(R_F32((u32)(0x99b9b8u)));
    /* 00893c87: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00893c8a: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00893c8c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00893c8e: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00893c90: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893c92: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 00893c95: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00893c98: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893c9a: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 00893c9d: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00893ca0: fldz  */ FPUSH(0.0);
    /* 00893ca2: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00893ca5: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00893ca8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00893caa: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00893cad: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00893cb0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893cb2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00893cb4: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00893cb7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893cb9: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00893cbc: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00893cbf: fldz  */ FPUSH(0.0);
    /* 00893cc1: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00893cc4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893cc7: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00893cc9: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00893ccc: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893ccf: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893cd1: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00893cd4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893cd7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00893cd9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00893cdb: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00893cde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893ce0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893ce2: fldz  */ FPUSH(0.0);
    /* 00893ce4: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00893ce7: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00893cea: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00893cec: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00893cef: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00893cf2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00893cf4: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00893cf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893cf9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893cfb: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00893cfe: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00893d01: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00893d04: fld1  */ FPUSH(1.0);
    /* 00893d06: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00893d09: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00893d0a: ret 8 */ FN_RET(0x00893c4e); r_esp += 12; return;
}

void f_00893d0d(void) /* sub_893D0D */
{
    FN_ENTER(0x00893d0d);
    /* 00893d0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00893d0e: lea ebp, [esp - 0x5c] */ r_ebp = (u32)(r_esp+0xffffffa4u);
    /* 00893d12: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00893d18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00893d19: mov esi, dword ptr [ebp + 0x70] */ r_esi = R32((u32)(r_ebp+0x70u));
    /* 00893d1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00893d1d: lea edi, [ebp - 0x24] */ r_edi = (u32)(r_ebp+0xffffffdcu);
    /* 00893d20: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d21: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d22: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d23: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d24: mov esi, dword ptr [ebp + 0x74] */ r_esi = R32((u32)(r_ebp+0x74u));
    /* 00893d27: lea edi, [ebp + 0xc] */ r_edi = (u32)(r_ebp+0xcu);
    /* 00893d2a: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d2b: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d2c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d2d: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d2e: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00893d31: fadd dword ptr [ebp - 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00893d34: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00893d37: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 00893d3a: fadd dword ptr [ebp - 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00893d3d: lea edi, [ebp + 0x3c] */ r_edi = (u32)(r_ebp+0x3cu);
    /* 00893d40: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00893d43: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d44: fadd dword ptr [ebp - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00893d47: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00893d4a: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00893d4d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00893d50: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d51: fsub dword ptr [ebp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xcu));
    /* 00893d54: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00893d57: fsub dword ptr [ebp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x10u));
    /* 00893d5a: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d5b: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 00893d5e: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00893d61: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 00893d64: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d65: mov esi, dword ptr [ebp + 0x7c] */ r_esi = R32((u32)(r_ebp+0x7cu));
    /* 00893d68: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 00893d6b: lea edi, [ebp - 0x14] */ r_edi = (u32)(r_ebp+0xffffffecu);
    /* 00893d6e: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00893d71: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d72: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 00893d75: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d76: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 00893d79: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893d7b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00893d7d: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d7e: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00893d80: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00893d82: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893d83: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893d85: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00893d87: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00893d89: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893d8b: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00893d8d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00893d8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893d91: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 00893d94: fmul dword ptr [ebp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x58u));
    /* 00893d97: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 00893d9a: fmul dword ptr [ebp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x54u));
    /* 00893d9d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893d9f: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 00893da2: fmul dword ptr [ebp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x50u));
    /* 00893da5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893da7: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893da9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893dab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893dad: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00893daf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893db1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893db3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893db5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00893db7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893db9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893dbb: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00893dbe: jne 0x893dea */ if (!fZ) goto L_00893dea;
L_00893dc0:; BB(0x00893dc0);
    /* 00893dc0: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00893dc3: lea esi, [ebp + 0x2c] */ r_esi = (u32)(r_ebp+0x2cu);
    /* 00893dc6: fchs  */ ST(0) = -ST(0);
    /* 00893dc8: lea edi, [ebp - 0x24] */ r_edi = (u32)(r_ebp+0xffffffdcu);
    /* 00893dcb: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 00893dce: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00893dd1: fchs  */ ST(0) = -ST(0);
    /* 00893dd3: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 00893dd6: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00893dd9: fchs  */ ST(0) = -ST(0);
    /* 00893ddb: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 00893dde: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00893de1: fchs  */ ST(0) = -ST(0);
    /* 00893de3: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00893de6: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893de7: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893de8: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893de9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
L_00893dea:; BB(0x00893dea);
    /* 00893dea: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00893ded: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 00893df0: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00893df3: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 00893df6: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 00893df9: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 00893dfc: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 00893dff: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 00893e02: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00893e05: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 00893e08: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00893e0b: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 00893e0e: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 00893e11: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00893e14: fsub dword ptr [ebp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x44u));
    /* 00893e17: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 00893e1a: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00893e1d: fsub dword ptr [ebp + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x48u));
    /* 00893e20: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 00893e23: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893e25: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00893e27: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00893e29: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00893e2b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893e2d: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00893e2f: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00893e31: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893e33: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00893e35: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00893e37: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893e39: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 00893e3c: fmul dword ptr [ebp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x58u));
    /* 00893e3f: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 00893e42: fmul dword ptr [ebp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x54u));
    /* 00893e45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893e47: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 00893e4a: fmul dword ptr [ebp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x50u));
    /* 00893e4d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893e4f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893e51: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893e53: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893e55: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00893e57: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893e59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893e5b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893e5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00893e5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893e61: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00893e64: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893e66: jne 0x893e92 */ if (!fZ) goto L_00893e92;
L_00893e68:; BB(0x00893e68);
    /* 00893e68: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00893e6b: lea esi, [ebp + 0x2c] */ r_esi = (u32)(r_ebp+0x2cu);
    /* 00893e6e: fchs  */ ST(0) = -ST(0);
    /* 00893e70: lea edi, [ebp + 0x3c] */ r_edi = (u32)(r_ebp+0x3cu);
    /* 00893e73: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 00893e76: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00893e79: fchs  */ ST(0) = -ST(0);
    /* 00893e7b: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 00893e7e: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 00893e81: fchs  */ ST(0) = -ST(0);
    /* 00893e83: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 00893e86: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 00893e89: fchs  */ ST(0) = -ST(0);
    /* 00893e8b: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00893e8e: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893e8f: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893e90: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893e91: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
L_00893e92:; BB(0x00893e92);
    /* 00893e92: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00893e95: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00893e98: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00893e9b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 00893e9e: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00893ea1: fadd dword ptr [ebp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x44u));
    /* 00893ea4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893ea7: fadd dword ptr [ebp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x48u));
    /* 00893eaa: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00893ead: fsub dword ptr [ebp - 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffecu));
    /* 00893eb0: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00893eb3: fsub dword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff0u));
    /* 00893eb6: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 00893eb9: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 00893ebc: fsub dword ptr [ebp - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00893ebf: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 00893ec2: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 00893ec5: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00893ec8: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 00893ecb: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893ecd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00893ecf: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00893ed1: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00893ed3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893ed5: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00893ed7: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00893ed9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893edb: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00893edd: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00893edf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893ee1: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 00893ee4: fmul dword ptr [ebp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x58u));
    /* 00893ee7: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 00893eea: fmul dword ptr [ebp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x54u));
    /* 00893eed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893eef: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 00893ef2: fmul dword ptr [ebp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x50u));
    /* 00893ef5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893ef7: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893ef9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00893efb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00893efd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00893eff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893f01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893f03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893f05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00893f07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893f09: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00893f0c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893f0e: jne 0x893f3a */ if (!fZ) goto L_00893f3a;
L_00893f10:; BB(0x00893f10);
    /* 00893f10: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00893f13: lea esi, [ebp + 0x2c] */ r_esi = (u32)(r_ebp+0x2cu);
    /* 00893f16: fchs  */ ST(0) = -ST(0);
    /* 00893f18: lea edi, [ebp - 0x14] */ r_edi = (u32)(r_ebp+0xffffffecu);
    /* 00893f1b: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 00893f1e: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00893f21: fchs  */ ST(0) = -ST(0);
    /* 00893f23: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 00893f26: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00893f29: fchs  */ ST(0) = -ST(0);
    /* 00893f2b: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 00893f2e: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00893f31: fchs  */ ST(0) = -ST(0);
    /* 00893f33: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00893f36: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f37: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f38: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f39: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
L_00893f3a:; BB(0x00893f3a);
    /* 00893f3a: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00893f3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f3e: lea eax, [ebp + 0x2c] */ r_eax = (u32)(r_ebp+0x2cu);
    /* 00893f41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f42: call 0x892b03 */ r_esp -= 4; W32(r_esp, 0x893f47u); f_00892b03();
    /* 00893f47: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00893f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f4b: lea eax, [ebp + 0x2c] */ r_eax = (u32)(r_ebp+0x2cu);
    /* 00893f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f4f: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 00893f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f53: call 0x892994 */ r_esp -= 4; W32(r_esp, 0x893f58u); f_00892994();
    /* 00893f58: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 00893f5b: lea edi, [ebp - 4] */ r_edi = (u32)(r_ebp+0xfffffffcu);
    /* 00893f5e: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f5f: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f60: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00893f63: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f65: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00893f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f69: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f6a: call 0x892bbd */ r_esp -= 4; W32(r_esp, 0x893f6fu); f_00892bbd();
    /* 00893f6f: lea eax, [ebp + 0x3c] */ r_eax = (u32)(r_ebp+0x3cu);
    /* 00893f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f73: lea eax, [ebp + 0x2c] */ r_eax = (u32)(r_ebp+0x2cu);
    /* 00893f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f77: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 00893f7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f7b: call 0x892994 */ r_esp -= 4; W32(r_esp, 0x893f80u); f_00892994();
    /* 00893f80: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 00893f83: lea edi, [ebp - 4] */ r_edi = (u32)(r_ebp+0xfffffffcu);
    /* 00893f86: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f87: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f88: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00893f8b: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f8d: lea eax, [ebp + 0x4c] */ r_eax = (u32)(r_ebp+0x4cu);
    /* 00893f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f91: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00893f92: call 0x892bbd */ r_esp -= 4; W32(r_esp, 0x893f97u); f_00892bbd();
    /* 00893f97: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00893f9a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00893f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893f9e: fadd dword ptr [ebp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4cu));
    /* 00893fa1: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00893fa4: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00893fa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893fa8: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 00893fab: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00893fae: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00893fb1: fadd dword ptr [ebp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x54u));
    /* 00893fb4: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00893fb7: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00893fba: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 00893fbd: fld dword ptr [0x99ba00] */ FPUSH(R_F32((u32)(0x99ba00u)));
    /* 00893fc3: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00893fc5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00893fc7: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00893fca: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00893fcd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00893fcf: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00893fd2: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00893fd5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00893fd7: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 00893fda: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00893fdc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00893fde: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00893fe1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893fe3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893fe5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00893fe7: call 0x892c41 */ r_esp -= 4; W32(r_esp, 0x893fecu); f_00892c41();
    /* 00893fec: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00893fef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893ff0: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00893ff3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893ff4: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 00893ff7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00893ff8: call 0x892994 */ r_esp -= 4; W32(r_esp, 0x893ffdu); f_00892994();
    /* 00893ffd: mov edi, dword ptr [ebp + 0x64] */ r_edi = R32((u32)(r_ebp+0x64u));
    /* 00894000: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 00894003: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894004: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894005: lea eax, [ebp + 0x3c] */ r_eax = (u32)(r_ebp+0x3cu);
    /* 00894008: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089400a: lea eax, [ebp + 0x2c] */ r_eax = (u32)(r_ebp+0x2cu);
    /* 0089400d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089400e: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089400f: call 0x892b03 */ r_esp -= 4; W32(r_esp, 0x894014u); f_00892b03();
    /* 00894014: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00894017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894018: lea eax, [ebp + 0x2c] */ r_eax = (u32)(r_ebp+0x2cu);
    /* 0089401b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089401c: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 0089401f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894020: call 0x892994 */ r_esp -= 4; W32(r_esp, 0x894025u); f_00892994();
    /* 00894025: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 00894028: lea edi, [ebp - 4] */ r_edi = (u32)(r_ebp+0xfffffffcu);
    /* 0089402b: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089402c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089402d: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00894030: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894032: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00894035: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894036: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894037: call 0x892bbd */ r_esp -= 4; W32(r_esp, 0x89403cu); f_00892bbd();
    /* 0089403c: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0089403f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894040: lea eax, [ebp + 0x2c] */ r_eax = (u32)(r_ebp+0x2cu);
    /* 00894043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894044: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 00894047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894048: call 0x892994 */ r_esp -= 4; W32(r_esp, 0x89404du); f_00892994();
    /* 0089404d: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 00894050: lea edi, [ebp - 4] */ r_edi = (u32)(r_ebp+0xfffffffcu);
    /* 00894053: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894054: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894055: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00894058: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00894059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089405a: lea eax, [ebp + 0x4c] */ r_eax = (u32)(r_ebp+0x4cu);
    /* 0089405d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089405e: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089405f: call 0x892bbd */ r_esp -= 4; W32(r_esp, 0x894064u); f_00892bbd();
    /* 00894064: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00894067: fadd dword ptr [ebp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4cu));
    /* 0089406a: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0089406d: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 00894070: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00894073: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00894076: fadd dword ptr [ebp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x54u));
    /* 00894079: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 0089407c: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0089407f: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 00894082: fld dword ptr [0x99ba00] */ FPUSH(R_F32((u32)(0x99ba00u)));
    /* 00894088: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089408a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089408c: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089408f: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00894092: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00894094: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00894097: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 0089409a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089409c: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0089409f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008940a1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008940a3: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008940a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008940a8: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008940ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008940ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008940ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008940b0: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 008940b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008940b4: call 0x892c41 */ r_esp -= 4; W32(r_esp, 0x8940b9u); f_00892c41();
    /* 008940b9: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 008940bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008940bd: lea eax, [ebp + 0x3c] */ r_eax = (u32)(r_ebp+0x3cu);
    /* 008940c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008940c1: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 008940c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008940c5: call 0x892994 */ r_esp -= 4; W32(r_esp, 0x8940cau); f_00892994();
    /* 008940ca: mov edi, dword ptr [ebp + 0x68] */ r_edi = R32((u32)(r_ebp+0x68u));
    /* 008940cd: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 008940d0: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940d1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940d2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940d3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940d4: mov edi, dword ptr [ebp + 0x6c] */ r_edi = R32((u32)(r_ebp+0x6cu));
    /* 008940d7: lea esi, [ebp + 0x3c] */ r_esi = (u32)(r_ebp+0x3cu);
    /* 008940da: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940db: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940dc: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940dd: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008940de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008940df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008940e0: add ebp, 0x5c */ {  u32 a = r_ebp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008940e3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008940e4: ret 0x1c */ FN_RET(0x00893d0d); r_esp += 32; return;
}

