#include "protos.h"

void f_004062f8(void) /* sub_4062F8 */
{
    FN_ENTER(0x004062f8);
    /* 004062f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004062fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004062fe: jl 0x406324 */ if ((fS!=fO)) goto L_00406324;
L_00406300:; BB(0x00406300);
    /* 00406300: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406303: jle 0x406317 */ if ((fZ||fS!=fO)) goto L_00406317;
L_00406305:; BB(0x00406305);
    /* 00406305: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406308: jne 0x406324 */ if (!fZ) goto L_00406324;
L_0040630a:; BB(0x0040630a);
    /* 0040630a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040630c: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0040630f: call 0x40fbfc */ r_esp -= 4; W32(r_esp, 0x406314u); f_0040fbfc();
    /* 00406314: ret 4 */ FN_RET(0x004062f8); r_esp += 8; return;
L_00406317:; BB(0x00406317);
    /* 00406317: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00406319: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0040631c: call 0x40fbfc */ r_esp -= 4; W32(r_esp, 0x406321u); f_0040fbfc();
    /* 00406321: ret 4 */ FN_RET(0x004062f8); r_esp += 8; return;
L_00406324:; BB(0x00406324);
    /* 00406324: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406326: ret 4 */ FN_RET(0x004062f8); r_esp += 8; return;
}

void f_0040632c(void)
{
    FN_ENTER(0x0040632c);
    /* 0040632c: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00406331: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406333: jne 0x40633c */ if (!fZ) goto L_0040633c;
L_00406335:; BB(0x00406335);
    /* 00406335: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
L_0040633c:; BB(0x0040633c);
    /* 0040633c: ret  */ FN_RET(0x0040632c); r_esp += 4; return;
}

void f_00406340(void)
{
    FN_ENTER(0x00406340);
    /* 00406340: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00406345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406347: jne 0x406350 */ if (!fZ) goto L_00406350;
L_00406349:; BB(0x00406349);
    /* 00406349: mov dword ptr [ecx + 0x24], 0x13 */ W32((u32)(r_ecx+0x24u), 0x13u);
L_00406350:; BB(0x00406350);
    /* 00406350: ret  */ FN_RET(0x00406340); r_esp += 4; return;
}

void f_00406354(void) /* sub_406354 */
{
    FN_ENTER(0x00406354);
    /* 00406354: mov dword ptr [0xa3ab94], 0x3f800000 */ W32((u32)(0xa3ab94u), 0x3f800000u);
    /* 0040635e: mov dword ptr [0xa3ab98], 0x41000000 */ W32((u32)(0xa3ab98u), 0x41000000u);
    /* 00406368: mov dword ptr [0xa3ab9c], 0x3fc00000 */ W32((u32)(0xa3ab9cu), 0x3fc00000u);
    /* 00406372: ret  */ FN_RET(0x00406354); r_esp += 4; return;
}

