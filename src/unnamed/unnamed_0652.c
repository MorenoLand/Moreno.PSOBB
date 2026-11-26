#include "protos.h"

void f_00652140(void)
{
    FN_ENTER(0x00652140);
    /* 00652140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652141: mov ebp, esp */ r_ebp = r_esp;
    /* 00652143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652145: push 0x8e69dc */ { u32 v = 0x8e69dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065214a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652151: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00652158: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065215b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065215e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00652161: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00652164: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00652167: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 0065216c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00652173: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x652178u); f_005caba4();
    /* 00652178: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652179: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065217c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065217e: je 0x6521b7 */ if (fZ) goto L_006521b7;
L_00652180:; BB(0x00652180);
    /* 00652180: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00652187: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065218e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652191: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652197: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065219a: call 0x6521bc */ r_esp -= 4; W32(r_esp, 0x65219fu); f_006521bc();
    /* 0065219f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006521a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006521a9:; BB(0x006521a9);
    /* 006521a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006521ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006521b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006521b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006521b6: ret  */ FN_RET(0x00652140); r_esp += 4; return;
L_006521b7:; BB(0x006521b7);
    /* 006521b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006521b9: jmp 0x6521a9 */ goto L_006521a9;
}

void f_006521bc(void) /* sub_6521BC */
{
    FN_ENTER(0x006521bc);
    /* 006521bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006521bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006521bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006521c1: push 0x8e69f8 */ { u32 v = 0x8e69f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006521c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006521cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006521cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006521d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006521d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006521da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006521dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006521e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006521e3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006521e6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006521e9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006521ec: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x6521f1u); f_0064df84();
    /* 006521f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006521f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006521fb: mov dword ptr [ecx], 0xb31700 */ W32((u32)(r_ecx), 0xb31700u);
    /* 00652201: mov eax, dword ptr [0x9c792c] */ r_eax = R32((u32)(0x9c792cu));
    /* 00652206: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652208: push 0x9c7938 */ { u32 v = 0x9c7938u; r_esp -= 4; W32(r_esp, v); }
    /* 0065220d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00652210: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x652215u); f_007b9a88();
    /* 00652215: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652218: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65221du); f_007b4f54();
    /* 0065221d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652220: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00652223: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00652226: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00652229: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0065222c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065222f: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 00652232: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00652235: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652238: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0065223b: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0065223e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00652241: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 00652247: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065224a: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 00652250: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652253: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 00652259: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065225c: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 0065225f: fadd dword ptr [0x9c793c] */ ST(0) = ST(0) + R_F32((u32)(0x9c793cu));
    /* 00652265: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 00652268: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065226b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652272: mov esp, ebp */ r_esp = r_ebp;
    /* 00652274: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652275: ret 8 */ FN_RET(0x006521bc); r_esp += 12; return;
}

void f_00652278(void) /* sub_652278 */
{
    FN_ENTER(0x00652278);
    /* 00652278: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 0065227e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652280: je 0x652289 */ if (fZ) goto L_00652289;
L_00652282:; BB(0x00652282);
    /* 00652282: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652284: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x652289u); f_004066a8();
L_00652289:; BB(0x00652289);
    /* 00652289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065228b: mov dword ptr [0xa8f698], eax */ W32((u32)(0xa8f698u), r_eax);
    /* 00652290: mov dword ptr [0xa8f694], eax */ W32((u32)(0xa8f694u), r_eax);
    /* 00652295: ret  */ FN_RET(0x00652278); r_esp += 4; return;
}

void f_00652298(void) /* sub_652298 */
{
    FN_ENTER(0x00652298);
    /* 00652298: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00652299: mov edi, ecx */ r_edi = r_ecx;
    /* 0065229b: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 006522a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006522a4: jne 0x652332 */ if (!fZ) goto L_00652332;
L_006522aa:; BB(0x006522aa);
    /* 006522aa: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 006522b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006522b2: je 0x65233c */ if (fZ) goto L_0065233c;
L_006522b8:; BB(0x006522b8);
    /* 006522b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006522ba: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6522bfu); f_005b8624();
L_006522bf:; BB(0x006522bf);
    /* 006522bf: mov ecx, eax */ r_ecx = r_eax;
    /* 006522c1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6522c6u); f_00829cc8();
    /* 006522c6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6522cbu); f_0082d7b0();
    /* 006522cb: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006522ce: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6522d3u); f_0082d838();
    /* 006522d3: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006522d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006522d8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6522ddu); f_0082d8bc();
    /* 006522dd: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 006522e2: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 006522e7: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 006522ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006522ee: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6522f3u); f_0082fa0c();
    /* 006522f3: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 006522f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006522fb: je 0x652338 */ if (fZ) goto L_00652338;
L_006522fd:; BB(0x006522fd);
    /* 006522fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006522ff: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x652304u); f_005b8610();
L_00652304:; BB(0x00652304);
    /* 00652304: mov ecx, eax */ r_ecx = r_eax;
    /* 00652306: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65230bu); f_00831758();
    /* 0065230b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x652310u); f_0082dbac();
    /* 00652310: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 00652316: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652318: je 0x652334 */ if (fZ) goto L_00652334;
L_0065231a:; BB(0x0065231a);
    /* 0065231a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065231c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x652321u); f_005b8610();
L_00652321:; BB(0x00652321);
    /* 00652321: mov ecx, eax */ r_ecx = r_eax;
    /* 00652323: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x652328u); f_00831758();
    /* 00652328: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65232du); f_0082dab0();
    /* 0065232d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x652332u); f_0082da80();
L_00652332:; BB(0x00652332);
    /* 00652332: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00652333: ret  */ FN_RET(0x00652298); r_esp += 4; return;
L_00652334:; BB(0x00652334);
    /* 00652334: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652336: jmp 0x652321 */ goto L_00652321;
L_00652338:; BB(0x00652338);
    /* 00652338: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065233a: jmp 0x652304 */ goto L_00652304;
L_0065233c:; BB(0x0065233c);
    /* 0065233c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065233e: jmp 0x6522bf */ goto L_006522bf;
}

