#include "protos.h"

void f_00579070(void) /* sub_579070 */
{
    FN_ENTER(0x00579070);
    /* 00579070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00579071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00579072: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579075: mov edi, ecx */ r_edi = r_ecx;
    /* 00579077: movzx eax, word ptr [edi + 0x94] */ r_eax = (u32)R16((u32)(r_edi+0x94u));
    /* 0057907e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057907f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x579084u); f_0068d5a8();
    /* 00579084: mov esi, eax */ r_esi = r_eax;
    /* 00579086: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579089: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057908b: je 0x57912d */ if (fZ) goto L_0057912d;
L_00579091:; BB(0x00579091);
    /* 00579091: mov ecx, esi */ r_ecx = r_esi;
    /* 00579093: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x579098u); f_008173b4();
    /* 00579098: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057909a: je 0x57912d */ if (fZ) goto L_0057912d;
L_005790a0:; BB(0x005790a0);
    /* 005790a0: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005790a3: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005790a8: jne 0x57912d */ if (!fZ) goto L_0057912d;
L_005790ae:; BB(0x005790ae);
    /* 005790ae: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 005790b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005790b6: je 0x57912d */ if (fZ) goto L_0057912d;
L_005790b8:; BB(0x005790b8);
    /* 005790b8: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5790bdu); f_008173b4();
    /* 005790bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005790bf: je 0x57912d */ if (fZ) goto L_0057912d;
L_005790c1:; BB(0x005790c1);
    /* 005790c1: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 005790c7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005790ca: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005790cd: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 005790d0: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005790d6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005790d9: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 005790dc: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005790e0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005790e4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5790e9u); f_0082f9c4();
    /* 005790e9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005790ec: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5790f1u); f_0082df08();
    /* 005790f1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005790f3: fld dword ptr [0x9274dc] */ FPUSH(R_F32((u32)(0x9274dcu)));
    /* 005790f9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005790fc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005790fe: fsubr dword ptr [edi + 0x38] */ ST(0) = R_F32((u32)(r_edi+0x38u)) - ST(0);
    /* 00579101: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00579104: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 0057910a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057910e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00579110: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00579112: fsubr dword ptr [edi + 0x40] */ ST(0) = R_F32((u32)(r_edi+0x40u)) - ST(0);
    /* 00579115: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00579117: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0057911b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0057911f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00579123: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00579127: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00579128: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x57912du); f_00508db8();
L_0057912d:; BB(0x0057912d);
    /* 0057912d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00579130: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00579131: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00579132: ret  */ FN_RET(0x00579070); r_esp += 4; return;
}

