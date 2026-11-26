#include "protos.h"

void f_008910db(void)
{
    FN_ENTER(0x008910db);
    /* 008910db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008910dd: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8910e2u); f_0089f633();
    /* 008910e2: jmp dword ptr [0xa33fa8] */ { u32 t = R32((u32)(0xa33fa8u)); jmp_ind(t); return; }
}

void f_008910e8(void) /* sub_8910E8 */
{
    FN_ENTER(0x008910e8);
    /* 008910e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008910e9: mov ebp, esp */ r_ebp = r_esp;
    /* 008910eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008910ed: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8910f2u); f_0089f633();
    /* 008910f2: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 008910f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008910f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008910f9: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008910fc: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008910ff: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891102: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00891105: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891108: call dword ptr [0xa34058] */ { u32 t = R32((u32)(0xa34058u)); r_esp -= 4; W32(r_esp, 0x89110eu); call_ind(t); }
    /* 0089110e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089110f: ret 0x18 */ FN_RET(0x008910e8); r_esp += 28; return;
}

void f_00891112(void) /* sub_891112 */
{
    FN_ENTER(0x00891112);
    /* 00891112: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891113: mov ebp, esp */ r_ebp = r_esp;
    /* 00891115: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00891118: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0089111b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0089111e: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00891121: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00891124: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00891127: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089112a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089112b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089112d: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00891130: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00891131: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00891134: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 00891137: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00891139: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089113c: fld dword ptr [0x99b9e0] */ FPUSH(R_F32((u32)(0x99b9e0u)));
    /* 00891142: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891144: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00891147: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089114a: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089114d: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 00891153: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891155: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00891157: fsubr dword ptr [ebp - 4] */ ST(0) = R_F32((u32)(r_ebp+0xfffffffcu)) - ST(0);
    /* 0089115a: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0089115d: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891160: fsub dword ptr [ebp - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00891163: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00891166: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00891168: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089116a: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0089116c: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089116e: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00891170: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891172: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891174: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00891176: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891178: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089117a: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 0089117c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089117e: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891180: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00891182: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00891185: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891187: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 0089118a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089118c: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089118e: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00891191: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891193: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00891195: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00891198: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089119a: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0089119d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089119f: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 008911a2: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008911a4: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 008911a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008911a9: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008911ab: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008911ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008911b0: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008911b2: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008911b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008911b7: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008911ba: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 008911bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008911be: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008911c0: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 008911c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008911c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008911c6: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008911c8: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008911cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008911cd: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008911cf: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008911d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008911d4: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008911d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008911d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008911db: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008911dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008911df: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008911e0: ret 0x18 */ FN_RET(0x00891112); r_esp += 28; return;
}

void f_008911e3(void) /* sub_8911E3 */
{
    FN_ENTER(0x008911e3);
    /* 008911e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008911e4: mov ebp, esp */ r_ebp = r_esp;
    /* 008911e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008911e8: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8911edu); f_0089f633();
    /* 008911ed: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 008911f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008911f1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008911f4: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008911f7: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008911fa: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008911fd: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00891200: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891203: call dword ptr [0xa3405c] */ { u32 t = R32((u32)(0xa3405cu)); r_esp -= 4; W32(r_esp, 0x891209u); call_ind(t); }
    /* 00891209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089120a: ret 0x18 */ FN_RET(0x008911e3); r_esp += 28; return;
}

void f_0089120d(void) /* sub_89120D */
{
    FN_ENTER(0x0089120d);
    /* 0089120d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089120e: mov ebp, esp */ r_ebp = r_esp;
    /* 00891210: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00891211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00891212: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00891215: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00891218: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0089121b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089121e: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00891221: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891224: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00891225: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891227: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 0089122a: fld dword ptr [0x99b9ec] */ FPUSH(R_F32((u32)(0x99b9ecu)));
    /* 00891230: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00891231: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891233: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00891236: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891238: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0089123a: fsub dword ptr [ebp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x1cu));
    /* 0089123d: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00891240: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891242: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 00891248: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089124a: fmul dword ptr [0x99b9e8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e8u));
    /* 00891250: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00891252: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00891254: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00891257: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891259: fmul dword ptr [0x99b9e4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e4u));
    /* 0089125f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00891261: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00891264: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00891267: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891269: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089126b: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0089126d: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 00891273: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891276: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00891278: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0089127b: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 0089127d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089127f: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00891282: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00891284: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891286: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891288: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 0089128a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089128c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089128e: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891290: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891292: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00891295: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00891298: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 0089129b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089129d: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008912a0: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008912a3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912a5: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008912a8: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008912ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912ad: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008912af: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008912b2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008912b4: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 008912b7: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 008912ba: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 008912bd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912bf: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008912c2: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008912c5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912c7: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008912ca: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008912cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912cf: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008912d1: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008912d4: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008912d6: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 008912d9: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 008912dc: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 008912df: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912e1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008912e4: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008912e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008912e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008912e9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912eb: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008912ee: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008912f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008912f3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008912f5: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008912f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008912fa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008912fc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008912fd: ret 0x18 */ FN_RET(0x0089120d); r_esp += 28; return;
}

