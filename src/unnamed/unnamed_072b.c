#include "protos.h"

void f_0072b39c(void) /* sub_72B39C */
{
    FN_ENTER(0x0072b39c);
    /* 0072b39c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 0072b3a1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072b3a4: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b3a7: je 0x72b3b5 */ if (fZ) goto L_0072b3b5;
L_0072b3a9:; BB(0x0072b3a9);
    /* 0072b3a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072b3ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b3ad: lea eax, [eax + eax + 0x970b40] */ r_eax = (u32)(r_eax+r_eax+0x970b40u);
    /* 0072b3b4: ret  */ FN_RET(0x0072b39c); r_esp += 4; return;
L_0072b3b5:; BB(0x0072b3b5);
    /* 0072b3b5: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 0072b3bb: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b3be: je 0x72b3a9 */ if (fZ) goto L_0072b3a9;
L_0072b3c0:; BB(0x0072b3c0);
    /* 0072b3c0: mov eax, 0x31 */ r_eax = 0x31u;
    /* 0072b3c5: jmp 0x72b3a9 */ goto L_0072b3a9;
}

void f_0072b3a1(void)
{
    FN_ENTER(0x0072b3a1);
    /* 0072b3a1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072b3a4: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b3a7: je 0x72b3b5 */ if (fZ) goto L_0072b3b5;
L_0072b3a9:; BB(0x0072b3a9);
    /* 0072b3a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072b3ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b3ad: lea eax, [eax + eax + 0x970b40] */ r_eax = (u32)(r_eax+r_eax+0x970b40u);
    /* 0072b3b4: ret  */ FN_RET(0x0072b3a1); r_esp += 4; return;
L_0072b3b5:; BB(0x0072b3b5);
    /* 0072b3b5: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 0072b3bb: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b3be: je 0x72b3a9 */ if (fZ) goto L_0072b3a9;
L_0072b3c0:; BB(0x0072b3c0);
    /* 0072b3c0: mov eax, 0x31 */ r_eax = 0x31u;
    /* 0072b3c5: jmp 0x72b3a9 */ goto L_0072b3a9;
}

void f_0072b3c8(void) /* sub_72B3C8 */
{
    FN_ENTER(0x0072b3c8);
    /* 0072b3c8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0072b3cc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072b3d0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0072b3d4: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 0072b3d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b3da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b3db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b3dc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072b3df: mov edi, ecx */ r_edi = r_ecx;
    /* 0072b3e1: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0072b3e5: mov ebp, edx */ r_ebp = r_edx;
    /* 0072b3e7: mov ebx, eax */ r_ebx = r_eax;
    /* 0072b3e9: mov eax, edi */ r_eax = r_edi;
    /* 0072b3eb: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b3f0: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b3f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b3f5: je 0x72b49d */ if (fZ) goto L_0072b49d;
L_0072b3fb:; BB(0x0072b3fb);
    /* 0072b3fb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072b400: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72b405u); f_0082bb30();
    /* 0072b405: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0072b40b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72b410u); f_00829cc8();
    /* 0072b410: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0072b414: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072b419: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72b41eu); f_0082bb60();
    /* 0072b41e: mov eax, edi */ r_eax = r_edi;
    /* 0072b420: call 0x72b3a1 */ r_esp -= 4; W32(r_esp, 0x72b425u); f_0072b3a1();
    /* 0072b425: fld dword ptr [0x970d80] */ FPUSH(R_F32((u32)(0x970d80u)));
    /* 0072b42b: fld dword ptr [0x970d7c] */ FPUSH(R_F32((u32)(0x970d7cu)));
    /* 0072b431: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0072b435: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0072b438: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0072b43c: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0072b43f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0072b443: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0072b446: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b448: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072b44c: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0072b44f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b451: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072b455: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072b457: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b459: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b45b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0072b45f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b462: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b464: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072b468: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b46a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b46c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b46e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072b472: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b475: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072b477: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0072b479: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0072b47d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b47e: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72b483u); f_0071ba34();
    /* 0072b483: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b485: je 0x72b498 */ if (fZ) goto L_0072b498;
L_0072b487:; BB(0x0072b487);
    /* 0072b487: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b488: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072b48c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072b48f: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0072b493: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72b498u); f_0082b440();
L_0072b498:; BB(0x0072b498);
    /* 0072b498: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72b49du); f_004ac444();
L_0072b49d:; BB(0x0072b49d);
    /* 0072b49d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b4a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b4a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072b4a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b4a3: ret  */ FN_RET(0x0072b3c8); r_esp += 4; return;
}

void f_0072b3d9(void) /* sub_72B3D9 */
{
    FN_ENTER(0x0072b3d9);
    /* 0072b3d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b3da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b3db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b3dc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072b3df: mov edi, ecx */ r_edi = r_ecx;
    /* 0072b3e1: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0072b3e5: mov ebp, edx */ r_ebp = r_edx;
    /* 0072b3e7: mov ebx, eax */ r_ebx = r_eax;
    /* 0072b3e9: mov eax, edi */ r_eax = r_edi;
    /* 0072b3eb: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b3f0: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b3f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b3f5: je 0x72b49d */ if (fZ) goto L_0072b49d;
L_0072b3fb:; BB(0x0072b3fb);
    /* 0072b3fb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072b400: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72b405u); f_0082bb30();
    /* 0072b405: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0072b40b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72b410u); f_00829cc8();
    /* 0072b410: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0072b414: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072b419: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72b41eu); f_0082bb60();
    /* 0072b41e: mov eax, edi */ r_eax = r_edi;
    /* 0072b420: call 0x72b3a1 */ r_esp -= 4; W32(r_esp, 0x72b425u); f_0072b3a1();
    /* 0072b425: fld dword ptr [0x970d80] */ FPUSH(R_F32((u32)(0x970d80u)));
    /* 0072b42b: fld dword ptr [0x970d7c] */ FPUSH(R_F32((u32)(0x970d7cu)));
    /* 0072b431: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0072b435: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0072b438: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0072b43c: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0072b43f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0072b443: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0072b446: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b448: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072b44c: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0072b44f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b451: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072b455: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072b457: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b459: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b45b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0072b45f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b462: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b464: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072b468: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b46a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b46c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b46e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072b472: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b475: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072b477: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0072b479: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0072b47d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b47e: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72b483u); f_0071ba34();
    /* 0072b483: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b485: je 0x72b498 */ if (fZ) goto L_0072b498;
L_0072b487:; BB(0x0072b487);
    /* 0072b487: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b488: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072b48c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072b48f: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0072b493: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72b498u); f_0082b440();
L_0072b498:; BB(0x0072b498);
    /* 0072b498: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72b49du); f_004ac444();
L_0072b49d:; BB(0x0072b49d);
    /* 0072b49d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b4a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b4a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072b4a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b4a3: ret  */ FN_RET(0x0072b3d9); r_esp += 4; return;
}