void f_00652344(void) /* sub_652344 */
{
    FN_ENTER(0x00652344);
    /* 00652344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652345: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00652347: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0065234b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0065234f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652351: je 0x65235d */ if (fZ) goto L_0065235d;
L_00652353:; BB(0x00652353);
    /* 00652353: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00652356: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00652359: jne 0x652365 */ if (!fZ) goto L_00652365;
L_0065235b:; BB(0x0065235b);
    /* 0065235b: jmp 0x652369 */ goto L_00652369;
L_0065235d:; BB(0x0065235d);
    /* 0065235d: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00652360: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00652363: je 0x6523a0 */ if (fZ) goto L_006523a0;
L_00652365:; BB(0x00652365);
    /* 00652365: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652366: ret 8 */ FN_RET(0x00652344); r_esp += 12; return;
L_00652369:; BB(0x00652369);
    /* 00652369: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0065236c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065236e: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x652374u); call_ind(t); }
    /* 00652374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652375: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00652377: call 0x64eb14 */ r_esp -= 4; W32(r_esp, 0x65237cu); f_0064eb14();
    /* 0065237c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065237d: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x652382u); f_008113bc();
    /* 00652382: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652383: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00652387: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065238c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00652390: mov edx, 1 */ r_edx = 0x1u;
    /* 00652395: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 0065239c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065239d: ret 8 */ FN_RET(0x00652344); r_esp += 12; return;
L_006523a0:; BB(0x006523a0);
    /* 006523a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006523a1: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x6523a6u); f_008113bc();
    /* 006523a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006523a7: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006523ab: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006523b0: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006523b4: mov edx, 1 */ r_edx = 0x1u;
    /* 006523b9: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 006523c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006523c1: ret 8 */ FN_RET(0x00652344); r_esp += 12; return;
}

