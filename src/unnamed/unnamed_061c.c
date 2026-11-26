#include "protos.h"

void f_0061c008(void) /* sub_61C008 */
{
    FN_ENTER(0x0061c008);
    /* 0061c008: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c009: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061c00b: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061c011: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061c013: jne 0x61c041 */ if (!fZ) goto L_0061c041;
L_0061c015:; BB(0x0061c015);
    /* 0061c015: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c01a: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0061c024: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061c027: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0061c02a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c02c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c02e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061c030: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61c035u); f_007b52ec();
    /* 0061c035: mov dword ptr [ebx + 0xe4], 0 */ W32((u32)(r_ebx+0xe4u), 0x0u);
L_0061c03f:; BB(0x0061c03f);
    /* 0061c03f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c040: ret  */ FN_RET(0x0061c008); r_esp += 4; return;
L_0061c041:; BB(0x0061c041);
    /* 0061c041: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c046: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c04b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061c04d: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0061c050: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061c052: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61c057u); f_006134c8();
    /* 0061c057: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c05a: je 0x61c03f */ if (fZ) goto L_0061c03f;
L_0061c05c:; BB(0x0061c05c);
    /* 0061c05c: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0061c066: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c068: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061c06a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c06c: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61c071u); f_007b52ec();
    /* 0061c071: mov dword ptr [ebx + 0xe4], 0 */ W32((u32)(r_ebx+0xe4u), 0x0u);
    /* 0061c07b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x61c080u); f_00807ac0();
    /* 0061c080: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c083: ja 0x61c03f */ if ((!fC&&!fZ)) goto L_0061c03f;
L_0061c085:; BB(0x0061c085);
    /* 0061c085: mov eax, dword ptr [eax*4 + 0x930b80] */ r_eax = R32((u32)(r_eax*4+0x930b80u));
    /* 0061c08c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
}

void f_0061c03f(void)
{
    FN_ENTER(0x0061c03f);
    /* 0061c03f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c040: ret  */ FN_RET(0x0061c03f); r_esp += 4; return;
}

void f_0061c08e(void)
{
    FN_ENTER(0x0061c08e);
    /* 0061c08e: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061c091: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c095: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c096: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c09b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c0a0u); f_00814298();
    /* 0061c0a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c0a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c0a4: ret  */ FN_RET(0x0061c08e); r_esp += 4; return;
}

void f_0061c0a5(void)
{
    FN_ENTER(0x0061c0a5);
    /* 0061c0a5: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061c0a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c0aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0ad: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0b2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c0b7u); f_00814298();
    /* 0061c0b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c0bb: ret  */ FN_RET(0x0061c0a5); r_esp += 4; return;
}

void f_0061c0bc(void)
{
    FN_ENTER(0x0061c0bc);
    /* 0061c0bc: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061c0bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c0c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0c4: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0c9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c0ceu); f_00814298();
    /* 0061c0ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c0d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c0d2: ret  */ FN_RET(0x0061c0bc); r_esp += 4; return;
}

