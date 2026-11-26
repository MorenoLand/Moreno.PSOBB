#include "protos.h"

void f_005e6038(void) /* sub_5E6038 */
{
    FN_ENTER(0x005e6038);
    /* 005e6038: mov dword ptr [0xa8dcb0], 0x3f800000 */ W32((u32)(0xa8dcb0u), 0x3f800000u);
    /* 005e6042: mov dword ptr [0xa8dcb4], 0x41000000 */ W32((u32)(0xa8dcb4u), 0x41000000u);
    /* 005e604c: mov dword ptr [0xa8dcb8], 0x3fc00000 */ W32((u32)(0xa8dcb8u), 0x3fc00000u);
    /* 005e6056: ret  */ FN_RET(0x005e6038); r_esp += 4; return;
}

void f_005e6058(void) /* sub_5E6058 */
{
    FN_ENTER(0x005e6058);
    /* 005e6058: mov dword ptr [0xa8dcc0], 0x3f800000 */ W32((u32)(0xa8dcc0u), 0x3f800000u);
    /* 005e6062: mov dword ptr [0xa8dcc4], 0x41000000 */ W32((u32)(0xa8dcc4u), 0x41000000u);
    /* 005e606c: mov dword ptr [0xa8dcc8], 0x3fc00000 */ W32((u32)(0xa8dcc8u), 0x3fc00000u);
    /* 005e6076: ret  */ FN_RET(0x005e6058); r_esp += 4; return;
}

void f_005e6078(void) /* sub_5E6078 */
{
    FN_ENTER(0x005e6078);
    /* 005e6078: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e607d: mov ecx, dword ptr [0xa8dccc] */ r_ecx = R32((u32)(0xa8dcccu));
    /* 005e6083: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e6085: je 0x5e6092 */ if (fZ) goto L_005e6092;
L_005e6087:; BB(0x005e6087);
    /* 005e6087: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e608a: jge 0x5e6092 */ if ((fS==fO)) goto L_005e6092;
L_005e608c:; BB(0x005e608c);
    /* 005e608c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e608d: call 0x5d81b4 */ r_esp -= 4; W32(r_esp, 0x5e6092u); f_005d81b4();
L_005e6092:; BB(0x005e6092);
    /* 005e6092: ret  */ FN_RET(0x005e6078); r_esp += 4; return;
}

void f_005e6094(void) /* sub_5E6094 */
{
    FN_ENTER(0x005e6094);
    /* 005e6094: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e6099: mov ecx, dword ptr [0xa8dccc] */ r_ecx = R32((u32)(0xa8dcccu));
    /* 005e609f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e60a1: je 0x5e60ae */ if (fZ) goto L_005e60ae;
L_005e60a3:; BB(0x005e60a3);
    /* 005e60a3: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e60a6: jge 0x5e60ae */ if ((fS==fO)) goto L_005e60ae;
L_005e60a8:; BB(0x005e60a8);
    /* 005e60a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e60a9: call 0x5d8180 */ r_esp -= 4; W32(r_esp, 0x5e60aeu); f_005d8180();
L_005e60ae:; BB(0x005e60ae);
    /* 005e60ae: ret  */ FN_RET(0x005e6094); r_esp += 4; return;
}

void f_005e60b0(void) /* sub_5E60B0 */
{
    FN_ENTER(0x005e60b0);
    /* 005e60b0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e60b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e60b6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e60bbu); f_0068d5a8();
    /* 005e60bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e60bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e60be: je 0x5e60dd */ if (fZ) goto L_005e60dd;
L_005e60c0:; BB(0x005e60c0);
    /* 005e60c0: mov edx, dword ptr [eax + 0x964] */ r_edx = R32((u32)(r_eax+0x964u));
    /* 005e60c6: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e60c9: jne 0x5e60dd */ if (!fZ) goto L_005e60dd;
L_005e60cb:; BB(0x005e60cb);
    /* 005e60cb: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005e60d1: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e60d7: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
L_005e60dd:; BB(0x005e60dd);
    /* 005e60dd: ret  */ FN_RET(0x005e60b0); r_esp += 4; return;
}

void f_005e60e0(void) /* sub_5E60E0 */
{
    FN_ENTER(0x005e60e0);
    /* 005e60e0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e60e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e60e6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e60ebu); f_0068d5a8();
    /* 005e60eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e60ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e60ee: je 0x5e6102 */ if (fZ) goto L_005e6102;
L_005e60f0:; BB(0x005e60f0);
    /* 005e60f0: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005e60f6: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e60fc: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
L_005e6102:; BB(0x005e6102);
    /* 005e6102: ret  */ FN_RET(0x005e60e0); r_esp += 4; return;
}

void f_005e6104(void) /* sub_5E6104 */
{
    FN_ENTER(0x005e6104);
    /* 005e6104: mov ecx, dword ptr [0xa8dccc] */ r_ecx = R32((u32)(0xa8dcccu));
    /* 005e610a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e610c: je 0x5e6114 */ if (fZ) goto L_005e6114;
L_005e610e:; BB(0x005e610e);
    /* 005e610e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6110: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e6112: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e6114u); call_ind(t); }
L_005e6114:; BB(0x005e6114);
    /* 005e6114: mov dword ptr [0xa8dccc], 0 */ W32((u32)(0xa8dcccu), 0x0u);
    /* 005e611e: ret  */ FN_RET(0x005e6104); r_esp += 4; return;
}

