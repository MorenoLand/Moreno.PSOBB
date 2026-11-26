#include "protos.h"

void f_0068d3e0(void) /* sub_68D3E0 */
{
    FN_ENTER(0x0068d3e0);
    /* 0068d3e0: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0068d3e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068d3e8: jl 0x68d3ef */ if ((fS!=fO)) goto L_0068d3ef;
L_0068d3ea:; BB(0x0068d3ea);
    /* 0068d3ea: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068d3ed: jl 0x68d3f5 */ if ((fS!=fO)) goto L_0068d3f5;
L_0068d3ef:; BB(0x0068d3ef);
    /* 0068d3ef: mov eax, 1 */ r_eax = 0x1u;
    /* 0068d3f4: ret  */ FN_RET(0x0068d3e0); r_esp += 4; return;
L_0068d3f5:; BB(0x0068d3f5);
    /* 0068d3f5: ret  */ FN_RET(0x0068d3e0); r_esp += 4; return;
}

void f_0068d3f8(void) /* sub_68D3F8 */
{
    FN_ENTER(0x0068d3f8);
    /* 0068d3f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d3f9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d3fc: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068d400: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0068d408: mov byte ptr [esp + 4], 0x21 */ W8((u32)(r_esp+0x4u), 0x21u);
    /* 0068d40d: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 0068d412: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d414: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068d418: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0068d41b: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068d41f: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068d423: call 0x6a98c0 */ r_esp -= 4; W32(r_esp, 0x68d428u); f_006a98c0();
    /* 0068d428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d42a: je 0x68d483 */ if (fZ) goto L_0068d483;
L_0068d42c:; BB(0x0068d42c);
    /* 0068d42c: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068d431: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68d436u); f_0068d5ac();
    /* 0068d436: mov ebp, eax */ r_ebp = r_eax;
    /* 0068d438: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d43a: je 0x68d483 */ if (fZ) goto L_0068d483;
L_0068d43c:; BB(0x0068d43c);
    /* 0068d43c: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068d443: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d446: jne 0x68d468 */ if (!fZ) goto L_0068d468;
L_0068d448:; BB(0x0068d448);
    /* 0068d448: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0068d44c: cmp ecx, dword ptr [ebp + 0x3f0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d452: je 0x68d46c */ if (fZ) goto L_0068d46c;
L_0068d454:; BB(0x0068d454);
    /* 0068d454: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0068d45a: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068d460: mov dword ptr [ebp + 0x33c], edx */ W32((u32)(r_ebp+0x33cu), r_edx);
    /* 0068d466: jmp 0x68d46c */ goto L_0068d46c;
L_0068d468:; BB(0x0068d468);
    /* 0068d468: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_0068d46c:; BB(0x0068d46c);
    /* 0068d46c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d46d: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x68d472u); f_0080c2dc();
    /* 0068d472: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d473: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068d477: mov dword ptr [ebp + 0x3ec], eax */ W32((u32)(r_ebp+0x3ecu), r_eax);
    /* 0068d47d: mov dword ptr [ebp + 0x3f0], edx */ W32((u32)(r_ebp+0x3f0u), r_edx);
L_0068d483:; BB(0x0068d483);
    /* 0068d483: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d487: ret  */ FN_RET(0x0068d3f8); r_esp += 4; return;
}

void f_0068d488(void) /* sub_68D488 */
{
    FN_ENTER(0x0068d488);
    /* 0068d488: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d489: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d48c: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0068d490: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0068d498: mov byte ptr [esp + 4], 0x1f */ W8((u32)(r_esp+0x4u), 0x1fu);
    /* 0068d49d: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 0068d4a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d4a4: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068d4a8: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0068d4ab: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068d4af: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068d4b3: call 0x6a9850 */ r_esp -= 4; W32(r_esp, 0x68d4b8u); f_006a9850();
    /* 0068d4b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d4ba: je 0x68d5a3 */ if (fZ) goto L_0068d5a3;
L_0068d4c0:; BB(0x0068d4c0);
    /* 0068d4c0: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068d4c5: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68d4cau); f_0068d5ac();
    /* 0068d4ca: mov ebx, eax */ r_ebx = r_eax;
    /* 0068d4cc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d4ce: je 0x68d4ea */ if (fZ) goto L_0068d4ea;
L_0068d4d0:; BB(0x0068d4d0);
    /* 0068d4d0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068d4d4: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x68d4d9u); f_0080c2dc();
    /* 0068d4d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d4da: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068d4de: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
    /* 0068d4e4: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
L_0068d4ea:; BB(0x0068d4ea);
    /* 0068d4ea: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0068d4ef: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68d4f4u); f_0068d5ac();
    /* 0068d4f4: mov ebx, eax */ r_ebx = r_eax;
    /* 0068d4f6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d4f8: je 0x68d5a3 */ if (fZ) goto L_0068d5a3;
L_0068d4fe:; BB(0x0068d4fe);
    /* 0068d4fe: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0068d505: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d508: jne 0x68d50f */ if (!fZ) goto L_0068d50f;
L_0068d50a:; BB(0x0068d50a);
    /* 0068d50a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d50d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068d50e: ret  */ FN_RET(0x0068d488); r_esp += 4; return;
L_0068d50f:; BB(0x0068d50f);
    /* 0068d50f: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0068d513: mov byte ptr [esp + 0xc], 0x20 */ W8((u32)(r_esp+0xcu), 0x20u);
    /* 0068d518: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0068d51d: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 0068d523: mov byte ptr [esp + 0xd], 6 */ W8((u32)(r_esp+0xdu), 0x6u);
    /* 0068d528: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068d52c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0068d530: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0068d533: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068d537: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0068d53a: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0068d53e: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0068d541: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0068d545: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0068d548: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0068d54c: call 0x8004fc */ r_esp -= 4; W32(r_esp, 0x68d551u); f_008004fc();
    /* 0068d551: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68d556u); f_0068be84();
    /* 0068d556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d558: je 0x68d5a3 */ if (fZ) goto L_0068d5a3;
L_0068d55a:; BB(0x0068d55a);
    /* 0068d55a: movzx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0068d55e: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 0068d564: mov byte ptr [esp + 0x24], 0xae */ W8((u32)(r_esp+0x24u), 0xaeu);
    /* 0068d569: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068d56b: mov byte ptr [esp + 0x25], 4 */ W8((u32)(r_esp+0x25u), 0x4u);
    /* 0068d570: mov word ptr [esp + 0x2a], dx */ W16((u32)(r_esp+0x2au), (u16)r_edx);
    /* 0068d575: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 0068d57b: mov word ptr [esp + 0x26], cx */ W16((u32)(r_esp+0x26u), (u16)r_ecx);
    /* 0068d580: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0068d584: movzx edx, word ptr [ebx + 0xb8] */ r_edx = (u32)R16((u32)(r_ebx+0xb8u));
    /* 0068d58b: movzx ebx, word ptr [esp + 6] */ r_ebx = (u32)R16((u32)(r_esp+0x6u));
    /* 0068d590: mov word ptr [esp + 0x28], dx */ W16((u32)(r_esp+0x28u), (u16)r_edx);
    /* 0068d595: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0068d599: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d59a: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0068d59e: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x68d5a3u); f_00800464();
L_0068d5a3:; BB(0x0068d5a3);
    /* 0068d5a3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d5a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068d5a7: ret  */ FN_RET(0x0068d488); r_esp += 4; return;
}

