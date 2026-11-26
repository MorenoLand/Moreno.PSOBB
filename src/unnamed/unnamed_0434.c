#include "protos.h"

void f_00434018(void) /* sub_434018 */
{
    FN_ENTER(0x00434018);
    /* 00434018: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0043401e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00434021: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00434024: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00434027: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0043402d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00434030: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00434033: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 00434036: ret  */ FN_RET(0x00434018); r_esp += 4; return;
}

void f_00434038(void) /* sub_434038 */
{
    FN_ENTER(0x00434038);
    /* 00434038: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00434039: mov esi, ecx */ r_esi = r_ecx;
    /* 0043403b: mov ecx, esi */ r_ecx = r_esi;
    /* 0043403d: call 0x52045c */ r_esp -= 4; W32(r_esp, 0x434042u); f_0052045c();
    /* 00434042: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00434048: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043404a: jne 0x434055 */ if (!fZ) goto L_00434055;
L_0043404c:; BB(0x0043404c);
    /* 0043404c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x434051u); f_00520e6c();
    /* 00434051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00434053: je 0x43405c */ if (fZ) goto L_0043405c;
L_00434055:; BB(0x00434055);
    /* 00434055: mov ecx, esi */ r_ecx = r_esi;
    /* 00434057: call 0x434018 */ r_esp -= 4; W32(r_esp, 0x43405cu); f_00434018();
L_0043405c:; BB(0x0043405c);
    /* 0043405c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043405d: ret  */ FN_RET(0x00434038); r_esp += 4; return;
}

void f_00434060(void) /* sub_434060 */
{
    FN_ENTER(0x00434060);
    /* 00434060: mov ecx, dword ptr [0xa43ce0] */ r_ecx = R32((u32)(0xa43ce0u));
    /* 00434066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00434068: je 0x434073 */ if (fZ) goto L_00434073;
L_0043406a:; BB(0x0043406a);
    /* 0043406a: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043406e: call 0x434074 */ r_esp -= 4; W32(r_esp, 0x434073u); f_00434074();
L_00434073:; BB(0x00434073);
    /* 00434073: ret  */ FN_RET(0x00434060); r_esp += 4; return;
}