void f_0072b4a4(void) /* sub_72B4A4 */
{
    FN_ENTER(0x0072b4a4);
    /* 0072b4a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b4a5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072b4a8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072b4aa: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072b4ae: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b4b0: fld dword ptr [0x970d78] */ FPUSH(R_F32((u32)(0x970d78u)));
    /* 0072b4b6: je 0x72b529 */ if (fZ) goto L_0072b529;
L_0072b4b8:; BB(0x0072b4b8);
    /* 0072b4b8: movzx eax, byte ptr [ebx + 0x1c] */ r_eax = (u32)R8((u32)(r_ebx+0x1cu));
    /* 0072b4bc: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b4bf: je 0x72b535 */ if (fZ) goto L_0072b535;
L_0072b4c1:; BB(0x0072b4c1);
    /* 0072b4c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b4c3: fld dword ptr [0x970d70] */ FPUSH(R_F32((u32)(0x970d70u)));
L_0072b4c9:; BB(0x0072b4c9);
    /* 0072b4c9: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0072b4cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b4ce: je 0x72b4ed */ if (fZ) goto L_0072b4ed;
L_0072b4d0:; BB(0x0072b4d0);
    /* 0072b4d0: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0072b4d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b4d4: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x72b4d9u); f_007ac264();
    /* 0072b4d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072b4da: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0072b4dd: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0072b4e0: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072b4e3: fadd dword ptr [eax*4 + 0x970cf8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970cf8u));
    /* 0072b4ea: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
L_0072b4ed:; BB(0x0072b4ed);
    /* 0072b4ed: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0072b4f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b4f2: je 0x72b521 */ if (fZ) goto L_0072b521;
L_0072b4f4:; BB(0x0072b4f4);
    /* 0072b4f4: fadd dword ptr [0x970d6c] */ ST(0) = ST(0) + R_F32((u32)(0x970d6cu));
    /* 0072b4fa: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0072b4fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b4fe: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x72b503u); f_007ac264();
    /* 0072b503: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072b504: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072b508: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0072b50c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072b50f: fadd dword ptr [eax*4 + 0x970cf8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970cf8u));
    /* 0072b516: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0072b519: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0072b51c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b51f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b520: ret  */ FN_RET(0x0072b4a4); r_esp += 4; return;
L_0072b521:; BB(0x0072b521);
    /* 0072b521: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0072b524: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b527: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b528: ret  */ FN_RET(0x0072b4a4); r_esp += 4; return;
L_0072b529:; BB(0x0072b529);
    /* 0072b529: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b52b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072b52d: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 0072b530: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b533: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b534: ret  */ FN_RET(0x0072b4a4); r_esp += 4; return;
L_0072b535:; BB(0x0072b535);
    /* 0072b535: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 0072b539: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b53c: je 0x72b4c9 */ if (fZ) goto L_0072b4c9;
L_0072b53e:; BB(0x0072b53e);
    /* 0072b53e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b540: fld dword ptr [0x970d74] */ FPUSH(R_F32((u32)(0x970d74u)));
    /* 0072b546: jmp 0x72b4c9 */ goto L_0072b4c9;
}

void f_0072b548(void) /* sub_72B548 */
{
    FN_ENTER(0x0072b548);
    /* 0072b548: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b54a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b54b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b54c: mov edi, ecx */ r_edi = r_ecx;
    /* 0072b54e: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0072b551: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0072b555: mov dword ptr [edi + 8], 0xc2100000 */ W32((u32)(r_edi+0x8u), 0xc2100000u);
    /* 0072b55c: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072b561: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 0072b564: mov byte ptr [edi + 0x1d], al */ W8((u32)(r_edi+0x1du), (u8)r_eax);
    /* 0072b567: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b569: je 0x72b583 */ if (fZ) goto L_0072b583;
L_0072b56b:; BB(0x0072b56b);
    /* 0072b56b: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072b56f: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b571: je 0x72b583 */ if (fZ) goto L_0072b583;
L_0072b573:; BB(0x0072b573);
    /* 0072b573: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b578: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b579: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072b57d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b582u); f_00857e98();
    /* 0072b582: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b583:; BB(0x0072b583);
    /* 0072b583: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b585: je 0x72b5d0 */ if (fZ) goto L_0072b5d0;
L_0072b587:; BB(0x0072b587);
    /* 0072b587: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b588: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b58du); f_00858009();
    /* 0072b58d: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072b590: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b595: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b59au); f_008581c5();
    /* 0072b59a: mov ebx, eax */ r_ebx = r_eax;
    /* 0072b59c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b59d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b59e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b59f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b5a4u); f_00857dec();
    /* 0072b5a4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b5a7: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072b5ab: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072b5ae:; BB(0x0072b5ae);
    /* 0072b5ae: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072b5b2: mov dword ptr [edi + 0x30], 0xffffffff */ W32((u32)(r_edi+0x30u), 0xffffffffu);
    /* 0072b5b9: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0072b5bc: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0072b5bf: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072b5c5: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072b5c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b5ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072b5cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b5cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b5cd: ret 8 */ FN_RET(0x0072b548); r_esp += 12; return;
L_0072b5d0:; BB(0x0072b5d0);
    /* 0072b5d0: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072b5d4: mov ebx, esi */ r_ebx = r_esi;
    /* 0072b5d6: jmp 0x72b5ae */ goto L_0072b5ae;
}