void f_0068d5a8(void) /* sub_68D5A8 */
{
    FN_ENTER(0x0068d5a8);
    /* 0068d5a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0068d5ac: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d5b1: je 0x68d5bc */ if (fZ) goto L_0068d5bc;
L_0068d5b3:; BB(0x0068d5b3);
    /* 0068d5b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068d5b5: jl 0x68d5bc */ if ((fS!=fO)) goto L_0068d5bc;
L_0068d5b7:; BB(0x0068d5b7);
    /* 0068d5b7: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068d5ba: jl 0x68d5bf */ if ((fS!=fO)) goto L_0068d5bf;
L_0068d5bc:; BB(0x0068d5bc);
    /* 0068d5bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068d5be: ret  */ FN_RET(0x0068d5a8); r_esp += 4; return;
L_0068d5bf:; BB(0x0068d5bf);
    /* 0068d5bf: mov eax, dword ptr [eax*4 + 0xa94254] */ r_eax = R32((u32)(r_eax*4+0xa94254u));
    /* 0068d5c6: ret  */ FN_RET(0x0068d5a8); r_esp += 4; return;
}

void f_0068d5ac(void) /* sub_68D5AC */
{
    FN_ENTER(0x0068d5ac);
    /* 0068d5ac: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d5b1: je 0x68d5bc */ if (fZ) goto L_0068d5bc;
L_0068d5b3:; BB(0x0068d5b3);
    /* 0068d5b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068d5b5: jl 0x68d5bc */ if ((fS!=fO)) goto L_0068d5bc;
L_0068d5b7:; BB(0x0068d5b7);
    /* 0068d5b7: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068d5ba: jl 0x68d5bf */ if ((fS!=fO)) goto L_0068d5bf;
L_0068d5bc:; BB(0x0068d5bc);
    /* 0068d5bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068d5be: ret  */ FN_RET(0x0068d5ac); r_esp += 4; return;
L_0068d5bf:; BB(0x0068d5bf);
    /* 0068d5bf: mov eax, dword ptr [eax*4 + 0xa94254] */ r_eax = R32((u32)(r_eax*4+0xa94254u));
    /* 0068d5c6: ret  */ FN_RET(0x0068d5ac); r_esp += 4; return;
}

void f_0068d5c8(void) /* sub_68D5C8 */
{
    FN_ENTER(0x0068d5c8);
    /* 0068d5c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d5c9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d5cc: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0068d5d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068d5d2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068d5d6: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0068d5de: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0068d5e6: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0068d5ea: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0068d5f2: mov byte ptr [esp + 4], 0x20 */ W8((u32)(r_esp+0x4u), 0x20u);
    /* 0068d5f7: mov byte ptr [esp + 5], 6 */ W8((u32)(r_esp+0x5u), 0x6u);
    /* 0068d5fc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d5fe: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068d602: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068d606: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068d609: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068d60d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0068d610: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068d614: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0068d617: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068d61b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0068d61e: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068d622: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0068d625: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0068d629: call 0x6a9888 */ r_esp -= 4; W32(r_esp, 0x68d62eu); f_006a9888();
    /* 0068d62e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d630: je 0x68d68a */ if (fZ) goto L_0068d68a;
L_0068d632:; BB(0x0068d632);
    /* 0068d632: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068d637: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68d63cu); f_0068d5ac();
    /* 0068d63c: mov ebx, eax */ r_ebx = r_eax;
    /* 0068d63e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d640: je 0x68d68a */ if (fZ) goto L_0068d68a;
L_0068d642:; BB(0x0068d642);
    /* 0068d642: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068d646: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068d64a: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 0068d64d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068d651: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068d655: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0068d658: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 0068d65b: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x68d660u); f_0080c2dc();
    /* 0068d660: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d661: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068d665: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0068d669: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
    /* 0068d66f: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 0068d675: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 0068d67b: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 0068d67e: or edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068d684: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
L_0068d68a:; BB(0x0068d68a);
    /* 0068d68a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d68d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068d68e: ret  */ FN_RET(0x0068d5c8); r_esp += 4; return;
}