void f_006523c4(void) /* sub_6523C4 */
{
    FN_ENTER(0x006523c4);
    /* 006523c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006523c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006523c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006523c9: push 0x8e6a3a */ { u32 v = 0x8e6a3au; r_esp -= 4; W32(r_esp, v); }
    /* 006523ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006523d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006523d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006523dc: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006523e2: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006523e5: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006523e8: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006523eb: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006523ee: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006523f1: mov eax, 0x936f40 */ r_eax = 0x936f40u;
    /* 006523f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006523f8: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 006523fe: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00652401: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00652407: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0065240a: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00652410: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00652413: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00652419: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065241c: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00652422: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00652425: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0065242b: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065242e: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00652434: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00652437: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0065243d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00652440: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00652446: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00652449: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0065244f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00652452: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00652458: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0065245b: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00652461: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00652464: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0065246a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065246d: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00652473: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00652476: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0065247c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0065247f: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00652485: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00652488: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0065248e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00652491: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00652494: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00652497: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0065249a: mov edx, ecx */ r_edx = r_ecx;
    /* 0065249c: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0065249f: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 006524a2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 006524a5: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 006524ab: mov dword ptr [ebp - 0xb4], ebx */ W32((u32)(r_ebp+0xffffff4cu), r_ebx);
    /* 006524b1: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 006524b7: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 006524bd: mov dword ptr [ebp - 0x8c], ebx */ W32((u32)(r_ebp+0xffffff74u), r_ebx);
    /* 006524c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006524c5: je 0x65268f */ if (fZ) goto L_0065268f;
L_006524cb:; BB(0x006524cb);
    /* 006524cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006524cd: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6524d2u); f_005b8610();
    /* 006524d2: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
L_006524d8:; BB(0x006524d8);
    /* 006524d8: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006524de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006524e0: je 0x652688 */ if (fZ) goto L_00652688;
L_006524e6:; BB(0x006524e6);
    /* 006524e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006524e8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6524edu); f_005b8624();
L_006524ed:; BB(0x006524ed);
    /* 006524ed: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006524f0: mov eax, 0x936ee0 */ r_eax = 0x936ee0u;
    /* 006524f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006524f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006524fa: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006524fd: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00652500: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00652503: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00652506: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00652509: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0065250c: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0065250f: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00652512: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 00652515: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00652518: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065251b: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0065251e: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00652521: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00652524: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00652527: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0065252a: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0065252d: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00652530: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00652533: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00652536: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00652539: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065253c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065253f: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00652542: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00652545: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00652548: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0065254b: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065254e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00652551: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00652554: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00652557: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0065255a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0065255d: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00652560: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00652563: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00652566: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652569: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0065256c: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0065256f: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00652572: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00652575: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 00652578: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0065257b: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 00652581: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00652584: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652586: je 0x652681 */ if (fZ) goto L_00652681;
L_0065258c:; BB(0x0065258c);
    /* 0065258c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065258e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x652593u); f_005b8610();
    /* 00652593: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
L_00652599:; BB(0x00652599);
    /* 00652599: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0065259c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065259e: je 0x65267a */ if (fZ) goto L_0065267a;
L_006525a4:; BB(0x006525a4);
    /* 006525a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006525a6: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6525abu); f_005b8624();
L_006525ab:; BB(0x006525ab);
    /* 006525ab: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006525ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006525b1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006525b3: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 006525b6: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006525b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006525b9: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6525beu); f_0050b7a4();
    /* 006525be: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006525c0: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006525c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006525c3: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6525c8u); f_0050b7a4();
    /* 006525c8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006525cf: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 006525d4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6525d9u); f_005caba4();
    /* 006525d9: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006525dc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006525df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006525e1: je 0x65260d */ if (fZ) goto L_0065260d;
L_006525e3:; BB(0x006525e3);
    /* 006525e3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006525ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006525f1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006525f4: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 006525fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006525fb: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652601: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x652606u); f_006441f4();
    /* 00652606: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0065260d:; BB(0x0065260d);
    /* 0065260d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652614: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065261b: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00652620: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x652625u); f_005caba4();
    /* 00652625: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652626: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00652629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065262b: je 0x652654 */ if (fZ) goto L_00652654;
L_0065262d:; BB(0x0065262d);
    /* 0065262d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00652634: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065263b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065263e: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00652641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652642: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652648: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x65264du); f_006441f4();
    /* 0065264d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00652654:; BB(0x00652654);
    /* 00652654: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065265b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065265e: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x652663u); f_0064de10();
    /* 00652663: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652666: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652669: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065266c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065266f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652676: mov esp, ebp */ r_esp = r_ebp;
    /* 00652678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652679: ret  */ FN_RET(0x006523c4); r_esp += 4; return;
L_0065267a:; BB(0x0065267a);
    /* 0065267a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065267c: jmp 0x6525ab */ goto L_006525ab;
L_00652681:; BB(0x00652681);
    /* 00652681: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652683: jmp 0x652599 */ goto L_00652599;
L_00652688:; BB(0x00652688);
    /* 00652688: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065268a: jmp 0x6524ed */ goto L_006524ed;
L_0065268f:; BB(0x0065268f);
    /* 0065268f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652691: jmp 0x6524d8 */ goto L_006524d8;
}

void f_00652698(void)
{
    FN_ENTER(0x00652698);
    /* 00652698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652699: mov ebp, esp */ r_ebp = r_esp;
    /* 0065269b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065269d: push 0x8e6a60 */ { u32 v = 0x8e6a60u; r_esp -= 4; W32(r_esp, v); }
    /* 006526a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006526a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006526a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006526b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006526b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006526b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006526b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006526bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006526bf: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 006526c4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006526cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6526d0u); f_005caba4();
    /* 006526d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006526d1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006526d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006526d6: je 0x65270f */ if (fZ) goto L_0065270f;
L_006526d8:; BB(0x006526d8);
    /* 006526d8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006526df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006526e6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006526e9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006526ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006526f2: call 0x652714 */ r_esp -= 4; W32(r_esp, 0x6526f7u); f_00652714();
    /* 006526f7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006526fa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00652701:; BB(0x00652701);
    /* 00652701: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652704: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065270b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065270d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065270e: ret  */ FN_RET(0x00652698); r_esp += 4; return;
L_0065270f:; BB(0x0065270f);
    /* 0065270f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00652711: jmp 0x652701 */ goto L_00652701;
}

void f_00652714(void) /* sub_652714 */
{
    FN_ENTER(0x00652714);
    /* 00652714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652715: mov ebp, esp */ r_ebp = r_esp;
    /* 00652717: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652719: push 0x8e6a7c */ { u32 v = 0x8e6a7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065271e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652725: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065272c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065272f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00652732: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00652735: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00652738: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065273b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065273e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652741: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00652744: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x652749u); f_0064df84();
    /* 00652749: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652750: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652753: mov dword ptr [ecx], 0xb31860 */ W32((u32)(r_ecx), 0xb31860u);
    /* 00652759: mov eax, dword ptr [0x9c7930] */ r_eax = R32((u32)(0x9c7930u));
    /* 0065275e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652760: push 0x9c7938 */ { u32 v = 0x9c7938u; r_esp -= 4; W32(r_esp, v); }
    /* 00652765: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00652768: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65276du); f_007b9a88();
    /* 0065276d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652770: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x652775u); f_007b4f54();
    /* 00652775: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652778: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0065277b: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0065277e: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00652781: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 00652784: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652787: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0065278a: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0065278d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652790: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 00652793: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00652796: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00652799: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 0065279f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006527a2: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 006527a8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006527ab: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 006527b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006527b4: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 006527b7: fadd dword ptr [0x9c793c] */ ST(0) = ST(0) + R_F32((u32)(0x9c793cu));
    /* 006527bd: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 006527c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006527c3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006527ca: mov esp, ebp */ r_esp = r_ebp;
    /* 006527cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006527cd: ret 8 */ FN_RET(0x00652714); r_esp += 12; return;
}