void f_00579134(void) /* sub_579134 */
{
    FN_ENTER(0x00579134);
    /* 00579134: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00579135: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579136: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579139: mov edi, ecx */ r_edi = r_ecx;
    /* 0057913b: movzx eax, word ptr [edi + 0x94] */ r_eax = (u32)R16((u32)(r_edi+0x94u));
    /* 00579142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579143: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x579148u); f_0068d5a8();
    /* 00579148: mov ebp, eax */ r_ebp = r_eax;
    /* 0057914a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057914d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057914f: je 0x579195 */ if (fZ) goto L_00579195;
L_00579151:; BB(0x00579151);
    /* 00579151: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00579153: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x579158u); f_008173b4();
    /* 00579158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057915a: je 0x579195 */ if (fZ) goto L_00579195;
L_0057915c:; BB(0x0057915c);
    /* 0057915c: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0057915f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579164: jne 0x579195 */ if (!fZ) goto L_00579195;
L_00579166:; BB(0x00579166);
    /* 00579166: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 0057916c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057916e: je 0x579195 */ if (fZ) goto L_00579195;
L_00579170:; BB(0x00579170);
    /* 00579170: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x579175u); f_008173b4();
    /* 00579175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579177: je 0x579195 */ if (fZ) goto L_00579195;
L_00579179:; BB(0x00579179);
    /* 00579179: mov eax, dword ptr [edi + 0x98] */ r_eax = R32((u32)(r_edi+0x98u));
    /* 0057917f: cmp eax, 0x20f */ {  u32 a = r_eax; u32 b = 0x20fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579184: je 0x5791ae */ if (fZ) goto L_005791ae;
L_00579186:; BB(0x00579186);
    /* 00579186: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 0057918c: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0057918f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579190: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x579195u); f_00508db8();
L_00579195:; BB(0x00579195);
    /* 00579195: mov edx, dword ptr [edi + 0x9c] */ r_edx = R32((u32)(r_edi+0x9cu));
    /* 0057919b: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0057919e: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 005791a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005791a6: jl 0x57921f */ if ((fS!=fO)) goto L_0057921f;
L_005791a8:; BB(0x005791a8);
    /* 005791a8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005791ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005791ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005791ad: ret  */ FN_RET(0x00579134); r_esp += 4; return;
L_005791ae:; BB(0x005791ae);
    /* 005791ae: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 005791b4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005791b7: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005791ba: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 005791bd: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005791c3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005791c6: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 005791c9: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005791cd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005791d1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5791d6u); f_0082f9c4();
    /* 005791d6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005791d9: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5791deu); f_0082df08();
    /* 005791de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005791e0: fld dword ptr [0x9274d8] */ FPUSH(R_F32((u32)(0x9274d8u)));
    /* 005791e6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005791e9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005791eb: fsubr dword ptr [edi + 0x38] */ ST(0) = R_F32((u32)(r_edi+0x38u)) - ST(0);
    /* 005791ee: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 005791f1: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 005791f7: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005791fb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005791fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005791ff: fsubr dword ptr [edi + 0x40] */ ST(0) = R_F32((u32)(r_edi+0x40u)) - ST(0);
    /* 00579202: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00579204: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00579208: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0057920c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00579210: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00579214: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00579215: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x57921au); f_00508db8();
    /* 0057921a: jmp 0x579195 */ goto L_00579195;
L_0057921f:; BB(0x0057921f);
    /* 0057921f: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00579223: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00579228: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0057922c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057922f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579230: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00579231: ret  */ FN_RET(0x00579134); r_esp += 4; return;
}

void f_00579234(void) /* sub_579234 */
{
    FN_ENTER(0x00579234);
    /* 00579234: mov dword ptr [0xa74084], 0x3f800000 */ W32((u32)(0xa74084u), 0x3f800000u);
    /* 0057923e: mov dword ptr [0xa74088], 0x41000000 */ W32((u32)(0xa74088u), 0x41000000u);
    /* 00579248: mov dword ptr [0xa7408c], 0x3fc00000 */ W32((u32)(0xa7408cu), 0x3fc00000u);
    /* 00579252: ret  */ FN_RET(0x00579234); r_esp += 4; return;
}

void f_00579254(void) /* sub_579254 */
{
    FN_ENTER(0x00579254);
    /* 00579254: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00579255: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00579257: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00579259: call 0x579278 */ r_esp -= 4; W32(r_esp, 0x57925eu); f_00579278();
    /* 0057925e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00579262: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579264: jne 0x57926a */ if (!fZ) goto L_0057926a;
L_00579266:; BB(0x00579266);
    /* 00579266: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579267: ret 4 */ FN_RET(0x00579254); r_esp += 8; return;
L_0057926a:; BB(0x0057926a);
    /* 0057926a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057926b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x579270u); f_005c2f74();
    /* 00579270: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579271: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579272: ret 4 */ FN_RET(0x00579254); r_esp += 8; return;
}

void f_00579278(void) /* sub_579278 */
{
    FN_ENTER(0x00579278);
    /* 00579278: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579279: mov ebp, esp */ r_ebp = r_esp;
    /* 0057927b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057927d: push 0x8d7798 */ { u32 v = 0x8d7798u; r_esp -= 4; W32(r_esp, v); }
    /* 00579282: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00579288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579289: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00579290: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579293: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00579296: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00579299: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057929c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057929f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005792a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005792a9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005792ac: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005792b2: mov dword ptr [edx], 0xb06f58 */ W32((u32)(r_edx), 0xb06f58u);
    /* 005792b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005792ba: je 0x5792c6 */ if (fZ) goto L_005792c6;
L_005792bc:; BB(0x005792bc);
    /* 005792bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005792bd: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5792c2u); f_005cdcc0();
    /* 005792c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005792c3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_005792c6:; BB(0x005792c6);
    /* 005792c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005792c7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x5792ccu); f_007b4e84();
    /* 005792cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005792cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005792d0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5792d5u); f_007b9c8c();
    /* 005792d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005792dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005792df: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x5792e4u); f_007b4aec();
    /* 005792e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005792e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005792ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005792f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005792f1: ret  */ FN_RET(0x00579278); r_esp += 4; return;
}

void f_005792f4(void) /* sub_5792F4 */
{
    FN_ENTER(0x005792f4);
    /* 005792f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005792f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005792f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005792f9: push 0x8d77b4 */ { u32 v = 0x8d77b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005792fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00579304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579305: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057930c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057930f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00579312: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00579315: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00579318: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0057931b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057931e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00579321: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00579324: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00579325: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00579328: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057932b: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x579330u); f_007b4b48();
    /* 00579330: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00579337: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057933a: mov dword ptr [ecx], 0xb06f58 */ W32((u32)(r_ecx), 0xb06f58u);
    /* 00579340: mov eax, dword ptr [0x9bede0] */ r_eax = R32((u32)(0x9bede0u));
    /* 00579345: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00579347: push 0x9bede4 */ { u32 v = 0x9bede4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057934c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0057934f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x579354u); f_007b9a88();
    /* 00579354: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00579357: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x57935cu); f_007b4f54();
    /* 0057935c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057935f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00579362: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00579364: mov ebx, dword ptr [edx + 0xa4] */ r_ebx = R32((u32)(r_edx+0xa4u));
    /* 0057936a: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0057936d: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00579370: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 00579373: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00579376: movzx esi, word ptr [eax + 0x1c] */ r_esi = (u32)R16((u32)(r_eax+0x1cu));
    /* 0057937a: mov word ptr [ecx + 0xac], si */ W16((u32)(r_ecx+0xacu), (u16)r_esi);
    /* 00579381: mov edi, dword ptr [eax + 0x74] */ r_edi = R32((u32)(r_eax+0x74u));
    /* 00579384: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 00579387: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 0057938a: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0057938d: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00579390: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00579393: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 00579399: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057939c: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 005793a2: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 005793a8: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 005793ae: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005793b4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005793b7: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 005793bd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005793c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005793c1: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 005793c7: add edx, 0xb4 */ {  u32 a = r_edx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005793cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005793ce: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5793d3u); f_0050981c();
    /* 005793d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005793d6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005793d9: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 005793df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005793e1: je 0x5793f2 */ if (fZ) goto L_005793f2;
L_005793e3:; BB(0x005793e3);
    /* 005793e3: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005793e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005793e8: mov ecx, eax */ r_ecx = r_eax;
    /* 005793ea: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x5793efu); f_00508f14();
    /* 005793ef: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_005793f2:; BB(0x005793f2);
    /* 005793f2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005793f5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005793f8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005793fb: mov eax, edx */ r_eax = r_edx;
    /* 005793fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579400: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00579407: mov esp, ebp */ r_esp = r_ebp;
    /* 00579409: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057940a: ret 8 */ FN_RET(0x005792f4); r_esp += 12; return;
}

void f_00579410(void) /* sub_579410 */
{
    FN_ENTER(0x00579410);
    /* 00579410: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00579416: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579418: je 0x57941f */ if (fZ) goto L_0057941f;
L_0057941a:; BB(0x0057941a);
    /* 0057941a: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x57941fu); f_00508f48();
L_0057941f:; BB(0x0057941f);
    /* 0057941f: ret  */ FN_RET(0x00579410); r_esp += 4; return;
}

void f_00579420(void) /* sub_579420 */
{
    FN_ENTER(0x00579420);
    /* 00579420: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00579426: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579428: je 0x579433 */ if (fZ) goto L_00579433;
L_0057942a:; BB(0x0057942a);
    /* 0057942a: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057942e: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x579433u); f_00508d4c();
L_00579433:; BB(0x00579433);
    /* 00579433: ret 4 */ FN_RET(0x00579420); r_esp += 8; return;
}

void f_00579438(void) /* sub_579438 */
{
    FN_ENTER(0x00579438);
    /* 00579438: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057943b: mov eax, ecx */ r_eax = r_ecx;
    /* 0057943d: ret  */ FN_RET(0x00579438); r_esp += 4; return;
}

void f_00579440(void) /* sub_579440 */
{
    FN_ENTER(0x00579440);
    /* 00579440: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00579441: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00579443: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00579445: call 0x579464 */ r_esp -= 4; W32(r_esp, 0x57944au); f_00579464();
    /* 0057944a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057944e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579450: jne 0x579456 */ if (!fZ) goto L_00579456;
L_00579452:; BB(0x00579452);
    /* 00579452: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579453: ret 4 */ FN_RET(0x00579440); r_esp += 8; return;
L_00579456:; BB(0x00579456);
    /* 00579456: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00579457: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x57945cu); f_00857e98();
    /* 0057945c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057945d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057945e: ret 4 */ FN_RET(0x00579440); r_esp += 8; return;
}

void f_00579464(void) /* sub_579464 */
{
    FN_ENTER(0x00579464);
    /* 00579464: mov dword ptr [ecx], 0xb06f88 */ W32((u32)(r_ecx), 0xb06f88u);
    /* 0057946a: ret  */ FN_RET(0x00579464); r_esp += 4; return;
}

void f_0057946c(void) /* sub_57946C */
{
    FN_ENTER(0x0057946c);
    /* 0057946c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057946d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057946f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00579471: mov dword ptr [ebp], 0xb06f88 */ W32((u32)(r_ebp), 0xb06f88u);
    /* 00579478: mov dword ptr [ebp + 0x14], 0x3d23d70a */ W32((u32)(r_ebp+0x14u), 0x3d23d70au);
    /* 0057947f: call 0x579488 */ r_esp -= 4; W32(r_esp, 0x579484u); f_00579488();
    /* 00579484: mov eax, ebp */ r_eax = r_ebp;
    /* 00579486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579487: ret  */ FN_RET(0x0057946c); r_esp += 4; return;
}

void f_00579488(void) /* sub_579488 */
{
    FN_ENTER(0x00579488);
    /* 00579488: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0057948f: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00579496: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0057949d: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 005794a4: ret  */ FN_RET(0x00579488); r_esp += 4; return;
}

void f_005794a8(void) /* sub_5794A8 */
{
    FN_ENTER(0x005794a8);
    /* 005794a8: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 005794ac: fdivr dword ptr [0x9274f4] */ ST(0) = R_F32((u32)(0x9274f4u)) / ST(0);
    /* 005794b2: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 005794b5: ret 4 */ FN_RET(0x005794a8); r_esp += 8; return;
}

void f_005794b8(void) /* sub_5794B8 */
{
    FN_ENTER(0x005794b8);
    /* 005794b8: mov dword ptr [ecx + 4], 0xbf800000 */ W32((u32)(r_ecx+0x4u), 0xbf800000u);
    /* 005794bf: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005794c6: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005794cd: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 005794d4: ret  */ FN_RET(0x005794b8); r_esp += 4; return;
}

void f_005794d8(void) /* sub_5794D8 */
{
    FN_ENTER(0x005794d8);
    /* 005794d8: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 005794db: fcom dword ptr [0x9274e8] */ fx_compare(ST(0), R_F32((u32)(0x9274e8u))); 
    /* 005794e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005794e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 005794e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005794e6: jbe 0x5794f2 */ if ((fC||fZ)) goto L_005794f2;
L_005794e8:; BB(0x005794e8);
    /* 005794e8: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 005794eb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005794ed: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 005794f0: jmp 0x579501 */ goto L_00579501;
L_005794f2:; BB(0x005794f2);
    /* 005794f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005794f4: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 005794f9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005794fc: mov edx, 1 */ r_edx = 0x1u;
L_00579501:; BB(0x00579501);
    /* 00579501: mov eax, edx */ r_eax = r_edx;
    /* 00579503: ret  */ FN_RET(0x005794d8); r_esp += 4; return;
}

void f_00579504(void) /* sub_579504 */
{
    FN_ENTER(0x00579504);
    /* 00579504: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00579507: fcom dword ptr [0x9274e4] */ fx_compare(ST(0), R_F32((u32)(0x9274e4u))); 
    /* 0057950d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057950f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00579511: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00579512: jae 0x57951e */ if (!fC) goto L_0057951e;
L_00579514:; BB(0x00579514);
    /* 00579514: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00579517: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00579519: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0057951c: jmp 0x57952a */ goto L_0057952a;
L_0057951e:; BB(0x0057951e);
    /* 0057951e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00579520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579522: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00579525: mov edx, 1 */ r_edx = 0x1u;
L_0057952a:; BB(0x0057952a);
    /* 0057952a: mov eax, edx */ r_eax = r_edx;
    /* 0057952c: ret  */ FN_RET(0x00579504); r_esp += 4; return;
}

void f_00579530(void) /* sub_579530 */
{
    FN_ENTER(0x00579530);
    /* 00579530: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00579535: or eax, 0x8820 */ {  u32 a = r_eax; u32 b = 0x8820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057953a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057953d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00579542: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579543: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x579548u); f_0082d710();
    /* 00579548: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0057954d: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00579552: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x579557u); f_0082d6fc();
    /* 00579557: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057955a: ret  */ FN_RET(0x00579530); r_esp += 4; return;
}

void f_0057955c(void) /* sub_57955C */
{
    FN_ENTER(0x0057955c);
    /* 0057955c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00579561: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579563: and eax, 0xffff77df */ {  u32 a = r_eax; u32 b = 0xffff77dfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00579568: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0057956d: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00579572: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x579577u); f_0082d6fc();
    /* 00579577: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057957a: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 0057957f: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x579584u); f_0082e1c4();
    /* 00579584: ret  */ FN_RET(0x0057955c); r_esp += 4; return;
}

void f_00579588(void) /* sub_579588 */
{
    FN_ENTER(0x00579588);
    /* 00579588: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0057958b: fcomp dword ptr [0x9274e0] */ fx_compare(ST(0), R_F32((u32)(0x9274e0u))); FPOP();
    /* 00579591: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00579593: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00579595: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00579596: mov eax, 1 */ r_eax = 0x1u;
    /* 0057959b: ja 0x57959f */ if ((!fC&&!fZ)) goto L_0057959f;
L_0057959d:; BB(0x0057959d);
    /* 0057959d: mov eax, edx */ r_eax = r_edx;
L_0057959f:; BB(0x0057959f);
    /* 0057959f: ret  */ FN_RET(0x00579588); r_esp += 4; return;
}

void f_005795a0(void) /* sub_5795A0 */
{
    FN_ENTER(0x005795a0);
    /* 005795a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005795a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005795a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005795a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005795a4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005795a7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005795a9: fldz  */ FPUSH(0.0);
    /* 005795ab: fldz  */ FPUSH(0.0);
    /* 005795ad: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005795b1: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005795b5: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 005795b7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 005795b9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005795bc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005795c0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005795c5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005795c9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005795cd: frndint  */ ST(0) = fx_rint(ST(0));
    /* 005795cf: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005795d2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005795d4: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005795d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005795d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005795d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005795db: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 005795dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005795df: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005795e3: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 005795e7: fld dword ptr [0x927510] */ FPUSH(R_F32((u32)(0x927510u)));
    /* 005795ed: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005795f1: fld dword ptr [0x927510] */ FPUSH(R_F32((u32)(0x927510u)));
    /* 005795f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005795f9: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 005795fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005795fd: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 005795ff: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 00579602: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 00579605: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00579607: fchs  */ ST(0) = -ST(0);
    /* 00579609: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0057960b: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0057960d: jae 0x579611 */ if (!fC) goto L_00579611;
L_0057960f:; BB(0x0057960f);
    /* 0057960f: fst st(3) */ ST(3) = ST(0);
L_00579611:; BB(0x00579611);
    /* 00579611: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00579612: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00579614: je 0x579618 */ if (fZ) goto L_00579618;
L_00579616:; BB(0x00579616);
    /* 00579616: fst st(3) */ ST(3) = ST(0);
L_00579618:; BB(0x00579618);
    /* 00579618: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057961a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0057961c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0057961f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00579623: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00579628: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057962c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00579630: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00579632: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00579635: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00579637: fcomp st(5) */ fx_compare(ST(0), ST(5)); FPOP();
    /* 00579639: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057963b: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0057963d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057963e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00579640: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00579642: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00579644: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00579646: jae 0x57964a */ if (!fC) goto L_0057964a;
L_00579648:; BB(0x00579648);
    /* 00579648: fst st(3) */ ST(3) = ST(0);
L_0057964a:; BB(0x0057964a);
    /* 0057964a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057964b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0057964d: je 0x579651 */ if (fZ) goto L_00579651;
L_0057964f:; BB(0x0057964f);
    /* 0057964f: fst st(3) */ ST(3) = ST(0);
L_00579651:; BB(0x00579651);
    /* 00579651: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00579653: fld dword ptr [0x927518] */ FPUSH(R_F32((u32)(0x927518u)));
    /* 00579659: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0057965b: fchs  */ ST(0) = -ST(0);
    /* 0057965d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0057965f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00579661: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 00579664: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00579666: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00579668: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0057966a: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0057966d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00579670: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00579674: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00579679: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057967d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00579681: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00579685: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00579688: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0057968c: mov dword ptr [ebx + 8], ebp */ W32((u32)(r_ebx+0x8u), r_ebp);
    /* 0057968f: imul ebp, esi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_esi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00579692: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00579696: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579698: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0057969b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057969d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057969e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5796a3u); f_008581c5();
    /* 005796a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005796a4: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 005796a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005796a8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005796aa: jle 0x57976a */ if ((fZ||fS!=fO)) goto L_0057976a;
L_005796b0:; BB(0x005796b0);
    /* 005796b0: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005796b3: jl 0x579776 */ if ((fS!=fO)) goto L_00579776;
L_005796b9:; BB(0x005796b9);
    /* 005796b9: fld dword ptr [0x927514] */ FPUSH(R_F32((u32)(0x927514u)));
    /* 005796bf: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 005796c3: lea edi, [ebp - 5] */ r_edi = (u32)(r_ebp+0xfffffffbu);
    /* 005796c6: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005796c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005796cb: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 005796ce: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005796d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005796d2: jmp 0x5796d6 */ goto L_005796d6;
L_005796d4:; BB(0x005796d4);
    /* 005796d4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
L_005796d6:; BB(0x005796d6);
    /* 005796d6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005796d8: mov dword ptr [esi + eax], ebp */ W32((u32)(r_esi+r_eax), r_ebp);
    /* 005796db: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 005796dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005796df: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005796e2: mov dword ptr [esi + ebp + 4], eax */ W32((u32)(r_esi+r_ebp+0x4u), r_eax);
    /* 005796e6: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 005796e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005796ea: mov dword ptr [esi + ebp + 8], eax */ W32((u32)(r_esi+r_ebp+0x8u), r_eax);
    /* 005796ee: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 005796f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005796f2: mov dword ptr [esi + ebp + 0xc], eax */ W32((u32)(r_esi+r_ebp+0xcu), r_eax);
    /* 005796f6: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 005796f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005796fa: mov dword ptr [esi + ebp + 0x10], eax */ W32((u32)(r_esi+r_ebp+0x10u), r_eax);
    /* 005796fe: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00579700: mov dword ptr [esi + eax + 0x14], ecx */ W32((u32)(r_esi+r_eax+0x14u), r_ecx);
    /* 00579704: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00579706: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579708: mov dword ptr [esi + ebp + 0x18], eax */ W32((u32)(r_esi+r_ebp+0x18u), r_eax);
    /* 0057970c: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0057970e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579710: mov dword ptr [esi + ebp + 0x1c], eax */ W32((u32)(r_esi+r_ebp+0x1cu), r_eax);
    /* 00579714: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00579716: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579718: mov dword ptr [esi + ebp + 0x20], eax */ W32((u32)(r_esi+r_ebp+0x20u), r_eax);
    /* 0057971c: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0057971e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579720: mov dword ptr [esi + ebp + 0x24], eax */ W32((u32)(r_esi+r_ebp+0x24u), r_eax);
    /* 00579724: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00579726: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579728: mov dword ptr [esi + ebp + 0x28], eax */ W32((u32)(r_esi+r_ebp+0x28u), r_eax);
    /* 0057972c: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0057972e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579730: mov dword ptr [esi + ebp + 0x2c], eax */ W32((u32)(r_esi+r_ebp+0x2cu), r_eax);
    /* 00579734: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00579737: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579739: jle 0x5796d4 */ if ((fZ||fS!=fO)) goto L_005796d4;
L_0057973b:; BB(0x0057973b);
    /* 0057973b: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0057973f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
L_00579741:; BB(0x00579741);
    /* 00579741: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00579744: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00579746: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00579749: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057974b: jmp 0x57974f */ goto L_0057974f;
L_0057974d:; BB(0x0057974d);
    /* 0057974d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
L_0057974f:; BB(0x0057974f);
    /* 0057974f: fst dword ptr [ecx + eax] */ W_F32((u32)(r_ecx+r_eax), ST(0));
    /* 00579752: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00579754: fst dword ptr [ecx + eax + 4] */ W_F32((u32)(r_ecx+r_eax+0x4u), ST(0));
    /* 00579758: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0057975a: fst dword ptr [ecx + esi + 8] */ W_F32((u32)(r_ecx+r_esi+0x8u), ST(0));
    /* 0057975e: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00579761: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579764: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579766: jl 0x57974d */ if ((fS!=fO)) goto L_0057974d;
L_00579768:; BB(0x00579768);
    /* 00579768: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0057976a:; BB(0x0057976a);
    /* 0057976a: mov eax, ebx */ r_eax = r_ebx;
    /* 0057976c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057976f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579771: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00579772: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00579773: ret 0x10 */ FN_RET(0x005795a0); r_esp += 20; return;
L_00579776:; BB(0x00579776);
    /* 00579776: fld dword ptr [0x927514] */ FPUSH(R_F32((u32)(0x927514u)));
    /* 0057977c: jmp 0x579741 */ goto L_00579741;
}

void f_00579780(void) /* sub_579780 */
{
    FN_ENTER(0x00579780);
    /* 00579780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00579781: mov esi, ecx */ r_esi = r_ecx;
    /* 00579783: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00579785: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x57978au); f_00857e98();
    /* 0057978a: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00579790: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579791: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00579792: ret  */ FN_RET(0x00579780); r_esp += 4; return;
}

void f_00579794(void) /* sub_579794 */
{
    FN_ENTER(0x00579794);
    /* 00579794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579795: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579798: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057979a: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x57979fu); f_0082fa9c();
    /* 0057979f: mov dword ptr [0xa74098], 0 */ W32((u32)(0xa74098u), 0x0u);
    /* 005797a9: mov dword ptr [0xa7409c], 0 */ W32((u32)(0xa7409cu), 0x0u);
    /* 005797b3: mov dword ptr [0xa740a0], 0 */ W32((u32)(0xa740a0u), 0x0u);
    /* 005797bd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005797c0: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005797c3: mov dword ptr [0xa740a4], eax */ W32((u32)(0xa740a4u), r_eax);
    /* 005797c8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005797cc: mov dword ptr [0xa740a8], edx */ W32((u32)(0xa740a8u), r_edx);
    /* 005797d2: mov dword ptr [0xa740ac], eax */ W32((u32)(0xa740acu), r_eax);
    /* 005797d7: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005797db: mov dword ptr [0xa740b0], eax */ W32((u32)(0xa740b0u), r_eax);
    /* 005797e0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5797e5u); f_0082d7b0();
    /* 005797e5: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 005797e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005797eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005797ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005797ef: jle 0x57993b */ if ((fZ||fS!=fO)) goto L_0057993b;
L_005797f5:; BB(0x005797f5);
    /* 005797f5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005797f9: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 005797fd: mov ebx, ebp */ r_ebx = r_ebp;
    /* 005797ff: mov ebp, eax */ r_ebp = r_eax;
    /* 00579801: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00579804: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00579808: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_0057980c:; BB(0x0057980c);
    /* 0057980c: mov dword ptr [0xa740b4], 0 */ W32((u32)(0xa740b4u), 0x0u);
    /* 00579816: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579818: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x57981du); f_00830cd8();
    /* 0057981d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057981e: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00579822: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00579825: mov ecx, edi */ r_ecx = r_edi;
    /* 00579827: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x57982cu); f_008304c8();
    /* 0057982c: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00579830: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00579834: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00579836: mov ebp, ecx */ r_ebp = r_ecx;
L_00579838:; BB(0x00579838);
    /* 00579838: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57983du); f_0082d7b0();
    /* 0057983d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057983f: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x579844u); f_008305ec();
    /* 00579844: mov eax, dword ptr [0xa740ac] */ r_eax = R32((u32)(0xa740acu));
    /* 00579849: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 0057984f: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00579852: cmp esi, dword ptr [eax + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579855: jne 0x5798ae */ if (!fZ) goto L_005798ae;
L_00579857:; BB(0x00579857);
    /* 00579857: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 0057985c: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00579860:; BB(0x00579860);
    /* 00579860: mov ebx, dword ptr [0xa740b0] */ r_ebx = R32((u32)(0xa740b0u));
    /* 00579866: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579868: je 0x579929 */ if (fZ) goto L_00579929;
L_0057986e:; BB(0x0057986e);
    /* 0057986e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057986f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579871: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579873: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00579876: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00579878: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057987a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057987c: mov edx, ebx */ r_edx = r_ebx;
    /* 0057987e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x579883u); f_00830aa0();
L_00579883:; BB(0x00579883);
    /* 00579883: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 00579888: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 0057988e: mov ebx, dword ptr [0xa740ac] */ r_ebx = R32((u32)(0xa740acu));
    /* 00579894: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579897: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057989a: cmp esi, dword ptr [ebx + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057989d: mov dword ptr [0xa740a4], eax */ W32((u32)(0xa740a4u), r_eax);
    /* 005798a2: mov dword ptr [0xa740b4], edx */ W32((u32)(0xa740b4u), r_edx);
    /* 005798a8: je 0x579860 */ if (fZ) goto L_00579860;
L_005798aa:; BB(0x005798aa);
    /* 005798aa: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_005798ae:; BB(0x005798ae);
    /* 005798ae: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005798b1: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005798b7: jne 0x5798c6 */ if (!fZ) goto L_005798c6;
L_005798b9:; BB(0x005798b9);
    /* 005798b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005798ba: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005798bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005798bf: call 0x579940 */ r_esp -= 4; W32(r_esp, 0x5798c4u); f_00579940();
    /* 005798c4: mov esi, eax */ r_esi = r_eax;
L_005798c6:; BB(0x005798c6);
    /* 005798c6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5798cbu); f_0082da80();
    /* 005798cb: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 005798ce: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005798d0: je 0x57991f */ if (fZ) goto L_0057991f;
L_005798d2:; BB(0x005798d2);
    /* 005798d2: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 005798d8: cmp edx, dword ptr [0xa740a8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa740a8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005798de: jl 0x579838 */ if ((fS!=fO)) goto L_00579838;
L_005798e4:; BB(0x005798e4);
    /* 005798e4: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 005798e8: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_005798ec:; BB(0x005798ec);
    /* 005798ec: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005798f0: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 005798f3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005798f7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005798fa: cmp ebp, dword ptr [ebx + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005798fd: jl 0x57980c */ if ((fS!=fO)) goto L_0057980c;
L_00579903:; BB(0x00579903);
    /* 00579903: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00579907: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0057990a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0057990e:; BB(0x0057990e);
    /* 0057990e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x579913u); f_0082da80();
    /* 00579913: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x579918u); f_0082faac();
    /* 00579918: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057991b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057991c: ret 0x10 */ FN_RET(0x00579794); r_esp += 20; return;
L_0057991f:; BB(0x0057991f);
    /* 0057991f: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00579923: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00579927: jmp 0x5798ec */ goto L_005798ec;
L_00579929:; BB(0x00579929);
    /* 00579929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057992a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057992c: mov edx, 0xa74098 */ r_edx = 0xa74098u;
    /* 00579931: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x579936u); f_00830aa0();
    /* 00579936: jmp 0x579883 */ goto L_00579883;
L_0057993b:; BB(0x0057993b);
    /* 0057993b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057993d: jmp 0x57990e */ goto L_0057990e;
}

void f_00579940(void) /* sub_579940 */
{
    FN_ENTER(0x00579940);
    /* 00579940: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00579941: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00579942: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579943: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00579944: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00579945: mov edx, ecx */ r_edx = r_ecx;
    /* 00579947: mov esi, edx */ r_esi = r_edx;
    /* 00579949: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0057994d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00579951: mov ebx, eax */ r_ebx = r_eax;
    /* 00579953: mov ebp, ecx */ r_ebp = r_ecx;
L_00579955:; BB(0x00579955);
    /* 00579955: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57995au); f_0082d7b0();
    /* 0057995a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057995c: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x579961u); f_008305ec();
    /* 00579961: mov eax, dword ptr [0xa740ac] */ r_eax = R32((u32)(0xa740acu));
    /* 00579966: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 0057996c: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0057996f: cmp ebx, dword ptr [eax + edx*4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579972: jne 0x5799c9 */ if (!fZ) goto L_005799c9;
L_00579974:; BB(0x00579974);
    /* 00579974: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 00579979: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0057997c:; BB(0x0057997c);
    /* 0057997c: mov esi, dword ptr [0xa740b0] */ r_esi = R32((u32)(0xa740b0u));
    /* 00579982: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579984: je 0x579a13 */ if (fZ) goto L_00579a13;
L_0057998a:; BB(0x0057998a);
    /* 0057998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057998b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057998d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057998f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00579992: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00579994: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00579996: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579998: mov edx, esi */ r_edx = r_esi;
    /* 0057999a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x57999fu); f_00830aa0();
L_0057999f:; BB(0x0057999f);
    /* 0057999f: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 005799a4: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 005799aa: mov esi, dword ptr [0xa740ac] */ r_esi = R32((u32)(0xa740acu));
    /* 005799b0: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005799b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005799b6: cmp ebx, dword ptr [esi + edx*4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005799b9: mov dword ptr [0xa740a4], eax */ W32((u32)(0xa740a4u), r_eax);
    /* 005799be: mov dword ptr [0xa740b4], edx */ W32((u32)(0xa740b4u), r_edx);
    /* 005799c4: je 0x57997c */ if (fZ) goto L_0057997c;
L_005799c6:; BB(0x005799c6);
    /* 005799c6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005799c9:; BB(0x005799c9);
    /* 005799c9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005799cc: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005799d2: jne 0x5799e1 */ if (!fZ) goto L_005799e1;
L_005799d4:; BB(0x005799d4);
    /* 005799d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005799d5: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005799d8: mov ecx, esi */ r_ecx = r_esi;
    /* 005799da: call 0x579940 */ r_esp -= 4; W32(r_esp, 0x5799dfu); f_00579940();
    /* 005799df: mov ebx, eax */ r_ebx = r_eax;
L_005799e1:; BB(0x005799e1);
    /* 005799e1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5799e6u); f_0082da80();
    /* 005799e6: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 005799e9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005799eb: je 0x579a09 */ if (fZ) goto L_00579a09;
L_005799ed:; BB(0x005799ed);
    /* 005799ed: mov edi, dword ptr [0xa740b4] */ r_edi = R32((u32)(0xa740b4u));
    /* 005799f3: cmp edi, dword ptr [0xa740a8] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa740a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005799f9: jl 0x579955 */ if ((fS!=fO)) goto L_00579955;
L_005799ff:; BB(0x005799ff);
    /* 005799ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00579a01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579a02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579a03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579a04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00579a05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00579a06: ret 8 */ FN_RET(0x00579940); r_esp += 12; return;
L_00579a09:; BB(0x00579a09);
    /* 00579a09: mov eax, ebx */ r_eax = r_ebx;
    /* 00579a0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579a0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579a0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579a0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00579a0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00579a10: ret 8 */ FN_RET(0x00579940); r_esp += 12; return;
L_00579a13:; BB(0x00579a13);
    /* 00579a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579a14: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579a16: mov edx, 0xa74098 */ r_edx = 0xa74098u;
    /* 00579a1b: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x579a20u); f_00830aa0();
    /* 00579a20: jmp 0x57999f */ goto L_0057999f;
}

void f_00579a28(void) /* sub_579A28 */
{
    FN_ENTER(0x00579a28);
    /* 00579a28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579a29: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579a2c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00579a2e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00579a32: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00579a36: mov dword ptr [0xa740b8], eax */ W32((u32)(0xa740b8u), r_eax);
    /* 00579a3b: mov dword ptr [0xa740bc], edx */ W32((u32)(0xa740bcu), r_edx);
    /* 00579a41: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x579a46u); f_0082fa9c();
    /* 00579a46: mov dword ptr [0xa74098], 0 */ W32((u32)(0xa74098u), 0x0u);
    /* 00579a50: mov dword ptr [0xa7409c], 0 */ W32((u32)(0xa7409cu), 0x0u);
    /* 00579a5a: mov dword ptr [0xa740a0], 0 */ W32((u32)(0xa740a0u), 0x0u);
    /* 00579a64: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00579a67: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00579a6a: mov dword ptr [0xa740a4], eax */ W32((u32)(0xa740a4u), r_eax);
    /* 00579a6f: mov dword ptr [0xa740ac], 0xa740b8 */ W32((u32)(0xa740acu), 0xa740b8u);
    /* 00579a79: mov dword ptr [0xa740a8], edx */ W32((u32)(0xa740a8u), r_edx);
    /* 00579a7f: mov dword ptr [0xa740b0], 0 */ W32((u32)(0xa740b0u), 0x0u);
    /* 00579a89: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x579a8eu); f_0082d7b0();
    /* 00579a8e: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00579a91: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00579a94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579a96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00579a98: jle 0x579be4 */ if ((fZ||fS!=fO)) goto L_00579be4;
L_00579a9e:; BB(0x00579a9e);
    /* 00579a9e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00579aa2: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00579aa6: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00579aa8: mov ebp, eax */ r_ebp = r_eax;
    /* 00579aaa: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00579aad: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00579ab1: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00579ab5:; BB(0x00579ab5);
    /* 00579ab5: mov dword ptr [0xa740b4], 0 */ W32((u32)(0xa740b4u), 0x0u);
    /* 00579abf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579ac1: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x579ac6u); f_00830cd8();
    /* 00579ac6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00579ac7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00579acb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00579ace: mov ecx, edi */ r_ecx = r_edi;
    /* 00579ad0: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x579ad5u); f_008304c8();
    /* 00579ad5: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00579ad9: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00579add: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00579adf: mov ebp, ecx */ r_ebp = r_ecx;
L_00579ae1:; BB(0x00579ae1);
    /* 00579ae1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x579ae6u); f_0082d7b0();
    /* 00579ae6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00579ae8: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x579aedu); f_008305ec();
    /* 00579aed: mov eax, dword ptr [0xa740ac] */ r_eax = R32((u32)(0xa740acu));
    /* 00579af2: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 00579af8: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00579afb: cmp esi, dword ptr [eax + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579afe: jne 0x579b57 */ if (!fZ) goto L_00579b57;
L_00579b00:; BB(0x00579b00);
    /* 00579b00: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 00579b05: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00579b09:; BB(0x00579b09);
    /* 00579b09: mov ebx, dword ptr [0xa740b0] */ r_ebx = R32((u32)(0xa740b0u));
    /* 00579b0f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579b11: je 0x579bd2 */ if (fZ) goto L_00579bd2;
L_00579b17:; BB(0x00579b17);
    /* 00579b17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579b18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579b1a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579b1c: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00579b1f: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00579b21: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00579b23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579b25: mov edx, ebx */ r_edx = r_ebx;
    /* 00579b27: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x579b2cu); f_00830aa0();
L_00579b2c:; BB(0x00579b2c);
    /* 00579b2c: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 00579b31: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 00579b37: mov ebx, dword ptr [0xa740ac] */ r_ebx = R32((u32)(0xa740acu));
    /* 00579b3d: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579b40: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579b43: cmp esi, dword ptr [ebx + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579b46: mov dword ptr [0xa740a4], eax */ W32((u32)(0xa740a4u), r_eax);
    /* 00579b4b: mov dword ptr [0xa740b4], edx */ W32((u32)(0xa740b4u), r_edx);
    /* 00579b51: je 0x579b09 */ if (fZ) goto L_00579b09;
L_00579b53:; BB(0x00579b53);
    /* 00579b53: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00579b57:; BB(0x00579b57);
    /* 00579b57: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00579b5a: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579b60: jne 0x579b6f */ if (!fZ) goto L_00579b6f;
L_00579b62:; BB(0x00579b62);
    /* 00579b62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00579b63: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00579b66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00579b68: call 0x579940 */ r_esp -= 4; W32(r_esp, 0x579b6du); f_00579940();
    /* 00579b6d: mov esi, eax */ r_esi = r_eax;
L_00579b6f:; BB(0x00579b6f);
    /* 00579b6f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x579b74u); f_0082da80();
    /* 00579b74: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00579b77: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579b79: je 0x579bc8 */ if (fZ) goto L_00579bc8;
L_00579b7b:; BB(0x00579b7b);
    /* 00579b7b: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 00579b81: cmp edx, dword ptr [0xa740a8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa740a8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579b87: jl 0x579ae1 */ if ((fS!=fO)) goto L_00579ae1;
L_00579b8d:; BB(0x00579b8d);
    /* 00579b8d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00579b91: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00579b95:; BB(0x00579b95);
    /* 00579b95: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00579b99: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 00579b9c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00579ba0: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00579ba3: cmp ebp, dword ptr [ebx + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579ba6: jl 0x579ab5 */ if ((fS!=fO)) goto L_00579ab5;
L_00579bac:; BB(0x00579bac);
    /* 00579bac: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00579bb0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00579bb3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00579bb7:; BB(0x00579bb7);
    /* 00579bb7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x579bbcu); f_0082da80();
    /* 00579bbc: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x579bc1u); f_0082faac();
    /* 00579bc1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00579bc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579bc5: ret 0x10 */ FN_RET(0x00579a28); r_esp += 20; return;
L_00579bc8:; BB(0x00579bc8);
    /* 00579bc8: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00579bcc: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00579bd0: jmp 0x579b95 */ goto L_00579b95;
L_00579bd2:; BB(0x00579bd2);
    /* 00579bd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579bd3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579bd5: mov edx, 0xa74098 */ r_edx = 0xa74098u;
    /* 00579bda: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x579bdfu); f_00830aa0();
    /* 00579bdf: jmp 0x579b2c */ goto L_00579b2c;
L_00579be4:; BB(0x00579be4);
    /* 00579be4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00579be6: jmp 0x579bb7 */ goto L_00579bb7;
}

void f_00579be8(void) /* sub_579BE8 */
{
    FN_ENTER(0x00579be8);
    /* 00579be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579be9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579bec: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00579bee: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00579bf2: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00579bf6: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00579bfa: mov dword ptr [0xa740b8], ecx */ W32((u32)(0xa740b8u), r_ecx);
    /* 00579c00: mov dword ptr [0xa740bc], ecx */ W32((u32)(0xa740bcu), r_ecx);
    /* 00579c06: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00579c08: mov dword ptr [0xa740c0], ecx */ W32((u32)(0xa740c0u), r_ecx);
    /* 00579c0e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00579c11: mov dword ptr [0xa740c4], ecx */ W32((u32)(0xa740c4u), r_ecx);
    /* 00579c17: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00579c1a: mov dword ptr [0xa740c8], eax */ W32((u32)(0xa740c8u), r_eax);
    /* 00579c1f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00579c21: mov dword ptr [0xa740cc], eax */ W32((u32)(0xa740ccu), r_eax);
    /* 00579c26: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00579c29: mov dword ptr [0xa740d0], eax */ W32((u32)(0xa740d0u), r_eax);
    /* 00579c2e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00579c31: mov dword ptr [0xa740d4], eax */ W32((u32)(0xa740d4u), r_eax);
    /* 00579c36: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x579c3bu); f_0082fa9c();
    /* 00579c3b: mov dword ptr [0xa74098], 0 */ W32((u32)(0xa74098u), 0x0u);
    /* 00579c45: mov dword ptr [0xa7409c], 0 */ W32((u32)(0xa7409cu), 0x0u);
    /* 00579c4f: mov dword ptr [0xa740a0], 0 */ W32((u32)(0xa740a0u), 0x0u);
    /* 00579c59: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00579c5c: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00579c5f: mov dword ptr [0xa740a4], eax */ W32((u32)(0xa740a4u), r_eax);
    /* 00579c64: mov dword ptr [0xa740ac], 0xa740b8 */ W32((u32)(0xa740acu), 0xa740b8u);
    /* 00579c6e: mov dword ptr [0xa740a8], edx */ W32((u32)(0xa740a8u), r_edx);
    /* 00579c74: mov dword ptr [0xa740b0], 0xa740c0 */ W32((u32)(0xa740b0u), 0xa740c0u);
    /* 00579c7e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x579c83u); f_0082d7b0();
    /* 00579c83: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00579c86: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00579c89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579c8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00579c8d: jle 0x579dd9 */ if ((fZ||fS!=fO)) goto L_00579dd9;
L_00579c93:; BB(0x00579c93);
    /* 00579c93: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00579c97: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00579c9b: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00579c9d: mov ebp, eax */ r_ebp = r_eax;
    /* 00579c9f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00579ca2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00579ca6: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00579caa:; BB(0x00579caa);
    /* 00579caa: mov dword ptr [0xa740b4], 0 */ W32((u32)(0xa740b4u), 0x0u);
    /* 00579cb4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579cb6: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x579cbbu); f_00830cd8();
    /* 00579cbb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00579cbc: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00579cc0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00579cc3: mov ecx, edi */ r_ecx = r_edi;
    /* 00579cc5: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x579ccau); f_008304c8();
    /* 00579cca: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00579cce: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00579cd2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00579cd4: mov ebp, ecx */ r_ebp = r_ecx;
L_00579cd6:; BB(0x00579cd6);
    /* 00579cd6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x579cdbu); f_0082d7b0();
    /* 00579cdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00579cdd: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x579ce2u); f_008305ec();
    /* 00579ce2: mov eax, dword ptr [0xa740ac] */ r_eax = R32((u32)(0xa740acu));
    /* 00579ce7: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 00579ced: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00579cf0: cmp esi, dword ptr [eax + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579cf3: jne 0x579d4c */ if (!fZ) goto L_00579d4c;
L_00579cf5:; BB(0x00579cf5);
    /* 00579cf5: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 00579cfa: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00579cfe:; BB(0x00579cfe);
    /* 00579cfe: mov ebx, dword ptr [0xa740b0] */ r_ebx = R32((u32)(0xa740b0u));
    /* 00579d04: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579d06: je 0x579dc7 */ if (fZ) goto L_00579dc7;
L_00579d0c:; BB(0x00579d0c);
    /* 00579d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579d0d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579d0f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579d11: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00579d14: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00579d16: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00579d18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579d1a: mov edx, ebx */ r_edx = r_ebx;
    /* 00579d1c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x579d21u); f_00830aa0();
L_00579d21:; BB(0x00579d21);
    /* 00579d21: mov eax, dword ptr [0xa740a4] */ r_eax = R32((u32)(0xa740a4u));
    /* 00579d26: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 00579d2c: mov ebx, dword ptr [0xa740ac] */ r_ebx = R32((u32)(0xa740acu));
    /* 00579d32: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579d35: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579d38: cmp esi, dword ptr [ebx + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579d3b: mov dword ptr [0xa740a4], eax */ W32((u32)(0xa740a4u), r_eax);
    /* 00579d40: mov dword ptr [0xa740b4], edx */ W32((u32)(0xa740b4u), r_edx);
    /* 00579d46: je 0x579cfe */ if (fZ) goto L_00579cfe;
L_00579d48:; BB(0x00579d48);
    /* 00579d48: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00579d4c:; BB(0x00579d4c);
    /* 00579d4c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00579d4f: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579d55: jne 0x579d64 */ if (!fZ) goto L_00579d64;
L_00579d57:; BB(0x00579d57);
    /* 00579d57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00579d58: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00579d5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00579d5d: call 0x579940 */ r_esp -= 4; W32(r_esp, 0x579d62u); f_00579940();
    /* 00579d62: mov esi, eax */ r_esi = r_eax;
L_00579d64:; BB(0x00579d64);
    /* 00579d64: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x579d69u); f_0082da80();
    /* 00579d69: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00579d6c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579d6e: je 0x579dbd */ if (fZ) goto L_00579dbd;
L_00579d70:; BB(0x00579d70);
    /* 00579d70: mov edx, dword ptr [0xa740b4] */ r_edx = R32((u32)(0xa740b4u));
    /* 00579d76: cmp edx, dword ptr [0xa740a8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa740a8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579d7c: jl 0x579cd6 */ if ((fS!=fO)) goto L_00579cd6;
L_00579d82:; BB(0x00579d82);
    /* 00579d82: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00579d86: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00579d8a:; BB(0x00579d8a);
    /* 00579d8a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00579d8e: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 00579d91: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00579d95: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00579d98: cmp ebp, dword ptr [ebx + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579d9b: jl 0x579caa */ if ((fS!=fO)) goto L_00579caa;
L_00579da1:; BB(0x00579da1);
    /* 00579da1: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00579da5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00579da8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00579dac:; BB(0x00579dac);
    /* 00579dac: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x579db1u); f_0082da80();
    /* 00579db1: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x579db6u); f_0082faac();
    /* 00579db6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00579db9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579dba: ret 0x14 */ FN_RET(0x00579be8); r_esp += 24; return;
L_00579dbd:; BB(0x00579dbd);
    /* 00579dbd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00579dc1: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00579dc5: jmp 0x579d8a */ goto L_00579d8a;
L_00579dc7:; BB(0x00579dc7);
    /* 00579dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579dc8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00579dca: mov edx, 0xa74098 */ r_edx = 0xa74098u;
    /* 00579dcf: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x579dd4u); f_00830aa0();
    /* 00579dd4: jmp 0x579d21 */ goto L_00579d21;
L_00579dd9:; BB(0x00579dd9);
    /* 00579dd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00579ddb: jmp 0x579dac */ goto L_00579dac;
}

void f_00579de0(void) /* sub_579DE0 */
{
    FN_ENTER(0x00579de0);
    /* 00579de0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579de3: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00579de7: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00579dea: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00579dec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00579dee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00579def: ja 0x579dfd */ if ((!fC&&!fZ)) goto L_00579dfd;
L_00579df1:; BB(0x00579df1);
    /* 00579df1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00579df3: fcom dword ptr [ecx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x10u))); 
    /* 00579df6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00579df8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00579df9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00579dfb: jbe 0x579e09 */ if ((fC||fZ)) goto L_00579e09;
L_00579dfd:; BB(0x00579dfd);
    /* 00579dfd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00579dff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00579e01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00579e06: ret 4 */ FN_RET(0x00579de0); r_esp += 8; return;
L_00579e09:; BB(0x00579e09);
    /* 00579e09: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00579e0b: fadd dword ptr [0x927500] */ ST(0) = ST(0) + R_F32((u32)(0x927500u));
    /* 00579e11: fdiv dword ptr [ecx + 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_ecx+0x14u));
    /* 00579e14: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00579e17: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00579e1b: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00579e20: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00579e25: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00579e29: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00579e2d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00579e31: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00579e34: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00579e38: imul edx, dword ptr [ecx + 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00579e3c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579e3e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579e40: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00579e43: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579e45: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579e47: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00579e4a: ret 4 */ FN_RET(0x00579de0); r_esp += 8; return;
}

void f_00579e50(void) /* sub_579E50 */
{
    FN_ENTER(0x00579e50);
    /* 00579e50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00579e51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00579e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00579e55: call 0x579e74 */ r_esp -= 4; W32(r_esp, 0x579e5au); f_00579e74();
    /* 00579e5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00579e5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00579e60: jne 0x579e66 */ if (!fZ) goto L_00579e66;
L_00579e62:; BB(0x00579e62);
    /* 00579e62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579e63: ret 4 */ FN_RET(0x00579e50); r_esp += 8; return;
L_00579e66:; BB(0x00579e66);
    /* 00579e66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00579e67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x579e6cu); f_005c2f74();
    /* 00579e6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579e6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00579e6e: ret 4 */ FN_RET(0x00579e50); r_esp += 8; return;
}

void f_00579e74(void) /* sub_579E74 */
{
    FN_ENTER(0x00579e74);
    /* 00579e74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579e75: mov ebp, esp */ r_ebp = r_esp;
    /* 00579e77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00579e79: push 0x8d783c */ { u32 v = 0x8d783cu; r_esp -= 4; W32(r_esp, v); }
    /* 00579e7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00579e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579e85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00579e8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579e8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00579e92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00579e95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00579e98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00579e9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00579e9e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00579ea5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579ea8: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 00579eae: mov dword ptr [ecx], 0xb070c0 */ W32((u32)(r_ecx), 0xb070c0u);
    /* 00579eb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579eb6: je 0x579ed2 */ if (fZ) goto L_00579ed2;
L_00579eb8:; BB(0x00579eb8);
    /* 00579eb8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579ebb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00579ebf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00579ec4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00579ec8: mov dword ptr [ecx + 0x49c], 0 */ W32((u32)(r_ecx+0x49cu), 0x0u);
L_00579ed2:; BB(0x00579ed2);
    /* 00579ed2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x579ed7u); f_007b9c8c();
    /* 00579ed7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00579ede: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00579ee3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579ee6: add eax, 0x42c */ {  u32 a = r_eax; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579eeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00579eed: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00579eef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579ef0: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x579ef5u); f_008586d6();
    /* 00579ef5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00579efc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579eff: add ecx, 0x410 */ {  u32 a = r_ecx; u32 b = 0x410u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00579f05: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x579f0au); f_005769f8();
    /* 00579f0a: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00579f11: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579f14: add ecx, 0x3f4 */ {  u32 a = r_ecx; u32 b = 0x3f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00579f1a: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x579f1fu); f_005122a8();
    /* 00579f1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00579f26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00579f29: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x579f2eu); f_0051f4fc();
    /* 00579f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00579f38: mov esp, ebp */ r_esp = r_ebp;
    /* 00579f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579f3b: ret  */ FN_RET(0x00579e74); r_esp += 4; return;
}

void f_00579f3c(void) /* sub_579F3C */
{
    FN_ENTER(0x00579f3c);
    /* 00579f3c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579f3f: mov eax, dword ptr [0xa74134] */ r_eax = R32((u32)(0xa74134u));
    /* 00579f44: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579f47: je 0x579f4e */ if (fZ) goto L_00579f4e;
L_00579f49:; BB(0x00579f49);
    /* 00579f49: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579f4c: jne 0x579f89 */ if (!fZ) goto L_00579f89;
L_00579f4e:; BB(0x00579f4e);
    /* 00579f4e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00579f55: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00579f58: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00579f60: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00579f68: push dword ptr [0xa74130] */ { u32 v = R32((u32)(0xa74130u)); r_esp -= 4; W32(r_esp, v); }
    /* 00579f6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579f6f: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x579f74u); f_00520c5c();
    /* 00579f74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579f77: mov eax, dword ptr [0xa74130] */ r_eax = R32((u32)(0xa74130u));
    /* 00579f7c: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579f7f: mov dword ptr [0xa74130], eax */ W32((u32)(0xa74130u), r_eax);
    /* 00579f84: mov eax, dword ptr [0xa74134] */ r_eax = R32((u32)(0xa74134u));
L_00579f89:; BB(0x00579f89);
    /* 00579f89: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579f8c: mov dword ptr [0xa74134], eax */ W32((u32)(0xa74134u), r_eax);
    /* 00579f91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00579f94: ret  */ FN_RET(0x00579f3c); r_esp += 4; return;
}

void f_00579f98(void) /* sub_579F98 */
{
    FN_ENTER(0x00579f98);
    /* 00579f98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00579f99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00579f9a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579f9d: mov esi, ecx */ r_esi = r_ecx;
    /* 00579f9f: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00579fa3: fld dword ptr [0x9276a8] */ FPUSH(R_F32((u32)(0x9276a8u)));
    /* 00579fa9: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00579fad: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579faf: je 0x57a021 */ if (fZ) goto L_0057a021;
L_00579fb1:; BB(0x00579fb1);
    /* 00579fb1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00579fb4: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00579fba: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00579fbd: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 00579fc3: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00579fc9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00579fcd: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00579fd3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00579fd7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x579fdcu); f_0082f9c4();
    /* 00579fdc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00579fdf: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00579fe3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00579fe5: fmul qword ptr [0x9275e8] */ ST(0) = ST(0) * R_F64((u32)(0x9275e8u));
    /* 00579feb: fdiv qword ptr [0x9275e0] */ ST(0) = ST(0) / R_F64((u32)(0x9275e0u));
    /* 00579ff1: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00579ff5: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00579ffa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00579fff: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0057a003: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0057a007: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0057a00b: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0057a00f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0057a013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a014: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a017: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x57a01cu); f_007a9018();
    /* 0057a01c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a01f: jmp 0x57a023 */ goto L_0057a023;
L_0057a021:; BB(0x0057a021);
    /* 0057a021: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0057a023:; BB(0x0057a023);
    /* 0057a023: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0057a029: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057a02c: je 0x57a075 */ if (fZ) goto L_0057a075;
L_0057a02e:; BB(0x0057a02e);
    /* 0057a02e: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057a033: jge 0x57a056 */ if ((fS==fO)) goto L_0057a056;
L_0057a035:; BB(0x0057a035);
    /* 0057a035: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a03a: add esi, 0x4a0 */ {  u32 a = r_esi; u32 b = 0x4a0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057a040: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a041: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57a046u); f_0050b510();
    /* 0057a046: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 0057a04b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a04c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57a051u); f_0050b510();
    /* 0057a051: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a054: jmp 0x57a086 */ goto L_0057a086;
L_0057a056:; BB(0x0057a056);
    /* 0057a056: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0057a05a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a05b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a05c: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057a05f: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057a062: mov dword ptr [esi + 0x3c8], edx */ W32((u32)(r_esi+0x3c8u), r_edx);
    /* 0057a068: mov ecx, esi */ r_ecx = r_esi;
    /* 0057a06a: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x57a06fu); f_007732b8();
    /* 0057a06f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0057a073: jmp 0x57a086 */ goto L_0057a086;
L_0057a075:; BB(0x0057a075);
    /* 0057a075: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0057a079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a07a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a07b: mov ecx, esi */ r_ecx = r_esi;
    /* 0057a07d: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x57a082u); f_007732b8();
    /* 0057a082: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_0057a086:; BB(0x0057a086);
    /* 0057a086: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0057a08a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a08d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057a08e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a08f: ret 8 */ FN_RET(0x00579f98); r_esp += 12; return;
}