void f_00406374(void) /* sub_406374 */
{
    FN_ENTER(0x00406374);
    /* 00406374: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00406375: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406378: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0040637c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040637e: jne 0x406399 */ if (!fZ) goto L_00406399;
L_00406380:; BB(0x00406380);
    /* 00406380: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00406383: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406386: je 0x4063fd */ if (fZ) goto L_004063fd;
L_00406388:; BB(0x00406388);
    /* 00406388: mov dword ptr [esp], 0x43000000 */ W32((u32)(r_esp), 0x43000000u);
    /* 0040638f: mov dword ptr [esp + 4], 0x43360000 */ W32((u32)(r_esp+0x4u), 0x43360000u);
    /* 00406397: jmp 0x4063ad */ goto L_004063ad;
L_00406399:; BB(0x00406399);
    /* 00406399: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040639c: jne 0x4063ad */ if (!fZ) goto L_004063ad;
L_0040639e:; BB(0x0040639e);
    /* 0040639e: mov dword ptr [esp], 0x43d78000 */ W32((u32)(r_esp), 0x43d78000u);
    /* 004063a5: mov dword ptr [esp + 4], 0x43360000 */ W32((u32)(r_esp+0x4u), 0x43360000u);
L_004063ad:; BB(0x004063ad);
    /* 004063ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004063b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004063b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004063b3: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x4063b8u); f_00735708();
    /* 004063b8: mov edi, eax */ r_edi = r_eax;
    /* 004063ba: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004063be: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004063c0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4063c5u); f_00792fe8();
    /* 004063c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004063c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004063ca: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004063cc: mov ecx, edi */ r_ecx = r_edi;
    /* 004063ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004063cf: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x4063d4u); f_00735c90();
    /* 004063d4: push 0x433e0000 */ { u32 v = 0x433e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004063d9: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 004063e0: or edx, 0xffff00c0 */ {  u32 a = r_edx; u32 b = 0xffff00c0u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004063e6: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 004063ed: mov ecx, edi */ r_ecx = r_edi;
    /* 004063ef: call 0x736390 */ r_esp -= 4; W32(r_esp, 0x4063f4u); f_00736390();
    /* 004063f4: mov eax, edi */ r_eax = r_edi;
    /* 004063f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004063f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004063fa: ret 8 */ FN_RET(0x00406374); r_esp += 12; return;
L_004063fd:; BB(0x004063fd);
    /* 004063fd: mov dword ptr [esp], 0x41c00000 */ W32((u32)(r_esp), 0x41c00000u);
    /* 00406404: mov dword ptr [esp + 4], 0x43360000 */ W32((u32)(r_esp+0x4u), 0x43360000u);
    /* 0040640c: jmp 0x4063ad */ goto L_004063ad;
}

void f_00406410(void)
{
    FN_ENTER(0x00406410);
    /* 00406410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406411: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00406413: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00406416: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00406419: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040641c: jle 0x40643a */ if ((fZ||fS!=fO)) goto L_0040643a;
L_0040641e:; BB(0x0040641e);
    /* 0040641e: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 00406421: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406423: je 0x406431 */ if (fZ) goto L_00406431;
L_00406425:; BB(0x00406425);
    /* 00406425: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40642au); f_007127b0();
    /* 0040642a: mov dword ptr [ebp + 0x74], 0 */ W32((u32)(r_ebp+0x74u), 0x0u);
L_00406431:; BB(0x00406431);
    /* 00406431: mov dword ptr [ebp + 0x24], 0xc */ W32((u32)(r_ebp+0x24u), 0xcu);
    /* 00406438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406439: ret  */ FN_RET(0x00406410); r_esp += 4; return;
L_0040643a:; BB(0x0040643a);
    /* 0040643a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0040643d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00406440: jle 0x406449 */ if ((fZ||fS!=fO)) goto L_00406449;
L_00406442:; BB(0x00406442);
    /* 00406442: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 00406445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406447: je 0x40644b */ if (fZ) goto L_0040644b;
L_00406449:; BB(0x00406449);
    /* 00406449: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040644a: ret  */ FN_RET(0x00406410); r_esp += 4; return;
L_0040644b:; BB(0x0040644b);
    /* 0040644b: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0040644d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040644f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00406451: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x406456u); f_00406374();
    /* 00406456: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 00406459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040645a: ret  */ FN_RET(0x00406410); r_esp += 4; return;
}

void f_0040645c(void)
{
    FN_ENTER(0x0040645c);
    /* 0040645c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040645d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040645f: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00406462: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00406465: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406468: jle 0x406486 */ if ((fZ||fS!=fO)) goto L_00406486;
L_0040646a:; BB(0x0040646a);
    /* 0040646a: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 0040646d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040646f: je 0x40647d */ if (fZ) goto L_0040647d;
L_00406471:; BB(0x00406471);
    /* 00406471: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x406476u); f_007127b0();
    /* 00406476: mov dword ptr [ebp + 0x78], 0 */ W32((u32)(r_ebp+0x78u), 0x0u);
L_0040647d:; BB(0x0040647d);
    /* 0040647d: mov dword ptr [ebp + 0x24], 0xb */ W32((u32)(r_ebp+0x24u), 0xbu);
    /* 00406484: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406485: ret  */ FN_RET(0x0040645c); r_esp += 4; return;
L_00406486:; BB(0x00406486);
    /* 00406486: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00406489: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040648c: jle 0x406495 */ if ((fZ||fS!=fO)) goto L_00406495;
L_0040648e:; BB(0x0040648e);
    /* 0040648e: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 00406491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406493: je 0x406497 */ if (fZ) goto L_00406497;
L_00406495:; BB(0x00406495);
    /* 00406495: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406496: ret  */ FN_RET(0x0040645c); r_esp += 4; return;
L_00406497:; BB(0x00406497);
    /* 00406497: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00406499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040649b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040649d: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x4064a2u); f_00406374();
    /* 004064a2: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 004064a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004064a6: ret  */ FN_RET(0x0040645c); r_esp += 4; return;
}

void f_004064a8(void)
{
    FN_ENTER(0x004064a8);
    /* 004064a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004064a9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004064ab: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004064ae: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004064b1: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004064b4: jle 0x4064d2 */ if ((fZ||fS!=fO)) goto L_004064d2;
L_004064b6:; BB(0x004064b6);
    /* 004064b6: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 004064b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004064bb: je 0x4064c9 */ if (fZ) goto L_004064c9;
L_004064bd:; BB(0x004064bd);
    /* 004064bd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4064c2u); f_007127b0();
    /* 004064c2: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
L_004064c9:; BB(0x004064c9);
    /* 004064c9: mov dword ptr [ebp + 0x24], 9 */ W32((u32)(r_ebp+0x24u), 0x9u);
    /* 004064d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004064d1: ret  */ FN_RET(0x004064a8); r_esp += 4; return;
L_004064d2:; BB(0x004064d2);
    /* 004064d2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004064d5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004064d8: jle 0x4064e1 */ if ((fZ||fS!=fO)) goto L_004064e1;
L_004064da:; BB(0x004064da);
    /* 004064da: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 004064dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004064df: je 0x4064e3 */ if (fZ) goto L_004064e3;
L_004064e1:; BB(0x004064e1);
    /* 004064e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004064e2: ret  */ FN_RET(0x004064a8); r_esp += 4; return;
L_004064e3:; BB(0x004064e3);
    /* 004064e3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004064e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004064e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004064e9: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x4064eeu); f_00406374();
    /* 004064ee: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 004064f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004064f2: ret  */ FN_RET(0x004064a8); r_esp += 4; return;
}

void f_004064f4(void)
{
    FN_ENTER(0x004064f4);
    /* 004064f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004064f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004064f7: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004064fa: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004064fd: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406500: jle 0x40651e */ if ((fZ||fS!=fO)) goto L_0040651e;
L_00406502:; BB(0x00406502);
    /* 00406502: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 00406505: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406507: je 0x406515 */ if (fZ) goto L_00406515;
L_00406509:; BB(0x00406509);
    /* 00406509: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40650eu); f_007127b0();
    /* 0040650e: mov dword ptr [ebp + 0x64], 0 */ W32((u32)(r_ebp+0x64u), 0x0u);
L_00406515:; BB(0x00406515);
    /* 00406515: mov dword ptr [ebp + 0x24], 7 */ W32((u32)(r_ebp+0x24u), 0x7u);
    /* 0040651c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040651d: ret  */ FN_RET(0x004064f4); r_esp += 4; return;
L_0040651e:; BB(0x0040651e);
    /* 0040651e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00406521: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00406524: jle 0x40652d */ if ((fZ||fS!=fO)) goto L_0040652d;
L_00406526:; BB(0x00406526);
    /* 00406526: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 00406529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040652b: je 0x40652f */ if (fZ) goto L_0040652f;
L_0040652d:; BB(0x0040652d);
    /* 0040652d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040652e: ret  */ FN_RET(0x004064f4); r_esp += 4; return;
L_0040652f:; BB(0x0040652f);
    /* 0040652f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00406531: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406533: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00406535: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x40653au); f_00406374();
    /* 0040653a: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 0040653d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040653e: ret  */ FN_RET(0x004064f4); r_esp += 4; return;
}

void f_00406540(void)
{
    FN_ENTER(0x00406540);
    /* 00406540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406541: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00406543: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00406546: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00406549: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040654c: jle 0x40656a */ if ((fZ||fS!=fO)) goto L_0040656a;
L_0040654e:; BB(0x0040654e);
    /* 0040654e: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 00406551: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406553: je 0x406561 */ if (fZ) goto L_00406561;
L_00406555:; BB(0x00406555);
    /* 00406555: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40655au); f_007127b0();
    /* 0040655a: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
L_00406561:; BB(0x00406561);
    /* 00406561: mov dword ptr [ebp + 0x24], 5 */ W32((u32)(r_ebp+0x24u), 0x5u);
    /* 00406568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406569: ret  */ FN_RET(0x00406540); r_esp += 4; return;
L_0040656a:; BB(0x0040656a);
    /* 0040656a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0040656d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00406570: jle 0x406579 */ if ((fZ||fS!=fO)) goto L_00406579;
L_00406572:; BB(0x00406572);
    /* 00406572: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 00406575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406577: je 0x40657b */ if (fZ) goto L_0040657b;
L_00406579:; BB(0x00406579);
    /* 00406579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040657a: ret  */ FN_RET(0x00406540); r_esp += 4; return;
L_0040657b:; BB(0x0040657b);
    /* 0040657b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040657d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040657f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00406581: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x406586u); f_00406374();
    /* 00406586: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 00406589: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040658a: ret  */ FN_RET(0x00406540); r_esp += 4; return;
}

void f_0040658c(void)
{
    FN_ENTER(0x0040658c);
    /* 0040658c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040658d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040658f: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00406592: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00406595: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406598: jle 0x4065b6 */ if ((fZ||fS!=fO)) goto L_004065b6;
L_0040659a:; BB(0x0040659a);
    /* 0040659a: mov ecx, dword ptr [ebp + 0x58] */ r_ecx = R32((u32)(r_ebp+0x58u));
    /* 0040659d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040659f: je 0x4065ad */ if (fZ) goto L_004065ad;
L_004065a1:; BB(0x004065a1);
    /* 004065a1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4065a6u); f_007127b0();
    /* 004065a6: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
L_004065ad:; BB(0x004065ad);
    /* 004065ad: mov dword ptr [ebp + 0x24], 4 */ W32((u32)(r_ebp+0x24u), 0x4u);
    /* 004065b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004065b5: ret  */ FN_RET(0x0040658c); r_esp += 4; return;
L_004065b6:; BB(0x004065b6);
    /* 004065b6: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004065b9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004065bc: jle 0x4065c5 */ if ((fZ||fS!=fO)) goto L_004065c5;
L_004065be:; BB(0x004065be);
    /* 004065be: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 004065c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004065c3: je 0x4065c7 */ if (fZ) goto L_004065c7;
L_004065c5:; BB(0x004065c5);
    /* 004065c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004065c6: ret  */ FN_RET(0x0040658c); r_esp += 4; return;
L_004065c7:; BB(0x004065c7);
    /* 004065c7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004065c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004065cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004065cd: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x4065d2u); f_00406374();
    /* 004065d2: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 004065d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004065d6: ret  */ FN_RET(0x0040658c); r_esp += 4; return;
}

void f_004065d8(void)
{
    FN_ENTER(0x004065d8);
    /* 004065d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004065d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004065db: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004065de: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004065e1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004065e4: jle 0x406602 */ if ((fZ||fS!=fO)) goto L_00406602;
L_004065e6:; BB(0x004065e6);
    /* 004065e6: mov ecx, dword ptr [ebp + 0x54] */ r_ecx = R32((u32)(r_ebp+0x54u));
    /* 004065e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004065eb: je 0x4065f9 */ if (fZ) goto L_004065f9;
L_004065ed:; BB(0x004065ed);
    /* 004065ed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4065f2u); f_007127b0();
    /* 004065f2: mov dword ptr [ebp + 0x54], 0 */ W32((u32)(r_ebp+0x54u), 0x0u);
L_004065f9:; BB(0x004065f9);
    /* 004065f9: mov dword ptr [ebp + 0x24], 3 */ W32((u32)(r_ebp+0x24u), 0x3u);
    /* 00406600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406601: ret  */ FN_RET(0x004065d8); r_esp += 4; return;
L_00406602:; BB(0x00406602);
    /* 00406602: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00406605: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00406608: jle 0x406611 */ if ((fZ||fS!=fO)) goto L_00406611;
L_0040660a:; BB(0x0040660a);
    /* 0040660a: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 0040660d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040660f: je 0x406613 */ if (fZ) goto L_00406613;
L_00406611:; BB(0x00406611);
    /* 00406611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406612: ret  */ FN_RET(0x004065d8); r_esp += 4; return;
L_00406613:; BB(0x00406613);
    /* 00406613: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00406615: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406617: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00406619: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x40661eu); f_00406374();
    /* 0040661e: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00406621: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406622: ret  */ FN_RET(0x004065d8); r_esp += 4; return;
}

void f_00406624(void) /* sub_406624 */
{
    FN_ENTER(0x00406624);
    /* 00406624: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00406625: mov edi, dword ptr [ecx + 0x20] */ r_edi = R32((u32)(r_ecx+0x20u));
    /* 00406628: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040662a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040662e: fld dword ptr [0x8f8988] */ FPUSH(R_F32((u32)(0x8f8988u)));
    /* 00406634: fld dword ptr [0x8f8984] */ FPUSH(R_F32((u32)(0x8f8984u)));
    /* 0040663a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040663c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040663e: mov dword ptr [ecx + edi*8 + 0x28], edx */ W32((u32)(r_ecx+r_edi*8+0x28u), r_edx);
    /* 00406642: mov edi, dword ptr [ecx + 0x20] */ r_edi = R32((u32)(r_ecx+0x20u));
    /* 00406645: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00406648: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040664a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040664c: mov dword ptr [ecx + edi*8 + 0x2c], edx */ W32((u32)(r_ecx+r_edi*8+0x2cu), r_edx);
    /* 00406650: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00406652: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00406654: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00406657: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406659: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040665b: fstp dword ptr [ecx + edx*8 + 0x30] */ W_F32((u32)(r_ecx+r_edx*8+0x30u), ST(0)); FPOP();
    /* 0040665f: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00406662: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00406665: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406667: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406669: fstp dword ptr [ecx + eax*8 + 0x34] */ W_F32((u32)(r_ecx+r_eax*8+0x34u), ST(0)); FPOP();
    /* 0040666d: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00406670: mov dword ptr [ecx + eax*4 + 0x1a8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1a8u), 0x0u);
    /* 0040667b: add dword ptr [ecx + 0x20], 1 */ { u32 ad = (u32)(r_ecx+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040667f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00406680: ret 4 */ FN_RET(0x00406624); r_esp += 8; return;
}

void f_00406684(void) /* sub_406684 */
{
    FN_ENTER(0x00406684);
    /* 00406684: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00406687: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406689: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040668b: jbe 0x4066a0 */ if ((fC||fZ)) goto L_004066a0;
L_0040668d:; BB(0x0040668d);
    /* 0040668d: mov dword ptr [ecx + eax*4 + 0x1a8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1a8u), 0x0u);
    /* 00406698: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040669b: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040669e: jb 0x40668d */ if (fC) goto L_0040668d;
L_004066a0:; BB(0x004066a0);
    /* 004066a0: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 004066a7: ret  */ FN_RET(0x00406684); r_esp += 4; return;
}

void f_004066a8(void) /* sub_4066A8 */
{
    FN_ENTER(0x004066a8);
    /* 004066a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004066a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004066ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004066ad: call 0x5b8424 */ r_esp -= 4; W32(r_esp, 0x4066b2u); f_005b8424();
    /* 004066b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004066b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004066b8: jne 0x4066be */ if (!fZ) goto L_004066be;
L_004066ba:; BB(0x004066ba);
    /* 004066ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004066bb: ret 4 */ FN_RET(0x004066a8); r_esp += 8; return;
L_004066be:; BB(0x004066be);
    /* 004066be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004066bf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4066c4u); f_00857e98();
    /* 004066c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004066c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004066c6: ret 4 */ FN_RET(0x004066a8); r_esp += 8; return;
}

void f_004066cc(void) /* sub_4066CC */
{
    FN_ENTER(0x004066cc);
    /* 004066cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004066cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004066cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004066d1: call 0x4ebbac */ r_esp -= 4; W32(r_esp, 0x4066d6u); f_004ebbac();
    /* 004066d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004066da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004066dc: jne 0x4066e2 */ if (!fZ) goto L_004066e2;
L_004066de:; BB(0x004066de);
    /* 004066de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004066df: ret 4 */ FN_RET(0x004066cc); r_esp += 8; return;
L_004066e2:; BB(0x004066e2);
    /* 004066e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004066e3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4066e8u); f_00857e98();
    /* 004066e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004066e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004066ea: ret 4 */ FN_RET(0x004066cc); r_esp += 8; return;
}

void f_004066f0(void) /* sub_4066F0 */
{
    FN_ENTER(0x004066f0);
    /* 004066f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004066f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004066f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004066f5: call 0x406714 */ r_esp -= 4; W32(r_esp, 0x4066fau); f_00406714();
    /* 004066fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004066fe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406700: jne 0x406706 */ if (!fZ) goto L_00406706;
L_00406702:; BB(0x00406702);
    /* 00406702: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00406703: ret 4 */ FN_RET(0x004066f0); r_esp += 8; return;
L_00406706:; BB(0x00406706);
    /* 00406706: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00406707: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40670cu); f_005c2f74();
    /* 0040670c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040670d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040670e: ret 4 */ FN_RET(0x004066f0); r_esp += 8; return;
}

void f_00406714(void) /* sub_406714 */
{
    FN_ENTER(0x00406714);
    /* 00406714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406715: mov ebp, esp */ r_ebp = r_esp;
    /* 00406717: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406719: push 0x8cc1e0 */ { u32 v = 0x8cc1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040671e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00406724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406725: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040672c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040672f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00406732: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00406735: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00406738: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040673b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040673e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406745: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406748: mov edx, dword ptr [ebx + 0x10c] */ r_edx = R32((u32)(r_ebx+0x10cu));
    /* 0040674e: mov dword ptr [ebx], 0xaf2308 */ W32((u32)(r_ebx), 0xaf2308u);
    /* 00406754: mov eax, dword ptr [edx*4 + 0xa3abd4] */ r_eax = R32((u32)(r_edx*4+0xa3abd4u));
    /* 0040675b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040675d: je 0x40676a */ if (fZ) goto L_0040676a;
L_0040675f:; BB(0x0040675f);
    /* 0040675f: mov dword ptr [edx*4 + 0xa3abd4], 0 */ W32((u32)(r_edx*4+0xa3abd4u), 0x0u);
L_0040676a:; BB(0x0040676a);
    /* 0040676a: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 00406770: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406772: je 0x406788 */ if (fZ) goto L_00406788;
L_00406774:; BB(0x00406774);
    /* 00406774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406775: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x40677au); f_00857e98();
    /* 0040677a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040677b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040677e: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
L_00406788:; BB(0x00406788);
    /* 00406788: mov ecx, dword ptr [ebx + 0x190] */ r_ecx = R32((u32)(r_ebx+0x190u));
    /* 0040678e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406790: je 0x4067bb */ if (fZ) goto L_004067bb;
L_00406792:; BB(0x00406792);
    /* 00406792: je 0x40679e */ if (fZ) goto L_0040679e;
L_00406794:; BB(0x00406794);
    /* 00406794: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406796: call 0x4066cc */ r_esp -= 4; W32(r_esp, 0x40679bu); f_004066cc();
    /* 0040679b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_0040679e:; BB(0x0040679e);
    /* 0040679e: mov eax, dword ptr [0xa3af94] */ r_eax = R32((u32)(0xa3af94u));
    /* 004067a3: mov dword ptr [ebx + 0x190], 0 */ W32((u32)(r_ebx+0x190u), 0x0u);
    /* 004067ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004067af: je 0x4067bb */ if (fZ) goto L_004067bb;
L_004067b1:; BB(0x004067b1);
    /* 004067b1: mov dword ptr [0xa3af98], 0 */ W32((u32)(0xa3af98u), 0x0u);
L_004067bb:; BB(0x004067bb);
    /* 004067bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004067c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004067c4: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x4067c9u); f_007a9f38();
    /* 004067c9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004067cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004067cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004067d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004067d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004067d9: ret  */ FN_RET(0x00406714); r_esp += 4; return;
}

void f_00406780(void)
{
    FN_ENTER(0x00406780);
    /* 00406780: loopne 0x406782 */ r_ecx--; if (r_ecx && !fZ) UNSUP(0x00406782, "branch target outside the lifted block");
    /* 00406782: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00406784: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00406786: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00406788: mov ecx, dword ptr [ebx + 0x190] */ r_ecx = R32((u32)(r_ebx+0x190u));
    /* 0040678e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406790: je 0x4067bb */ if (fZ) goto L_004067bb;
L_00406792:; BB(0x00406792);
    /* 00406792: je 0x40679e */ if (fZ) goto L_0040679e;
L_00406794:; BB(0x00406794);
    /* 00406794: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406796: call 0x4066cc */ r_esp -= 4; W32(r_esp, 0x40679bu); f_004066cc();
    /* 0040679b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_0040679e:; BB(0x0040679e);
    /* 0040679e: mov eax, dword ptr [0xa3af94] */ r_eax = R32((u32)(0xa3af94u));
    /* 004067a3: mov dword ptr [ebx + 0x190], 0 */ W32((u32)(r_ebx+0x190u), 0x0u);
    /* 004067ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004067af: je 0x4067bb */ if (fZ) goto L_004067bb;
L_004067b1:; BB(0x004067b1);
    /* 004067b1: mov dword ptr [0xa3af98], 0 */ W32((u32)(0xa3af98u), 0x0u);
L_004067bb:; BB(0x004067bb);
    /* 004067bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004067c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004067c4: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x4067c9u); f_007a9f38();
    /* 004067c9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004067cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004067cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004067d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004067d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004067d9: ret  */ FN_RET(0x00406780); r_esp += 4; return;
}

void f_004067dc(void) /* sub_4067DC */
{
    FN_ENTER(0x004067dc);
    /* 004067dc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 004067e1: mov word ptr [ecx + 0x94], ax */ W16((u32)(r_ecx+0x94u), (u16)r_eax);
    /* 004067e8: ret 4 */ FN_RET(0x004067dc); r_esp += 8; return;
}

void f_004067ec(void) /* sub_4067EC */
{
    FN_ENTER(0x004067ec);
    /* 004067ec: mov ecx, dword ptr [0xa3abe4] */ r_ecx = R32((u32)(0xa3abe4u));
    /* 004067f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004067f4: je 0x406809 */ if (fZ) goto L_00406809;
L_004067f6:; BB(0x004067f6);
    /* 004067f6: je 0x4067ff */ if (fZ) goto L_004067ff;
L_004067f8:; BB(0x004067f8);
    /* 004067f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004067fa: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4067ffu); f_004066a8();
L_004067ff:; BB(0x004067ff);
    /* 004067ff: mov dword ptr [0xa3abe4], 0 */ W32((u32)(0xa3abe4u), 0x0u);
L_00406809:; BB(0x00406809);
    /* 00406809: ret  */ FN_RET(0x004067ec); r_esp += 4; return;
}

void f_0040680c(void) /* sub_40680C */
{
    FN_ENTER(0x0040680c);
    /* 0040680c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040680f: mov eax, dword ptr [ecx + 0x104] */ r_eax = R32((u32)(r_ecx+0x104u));
    /* 00406815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00406817: je 0x406a21 */ if (fZ) goto L_00406a21;
L_0040681d:; BB(0x0040681d);
    /* 0040681d: jg 0x40682f */ if ((!fZ&&fS==fO)) goto L_0040682f;
L_0040681f:; BB(0x0040681f);
    /* 0040681f: mov dword ptr [ecx + 0x11c], 0 */ W32((u32)(r_ecx+0x11cu), 0x0u);
L_00406829:; BB(0x00406829);
    /* 00406829: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040682c: ret 4 */ FN_RET(0x0040680c); r_esp += 8; return;
L_0040682f:; BB(0x0040682f);
    /* 0040682f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406832: jg 0x406868 */ if ((!fZ&&fS==fO)) goto L_00406868;
L_00406834:; BB(0x00406834);
    /* 00406834: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 0040683b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040683d: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 00406840: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 00406843: mov dword ptr [ecx + 0x3c], 0xc1280000 */ W32((u32)(r_ecx+0x3cu), 0xc1280000u);
    /* 0040684a: mov dword ptr [ecx + 0x40], 0xc2200000 */ W32((u32)(r_ecx+0x40u), 0xc2200000u);
    /* 00406851: mov dword ptr [ecx + 0x60], 0xf3d5 */ W32((u32)(r_ecx+0x60u), 0xf3d5u);
    /* 00406858: mov dword ptr [ecx + 0x11c], 1 */ W32((u32)(r_ecx+0x11cu), 0x1u);
    /* 00406862: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00406865: ret 4 */ FN_RET(0x0040680c); r_esp += 8; return;
L_00406868:; BB(0x00406868);
    /* 00406868: mov dword ptr [ecx + 0x11c], 0 */ W32((u32)(r_ecx+0x11cu), 0x0u);
    /* 00406872: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406875: je 0x4069af */ if (fZ) goto L_004069af;
L_0040687b:; BB(0x0040687b);
    /* 0040687b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040687e: jne 0x4068f2 */ if (!fZ) goto L_004068f2;
L_00406880:; BB(0x00406880);
    /* 00406880: fild dword ptr [ecx + 0x108] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x108u)));
    /* 00406886: fld dword ptr [0x8f89e4] */ FPUSH(R_F32((u32)(0x8f89e4u)));
    /* 0040688c: fld dword ptr [0x8f89dc] */ FPUSH(R_F32((u32)(0x8f89dcu)));
    /* 00406892: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00406894: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00406896: fadd dword ptr [0x8f89e8] */ ST(0) = ST(0) + R_F32((u32)(0x8f89e8u));
    /* 0040689c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040689e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004068a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004068a2: fadd dword ptr [0x8f89e0] */ ST(0) = ST(0) + R_F32((u32)(0x8f89e0u));
    /* 004068a8: fmul dword ptr [0x8f89f0] */ ST(0) = ST(0) * R_F32((u32)(0x8f89f0u));
    /* 004068ae: fdiv dword ptr [0x8f89ec] */ ST(0) = ST(0) / R_F32((u32)(0x8f89ecu));
    /* 004068b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004068b6: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 004068b9: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004068bd: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004068c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004068c7: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004068cb: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004068cf: fistp dword ptr [ecx + 0x60] */ W32((u32)(r_ecx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004068d2: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004068d6: mov dword ptr [ecx + 0x3c], 0xc1200000 */ W32((u32)(r_ecx+0x3cu), 0xc1200000u);
    /* 004068dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004068df: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 004068e2: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 004068e5: mov dword ptr [ecx + 0x40], 0xc2dc0000 */ W32((u32)(r_ecx+0x40u), 0xc2dc0000u);
    /* 004068ec: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004068ef: ret 4 */ FN_RET(0x0040680c); r_esp += 8; return;
L_004068f2:; BB(0x004068f2);
    /* 004068f2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004068f5: jne 0x406829 */ if (!fZ) goto L_00406829;
L_004068fb:; BB(0x004068fb);
    /* 004068fb: mov eax, dword ptr [ecx + 0x108] */ r_eax = R32((u32)(r_ecx+0x108u));
    /* 00406901: mov dword ptr [esp], 0xc1ac0000 */ W32((u32)(r_esp), 0xc1ac0000u);
    /* 00406908: mov dword ptr [esp + 4], 0xc1000000 */ W32((u32)(r_esp+0x4u), 0xc1000000u);
    /* 00406910: mov dword ptr [esp + 8], 0x40e00000 */ W32((u32)(r_esp+0x8u), 0x40e00000u);
    /* 00406918: mov dword ptr [esp + 0xc], 0x41bc0000 */ W32((u32)(r_esp+0xcu), 0x41bc0000u);
    /* 00406920: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 00406923: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00406926: mov dword ptr [esp + 0x10], 0xc2dc0000 */ W32((u32)(r_esp+0x10u), 0xc2dc0000u);
    /* 0040692e: mov dword ptr [esp + 0x14], 0xc2ed1eb8 */ W32((u32)(r_esp+0x14u), 0xc2ed1eb8u);
    /* 00406936: mov dword ptr [esp + 0x18], 0xc2dc0000 */ W32((u32)(r_esp+0x18u), 0xc2dc0000u);
    /* 0040693e: mov dword ptr [esp + 0x1c], 0xc2ed1eb8 */ W32((u32)(r_esp+0x1cu), 0xc2ed1eb8u);
    /* 00406946: mov edx, dword ptr [esp + eax*4 + 0x10] */ r_edx = R32((u32)(r_esp+r_eax*4+0x10u));
    /* 0040694a: mov dword ptr [esp + 0x20], 0x4139999a */ W32((u32)(r_esp+0x20u), 0x4139999au);
    /* 00406952: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00406955: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00406957: mov dword ptr [esp + 0x24], 0x40770a3d */ W32((u32)(r_esp+0x24u), 0x40770a3du);
    /* 0040695f: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00406962: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00406965: mov dword ptr [esp + 0x28], 0xc068f5c3 */ W32((u32)(r_esp+0x28u), 0xc068f5c3u);
    /* 0040696d: mov dword ptr [esp + 0x2c], 0xc1335c29 */ W32((u32)(r_esp+0x2cu), 0xc1335c29u);
    /* 00406975: fld dword ptr [esp + eax*4 + 0x20] */ FPUSH(R_F32((u32)(r_esp+r_eax*4+0x20u)));
    /* 00406979: fmul dword ptr [0x8f89f0] */ ST(0) = ST(0) * R_F32((u32)(0x8f89f0u));
    /* 0040697f: fdiv dword ptr [0x8f89ec] */ ST(0) = ST(0) / R_F32((u32)(0x8f89ecu));
    /* 00406985: mov dword ptr [ecx + 0x3c], 0xc1200000 */ W32((u32)(r_ecx+0x3cu), 0xc1200000u);
    /* 0040698c: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00406990: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00406995: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040699a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0040699e: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004069a2: fistp dword ptr [ecx + 0x60] */ W32((u32)(r_ecx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004069a5: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004069a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004069ac: ret 4 */ FN_RET(0x0040680c); r_esp += 8; return;
L_004069af:; BB(0x004069af);
    /* 004069af: fild dword ptr [ecx + 0x108] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x108u)));
    /* 004069b5: fld dword ptr [0x8f89d4] */ FPUSH(R_F32((u32)(0x8f89d4u)));
    /* 004069bb: fld dword ptr [0x8f89cc] */ FPUSH(R_F32((u32)(0x8f89ccu)));
    /* 004069c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004069c3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004069c5: fadd dword ptr [0x8f89d8] */ ST(0) = ST(0) + R_F32((u32)(0x8f89d8u));
    /* 004069cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004069cd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004069cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004069d1: fadd dword ptr [0x8f89d0] */ ST(0) = ST(0) + R_F32((u32)(0x8f89d0u));
    /* 004069d7: fmul dword ptr [0x8f89f0] */ ST(0) = ST(0) * R_F32((u32)(0x8f89f0u));
    /* 004069dd: fdiv dword ptr [0x8f89ec] */ ST(0) = ST(0) / R_F32((u32)(0x8f89ecu));
    /* 004069e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004069e5: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 004069e8: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004069ec: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004069f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004069f6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004069fa: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004069fe: fistp dword ptr [ecx + 0x60] */ W32((u32)(r_ecx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00406a01: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00406a05: mov dword ptr [ecx + 0x3c], 0xc1200000 */ W32((u32)(r_ecx+0x3cu), 0xc1200000u);
    /* 00406a0c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00406a0e: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00406a11: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00406a14: mov dword ptr [ecx + 0x40], 0xc2dc0000 */ W32((u32)(r_ecx+0x40u), 0xc2dc0000u);
    /* 00406a1b: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00406a1e: ret 4 */ FN_RET(0x0040680c); r_esp += 8; return;
L_00406a21:; BB(0x00406a21);
    /* 00406a21: mov dword ptr [ecx + 0x38], 0x41880000 */ W32((u32)(r_ecx+0x38u), 0x41880000u);
    /* 00406a28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406a2a: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 00406a2d: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 00406a30: mov dword ptr [ecx + 0x3c], 0xc1280000 */ W32((u32)(r_ecx+0x3cu), 0xc1280000u);
    /* 00406a37: mov dword ptr [ecx + 0x40], 0xc2200000 */ W32((u32)(r_ecx+0x40u), 0xc2200000u);
    /* 00406a3e: mov dword ptr [ecx + 0x60], 0xf3d5 */ W32((u32)(r_ecx+0x60u), 0xf3d5u);
    /* 00406a45: mov dword ptr [ecx + 0x11c], 1 */ W32((u32)(r_ecx+0x11cu), 0x1u);
    /* 00406a4f: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00406a52: ret 4 */ FN_RET(0x0040680c); r_esp += 8; return;
}

void f_00406920(void)
{
    FN_ENTER(0x00406920);
    /* 00406920: mov edx, dword ptr [esp + eax*4] */ r_edx = R32((u32)(r_esp+r_eax*4));
    /* 00406923: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00406926: mov dword ptr [esp + 0x10], 0xc2dc0000 */ W32((u32)(r_esp+0x10u), 0xc2dc0000u);
    /* 0040692e: mov dword ptr [esp + 0x14], 0xc2ed1eb8 */ W32((u32)(r_esp+0x14u), 0xc2ed1eb8u);
    /* 00406936: mov dword ptr [esp + 0x18], 0xc2dc0000 */ W32((u32)(r_esp+0x18u), 0xc2dc0000u);
    /* 0040693e: mov dword ptr [esp + 0x1c], 0xc2ed1eb8 */ W32((u32)(r_esp+0x1cu), 0xc2ed1eb8u);
    /* 00406946: mov edx, dword ptr [esp + eax*4 + 0x10] */ r_edx = R32((u32)(r_esp+r_eax*4+0x10u));
    /* 0040694a: mov dword ptr [esp + 0x20], 0x4139999a */ W32((u32)(r_esp+0x20u), 0x4139999au);
    /* 00406952: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00406955: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00406957: mov dword ptr [esp + 0x24], 0x40770a3d */ W32((u32)(r_esp+0x24u), 0x40770a3du);
    /* 0040695f: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00406962: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00406965: mov dword ptr [esp + 0x28], 0xc068f5c3 */ W32((u32)(r_esp+0x28u), 0xc068f5c3u);
    /* 0040696d: mov dword ptr [esp + 0x2c], 0xc1335c29 */ W32((u32)(r_esp+0x2cu), 0xc1335c29u);
    /* 00406975: fld dword ptr [esp + eax*4 + 0x20] */ FPUSH(R_F32((u32)(r_esp+r_eax*4+0x20u)));
    /* 00406979: fmul dword ptr [0x8f89f0] */ ST(0) = ST(0) * R_F32((u32)(0x8f89f0u));
    /* 0040697f: fdiv dword ptr [0x8f89ec] */ ST(0) = ST(0) / R_F32((u32)(0x8f89ecu));
    /* 00406985: mov dword ptr [ecx + 0x3c], 0xc1200000 */ W32((u32)(r_ecx+0x3cu), 0xc1200000u);
    /* 0040698c: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00406990: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00406995: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040699a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0040699e: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004069a2: fistp dword ptr [ecx + 0x60] */ W32((u32)(r_ecx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004069a5: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004069a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004069ac: ret 4 */ FN_RET(0x00406920); r_esp += 8; return;
}

void f_00406a58(void) /* sub_406A58 */
{
    FN_ENTER(0x00406a58);
    /* 00406a58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00406a59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a5a: mov esi, ecx */ r_esi = r_ecx;
    /* 00406a5c: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00406a60: mov eax, dword ptr [0x9a2f50] */ r_eax = R32((u32)(0x9a2f50u));
    /* 00406a65: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00406a6a: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00406a6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00406a6f: mov dword ptr [esi + 0xfc], edx */ W32((u32)(r_esi+0xfcu), r_edx);
    /* 00406a75: mov dword ptr [esi + 0x100], edx */ W32((u32)(r_esi+0x100u), r_edx);
    /* 00406a7b: mov dword ptr [esi + 0x110], edx */ W32((u32)(r_esi+0x110u), r_edx);
    /* 00406a81: mov dword ptr [esi + 0x104], ebp */ W32((u32)(r_esi+0x104u), r_ebp);
    /* 00406a87: mov dword ptr [esi + 0x190], edx */ W32((u32)(r_esi+0x190u), r_edx);
    /* 00406a8d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x406a92u); f_008581c5();
    /* 00406a92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00406a94: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 00406a9a: call 0x410500 */ r_esp -= 4; W32(r_esp, 0x406a9fu); f_00410500();
    /* 00406a9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406aa2: push dword ptr [esi + 0x104] */ { u32 v = R32((u32)(r_esi+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 00406aa8: mov ecx, esi */ r_ecx = r_esi;
    /* 00406aaa: call 0x40680c */ r_esp -= 4; W32(r_esp, 0x406aafu); f_0040680c();
    /* 00406aaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406ab0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00406ab1: ret 4 */ FN_RET(0x00406a58); r_esp += 8; return;
}

void f_00406ab4(void) /* sub_406AB4 */
{
    FN_ENTER(0x00406ab4);
    /* 00406ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406ab5: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406ab9: push 0x8cc208 */ { u32 v = 0x8cc208u; r_esp -= 4; W32(r_esp, v); }
    /* 00406abe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00406ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406ac5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00406acc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406acf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00406ad2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00406ad5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00406ad8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00406adb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00406ade: mov eax, dword ptr [eax*4 + 0xa3abd4] */ r_eax = R32((u32)(r_eax*4+0xa3abd4u));
    /* 00406ae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406ae7: je 0x406af7 */ if (fZ) goto L_00406af7;
L_00406ae9:; BB(0x00406ae9);
    /* 00406ae9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406aec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00406af3: mov esp, ebp */ r_esp = r_ebp;
    /* 00406af5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406af6: ret  */ FN_RET(0x00406ab4); r_esp += 4; return;
L_00406af7:; BB(0x00406af7);
    /* 00406af7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00406afe: push 0x194 */ { u32 v = 0x194u; r_esp -= 4; W32(r_esp, v); }
    /* 00406b03: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x406b08u); f_005caba4();
    /* 00406b08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00406b09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00406b0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406b0e: je 0x406b49 */ if (fZ) goto L_00406b49;
L_00406b10:; BB(0x00406b10);
    /* 00406b10: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00406b17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406b1e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00406b21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406b25: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00406b28: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00406b2b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00406b2e: call 0x406b50 */ r_esp -= 4; W32(r_esp, 0x406b33u); f_00406b50();
    /* 00406b33: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406b36: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00406b3d:; BB(0x00406b3d);
    /* 00406b3d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00406b40: mov dword ptr [edx*4 + 0xa3abd4], eax */ W32((u32)(r_edx*4+0xa3abd4u), r_eax);
    /* 00406b47: jmp 0x406ae9 */ goto L_00406ae9;
L_00406b49:; BB(0x00406b49);
    /* 00406b49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406b4b: jmp 0x406b3d */ goto L_00406b3d;
}

void f_00406b50(void) /* sub_406B50 */
{
    FN_ENTER(0x00406b50);
    /* 00406b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00406b53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406b55: push 0x8cc224 */ { u32 v = 0x8cc224u; r_esp -= 4; W32(r_esp, v); }
    /* 00406b5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00406b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406b61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00406b68: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406b6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00406b6e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00406b71: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00406b74: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00406b77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406b7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00406b7d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00406b80: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00406b83: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00406b86: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00406b89: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00406b8c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00406b8f: call 0x7a9e5c */ r_esp -= 4; W32(r_esp, 0x406b94u); f_007a9e5c();
    /* 00406b94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406b9b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00406b9e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00406ba1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00406ba4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406ba7: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 00406bad: mov dword ptr [ecx + 0x108], edx */ W32((u32)(r_ecx+0x108u), r_edx);
    /* 00406bb3: mov dword ptr [ecx], 0xaf2308 */ W32((u32)(r_ecx), 0xaf2308u);
    /* 00406bb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00406bba: call 0x406a58 */ r_esp -= 4; W32(r_esp, 0x406bbfu); f_00406a58();
    /* 00406bbf: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00406bc2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406bc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406bc8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00406bcf: mov esp, ebp */ r_esp = r_ebp;
    /* 00406bd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406bd2: ret 0x10 */ FN_RET(0x00406b50); r_esp += 20; return;
}

void f_00406bd8(void) /* sub_406BD8 */
{
    FN_ENTER(0x00406bd8);
    /* 00406bd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406bd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00406bdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406bdd: push 0x8cc24c */ { u32 v = 0x8cc24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00406be2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00406be8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406be9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00406bf0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406bf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00406bf6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00406bf9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00406bfc: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00406bff: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 00406c05: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00406c08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c0a: je 0x406f7d */ if (fZ) goto L_00406f7d;
L_00406c10:; BB(0x00406c10);
    /* 00406c10: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c13: je 0x406d61 */ if (fZ) goto L_00406d61;
L_00406c19:; BB(0x00406c19);
    /* 00406c19: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c1c: jne 0x406ca9 */ if (!fZ) goto L_00406ca9;
L_00406c22:; BB(0x00406c22);
    /* 00406c22: mov eax, ecx */ r_eax = r_ecx;
    /* 00406c24: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
    /* 00406c2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c2c: je 0x406c6c */ if (fZ) goto L_00406c6c;
L_00406c2e:; BB(0x00406c2e);
    /* 00406c2e: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00406c34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c36: je 0x406c54 */ if (fZ) goto L_00406c54;
L_00406c38:; BB(0x00406c38);
    /* 00406c38: je 0x406c4a */ if (fZ) goto L_00406c4a;
L_00406c3a:; BB(0x00406c3a);
    /* 00406c3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406c3c: call 0x4066cc */ r_esp -= 4; W32(r_esp, 0x406c41u); f_004066cc();
    /* 00406c41: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406c44: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
L_00406c4a:; BB(0x00406c4a);
    /* 00406c4a: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_00406c54:; BB(0x00406c54);
    /* 00406c54: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
    /* 00406c5e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406c61: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 00406c67: jmp 0x406ef6 */ goto L_00406ef6;
L_00406c6c:; BB(0x00406c6c);
    /* 00406c6c: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 00406c72: mov ecx, dword ptr [edx + 0x4c8] */ r_ecx = R32((u32)(r_edx+0x4c8u));
    /* 00406c78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c7a: jne 0x406c83 */ if (!fZ) goto L_00406c83;
L_00406c7c:; BB(0x00406c7c);
    /* 00406c7c: mov eax, 1 */ r_eax = 0x1u;
    /* 00406c81: jmp 0x406c85 */ goto L_00406c85;
L_00406c83:; BB(0x00406c83);
    /* 00406c83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00406c85:; BB(0x00406c85);
    /* 00406c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c87: je 0x406ef6 */ if (fZ) goto L_00406ef6;
L_00406c8d:; BB(0x00406c8d);
    /* 00406c8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406c90: mov dword ptr [eax + 0xfc], 3 */ W32((u32)(r_eax+0xfcu), 0x3u);
    /* 00406c9a: mov dword ptr [eax + 0x118], 0 */ W32((u32)(r_eax+0x118u), 0x0u);
    /* 00406ca4: jmp 0x406ef6 */ goto L_00406ef6;
L_00406ca9:; BB(0x00406ca9);
    /* 00406ca9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406cac: jne 0x406ef6 */ if (!fZ) goto L_00406ef6;
L_00406cb2:; BB(0x00406cb2);
    /* 00406cb2: mov eax, ecx */ r_eax = r_ecx;
    /* 00406cb4: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
    /* 00406cba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406cbc: je 0x406cfc */ if (fZ) goto L_00406cfc;
L_00406cbe:; BB(0x00406cbe);
    /* 00406cbe: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00406cc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406cc6: je 0x406ce4 */ if (fZ) goto L_00406ce4;
L_00406cc8:; BB(0x00406cc8);
    /* 00406cc8: je 0x406cda */ if (fZ) goto L_00406cda;
L_00406cca:; BB(0x00406cca);
    /* 00406cca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406ccc: call 0x4066cc */ r_esp -= 4; W32(r_esp, 0x406cd1u); f_004066cc();
    /* 00406cd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406cd4: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
L_00406cda:; BB(0x00406cda);
    /* 00406cda: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_00406ce4:; BB(0x00406ce4);
    /* 00406ce4: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
    /* 00406cee: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406cf1: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 00406cf7: jmp 0x406ef6 */ goto L_00406ef6;
L_00406cfc:; BB(0x00406cfc);
    /* 00406cfc: mov edx, dword ptr [eax + 0x11c] */ r_edx = R32((u32)(r_eax+0x11cu));
    /* 00406d02: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d05: jne 0x406d14 */ if (!fZ) goto L_00406d14;
L_00406d07:; BB(0x00406d07);
    /* 00406d07: mov edx, eax */ r_edx = r_eax;
    /* 00406d09: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00406d0c: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406d11: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
L_00406d14:; BB(0x00406d14);
    /* 00406d14: mov eax, ecx */ r_eax = r_ecx;
    /* 00406d16: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 00406d1c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406d1f: mov dword ptr [eax + 0x118], edx */ W32((u32)(r_eax+0x118u), r_edx);
    /* 00406d25: cmp edx, 0x384 */ {  u32 a = r_edx; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d2b: je 0x406f60 */ if (fZ) goto L_00406f60;
L_00406d31:; BB(0x00406d31);
    /* 00406d31: cmp edx, 0x708 */ {  u32 a = r_edx; u32 b = 0x708u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d37: je 0x406f60 */ if (fZ) goto L_00406f60;
L_00406d3d:; BB(0x00406d3d);
    /* 00406d3d: cmp edx, 0x546 */ {  u32 a = r_edx; u32 b = 0x546u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d43: je 0x406f4d */ if (fZ) goto L_00406f4d;
L_00406d49:; BB(0x00406d49);
    /* 00406d49: cmp edx, 0x8ca */ {  u32 a = r_edx; u32 b = 0x8cau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d4f: je 0x406f34 */ if (fZ) goto L_00406f34;
L_00406d55:; BB(0x00406d55);
    /* 00406d55: mov ecx, eax */ r_ecx = r_eax;
    /* 00406d57: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x406d5cu); f_007aa094();
    /* 00406d5c: jmp 0x406ef6 */ goto L_00406ef6;
L_00406d61:; BB(0x00406d61);
    /* 00406d61: mov eax, ecx */ r_eax = r_ecx;
    /* 00406d63: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00406d69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d6b: je 0x406d83 */ if (fZ) goto L_00406d83;
L_00406d6d:; BB(0x00406d6d);
    /* 00406d6d: je 0x406d76 */ if (fZ) goto L_00406d76;
L_00406d6f:; BB(0x00406d6f);
    /* 00406d6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d71: call 0x4066cc */ r_esp -= 4; W32(r_esp, 0x406d76u); f_004066cc();
L_00406d76:; BB(0x00406d76);
    /* 00406d76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406d79: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_00406d83:; BB(0x00406d83);
    /* 00406d83: mov eax, dword ptr [eax + 0x100] */ r_eax = R32((u32)(r_eax+0x100u));
    /* 00406d89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d8b: je 0x406da8 */ if (fZ) goto L_00406da8;
L_00406d8d:; BB(0x00406d8d);
    /* 00406d8d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406d90: mov dword ptr [edx + 0x100], 0 */ W32((u32)(r_edx+0x100u), 0x0u);
    /* 00406d9a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406d9d: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
    /* 00406da3: jmp 0x406ef6 */ goto L_00406ef6;
L_00406da8:; BB(0x00406da8);
    /* 00406da8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406dab: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 00406db1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406db3: jne 0x406ee2 */ if (!fZ) goto L_00406ee2;
L_00406db9:; BB(0x00406db9);
    /* 00406db9: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406dbe: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x406dc3u); f_006c1bcc();
    /* 00406dc3: mov edx, eax */ r_edx = r_eax;
    /* 00406dc5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406dc8: lea eax, [ecx + 0x120] */ r_eax = (u32)(r_ecx+0x120u);
    /* 00406dce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00406dd1: add edx, 0x370 */ {  u32 a = r_edx; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406dd7: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00406dd9: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00406ddc: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00406ddf: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00406de2: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00406de4: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00406de7: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00406dea: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00406ded: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00406df0: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00406df3: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00406df6: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00406df9: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00406dfc: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00406dff: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00406e02: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00406e05: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00406e08: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00406e0b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00406e0e: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00406e11: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00406e14: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 00406e17: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00406e1a: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 00406e1d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00406e20: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00406e23: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00406e26: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 00406e29: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00406e2c: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00406e2f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00406e32: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00406e35: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00406e38: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 00406e3b: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00406e3e: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00406e41: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00406e44: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 00406e47: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00406e4a: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 00406e4d: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00406e50: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 00406e53: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00406e56: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 00406e59: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 00406e5c: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 00406e5f: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00406e62: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 00406e65: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00406e68: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 00406e6b: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 00406e6e: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 00406e71: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 00406e74: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 00406e77: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 00406e7a: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 00406e7d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00406e84: push 0x4cc */ { u32 v = 0x4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00406e89: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x406e8eu); f_008581c5();
    /* 00406e8e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00406e91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406e94: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00406e97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406e99: je 0x406f73 */ if (fZ) goto L_00406f73;
L_00406e9f:; BB(0x00406e9f);
    /* 00406e9f: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00406ea6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406ead: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00406eb0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406eb3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00406eb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406eb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406eba: call 0x4eba6c */ r_esp -= 4; W32(r_esp, 0x406ebfu); f_004eba6c();
    /* 00406ebf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00406ec6:; BB(0x00406ec6);
    /* 00406ec6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00406ec9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406ecc: mov dword ptr [edx + 0x190], eax */ W32((u32)(r_edx+0x190u), r_eax);
    /* 00406ed2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00406ed9: mov eax, edx */ r_eax = r_edx;
    /* 00406edb: mov dword ptr [eax + 0x60], 0xf3d5 */ W32((u32)(r_eax+0x60u), 0xf3d5u);
L_00406ee2:; BB(0x00406ee2);
    /* 00406ee2: mov ecx, eax */ r_ecx = r_eax;
    /* 00406ee4: call 0x40733c */ r_esp -= 4; W32(r_esp, 0x406ee9u); f_0040733c();
    /* 00406ee9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406eec: mov dword ptr [eax + 0xfc], 2 */ W32((u32)(r_eax+0xfcu), 0x2u);
L_00406ef6:; BB(0x00406ef6);
    /* 00406ef6: mov ecx, dword ptr [0xa3af94] */ r_ecx = R32((u32)(0xa3af94u));
    /* 00406efc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406efe: je 0x406f1d */ if (fZ) goto L_00406f1d;
L_00406f00:; BB(0x00406f00);
    /* 00406f00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406f03: push dword ptr [eax + 0xfc] */ { u32 v = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00406f09: call 0x4104cc */ r_esp -= 4; W32(r_esp, 0x406f0eu); f_004104cc();
    /* 00406f0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406f11: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 00406f17: mov dword ptr [0xa3af98], edx */ W32((u32)(0xa3af98u), r_edx);
L_00406f1d:; BB(0x00406f1d);
    /* 00406f1d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00406f20: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00406f23: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406f26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406f29: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00406f30: mov esp, ebp */ r_esp = r_ebp;
    /* 00406f32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406f33: ret  */ FN_RET(0x00406bd8); r_esp += 4; return;
L_00406f34:; BB(0x00406f34);
    /* 00406f34: mov ecx, eax */ r_ecx = r_eax;
    /* 00406f36: call 0x407048 */ r_esp -= 4; W32(r_esp, 0x406f3bu); f_00407048();
    /* 00406f3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406f3e: mov dword ptr [eax + 0x118], 0 */ W32((u32)(r_eax+0x118u), 0x0u);
    /* 00406f48: jmp 0x406d55 */ goto L_00406d55;
L_00406f4d:; BB(0x00406f4d);
    /* 00406f4d: call 0x406fc8 */ r_esp -= 4; W32(r_esp, 0x406f52u); f_00406fc8();
    /* 00406f52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406f55: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 00406f5b: jmp 0x406d49 */ goto L_00406d49;
L_00406f60:; BB(0x00406f60);
    /* 00406f60: call 0x407008 */ r_esp -= 4; W32(r_esp, 0x406f65u); f_00407008();
    /* 00406f65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406f68: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 00406f6e: jmp 0x406d49 */ goto L_00406d49;
L_00406f73:; BB(0x00406f73);
    /* 00406f73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406f75: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00406f78: jmp 0x406ec6 */ goto L_00406ec6;
L_00406f7d:; BB(0x00406f7d);
    /* 00406f7d: mov eax, ecx */ r_eax = r_ecx;
    /* 00406f7f: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00406f85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406f87: je 0x406f9f */ if (fZ) goto L_00406f9f;
L_00406f89:; BB(0x00406f89);
    /* 00406f89: je 0x406f92 */ if (fZ) goto L_00406f92;
L_00406f8b:; BB(0x00406f8b);
    /* 00406f8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406f8d: call 0x4066cc */ r_esp -= 4; W32(r_esp, 0x406f92u); f_004066cc();
L_00406f92:; BB(0x00406f92);
    /* 00406f92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406f95: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_00406f9f:; BB(0x00406f9f);
    /* 00406f9f: mov eax, dword ptr [eax + 0x100] */ r_eax = R32((u32)(r_eax+0x100u));
    /* 00406fa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406fa7: je 0x406ef6 */ if (fZ) goto L_00406ef6;
L_00406fad:; BB(0x00406fad);
    /* 00406fad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406fb0: mov dword ptr [edx + 0x100], 0 */ W32((u32)(r_edx+0x100u), 0x0u);
    /* 00406fba: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406fbd: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
    /* 00406fc3: jmp 0x406ef6 */ goto L_00406ef6;
}

void f_00406fc8(void) /* sub_406FC8 */
{
    FN_ENTER(0x00406fc8);
    /* 00406fc8: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00406fce: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00406fd0: je 0x406feb */ if (fZ) goto L_00406feb;
L_00406fd2:; BB(0x00406fd2);
    /* 00406fd2: movsx eax, byte ptr [ecx + 0x151] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x151u));
    /* 00406fd9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00406fdc: je 0x406ff8 */ if (fZ) goto L_00406ff8;
L_00406fde:; BB(0x00406fde);
    /* 00406fde: mov eax, 7 */ r_eax = 0x7u;
    /* 00406fe3: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00406fea: ret  */ FN_RET(0x00406fc8); r_esp += 4; return;
L_00406feb:; BB(0x00406feb);
    /* 00406feb: mov eax, 6 */ r_eax = 0x6u;
    /* 00406ff0: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00406ff7: ret  */ FN_RET(0x00406fc8); r_esp += 4; return;
L_00406ff8:; BB(0x00406ff8);
    /* 00406ff8: mov eax, 8 */ r_eax = 0x8u;
    /* 00406ffd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00407004: ret  */ FN_RET(0x00406fc8); r_esp += 4; return;
}