void f_00891300(void) /* sub_891300 */
{
    FN_ENTER(0x00891300);
    /* 00891300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891301: mov ebp, esp */ r_ebp = r_esp;
    /* 00891303: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891305: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x89130au); f_0089f633();
    /* 0089130a: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0089130d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089130e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089130f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00891313: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00891316: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00891319: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089131c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089131f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00891322: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891325: call dword ptr [0xa34060] */ { u32 t = R32((u32)(0xa34060u)); r_esp -= 4; W32(r_esp, 0x89132bu); call_ind(t); }
    /* 0089132b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089132c: ret 0x18 */ FN_RET(0x00891300); r_esp += 28; return;
}

void f_0089132f(void) /* sub_89132F */
{
    FN_ENTER(0x0089132f);
    /* 0089132f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891330: mov ebp, esp */ r_ebp = r_esp;
    /* 00891332: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00891335: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00891338: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0089133a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089133d: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0089133f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00891340: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00891343: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00891346: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00891348: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0089134a: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0089134d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089134f: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00891351: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891353: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00891356: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00891359: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0089135c: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0089135f: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00891362: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00891365: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891367: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 0089136a: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0089136d: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00891370: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 00891373: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00891376: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00891379: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0089137c: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0089137f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891381: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00891384: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00891387: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0089138a: fsub dword ptr [ecx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xcu));
    /* 0089138d: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00891390: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00891393: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00891394: fsub dword ptr [ecx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xcu));
    /* 00891397: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0089139a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089139c: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 0089139f: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008913a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008913a3: ret 0x18 */ FN_RET(0x0089132f); r_esp += 28; return;
}

void f_008913a6(void)
{
    FN_ENTER(0x008913a6);
    /* 008913a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008913a8: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8913adu); f_0089f633();
    /* 008913ad: jmp dword ptr [0xa33f90] */ { u32 t = R32((u32)(0xa33f90u)); jmp_ind(t); return; }
}

void f_008913b3(void) /* sub_8913B3 */
{
    FN_ENTER(0x008913b3);
    /* 008913b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008913b4: mov ebp, esp */ r_ebp = r_esp;
    /* 008913b6: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008913b9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008913bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008913bf: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 008913c2: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 008913c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008913c6: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008913c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008913ca: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008913cd: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 008913d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008913d2: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 008913d5: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 008913d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008913da: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008913dc: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008913de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008913e0: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008913e3: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 008913e6: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 008913e9: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 008913ec: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008913ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008913f1: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008913f4: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008913f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008913f8: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 008913fb: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 008913fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891400: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00891403: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00891406: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00891409: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0089140c: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089140f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891411: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00891414: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00891416: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891418: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0089141b: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 0089141e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891420: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00891423: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00891426: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00891429: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0089142c: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089142f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891431: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00891434: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00891436: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891438: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0089143b: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 0089143e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891441: mov edi, eax */ r_edi = r_eax;
    /* 00891443: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891445: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00891448: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00891449: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089144a: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089144b: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089144c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089144d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089144e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089144f: ret 0xc */ FN_RET(0x008913b3); r_esp += 16; return;
}

void f_00891452(void)
{
    FN_ENTER(0x00891452);
    /* 00891452: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891454: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891459u); f_0089f633();
    /* 00891459: jmp dword ptr [0xa33fb4] */ { u32 t = R32((u32)(0xa33fb4u)); jmp_ind(t); return; }
}

void f_0089145f(void) /* sub_89145F */
{
    FN_ENTER(0x0089145f);
    /* 0089145f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891460: mov ebp, esp */ r_ebp = r_esp;
    /* 00891462: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891465: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00891468: fmul dword ptr [eax + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x3cu));
    /* 0089146b: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0089146e: fmul dword ptr [eax + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x2cu));
    /* 00891471: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891473: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00891476: fmul dword ptr [eax + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x24u));
    /* 00891479: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 0089147c: fmul dword ptr [eax + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x2cu));
    /* 0089147f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891481: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00891484: fmul dword ptr [eax + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x24u));
    /* 00891487: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 0089148a: fmul dword ptr [eax + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x34u));
    /* 0089148d: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089148f: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00891492: fmul dword ptr [eax + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x3cu));
    /* 00891495: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 00891498: fmul dword ptr [eax + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x2cu));
    /* 0089149b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089149d: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 008914a0: fmul dword ptr [eax + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x20u));
    /* 008914a3: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 008914a6: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 008914a9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008914ab: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 008914ae: fmul dword ptr [eax + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x34u));
    /* 008914b1: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 008914b4: fmul dword ptr [eax + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x24u));
    /* 008914b7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008914b9: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008914bc: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008914be: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 008914c1: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008914c3: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 008914c6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008914c8: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008914ca: fmul dword ptr [eax + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x1cu));
    /* 008914cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008914cf: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008914d1: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 008914d3: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 008914d6: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008914d8: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 008914db: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008914dd: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008914df: fmul dword ptr [eax + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x1cu));
    /* 008914e2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008914e4: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 008914e7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008914e9: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008914eb: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 008914ee: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008914f0: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 008914f3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008914f5: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008914f8: fmul dword ptr [eax + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x1cu));
    /* 008914fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008914fd: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00891500: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891502: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891504: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 00891507: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891509: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 0089150c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089150e: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00891511: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00891514: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891516: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00891519: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089151b: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0089151d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089151f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891521: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891523: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00891526: ret 4 */ FN_RET(0x0089145f); r_esp += 8; return;
}