void f_0061c0d4(void) /* sub_61C0D4 */
{
    FN_ENTER(0x0061c0d4);
    /* 0061c0d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0d6: mov edi, ecx */ r_edi = r_ecx;
    /* 0061c0d8: mov eax, dword ptr [edi + 0xcc] */ r_eax = R32((u32)(r_edi+0xccu));
    /* 0061c0de: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c0e1: je 0x61c14c */ if (fZ) goto L_0061c14c;
L_0061c0e3:; BB(0x0061c0e3);
    /* 0061c0e3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c0e6: jne 0x61c11a */ if (!fZ) goto L_0061c11a;
L_0061c0e8:; BB(0x0061c0e8);
    /* 0061c0e8: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 0061c0ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0f0: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c0f5u); f_00816eec();
    /* 0061c0f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c0f6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c0f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c0fc: je 0x61c165 */ if (fZ) goto L_0061c165;
L_0061c0fe:; BB(0x0061c0fe);
    /* 0061c0fe: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c104: mov dword ptr [edi + 0xdc], 0 */ W32((u32)(r_edi+0xdcu), 0x0u);
    /* 0061c10e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c111: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061c117: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c118: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c119: ret  */ FN_RET(0x0061c0d4); r_esp += 4; return;
L_0061c11a:; BB(0x0061c11a);
    /* 0061c11a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c11d: jne 0x61c13a */ if (!fZ) goto L_0061c13a;
L_0061c11f:; BB(0x0061c11f);
    /* 0061c11f: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 0061c126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c127: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c12cu); f_00816eec();
    /* 0061c12c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c12d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c130: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c133: jne 0x61c162 */ if (!fZ) goto L_0061c162;
L_0061c135:; BB(0x0061c135);
    /* 0061c135: jmp 0x61c1d2 */ goto L_0061c1d2;
L_0061c13a:; BB(0x0061c13a);
    /* 0061c13a: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c140: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c143: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061c149: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c14a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c14b: ret  */ FN_RET(0x0061c0d4); r_esp += 4; return;
L_0061c14c:; BB(0x0061c14c);
    /* 0061c14c: mov ecx, edi */ r_ecx = r_edi;
    /* 0061c14e: call 0x61c2dc */ r_esp -= 4; W32(r_esp, 0x61c153u); f_0061c2dc();
    /* 0061c153: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c159: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c15c: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
L_0061c162:; BB(0x0061c162);
    /* 0061c162: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c163: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c164: ret  */ FN_RET(0x0061c0d4); r_esp += 4; return;
L_0061c165:; BB(0x0061c165);
    /* 0061c165: movzx eax, word ptr [edi + 0xd4] */ r_eax = (u32)R16((u32)(r_edi+0xd4u));
    /* 0061c16c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c16d: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c172u); f_00816eec();
    /* 0061c172: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c173: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c176: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c179: jne 0x61c0fe */ if (!fZ) goto L_0061c0fe;
L_0061c17b:; BB(0x0061c17b);
    /* 0061c17b: movzx eax, word ptr [edi + 0xd6] */ r_eax = (u32)R16((u32)(r_edi+0xd6u));
    /* 0061c182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c183: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c188u); f_00816eec();
    /* 0061c188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c189: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c18c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c18f: jne 0x61c0fe */ if (!fZ) goto L_0061c0fe;
L_0061c195:; BB(0x0061c195);
    /* 0061c195: movzx eax, word ptr [edi + 0xd8] */ r_eax = (u32)R16((u32)(r_edi+0xd8u));
    /* 0061c19c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c19d: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c1a2u); f_00816eec();
    /* 0061c1a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c1a3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c1a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c1a9: jne 0x61c0fe */ if (!fZ) goto L_0061c0fe;
L_0061c1af:; BB(0x0061c1af);
    /* 0061c1af: mov ecx, edi */ r_ecx = r_edi;
    /* 0061c1b1: call 0x61c2dc */ r_esp -= 4; W32(r_esp, 0x61c1b6u); f_0061c2dc();
    /* 0061c1b6: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c1bc: mov dword ptr [edi + 0xdc], 1 */ W32((u32)(r_edi+0xdcu), 0x1u);
    /* 0061c1c6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c1c9: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061c1cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c1d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c1d1: ret  */ FN_RET(0x0061c0d4); r_esp += 4; return;
L_0061c1d2:; BB(0x0061c1d2);
    /* 0061c1d2: movzx eax, word ptr [edi + 0xd4] */ r_eax = (u32)R16((u32)(r_edi+0xd4u));
    /* 0061c1d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1da: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c1dfu); f_00816eec();
    /* 0061c1df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c1e0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c1e3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c1e6: jne 0x61c162 */ if (!fZ) goto L_0061c162;
L_0061c1ec:; BB(0x0061c1ec);
    /* 0061c1ec: movzx eax, word ptr [edi + 0xd6] */ r_eax = (u32)R16((u32)(r_edi+0xd6u));
    /* 0061c1f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1f4: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c1f9u); f_00816eec();
    /* 0061c1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c1fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c1fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c200: jne 0x61c162 */ if (!fZ) goto L_0061c162;
L_0061c206:; BB(0x0061c206);
    /* 0061c206: movzx eax, word ptr [edi + 0xd8] */ r_eax = (u32)R16((u32)(r_edi+0xd8u));
    /* 0061c20d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c20e: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c213u); f_00816eec();
    /* 0061c213: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c214: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c217: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c21a: jne 0x61c162 */ if (!fZ) goto L_0061c162;
L_0061c220:; BB(0x0061c220);
    /* 0061c220: mov ecx, edi */ r_ecx = r_edi;
    /* 0061c222: call 0x61c2dc */ r_esp -= 4; W32(r_esp, 0x61c227u); f_0061c2dc();
    /* 0061c227: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c22d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061c230: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061c236: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0061c23c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c23e: je 0x61c162 */ if (fZ) goto L_0061c162;
L_0061c244:; BB(0x0061c244);
    /* 0061c244: je 0x61c2d8 */ if (fZ) goto L_0061c2d8;
L_0061c24a:; BB(0x0061c24a);
    /* 0061c24a: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061c24e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061c250: jl 0x61c279 */ if ((fS!=fO)) goto L_0061c279;
L_0061c252:; BB(0x0061c252);
    /* 0061c252: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c258: jg 0x61c279 */ if ((!fZ&&fS==fO)) goto L_0061c279;
L_0061c25a:; BB(0x0061c25a);
    /* 0061c25a: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0061c260: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 0061c264: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061c268: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 0061c26d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0061c272: mov eax, 1 */ r_eax = 0x1u;
    /* 0061c277: jmp 0x61c27b */ goto L_0061c27b;
L_0061c279:; BB(0x0061c279);
    /* 0061c279: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061c27b:; BB(0x0061c27b);
    /* 0061c27b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c27d: je 0x61c162 */ if (fZ) goto L_0061c162;
L_0061c283:; BB(0x0061c283);
    /* 0061c283: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0061c286: mov eax, 1 */ r_eax = 0x1u;
    /* 0061c28b: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061c28f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c290: mov ecx, edi */ r_ecx = r_edi;
    /* 0061c292: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x61c297u); f_007b5038();
    /* 0061c297: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0061c29d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c29f: je 0x61c162 */ if (fZ) goto L_0061c162;
L_0061c2a5:; BB(0x0061c2a5);
    /* 0061c2a5: movsx edi, word ptr [eax + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061c2a9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c2ab: jl 0x61c162 */ if ((fS!=fO)) goto L_0061c162;
L_0061c2b1:; BB(0x0061c2b1);
    /* 0061c2b1: cmp edi, 0xb9f */ {  u32 a = r_edi; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c2b7: jg 0x61c162 */ if ((!fZ&&fS==fO)) goto L_0061c162;
L_0061c2bd:; BB(0x0061c2bd);
    /* 0061c2bd: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0061c2c3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0061c2c7: mov word ptr [ecx + edi*4], ax */ W16((u32)(r_ecx+r_edi*4), (u16)r_eax);
    /* 0061c2cb: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 0061c2d0: mov word ptr [ecx + edi*4 + 2], dx */ W16((u32)(r_ecx+r_edi*4+0x2u), (u16)r_edx);
    /* 0061c2d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c2d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c2d7: ret  */ FN_RET(0x0061c0d4); r_esp += 4; return;
L_0061c2d8:; BB(0x0061c2d8);
    /* 0061c2d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c2da: jmp 0x61c27b */ goto L_0061c27b;
}

void f_0061c2dc(void) /* sub_61C2DC */
{
    FN_ENTER(0x0061c2dc);
    /* 0061c2dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c2dd: mov edi, ecx */ r_edi = r_ecx;
    /* 0061c2df: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c2e5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c2e7: je 0x61c2eb */ if (fZ) goto L_0061c2eb;
L_0061c2e9:; BB(0x0061c2e9);
    /* 0061c2e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c2ea: ret  */ FN_RET(0x0061c2dc); r_esp += 4; return;
L_0061c2eb:; BB(0x0061c2eb);
    /* 0061c2eb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x61c2f0u); f_00807ac0();
    /* 0061c2f0: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c2f3: ja 0x61c36f */ if ((!fC&&!fZ)) goto L_0061c36f;
L_0061c2f5:; BB(0x0061c2f5);
    /* 0061c2f5: mov eax, dword ptr [eax*4 + 0x930bc0] */ r_eax = R32((u32)(r_eax*4+0x930bc0u));
    /* 0061c2fc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0061c36f:; BB(0x0061c36f);
    /* 0061c36f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c370: ret  */ FN_RET(0x0061c2dc); r_esp += 4; return;
}

void f_0061c2fe(void)
{
    FN_ENTER(0x0061c2fe);
    /* 0061c2fe: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061c301: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c305: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c306: push 0x478 */ { u32 v = 0x478u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c30b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c310u); f_00814298();
    /* 0061c310: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c313: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c314: ret  */ FN_RET(0x0061c2fe); r_esp += 4; return;
}

void f_0061c315(void)
{
    FN_ENTER(0x0061c315);
    /* 0061c315: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061c318: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c31a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c31b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c31c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c31d: push 0x459 */ { u32 v = 0x459u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c322: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c327u); f_00814298();
    /* 0061c327: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c32a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c32b: ret  */ FN_RET(0x0061c315); r_esp += 4; return;
}

void f_0061c32c(void)
{
    FN_ENTER(0x0061c32c);
    /* 0061c32c: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061c32f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c332: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c333: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c334: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c339: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c33eu); f_00814298();
    /* 0061c33e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c341: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c342: ret  */ FN_RET(0x0061c32c); r_esp += 4; return;
}

void f_0061c343(void)
{
    FN_ENTER(0x0061c343);
    /* 0061c343: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061c346: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c34a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c34b: push 0x428 */ { u32 v = 0x428u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c350: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c355u); f_00814298();
    /* 0061c355: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c358: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c359: ret  */ FN_RET(0x0061c343); r_esp += 4; return;
}

void f_0061c35a(void)
{
    FN_ENTER(0x0061c35a);
    /* 0061c35a: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061c35d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c35f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c361: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c362: push 0x41b */ { u32 v = 0x41bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c367: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c36cu); f_00814298();
    /* 0061c36c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c36f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c370: ret  */ FN_RET(0x0061c35a); r_esp += 4; return;
}

void f_0061c36f(void)
{
    FN_ENTER(0x0061c36f);
    /* 0061c36f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c370: ret  */ FN_RET(0x0061c36f); r_esp += 4; return;
}

void f_0061c374(void) /* sub_61C374 */
{
    FN_ENTER(0x0061c374);
    /* 0061c374: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c375: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c376: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c379: mov edi, ecx */ r_edi = r_ecx;
    /* 0061c37b: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c381: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c387: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0061c389: mov ecx, edi */ r_ecx = r_edi;
    /* 0061c38b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61c38eu); call_ind(t); }
    /* 0061c38e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c390: je 0x61c620 */ if (fZ) goto L_0061c620;
L_0061c396:; BB(0x0061c396);
    /* 0061c396: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c39b: mov ecx, edi */ r_ecx = r_edi;
    /* 0061c39d: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61c3a2u); f_00613244();
    /* 0061c3a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c3a4: je 0x61c620 */ if (fZ) goto L_0061c620;
L_0061c3aa:; BB(0x0061c3aa);
    /* 0061c3aa: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 0061c3b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c3b3: je 0x61c5e8 */ if (fZ) goto L_0061c5e8;
L_0061c3b9:; BB(0x0061c3b9);
    /* 0061c3b9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c3bc: je 0x61c5e8 */ if (fZ) goto L_0061c5e8;
L_0061c3c2:; BB(0x0061c3c2);
    /* 0061c3c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c3c5: jne 0x61c40f */ if (!fZ) goto L_0061c40f;
L_0061c3c7:; BB(0x0061c3c7);
    /* 0061c3c7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61c3ccu); f_0082d7b0();
    /* 0061c3cc: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0061c3cf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61c3d4u); f_0082d838();
    /* 0061c3d4: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0061c3d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c3d9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61c3deu); f_0082d8bc();
    /* 0061c3de: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0061c3e1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61c3e6u); f_00829cc8();
    /* 0061c3e6: fld dword ptr [0x930c10] */ FPUSH(R_F32((u32)(0x930c10u)));
    /* 0061c3ec: fadd dword ptr [edi + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xb4u));
    /* 0061c3f2: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0061c3f5: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0061c3fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c3fc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0061c3ff: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61c404u); f_0083bd00();
    /* 0061c404: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61c409u); f_0082da80();
    /* 0061c409: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c40c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061c40d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c40e: ret  */ FN_RET(0x0061c374); r_esp += 4; return;
L_0061c40f:; BB(0x0061c40f);
    /* 0061c40f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c411: jne 0x61c620 */ if (!fZ) goto L_0061c620;
L_0061c417:; BB(0x0061c417);
    /* 0061c417: mov esi, dword ptr [edi + 0x34] */ r_esi = R32((u32)(r_edi+0x34u));
    /* 0061c41a: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0061c41d: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0061c420: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0061c423: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0061c426: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0061c429: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0061c42d: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0061c430: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0061c434: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0061c437: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0061c43b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0061c43f: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0061c442: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0061c445: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0061c449: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0061c44d: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061c450: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0061c454: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 0061c45b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c45c: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c461u); f_00816eec();
    /* 0061c461: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c462: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c467: jne 0x61c473 */ if (!fZ) goto L_0061c473;
L_0061c469:; BB(0x0061c469);
    /* 0061c469: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c46f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061c471: je 0x61c47d */ if (fZ) goto L_0061c47d;
L_0061c473:; BB(0x0061c473);
    /* 0061c473: mov dword ptr [esp + 0x20], 1 */ W32((u32)(r_esp+0x20u), 0x1u);
    /* 0061c47b: jmp 0x61c485 */ goto L_0061c485;
L_0061c47d:; BB(0x0061c47d);
    /* 0061c47d: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
L_0061c485:; BB(0x0061c485);
    /* 0061c485: movzx eax, word ptr [edi + 0xd4] */ r_eax = (u32)R16((u32)(r_edi+0xd4u));
    /* 0061c48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c48d: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c492u); f_00816eec();
    /* 0061c492: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c493: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c498: jne 0x61c4a4 */ if (!fZ) goto L_0061c4a4;
L_0061c49a:; BB(0x0061c49a);
    /* 0061c49a: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c4a0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061c4a2: je 0x61c4ae */ if (fZ) goto L_0061c4ae;
L_0061c4a4:; BB(0x0061c4a4);
    /* 0061c4a4: mov dword ptr [esp + 0x24], 1 */ W32((u32)(r_esp+0x24u), 0x1u);
    /* 0061c4ac: jmp 0x61c4b6 */ goto L_0061c4b6;
L_0061c4ae:; BB(0x0061c4ae);
    /* 0061c4ae: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
L_0061c4b6:; BB(0x0061c4b6);
    /* 0061c4b6: movzx eax, word ptr [edi + 0xd6] */ r_eax = (u32)R16((u32)(r_edi+0xd6u));
    /* 0061c4bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c4be: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c4c3u); f_00816eec();
    /* 0061c4c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c4c4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c4c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c4c9: jne 0x61c4d5 */ if (!fZ) goto L_0061c4d5;
L_0061c4cb:; BB(0x0061c4cb);
    /* 0061c4cb: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c4d1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061c4d3: je 0x61c4df */ if (fZ) goto L_0061c4df;
L_0061c4d5:; BB(0x0061c4d5);
    /* 0061c4d5: mov dword ptr [esp + 0x28], 1 */ W32((u32)(r_esp+0x28u), 0x1u);
    /* 0061c4dd: jmp 0x61c4e7 */ goto L_0061c4e7;
L_0061c4df:; BB(0x0061c4df);
    /* 0061c4df: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
L_0061c4e7:; BB(0x0061c4e7);
    /* 0061c4e7: movzx eax, word ptr [edi + 0xd8] */ r_eax = (u32)R16((u32)(r_edi+0xd8u));
    /* 0061c4ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c4ef: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61c4f4u); f_00816eec();
    /* 0061c4f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c4f5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061c4f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c4fa: jne 0x61c506 */ if (!fZ) goto L_0061c506;
L_0061c4fc:; BB(0x0061c4fc);
    /* 0061c4fc: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061c502: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061c504: je 0x61c510 */ if (fZ) goto L_0061c510;
L_0061c506:; BB(0x0061c506);
    /* 0061c506: mov dword ptr [esp + 0x2c], 1 */ W32((u32)(r_esp+0x2cu), 0x1u);
    /* 0061c50e: jmp 0x61c518 */ goto L_0061c518;
L_0061c510:; BB(0x0061c510);
    /* 0061c510: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
L_0061c518:; BB(0x0061c518);
    /* 0061c518: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61c51du); f_0082d7b0();
    /* 0061c51d: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c522: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061c525: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61c52au); f_00829cc8();
    /* 0061c52a: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0061c52d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61c532u); f_0082d838();
    /* 0061c532: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0061c535: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61c53au); f_0082d838();
    /* 0061c53a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0061c53d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c53f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61c544u); f_0082d8bc();
    /* 0061c544: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c547: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61c54cu); f_008321d8();
    /* 0061c54c: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0061c54f: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c552: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61c557u); f_008321d8();
    /* 0061c557: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c55a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61c55fu); f_0082dbac();
    /* 0061c55f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0061c561:; BB(0x0061c561);
    /* 0061c561: mov eax, dword ptr [esp + edi*4 + 0x20] */ r_eax = R32((u32)(r_esp+r_edi*4+0x20u));
    /* 0061c565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c567: je 0x61c577 */ if (fZ) goto L_0061c577;
L_0061c569:; BB(0x0061c569);
    /* 0061c569: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c56e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061c570: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61c575u); f_00829cc8();
    /* 0061c575: jmp 0x61c584 */ goto L_0061c584;
L_0061c577:; BB(0x0061c577);
    /* 0061c577: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c57c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061c57f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61c584u); f_00829cc8();
L_0061c584:; BB(0x0061c584);
    /* 0061c584: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61c589u); f_0082d7b0();
    /* 0061c589: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0061c58c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0061c58f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c591: mov ecx, dword ptr [esp + eax] */ r_ecx = R32((u32)(r_esp+r_eax));
    /* 0061c594: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c597: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61c59cu); f_0082d838();
    /* 0061c59c: mov eax, dword ptr [esp + edi*8] */ r_eax = R32((u32)(r_esp+r_edi*8));
    /* 0061c59f: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c5a2: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61c5a7u); f_008321d8();
    /* 0061c5a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c5a8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61c5adu); f_0082da80();
    /* 0061c5ad: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61c5b2u); f_0082d7b0();
    /* 0061c5b2: mov ecx, dword ptr [esp + esi*4 + 4] */ r_ecx = R32((u32)(r_esp+r_esi*4+0x4u));
    /* 0061c5b6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c5b9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61c5beu); f_0082d838();
    /* 0061c5be: mov eax, dword ptr [esp + esi*4 + 4] */ r_eax = R32((u32)(r_esp+r_esi*4+0x4u));
    /* 0061c5c2: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c5c5: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61c5cau); f_008321d8();
    /* 0061c5ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c5cb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61c5d0u); f_0082da80();
    /* 0061c5d0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061c5d3: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c5d6: jl 0x61c561 */ if ((fS!=fO)) goto L_0061c561;
L_0061c5d8:; BB(0x0061c5d8);
    /* 0061c5d8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61c5ddu); f_0082dab0();
    /* 0061c5dd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61c5e2u); f_0082da80();
    /* 0061c5e2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c5e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061c5e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c5e7: ret  */ FN_RET(0x0061c374); r_esp += 4; return;
L_0061c5e8:; BB(0x0061c5e8);
    /* 0061c5e8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61c5edu); f_0082d7b0();
    /* 0061c5ed: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0061c5f0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61c5f5u); f_0082d838();
    /* 0061c5f5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0061c5f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c5fa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61c5ffu); f_0082d8bc();
    /* 0061c5ff: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0061c602: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61c607u); f_00829cc8();
    /* 0061c607: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c60d: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0061c610: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0061c616: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61c61bu); f_0083bd00();
    /* 0061c61b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61c620u); f_0082da80();
L_0061c620:; BB(0x0061c620);
    /* 0061c620: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061c624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c625: ret  */ FN_RET(0x0061c374); r_esp += 4; return;
}

void f_0061c628(void) /* sub_61C628 */
{
    FN_ENTER(0x0061c628);
    /* 0061c628: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c62d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c62f: je 0x61c654 */ if (fZ) goto L_0061c654;
L_0061c631:; BB(0x0061c631);
    /* 0061c631: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c634: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61c639u); f_00800b5c();
    /* 0061c639: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c63a: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c63f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c641: je 0x61c654 */ if (fZ) goto L_0061c654;
L_0061c643:; BB(0x0061c643);
    /* 0061c643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c644: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61c649u); f_00857e98();
    /* 0061c649: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c64a: mov dword ptr [0xa8ebfc], 0 */ W32((u32)(0xa8ebfcu), 0x0u);
L_0061c654:; BB(0x0061c654);
    /* 0061c654: mov ecx, dword ptr [0xa8ec00] */ r_ecx = R32((u32)(0xa8ec00u));
    /* 0061c65a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c65c: je 0x61c671 */ if (fZ) goto L_0061c671;
L_0061c65e:; BB(0x0061c65e);
    /* 0061c65e: je 0x61c667 */ if (fZ) goto L_0061c667;
L_0061c660:; BB(0x0061c660);
    /* 0061c660: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c662: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61c667u); f_004066a8();
L_0061c667:; BB(0x0061c667);
    /* 0061c667: mov dword ptr [0xa8ec00], 0 */ W32((u32)(0xa8ec00u), 0x0u);
L_0061c671:; BB(0x0061c671);
    /* 0061c671: ret  */ FN_RET(0x0061c628); r_esp += 4; return;
}

void f_0061c674(void)
{
    FN_ENTER(0x0061c674);
    /* 0061c674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c675: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c679: push 0x8e1ce8 */ { u32 v = 0x8e1ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c67e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061c684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c685: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061c68c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c68f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061c692: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061c695: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061c698: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061c69b: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061c6a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61c6acu); f_005caba4();
    /* 0061c6ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c6ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061c6b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c6b2: je 0x61c6eb */ if (fZ) goto L_0061c6eb;
L_0061c6b4:; BB(0x0061c6b4);
    /* 0061c6b4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061c6bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061c6c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c6c5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c6cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c6ce: call 0x61c6f0 */ r_esp -= 4; W32(r_esp, 0x61c6d3u); f_0061c6f0();
    /* 0061c6d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c6d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061c6dd:; BB(0x0061c6dd);
    /* 0061c6dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c6e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061c6e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c6e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c6ea: ret  */ FN_RET(0x0061c674); r_esp += 4; return;
L_0061c6eb:; BB(0x0061c6eb);
    /* 0061c6eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c6ed: jmp 0x61c6dd */ goto L_0061c6dd;
}

void f_0061c6f0(void) /* sub_61C6F0 */
{
    FN_ENTER(0x0061c6f0);
    /* 0061c6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c6f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6f5: push 0x8e1d04 */ { u32 v = 0x8e1d04u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061c700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c701: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061c708: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c70b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061c70e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061c711: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061c714: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061c717: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061c71a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c71d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061c720: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061c723: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61c728u); f_00619df0();
    /* 0061c728: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061c72f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c732: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c735: mov dword ptr [ecx], 0xb27240 */ W32((u32)(r_ecx), 0xb27240u);
    /* 0061c73b: mov eax, dword ptr [0x9c5160] */ r_eax = R32((u32)(0x9c5160u));
    /* 0061c740: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c741: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061c744: call dword ptr [0xb27254] */ { u32 t = R32((u32)(0xb27254u)); r_esp -= 4; W32(r_esp, 0x61c74au); call_ind(t); }
    /* 0061c74a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c74d: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061c752: mov edi, dword ptr [0xa8ec00] */ r_edi = R32((u32)(0xa8ec00u));
    /* 0061c758: fld dword ptr [0x930c08] */ FPUSH(R_F32((u32)(0x930c08u)));
    /* 0061c75e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061c760: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0061c763: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c765: push 0x9c5164 */ { u32 v = 0x9c5164u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c76a: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0061c770: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0061c773: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 0061c776: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061c77c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061c77f: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061c785: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061c788: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061c78b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061c78e: fadd dword ptr [edx*4 + 0x930c00] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930c00u));
    /* 0061c795: fadd dword ptr [0x930c0c] */ ST(0) = ST(0) + R_F32((u32)(0x930c0cu));
    /* 0061c79b: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061c7a1: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061c7a3: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061c7a9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61c7aeu); f_007b9a88();
    /* 0061c7ae: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061c7b1: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61c7b6u); f_007b999c();
    /* 0061c7b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c7b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c7ba: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61c7bfu); f_007b4f54();
    /* 0061c7bf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c7c2: mov ebx, dword ptr [ecx + 0x84] */ r_ebx = R32((u32)(r_ecx+0x84u));
    /* 0061c7c8: mov eax, 0xfc */ r_eax = 0xfcu;
    /* 0061c7cd: cmp ebx, 0xfc */ {  u32 a = r_ebx; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c7d3: mov edx, 0 */ r_edx = 0x0u;
    /* 0061c7d8: jl 0x61c7dc */ if ((fS!=fO)) goto L_0061c7dc;
L_0061c7da:; BB(0x0061c7da);
    /* 0061c7da: mov ebx, eax */ r_ebx = r_eax;
L_0061c7dc:; BB(0x0061c7dc);
    /* 0061c7dc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061c7de: jg 0x61c7e2 */ if ((!fZ&&fS==fO)) goto L_0061c7e2;
L_0061c7e0:; BB(0x0061c7e0);
    /* 0061c7e0: mov ebx, edx */ r_ebx = r_edx;
L_0061c7e2:; BB(0x0061c7e2);
    /* 0061c7e2: mov dword ptr [ecx + 0x84], ebx */ W32((u32)(r_ecx+0x84u), r_ebx);
    /* 0061c7e8: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x61c7edu); f_0061c84c();
    /* 0061c7ed: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c7f0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061c7f3: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 0061c7f9: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0061c7fc: mov word ptr [ebx + 0xd4], dx */ W16((u32)(r_ebx+0xd4u), (u16)r_edx);
    /* 0061c803: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 0061c806: mov word ptr [ebx + 0xd6], cx */ W16((u32)(r_ebx+0xd6u), (u16)r_ecx);
    /* 0061c80d: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c810: mov word ptr [ebx + 0xd8], ax */ W16((u32)(r_ebx+0xd8u), (u16)r_eax);
    /* 0061c817: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c819: mov dword ptr [ebx + 0xdc], edi */ W32((u32)(r_ebx+0xdcu), r_edi);
    /* 0061c81f: mov dword ptr [ebx + 0xe0], edi */ W32((u32)(r_ebx+0xe0u), r_edi);
    /* 0061c825: mov dword ptr [ebx + 0xe4], edi */ W32((u32)(r_ebx+0xe4u), r_edi);
    /* 0061c82b: mov dword ptr [ebx + 0xe8], edi */ W32((u32)(r_ebx+0xe8u), r_edi);
    /* 0061c831: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c834: mov eax, ebx */ r_eax = r_ebx;
    /* 0061c836: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c839: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c83c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061c843: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c845: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c846: ret 8 */ FN_RET(0x0061c6f0); r_esp += 12; return;
}

void f_0061c84c(void) /* sub_61C84C */
{
    FN_ENTER(0x0061c84c);
    /* 0061c84c: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0061c852: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0061c858: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c85d: jle 0x61c86a */ if ((fZ||fS!=fO)) goto L_0061c86a;
L_0061c85f:; BB(0x0061c85f);
    /* 0061c85f: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
    /* 0061c869: ret  */ FN_RET(0x0061c84c); r_esp += 4; return;
L_0061c86a:; BB(0x0061c86a);
    /* 0061c86a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c86c: jl 0x61c898 */ if ((fS!=fO)) goto L_0061c898;
L_0061c86e:; BB(0x0061c86e);
    /* 0061c86e: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0061c874: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c876: jl 0x61c883 */ if ((fS!=fO)) goto L_0061c883;
L_0061c878:; BB(0x0061c878);
    /* 0061c878: mov dword ptr [ecx + 0xcc], 2 */ W32((u32)(r_ecx+0xccu), 0x2u);
    /* 0061c882: ret  */ FN_RET(0x0061c84c); r_esp += 4; return;
L_0061c883:; BB(0x0061c883);
    /* 0061c883: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 0061c889: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c88b: jne 0x61c878 */ if (!fZ) goto L_0061c878;
L_0061c88d:; BB(0x0061c88d);
    /* 0061c88d: mov dword ptr [ecx + 0xcc], 3 */ W32((u32)(r_ecx+0xccu), 0x3u);
    /* 0061c897: ret  */ FN_RET(0x0061c84c); r_esp += 4; return;
L_0061c898:; BB(0x0061c898);
    /* 0061c898: mov dword ptr [ecx + 0xcc], 1 */ W32((u32)(r_ecx+0xccu), 0x1u);
    /* 0061c8a2: ret  */ FN_RET(0x0061c84c); r_esp += 4; return;
}

void f_0061c8a4(void) /* sub_61C8A4 */
{
    FN_ENTER(0x0061c8a4);
    /* 0061c8a4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0061c8a8: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0061c8ab: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061c8ae: jne 0x61c8bf */ if (!fZ) goto L_0061c8bf;
L_0061c8b0:; BB(0x0061c8b0);
    /* 0061c8b0: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 0061c8b6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c8b9: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
L_0061c8bf:; BB(0x0061c8bf);
    /* 0061c8bf: ret 8 */ FN_RET(0x0061c8a4); r_esp += 12; return;
}

void f_0061c8c4(void) /* sub_61C8C4 */
{
    FN_ENTER(0x0061c8c4);
    /* 0061c8c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c8c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8c9: push 0x8e1d2c */ { u32 v = 0x8e1d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061c8d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061c8dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c8df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061c8e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061c8e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061c8e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061c8eb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061c8f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61c8fcu); f_008581c5();
    /* 0061c8fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c8fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061c900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c902: je 0x61c980 */ if (fZ) goto L_0061c980;
L_0061c904:; BB(0x0061c904);
    /* 0061c904: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061c90b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061c912: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c915: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c919: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c91a: push 0x9c5150 */ { u32 v = 0x9c5150u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c91f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c921: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61c926u); f_005b7a84();
    /* 0061c926: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c929: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061c930:; BB(0x0061c930);
    /* 0061c930: mov dword ptr [0xa8ec00], eax */ W32((u32)(0xa8ec00u), r_eax);
    /* 0061c935: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061c93c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c93e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61c943u); f_008581c5();
    /* 0061c943: mov edx, dword ptr [0xa8ec00] */ r_edx = R32((u32)(0xa8ec00u));
    /* 0061c949: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0061c94f: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0061c952: mov dword ptr [0xa8ebfc], eax */ W32((u32)(0xa8ebfcu), r_eax);
    /* 0061c957: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0061c959: push 0x930c64 */ { u32 v = 0x930c64u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c95e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61c963u); f_008009dc();
    /* 0061c963: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c966: mov edx, dword ptr [0xa8ebfc] */ r_edx = R32((u32)(0xa8ebfcu));
    /* 0061c96c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c96f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061c972: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c975: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061c97c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c97e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c97f: ret  */ FN_RET(0x0061c8c4); r_esp += 4; return;
L_0061c980:; BB(0x0061c980);
    /* 0061c980: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c982: jmp 0x61c930 */ goto L_0061c930;
}

void f_0061c984(void) /* sub_61C984 */
{
    FN_ENTER(0x0061c984);
    /* 0061c984: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c985: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061c987: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061c989: call 0x61c9a8 */ r_esp -= 4; W32(r_esp, 0x61c98eu); f_0061c9a8();
    /* 0061c98e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061c992: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061c994: jne 0x61c99a */ if (!fZ) goto L_0061c99a;
L_0061c996:; BB(0x0061c996);
    /* 0061c996: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c997: ret 4 */ FN_RET(0x0061c984); r_esp += 8; return;
L_0061c99a:; BB(0x0061c99a);
    /* 0061c99a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c99b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61c9a0u); f_005c2f74();
    /* 0061c9a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c9a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061c9a2: ret 4 */ FN_RET(0x0061c984); r_esp += 8; return;
}

void f_0061c9a8(void) /* sub_61C9A8 */
{
    FN_ENTER(0x0061c9a8);
    /* 0061c9a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c9a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c9ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c9ad: push 0x8e1d48 */ { u32 v = 0x8e1d48u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c9b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061c9b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c9b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061c9c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c9c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061c9c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061c9c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061c9cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061c9cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061c9d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061c9d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c9dc: mov dword ptr [eax], 0xb27340 */ W32((u32)(r_eax), 0xb27340u);
    /* 0061c9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c9e3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61c9e8u); f_007b4e84();
    /* 0061c9e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061c9e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c9ec: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61c9f1u); f_007b9c8c();
    /* 0061c9f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061c9f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c9fb: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61ca00u); f_00619b10();
    /* 0061ca00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ca03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061ca0a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ca0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ca0d: ret  */ FN_RET(0x0061c9a8); r_esp += 4; return;
}

void f_0061ca10(void) /* sub_61CA10 */
{
    FN_ENTER(0x0061ca10);
    /* 0061ca10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca11: mov edi, ecx */ r_edi = r_ecx;
    /* 0061ca13: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061ca19: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ca1b: jne 0x61ca1f */ if (!fZ) goto L_0061ca1f;
L_0061ca1d:; BB(0x0061ca1d);
    /* 0061ca1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061ca1e: ret  */ FN_RET(0x0061ca10); r_esp += 4; return;
L_0061ca1f:; BB(0x0061ca1f);
    /* 0061ca1f: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca24: mov ecx, edi */ r_ecx = r_edi;
    /* 0061ca26: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61ca2bu); f_006134c8();
    /* 0061ca2b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061ca2e: jne 0x61ca1d */ if (!fZ) goto L_0061ca1d;
L_0061ca30:; BB(0x0061ca30);
    /* 0061ca30: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061ca35: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 0061ca3f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061ca42: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061ca45: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca49: mov ecx, edi */ r_ecx = r_edi;
    /* 0061ca4b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61ca50u); f_007b52c4();
    /* 0061ca50: mov dword ptr [edi + 0xe0], 1 */ W32((u32)(r_edi+0xe0u), 0x1u);
    /* 0061ca5a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x61ca5fu); f_00807ac0();
    /* 0061ca5f: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061ca62: ja 0x61ca1d */ if ((!fC&&!fZ)) goto L_0061ca1d;
L_0061ca64:; BB(0x0061ca64);
    /* 0061ca64: mov eax, dword ptr [eax*4 + 0x930c80] */ r_eax = R32((u32)(r_eax*4+0x930c80u));
    /* 0061ca6b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
}

void f_0061ca1d(void)
{
    FN_ENTER(0x0061ca1d);
    /* 0061ca1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061ca1e: ret  */ FN_RET(0x0061ca1d); r_esp += 4; return;
}

void f_0061ca6d(void)
{
    FN_ENTER(0x0061ca6d);
    /* 0061ca6d: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061ca70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ca72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca75: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca7a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61ca7fu); f_00814298();
    /* 0061ca7f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061ca82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061ca83: ret  */ FN_RET(0x0061ca6d); r_esp += 4; return;
}

void f_0061ca84(void)
{
    FN_ENTER(0x0061ca84);
    /* 0061ca84: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061ca87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ca89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca8b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca8c: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca91: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61ca96u); f_00814298();
    /* 0061ca96: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061ca99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061ca9a: ret  */ FN_RET(0x0061ca84); r_esp += 4; return;
}

void f_0061ca9b(void)
{
    FN_ENTER(0x0061ca9b);
    /* 0061ca9b: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061ca9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061caa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061caa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061caa2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061caa3: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061caa8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61caadu); f_00814298();
    /* 0061caad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cab0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cab1: ret  */ FN_RET(0x0061ca9b); r_esp += 4; return;
}

void f_0061cab4(void) /* sub_61CAB4 */
{
    FN_ENTER(0x0061cab4);
    /* 0061cab4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cab5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061cab7: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061cabd: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061cabf: jne 0x61caec */ if (!fZ) goto L_0061caec;
L_0061cac1:; BB(0x0061cac1);
    /* 0061cac1: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061cac6: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0061cad0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061cad2: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0061cad5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cad7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cad9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061cadb: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61cae0u); f_007b52ec();
    /* 0061cae0: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
L_0061caea:; BB(0x0061caea);
    /* 0061caea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061caeb: ret  */ FN_RET(0x0061cab4); r_esp += 4; return;
L_0061caec:; BB(0x0061caec);
    /* 0061caec: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061caf1: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061caf6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061caf9: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0061cafc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061cafe: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61cb03u); f_006134c8();
    /* 0061cb03: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061cb06: je 0x61caea */ if (fZ) goto L_0061caea;
L_0061cb08:; BB(0x0061cb08);
    /* 0061cb08: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0061cb12: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061cb16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb18: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61cb1du); f_007b52ec();
    /* 0061cb1d: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
    /* 0061cb27: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x61cb2cu); f_00807ac0();
    /* 0061cb2c: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061cb2f: ja 0x61caea */ if ((!fC&&!fZ)) goto L_0061caea;
L_0061cb31:; BB(0x0061cb31);
    /* 0061cb31: mov eax, dword ptr [eax*4 + 0x930cc0] */ r_eax = R32((u32)(r_eax*4+0x930cc0u));
    /* 0061cb38: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
}

void f_0061caea(void)
{
    FN_ENTER(0x0061caea);
    /* 0061caea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061caeb: ret  */ FN_RET(0x0061caea); r_esp += 4; return;
}

void f_0061cb3a(void)
{
    FN_ENTER(0x0061cb3a);
    /* 0061cb3a: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061cb3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cb3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb42: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb47: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cb4cu); f_00814298();
    /* 0061cb4c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cb4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061cb50: ret  */ FN_RET(0x0061cb3a); r_esp += 4; return;
}

void f_0061cb51(void)
{
    FN_ENTER(0x0061cb51);
    /* 0061cb51: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061cb54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cb56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb59: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb5e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cb63u); f_00814298();
    /* 0061cb63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cb66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061cb67: ret  */ FN_RET(0x0061cb51); r_esp += 4; return;
}

void f_0061cb68(void)
{
    FN_ENTER(0x0061cb68);
    /* 0061cb68: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061cb6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cb6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb70: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb75: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cb7au); f_00814298();
    /* 0061cb7a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cb7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061cb7e: ret  */ FN_RET(0x0061cb68); r_esp += 4; return;
}

void f_0061cb80(void) /* sub_61CB80 */
{
    FN_ENTER(0x0061cb80);
    /* 0061cb80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb82: mov edi, ecx */ r_edi = r_ecx;
    /* 0061cb84: mov eax, dword ptr [edi + 0xcc] */ r_eax = R32((u32)(r_edi+0xccu));
    /* 0061cb8a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cb8d: je 0x61cbf5 */ if (fZ) goto L_0061cbf5;
L_0061cb8f:; BB(0x0061cb8f);
    /* 0061cb8f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cb92: jne 0x61cbc6 */ if (!fZ) goto L_0061cbc6;
L_0061cb94:; BB(0x0061cb94);
    /* 0061cb94: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 0061cb9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb9c: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61cba1u); f_00816eec();
    /* 0061cba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cba2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061cba5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cba8: je 0x61cc0e */ if (fZ) goto L_0061cc0e;
L_0061cbaa:; BB(0x0061cbaa);
    /* 0061cbaa: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061cbb0: mov dword ptr [edi + 0xd8], 0 */ W32((u32)(r_edi+0xd8u), 0x0u);
    /* 0061cbba: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061cbbd: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061cbc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cbc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cbc5: ret  */ FN_RET(0x0061cb80); r_esp += 4; return;
L_0061cbc6:; BB(0x0061cbc6);
    /* 0061cbc6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cbc9: jne 0x61cbe3 */ if (!fZ) goto L_0061cbe3;
L_0061cbcb:; BB(0x0061cbcb);
    /* 0061cbcb: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 0061cbd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cbd3: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61cbd8u); f_00816eec();
    /* 0061cbd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cbd9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061cbdc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061cbdf: jne 0x61cc0b */ if (!fZ) goto L_0061cc0b;
L_0061cbe1:; BB(0x0061cbe1);
    /* 0061cbe1: jmp 0x61cc47 */ goto L_0061cc47;
L_0061cbe3:; BB(0x0061cbe3);
    /* 0061cbe3: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061cbe9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061cbec: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061cbf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cbf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cbf4: ret  */ FN_RET(0x0061cb80); r_esp += 4; return;
L_0061cbf5:; BB(0x0061cbf5);
    /* 0061cbf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0061cbf7: call 0x61cd18 */ r_esp -= 4; W32(r_esp, 0x61cbfcu); f_0061cd18();
    /* 0061cbfc: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061cc02: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061cc05: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
L_0061cc0b:; BB(0x0061cc0b);
    /* 0061cc0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cc0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cc0d: ret  */ FN_RET(0x0061cb80); r_esp += 4; return;
L_0061cc0e:; BB(0x0061cc0e);
    /* 0061cc0e: movzx eax, word ptr [edi + 0xd4] */ r_eax = (u32)R16((u32)(r_edi+0xd4u));
    /* 0061cc15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cc16: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61cc1bu); f_00816eec();
    /* 0061cc1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cc1c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061cc1f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cc22: jne 0x61cbaa */ if (!fZ) goto L_0061cbaa;
L_0061cc24:; BB(0x0061cc24);
    /* 0061cc24: mov ecx, edi */ r_ecx = r_edi;
    /* 0061cc26: call 0x61cd18 */ r_esp -= 4; W32(r_esp, 0x61cc2bu); f_0061cd18();
    /* 0061cc2b: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061cc31: mov dword ptr [edi + 0xd8], 1 */ W32((u32)(r_edi+0xd8u), 0x1u);
    /* 0061cc3b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061cc3e: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061cc44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cc45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cc46: ret  */ FN_RET(0x0061cb80); r_esp += 4; return;
L_0061cc47:; BB(0x0061cc47);
    /* 0061cc47: movzx eax, word ptr [edi + 0xd4] */ r_eax = (u32)R16((u32)(r_edi+0xd4u));
    /* 0061cc4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cc4f: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61cc54u); f_00816eec();
    /* 0061cc54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cc55: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061cc58: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061cc5b: jne 0x61cc0b */ if (!fZ) goto L_0061cc0b;
L_0061cc5d:; BB(0x0061cc5d);
    /* 0061cc5d: mov ecx, edi */ r_ecx = r_edi;
    /* 0061cc5f: call 0x61cd18 */ r_esp -= 4; W32(r_esp, 0x61cc64u); f_0061cd18();
    /* 0061cc64: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061cc6a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061cc6d: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 0061cc73: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0061cc79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061cc7b: je 0x61cc0b */ if (fZ) goto L_0061cc0b;
L_0061cc7d:; BB(0x0061cc7d);
    /* 0061cc7d: je 0x61cd11 */ if (fZ) goto L_0061cd11;
L_0061cc83:; BB(0x0061cc83);
    /* 0061cc83: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061cc87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061cc89: jl 0x61ccb2 */ if ((fS!=fO)) goto L_0061ccb2;
L_0061cc8b:; BB(0x0061cc8b);
    /* 0061cc8b: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cc91: jg 0x61ccb2 */ if ((!fZ&&fS==fO)) goto L_0061ccb2;
L_0061cc93:; BB(0x0061cc93);
    /* 0061cc93: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0061cc99: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 0061cc9d: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061cca1: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 0061cca6: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0061ccab: mov eax, 1 */ r_eax = 0x1u;
    /* 0061ccb0: jmp 0x61ccb4 */ goto L_0061ccb4;
L_0061ccb2:; BB(0x0061ccb2);
    /* 0061ccb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061ccb4:; BB(0x0061ccb4);
    /* 0061ccb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ccb6: je 0x61cc0b */ if (fZ) goto L_0061cc0b;
L_0061ccbc:; BB(0x0061ccbc);
    /* 0061ccbc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0061ccbf: mov eax, 1 */ r_eax = 0x1u;
    /* 0061ccc4: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061ccc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ccc9: mov ecx, edi */ r_ecx = r_edi;
    /* 0061cccb: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x61ccd0u); f_007b5038();
    /* 0061ccd0: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0061ccd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ccd8: je 0x61cc0b */ if (fZ) goto L_0061cc0b;
L_0061ccde:; BB(0x0061ccde);
    /* 0061ccde: movsx edi, word ptr [eax + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061cce2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061cce4: jl 0x61cc0b */ if ((fS!=fO)) goto L_0061cc0b;
L_0061ccea:; BB(0x0061ccea);
    /* 0061ccea: cmp edi, 0xb9f */ {  u32 a = r_edi; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061ccf0: jg 0x61cc0b */ if ((!fZ&&fS==fO)) goto L_0061cc0b;
L_0061ccf6:; BB(0x0061ccf6);
    /* 0061ccf6: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0061ccfc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0061cd00: mov word ptr [ecx + edi*4], ax */ W16((u32)(r_ecx+r_edi*4), (u16)r_eax);
    /* 0061cd04: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 0061cd09: mov word ptr [ecx + edi*4 + 2], dx */ W16((u32)(r_ecx+r_edi*4+0x2u), (u16)r_edx);
    /* 0061cd0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cd0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cd10: ret  */ FN_RET(0x0061cb80); r_esp += 4; return;
L_0061cd11:; BB(0x0061cd11);
    /* 0061cd11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd13: jmp 0x61ccb4 */ goto L_0061ccb4;
}

void f_0061cd18(void) /* sub_61CD18 */
{
    FN_ENTER(0x0061cd18);
    /* 0061cd18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd19: mov edi, ecx */ r_edi = r_ecx;
    /* 0061cd1b: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061cd21: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061cd23: je 0x61cd27 */ if (fZ) goto L_0061cd27;
L_0061cd25:; BB(0x0061cd25);
    /* 0061cd25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cd26: ret  */ FN_RET(0x0061cd18); r_esp += 4; return;
L_0061cd27:; BB(0x0061cd27);
    /* 0061cd27: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x61cd2cu); f_00807ac0();
    /* 0061cd2c: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061cd2f: ja 0x61cdab */ if ((!fC&&!fZ)) goto L_0061cdab;
L_0061cd31:; BB(0x0061cd31);
    /* 0061cd31: mov eax, dword ptr [eax*4 + 0x930d00] */ r_eax = R32((u32)(r_eax*4+0x930d00u));
    /* 0061cd38: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0061cdab:; BB(0x0061cdab);
    /* 0061cdab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cdac: ret  */ FN_RET(0x0061cd18); r_esp += 4; return;
}

void f_0061cd3a(void)
{
    FN_ENTER(0x0061cd3a);
    /* 0061cd3a: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061cd3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd41: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd42: push 0x478 */ { u32 v = 0x478u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd47: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cd4cu); f_00814298();
    /* 0061cd4c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cd4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cd50: ret  */ FN_RET(0x0061cd3a); r_esp += 4; return;
}

void f_0061cd51(void)
{
    FN_ENTER(0x0061cd51);
    /* 0061cd51: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061cd54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd59: push 0x459 */ { u32 v = 0x459u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd5e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cd63u); f_00814298();
    /* 0061cd63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cd66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cd67: ret  */ FN_RET(0x0061cd51); r_esp += 4; return;
}

void f_0061cd68(void)
{
    FN_ENTER(0x0061cd68);
    /* 0061cd68: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061cd6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd70: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd75: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cd7au); f_00814298();
    /* 0061cd7a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cd7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cd7e: ret  */ FN_RET(0x0061cd68); r_esp += 4; return;
}

void f_0061cd7f(void)
{
    FN_ENTER(0x0061cd7f);
    /* 0061cd7f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061cd82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd87: push 0x428 */ { u32 v = 0x428u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd8c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cd91u); f_00814298();
    /* 0061cd91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cd94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cd95: ret  */ FN_RET(0x0061cd7f); r_esp += 4; return;
}

void f_0061cd96(void)
{
    FN_ENTER(0x0061cd96);
    /* 0061cd96: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061cd99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd9d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd9e: push 0x41b */ { u32 v = 0x41bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061cda3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61cda8u); f_00814298();
    /* 0061cda8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cdab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cdac: ret  */ FN_RET(0x0061cd96); r_esp += 4; return;
}

void f_0061cdab(void)
{
    FN_ENTER(0x0061cdab);
    /* 0061cdab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061cdac: ret  */ FN_RET(0x0061cdab); r_esp += 4; return;
}

void f_0061cdb4(void) /* sub_61CDB4 */
{
    FN_ENTER(0x0061cdb4);
    /* 0061cdb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdb6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cdb9: mov esi, ecx */ r_esi = r_ecx;
    /* 0061cdbb: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cdc1: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cdc7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061cdc9: mov ecx, esi */ r_ecx = r_esi;
    /* 0061cdcb: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61cdceu); call_ind(t); }
    /* 0061cdce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cdd0: je 0x61cfe1 */ if (fZ) goto L_0061cfe1;
L_0061cdd6:; BB(0x0061cdd6);
    /* 0061cdd6: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cddb: mov ecx, esi */ r_ecx = r_esi;
    /* 0061cddd: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61cde2u); f_00613244();
    /* 0061cde2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cde4: je 0x61cfe1 */ if (fZ) goto L_0061cfe1;
L_0061cdea:; BB(0x0061cdea);
    /* 0061cdea: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0061cdf0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cdf3: je 0x61cfa9 */ if (fZ) goto L_0061cfa9;
L_0061cdf9:; BB(0x0061cdf9);
    /* 0061cdf9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cdfc: je 0x61cfa9 */ if (fZ) goto L_0061cfa9;
L_0061ce02:; BB(0x0061ce02);
    /* 0061ce02: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ce05: jne 0x61ce4f */ if (!fZ) goto L_0061ce4f;
L_0061ce07:; BB(0x0061ce07);
    /* 0061ce07: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ce0cu); f_0082d7b0();
    /* 0061ce0c: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061ce0f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61ce14u); f_0082d838();
    /* 0061ce14: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061ce17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ce19: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61ce1eu); f_0082d8bc();
    /* 0061ce1e: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0061ce21: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ce26u); f_00829cc8();
    /* 0061ce26: fld dword ptr [0x930d50] */ FPUSH(R_F32((u32)(0x930d50u)));
    /* 0061ce2c: fadd dword ptr [esi + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb4u));
    /* 0061ce32: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0061ce35: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0061ce3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0061ce3f: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61ce44u); f_0083bd00();
    /* 0061ce44: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61ce49u); f_0082da80();
    /* 0061ce49: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061ce4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061ce4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061ce4e: ret  */ FN_RET(0x0061cdb4); r_esp += 4; return;
L_0061ce4f:; BB(0x0061ce4f);
    /* 0061ce4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ce51: jne 0x61cfe1 */ if (!fZ) goto L_0061cfe1;
L_0061ce57:; BB(0x0061ce57);
    /* 0061ce57: mov ebx, dword ptr [esi + 0x34] */ r_ebx = R32((u32)(r_esi+0x34u));
    /* 0061ce5a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0061ce5d: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0061ce60: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0061ce63: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0061ce66: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0061ce69: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0061ce6d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0061ce71: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0061ce74: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0061ce78: movzx eax, word ptr [esi + 0xc8] */ r_eax = (u32)R16((u32)(r_esi+0xc8u));
    /* 0061ce7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce80: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61ce85u); f_00816eec();
    /* 0061ce85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ce86: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061ce89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ce8b: jne 0x61ce97 */ if (!fZ) goto L_0061ce97;
L_0061ce8d:; BB(0x0061ce8d);
    /* 0061ce8d: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0061ce93: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061ce95: je 0x61cea1 */ if (fZ) goto L_0061cea1;
L_0061ce97:; BB(0x0061ce97);
    /* 0061ce97: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 0061ce9f: jmp 0x61cea9 */ goto L_0061cea9;
L_0061cea1:; BB(0x0061cea1);
    /* 0061cea1: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
L_0061cea9:; BB(0x0061cea9);
    /* 0061cea9: movzx eax, word ptr [esi + 0xd4] */ r_eax = (u32)R16((u32)(r_esi+0xd4u));
    /* 0061ceb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ceb1: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61ceb6u); f_00816eec();
    /* 0061ceb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ceb7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061ceba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cebc: jne 0x61cec8 */ if (!fZ) goto L_0061cec8;
L_0061cebe:; BB(0x0061cebe);
    /* 0061cebe: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0061cec4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061cec6: je 0x61ced2 */ if (fZ) goto L_0061ced2;
L_0061cec8:; BB(0x0061cec8);
    /* 0061cec8: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 0061ced0: jmp 0x61ceda */ goto L_0061ceda;
L_0061ced2:; BB(0x0061ced2);
    /* 0061ced2: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
L_0061ceda:; BB(0x0061ceda);
    /* 0061ceda: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61cedfu); f_0082d7b0();
    /* 0061cedf: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061cee4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061cee6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ceebu); f_00829cc8();
    /* 0061ceeb: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061ceee: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61cef3u); f_0082d838();
    /* 0061cef3: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0061cef6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61cefbu); f_0082d838();
    /* 0061cefb: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061cefe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cf00: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61cf05u); f_0082d8bc();
    /* 0061cf05: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cf08: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61cf0du); f_008321d8();
    /* 0061cf0d: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0061cf10: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cf13: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61cf18u); f_008321d8();
    /* 0061cf18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061cf1b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61cf20u); f_0082dbac();
    /* 0061cf20: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0061cf22:; BB(0x0061cf22);
    /* 0061cf22: mov eax, dword ptr [esp + esi*4 + 0x10] */ r_eax = R32((u32)(r_esp+r_esi*4+0x10u));
    /* 0061cf26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cf28: je 0x61cf39 */ if (fZ) goto L_0061cf39;
L_0061cf2a:; BB(0x0061cf2a);
    /* 0061cf2a: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061cf2f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061cf32: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61cf37u); f_00829cc8();
    /* 0061cf37: jmp 0x61cf45 */ goto L_0061cf45;
L_0061cf39:; BB(0x0061cf39);
    /* 0061cf39: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061cf3e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061cf40: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61cf45u); f_00829cc8();
L_0061cf45:; BB(0x0061cf45);
    /* 0061cf45: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61cf4au); f_0082d7b0();
    /* 0061cf4a: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0061cf4d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0061cf50: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cf52: mov ecx, dword ptr [esp + eax] */ r_ecx = R32((u32)(r_esp+r_eax));
    /* 0061cf55: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cf58: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61cf5du); f_0082d838();
    /* 0061cf5d: mov eax, dword ptr [esp + esi*8] */ r_eax = R32((u32)(r_esp+r_esi*8));
    /* 0061cf60: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cf63: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61cf68u); f_008321d8();
    /* 0061cf68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cf69: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61cf6eu); f_0082da80();
    /* 0061cf6e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61cf73u); f_0082d7b0();
    /* 0061cf73: mov ecx, dword ptr [esp + ebx*4 + 4] */ r_ecx = R32((u32)(r_esp+r_ebx*4+0x4u));
    /* 0061cf77: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cf7a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61cf7fu); f_0082d838();
    /* 0061cf7f: mov eax, dword ptr [esp + ebx*4 + 4] */ r_eax = R32((u32)(r_esp+r_ebx*4+0x4u));
    /* 0061cf83: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cf86: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61cf8bu); f_008321d8();
    /* 0061cf8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cf8c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61cf91u); f_0082da80();
    /* 0061cf91: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061cf94: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cf97: jl 0x61cf22 */ if ((fS!=fO)) goto L_0061cf22;
L_0061cf99:; BB(0x0061cf99);
    /* 0061cf99: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61cf9eu); f_0082dab0();
    /* 0061cf9e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61cfa3u); f_0082da80();
    /* 0061cfa3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cfa6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061cfa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061cfa8: ret  */ FN_RET(0x0061cdb4); r_esp += 4; return;
L_0061cfa9:; BB(0x0061cfa9);
    /* 0061cfa9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61cfaeu); f_0082d7b0();
    /* 0061cfae: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061cfb1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61cfb6u); f_0082d838();
    /* 0061cfb6: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061cfb9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cfbb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61cfc0u); f_0082d8bc();
    /* 0061cfc0: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0061cfc3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61cfc8u); f_00829cc8();
    /* 0061cfc8: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cfce: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0061cfd1: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0061cfd7: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61cfdcu); f_0083bd00();
    /* 0061cfdc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61cfe1u); f_0082da80();
L_0061cfe1:; BB(0x0061cfe1);
    /* 0061cfe1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061cfe4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061cfe5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061cfe6: ret  */ FN_RET(0x0061cdb4); r_esp += 4; return;
}

void f_0061cfe8(void) /* sub_61CFE8 */
{
    FN_ENTER(0x0061cfe8);
    /* 0061cfe8: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061cfed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cfef: je 0x61d014 */ if (fZ) goto L_0061d014;
L_0061cff1:; BB(0x0061cff1);
    /* 0061cff1: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061cff4: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61cff9u); f_00800b5c();
    /* 0061cff9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061cffa: mov eax, dword ptr [0xa8ec08] */ r_eax = R32((u32)(0xa8ec08u));
    /* 0061cfff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d001: je 0x61d014 */ if (fZ) goto L_0061d014;
L_0061d003:; BB(0x0061d003);
    /* 0061d003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d004: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61d009u); f_00857e98();
    /* 0061d009: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061d00a: mov dword ptr [0xa8ec08], 0 */ W32((u32)(0xa8ec08u), 0x0u);
L_0061d014:; BB(0x0061d014);
    /* 0061d014: mov ecx, dword ptr [0xa8ec0c] */ r_ecx = R32((u32)(0xa8ec0cu));
    /* 0061d01a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061d01c: je 0x61d031 */ if (fZ) goto L_0061d031;
L_0061d01e:; BB(0x0061d01e);
    /* 0061d01e: je 0x61d027 */ if (fZ) goto L_0061d027;
L_0061d020:; BB(0x0061d020);
    /* 0061d020: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d022: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61d027u); f_004066a8();
L_0061d027:; BB(0x0061d027);
    /* 0061d027: mov dword ptr [0xa8ec0c], 0 */ W32((u32)(0xa8ec0cu), 0x0u);
L_0061d031:; BB(0x0061d031);
    /* 0061d031: ret  */ FN_RET(0x0061cfe8); r_esp += 4; return;
}