void f_005e6120(void) /* sub_5E6120 */
{
    FN_ENTER(0x005e6120);
    /* 005e6120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6121: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6125: push 0x8dbb4c */ { u32 v = 0x8dbb4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e612a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e6130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6131: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e6138: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e613b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e613e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e6141: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e6144: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e6147: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6149: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e6150: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e6155u); f_005caba4();
    /* 005e6155: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e6156: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e6159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e615b: je 0x5e619e */ if (fZ) goto L_005e619e;
L_005e615d:; BB(0x005e615d);
    /* 005e615d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e6164: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e616b: push 0x5e60b0 */ { u32 v = 0x5e60b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6170: push 0x5e60e0 */ { u32 v = 0x5e60e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6175: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e6178: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e617a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e617c: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e6181u); f_005d80d4();
    /* 005e6181: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e6184: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e618b:; BB(0x005e618b);
    /* 005e618b: mov dword ptr [0xa8dccc], eax */ W32((u32)(0xa8dcccu), r_eax);
    /* 005e6190: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6193: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e619a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e619c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e619d: ret  */ FN_RET(0x005e6120); r_esp += 4; return;
L_005e619e:; BB(0x005e619e);
    /* 005e619e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e61a0: jmp 0x5e618b */ goto L_005e618b;
}

void f_005e61a4(void) /* sub_5E61A4 */
{
    FN_ENTER(0x005e61a4);
    /* 005e61a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e61a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e61a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e61a9: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5e61aeu); f_005e61c8();
    /* 005e61ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e61b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e61b4: jne 0x5e61ba */ if (!fZ) goto L_005e61ba;
L_005e61b6:; BB(0x005e61b6);
    /* 005e61b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e61b7: ret 4 */ FN_RET(0x005e61a4); r_esp += 8; return;
L_005e61ba:; BB(0x005e61ba);
    /* 005e61ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e61bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e61c0u); f_005c2f74();
    /* 005e61c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e61c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e61c2: ret 4 */ FN_RET(0x005e61a4); r_esp += 8; return;
}

void f_005e61c8(void) /* sub_5E61C8 */
{
    FN_ENTER(0x005e61c8);
    /* 005e61c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e61c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e61cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e61cd: push 0x8dbb68 */ { u32 v = 0x8dbb68u; r_esp -= 4; W32(r_esp, v); }
    /* 005e61d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e61d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e61d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e61e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e61e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e61e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e61e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e61ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e61ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e61f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e61f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e61fc: mov eax, dword ptr [ecx + 0x230] */ r_eax = R32((u32)(r_ecx+0x230u));
    /* 005e6202: mov dword ptr [ecx], 0xb10200 */ W32((u32)(r_ecx), 0xb10200u);
    /* 005e6208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e620a: je 0x5e6220 */ if (fZ) goto L_005e6220;
L_005e620c:; BB(0x005e620c);
    /* 005e620c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e620d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e6212u); f_00857e98();
    /* 005e6212: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e6213: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e6216: mov dword ptr [ecx + 0x230], 0 */ W32((u32)(r_ecx+0x230u), 0x0u);
L_005e6220:; BB(0x005e6220);
    /* 005e6220: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e6227: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5e622cu); f_005d1654();
    /* 005e622c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e622f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e6236: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6238: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6239: ret  */ FN_RET(0x005e61c8); r_esp += 4; return;
}

void f_005e623c(void) /* sub_5E623C */
{
    FN_ENTER(0x005e623c);
    /* 005e623c: movzx eax, byte ptr [ecx + 0x1f7] */ r_eax = (u32)R8((u32)(r_ecx+0x1f7u));
    /* 005e6243: ret  */ FN_RET(0x005e623c); r_esp += 4; return;
}

void f_005e6244(void) /* sub_5E6244 */
{
    FN_ENTER(0x005e6244);
    /* 005e6244: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005e6249: mov byte ptr [ecx + 0x1f6], al */ W8((u32)(r_ecx+0x1f6u), (u8)r_eax);
    /* 005e624f: ret 4 */ FN_RET(0x005e6244); r_esp += 8; return;
}

void f_005e6254(void) /* sub_5E6254 */
{
    FN_ENTER(0x005e6254);
    /* 005e6254: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6255: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6258: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e625a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e625c: call 0x5c51a4 */ r_esp -= 4; W32(r_esp, 0x5e6261u); f_005c51a4();
    /* 005e6261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6263: je 0x5e632b */ if (fZ) goto L_005e632b;
L_005e6269:; BB(0x005e6269);
    /* 005e6269: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e626b: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e6270u); f_005c5198();
    /* 005e6270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6272: jne 0x5e632b */ if (!fZ) goto L_005e632b;
L_005e6278:; BB(0x005e6278);
    /* 005e6278: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005e627e: mov eax, dword ptr [edx + 0x328] */ r_eax = R32((u32)(r_edx+0x328u));
    /* 005e6284: test eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6289: je 0x5e632b */ if (fZ) goto L_005e632b;
L_005e628f:; BB(0x005e628f);
    /* 005e628f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e6295: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e6297: jne 0x5e632b */ if (!fZ) goto L_005e632b;
L_005e629d:; BB(0x005e629d);
    /* 005e629d: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e62a2: test al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e62a4: jne 0x5e632b */ if (!fZ) goto L_005e632b;
L_005e62aa:; BB(0x005e62aa);
    /* 005e62aa: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005e62ae: mov edx, dword ptr [ebx + eax*4 + 0x1b0] */ r_edx = R32((u32)(r_ebx+r_eax*4+0x1b0u));
    /* 005e62b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e62b7: je 0x5e632b */ if (fZ) goto L_005e632b;
L_005e62b9:; BB(0x005e62b9);
    /* 005e62b9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005e62bd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005e62c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e62c1: movsx eax, byte ptr [eax + ebx + 0x1c0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx+0x1c0u));
    /* 005e62c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e62cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e62cc: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e62d1u); f_005e83c8();
    /* 005e62d1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005e62d5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005e62d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e62da: movsx eax, byte ptr [eax + ebx + 0x1c4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx+0x1c4u));
    /* 005e62e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e62e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e62e5: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e62eau); f_005e83c8();
    /* 005e62ea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005e62ed: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005e62f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e62f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e62f3: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005e62f7: mov ecx, dword ptr [ebx + eax*4 + 0x1b0] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0x1b0u));
    /* 005e62fe: call 0x5e9cb8 */ r_esp -= 4; W32(r_esp, 0x5e6303u); f_005e9cb8();
    /* 005e6303: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e6305: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e6307: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x5e630du); call_ind(t); }
    /* 005e630d: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005e6311: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e6316: mov ebx, dword ptr [ebx + edx*4 + 0x1b0] */ r_ebx = R32((u32)(r_ebx+r_edx*4+0x1b0u));
    /* 005e631d: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005e6320: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6326: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6328: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
L_005e632b:; BB(0x005e632b);
    /* 005e632b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e632e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e632f: ret 4 */ FN_RET(0x005e6254); r_esp += 8; return;
}

void f_005e6334(void) /* sub_5E6334 */
{
    FN_ENTER(0x005e6334);
    /* 005e6334: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6335: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6336: mov esi, ecx */ r_esi = r_ecx;
    /* 005e6338: mov ecx, esi */ r_ecx = r_esi;
    /* 005e633a: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e633fu); f_005d2450();
    /* 005e633f: movsx ebp, al */ r_ebp = (u32)(i32)(i8)(u8)r_eax;
    /* 005e6342: movsx eax, byte ptr [esp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 005e6347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6348: mov ecx, esi */ r_ecx = r_esi;
    /* 005e634a: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e634fu); f_005d240c();
    /* 005e634f: mov ecx, esi */ r_ecx = r_esi;
    /* 005e6351: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e6356u); f_005e84a8();
    /* 005e6356: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6357: mov ecx, esi */ r_ecx = r_esi;
    /* 005e6359: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e635eu); f_005d240c();
    /* 005e635e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e635f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e6360: ret 4 */ FN_RET(0x005e6334); r_esp += 8; return;
}

void f_005e6364(void) /* sub_5E6364 */
{
    FN_ENTER(0x005e6364);
    /* 005e6364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6365: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6368: mov esi, dword ptr [0xa8d84c] */ r_esi = R32((u32)(0xa8d84cu));
    /* 005e636e: call 0x5c3400 */ r_esp -= 4; W32(r_esp, 0x5e6373u); f_005c3400();
    /* 005e6373: call 0x5c3450 */ r_esp -= 4; W32(r_esp, 0x5e6378u); f_005c3450();
    /* 005e6378: mov ecx, dword ptr [0xa8dcd0] */ r_ecx = R32((u32)(0xa8dcd0u));
    /* 005e637e: call 0x5c34bc */ r_esp -= 4; W32(r_esp, 0x5e6383u); f_005c34bc();
    /* 005e6383: mov ecx, dword ptr [0xa8dcd0] */ r_ecx = R32((u32)(0xa8dcd0u));
    /* 005e6389: call 0x5c3504 */ r_esp -= 4; W32(r_esp, 0x5e638eu); f_005c3504();
    /* 005e638e: mov ecx, dword ptr [0xa8dcd0] */ r_ecx = R32((u32)(0xa8dcd0u));
    /* 005e6394: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e6396: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x5e639cu); call_ind(t); }
    /* 005e639c: movsx eax, word ptr [0xa8dcd4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8dcd4u));
    /* 005e63a3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63a5: jne 0x5e63c3 */ if (!fZ) goto L_005e63c3;
L_005e63a7:; BB(0x005e63a7);
    /* 005e63a7: mov ecx, dword ptr [0xa8dcd0] */ r_ecx = R32((u32)(0xa8dcd0u));
    /* 005e63ad: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005e63b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e63b1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e63b3: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x5e63b9u); call_ind(t); }
    /* 005e63b9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e63bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e63bd: call 0x5c3390 */ r_esp -= 4; W32(r_esp, 0x5e63c2u); f_005c3390();
    /* 005e63c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005e63c3:; BB(0x005e63c3);
    /* 005e63c3: movsx eax, word ptr [0xa8dcd8] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8dcd8u));
    /* 005e63ca: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63cc: je 0x5e63e4 */ if (fZ) goto L_005e63e4;
L_005e63ce:; BB(0x005e63ce);
    /* 005e63ce: movsx eax, word ptr [0xa8dcda] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8dcdau));
    /* 005e63d5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63d7: je 0x5e63e4 */ if (fZ) goto L_005e63e4;
L_005e63d9:; BB(0x005e63d9);
    /* 005e63d9: movsx eax, word ptr [0xa8dcdc] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8dcdcu));
    /* 005e63e0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63e2: jne 0x5e6410 */ if (!fZ) goto L_005e6410;
L_005e63e4:; BB(0x005e63e4);
    /* 005e63e4: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5e63e9u); f_005c34a0();
    /* 005e63e9: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005e63ee: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e63f0: je 0x5e6410 */ if (fZ) goto L_005e6410;
L_005e63f2:; BB(0x005e63f2);
    /* 005e63f2: mov ecx, dword ptr [0xa8dcd0] */ r_ecx = R32((u32)(0xa8dcd0u));
    /* 005e63f8: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e63fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e63fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e63ff: call dword ptr [edx + 0xec] */ { u32 t = R32((u32)(r_edx+0xecu)); r_esp -= 4; W32(r_esp, 0x5e6405u); call_ind(t); }
    /* 005e6405: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e6409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e640a: call 0x5c3390 */ r_esp -= 4; W32(r_esp, 0x5e640fu); f_005c3390();
    /* 005e640f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005e6410:; BB(0x005e6410);
    /* 005e6410: add dword ptr [0xa8d84c], 1 */ { u32 ad = (u32)(0xa8d84cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005e6417: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e641a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e641b: ret  */ FN_RET(0x005e6364); r_esp += 4; return;
}

void f_005e641c(void) /* sub_5E641C */
{
    FN_ENTER(0x005e641c);
    /* 005e641c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e641d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6420: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e6422: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e6424: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e6429u); f_005e908c();
    /* 005e6429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e642b: je 0x5e653b */ if (fZ) goto L_005e653b;
L_005e6431:; BB(0x005e6431);
    /* 005e6431: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e6433: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e6438u); f_005e8fa4();
    /* 005e6438: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005e643e: mov edx, eax */ r_edx = r_eax;
    /* 005e6440: add edx, 0x8d0 */ {  u32 a = r_edx; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005e6446: je 0x5e6534 */ if (fZ) goto L_005e6534;
L_005e644c:; BB(0x005e644c);
    /* 005e644c: mov ecx, dword ptr [eax + 0x8d0] */ r_ecx = R32((u32)(r_eax+0x8d0u));
    /* 005e6452: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e6454: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6456: jl 0x5e645d */ if ((fS!=fO)) goto L_005e645d;
L_005e6458:; BB(0x005e6458);
    /* 005e6458: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e645b: jle 0x5e645f */ if ((fZ||fS!=fO)) goto L_005e645f;
L_005e645d:; BB(0x005e645d);
    /* 005e645d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005e645f:; BB(0x005e645f);
    /* 005e645f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6461: je 0x5e6534 */ if (fZ) goto L_005e6534;
L_005e6467:; BB(0x005e6467);
    /* 005e6467: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005e646b: mov ebx, edx */ r_ebx = r_edx;
    /* 005e646d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005e6471: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005e6475: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e6478: mov ebp, eax */ r_ebp = r_eax;
L_005e647a:; BB(0x005e647a);
    /* 005e647a: movzx ecx, word ptr [ebp + ebx*4 + 0x8d4] */ r_ecx = (u32)R16((u32)(r_ebp+r_ebx*4+0x8d4u));
    /* 005e6482: movsx esi, word ptr [ebp + ebx*4 + 0x8d6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*4+0x8d6u));
    /* 005e648a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e648b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e648c: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5e6491u); f_007b9df0();
    /* 005e6491: mov edi, eax */ r_edi = r_eax;
    /* 005e6493: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6496: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6498: je 0x5e6509 */ if (fZ) goto L_005e6509;
L_005e649a:; BB(0x005e649a);
    /* 005e649a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005e649e: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e64a4: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e64a7: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005e64aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e64ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e64ac: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5e64b1u); f_007a9180();
    /* 005e64b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e64b4: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 005e64b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e64ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e64bb: jae 0x5e6509 */ if (!fC) goto L_005e6509;
L_005e64bd:; BB(0x005e64bd);
    /* 005e64bd: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005e64c1: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005e64c7: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e64cd: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e64d2u); f_006a2e8c();
    /* 005e64d2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005e64d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e64d8: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 005e64dc: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 005e64e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e64e1: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 005e64e4: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e64ea: movzx ebx, word ptr [eax + 0x8a4] */ r_ebx = (u32)R16((u32)(r_eax+0x8a4u));
    /* 005e64f1: push dword ptr [ebx*4 + 0x9cb9d0] */ { u32 v = R32((u32)(r_ebx*4+0x9cb9d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e64f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e64f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e64fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e64fb: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 005e64ff: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 005e6503: call dword ptr [edx + 0xf8] */ { u32 t = R32((u32)(r_edx+0xf8u)); r_esp -= 4; W32(r_esp, 0x5e6509u); call_ind(t); }
L_005e6509:; BB(0x005e6509);
    /* 005e6509: mov ecx, dword ptr [ebp + 0x8d0] */ r_ecx = R32((u32)(r_ebp+0x8d0u));
    /* 005e650f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6512: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6514: jl 0x5e651b */ if ((fS!=fO)) goto L_005e651b;
L_005e6516:; BB(0x005e6516);
    /* 005e6516: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6519: jle 0x5e651d */ if ((fZ||fS!=fO)) goto L_005e651d;
L_005e651b:; BB(0x005e651b);
    /* 005e651b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005e651d:; BB(0x005e651d);
    /* 005e651d: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e651f: jne 0x5e647a */ if (!fZ) goto L_005e647a;
L_005e6525:; BB(0x005e6525);
    /* 005e6525: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005e6529: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005e652d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005e6531: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e6534:; BB(0x005e6534);
    /* 005e6534: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e6536: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e653bu); f_005e9058();
L_005e653b:; BB(0x005e653b);
    /* 005e653b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e653e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e653f: ret 4 */ FN_RET(0x005e641c); r_esp += 8; return;
}

void f_005e6544(void) /* sub_5E6544 */
{
    FN_ENTER(0x005e6544);
    /* 005e6544: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6545: mov esi, ecx */ r_esi = r_ecx;
    /* 005e6547: mov ecx, esi */ r_ecx = r_esi;
    /* 005e6549: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e654eu); f_005e908c();
    /* 005e654e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e6550: je 0x5e6572 */ if (fZ) goto L_005e6572;
L_005e6552:; BB(0x005e6552);
    /* 005e6552: mov ecx, esi */ r_ecx = r_esi;
    /* 005e6554: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e6559u); f_005e8fa4();
    /* 005e6559: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e655d: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e6563: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e6565: call dword ptr [eax + 0x114] */ { u32 t = R32((u32)(r_eax+0x114u)); r_esp -= 4; W32(r_esp, 0x5e656bu); call_ind(t); }
    /* 005e656b: mov ecx, esi */ r_ecx = r_esi;
    /* 005e656d: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e6572u); f_005e9058();
L_005e6572:; BB(0x005e6572);
    /* 005e6572: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e6573: ret 4 */ FN_RET(0x005e6544); r_esp += 8; return;
}

void f_005e6578(void) /* sub_5E6578 */
{
    FN_ENTER(0x005e6578);
    /* 005e6578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6579: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e657a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e657b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e657c: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e657f: mov esi, ecx */ r_esi = r_ecx;
    /* 005e6581: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6583: mov ecx, esi */ r_ecx = r_esi;
    /* 005e6585: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e658au); f_005e908c();
    /* 005e658a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e658c: je 0x5e6991 */ if (fZ) goto L_005e6991;
L_005e6592:; BB(0x005e6592);
    /* 005e6592: mov ebp, dword ptr [esi + 0xf8] */ r_ebp = R32((u32)(r_esi+0xf8u));
    /* 005e6598: mov eax, ebp */ r_eax = r_ebp;
    /* 005e659a: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e659f: je 0x5e6991 */ if (fZ) goto L_005e6991;
L_005e65a5:; BB(0x005e65a5);
    /* 005e65a5: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 005e65ac: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005e65ae: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005e65b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e65b4: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 005e65b8: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 005e65bf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005e65c2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005e65c6: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 005e65cd: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e65d0: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e65d4: mov edx, dword ptr [ebp + 0x8d0] */ r_edx = R32((u32)(r_ebp+0x8d0u));
    /* 005e65da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e65dc: jl 0x5e65e3 */ if ((fS!=fO)) goto L_005e65e3;
L_005e65de:; BB(0x005e65de);
    /* 005e65de: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e65e1: jle 0x5e65e5 */ if ((fZ||fS!=fO)) goto L_005e65e5;
L_005e65e3:; BB(0x005e65e3);
    /* 005e65e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005e65e5:; BB(0x005e65e5);
    /* 005e65e5: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 005e65ec: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e65ee: jge 0x5e66c3 */ if ((fS==fO)) goto L_005e66c3;
L_005e65f4:; BB(0x005e65f4);
    /* 005e65f4: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 005e65fb: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 005e6602: movzx eax, word ptr [ebp + eax*4 + 0x8d4] */ r_eax = (u32)R16((u32)(r_ebp+r_eax*4+0x8d4u));
    /* 005e660a: movsx edi, word ptr [ebp + edx*4 + 0x8d6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*4+0x8d6u));
    /* 005e6612: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6614: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5e6619u); f_007b9df0();
    /* 005e6619: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 005e661d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6622: je 0x5e66c3 */ if (fZ) goto L_005e66c3;
L_005e6628:; BB(0x005e6628);
    /* 005e6628: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 005e662f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005e6633: movsx eax, word ptr [ebp + edi*4 + 0x8d6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*4+0x8d6u));
    /* 005e663b: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005e663e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e6640: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005e6642: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e6644: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e6646: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005e6648: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005e664c: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005e6652: mov eax, dword ptr [edx + edi*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_edi*4+0x1cu));
    /* 005e6656: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 005e665a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005e665e: mov eax, dword ptr [edx + edi*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_edi*4+0x20u));
    /* 005e6662: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005e6666: mov eax, dword ptr [edx + edi*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_edi*4+0x24u));
    /* 005e666a: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 005e6671: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e6675: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5e667au); f_0082f9c4();
    /* 005e667a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005e667e: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5e6683u); f_0082df08();
    /* 005e6683: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 005e6687: fsub dword ptr [eax + edi*4 + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_edi*4+0xcu));
    /* 005e668b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005e668f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e6691: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005e6695: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005e6699: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 005e66a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e66a2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005e66a4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e66a6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e66a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e66aa: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005e66ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e66b0: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005e66b4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005e66b8: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005e66bc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5e66c1u); f_0082ebac();
    /* 005e66c1: jmp 0x5e673c */ goto L_005e673c;
L_005e66c3:; BB(0x005e66c3);
    /* 005e66c3: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005e66c8: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e66cdu); f_0082d990();
    /* 005e66cd: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e66d3: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e66d9: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e66deu); f_006a2e8c();
    /* 005e66de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e66df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e66e0: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5e66e5u); f_005e4ba8();
    /* 005e66e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e66e8: mov edi, dword ptr [esi + 0xf8] */ r_edi = R32((u32)(r_esi+0xf8u));
    /* 005e66ee: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005e66f1: add edx, dword ptr [esp + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e66f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e66fa: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 005e6702: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005e670a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e670c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e6710: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5e6715u); f_0082d8bc();
    /* 005e6715: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 005e6719: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e671d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e671e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e671f: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e6724u); f_00835c3c();
    /* 005e6724: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6727: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e672cu); f_0082da80();
    /* 005e672c: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 005e6733: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005e6737: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5e673cu); f_0082ebac();
L_005e673c:; BB(0x005e673c);
    /* 005e673c: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005e6742: mov eax, dword ptr [edx + 0x300] */ r_eax = R32((u32)(r_edx+0x300u));
    /* 005e6748: mov edi, dword ptr [edx + 0x308] */ r_edi = R32((u32)(r_edx+0x308u));
    /* 005e674e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005e6752: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 005e6759: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005e675c: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 005e6760: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005e6764: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 005e6768: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e676c: push 0x8100 */ { u32 v = 0x8100u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6773: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5e6778u); f_0077fffc();
    /* 005e6778: mov edi, eax */ r_edi = r_eax;
    /* 005e677a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e677d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e677f: jne 0x5e68b7 */ if (!fZ) goto L_005e68b7;
L_005e6785:; BB(0x005e6785);
    /* 005e6785: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005e6789: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e678b: je 0x5e699d */ if (fZ) goto L_005e699d;
L_005e6791:; BB(0x005e6791);
    /* 005e6791: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 005e6798: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 005e679c: movsx edx, word ptr [ebp + eax*4 + 0x8d6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*4+0x8d6u));
    /* 005e67a4: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005e67aa: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005e67ad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e67af: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e67b1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e67b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e67b5: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e67b7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e67b9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e67bb: lea eax, [eax + ecx + 0x1c] */ r_eax = (u32)(r_eax+r_ecx+0x1cu);
    /* 005e67bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e67c0: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 005e67c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e67c8: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e67cdu); f_00836208();
    /* 005e67cd: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 005e67d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e67d4: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005e67d8: fdiv dword ptr [esi + 0x208] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x208u));
    /* 005e67de: mov eax, dword ptr [esp + 0x90] */ r_eax = R32((u32)(r_esp+0x90u));
    /* 005e67e5: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 005e67e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e67eb: je 0x5e6950 */ if (fZ) goto L_005e6950;
L_005e67f1:; BB(0x005e67f1);
    /* 005e67f1: mov ecx, esi */ r_ecx = r_esi;
    /* 005e67f3: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e67f8u); f_005e8fa4();
    /* 005e67f8: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e67fe: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 005e6806: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e680c: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e6811u); f_006a2e8c();
    /* 005e6811: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005e6815: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005e681b: movzx edi, word ptr [edx + 0x1c] */ r_edi = (u32)R16((u32)(r_edx+0x1cu));
    /* 005e681f: mov word ptr [esp + 0x40], di */ W16((u32)(r_esp+0x40u), (u16)r_edi);
    /* 005e6824: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 005e6827: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005e682b: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 005e682f: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 005e6833: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 005e6838: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005e683e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005e6842: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 005e6849: movzx ebp, word ptr [ebp + eax*4 + 0x8d6] */ r_ebp = (u32)R16((u32)(r_ebp+r_eax*4+0x8d6u));
    /* 005e6851: mov word ptr [esp + 0x44], bp */ W16((u32)(r_esp+0x44u), (u16)r_ebp);
    /* 005e6856: movzx eax, word ptr [edx + 0x8a4] */ r_eax = (u32)R16((u32)(r_edx+0x8a4u));
    /* 005e685d: mov eax, dword ptr [eax*4 + 0x9cb9d0] */ r_eax = R32((u32)(r_eax*4+0x9cb9d0u));
    /* 005e6864: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005e6868: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 005e686c: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 005e6871: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e6876: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 005e687a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 005e687e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e6882: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 005e6886: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005e688a: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 005e688e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e688f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6890: mov eax, dword ptr [esp + 0x8c] */ r_eax = R32((u32)(r_esp+0x8cu));
    /* 005e6897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6898: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e689e: call 0x5c71f8 */ r_esp -= 4; W32(r_esp, 0x5e68a3u); f_005c71f8();
    /* 005e68a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e68a6: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005e68ab: mov ecx, esi */ r_ecx = r_esi;
    /* 005e68ad: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e68b2u); f_005e9058();
    /* 005e68b2: jmp 0x5e6950 */ goto L_005e6950;
L_005e68b7:; BB(0x005e68b7);
    /* 005e68b7: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005e68ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e68bc: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005e68c0: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 005e68c3: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 005e68c7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e68ca: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005e68ce: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005e68d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e68d3: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 005e68da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e68db: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e68e0u); f_00836208();
    /* 005e68e0: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 005e68e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e68e7: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005e68eb: fdiv dword ptr [esi + 0x208] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x208u));
    /* 005e68f1: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005e68f4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005e68f7: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 005e68fb: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6901: je 0x5e6950 */ if (fZ) goto L_005e6950;
L_005e6903:; BB(0x005e6903);
    /* 005e6903: mov eax, dword ptr [esi + 0x234] */ r_eax = R32((u32)(r_esi+0x234u));
    /* 005e6909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e690b: je 0x5e6950 */ if (fZ) goto L_005e6950;
L_005e690d:; BB(0x005e690d);
    /* 005e690d: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005e6911: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 005e6915: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 005e691a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e691f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 005e6923: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 005e6927: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e692b: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 005e692f: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 005e6933: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005e6937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6938: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6939: mov ebp, dword ptr [esp + 0x8c] */ r_ebp = R32((u32)(r_esp+0x8cu));
    /* 005e6940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6941: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6942: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e6948: call 0x5cf0d0 */ r_esp -= 4; W32(r_esp, 0x5e694du); f_005cf0d0();
    /* 005e694d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e6950:; BB(0x005e6950);
    /* 005e6950: mov ecx, esi */ r_ecx = r_esi;
    /* 005e6952: call 0x5e69c8 */ r_esp -= 4; W32(r_esp, 0x5e6957u); f_005e69c8();
    /* 005e6957: mov eax, dword ptr [esi + 0x238] */ r_eax = R32((u32)(r_esi+0x238u));
    /* 005e695d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e695f: je 0x5e6991 */ if (fZ) goto L_005e6991;
L_005e6961:; BB(0x005e6961);
    /* 005e6961: mov ecx, esi */ r_ecx = r_esi;
    /* 005e6963: call 0x5c5160 */ r_esp -= 4; W32(r_esp, 0x5e6968u); f_005c5160();
    /* 005e6968: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e696b: jne 0x5e6991 */ if (!fZ) goto L_005e6991;
L_005e696d:; BB(0x005e696d);
    /* 005e696d: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 005e6974: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005e6978: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e697c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005e697f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005e6983: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005e6987: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005e698b: call dword ptr [esi + 0x238] */ { u32 t = R32((u32)(r_esi+0x238u)); r_esp -= 4; W32(r_esp, 0x5e6991u); call_ind(t); }
L_005e6991:; BB(0x005e6991);
    /* 005e6991: mov eax, ebx */ r_eax = r_ebx;
    /* 005e6993: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e6996: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e6997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6998: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e6999: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e699a: ret 0x10 */ FN_RET(0x005e6578); r_esp += 20; return;
L_005e699d:; BB(0x005e699d);
    /* 005e699d: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005e69a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e69a2: mov ebp, dword ptr [esp + 0x88] */ r_ebp = R32((u32)(r_esp+0x88u));
    /* 005e69a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e69aa: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e69afu); f_00836208();
    /* 005e69af: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 005e69b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e69b6: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005e69ba: fdiv dword ptr [esi + 0x208] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x208u));
    /* 005e69c0: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 005e69c4: jmp 0x5e6950 */ goto L_005e6950;
}

void f_005e69c8(void) /* sub_5E69C8 */
{
    FN_ENTER(0x005e69c8);
    /* 005e69c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e69c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e69cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e69cd: push 0x8dbb90 */ { u32 v = 0x8dbb90u; r_esp -= 4; W32(r_esp, v); }
    /* 005e69d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e69d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e69d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e69e0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e69e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e69e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e69e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e69ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e69ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e69f2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005e69f9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e69fb: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005e6a02: mov dword ptr [ebp - 0x3c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f800000u);
    /* 005e6a09: mov dword ptr [ebp - 0x38], 0x3f800000 */ W32((u32)(r_ebp+0xffffffc8u), 0x3f800000u);
    /* 005e6a10: mov dword ptr [ebp - 0x34], 0x3f4ccccd */ W32((u32)(r_ebp+0xffffffccu), 0x3f4ccccdu);
    /* 005e6a17: mov dword ptr [ebp - 0x30], 0x3f4ccccd */ W32((u32)(r_ebp+0xffffffd0u), 0x3f4ccccdu);
    /* 005e6a1e: mov dword ptr [ebp - 0x2c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffd4u), 0x3f800000u);
    /* 005e6a25: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005e6a2c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e6a31u); f_005caba4();
    /* 005e6a31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e6a32: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e6a35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e6a37: je 0x5e6a74 */ if (fZ) goto L_005e6a74;
L_005e6a39:; BB(0x005e6a39);
    /* 005e6a39: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005e6a40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e6a47: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e6a4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e6a50: push dword ptr [eax + 0xf8] */ { u32 v = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e6a56: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a5b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e6a5e: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 005e6a61: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005e6a64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a68: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x5e6a6du); f_006eb52c();
    /* 005e6a6d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e6a74:; BB(0x005e6a74);
    /* 005e6a74: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6a77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6a7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e6a81: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6a83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6a84: ret  */ FN_RET(0x005e69c8); r_esp += 4; return;
}

void f_005e6a88(void) /* sub_5E6A88 */
{
    FN_ENTER(0x005e6a88);
    /* 005e6a88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a8c: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6a8f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e6a91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e6a93: mov edi, dword ptr [esp + 0x8c] */ r_edi = R32((u32)(r_esp+0x8cu));
    /* 005e6a9a: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e6a9fu); f_005e908c();
    /* 005e6a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6aa1: je 0x5e6dd4 */ if (fZ) goto L_005e6dd4;
L_005e6aa7:; BB(0x005e6aa7);
    /* 005e6aa7: mov esi, dword ptr [ebp + 0xf8] */ r_esi = R32((u32)(r_ebp+0xf8u));
    /* 005e6aad: mov eax, esi */ r_eax = r_esi;
    /* 005e6aaf: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e6ab4: je 0x5e6dd4 */ if (fZ) goto L_005e6dd4;
L_005e6aba:; BB(0x005e6aba);
    /* 005e6aba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6abc: jne 0x5e6ac4 */ if (!fZ) goto L_005e6ac4;
L_005e6abe:; BB(0x005e6abe);
    /* 005e6abe: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
L_005e6ac4:; BB(0x005e6ac4);
    /* 005e6ac4: mov eax, dword ptr [esi + 0x8d0] */ r_eax = R32((u32)(r_esi+0x8d0u));
    /* 005e6aca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6acc: jl 0x5e6b38 */ if ((fS!=fO)) goto L_005e6b38;
L_005e6ace:; BB(0x005e6ace);
    /* 005e6ace: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6ad1: jg 0x5e6b38 */ if ((!fZ&&fS==fO)) goto L_005e6b38;
L_005e6ad3:; BB(0x005e6ad3);
    /* 005e6ad3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6ad5: je 0x5e6b38 */ if (fZ) goto L_005e6b38;
L_005e6ad7:; BB(0x005e6ad7);
    /* 005e6ad7: jl 0x5e6ade */ if ((fS!=fO)) goto L_005e6ade;
L_005e6ad9:; BB(0x005e6ad9);
    /* 005e6ad9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6adc: jle 0x5e6ae0 */ if ((fZ||fS!=fO)) goto L_005e6ae0;
L_005e6ade:; BB(0x005e6ade);
    /* 005e6ade: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e6ae0:; BB(0x005e6ae0);
    /* 005e6ae0: movzx edx, word ptr [esi + eax*4 + 0x8d0] */ r_edx = (u32)R16((u32)(r_esi+r_eax*4+0x8d0u));
    /* 005e6ae8: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 005e6aeb: movsx eax, word ptr [esi + eax*4 + 0x8d2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_eax*4+0x8d2u));
    /* 005e6af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6af5: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5e6afau); f_007b9df0();
    /* 005e6afa: mov edx, eax */ r_edx = r_eax;
    /* 005e6afc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6aff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6b01: je 0x5e6b38 */ if (fZ) goto L_005e6b38;
L_005e6b03:; BB(0x005e6b03);
    /* 005e6b03: movsx eax, word ptr [esi + ebx*2 + 0x8d2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*2+0x8d2u));
    /* 005e6b0b: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005e6b11: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 005e6b14: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6b16: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6b18: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6b1a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6b1c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6b1e: mov eax, dword ptr [edx + ebx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ebx*4+0x1cu));
    /* 005e6b22: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005e6b26: mov eax, dword ptr [edx + ebx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ebx*4+0x20u));
    /* 005e6b2a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005e6b2e: mov eax, dword ptr [edx + ebx*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_ebx*4+0x24u));
    /* 005e6b32: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e6b36: jmp 0x5e6b95 */ goto L_005e6b95;
L_005e6b38:; BB(0x005e6b38);
    /* 005e6b38: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005e6b3d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e6b42u); f_0082d990();
    /* 005e6b42: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b45: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5e6b4au); f_005e4ba8();
    /* 005e6b4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6b4d: mov ebx, dword ptr [ebp + 0xf8] */ r_ebx = R32((u32)(r_ebp+0xf8u));
    /* 005e6b53: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005e6b56: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 005e6b5e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6b60: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005e6b68: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e6b6a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e6b6e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5e6b73u); f_0082d8bc();
    /* 005e6b73: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 005e6b77: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e6b7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b7d: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e6b82u); f_00835c3c();
    /* 005e6b82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6b85: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e6b8au); f_0082da80();
    /* 005e6b8a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005e6b8e: mov edx, edi */ r_edx = r_edi;
    /* 005e6b90: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5e6b95u); f_0082ebac();
L_005e6b95:; BB(0x005e6b95);
    /* 005e6b95: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e6b99: push 0x8100 */ { u32 v = 0x8100u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b9f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ba0: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5e6ba5u); f_0077fffc();
    /* 005e6ba5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6ba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6baa: je 0x5e6dde */ if (fZ) goto L_005e6dde;
L_005e6bb0:; BB(0x005e6bb0);
    /* 005e6bb0: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e6bb3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bb4: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e6bb9u); f_00836208();
    /* 005e6bb9: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 005e6bbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e6bc0:; BB(0x005e6bc0);
    /* 005e6bc0: mov eax, dword ptr [esp + 0x90] */ r_eax = R32((u32)(r_esp+0x90u));
    /* 005e6bc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6bc9: je 0x5e6d69 */ if (fZ) goto L_005e6d69;
L_005e6bcf:; BB(0x005e6bcf);
    /* 005e6bcf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e6bd1: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e6bd6u); f_005e8fa4();
    /* 005e6bd6: mov eax, dword ptr [esi + 0x8d0] */ r_eax = R32((u32)(r_esi+0x8d0u));
    /* 005e6bdc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6be0: jl 0x5e6be7 */ if ((fS!=fO)) goto L_005e6be7;
L_005e6be2:; BB(0x005e6be2);
    /* 005e6be2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6be5: jle 0x5e6be9 */ if ((fZ||fS!=fO)) goto L_005e6be9;
L_005e6be7:; BB(0x005e6be7);
    /* 005e6be7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e6be9:; BB(0x005e6be9);
    /* 005e6be9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6beb: je 0x5e6d62 */ if (fZ) goto L_005e6d62;
L_005e6bf1:; BB(0x005e6bf1);
    /* 005e6bf1: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 005e6bf5: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
L_005e6bf9:; BB(0x005e6bf9);
    /* 005e6bf9: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005e6bfd: movzx esi, word ptr [eax + ebx*4 + 0x8d4] */ r_esi = (u32)R16((u32)(r_eax+r_ebx*4+0x8d4u));
    /* 005e6c05: movsx edx, word ptr [eax + ebx*4 + 0x8d6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*4+0x8d6u));
    /* 005e6c0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c0e: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 005e6c11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c12: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5e6c17u); f_007b9df0();
    /* 005e6c17: mov esi, eax */ r_esi = r_eax;
    /* 005e6c19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6c1c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c1e: je 0x5e6d3e */ if (fZ) goto L_005e6d3e;
L_005e6c24:; BB(0x005e6c24);
    /* 005e6c24: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 005e6c28: movsx edx, word ptr [edx + edi*2 + 0x8d6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_edi*2+0x8d6u));
    /* 005e6c30: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e6c36: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005e6c39: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c3b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c3d: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 005e6c45: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c47: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c49: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c4b: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 005e6c51: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 005e6c55: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c57: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c59: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6c5f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 005e6c63: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e6c68u); f_006a2e8c();
    /* 005e6c68: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 005e6c6c: mov word ptr [esp + 0x36], si */ W16((u32)(r_esp+0x36u), (u16)r_esi);
    /* 005e6c71: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005e6c74: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005e6c78: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005e6c7e: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 005e6c82: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 005e6c87: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 005e6c8d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005e6c91: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005e6c95: movzx edi, word ptr [eax + edi*2 + 0x8d6] */ r_edi = (u32)R16((u32)(r_eax+r_edi*2+0x8d6u));
    /* 005e6c9d: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005e6ca3: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6ca8: mov word ptr [esp + 0x38], di */ W16((u32)(r_esp+0x38u), (u16)r_edi);
    /* 005e6cad: je 0x5e6cc4 */ if (fZ) goto L_005e6cc4;
L_005e6caf:; BB(0x005e6caf);
    /* 005e6caf: fld dword ptr [0x9cb9d8] */ FPUSH(R_F32((u32)(0x9cb9d8u)));
    /* 005e6cb5: fld dword ptr [esp + 0x88] */ FPUSH(R_F32((u32)(r_esp+0x88u)));
    /* 005e6cbc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e6cbe: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 005e6cc2: jmp 0x5e6cdf */ goto L_005e6cdf;
L_005e6cc4:; BB(0x005e6cc4);
    /* 005e6cc4: fld dword ptr [esp + 0x88] */ FPUSH(R_F32((u32)(r_esp+0x88u)));
    /* 005e6ccb: movzx eax, word ptr [edx + 0x8a4] */ r_eax = (u32)R16((u32)(r_edx+0x8a4u));
    /* 005e6cd2: fld dword ptr [eax*4 + 0x9cb9d0] */ FPUSH(R_F32((u32)(r_eax*4+0x9cb9d0u)));
    /* 005e6cd9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e6cdb: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_005e6cdf:; BB(0x005e6cdf);
    /* 005e6cdf: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005e6ce3: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 005e6ce7: lea esi, [eax + edx + 0x1c] */ r_esi = (u32)(r_eax+r_edx+0x1cu);
    /* 005e6ceb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cec: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 005e6cf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cf1: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e6cf6u); f_00836208();
    /* 005e6cf6: fld dword ptr [ebp + 0x208] */ FPUSH(R_F32((u32)(r_ebp+0x208u)));
    /* 005e6cfc: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005e6cfe: mov esi, dword ptr [ebp + 0xf8] */ r_esi = R32((u32)(r_ebp+0xf8u));
    /* 005e6d04: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 005e6d08: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 005e6d0d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e6d12: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005e6d16: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 005e6d1a: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e6d1e: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005e6d22: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 005e6d26: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e6d29: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005e6d2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d30: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e6d36: call 0x5c71f8 */ r_esp -= 4; W32(r_esp, 0x5e6d3bu); f_005c71f8();
    /* 005e6d3b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e6d3e:; BB(0x005e6d3e);
    /* 005e6d3e: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005e6d42: mov eax, dword ptr [eax + 0x8d0] */ r_eax = R32((u32)(r_eax+0x8d0u));
    /* 005e6d48: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e6d4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6d4d: jl 0x5e6d54 */ if ((fS!=fO)) goto L_005e6d54;
L_005e6d4f:; BB(0x005e6d4f);
    /* 005e6d4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6d52: jle 0x5e6d56 */ if ((fZ||fS!=fO)) goto L_005e6d56;
L_005e6d54:; BB(0x005e6d54);
    /* 005e6d54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e6d56:; BB(0x005e6d56);
    /* 005e6d56: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6d58: jne 0x5e6bf9 */ if (!fZ) goto L_005e6bf9;
L_005e6d5e:; BB(0x005e6d5e);
    /* 005e6d5e: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
L_005e6d62:; BB(0x005e6d62);
    /* 005e6d62: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e6d64: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e6d69u); f_005e9058();
L_005e6d69:; BB(0x005e6d69);
    /* 005e6d69: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 005e6d6d: fdiv dword ptr [ebp + 0x208] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x208u));
    /* 005e6d73: mov esi, dword ptr [ebp + 0x238] */ r_esi = R32((u32)(r_ebp+0x238u));
    /* 005e6d79: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 005e6d7d: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 005e6d82: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e6d87: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005e6d8b: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005e6d8f: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e6d93: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 005e6d97: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 005e6d9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e6d9d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6d9f: jge 0x5e6da3 */ if ((fS==fO)) goto L_005e6da3;
L_005e6da1:; BB(0x005e6da1);
    /* 005e6da1: mov ebx, eax */ r_ebx = r_eax;
L_005e6da3:; BB(0x005e6da3);
    /* 005e6da3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6da5: je 0x5e6dd4 */ if (fZ) goto L_005e6dd4;
L_005e6da7:; BB(0x005e6da7);
    /* 005e6da7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e6da9: call 0x5c5160 */ r_esp -= 4; W32(r_esp, 0x5e6daeu); f_005c5160();
    /* 005e6dae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6db1: jne 0x5e6dd4 */ if (!fZ) goto L_005e6dd4;
L_005e6db3:; BB(0x005e6db3);
    /* 005e6db3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e6db6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005e6dba: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e6dbe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e6dc2: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 005e6dc6: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 005e6dca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e6dce: call dword ptr [ebp + 0x238] */ { u32 t = R32((u32)(r_ebp+0x238u)); r_esp -= 4; W32(r_esp, 0x5e6dd4u); call_ind(t); }
L_005e6dd4:; BB(0x005e6dd4);
    /* 005e6dd4: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e6dd7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e6dd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6dd9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e6dda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e6ddb: ret 0xc */ FN_RET(0x005e6a88); r_esp += 16; return;
L_005e6dde:; BB(0x005e6dde);
    /* 005e6dde: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e6de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6de3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6de4: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e6de9u); f_00836208();
    /* 005e6de9: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 005e6ded: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6df0: jmp 0x5e6bc0 */ goto L_005e6bc0;
}

void f_005e6df8(void) /* sub_5E6DF8 */
{
    FN_ENTER(0x005e6df8);
    /* 005e6df8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6df9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dfa: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6e00: mov edi, ecx */ r_edi = r_ecx;
    /* 005e6e02: mov ecx, edi */ r_ecx = r_edi;
    /* 005e6e04: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e6e09u); f_005e908c();
    /* 005e6e09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6e0b: je 0x5e6f10 */ if (fZ) goto L_005e6f10;
L_005e6e11:; BB(0x005e6e11);
    /* 005e6e11: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e6e17: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6e1d: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e6e22u); f_006a2e8c();
    /* 005e6e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e24: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5e6e29u); f_005e4ba8();
    /* 005e6e29: mov ebp, eax */ r_ebp = r_eax;
    /* 005e6e2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6e2e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005e6e31: call 0x5c5ae4 */ r_esp -= 4; W32(r_esp, 0x5e6e36u); f_005c5ae4();
    /* 005e6e36: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005e6e39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e3a: mov ecx, edi */ r_ecx = r_edi;
    /* 005e6e3c: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5e6e41u); f_005e8f04();
    /* 005e6e41: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 005e6e48: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005e6e4a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005e6e4d: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 005e6e54: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005e6e57: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005e6e5b: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 005e6e62: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005e6e65: mov ecx, edi */ r_ecx = r_edi;
    /* 005e6e67: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005e6e6b: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005e6e71: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005e6e74: mov edx, dword ptr [esp + 0xa0] */ r_edx = R32((u32)(r_esp+0xa0u));
    /* 005e6e7b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6e7d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005e6e7f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005e6e83: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 005e6e86: mov eax, dword ptr [edi + 0x208] */ r_eax = R32((u32)(r_edi+0x208u));
    /* 005e6e8c: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 005e6e90: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005e6e94: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 005e6e9b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005e6e9f: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005e6ea2: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005e6ea6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e6ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6eaa: call dword ptr [edx + 0xe8] */ { u32 t = R32((u32)(r_edx+0xe8u)); r_esp -= 4; W32(r_esp, 0x5e6eb0u); call_ind(t); }
    /* 005e6eb0: mov ecx, edi */ r_ecx = r_edi;
    /* 005e6eb2: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e6eb7u); f_005e8fa4();
    /* 005e6eb7: mov eax, dword ptr [esp + 0x98] */ r_eax = R32((u32)(r_esp+0x98u));
    /* 005e6ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ebf: mov ecx, edi */ r_ecx = r_edi;
    /* 005e6ec1: call 0x5e9010 */ r_esp -= 4; W32(r_esp, 0x5e6ec6u); f_005e9010();
    /* 005e6ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6ec8: je 0x5e6f39 */ if (fZ) goto L_005e6f39;
L_005e6eca:; BB(0x005e6eca);
    /* 005e6eca: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 005e6ecd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e6ed0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e6ed3: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005e6ed6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005e6eda: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6edd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e6ee1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005e6ee5: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e6eea: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_005e6eee:; BB(0x005e6eee);
    /* 005e6eee: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005e6ef2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6ef5: je 0x5e6f1b */ if (fZ) goto L_005e6f1b;
L_005e6ef7:; BB(0x005e6ef7);
    /* 005e6ef7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e6efa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6efb: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e6f01: call 0x5c60f0 */ r_esp -= 4; W32(r_esp, 0x5e6f06u); f_005c60f0();
    /* 005e6f06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6f09: mov ecx, edi */ r_ecx = r_edi;
    /* 005e6f0b: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e6f10u); f_005e9058();
L_005e6f10:; BB(0x005e6f10);
    /* 005e6f10: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e6f16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6f17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e6f18: ret 0xc */ FN_RET(0x005e6df8); r_esp += 16; return;
L_005e6f1b:; BB(0x005e6f1b);
    /* 005e6f1b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005e6f1d: mov ecx, edi */ r_ecx = r_edi;
    /* 005e6f1f: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e6f25u); call_ind(t); }
    /* 005e6f25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6f27: jne 0x5e6ef7 */ if (!fZ) goto L_005e6ef7;
L_005e6f29:; BB(0x005e6f29);
    /* 005e6f29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005e6f2d: fmul dword ptr [0x92d644] */ ST(0) = ST(0) * R_F32((u32)(0x92d644u));
    /* 005e6f33: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005e6f37: jmp 0x5e6ef7 */ goto L_005e6ef7;
L_005e6f39:; BB(0x005e6f39);
    /* 005e6f39: mov ebp, dword ptr [edi + 0xf8] */ r_ebp = R32((u32)(r_edi+0xf8u));
    /* 005e6f3f: mov eax, ebp */ r_eax = r_ebp;
    /* 005e6f41: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e6f46: je 0x5e6eee */ if (fZ) goto L_005e6eee;
L_005e6f48:; BB(0x005e6f48);
    /* 005e6f48: mov eax, dword ptr [ebp + 0x8d0] */ r_eax = R32((u32)(r_ebp+0x8d0u));
    /* 005e6f4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6f50: jl 0x5e6eee */ if ((fS!=fO)) goto L_005e6eee;
L_005e6f52:; BB(0x005e6f52);
    /* 005e6f52: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6f55: jg 0x5e6eee */ if ((!fZ&&fS==fO)) goto L_005e6eee;
L_005e6f57:; BB(0x005e6f57);
    /* 005e6f57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e6f59: jle 0x5e6eee */ if ((fZ||fS!=fO)) goto L_005e6eee;
L_005e6f5b:; BB(0x005e6f5b);
    /* 005e6f5b: mov eax, ebp */ r_eax = r_ebp;
    /* 005e6f5d: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e6f62: je 0x5e6eee */ if (fZ) goto L_005e6eee;
L_005e6f64:; BB(0x005e6f64);
    /* 005e6f64: movzx eax, word ptr [ebp + 0x8d4] */ r_eax = (u32)R16((u32)(r_ebp+0x8d4u));
    /* 005e6f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f6c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5e6f71u); f_007b4d18();
    /* 005e6f71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e6f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6f74: je 0x5e6eee */ if (fZ) goto L_005e6eee;
L_005e6f7a:; BB(0x005e6f7a);
    /* 005e6f7a: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005e6f80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6f82: je 0x5e6eee */ if (fZ) goto L_005e6eee;
L_005e6f88:; BB(0x005e6f88);
    /* 005e6f88: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 005e6f8f: movsx ebp, word ptr [ebp + 0x8d6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x8d6u));
    /* 005e6f96: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 005e6f9a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6f9c: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6f9e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6fa0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6fa2: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6fa4: mov ebp, dword ptr [edx + eax*4 + 0x1c] */ r_ebp = R32((u32)(r_edx+r_eax*4+0x1cu));
    /* 005e6fa8: mov dword ptr [esp + 0x80], ebp */ W32((u32)(r_esp+0x80u), r_ebp);
    /* 005e6faf: mov ebp, dword ptr [edx + eax*4 + 0x20] */ r_ebp = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 005e6fb3: mov eax, dword ptr [edx + eax*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x24u));
    /* 005e6fb7: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 005e6fbe: mov dword ptr [esp + 0x84], ebp */ W32((u32)(r_esp+0x84u), r_ebp);
    /* 005e6fc5: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 005e6fcc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5e6fd1u); f_0082f9c4();
    /* 005e6fd1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005e6fd6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e6fdbu); f_0082d990();
    /* 005e6fdb: mov edx, dword ptr [esp + 0xa0] */ r_edx = R32((u32)(r_esp+0xa0u));
    /* 005e6fe2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6fe4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5e6fe9u); f_0082d8bc();
    /* 005e6fe9: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 005e6ff0: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 005e6ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ff6: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e6ffbu); f_00835c3c();
    /* 005e6ffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6ffe: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005e7002: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e7005: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 005e7009: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e700eu); f_0082da80();
    /* 005e700e: jmp 0x5e6eee */ goto L_005e6eee;
}