void f_0072b5d8(void) /* sub_72B5D8 */
{
    FN_ENTER(0x0072b5d8);
    /* 0072b5d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b5d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b5da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b5db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b5dc: mov edi, ecx */ r_edi = r_ecx;
    /* 0072b5de: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0072b5e1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0072b5e5: mov dword ptr [edi + 8], 0xc2100000 */ W32((u32)(r_edi+0x8u), 0xc2100000u);
    /* 0072b5ec: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072b5f1: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 0072b5f4: mov byte ptr [edi + 0x1d], al */ W8((u32)(r_edi+0x1du), (u8)r_eax);
    /* 0072b5f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b5f9: je 0x72b613 */ if (fZ) goto L_0072b613;
L_0072b5fb:; BB(0x0072b5fb);
    /* 0072b5fb: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072b5ff: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b601: je 0x72b613 */ if (fZ) goto L_0072b613;
L_0072b603:; BB(0x0072b603);
    /* 0072b603: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b609: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072b60d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b612u); f_00857e98();
    /* 0072b612: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b613:; BB(0x0072b613);
    /* 0072b613: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b615: je 0x72b660 */ if (fZ) goto L_0072b660;
L_0072b617:; BB(0x0072b617);
    /* 0072b617: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b618: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b61du); f_00858009();
    /* 0072b61d: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072b620: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b625: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b62au); f_008581c5();
    /* 0072b62a: mov ebx, eax */ r_ebx = r_eax;
    /* 0072b62c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b62d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b62e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b62f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b634u); f_00857dec();
    /* 0072b634: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b637: movzx ebp, word ptr [edi + 4] */ r_ebp = (u32)R16((u32)(r_edi+0x4u));
    /* 0072b63b: or ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0072b63e:; BB(0x0072b63e);
    /* 0072b63e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072b642: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0072b646: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0072b649: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0072b64c: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 0072b64f: or ebp, 0xffff0045 */ {  u32 a = r_ebp; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072b655: mov word ptr [edi + 4], bp */ W16((u32)(r_edi+0x4u), (u16)r_ebp);
    /* 0072b659: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b65a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072b65b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b65c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b65d: ret 0xc */ FN_RET(0x0072b5d8); r_esp += 16; return;
L_0072b660:; BB(0x0072b660);
    /* 0072b660: movzx ebp, word ptr [edi + 4] */ r_ebp = (u32)R16((u32)(r_edi+0x4u));
    /* 0072b664: mov ebx, esi */ r_ebx = r_esi;
    /* 0072b666: jmp 0x72b63e */ goto L_0072b63e;
}

void f_0072b668(void) /* sub_72B668 */
{
    FN_ENTER(0x0072b668);
    /* 0072b668: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b669: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b66a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b66b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b66c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b66d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072b66f: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0072b672: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0072b676: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0072b67a: mov dword ptr [ebp + 8], 0xc2100000 */ W32((u32)(r_ebp+0x8u), 0xc2100000u);
    /* 0072b681: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072b686: mov byte ptr [ebp + 0x1c], al */ W8((u32)(r_ebp+0x1cu), (u8)r_eax);
    /* 0072b689: mov byte ptr [ebp + 0x1d], al */ W8((u32)(r_ebp+0x1du), (u8)r_eax);
    /* 0072b68c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b68e: je 0x72b6a8 */ if (fZ) goto L_0072b6a8;
L_0072b690:; BB(0x0072b690);
    /* 0072b690: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b694: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b696: je 0x72b6a8 */ if (fZ) goto L_0072b6a8;
L_0072b698:; BB(0x0072b698);
    /* 0072b698: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b69d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b69e: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0072b6a2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b6a7u); f_00857e98();
    /* 0072b6a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b6a8:; BB(0x0072b6a8);
    /* 0072b6a8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b6aa: je 0x72b757 */ if (fZ) goto L_0072b757;
L_0072b6b0:; BB(0x0072b6b0);
    /* 0072b6b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b6b1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b6b6u); f_00858009();
    /* 0072b6b6: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0072b6b9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0072b6bd: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b6c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b6c2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b6c7u); f_008581c5();
    /* 0072b6c7: mov esi, eax */ r_esi = r_eax;
    /* 0072b6c9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072b6cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b6ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b6cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b6d0: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b6d5u); f_00857dec();
    /* 0072b6d5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b6d8: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b6dc: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072b6e2: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_0072b6e6:; BB(0x0072b6e6);
    /* 0072b6e6: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0072b6e9: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
    /* 0072b6ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b6ee: je 0x72b708 */ if (fZ) goto L_0072b708;
L_0072b6f0:; BB(0x0072b6f0);
    /* 0072b6f0: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b6f4: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b6f6: je 0x72b708 */ if (fZ) goto L_0072b708;
L_0072b6f8:; BB(0x0072b6f8);
    /* 0072b6f8: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b6fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b6fe: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0072b702: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b707u); f_00857e98();
    /* 0072b707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b708:; BB(0x0072b708);
    /* 0072b708: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b70a: je 0x72b74f */ if (fZ) goto L_0072b74f;
L_0072b70c:; BB(0x0072b70c);
    /* 0072b70c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b70d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b712u); f_00858009();
    /* 0072b712: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0072b715: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b71a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b71fu); f_008581c5();
    /* 0072b71f: mov esi, eax */ r_esi = r_eax;
    /* 0072b721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b722: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b723: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b724: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b729u); f_00857dec();
    /* 0072b729: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b72c: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b730: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072b733:; BB(0x0072b733);
    /* 0072b733: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0072b737: mov dword ptr [ebp + 0x24], esi */ W32((u32)(r_ebp+0x24u), r_esi);
    /* 0072b73a: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0072b73d: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072b743: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0072b747: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072b748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072b74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b74c: ret 0xc */ FN_RET(0x0072b668); r_esp += 16; return;
L_0072b74f:; BB(0x0072b74f);
    /* 0072b74f: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b753: mov esi, ebx */ r_esi = r_ebx;
    /* 0072b755: jmp 0x72b733 */ goto L_0072b733;
L_0072b757:; BB(0x0072b757);
    /* 0072b757: mov esi, edi */ r_esi = r_edi;
    /* 0072b759: jmp 0x72b6e6 */ goto L_0072b6e6;
}

void f_0072b75c(void) /* sub_72B75C */
{
    FN_ENTER(0x0072b75c);
    /* 0072b75c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b75d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b75e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b75f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b760: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072b762: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0072b765: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0072b769: mov dword ptr [ebx + 8], 0xc2100000 */ W32((u32)(r_ebx+0x8u), 0xc2100000u);
    /* 0072b770: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072b775: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
    /* 0072b778: mov byte ptr [ebx + 0x1d], al */ W8((u32)(r_ebx+0x1du), (u8)r_eax);
    /* 0072b77b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b77d: je 0x72b797 */ if (fZ) goto L_0072b797;
L_0072b77f:; BB(0x0072b77f);
    /* 0072b77f: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072b783: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b785: je 0x72b797 */ if (fZ) goto L_0072b797;
L_0072b787:; BB(0x0072b787);
    /* 0072b787: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b78c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b78d: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072b791: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b796u); f_00857e98();
    /* 0072b796: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b797:; BB(0x0072b797);
    /* 0072b797: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b799: je 0x72b868 */ if (fZ) goto L_0072b868;
L_0072b79f:; BB(0x0072b79f);
    /* 0072b79f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b7a0: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b7a5u); f_00858009();
    /* 0072b7a5: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0072b7a8: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b7ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b7ad: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b7b2u); f_008581c5();
    /* 0072b7b2: mov ebp, eax */ r_ebp = r_eax;
    /* 0072b7b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b7b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b7b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b7b7: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b7bcu); f_00857dec();
    /* 0072b7bc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b7bf: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072b7c3: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072b7c9: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
L_0072b7cd:; BB(0x0072b7cd);
    /* 0072b7cd: mov dword ptr [ebx + 0x20], ebp */ W32((u32)(r_ebx+0x20u), r_ebp);
    /* 0072b7d0: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72b7d5u); f_00816d30();
    /* 0072b7d5: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b7d9: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72b7deu); f_00815f24();
    /* 0072b7de: push 0x970dc0 */ { u32 v = 0x970dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b7e3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72b7e8u); f_00816cb8();
    /* 0072b7e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b7eb: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0072b7ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b7f0: je 0x72b80a */ if (fZ) goto L_0072b80a;
L_0072b7f2:; BB(0x0072b7f2);
    /* 0072b7f2: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072b7f6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b7f8: je 0x72b80a */ if (fZ) goto L_0072b80a;
L_0072b7fa:; BB(0x0072b7fa);
    /* 0072b7fa: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b7ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b800: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072b804: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b809u); f_00857e98();
    /* 0072b809: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b80a:; BB(0x0072b80a);
    /* 0072b80a: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072b80f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b811: je 0x72b85d */ if (fZ) goto L_0072b85d;
L_0072b813:; BB(0x0072b813);
    /* 0072b813: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b818: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b81du); f_00858009();
    /* 0072b81d: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072b820: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b825: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b82au); f_008581c5();
    /* 0072b82a: mov esi, eax */ r_esi = r_eax;
    /* 0072b82c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b82d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b832: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b833: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b838u); f_00857dec();
    /* 0072b838: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b83b: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072b83f: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072b842:; BB(0x0072b842);
    /* 0072b842: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0072b846: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 0072b849: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 0072b84c: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072b852: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 0072b856: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072b858: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b859: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b85a: ret 0xc */ FN_RET(0x0072b75c); r_esp += 16; return;
L_0072b85d:; BB(0x0072b85d);
    /* 0072b85d: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072b861: mov esi, 0xac9d80 */ r_esi = 0xac9d80u;
    /* 0072b866: jmp 0x72b842 */ goto L_0072b842;
L_0072b868:; BB(0x0072b868);
    /* 0072b868: mov ebp, edi */ r_ebp = r_edi;
    /* 0072b86a: jmp 0x72b7cd */ goto L_0072b7cd;
}

void f_0072b870(void) /* sub_72B870 */
{
    FN_ENTER(0x0072b870);
    /* 0072b870: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b871: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b872: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072b873: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b874: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072b876: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0072b87a: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0072b881: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b882: mov byte ptr [ebp + 0x1c], 0x36 */ W8((u32)(r_ebp+0x1cu), 0x36u);
    /* 0072b886: call 0x5ca4a4 */ r_esp -= 4; W32(r_esp, 0x72b88bu); f_005ca4a4();
    /* 0072b88b: mov esi, eax */ r_esi = r_eax;
    /* 0072b88d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b890: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072b892: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x72b897u); f_005d281c();
    /* 0072b897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b898: movzx edi, byte ptr [ebx] */ r_edi = (u32)R8((u32)(r_ebx));
    /* 0072b89b: movzx edx, byte ptr [ebx + 1] */ r_edx = (u32)R8((u32)(r_ebx+0x1u));
    /* 0072b89f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072b8a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8a4: call 0x72b9d0 */ r_esp -= 4; W32(r_esp, 0x72b8a9u); f_0072b9d0();
    /* 0072b8a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8aa: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8af: call 0x5c9be4 */ r_esp -= 4; W32(r_esp, 0x72b8b4u); f_005c9be4();
    /* 0072b8b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b8b7: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0072b8ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b8bc: je 0x72b8d6 */ if (fZ) goto L_0072b8d6;
L_0072b8be:; BB(0x0072b8be);
    /* 0072b8be: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b8c2: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b8c4: je 0x72b8d6 */ if (fZ) goto L_0072b8d6;
L_0072b8c6:; BB(0x0072b8c6);
    /* 0072b8c6: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b8cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8cc: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0072b8d0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b8d5u); f_00857e98();
    /* 0072b8d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b8d6:; BB(0x0072b8d6);
    /* 0072b8d6: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072b8db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b8dd: je 0x72b9c5 */ if (fZ) goto L_0072b9c5;
L_0072b8e3:; BB(0x0072b8e3);
    /* 0072b8e3: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8e8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b8edu); f_00858009();
    /* 0072b8ed: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0072b8f0: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b8fau); f_008581c5();
    /* 0072b8fa: mov esi, eax */ r_esi = r_eax;
    /* 0072b8fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b8fd: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b902: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b903: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b908u); f_00857dec();
    /* 0072b908: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b90b: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b90f: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072b915: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_0072b919:; BB(0x0072b919);
    /* 0072b919: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0072b91e: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
    /* 0072b921: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072b924: jle 0x72b94a */ if ((fZ||fS!=fO)) goto L_0072b94a;
L_0072b926:; BB(0x0072b926);
    /* 0072b926: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b927: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072b929: call 0x72bab0 */ r_esp -= 4; W32(r_esp, 0x72b92eu); f_0072bab0();
    /* 0072b92e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072b932: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b936: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0072b939: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072b93f: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0072b943: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b944: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072b945: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b946: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b947: ret 8 */ FN_RET(0x0072b870); r_esp += 12; return;
L_0072b94a:; BB(0x0072b94a);
    /* 0072b94a: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72b94fu); f_00816d30();
    /* 0072b94f: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b952: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72b957u); f_00815f24();
    /* 0072b957: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072b958: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0072b95b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b95d: je 0x72b977 */ if (fZ) goto L_0072b977;
L_0072b95f:; BB(0x0072b95f);
    /* 0072b95f: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b963: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072b965: je 0x72b977 */ if (fZ) goto L_0072b977;
L_0072b967:; BB(0x0072b967);
    /* 0072b967: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072b96c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b96d: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0072b971: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72b976u); f_00857e98();
    /* 0072b976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072b977:; BB(0x0072b977);
    /* 0072b977: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072b97c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b97e: je 0x72b9be */ if (fZ) goto L_0072b9be;
L_0072b980:; BB(0x0072b980);
    /* 0072b980: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b985: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72b98au); f_00858009();
    /* 0072b98a: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0072b98d: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072b991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b992: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72b997u); f_008581c5();
    /* 0072b997: mov esi, eax */ r_esi = r_eax;
    /* 0072b999: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b99a: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b99f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b9a0: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72b9a5u); f_00857dec();
    /* 0072b9a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b9a8: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072b9ac: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072b9b2: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_0072b9b6:; BB(0x0072b9b6);
    /* 0072b9b6: mov dword ptr [ebp + 0x24], esi */ W32((u32)(r_ebp+0x24u), r_esi);
    /* 0072b9b9: jmp 0x72b926 */ goto L_0072b926;
L_0072b9be:; BB(0x0072b9be);
    /* 0072b9be: mov esi, 0xac9d80 */ r_esi = 0xac9d80u;
    /* 0072b9c3: jmp 0x72b9b6 */ goto L_0072b9b6;
L_0072b9c5:; BB(0x0072b9c5);
    /* 0072b9c5: mov esi, 0xac9d80 */ r_esi = 0xac9d80u;
    /* 0072b9ca: jmp 0x72b919 */ goto L_0072b919;
}

void f_0072b9d0(void) /* sub_72B9D0 */
{
    FN_ENTER(0x0072b9d0);
    /* 0072b9d0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072b9d4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072b9d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072b9da: jne 0x72ba70 */ if (!fZ) goto L_0072ba70;
L_0072b9e0:; BB(0x0072b9e0);
    /* 0072b9e0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072b9e3: je 0x72ba69 */ if (fZ) goto L_0072ba69;
L_0072b9e9:; BB(0x0072b9e9);
    /* 0072b9e9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072b9ec: jne 0x72b9f5 */ if (!fZ) goto L_0072b9f5;
L_0072b9ee:; BB(0x0072b9ee);
    /* 0072b9ee: mov byte ptr [ecx + 0x1d], 1 */ W8((u32)(r_ecx+0x1du), 0x1u);
    /* 0072b9f2: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072b9f5:; BB(0x0072b9f5);
    /* 0072b9f5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072b9f8: jne 0x72ba01 */ if (!fZ) goto L_0072ba01;
L_0072b9fa:; BB(0x0072b9fa);
    /* 0072b9fa: mov byte ptr [ecx + 0x1d], 2 */ W8((u32)(r_ecx+0x1du), 0x2u);
    /* 0072b9fe: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba01:; BB(0x0072ba01);
    /* 0072ba01: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0072ba06: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ba09: je 0x72ba85 */ if (fZ) goto L_0072ba85;
L_0072ba0b:; BB(0x0072ba0b);
    /* 0072ba0b: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0072ba10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072ba13: je 0x72ba62 */ if (fZ) goto L_0072ba62;
L_0072ba15:; BB(0x0072ba15);
    /* 0072ba15: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0072ba1a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ba1d: jne 0x72ba4a */ if (!fZ) goto L_0072ba4a;
L_0072ba1f:; BB(0x0072ba1f);
    /* 0072ba1f: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0072ba24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072ba26: jne 0x72ba2f */ if (!fZ) goto L_0072ba2f;
L_0072ba28:; BB(0x0072ba28);
    /* 0072ba28: mov byte ptr [ecx + 0x1d], 5 */ W8((u32)(r_ecx+0x1du), 0x5u);
    /* 0072ba2c: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba2f:; BB(0x0072ba2f);
    /* 0072ba2f: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0072ba34: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072ba37: je 0x72ba7e */ if (fZ) goto L_0072ba7e;
L_0072ba39:; BB(0x0072ba39);
    /* 0072ba39: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0072ba3e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072ba41: je 0x72ba77 */ if (fZ) goto L_0072ba77;
L_0072ba43:; BB(0x0072ba43);
    /* 0072ba43: mov byte ptr [ecx + 0x1d], 8 */ W8((u32)(r_ecx+0x1du), 0x8u);
    /* 0072ba47: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba4a:; BB(0x0072ba4a);
    /* 0072ba4a: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0072ba4f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072ba52: jne 0x72ba5b */ if (!fZ) goto L_0072ba5b;
L_0072ba54:; BB(0x0072ba54);
    /* 0072ba54: mov byte ptr [ecx + 0x1d], 9 */ W8((u32)(r_ecx+0x1du), 0x9u);
    /* 0072ba58: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba5b:; BB(0x0072ba5b);
    /* 0072ba5b: mov byte ptr [ecx + 0x1d], 0x36 */ W8((u32)(r_ecx+0x1du), 0x36u);
    /* 0072ba5f: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba62:; BB(0x0072ba62);
    /* 0072ba62: mov byte ptr [ecx + 0x1d], 3 */ W8((u32)(r_ecx+0x1du), 0x3u);
    /* 0072ba66: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba69:; BB(0x0072ba69);
    /* 0072ba69: mov byte ptr [ecx + 0x1d], 0 */ W8((u32)(r_ecx+0x1du), 0x0u);
    /* 0072ba6d: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba70:; BB(0x0072ba70);
    /* 0072ba70: mov byte ptr [ecx + 0x1d], 8 */ W8((u32)(r_ecx+0x1du), 0x8u);
    /* 0072ba74: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba77:; BB(0x0072ba77);
    /* 0072ba77: mov byte ptr [ecx + 0x1d], 6 */ W8((u32)(r_ecx+0x1du), 0x6u);
    /* 0072ba7b: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba7e:; BB(0x0072ba7e);
    /* 0072ba7e: mov byte ptr [ecx + 0x1d], 7 */ W8((u32)(r_ecx+0x1du), 0x7u);
    /* 0072ba82: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072ba85:; BB(0x0072ba85);
    /* 0072ba85: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0072ba8a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072ba8d: je 0x72baa7 */ if (fZ) goto L_0072baa7;
L_0072ba8f:; BB(0x0072ba8f);
    /* 0072ba8f: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0072ba94: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072ba97: je 0x72baa0 */ if (fZ) goto L_0072baa0;
L_0072ba99:; BB(0x0072ba99);
    /* 0072ba99: mov byte ptr [ecx + 0x1d], 0xb */ W8((u32)(r_ecx+0x1du), 0xbu);
    /* 0072ba9d: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072baa0:; BB(0x0072baa0);
    /* 0072baa0: mov byte ptr [ecx + 0x1d], 0xa */ W8((u32)(r_ecx+0x1du), 0xau);
    /* 0072baa4: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
L_0072baa7:; BB(0x0072baa7);
    /* 0072baa7: mov byte ptr [ecx + 0x1d], 4 */ W8((u32)(r_ecx+0x1du), 0x4u);
    /* 0072baab: ret 0x10 */ FN_RET(0x0072b9d0); r_esp += 20; return;
}

void f_0072bab0(void) /* sub_72BAB0 */
{
    FN_ENTER(0x0072bab0);
    /* 0072bab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bab1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bab2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bab3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bab4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bab5: mov edi, ecx */ r_edi = r_ecx;
    /* 0072bab7: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072babb: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x72bac0u); f_005d281c();
    /* 0072bac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bac2: je 0x72bad3 */ if (fZ) goto L_0072bad3;
L_0072bac4:; BB(0x0072bac4);
    /* 0072bac4: mov dword ptr [edi + 0x30], 0xffffffff */ W32((u32)(r_edi+0x30u), 0xffffffffu);
    /* 0072bacb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bacc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bacd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bace: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bacf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bad0: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bad3:; BB(0x0072bad3);
    /* 0072bad3: movsx eax, word ptr [edi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 0072bad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072bad8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72baddu); f_0068d5a8();
    /* 0072badd: mov esi, eax */ r_esi = r_eax;
    /* 0072badf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bae2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bae4: je 0x72bc12 */ if (fZ) goto L_0072bc12;
L_0072baea:; BB(0x0072baea);
    /* 0072baea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0072baed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072baee: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0072baf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072baf3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072baf4: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x72baf9u); f_005c9e40();
    /* 0072baf9: mov ebp, eax */ r_ebp = r_eax;
    /* 0072bafb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bafe: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bb02: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x72bb07u); f_005d2fb0();
    /* 0072bb07: mov ebx, eax */ r_ebx = r_eax;
    /* 0072bb09: movzx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)R8((u32)(r_edi+0x1cu));
    /* 0072bb0d: cmp edx, 0x36 */ {  u32 a = r_edx; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bb10: je 0x72bc1a */ if (fZ) goto L_0072bc1a;
L_0072bb16:; BB(0x0072bb16);
    /* 0072bb16: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bb18: jne 0x72bb30 */ if (!fZ) goto L_0072bb30;
L_0072bb1a:; BB(0x0072bb1a);
    /* 0072bb1a: mov dword ptr [edi + 0x2c], 0xffffffff */ W32((u32)(r_edi+0x2cu), 0xffffffffu);
    /* 0072bb21: mov dword ptr [edi + 0x30], 0xff00fffc */ W32((u32)(r_edi+0x30u), 0xff00fffcu);
    /* 0072bb28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb2d: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bb30:; BB(0x0072bb30);
    /* 0072bb30: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bb32: jne 0x72bb67 */ if (!fZ) goto L_0072bb67;
L_0072bb34:; BB(0x0072bb34);
    /* 0072bb34: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0072bb37: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bb39: je 0x72bb51 */ if (fZ) goto L_0072bb51;
L_0072bb3b:; BB(0x0072bb3b);
    /* 0072bb3b: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bb42: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072bb49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb4e: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bb51:; BB(0x0072bb51);
    /* 0072bb51: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bb58: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072bb5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb64: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bb67:; BB(0x0072bb67);
    /* 0072bb67: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bb6b: mov dword ptr [edi + 0x2c], 0xffffffff */ W32((u32)(r_edi+0x2cu), 0xffffffffu);
    /* 0072bb72: call 0x5d2f7c */ r_esp -= 4; W32(r_esp, 0x72bb77u); f_005d2f7c();
    /* 0072bb77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bb79: je 0x72bb8a */ if (fZ) goto L_0072bb8a;
L_0072bb7b:; BB(0x0072bb7b);
    /* 0072bb7b: mov dword ptr [edi + 0x30], 0xfffe3c28 */ W32((u32)(r_edi+0x30u), 0xfffe3c28u);
    /* 0072bb82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb87: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bb8a:; BB(0x0072bb8a);
    /* 0072bb8a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bb8e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72bb93u); f_006dc358();
    /* 0072bb93: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bb96: jne 0x72bbad */ if (!fZ) goto L_0072bbad;
L_0072bb98:; BB(0x0072bb98);
    /* 0072bb98: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072bb9c: or eax, 0xffff0800 */ {  u32 a = r_eax; u32 b = 0xffff0800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bba1: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072bba5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bba6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bba8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bba9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bbaa: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bbad:; BB(0x0072bbad);
    /* 0072bbad: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bbb1: call 0x5d69a8 */ r_esp -= 4; W32(r_esp, 0x72bbb6u); f_005d69a8();
    /* 0072bbb6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072bbb9: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072bbbc: jl 0x72bbcd */ if ((fS!=fO)) goto L_0072bbcd;
L_0072bbbe:; BB(0x0072bbbe);
    /* 0072bbbe: mov dword ptr [edi + 0x30], 0xffffea00 */ W32((u32)(r_edi+0x30u), 0xffffea00u);
    /* 0072bbc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bbc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bbc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bbc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bbc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bbca: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bbcd:; BB(0x0072bbcd);
    /* 0072bbcd: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bbd1: call 0x5d325c */ r_esp -= 4; W32(r_esp, 0x72bbd6u); f_005d325c();
    /* 0072bbd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bbd8: je 0x72bbe9 */ if (fZ) goto L_0072bbe9;
L_0072bbda:; BB(0x0072bbda);
    /* 0072bbda: mov dword ptr [edi + 0x30], 0xff61e853 */ W32((u32)(r_edi+0x30u), 0xff61e853u);
    /* 0072bbe1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bbe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bbe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bbe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bbe5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bbe6: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bbe9:; BB(0x0072bbe9);
    /* 0072bbe9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bbea: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bbef: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072bbf3: call 0x5d5f40 */ r_esp -= 4; W32(r_esp, 0x72bbf8u); f_005d5f40();
    /* 0072bbf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bbfa: je 0x72bc0b */ if (fZ) goto L_0072bc0b;
L_0072bbfc:; BB(0x0072bbfc);
    /* 0072bbfc: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bc03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bc04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bc05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bc06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bc07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bc08: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bc0b:; BB(0x0072bc0b);
    /* 0072bc0b: mov dword ptr [edi + 0x30], 0xffffffff */ W32((u32)(r_edi+0x30u), 0xffffffffu);
L_0072bc12:; BB(0x0072bc12);
    /* 0072bc12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bc13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bc14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bc15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bc16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bc17: ret 4 */ FN_RET(0x0072bab0); r_esp += 8; return;
L_0072bc1a:; BB(0x0072bc1a);
    /* 0072bc1a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bc1c: je 0x72bc36 */ if (fZ) goto L_0072bc36;
L_0072bc1e:; BB(0x0072bc1e);
    /* 0072bc1e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0072bc21: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072bc24: je 0x72bc2a */ if (fZ) goto L_0072bc2a;
L_0072bc26:; BB(0x0072bc26);
    /* 0072bc26: mov byte ptr [edi + 0x1c], 0x13 */ W8((u32)(r_edi+0x1cu), 0x13u);
L_0072bc2a:; BB(0x0072bc2a);
    /* 0072bc2a: mov dword ptr [edi + 0x28], 0xffffffff */ W32((u32)(r_edi+0x28u), 0xffffffffu);
    /* 0072bc31: jmp 0x72bb16 */ goto L_0072bb16;
L_0072bc36:; BB(0x0072bc36);
    /* 0072bc36: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bc3a: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x72bc3fu); f_005d6990();
    /* 0072bc3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bc41: je 0x72bc1e */ if (fZ) goto L_0072bc1e;
L_0072bc43:; BB(0x0072bc43);
    /* 0072bc43: mov byte ptr [edi + 0x1c], 0x19 */ W8((u32)(r_edi+0x1cu), 0x19u);
    /* 0072bc47: jmp 0x72bc2a */ goto L_0072bc2a;
}

void f_0072bae3(void)
{
    FN_ENTER(0x0072bae3);
    /* 0072bae3: test byte ptr [edi], -0x7c */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x84u; u32 r = (a & b) & 0xffu;   }
    /* 0072bae6: sub byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0072bae8: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0072baea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0072baed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072baee: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0072baf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072baf3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072baf4: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x72baf9u); f_005c9e40();
    /* 0072baf9: mov ebp, eax */ r_ebp = r_eax;
    /* 0072bafb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bafe: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bb02: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x72bb07u); f_005d2fb0();
    /* 0072bb07: mov ebx, eax */ r_ebx = r_eax;
    /* 0072bb09: movzx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)R8((u32)(r_edi+0x1cu));
    /* 0072bb0d: cmp edx, 0x36 */ {  u32 a = r_edx; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bb10: je 0x72bc1a */ if (fZ) goto L_0072bc1a;
L_0072bb16:; BB(0x0072bb16);
    /* 0072bb16: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bb18: jne 0x72bb30 */ if (!fZ) goto L_0072bb30;
L_0072bb1a:; BB(0x0072bb1a);
    /* 0072bb1a: mov dword ptr [edi + 0x2c], 0xffffffff */ W32((u32)(r_edi+0x2cu), 0xffffffffu);
    /* 0072bb21: mov dword ptr [edi + 0x30], 0xff00fffc */ W32((u32)(r_edi+0x30u), 0xff00fffcu);
    /* 0072bb28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb2d: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bb30:; BB(0x0072bb30);
    /* 0072bb30: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bb32: jne 0x72bb67 */ if (!fZ) goto L_0072bb67;
L_0072bb34:; BB(0x0072bb34);
    /* 0072bb34: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0072bb37: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bb39: je 0x72bb51 */ if (fZ) goto L_0072bb51;
L_0072bb3b:; BB(0x0072bb3b);
    /* 0072bb3b: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bb42: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072bb49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb4e: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bb51:; BB(0x0072bb51);
    /* 0072bb51: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bb58: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072bb5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb64: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bb67:; BB(0x0072bb67);
    /* 0072bb67: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bb6b: mov dword ptr [edi + 0x2c], 0xffffffff */ W32((u32)(r_edi+0x2cu), 0xffffffffu);
    /* 0072bb72: call 0x5d2f7c */ r_esp -= 4; W32(r_esp, 0x72bb77u); f_005d2f7c();
    /* 0072bb77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bb79: je 0x72bb8a */ if (fZ) goto L_0072bb8a;
L_0072bb7b:; BB(0x0072bb7b);
    /* 0072bb7b: mov dword ptr [edi + 0x30], 0xfffe3c28 */ W32((u32)(r_edi+0x30u), 0xfffe3c28u);
    /* 0072bb82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bb83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bb84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bb85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bb86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bb87: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bb8a:; BB(0x0072bb8a);
    /* 0072bb8a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bb8e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72bb93u); f_006dc358();
    /* 0072bb93: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bb96: jne 0x72bbad */ if (!fZ) goto L_0072bbad;
L_0072bb98:; BB(0x0072bb98);
    /* 0072bb98: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072bb9c: or eax, 0xffff0800 */ {  u32 a = r_eax; u32 b = 0xffff0800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bba1: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072bba5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bba6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bba8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bba9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bbaa: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bbad:; BB(0x0072bbad);
    /* 0072bbad: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bbb1: call 0x5d69a8 */ r_esp -= 4; W32(r_esp, 0x72bbb6u); f_005d69a8();
    /* 0072bbb6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072bbb9: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072bbbc: jl 0x72bbcd */ if ((fS!=fO)) goto L_0072bbcd;
L_0072bbbe:; BB(0x0072bbbe);
    /* 0072bbbe: mov dword ptr [edi + 0x30], 0xffffea00 */ W32((u32)(r_edi+0x30u), 0xffffea00u);
    /* 0072bbc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bbc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bbc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bbc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bbc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bbca: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bbcd:; BB(0x0072bbcd);
    /* 0072bbcd: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bbd1: call 0x5d325c */ r_esp -= 4; W32(r_esp, 0x72bbd6u); f_005d325c();
    /* 0072bbd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bbd8: je 0x72bbe9 */ if (fZ) goto L_0072bbe9;
L_0072bbda:; BB(0x0072bbda);
    /* 0072bbda: mov dword ptr [edi + 0x30], 0xff61e853 */ W32((u32)(r_edi+0x30u), 0xff61e853u);
    /* 0072bbe1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bbe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bbe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bbe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bbe5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bbe6: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bbe9:; BB(0x0072bbe9);
    /* 0072bbe9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bbea: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bbef: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072bbf3: call 0x5d5f40 */ r_esp -= 4; W32(r_esp, 0x72bbf8u); f_005d5f40();
    /* 0072bbf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bbfa: je 0x72bc0b */ if (fZ) goto L_0072bc0b;
L_0072bbfc:; BB(0x0072bbfc);
    /* 0072bbfc: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bc03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bc04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bc05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bc06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bc07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bc08: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bc0b:; BB(0x0072bc0b);
    /* 0072bc0b: mov dword ptr [edi + 0x30], 0xffffffff */ W32((u32)(r_edi+0x30u), 0xffffffffu);
    /* 0072bc12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bc13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bc14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bc15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bc16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bc17: ret 4 */ FN_RET(0x0072bae3); r_esp += 8; return;
L_0072bc1a:; BB(0x0072bc1a);
    /* 0072bc1a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bc1c: je 0x72bc36 */ if (fZ) goto L_0072bc36;
L_0072bc1e:; BB(0x0072bc1e);
    /* 0072bc1e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0072bc21: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072bc24: je 0x72bc2a */ if (fZ) goto L_0072bc2a;
L_0072bc26:; BB(0x0072bc26);
    /* 0072bc26: mov byte ptr [edi + 0x1c], 0x13 */ W8((u32)(r_edi+0x1cu), 0x13u);
L_0072bc2a:; BB(0x0072bc2a);
    /* 0072bc2a: mov dword ptr [edi + 0x28], 0xffffffff */ W32((u32)(r_edi+0x28u), 0xffffffffu);
    /* 0072bc31: jmp 0x72bb16 */ goto L_0072bb16;
L_0072bc36:; BB(0x0072bc36);
    /* 0072bc36: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072bc3a: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x72bc3fu); f_005d6990();
    /* 0072bc3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bc41: je 0x72bc1e */ if (fZ) goto L_0072bc1e;
L_0072bc43:; BB(0x0072bc43);
    /* 0072bc43: mov byte ptr [edi + 0x1c], 0x19 */ W8((u32)(r_edi+0x1cu), 0x19u);
    /* 0072bc47: jmp 0x72bc2a */ goto L_0072bc2a;
}

void f_0072bc4c(void) /* sub_72BC4C */
{
    FN_ENTER(0x0072bc4c);
    /* 0072bc4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc50: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072bc52: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0072bc56: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0072bc5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc5e: mov byte ptr [ebp + 0x1c], 0x36 */ W8((u32)(r_ebp+0x1cu), 0x36u);
    /* 0072bc62: call 0x5ca4a4 */ r_esp -= 4; W32(r_esp, 0x72bc67u); f_005ca4a4();
    /* 0072bc67: mov esi, eax */ r_esi = r_eax;
    /* 0072bc69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bc6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072bc6e: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x72bc73u); f_005d281c();
    /* 0072bc73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc74: movzx edi, byte ptr [ebx] */ r_edi = (u32)R8((u32)(r_ebx));
    /* 0072bc77: movzx edx, byte ptr [ebx + 1] */ r_edx = (u32)R8((u32)(r_ebx+0x1u));
    /* 0072bc7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072bc7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc80: call 0x72b9d0 */ r_esp -= 4; W32(r_esp, 0x72bc85u); f_0072b9d0();
    /* 0072bc85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc86: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bc8b: call 0x5c9be4 */ r_esp -= 4; W32(r_esp, 0x72bc90u); f_005c9be4();
    /* 0072bc90: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bc93: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0072bc96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bc98: je 0x72bcb2 */ if (fZ) goto L_0072bcb2;
L_0072bc9a:; BB(0x0072bc9a);
    /* 0072bc9a: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072bc9e: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072bca0: je 0x72bcb2 */ if (fZ) goto L_0072bcb2;
L_0072bca2:; BB(0x0072bca2);
    /* 0072bca2: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072bca7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bca8: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0072bcac: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72bcb1u); f_00857e98();
    /* 0072bcb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072bcb2:; BB(0x0072bcb2);
    /* 0072bcb2: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072bcb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bcb9: je 0x72bd29 */ if (fZ) goto L_0072bd29;
L_0072bcbb:; BB(0x0072bcbb);
    /* 0072bcbb: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bcc0: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72bcc5u); f_00858009();
    /* 0072bcc5: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0072bcc8: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072bccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072bccd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72bcd2u); f_008581c5();
    /* 0072bcd2: mov esi, eax */ r_esi = r_eax;
    /* 0072bcd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bcd5: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bcda: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bcdb: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72bce0u); f_00857dec();
    /* 0072bce0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bce3: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072bce7: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072bced: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_0072bcf1:; BB(0x0072bcf1);
    /* 0072bcf1: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072bcf5: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
    /* 0072bcf8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072bcfa: call 0x72bd30 */ r_esp -= 4; W32(r_esp, 0x72bcffu); f_0072bd30();
    /* 0072bcff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072bd02: call 0x72bab0 */ r_esp -= 4; W32(r_esp, 0x72bd07u); f_0072bab0();
    /* 0072bd07: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0072bd0b: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0072bd0e: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072bd12: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0072bd15: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0072bd18: or ebx, 0xffff0045 */ {  u32 a = r_ebx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bd1e: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
    /* 0072bd22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bd23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bd24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bd25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bd26: ret 0xc */ FN_RET(0x0072bc4c); r_esp += 16; return;
L_0072bd29:; BB(0x0072bd29);
    /* 0072bd29: mov esi, 0xac9d80 */ r_esi = 0xac9d80u;
    /* 0072bd2e: jmp 0x72bcf1 */ goto L_0072bcf1;
}

void f_0072bd30(void) /* sub_72BD30 */
{
    FN_ENTER(0x0072bd30);
    /* 0072bd30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0072bd34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bd36: jle 0x72bd3e */ if ((fZ||fS!=fO)) goto L_0072bd3e;
L_0072bd38:; BB(0x0072bd38);
    /* 0072bd38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd39: call 0x72bd44 */ r_esp -= 4; W32(r_esp, 0x72bd3eu); f_0072bd44();
L_0072bd3e:; BB(0x0072bd3e);
    /* 0072bd3e: ret 4 */ FN_RET(0x0072bd30); r_esp += 8; return;
}

void f_0072bd44(void) /* sub_72BD44 */
{
    FN_ENTER(0x0072bd44);
    /* 0072bd44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd47: mov edi, ecx */ r_edi = r_ecx;
    /* 0072bd49: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72bd4eu); f_00816d30();
    /* 0072bd4e: push 0x970cf0 */ { u32 v = 0x970cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd53: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72bd58u); f_00816cb8();
    /* 0072bd58: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072bd5c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72bd61u); f_00815f24();
    /* 0072bd61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bd64: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0072bd67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bd69: je 0x72bd83 */ if (fZ) goto L_0072bd83;
L_0072bd6b:; BB(0x0072bd6b);
    /* 0072bd6b: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072bd6f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072bd71: je 0x72bd83 */ if (fZ) goto L_0072bd83;
L_0072bd73:; BB(0x0072bd73);
    /* 0072bd73: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072bd78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd79: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072bd7d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72bd82u); f_00857e98();
    /* 0072bd82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072bd83:; BB(0x0072bd83);
    /* 0072bd83: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072bd88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bd8a: je 0x72bdcb */ if (fZ) goto L_0072bdcb;
L_0072bd8c:; BB(0x0072bd8c);
    /* 0072bd8c: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd91: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72bd96u); f_00858009();
    /* 0072bd96: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0072bd99: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072bd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072bd9e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72bda3u); f_008581c5();
    /* 0072bda3: mov ebp, eax */ r_ebp = r_eax;
    /* 0072bda5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bda6: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bdab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bdac: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72bdb1u); f_00857dec();
    /* 0072bdb1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bdb4: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072bdb8: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bdbe: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
L_0072bdc2:; BB(0x0072bdc2);
    /* 0072bdc2: mov dword ptr [edi + 0x24], ebp */ W32((u32)(r_edi+0x24u), r_ebp);
    /* 0072bdc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bdc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bdc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bdc8: ret 4 */ FN_RET(0x0072bd44); r_esp += 8; return;
L_0072bdcb:; BB(0x0072bdcb);
    /* 0072bdcb: mov ebp, 0xac9d80 */ r_ebp = 0xac9d80u;
    /* 0072bdd0: jmp 0x72bdc2 */ goto L_0072bdc2;
}

void f_0072bdd4(void) /* sub_72BDD4 */
{
    FN_ENTER(0x0072bdd4);
    /* 0072bdd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bdd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bdd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bdd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bdd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bdd9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072bddb: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0072bddf: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0072bde6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072bde8: call 0x5c5114 */ r_esp -= 4; W32(r_esp, 0x72bdedu); f_005c5114();
    /* 0072bded: mov edi, eax */ r_edi = r_eax;
    /* 0072bdef: movzx esi, byte ptr [ebx + 0xf2] */ r_esi = (u32)R8((u32)(r_ebx+0xf2u));
    /* 0072bdf6: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 0072bdfd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0072be00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072be02: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x72be07u); f_005c443c();
    /* 0072be07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072be08: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072be0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072be0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072be0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072be10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072be11: call 0x72b9d0 */ r_esp -= 4; W32(r_esp, 0x72be16u); f_0072b9d0();
    /* 0072be16: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0072be18: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072be1a: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x72be1du); call_ind(t); }
    /* 0072be1d: mov edi, eax */ r_edi = r_eax;
    /* 0072be1f: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 0072be22: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072be24: je 0x72be40 */ if (fZ) goto L_0072be40;
L_0072be26:; BB(0x0072be26);
    /* 0072be26: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072be2a: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072be2d: je 0x72be40 */ if (fZ) goto L_0072be40;
L_0072be2f:; BB(0x0072be2f);
    /* 0072be2f: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072be35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072be36: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0072be3a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72be3fu); f_00857e98();
    /* 0072be3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072be40:; BB(0x0072be40);
    /* 0072be40: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072be42: je 0x72beda */ if (fZ) goto L_0072beda;
L_0072be48:; BB(0x0072be48);
    /* 0072be48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072be49: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72be4eu); f_00858009();
    /* 0072be4e: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0072be51: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0072be55: lea esi, [eax + eax + 2] */ r_esi = (u32)(r_eax+r_eax+0x2u);
    /* 0072be59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072be5a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72be5fu); f_008581c5();
    /* 0072be5f: mov esi, eax */ r_esi = r_eax;
    /* 0072be61: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072be65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072be66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072be67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072be68: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72be6du); f_00857dec();
    /* 0072be6d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072be70: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072be74: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072be7a: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_0072be7e:; BB(0x0072be7e);
    /* 0072be7e: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
    /* 0072be81: movzx edx, byte ptr [ebx + 0xf2] */ r_edx = (u32)R8((u32)(r_ebx+0xf2u));
    /* 0072be88: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 0072be8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072be90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072be91: call 0x5c502c */ r_esp -= 4; W32(r_esp, 0x72be96u); f_005c502c();
    /* 0072be96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072be99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072be9b: je 0x72beaf */ if (fZ) goto L_0072beaf;
L_0072be9d:; BB(0x0072be9d);
    /* 0072be9d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0072be9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072bea1: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x72bea7u); call_ind(t); }
    /* 0072bea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072bea8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072beaa: call 0x72bd30 */ r_esp -= 4; W32(r_esp, 0x72beafu); f_0072bd30();
L_0072beaf:; BB(0x0072beaf);
    /* 0072beaf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072beb0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072beb2: call 0x72bee0 */ r_esp -= 4; W32(r_esp, 0x72beb7u); f_0072bee0();
    /* 0072beb7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0072bebb: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0072bebe: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072bec2: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0072bec5: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0072bec8: or ebx, 0xffff0045 */ {  u32 a = r_ebx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072bece: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
    /* 0072bed2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072bed3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bed4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bed5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bed6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bed7: ret 8 */ FN_RET(0x0072bdd4); r_esp += 12; return;
L_0072beda:; BB(0x0072beda);
    /* 0072beda: mov esi, edi */ r_esi = r_edi;
    /* 0072bedc: jmp 0x72be7e */ goto L_0072be7e;
}

void f_0072bee0(void) /* sub_72BEE0 */
{
    FN_ENTER(0x0072bee0);
    /* 0072bee0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bee1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072bee2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bee3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bee4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072bee7: mov edi, ecx */ r_edi = r_ecx;
    /* 0072bee9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072beed: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x72bef2u); f_005c443c();
    /* 0072bef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bef4: je 0x72bf07 */ if (fZ) goto L_0072bf07;
L_0072bef6:; BB(0x0072bef6);
    /* 0072bef6: mov dword ptr [edi + 0x30], 0xffffffff */ W32((u32)(r_edi+0x30u), 0xffffffffu);
    /* 0072befd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072bf00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bf01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bf02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bf03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bf04: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072bf07:; BB(0x0072bf07);
    /* 0072bf07: movsx eax, word ptr [edi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 0072bf0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072bf0c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72bf11u); f_0068d5a8();
    /* 0072bf11: mov ebp, eax */ r_ebp = r_eax;
    /* 0072bf13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072bf16: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bf18: je 0x72c0ac */ if (fZ) goto L_0072c0ac;
L_0072bf1e:; BB(0x0072bf1e);
    /* 0072bf1e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072bf22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bf23: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0072bf25: mov esi, dword ptr [ecx + 0xdc] */ r_esi = R32((u32)(r_ecx+0xdcu));
    /* 0072bf2b: and esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0072bf2e: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x72bf33u); f_005c50b4();
    /* 0072bf33: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072bf37: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0072bf3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072bf3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072bf3c: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0072bf40: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x72bf45u); f_005c4214();
    /* 0072bf45: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072bf49: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072bf4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0072bf4f: call dword ptr [edx + 0x84] */ { u32 t = R32((u32)(r_edx+0x84u)); r_esp -= 4; W32(r_esp, 0x72bf55u); call_ind(t); }
    /* 0072bf55: mov ebx, eax */ r_ebx = r_eax;
    /* 0072bf57: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072bf5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bf5d: je 0x72bf6f */ if (fZ) goto L_0072bf6f;
L_0072bf5f:; BB(0x0072bf5f);
    /* 0072bf5f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bf61: je 0x72bf69 */ if (fZ) goto L_0072bf69;
L_0072bf63:; BB(0x0072bf63);
    /* 0072bf63: mov byte ptr [edi + 0x1c], 0x2b */ W8((u32)(r_edi+0x1cu), 0x2bu);
    /* 0072bf67: jmp 0x72bf9b */ goto L_0072bf9b;
L_0072bf69:; BB(0x0072bf69);
    /* 0072bf69: mov byte ptr [edi + 0x1c], 0x2a */ W8((u32)(r_edi+0x1cu), 0x2au);
    /* 0072bf6d: jmp 0x72bf9b */ goto L_0072bf9b;
L_0072bf6f:; BB(0x0072bf6f);
    /* 0072bf6f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bf71: je 0x72bf79 */ if (fZ) goto L_0072bf79;
L_0072bf73:; BB(0x0072bf73);
    /* 0072bf73: mov byte ptr [edi + 0x1c], 0xc */ W8((u32)(r_edi+0x1cu), 0xcu);
    /* 0072bf77: jmp 0x72bf9b */ goto L_0072bf9b;
L_0072bf79:; BB(0x0072bf79);
    /* 0072bf79: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bf7b: je 0x72c0b6 */ if (fZ) goto L_0072c0b6;
L_0072bf81:; BB(0x0072bf81);
    /* 0072bf81: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 0072bf85: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072bf88: je 0x72bf90 */ if (fZ) goto L_0072bf90;
L_0072bf8a:; BB(0x0072bf8a);
    /* 0072bf8a: mov byte ptr [edi + 0x1c], 0x13 */ W8((u32)(r_edi+0x1cu), 0x13u);
    /* 0072bf8e: jmp 0x72bf94 */ goto L_0072bf94;
L_0072bf90:; BB(0x0072bf90);
    /* 0072bf90: mov byte ptr [edi + 0x1c], 0x36 */ W8((u32)(r_edi+0x1cu), 0x36u);
L_0072bf94:; BB(0x0072bf94);
    /* 0072bf94: mov dword ptr [edi + 0x28], 0xffffffff */ W32((u32)(r_edi+0x28u), 0xffffffffu);
L_0072bf9b:; BB(0x0072bf9b);
    /* 0072bf9b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bf9d: jne 0x72bfb7 */ if (!fZ) goto L_0072bfb7;
L_0072bf9f:; BB(0x0072bf9f);
    /* 0072bf9f: mov dword ptr [edi + 0x2c], 0xffffffff */ W32((u32)(r_edi+0x2cu), 0xffffffffu);
    /* 0072bfa6: mov dword ptr [edi + 0x30], 0xff00fffc */ W32((u32)(r_edi+0x30u), 0xff00fffcu);
    /* 0072bfad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072bfb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bfb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bfb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bfb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bfb4: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072bfb7:; BB(0x0072bfb7);
    /* 0072bfb7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072bfbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072bfbd: jne 0x72bff7 */ if (!fZ) goto L_0072bff7;
L_0072bfbf:; BB(0x0072bfbf);
    /* 0072bfbf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0072bfc3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072bfc5: je 0x72bfdf */ if (fZ) goto L_0072bfdf;
L_0072bfc7:; BB(0x0072bfc7);
    /* 0072bfc7: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bfce: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072bfd5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072bfd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bfd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bfda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bfdb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bfdc: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072bfdf:; BB(0x0072bfdf);
    /* 0072bfdf: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072bfe6: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072bfed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072bff0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072bff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072bff2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072bff3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072bff4: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072bff7:; BB(0x0072bff7);
    /* 0072bff7: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072bffb: mov dword ptr [edi + 0x2c], 0xffffffff */ W32((u32)(r_edi+0x2cu), 0xffffffffu);
    /* 0072c002: call 0x5c5148 */ r_esp -= 4; W32(r_esp, 0x72c007u); f_005c5148();
    /* 0072c007: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c009: je 0x72c01c */ if (fZ) goto L_0072c01c;
L_0072c00b:; BB(0x0072c00b);
    /* 0072c00b: mov dword ptr [edi + 0x30], 0xfffe3c28 */ W32((u32)(r_edi+0x30u), 0xfffe3c28u);
    /* 0072c012: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072c015: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c016: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c017: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c018: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c019: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072c01c:; BB(0x0072c01c);
    /* 0072c01c: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072c020: call 0x5c5180 */ r_esp -= 4; W32(r_esp, 0x72c025u); f_005c5180();
    /* 0072c025: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c028: jne 0x72c041 */ if (!fZ) goto L_0072c041;
L_0072c02a:; BB(0x0072c02a);
    /* 0072c02a: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c02e: or eax, 0xffff0800 */ {  u32 a = r_eax; u32 b = 0xffff0800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072c033: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072c037: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072c03a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c03b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c03c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c03d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c03e: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072c041:; BB(0x0072c041);
    /* 0072c041: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072c045: call 0x5c5894 */ r_esp -= 4; W32(r_esp, 0x72c04au); f_005c5894();
    /* 0072c04a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072c04d: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072c050: jl 0x72c063 */ if ((fS!=fO)) goto L_0072c063;
L_0072c052:; BB(0x0072c052);
    /* 0072c052: mov dword ptr [edi + 0x30], 0xffffea00 */ W32((u32)(r_edi+0x30u), 0xffffea00u);
    /* 0072c059: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072c05c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c05d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c05e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c05f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c060: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072c063:; BB(0x0072c063);
    /* 0072c063: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072c067: call 0x5c5130 */ r_esp -= 4; W32(r_esp, 0x72c06cu); f_005c5130();
    /* 0072c06c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c06e: je 0x72c081 */ if (fZ) goto L_0072c081;
L_0072c070:; BB(0x0072c070);
    /* 0072c070: mov dword ptr [edi + 0x30], 0xff61e853 */ W32((u32)(r_edi+0x30u), 0xff61e853u);
    /* 0072c077: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072c07a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c07b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c07c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c07d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c07e: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072c081:; BB(0x0072c081);
    /* 0072c081: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c082: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c087: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0072c08b: call 0x5c50b4 */ r_esp -= 4; W32(r_esp, 0x72c090u); f_005c50b4();
    /* 0072c090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c092: je 0x72c0a5 */ if (fZ) goto L_0072c0a5;
L_0072c094:; BB(0x0072c094);
    /* 0072c094: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072c09b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072c09e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c09f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c0a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c0a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c0a2: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072c0a5:; BB(0x0072c0a5);
    /* 0072c0a5: mov dword ptr [edi + 0x30], 0xffffffff */ W32((u32)(r_edi+0x30u), 0xffffffffu);
L_0072c0ac:; BB(0x0072c0ac);
    /* 0072c0ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072c0af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c0b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c0b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c0b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c0b3: ret 4 */ FN_RET(0x0072bee0); r_esp += 8; return;
L_0072c0b6:; BB(0x0072c0b6);
    /* 0072c0b6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0072c0ba: call 0x5c587c */ r_esp -= 4; W32(r_esp, 0x72c0bfu); f_005c587c();
    /* 0072c0bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c0c1: je 0x72bf81 */ if (fZ) goto L_0072bf81;
L_0072c0c7:; BB(0x0072c0c7);
    /* 0072c0c7: mov byte ptr [edi + 0x1c], 0x19 */ W8((u32)(r_edi+0x1cu), 0x19u);
    /* 0072c0cb: jmp 0x72bf94 */ goto L_0072bf94;
}