void f_00891529(void) /* sub_891529 */
{
    FN_ENTER(0x00891529);
    /* 00891529: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089152b: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891530u); f_0089f633();
    /* 00891530: jmp dword ptr [0xa33f94] */ { u32 t = R32((u32)(0xa33f94u)); jmp_ind(t); return; }
}

void f_00891536(void) /* sub_891536 */
{
    FN_ENTER(0x00891536);
    /* 00891536: jmp dword ptr [0xa33f94] */ { u32 t = R32((u32)(0xa33f94u)); jmp_ind(t); return; }
}

void f_0089153c(void) /* sub_89153C */
{
    FN_ENTER(0x0089153c);
    /* 0089153c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089153d: mov ebp, esp */ r_ebp = r_esp;
    /* 0089153f: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00891542: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891545: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00891548: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089154a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089154d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089154e: je 0x891556 */ if (fZ) goto L_00891556;
L_00891550:; BB(0x00891550);
    /* 00891550: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00891552: mov esi, eax */ r_esi = r_eax;
    /* 00891554: jne 0x891559 */ if (!fZ) goto L_00891559;
L_00891556:; BB(0x00891556);
    /* 00891556: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
L_00891559:; BB(0x00891559);
    /* 00891559: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0089155c: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 0089155f: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00891561: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00891563: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891565: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00891568: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 0089156b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089156d: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00891570: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00891573: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891575: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00891577: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0089157a: fmul dword ptr [ecx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x14u));
    /* 0089157d: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00891580: fmul dword ptr [ecx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x34u));
    /* 00891583: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891585: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00891588: fmul dword ptr [ecx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x24u));
    /* 0089158b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089158d: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00891590: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00891592: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891594: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00891597: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0089159a: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 0089159d: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008915a0: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008915a2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915a4: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008915a7: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 008915aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915ac: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 008915af: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008915b2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915b4: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 008915b7: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 008915ba: fmul dword ptr [ecx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3cu));
    /* 008915bd: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 008915c0: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008915c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915c5: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008915c7: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008915ca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915cc: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 008915cf: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008915d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915d4: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 008915d7: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 008915da: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 008915dd: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 008915e0: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008915e2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915e4: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008915e7: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 008915ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915ec: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 008915ef: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 008915f2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008915f4: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 008915f7: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 008915fa: fmul dword ptr [ecx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x24u));
    /* 008915fd: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00891600: fmul dword ptr [ecx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x34u));
    /* 00891603: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891605: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00891608: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 0089160b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089160d: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00891610: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 00891613: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891615: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 00891618: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0089161b: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 0089161e: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00891621: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 00891624: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891626: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00891629: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 0089162c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089162e: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 00891631: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 00891634: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891636: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 00891639: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0089163c: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 0089163f: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00891642: fmul dword ptr [ecx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3cu));
    /* 00891645: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891647: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0089164a: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0089164d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089164f: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00891652: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00891655: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891657: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0089165a: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0089165d: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 00891660: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00891663: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00891665: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891667: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0089166a: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 0089166d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089166f: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00891672: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 00891675: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891677: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0089167a: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0089167d: fmul dword ptr [ecx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x34u));
    /* 00891680: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00891683: fmul dword ptr [ecx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x24u));
    /* 00891686: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891688: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0089168b: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 0089168e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891690: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00891693: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 00891696: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891698: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 0089169b: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0089169e: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 008916a1: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008916a4: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 008916a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916a9: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 008916ac: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 008916af: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916b1: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 008916b4: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 008916b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916b9: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 008916bc: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 008916bf: fmul dword ptr [ecx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3cu));
    /* 008916c2: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 008916c5: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 008916c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916ca: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 008916cd: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 008916d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916d2: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008916d5: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008916d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916da: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 008916dd: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 008916e0: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 008916e3: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 008916e6: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008916e8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916ea: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 008916ed: fmul dword ptr [edx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x34u));
    /* 008916f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916f2: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 008916f5: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 008916f8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008916fa: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 008916fd: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00891700: fmul dword ptr [ecx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x34u));
    /* 00891703: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00891706: fmul dword ptr [ecx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x24u));
    /* 00891709: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089170b: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0089170e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00891710: fmul dword ptr [edx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x34u));
    /* 00891713: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891715: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00891718: fmul dword ptr [edx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x30u));
    /* 0089171b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089171d: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 00891720: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00891723: fmul dword ptr [edx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x34u));
    /* 00891726: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00891729: fmul dword ptr [edx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x30u));
    /* 0089172c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089172e: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00891731: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 00891734: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891736: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00891739: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 0089173c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089173e: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00891741: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00891744: fmul dword ptr [ecx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3cu));
    /* 00891747: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0089174a: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0089174d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089174f: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00891752: fmul dword ptr [edx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x34u));
    /* 00891755: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891757: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 0089175a: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 0089175d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089175f: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00891762: je 0x89176d */ if (fZ) goto L_0089176d;
L_00891764:; BB(0x00891764);
    /* 00891764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00891765: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00891767: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00891768: mov edi, eax */ r_edi = r_eax;
    /* 0089176a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089176c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089176d:; BB(0x0089176d);
    /* 0089176d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089176e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089176f: ret 0xc */ FN_RET(0x0089153c); r_esp += 16; return;
}

