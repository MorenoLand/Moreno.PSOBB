#include "protos.h"

void f_00596000(void) /* sub_596000 */
{
    FN_ENTER(0x00596000);
    /* 00596000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596001: mov ebp, esp */ r_ebp = r_esp;
    /* 00596003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596005: push 0x8d8428 */ { u32 v = 0x8d8428u; r_esp -= 4; W32(r_esp, v); }
    /* 0059600a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00596010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596011: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00596018: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059601b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059601e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00596021: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00596024: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00596027: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059602a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059602d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00596030: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00596033: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00596036: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00596039: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x59603eu); f_007865e8();
    /* 0059603e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00596045: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00596048: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059604b: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 00596051: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00596052: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00596055: mov dword ptr [ecx], 0xb094e0 */ W32((u32)(r_ecx), 0xb094e0u);
    /* 0059605b: mov eax, dword ptr [0x9bfd5c] */ r_eax = R32((u32)(0x9bfd5cu));
    /* 00596060: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00596063: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00596069: call dword ptr [0xb0962c] */ { u32 t = R32((u32)(0xb0962cu)); r_esp -= 4; W32(r_esp, 0x59606fu); call_ind(t); }
    /* 0059606f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00596072: movsx ebx, word ptr [ecx + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 00596076: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00596078: jl 0x5960b9 */ if ((fS!=fO)) goto L_005960b9;
L_0059607a:; BB(0x0059607a);
    /* 0059607a: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596080: jg 0x5960b9 */ if ((!fZ&&fS==fO)) goto L_005960b9;
L_00596082:; BB(0x00596082);
    /* 00596082: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 00596088: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0059608b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059608d: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00596090: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00596092: mov edi, dword ptr [eax + edx + 8] */ r_edi = R32((u32)(r_eax+r_edx+0x8u));
    /* 00596096: movzx esi, word ptr [eax + edx + 4] */ r_esi = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 0059609b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0059609d: jl 0x5960b9 */ if ((fS!=fO)) goto L_005960b9;
L_0059609f:; BB(0x0059609f);
    /* 0059609f: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005960a5: jg 0x5960b9 */ if ((!fZ&&fS==fO)) goto L_005960b9;
L_005960a7:; BB(0x005960a7);
    /* 005960a7: mov dword ptr [eax + edx], 0 */ W32((u32)(r_eax+r_edx), 0x0u);
    /* 005960ae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005960b1: mov dword ptr [eax + edx + 4], esi */ W32((u32)(r_eax+r_edx+0x4u), r_esi);
    /* 005960b5: mov dword ptr [eax + edx + 8], edi */ W32((u32)(r_eax+r_edx+0x8u), r_edi);
L_005960b9:; BB(0x005960b9);
    /* 005960b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005960bc: mov dword ptr [ecx + 0x3f8], eax */ W32((u32)(r_ecx+0x3f8u), r_eax);
    /* 005960c2: call 0x5997c8 */ r_esp -= 4; W32(r_esp, 0x5960c7u); f_005997c8();
    /* 005960c7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005960ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005960cc: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 005960cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005960d0: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5960d5u); f_007b4c58();
    /* 005960d5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005960d8: mov dword ptr [ecx + 0x38c], 0 */ W32((u32)(r_ecx+0x38cu), 0x0u);
    /* 005960e2: call dword ptr [0x9bfc00] */ { u32 t = R32((u32)(0x9bfc00u)); r_esp -= 4; W32(r_esp, 0x5960e8u); call_ind(t); }
    /* 005960e8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005960eb: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005960ee: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005960f1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005960f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005960f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005960fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00596100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596101: ret 0xc */ FN_RET(0x00596000); r_esp += 16; return;
}

void f_00596104(void) /* sub_596104 */
{
    FN_ENTER(0x00596104);
    /* 00596104: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596105: mov edi, ecx */ r_edi = r_ecx;
    /* 00596107: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59610cu); f_004f7c84();
    /* 0059610c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059610e: jne 0x5961cf */ if (!fZ) goto L_005961cf;
L_00596114:; BB(0x00596114);
    /* 00596114: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 0059611a: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059611d: je 0x596144 */ if (fZ) goto L_00596144;
L_0059611f:; BB(0x0059611f);
    /* 0059611f: mov ecx, dword ptr [edi + 0x3f8] */ r_ecx = R32((u32)(r_edi+0x3f8u));
    /* 00596125: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596127: je 0x596132 */ if (fZ) goto L_00596132;
L_00596129:; BB(0x00596129);
    /* 00596129: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x59612eu); f_008173b4();
    /* 0059612e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596130: jne 0x596144 */ if (!fZ) goto L_00596144;
L_00596132:; BB(0x00596132);
    /* 00596132: mov dword ptr [edi + 0x38c], 0xd */ W32((u32)(r_edi+0x38cu), 0xdu);
    /* 0059613c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059613e: call dword ptr [0x9bfc68] */ { u32 t = R32((u32)(0x9bfc68u)); r_esp -= 4; W32(r_esp, 0x596144u); call_ind(t); }
L_00596144:; BB(0x00596144);
    /* 00596144: mov ecx, edi */ r_ecx = r_edi;
    /* 00596146: call 0x5961d4 */ r_esp -= 4; W32(r_esp, 0x59614bu); f_005961d4();
    /* 0059614b: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 00596151: mov ecx, edi */ r_ecx = r_edi;
    /* 00596153: call dword ptr [eax*8 + 0x9bfc04] */ { u32 t = R32((u32)(r_eax*8+0x9bfc04u)); r_esp -= 4; W32(r_esp, 0x59615au); call_ind(t); }
    /* 0059615a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059615c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x596161u); f_0078730c();
    /* 00596161: mov ecx, edi */ r_ecx = r_edi;
    /* 00596163: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x596168u); f_007b6880();
    /* 00596168: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 0059616e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596170: je 0x59617d */ if (fZ) goto L_0059617d;
L_00596172:; BB(0x00596172);
    /* 00596172: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596175: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x59617au); f_006946a8();
    /* 0059617a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059617d:; BB(0x0059617d);
    /* 0059617d: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 00596183: call 0x599e74 */ r_esp -= 4; W32(r_esp, 0x596188u); f_00599e74();
    /* 00596188: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0059618b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059618d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059618e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059618f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596190: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596191: push 0x109 */ { u32 v = 0x109u; r_esp -= 4; W32(r_esp, v); }
    /* 00596196: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x59619bu); f_008144b0();
    /* 0059619b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059619e: mov ecx, edi */ r_ecx = r_edi;
    /* 005961a0: call 0x5961e4 */ r_esp -= 4; W32(r_esp, 0x5961a5u); f_005961e4();
    /* 005961a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005961a7: call 0x596248 */ r_esp -= 4; W32(r_esp, 0x5961acu); f_00596248();
    /* 005961ac: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005961b2: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005961b5: je 0x5961cf */ if (fZ) goto L_005961cf;
L_005961b7:; BB(0x005961b7);
    /* 005961b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005961b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005961bb: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005961c1: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005961c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005961c7: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5961ccu); f_00805608();
    /* 005961cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005961cf:; BB(0x005961cf);
    /* 005961cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005961d0: ret  */ FN_RET(0x00596104); r_esp += 4; return;
}

void f_005961d4(void) /* sub_5961D4 */
{
    FN_ENTER(0x005961d4);
    /* 005961d4: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 005961da: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005961dd: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005961e0: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005961e3: ret  */ FN_RET(0x005961d4); r_esp += 4; return;
}

