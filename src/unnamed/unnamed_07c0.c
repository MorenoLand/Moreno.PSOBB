#include "protos.h"

void f_007c0044(void) /* sub_7C0044 */
{
    FN_ENTER(0x007c0044);
    /* 007c0044: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c0047: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c004c: call 0x78f4b4 */ r_esp -= 4; W32(r_esp, 0x7c0051u); f_0078f4b4();
    /* 007c0051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0053: je 0x7c00a9 */ if (fZ) goto L_007c00a9;
L_007c0055:; BB(0x007c0055);
    /* 007c0055: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c005a: call 0x78f3b8 */ r_esp -= 4; W32(r_esp, 0x7c005fu); f_0078f3b8();
    /* 007c005f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 007c0062: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c0064: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0066: jle 0x7c00a3 */ if ((fZ||fS!=fO)) goto L_007c00a3;
L_007c0068:; BB(0x007c0068);
    /* 007c0068: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007c006c: mov ebx, eax */ r_ebx = r_eax;
    /* 007c006e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007c0072: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007c0075: mov esi, edx */ r_esi = r_edx;
    /* 007c0077: movzx edi, byte ptr [esp + 0x10] */ r_edi = (u32)R8((u32)(r_esp+0x10u));
L_007c007c:; BB(0x007c007c);
    /* 007c007c: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 007c007f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c0080: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c0085: call 0x78f3c0 */ r_esp -= 4; W32(r_esp, 0x7c008au); f_0078f3c0();
    /* 007c008a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007c008d: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c008f: je 0x7c00af */ if (fZ) goto L_007c00af;
L_007c0091:; BB(0x007c0091);
    /* 007c0091: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c0094: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c0096: jl 0x7c007c */ if ((fS!=fO)) goto L_007c007c;
L_007c0098:; BB(0x007c0098);
    /* 007c0098: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007c009c: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007c00a0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_007c00a3:; BB(0x007c00a3);
    /* 007c00a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007c00a5:; BB(0x007c00a5);
    /* 007c00a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c00a8: ret  */ FN_RET(0x007c0044); r_esp += 4; return;
L_007c00a9:; BB(0x007c00a9);
    /* 007c00a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c00ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c00ae: ret  */ FN_RET(0x007c0044); r_esp += 4; return;
L_007c00af:; BB(0x007c00af);
    /* 007c00af: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007c00b3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007c00b7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007c00ba: mov eax, 1 */ r_eax = 0x1u;
    /* 007c00bf: jmp 0x7c00a5 */ goto L_007c00a5;
}

void f_007c0097(void)
{
    FN_ENTER(0x007c0097);
    /* 007c0097: in al, 0x8b */ UNSUP(0x007c0097, "in al, 0x8b");
    /* 007c0099: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 007c009a: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007c009c: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007c00a0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007c00a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c00a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c00a8: ret  */ FN_RET(0x007c0097); r_esp += 4; return;
}

void f_007c00c4(void) /* sub_7C00C4 */
{
    FN_ENTER(0x007c00c4);
    /* 007c00c4: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c00c9: call 0x78f44c */ r_esp -= 4; W32(r_esp, 0x7c00ceu); f_0078f44c();
    /* 007c00ce: ret  */ FN_RET(0x007c00c4); r_esp += 4; return;
}

void f_007c00d0(void) /* sub_7C00D0 */
{
    FN_ENTER(0x007c00d0);
    /* 007c00d0: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c00d5: call 0x78f46c */ r_esp -= 4; W32(r_esp, 0x7c00dau); f_0078f46c();
    /* 007c00da: ret  */ FN_RET(0x007c00d0); r_esp += 4; return;
}

void f_007c00dc(void) /* sub_7C00DC */
{
    FN_ENTER(0x007c00dc);
    /* 007c00dc: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c00e1: call 0x78f484 */ r_esp -= 4; W32(r_esp, 0x7c00e6u); f_0078f484();
    /* 007c00e6: ret  */ FN_RET(0x007c00dc); r_esp += 4; return;
}

void f_007c00e8(void) /* sub_7C00E8 */
{
    FN_ENTER(0x007c00e8);
    /* 007c00e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c00e9: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007c00ed: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c00ef: jne 0x7c00f5 */ if (!fZ) goto L_007c00f5;
L_007c00f1:; BB(0x007c00f1);
    /* 007c00f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c00f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c00f4: ret  */ FN_RET(0x007c00e8); r_esp += 4; return;
L_007c00f5:; BB(0x007c00f5);
    /* 007c00f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c00f7: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x7c00fcu); f_0083fde4();
    /* 007c00fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c00fd: test dword ptr [eax], ebp */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c00ff: je 0x7c00f1 */ if (fZ) goto L_007c00f1;
L_007c0101:; BB(0x007c0101);
    /* 007c0101: mov eax, 1 */ r_eax = 0x1u;
    /* 007c0106: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0107: ret  */ FN_RET(0x007c00e8); r_esp += 4; return;
}

void f_007c00ea(void)
{
    FN_ENTER(0x007c00ea);
    /* 007c00ea: insb byte ptr es:[edi], dx */ UNSUP(0x007c00ea, "insb byte ptr es:[edi], dx");
    /* 007c00eb: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007c00ed: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c00ef: jne 0x7c00f5 */ if (!fZ) goto L_007c00f5;
L_007c00f1:; BB(0x007c00f1);
    /* 007c00f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c00f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c00f4: ret  */ FN_RET(0x007c00ea); r_esp += 4; return;
L_007c00f5:; BB(0x007c00f5);
    /* 007c00f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c00f7: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x7c00fcu); f_0083fde4();
    /* 007c00fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c00fd: test dword ptr [eax], ebp */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c00ff: je 0x7c00f1 */ if (fZ) goto L_007c00f1;
L_007c0101:; BB(0x007c0101);
    /* 007c0101: mov eax, 1 */ r_eax = 0x1u;
    /* 007c0106: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0107: ret  */ FN_RET(0x007c00ea); r_esp += 4; return;
}

void f_007c0108(void) /* sub_7C0108 */
{
    FN_ENTER(0x007c0108);
    /* 007c0108: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c0109: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007c010d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c010f: jne 0x7c0115 */ if (!fZ) goto L_007c0115;
L_007c0111:; BB(0x007c0111);
    /* 007c0111: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0114: ret  */ FN_RET(0x007c0108); r_esp += 4; return;
L_007c0115:; BB(0x007c0115);
    /* 007c0115: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c0117: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x7c011cu); f_0083fde4();
    /* 007c011c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c011d: test dword ptr [eax + 8], ebp */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0120: je 0x7c0111 */ if (fZ) goto L_007c0111;
L_007c0122:; BB(0x007c0122);
    /* 007c0122: mov eax, 1 */ r_eax = 0x1u;
    /* 007c0127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0128: ret  */ FN_RET(0x007c0108); r_esp += 4; return;
}

void f_007c012c(void) /* sub_7C012C */
{
    FN_ENTER(0x007c012c);
    /* 007c012c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c012d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c012f: call 0x83fdfc */ r_esp -= 4; W32(r_esp, 0x7c0134u); f_0083fdfc();
    /* 007c0134: mov ebx, eax */ r_ebx = r_eax;
    /* 007c0136: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c0138: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x7c013du); f_0083fde4();
    /* 007c013d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c0140: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 007c0144: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0146: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c014c:; BB(0x007c014c);
    /* 007c014c: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 007c0150: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0152: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c0158:; BB(0x007c0158);
    /* 007c0158: movsx edx, word ptr [ebx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 007c015c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c015e: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c0164:; BB(0x007c0164);
    /* 007c0164: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007c0167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0169: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c016f:; BB(0x007c016f);
    /* 007c016f: mov eax, dword ptr [0xaae96c] */ r_eax = R32((u32)(0xaae96cu));
    /* 007c0174: mov eax, dword ptr [eax*4 + 0xaae720] */ r_eax = R32((u32)(r_eax*4+0xaae720u));
    /* 007c017b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c017e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0180: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c0186:; BB(0x007c0186);
    /* 007c0186: movzx edx, word ptr [eax + 0x18] */ r_edx = (u32)R16((u32)(r_eax+0x18u));
    /* 007c018a: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c018d: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0193:; BB(0x007c0193);
    /* 007c0193: movzx edx, word ptr [eax + 0x1a] */ r_edx = (u32)R16((u32)(r_eax+0x1au));
    /* 007c0197: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c019a: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c01a0:; BB(0x007c01a0);
    /* 007c01a0: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 007c01a4: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01a7: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c01ad:; BB(0x007c01ad);
    /* 007c01ad: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01b0: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c01b6:; BB(0x007c01b6);
    /* 007c01b6: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007c01ba: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01bd: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c01c3:; BB(0x007c01c3);
    /* 007c01c3: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01c6: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c01cc:; BB(0x007c01cc);
    /* 007c01cc: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007c01d0: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01d3: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c01d9:; BB(0x007c01d9);
    /* 007c01d9: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01dc: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c01e2:; BB(0x007c01e2);
    /* 007c01e2: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 007c01e6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01e9: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c01ef:; BB(0x007c01ef);
    /* 007c01ef: cmp eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c01f2: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c01f8:; BB(0x007c01f8);
    /* 007c01f8: mov eax, dword ptr [0xaae970] */ r_eax = R32((u32)(0xaae970u));
    /* 007c01fd: mov eax, dword ptr [eax*4 + 0xaae720] */ r_eax = R32((u32)(r_eax*4+0xaae720u));
    /* 007c0204: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c0207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0209: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c020f:; BB(0x007c020f);
    /* 007c020f: movzx edx, word ptr [eax + 0x18] */ r_edx = (u32)R16((u32)(r_eax+0x18u));
    /* 007c0213: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0216: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c021c:; BB(0x007c021c);
    /* 007c021c: movzx edx, word ptr [eax + 0x1a] */ r_edx = (u32)R16((u32)(r_eax+0x1au));
    /* 007c0220: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0223: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0229:; BB(0x007c0229);
    /* 007c0229: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 007c022d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0230: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0236:; BB(0x007c0236);
    /* 007c0236: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0239: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c023f:; BB(0x007c023f);
    /* 007c023f: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007c0243: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0246: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c024c:; BB(0x007c024c);
    /* 007c024c: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c024f: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c0255:; BB(0x007c0255);
    /* 007c0255: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007c0259: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c025c: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0262:; BB(0x007c0262);
    /* 007c0262: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0265: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c026b:; BB(0x007c026b);
    /* 007c026b: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 007c026f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0272: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0278:; BB(0x007c0278);
    /* 007c0278: cmp eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c027b: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c0281:; BB(0x007c0281);
    /* 007c0281: mov eax, dword ptr [0xaae974] */ r_eax = R32((u32)(0xaae974u));
    /* 007c0286: mov eax, dword ptr [eax*4 + 0xaae720] */ r_eax = R32((u32)(r_eax*4+0xaae720u));
    /* 007c028d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c0290: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0292: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c0298:; BB(0x007c0298);
    /* 007c0298: movzx edx, word ptr [eax + 0x18] */ r_edx = (u32)R16((u32)(r_eax+0x18u));
    /* 007c029c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c029f: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02a5:; BB(0x007c02a5);
    /* 007c02a5: movzx edx, word ptr [eax + 0x1a] */ r_edx = (u32)R16((u32)(r_eax+0x1au));
    /* 007c02a9: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02ac: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02b2:; BB(0x007c02b2);
    /* 007c02b2: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 007c02b6: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02b9: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02bf:; BB(0x007c02bf);
    /* 007c02bf: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02c2: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02c8:; BB(0x007c02c8);
    /* 007c02c8: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007c02cc: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02cf: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02d5:; BB(0x007c02d5);
    /* 007c02d5: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02d8: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02de:; BB(0x007c02de);
    /* 007c02de: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007c02e2: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02e5: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02eb:; BB(0x007c02eb);
    /* 007c02eb: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02ee: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02f0:; BB(0x007c02f0);
    /* 007c02f0: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 007c02f4: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02f7: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02f9:; BB(0x007c02f9);
    /* 007c02f9: cmp eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02fc: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02fe:; BB(0x007c02fe);
    /* 007c02fe: mov eax, dword ptr [0xaae978] */ r_eax = R32((u32)(0xaae978u));
    /* 007c0303: mov eax, dword ptr [eax*4 + 0xaae720] */ r_eax = R32((u32)(r_eax*4+0xaae720u));
    /* 007c030a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c030d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c030f: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c0311:; BB(0x007c0311);
    /* 007c0311: movzx edx, word ptr [eax + 0x18] */ r_edx = (u32)R16((u32)(r_eax+0x18u));
    /* 007c0315: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0318: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c031a:; BB(0x007c031a);
    /* 007c031a: movzx edx, word ptr [eax + 0x1a] */ r_edx = (u32)R16((u32)(r_eax+0x1au));
    /* 007c031e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0321: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0323:; BB(0x007c0323);
    /* 007c0323: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 007c0327: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c032a: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c032c:; BB(0x007c032c);
    /* 007c032c: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c032f: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c0331:; BB(0x007c0331);
    /* 007c0331: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007c0335: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0338: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c033a:; BB(0x007c033a);
    /* 007c033a: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c033d: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c033f:; BB(0x007c033f);
    /* 007c033f: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007c0343: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0346: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0348:; BB(0x007c0348);
    /* 007c0348: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c034b: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c034d:; BB(0x007c034d);
    /* 007c034d: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 007c0351: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0354: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0356:; BB(0x007c0356);
    /* 007c0356: cmp eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0359: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c035b:; BB(0x007c035b);
    /* 007c035b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c035d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c035e: ret  */ FN_RET(0x007c012c); r_esp += 4; return;
L_007c035f:; BB(0x007c035f);
    /* 007c035f: mov eax, 1 */ r_eax = 0x1u;
    /* 007c0364: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0365: ret  */ FN_RET(0x007c012c); r_esp += 4; return;
}