void f_00891772(void) /* sub_891772 */
{
    FN_ENTER(0x00891772);
    /* 00891772: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891774: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891779u); f_0089f633();
    /* 00891779: jmp dword ptr [0xa3401c] */ { u32 t = R32((u32)(0xa3401cu)); jmp_ind(t); return; }
}

void f_0089177f(void) /* sub_89177F */
{
    FN_ENTER(0x0089177f);
    /* 0089177f: jmp dword ptr [0xa3401c] */ { u32 t = R32((u32)(0xa3401cu)); jmp_ind(t); return; }
}

void f_00891785(void) /* sub_891785 */
{
    FN_ENTER(0x00891785);
    /* 00891785: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00891789: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0089178c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00891790: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00891792: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00891795: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00891798: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 0089179b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0089179e: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008917a1: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008917a4: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 008917a7: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 008917aa: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 008917ad: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 008917b0: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 008917b3: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 008917b6: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 008917b9: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 008917bc: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 008917bf: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 008917c2: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 008917c5: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 008917c8: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 008917cb: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 008917ce: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 008917d1: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 008917d4: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 008917d7: je 0x8917ef */ if (fZ) goto L_008917ef;
L_008917d9:; BB(0x008917d9);
    /* 008917d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008917db: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 008917dd: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 008917e0: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008917e3: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 008917e6: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 008917e9: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 008917ec: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
L_008917ef:; BB(0x008917ef);
    /* 008917ef: ret 8 */ FN_RET(0x00891785); r_esp += 12; return;
}

void f_008917f2(void)
{
    FN_ENTER(0x008917f2);
    /* 008917f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008917f4: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8917f9u); f_0089f633();
    /* 008917f9: jmp dword ptr [0xa33f98] */ { u32 t = R32((u32)(0xa33f98u)); jmp_ind(t); return; }
}