void f_005961e4(void) /* sub_5961E4 */
{
    FN_ENTER(0x005961e4);
    /* 005961e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005961e5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005961e8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005961ea: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005961ed: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 005961f0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005961f3: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005961f6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005961fa: add ebp, 0x37c */ {  u32 a = r_ebp; u32 b = 0x37cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00596200: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00596204: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00596207: mov edx, ebp */ r_edx = r_ebp;
    /* 00596209: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59620eu); f_0082f9c4();
    /* 0059620e: fld dword ptr [0x9292bc] */ FPUSH(R_F32((u32)(0x9292bcu)));
    /* 00596214: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00596217: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00596219: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0059621d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00596221: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596223: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00596225: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00596227: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00596229: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059622b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059622e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596230: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00596234: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00596238: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0059623b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059623d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x596242u); f_0082ebac();
    /* 00596242: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596245: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596246: ret  */ FN_RET(0x005961e4); r_esp += 4; return;
}

void f_00596248(void) /* sub_596248 */
{
    FN_ENTER(0x00596248);
    /* 00596248: mov eax, dword ptr [ecx + 0x3f4] */ r_eax = R32((u32)(r_ecx+0x3f4u));
    /* 0059624e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00596250: jne 0x596261 */ if (!fZ) goto L_00596261;
L_00596252:; BB(0x00596252);
    /* 00596252: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 00596258: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0059625b: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059625e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00596261:; BB(0x00596261);
    /* 00596261: ret  */ FN_RET(0x00596248); r_esp += 4; return;
}

void f_00596264(void) /* sub_596264 */
{
    FN_ENTER(0x00596264);
    /* 00596264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596265: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00596266: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596269: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059626b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x596270u); f_004f7c84();
    /* 00596270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596272: jne 0x59634f */ if (!fZ) goto L_0059634f;
L_00596278:; BB(0x00596278);
    /* 00596278: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0059627e: fcomp dword ptr [0x9295b0] */ fx_compare(ST(0), R_F32((u32)(0x9295b0u))); FPOP();
    /* 00596284: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596286: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596287: ja 0x59628f */ if ((!fC&&!fZ)) goto L_0059628f;
L_00596289:; BB(0x00596289);
    /* 00596289: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059628c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059628d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059628e: ret  */ FN_RET(0x00596264); r_esp += 4; return;
L_0059628f:; BB(0x0059628f);
    /* 0059628f: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00596294: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00596296: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00596299: push dword ptr [0xa745d8] */ { u32 v = R32((u32)(0xa745d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059629f: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5962a2u); call_ind(t); }
    /* 005962a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005962a4: jne 0x5962ac */ if (!fZ) goto L_005962ac;
L_005962a6:; BB(0x005962a6);
    /* 005962a6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005962a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005962aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005962ab: ret  */ FN_RET(0x00596264); r_esp += 4; return;
L_005962ac:; BB(0x005962ac);
    /* 005962ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005962ae: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5962b3u); f_008173d0();
    /* 005962b3: mov ebx, eax */ r_ebx = r_eax;
    /* 005962b5: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 005962bb: fcom dword ptr [0x9295a8] */ fx_compare(ST(0), R_F32((u32)(0x9295a8u))); 
    /* 005962c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005962c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005962c4: jb 0x5962ca */ if (fC) goto L_005962ca;
L_005962c6:; BB(0x005962c6);
    /* 005962c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005962c8: jmp 0x5962cf */ goto L_005962cf;
L_005962ca:; BB(0x005962ca);
    /* 005962ca: call 0x596358 */ r_esp -= 4; W32(r_esp, 0x5962cfu); f_00596358();
L_005962cf:; BB(0x005962cf);
    /* 005962cf: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5962d4u); f_00578b38();
    /* 005962d4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5962d9u); f_0082d7b0();
    /* 005962d9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005962dd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005962e0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005962e4: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 005962e7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005962eb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005962ef: fadd dword ptr [ebp + 0x3ac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3acu));
    /* 005962f5: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 005962f8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005962fc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00596300: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x596305u); f_0082d838();
    /* 00596305: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00596308: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059630a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59630fu); f_0082d8bc();
    /* 0059630f: lea edx, [ebp + 0x3b0] */ r_edx = (u32)(r_ebp+0x3b0u);
    /* 00596315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00596317: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x59631cu); f_0083c0a0();
    /* 0059631c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059631d: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 00596323: call 0x599ef0 */ r_esp -= 4; W32(r_esp, 0x596328u); f_00599ef0();
    /* 00596328: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59632du); f_0082da80();
    /* 0059632d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x596332u); f_0082dab0();
    /* 00596332: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 00596338: fcomp dword ptr [0x9295a8] */ fx_compare(ST(0), R_F32((u32)(0x9295a8u))); FPOP();
    /* 0059633e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596340: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596341: jae 0x596348 */ if (!fC) goto L_00596348;
L_00596343:; BB(0x00596343);
    /* 00596343: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x596348u); f_005963d0();
L_00596348:; BB(0x00596348);
    /* 00596348: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059634a: call 0x5963f4 */ r_esp -= 4; W32(r_esp, 0x59634fu); f_005963f4();
L_0059634f:; BB(0x0059634f);
    /* 0059634f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596352: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596354: ret  */ FN_RET(0x00596264); r_esp += 4; return;
}

void f_00596358(void) /* sub_596358 */
{
    FN_ENTER(0x00596358);
    /* 00596358: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059635b: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 00596361: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00596366: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0059636c: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00596370: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596372: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 00596378: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0059637d: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00596380: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00596386: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 0059638c: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00596391: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00596396: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x59639bu); f_0082d6fc();
    /* 0059639b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0059639f: fadd dword ptr [0x9295a4] */ ST(0) = ST(0) + R_F32((u32)(0x9295a4u));
    /* 005963a5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005963a9: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005963b1: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005963b5: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005963bd: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005963c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005963c6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5963cbu); f_0082d710();
    /* 005963cb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005963ce: ret  */ FN_RET(0x00596358); r_esp += 4; return;
}

void f_005963d0(void) /* sub_5963D0 */
{
    FN_ENTER(0x005963d0);
    /* 005963d0: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005963d5: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 005963db: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 005963e1: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005963e6: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 005963ec: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 005963f2: ret  */ FN_RET(0x005963d0); r_esp += 4; return;
}

void f_005963f4(void) /* sub_5963F4 */
{
    FN_ENTER(0x005963f4);
    /* 005963f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005963f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005963f6: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005963f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005963fb: movzx eax, byte ptr [0xa74528] */ r_eax = (u32)R8((u32)(0xa74528u));
    /* 00596402: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00596404: jne 0x596418 */ if (!fZ) goto L_00596418;
L_00596406:; BB(0x00596406);
    /* 00596406: mov dword ptr [0xa7452c], 0x3fa00000 */ W32((u32)(0xa7452cu), 0x3fa00000u);
    /* 00596410: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596413: mov byte ptr [0xa74528], al */ W8((u32)(0xa74528u), (u8)r_eax);
L_00596418:; BB(0x00596418);
    /* 00596418: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059641a: jne 0x59642e */ if (!fZ) goto L_0059642e;
L_0059641c:; BB(0x0059641c);
    /* 0059641c: mov dword ptr [0xa74530], 0x3e5b6db7 */ W32((u32)(0xa74530u), 0x3e5b6db7u);
    /* 00596426: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596429: mov byte ptr [0xa74528], al */ W8((u32)(0xa74528u), (u8)r_eax);
L_0059642e:; BB(0x0059642e);
    /* 0059642e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00596430: jne 0x596446 */ if (!fZ) goto L_00596446;
L_00596432:; BB(0x00596432);
    /* 00596432: mov dword ptr [0xa74534], 0xbf900000 */ W32((u32)(0xa74534u), 0xbf900000u);
    /* 0059643c: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596441: mov byte ptr [0xa74528], al */ W8((u32)(0xa74528u), (u8)r_eax);
L_00596446:; BB(0x00596446);
    /* 00596446: fld dword ptr [0x9292c4] */ FPUSH(R_F32((u32)(0x9292c4u)));
    /* 0059644c: fmul dword ptr [ebx + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x3a8u));
    /* 00596452: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00596455: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00596458: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0059645c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059645f: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00596462: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00596466: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059646a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059646d: lea edx, [ebx + 0x37c] */ r_edx = (u32)(r_ebx+0x37cu);
    /* 00596473: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x596478u); f_0082f9c4();
    /* 00596478: fld dword ptr [0x929590] */ FPUSH(R_F32((u32)(0x929590u)));
    /* 0059647e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00596481: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00596483: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00596487: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0059648d: mov edi, dword ptr [ebx + 0x380] */ r_edi = R32((u32)(r_ebx+0x380u));
    /* 00596493: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00596497: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596499: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0059649b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0059649d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059649f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005964a1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005964a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005964a6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005964aa: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005964ae: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005964b2: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 005964b8: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005964bc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005964c0: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005964c4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005964c7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5964ccu); f_0082ebac();
    /* 005964cc: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005964d0: fadd dword ptr [0xa74534] */ ST(0) = ST(0) + R_F32((u32)(0xa74534u));
    /* 005964d6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005964d9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005964dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005964df: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005964e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005964e5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005964e7: fmul qword ptr [0x9293d8] */ ST(0) = ST(0) * R_F64((u32)(0x9293d8u));
    /* 005964ed: fdiv qword ptr [0x9293d0] */ ST(0) = ST(0) / R_F64((u32)(0x9293d0u));
    /* 005964f3: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 005964f7: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 005964fc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596501: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00596505: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 00596509: fistp dword ptr [esp + 0x44] */ W32((u32)(r_esp+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059650d: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00596511: mov eax, dword ptr [0xa7452c] */ r_eax = R32((u32)(0xa7452cu));
    /* 00596516: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0059651a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0059651e: mov eax, dword ptr [0xa74530] */ r_eax = R32((u32)(0xa74530u));
    /* 00596523: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00596527: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059652a: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x59652fu); f_0083173c();
    /* 0059652f: fld dword ptr [0xa7452c] */ FPUSH(R_F32((u32)(0xa7452cu)));
    /* 00596535: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00596537: fdiv dword ptr [0x92958c] */ ST(0) = ST(0) / R_F32((u32)(0x92958cu));
    /* 0059653d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00596541: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00596545: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596547: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00596549: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059654b: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0059654f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596550: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596552: jb 0x596556 */ if (fC) goto L_00596556;
L_00596554:; BB(0x00596554);
    /* 00596554: fst st(1) */ ST(1) = ST(0);
L_00596556:; BB(0x00596556);
    /* 00596556: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596558: fld dword ptr [0x9292c0] */ FPUSH(R_F32((u32)(0x9292c0u)));
    /* 0059655e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596560: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00596562: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596564: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596565: jb 0x59656e */ if (fC) goto L_0059656e;
L_00596567:; BB(0x00596567);
    /* 00596567: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00596569: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059656b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059656c: jae 0x596578 */ if (!fC) goto L_00596578;
L_0059656e:; BB(0x0059656e);
    /* 0059656e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596570: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596572: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596576: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596577: ret  */ FN_RET(0x005963f4); r_esp += 4; return;
L_00596578:; BB(0x00596578);
    /* 00596578: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0059657a: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00596580: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00596585: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00596589: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0059658f: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 00596594: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 00596599: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 0059659e: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005965a3: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005965a6: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005965ac: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005965b1: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x5965b6u); f_0082d6fc();
    /* 005965b6: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 005965ba: fadd dword ptr [0x929588] */ ST(0) = ST(0) + R_F32((u32)(0x929588u));
    /* 005965c0: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005965c4: mov dword ptr [esp + 0x30], 0xbf800000 */ W32((u32)(r_esp+0x30u), 0xbf800000u);
    /* 005965cc: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 005965d0: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 005965d8: mov dword ptr [esp + 0x38], 0x3f800000 */ W32((u32)(r_esp+0x38u), 0x3f800000u);
    /* 005965e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005965e1: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5965e6u); f_0082d710();
    /* 005965e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005965e9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5965eeu); f_0082d7b0();
    /* 005965ee: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005965f2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5965f7u); f_0082d838();
    /* 005965f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005965f9: mov edx, edi */ r_edx = r_edi;
    /* 005965fb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x596600u); f_0082d8bc();
    /* 00596600: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00596604: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00596606: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x59660bu); f_0083c0a0();
    /* 0059660b: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 00596611: mov edi, dword ptr [eax*4 + 0x9bfbd0] */ r_edi = R32((u32)(r_eax*4+0x9bfbd0u));
    /* 00596618: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596619: mov ecx, dword ptr [ebx + 0x388] */ r_ecx = R32((u32)(r_ebx+0x388u));
    /* 0059661f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x596624u); f_005b8624();
    /* 00596624: mov ecx, eax */ r_ecx = r_eax;
    /* 00596626: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59662bu); f_00829cc8();
    /* 0059662b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059662c: mov ecx, dword ptr [ebx + 0x388] */ r_ecx = R32((u32)(r_ebx+0x388u));
    /* 00596632: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x596637u); f_005b8610();
    /* 00596637: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596638: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x59663du); f_0082e1e8();
    /* 0059663d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059663e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x596643u); f_0082da80();
    /* 00596643: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x596648u); f_005963d0();
    /* 00596648: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059664b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059664c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059664d: ret  */ FN_RET(0x005963f4); r_esp += 4; return;
}

void f_00596650(void) /* sub_596650 */
{
    FN_ENTER(0x00596650);
    /* 00596650: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00596651: mov esi, ecx */ r_esi = r_ecx;
    /* 00596653: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00596659: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059665c: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00596662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00596664: jle 0x596668 */ if ((fZ||fS!=fO)) goto L_00596668;
L_00596666:; BB(0x00596666);
    /* 00596666: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00596667: ret  */ FN_RET(0x00596650); r_esp += 4; return;
L_00596668:; BB(0x00596668);
    /* 00596668: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059666a: push dword ptr [0xa745dc] */ { u32 v = R32((u32)(0xa745dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00596670: mov ecx, esi */ r_ecx = r_esi;
    /* 00596672: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x596677u); f_007714cc();
    /* 00596677: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0059667a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059667f: jne 0x5966b6 */ if (!fZ) goto L_005966b6;
L_00596681:; BB(0x00596681);
    /* 00596681: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00596687: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059668a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059668d: jl 0x5966a7 */ if ((fS!=fO)) goto L_005966a7;
L_0059668f:; BB(0x0059668f);
    /* 0059668f: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00596692: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00596695: mov dword ptr [esi + 0x3d0], 5 */ W32((u32)(r_esi+0x3d0u), 0x5u);
    /* 0059669f: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005966a2: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 005966a5: jmp 0x5966ad */ goto L_005966ad;
L_005966a7:; BB(0x005966a7);
    /* 005966a7: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
L_005966ad:; BB(0x005966ad);
    /* 005966ad: mov ecx, esi */ r_ecx = r_esi;
    /* 005966af: call 0x5966cc */ r_esp -= 4; W32(r_esp, 0x5966b4u); f_005966cc();
    /* 005966b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005966b5: ret  */ FN_RET(0x00596650); r_esp += 4; return;
L_005966b6:; BB(0x005966b6);
    /* 005966b6: mov dword ptr [esi + 0x38c], 1 */ W32((u32)(r_esi+0x38cu), 0x1u);
    /* 005966c0: mov ecx, esi */ r_ecx = r_esi;
    /* 005966c2: call dword ptr [0x9bfc08] */ { u32 t = R32((u32)(0x9bfc08u)); r_esp -= 4; W32(r_esp, 0x5966c8u); call_ind(t); }
    /* 005966c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005966c9: ret  */ FN_RET(0x00596650); r_esp += 4; return;
}

void f_005966cc(void) /* sub_5966CC */
{
    FN_ENTER(0x005966cc);
    /* 005966cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005966cd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005966d0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005966d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005966d4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5966d9u); f_007751b0();
    /* 005966d9: fmul dword ptr [0x92957c] */ ST(0) = ST(0) * R_F32((u32)(0x92957cu));
    /* 005966df: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005966e2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005966e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005966eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005966ef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005966f3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005966f7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005966fa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005966fe: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00596701: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00596707: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059670a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059670b: ret  */ FN_RET(0x005966cc); r_esp += 4; return;
}

void f_0059670c(void) /* sub_59670C */
{
    FN_ENTER(0x0059670c);
    /* 0059670c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059670d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059670e: mov edi, ecx */ r_edi = r_ecx;
    /* 00596710: movzx eax, byte ptr [0xa74538] */ r_eax = (u32)R8((u32)(0xa74538u));
    /* 00596717: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00596719: jne 0x59672f */ if (!fZ) goto L_0059672f;
L_0059671b:; BB(0x0059671b);
    /* 0059671b: mov dword ptr [0xa7453c], 0x3d088889 */ W32((u32)(0xa7453cu), 0x3d088889u);
    /* 00596725: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059672a: mov byte ptr [0xa74538], al */ W8((u32)(0xa74538u), (u8)r_eax);
L_0059672f:; BB(0x0059672f);
    /* 0059672f: fld dword ptr [0x929574] */ FPUSH(R_F32((u32)(0x929574u)));
    /* 00596735: fld dword ptr [0x929564] */ FPUSH(R_F32((u32)(0x929564u)));
    /* 0059673b: fld dword ptr [0x929570] */ FPUSH(R_F32((u32)(0x929570u)));
    /* 00596741: fld dword ptr [0x929558] */ FPUSH(R_F32((u32)(0x929558u)));
    /* 00596747: fld dword ptr [edi + 0x3a0] */ FPUSH(R_F32((u32)(r_edi+0x3a0u)));
    /* 0059674d: fcom dword ptr [0x9292d0] */ fx_compare(ST(0), R_F32((u32)(0x9292d0u))); 
    /* 00596753: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596755: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00596757: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00596759: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0059675c: fld dword ptr [0x929574] */ FPUSH(R_F32((u32)(0x929574u)));
    /* 00596762: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596764: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00596766: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00596768: fadd dword ptr [0x929560] */ ST(0) = ST(0) + R_F32((u32)(0x929560u));
    /* 0059676e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00596770: fstp dword ptr [edi + 0x3b0] */ W_F32((u32)(r_edi+0x3b0u), ST(0)); FPOP();
    /* 00596776: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596778: fstp dword ptr [edi + 0x3b8] */ W_F32((u32)(r_edi+0x3b8u), ST(0)); FPOP();
    /* 0059677e: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00596780: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00596782: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596784: fstp dword ptr [edi + 0x3ac] */ W_F32((u32)(r_edi+0x3acu), ST(0)); FPOP();
    /* 0059678a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0059678c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059678e: fadd dword ptr [0x92955c] */ ST(0) = ST(0) + R_F32((u32)(0x92955cu));
    /* 00596794: fstp dword ptr [edi + 0x3b4] */ W_F32((u32)(r_edi+0x3b4u), ST(0)); FPOP();
    /* 0059679a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059679b: jbe 0x5967a8 */ if ((fC||fZ)) goto L_005967a8;
L_0059679d:; BB(0x0059679d);
    /* 0059679d: fld dword ptr [0x92956c] */ FPUSH(R_F32((u32)(0x92956cu)));
    /* 005967a3: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 005967a5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_005967a8:; BB(0x005967a8);
    /* 005967a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005967aa: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 005967b0: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005967b3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5967b8u); f_0082dcbc();
    /* 005967b8: fmul dword ptr [0x9292cc] */ ST(0) = ST(0) * R_F32((u32)(0x9292ccu));
    /* 005967be: fld dword ptr [0x929574] */ FPUSH(R_F32((u32)(0x929574u)));
    /* 005967c4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005967c7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005967ca: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005967cc: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005967ce: fmul dword ptr [edi + 0x3b0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x3b0u));
    /* 005967d4: add dword ptr [edi + 0x398], 1 */ { u32 ad = (u32)(r_edi+0x398u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005967db: fstp dword ptr [edi + 0x3b0] */ W_F32((u32)(r_edi+0x3b0u), ST(0)); FPOP();
    /* 005967e1: fld dword ptr [edi + 0x3a0] */ FPUSH(R_F32((u32)(r_edi+0x3a0u)));
    /* 005967e7: fcom dword ptr [0x9292c8] */ fx_compare(ST(0), R_F32((u32)(0x9292c8u))); 
    /* 005967ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005967ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005967f1: fchs  */ ST(0) = -ST(0);
    /* 005967f3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005967f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005967f7: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 005967f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005967fb: fmul dword ptr [edi + 0x3b8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x3b8u));
    /* 00596801: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596802: fstp dword ptr [edi + 0x3b8] */ W_F32((u32)(r_edi+0x3b8u), ST(0)); FPOP();
    /* 00596808: jb 0x596817 */ if (fC) goto L_00596817;
L_0059680a:; BB(0x0059680a);
    /* 0059680a: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0059680f: mov dword ptr [edi + 0x3a8], eax */ W32((u32)(r_edi+0x3a8u), r_eax);
    /* 00596815: jmp 0x596825 */ goto L_00596825;
L_00596817:; BB(0x00596817);
    /* 00596817: fld dword ptr [0x929568] */ FPUSH(R_F32((u32)(0x929568u)));
    /* 0059681d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0059681f: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
L_00596825:; BB(0x00596825);
    /* 00596825: fld dword ptr [0xa7453c] */ FPUSH(R_F32((u32)(0xa7453cu)));
    /* 0059682b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059682d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059682f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596831: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596833: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596835: fstp dword ptr [edi + 0x3a0] */ W_F32((u32)(r_edi+0x3a0u), ST(0)); FPOP();
    /* 0059683b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059683c: jbe 0x59687e */ if ((fC||fZ)) goto L_0059687e;
L_0059683e:; BB(0x0059683e);
    /* 0059683e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596840: push dword ptr [0xa745dc] */ { u32 v = R32((u32)(0xa745dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00596846: mov ecx, edi */ r_ecx = r_edi;
    /* 00596848: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x59684du); f_007714cc();
    /* 0059684d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00596850: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596855: je 0x59686c */ if (fZ) goto L_0059686c;
L_00596857:; BB(0x00596857);
    /* 00596857: mov dword ptr [edi + 0x38c], 3 */ W32((u32)(r_edi+0x38cu), 0x3u);
    /* 00596861: mov ecx, edi */ r_ecx = r_edi;
    /* 00596863: call dword ptr [0x9bfc18] */ { u32 t = R32((u32)(0x9bfc18u)); r_esp -= 4; W32(r_esp, 0x596869u); call_ind(t); }
    /* 00596869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059686a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059686b: ret  */ FN_RET(0x0059670c); r_esp += 4; return;
L_0059686c:; BB(0x0059686c);
    /* 0059686c: mov dword ptr [edi + 0x38c], 2 */ W32((u32)(r_edi+0x38cu), 0x2u);
    /* 00596876: mov ecx, edi */ r_ecx = r_edi;
    /* 00596878: call dword ptr [0x9bfc10] */ { u32 t = R32((u32)(0x9bfc10u)); r_esp -= 4; W32(r_esp, 0x59687eu); call_ind(t); }
L_0059687e:; BB(0x0059687e);
    /* 0059687e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059687f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596880: ret  */ FN_RET(0x0059670c); r_esp += 4; return;
}

void f_00596884(void) /* sub_596884 */
{
    FN_ENTER(0x00596884);
    /* 00596884: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596885: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00596886: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00596888: movzx eax, byte ptr [0xa74540] */ r_eax = (u32)R8((u32)(0xa74540u));
    /* 0059688f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00596891: jne 0x5968a7 */ if (!fZ) goto L_005968a7;
L_00596893:; BB(0x00596893);
    /* 00596893: mov dword ptr [0xa74544], 0xbc360b61 */ W32((u32)(0xa74544u), 0xbc360b61u);
    /* 0059689d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005968a2: mov byte ptr [0xa74540], al */ W8((u32)(0xa74540u), (u8)r_eax);
L_005968a7:; BB(0x005968a7);
    /* 005968a7: fld dword ptr [0x929550] */ FPUSH(R_F32((u32)(0x929550u)));
    /* 005968ad: fld dword ptr [0x929564] */ FPUSH(R_F32((u32)(0x929564u)));
    /* 005968b3: fld dword ptr [0x92954c] */ FPUSH(R_F32((u32)(0x92954cu)));
    /* 005968b9: fld dword ptr [0x929558] */ FPUSH(R_F32((u32)(0x929558u)));
    /* 005968bf: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 005968c5: fcom dword ptr [0x9292dc] */ fx_compare(ST(0), R_F32((u32)(0x9292dcu))); 
    /* 005968cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005968cd: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005968cf: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005968d1: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005968d4: fld dword ptr [0x929550] */ FPUSH(R_F32((u32)(0x929550u)));
    /* 005968da: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005968dc: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005968de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005968e0: fadd dword ptr [0x929560] */ ST(0) = ST(0) + R_F32((u32)(0x929560u));
    /* 005968e6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005968e8: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 005968ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005968f0: fstp dword ptr [ebp + 0x3b8] */ W_F32((u32)(r_ebp+0x3b8u), ST(0)); FPOP();
    /* 005968f6: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 005968f8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005968fa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005968fc: fstp dword ptr [ebp + 0x3ac] */ W_F32((u32)(r_ebp+0x3acu), ST(0)); FPOP();
    /* 00596902: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00596904: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596906: fadd dword ptr [0x92955c] */ ST(0) = ST(0) + R_F32((u32)(0x92955cu));
    /* 0059690c: fstp dword ptr [ebp + 0x3b4] */ W_F32((u32)(r_ebp+0x3b4u), ST(0)); FPOP();
    /* 00596912: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596913: jbe 0x596920 */ if ((fC||fZ)) goto L_00596920;
L_00596915:; BB(0x00596915);
    /* 00596915: fld dword ptr [0x929548] */ FPUSH(R_F32((u32)(0x929548u)));
    /* 0059691b: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 0059691d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00596920:; BB(0x00596920);
    /* 00596920: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596922: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 00596928: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0059692b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x596930u); f_0082dcbc();
    /* 00596930: fmul dword ptr [0x9292d8] */ ST(0) = ST(0) * R_F32((u32)(0x9292d8u));
    /* 00596936: fld dword ptr [0x929550] */ FPUSH(R_F32((u32)(0x929550u)));
    /* 0059693c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059693f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00596942: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00596944: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00596946: fmul dword ptr [ebp + 0x3b0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3b0u));
    /* 0059694c: add dword ptr [ebp + 0x398], 1 */ { u32 ad = (u32)(r_ebp+0x398u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00596953: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 00596959: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 0059695f: fcom dword ptr [0x9292d4] */ fx_compare(ST(0), R_F32((u32)(0x9292d4u))); 
    /* 00596965: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596967: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596969: fchs  */ ST(0) = -ST(0);
    /* 0059696b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0059696d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059696f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00596971: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596973: fmul dword ptr [ebp + 0x3b8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3b8u));
    /* 00596979: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059697a: fstp dword ptr [ebp + 0x3b8] */ W_F32((u32)(r_ebp+0x3b8u), ST(0)); FPOP();
    /* 00596980: jb 0x59698f */ if (fC) goto L_0059698f;
L_00596982:; BB(0x00596982);
    /* 00596982: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00596987: mov dword ptr [ebp + 0x3a8], eax */ W32((u32)(r_ebp+0x3a8u), r_eax);
    /* 0059698d: jmp 0x59699d */ goto L_0059699d;
L_0059698f:; BB(0x0059698f);
    /* 0059698f: fld dword ptr [0x929544] */ FPUSH(R_F32((u32)(0x929544u)));
    /* 00596995: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00596997: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
L_0059699d:; BB(0x0059699d);
    /* 0059699d: fld dword ptr [0xa74544] */ FPUSH(R_F32((u32)(0xa74544u)));
    /* 005969a3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005969a5: fcom dword ptr [0x929540] */ fx_compare(ST(0), R_F32((u32)(0x929540u))); 
    /* 005969ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005969ad: fstp dword ptr [ebp + 0x3a0] */ W_F32((u32)(r_ebp+0x3a0u), ST(0)); FPOP();
    /* 005969b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005969b4: jae 0x5969c8 */ if (!fC) goto L_005969c8;
L_005969b6:; BB(0x005969b6);
    /* 005969b6: mov dword ptr [ebp + 0x38c], 0 */ W32((u32)(r_ebp+0x38cu), 0x0u);
    /* 005969c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005969c2: call dword ptr [0x9bfc00] */ { u32 t = R32((u32)(0x9bfc00u)); r_esp -= 4; W32(r_esp, 0x5969c8u); call_ind(t); }
L_005969c8:; BB(0x005969c8);
    /* 005969c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005969c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005969ca: ret  */ FN_RET(0x00596884); r_esp += 4; return;
}

void f_005969cc(void) /* sub_5969CC */
{
    FN_ENTER(0x005969cc);
    /* 005969cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005969cd: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005969d0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005969d2: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005969d5: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 005969db: fld dword ptr [0x92953c] */ FPUSH(R_F32((u32)(0x92953cu)));
    /* 005969e1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005969e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005969e5: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005969eb: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 005969ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005969ef: jb 0x596a22 */ if (fC) goto L_00596a22;
L_005969f1:; BB(0x005969f1);
    /* 005969f1: fld dword ptr [ebx + 0x3bc] */ FPUSH(R_F32((u32)(r_ebx+0x3bcu)));
    /* 005969f7: fsub dword ptr [0x9292e8] */ ST(0) = ST(0) - R_F32((u32)(0x9292e8u));
    /* 005969fd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005969ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596a01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596a03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596a05: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596a06: jae 0x596a1a */ if (!fC) goto L_00596a1a;
L_00596a08:; BB(0x00596a08);
    /* 00596a08: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596a0a: fld dword ptr [0x92953c] */ FPUSH(R_F32((u32)(0x92953cu)));
    /* 00596a10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00596a12: mov dword ptr [ebx + 0x3bc], eax */ W32((u32)(r_ebx+0x3bcu), r_eax);
    /* 00596a18: jmp 0x596a89 */ goto L_00596a89;
L_00596a1a:; BB(0x00596a1a);
    /* 00596a1a: fst dword ptr [ebx + 0x3bc] */ W_F32((u32)(r_ebx+0x3bcu), ST(0));
    /* 00596a20: jmp 0x596a89 */ goto L_00596a89;
L_00596a22:; BB(0x00596a22);
    /* 00596a22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596a24: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596a26: mov ecx, dword ptr [ebx + 0x3a4] */ r_ecx = R32((u32)(r_ebx+0x3a4u));
    /* 00596a2c: add ecx, 0xc00 */ {  u32 a = r_ecx; u32 b = 0xc00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00596a32: mov dword ptr [ebx + 0x3a4], ecx */ W32((u32)(r_ebx+0x3a4u), r_ecx);
    /* 00596a38: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x596a3du); f_0082dcbc();
    /* 00596a3d: fld dword ptr [0x929538] */ FPUSH(R_F32((u32)(0x929538u)));
    /* 00596a43: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00596a45: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00596a47: fmul dword ptr [0x9292e8] */ ST(0) = ST(0) * R_F32((u32)(0x9292e8u));
    /* 00596a4d: fadd dword ptr [ebx + 0x3bc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3bcu));
    /* 00596a53: fcom dword ptr [0x9292e4] */ fx_compare(ST(0), R_F32((u32)(0x9292e4u))); 
    /* 00596a59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596a5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596a5c: jbe 0x596a7b */ if ((fC||fZ)) goto L_00596a7b;
L_00596a5e:; BB(0x00596a5e);
    /* 00596a5e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596a60: fld dword ptr [0x9292e4] */ FPUSH(R_F32((u32)(0x9292e4u)));
    /* 00596a66: mov eax, 0x40200000 */ r_eax = 0x40200000u;
    /* 00596a6b: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 00596a71: mov dword ptr [ebx + 0x3bc], eax */ W32((u32)(r_ebx+0x3bcu), r_eax);
    /* 00596a77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596a79: jmp 0x596a89 */ goto L_00596a89;
L_00596a7b:; BB(0x00596a7b);
    /* 00596a7b: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 00596a81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596a83: fst dword ptr [ebx + 0x3bc] */ W_F32((u32)(r_ebx+0x3bcu), ST(0));
L_00596a89:; BB(0x00596a89);
    /* 00596a89: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00596a8c: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00596a8f: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00596a92: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00596a95: fld dword ptr [ebx + 0x3c0] */ FPUSH(R_F32((u32)(r_ebx+0x3c0u)));
    /* 00596a9b: fld dword ptr [ebx + 0x3c8] */ FPUSH(R_F32((u32)(r_ebx+0x3c8u)));
    /* 00596aa1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00596aa5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00596aa7: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00596aa9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00596aab: fstp dword ptr [ebx + 0x3a0] */ W_F32((u32)(r_ebx+0x3a0u), ST(0)); FPOP();
    /* 00596ab1: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00596ab4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00596ab8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00596abb: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00596abe: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00596ac1: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00596ac4: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00596ac7: mov eax, 1 */ r_eax = 0x1u;
    /* 00596acc: mov esi, eax */ r_esi = r_eax;
    /* 00596ace: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596ad0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00596ad2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00596ad4: jmp 0x596adc */ goto L_00596adc;
L_00596ad6:; BB(0x00596ad6);
    /* 00596ad6: fld dword ptr [ebx + 0x3bc] */ FPUSH(R_F32((u32)(r_ebx+0x3bcu)));
L_00596adc:; BB(0x00596adc);
    /* 00596adc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00596ade: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00596ae0: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00596ae2: fld dword ptr [ebx + 0x3c4] */ FPUSH(R_F32((u32)(r_ebx+0x3c4u)));
    /* 00596ae8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00596aea: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00596aec: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00596af0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00596af2: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00596af6: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00596af9: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00596afb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596afd: fst dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0));
    /* 00596b00: fadd dword ptr [0x929534] */ ST(0) = ST(0) + R_F32((u32)(0x929534u));
    /* 00596b06: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00596b0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00596b0c: fst dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0));
    /* 00596b0f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00596b13: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00596b17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00596b19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596b1c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x596b21u); f_007b4c58();
    /* 00596b21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596b23: je 0x596b53 */ if (fZ) goto L_00596b53;
L_00596b25:; BB(0x00596b25);
    /* 00596b25: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00596b29: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00596b2c: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00596b2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596b30: fmul dword ptr [0x9292e0] */ ST(0) = ST(0) * R_F32((u32)(0x9292e0u));
    /* 00596b36: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00596b38: lea edi, [ebx + 0x44] */ r_edi = (u32)(r_ebx+0x44u);
    /* 00596b3b: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00596b3e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00596b41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596b42: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596b43: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x596b48u); f_00780d3c();
    /* 00596b48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596b4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596b4d: je 0x596bd3 */ if (fZ) goto L_00596bd3;
L_00596b53:; BB(0x00596b53);
    /* 00596b53: mov edi, esi */ r_edi = r_esi;
    /* 00596b55: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00596b58: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596b5e: je 0x596b62 */ if (fZ) goto L_00596b62;
L_00596b60:; BB(0x00596b60);
    /* 00596b60: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_00596b62:; BB(0x00596b62);
    /* 00596b62: mov ecx, edi */ r_ecx = r_edi;
    /* 00596b64: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x596b69u); f_0082dcbc();
    /* 00596b69: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00596b6d: mov ecx, edi */ r_ecx = r_edi;
    /* 00596b6f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x596b74u); f_0082ddd8();
    /* 00596b74: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00596b78: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00596b7c: fld dword ptr [ebx + 0x3c8] */ FPUSH(R_F32((u32)(r_ebx+0x3c8u)));
    /* 00596b82: fld dword ptr [ebx + 0x3c0] */ FPUSH(R_F32((u32)(r_ebx+0x3c0u)));
    /* 00596b88: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00596b8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596b8c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00596b8e: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00596b91: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00596b94: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 00596b97: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596b99: fchs  */ ST(0) = -ST(0);
    /* 00596b9b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00596b9d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00596b9f: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 00596ba2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00596ba4: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00596ba6: fst dword ptr [ebx + 0x3c0] */ W_F32((u32)(r_ebx+0x3c0u), ST(0));
    /* 00596bac: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00596bae: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00596bb0: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 00596bb3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00596bb5: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00596bb9: fstp dword ptr [ebx + 0x3c8] */ W_F32((u32)(r_ebx+0x3c8u), ST(0)); FPOP();
    /* 00596bbf: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 00596bc2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00596bc5: cmp esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596bc8: jl 0x596ad6 */ if ((fS!=fO)) goto L_00596ad6;
L_00596bce:; BB(0x00596bce);
    /* 00596bce: jmp 0x596c5d */ goto L_00596c5d;
L_00596bd3:; BB(0x00596bd3);
    /* 00596bd3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00596bd7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00596bda:; BB(0x00596bda);
    /* 00596bda: fld dword ptr [0x92953c] */ FPUSH(R_F32((u32)(0x92953cu)));
    /* 00596be0: fcom dword ptr [ebx + 0x3a0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3a0u))); 
    /* 00596be6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596be8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596be9: jb 0x596bf6 */ if (fC) goto L_00596bf6;
L_00596beb:; BB(0x00596beb);
    /* 00596beb: fcom dword ptr [ebx + 0x3bc] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3bcu))); 
    /* 00596bf1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596bf3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596bf4: je 0x596bfd */ if (fZ) goto L_00596bfd;
L_00596bf6:; BB(0x00596bf6);
    /* 00596bf6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596bf8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596bfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596bfc: ret  */ FN_RET(0x005969cc); r_esp += 4; return;
L_00596bfd:; BB(0x00596bfd);
    /* 00596bfd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596bff: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00596c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596c04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00596c06: push dword ptr [0xa745e0] */ { u32 v = R32((u32)(0xa745e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00596c0c: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x596c11u); f_007714cc();
    /* 00596c11: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00596c14: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596c19: je 0x596c46 */ if (fZ) goto L_00596c46;
L_00596c1b:; BB(0x00596c1b);
    /* 00596c1b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00596c1f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x596c24u); f_0083173c();
    /* 00596c24: fcomp dword ptr [0xa745e4] */ fx_compare(ST(0), R_F32((u32)(0xa745e4u))); FPOP();
    /* 00596c2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596c2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596c2d: jbe 0x596c46 */ if ((fC||fZ)) goto L_00596c46;
L_00596c2f:; BB(0x00596c2f);
    /* 00596c2f: mov dword ptr [ebx + 0x38c], 4 */ W32((u32)(r_ebx+0x38cu), 0x4u);
    /* 00596c39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00596c3b: call dword ptr [0x9bfc20] */ { u32 t = R32((u32)(0x9bfc20u)); r_esp -= 4; W32(r_esp, 0x596c41u); call_ind(t); }
    /* 00596c41: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596c44: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596c45: ret  */ FN_RET(0x005969cc); r_esp += 4; return;
L_00596c46:; BB(0x00596c46);
    /* 00596c46: mov dword ptr [ebx + 0x38c], 3 */ W32((u32)(r_ebx+0x38cu), 0x3u);
    /* 00596c50: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00596c52: call dword ptr [0x9bfc18] */ { u32 t = R32((u32)(0x9bfc18u)); r_esp -= 4; W32(r_esp, 0x596c58u); call_ind(t); }
    /* 00596c58: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596c5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596c5c: ret  */ FN_RET(0x005969cc); r_esp += 4; return;
L_00596c5d:; BB(0x00596c5d);
    /* 00596c5d: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00596c5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596c61: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00596c63: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596c65: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00596c69: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00596c6c: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00596c6f: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00596c72: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 00596c75: jmp 0x596bda */ goto L_00596bda;
}

void f_00596c7c(void) /* sub_596C7C */
{
    FN_ENTER(0x00596c7c);
    /* 00596c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596c7d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00596c7f: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 00596c85: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00596c88: mov dword ptr [ebp + 0x39c], eax */ W32((u32)(r_ebp+0x39cu), r_eax);
    /* 00596c8e: jne 0x596ca4 */ if (!fZ) goto L_00596ca4;
L_00596c90:; BB(0x00596c90);
    /* 00596c90: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 00596c95: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 00596c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596c9c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x596ca1u); f_0050b510();
    /* 00596ca1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00596ca4:; BB(0x00596ca4);
    /* 00596ca4: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 00596caa: call 0x599e2c */ r_esp -= 4; W32(r_esp, 0x596cafu); f_00599e2c();
    /* 00596caf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00596cb2: je 0x596cb6 */ if (fZ) goto L_00596cb6;
L_00596cb4:; BB(0x00596cb4);
    /* 00596cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596cb5: ret  */ FN_RET(0x00596c7c); r_esp += 4; return;
L_00596cb6:; BB(0x00596cb6);
    /* 00596cb6: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00596cb9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00596cbb: je 0x596cd1 */ if (fZ) goto L_00596cd1;
L_00596cbd:; BB(0x00596cbd);
    /* 00596cbd: mov dword ptr [ebp + 0x38c], 7 */ W32((u32)(r_ebp+0x38cu), 0x7u);
    /* 00596cc7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00596cc9: call dword ptr [0x9bfc38] */ { u32 t = R32((u32)(0x9bfc38u)); r_esp -= 4; W32(r_esp, 0x596ccfu); call_ind(t); }
    /* 00596ccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596cd0: ret  */ FN_RET(0x00596c7c); r_esp += 4; return;
L_00596cd1:; BB(0x00596cd1);
    /* 00596cd1: mov dword ptr [ebp + 0x38c], 6 */ W32((u32)(r_ebp+0x38cu), 0x6u);
    /* 00596cdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00596cdd: call dword ptr [0x9bfc30] */ { u32 t = R32((u32)(0x9bfc30u)); r_esp -= 4; W32(r_esp, 0x596ce3u); call_ind(t); }
    /* 00596ce3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596ce4: ret  */ FN_RET(0x00596c7c); r_esp += 4; return;
}

void f_00596ce8(void) /* sub_596CE8 */
{
    FN_ENTER(0x00596ce8);
    /* 00596ce8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00596ce9: mov esi, ecx */ r_esi = r_ecx;
    /* 00596ceb: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00596cf1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00596cf4: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 00596cfa: jne 0x596d10 */ if (!fZ) goto L_00596d10;
L_00596cfc:; BB(0x00596cfc);
    /* 00596cfc: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 00596d01: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00596d07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596d08: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x596d0du); f_0050b510();
    /* 00596d0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00596d10:; BB(0x00596d10);
    /* 00596d10: mov ecx, dword ptr [esi + 0x390] */ r_ecx = R32((u32)(r_esi+0x390u));
    /* 00596d16: call 0x599e2c */ r_esp -= 4; W32(r_esp, 0x596d1bu); f_00599e2c();
    /* 00596d1b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00596d1e: je 0x596d22 */ if (fZ) goto L_00596d22;
L_00596d20:; BB(0x00596d20);
    /* 00596d20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00596d21: ret  */ FN_RET(0x00596ce8); r_esp += 4; return;
L_00596d22:; BB(0x00596d22);
    /* 00596d22: mov dword ptr [esi + 0x38c], 3 */ W32((u32)(r_esi+0x38cu), 0x3u);
    /* 00596d2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00596d2e: call dword ptr [0x9bfc18] */ { u32 t = R32((u32)(0x9bfc18u)); r_esp -= 4; W32(r_esp, 0x596d34u); call_ind(t); }
    /* 00596d34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00596d35: ret  */ FN_RET(0x00596ce8); r_esp += 4; return;
}

void f_00596d38(void) /* sub_596D38 */
{
    FN_ENTER(0x00596d38);
    /* 00596d38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00596d39: mov ebx, esp */ r_ebx = r_esp;
    /* 00596d3b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00596d3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596d3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596d40: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596d43: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00596d45: mov ecx, dword ptr [ebp + 0x3a4] */ r_ecx = R32((u32)(r_ebp+0x3a4u));
    /* 00596d4b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x596d50u); f_0082dcbc();
    /* 00596d50: fild dword ptr [ebp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x60u)));
    /* 00596d53: fild dword ptr [ebp + 0x3cc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3ccu)));
    /* 00596d59: mov edx, dword ptr [ebp + 0x3d4] */ r_edx = R32((u32)(r_ebp+0x3d4u));
    /* 00596d5f: fld dword ptr [0x929530] */ FPUSH(R_F32((u32)(0x929530u)));
    /* 00596d65: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00596d67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00596d69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00596d6a: jbe 0x596d6e */ if ((fC||fZ)) goto L_00596d6e;
L_00596d6c:; BB(0x00596d6c);
    /* 00596d6c: fst st(3) */ ST(3) = ST(0);
L_00596d6e:; BB(0x00596d6e);
    /* 00596d6e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596d70: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00596d72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00596d74: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00596d78: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00596d7d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596d82: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00596d86: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00596d8a: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00596d8d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00596d91: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596d97: je 0x596f07 */ if (fZ) goto L_00596f07;
L_00596d9d:; BB(0x00596d9d);
    /* 00596d9d: mov eax, dword ptr [ebp + 0x3a4] */ r_eax = R32((u32)(r_ebp+0x3a4u));
L_00596da3:; BB(0x00596da3);
    /* 00596da3: add eax, 0xfffffa00 */ {  u32 a = r_eax; u32 b = 0xfffffa00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00596da8: mov dword ptr [ebp + 0x3a4], eax */ W32((u32)(r_ebp+0x3a4u), r_eax);
    /* 00596dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00596db0: jle 0x596dbb */ if ((fZ||fS!=fO)) goto L_00596dbb;
L_00596db2:; BB(0x00596db2);
    /* 00596db2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596db5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596db6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596db7: mov esp, ebx */ r_esp = r_ebx;
    /* 00596db9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596dba: ret  */ FN_RET(0x00596d38); r_esp += 4; return;
L_00596dbb:; BB(0x00596dbb);
    /* 00596dbb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00596dbd: mov ecx, dword ptr [ebp + 0x388] */ r_ecx = R32((u32)(r_ebp+0x388u));
    /* 00596dc3: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x596dc8u); f_005b8638();
    /* 00596dc8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00596dcb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00596dce: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00596dd1: fadd dword ptr [edx*4 + 0x9293b8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9293b8u));
    /* 00596dd8: fdiv dword ptr [0x9292ec] */ ST(0) = ST(0) / R_F32((u32)(0x9292ecu));
    /* 00596dde: mov dword ptr [ebp + 0x3a4], 0 */ W32((u32)(r_ebp+0x3a4u), 0x0u);
    /* 00596de8: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00596dec: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00596df1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596df6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00596dfa: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00596dfe: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00596e02: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00596e06: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00596e0a: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00596e10: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596e15: je 0x596e8d */ if (fZ) goto L_00596e8d;
L_00596e17:; BB(0x00596e17);
    /* 00596e17: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00596e1f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00596e23: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00596e26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00596e28: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00596e30: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00596e38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596e39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596e3a: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x596e3fu); f_007713d4();
    /* 00596e3f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00596e41: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00596e45: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00596e49: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00596e4b: fmul qword ptr [0x9293c8] */ ST(0) = ST(0) * R_F64((u32)(0x9293c8u));
    /* 00596e51: fdiv qword ptr [0x9293c0] */ ST(0) = ST(0) / R_F64((u32)(0x9293c0u));
    /* 00596e57: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00596e5b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00596e60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596e65: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00596e69: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00596e6d: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00596e71: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00596e75: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00596e79: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00596e7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596e7f: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00596e82: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x596e87u); f_007a8c74();
    /* 00596e87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596e8a: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
L_00596e8d:; BB(0x00596e8d);
    /* 00596e8d: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00596e93: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596e95: jg 0x596ed0 */ if ((!fZ&&fS==fO)) goto L_00596ed0;
L_00596e97:; BB(0x00596e97);
    /* 00596e97: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00596e9a: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00596ea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00596ea2: jg 0x596db2 */ if ((!fZ&&fS==fO)) goto L_00596db2;
L_00596ea8:; BB(0x00596ea8);
    /* 00596ea8: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00596eae: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596eb3: je 0x596eec */ if (fZ) goto L_00596eec;
L_00596eb5:; BB(0x00596eb5);
    /* 00596eb5: mov dword ptr [ebp + 0x38c], 8 */ W32((u32)(r_ebp+0x38cu), 0x8u);
    /* 00596ebf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00596ec1: call dword ptr [0x9bfc40] */ { u32 t = R32((u32)(0x9bfc40u)); r_esp -= 4; W32(r_esp, 0x596ec7u); call_ind(t); }
    /* 00596ec7: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596eca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596ecb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596ecc: mov esp, ebx */ r_esp = r_ebx;
    /* 00596ece: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596ecf: ret  */ FN_RET(0x00596d38); r_esp += 4; return;
L_00596ed0:; BB(0x00596ed0);
    /* 00596ed0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596ed2: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 00596ed8: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x596eddu); f_00599c7c();
    /* 00596edd: mov dword ptr [ebp + 0x398], edi */ W32((u32)(r_ebp+0x398u), r_edi);
    /* 00596ee3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596ee7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596ee8: mov esp, ebx */ r_esp = r_ebx;
    /* 00596eea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596eeb: ret  */ FN_RET(0x00596d38); r_esp += 4; return;
L_00596eec:; BB(0x00596eec);
    /* 00596eec: mov dword ptr [ebp + 0x38c], 5 */ W32((u32)(r_ebp+0x38cu), 0x5u);
    /* 00596ef6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00596ef8: call dword ptr [0x9bfc28] */ { u32 t = R32((u32)(0x9bfc28u)); r_esp -= 4; W32(r_esp, 0x596efeu); call_ind(t); }
    /* 00596efe: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00596f01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596f02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596f03: mov esp, ebx */ r_esp = r_ebx;
    /* 00596f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00596f06: ret  */ FN_RET(0x00596d38); r_esp += 4; return;
L_00596f07:; BB(0x00596f07);
    /* 00596f07: movzx eax, byte ptr [0xa74548] */ r_eax = (u32)R8((u32)(0xa74548u));
    /* 00596f0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00596f10: jne 0x596f38 */ if (!fZ) goto L_00596f38;
L_00596f12:; BB(0x00596f12);
    /* 00596f12: fld dword ptr [0xa745e0] */ FPUSH(R_F32((u32)(0xa745e0u)));
    /* 00596f18: fld dword ptr [0xa745dc] */ FPUSH(R_F32((u32)(0xa745dcu)));
    /* 00596f1e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00596f20: fmul dword ptr [0x92952c] */ ST(0) = ST(0) * R_F32((u32)(0x92952cu));
    /* 00596f26: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00596f28: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596f2d: fstp dword ptr [0xa7454c] */ W_F32((u32)(0xa7454cu), ST(0)); FPOP();
    /* 00596f33: mov byte ptr [0xa74548], al */ W8((u32)(0xa74548u), (u8)r_eax);
L_00596f38:; BB(0x00596f38);
    /* 00596f38: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00596f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596f3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00596f3e: push dword ptr [0xa7454c] */ { u32 v = R32((u32)(0xa7454cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00596f44: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x596f49u); f_007714cc();
    /* 00596f49: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 00596f4c: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596f52: je 0x596fb6 */ if (fZ) goto L_00596fb6;
L_00596f54:; BB(0x00596f54);
    /* 00596f54: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00596f57: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00596f5b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00596f5d: fmul qword ptr [0x9293c8] */ ST(0) = ST(0) * R_F64((u32)(0x9293c8u));
    /* 00596f63: fdiv qword ptr [0x9293c0] */ ST(0) = ST(0) / R_F64((u32)(0x9293c0u));
    /* 00596f69: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00596f6d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00596f72: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00596f77: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00596f7b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00596f7f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00596f83: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00596f87: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00596f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596f8c: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00596f8f: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x596f94u); f_007a9018();
    /* 00596f94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596f97: cmp eax, 0x1c71 */ {  u32 a = r_eax; u32 b = 0x1c71u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596f9c: jge 0x596fab */ if ((fS==fO)) goto L_00596fab;
L_00596f9e:; BB(0x00596f9e);
    /* 00596f9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00596fa0: mov dword ptr [ebp + 0x3d4], edi */ W32((u32)(r_ebp+0x3d4u), r_edi);
    /* 00596fa6: jmp 0x596da3 */ goto L_00596da3;
L_00596fab:; BB(0x00596fab);
    /* 00596fab: mov eax, dword ptr [ebp + 0x3a4] */ r_eax = R32((u32)(r_ebp+0x3a4u));
    /* 00596fb1: jmp 0x596da3 */ goto L_00596da3;
L_00596fb6:; BB(0x00596fb6);
    /* 00596fb6: mov eax, dword ptr [ebp + 0x3a4] */ r_eax = R32((u32)(r_ebp+0x3a4u));
    /* 00596fbc: jmp 0x596da3 */ goto L_00596da3;
}

void f_00596fc4(void) /* sub_596FC4 */
{
    FN_ENTER(0x00596fc4);
    /* 00596fc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596fc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00596fc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00596fc7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596fca: mov esi, ecx */ r_esi = r_ecx;
    /* 00596fcc: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00596fd2: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00596fd5: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00596fdb: add dword ptr [esi + 0x60], eax */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00596fde: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00596fe0: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00596fe3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00596fe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596fe7: mov ecx, esi */ r_ecx = r_esi;
    /* 00596fe9: push dword ptr [0xa745d8] */ { u32 v = R32((u32)(0xa745d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00596fef: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x596ff4u); f_0077170c();
    /* 00596ff4: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00596ff7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00596ffa: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00596fff: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597005: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00597008: je 0x59705c */ if (fZ) goto L_0059705c;
L_0059700a:; BB(0x0059700a);
    /* 0059700a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059700d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00597011: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00597013: fmul qword ptr [0x9293b0] */ ST(0) = ST(0) * R_F64((u32)(0x9293b0u));
    /* 00597019: fdiv qword ptr [0x9293a8] */ ST(0) = ST(0) / R_F64((u32)(0x9293a8u));
    /* 0059701f: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00597023: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00597028: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059702d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00597031: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00597035: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00597039: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0059703d: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00597041: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00597042: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00597045: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x59704au); f_007a9018();
    /* 0059704a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059704d: cmp eax, 0x444 */ {  u32 a = r_eax; u32 b = 0x444u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597052: jge 0x59705c */ if ((fS==fO)) goto L_0059705c;
L_00597054:; BB(0x00597054);
    /* 00597054: mov dword ptr [esi + 0x60], ebx */ W32((u32)(r_esi+0x60u), r_ebx);
    /* 00597057: mov edi, 1 */ r_edi = 0x1u;
L_0059705c:; BB(0x0059705c);
    /* 0059705c: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00597062: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597065: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 0059706b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059706d: jne 0x59707a */ if (!fZ) goto L_0059707a;
L_0059706f:; BB(0x0059706f);
    /* 0059706f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00597071: jl 0x59707a */ if ((fS!=fO)) goto L_0059707a;
L_00597073:; BB(0x00597073);
    /* 00597073: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597077: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597078: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00597079: ret  */ FN_RET(0x00596fc4); r_esp += 4; return;
L_0059707a:; BB(0x0059707a);
    /* 0059707a: mov dword ptr [esi + 0x38c], 9 */ W32((u32)(r_esi+0x38cu), 0x9u);
    /* 00597084: mov ecx, esi */ r_ecx = r_esi;
    /* 00597086: call dword ptr [0x9bfc48] */ { u32 t = R32((u32)(0x9bfc48u)); r_esp -= 4; W32(r_esp, 0x59708cu); call_ind(t); }
    /* 0059708c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059708f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597091: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00597092: ret  */ FN_RET(0x00596fc4); r_esp += 4; return;
}