void f_007c0222(void)
{
    FN_ENTER(0x007c0222);
    /* 007c0222: or cl, byte ptr [edi] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_edi)); u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007c0224: lea esi, [esi] */ r_esi = (u32)(r_esi);
    /* 007c0226: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007c0228: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007c022a: mov edi, 0xfa831c50 */ r_edi = 0xfa831c50u;
    /* 007c022f: or cl, byte ptr [edi] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_edi)); u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007c0231: lea ebp, [ecx] */ r_ebp = (u32)(r_ecx);
    /* 007c0233: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007c0235: add byte ptr [ebx - 0x71f00906], al */ { u32 ad = (u32)(r_ebx+0x8e0ff6fau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007c023b: and byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 007c023d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007c023f: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007c0243: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0246: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c024c:; BB(0x007c024c);
    /* 007c024c: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c024f: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c0255:; BB(0x007c0255);
    /* 007c0255: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007c0259: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c025c: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0262:; BB(0x007c0262);
    /* 007c0262: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0265: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c026b:; BB(0x007c026b);
    /* 007c026b: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 007c026f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0272: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0278:; BB(0x007c0278);
    /* 007c0278: cmp eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c027b: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c0281:; BB(0x007c0281);
    /* 007c0281: mov eax, dword ptr [0xaae974] */ r_eax = R32((u32)(0xaae974u));
    /* 007c0286: mov eax, dword ptr [eax*4 + 0xaae720] */ r_eax = R32((u32)(r_eax*4+0xaae720u));
    /* 007c028d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c0290: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0292: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c0298:; BB(0x007c0298);
    /* 007c0298: movzx edx, word ptr [eax + 0x18] */ r_edx = (u32)R16((u32)(r_eax+0x18u));
    /* 007c029c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c029f: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02a5:; BB(0x007c02a5);
    /* 007c02a5: movzx edx, word ptr [eax + 0x1a] */ r_edx = (u32)R16((u32)(r_eax+0x1au));
    /* 007c02a9: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02ac: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02b2:; BB(0x007c02b2);
    /* 007c02b2: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 007c02b6: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02b9: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02bf:; BB(0x007c02bf);
    /* 007c02bf: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02c2: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02c8:; BB(0x007c02c8);
    /* 007c02c8: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007c02cc: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02cf: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02d5:; BB(0x007c02d5);
    /* 007c02d5: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02d8: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02de:; BB(0x007c02de);
    /* 007c02de: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007c02e2: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02e5: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02eb:; BB(0x007c02eb);
    /* 007c02eb: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02ee: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02f0:; BB(0x007c02f0);
    /* 007c02f0: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 007c02f4: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02f7: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c02f9:; BB(0x007c02f9);
    /* 007c02f9: cmp eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c02fc: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c02fe:; BB(0x007c02fe);
    /* 007c02fe: mov eax, dword ptr [0xaae978] */ r_eax = R32((u32)(0xaae978u));
    /* 007c0303: mov eax, dword ptr [eax*4 + 0xaae720] */ r_eax = R32((u32)(r_eax*4+0xaae720u));
    /* 007c030a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c030d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c030f: jne 0x7c035f */ if (!fZ) goto L_007c035f;
L_007c0311:; BB(0x007c0311);
    /* 007c0311: movzx edx, word ptr [eax + 0x18] */ r_edx = (u32)R16((u32)(r_eax+0x18u));
    /* 007c0315: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0318: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c031a:; BB(0x007c031a);
    /* 007c031a: movzx edx, word ptr [eax + 0x1a] */ r_edx = (u32)R16((u32)(r_eax+0x1au));
    /* 007c031e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0321: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0323:; BB(0x007c0323);
    /* 007c0323: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 007c0327: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c032a: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c032c:; BB(0x007c032c);
    /* 007c032c: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c032f: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c0331:; BB(0x007c0331);
    /* 007c0331: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007c0335: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0338: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c033a:; BB(0x007c033a);
    /* 007c033a: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c033d: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c033f:; BB(0x007c033f);
    /* 007c033f: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007c0343: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0346: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0348:; BB(0x007c0348);
    /* 007c0348: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c034b: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c034d:; BB(0x007c034d);
    /* 007c034d: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 007c0351: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0354: jge 0x7c035f */ if ((fS==fO)) goto L_007c035f;
L_007c0356:; BB(0x007c0356);
    /* 007c0356: cmp eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c0359: jle 0x7c035f */ if ((fZ||fS!=fO)) goto L_007c035f;
L_007c035b:; BB(0x007c035b);
    /* 007c035b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c035d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c035e: ret  */ FN_RET(0x007c0222); r_esp += 4; return;
L_007c035f:; BB(0x007c035f);
    /* 007c035f: mov eax, 1 */ r_eax = 0x1u;
    /* 007c0364: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0365: ret  */ FN_RET(0x007c0222); r_esp += 4; return;
}

void f_007c0368(void) /* sub_7C0368 */
{
    FN_ENTER(0x007c0368);
    /* 007c0368: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c0369: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c036b: mov ebx, eax */ r_ebx = r_eax;
L_007c036d:; BB(0x007c036d);
    /* 007c036d: lea ecx, [ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+0xaae75cu);
    /* 007c0373: call 0x7c12f8 */ r_esp -= 4; W32(r_esp, 0x7c0378u); f_007c12f8();
    /* 007c0378: add ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c037b: cmp ebx, 0x190 */ {  u32 a = r_ebx; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c0381: jl 0x7c036d */ if ((fS!=fO)) goto L_007c036d;
L_007c0383:; BB(0x007c0383);
    /* 007c0383: mov ecx, dword ptr [0xaae96c] */ r_ecx = R32((u32)(0xaae96cu));
    /* 007c0389: mov edx, 0xaae8ec */ r_edx = 0xaae8ecu;
    /* 007c038e: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 007c0391: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0393: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0395: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0397: lea eax, [eax + eax + 0xaae75c] */ r_eax = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007c039e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007c03a0: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007c03a2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007c03a5: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007c03a8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007c03ab: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007c03ae: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007c03b1: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007c03b4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007c03b7: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007c03ba: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007c03bd: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007c03c0: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007c03c3: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007c03c6: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007c03c9: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007c03cc: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007c03cf: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007c03d2: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007c03d5: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007c03d8: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007c03db: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007c03de: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007c03e1: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007c03e4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007c03e7: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007c03ea: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007c03ed: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007c03f0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007c03f3: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007c03f6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007c03f9: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007c03fc: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007c03ff: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007c0402: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007c0405: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007c0408: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007c040b: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 007c040e: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007c0411: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 007c0414: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0416: mov byte ptr [0xaae93c], al */ W8((u32)(0xaae93cu), (u8)r_eax);
    /* 007c041b: mov dword ptr [0xa0f6f0], eax */ W32((u32)(0xa0f6f0u), r_eax);
    /* 007c0420: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0421: ret  */ FN_RET(0x007c0368); r_esp += 4; return;
}

void f_007c0424(void) /* sub_7C0424 */
{
    FN_ENTER(0x007c0424);
    /* 007c0424: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c0425: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c0427: mov ebx, eax */ r_ebx = r_eax;
L_007c0429:; BB(0x007c0429);
    /* 007c0429: lea ecx, [ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+0xaae75cu);
    /* 007c042f: call 0x7c12f8 */ r_esp -= 4; W32(r_esp, 0x7c0434u); f_007c12f8();
    /* 007c0434: add ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c0437: cmp ebx, 0x190 */ {  u32 a = r_ebx; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c043d: jl 0x7c0429 */ if ((fS!=fO)) goto L_007c0429;
L_007c043f:; BB(0x007c043f);
    /* 007c043f: mov ecx, dword ptr [0xaae96c] */ r_ecx = R32((u32)(0xaae96cu));
    /* 007c0445: mov edx, 0xaae8ec */ r_edx = 0xaae8ecu;
    /* 007c044a: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 007c044d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c044f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0451: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c0453: lea eax, [eax + eax + 0xaae75c] */ r_eax = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007c045a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007c045c: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007c045e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007c0461: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007c0464: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007c0467: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007c046a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007c046d: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007c0470: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007c0473: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007c0476: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007c0479: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007c047c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007c047f: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007c0482: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007c0485: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007c0488: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007c048b: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007c048e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007c0491: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007c0494: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007c0497: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007c049a: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007c049d: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007c04a0: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007c04a3: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007c04a6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007c04a9: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007c04ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007c04af: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007c04b2: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007c04b5: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007c04b8: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007c04bb: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007c04be: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007c04c1: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007c04c4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007c04c7: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 007c04ca: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007c04cd: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 007c04d0: mov byte ptr [0xaae93c], 0 */ W8((u32)(0xaae93cu), 0x0u);
    /* 007c04d7: mov dword ptr [0xa0f6f0], 1 */ W32((u32)(0xa0f6f0u), 0x1u);
    /* 007c04e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c04e2: ret  */ FN_RET(0x007c0424); r_esp += 4; return;
}

void f_007c04e4(void) /* sub_7C04E4 */
{
    FN_ENTER(0x007c04e4);
    /* 007c04e4: mov eax, dword ptr [0xa0f6f0] */ r_eax = R32((u32)(0xa0f6f0u));
    /* 007c04e9: ret  */ FN_RET(0x007c04e4); r_esp += 4; return;
}

void f_007c04ec(void) /* sub_7C04EC */
{
    FN_ENTER(0x007c04ec);
    /* 007c04ec: mov byte ptr [0xaae93c], 0 */ W8((u32)(0xaae93cu), 0x0u);
    /* 007c04f3: ret  */ FN_RET(0x007c04ec); r_esp += 4; return;
}

void f_007c04f4(void) /* sub_7C04F4 */
{
    FN_ENTER(0x007c04f4);
    /* 007c04f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c04f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c04f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c04f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c04f8: mov esi, ecx */ r_esi = r_ecx;
    /* 007c04fa: mov ecx, esi */ r_ecx = r_esi;
    /* 007c04fc: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007c0500: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007c0504: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c0508: call 0x7c070c */ r_esp -= 4; W32(r_esp, 0x7c050du); f_007c070c();
    /* 007c050d: mov edi, eax */ r_edi = r_eax;
    /* 007c050f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0511: je 0x7c06fe */ if (fZ) goto L_007c06fe;
L_007c0517:; BB(0x007c0517);
    /* 007c0517: test dword ptr [esi + 0x4c], edi */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c051a: jne 0x7c06f7 */ if (!fZ) goto L_007c06f7;
L_007c0520:; BB(0x007c0520);
    /* 007c0520: mov edx, dword ptr [0xa0f69c] */ r_edx = R32((u32)(0xa0f69cu));
    /* 007c0526: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0528: mov ecx, 0 */ r_ecx = 0x0u;
    /* 007c052d: je 0x7c0548 */ if (fZ) goto L_007c0548;
L_007c052f:; BB(0x007c052f);
    /* 007c052f: movsx eax, word ptr [esi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 007c0533: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0535: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c053a: jl 0x7c0548 */ if ((fS!=fO)) goto L_007c0548;
L_007c053c:; BB(0x007c053c);
    /* 007c053c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c053d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c053d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c053d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c053f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0541: jne 0x7c0548 */ if (!fZ) goto L_007c0548;
L_007c0543:; BB(0x007c0543);
    /* 007c0543: mov ecx, 1 */ r_ecx = 0x1u;
L_007c0548:; BB(0x007c0548);
    /* 007c0548: mov edx, dword ptr [0xa0f6a0] */ r_edx = R32((u32)(0xa0f6a0u));
    /* 007c054e: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0550: je 0x7c0569 */ if (fZ) goto L_007c0569;
L_007c0552:; BB(0x007c0552);
    /* 007c0552: movsx eax, word ptr [esi + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2eu));
    /* 007c0556: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0558: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c055b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c055d: jl 0x7c0569 */ if ((fS!=fO)) goto L_007c0569;
L_007c055f:; BB(0x007c055f);
    /* 007c055f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0560: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0560, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0560, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0562: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0564: jne 0x7c0569 */ if (!fZ) goto L_007c0569;
L_007c0566:; BB(0x007c0566);
    /* 007c0566: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0569:; BB(0x007c0569);
    /* 007c0569: mov edx, dword ptr [0xa0f6a4] */ r_edx = R32((u32)(0xa0f6a4u));
    /* 007c056f: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0571: je 0x7c058a */ if (fZ) goto L_007c058a;
L_007c0573:; BB(0x007c0573);
    /* 007c0573: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 007c0577: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0579: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c057c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c057e: jl 0x7c058a */ if ((fS!=fO)) goto L_007c058a;
L_007c0580:; BB(0x007c0580);
    /* 007c0580: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0581: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0581, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0581, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0583: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0585: jne 0x7c058a */ if (!fZ) goto L_007c058a;
L_007c0587:; BB(0x007c0587);
    /* 007c0587: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c058a:; BB(0x007c058a);
    /* 007c058a: mov edx, dword ptr [0xa0f6a8] */ r_edx = R32((u32)(0xa0f6a8u));
    /* 007c0590: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0592: je 0x7c05ab */ if (fZ) goto L_007c05ab;
L_007c0594:; BB(0x007c0594);
    /* 007c0594: movsx eax, word ptr [esi + 0x32] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32u));
    /* 007c0598: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c059a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c059d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c059f: jl 0x7c05ab */ if ((fS!=fO)) goto L_007c05ab;
L_007c05a1:; BB(0x007c05a1);
    /* 007c05a1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c05a2: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c05a2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c05a2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c05a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05a6: jne 0x7c05ab */ if (!fZ) goto L_007c05ab;
L_007c05a8:; BB(0x007c05a8);
    /* 007c05a8: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c05ab:; BB(0x007c05ab);
    /* 007c05ab: mov edx, dword ptr [0xa0f6ac] */ r_edx = R32((u32)(0xa0f6acu));
    /* 007c05b1: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05b3: je 0x7c05cc */ if (fZ) goto L_007c05cc;
L_007c05b5:; BB(0x007c05b5);
    /* 007c05b5: movsx eax, word ptr [esi + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x34u));
    /* 007c05b9: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c05bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c05be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c05c0: jl 0x7c05cc */ if ((fS!=fO)) goto L_007c05cc;
L_007c05c2:; BB(0x007c05c2);
    /* 007c05c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c05c3: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c05c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c05c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c05c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05c7: jne 0x7c05cc */ if (!fZ) goto L_007c05cc;
L_007c05c9:; BB(0x007c05c9);
    /* 007c05c9: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c05cc:; BB(0x007c05cc);
    /* 007c05cc: mov edx, dword ptr [0xa0f6b0] */ r_edx = R32((u32)(0xa0f6b0u));
    /* 007c05d2: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05d4: je 0x7c05ed */ if (fZ) goto L_007c05ed;
L_007c05d6:; BB(0x007c05d6);
    /* 007c05d6: movsx eax, word ptr [esi + 0x36] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x36u));
    /* 007c05da: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c05dc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c05df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c05e1: jl 0x7c05ed */ if ((fS!=fO)) goto L_007c05ed;
L_007c05e3:; BB(0x007c05e3);
    /* 007c05e3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c05e4: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c05e4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c05e4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c05e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05e8: jne 0x7c05ed */ if (!fZ) goto L_007c05ed;
L_007c05ea:; BB(0x007c05ea);
    /* 007c05ea: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c05ed:; BB(0x007c05ed);
    /* 007c05ed: mov edx, dword ptr [0xa0f6b4] */ r_edx = R32((u32)(0xa0f6b4u));
    /* 007c05f3: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05f5: je 0x7c060e */ if (fZ) goto L_007c060e;
L_007c05f7:; BB(0x007c05f7);
    /* 007c05f7: movsx eax, word ptr [esi + 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 007c05fb: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c05fd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0602: jl 0x7c060e */ if ((fS!=fO)) goto L_007c060e;
L_007c0604:; BB(0x007c0604);
    /* 007c0604: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0605: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0605, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0605, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0607: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0609: jne 0x7c060e */ if (!fZ) goto L_007c060e;
L_007c060b:; BB(0x007c060b);
    /* 007c060b: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c060e:; BB(0x007c060e);
    /* 007c060e: mov edx, dword ptr [0xa0f6b8] */ r_edx = R32((u32)(0xa0f6b8u));
    /* 007c0614: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0616: je 0x7c062f */ if (fZ) goto L_007c062f;
L_007c0618:; BB(0x007c0618);
    /* 007c0618: movsx eax, word ptr [esi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 007c061c: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c061e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0623: jl 0x7c062f */ if ((fS!=fO)) goto L_007c062f;
L_007c0625:; BB(0x007c0625);
    /* 007c0625: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0626: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0626, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0626, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0628: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c062a: jne 0x7c062f */ if (!fZ) goto L_007c062f;
L_007c062c:; BB(0x007c062c);
    /* 007c062c: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c062f:; BB(0x007c062f);
    /* 007c062f: mov edx, dword ptr [0xa0f6bc] */ r_edx = R32((u32)(0xa0f6bcu));
    /* 007c0635: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0637: je 0x7c0650 */ if (fZ) goto L_007c0650;
L_007c0639:; BB(0x007c0639);
    /* 007c0639: movsx eax, word ptr [esi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 007c063d: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c063f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0644: jl 0x7c0650 */ if ((fS!=fO)) goto L_007c0650;
L_007c0646:; BB(0x007c0646);
    /* 007c0646: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0647: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0647, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0647, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0649: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c064b: jne 0x7c0650 */ if (!fZ) goto L_007c0650;
L_007c064d:; BB(0x007c064d);
    /* 007c064d: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0650:; BB(0x007c0650);
    /* 007c0650: mov edx, dword ptr [0xa0f6c0] */ r_edx = R32((u32)(0xa0f6c0u));
    /* 007c0656: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0658: je 0x7c0671 */ if (fZ) goto L_007c0671;
L_007c065a:; BB(0x007c065a);
    /* 007c065a: movsx eax, word ptr [esi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 007c065e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0660: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0665: jl 0x7c0671 */ if ((fS!=fO)) goto L_007c0671;
L_007c0667:; BB(0x007c0667);
    /* 007c0667: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0668: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0668, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0668, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c066a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c066c: jne 0x7c0671 */ if (!fZ) goto L_007c0671;
L_007c066e:; BB(0x007c066e);
    /* 007c066e: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0671:; BB(0x007c0671);
    /* 007c0671: mov edx, dword ptr [0xa0f6c4] */ r_edx = R32((u32)(0xa0f6c4u));
    /* 007c0677: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0679: je 0x7c0692 */ if (fZ) goto L_007c0692;
L_007c067b:; BB(0x007c067b);
    /* 007c067b: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 007c067f: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0681: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0686: jl 0x7c0692 */ if ((fS!=fO)) goto L_007c0692;
L_007c0688:; BB(0x007c0688);
    /* 007c0688: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0689: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0689, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0689, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c068b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c068d: jne 0x7c0692 */ if (!fZ) goto L_007c0692;
L_007c068f:; BB(0x007c068f);
    /* 007c068f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0692:; BB(0x007c0692);
    /* 007c0692: mov edx, dword ptr [0xa0f6c8] */ r_edx = R32((u32)(0xa0f6c8u));
    /* 007c0698: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c069a: je 0x7c06b3 */ if (fZ) goto L_007c06b3;
L_007c069c:; BB(0x007c069c);
    /* 007c069c: movsx eax, word ptr [esi + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x42u));
    /* 007c06a0: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c06a2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c06a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c06a7: jl 0x7c06b3 */ if ((fS!=fO)) goto L_007c06b3;
L_007c06a9:; BB(0x007c06a9);
    /* 007c06a9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c06aa: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c06aa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c06aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c06ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c06ae: jne 0x7c06b3 */ if (!fZ) goto L_007c06b3;
L_007c06b0:; BB(0x007c06b0);
    /* 007c06b0: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c06b3:; BB(0x007c06b3);
    /* 007c06b3: mov edx, dword ptr [0xa0f6cc] */ r_edx = R32((u32)(0xa0f6ccu));
    /* 007c06b9: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c06bb: je 0x7c06d4 */ if (fZ) goto L_007c06d4;
L_007c06bd:; BB(0x007c06bd);
    /* 007c06bd: movsx eax, word ptr [esi + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x44u));
    /* 007c06c1: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c06c3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c06c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c06c8: jl 0x7c06d4 */ if ((fS!=fO)) goto L_007c06d4;
L_007c06ca:; BB(0x007c06ca);
    /* 007c06ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c06cb: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c06cb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c06cb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c06cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c06cf: jne 0x7c06d4 */ if (!fZ) goto L_007c06d4;
L_007c06d1:; BB(0x007c06d1);
    /* 007c06d1: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c06d4:; BB(0x007c06d4);
    /* 007c06d4: mov edx, dword ptr [0xa0f6d0] */ r_edx = R32((u32)(0xa0f6d0u));
    /* 007c06da: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06dc: je 0x7c0700 */ if (fZ) goto L_007c0700;
L_007c06de:; BB(0x007c06de);
    /* 007c06de: movsx eax, word ptr [esi + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x46u));
    /* 007c06e2: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c06e4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c06e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06e9: jl 0x7c0700 */ if ((fS!=fO)) goto L_007c0700;
L_007c06eb:; BB(0x007c06eb);
    /* 007c06eb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c06ec: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c06ec, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c06ec, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c06ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06f0: jne 0x7c0700 */ if (!fZ) goto L_007c0700;
L_007c06f2:; BB(0x007c06f2);
    /* 007c06f2: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06f5: jmp 0x7c0700 */ goto L_007c0700;
L_007c06f7:; BB(0x007c06f7);
    /* 007c06f7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007c06fc: jmp 0x7c0700 */ goto L_007c0700;
L_007c06fe:; BB(0x007c06fe);
    /* 007c06fe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c0700:; BB(0x007c0700);
    /* 007c0700: mov eax, ecx */ r_eax = r_ecx;
    /* 007c0702: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0704: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0705: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c0706: ret 0xc */ FN_RET(0x007c04f4); r_esp += 16; return;
}

void f_007c04f6(void)
{
    FN_ENTER(0x007c04f6);
    /* 007c04f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c04f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c04f8: mov esi, ecx */ r_esi = r_ecx;
    /* 007c04fa: mov ecx, esi */ r_ecx = r_esi;
    /* 007c04fc: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007c0500: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007c0504: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c0508: call 0x7c070c */ r_esp -= 4; W32(r_esp, 0x7c050du); f_007c070c();
    /* 007c050d: mov edi, eax */ r_edi = r_eax;
    /* 007c050f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0511: je 0x7c06fe */ if (fZ) goto L_007c06fe;
L_007c0517:; BB(0x007c0517);
    /* 007c0517: test dword ptr [esi + 0x4c], edi */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c051a: jne 0x7c06f7 */ if (!fZ) goto L_007c06f7;
L_007c0520:; BB(0x007c0520);
    /* 007c0520: mov edx, dword ptr [0xa0f69c] */ r_edx = R32((u32)(0xa0f69cu));
    /* 007c0526: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0528: mov ecx, 0 */ r_ecx = 0x0u;
    /* 007c052d: je 0x7c0548 */ if (fZ) goto L_007c0548;
L_007c052f:; BB(0x007c052f);
    /* 007c052f: movsx eax, word ptr [esi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 007c0533: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0535: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c053a: jl 0x7c0548 */ if ((fS!=fO)) goto L_007c0548;
L_007c053c:; BB(0x007c053c);
    /* 007c053c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c053d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c053d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c053d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c053f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0541: jne 0x7c0548 */ if (!fZ) goto L_007c0548;
L_007c0543:; BB(0x007c0543);
    /* 007c0543: mov ecx, 1 */ r_ecx = 0x1u;
L_007c0548:; BB(0x007c0548);
    /* 007c0548: mov edx, dword ptr [0xa0f6a0] */ r_edx = R32((u32)(0xa0f6a0u));
    /* 007c054e: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0550: je 0x7c0569 */ if (fZ) goto L_007c0569;
L_007c0552:; BB(0x007c0552);
    /* 007c0552: movsx eax, word ptr [esi + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2eu));
    /* 007c0556: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0558: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c055b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c055d: jl 0x7c0569 */ if ((fS!=fO)) goto L_007c0569;
L_007c055f:; BB(0x007c055f);
    /* 007c055f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0560: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0560, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0560, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0562: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0564: jne 0x7c0569 */ if (!fZ) goto L_007c0569;
L_007c0566:; BB(0x007c0566);
    /* 007c0566: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0569:; BB(0x007c0569);
    /* 007c0569: mov edx, dword ptr [0xa0f6a4] */ r_edx = R32((u32)(0xa0f6a4u));
    /* 007c056f: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0571: je 0x7c058a */ if (fZ) goto L_007c058a;
L_007c0573:; BB(0x007c0573);
    /* 007c0573: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 007c0577: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0579: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c057c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c057e: jl 0x7c058a */ if ((fS!=fO)) goto L_007c058a;
L_007c0580:; BB(0x007c0580);
    /* 007c0580: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0581: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0581, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0581, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0583: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0585: jne 0x7c058a */ if (!fZ) goto L_007c058a;
L_007c0587:; BB(0x007c0587);
    /* 007c0587: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c058a:; BB(0x007c058a);
    /* 007c058a: mov edx, dword ptr [0xa0f6a8] */ r_edx = R32((u32)(0xa0f6a8u));
    /* 007c0590: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0592: je 0x7c05ab */ if (fZ) goto L_007c05ab;
L_007c0594:; BB(0x007c0594);
    /* 007c0594: movsx eax, word ptr [esi + 0x32] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32u));
    /* 007c0598: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c059a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c059d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c059f: jl 0x7c05ab */ if ((fS!=fO)) goto L_007c05ab;
L_007c05a1:; BB(0x007c05a1);
    /* 007c05a1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c05a2: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c05a2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c05a2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c05a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05a6: jne 0x7c05ab */ if (!fZ) goto L_007c05ab;
L_007c05a8:; BB(0x007c05a8);
    /* 007c05a8: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c05ab:; BB(0x007c05ab);
    /* 007c05ab: mov edx, dword ptr [0xa0f6ac] */ r_edx = R32((u32)(0xa0f6acu));
    /* 007c05b1: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05b3: je 0x7c05cc */ if (fZ) goto L_007c05cc;
L_007c05b5:; BB(0x007c05b5);
    /* 007c05b5: movsx eax, word ptr [esi + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x34u));
    /* 007c05b9: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c05bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c05be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c05c0: jl 0x7c05cc */ if ((fS!=fO)) goto L_007c05cc;
L_007c05c2:; BB(0x007c05c2);
    /* 007c05c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c05c3: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c05c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c05c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c05c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05c7: jne 0x7c05cc */ if (!fZ) goto L_007c05cc;
L_007c05c9:; BB(0x007c05c9);
    /* 007c05c9: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c05cc:; BB(0x007c05cc);
    /* 007c05cc: mov edx, dword ptr [0xa0f6b0] */ r_edx = R32((u32)(0xa0f6b0u));
    /* 007c05d2: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05d4: je 0x7c05ed */ if (fZ) goto L_007c05ed;
L_007c05d6:; BB(0x007c05d6);
    /* 007c05d6: movsx eax, word ptr [esi + 0x36] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x36u));
    /* 007c05da: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c05dc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c05df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c05e1: jl 0x7c05ed */ if ((fS!=fO)) goto L_007c05ed;
L_007c05e3:; BB(0x007c05e3);
    /* 007c05e3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c05e4: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c05e4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c05e4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c05e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05e8: jne 0x7c05ed */ if (!fZ) goto L_007c05ed;
L_007c05ea:; BB(0x007c05ea);
    /* 007c05ea: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c05ed:; BB(0x007c05ed);
    /* 007c05ed: mov edx, dword ptr [0xa0f6b4] */ r_edx = R32((u32)(0xa0f6b4u));
    /* 007c05f3: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c05f5: je 0x7c060e */ if (fZ) goto L_007c060e;
L_007c05f7:; BB(0x007c05f7);
    /* 007c05f7: movsx eax, word ptr [esi + 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 007c05fb: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c05fd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0602: jl 0x7c060e */ if ((fS!=fO)) goto L_007c060e;
L_007c0604:; BB(0x007c0604);
    /* 007c0604: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0605: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0605, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0605, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0607: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0609: jne 0x7c060e */ if (!fZ) goto L_007c060e;
L_007c060b:; BB(0x007c060b);
    /* 007c060b: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c060e:; BB(0x007c060e);
    /* 007c060e: mov edx, dword ptr [0xa0f6b8] */ r_edx = R32((u32)(0xa0f6b8u));
    /* 007c0614: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0616: je 0x7c062f */ if (fZ) goto L_007c062f;
L_007c0618:; BB(0x007c0618);
    /* 007c0618: movsx eax, word ptr [esi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 007c061c: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c061e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0623: jl 0x7c062f */ if ((fS!=fO)) goto L_007c062f;
L_007c0625:; BB(0x007c0625);
    /* 007c0625: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0626: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0626, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0626, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0628: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c062a: jne 0x7c062f */ if (!fZ) goto L_007c062f;
L_007c062c:; BB(0x007c062c);
    /* 007c062c: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c062f:; BB(0x007c062f);
    /* 007c062f: mov edx, dword ptr [0xa0f6bc] */ r_edx = R32((u32)(0xa0f6bcu));
    /* 007c0635: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0637: je 0x7c0650 */ if (fZ) goto L_007c0650;
L_007c0639:; BB(0x007c0639);
    /* 007c0639: movsx eax, word ptr [esi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 007c063d: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c063f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0644: jl 0x7c0650 */ if ((fS!=fO)) goto L_007c0650;
L_007c0646:; BB(0x007c0646);
    /* 007c0646: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0647: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0647, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0647, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0649: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c064b: jne 0x7c0650 */ if (!fZ) goto L_007c0650;
L_007c064d:; BB(0x007c064d);
    /* 007c064d: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0650:; BB(0x007c0650);
    /* 007c0650: mov edx, dword ptr [0xa0f6c0] */ r_edx = R32((u32)(0xa0f6c0u));
    /* 007c0656: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0658: je 0x7c0671 */ if (fZ) goto L_007c0671;
L_007c065a:; BB(0x007c065a);
    /* 007c065a: movsx eax, word ptr [esi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 007c065e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0660: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0665: jl 0x7c0671 */ if ((fS!=fO)) goto L_007c0671;
L_007c0667:; BB(0x007c0667);
    /* 007c0667: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0668: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0668, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0668, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c066a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c066c: jne 0x7c0671 */ if (!fZ) goto L_007c0671;
L_007c066e:; BB(0x007c066e);
    /* 007c066e: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0671:; BB(0x007c0671);
    /* 007c0671: mov edx, dword ptr [0xa0f6c4] */ r_edx = R32((u32)(0xa0f6c4u));
    /* 007c0677: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0679: je 0x7c0692 */ if (fZ) goto L_007c0692;
L_007c067b:; BB(0x007c067b);
    /* 007c067b: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 007c067f: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0681: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0686: jl 0x7c0692 */ if ((fS!=fO)) goto L_007c0692;
L_007c0688:; BB(0x007c0688);
    /* 007c0688: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0689: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0689, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0689, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c068b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c068d: jne 0x7c0692 */ if (!fZ) goto L_007c0692;
L_007c068f:; BB(0x007c068f);
    /* 007c068f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0692:; BB(0x007c0692);
    /* 007c0692: mov edx, dword ptr [0xa0f6c8] */ r_edx = R32((u32)(0xa0f6c8u));
    /* 007c0698: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c069a: je 0x7c06b3 */ if (fZ) goto L_007c06b3;
L_007c069c:; BB(0x007c069c);
    /* 007c069c: movsx eax, word ptr [esi + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x42u));
    /* 007c06a0: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c06a2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c06a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c06a7: jl 0x7c06b3 */ if ((fS!=fO)) goto L_007c06b3;
L_007c06a9:; BB(0x007c06a9);
    /* 007c06a9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c06aa: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c06aa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c06aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c06ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c06ae: jne 0x7c06b3 */ if (!fZ) goto L_007c06b3;
L_007c06b0:; BB(0x007c06b0);
    /* 007c06b0: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c06b3:; BB(0x007c06b3);
    /* 007c06b3: mov edx, dword ptr [0xa0f6cc] */ r_edx = R32((u32)(0xa0f6ccu));
    /* 007c06b9: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c06bb: je 0x7c06d4 */ if (fZ) goto L_007c06d4;
L_007c06bd:; BB(0x007c06bd);
    /* 007c06bd: movsx eax, word ptr [esi + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x44u));
    /* 007c06c1: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c06c3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c06c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c06c8: jl 0x7c06d4 */ if ((fS!=fO)) goto L_007c06d4;
L_007c06ca:; BB(0x007c06ca);
    /* 007c06ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c06cb: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c06cb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c06cb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c06cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c06cf: jne 0x7c06d4 */ if (!fZ) goto L_007c06d4;
L_007c06d1:; BB(0x007c06d1);
    /* 007c06d1: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c06d4:; BB(0x007c06d4);
    /* 007c06d4: mov edx, dword ptr [0xa0f6d0] */ r_edx = R32((u32)(0xa0f6d0u));
    /* 007c06da: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06dc: je 0x7c0700 */ if (fZ) goto L_007c0700;
L_007c06de:; BB(0x007c06de);
    /* 007c06de: movsx eax, word ptr [esi + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x46u));
    /* 007c06e2: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c06e4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c06e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06e9: jl 0x7c0700 */ if ((fS!=fO)) goto L_007c0700;
L_007c06eb:; BB(0x007c06eb);
    /* 007c06eb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c06ec: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c06ec, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c06ec, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c06ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06f0: jne 0x7c0700 */ if (!fZ) goto L_007c0700;
L_007c06f2:; BB(0x007c06f2);
    /* 007c06f2: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c06f5: jmp 0x7c0700 */ goto L_007c0700;
L_007c06f7:; BB(0x007c06f7);
    /* 007c06f7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007c06fc: jmp 0x7c0700 */ goto L_007c0700;
L_007c06fe:; BB(0x007c06fe);
    /* 007c06fe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c0700:; BB(0x007c0700);
    /* 007c0700: mov eax, ecx */ r_eax = r_ecx;
    /* 007c0702: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0704: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0705: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c0706: ret 0xc */ FN_RET(0x007c04f6); r_esp += 16; return;
}

void f_007c070c(void) /* sub_7C070C */
{
    FN_ENTER(0x007c070c);
    /* 007c070c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c0710: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0716: je 0x7c071e */ if (fZ) goto L_007c071e;
L_007c0718:; BB(0x007c0718);
    /* 007c0718: or eax, dword ptr [0xa0f644] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f644u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007c071e:; BB(0x007c071e);
    /* 007c071e: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0724: je 0x7c072c */ if (fZ) goto L_007c072c;
L_007c0726:; BB(0x007c0726);
    /* 007c0726: or eax, dword ptr [0xa0f648] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f648u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007c072c:; BB(0x007c072c);
    /* 007c072c: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0732: je 0x7c073a */ if (fZ) goto L_007c073a;
L_007c0734:; BB(0x007c0734);
    /* 007c0734: or eax, dword ptr [0xa0f64c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f64cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007c073a:; BB(0x007c073a);
    /* 007c073a: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0740: je 0x7c0748 */ if (fZ) goto L_007c0748;
L_007c0742:; BB(0x007c0742);
    /* 007c0742: or eax, dword ptr [0xa0f650] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f650u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007c0748:; BB(0x007c0748);
    /* 007c0748: mov edx, dword ptr [0xa0f654] */ r_edx = R32((u32)(0xa0f654u));
    /* 007c074e: or edx, dword ptr [0xa0f658] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f658u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007c0754: or edx, dword ptr [0xa0f65c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f65cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007c075a: or edx, dword ptr [0xa0f660] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f660u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007c0760: not edx */ r_edx = ~r_edx;
    /* 007c0762: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0764: ret 4 */ FN_RET(0x007c070c); r_esp += 8; return;
}

void f_007c0768(void) /* sub_7C0768 */
{
    FN_ENTER(0x007c0768);
    /* 007c0768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c0769: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c076a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c076b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c076c: mov esi, ecx */ r_esi = r_ecx;
    /* 007c076e: mov ecx, esi */ r_ecx = r_esi;
    /* 007c0770: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007c0774: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007c0778: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c077c: call 0x7c0980 */ r_esp -= 4; W32(r_esp, 0x7c0781u); f_007c0980();
    /* 007c0781: mov edi, eax */ r_edi = r_eax;
    /* 007c0783: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0785: je 0x7c0972 */ if (fZ) goto L_007c0972;
L_007c078b:; BB(0x007c078b);
    /* 007c078b: test dword ptr [esi + 0x4c], edi */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c078e: jne 0x7c096b */ if (!fZ) goto L_007c096b;
L_007c0794:; BB(0x007c0794);
    /* 007c0794: mov edx, dword ptr [0xa0f69c] */ r_edx = R32((u32)(0xa0f69cu));
    /* 007c079a: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c079c: mov ecx, 0 */ r_ecx = 0x0u;
    /* 007c07a1: je 0x7c07bc */ if (fZ) goto L_007c07bc;
L_007c07a3:; BB(0x007c07a3);
    /* 007c07a3: movsx eax, word ptr [esi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 007c07a7: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c07a9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c07ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c07ae: jl 0x7c07bc */ if ((fS!=fO)) goto L_007c07bc;
L_007c07b0:; BB(0x007c07b0);
    /* 007c07b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c07b1: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c07b1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c07b1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c07b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c07b5: jne 0x7c07bc */ if (!fZ) goto L_007c07bc;
L_007c07b7:; BB(0x007c07b7);
    /* 007c07b7: mov ecx, 1 */ r_ecx = 0x1u;
L_007c07bc:; BB(0x007c07bc);
    /* 007c07bc: mov edx, dword ptr [0xa0f6a0] */ r_edx = R32((u32)(0xa0f6a0u));
    /* 007c07c2: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c07c4: je 0x7c07dd */ if (fZ) goto L_007c07dd;
L_007c07c6:; BB(0x007c07c6);
    /* 007c07c6: movsx eax, word ptr [esi + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2eu));
    /* 007c07ca: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c07cc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c07cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c07d1: jl 0x7c07dd */ if ((fS!=fO)) goto L_007c07dd;
L_007c07d3:; BB(0x007c07d3);
    /* 007c07d3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c07d4: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c07d4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c07d4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c07d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c07d8: jne 0x7c07dd */ if (!fZ) goto L_007c07dd;
L_007c07da:; BB(0x007c07da);
    /* 007c07da: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c07dd:; BB(0x007c07dd);
    /* 007c07dd: mov edx, dword ptr [0xa0f6a4] */ r_edx = R32((u32)(0xa0f6a4u));
    /* 007c07e3: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c07e5: je 0x7c07fe */ if (fZ) goto L_007c07fe;
L_007c07e7:; BB(0x007c07e7);
    /* 007c07e7: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 007c07eb: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c07ed: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c07f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c07f2: jl 0x7c07fe */ if ((fS!=fO)) goto L_007c07fe;
L_007c07f4:; BB(0x007c07f4);
    /* 007c07f4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c07f5: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c07f5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c07f5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c07f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c07f9: jne 0x7c07fe */ if (!fZ) goto L_007c07fe;
L_007c07fb:; BB(0x007c07fb);
    /* 007c07fb: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c07fe:; BB(0x007c07fe);
    /* 007c07fe: mov edx, dword ptr [0xa0f6a8] */ r_edx = R32((u32)(0xa0f6a8u));
    /* 007c0804: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0806: je 0x7c081f */ if (fZ) goto L_007c081f;
L_007c0808:; BB(0x007c0808);
    /* 007c0808: movsx eax, word ptr [esi + 0x32] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32u));
    /* 007c080c: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c080e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0813: jl 0x7c081f */ if ((fS!=fO)) goto L_007c081f;
L_007c0815:; BB(0x007c0815);
    /* 007c0815: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0816: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0816, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0816, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0818: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c081a: jne 0x7c081f */ if (!fZ) goto L_007c081f;
L_007c081c:; BB(0x007c081c);
    /* 007c081c: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c081f:; BB(0x007c081f);
    /* 007c081f: mov edx, dword ptr [0xa0f6ac] */ r_edx = R32((u32)(0xa0f6acu));
    /* 007c0825: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0827: je 0x7c0840 */ if (fZ) goto L_007c0840;
L_007c0829:; BB(0x007c0829);
    /* 007c0829: movsx eax, word ptr [esi + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x34u));
    /* 007c082d: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c082f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0834: jl 0x7c0840 */ if ((fS!=fO)) goto L_007c0840;
L_007c0836:; BB(0x007c0836);
    /* 007c0836: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0837: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0837, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0837, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0839: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c083b: jne 0x7c0840 */ if (!fZ) goto L_007c0840;
L_007c083d:; BB(0x007c083d);
    /* 007c083d: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0840:; BB(0x007c0840);
    /* 007c0840: mov edx, dword ptr [0xa0f6b0] */ r_edx = R32((u32)(0xa0f6b0u));
    /* 007c0846: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0848: je 0x7c0861 */ if (fZ) goto L_007c0861;
L_007c084a:; BB(0x007c084a);
    /* 007c084a: movsx eax, word ptr [esi + 0x36] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x36u));
    /* 007c084e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0850: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0855: jl 0x7c0861 */ if ((fS!=fO)) goto L_007c0861;
L_007c0857:; BB(0x007c0857);
    /* 007c0857: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0858: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0858, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0858, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c085a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c085c: jne 0x7c0861 */ if (!fZ) goto L_007c0861;
L_007c085e:; BB(0x007c085e);
    /* 007c085e: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0861:; BB(0x007c0861);
    /* 007c0861: mov edx, dword ptr [0xa0f6b4] */ r_edx = R32((u32)(0xa0f6b4u));
    /* 007c0867: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0869: je 0x7c0882 */ if (fZ) goto L_007c0882;
L_007c086b:; BB(0x007c086b);
    /* 007c086b: movsx eax, word ptr [esi + 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 007c086f: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0871: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0876: jl 0x7c0882 */ if ((fS!=fO)) goto L_007c0882;
L_007c0878:; BB(0x007c0878);
    /* 007c0878: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0879: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0879, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0879, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c087b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c087d: jne 0x7c0882 */ if (!fZ) goto L_007c0882;
L_007c087f:; BB(0x007c087f);
    /* 007c087f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0882:; BB(0x007c0882);
    /* 007c0882: mov edx, dword ptr [0xa0f6b8] */ r_edx = R32((u32)(0xa0f6b8u));
    /* 007c0888: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c088a: je 0x7c08a3 */ if (fZ) goto L_007c08a3;
L_007c088c:; BB(0x007c088c);
    /* 007c088c: movsx eax, word ptr [esi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 007c0890: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0892: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0895: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0897: jl 0x7c08a3 */ if ((fS!=fO)) goto L_007c08a3;
L_007c0899:; BB(0x007c0899);
    /* 007c0899: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c089a: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c089a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c089a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c089c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c089e: jne 0x7c08a3 */ if (!fZ) goto L_007c08a3;
L_007c08a0:; BB(0x007c08a0);
    /* 007c08a0: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c08a3:; BB(0x007c08a3);
    /* 007c08a3: mov edx, dword ptr [0xa0f6bc] */ r_edx = R32((u32)(0xa0f6bcu));
    /* 007c08a9: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c08ab: je 0x7c08c4 */ if (fZ) goto L_007c08c4;
L_007c08ad:; BB(0x007c08ad);
    /* 007c08ad: movsx eax, word ptr [esi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 007c08b1: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c08b3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c08b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c08b8: jl 0x7c08c4 */ if ((fS!=fO)) goto L_007c08c4;
L_007c08ba:; BB(0x007c08ba);
    /* 007c08ba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c08bb: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c08bb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c08bb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c08bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c08bf: jne 0x7c08c4 */ if (!fZ) goto L_007c08c4;
L_007c08c1:; BB(0x007c08c1);
    /* 007c08c1: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c08c4:; BB(0x007c08c4);
    /* 007c08c4: mov edx, dword ptr [0xa0f6c0] */ r_edx = R32((u32)(0xa0f6c0u));
    /* 007c08ca: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c08cc: je 0x7c08e5 */ if (fZ) goto L_007c08e5;
L_007c08ce:; BB(0x007c08ce);
    /* 007c08ce: movsx eax, word ptr [esi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 007c08d2: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c08d4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c08d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c08d9: jl 0x7c08e5 */ if ((fS!=fO)) goto L_007c08e5;
L_007c08db:; BB(0x007c08db);
    /* 007c08db: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c08dc: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c08dc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c08dc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c08de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c08e0: jne 0x7c08e5 */ if (!fZ) goto L_007c08e5;
L_007c08e2:; BB(0x007c08e2);
    /* 007c08e2: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c08e5:; BB(0x007c08e5);
    /* 007c08e5: mov edx, dword ptr [0xa0f6c4] */ r_edx = R32((u32)(0xa0f6c4u));
    /* 007c08eb: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c08ed: je 0x7c0906 */ if (fZ) goto L_007c0906;
L_007c08ef:; BB(0x007c08ef);
    /* 007c08ef: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 007c08f3: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c08f5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c08f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c08fa: jl 0x7c0906 */ if ((fS!=fO)) goto L_007c0906;
L_007c08fc:; BB(0x007c08fc);
    /* 007c08fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c08fd: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c08fd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c08fd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c08ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0901: jne 0x7c0906 */ if (!fZ) goto L_007c0906;
L_007c0903:; BB(0x007c0903);
    /* 007c0903: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0906:; BB(0x007c0906);
    /* 007c0906: mov edx, dword ptr [0xa0f6c8] */ r_edx = R32((u32)(0xa0f6c8u));
    /* 007c090c: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c090e: je 0x7c0927 */ if (fZ) goto L_007c0927;
L_007c0910:; BB(0x007c0910);
    /* 007c0910: movsx eax, word ptr [esi + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x42u));
    /* 007c0914: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0916: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c091b: jl 0x7c0927 */ if ((fS!=fO)) goto L_007c0927;
L_007c091d:; BB(0x007c091d);
    /* 007c091d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c091e: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c091e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c091e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0920: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0922: jne 0x7c0927 */ if (!fZ) goto L_007c0927;
L_007c0924:; BB(0x007c0924);
    /* 007c0924: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0927:; BB(0x007c0927);
    /* 007c0927: mov edx, dword ptr [0xa0f6cc] */ r_edx = R32((u32)(0xa0f6ccu));
    /* 007c092d: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c092f: je 0x7c0948 */ if (fZ) goto L_007c0948;
L_007c0931:; BB(0x007c0931);
    /* 007c0931: movsx eax, word ptr [esi + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x44u));
    /* 007c0935: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0937: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c093a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c093c: jl 0x7c0948 */ if ((fS!=fO)) goto L_007c0948;
L_007c093e:; BB(0x007c093e);
    /* 007c093e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c093f: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c093f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c093f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0941: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0943: jne 0x7c0948 */ if (!fZ) goto L_007c0948;
L_007c0945:; BB(0x007c0945);
    /* 007c0945: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0948:; BB(0x007c0948);
    /* 007c0948: mov edx, dword ptr [0xa0f6d0] */ r_edx = R32((u32)(0xa0f6d0u));
    /* 007c094e: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0950: je 0x7c0974 */ if (fZ) goto L_007c0974;
L_007c0952:; BB(0x007c0952);
    /* 007c0952: movsx eax, word ptr [esi + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x46u));
    /* 007c0956: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0958: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c095b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c095d: jl 0x7c0974 */ if ((fS!=fO)) goto L_007c0974;
L_007c095f:; BB(0x007c095f);
    /* 007c095f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0960: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0960, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0960, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0962: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0964: jne 0x7c0974 */ if (!fZ) goto L_007c0974;
L_007c0966:; BB(0x007c0966);
    /* 007c0966: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0969: jmp 0x7c0974 */ goto L_007c0974;
L_007c096b:; BB(0x007c096b);
    /* 007c096b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007c0970: jmp 0x7c0974 */ goto L_007c0974;
L_007c0972:; BB(0x007c0972);
    /* 007c0972: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c0974:; BB(0x007c0974);
    /* 007c0974: mov eax, ecx */ r_eax = r_ecx;
    /* 007c0976: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0978: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0979: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c097a: ret 0xc */ FN_RET(0x007c0768); r_esp += 16; return;
}

void f_007c0980(void) /* sub_7C0980 */
{
    FN_ENTER(0x007c0980);
    /* 007c0980: mov eax, dword ptr [0xa0f644] */ r_eax = R32((u32)(0xa0f644u));
    /* 007c0985: or eax, dword ptr [0xa0f648] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f648u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007c098b: or eax, dword ptr [0xa0f64c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f64cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007c0991: or eax, dword ptr [0xa0f650] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f650u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007c0997: not eax */ r_eax = ~r_eax;
    /* 007c0999: and eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c099d: ret 4 */ FN_RET(0x007c0980); r_esp += 8; return;
}

void f_007c09a0(void) /* sub_7C09A0 */
{
    FN_ENTER(0x007c09a0);
    /* 007c09a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c09a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c09a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c09a3: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007c09a7: mov esi, dword ptr [0xa0f664] */ r_esi = R32((u32)(0xa0f664u));
    /* 007c09ad: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007c09af: test esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c09b1: je 0x7c09b9 */ if (fZ) goto L_007c09b9;
L_007c09b3:; BB(0x007c09b3);
    /* 007c09b3: mov ebp, dword ptr [0xa0f654] */ r_ebp = R32((u32)(0xa0f654u));
L_007c09b9:; BB(0x007c09b9);
    /* 007c09b9: mov eax, dword ptr [0xa0f668] */ r_eax = R32((u32)(0xa0f668u));
    /* 007c09be: test eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c09c0: je 0x7c09c8 */ if (fZ) goto L_007c09c8;
L_007c09c2:; BB(0x007c09c2);
    /* 007c09c2: or ebp, dword ptr [0xa0f658] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f658u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_007c09c8:; BB(0x007c09c8);
    /* 007c09c8: mov edx, dword ptr [0xa0f66c] */ r_edx = R32((u32)(0xa0f66cu));
    /* 007c09ce: test edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c09d0: je 0x7c09d8 */ if (fZ) goto L_007c09d8;
L_007c09d2:; BB(0x007c09d2);
    /* 007c09d2: or ebp, dword ptr [0xa0f65c] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f65cu)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_007c09d8:; BB(0x007c09d8);
    /* 007c09d8: mov ecx, dword ptr [0xa0f670] */ r_ecx = R32((u32)(0xa0f670u));
    /* 007c09de: test ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c09e0: je 0x7c09e8 */ if (fZ) goto L_007c09e8;
L_007c09e2:; BB(0x007c09e2);
    /* 007c09e2: or ebp, dword ptr [0xa0f660] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa0f660u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_007c09e8:; BB(0x007c09e8);
    /* 007c09e8: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007c09ea: or esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007c09ec: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007c09ee: not esi */ r_esi = ~r_esi;
    /* 007c09f0: and esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007c09f2: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c09f4: mov eax, esi */ r_eax = r_esi;
    /* 007c09f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c09f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c09f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c09f9: ret 4 */ FN_RET(0x007c09a0); r_esp += 8; return;
}

void f_007c09fc(void) /* sub_7C09FC */
{
    FN_ENTER(0x007c09fc);
    /* 007c09fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c09fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c09fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c09ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c0a00: mov esi, ecx */ r_esi = r_ecx;
    /* 007c0a02: mov ecx, esi */ r_ecx = r_esi;
    /* 007c0a04: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007c0a08: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007c0a0c: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c0a10: call 0x7c0c14 */ r_esp -= 4; W32(r_esp, 0x7c0a15u); f_007c0c14();
    /* 007c0a15: mov edi, eax */ r_edi = r_eax;
    /* 007c0a17: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a19: je 0x7c0c06 */ if (fZ) goto L_007c0c06;
L_007c0a1f:; BB(0x007c0a1f);
    /* 007c0a1f: test dword ptr [esi + 0x4c], edi */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0a22: jne 0x7c0bff */ if (!fZ) goto L_007c0bff;
L_007c0a28:; BB(0x007c0a28);
    /* 007c0a28: mov edx, dword ptr [0xa0f69c] */ r_edx = R32((u32)(0xa0f69cu));
    /* 007c0a2e: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a30: mov ecx, 0 */ r_ecx = 0x0u;
    /* 007c0a35: je 0x7c0a50 */ if (fZ) goto L_007c0a50;
L_007c0a37:; BB(0x007c0a37);
    /* 007c0a37: movsx eax, word ptr [esi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 007c0a3b: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0a3d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0a40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0a42: jl 0x7c0a50 */ if ((fS!=fO)) goto L_007c0a50;
L_007c0a44:; BB(0x007c0a44);
    /* 007c0a44: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0a45: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0a45, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0a45, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0a47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a49: jne 0x7c0a50 */ if (!fZ) goto L_007c0a50;
L_007c0a4b:; BB(0x007c0a4b);
    /* 007c0a4b: mov ecx, 1 */ r_ecx = 0x1u;
L_007c0a50:; BB(0x007c0a50);
    /* 007c0a50: mov edx, dword ptr [0xa0f6a0] */ r_edx = R32((u32)(0xa0f6a0u));
    /* 007c0a56: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a58: je 0x7c0a71 */ if (fZ) goto L_007c0a71;
L_007c0a5a:; BB(0x007c0a5a);
    /* 007c0a5a: movsx eax, word ptr [esi + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2eu));
    /* 007c0a5e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0a60: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0a65: jl 0x7c0a71 */ if ((fS!=fO)) goto L_007c0a71;
L_007c0a67:; BB(0x007c0a67);
    /* 007c0a67: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0a68: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0a68, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0a68, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0a6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a6c: jne 0x7c0a71 */ if (!fZ) goto L_007c0a71;
L_007c0a6e:; BB(0x007c0a6e);
    /* 007c0a6e: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0a71:; BB(0x007c0a71);
    /* 007c0a71: mov edx, dword ptr [0xa0f6a4] */ r_edx = R32((u32)(0xa0f6a4u));
    /* 007c0a77: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a79: je 0x7c0a92 */ if (fZ) goto L_007c0a92;
L_007c0a7b:; BB(0x007c0a7b);
    /* 007c0a7b: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 007c0a7f: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0a81: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0a84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0a86: jl 0x7c0a92 */ if ((fS!=fO)) goto L_007c0a92;
L_007c0a88:; BB(0x007c0a88);
    /* 007c0a88: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0a89: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0a89, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0a89, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0a8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a8d: jne 0x7c0a92 */ if (!fZ) goto L_007c0a92;
L_007c0a8f:; BB(0x007c0a8f);
    /* 007c0a8f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0a92:; BB(0x007c0a92);
    /* 007c0a92: mov edx, dword ptr [0xa0f6a8] */ r_edx = R32((u32)(0xa0f6a8u));
    /* 007c0a98: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0a9a: je 0x7c0ab3 */ if (fZ) goto L_007c0ab3;
L_007c0a9c:; BB(0x007c0a9c);
    /* 007c0a9c: movsx eax, word ptr [esi + 0x32] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32u));
    /* 007c0aa0: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0aa2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0aa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0aa7: jl 0x7c0ab3 */ if ((fS!=fO)) goto L_007c0ab3;
L_007c0aa9:; BB(0x007c0aa9);
    /* 007c0aa9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0aaa: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0aaa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0aaa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0aac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0aae: jne 0x7c0ab3 */ if (!fZ) goto L_007c0ab3;
L_007c0ab0:; BB(0x007c0ab0);
    /* 007c0ab0: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0ab3:; BB(0x007c0ab3);
    /* 007c0ab3: mov edx, dword ptr [0xa0f6ac] */ r_edx = R32((u32)(0xa0f6acu));
    /* 007c0ab9: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0abb: je 0x7c0ad4 */ if (fZ) goto L_007c0ad4;
L_007c0abd:; BB(0x007c0abd);
    /* 007c0abd: movsx eax, word ptr [esi + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x34u));
    /* 007c0ac1: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0ac3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0ac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0ac8: jl 0x7c0ad4 */ if ((fS!=fO)) goto L_007c0ad4;
L_007c0aca:; BB(0x007c0aca);
    /* 007c0aca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0acb: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0acb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0acb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0acd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0acf: jne 0x7c0ad4 */ if (!fZ) goto L_007c0ad4;
L_007c0ad1:; BB(0x007c0ad1);
    /* 007c0ad1: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0ad4:; BB(0x007c0ad4);
    /* 007c0ad4: mov edx, dword ptr [0xa0f6b0] */ r_edx = R32((u32)(0xa0f6b0u));
    /* 007c0ada: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0adc: je 0x7c0af5 */ if (fZ) goto L_007c0af5;
L_007c0ade:; BB(0x007c0ade);
    /* 007c0ade: movsx eax, word ptr [esi + 0x36] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x36u));
    /* 007c0ae2: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0ae4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0ae9: jl 0x7c0af5 */ if ((fS!=fO)) goto L_007c0af5;
L_007c0aeb:; BB(0x007c0aeb);
    /* 007c0aeb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0aec: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0aec, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0aec, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0aee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0af0: jne 0x7c0af5 */ if (!fZ) goto L_007c0af5;
L_007c0af2:; BB(0x007c0af2);
    /* 007c0af2: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0af5:; BB(0x007c0af5);
    /* 007c0af5: mov edx, dword ptr [0xa0f6b4] */ r_edx = R32((u32)(0xa0f6b4u));
    /* 007c0afb: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0afd: je 0x7c0b16 */ if (fZ) goto L_007c0b16;
L_007c0aff:; BB(0x007c0aff);
    /* 007c0aff: movsx eax, word ptr [esi + 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 007c0b03: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b05: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0b0a: jl 0x7c0b16 */ if ((fS!=fO)) goto L_007c0b16;
L_007c0b0c:; BB(0x007c0b0c);
    /* 007c0b0c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0b0d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0b0d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0b0d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0b0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b11: jne 0x7c0b16 */ if (!fZ) goto L_007c0b16;
L_007c0b13:; BB(0x007c0b13);
    /* 007c0b13: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0b16:; BB(0x007c0b16);
    /* 007c0b16: mov edx, dword ptr [0xa0f6b8] */ r_edx = R32((u32)(0xa0f6b8u));
    /* 007c0b1c: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b1e: je 0x7c0b37 */ if (fZ) goto L_007c0b37;
L_007c0b20:; BB(0x007c0b20);
    /* 007c0b20: movsx eax, word ptr [esi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 007c0b24: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b26: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0b2b: jl 0x7c0b37 */ if ((fS!=fO)) goto L_007c0b37;
L_007c0b2d:; BB(0x007c0b2d);
    /* 007c0b2d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0b2e: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0b2e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0b2e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0b30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b32: jne 0x7c0b37 */ if (!fZ) goto L_007c0b37;
L_007c0b34:; BB(0x007c0b34);
    /* 007c0b34: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0b37:; BB(0x007c0b37);
    /* 007c0b37: mov edx, dword ptr [0xa0f6bc] */ r_edx = R32((u32)(0xa0f6bcu));
    /* 007c0b3d: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b3f: je 0x7c0b58 */ if (fZ) goto L_007c0b58;
L_007c0b41:; BB(0x007c0b41);
    /* 007c0b41: movsx eax, word ptr [esi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 007c0b45: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b47: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0b4c: jl 0x7c0b58 */ if ((fS!=fO)) goto L_007c0b58;
L_007c0b4e:; BB(0x007c0b4e);
    /* 007c0b4e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0b4f: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0b4f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0b4f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0b51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b53: jne 0x7c0b58 */ if (!fZ) goto L_007c0b58;
L_007c0b55:; BB(0x007c0b55);
    /* 007c0b55: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0b58:; BB(0x007c0b58);
    /* 007c0b58: mov edx, dword ptr [0xa0f6c0] */ r_edx = R32((u32)(0xa0f6c0u));
    /* 007c0b5e: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b60: je 0x7c0b79 */ if (fZ) goto L_007c0b79;
L_007c0b62:; BB(0x007c0b62);
    /* 007c0b62: movsx eax, word ptr [esi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 007c0b66: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b68: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0b6d: jl 0x7c0b79 */ if ((fS!=fO)) goto L_007c0b79;
L_007c0b6f:; BB(0x007c0b6f);
    /* 007c0b6f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0b70: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0b70, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0b70, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0b72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b74: jne 0x7c0b79 */ if (!fZ) goto L_007c0b79;
L_007c0b76:; BB(0x007c0b76);
    /* 007c0b76: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0b79:; BB(0x007c0b79);
    /* 007c0b79: mov edx, dword ptr [0xa0f6c4] */ r_edx = R32((u32)(0xa0f6c4u));
    /* 007c0b7f: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b81: je 0x7c0b9a */ if (fZ) goto L_007c0b9a;
L_007c0b83:; BB(0x007c0b83);
    /* 007c0b83: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 007c0b87: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b89: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0b8e: jl 0x7c0b9a */ if ((fS!=fO)) goto L_007c0b9a;
L_007c0b90:; BB(0x007c0b90);
    /* 007c0b90: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0b91: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0b91, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0b91, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0b93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0b95: jne 0x7c0b9a */ if (!fZ) goto L_007c0b9a;
L_007c0b97:; BB(0x007c0b97);
    /* 007c0b97: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0b9a:; BB(0x007c0b9a);
    /* 007c0b9a: mov edx, dword ptr [0xa0f6c8] */ r_edx = R32((u32)(0xa0f6c8u));
    /* 007c0ba0: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ba2: je 0x7c0bbb */ if (fZ) goto L_007c0bbb;
L_007c0ba4:; BB(0x007c0ba4);
    /* 007c0ba4: movsx eax, word ptr [esi + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x42u));
    /* 007c0ba8: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0baa: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0bad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0baf: jl 0x7c0bbb */ if ((fS!=fO)) goto L_007c0bbb;
L_007c0bb1:; BB(0x007c0bb1);
    /* 007c0bb1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0bb2: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0bb2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0bb2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0bb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0bb6: jne 0x7c0bbb */ if (!fZ) goto L_007c0bbb;
L_007c0bb8:; BB(0x007c0bb8);
    /* 007c0bb8: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0bbb:; BB(0x007c0bbb);
    /* 007c0bbb: mov edx, dword ptr [0xa0f6cc] */ r_edx = R32((u32)(0xa0f6ccu));
    /* 007c0bc1: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0bc3: je 0x7c0bdc */ if (fZ) goto L_007c0bdc;
L_007c0bc5:; BB(0x007c0bc5);
    /* 007c0bc5: movsx eax, word ptr [esi + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x44u));
    /* 007c0bc9: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0bcb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0bce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0bd0: jl 0x7c0bdc */ if ((fS!=fO)) goto L_007c0bdc;
L_007c0bd2:; BB(0x007c0bd2);
    /* 007c0bd2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0bd3: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0bd3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0bd3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0bd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0bd7: jne 0x7c0bdc */ if (!fZ) goto L_007c0bdc;
L_007c0bd9:; BB(0x007c0bd9);
    /* 007c0bd9: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0bdc:; BB(0x007c0bdc);
    /* 007c0bdc: mov edx, dword ptr [0xa0f6d0] */ r_edx = R32((u32)(0xa0f6d0u));
    /* 007c0be2: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0be4: je 0x7c0c08 */ if (fZ) goto L_007c0c08;
L_007c0be6:; BB(0x007c0be6);
    /* 007c0be6: movsx eax, word ptr [esi + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x46u));
    /* 007c0bea: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0bec: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0bef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0bf1: jl 0x7c0c08 */ if ((fS!=fO)) goto L_007c0c08;
L_007c0bf3:; BB(0x007c0bf3);
    /* 007c0bf3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0bf4: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0bf4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0bf4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0bf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0bf8: jne 0x7c0c08 */ if (!fZ) goto L_007c0c08;
L_007c0bfa:; BB(0x007c0bfa);
    /* 007c0bfa: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0bfd: jmp 0x7c0c08 */ goto L_007c0c08;
L_007c0bff:; BB(0x007c0bff);
    /* 007c0bff: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007c0c04: jmp 0x7c0c08 */ goto L_007c0c08;
L_007c0c06:; BB(0x007c0c06);
    /* 007c0c06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c0c08:; BB(0x007c0c08);
    /* 007c0c08: mov eax, ecx */ r_eax = r_ecx;
    /* 007c0c0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0c0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0c0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0c0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c0c0e: ret 0xc */ FN_RET(0x007c09fc); r_esp += 16; return;
}

void f_007c0c14(void) /* sub_7C0C14 */
{
    FN_ENTER(0x007c0c14);
    /* 007c0c14: mov eax, dword ptr [0xa0f644] */ r_eax = R32((u32)(0xa0f644u));
    /* 007c0c19: or eax, dword ptr [0xa0f648] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f648u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007c0c1f: or eax, dword ptr [0xa0f64c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f64cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007c0c25: or eax, dword ptr [0xa0f650] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f650u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007c0c2b: not eax */ r_eax = ~r_eax;
    /* 007c0c2d: and eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007c0c31: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0c37: je 0x7c0c3f */ if (fZ) goto L_007c0c3f;
L_007c0c39:; BB(0x007c0c39);
    /* 007c0c39: or eax, dword ptr [0xa0f654] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f654u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007c0c3f:; BB(0x007c0c3f);
    /* 007c0c3f: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0c45: je 0x7c0c4d */ if (fZ) goto L_007c0c4d;
L_007c0c47:; BB(0x007c0c47);
    /* 007c0c47: or eax, dword ptr [0xa0f658] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f658u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007c0c4d:; BB(0x007c0c4d);
    /* 007c0c4d: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0c53: je 0x7c0c5b */ if (fZ) goto L_007c0c5b;
L_007c0c55:; BB(0x007c0c55);
    /* 007c0c55: or eax, dword ptr [0xa0f65c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f65cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007c0c5b:; BB(0x007c0c5b);
    /* 007c0c5b: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0c61: je 0x7c0c69 */ if (fZ) goto L_007c0c69;
L_007c0c63:; BB(0x007c0c63);
    /* 007c0c63: or eax, dword ptr [0xa0f660] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f660u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c0c69:; BB(0x007c0c69);
    /* 007c0c69: ret 4 */ FN_RET(0x007c0c14); r_esp += 8; return;
}

void f_007c0c6c(void) /* sub_7C0C6C */
{
    FN_ENTER(0x007c0c6c);
    /* 007c0c6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c0c6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c0c6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c0c6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c0c70: mov esi, ecx */ r_esi = r_ecx;
    /* 007c0c72: mov ecx, esi */ r_ecx = r_esi;
    /* 007c0c74: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007c0c78: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007c0c7c: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c0c80: call 0x7c0e84 */ r_esp -= 4; W32(r_esp, 0x7c0c85u); f_007c0e84();
    /* 007c0c85: mov edi, eax */ r_edi = r_eax;
    /* 007c0c87: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0c89: je 0x7c0e76 */ if (fZ) goto L_007c0e76;
L_007c0c8f:; BB(0x007c0c8f);
    /* 007c0c8f: test dword ptr [esi + 0x4c], edi */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0c92: jne 0x7c0e6f */ if (!fZ) goto L_007c0e6f;
L_007c0c98:; BB(0x007c0c98);
    /* 007c0c98: mov edx, dword ptr [0xa0f69c] */ r_edx = R32((u32)(0xa0f69cu));
    /* 007c0c9e: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ca0: mov ecx, 0 */ r_ecx = 0x0u;
    /* 007c0ca5: je 0x7c0cc0 */ if (fZ) goto L_007c0cc0;
L_007c0ca7:; BB(0x007c0ca7);
    /* 007c0ca7: movsx eax, word ptr [esi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 007c0cab: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0cad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0cb2: jl 0x7c0cc0 */ if ((fS!=fO)) goto L_007c0cc0;
L_007c0cb4:; BB(0x007c0cb4);
    /* 007c0cb4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0cb5: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0cb5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0cb5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0cb7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0cb9: jne 0x7c0cc0 */ if (!fZ) goto L_007c0cc0;
L_007c0cbb:; BB(0x007c0cbb);
    /* 007c0cbb: mov ecx, 1 */ r_ecx = 0x1u;
L_007c0cc0:; BB(0x007c0cc0);
    /* 007c0cc0: mov edx, dword ptr [0xa0f6a0] */ r_edx = R32((u32)(0xa0f6a0u));
    /* 007c0cc6: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0cc8: je 0x7c0ce1 */ if (fZ) goto L_007c0ce1;
L_007c0cca:; BB(0x007c0cca);
    /* 007c0cca: movsx eax, word ptr [esi + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2eu));
    /* 007c0cce: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0cd0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0cd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0cd5: jl 0x7c0ce1 */ if ((fS!=fO)) goto L_007c0ce1;
L_007c0cd7:; BB(0x007c0cd7);
    /* 007c0cd7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0cd8: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0cd8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0cd8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0cda: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0cdc: jne 0x7c0ce1 */ if (!fZ) goto L_007c0ce1;
L_007c0cde:; BB(0x007c0cde);
    /* 007c0cde: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0ce1:; BB(0x007c0ce1);
    /* 007c0ce1: mov edx, dword ptr [0xa0f6a4] */ r_edx = R32((u32)(0xa0f6a4u));
    /* 007c0ce7: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ce9: je 0x7c0d02 */ if (fZ) goto L_007c0d02;
L_007c0ceb:; BB(0x007c0ceb);
    /* 007c0ceb: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 007c0cef: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0cf1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0cf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0cf6: jl 0x7c0d02 */ if ((fS!=fO)) goto L_007c0d02;
L_007c0cf8:; BB(0x007c0cf8);
    /* 007c0cf8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0cf9: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0cf9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0cf9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0cfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0cfd: jne 0x7c0d02 */ if (!fZ) goto L_007c0d02;
L_007c0cff:; BB(0x007c0cff);
    /* 007c0cff: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0d02:; BB(0x007c0d02);
    /* 007c0d02: mov edx, dword ptr [0xa0f6a8] */ r_edx = R32((u32)(0xa0f6a8u));
    /* 007c0d08: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d0a: je 0x7c0d23 */ if (fZ) goto L_007c0d23;
L_007c0d0c:; BB(0x007c0d0c);
    /* 007c0d0c: movsx eax, word ptr [esi + 0x32] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32u));
    /* 007c0d10: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d12: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0d17: jl 0x7c0d23 */ if ((fS!=fO)) goto L_007c0d23;
L_007c0d19:; BB(0x007c0d19);
    /* 007c0d19: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0d1a: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0d1a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0d1a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0d1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d1e: jne 0x7c0d23 */ if (!fZ) goto L_007c0d23;
L_007c0d20:; BB(0x007c0d20);
    /* 007c0d20: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0d23:; BB(0x007c0d23);
    /* 007c0d23: mov edx, dword ptr [0xa0f6ac] */ r_edx = R32((u32)(0xa0f6acu));
    /* 007c0d29: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d2b: je 0x7c0d44 */ if (fZ) goto L_007c0d44;
L_007c0d2d:; BB(0x007c0d2d);
    /* 007c0d2d: movsx eax, word ptr [esi + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x34u));
    /* 007c0d31: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d33: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0d38: jl 0x7c0d44 */ if ((fS!=fO)) goto L_007c0d44;
L_007c0d3a:; BB(0x007c0d3a);
    /* 007c0d3a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0d3b: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0d3b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0d3b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0d3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d3f: jne 0x7c0d44 */ if (!fZ) goto L_007c0d44;
L_007c0d41:; BB(0x007c0d41);
    /* 007c0d41: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0d44:; BB(0x007c0d44);
    /* 007c0d44: mov edx, dword ptr [0xa0f6b0] */ r_edx = R32((u32)(0xa0f6b0u));
    /* 007c0d4a: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d4c: je 0x7c0d65 */ if (fZ) goto L_007c0d65;
L_007c0d4e:; BB(0x007c0d4e);
    /* 007c0d4e: movsx eax, word ptr [esi + 0x36] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x36u));
    /* 007c0d52: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d54: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0d59: jl 0x7c0d65 */ if ((fS!=fO)) goto L_007c0d65;
L_007c0d5b:; BB(0x007c0d5b);
    /* 007c0d5b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0d5c: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0d5c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0d5c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0d5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d60: jne 0x7c0d65 */ if (!fZ) goto L_007c0d65;
L_007c0d62:; BB(0x007c0d62);
    /* 007c0d62: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0d65:; BB(0x007c0d65);
    /* 007c0d65: mov edx, dword ptr [0xa0f6b4] */ r_edx = R32((u32)(0xa0f6b4u));
    /* 007c0d6b: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d6d: je 0x7c0d86 */ if (fZ) goto L_007c0d86;
L_007c0d6f:; BB(0x007c0d6f);
    /* 007c0d6f: movsx eax, word ptr [esi + 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 007c0d73: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d75: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0d7a: jl 0x7c0d86 */ if ((fS!=fO)) goto L_007c0d86;
L_007c0d7c:; BB(0x007c0d7c);
    /* 007c0d7c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0d7d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0d7d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0d7d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0d7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d81: jne 0x7c0d86 */ if (!fZ) goto L_007c0d86;
L_007c0d83:; BB(0x007c0d83);
    /* 007c0d83: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0d86:; BB(0x007c0d86);
    /* 007c0d86: mov edx, dword ptr [0xa0f6b8] */ r_edx = R32((u32)(0xa0f6b8u));
    /* 007c0d8c: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0d8e: je 0x7c0da7 */ if (fZ) goto L_007c0da7;
L_007c0d90:; BB(0x007c0d90);
    /* 007c0d90: movsx eax, word ptr [esi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 007c0d94: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d96: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0d9b: jl 0x7c0da7 */ if ((fS!=fO)) goto L_007c0da7;
L_007c0d9d:; BB(0x007c0d9d);
    /* 007c0d9d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0d9e: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0d9e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0d9e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0da0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0da2: jne 0x7c0da7 */ if (!fZ) goto L_007c0da7;
L_007c0da4:; BB(0x007c0da4);
    /* 007c0da4: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0da7:; BB(0x007c0da7);
    /* 007c0da7: mov edx, dword ptr [0xa0f6bc] */ r_edx = R32((u32)(0xa0f6bcu));
    /* 007c0dad: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0daf: je 0x7c0dc8 */ if (fZ) goto L_007c0dc8;
L_007c0db1:; BB(0x007c0db1);
    /* 007c0db1: movsx eax, word ptr [esi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 007c0db5: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0db7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0dba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0dbc: jl 0x7c0dc8 */ if ((fS!=fO)) goto L_007c0dc8;
L_007c0dbe:; BB(0x007c0dbe);
    /* 007c0dbe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0dbf: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0dbf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0dbf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0dc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0dc3: jne 0x7c0dc8 */ if (!fZ) goto L_007c0dc8;
L_007c0dc5:; BB(0x007c0dc5);
    /* 007c0dc5: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0dc8:; BB(0x007c0dc8);
    /* 007c0dc8: mov edx, dword ptr [0xa0f6c0] */ r_edx = R32((u32)(0xa0f6c0u));
    /* 007c0dce: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0dd0: je 0x7c0de9 */ if (fZ) goto L_007c0de9;
L_007c0dd2:; BB(0x007c0dd2);
    /* 007c0dd2: movsx eax, word ptr [esi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 007c0dd6: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0dd8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0ddb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0ddd: jl 0x7c0de9 */ if ((fS!=fO)) goto L_007c0de9;
L_007c0ddf:; BB(0x007c0ddf);
    /* 007c0ddf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0de0: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0de0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0de0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0de2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0de4: jne 0x7c0de9 */ if (!fZ) goto L_007c0de9;
L_007c0de6:; BB(0x007c0de6);
    /* 007c0de6: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0de9:; BB(0x007c0de9);
    /* 007c0de9: mov edx, dword ptr [0xa0f6c4] */ r_edx = R32((u32)(0xa0f6c4u));
    /* 007c0def: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0df1: je 0x7c0e0a */ if (fZ) goto L_007c0e0a;
L_007c0df3:; BB(0x007c0df3);
    /* 007c0df3: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 007c0df7: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0df9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0dfe: jl 0x7c0e0a */ if ((fS!=fO)) goto L_007c0e0a;
L_007c0e00:; BB(0x007c0e00);
    /* 007c0e00: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0e01: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0e01, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0e01, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0e03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0e05: jne 0x7c0e0a */ if (!fZ) goto L_007c0e0a;
L_007c0e07:; BB(0x007c0e07);
    /* 007c0e07: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0e0a:; BB(0x007c0e0a);
    /* 007c0e0a: mov edx, dword ptr [0xa0f6c8] */ r_edx = R32((u32)(0xa0f6c8u));
    /* 007c0e10: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0e12: je 0x7c0e2b */ if (fZ) goto L_007c0e2b;
L_007c0e14:; BB(0x007c0e14);
    /* 007c0e14: movsx eax, word ptr [esi + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x42u));
    /* 007c0e18: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0e1a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0e1f: jl 0x7c0e2b */ if ((fS!=fO)) goto L_007c0e2b;
L_007c0e21:; BB(0x007c0e21);
    /* 007c0e21: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0e22: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0e22, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0e22, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0e24: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0e26: jne 0x7c0e2b */ if (!fZ) goto L_007c0e2b;
L_007c0e28:; BB(0x007c0e28);
    /* 007c0e28: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0e2b:; BB(0x007c0e2b);
    /* 007c0e2b: mov edx, dword ptr [0xa0f6cc] */ r_edx = R32((u32)(0xa0f6ccu));
    /* 007c0e31: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0e33: je 0x7c0e4c */ if (fZ) goto L_007c0e4c;
L_007c0e35:; BB(0x007c0e35);
    /* 007c0e35: movsx eax, word ptr [esi + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x44u));
    /* 007c0e39: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0e3b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0e40: jl 0x7c0e4c */ if ((fS!=fO)) goto L_007c0e4c;
L_007c0e42:; BB(0x007c0e42);
    /* 007c0e42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0e43: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0e43, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0e43, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0e45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0e47: jne 0x7c0e4c */ if (!fZ) goto L_007c0e4c;
L_007c0e49:; BB(0x007c0e49);
    /* 007c0e49: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0e4c:; BB(0x007c0e4c);
    /* 007c0e4c: mov edx, dword ptr [0xa0f6d0] */ r_edx = R32((u32)(0xa0f6d0u));
    /* 007c0e52: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0e54: je 0x7c0e78 */ if (fZ) goto L_007c0e78;
L_007c0e56:; BB(0x007c0e56);
    /* 007c0e56: movsx eax, word ptr [esi + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x46u));
    /* 007c0e5a: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0e5c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0e5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0e61: jl 0x7c0e78 */ if ((fS!=fO)) goto L_007c0e78;
L_007c0e63:; BB(0x007c0e63);
    /* 007c0e63: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0e64: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0e64, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0e64, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0e66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0e68: jne 0x7c0e78 */ if (!fZ) goto L_007c0e78;
L_007c0e6a:; BB(0x007c0e6a);
    /* 007c0e6a: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0e6d: jmp 0x7c0e78 */ goto L_007c0e78;
L_007c0e6f:; BB(0x007c0e6f);
    /* 007c0e6f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007c0e74: jmp 0x7c0e78 */ goto L_007c0e78;
L_007c0e76:; BB(0x007c0e76);
    /* 007c0e76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c0e78:; BB(0x007c0e78);
    /* 007c0e78: mov eax, ecx */ r_eax = r_ecx;
    /* 007c0e7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0e7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0e7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c0e7e: ret 0xc */ FN_RET(0x007c0c6c); r_esp += 16; return;
}

void f_007c0e84(void) /* sub_7C0E84 */
{
    FN_ENTER(0x007c0e84);
    /* 007c0e84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c0e85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c0e86: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007c0e8a: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 007c0e8f: test eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0e91: je 0x7c0e99 */ if (fZ) goto L_007c0e99;
L_007c0e93:; BB(0x007c0e93);
    /* 007c0e93: or esi, dword ptr [0xa0f644] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f644u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007c0e99:; BB(0x007c0e99);
    /* 007c0e99: mov edx, dword ptr [0xa0f668] */ r_edx = R32((u32)(0xa0f668u));
    /* 007c0e9f: test edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ea1: je 0x7c0ea9 */ if (fZ) goto L_007c0ea9;
L_007c0ea3:; BB(0x007c0ea3);
    /* 007c0ea3: or esi, dword ptr [0xa0f648] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f648u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007c0ea9:; BB(0x007c0ea9);
    /* 007c0ea9: mov ecx, dword ptr [0xa0f66c] */ r_ecx = R32((u32)(0xa0f66cu));
    /* 007c0eaf: test ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0eb1: je 0x7c0eb9 */ if (fZ) goto L_007c0eb9;
L_007c0eb3:; BB(0x007c0eb3);
    /* 007c0eb3: or esi, dword ptr [0xa0f64c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f64cu)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007c0eb9:; BB(0x007c0eb9);
    /* 007c0eb9: mov ebp, dword ptr [0xa0f670] */ r_ebp = R32((u32)(0xa0f670u));
    /* 007c0ebf: test ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ec1: je 0x7c0ec9 */ if (fZ) goto L_007c0ec9;
L_007c0ec3:; BB(0x007c0ec3);
    /* 007c0ec3: or esi, dword ptr [0xa0f650] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f650u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007c0ec9:; BB(0x007c0ec9);
    /* 007c0ec9: test eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ecb: je 0x7c0ed3 */ if (fZ) goto L_007c0ed3;
L_007c0ecd:; BB(0x007c0ecd);
    /* 007c0ecd: or esi, dword ptr [0xa0f654] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f654u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007c0ed3:; BB(0x007c0ed3);
    /* 007c0ed3: test edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ed5: je 0x7c0edd */ if (fZ) goto L_007c0edd;
L_007c0ed7:; BB(0x007c0ed7);
    /* 007c0ed7: or esi, dword ptr [0xa0f658] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f658u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007c0edd:; BB(0x007c0edd);
    /* 007c0edd: test ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0edf: je 0x7c0ee7 */ if (fZ) goto L_007c0ee7;
L_007c0ee1:; BB(0x007c0ee1);
    /* 007c0ee1: or esi, dword ptr [0xa0f65c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f65cu)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007c0ee7:; BB(0x007c0ee7);
    /* 007c0ee7: test ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0ee9: je 0x7c0ef1 */ if (fZ) goto L_007c0ef1;
L_007c0eeb:; BB(0x007c0eeb);
    /* 007c0eeb: or esi, dword ptr [0xa0f660] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f660u)); u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c0ef1:; BB(0x007c0ef1);
    /* 007c0ef1: mov eax, esi */ r_eax = r_esi;
    /* 007c0ef3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c0ef4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0ef5: ret 4 */ FN_RET(0x007c0e84); r_esp += 8; return;
}

void f_007c0ef8(void) /* sub_7C0EF8 */
{
    FN_ENTER(0x007c0ef8);
    /* 007c0ef8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c0ef9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c0efa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c0efb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c0efc: mov esi, ecx */ r_esi = r_ecx;
    /* 007c0efe: mov ecx, esi */ r_ecx = r_esi;
    /* 007c0f00: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007c0f04: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007c0f08: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c0f0c: call 0x7c0c14 */ r_esp -= 4; W32(r_esp, 0x7c0f11u); f_007c0c14();
    /* 007c0f11: mov edi, eax */ r_edi = r_eax;
    /* 007c0f13: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f15: je 0x7c10f2 */ if (fZ) goto L_007c10f2;
L_007c0f1b:; BB(0x007c0f1b);
    /* 007c0f1b: mov edx, dword ptr [0xa0f69c] */ r_edx = R32((u32)(0xa0f69cu));
    /* 007c0f21: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f23: mov ecx, 0 */ r_ecx = 0x0u;
    /* 007c0f28: je 0x7c0f43 */ if (fZ) goto L_007c0f43;
L_007c0f2a:; BB(0x007c0f2a);
    /* 007c0f2a: movsx eax, word ptr [esi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 007c0f2e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f30: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0f35: jl 0x7c0f43 */ if ((fS!=fO)) goto L_007c0f43;
L_007c0f37:; BB(0x007c0f37);
    /* 007c0f37: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0f38: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0f38, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0f38, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0f3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f3c: jne 0x7c0f43 */ if (!fZ) goto L_007c0f43;
L_007c0f3e:; BB(0x007c0f3e);
    /* 007c0f3e: mov ecx, 1 */ r_ecx = 0x1u;
L_007c0f43:; BB(0x007c0f43);
    /* 007c0f43: mov edx, dword ptr [0xa0f6a0] */ r_edx = R32((u32)(0xa0f6a0u));
    /* 007c0f49: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f4b: je 0x7c0f64 */ if (fZ) goto L_007c0f64;
L_007c0f4d:; BB(0x007c0f4d);
    /* 007c0f4d: movsx eax, word ptr [esi + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2eu));
    /* 007c0f51: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f53: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0f58: jl 0x7c0f64 */ if ((fS!=fO)) goto L_007c0f64;
L_007c0f5a:; BB(0x007c0f5a);
    /* 007c0f5a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0f5b: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0f5b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0f5b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0f5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f5f: jne 0x7c0f64 */ if (!fZ) goto L_007c0f64;
L_007c0f61:; BB(0x007c0f61);
    /* 007c0f61: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0f64:; BB(0x007c0f64);
    /* 007c0f64: mov edx, dword ptr [0xa0f6a4] */ r_edx = R32((u32)(0xa0f6a4u));
    /* 007c0f6a: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f6c: je 0x7c0f85 */ if (fZ) goto L_007c0f85;
L_007c0f6e:; BB(0x007c0f6e);
    /* 007c0f6e: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 007c0f72: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f74: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0f79: jl 0x7c0f85 */ if ((fS!=fO)) goto L_007c0f85;
L_007c0f7b:; BB(0x007c0f7b);
    /* 007c0f7b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0f7c: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0f7c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0f7c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0f7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f80: jne 0x7c0f85 */ if (!fZ) goto L_007c0f85;
L_007c0f82:; BB(0x007c0f82);
    /* 007c0f82: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0f85:; BB(0x007c0f85);
    /* 007c0f85: mov edx, dword ptr [0xa0f6a8] */ r_edx = R32((u32)(0xa0f6a8u));
    /* 007c0f8b: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0f8d: je 0x7c0fa6 */ if (fZ) goto L_007c0fa6;
L_007c0f8f:; BB(0x007c0f8f);
    /* 007c0f8f: movsx eax, word ptr [esi + 0x32] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32u));
    /* 007c0f93: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f95: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0f98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0f9a: jl 0x7c0fa6 */ if ((fS!=fO)) goto L_007c0fa6;
L_007c0f9c:; BB(0x007c0f9c);
    /* 007c0f9c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0f9d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0f9d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0f9d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0f9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0fa1: jne 0x7c0fa6 */ if (!fZ) goto L_007c0fa6;
L_007c0fa3:; BB(0x007c0fa3);
    /* 007c0fa3: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0fa6:; BB(0x007c0fa6);
    /* 007c0fa6: mov edx, dword ptr [0xa0f6ac] */ r_edx = R32((u32)(0xa0f6acu));
    /* 007c0fac: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0fae: je 0x7c0fc7 */ if (fZ) goto L_007c0fc7;
L_007c0fb0:; BB(0x007c0fb0);
    /* 007c0fb0: movsx eax, word ptr [esi + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x34u));
    /* 007c0fb4: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0fb6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0fb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0fbb: jl 0x7c0fc7 */ if ((fS!=fO)) goto L_007c0fc7;
L_007c0fbd:; BB(0x007c0fbd);
    /* 007c0fbd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0fbe: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0fbe, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0fbe, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0fc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0fc2: jne 0x7c0fc7 */ if (!fZ) goto L_007c0fc7;
L_007c0fc4:; BB(0x007c0fc4);
    /* 007c0fc4: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0fc7:; BB(0x007c0fc7);
    /* 007c0fc7: mov edx, dword ptr [0xa0f6b0] */ r_edx = R32((u32)(0xa0f6b0u));
    /* 007c0fcd: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0fcf: je 0x7c0fe8 */ if (fZ) goto L_007c0fe8;
L_007c0fd1:; BB(0x007c0fd1);
    /* 007c0fd1: movsx eax, word ptr [esi + 0x36] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x36u));
    /* 007c0fd5: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0fd7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0fda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0fdc: jl 0x7c0fe8 */ if ((fS!=fO)) goto L_007c0fe8;
L_007c0fde:; BB(0x007c0fde);
    /* 007c0fde: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c0fdf: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c0fdf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c0fdf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c0fe1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0fe3: jne 0x7c0fe8 */ if (!fZ) goto L_007c0fe8;
L_007c0fe5:; BB(0x007c0fe5);
    /* 007c0fe5: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c0fe8:; BB(0x007c0fe8);
    /* 007c0fe8: mov edx, dword ptr [0xa0f6b4] */ r_edx = R32((u32)(0xa0f6b4u));
    /* 007c0fee: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c0ff0: je 0x7c1009 */ if (fZ) goto L_007c1009;
L_007c0ff2:; BB(0x007c0ff2);
    /* 007c0ff2: movsx eax, word ptr [esi + 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 007c0ff6: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c0ff8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c0ffb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0ffd: jl 0x7c1009 */ if ((fS!=fO)) goto L_007c1009;
L_007c0fff:; BB(0x007c0fff);
    /* 007c0fff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c1000: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c1000, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c1000, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c1002: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1004: jne 0x7c1009 */ if (!fZ) goto L_007c1009;
L_007c1006:; BB(0x007c1006);
    /* 007c1006: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c1009:; BB(0x007c1009);
    /* 007c1009: mov edx, dword ptr [0xa0f6b8] */ r_edx = R32((u32)(0xa0f6b8u));
    /* 007c100f: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1011: je 0x7c102a */ if (fZ) goto L_007c102a;
L_007c1013:; BB(0x007c1013);
    /* 007c1013: movsx eax, word ptr [esi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 007c1017: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c1019: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c101c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c101e: jl 0x7c102a */ if ((fS!=fO)) goto L_007c102a;
L_007c1020:; BB(0x007c1020);
    /* 007c1020: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c1021: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c1021, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c1021, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c1023: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1025: jne 0x7c102a */ if (!fZ) goto L_007c102a;
L_007c1027:; BB(0x007c1027);
    /* 007c1027: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c102a:; BB(0x007c102a);
    /* 007c102a: mov edx, dword ptr [0xa0f6bc] */ r_edx = R32((u32)(0xa0f6bcu));
    /* 007c1030: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1032: je 0x7c104b */ if (fZ) goto L_007c104b;
L_007c1034:; BB(0x007c1034);
    /* 007c1034: movsx eax, word ptr [esi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 007c1038: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c103a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c103d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c103f: jl 0x7c104b */ if ((fS!=fO)) goto L_007c104b;
L_007c1041:; BB(0x007c1041);
    /* 007c1041: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c1042: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c1042, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c1042, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c1044: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1046: jne 0x7c104b */ if (!fZ) goto L_007c104b;
L_007c1048:; BB(0x007c1048);
    /* 007c1048: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c104b:; BB(0x007c104b);
    /* 007c104b: mov edx, dword ptr [0xa0f6c0] */ r_edx = R32((u32)(0xa0f6c0u));
    /* 007c1051: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1053: je 0x7c106c */ if (fZ) goto L_007c106c;
L_007c1055:; BB(0x007c1055);
    /* 007c1055: movsx eax, word ptr [esi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 007c1059: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c105b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c105e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c1060: jl 0x7c106c */ if ((fS!=fO)) goto L_007c106c;
L_007c1062:; BB(0x007c1062);
    /* 007c1062: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c1063: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c1063, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c1063, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c1065: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1067: jne 0x7c106c */ if (!fZ) goto L_007c106c;
L_007c1069:; BB(0x007c1069);
    /* 007c1069: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c106c:; BB(0x007c106c);
    /* 007c106c: mov edx, dword ptr [0xa0f6c4] */ r_edx = R32((u32)(0xa0f6c4u));
    /* 007c1072: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1074: je 0x7c108d */ if (fZ) goto L_007c108d;
L_007c1076:; BB(0x007c1076);
    /* 007c1076: movsx eax, word ptr [esi + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 007c107a: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c107c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c107f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c1081: jl 0x7c108d */ if ((fS!=fO)) goto L_007c108d;
L_007c1083:; BB(0x007c1083);
    /* 007c1083: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c1084: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c1084, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c1084, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c1086: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1088: jne 0x7c108d */ if (!fZ) goto L_007c108d;
L_007c108a:; BB(0x007c108a);
    /* 007c108a: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c108d:; BB(0x007c108d);
    /* 007c108d: mov edx, dword ptr [0xa0f6c8] */ r_edx = R32((u32)(0xa0f6c8u));
    /* 007c1093: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1095: je 0x7c10ae */ if (fZ) goto L_007c10ae;
L_007c1097:; BB(0x007c1097);
    /* 007c1097: movsx eax, word ptr [esi + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x42u));
    /* 007c109b: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c109d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c10a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c10a2: jl 0x7c10ae */ if ((fS!=fO)) goto L_007c10ae;
L_007c10a4:; BB(0x007c10a4);
    /* 007c10a4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c10a5: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c10a5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c10a5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c10a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c10a9: jne 0x7c10ae */ if (!fZ) goto L_007c10ae;
L_007c10ab:; BB(0x007c10ab);
    /* 007c10ab: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c10ae:; BB(0x007c10ae);
    /* 007c10ae: mov edx, dword ptr [0xa0f6cc] */ r_edx = R32((u32)(0xa0f6ccu));
    /* 007c10b4: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c10b6: je 0x7c10cf */ if (fZ) goto L_007c10cf;
L_007c10b8:; BB(0x007c10b8);
    /* 007c10b8: movsx eax, word ptr [esi + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x44u));
    /* 007c10bc: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c10be: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c10c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007c10c3: jl 0x7c10cf */ if ((fS!=fO)) goto L_007c10cf;
L_007c10c5:; BB(0x007c10c5);
    /* 007c10c5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c10c6: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c10c6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c10c6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c10c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c10ca: jne 0x7c10cf */ if (!fZ) goto L_007c10cf;
L_007c10cc:; BB(0x007c10cc);
    /* 007c10cc: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_007c10cf:; BB(0x007c10cf);
    /* 007c10cf: mov edx, dword ptr [0xa0f6d0] */ r_edx = R32((u32)(0xa0f6d0u));
    /* 007c10d5: test dword ptr [edx], edi */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c10d7: je 0x7c10f4 */ if (fZ) goto L_007c10f4;
L_007c10d9:; BB(0x007c10d9);
    /* 007c10d9: movsx eax, word ptr [esi + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x46u));
    /* 007c10dd: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c10df: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c10e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c10e4: jl 0x7c10f4 */ if ((fS!=fO)) goto L_007c10f4;
L_007c10e6:; BB(0x007c10e6);
    /* 007c10e6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007c10e7: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x007c10e7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007c10e7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007c10e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c10eb: jne 0x7c10f4 */ if (!fZ) goto L_007c10f4;
L_007c10ed:; BB(0x007c10ed);
    /* 007c10ed: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c10f0: jmp 0x7c10f4 */ goto L_007c10f4;
L_007c10f2:; BB(0x007c10f2);
    /* 007c10f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c10f4:; BB(0x007c10f4);
    /* 007c10f4: mov eax, ecx */ r_eax = r_ecx;
    /* 007c10f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c10f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c10f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c10f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c10fa: ret 0xc */ FN_RET(0x007c0ef8); r_esp += 16; return;
}