void f_0068d690(void) /* sub_68D690 */
{
    FN_ENTER(0x0068d690);
    /* 0068d690: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d691: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d694: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068d698: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068d69a: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0068d69f: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0068d6a7: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 0068d6ac: mov byte ptr [esp + 4], 0xae */ W8((u32)(r_esp+0x4u), 0xaeu);
    /* 0068d6b1: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068d6b5: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 0068d6ba: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d6bc: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068d6c0: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068d6c4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068d6c7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068d6cb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0068d6ce: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068d6d2: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0068d6d5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068d6d9: call 0x6a98e8 */ r_esp -= 4; W32(r_esp, 0x68d6deu); f_006a98e8();
    /* 0068d6de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d6e0: je 0x68d72c */ if (fZ) goto L_0068d72c;
L_0068d6e2:; BB(0x0068d6e2);
    /* 0068d6e2: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068d6e7: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68d6ecu); f_0068d5ac();
    /* 0068d6ec: mov edi, eax */ r_edi = r_eax;
    /* 0068d6ee: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d6f0: je 0x68d72c */ if (fZ) goto L_0068d72c;
L_0068d6f2:; BB(0x0068d6f2);
    /* 0068d6f2: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68d6f7u); f_0068be84();
    /* 0068d6f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d6f9: je 0x68d72c */ if (fZ) goto L_0068d72c;
L_0068d6fb:; BB(0x0068d6fb);
    /* 0068d6fb: mov edx, dword ptr [edi + 0x328] */ r_edx = R32((u32)(r_edi+0x328u));
    /* 0068d701: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d707: jne 0x68d72c */ if (!fZ) goto L_0068d72c;
L_0068d709:; BB(0x0068d709);
    /* 0068d709: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068d70d: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d713: je 0x68d72c */ if (fZ) goto L_0068d72c;
L_0068d715:; BB(0x0068d715);
    /* 0068d715: and edx, 0x1c000000 */ {  u32 a = r_edx; u32 b = 0x1c000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068d71b: or dword ptr [edi + 0x33c], edx */ { u32 ad = (u32)(r_edi+0x33cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0068d721: mov ecx, edi */ r_ecx = r_edi;
    /* 0068d723: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d725: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d727: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68d72cu); f_00698a08();
L_0068d72c:; BB(0x0068d72c);
    /* 0068d72c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d72f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068d730: ret  */ FN_RET(0x0068d690); r_esp += 4; return;
}

void f_0068d734(void) /* sub_68D734 */
{
    FN_ENTER(0x0068d734);
    /* 0068d734: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d735: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d738: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0068d73c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068d73e: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0068d743: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0068d74b: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 0068d750: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0068d758: mov byte ptr [esp + 4], 0x2c */ W8((u32)(r_esp+0x4u), 0x2cu);
    /* 0068d75d: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 0068d762: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d764: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068d768: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068d76c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068d76f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068d773: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0068d776: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068d77a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0068d77d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068d781: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0068d784: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0068d788: call 0x6a99fc */ r_esp -= 4; W32(r_esp, 0x68d78du); f_006a99fc();
    /* 0068d78d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d78f: je 0x68d82b */ if (fZ) goto L_0068d82b;
L_0068d795:; BB(0x0068d795);
    /* 0068d795: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068d79a: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68d79fu); f_0068d5ac();
    /* 0068d79f: mov esi, eax */ r_esi = r_eax;
    /* 0068d7a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d7a3: je 0x68d82b */ if (fZ) goto L_0068d82b;
L_0068d7a9:; BB(0x0068d7a9);
    /* 0068d7a9: movzx edx, word ptr [esp + 0xa] */ r_edx = (u32)R16((u32)(r_esp+0xau));
    /* 0068d7ae: mov word ptr [esi + 0x80a], dx */ W16((u32)(r_esi+0x80au), (u16)r_edx);
    /* 0068d7b5: movzx ecx, word ptr [esp + 8] */ r_ecx = (u32)R16((u32)(r_esp+0x8u));
    /* 0068d7ba: mov word ptr [esi + 0x808], cx */ W16((u32)(r_esi+0x808u), (u16)r_ecx);
    /* 0068d7c1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068d7c5: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068d7c9: mov dword ptr [esi + 0x814], edx */ W32((u32)(r_esi+0x814u), r_edx);
    /* 0068d7cf: mov dword ptr [esi + 0x818], ecx */ W32((u32)(r_esi+0x818u), r_ecx);
    /* 0068d7d5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068d7d9: mov dword ptr [esi + 0x810], edx */ W32((u32)(r_esi+0x810u), r_edx);
    /* 0068d7df: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 0068d7e5: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068d7e8: mov dword ptr [esi + 0x33c], edx */ W32((u32)(r_esi+0x33cu), r_edx);
    /* 0068d7ee: call 0x77d578 */ r_esp -= 4; W32(r_esp, 0x68d7f3u); f_0077d578();
    /* 0068d7f3: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 0068d7f9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068d7fc: je 0x68d805 */ if (fZ) goto L_0068d805;
L_0068d7fe:; BB(0x0068d7fe);
    /* 0068d7fe: mov edx, 1 */ r_edx = 0x1u;
    /* 0068d803: jmp 0x68d807 */ goto L_0068d807;
L_0068d805:; BB(0x0068d805);
    /* 0068d805: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0068d807:; BB(0x0068d807);
    /* 0068d807: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d809: jne 0x68d82b */ if (!fZ) goto L_0068d82b;
L_0068d80b:; BB(0x0068d80b);
    /* 0068d80b: mov ecx, esi */ r_ecx = r_esi;
    /* 0068d80d: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x68d812u); f_006877b0();
    /* 0068d812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d814: je 0x68d82b */ if (fZ) goto L_0068d82b;
L_0068d816:; BB(0x0068d816);
    /* 0068d816: movsx eax, word ptr [esp + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 0068d81b: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0068d820: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d822: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d823: call 0x578eb0 */ r_esp -= 4; W32(r_esp, 0x68d828u); f_00578eb0();
    /* 0068d828: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068d82b:; BB(0x0068d82b);
    /* 0068d82b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d82e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068d82f: ret  */ FN_RET(0x0068d734); r_esp += 4; return;
}

void f_0068d830(void) /* sub_68D830 */
{
    FN_ENTER(0x0068d830);
    /* 0068d830: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d833: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0068d837: mov byte ptr [esp + 4], 0x2d */ W8((u32)(r_esp+0x4u), 0x2du);
    /* 0068d83c: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 0068d841: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068d845: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068d847: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068d84b: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68d850u); f_006a9e70();
    /* 0068d850: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d852: je 0x68d871 */ if (fZ) goto L_0068d871;
L_0068d854:; BB(0x0068d854);
    /* 0068d854: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068d859: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68d85eu); f_0068d5ac();
    /* 0068d85e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d860: je 0x68d871 */ if (fZ) goto L_0068d871;
L_0068d862:; BB(0x0068d862);
    /* 0068d862: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0068d868: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068d86b: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
L_0068d871:; BB(0x0068d871);
    /* 0068d871: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d874: ret  */ FN_RET(0x0068d830); r_esp += 4; return;
}

void f_0068d878(void) /* sub_68D878 */
{
    FN_ENTER(0x0068d878);
    /* 0068d878: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d879: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d87a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d87b: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d87e: mov edi, ecx */ r_edi = r_ecx;
    /* 0068d880: call 0x6a47ec */ r_esp -= 4; W32(r_esp, 0x68d885u); f_006a47ec();
    /* 0068d885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d887: je 0x68d8c8 */ if (fZ) goto L_0068d8c8;
L_0068d889:; BB(0x0068d889);
    /* 0068d889: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x68d88eu); f_00415cec();
    /* 0068d88e: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0068d891: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d892: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x68d897u); f_006dc358();
    /* 0068d897: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d898: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d89a: jne 0x68d8b0 */ if (!fZ) goto L_0068d8b0;
L_0068d89c:; BB(0x0068d89c);
    /* 0068d89c: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x68d8a1u); f_00415cec();
    /* 0068d8a1: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0068d8a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8a5: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x68d8aau); f_0082c204();
    /* 0068d8aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d8ab: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d8ae: je 0x68d8c8 */ if (fZ) goto L_0068d8c8;
L_0068d8b0:; BB(0x0068d8b0);
    /* 0068d8b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068d8b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8b5: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8ba: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68d8bfu); f_00814298();
    /* 0068d8bf: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d8c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d8c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068d8c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068d8c5: ret 8 */ FN_RET(0x0068d878); r_esp += 12; return;
L_0068d8c8:; BB(0x0068d8c8);
    /* 0068d8c8: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068d8cc: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 0068d8d2: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68d8d7u); f_006a6a60();
    /* 0068d8d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d8d9: je 0x68d9b9 */ if (fZ) goto L_0068d9b9;
L_0068d8df:; BB(0x0068d8df);
    /* 0068d8df: mov ecx, eax */ r_ecx = r_eax;
    /* 0068d8e1: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68d8e6u); f_006a60dc();
    /* 0068d8e6: mov esi, eax */ r_esi = r_eax;
    /* 0068d8e8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d8ea: je 0x68d9b9 */ if (fZ) goto L_0068d9b9;
L_0068d8f0:; BB(0x0068d8f0);
    /* 0068d8f0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d8f2: je 0x68d900 */ if (fZ) goto L_0068d900;
L_0068d8f4:; BB(0x0068d8f4);
    /* 0068d8f4: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0068d8fb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d8fe: je 0x68d951 */ if (fZ) goto L_0068d951;
L_0068d900:; BB(0x0068d900);
    /* 0068d900: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0068d904: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0068d90c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0068d90e: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0068d916: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0068d91b: mov edx, 0x384 */ r_edx = 0x384u;
    /* 0068d920: mov byte ptr [esp], 0x2c */ W8((u32)(r_esp), 0x2cu);
    /* 0068d924: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 0068d929: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0068d92e: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0068d933: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0068d936: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068d93a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068d93d: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0068d940: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068d944: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0068d94c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68d951u); f_008003e0();
L_0068d951:; BB(0x0068d951);
    /* 0068d951: lea ebp, [esp + 0x14] */ r_ebp = (u32)(r_esp+0x14u);
    /* 0068d955: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d956: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0068d95c: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068d95f: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 0068d965: mov ecx, esi */ r_ecx = r_esi;
    /* 0068d967: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x68d96cu); f_005c425c();
    /* 0068d96c: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0068d970: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0068d973: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d974: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0068d978: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x68d97du); f_005d2484();
    /* 0068d97d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0068d981: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0068d983: mov ecx, esi */ r_ecx = r_esi;
    /* 0068d985: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x68d98bu); call_ind(t); }
    /* 0068d98b: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0068d98f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068d991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068d993: jle 0x68d99d */ if ((fZ||fS!=fO)) goto L_0068d99d;
L_0068d995:; BB(0x0068d995);
    /* 0068d995: mov dword ptr [esp + 0x20], 0xffffffff */ W32((u32)(r_esp+0x20u), 0xffffffffu);
L_0068d99d:; BB(0x0068d99d);
    /* 0068d99d: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0068d9a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d9a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d9a3: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 0068d9a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d9aa: lea edx, [edi + 0x920] */ r_edx = (u32)(r_edi+0x920u);
    /* 0068d9b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d9b1: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068d9b4: call 0x6a43b8 */ r_esp -= 4; W32(r_esp, 0x68d9b9u); f_006a43b8();
L_0068d9b9:; BB(0x0068d9b9);
    /* 0068d9b9: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d9bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d9bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068d9be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068d9bf: ret 8 */ FN_RET(0x0068d878); r_esp += 12; return;
}

void f_0068d9c4(void) /* sub_68D9C4 */
{
    FN_ENTER(0x0068d9c4);
    /* 0068d9c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d9c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d9c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d9c7: sub esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d9cd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068d9cf: mov eax, dword ptr [ebp + 0xdf4] */ r_eax = R32((u32)(r_ebp+0xdf4u));
    /* 0068d9d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d9d7: je 0x68dadc */ if (fZ) goto L_0068dadc;
L_0068d9dd:; BB(0x0068d9dd);
    /* 0068d9dd: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068d9e4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d9e7: je 0x68d9ee */ if (fZ) goto L_0068d9ee;
L_0068d9e9:; BB(0x0068d9e9);
    /* 0068d9e9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d9ec: jne 0x68d9f8 */ if (!fZ) goto L_0068d9f8;
L_0068d9ee:; BB(0x0068d9ee);
    /* 0068d9ee: add esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d9f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d9f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068d9f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068d9f7: ret  */ FN_RET(0x0068d9c4); r_esp += 4; return;
L_0068d9f8:; BB(0x0068d9f8);
    /* 0068d9f8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0068d9fb: mov eax, 9 */ r_eax = 0x9u;
L_0068da00:; BB(0x0068da00);
    /* 0068da00: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0068da06: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068da09: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0068da0c: jne 0x68da00 */ if (!fZ) goto L_0068da00;
L_0068da0e:; BB(0x0068da0e);
    /* 0068da0e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068da10: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x68da15u); f_00687c48();
    /* 0068da15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068da17: je 0x68da72 */ if (fZ) goto L_0068da72;
L_0068da19:; BB(0x0068da19);
    /* 0068da19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068da1b: call 0x68dae8 */ r_esp -= 4; W32(r_esp, 0x68da20u); f_0068dae8();
    /* 0068da20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068da22: jne 0x68da36 */ if (!fZ) goto L_0068da36;
L_0068da24:; BB(0x0068da24);
    /* 0068da24: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068da27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068da28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068da29: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068da2f: call 0x6a57d8 */ r_esp -= 4; W32(r_esp, 0x68da34u); f_006a57d8();
    /* 0068da34: mov esi, eax */ r_esi = r_eax;
L_0068da36:; BB(0x0068da36);
    /* 0068da36: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 0068da3c: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 0068da3f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068da41: je 0x68da8f */ if (fZ) goto L_0068da8f;
L_0068da43:; BB(0x0068da43);
    /* 0068da43: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0068da46: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068da48: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0068da4b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068da4d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068da4f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068da51: mov dword ptr [esp + edi + 4], 0xffffffff */ W32((u32)(r_esp+r_edi+0x4u), 0xffffffffu);
    /* 0068da59: lea ecx, [esp + edi + 8] */ r_ecx = (u32)(r_esp+r_edi+0x8u);
    /* 0068da5d: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068da60: call 0x5d2998 */ r_esp -= 4; W32(r_esp, 0x68da65u); f_005d2998();
    /* 0068da65: mov dword ptr [esp + edi + 0x14], 0xffffffff */ W32((u32)(r_esp+r_edi+0x14u), 0xffffffffu);
    /* 0068da6d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068da70: jmp 0x68da8f */ goto L_0068da8f;
L_0068da72:; BB(0x0068da72);
    /* 0068da72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068da74: call 0x68dae8 */ r_esp -= 4; W32(r_esp, 0x68da79u); f_0068dae8();
    /* 0068da79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068da7b: jne 0x68dadc */ if (!fZ) goto L_0068dadc;
L_0068da7d:; BB(0x0068da7d);
    /* 0068da7d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068da80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068da81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068da82: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068da88: call 0x6a57d8 */ r_esp -= 4; W32(r_esp, 0x68da8du); f_006a57d8();
    /* 0068da8d: mov esi, eax */ r_esi = r_eax;
L_0068da8f:; BB(0x0068da8f);
    /* 0068da8f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068da91: jle 0x68dadc */ if ((fZ||fS!=fO)) goto L_0068dadc;
L_0068da93:; BB(0x0068da93);
    /* 0068da93: fld dword ptr [0x93c728] */ FPUSH(R_F32((u32)(0x93c728u)));
    /* 0068da99: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0068da9c: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0068da9f: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 0068daa2: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068daa8: fstp dword ptr [0xaab4c4] */ W_F32((u32)(0xaab4c4u), ST(0)); FPOP();
    /* 0068daae: mov dword ptr [0xaab4c0], edx */ W32((u32)(0xaab4c0u), r_edx);
    /* 0068dab4: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068dab7: mov dword ptr [0xaab4c8], edi */ W32((u32)(0xaab4c8u), r_edi);
    /* 0068dabd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0068dac0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068dac1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dac2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dac3: push 0xaab4c0 */ { u32 v = 0xaab4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068dac8: call 0x6a3f9c */ r_esp -= 4; W32(r_esp, 0x68dacdu); f_006a3f9c();
    /* 0068dacd: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 0068dad3: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068dad6: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
L_0068dadc:; BB(0x0068dadc);
    /* 0068dadc: add esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068dae3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068dae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068dae5: ret  */ FN_RET(0x0068d9c4); r_esp += 4; return;
}

void f_0068dae8(void) /* sub_68DAE8 */
{
    FN_ENTER(0x0068dae8);
    /* 0068dae8: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0068daee: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068daf3: je 0x68dafb */ if (fZ) goto L_0068dafb;
L_0068daf5:; BB(0x0068daf5);
    /* 0068daf5: mov eax, 1 */ r_eax = 0x1u;
    /* 0068dafa: ret  */ FN_RET(0x0068dae8); r_esp += 4; return;
L_0068dafb:; BB(0x0068dafb);
    /* 0068dafb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068dafd: ret  */ FN_RET(0x0068dae8); r_esp += 4; return;
}

void f_0068db00(void) /* sub_68DB00 */
{
    FN_ENTER(0x0068db00);
    /* 0068db00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068db01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068db02: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068db05: mov esi, ecx */ r_esi = r_ecx;
    /* 0068db07: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0068db0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068db0d: jle 0x68dbb2 */ if ((fZ||fS!=fO)) goto L_0068dbb2;
L_0068db13:; BB(0x0068db13);
    /* 0068db13: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068db15: je 0x68db23 */ if (fZ) goto L_0068db23;
L_0068db17:; BB(0x0068db17);
    /* 0068db17: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0068db1e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068db21: je 0x68db74 */ if (fZ) goto L_0068db74;
L_0068db23:; BB(0x0068db23);
    /* 0068db23: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068db27: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0068db2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068db31: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0068db39: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068db3e: mov eax, 0x384 */ r_eax = 0x384u;
    /* 0068db43: mov byte ptr [esp], 0x2c */ W8((u32)(r_esp), 0x2cu);
    /* 0068db47: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0068db4c: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0068db51: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0068db56: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0068db59: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068db5d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068db60: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0068db63: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068db67: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0068db6f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68db74u); f_008003e0();
L_0068db74:; BB(0x0068db74);
    /* 0068db74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068db75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0068db79: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0068db7f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068db82: mov dword ptr [esi + 0x33c], eax */ W32((u32)(r_esi+0x33cu), r_eax);
    /* 0068db88: call 0x5d2998 */ r_esp -= 4; W32(r_esp, 0x68db8du); f_005d2998();
    /* 0068db8d: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0068db91: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 0068db97: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0068db9c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0068dba0: lea ebp, [esi + 0x920] */ r_ebp = (u32)(r_esi+0x920u);
    /* 0068dba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dba7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dba8: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068dbab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068dbac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dbad: call 0x6a43b8 */ r_esp -= 4; W32(r_esp, 0x68dbb2u); f_006a43b8();
L_0068dbb2:; BB(0x0068dbb2);
    /* 0068dbb2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dbb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068dbb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068dbb7: ret 4 */ FN_RET(0x0068db00); r_esp += 8; return;
}

void f_0068dbbc(void) /* sub_68DBBC */
{
    FN_ENTER(0x0068dbbc);
    /* 0068dbbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068dbbd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dbc0: mov esi, ecx */ r_esi = r_ecx;
    /* 0068dbc2: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68dbc7u); f_0068be84();
    /* 0068dbc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dbc9: je 0x68dbd4 */ if (fZ) goto L_0068dbd4;
L_0068dbcb:; BB(0x0068dbcb);
    /* 0068dbcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068dbcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dbd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068dbd1: ret 4 */ FN_RET(0x0068dbbc); r_esp += 8; return;
L_0068dbd4:; BB(0x0068dbd4);
    /* 0068dbd4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0068dbd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dbd9: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 0068dbdf: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68dbe4u); f_006a6a60();
    /* 0068dbe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dbe6: je 0x68dc0f */ if (fZ) goto L_0068dc0f;
L_0068dbe8:; BB(0x0068dbe8);
    /* 0068dbe8: mov ecx, eax */ r_ecx = r_eax;
    /* 0068dbea: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68dbefu); f_006a60dc();
    /* 0068dbef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dbf1: je 0x68dc0f */ if (fZ) goto L_0068dc0f;
L_0068dbf3:; BB(0x0068dbf3);
    /* 0068dbf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dbf4: mov ecx, esi */ r_ecx = r_esi;
    /* 0068dbf6: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68dbfbu); f_0068be94();
    /* 0068dbfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dbfd: je 0x68dc46 */ if (fZ) goto L_0068dc46;
L_0068dbff:; BB(0x0068dbff);
    /* 0068dbff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dc01: je 0x68dc18 */ if (fZ) goto L_0068dc18;
L_0068dc03:; BB(0x0068dc03);
    /* 0068dc03: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0068dc0a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dc0d: jne 0x68dc18 */ if (!fZ) goto L_0068dc18;
L_0068dc0f:; BB(0x0068dc0f);
    /* 0068dc0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068dc11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dc14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068dc15: ret 4 */ FN_RET(0x0068dbbc); r_esp += 8; return;
L_0068dc18:; BB(0x0068dc18);
    /* 0068dc18: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068dc1c: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068dc20: mov byte ptr [esp], 0x27 */ W8((u32)(r_esp), 0x27u);
    /* 0068dc24: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0068dc29: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068dc2e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068dc32: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068dc35: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68dc3au); f_008003e0();
    /* 0068dc3a: mov eax, 1 */ r_eax = 0x1u;
    /* 0068dc3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dc42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068dc43: ret 4 */ FN_RET(0x0068dbbc); r_esp += 8; return;
L_0068dc46:; BB(0x0068dc46);
    /* 0068dc46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068dc48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dc49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dc4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dc4b: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068dc4d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68dc52u); f_00814298();
    /* 0068dc52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068dc54: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dc57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068dc58: ret 4 */ FN_RET(0x0068dbbc); r_esp += 8; return;
}

void f_0068dc5c(void) /* sub_68DC5C */
{
    FN_ENTER(0x0068dc5c);
    /* 0068dc5c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dc5f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068dc63: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 0068dc6b: mov byte ptr [esp + 4], 0x27 */ W8((u32)(r_esp+0x4u), 0x27u);
    /* 0068dc70: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 0068dc75: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068dc77: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068dc7b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0068dc7e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068dc82: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068dc86: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68dc8bu); f_006a9e70();
    /* 0068dc8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dc8d: je 0x68dcc2 */ if (fZ) goto L_0068dcc2;
L_0068dc8f:; BB(0x0068dc8f);
    /* 0068dc8f: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068dc94: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68dc99u); f_0068d5ac();
    /* 0068dc99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dc9b: je 0x68dcc2 */ if (fZ) goto L_0068dcc2;
L_0068dc9d:; BB(0x0068dc9d);
    /* 0068dc9d: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068dca1: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 0068dca7: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68dcacu); f_006a6a60();
    /* 0068dcac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dcae: je 0x68dcc2 */ if (fZ) goto L_0068dcc2;
L_0068dcb0:; BB(0x0068dcb0);
    /* 0068dcb0: mov ecx, eax */ r_ecx = r_eax;
    /* 0068dcb2: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68dcb7u); f_006a60dc();
    /* 0068dcb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dcb9: je 0x68dcc2 */ if (fZ) goto L_0068dcc2;
L_0068dcbb:; BB(0x0068dcbb);
    /* 0068dcbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068dcbd: mov ecx, eax */ r_ecx = r_eax;
    /* 0068dcbf: call dword ptr [edx + 0x74] */ { u32 t = R32((u32)(r_edx+0x74u)); r_esp -= 4; W32(r_esp, 0x68dcc2u); call_ind(t); }
L_0068dcc2:; BB(0x0068dcc2);
    /* 0068dcc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dcc5: ret  */ FN_RET(0x0068dc5c); r_esp += 4; return;
}

void f_0068dcc8(void) /* sub_68DCC8 */
{
    FN_ENTER(0x0068dcc8);
    /* 0068dcc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcca: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068dccc: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0068dcd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068dcd3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068dcd7: call 0x68dcf8 */ r_esp -= 4; W32(r_esp, 0x68dcdcu); f_0068dcf8();
    /* 0068dcdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dcdf: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068dce5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dce6: call 0x6a6540 */ r_esp -= 4; W32(r_esp, 0x68dcebu); f_006a6540();
    /* 0068dceb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068dced: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68dcf2u); f_0068dd44();
    /* 0068dcf2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068dcf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068dcf4: ret 8 */ FN_RET(0x0068dcc8); r_esp += 12; return;
}

void f_0068dcf8(void) /* sub_68DCF8 */
{
    FN_ENTER(0x0068dcf8);
    /* 0068dcf8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dcfb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dcfd: je 0x68dd11 */ if (fZ) goto L_0068dd11;
L_0068dcff:; BB(0x0068dcff);
    /* 0068dcff: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0068dd06: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dd09: jne 0x68dd11 */ if (!fZ) goto L_0068dd11;
L_0068dd0b:; BB(0x0068dd0b);
    /* 0068dd0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dd0e: ret 8 */ FN_RET(0x0068dcf8); r_esp += 12; return;
L_0068dd11:; BB(0x0068dd11);
    /* 0068dd11: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068dd15: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0068dd19: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0068dd1d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068dd22: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068dd26: mov byte ptr [esp], 0x28 */ W8((u32)(r_esp), 0x28u);
    /* 0068dd2a: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068dd2f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068dd33: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068dd36: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68dd3bu); f_008003e0();
    /* 0068dd3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dd3e: ret 8 */ FN_RET(0x0068dcf8); r_esp += 12; return;
}

void f_0068dd44(void) /* sub_68DD44 */
{
    FN_ENTER(0x0068dd44);
    /* 0068dd44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd46: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dd49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068dd4b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd4d: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 0068dd53: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68dd58u); f_0069792c();
    /* 0068dd58: mov ebx, eax */ r_ebx = r_eax;
    /* 0068dd5a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dd5c: je 0x68ddae */ if (fZ) goto L_0068ddae;
L_0068dd5e:; BB(0x0068dd5e);
    /* 0068dd5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068dd63: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x68dd68u); f_005c4214();
    /* 0068dd68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dd6a: jne 0x68ddae */ if (!fZ) goto L_0068ddae;
L_0068dd6c:; BB(0x0068dd6c);
    /* 0068dd6c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dd6e: je 0x68dd82 */ if (fZ) goto L_0068dd82;
L_0068dd70:; BB(0x0068dd70);
    /* 0068dd70: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068dd77: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dd7a: jne 0x68dd82 */ if (!fZ) goto L_0068dd82;
L_0068dd7c:; BB(0x0068dd7c);
    /* 0068dd7c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dd7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068dd80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068dd81: ret  */ FN_RET(0x0068dd44); r_esp += 4; return;
L_0068dd82:; BB(0x0068dd82);
    /* 0068dd82: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068dd86: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 0068dd8c: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0068dd94: mov byte ptr [esp], 0x26 */ W8((u32)(r_esp), 0x26u);
    /* 0068dd98: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0068dd9d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068dda1: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068dda6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068dda9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68ddaeu); f_008003e0();
L_0068ddae:; BB(0x0068ddae);
    /* 0068ddae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ddb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ddb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ddb3: ret  */ FN_RET(0x0068dd44); r_esp += 4; return;
}

void f_0068ddb4(void) /* sub_68DDB4 */
{
    FN_ENTER(0x0068ddb4);
    /* 0068ddb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ddb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ddb6: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ddb9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0068ddbd: mov byte ptr [esp + 4], 0x28 */ W8((u32)(r_esp+0x4u), 0x28u);
    /* 0068ddc2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0068ddc7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068ddcb: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0068ddd0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068ddd4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068ddd6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068ddda: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0068dddd: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068dde1: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068dde5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0068dde8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068ddec: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68ddf1u); f_006a9e70();
    /* 0068ddf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ddf3: je 0x68de4b */ if (fZ) goto L_0068de4b;
L_0068ddf5:; BB(0x0068ddf5);
    /* 0068ddf5: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068ddfa: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68ddffu); f_0068d5ac();
    /* 0068ddff: mov edi, eax */ r_edi = r_eax;
    /* 0068de01: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de03: je 0x68de4b */ if (fZ) goto L_0068de4b;
L_0068de05:; BB(0x0068de05);
    /* 0068de05: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068de09: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 0068de0f: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68de14u); f_006a6a60();
    /* 0068de14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de16: je 0x68de4b */ if (fZ) goto L_0068de4b;
L_0068de18:; BB(0x0068de18);
    /* 0068de18: mov ecx, eax */ r_ecx = r_eax;
    /* 0068de1a: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68de1fu); f_006a60dc();
    /* 0068de1f: mov ebx, eax */ r_ebx = r_eax;
    /* 0068de21: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de23: je 0x68de4b */ if (fZ) goto L_0068de4b;
L_0068de25:; BB(0x0068de25);
    /* 0068de25: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068de29: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 0068de2f: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68de34u); f_006a6a60();
    /* 0068de34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de36: je 0x68de4b */ if (fZ) goto L_0068de4b;
L_0068de38:; BB(0x0068de38);
    /* 0068de38: mov ecx, eax */ r_ecx = r_eax;
    /* 0068de3a: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68de3fu); f_006a60dc();
    /* 0068de3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de41: je 0x68de4b */ if (fZ) goto L_0068de4b;
L_0068de43:; BB(0x0068de43);
    /* 0068de43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068de44: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068de46: call 0x5c507c */ r_esp -= 4; W32(r_esp, 0x68de4bu); f_005c507c();
L_0068de4b:; BB(0x0068de4b);
    /* 0068de4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068de4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068de4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068de50: ret  */ FN_RET(0x0068ddb4); r_esp += 4; return;
}

void f_0068de54(void) /* sub_68DE54 */
{
    FN_ENTER(0x0068de54);
    /* 0068de54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068de55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068de56: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068de59: mov esi, ecx */ r_esi = r_ecx;
    /* 0068de5b: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0068de5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068de60: mov ecx, esi */ r_ecx = r_esi;
    /* 0068de62: call 0x68deb8 */ r_esp -= 4; W32(r_esp, 0x68de67u); f_0068deb8();
    /* 0068de67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de69: je 0x68deb0 */ if (fZ) goto L_0068deb0;
L_0068de6b:; BB(0x0068de6b);
    /* 0068de6b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de6d: je 0x68de83 */ if (fZ) goto L_0068de83;
L_0068de6f:; BB(0x0068de6f);
    /* 0068de6f: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0068de76: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de79: jne 0x68de83 */ if (!fZ) goto L_0068de83;
L_0068de7b:; BB(0x0068de7b);
    /* 0068de7b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068de7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068de7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068de80: ret 8 */ FN_RET(0x0068de54); r_esp += 12; return;
L_0068de83:; BB(0x0068de83);
    /* 0068de83: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068de87: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068de8b: mov byte ptr [esp], 0x25 */ W8((u32)(r_esp), 0x25u);
    /* 0068de8f: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068de94: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068de99: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0068de9d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068dea1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068dea4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68dea9u); f_008003e0();
    /* 0068dea9: mov ecx, esi */ r_ecx = r_esi;
    /* 0068deab: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68deb0u); f_0068dd44();
L_0068deb0:; BB(0x0068deb0);
    /* 0068deb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068deb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068deb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068deb5: ret 8 */ FN_RET(0x0068de54); r_esp += 12; return;
}

void f_0068deb8(void) /* sub_68DEB8 */
{
    FN_ENTER(0x0068deb8);
    /* 0068deb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068deb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068debb: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x68dec0u); f_00687c48();
    /* 0068dec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068dec2: je 0x68dee8 */ if (fZ) goto L_0068dee8;
L_0068dec4:; BB(0x0068dec4);
    /* 0068dec4: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0068dec9: call 0x6a8ecc */ r_esp -= 4; W32(r_esp, 0x68deceu); f_006a8ecc();
    /* 0068dece: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068ded1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ded4: je 0x68df22 */ if (fZ) goto L_0068df22;
L_0068ded6:; BB(0x0068ded6);
    /* 0068ded6: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0068dedb: call 0x6a8edc */ r_esp -= 4; W32(r_esp, 0x68dee0u); f_006a8edc();
    /* 0068dee0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068dee3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068dee6: je 0x68def1 */ if (fZ) goto L_0068def1;
L_0068dee8:; BB(0x0068dee8);
    /* 0068dee8: mov eax, 1 */ r_eax = 0x1u;
    /* 0068deed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068deee: ret 4 */ FN_RET(0x0068deb8); r_esp += 8; return;
L_0068def1:; BB(0x0068def1);
    /* 0068def1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068def5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068def6: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 0068defc: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68df01u); f_006a6a60();
    /* 0068df01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df03: je 0x68df1c */ if (fZ) goto L_0068df1c;
L_0068df05:; BB(0x0068df05);
    /* 0068df05: mov ecx, eax */ r_ecx = r_eax;
    /* 0068df07: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68df0cu); f_006a60dc();
    /* 0068df0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df0e: je 0x68df1c */ if (fZ) goto L_0068df1c;
L_0068df10:; BB(0x0068df10);
    /* 0068df10: movzx eax, byte ptr [eax + 0xf2] */ r_eax = (u32)R8((u32)(r_eax+0xf2u));
    /* 0068df17: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068df1a: jne 0x68dee8 */ if (!fZ) goto L_0068dee8;
L_0068df1c:; BB(0x0068df1c);
    /* 0068df1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068df1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068df1f: ret 4 */ FN_RET(0x0068deb8); r_esp += 8; return;
L_0068df22:; BB(0x0068df22);
    /* 0068df22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068df26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068df27: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 0068df2d: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68df32u); f_006a6a60();
    /* 0068df32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df34: je 0x68df1c */ if (fZ) goto L_0068df1c;
L_0068df36:; BB(0x0068df36);
    /* 0068df36: mov ecx, eax */ r_ecx = r_eax;
    /* 0068df38: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68df3du); f_006a60dc();
    /* 0068df3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df3f: je 0x68df1c */ if (fZ) goto L_0068df1c;
L_0068df41:; BB(0x0068df41);
    /* 0068df41: movzx eax, byte ptr [eax + 0xf2] */ r_eax = (u32)R8((u32)(r_eax+0xf2u));
    /* 0068df48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df4a: jne 0x68ded6 */ if (!fZ) goto L_0068ded6;
L_0068df4c:; BB(0x0068df4c);
    /* 0068df4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068df4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068df4f: ret 4 */ FN_RET(0x0068deb8); r_esp += 8; return;
}

void f_0068df54(void) /* sub_68DF54 */
{
    FN_ENTER(0x0068df54);
    /* 0068df54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068df55: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068df58: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0068df5c: mov dword ptr [esp + 0x10], 0xffffffff */ W32((u32)(r_esp+0x10u), 0xffffffffu);
    /* 0068df64: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0068df6c: mov byte ptr [esp + 0xc], 0x25 */ W8((u32)(r_esp+0xcu), 0x25u);
    /* 0068df71: mov byte ptr [esp + 0xd], 3 */ W8((u32)(r_esp+0xdu), 0x3u);
    /* 0068df76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068df78: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068df7c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068df7f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068df83: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0068df86: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0068df8a: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0068df8e: call 0x6a996c */ r_esp -= 4; W32(r_esp, 0x68df93u); f_006a996c();
    /* 0068df93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df95: je 0x68dfd2 */ if (fZ) goto L_0068dfd2;
L_0068df97:; BB(0x0068df97);
    /* 0068df97: movzx eax, word ptr [esp + 0xe] */ r_eax = (u32)R16((u32)(r_esp+0xeu));
    /* 0068df9c: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68dfa1u); f_0068d5ac();
    /* 0068dfa1: mov edi, eax */ r_edi = r_eax;
    /* 0068dfa3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dfa5: je 0x68dfd2 */ if (fZ) goto L_0068dfd2;
L_0068dfa7:; BB(0x0068dfa7);
    /* 0068dfa7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068dfab: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 0068dfb1: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68dfb6u); f_006a6a60();
    /* 0068dfb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dfb8: je 0x68dfd2 */ if (fZ) goto L_0068dfd2;
L_0068dfba:; BB(0x0068dfba);
    /* 0068dfba: mov ecx, eax */ r_ecx = r_eax;
    /* 0068dfbc: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68dfc1u); f_006a60dc();
    /* 0068dfc1: mov edx, eax */ r_edx = r_eax;
    /* 0068dfc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dfc5: je 0x68dfd2 */ if (fZ) goto L_0068dfd2;
L_0068dfc7:; BB(0x0068dfc7);
    /* 0068dfc7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0068dfcb: mov eax, edi */ r_eax = r_edi;
    /* 0068dfcd: call 0x691210 */ r_esp -= 4; W32(r_esp, 0x68dfd2u); f_00691210();
L_0068dfd2:; BB(0x0068dfd2);
    /* 0068dfd2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dfd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068dfd6: ret  */ FN_RET(0x0068df54); r_esp += 4; return;
}

void f_0068dfd8(void) /* sub_68DFD8 */
{
    FN_ENTER(0x0068dfd8);
    /* 0068dfd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068dfd9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dfdc: mov esi, ecx */ r_esi = r_ecx;
    /* 0068dfde: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dfe0: je 0x68dff5 */ if (fZ) goto L_0068dff5;
L_0068dfe2:; BB(0x0068dfe2);
    /* 0068dfe2: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0068dfe9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dfec: jne 0x68dff5 */ if (!fZ) goto L_0068dff5;
L_0068dfee:; BB(0x0068dfee);
    /* 0068dfee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068dff1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068dff2: ret 4 */ FN_RET(0x0068dfd8); r_esp += 8; return;
L_0068dff5:; BB(0x0068dff5);
    /* 0068dff5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068dff9: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068dffd: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0068e005: mov byte ptr [esp], 0x26 */ W8((u32)(r_esp), 0x26u);
    /* 0068e009: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068e00e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068e012: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068e017: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068e01a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68e01fu); f_008003e0();
    /* 0068e01f: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e021: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68e026u); f_0068dd44();
    /* 0068e026: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068e029: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e02a: ret 4 */ FN_RET(0x0068dfd8); r_esp += 8; return;
}