void f_008917ff(void) /* sub_8917FF */
{
    FN_ENTER(0x008917ff);
    /* 008917ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891800: mov ebp, esp */ r_ebp = r_esp;
    /* 00891802: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00891805: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891808: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0089180b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089180d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00891810: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00891811: je 0x891819 */ if (fZ) goto L_00891819;
L_00891813:; BB(0x00891813);
    /* 00891813: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00891815: mov esi, eax */ r_esi = r_eax;
    /* 00891817: jne 0x89181c */ if (!fZ) goto L_0089181c;
L_00891819:; BB(0x00891819);
    /* 00891819: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
L_0089181c:; BB(0x0089181c);
    /* 0089181c: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0089181f: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 00891822: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00891824: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00891826: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891828: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0089182b: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 0089182e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891830: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00891833: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00891836: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891838: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0089183a: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0089183d: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0089183f: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00891842: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 00891845: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891847: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0089184a: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 0089184d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089184f: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00891852: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 00891855: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891857: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0089185a: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 0089185d: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 00891860: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00891863: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 00891866: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891868: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0089186b: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 0089186e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891870: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00891873: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00891875: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891877: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 0089187a: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 0089187d: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 00891880: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00891883: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 00891886: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891888: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0089188a: fmul dword ptr [edx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x30u));
    /* 0089188d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089188f: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00891892: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 00891895: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891897: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 0089189a: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0089189d: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008918a0: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008918a3: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008918a5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918a7: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 008918aa: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008918ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918af: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008918b2: fmul dword ptr [ecx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x14u));
    /* 008918b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918b7: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 008918ba: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 008918bd: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 008918c0: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 008918c3: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 008918c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918c8: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 008918cb: fmul dword ptr [ecx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x14u));
    /* 008918ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918d0: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 008918d3: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008918d6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918d8: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 008918db: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 008918de: fmul dword ptr [ecx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x14u));
    /* 008918e1: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 008918e4: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 008918e7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918e9: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 008918ec: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 008918ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918f1: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008918f4: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008918f7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008918f9: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 008918fc: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 008918ff: fmul dword ptr [ecx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x14u));
    /* 00891902: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 00891905: fmul dword ptr [edx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x3cu));
    /* 00891908: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089190a: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0089190d: fmul dword ptr [edx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x38u));
    /* 00891910: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891912: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00891915: fmul dword ptr [edx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x30u));
    /* 00891918: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089191a: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0089191d: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00891920: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00891923: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00891926: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00891928: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089192a: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0089192d: fmul dword ptr [ecx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x18u));
    /* 00891930: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891932: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00891935: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00891938: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089193a: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0089193d: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00891940: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 00891943: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00891946: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 00891949: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089194b: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0089194e: fmul dword ptr [ecx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x18u));
    /* 00891951: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891953: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00891956: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00891959: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089195b: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 0089195e: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00891961: fmul dword ptr [ecx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x18u));
    /* 00891964: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00891967: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 0089196a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089196c: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0089196f: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 00891972: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891974: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00891977: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 0089197a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089197c: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0089197f: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 00891982: fmul dword ptr [ecx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x18u));
    /* 00891985: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00891988: fmul dword ptr [edx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x3cu));
    /* 0089198b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089198d: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00891990: fmul dword ptr [edx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x38u));
    /* 00891993: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891995: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00891998: fmul dword ptr [edx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x30u));
    /* 0089199b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089199d: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 008919a0: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 008919a3: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008919a6: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 008919a9: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008919ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919ad: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008919b0: fmul dword ptr [ecx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x1cu));
    /* 008919b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919b5: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 008919b8: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008919bb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919bd: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 008919c0: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 008919c3: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 008919c6: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 008919c9: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 008919cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919ce: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 008919d1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008919d3: fmul dword ptr [ecx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x1cu));
    /* 008919d6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919d8: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 008919db: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008919de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919e0: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 008919e3: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 008919e6: fmul dword ptr [ecx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x1cu));
    /* 008919e9: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 008919ec: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 008919ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919f1: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 008919f4: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 008919f7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008919f9: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008919fc: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008919ff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891a01: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00891a04: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 00891a07: fmul dword ptr [ecx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x1cu));
    /* 00891a0a: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00891a0d: fmul dword ptr [edx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x3cu));
    /* 00891a10: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891a12: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 00891a15: fmul dword ptr [edx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x38u));
    /* 00891a18: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891a1a: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00891a1d: fmul dword ptr [edx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x30u));
    /* 00891a20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891a22: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00891a25: je 0x891a30 */ if (fZ) goto L_00891a30;
L_00891a27:; BB(0x00891a27);
    /* 00891a27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00891a28: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00891a2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00891a2b: mov edi, eax */ r_edi = r_eax;
    /* 00891a2d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00891a2f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00891a30:; BB(0x00891a30);
    /* 00891a30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00891a31: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00891a32: ret 0xc */ FN_RET(0x008917ff); r_esp += 16; return;
}

void f_00891a35(void) /* sub_891A35 */
{
    FN_ENTER(0x00891a35);
    /* 00891a35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891a37: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891a3cu); f_0089f633();
    /* 00891a3c: jmp dword ptr [0xa33fd0] */ { u32 t = R32((u32)(0xa33fd0u)); jmp_ind(t); return; }
}

void f_00891a42(void) /* sub_891A42 */
{
    FN_ENTER(0x00891a42);
    /* 00891a42: jmp dword ptr [0xa33fd0] */ { u32 t = R32((u32)(0xa33fd0u)); jmp_ind(t); return; }
}