void f_00434074(void) /* sub_434074 */
{
    FN_ENTER(0x00434074);
    /* 00434074: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434075: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00434076: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00434078: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0043407c: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00434082: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00434084: je 0x4340c6 */ if (fZ) goto L_004340c6;
L_00434086:; BB(0x00434086);
    /* 00434086: push dword ptr [0xa43ccc] */ { u32 v = R32((u32)(0xa43cccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043408c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043408e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00434091: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00434096: push dword ptr [0xa43cd4] */ { u32 v = R32((u32)(0xa43cd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043409c: push dword ptr [0xa43cdc] */ { u32 v = R32((u32)(0xa43cdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004340a2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004340a5: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4340aau); f_00520c98();
    /* 004340aa: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004340af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004340b0: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004340b2: mov ecx, edi */ r_ecx = r_edi;
    /* 004340b4: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4340b7u); call_ind(t); }
    /* 004340b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004340b9: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 004340bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004340c1: call 0x4340cc */ r_esp -= 4; W32(r_esp, 0x4340c6u); f_004340cc();
L_004340c6:; BB(0x004340c6);
    /* 004340c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004340c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004340c8: ret 4 */ FN_RET(0x00434074); r_esp += 8; return;
}

void f_004340cc(void) /* sub_4340CC */
{
    FN_ENTER(0x004340cc);
    /* 004340cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004340d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004340d3: jne 0x4340dc */ if (!fZ) goto L_004340dc;
L_004340d5:; BB(0x004340d5);
    /* 004340d5: mov eax, 1 */ r_eax = 0x1u;
    /* 004340da: jmp 0x4340ea */ goto L_004340ea;
L_004340dc:; BB(0x004340dc);
    /* 004340dc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004340df: jne 0x4340e8 */ if (!fZ) goto L_004340e8;
L_004340e1:; BB(0x004340e1);
    /* 004340e1: mov eax, 2 */ r_eax = 0x2u;
    /* 004340e6: jmp 0x4340ea */ goto L_004340ea;
L_004340e8:; BB(0x004340e8);
    /* 004340e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004340ea:; BB(0x004340ea);
    /* 004340ea: push dword ptr [0xa43ccc] */ { u32 v = R32((u32)(0xa43cccu)); r_esp -= 4; W32(r_esp, v); }
    /* 004340f0: push dword ptr [eax*4 + 0xa43cd0] */ { u32 v = R32((u32)(r_eax*4+0xa43cd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004340f7: push dword ptr [0xa43cdc] */ { u32 v = R32((u32)(0xa43cdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004340fd: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x434102u); f_00520c98();
    /* 00434102: ret 4 */ FN_RET(0x004340cc); r_esp += 8; return;
}

void f_00434108(void) /* sub_434108 */
{
    FN_ENTER(0x00434108);
    /* 00434108: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434109: mov edi, ecx */ r_edi = r_ecx;
    /* 0043410b: push dword ptr [0xa43ccc] */ { u32 v = R32((u32)(0xa43cccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00434111: push dword ptr [0xa43cd8] */ { u32 v = R32((u32)(0xa43cd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00434117: push dword ptr [0xa43cdc] */ { u32 v = R32((u32)(0xa43cdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043411d: mov ecx, edi */ r_ecx = r_edi;
    /* 0043411f: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x434124u); f_00520c98();
    /* 00434124: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00434126: push 0x9a4738 */ { u32 v = 0x9a4738u; r_esp -= 4; W32(r_esp, v); }
    /* 0043412b: mov ecx, edi */ r_ecx = r_edi;
    /* 0043412d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00434131: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x434136u); f_0051fdf8();
    /* 00434136: push dword ptr [edi + 0x3cc] */ { u32 v = R32((u32)(r_edi+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043413c: mov ecx, edi */ r_ecx = r_edi;
    /* 0043413e: call 0x4340cc */ r_esp -= 4; W32(r_esp, 0x434143u); f_004340cc();
    /* 00434143: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00434144: ret 4 */ FN_RET(0x00434108); r_esp += 8; return;
}

void f_00434148(void) /* sub_434148 */
{
    FN_ENTER(0x00434148);
    /* 00434148: mov edx, dword ptr [0xa43cc8] */ r_edx = R32((u32)(0xa43cc8u));
    /* 0043414e: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00434151: ret  */ FN_RET(0x00434148); r_esp += 4; return;
}

void f_00434154(void) /* sub_434154 */
{
    FN_ENTER(0x00434154);
    /* 00434154: mov edx, dword ptr [0xa43cc8] */ r_edx = R32((u32)(0xa43cc8u));
    /* 0043415a: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0043415d: ret  */ FN_RET(0x00434154); r_esp += 4; return;
}

void f_00434160(void) /* sub_434160 */
{
    FN_ENTER(0x00434160);
    /* 00434160: mov edx, dword ptr [0xa43cc8] */ r_edx = R32((u32)(0xa43cc8u));
    /* 00434166: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00434169: ret  */ FN_RET(0x00434160); r_esp += 4; return;
}

void f_0043416c(void) /* sub_43416C */
{
    FN_ENTER(0x0043416c);
    /* 0043416c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043416f: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 00434173: fmul dword ptr [0x8fcd40] */ ST(0) = ST(0) * R_F32((u32)(0x8fcd40u));
    /* 00434179: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0043417c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00434180: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00434185: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00434189: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043418d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00434191: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00434194: mov eax, dword ptr [ecx + 0x6b4] */ r_eax = R32((u32)(r_ecx+0x6b4u));
    /* 0043419a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043419c: sub eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004341a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004341a1: mov dword ptr [ecx + 0x6b4], eax */ W32((u32)(r_ecx+0x6b4u), r_eax);
    /* 004341a7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004341aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004341ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004341ac: push 0x336 */ { u32 v = 0x336u; r_esp -= 4; W32(r_esp, v); }
    /* 004341b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4341b6u); f_00814298();
    /* 004341b6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004341b9: ret 8 */ FN_RET(0x0043416c); r_esp += 12; return;
}

void f_004341bc(void)
{
    FN_ENTER(0x004341bc);
    /* 004341bc: fld dword ptr [0x8fcd24] */ FPUSH(R_F32((u32)(0x8fcd24u)));
    /* 004341c2: fld dword ptr [0x8fcd10] */ FPUSH(R_F32((u32)(0x8fcd10u)));
    /* 004341c8: mov dword ptr [0xa43cb4], 0x3f800000 */ W32((u32)(0xa43cb4u), 0x3f800000u);
    /* 004341d2: mov dword ptr [0xa43cb8], 0x41000000 */ W32((u32)(0xa43cb8u), 0x41000000u);
    /* 004341dc: mov dword ptr [0xa43cbc], 0x3fc00000 */ W32((u32)(0xa43cbcu), 0x3fc00000u);
    /* 004341e6: mov dword ptr [0xa43d24], 0x3f000000 */ W32((u32)(0xa43d24u), 0x3f000000u);
    /* 004341f0: mov dword ptr [0xa43cc0], 0x40e00000 */ W32((u32)(0xa43cc0u), 0x40e00000u);
    /* 004341fa: mov dword ptr [0xa43ba8], 0xc32f0000 */ W32((u32)(0xa43ba8u), 0xc32f0000u);
    /* 00434204: mov dword ptr [0xa43bac], 0x40e00000 */ W32((u32)(0xa43bacu), 0x40e00000u);
    /* 0043420e: mov dword ptr [0xa43bb0], 0x41c80000 */ W32((u32)(0xa43bb0u), 0x41c80000u);
    /* 00434218: mov dword ptr [0xa43bb4], 0 */ W32((u32)(0xa43bb4u), 0x0u);
    /* 00434222: mov dword ptr [0xa43bb8], 0x40e00000 */ W32((u32)(0xa43bb8u), 0x40e00000u);
    /* 0043422c: mov dword ptr [0xa43bbc], 0x43fa0000 */ W32((u32)(0xa43bbcu), 0x43fa0000u);
    /* 00434236: mov dword ptr [0xa43bc0], 0x432f0000 */ W32((u32)(0xa43bc0u), 0x432f0000u);
    /* 00434240: mov dword ptr [0xa43bc4], 0x40e00000 */ W32((u32)(0xa43bc4u), 0x40e00000u);
    /* 0043424a: mov dword ptr [0xa43bc8], 0x41c80000 */ W32((u32)(0xa43bc8u), 0x41c80000u);
    /* 00434254: mov dword ptr [0xa43bcc], 0 */ W32((u32)(0xa43bccu), 0x0u);
    /* 0043425e: mov dword ptr [0xa43bd0], 0x40e00000 */ W32((u32)(0xa43bd0u), 0x40e00000u);
    /* 00434268: mov dword ptr [0xa43bd4], 0xc37a0000 */ W32((u32)(0xa43bd4u), 0xc37a0000u);
    /* 00434272: mov dword ptr [0xa43c48], 0x3e99999a */ W32((u32)(0xa43c48u), 0x3e99999au);
    /* 0043427c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043427e: fdiv dword ptr [0xa43c48] */ ST(0) = ST(0) / R_F32((u32)(0xa43c48u));
    /* 00434284: fstp dword ptr [0xa43c3c] */ W_F32((u32)(0xa43c3cu), ST(0)); FPOP();
    /* 0043428a: mov dword ptr [0xa43c44], 0x41a00000 */ W32((u32)(0xa43c44u), 0x41a00000u);
    /* 00434294: mov dword ptr [0xa43c40], 0x41800000 */ W32((u32)(0xa43c40u), 0x41800000u);
    /* 0043429e: mov dword ptr [0xa43c38], 0x40000000 */ W32((u32)(0xa43c38u), 0x40000000u);
    /* 004342a8: mov dword ptr [0xa43c34], 0x42100000 */ W32((u32)(0xa43c34u), 0x42100000u);
    /* 004342b2: mov dword ptr [0xa43cb0], 0x3e47ae15 */ W32((u32)(0xa43cb0u), 0x3e47ae15u);
    /* 004342bc: fdiv dword ptr [0xa43cb0] */ ST(0) = ST(0) / R_F32((u32)(0xa43cb0u));
    /* 004342c2: fstp dword ptr [0xa43ca8] */ W_F32((u32)(0xa43ca8u), ST(0)); FPOP();
    /* 004342c8: mov dword ptr [0xa43cac], 0x4192aaaa */ W32((u32)(0xa43cacu), 0x4192aaaau);
    /* 004342d2: mov dword ptr [0xa43cc4], 0x41baaaaa */ W32((u32)(0xa43cc4u), 0x41baaaaau);
    /* 004342dc: mov dword ptr [0xa43c58], 0x40e00000 */ W32((u32)(0xa43c58u), 0x40e00000u);
    /* 004342e6: mov dword ptr [0xa43c54], 0x41400000 */ W32((u32)(0xa43c54u), 0x41400000u);
    /* 004342f0: mov dword ptr [0xa43c50], 0x40e00000 */ W32((u32)(0xa43c50u), 0x40e00000u);
    /* 004342fa: mov dword ptr [0xa43c4c], 0x40a00000 */ W32((u32)(0xa43c4cu), 0x40a00000u);
    /* 00434304: mov dword ptr [0xa43c5c], 0x40800000 */ W32((u32)(0xa43c5cu), 0x40800000u);
    /* 0043430e: mov dword ptr [0x9a4740], 0x41000000 */ W32((u32)(0x9a4740u), 0x41000000u);
    /* 00434318: mov dword ptr [0xa43c60], 0xc3090000 */ W32((u32)(0xa43c60u), 0xc3090000u);
    /* 00434322: mov dword ptr [0xa43ca0], 0xc3090000 */ W32((u32)(0xa43ca0u), 0xc3090000u);
    /* 0043432c: mov dword ptr [0xa43ca4], 0x42ba0000 */ W32((u32)(0xa43ca4u), 0x42ba0000u);
    /* 00434336: mov dword ptr [0x9a4754], 0x41800000 */ W32((u32)(0x9a4754u), 0x41800000u);
    /* 00434340: mov dword ptr [0x9a4708], 0 */ W32((u32)(0x9a4708u), 0x0u);
    /* 0043434a: mov dword ptr [0x9a452c], 0x41c80000 */ W32((u32)(0x9a452cu), 0x41c80000u);
    /* 00434354: mov dword ptr [0x9a4558], 0x41200000 */ W32((u32)(0x9a4558u), 0x41200000u);
    /* 0043435e: mov dword ptr [0x9a4584], 0x41200000 */ W32((u32)(0x9a4584u), 0x41200000u);
    /* 00434368: mov dword ptr [0x9a45c8], 0x3f4ccccd */ W32((u32)(0x9a45c8u), 0x3f4ccccdu);
    /* 00434372: mov dword ptr [0x9a45d8], 0x3f19999a */ W32((u32)(0x9a45d8u), 0x3f19999au);
    /* 0043437c: mov dword ptr [0x9a45f8], 0x3ecccccd */ W32((u32)(0x9a45f8u), 0x3ecccccdu);
    /* 00434386: mov dword ptr [0x9a4608], 0x3e99999a */ W32((u32)(0x9a4608u), 0x3e99999au);
    /* 00434390: mov dword ptr [0x9a4618], 0x3f000000 */ W32((u32)(0x9a4618u), 0x3f000000u);
    /* 0043439a: mov dword ptr [0x9a4628], 0x3f000000 */ W32((u32)(0x9a4628u), 0x3f000000u);
    /* 004343a4: mov dword ptr [0x9a4638], 0x3e8f5c29 */ W32((u32)(0x9a4638u), 0x3e8f5c29u);
    /* 004343ae: mov dword ptr [0x9a4648], 0x3e8f5c29 */ W32((u32)(0x9a4648u), 0x3e8f5c29u);
    /* 004343b8: mov dword ptr [0x9a46c8], 0x3f333333 */ W32((u32)(0x9a46c8u), 0x3f333333u);
    /* 004343c2: ret  */ FN_RET(0x004341bc); r_esp += 4; return;
}

void f_004343c4(void) /* sub_4343C4 */
{
    FN_ENTER(0x004343c4);
    /* 004343c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004343c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004343c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004343c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004343c8: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x4343cdu); f_00520e6c();
    /* 004343cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004343cf: je 0x4343ea */ if (fZ) goto L_004343ea;
L_004343d1:; BB(0x004343d1);
    /* 004343d1: push 0x8fd430 */ { u32 v = 0x8fd430u; r_esp -= 4; W32(r_esp, v); }
    /* 004343d6: push 0x9a46f0 */ { u32 v = 0x9a46f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004343db: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x4343e0u); f_0051f674();
    /* 004343e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004343e3: mov dword ptr [0xa43d28], eax */ W32((u32)(0xa43d28u), r_eax);
    /* 004343e8: jmp 0x4343fa */ goto L_004343fa;
L_004343ea:; BB(0x004343ea);
    /* 004343ea: push 0x9a46f0 */ { u32 v = 0x9a46f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004343ef: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x4343f4u); f_0051f6b0();
    /* 004343f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004343f5: mov dword ptr [0xa43d28], eax */ W32((u32)(0xa43d28u), r_eax);
L_004343fa:; BB(0x004343fa);
    /* 004343fa: push dword ptr [0x9a4734] */ { u32 v = R32((u32)(0x9a4734u)); r_esp -= 4; W32(r_esp, v); }
    /* 00434400: mov dword ptr [0xa43d08], 0 */ W32((u32)(0xa43d08u), 0x0u);
    /* 0043440a: mov dword ptr [0xa43d0c], 0 */ W32((u32)(0xa43d0cu), 0x0u);
    /* 00434414: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434416: mov dword ptr [0xa43d20], eax */ W32((u32)(0xa43d20u), r_eax);
    /* 0043441b: mov dword ptr [0xa43d10], 0 */ W32((u32)(0xa43d10u), 0x0u);
    /* 00434425: mov dword ptr [0xa43d1c], eax */ W32((u32)(0xa43d1cu), r_eax);
    /* 0043442a: mov dword ptr [0xa43d14], 0 */ W32((u32)(0xa43d14u), 0x0u);
    /* 00434434: mov dword ptr [0xa43d18], eax */ W32((u32)(0xa43d18u), r_eax);
    /* 00434439: mov dword ptr [0xa43cfc], 0 */ W32((u32)(0xa43cfcu), 0x0u);
    /* 00434443: mov dword ptr [0xa43cf8], eax */ W32((u32)(0xa43cf8u), r_eax);
    /* 00434448: mov dword ptr [0xa43d00], 0 */ W32((u32)(0xa43d00u), 0x0u);
    /* 00434452: mov dword ptr [0xa43cf4], eax */ W32((u32)(0xa43cf4u), r_eax);
    /* 00434457: mov dword ptr [0xa43d04], 0 */ W32((u32)(0xa43d04u), 0x0u);
    /* 00434461: mov dword ptr [0xa43cf0], eax */ W32((u32)(0xa43cf0u), r_eax);
    /* 00434466: mov dword ptr [0xa43cec], eax */ W32((u32)(0xa43cecu), r_eax);
    /* 0043446b: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x434470u); f_0077a684();
    /* 00434470: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00434471: mov dword ptr [0xa43cdc], eax */ W32((u32)(0xa43cdcu), r_eax);
    /* 00434476: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434478: mov ebx, eax */ r_ebx = r_eax;
L_0043447a:; BB(0x0043447a);
    /* 0043447a: push dword ptr [ebx + 0x9a4728] */ { u32 v = R32((u32)(r_ebx+0x9a4728u)); r_esp -= 4; W32(r_esp, v); }
    /* 00434480: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x434485u); f_0077a698();
    /* 00434485: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00434486: mov dword ptr [ebx + 0xa43cd0], eax */ W32((u32)(r_ebx+0xa43cd0u), r_eax);
    /* 0043448c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043448f: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434492: jl 0x43447a */ if ((fS!=fO)) goto L_0043447a;
L_00434494:; BB(0x00434494);
    /* 00434494: push dword ptr [0x9a4724] */ { u32 v = R32((u32)(0x9a4724u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043449a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x43449fu); f_0077a6b4();
    /* 0043449f: push dword ptr [0x9a4720] */ { u32 v = R32((u32)(0x9a4720u)); r_esp -= 4; W32(r_esp, v); }
    /* 004344a5: mov dword ptr [0xa43ccc], eax */ W32((u32)(0xa43cccu), r_eax);
    /* 004344aa: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4344afu); f_0077a6cc();
    /* 004344af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004344b2: mov dword ptr [0xa43ce0], 0 */ W32((u32)(0xa43ce0u), 0x0u);
    /* 004344bc: mov dword ptr [0xa43cc8], eax */ W32((u32)(0xa43cc8u), r_eax);
    /* 004344c1: call 0x439444 */ r_esp -= 4; W32(r_esp, 0x4344c6u); f_00439444();
    /* 004344c6: call 0x437318 */ r_esp -= 4; W32(r_esp, 0x4344cbu); f_00437318();
    /* 004344cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004344cd: mov ebx, eax */ r_ebx = r_eax;
L_004344cf:; BB(0x004344cf);
    /* 004344cf: lea ecx, [ebx + 0x8fcc88] */ r_ecx = (u32)(r_ebx+0x8fcc88u);
    /* 004344d5: lea edx, [ebx + 0xa43c64] */ r_edx = (u32)(r_ebx+0xa43c64u);
    /* 004344db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004344dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004344dd: call 0x782bb0 */ r_esp -= 4; W32(r_esp, 0x4344e2u); f_00782bb0();
    /* 004344e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004344e5: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004344e8: cmp ebx, 0x3c */ {  u32 a = r_ebx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004344eb: jl 0x4344cf */ if ((fS!=fO)) goto L_004344cf;
L_004344ed:; BB(0x004344ed);
    /* 004344ed: call 0x434f54 */ r_esp -= 4; W32(r_esp, 0x4344f2u); f_00434f54();
    /* 004344f2: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 004344f7: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 004344f9: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 004344ff: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00434502: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 00434505: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434508: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043450b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043450e: mov dword ptr [0xa43c0c], ecx */ W32((u32)(0xa43c0cu), r_ecx);
    /* 00434514: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434517: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043451a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043451d: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434520: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434523: mov dword ptr [0xa43be4], ecx */ W32((u32)(0xa43be4u), r_ecx);
    /* 00434529: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0043452c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043452f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434532: mov dword ptr [0xa43c10], ecx */ W32((u32)(0xa43c10u), r_ecx);
    /* 00434538: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0043453b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043453e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434541: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434544: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434547: mov dword ptr [0xa43be8], ecx */ W32((u32)(0xa43be8u), r_ecx);
    /* 0043454d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434550: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434553: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434556: mov dword ptr [0xa43c14], ecx */ W32((u32)(0xa43c14u), r_ecx);
    /* 0043455c: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0043455f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434562: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434565: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434568: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043456b: mov dword ptr [0xa43bec], ecx */ W32((u32)(0xa43becu), r_ecx);
    /* 00434571: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434574: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434577: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043457a: mov dword ptr [0xa43c18], ecx */ W32((u32)(0xa43c18u), r_ecx);
    /* 00434580: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434583: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434586: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434589: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0043458c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043458f: mov dword ptr [0xa43bf0], ecx */ W32((u32)(0xa43bf0u), r_ecx);
    /* 00434595: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434598: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043459b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043459e: mov dword ptr [0xa43c1c], ecx */ W32((u32)(0xa43c1cu), r_ecx);
    /* 004345a4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004345a7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345aa: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345ad: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004345b0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345b3: mov dword ptr [0xa43bf4], ecx */ W32((u32)(0xa43bf4u), r_ecx);
    /* 004345b9: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004345bc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345bf: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345c2: mov dword ptr [0xa43c20], ecx */ W32((u32)(0xa43c20u), r_ecx);
    /* 004345c8: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004345cb: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345ce: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345d1: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004345d4: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345d7: mov dword ptr [0xa43bf8], ecx */ W32((u32)(0xa43bf8u), r_ecx);
    /* 004345dd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004345e0: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345e3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345e6: mov dword ptr [0xa43c24], ecx */ W32((u32)(0xa43c24u), r_ecx);
    /* 004345ec: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004345ef: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345f2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345f5: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004345f8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345fb: mov dword ptr [0xa43bfc], ecx */ W32((u32)(0xa43bfcu), r_ecx);
    /* 00434601: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434604: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434607: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043460a: mov dword ptr [0xa43c28], ecx */ W32((u32)(0xa43c28u), r_ecx);
    /* 00434610: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434613: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434616: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434619: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0043461c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043461f: mov dword ptr [0xa43c00], ecx */ W32((u32)(0xa43c00u), r_ecx);
    /* 00434625: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434628: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043462b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043462e: mov dword ptr [0xa43c2c], ecx */ W32((u32)(0xa43c2cu), r_ecx);
    /* 00434634: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434637: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043463a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043463d: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434640: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434643: mov dword ptr [0xa43c04], ecx */ W32((u32)(0xa43c04u), r_ecx);
    /* 00434649: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0043464c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043464f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434652: mov dword ptr [0xa43c30], ecx */ W32((u32)(0xa43c30u), r_ecx);
    /* 00434658: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0043465b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043465e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434661: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434664: mov dword ptr [0xa43c08], ecx */ W32((u32)(0xa43c08u), r_ecx);
    /* 0043466a: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0043466d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00434670: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00434673: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00434676: mov dword ptr [0xa43bd8], edx */ W32((u32)(0xa43bd8u), r_edx);
    /* 0043467c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0043467f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434682: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434685: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434688: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043468b: mov dword ptr [0xa43bdc], ecx */ W32((u32)(0xa43bdcu), r_ecx);
    /* 00434691: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00434694: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00434697: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043469a: mov dword ptr [0xa43be0], edx */ W32((u32)(0xa43be0u), r_edx);
    /* 004346a0: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004346a3: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4346a8u); f_0078e934();
    /* 004346a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004346ab: mov dword ptr [0xa43ce8], eax */ W32((u32)(0xa43ce8u), r_eax);
    /* 004346b0: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 004346b3: mov dword ptr [0xa43ce4], eax */ W32((u32)(0xa43ce4u), r_eax);
    /* 004346b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004346ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004346bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004346be: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004346c0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004346c2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004346c4:; BB(0x004346c4);
    /* 004346c4: mov dword ptr [eax + 0xa43940], 0xf */ W32((u32)(r_eax+0xa43940u), 0xfu);
    /* 004346ce: mov dword ptr [eax + 0xa43950], edx */ W32((u32)(r_eax+0xa43950u), r_edx);
    /* 004346d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004346d6: mov dword ptr [eax + 0xa43944], ecx */ W32((u32)(r_eax+0xa43944u), r_ecx);
    /* 004346dc: mov dword ptr [eax + 0xa43954], ecx */ W32((u32)(r_eax+0xa43954u), r_ecx);
    /* 004346e2: mov dword ptr [eax + 0xa43958], ecx */ W32((u32)(r_eax+0xa43958u), r_ecx);
    /* 004346e8: mov dword ptr [eax + 0xa4395c], ecx */ W32((u32)(r_eax+0xa4395cu), r_ecx);
    /* 004346ee: mov dword ptr [eax + 0xa43960], ebx */ W32((u32)(r_eax+0xa43960u), r_ebx);
    /* 004346f4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004346f6: mov dword ptr [eax + 0xa43948], edi */ W32((u32)(r_eax+0xa43948u), r_edi);
    /* 004346fc: mov dword ptr [eax + 0xa43964], ebp */ W32((u32)(r_eax+0xa43964u), r_ebp);
    /* 00434702: mov dword ptr [eax + 0xa43968], esi */ W32((u32)(r_eax+0xa43968u), r_esi);
    /* 00434708: mov dword ptr [eax + 0xa4396c], ecx */ W32((u32)(r_eax+0xa4396cu), r_ecx);
    /* 0043470e: mov dword ptr [eax + 0xa43970], ecx */ W32((u32)(r_eax+0xa43970u), r_ecx);
    /* 00434714: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00434716: mov dword ptr [eax + 0xa4394c], edi */ W32((u32)(r_eax+0xa4394cu), r_edi);
    /* 0043471c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043471f: cmp eax, 0x268 */ {  u32 a = r_eax; u32 b = 0x268u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434724: jl 0x4346c4 */ if ((fS!=fO)) goto L_004346c4;
L_00434726:; BB(0x00434726);
    /* 00434726: mov dword ptr [0xa4396c], 0xa43978 */ W32((u32)(0xa4396cu), 0xa43978u);
    /* 00434730: mov dword ptr [0xa439a4], 0xa439b0 */ W32((u32)(0xa439a4u), 0xa439b0u);
    /* 0043473a: mov dword ptr [0xa439dc], 0xa439e8 */ W32((u32)(0xa439dcu), 0xa439e8u);
    /* 00434744: mov dword ptr [0xa43a14], 0xa43a20 */ W32((u32)(0xa43a14u), 0xa43a20u);
    /* 0043474e: mov dword ptr [0xa43a4c], 0xa43a58 */ W32((u32)(0xa43a4cu), 0xa43a58u);
    /* 00434758: mov dword ptr [0xa43a84], 0xa43a90 */ W32((u32)(0xa43a84u), 0xa43a90u);
    /* 00434762: mov dword ptr [0xa43abc], 0xa43ac8 */ W32((u32)(0xa43abcu), 0xa43ac8u);
    /* 0043476c: mov dword ptr [0xa43af4], 0xa43b00 */ W32((u32)(0xa43af4u), 0xa43b00u);
    /* 00434776: mov dword ptr [0xa43b2c], 0xa43b38 */ W32((u32)(0xa43b2cu), 0xa43b38u);
    /* 00434780: mov dword ptr [0xa43b64], 0xa43b70 */ W32((u32)(0xa43b64u), 0xa43b70u);
    /* 0043478a: mov dword ptr [0xa43b70], 0x1f */ W32((u32)(0xa43b70u), 0x1fu);
    /* 00434794: mov dword ptr [0xa43b9c], 0 */ W32((u32)(0xa43b9cu), 0x0u);
    /* 0043479e: call 0x42a238 */ r_esp -= 4; W32(r_esp, 0x4347a3u); f_0042a238();
    /* 004347a3: call 0x42a19c */ r_esp -= 4; W32(r_esp, 0x4347a8u); f_0042a19c();
    /* 004347a8: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4347adu); f_00717f74();
    /* 004347ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004347ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004347af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004347b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004347b1: ret  */ FN_RET(0x004343c4); r_esp += 4; return;
}

void f_00434544(void)
{
    FN_ENTER(0x00434544);
    /* 00434544: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434547: mov dword ptr [0xa43be8], ecx */ W32((u32)(0xa43be8u), r_ecx);
    /* 0043454d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434550: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434553: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434556: mov dword ptr [0xa43c14], ecx */ W32((u32)(0xa43c14u), r_ecx);
    /* 0043455c: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0043455f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434562: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434565: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434568: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043456b: mov dword ptr [0xa43bec], ecx */ W32((u32)(0xa43becu), r_ecx);
    /* 00434571: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434574: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434577: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043457a: mov dword ptr [0xa43c18], ecx */ W32((u32)(0xa43c18u), r_ecx);
    /* 00434580: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434583: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434586: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434589: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0043458c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043458f: mov dword ptr [0xa43bf0], ecx */ W32((u32)(0xa43bf0u), r_ecx);
    /* 00434595: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434598: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043459b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043459e: mov dword ptr [0xa43c1c], ecx */ W32((u32)(0xa43c1cu), r_ecx);
    /* 004345a4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004345a7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345aa: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345ad: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004345b0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345b3: mov dword ptr [0xa43bf4], ecx */ W32((u32)(0xa43bf4u), r_ecx);
    /* 004345b9: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004345bc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345bf: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345c2: mov dword ptr [0xa43c20], ecx */ W32((u32)(0xa43c20u), r_ecx);
    /* 004345c8: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004345cb: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345ce: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345d1: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004345d4: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345d7: mov dword ptr [0xa43bf8], ecx */ W32((u32)(0xa43bf8u), r_ecx);
    /* 004345dd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004345e0: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345e3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345e6: mov dword ptr [0xa43c24], ecx */ W32((u32)(0xa43c24u), r_ecx);
    /* 004345ec: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004345ef: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345f2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004345f5: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004345f8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004345fb: mov dword ptr [0xa43bfc], ecx */ W32((u32)(0xa43bfcu), r_ecx);
    /* 00434601: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434604: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434607: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043460a: mov dword ptr [0xa43c28], ecx */ W32((u32)(0xa43c28u), r_ecx);
    /* 00434610: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434613: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434616: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434619: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0043461c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043461f: mov dword ptr [0xa43c00], ecx */ W32((u32)(0xa43c00u), r_ecx);
    /* 00434625: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434628: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043462b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043462e: mov dword ptr [0xa43c2c], ecx */ W32((u32)(0xa43c2cu), r_ecx);
    /* 00434634: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434637: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043463a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043463d: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434640: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434643: mov dword ptr [0xa43c04], ecx */ W32((u32)(0xa43c04u), r_ecx);
    /* 00434649: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0043464c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043464f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434652: mov dword ptr [0xa43c30], ecx */ W32((u32)(0xa43c30u), r_ecx);
    /* 00434658: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0043465b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0043465e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434661: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434664: mov dword ptr [0xa43c08], ecx */ W32((u32)(0xa43c08u), r_ecx);
    /* 0043466a: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0043466d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00434670: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00434673: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00434676: mov dword ptr [0xa43bd8], edx */ W32((u32)(0xa43bd8u), r_edx);
    /* 0043467c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0043467f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00434682: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00434685: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00434688: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043468b: mov dword ptr [0xa43bdc], ecx */ W32((u32)(0xa43bdcu), r_ecx);
    /* 00434691: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00434694: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00434697: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043469a: mov dword ptr [0xa43be0], edx */ W32((u32)(0xa43be0u), r_edx);
    /* 004346a0: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004346a3: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4346a8u); f_0078e934();
    /* 004346a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004346ab: mov dword ptr [0xa43ce8], eax */ W32((u32)(0xa43ce8u), r_eax);
    /* 004346b0: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 004346b3: mov dword ptr [0xa43ce4], eax */ W32((u32)(0xa43ce4u), r_eax);
    /* 004346b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004346ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004346bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004346be: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004346c0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004346c2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004346c4:; BB(0x004346c4);
    /* 004346c4: mov dword ptr [eax + 0xa43940], 0xf */ W32((u32)(r_eax+0xa43940u), 0xfu);
    /* 004346ce: mov dword ptr [eax + 0xa43950], edx */ W32((u32)(r_eax+0xa43950u), r_edx);
    /* 004346d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004346d6: mov dword ptr [eax + 0xa43944], ecx */ W32((u32)(r_eax+0xa43944u), r_ecx);
    /* 004346dc: mov dword ptr [eax + 0xa43954], ecx */ W32((u32)(r_eax+0xa43954u), r_ecx);
    /* 004346e2: mov dword ptr [eax + 0xa43958], ecx */ W32((u32)(r_eax+0xa43958u), r_ecx);
    /* 004346e8: mov dword ptr [eax + 0xa4395c], ecx */ W32((u32)(r_eax+0xa4395cu), r_ecx);
    /* 004346ee: mov dword ptr [eax + 0xa43960], ebx */ W32((u32)(r_eax+0xa43960u), r_ebx);
    /* 004346f4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004346f6: mov dword ptr [eax + 0xa43948], edi */ W32((u32)(r_eax+0xa43948u), r_edi);
    /* 004346fc: mov dword ptr [eax + 0xa43964], ebp */ W32((u32)(r_eax+0xa43964u), r_ebp);
    /* 00434702: mov dword ptr [eax + 0xa43968], esi */ W32((u32)(r_eax+0xa43968u), r_esi);
    /* 00434708: mov dword ptr [eax + 0xa4396c], ecx */ W32((u32)(r_eax+0xa4396cu), r_ecx);
    /* 0043470e: mov dword ptr [eax + 0xa43970], ecx */ W32((u32)(r_eax+0xa43970u), r_ecx);
    /* 00434714: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00434716: mov dword ptr [eax + 0xa4394c], edi */ W32((u32)(r_eax+0xa4394cu), r_edi);
    /* 0043471c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043471f: cmp eax, 0x268 */ {  u32 a = r_eax; u32 b = 0x268u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434724: jl 0x4346c4 */ if ((fS!=fO)) goto L_004346c4;
L_00434726:; BB(0x00434726);
    /* 00434726: mov dword ptr [0xa4396c], 0xa43978 */ W32((u32)(0xa4396cu), 0xa43978u);
    /* 00434730: mov dword ptr [0xa439a4], 0xa439b0 */ W32((u32)(0xa439a4u), 0xa439b0u);
    /* 0043473a: mov dword ptr [0xa439dc], 0xa439e8 */ W32((u32)(0xa439dcu), 0xa439e8u);
    /* 00434744: mov dword ptr [0xa43a14], 0xa43a20 */ W32((u32)(0xa43a14u), 0xa43a20u);
    /* 0043474e: mov dword ptr [0xa43a4c], 0xa43a58 */ W32((u32)(0xa43a4cu), 0xa43a58u);
    /* 00434758: mov dword ptr [0xa43a84], 0xa43a90 */ W32((u32)(0xa43a84u), 0xa43a90u);
    /* 00434762: mov dword ptr [0xa43abc], 0xa43ac8 */ W32((u32)(0xa43abcu), 0xa43ac8u);
    /* 0043476c: mov dword ptr [0xa43af4], 0xa43b00 */ W32((u32)(0xa43af4u), 0xa43b00u);
    /* 00434776: mov dword ptr [0xa43b2c], 0xa43b38 */ W32((u32)(0xa43b2cu), 0xa43b38u);
    /* 00434780: mov dword ptr [0xa43b64], 0xa43b70 */ W32((u32)(0xa43b64u), 0xa43b70u);
    /* 0043478a: mov dword ptr [0xa43b70], 0x1f */ W32((u32)(0xa43b70u), 0x1fu);
    /* 00434794: mov dword ptr [0xa43b9c], 0 */ W32((u32)(0xa43b9cu), 0x0u);
    /* 0043479e: call 0x42a238 */ r_esp -= 4; W32(r_esp, 0x4347a3u); f_0042a238();
    /* 004347a3: call 0x42a19c */ r_esp -= 4; W32(r_esp, 0x4347a8u); f_0042a19c();
    /* 004347a8: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4347adu); f_00717f74();
    /* 004347ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004347ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004347af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004347b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004347b1: ret  */ FN_RET(0x00434544); r_esp += 4; return;
}

void f_004347b4(void) /* sub_4347B4 */
{
    FN_ENTER(0x004347b4);
    /* 004347b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004347b5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004347b8: mov esi, ecx */ r_esi = r_ecx;
    /* 004347ba: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004347be: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004347c1: je 0x434828 */ if (fZ) goto L_00434828;
L_004347c3:; BB(0x004347c3);
    /* 004347c3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004347c6: je 0x4347e4 */ if (fZ) goto L_004347e4;
L_004347c8:; BB(0x004347c8);
    /* 004347c8: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004347cb: je 0x4347dd */ if (fZ) goto L_004347dd;
L_004347cd:; BB(0x004347cd);
    /* 004347cd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004347d0: je 0x4347dd */ if (fZ) goto L_004347dd;
L_004347d2:; BB(0x004347d2);
    /* 004347d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004347d4: jne 0x4347dd */ if (!fZ) goto L_004347dd;
L_004347d6:; BB(0x004347d6);
    /* 004347d6: mov ecx, esi */ r_ecx = r_esi;
    /* 004347d8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4347ddu); f_007aa094();
L_004347dd:; BB(0x004347dd);
    /* 004347dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004347e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004347e1: ret 4 */ FN_RET(0x004347b4); r_esp += 8; return;
L_004347e4:; BB(0x004347e4);
    /* 004347e4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004347e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004347e8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004347ea: mov ecx, esi */ r_ecx = r_esi;
    /* 004347ec: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4347f2u); call_ind(t); }
    /* 004347f2: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004347f6: mov esi, dword ptr [esi + 0x3dc] */ r_esi = R32((u32)(r_esi+0x3dcu));
    /* 004347fc: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 00434800: mov edx, 1 */ r_edx = 0x1u;
    /* 00434805: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0043480a: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0043480f: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00434814: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 00434819: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0043481c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x434821u); f_008003e0();
    /* 00434821: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00434824: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00434825: ret 4 */ FN_RET(0x004347b4); r_esp += 8; return;
L_00434828:; BB(0x00434828);
    /* 00434828: mov eax, 1 */ r_eax = 0x1u;
    /* 0043482d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00434834: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00434837: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00434838: ret 4 */ FN_RET(0x004347b4); r_esp += 8; return;
}

void f_0043483c(void) /* sub_43483C */
{
    FN_ENTER(0x0043483c);
    /* 0043483c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043483d: mov edi, ecx */ r_edi = r_ecx;
    /* 0043483f: fld dword ptr [0x8fd0a4] */ FPUSH(R_F32((u32)(0x8fd0a4u)));
    /* 00434845: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 00434848: mov dword ptr [edi + 0x668], 1 */ W32((u32)(r_edi+0x668u), 0x1u);
    /* 00434852: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434853: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434856: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x43485bu); f_0082e900();
    /* 0043485b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043485e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00434862: lea ecx, [edi + 0x66c] */ r_ecx = (u32)(r_edi+0x66cu);
    /* 00434868: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 0043486f: mov dword ptr [esp + 8], 0x3da3d70a */ W32((u32)(r_esp+0x8u), 0x3da3d70au);
    /* 00434877: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x43487cu); f_00434afc();
    /* 0043487c: fld dword ptr [0x8fd09c] */ FPUSH(R_F32((u32)(0x8fd09cu)));
    /* 00434882: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00434885: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434886: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434889: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x43488eu); f_0082e900();
    /* 0043488e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434891: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00434895: add edi, 0x68c */ {  u32 a = r_edi; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043489b: mov ecx, edi */ r_ecx = r_edi;
    /* 0043489d: mov dword ptr [esp], 0x40a00000 */ W32((u32)(r_esp), 0x40a00000u);
    /* 004348a4: mov dword ptr [esp + 8], 0x3da3d70a */ W32((u32)(r_esp+0x8u), 0x3da3d70au);
    /* 004348ac: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x4348b1u); f_00434afc();
    /* 004348b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004348b2: ret  */ FN_RET(0x0043483c); r_esp += 4; return;
}

void f_004348b4(void) /* sub_4348B4 */
{
    FN_ENTER(0x004348b4);
    /* 004348b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004348b5: mov edi, ecx */ r_edi = r_ecx;
    /* 004348b7: fld dword ptr [0x8fcce8] */ FPUSH(R_F32((u32)(0x8fcce8u)));
    /* 004348bd: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 004348c0: mov dword ptr [edi + 0x664], 0 */ W32((u32)(r_edi+0x664u), 0x0u);
    /* 004348ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004348cb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004348ce: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4348d3u); f_0082e900();
    /* 004348d3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004348d6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004348da: lea ecx, [edi + 0x66c] */ r_ecx = (u32)(r_edi+0x66cu);
    /* 004348e0: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 004348e7: mov dword ptr [esp + 8], 0x3da3d70a */ W32((u32)(r_esp+0x8u), 0x3da3d70au);
    /* 004348ef: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x4348f4u); f_00434afc();
    /* 004348f4: fld dword ptr [0x8fcce0] */ FPUSH(R_F32((u32)(0x8fcce0u)));
    /* 004348fa: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 004348fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004348fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434901: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434906u); f_0082e900();
    /* 00434906: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434909: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043490d: add edi, 0x68c */ {  u32 a = r_edi; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00434913: mov ecx, edi */ r_ecx = r_edi;
    /* 00434915: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 0043491c: mov dword ptr [esp + 8], 0x3e4ccccd */ W32((u32)(r_esp+0x8u), 0x3e4ccccdu);
    /* 00434924: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 0043492c: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x434931u); f_00434ac4();
    /* 00434931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00434932: ret  */ FN_RET(0x004348b4); r_esp += 4; return;
}

void f_00434934(void) /* sub_434934 */
{
    FN_ENTER(0x00434934);
    /* 00434934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434935: mov edi, ecx */ r_edi = r_ecx;
    /* 00434937: fld dword ptr [0x8fd0a4] */ FPUSH(R_F32((u32)(0x8fd0a4u)));
    /* 0043493d: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 00434940: mov dword ptr [edi + 0x668], 0 */ W32((u32)(r_edi+0x668u), 0x0u);
    /* 0043494a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043494b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043494e: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434953u); f_0082e900();
    /* 00434953: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434956: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043495a: lea ecx, [edi + 0x66c] */ r_ecx = (u32)(r_edi+0x66cu);
    /* 00434960: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00434967: mov dword ptr [esp + 8], 0x3da3d70a */ W32((u32)(r_esp+0x8u), 0x3da3d70au);
    /* 0043496f: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x434974u); f_00434afc();
    /* 00434974: fld dword ptr [0x8fd09c] */ FPUSH(R_F32((u32)(0x8fd09cu)));
    /* 0043497a: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 0043497d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043497e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434981: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434986u); f_0082e900();
    /* 00434986: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434989: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043498d: add edi, 0x68c */ {  u32 a = r_edi; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00434993: mov ecx, edi */ r_ecx = r_edi;
    /* 00434995: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 0043499c: mov dword ptr [esp + 8], 0x3e4ccccd */ W32((u32)(r_esp+0x8u), 0x3e4ccccdu);
    /* 004349a4: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 004349ac: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x4349b1u); f_00434ac4();
    /* 004349b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004349b2: ret  */ FN_RET(0x00434934); r_esp += 4; return;
}

void f_0043494e(void)
{
    FN_ENTER(0x0043494e);
    /* 0043494e: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434953u); f_0082e900();
    /* 00434953: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434956: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043495a: lea ecx, [edi + 0x66c] */ r_ecx = (u32)(r_edi+0x66cu);
    /* 00434960: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00434967: mov dword ptr [esp + 8], 0x3da3d70a */ W32((u32)(r_esp+0x8u), 0x3da3d70au);
    /* 0043496f: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x434974u); f_00434afc();
    /* 00434974: fld dword ptr [0x8fd09c] */ FPUSH(R_F32((u32)(0x8fd09cu)));
    /* 0043497a: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 0043497d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043497e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434981: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434986u); f_0082e900();
    /* 00434986: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434989: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043498d: add edi, 0x68c */ {  u32 a = r_edi; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00434993: mov ecx, edi */ r_ecx = r_edi;
    /* 00434995: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 0043499c: mov dword ptr [esp + 8], 0x3e4ccccd */ W32((u32)(r_esp+0x8u), 0x3e4ccccdu);
    /* 004349a4: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 004349ac: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x4349b1u); f_00434ac4();
    /* 004349b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004349b2: ret  */ FN_RET(0x0043494e); r_esp += 4; return;
}

void f_004349b4(void) /* sub_4349B4 */
{
    FN_ENTER(0x004349b4);
    /* 004349b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004349b5: mov edi, ecx */ r_edi = r_ecx;
    /* 004349b7: fld dword ptr [0x8fcce8] */ FPUSH(R_F32((u32)(0x8fcce8u)));
    /* 004349bd: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 004349c0: mov dword ptr [edi + 0x664], 0 */ W32((u32)(r_edi+0x664u), 0x0u);
    /* 004349ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004349cb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004349ce: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4349d3u); f_0082e900();
    /* 004349d3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004349d6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004349da: lea ecx, [edi + 0x66c] */ r_ecx = (u32)(r_edi+0x66cu);
    /* 004349e0: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 004349e7: mov dword ptr [esp + 8], 0x3da3d70a */ W32((u32)(r_esp+0x8u), 0x3da3d70au);
    /* 004349ef: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x4349f4u); f_00434afc();
    /* 004349f4: fld dword ptr [0x8fce3c] */ FPUSH(R_F32((u32)(0x8fce3cu)));
    /* 004349fa: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 004349fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004349fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434a01: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434a06u); f_0082e900();
    /* 00434a06: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00434a09: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00434a0d: add edi, 0x68c */ {  u32 a = r_edi; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00434a13: mov ecx, edi */ r_ecx = r_edi;
    /* 00434a15: mov dword ptr [esp], 0x40a00000 */ W32((u32)(r_esp), 0x40a00000u);
    /* 00434a1c: mov dword ptr [esp + 8], 0x3da3d70a */ W32((u32)(r_esp+0x8u), 0x3da3d70au);
    /* 00434a24: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x434a29u); f_00434afc();
    /* 00434a29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00434a2a: ret  */ FN_RET(0x004349b4); r_esp += 4; return;
}

void f_00434a2c(void) /* sub_434A2C */
{
    FN_ENTER(0x00434a2c);
    /* 00434a2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00434a2e: mov dword ptr [ecx + 0x3d8], eax */ W32((u32)(r_ecx+0x3d8u), r_eax);
    /* 00434a34: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 00434a3a: ret  */ FN_RET(0x00434a2c); r_esp += 4; return;
}

void f_00434a3c(void) /* sub_434A3C */
{
    FN_ENTER(0x00434a3c);
    /* 00434a3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434a3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00434a3e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00434a40: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00434a43: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00434a46: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00434a48: fld dword ptr [0x8fcc44] */ FPUSH(R_F32((u32)(0x8fcc44u)));
    /* 00434a4e: fld dword ptr [0x8fcc40] */ FPUSH(R_F32((u32)(0x8fcc40u)));
    /* 00434a54: fdiv dword ptr [ebp + 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x4u));
    /* 00434a57: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00434a5a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00434a5c: fchs  */ ST(0) = -ST(0);
    /* 00434a5e: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00434a60: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00434a63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434a65: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00434a67: fld dword ptr [0x8fcc3c] */ FPUSH(R_F32((u32)(0x8fcc3cu)));
    /* 00434a6d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00434a6f: fdivr st(2) */ ST(0) = ST(2) / ST(0);
    /* 00434a71: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00434a73: fld dword ptr [0x8fcc38] */ FPUSH(R_F32((u32)(0x8fcc38u)));
    /* 00434a79: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00434a7b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00434a7d: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00434a7f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00434a81: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00434a83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00434a85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00434a86: ja 0x434a91 */ if ((!fC&&!fZ)) goto L_00434a91;
L_00434a88:; BB(0x00434a88);
    /* 00434a88: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00434a8a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00434a8c: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00434a8f: jmp 0x434ab2 */ goto L_00434ab2;
L_00434a91:; BB(0x00434a91);
    /* 00434a91: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00434a93: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00434a95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434a97: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00434a99: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00434a9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434a9c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434a9f: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x434aa4u); f_0082dc9c();
    /* 00434aa4: fld dword ptr [0x8fcc38] */ FPUSH(R_F32((u32)(0x8fcc38u)));
    /* 00434aaa: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00434aad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00434aaf: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
L_00434ab2:; BB(0x00434ab2);
    /* 00434ab2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00434ab4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00434ab6: fdiv dword ptr [esp] */ ST(0) = ST(0) / R_F32((u32)(r_esp));
    /* 00434ab9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00434abb: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00434abe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00434abf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434ac0: ret  */ FN_RET(0x00434a3c); r_esp += 4; return;
}

void f_00434ac4(void) /* sub_434AC4 */
{
    FN_ENTER(0x00434ac4);
    /* 00434ac4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00434ac8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00434acc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00434acf: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00434ad3: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00434ad9: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00434adc: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00434adf: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00434ae3: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00434aea: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00434aed: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 00434af4: call 0x434a3c */ r_esp -= 4; W32(r_esp, 0x434af9u); f_00434a3c();
    /* 00434af9: ret 0x10 */ FN_RET(0x00434ac4); r_esp += 20; return;
}

void f_00434afc(void) /* sub_434AFC */
{
    FN_ENTER(0x00434afc);
    /* 00434afc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00434b00: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00434b04: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00434b07: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00434b0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00434b0e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00434b14: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00434b17: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00434b1a: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00434b21: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 00434b28: call 0x434a3c */ r_esp -= 4; W32(r_esp, 0x434b2du); f_00434a3c();
    /* 00434b2d: ret 0xc */ FN_RET(0x00434afc); r_esp += 16; return;
}

void f_00434b30(void) /* sub_434B30 */
{
    FN_ENTER(0x00434b30);
    /* 00434b30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00434b31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00434b33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00434b35: call 0x434b54 */ r_esp -= 4; W32(r_esp, 0x434b3au); f_00434b54();
    /* 00434b3a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00434b3e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00434b40: jne 0x434b46 */ if (!fZ) goto L_00434b46;
L_00434b42:; BB(0x00434b42);
    /* 00434b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00434b43: ret 4 */ FN_RET(0x00434b30); r_esp += 8; return;
L_00434b46:; BB(0x00434b46);
    /* 00434b46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00434b47: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x434b4cu); f_005c2f74();
    /* 00434b4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00434b4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00434b4e: ret 4 */ FN_RET(0x00434b30); r_esp += 8; return;
}

void f_00434b54(void) /* sub_434B54 */
{
    FN_ENTER(0x00434b54);
    /* 00434b54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434b55: mov ebp, esp */ r_ebp = r_esp;
    /* 00434b57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434b59: push 0x8cde30 */ { u32 v = 0x8cde30u; r_esp -= 4; W32(r_esp, v); }
    /* 00434b5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00434b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434b65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00434b6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434b6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00434b72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00434b75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00434b78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00434b7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00434b7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434b81: mov dword ptr [ecx], 0xaf4650 */ W32((u32)(r_ecx), 0xaf4650u);
    /* 00434b87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00434b8e: call 0x78cf44 */ r_esp -= 4; W32(r_esp, 0x434b93u); f_0078cf44();
    /* 00434b93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434b96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00434b9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00434b9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434ba0: ret  */ FN_RET(0x00434b54); r_esp += 4; return;
}

void f_00434ba4(void) /* sub_434BA4 */
{
    FN_ENTER(0x00434ba4);
    /* 00434ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00434ba5: mov ebp, esp */ r_ebp = r_esp;
    /* 00434ba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434ba9: push 0x8cde4c */ { u32 v = 0x8cde4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00434bae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00434bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434bb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00434bbc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434bbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00434bc2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00434bc5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00434bc8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00434bcb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00434bce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00434bd1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00434bd4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00434bd7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00434bda: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00434bdd: call 0x78cfb0 */ r_esp -= 4; W32(r_esp, 0x434be2u); f_0078cfb0();
    /* 00434be2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00434be9: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434bec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00434bef: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00434bf2: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 00434bf8: mov dword ptr [esi + 0x84], ebx */ W32((u32)(r_esi+0x84u), r_ebx);
    /* 00434bfe: mov dword ptr [esi], 0xaf4650 */ W32((u32)(r_esi), 0xaf4650u);
    /* 00434c04: mov eax, dword ptr [0x9a47c0] */ r_eax = R32((u32)(0x9a47c0u));
    /* 00434c09: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00434c0c: mov dword ptr [esi + 0x50], 0x41200000 */ W32((u32)(r_esi+0x50u), 0x41200000u);
    /* 00434c13: mov dword ptr [esi + 0x54], 0 */ W32((u32)(r_esi+0x54u), 0x0u);
    /* 00434c1a: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 00434c21: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 00434c28: mov dword ptr [esi + 0x60], 0x41200000 */ W32((u32)(r_esi+0x60u), 0x41200000u);
    /* 00434c2f: mov dword ptr [esi + 0x64], 0 */ W32((u32)(r_esi+0x64u), 0x0u);
    /* 00434c36: mov dword ptr [esi + 0x68], 0 */ W32((u32)(r_esi+0x68u), 0x0u);
    /* 00434c3d: mov dword ptr [esi + 0x6c], 0 */ W32((u32)(r_esi+0x6cu), 0x0u);
    /* 00434c44: mov dword ptr [esi + 0x70], 0xbf800000 */ W32((u32)(r_esi+0x70u), 0xbf800000u);
    /* 00434c4b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434c4e: call 0x434c84 */ r_esp -= 4; W32(r_esp, 0x434c53u); f_00434c84();
    /* 00434c53: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434c56: lea edx, [ecx + 0x30] */ r_edx = (u32)(r_ecx+0x30u);
    /* 00434c59: lea eax, [ecx + 0x50] */ r_eax = (u32)(r_ecx+0x50u);
    /* 00434c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434c5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00434c5e: push 0xa43d40 */ { u32 v = 0xa43d40u; r_esp -= 4; W32(r_esp, v); }
    /* 00434c63: call 0x78d9d0 */ r_esp -= 4; W32(r_esp, 0x434c68u); f_0078d9d0();
    /* 00434c68: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00434c6b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00434c6e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00434c71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00434c74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00434c7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00434c7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00434c7e: ret 0xc */ FN_RET(0x00434ba4); r_esp += 16; return;
}

void f_00434c84(void) /* sub_434C84 */
{
    FN_ENTER(0x00434c84);
    /* 00434c84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434c85: mov edi, ecx */ r_edi = r_ecx;
    /* 00434c87: mov edx, dword ptr [edi + 0x80] */ r_edx = R32((u32)(r_edi+0x80u));
    /* 00434c8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00434c8f: fld dword ptr [0x8fd480] */ FPUSH(R_F32((u32)(0x8fd480u)));
    /* 00434c95: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 00434c98: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00434c9a: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00434c9d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00434ca0: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00434ca3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00434ca6: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00434ca9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00434cab: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 00434cae: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00434cb1: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00434cb3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00434cb6: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 00434cb9: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00434cbc: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00434cc2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434cc4: fstp dword ptr [edi + 0x58] */ W_F32((u32)(r_edi+0x58u), ST(0)); FPOP();
    /* 00434cc7: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00434cc9: fstp dword ptr [edi + 0x5c] */ W_F32((u32)(r_edi+0x5cu), ST(0)); FPOP();
    /* 00434ccc: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 00434ccf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00434cd1: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 00434cd4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00434cd7: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 00434cda: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00434cdd: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 00434ce0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00434ce2: mov dword ptr [edi + 0x64], edx */ W32((u32)(r_edi+0x64u), r_edx);
    /* 00434ce5: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00434ce8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00434cea: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00434ced: mov dword ptr [edi + 0x68], edx */ W32((u32)(r_edi+0x68u), r_edx);
    /* 00434cf0: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00434cf3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434cf5: fstp dword ptr [edi + 0x68] */ W_F32((u32)(r_edi+0x68u), ST(0)); FPOP();
    /* 00434cf8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00434cfa: fstp dword ptr [edi + 0x6c] */ W_F32((u32)(r_edi+0x6cu), ST(0)); FPOP();
    /* 00434cfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00434cfe: ret  */ FN_RET(0x00434c84); r_esp += 4; return;
}

void f_00434d00(void) /* sub_434D00 */
{
    FN_ENTER(0x00434d00);
    /* 00434d00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434d01: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434d04: mov edi, ecx */ r_edi = r_ecx;
    /* 00434d06: mov ecx, edi */ r_ecx = r_edi;
    /* 00434d08: call 0x434c84 */ r_esp -= 4; W32(r_esp, 0x434d0du); f_00434c84();
    /* 00434d0d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00434d14: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00434d17: mov ecx, edi */ r_ecx = r_edi;
    /* 00434d19: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00434d21: mov dword ptr [esp + 8], 0xc0000000 */ W32((u32)(r_esp+0x8u), 0xc0000000u);
    /* 00434d29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434d2a: call 0x78d130 */ r_esp -= 4; W32(r_esp, 0x434d2fu); f_0078d130();
    /* 00434d2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00434d32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00434d33: ret  */ FN_RET(0x00434d00); r_esp += 4; return;
}

void f_00434d34(void) /* sub_434D34 */
{
    FN_ENTER(0x00434d34);
    /* 00434d34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00434d35: mov ebx, esp */ r_ebx = r_esp;
    /* 00434d37: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00434d3a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00434d3b: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00434d3e: mov esi, ecx */ r_esi = r_ecx;
    /* 00434d40: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 00434d45: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00434d4b: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00434d4e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x434d53u); f_00829cc8();
    /* 00434d53: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00434d56: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00434d59: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 00434d5c: movsx esi, byte ptr [ecx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00434d5f: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434d62: jl 0x434f2c */ if ((fS!=fO)) goto L_00434f2c;
L_00434d68:; BB(0x00434d68);
    /* 00434d68: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00434d6c: mov edi, edx */ r_edi = r_edx;
    /* 00434d6e: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
L_00434d72:; BB(0x00434d72);
    /* 00434d72: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00434d75: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00434d77: jle 0x434f0f */ if ((fZ||fS!=fO)) goto L_00434f0f;
L_00434d7d:; BB(0x00434d7d);
    /* 00434d7d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00434d81: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
L_00434d85:; BB(0x00434d85);
    /* 00434d85: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x434d8au); f_0082d7b0();
    /* 00434d8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434d8c: mov edx, edi */ r_edx = r_edi;
    /* 00434d8e: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x434d93u); f_008316b4();
    /* 00434d93: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00434d97: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00434d9a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00434d9e: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00434da1: lea ebp, [edi + 0xc] */ r_ebp = (u32)(r_edi+0xcu);
    /* 00434da4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00434da8: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00434dab: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00434daf: mov edx, edi */ r_edx = r_edi;
    /* 00434db1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x434db6u); f_0082f9c4();
    /* 00434db6: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00434dba: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x434dbfu); f_0083173c();
    /* 00434dbf: fld dword ptr [0x8fd47c] */ FPUSH(R_F32((u32)(0x8fd47cu)));
    /* 00434dc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434dc7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00434dc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00434dcb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00434dcc: jne 0x434de4 */ if (!fZ) goto L_00434de4;
L_00434dce:; BB(0x00434dce);
    /* 00434dce: mov dword ptr [esp + 0xc], 0xbf800000 */ W32((u32)(r_esp+0xcu), 0xbf800000u);
    /* 00434dd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434dd8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00434dda: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00434dde: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00434de2: jmp 0x434df5 */ goto L_00434df5;
L_00434de4:; BB(0x00434de4);
    /* 00434de4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00434de6: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00434dea: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x434defu); f_0082df08();
    /* 00434def: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00434df1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_00434df5:; BB(0x00434df5);
    /* 00434df5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00434df7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434df8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434dfb: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434e00u); f_0082e900();
    /* 00434e00: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00434e04: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00434e08: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434e0du); f_0082e900();
    /* 00434e0d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00434e11: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00434e13: fcomp dword ptr [0x8fd47c] */ fx_compare(ST(0), R_F32((u32)(0x8fd47cu))); FPOP();
    /* 00434e19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00434e1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00434e1c: je 0x434e67 */ if (fZ) goto L_00434e67;
L_00434e1e:; BB(0x00434e1e);
    /* 00434e1e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00434e22: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00434e26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434e28: fchs  */ ST(0) = -ST(0);
    /* 00434e2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434e2c: fchs  */ ST(0) = -ST(0);
    /* 00434e2e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00434e30: fmul qword ptr [0x8fd468] */ ST(0) = ST(0) * R_F64((u32)(0x8fd468u));
    /* 00434e36: fdiv qword ptr [0x8fd460] */ ST(0) = ST(0) / R_F64((u32)(0x8fd460u));
    /* 00434e3c: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00434e40: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00434e45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00434e4a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00434e4e: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00434e52: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00434e56: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00434e5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434e5c: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00434e60: mov edx, edi */ r_edx = r_edi;
    /* 00434e62: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x434e67u); f_0082d8bc();
L_00434e67:; BB(0x00434e67);
    /* 00434e67: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00434e6b: fchs  */ ST(0) = -ST(0);
    /* 00434e6d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00434e70: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x434e75u); f_0084d15c();
    /* 00434e75: fmul qword ptr [0x8fd468] */ ST(0) = ST(0) * R_F64((u32)(0x8fd468u));
    /* 00434e7b: fdiv qword ptr [0x8fd460] */ ST(0) = ST(0) / R_F64((u32)(0x8fd460u));
    /* 00434e81: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00434e85: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00434e8a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00434e8f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00434e93: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00434e97: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00434e9b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00434e9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434ea1: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00434ea5: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x434eaau); f_0082e9e4();
    /* 00434eaa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00434eae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00434eb0: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00434eb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434eb4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x434eb9u); f_0082d8bc();
    /* 00434eb9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x434ebeu); f_0082d7b0();
    /* 00434ebe: mov eax, dword ptr [0x8fcc14] */ r_eax = R32((u32)(0x8fcc14u));
    /* 00434ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434ec5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434ec8: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x434ecdu); f_0082fa0c();
    /* 00434ecd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434ecf: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 00434ed4: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x434ed9u); f_0082e9e4();
    /* 00434ed9: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434edc: je 0x434f3f */ if (fZ) goto L_00434f3f;
L_00434ede:; BB(0x00434ede);
    /* 00434ede: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00434ee2: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00434ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434ee7: je 0x434ef0 */ if (fZ) goto L_00434ef0;
L_00434ee9:; BB(0x00434ee9);
    /* 00434ee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434eea: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x434eefu); f_0082e1e8();
    /* 00434eef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00434ef0:; BB(0x00434ef0);
    /* 00434ef0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x434ef5u); f_0082da80();
    /* 00434ef5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x434efau); f_0082da80();
    /* 00434efa: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00434efd: mov edi, ebp */ r_edi = r_ebp;
    /* 00434eff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00434f01: jg 0x434d85 */ if ((!fZ&&fS==fO)) goto L_00434d85;
L_00434f07:; BB(0x00434f07);
    /* 00434f07: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00434f0b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
L_00434f0f:; BB(0x00434f0f);
    /* 00434f0f: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00434f12: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434f15: movsx esi, byte ptr [ecx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00434f18: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434f1b: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434f1e: jge 0x434d72 */ if ((fS==fO)) goto L_00434d72;
L_00434f24:; BB(0x00434f24);
    /* 00434f24: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00434f28: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_00434f2c:; BB(0x00434f2c);
    /* 00434f2c: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00434f32: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x434f37u); f_0061cdb0();
    /* 00434f37: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00434f3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00434f3b: mov esp, ebx */ r_esp = r_ebx;
    /* 00434f3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00434f3e: ret  */ FN_RET(0x00434d34); r_esp += 4; return;
L_00434f3f:; BB(0x00434f3f);
    /* 00434f3f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00434f43: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00434f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434f48: je 0x434ef0 */ if (fZ) goto L_00434ef0;
L_00434f4a:; BB(0x00434f4a);
    /* 00434f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434f4b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x434f50u); f_0082e1e8();
    /* 00434f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00434f51: jmp 0x434ef0 */ goto L_00434ef0;
}

void f_00434e45(void)
{
    FN_ENTER(0x00434e45);
    goto L_00434e45;
L_00434d72:; BB(0x00434d72);
    /* 00434d72: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00434d75: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00434d77: jle 0x434f0f */ if ((fZ||fS!=fO)) goto L_00434f0f;
L_00434d7d:; BB(0x00434d7d);
    /* 00434d7d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00434d81: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
L_00434d85:; BB(0x00434d85);
    /* 00434d85: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x434d8au); f_0082d7b0();
    /* 00434d8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434d8c: mov edx, edi */ r_edx = r_edi;
    /* 00434d8e: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x434d93u); f_008316b4();
    /* 00434d93: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00434d97: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00434d9a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00434d9e: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00434da1: lea ebp, [edi + 0xc] */ r_ebp = (u32)(r_edi+0xcu);
    /* 00434da4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00434da8: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00434dab: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00434daf: mov edx, edi */ r_edx = r_edi;
    /* 00434db1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x434db6u); f_0082f9c4();
    /* 00434db6: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00434dba: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x434dbfu); f_0083173c();
    /* 00434dbf: fld dword ptr [0x8fd47c] */ FPUSH(R_F32((u32)(0x8fd47cu)));
    /* 00434dc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434dc7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00434dc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00434dcb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00434dcc: jne 0x434de4 */ if (!fZ) goto L_00434de4;
L_00434dce:; BB(0x00434dce);
    /* 00434dce: mov dword ptr [esp + 0xc], 0xbf800000 */ W32((u32)(r_esp+0xcu), 0xbf800000u);
    /* 00434dd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434dd8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00434dda: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00434dde: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00434de2: jmp 0x434df5 */ goto L_00434df5;
L_00434de4:; BB(0x00434de4);
    /* 00434de4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00434de6: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00434dea: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x434defu); f_0082df08();
    /* 00434def: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00434df1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_00434df5:; BB(0x00434df5);
    /* 00434df5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00434df7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434df8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00434dfb: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434e00u); f_0082e900();
    /* 00434e00: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00434e04: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00434e08: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x434e0du); f_0082e900();
    /* 00434e0d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00434e11: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00434e13: fcomp dword ptr [0x8fd47c] */ fx_compare(ST(0), R_F32((u32)(0x8fd47cu))); FPOP();
    /* 00434e19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00434e1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00434e1c: je 0x434e67 */ if (fZ) goto L_00434e67;
L_00434e1e:; BB(0x00434e1e);
    /* 00434e1e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00434e22: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00434e26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434e28: fchs  */ ST(0) = -ST(0);
    /* 00434e2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00434e2c: fchs  */ ST(0) = -ST(0);
    /* 00434e2e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00434e30: fmul qword ptr [0x8fd468] */ ST(0) = ST(0) * R_F64((u32)(0x8fd468u));
    /* 00434e36: fdiv qword ptr [0x8fd460] */ ST(0) = ST(0) / R_F64((u32)(0x8fd460u));
    /* 00434e3c: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00434e40: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
L_00434e45:; BB(0x00434e45);
    /* 00434e45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00434e4a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00434e4e: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00434e52: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00434e56: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00434e5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434e5c: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00434e60: mov edx, edi */ r_edx = r_edi;
    /* 00434e62: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x434e67u); f_0082d8bc();
L_00434e67:; BB(0x00434e67);
    /* 00434e67: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00434e6b: fchs  */ ST(0) = -ST(0);
    /* 00434e6d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00434e70: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x434e75u); f_0084d15c();
    /* 00434e75: fmul qword ptr [0x8fd468] */ ST(0) = ST(0) * R_F64((u32)(0x8fd468u));
    /* 00434e7b: fdiv qword ptr [0x8fd460] */ ST(0) = ST(0) / R_F64((u32)(0x8fd460u));
    /* 00434e81: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00434e85: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00434e8a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00434e8f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00434e93: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00434e97: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00434e9b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00434e9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434ea1: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00434ea5: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x434eaau); f_0082e9e4();
    /* 00434eaa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00434eae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00434eb0: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00434eb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434eb4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x434eb9u); f_0082d8bc();
    /* 00434eb9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x434ebeu); f_0082d7b0();
    /* 00434ebe: mov eax, dword ptr [0x8fcc14] */ r_eax = R32((u32)(0x8fcc14u));
    /* 00434ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434ec5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434ec8: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x434ecdu); f_0082fa0c();
    /* 00434ecd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00434ecf: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 00434ed4: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x434ed9u); f_0082e9e4();
    /* 00434ed9: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434edc: je 0x434f3f */ if (fZ) goto L_00434f3f;
L_00434ede:; BB(0x00434ede);
    /* 00434ede: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00434ee2: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00434ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434ee7: je 0x434ef0 */ if (fZ) goto L_00434ef0;
L_00434ee9:; BB(0x00434ee9);
    /* 00434ee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434eea: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x434eefu); f_0082e1e8();
    /* 00434eef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00434ef0:; BB(0x00434ef0);
    /* 00434ef0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x434ef5u); f_0082da80();
    /* 00434ef5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x434efau); f_0082da80();
    /* 00434efa: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00434efd: mov edi, ebp */ r_edi = r_ebp;
    /* 00434eff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00434f01: jg 0x434d85 */ if ((!fZ&&fS==fO)) goto L_00434d85;
L_00434f07:; BB(0x00434f07);
    /* 00434f07: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00434f0b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
L_00434f0f:; BB(0x00434f0f);
    /* 00434f0f: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00434f12: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00434f15: movsx esi, byte ptr [ecx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00434f18: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00434f1b: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00434f1e: jge 0x434d72 */ if ((fS==fO)) goto L_00434d72;
L_00434f24:; BB(0x00434f24);
    /* 00434f24: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00434f28: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00434f2c: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00434f32: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x434f37u); f_0061cdb0();
    /* 00434f37: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00434f3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00434f3b: mov esp, ebx */ r_esp = r_ebx;
    /* 00434f3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00434f3e: ret  */ FN_RET(0x00434e45); r_esp += 4; return;
L_00434f3f:; BB(0x00434f3f);
    /* 00434f3f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00434f43: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00434f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434f48: je 0x434ef0 */ if (fZ) goto L_00434ef0;
L_00434f4a:; BB(0x00434f4a);
    /* 00434f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434f4b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x434f50u); f_0082e1e8();
    /* 00434f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00434f51: jmp 0x434ef0 */ goto L_00434ef0;
}

void f_00434f54(void) /* sub_434F54 */
{
    FN_ENTER(0x00434f54);
    /* 00434f54: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 00434f59: mov dword ptr [0xa43d44], 0 */ W32((u32)(0xa43d44u), 0x0u);
    /* 00434f63: mov edx, 6 */ r_edx = 0x6u;
    /* 00434f68: mov dword ptr [0xa43d48], 0 */ W32((u32)(0xa43d48u), 0x0u);
    /* 00434f72: mov byte ptr [0xa43d40], dl */ W8((u32)(0xa43d40u), (u8)r_edx);
    /* 00434f78: mov dword ptr [0xa43d4c], 0xc0a00000 */ W32((u32)(0xa43d4cu), 0xc0a00000u);
    /* 00434f82: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00434f88: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00434f8b: mov dword ptr [0xa43d50], ecx */ W32((u32)(0xa43d50u), r_ecx);
    /* 00434f91: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00434f97: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00434f9a: mov dword ptr [0xa43d54], eax */ W32((u32)(0xa43d54u), r_eax);
    /* 00434f9f: mov dword ptr [0xa43d5c], 0 */ W32((u32)(0xa43d5cu), 0x0u);
    /* 00434fa9: mov byte ptr [0xa43d58], dl */ W8((u32)(0xa43d58u), (u8)r_edx);
    /* 00434faf: mov edx, dword ptr [0xa43d28] */ r_edx = R32((u32)(0xa43d28u));
    /* 00434fb5: mov dword ptr [0xa43d60], 0 */ W32((u32)(0xa43d60u), 0x0u);
    /* 00434fbf: mov dword ptr [0xa43d64], 0xc0a00000 */ W32((u32)(0xa43d64u), 0xc0a00000u);
    /* 00434fc9: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00434fcf: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00434fd2: mov dword ptr [0xa43d68], eax */ W32((u32)(0xa43d68u), r_eax);
    /* 00434fd7: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00434fdd: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00434fe0: mov dword ptr [0xa43d6c], eax */ W32((u32)(0xa43d6cu), r_eax);
    /* 00434fe5: mov byte ptr [0xa43d70], 0xff */ W8((u32)(0xa43d70u), 0xffu);
    /* 00434fec: ret  */ FN_RET(0x00434f54); r_esp += 4; return;
}

void f_00434ff0(void) /* sub_434FF0 */
{
    FN_ENTER(0x00434ff0);
    /* 00434ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00434ff1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00434ff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00434ff5: call 0x435014 */ r_esp -= 4; W32(r_esp, 0x434ffau); f_00435014();
    /* 00434ffa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00434ffe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435000: jne 0x435006 */ if (!fZ) goto L_00435006;
L_00435002:; BB(0x00435002);
    /* 00435002: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435003: ret 4 */ FN_RET(0x00434ff0); r_esp += 8; return;
L_00435006:; BB(0x00435006);
    /* 00435006: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435007: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43500cu); f_005c2f74();
    /* 0043500c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043500d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043500e: ret 4 */ FN_RET(0x00434ff0); r_esp += 8; return;
}