void f_006527d0(void) /* sub_6527D0 */
{
    FN_ENTER(0x006527d0);
    /* 006527d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006527d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006527d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006527d5: call 0x652804 */ r_esp -= 4; W32(r_esp, 0x6527dau); f_00652804();
    /* 006527da: push dword ptr [ebp + 0x84] */ { u32 v = R32((u32)(r_ebp+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 006527e0: push 0x9307b0 */ { u32 v = 0x9307b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006527e5: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 006527ea: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6527efu); f_0061cdb0();
    /* 006527ef: push 0x937160 */ { u32 v = 0x937160u; r_esp -= 4; W32(r_esp, v); }
    /* 006527f4: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 006527f9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6527feu); f_0061cdb0();
    /* 006527fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00652801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652802: ret  */ FN_RET(0x006527d0); r_esp += 4; return;
}

void f_00652804(void) /* sub_652804 */
{
    FN_ENTER(0x00652804);
    /* 00652804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00652805: mov edi, ecx */ r_edi = r_ecx;
    /* 00652807: mov ecx, dword ptr [edi + 0x88] */ r_ecx = R32((u32)(r_edi+0x88u));
    /* 0065280d: mov eax, 1 */ r_eax = 0x1u;
    /* 00652812: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652815: mov edx, 0 */ r_edx = 0x0u;
    /* 0065281a: jl 0x65281e */ if ((fS!=fO)) goto L_0065281e;
L_0065281c:; BB(0x0065281c);
    /* 0065281c: mov ecx, eax */ r_ecx = r_eax;
L_0065281e:; BB(0x0065281e);
    /* 0065281e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00652820: jg 0x652824 */ if ((!fZ&&fS==fO)) goto L_00652824;
L_00652822:; BB(0x00652822);
    /* 00652822: mov ecx, edx */ r_ecx = r_edx;
L_00652824:; BB(0x00652824);
    /* 00652824: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652826: jne 0x65289e */ if (!fZ) goto L_0065289e;
L_00652828:; BB(0x00652828);
    /* 00652828: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 0065282e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652830: je 0x652929 */ if (fZ) goto L_00652929;
L_00652836:; BB(0x00652836);
    /* 00652836: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652838: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65283du); f_005b8610();
L_0065283d:; BB(0x0065283d);
    /* 0065283d: mov dword ptr [edi + 0x370], eax */ W32((u32)(r_edi+0x370u), r_eax);
    /* 00652843: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 00652849: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065284b: je 0x652922 */ if (fZ) goto L_00652922;
L_00652851:; BB(0x00652851);
    /* 00652851: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652853: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x652858u); f_005b8610();
L_00652858:; BB(0x00652858);
    /* 00652858: mov dword ptr [edi + 0x374], eax */ W32((u32)(r_edi+0x374u), r_eax);
    /* 0065285e: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 00652864: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652866: je 0x65291b */ if (fZ) goto L_0065291b;
L_0065286c:; BB(0x0065286c);
    /* 0065286c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065286e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x652873u); f_005b8610();
L_00652873:; BB(0x00652873);
    /* 00652873: mov dword ptr [edi + 0x378], eax */ W32((u32)(r_edi+0x378u), r_eax);
    /* 00652879: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 0065287f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652881: je 0x652914 */ if (fZ) goto L_00652914;
L_00652887:; BB(0x00652887);
    /* 00652887: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00652889: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65288eu); f_005b8610();
L_0065288e:; BB(0x0065288e);
    /* 0065288e: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00652894: mov eax, dword ptr [0xa8f694] */ r_eax = R32((u32)(0xa8f694u));
    /* 00652899: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0065289c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065289d: ret  */ FN_RET(0x00652804); r_esp += 4; return;
L_0065289e:; BB(0x0065289e);
    /* 0065289e: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 006528a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006528a6: je 0x652940 */ if (fZ) goto L_00652940;
L_006528ac:; BB(0x006528ac);
    /* 006528ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006528ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6528b3u); f_005b8610();
L_006528b3:; BB(0x006528b3);
    /* 006528b3: mov dword ptr [edi + 0x370], eax */ W32((u32)(r_edi+0x370u), r_eax);
    /* 006528b9: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 006528bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006528c1: je 0x65293c */ if (fZ) goto L_0065293c;
L_006528c3:; BB(0x006528c3);
    /* 006528c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006528c5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6528cau); f_005b8610();
L_006528ca:; BB(0x006528ca);
    /* 006528ca: mov dword ptr [edi + 0x374], eax */ W32((u32)(r_edi+0x374u), r_eax);
    /* 006528d0: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 006528d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006528d8: je 0x652938 */ if (fZ) goto L_00652938;
L_006528da:; BB(0x006528da);
    /* 006528da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006528dc: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6528e1u); f_005b8610();
L_006528e1:; BB(0x006528e1);
    /* 006528e1: mov dword ptr [edi + 0x378], eax */ W32((u32)(r_edi+0x378u), r_eax);
    /* 006528e7: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 006528ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006528ef: je 0x652934 */ if (fZ) goto L_00652934;
L_006528f1:; BB(0x006528f1);
    /* 006528f1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006528f3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6528f8u); f_005b8610();
L_006528f8:; BB(0x006528f8);
    /* 006528f8: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 006528fe: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 00652904: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652906: je 0x652930 */ if (fZ) goto L_00652930;
L_00652908:; BB(0x00652908);
    /* 00652908: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065290a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65290fu); f_005b8624();
L_0065290f:; BB(0x0065290f);
    /* 0065290f: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00652912: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00652913: ret  */ FN_RET(0x00652804); r_esp += 4; return;
L_00652914:; BB(0x00652914);
    /* 00652914: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00652916: jmp 0x65288e */ goto L_0065288e;
L_0065291b:; BB(0x0065291b);
    /* 0065291b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065291d: jmp 0x652873 */ goto L_00652873;
L_00652922:; BB(0x00652922);
    /* 00652922: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652924: jmp 0x652858 */ goto L_00652858;
L_00652929:; BB(0x00652929);
    /* 00652929: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065292b: jmp 0x65283d */ goto L_0065283d;
L_00652930:; BB(0x00652930);
    /* 00652930: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00652932: jmp 0x65290f */ goto L_0065290f;
L_00652934:; BB(0x00652934);
    /* 00652934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652936: jmp 0x6528f8 */ goto L_006528f8;
L_00652938:; BB(0x00652938);
    /* 00652938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065293a: jmp 0x6528e1 */ goto L_006528e1;
L_0065293c:; BB(0x0065293c);
    /* 0065293c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065293e: jmp 0x6528ca */ goto L_006528ca;
L_00652940:; BB(0x00652940);
    /* 00652940: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652942: jmp 0x6528b3 */ goto L_006528b3;
}

void f_00652948(void) /* sub_652948 */
{
    FN_ENTER(0x00652948);
    /* 00652948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00652949: mov edi, ecx */ r_edi = r_ecx;
    /* 0065294b: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00652952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00652954: jne 0x6529b0 */ if (!fZ) goto L_006529b0;
L_00652956:; BB(0x00652956);
    /* 00652956: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00652959: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65295eu); f_00829cc8();
    /* 0065295e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x652963u); f_0082d7b0();
    /* 00652963: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00652966: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65296bu); f_0082d838();
    /* 0065296b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065296e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00652970: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x652975u); f_0082d8bc();
    /* 00652975: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 0065297a: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 0065297f: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 00652984: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00652986: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x65298bu); f_0082fa0c();
    /* 0065298b: mov ecx, dword ptr [edi + 0x370] */ r_ecx = R32((u32)(r_edi+0x370u));
    /* 00652991: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x652996u); f_00831758();
    /* 00652996: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65299bu); f_0082dbac();
    /* 0065299b: mov ecx, dword ptr [edi + 0x37c] */ r_ecx = R32((u32)(r_edi+0x37cu));
    /* 006529a1: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6529a6u); f_00831758();
    /* 006529a6: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6529abu); f_0082dab0();
    /* 006529ab: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6529b0u); f_0082da80();
L_006529b0:; BB(0x006529b0);
    /* 006529b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006529b1: ret  */ FN_RET(0x00652948); r_esp += 4; return;
}

void f_006529b4(void) /* sub_6529B4 */
{
    FN_ENTER(0x006529b4);
    /* 006529b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006529b5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006529b8: mov edi, ecx */ r_edi = r_ecx;
    /* 006529ba: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006529be: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006529c3: jl 0x652a93 */ if ((fS!=fO)) goto L_00652a93;
L_006529c9:; BB(0x006529c9);
    /* 006529c9: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 006529cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006529d1: je 0x652a93 */ if (fZ) goto L_00652a93;
L_006529d7:; BB(0x006529d7);
    /* 006529d7: je 0x652aa0 */ if (fZ) goto L_00652aa0;
L_006529dd:; BB(0x006529dd);
    /* 006529dd: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006529e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006529e3: jl 0x652a14 */ if ((fS!=fO)) goto L_00652a14;
L_006529e5:; BB(0x006529e5);
    /* 006529e5: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006529eb: jg 0x652a14 */ if ((!fZ&&fS==fO)) goto L_00652a14;
L_006529ed:; BB(0x006529ed);
    /* 006529ed: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 006529f3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006529f7: movzx eax, word ptr [ecx + edx*4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*4));
    /* 006529fb: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 006529ff: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00652a03: movzx edx, word ptr [ecx + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_edx*4+0x2u));
    /* 00652a08: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00652a0d: mov edx, 1 */ r_edx = 0x1u;
    /* 00652a12: jmp 0x652a16 */ goto L_00652a16;
L_00652a14:; BB(0x00652a14);
    /* 00652a14: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00652a16:; BB(0x00652a16);
    /* 00652a16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652a18: je 0x652a93 */ if (fZ) goto L_00652a93;
L_00652a1a:; BB(0x00652a1a);
    /* 00652a1a: mov edx, 1 */ r_edx = 0x1u;
    /* 00652a1f: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00652a23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652a25: je 0x652a4e */ if (fZ) goto L_00652a4e;
L_00652a27:; BB(0x00652a27);
    /* 00652a27: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00652a2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00652a2d: jl 0x652a4e */ if ((fS!=fO)) goto L_00652a4e;
L_00652a2f:; BB(0x00652a2f);
    /* 00652a2f: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652a35: jg 0x652a4e */ if ((!fZ&&fS==fO)) goto L_00652a4e;
L_00652a37:; BB(0x00652a37);
    /* 00652a37: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00652a3c: movzx ecx, word ptr [esp] */ r_ecx = (u32)R16((u32)(r_esp));
    /* 00652a40: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 00652a44: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 00652a49: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
L_00652a4e:; BB(0x00652a4e);
    /* 00652a4e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00652a51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652a52: mov ecx, edi */ r_ecx = r_edi;
    /* 00652a54: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x652a59u); f_007b5038();
    /* 00652a59: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00652a5f: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 00652a65: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00652a69: mov edi, dword ptr [edi + 0x84] */ r_edi = R32((u32)(r_edi+0x84u));
    /* 00652a6f: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00652a74: mov byte ptr [esp + 4], 0x67 */ W8((u32)(r_esp+0x4u), 0x67u);
    /* 00652a79: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00652a7d: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 00652a82: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00652a86: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00652a8a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00652a8e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x652a93u); f_008003e0();
L_00652a93:; BB(0x00652a93);
    /* 00652a93: fld dword ptr [0x937058] */ FPUSH(R_F32((u32)(0x937058u)));
    /* 00652a99: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00652a9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00652a9d: ret 8 */ FN_RET(0x006529b4); r_esp += 12; return;
L_00652aa0:; BB(0x00652aa0);
    /* 00652aa0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00652aa2: jmp 0x652a16 */ goto L_00652a16;
}

void f_00652aa8(void) /* sub_652AA8 */
{
    FN_ENTER(0x00652aa8);
    /* 00652aa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652aa9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00652aab: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00652aaf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00652ab3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652ab5: je 0x652ac1 */ if (fZ) goto L_00652ac1;
L_00652ab7:; BB(0x00652ab7);
    /* 00652ab7: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00652aba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00652abd: jne 0x652ac9 */ if (!fZ) goto L_00652ac9;
L_00652abf:; BB(0x00652abf);
    /* 00652abf: jmp 0x652acd */ goto L_00652acd;
L_00652ac1:; BB(0x00652ac1);
    /* 00652ac1: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00652ac4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00652ac7: je 0x652b07 */ if (fZ) goto L_00652b07;
L_00652ac9:; BB(0x00652ac9);
    /* 00652ac9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652aca: ret 8 */ FN_RET(0x00652aa8); r_esp += 12; return;
L_00652acd:; BB(0x00652acd);
    /* 00652acd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00652ad0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00652ad2: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x652ad8u); call_ind(t); }
    /* 00652ad8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652ada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652adc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00652ade: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x652ae3u); f_007b52ec();
    /* 00652ae3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652ae4: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x652ae9u); f_008113bc();
    /* 00652ae9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652aea: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00652aee: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00652af3: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00652af7: mov edx, 1 */ r_edx = 0x1u;
    /* 00652afc: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 00652b03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652b04: ret 8 */ FN_RET(0x00652aa8); r_esp += 12; return;
L_00652b07:; BB(0x00652b07);
    /* 00652b07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652b09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652b0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00652b0d: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x652b12u); f_007b52ec();
    /* 00652b12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652b13: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x652b18u); f_008113bc();
    /* 00652b18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652b19: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00652b1d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00652b22: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00652b26: mov edx, 1 */ r_edx = 0x1u;
    /* 00652b2b: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 00652b32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652b33: ret 8 */ FN_RET(0x00652aa8); r_esp += 12; return;
}

void f_00652b38(void) /* sub_652B38 */
{
    FN_ENTER(0x00652b38);
    /* 00652b38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652b39: mov ebp, esp */ r_ebp = r_esp;
    /* 00652b3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652b3d: push 0x8e6abe */ { u32 v = 0x8e6abeu; r_esp -= 4; W32(r_esp, v); }
    /* 00652b42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652b49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00652b50: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652b56: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00652b59: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00652b5c: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00652b5f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00652b62: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00652b69: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00652b6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00652b6f: je 0x652d9f */ if (fZ) goto L_00652d9f;
L_00652b75:; BB(0x00652b75);
    /* 00652b75: mov eax, 0x937000 */ r_eax = 0x937000u;
    /* 00652b7a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00652b7c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00652b7f: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00652b82: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00652b85: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00652b88: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00652b8e: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00652b91: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 00652b97: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 00652b9d: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 00652ba3: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 00652ba9: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00652baf: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00652bb2: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00652bb8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00652bbb: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00652bc1: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00652bc4: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00652bca: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00652bcd: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00652bd3: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00652bd6: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00652bdc: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00652bdf: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00652be5: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00652be8: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00652bee: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00652bf1: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00652bf7: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00652bfa: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00652c00: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00652c03: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00652c09: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00652c0c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00652c12: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00652c15: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00652c18: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00652c1b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00652c1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00652c21: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00652c24: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 00652c27: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00652c2a: mov esi, dword ptr [edi + 0x374] */ r_esi = R32((u32)(r_edi+0x374u));
    /* 00652c30: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00652c33: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00652c39: mov dword ptr [ebp - 0xb4], ebx */ W32((u32)(r_ebp+0xffffff4cu), r_ebx);
    /* 00652c3f: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 00652c45: mov dword ptr [ebp - 0x8c], ebx */ W32((u32)(r_ebp+0xffffff74u), r_ebx);
    /* 00652c4b: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 00652c51: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00652c54: mov eax, 0x936fa0 */ r_eax = 0x936fa0u;
    /* 00652c59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00652c5b: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00652c5e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00652c61: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00652c64: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00652c67: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00652c6a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00652c6d: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00652c70: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00652c73: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00652c76: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00652c79: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00652c7c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00652c7f: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00652c82: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00652c85: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00652c88: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00652c8b: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00652c8e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00652c91: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00652c94: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00652c97: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00652c9a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00652c9d: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00652ca0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00652ca3: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00652ca6: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00652ca9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00652cac: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00652caf: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00652cb2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00652cb5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00652cb8: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00652cbb: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00652cbe: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00652cc1: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00652cc4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00652cc7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00652cca: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00652ccc: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00652cce: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00652cd1: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00652cd4: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00652cd7: mov ebx, dword ptr [edi + 0x378] */ r_ebx = R32((u32)(r_edi+0x378u));
    /* 00652cdd: mov esi, dword ptr [edi + 0x24] */ r_esi = R32((u32)(r_edi+0x24u));
    /* 00652ce0: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00652ce3: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00652ce6: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00652ce9: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00652cec: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 00652cef: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00652cf2: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00652cf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00652cf6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x652cfbu); f_0050b7a4();
    /* 00652cfb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00652cfd: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00652cff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00652d00: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x652d05u); f_0050b7a4();
    /* 00652d05: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00652d0c: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00652d11: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x652d16u); f_005caba4();
    /* 00652d16: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00652d19: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00652d1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652d1e: je 0x652d4a */ if (fZ) goto L_00652d4a;
L_00652d20:; BB(0x00652d20);
    /* 00652d20: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00652d27: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652d2e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00652d31: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 00652d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652d38: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652d3e: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x652d43u); f_006441f4();
    /* 00652d43: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00652d4a:; BB(0x00652d4a);
    /* 00652d4a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652d51: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00652d58: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00652d5d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x652d62u); f_005caba4();
    /* 00652d62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652d63: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00652d66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652d68: je 0x652d91 */ if (fZ) goto L_00652d91;
L_00652d6a:; BB(0x00652d6a);
    /* 00652d6a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00652d71: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00652d78: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00652d7b: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00652d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652d7f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652d85: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x652d8au); f_006441f4();
    /* 00652d8a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00652d91:; BB(0x00652d91);
    /* 00652d91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652d98: mov ecx, edi */ r_ecx = r_edi;
    /* 00652d9a: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x652d9fu); f_0064de10();
L_00652d9f:; BB(0x00652d9f);
    /* 00652d9f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652da2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652da5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652da8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652dab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652db2: mov esp, ebp */ r_esp = r_ebp;
    /* 00652db4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652db5: ret  */ FN_RET(0x00652b38); r_esp += 4; return;
}

void f_00652db8(void)
{
    FN_ENTER(0x00652db8);
    /* 00652db8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652db9: mov ebp, esp */ r_ebp = r_esp;
    /* 00652dbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652dbd: push 0x8e6ae4 */ { u32 v = 0x8e6ae4u; r_esp -= 4; W32(r_esp, v); }
    /* 00652dc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652dc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00652dd0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652dd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00652dd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00652dd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00652ddc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00652ddf: push 0x380 */ { u32 v = 0x380u; r_esp -= 4; W32(r_esp, v); }
    /* 00652de4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00652deb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x652df0u); f_005caba4();
    /* 00652df0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652df1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00652df4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652df6: je 0x652e2f */ if (fZ) goto L_00652e2f;
L_00652df8:; BB(0x00652df8);
    /* 00652df8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00652dff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652e06: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652e09: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652e0f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652e12: call 0x652e34 */ r_esp -= 4; W32(r_esp, 0x652e17u); f_00652e34();
    /* 00652e17: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652e1a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00652e21:; BB(0x00652e21);
    /* 00652e21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652e24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652e2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00652e2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652e2e: ret  */ FN_RET(0x00652db8); r_esp += 4; return;
L_00652e2f:; BB(0x00652e2f);
    /* 00652e2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00652e31: jmp 0x652e21 */ goto L_00652e21;
}

void f_00652e34(void) /* sub_652E34 */
{
    FN_ENTER(0x00652e34);
    /* 00652e34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652e35: mov ebp, esp */ r_ebp = r_esp;
    /* 00652e37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652e39: push 0x8e6b00 */ { u32 v = 0x8e6b00u; r_esp -= 4; W32(r_esp, v); }
    /* 00652e3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652e45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00652e4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652e4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00652e52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00652e55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00652e58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00652e5b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00652e5e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00652e61: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00652e64: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x652e69u); f_0064df84();
    /* 00652e69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652e70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652e73: mov dword ptr [ecx], 0xb319c0 */ W32((u32)(r_ecx), 0xb319c0u);
    /* 00652e79: mov eax, dword ptr [0x9c7934] */ r_eax = R32((u32)(0x9c7934u));
    /* 00652e7e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00652e81: call 0x652804 */ r_esp -= 4; W32(r_esp, 0x652e86u); f_00652804();
    /* 00652e86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652e89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652e8b: push 0x9c7938 */ { u32 v = 0x9c7938u; r_esp -= 4; W32(r_esp, v); }
    /* 00652e90: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x652e95u); f_007b9a88();
    /* 00652e95: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652e98: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x652e9du); f_007b4f54();
    /* 00652e9d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652ea0: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00652ea3: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00652ea6: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00652ea9: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 00652eac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652eaf: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 00652eb2: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00652eb5: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652eb8: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 00652ebb: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00652ebe: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00652ec1: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 00652ec7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652eca: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 00652ed0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652ed3: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 00652ed9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652edc: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 00652edf: fadd dword ptr [0x9c793c] */ ST(0) = ST(0) + R_F32((u32)(0x9c793cu));
    /* 00652ee5: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 00652ee8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652eeb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652ef2: mov esp, ebp */ r_esp = r_ebp;
    /* 00652ef4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652ef5: ret 8 */ FN_RET(0x00652e34); r_esp += 12; return;
}

void f_00652ef8(void) /* sub_652EF8 */
{
    FN_ENTER(0x00652ef8);
    /* 00652ef8: mov dword ptr [0xa8f688], 0x3f800000 */ W32((u32)(0xa8f688u), 0x3f800000u);
    /* 00652f02: mov dword ptr [0xa8f68c], 0x41000000 */ W32((u32)(0xa8f68cu), 0x41000000u);
    /* 00652f0c: mov dword ptr [0xa8f690], 0x3fc00000 */ W32((u32)(0xa8f690u), 0x3fc00000u);
    /* 00652f16: ret  */ FN_RET(0x00652ef8); r_esp += 4; return;
}

void f_00652f18(void) /* sub_652F18 */
{
    FN_ENTER(0x00652f18);
    /* 00652f18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652f19: mov ebp, esp */ r_ebp = r_esp;
    /* 00652f1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652f1d: push 0x8e6b28 */ { u32 v = 0x8e6b28u; r_esp -= 4; W32(r_esp, v); }
    /* 00652f22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652f29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00652f30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652f33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00652f36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00652f39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00652f3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00652f3f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00652f44: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00652f4b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x652f50u); f_008581c5();
    /* 00652f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652f51: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00652f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652f56: je 0x652fb0 */ if (fZ) goto L_00652fb0;
L_00652f58:; BB(0x00652f58);
    /* 00652f58: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00652f5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652f66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652f69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652f6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652f6e: push 0x9c78f8 */ { u32 v = 0x9c78f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00652f73: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00652f75: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x652f7au); f_005b7a84();
    /* 00652f7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652f7d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00652f84:; BB(0x00652f84);
    /* 00652f84: mov dword ptr [0xa8f698], eax */ W32((u32)(0xa8f698u), r_eax);
    /* 00652f89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652f90: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 00652f96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652f98: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x652f9du); f_005b8624();
    /* 00652f9d: mov dword ptr [0xa8f694], eax */ W32((u32)(0xa8f694u), r_eax);
    /* 00652fa2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652fa5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652fac: mov esp, ebp */ r_esp = r_ebp;
    /* 00652fae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652faf: ret  */ FN_RET(0x00652f18); r_esp += 4; return;
L_00652fb0:; BB(0x00652fb0);
    /* 00652fb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652fb2: jmp 0x652f84 */ goto L_00652f84;
}

void f_00652fb4(void) /* sub_652FB4 */
{
    FN_ENTER(0x00652fb4);
    /* 00652fb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652fb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00652fb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652fb9: push 0x8e6b50 */ { u32 v = 0x8e6b50u; r_esp -= 4; W32(r_esp, v); }
    /* 00652fbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652fc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652fc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00652fcc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652fcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00652fd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00652fd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00652fd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00652fdb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00652fe0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00652fe7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x652fecu); f_008581c5();
    /* 00652fec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652fed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00652ff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652ff2: je 0x653033 */ if (fZ) goto L_00653033;
L_00652ff4:; BB(0x00652ff4);
    /* 00652ff4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00652ffb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653002: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653005: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00653007: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065300a: push 0x9c791c */ { u32 v = 0x9c791cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065300f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00653011: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x653016u); f_005b7a84();
    /* 00653016: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653019: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00653020:; BB(0x00653020);
    /* 00653020: mov dword ptr [0xa8f6a0], eax */ W32((u32)(0xa8f6a0u), r_eax);
    /* 00653025: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653028: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065302f: mov esp, ebp */ r_esp = r_ebp;
    /* 00653031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653032: ret  */ FN_RET(0x00652fb4); r_esp += 4; return;
L_00653033:; BB(0x00653033);
    /* 00653033: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653035: jmp 0x653020 */ goto L_00653020;
}