void f_00891a48(void) /* sub_891A48 */
{
    FN_ENTER(0x00891a48);
    /* 00891a48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891a49: mov ebp, esp */ r_ebp = r_esp;
    /* 00891a4b: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00891a4e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00891a51: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00891a54: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00891a56: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00891a59: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00891a5c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00891a5f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00891a62: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00891a65: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00891a68: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891a6a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00891a6d: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00891a70: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00891a73: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891a75: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00891a78: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00891a7b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00891a7e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891a80: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00891a83: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00891a86: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00891a89: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00891a8c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00891a8f: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00891a92: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00891a95: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891a97: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00891a9a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891a9c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891a9e: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00891aa1: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00891aa4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891aa6: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00891aa9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891aab: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891aad: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00891ab0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891ab2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891ab4: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00891ab7: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00891aba: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00891abd: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00891ac0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891ac2: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00891ac5: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00891ac8: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00891acb: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00891ace: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00891ad1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891ad3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00891ad6: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00891ad9: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00891adc: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00891adf: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00891ae2: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891ae5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891ae7: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00891aea: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00891aed: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00891af0: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00891af3: fst dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 00891af6: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 00891af9: fst dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0));
    /* 00891afc: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00891aff: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00891b02: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 00891b05: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 00891b08: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00891b0a: fmul dword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00891b0d: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00891b0f: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00891b12: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b14: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891b16: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00891b19: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891b1b: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00891b1e: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891b20: fmul dword ptr [ebp - 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd4u));
    /* 00891b23: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891b26: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00891b29: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b2b: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00891b2d: fmul dword ptr [ebp - 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffccu));
    /* 00891b30: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b32: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00891b35: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00891b37: fmul dword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd0u));
    /* 00891b3a: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891b3c: fmul dword ptr [ebp - 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd4u));
    /* 00891b3f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b41: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891b44: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00891b47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891b49: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 00891b4c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891b4e: fmul dword ptr [ebp - 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffccu));
    /* 00891b51: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891b54: fmul dword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00891b57: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b59: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00891b5b: fmul dword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd0u));
    /* 00891b5e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b60: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00891b63: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891b66: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00891b68: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00891b6b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891b6d: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b6f: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00891b72: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00891b74: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b76: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00891b79: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00891b7c: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00891b7e: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00891b81: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00891b83: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b85: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00891b88: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891b8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891b8d: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00891b90: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00891b93: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891b95: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891b98: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891b9b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891b9d: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00891ba0: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00891ba2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891ba4: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00891ba7: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00891baa: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00891bac: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00891baf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891bb1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891bb3: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00891bb6: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891bb9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891bbb: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00891bbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891bc0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891bc2: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891bc4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891bc6: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891bc8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00891bca: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891bcc: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00891bcf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891bd1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891bd3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891bd5: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891bd8: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00891bdb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891bdd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891bdf: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00891be2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891be4: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891be7: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891bea: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891bec: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891bee: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00891bf0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891bf2: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00891bf5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00891bf7: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891bfa: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00891bfd: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00891c00: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00891c03: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00891c06: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00891c09: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00891c0c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00891c0f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c11: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00891c14: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00891c17: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891c1a: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891c1d: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00891c20: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c22: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00891c25: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891c28: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891c2b: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891c2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00891c31: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00891c34: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00891c37: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c39: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00891c3c: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00891c3f: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 00891c42: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891c45: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00891c48: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891c4a: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00891c4d: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891c50: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c52: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00891c54: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00891c56: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c58: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00891c5b: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891c5d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891c5f: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00891c61: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00891c63: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c65: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00891c68: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891c6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891c6d: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00891c70: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00891c72: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891c75: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891c78: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891c7b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c7d: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891c7f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00891c81: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c83: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00891c86: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891c88: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891c8a: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00891c8c: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891c8f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891c91: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00891c93: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00891c96: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891c98: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00891c9b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891c9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891c9f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891ca1: fmul dword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00891ca4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891ca7: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00891caa: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891cac: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00891caf: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00891cb2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891cb4: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00891cb7: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891cb9: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00891cbc: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00891cbf: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00891cc2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891cc4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00891cc6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00891cc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00891ccb: fmul dword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00891cce: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891cd0: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00891cd3: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00891cd6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891cd8: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00891cda: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00891cdd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891cdf: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891ce2: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00891ce5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891ce7: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00891cea: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891cec: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00891cef: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00891cf1: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00891cf4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891cf6: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00891cf8: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00891cfb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891cfd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00891d00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891d02: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891d04: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891d06: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891d08: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891d0b: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00891d0e: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00891d11: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00891d14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891d16: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00891d19: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00891d1c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891d1e: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00891d21: fmul dword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00891d24: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891d26: je 0x891d2a */ if (fZ) goto L_00891d2a;
L_00891d28:; BB(0x00891d28);
    /* 00891d28: fst dword ptr [eax] */ W_F32((u32)(r_eax), ST(0));
L_00891d2a:; BB(0x00891d2a);
    /* 00891d2a: fld1  */ FPUSH(1.0);
    /* 00891d2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00891d2d: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00891d2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00891d30: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00891d33: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891d35: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891d38: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00891d3b: call 0x8cb083 */ r_esp -= 4; W32(r_esp, 0x891d40u); f_008cb083();
    /* 00891d40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00891d42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00891d43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00891d44: je 0x891dd1 */ if (fZ) goto L_00891dd1;
L_00891d4a:; BB(0x00891d4a);
    /* 00891d4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891d4d: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891d50: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00891d53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d55: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891d57: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00891d5a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d5c: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00891d5f: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00891d62: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d64: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00891d67: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 00891d6a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d6c: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00891d6f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00891d72: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d74: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00891d77: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00891d7a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d7c: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00891d7f: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00891d82: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d84: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00891d87: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00891d8a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d8c: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00891d8f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00891d92: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d94: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00891d97: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 00891d9a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891d9c: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00891d9f: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00891da2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891da4: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00891da7: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00891daa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891dac: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00891daf: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 00891db2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891db4: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00891db7: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00891dba: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891dbc: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00891dbf: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00891dc2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891dc4: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00891dc7: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00891dca: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00891dcc: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00891dcf: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00891dd1:; BB(0x00891dd1);
    /* 00891dd1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00891dd2: ret 0xc */ FN_RET(0x00891a48); r_esp += 16; return;
}

void f_00891dd5(void) /* sub_891DD5 */
{
    FN_ENTER(0x00891dd5);
    /* 00891dd5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891dd7: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891ddcu); f_0089f633();
    /* 00891ddc: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00891de0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00891de3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00891de7: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00891deb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00891def: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00891df3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00891df6: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891dfa: call dword ptr [0xa3400c] */ { u32 t = R32((u32)(0xa3400cu)); r_esp -= 4; W32(r_esp, 0x891e00u); call_ind(t); }
    /* 00891e00: ret 0x10 */ FN_RET(0x00891dd5); r_esp += 20; return;
}

void f_00891e03(void) /* sub_891E03 */
{
    FN_ENTER(0x00891e03);
    /* 00891e03: jmp dword ptr [0xa3400c] */ { u32 t = R32((u32)(0xa3400cu)); jmp_ind(t); return; }
}

void f_00891e09(void) /* sub_891E09 */
{
    FN_ENTER(0x00891e09);
    /* 00891e09: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00891e0d: fldz  */ FPUSH(0.0);
    /* 00891e0f: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00891e12: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00891e16: fldz  */ FPUSH(0.0);
    /* 00891e18: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00891e1a: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00891e1d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00891e21: fldz  */ FPUSH(0.0);
    /* 00891e23: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00891e26: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00891e2a: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00891e2d: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 00891e30: fldz  */ FPUSH(0.0);
    /* 00891e32: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00891e35: fldz  */ FPUSH(0.0);
    /* 00891e37: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00891e3a: fldz  */ FPUSH(0.0);
    /* 00891e3c: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00891e3f: fldz  */ FPUSH(0.0);
    /* 00891e41: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00891e44: fldz  */ FPUSH(0.0);
    /* 00891e46: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00891e49: fldz  */ FPUSH(0.0);
    /* 00891e4b: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00891e4e: fldz  */ FPUSH(0.0);
    /* 00891e50: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00891e53: fldz  */ FPUSH(0.0);
    /* 00891e55: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00891e58: fldz  */ FPUSH(0.0);
    /* 00891e5a: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00891e5d: fld1  */ FPUSH(1.0);
    /* 00891e5f: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00891e62: ret 0x10 */ FN_RET(0x00891e09); r_esp += 20; return;
}

void f_00891e65(void) /* sub_891E65 */
{
    FN_ENTER(0x00891e65);
    /* 00891e65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891e67: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891e6cu); f_0089f633();
    /* 00891e6c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00891e70: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00891e73: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00891e77: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00891e7b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00891e7f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00891e83: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00891e86: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891e8a: call dword ptr [0xa33ff0] */ { u32 t = R32((u32)(0xa33ff0u)); r_esp -= 4; W32(r_esp, 0x891e90u); call_ind(t); }
    /* 00891e90: ret 0x10 */ FN_RET(0x00891e65); r_esp += 20; return;
}

void f_00891e93(void) /* sub_891E93 */
{
    FN_ENTER(0x00891e93);
    /* 00891e93: jmp dword ptr [0xa33ff0] */ { u32 t = R32((u32)(0xa33ff0u)); jmp_ind(t); return; }
}

void f_00891e99(void) /* sub_891E99 */
{
    FN_ENTER(0x00891e99);
    /* 00891e99: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00891e9d: fldz  */ FPUSH(0.0);
    /* 00891e9f: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00891ea2: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00891ea6: fldz  */ FPUSH(0.0);
    /* 00891ea8: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00891eab: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00891eae: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00891eb2: fldz  */ FPUSH(0.0);
    /* 00891eb4: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 00891eb7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00891ebb: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00891ebe: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00891ec1: fldz  */ FPUSH(0.0);
    /* 00891ec3: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00891ec6: fldz  */ FPUSH(0.0);
    /* 00891ec8: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00891ecb: fldz  */ FPUSH(0.0);
    /* 00891ecd: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00891ed0: fldz  */ FPUSH(0.0);
    /* 00891ed2: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00891ed5: fldz  */ FPUSH(0.0);
    /* 00891ed7: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00891eda: fldz  */ FPUSH(0.0);
    /* 00891edc: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00891edf: fld1  */ FPUSH(1.0);
    /* 00891ee1: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00891ee4: fld1  */ FPUSH(1.0);
    /* 00891ee6: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00891ee9: fld1  */ FPUSH(1.0);
    /* 00891eeb: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00891eee: fld1  */ FPUSH(1.0);
    /* 00891ef0: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891ef2: ret 0x10 */ FN_RET(0x00891e99); r_esp += 20; return;
}

void f_00891ef5(void) /* sub_891EF5 */
{
    FN_ENTER(0x00891ef5);
    /* 00891ef5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891ef7: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891efcu); f_0089f633();
    /* 00891efc: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00891f00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00891f01: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00891f04: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891f08: call dword ptr [0xa34000] */ { u32 t = R32((u32)(0xa34000u)); r_esp -= 4; W32(r_esp, 0x891f0eu); call_ind(t); }
    /* 00891f0e: ret 8 */ FN_RET(0x00891ef5); r_esp += 12; return;
}

void f_00891f11(void) /* sub_891F11 */
{
    FN_ENTER(0x00891f11);
    /* 00891f11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891f12: mov ebp, esp */ r_ebp = r_esp;
    /* 00891f14: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00891f17: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00891f1a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00891f1d: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00891f20: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00891f23: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00891f26: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00891f29: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00891f2c: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00891f2e: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00891f30: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891f32: fld1  */ FPUSH(1.0);
    /* 00891f34: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891f37: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891f39: fldz  */ FPUSH(0.0);
    /* 00891f3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00891f3e: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00891f41: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00891f44: fldz  */ FPUSH(0.0);
    /* 00891f46: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00891f49: fldz  */ FPUSH(0.0);
    /* 00891f4b: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00891f4e: fldz  */ FPUSH(0.0);
    /* 00891f50: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00891f53: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891f56: fst dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0));
    /* 00891f59: fldz  */ FPUSH(0.0);
    /* 00891f5b: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00891f5e: fldz  */ FPUSH(0.0);
    /* 00891f60: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00891f63: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00891f66: fchs  */ ST(0) = -ST(0);
    /* 00891f68: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00891f6b: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00891f6e: fldz  */ FPUSH(0.0);
    /* 00891f70: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00891f73: fldz  */ FPUSH(0.0);
    /* 00891f75: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00891f78: fldz  */ FPUSH(0.0);
    /* 00891f7a: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00891f7d: fldz  */ FPUSH(0.0);
    /* 00891f7f: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00891f82: fld1  */ FPUSH(1.0);
    /* 00891f84: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00891f87: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00891f88: ret 8 */ FN_RET(0x00891f11); r_esp += 12; return;
}

void f_00891f8b(void) /* sub_891F8B */
{
    FN_ENTER(0x00891f8b);
    /* 00891f8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00891f8d: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x891f92u); f_0089f633();
    /* 00891f92: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00891f96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00891f97: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00891f9a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00891f9e: call dword ptr [0xa34004] */ { u32 t = R32((u32)(0xa34004u)); r_esp -= 4; W32(r_esp, 0x891fa4u); call_ind(t); }
    /* 00891fa4: ret 8 */ FN_RET(0x00891f8b); r_esp += 12; return;
}

void f_00891fa7(void) /* sub_891FA7 */
{
    FN_ENTER(0x00891fa7);
    /* 00891fa7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00891fa8: mov ebp, esp */ r_ebp = r_esp;
    /* 00891faa: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00891fad: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00891fb0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00891fb3: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00891fb6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00891fb9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00891fbc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00891fbf: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00891fc2: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00891fc4: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00891fc6: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891fc8: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00891fcb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00891fce: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00891fd0: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00891fd2: fldz  */ FPUSH(0.0);
    /* 00891fd4: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00891fd7: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00891fda: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00891fdc: fchs  */ ST(0) = -ST(0);
    /* 00891fde: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00891fe1: fldz  */ FPUSH(0.0);
    /* 00891fe3: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00891fe6: fldz  */ FPUSH(0.0);
    /* 00891fe8: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00891feb: fld1  */ FPUSH(1.0);
    /* 00891fed: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00891ff0: fldz  */ FPUSH(0.0);
    /* 00891ff2: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00891ff5: fldz  */ FPUSH(0.0);
    /* 00891ff7: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00891ffa: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00891ffd: fldz  */ FPUSH(0.0);
    /* 00891fff: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00892002: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00892005: fldz  */ FPUSH(0.0);
    /* 00892007: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 0089200a: fldz  */ FPUSH(0.0);
    /* 0089200c: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 0089200f: fldz  */ FPUSH(0.0);
    /* 00892011: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00892014: fldz  */ FPUSH(0.0);
    /* 00892016: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00892019: fld1  */ FPUSH(1.0);
    /* 0089201b: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 0089201e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089201f: ret 8 */ FN_RET(0x00891fa7); r_esp += 12; return;
}

