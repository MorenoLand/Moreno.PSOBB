#include "protos.h"

void f_007be026(void)
{
    FN_ENTER(0x007be026);
    /* 007be026: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 007be02b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be02d: jne 0x7be038 */ if (!fZ) goto L_007be038;
L_007be02f:; BB(0x007be02f);
    /* 007be02f: mov byte ptr [ebx + 0x1c], 8 */ W8((u32)(r_ebx+0x1cu), 0x8u);
    /* 007be033: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be036: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be037: ret  */ FN_RET(0x007be026); r_esp += 4; return;
L_007be038:; BB(0x007be038);
    /* 007be038: mov dword ptr [esp + 0x18], 0x42a00000 */ W32((u32)(r_esp+0x18u), 0x42a00000u);
    /* 007be040: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007be044: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 007be048: mov dword ptr [esp + 0x1c], 0x43300000 */ W32((u32)(r_esp+0x1cu), 0x43300000u);
    /* 007be050: mov dword ptr [esp + 0x20], 0x43ef8000 */ W32((u32)(r_esp+0x20u), 0x43ef8000u);
    /* 007be058: mov dword ptr [esp + 0x24], 0x434f0000 */ W32((u32)(r_esp+0x24u), 0x434f0000u);
    /* 007be060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be061: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007be062: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7be067u); f_0073a888();
    /* 007be067: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007be069: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007be06c: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x7be071u); f_007930dc();
    /* 007be071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007be074: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007be076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be077: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007be07a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7be07fu); f_0073ae38();
    /* 007be07f: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 007be083: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be086: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be087: ret  */ FN_RET(0x007be026); r_esp += 4; return;
}

void f_007be088(void)
{
    FN_ENTER(0x007be088);
    /* 007be088: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007be08b: jmp 0x7be09c */ goto L_007be09c;
L_007be09c:; BB(0x007be09c);
    /* 007be09c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be09e: je 0x7be108 */ if (fZ) goto L_007be108;
L_007be0a0:; BB(0x007be0a0);
    /* 007be0a0: call 0x77ebe8 */ r_esp -= 4; W32(r_esp, 0x7be0a5u); f_0077ebe8();
    /* 007be0a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be0a8: jne 0x7be108 */ if (!fZ) goto L_007be108;
L_007be0aa:; BB(0x007be0aa);
    /* 007be0aa: jmp 0x7be10d */ goto L_007be10d;
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007be088); r_esp += 4; return;
L_007be10d:; BB(0x007be10d);
    /* 007be10d: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 007be110: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007be114: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007be119: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007be11d: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 007be124: call 0x6c2bb8 */ r_esp -= 4; W32(r_esp, 0x7be129u); f_006c2bb8();
    /* 007be129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be12b: je 0x7be132 */ if (fZ) goto L_007be132;
L_007be12d:; BB(0x007be12d);
    /* 007be12d: call 0x6c2944 */ r_esp -= 4; W32(r_esp, 0x7be132u); f_006c2944();
L_007be132:; BB(0x007be132);
    /* 007be132: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 007be136: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be138: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 007be13c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be13f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be140: ret  */ FN_RET(0x007be088); r_esp += 4; return;
}

void f_007be08d(void)
{
    FN_ENTER(0x007be08d);
    /* 007be08d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007be090: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be092: je 0x7be141 */ if (fZ) goto L_007be141;
L_007be098:; BB(0x007be098);
    /* 007be098: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 007be09c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be09e: je 0x7be108 */ if (fZ) goto L_007be108;
L_007be0a0:; BB(0x007be0a0);
    /* 007be0a0: call 0x77ebe8 */ r_esp -= 4; W32(r_esp, 0x7be0a5u); f_0077ebe8();
    /* 007be0a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be0a8: jne 0x7be108 */ if (!fZ) goto L_007be108;
L_007be0aa:; BB(0x007be0aa);
    /* 007be0aa: jmp 0x7be10d */ goto L_007be10d;
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007be08d); r_esp += 4; return;
L_007be10d:; BB(0x007be10d);
    /* 007be10d: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 007be110: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007be114: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007be119: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007be11d: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 007be124: call 0x6c2bb8 */ r_esp -= 4; W32(r_esp, 0x7be129u); f_006c2bb8();
    /* 007be129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be12b: je 0x7be132 */ if (fZ) goto L_007be132;
L_007be12d:; BB(0x007be12d);
    /* 007be12d: call 0x6c2944 */ r_esp -= 4; W32(r_esp, 0x7be132u); f_006c2944();
L_007be132:; BB(0x007be132);
    /* 007be132: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 007be136: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be138: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 007be13c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be13f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be140: ret  */ FN_RET(0x007be08d); r_esp += 4; return;
L_007be141:; BB(0x007be141);
    /* 007be141: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be145: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007be146: call 0x77eaec */ r_esp -= 4; W32(r_esp, 0x7be14bu); f_0077eaec();
    /* 007be14b: mov ecx, eax */ r_ecx = r_eax;
    /* 007be14d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007be150: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 007be153: jmp 0x7be098 */ goto L_007be098;
}

void f_007be0ac(void)
{
    FN_ENTER(0x007be0ac);
    /* 007be0ac: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 007be0af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be0b1: je 0x7be0c7 */ if (fZ) goto L_007be0c7;
L_007be0b3:; BB(0x007be0b3);
    /* 007be0b3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007be0b7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007be0bc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007be0c0: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
L_007be0c7:; BB(0x007be0c7);
    /* 007be0c7: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 007be0cb: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 007be0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be0d2: jne 0x7be108 */ if (!fZ) goto L_007be108;
L_007be0d4:; BB(0x007be0d4);
    /* 007be0d4: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
    /* 007be0d8: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be0db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be0dc: ret  */ FN_RET(0x007be0ac); r_esp += 4; return;
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007be0ac); r_esp += 4; return;
}

void f_007be0cb(void)
{
    FN_ENTER(0x007be0cb);
    /* 007be0cb: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 007be0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be0d2: jne 0x7be108 */ if (!fZ) goto L_007be108;
L_007be0d4:; BB(0x007be0d4);
    /* 007be0d4: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
    /* 007be0d8: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be0db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be0dc: ret  */ FN_RET(0x007be0cb); r_esp += 4; return;
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007be0cb); r_esp += 4; return;
}

void f_007be0dd(void)
{
    FN_ENTER(0x007be0dd);
    /* 007be0dd: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 007be0e1: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 007be0e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be0e6: je 0x7be108 */ if (fZ) goto L_007be108;
L_007be0e8:; BB(0x007be0e8);
    /* 007be0e8: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 007be0ec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007be0ee: je 0x7be0f9 */ if (fZ) goto L_007be0f9;
L_007be0f0:; BB(0x007be0f0);
    /* 007be0f0: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
    /* 007be0f4: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be0f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be0f8: ret  */ FN_RET(0x007be0dd); r_esp += 4; return;
L_007be0f9:; BB(0x007be0f9);
    /* 007be0f9: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 007be0fc: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007be0ff: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be102: je 0x7be108 */ if (fZ) goto L_007be108;
L_007be104:; BB(0x007be104);
    /* 007be104: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007be0dd); r_esp += 4; return;
}

void f_007be0e1(void)
{
    FN_ENTER(0x007be0e1);
    /* 007be0e1: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 007be0e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be0e6: je 0x7be108 */ if (fZ) goto L_007be108;
L_007be0e8:; BB(0x007be0e8);
    /* 007be0e8: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 007be0ec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007be0ee: je 0x7be0f9 */ if (fZ) goto L_007be0f9;
L_007be0f0:; BB(0x007be0f0);
    /* 007be0f0: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
    /* 007be0f4: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be0f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be0f8: ret  */ FN_RET(0x007be0e1); r_esp += 4; return;
L_007be0f9:; BB(0x007be0f9);
    /* 007be0f9: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 007be0fc: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007be0ff: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be102: je 0x7be108 */ if (fZ) goto L_007be108;
L_007be104:; BB(0x007be104);
    /* 007be104: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007be0e1); r_esp += 4; return;
}

void f_007be158(void) /* sub_7BE158 */
{
    FN_ENTER(0x007be158);
    /* 007be158: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007be15b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be15d: je 0x7be178 */ if (fZ) goto L_007be178;
L_007be15f:; BB(0x007be15f);
    /* 007be15f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007be162: je 0x7be178 */ if (fZ) goto L_007be178;
L_007be164:; BB(0x007be164);
    /* 007be164: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007be167: je 0x7be178 */ if (fZ) goto L_007be178;
L_007be169:; BB(0x007be169);
    /* 007be169: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007be16c: je 0x7be178 */ if (fZ) goto L_007be178;
L_007be16e:; BB(0x007be16e);
    /* 007be16e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007be171: jne 0x7be178 */ if (!fZ) goto L_007be178;
L_007be173:; BB(0x007be173);
    /* 007be173: call 0x824840 */ r_esp -= 4; W32(r_esp, 0x7be178u); f_00824840();
L_007be178:; BB(0x007be178);
    /* 007be178: ret  */ FN_RET(0x007be158); r_esp += 4; return;
}

void f_007be17c(void) /* sub_7BE17C */
{
    FN_ENTER(0x007be17c);
    /* 007be17c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007be180: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be185u); f_006c1bd4();
    /* 007be185: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be188: je 0x7be199 */ if (fZ) goto L_007be199;
L_007be18a:; BB(0x007be18a);
    /* 007be18a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007be18d: and edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007be191: or edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be195: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007be198: ret  */ FN_RET(0x007be17c); r_esp += 4; return;
L_007be199:; BB(0x007be199);
    /* 007be199: ret  */ FN_RET(0x007be17c); r_esp += 4; return;
}

void f_007be19c(void) /* sub_7BE19C */
{
    FN_ENTER(0x007be19c);
    /* 007be19c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007be1a0: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be1a5u); f_006c1bd4();
    /* 007be1a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be1a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be1a8: je 0x7be1b9 */ if (fZ) goto L_007be1b9;
L_007be1aa:; BB(0x007be1aa);
    /* 007be1aa: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be1ad: test dword ptr [esp + 8], eax */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be1b1: je 0x7be1b9 */ if (fZ) goto L_007be1b9;
L_007be1b3:; BB(0x007be1b3);
    /* 007be1b3: mov eax, 1 */ r_eax = 0x1u;
    /* 007be1b8: ret  */ FN_RET(0x007be19c); r_esp += 4; return;
L_007be1b9:; BB(0x007be1b9);
    /* 007be1b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be1bb: ret  */ FN_RET(0x007be19c); r_esp += 4; return;
}

void f_007be1bc(void) /* sub_7BE1BC */
{
    FN_ENTER(0x007be1bc);
    /* 007be1bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be1bd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007be1c1: call 0x7be1d4 */ r_esp -= 4; W32(r_esp, 0x7be1c6u); f_007be1d4();
    /* 007be1c6: fld dword ptr [eax*4 + 0x97e4cc] */ FPUSH(R_F32((u32)(r_eax*4+0x97e4ccu)));
    /* 007be1cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be1ce: ret  */ FN_RET(0x007be1bc); r_esp += 4; return;
}

void f_007be1d0(void) /* sub_7BE1D0 */
{
    FN_ENTER(0x007be1d0);
    /* 007be1d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007be1d4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be1d7: jl 0x7be1de */ if ((fS!=fO)) goto L_007be1de;
L_007be1d9:; BB(0x007be1d9);
    /* 007be1d9: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
L_007be1de:; BB(0x007be1de);
    /* 007be1de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be1df: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be1e4u); f_006c1bd4();
    /* 007be1e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be1e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be1e7: je 0x7be1f5 */ if (fZ) goto L_007be1f5;
L_007be1e9:; BB(0x007be1e9);
    /* 007be1e9: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be1ec: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007be1f1: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007be1f4: ret  */ FN_RET(0x007be1d0); r_esp += 4; return;
L_007be1f5:; BB(0x007be1f5);
    /* 007be1f5: mov eax, 1 */ r_eax = 0x1u;
    /* 007be1fa: ret  */ FN_RET(0x007be1d0); r_esp += 4; return;
}

void f_007be1d4(void) /* sub_7BE1D4 */
{
    FN_ENTER(0x007be1d4);
    /* 007be1d4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be1d7: jl 0x7be1de */ if ((fS!=fO)) goto L_007be1de;
L_007be1d9:; BB(0x007be1d9);
    /* 007be1d9: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
L_007be1de:; BB(0x007be1de);
    /* 007be1de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be1df: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be1e4u); f_006c1bd4();
    /* 007be1e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be1e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be1e7: je 0x7be1f5 */ if (fZ) goto L_007be1f5;
L_007be1e9:; BB(0x007be1e9);
    /* 007be1e9: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be1ec: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007be1f1: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007be1f4: ret  */ FN_RET(0x007be1d4); r_esp += 4; return;
L_007be1f5:; BB(0x007be1f5);
    /* 007be1f5: mov eax, 1 */ r_eax = 0x1u;
    /* 007be1fa: ret  */ FN_RET(0x007be1d4); r_esp += 4; return;
}

void f_007be1fc(void) /* sub_7BE1FC */
{
    FN_ENTER(0x007be1fc);
    /* 007be1fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be1fd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007be201: call 0x7be214 */ r_esp -= 4; W32(r_esp, 0x7be206u); f_007be214();
    /* 007be206: mov eax, dword ptr [eax*4 + 0x97e4dc] */ r_eax = R32((u32)(r_eax*4+0x97e4dcu));
    /* 007be20d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be20e: ret  */ FN_RET(0x007be1fc); r_esp += 4; return;
}

void f_007be210(void) /* sub_7BE210 */
{
    FN_ENTER(0x007be210);
    /* 007be210: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007be214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be215: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be21au); f_006c1bd4();
    /* 007be21a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be21b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be21d: je 0x7be22b */ if (fZ) goto L_007be22b;
L_007be21f:; BB(0x007be21f);
    /* 007be21f: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be222: and eax, 0x1c00 */ {  u32 a = r_eax; u32 b = 0x1c00u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007be227: shr eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007be22a: ret  */ FN_RET(0x007be210); r_esp += 4; return;
L_007be22b:; BB(0x007be22b);
    /* 007be22b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be22d: ret  */ FN_RET(0x007be210); r_esp += 4; return;
}

void f_007be214(void) /* sub_7BE214 */
{
    FN_ENTER(0x007be214);
    /* 007be214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be215: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be21au); f_006c1bd4();
    /* 007be21a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be21b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be21d: je 0x7be22b */ if (fZ) goto L_007be22b;
L_007be21f:; BB(0x007be21f);
    /* 007be21f: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be222: and eax, 0x1c00 */ {  u32 a = r_eax; u32 b = 0x1c00u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007be227: shr eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007be22a: ret  */ FN_RET(0x007be214); r_esp += 4; return;
L_007be22b:; BB(0x007be22b);
    /* 007be22b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be22d: ret  */ FN_RET(0x007be214); r_esp += 4; return;
}

void f_007be230(void) /* sub_7BE230 */
{
    FN_ENTER(0x007be230);
    /* 007be230: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007be234: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be239u); f_006c1bd4();
    /* 007be239: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be23a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be23c: je 0x7be24a */ if (fZ) goto L_007be24a;
L_007be23e:; BB(0x007be23e);
    /* 007be23e: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be241: and eax, 0xe000 */ {  u32 a = r_eax; u32 b = 0xe000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007be246: shr eax, 0xd */ { u32 c = (13u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007be249: ret  */ FN_RET(0x007be230); r_esp += 4; return;
L_007be24a:; BB(0x007be24a);
    /* 007be24a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be24c: ret  */ FN_RET(0x007be230); r_esp += 4; return;
}

void f_007be250(void) /* sub_7BE250 */
{
    FN_ENTER(0x007be250);
    /* 007be250: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007be254: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be259u); f_006c1bd4();
    /* 007be259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be25a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be25c: je 0x7be26a */ if (fZ) goto L_007be26a;
L_007be25e:; BB(0x007be25e);
    /* 007be25e: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be261: and eax, 0x700000 */ {  u32 a = r_eax; u32 b = 0x700000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007be266: shr eax, 0x14 */ { u32 c = (20u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007be269: ret  */ FN_RET(0x007be250); r_esp += 4; return;
L_007be26a:; BB(0x007be26a);
    /* 007be26a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be26c: ret  */ FN_RET(0x007be250); r_esp += 4; return;
}

void f_007be270(void) /* sub_7BE270 */
{
    FN_ENTER(0x007be270);
    /* 007be270: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007be274: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7be279u); f_006c1bd4();
    /* 007be279: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be27a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be27c: je 0x7be28a */ if (fZ) goto L_007be28a;
L_007be27e:; BB(0x007be27e);
    /* 007be27e: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007be281: and eax, 0x30000 */ {  u32 a = r_eax; u32 b = 0x30000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007be286: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007be289: ret  */ FN_RET(0x007be270); r_esp += 4; return;
L_007be28a:; BB(0x007be28a);
    /* 007be28a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be28c: ret  */ FN_RET(0x007be270); r_esp += 4; return;
}

void f_007be290(void) /* sub_7BE290 */
{
    FN_ENTER(0x007be290);
    /* 007be290: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007be294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be296: je 0x7be2a0 */ if (fZ) goto L_007be2a0;
L_007be298:; BB(0x007be298);
    /* 007be298: mov dword ptr [eax + 0x10], 0x40058 */ W32((u32)(r_eax+0x10u), 0x40058u);
    /* 007be29f: ret  */ FN_RET(0x007be290); r_esp += 4; return;
L_007be2a0:; BB(0x007be2a0);
    /* 007be2a0: ret  */ FN_RET(0x007be290); r_esp += 4; return;
}

void f_007be2a4(void) /* sub_7BE2A4 */
{
    FN_ENTER(0x007be2a4);
    /* 007be2a4: mov dword ptr [ecx + 0x100c4], 0 */ W32((u32)(r_ecx+0x100c4u), 0x0u);
    /* 007be2ae: ret  */ FN_RET(0x007be2a4); r_esp += 4; return;
}

void f_007be2b0(void) /* sub_7BE2B0 */
{
    FN_ENTER(0x007be2b0);
    /* 007be2b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be2b1: mov edx, dword ptr [ecx + 0x100c4] */ r_edx = R32((u32)(r_ecx+0x100c4u));
    /* 007be2b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be2b9: jle 0x7be2d9 */ if ((fZ||fS!=fO)) goto L_007be2d9;
L_007be2bb:; BB(0x007be2bb);
    /* 007be2bb: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007be2be: je 0x7be2cc */ if (fZ) goto L_007be2cc;
L_007be2c0:; BB(0x007be2c0);
    /* 007be2c0: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be2c3: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007be2c6: mov dword ptr [ecx + 0x100c4], edx */ W32((u32)(r_ecx+0x100c4u), r_edx);
L_007be2cc:; BB(0x007be2cc);
    /* 007be2cc: lea esi, [ecx + 0x100c8] */ r_esi = (u32)(r_ecx+0x100c8u);
    /* 007be2d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007be2d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be2d4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007be2d6: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x7be2d9u); call_ind(t); }
L_007be2d9:; BB(0x007be2d9);
    /* 007be2d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007be2da: ret  */ FN_RET(0x007be2b0); r_esp += 4; return;
}

void f_007be2dc(void) /* sub_7BE2DC */
{
    FN_ENTER(0x007be2dc);
    /* 007be2dc: push dword ptr [0xaae6fc] */ { u32 v = R32((u32)(0xaae6fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007be2e2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7be2e7u); f_00857e98();
    /* 007be2e7: mov dword ptr [0xaae6fc], 0 */ W32((u32)(0xaae6fcu), 0x0u);
    /* 007be2f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be2f2: ret  */ FN_RET(0x007be2dc); r_esp += 4; return;
}

void f_007be2f4(void) /* sub_7BE2F4 */
{
    FN_ENTER(0x007be2f4);
    /* 007be2f4: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 007be2f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be2fb: mov dword ptr [0xaae6f8], eax */ W32((u32)(0xaae6f8u), r_eax);
    /* 007be300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be301: push dword ptr [0xaae6fc] */ { u32 v = R32((u32)(0xaae6fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007be307: mov dword ptr [0xaae6f0], eax */ W32((u32)(0xaae6f0u), r_eax);
    /* 007be30c: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x7be311u); f_0086b5cc();
    /* 007be311: mov dword ptr [0xaae6f4], 1 */ W32((u32)(0xaae6f4u), 0x1u);
    /* 007be31b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be31e: ret  */ FN_RET(0x007be2f4); r_esp += 4; return;
}

void f_007be320(void) /* sub_7BE320 */
{
    FN_ENTER(0x007be320);
    /* 007be320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007be321: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007be322: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007be326: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 007be32a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be32b: call 0x77f548 */ r_esp -= 4; W32(r_esp, 0x7be330u); f_0077f548();
    /* 007be330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be331: mov edx, dword ptr [0xaae6f8] */ r_edx = R32((u32)(0xaae6f8u));
    /* 007be337: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 007be33a: lea eax, [edx + ebx] */ r_eax = (u32)(r_edx+r_ebx);
    /* 007be33d: cmp eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007be342: jle 0x7be347 */ if ((fZ||fS!=fO)) goto L_007be347;
L_007be344:; BB(0x007be344);
    /* 007be344: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be345: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007be346: ret  */ FN_RET(0x007be320); r_esp += 4; return;
L_007be347:; BB(0x007be347);
    /* 007be347: mov eax, dword ptr [0xaae6fc] */ r_eax = R32((u32)(0xaae6fcu));
    /* 007be34c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007be34d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007be34e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be351: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7be356u); f_0086b6b8();
    /* 007be356: add dword ptr [0xaae6f8], ebx */ { u32 ad = (u32)(0xaae6f8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007be35c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be35f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be360: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007be361: ret  */ FN_RET(0x007be320); r_esp += 4; return;
}

void f_007be364(void) /* sub_7BE364 */
{
    FN_ENTER(0x007be364);
    /* 007be364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be365: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007be366: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be368: mov dword ptr [0xaae6f8], 0 */ W32((u32)(0xaae6f8u), 0x0u);
    /* 007be372: mov esi, eax */ r_esi = r_eax;
    /* 007be374: mov dword ptr [0xaae6f4], 2 */ W32((u32)(0xaae6f4u), 0x2u);
L_007be37e:; BB(0x007be37e);
    /* 007be37e: add esi, dword ptr [0xaae6fc] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaae6fcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007be384: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 007be387: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007be388: call 0x77f548 */ r_esp -= 4; W32(r_esp, 0x7be38du); f_0077f548();
    /* 007be38d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007be38e: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 007be392: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 007be395: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007be397: je 0x7be3bb */ if (fZ) goto L_007be3bb;
L_007be399:; BB(0x007be399);
    /* 007be399: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007be39f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be3a0: call 0x7d3470 */ r_esp -= 4; W32(r_esp, 0x7be3a5u); f_007d3470();
    /* 007be3a5: mov esi, dword ptr [0xaae6f8] */ r_esi = R32((u32)(0xaae6f8u));
    /* 007be3ab: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007be3ad: mov dword ptr [0xaae6f8], esi */ W32((u32)(0xaae6f8u), r_esi);
    /* 007be3b3: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007be3b9: jl 0x7be37e */ if ((fS!=fO)) goto L_007be37e;
L_007be3bb:; BB(0x007be3bb);
    /* 007be3bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be3bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007be3bd: ret  */ FN_RET(0x007be364); r_esp += 4; return;
}

void f_007be3c0(void) /* sub_7BE3C0 */
{
    FN_ENTER(0x007be3c0);
    /* 007be3c0: mov dword ptr [0xaae6e4], 0x3f800000 */ W32((u32)(0xaae6e4u), 0x3f800000u);
    /* 007be3ca: mov dword ptr [0xaae6e8], 0x41000000 */ W32((u32)(0xaae6e8u), 0x41000000u);
    /* 007be3d4: mov dword ptr [0xaae6ec], 0x3fc00000 */ W32((u32)(0xaae6ecu), 0x3fc00000u);
    /* 007be3de: ret  */ FN_RET(0x007be3c0); r_esp += 4; return;
}

void f_007be3e0(void) /* sub_7BE3E0 */
{
    FN_ENTER(0x007be3e0);
    /* 007be3e0: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 007be3e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be3e7: mov dword ptr [0xaae6f8], eax */ W32((u32)(0xaae6f8u), r_eax);
    /* 007be3ec: mov dword ptr [0xaae6f0], eax */ W32((u32)(0xaae6f0u), r_eax);
    /* 007be3f1: mov dword ptr [0xaae6f4], eax */ W32((u32)(0xaae6f4u), r_eax);
    /* 007be3f6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7be3fbu); f_008581c5();
    /* 007be3fb: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 007be400: mov dword ptr [0xaae6fc], eax */ W32((u32)(0xaae6fcu), r_eax);
    /* 007be405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007be407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007be408: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x7be40du); f_0086b5cc();
    /* 007be40d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be410: ret  */ FN_RET(0x007be3e0); r_esp += 4; return;
}

void f_007be414(void) /* sub_7BE414 */
{
    FN_ENTER(0x007be414);
    /* 007be414: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007be415: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be416: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007be417: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007be41a: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 007be41e: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 007be422: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007be426: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be428: je 0x7be682 */ if (fZ) goto L_007be682;
L_007be42e:; BB(0x007be42e);
    /* 007be42e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be431: jle 0x7be682 */ if ((fZ||fS!=fO)) goto L_007be682;
L_007be437:; BB(0x007be437);
    /* 007be437: fld dword ptr [0x97e50c] */ FPUSH(R_F32((u32)(0x97e50cu)));
    /* 007be43d: fld dword ptr [0x97e50c] */ FPUSH(R_F32((u32)(0x97e50cu)));
    /* 007be443: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be445: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007be447: jle 0x7be6a0 */ if ((fZ||fS!=fO)) goto L_007be6a0;
L_007be44d:; BB(0x007be44d);
    /* 007be44d: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be450: jl 0x7be484 */ if ((fS!=fO)) goto L_007be484;
L_007be452:; BB(0x007be452);
    /* 007be452: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 007be456: lea edi, [ebp - 6] */ r_edi = (u32)(r_ebp+0xfffffffau);
    /* 007be459: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007be45c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be45e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be460: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007be462:; BB(0x007be462);
    /* 007be462: fadd dword ptr [edx + esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi+0xcu));
    /* 007be466: fadd dword ptr [edx + esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi+0x1cu));
    /* 007be46a: fadd dword ptr [edx + esi + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi+0x2cu));
    /* 007be46e: fadd dword ptr [edx + esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi+0x3cu));
    /* 007be472: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be475: fadd dword ptr [edx + esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi+0x4cu));
    /* 007be479: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be47c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be47e: jle 0x7be462 */ if ((fZ||fS!=fO)) goto L_007be462;
L_007be480:; BB(0x007be480);
    /* 007be480: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_007be484:; BB(0x007be484);
    /* 007be484: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007be487: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be489: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be48b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007be48d:; BB(0x007be48d);
    /* 007be48d: fadd dword ptr [edx + esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi+0xcu));
    /* 007be491: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be494: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be497: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be499: jl 0x7be48d */ if ((fS!=fO)) goto L_007be48d;
L_007be49b:; BB(0x007be49b);
    /* 007be49b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007be49d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007be49f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007be4a0: je 0x7be6a6 */ if (fZ) goto L_007be6a6;
L_007be4a6:; BB(0x007be4a6);
    /* 007be4a6: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 007be4aa: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007be4ae: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007be4b2: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 007be4b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be4b8: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007be4bc: jne 0x7be4ec */ if (!fZ) goto L_007be4ec;
L_007be4be:; BB(0x007be4be);
    /* 007be4be: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007be4c2: fld dword ptr [esi + edx*8 - 4] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0xfffffffcu)));
    /* 007be4c6: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 007be4c8: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007be4cc: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007be4d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007be4d6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007be4da: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007be4de: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007be4e2: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007be4e6: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 007be4ea: jmp 0x7be510 */ goto L_007be510;
L_007be4ec:; BB(0x007be4ec);
    /* 007be4ec: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007be4ee: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007be4f2: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007be4f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007be4fc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007be500: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007be504: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007be508: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007be50c: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_007be510:; BB(0x007be510);
    /* 007be510: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007be514: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007be518: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007be51d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007be522: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007be526: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007be52a: fist dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0)));
    /* 007be52e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007be532: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be534: fchs  */ ST(0) = -ST(0);
    /* 007be536: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007be53a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007be53b: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x007be53b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007be53b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007be53d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be53f: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007be543: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 007be547: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007be549: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007be54b: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007be54f: jne 0x7be57f */ if (!fZ) goto L_007be57f;
L_007be551:; BB(0x007be551);
    /* 007be551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be553: je 0x7be57f */ if (fZ) goto L_007be57f;
L_007be555:; BB(0x007be555);
    /* 007be555: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be557: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 007be55b: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007be55f: mov edx, dword ptr [esi + eax*8 - 0x10] */ r_edx = R32((u32)(r_esi+r_eax*8+0xfffffff0u));
    /* 007be563: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 007be565: mov ecx, dword ptr [esi + eax*8 - 0xc] */ r_ecx = R32((u32)(r_esi+r_eax*8+0xfffffff4u));
    /* 007be569: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 007be56c: mov ebp, dword ptr [esi + eax*8 - 8] */ r_ebp = R32((u32)(r_esi+r_eax*8+0xfffffff8u));
    /* 007be570: mov dword ptr [edi + 8], ebp */ W32((u32)(r_edi+0x8u), r_ebp);
    /* 007be573: mov eax, 1 */ r_eax = 0x1u;
    /* 007be578: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be57b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007be57c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007be57d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007be57e: ret  */ FN_RET(0x007be414); r_esp += 4; return;
L_007be57f:; BB(0x007be57f);
    /* 007be57f: fld dword ptr [0x97e50c] */ FPUSH(R_F32((u32)(0x97e50cu)));
    /* 007be585: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007be587: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007be589: jle 0x7be6ac */ if ((fZ||fS!=fO)) goto L_007be6ac;
L_007be58f:; BB(0x007be58f);
    /* 007be58f: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007be593: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007be596: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be598: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be59a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007be59c:; BB(0x007be59c);
    /* 007be59c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be59e: fadd dword ptr [edx + esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi+0xcu));
    /* 007be5a2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007be5a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007be5a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007be5a7: jae 0x7be68b */ if (!fC) goto L_007be68b;
L_007be5ad:; BB(0x007be5ad);
    /* 007be5ad: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be5af: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007be5b1: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007be5b4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007be5b7: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be5b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be5bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be5bd: jl 0x7be59c */ if ((fS!=fO)) goto L_007be59c;
L_007be5bf:; BB(0x007be5bf);
    /* 007be5bf: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be5c1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be5c3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007be5c5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007be5c7:; BB(0x007be5c7);
    /* 007be5c7: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007be5ca: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 007be5cd: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be5cf: jne 0x7be5f8 */ if (!fZ) goto L_007be5f8;
L_007be5d1:; BB(0x007be5d1);
    /* 007be5d1: fld dword ptr [esi + edx*8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8)));
    /* 007be5d4: fld dword ptr [esi + edx*8 + 4] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x4u)));
    /* 007be5d8: fld dword ptr [esi + edx*8 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x8u)));
    /* 007be5dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be5de: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007be5e2: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007be5e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be5e6: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007be5ea: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 007be5ed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be5ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007be5f3: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 007be5f6: jmp 0x7be621 */ goto L_007be621;
L_007be5f8:; BB(0x007be5f8);
    /* 007be5f8: fld dword ptr [esi + edx*8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8)));
    /* 007be5fb: fld dword ptr [esi + edx*8 + 4] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x4u)));
    /* 007be5ff: fld dword ptr [esi + edx*8 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x8u)));
    /* 007be603: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be605: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007be609: fld dword ptr [esi + edx*8 + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x10u)));
    /* 007be60d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be60f: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007be613: fld dword ptr [esi + edx*8 + 0x14] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x14u)));
    /* 007be617: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be619: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007be61d: fld dword ptr [esi + edx*8 + 0x18] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x18u)));
L_007be621:; BB(0x007be621);
    /* 007be621: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be623: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 007be627: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be629: fsub dword ptr [esp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x40u));
    /* 007be62d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be62f: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 007be633: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007be635: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007be638: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007be63c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007be640: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007be643: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7be648u); f_0082df08();
    /* 007be648: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be64a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007be64d: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007be651: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007be653: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be655: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 007be659: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be65b: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 007be65f: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 007be661: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007be665: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007be667: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 007be66b: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 007be66e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007be672: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007be674: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 007be678: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 007be67b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be67e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007be67f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007be680: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007be681: ret  */ FN_RET(0x007be414); r_esp += 4; return;
L_007be682:; BB(0x007be682);
    /* 007be682: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be684: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be687: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007be688: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007be689: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007be68a: ret  */ FN_RET(0x007be414); r_esp += 4; return;
L_007be68b:; BB(0x007be68b);
    /* 007be68b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be68d: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007be691: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007be693: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007be697: mov edi, ecx */ r_edi = r_ecx;
    /* 007be699: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be69b: jmp 0x7be5c7 */ goto L_007be5c7;
L_007be6a0:; BB(0x007be6a0);
    /* 007be6a0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be6a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be6a4: jmp 0x7be682 */ goto L_007be682;
L_007be6a6:; BB(0x007be6a6);
    /* 007be6a6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be6a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be6aa: jmp 0x7be682 */ goto L_007be682;
L_007be6ac:; BB(0x007be6ac);
    /* 007be6ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be6ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be6b0: jmp 0x7be5c7 */ goto L_007be5c7;
}

void f_007be6b8(void) /* sub_7BE6B8 */
{
    FN_ENTER(0x007be6b8);
    /* 007be6b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007be6b9: mov ebx, esp */ r_ebx = r_esp;
    /* 007be6bb: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007be6be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007be6bf: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007be6c2: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 007be6c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be6c8: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 007be6cb: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 007be6ce: jle 0x7be8c8 */ if ((fZ||fS!=fO)) goto L_007be8c8;
L_007be6d4:; BB(0x007be6d4);
    /* 007be6d4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007be6d6: fld dword ptr [0x97e508] */ FPUSH(R_F32((u32)(0x97e508u)));
    /* 007be6dc: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 007be6de: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 007be6e1: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 007be6e4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be6e6: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 007be6ec: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 007be6f3: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 007be6fa: mov edx, 0 */ r_edx = 0x0u;
    /* 007be6ff: jne 0x7be7ce */ if (!fZ) goto L_007be7ce;
L_007be705:; BB(0x007be705);
    /* 007be705: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007be707: jl 0x7be8e3 */ if ((fS!=fO)) goto L_007be8e3;
L_007be70d:; BB(0x007be70d);
    /* 007be70d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be70f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007be713: mov esi, edx */ r_esi = r_edx;
    /* 007be715: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007be719: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 007be71d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be71f: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 007be723: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007be726: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be728: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be72a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be72c: add eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be72f: mov edi, eax */ r_edi = r_eax;
L_007be731:; BB(0x007be731);
    /* 007be731: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 007be735: mov edx, esi */ r_edx = r_esi;
    /* 007be737: call 0x844858 */ r_esp -= 4; W32(r_esp, 0x7be73cu); f_00844858();
    /* 007be73c: mov ebp, eax */ r_ebp = r_eax;
    /* 007be73e: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 007be741: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007be744: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 007be748: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 007be74c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007be750: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7be755u); f_0084d1d4();
    /* 007be755: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007be759: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 007be75d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be75f: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007be763: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007be766: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007be768: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007be76c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007be770: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007be774: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7be779u); f_0084d1d4();
    /* 007be779: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 007be77c: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007be77e: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 007be782: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007be786: fmul qword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x30u));
    /* 007be78a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007be78c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007be78f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007be791: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 007be793: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007be797: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 007be799: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007be79c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007be79e: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 007be7a1: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 007be7a4: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 007be7a7: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007be7aa: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 007be7ad: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 007be7b0: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be7b2: jle 0x7be731 */ if ((fZ||fS!=fO)) goto L_007be731;
L_007be7b8:; BB(0x007be7b8);
    /* 007be7b8: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 007be7bc: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 007be7c0: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 007be7c3: fld dword ptr [0x97e508] */ FPUSH(R_F32((u32)(0x97e508u)));
    /* 007be7c9: jmp 0x7be8c1 */ goto L_007be8c1;
L_007be7ce:; BB(0x007be7ce);
    /* 007be7ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007be7d0: jl 0x7be8e7 */ if ((fS!=fO)) goto L_007be8e7;
L_007be7d6:; BB(0x007be7d6);
    /* 007be7d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be7d8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007be7dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be7de: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007be7e2: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 007be7e6: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 007be7ea: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007be7ed: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007be7ef: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007be7f1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007be7f3: mov edi, edx */ r_edi = r_edx;
L_007be7f5:; BB(0x007be7f5);
    /* 007be7f5: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 007be7f8: mov edx, edi */ r_edx = r_edi;
    /* 007be7fa: call 0x844858 */ r_esp -= 4; W32(r_esp, 0x7be7ffu); f_00844858();
    /* 007be7ff: mov ebp, eax */ r_ebp = r_eax;
    /* 007be801: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 007be804: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007be807: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 007be80b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007be80f: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007be813: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7be818u); f_0084d1d4();
    /* 007be818: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007be81c: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 007be820: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be822: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007be826: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007be829: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007be82b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007be82e: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007be832: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007be836: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007be83a: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7be83fu); f_0084d1d4();
    /* 007be83f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007be843: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 007be847: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007be84b: fmul qword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x30u));
    /* 007be84f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007be851: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be853: jne 0x7be879 */ if (!fZ) goto L_007be879;
L_007be855:; BB(0x007be855);
    /* 007be855: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007be858: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 007be85b: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007be85d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007be85f: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 007be861: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 007be863: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 007be866: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007be868: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 007be86b: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 007be86e: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 007be871: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 007be874: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 007be877: jmp 0x7be89e */ goto L_007be89e;
L_007be879:; BB(0x007be879);
    /* 007be879: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007be87c: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 007be87f: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 007be882: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007be884: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 007be886: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 007be888: fld dword ptr [esi + eax + 4] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x4u)));
    /* 007be88c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007be88e: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 007be891: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 007be894: fmul dword ptr [esi + eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_eax+0x8u));
    /* 007be898: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 007be89b: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
L_007be89e:; BB(0x007be89e);
    /* 007be89e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007be8a2: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007be8a5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007be8a8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be8aa: jle 0x7be7f5 */ if ((fZ||fS!=fO)) goto L_007be7f5;
L_007be8b0:; BB(0x007be8b0);
    /* 007be8b0: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 007be8b4: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 007be8b8: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 007be8bb: fld dword ptr [0x97e508] */ FPUSH(R_F32((u32)(0x97e508u)));
L_007be8c1:; BB(0x007be8c1);
    /* 007be8c1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007be8c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007be8c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007be8c6: je 0x7be8d4 */ if (fZ) goto L_007be8d4;
L_007be8c8:; BB(0x007be8c8);
    /* 007be8c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be8ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be8cc: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be8cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007be8d0: mov esp, ebx */ r_esp = r_ebx;
    /* 007be8d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be8d3: ret  */ FN_RET(0x007be6b8); r_esp += 4; return;
L_007be8d4:; BB(0x007be8d4);
    /* 007be8d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be8d6: mov eax, 1 */ r_eax = 0x1u;
    /* 007be8db: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be8de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007be8df: mov esp, ebx */ r_esp = r_ebx;
    /* 007be8e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be8e2: ret  */ FN_RET(0x007be6b8); r_esp += 4; return;
L_007be8e3:; BB(0x007be8e3);
    /* 007be8e3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be8e5: jmp 0x7be8c1 */ goto L_007be8c1;
L_007be8e7:; BB(0x007be8e7);
    /* 007be8e7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be8e9: jmp 0x7be8c1 */ goto L_007be8c1;
}

void f_007be8ec(void) /* sub_7BE8EC */
{
    FN_ENTER(0x007be8ec);
    /* 007be8ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007be8ed: mov ebx, esp */ r_ebx = r_esp;
    /* 007be8ef: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007be8f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007be8f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007be8f4: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007be8f7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 007be8fa: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 007be8fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be8ff: je 0x7bebc1 */ if (fZ) goto L_007bebc1;
L_007be905:; BB(0x007be905);
    /* 007be905: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be908: jle 0x7bebc1 */ if ((fZ||fS!=fO)) goto L_007bebc1;
L_007be90e:; BB(0x007be90e);
    /* 007be90e: fld dword ptr [0x97e500] */ FPUSH(R_F32((u32)(0x97e500u)));
    /* 007be914: fld dword ptr [0x97e500] */ FPUSH(R_F32((u32)(0x97e500u)));
    /* 007be91a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be91c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007be91e: jle 0x7bebd3 */ if ((fZ||fS!=fO)) goto L_007bebd3;
L_007be924:; BB(0x007be924);
    /* 007be924: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be927: jl 0x7be95b */ if ((fS!=fO)) goto L_007be95b;
L_007be929:; BB(0x007be929);
    /* 007be929: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 007be92d: lea edi, [ecx - 6] */ r_edi = (u32)(r_ecx+0xfffffffau);
    /* 007be930: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 007be933: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007be935: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007be937: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_007be939:; BB(0x007be939);
    /* 007be939: fadd dword ptr [ebp + edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx+0xcu));
    /* 007be93d: fadd dword ptr [ebp + edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx+0x1cu));
    /* 007be941: fadd dword ptr [ebp + edx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx+0x2cu));
    /* 007be945: fadd dword ptr [ebp + edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx+0x3cu));
    /* 007be949: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be94c: fadd dword ptr [ebp + edx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx+0x4cu));
    /* 007be950: add ebp, 0x50 */ {  u32 a = r_ebp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007be953: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be955: jle 0x7be939 */ if ((fZ||fS!=fO)) goto L_007be939;
L_007be957:; BB(0x007be957);
    /* 007be957: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_007be95b:; BB(0x007be95b);
    /* 007be95b: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 007be95f: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 007be962: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007be964: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007be966: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_007be968:; BB(0x007be968);
    /* 007be968: fadd dword ptr [ebp + edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx+0xcu));
    /* 007be96c: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007be96f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007be972: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be974: jl 0x7be968 */ if ((fS!=fO)) goto L_007be968;
L_007be976:; BB(0x007be976);
    /* 007be976: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007be978: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007be97a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be97c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007be97e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007be97f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007be983: je 0x7bebd9 */ if (fZ) goto L_007bebd9;
L_007be989:; BB(0x007be989);
    /* 007be989: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 007be98c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be98e: jne 0x7be997 */ if (!fZ) goto L_007be997;
L_007be990:; BB(0x007be990);
    /* 007be990: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007be993: fsub dword ptr [edx + eax*8 - 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax*8+0xfffffffcu));
L_007be997:; BB(0x007be997);
    /* 007be997: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 007be99a: fld dword ptr [0x97e4fc] */ FPUSH(R_F32((u32)(0x97e4fcu)));
    /* 007be9a0: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 007be9a4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 007be9a8: fmul dword ptr [ebx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x10u));
    /* 007be9ab: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 007be9ad: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007be9af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007be9b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007be9b2: ja 0x7be9c6 */ if ((!fC&&!fZ)) goto L_007be9c6;
L_007be9b4:; BB(0x007be9b4);
    /* 007be9b4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be9b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007be9b8: mov eax, 1 */ r_eax = 0x1u;
    /* 007be9bd: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be9c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007be9c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007be9c2: mov esp, ebx */ r_esp = r_ebx;
    /* 007be9c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be9c5: ret  */ FN_RET(0x007be8ec); r_esp += 4; return;
L_007be9c6:; BB(0x007be9c6);
    /* 007be9c6: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007be9c9: jle 0x7bebb2 */ if ((fZ||fS!=fO)) goto L_007bebb2;
L_007be9cf:; BB(0x007be9cf);
    /* 007be9cf: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007be9d1: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007be9d3: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 007be9d6: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 007be9d9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007be9db: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
    /* 007be9de: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007be9e0: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 007be9e3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007be9e5: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 007be9e8: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 007be9eb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007be9ed: jne 0x7beab7 */ if (!fZ) goto L_007beab7;
L_007be9f3:; BB(0x007be9f3);
    /* 007be9f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007be9f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007be9f7: jl 0x7bebdd */ if ((fS!=fO)) goto L_007bebdd;
L_007be9fd:; BB(0x007be9fd);
    /* 007be9fd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007be9ff: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007bea03: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007bea07: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007bea0b: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 007bea0f: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 007bea12: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bea14: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bea16: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bea18: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bea1a: mov esi, ecx */ r_esi = r_ecx;
L_007bea1c:; BB(0x007bea1c);
    /* 007bea1c: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 007bea20: mov edx, esi */ r_edx = r_esi;
    /* 007bea22: call 0x844858 */ r_esp -= 4; W32(r_esp, 0x7bea27u); f_00844858();
    /* 007bea27: mov ebp, eax */ r_ebp = r_eax;
    /* 007bea29: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007bea2d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007bea30: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007bea34: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007bea38: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007bea3c: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7bea41u); f_0084d1d4();
    /* 007bea41: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007bea45: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007bea49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bea4b: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007bea4f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007bea52: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007bea54: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bea58: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007bea5c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007bea60: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7bea65u); f_0084d1d4();
    /* 007bea65: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007bea68: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007bea6a: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 007bea6e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007bea72: fmul qword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x30u));
    /* 007bea76: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007bea78: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bea7b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bea7d: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 007bea7f: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007bea83: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007bea85: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007bea88: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007bea8a: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 007bea8d: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 007bea90: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 007bea93: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bea96: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 007bea99: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 007bea9c: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bea9e: jle 0x7bea1c */ if ((fZ||fS!=fO)) goto L_007bea1c;
L_007beaa4:; BB(0x007beaa4);
    /* 007beaa4: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007beaa8: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007beaac: fld dword ptr [0x97e4fc] */ FPUSH(R_F32((u32)(0x97e4fcu)));
    /* 007beab2: jmp 0x7beba7 */ goto L_007beba7;
L_007beab7:; BB(0x007beab7);
    /* 007beab7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007beab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007beabb: jl 0x7bebe1 */ if ((fS!=fO)) goto L_007bebe1;
L_007beac1:; BB(0x007beac1);
    /* 007beac1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007beac3: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007beac7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007beacb: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007beacf: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 007bead3: lea ebp, [edi + edi] */ r_ebp = (u32)(r_edi+r_edi);
    /* 007bead6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007bead8: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007beada: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_007beadc:; BB(0x007beadc);
    /* 007beadc: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 007beadf: mov edx, edi */ r_edx = r_edi;
    /* 007beae1: call 0x844858 */ r_esp -= 4; W32(r_esp, 0x7beae6u); f_00844858();
    /* 007beae6: mov esi, eax */ r_esi = r_eax;
    /* 007beae8: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007beaec: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007beaef: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 007beaf3: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007beaf7: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007beafb: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7beb00u); f_0084d1d4();
    /* 007beb00: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007beb04: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 007beb08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007beb0a: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007beb0e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 007beb11: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007beb13: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007beb16: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007beb1a: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007beb1e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007beb22: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x7beb27u); f_0084d1d4();
    /* 007beb27: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007beb2b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007beb2f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007beb33: fmul qword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x30u));
    /* 007beb37: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007beb39: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007beb3b: jne 0x7beb61 */ if (!fZ) goto L_007beb61;
L_007beb3d:; BB(0x007beb3d);
    /* 007beb3d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007beb40: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 007beb43: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007beb45: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007beb47: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 007beb49: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 007beb4b: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 007beb4e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007beb50: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 007beb53: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 007beb56: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 007beb59: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 007beb5c: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 007beb5f: jmp 0x7beb87 */ goto L_007beb87;
L_007beb61:; BB(0x007beb61);
    /* 007beb61: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007beb64: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 007beb67: fld dword ptr [ebp + eax] */ FPUSH(R_F32((u32)(r_ebp+r_eax)));
    /* 007beb6b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007beb6d: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 007beb6f: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 007beb71: fld dword ptr [ebp + eax + 4] */ FPUSH(R_F32((u32)(r_ebp+r_eax+0x4u)));
    /* 007beb75: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007beb77: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 007beb7a: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 007beb7d: fmul dword ptr [ebp + eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+r_eax+0x8u));
    /* 007beb81: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 007beb84: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
L_007beb87:; BB(0x007beb87);
    /* 007beb87: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007beb8b: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007beb8e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007beb91: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007beb93: jle 0x7beadc */ if ((fZ||fS!=fO)) goto L_007beadc;
L_007beb99:; BB(0x007beb99);
    /* 007beb99: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007beb9d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007beba1: fld dword ptr [0x97e4fc] */ FPUSH(R_F32((u32)(0x97e4fcu)));
L_007beba7:; BB(0x007beba7);
    /* 007beba7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007beba9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bebab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bebac: je 0x7bebcc */ if (fZ) goto L_007bebcc;
L_007bebae:; BB(0x007bebae);
    /* 007bebae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bebb0: jmp 0x7bebb8 */ goto L_007bebb8;
L_007bebb2:; BB(0x007bebb2);
    /* 007bebb2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007bebb4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bebb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007bebb8:; BB(0x007bebb8);
    /* 007bebb8: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bebbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bebbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bebbd: mov esp, ebx */ r_esp = r_ebx;
    /* 007bebbf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bebc0: ret  */ FN_RET(0x007be8ec); r_esp += 4; return;
L_007bebc1:; BB(0x007bebc1);
    /* 007bebc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bebc3: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bebc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bebc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bebc8: mov esp, ebx */ r_esp = r_ebx;
    /* 007bebca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bebcb: ret  */ FN_RET(0x007be8ec); r_esp += 4; return;
L_007bebcc:; BB(0x007bebcc);
    /* 007bebcc: mov eax, 1 */ r_eax = 0x1u;
    /* 007bebd1: jmp 0x7bebb8 */ goto L_007bebb8;
L_007bebd3:; BB(0x007bebd3);
    /* 007bebd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bebd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bebd7: jmp 0x7bebc1 */ goto L_007bebc1;
L_007bebd9:; BB(0x007bebd9);
    /* 007bebd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bebdb: jmp 0x7bebc1 */ goto L_007bebc1;
L_007bebdd:; BB(0x007bebdd);
    /* 007bebdd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bebdf: jmp 0x7beba7 */ goto L_007beba7;
L_007bebe1:; BB(0x007bebe1);
    /* 007bebe1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bebe3: jmp 0x7beba7 */ goto L_007beba7;
}

void f_007bebe8(void) /* sub_7BEBE8 */
{
    FN_ENTER(0x007bebe8);
    /* 007bebe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bebe9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bebeb: mov ebx, eax */ r_ebx = r_eax;
L_007bebed:; BB(0x007bebed);
    /* 007bebed: lea ecx, [ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+0xaae75cu);
    /* 007bebf3: call 0x7c12f8 */ r_esp -= 4; W32(r_esp, 0x7bebf8u); f_007c12f8();
    /* 007bebf8: add ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bebfb: cmp ebx, 0x190 */ {  u32 a = r_ebx; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bec01: jl 0x7bebed */ if ((fS!=fO)) goto L_007bebed;
L_007bec03:; BB(0x007bec03);
    /* 007bec03: mov ecx, dword ptr [0xaae96c] */ r_ecx = R32((u32)(0xaae96cu));
    /* 007bec09: mov edx, 0xaae8ec */ r_edx = 0xaae8ecu;
    /* 007bec0e: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 007bec11: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bec13: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bec15: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bec17: lea eax, [eax + eax + 0xaae75c] */ r_eax = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007bec1e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007bec20: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007bec22: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007bec25: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007bec28: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007bec2b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007bec2e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007bec31: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007bec34: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007bec37: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007bec3a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007bec3d: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007bec40: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007bec43: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007bec46: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007bec49: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007bec4c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007bec4f: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007bec52: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007bec55: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007bec58: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007bec5b: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007bec5e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007bec61: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007bec64: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007bec67: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007bec6a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007bec6d: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007bec70: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007bec73: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007bec76: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007bec79: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007bec7c: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007bec7f: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007bec82: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007bec85: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007bec88: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007bec8b: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 007bec8e: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007bec91: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 007bec94: mov byte ptr [0xaae93c], 0 */ W8((u32)(0xaae93cu), 0x0u);
    /* 007bec9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bec9c: ret  */ FN_RET(0x007bebe8); r_esp += 4; return;
}

void f_007beca0(void) /* sub_7BECA0 */
{
    FN_ENTER(0x007beca0);
    /* 007beca0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7beca5u); f_006dc358();
    /* 007beca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007beca7: je 0x7becb0 */ if (fZ) goto L_007becb0;
L_007beca9:; BB(0x007beca9);
    /* 007beca9: mov byte ptr [0xaae944], 1 */ W8((u32)(0xaae944u), 0x1u);
L_007becb0:; BB(0x007becb0);
    /* 007becb0: movsx eax, byte ptr [0xaae944] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaae944u));
    /* 007becb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007becb9: je 0x7becc4 */ if (fZ) goto L_007becc4;
L_007becbb:; BB(0x007becbb);
    /* 007becbb: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7becc0u); f_006dc358();
    /* 007becc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007becc2: je 0x7becc7 */ if (fZ) goto L_007becc7;
L_007becc4:; BB(0x007becc4);
    /* 007becc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007becc6: ret  */ FN_RET(0x007beca0); r_esp += 4; return;
L_007becc7:; BB(0x007becc7);
    /* 007becc7: mov byte ptr [0xaae944], 0 */ W8((u32)(0xaae944u), 0x0u);
    /* 007becce: mov eax, 1 */ r_eax = 0x1u;
    /* 007becd3: ret  */ FN_RET(0x007beca0); r_esp += 4; return;
}

void f_007becd4(void) /* sub_7BECD4 */
{
    FN_ENTER(0x007becd4);
    /* 007becd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007becd5: mov ebx, esp */ r_ebx = r_esp;
    /* 007becd7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007becda: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007becdb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007becdc: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bece2: mov eax, dword ptr [0xa0f6f0] */ r_eax = R32((u32)(0xa0f6f0u));
    /* 007bece7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bece9: jne 0x7becf7 */ if (!fZ) goto L_007becf7;
L_007beceb:; BB(0x007beceb);
    /* 007beceb: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007becf1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007becf2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007becf3: mov esp, ebx */ r_esp = r_ebx;
    /* 007becf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007becf6: ret  */ FN_RET(0x007becd4); r_esp += 4; return;
L_007becf7:; BB(0x007becf7);
    /* 007becf7: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 007becfb: mov eax, 0xaae720 */ r_eax = 0xaae720u;
    /* 007bed00: mov esi, 0xa0f728 */ r_esi = 0xa0f728u;
    /* 007bed05: mov edi, 0xaae734 */ r_edi = 0xaae734u;
    /* 007bed0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007bed0c: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 007bed10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bed12: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007bed16: mov ebp, eax */ r_ebp = r_eax;
L_007bed18:; BB(0x007bed18);
    /* 007bed18: mov edx, esi */ r_edx = r_esi;
    /* 007bed1a: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 007bed1c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bed1f: call 0x83a9e0 */ r_esp -= 4; W32(r_esp, 0x7bed24u); f_0083a9e0();
    /* 007bed24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bed25: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007bed28: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007bed2a: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007bed2d: je 0x7bed4c */ if (fZ) goto L_007bed4c;
L_007bed2f:; BB(0x007bed2f);
    /* 007bed2f: mov edx, ebp */ r_edx = r_ebp;
    /* 007bed31: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007bed34: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007bed36: mov ecx, edi */ r_ecx = r_edi;
    /* 007bed38: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bed3b: mov edx, 1 */ r_edx = 0x1u;
    /* 007bed40: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 007bed46: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007bed4a: jmp 0x7bed62 */ goto L_007bed62;
L_007bed4c:; BB(0x007bed4c);
    /* 007bed4c: mov edx, ebp */ r_edx = r_ebp;
    /* 007bed4e: mov dword ptr [edx], 0xa0f6f4 */ W32((u32)(r_edx), 0xa0f6f4u);
    /* 007bed54: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007bed57: mov ecx, edi */ r_ecx = r_edi;
    /* 007bed59: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 007bed5f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_007bed62:; BB(0x007bed62);
    /* 007bed62: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bed66: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bed69: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007bed6d: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bed70: jl 0x7bed18 */ if ((fS!=fO)) goto L_007bed18;
L_007bed72:; BB(0x007bed72);
    /* 007bed72: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 007bed76: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 007bed7a: mov dword ptr [0xaae730], 0xa0f6f4 */ W32((u32)(0xaae730u), 0xa0f6f4u);
    /* 007bed84: mov edx, 0xa0f728 */ r_edx = 0xa0f728u;
    /* 007bed89: mov dword ptr [0xaae744], ecx */ W32((u32)(0xaae744u), r_ecx);
    /* 007bed8f: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 007bed93: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007bed95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bed97: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007bed9b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007bed9d: mov ebp, edx */ r_ebp = r_edx;
L_007bed9f:; BB(0x007bed9f);
    /* 007bed9f: mov eax, ebp */ r_eax = r_ebp;
    /* 007beda1: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 007beda3: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007beda6: call 0x83a9e0 */ r_esp -= 4; W32(r_esp, 0x7bedabu); f_0083a9e0();
    /* 007bedab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bedac: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 007bedaf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007bedb1: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007bedb4: je 0x7bedc4 */ if (fZ) goto L_007bedc4;
L_007bedb6:; BB(0x007bedb6);
    /* 007bedb6: mov eax, esi */ r_eax = r_esi;
    /* 007bedb8: mov dword ptr [eax*4 + 0xaae96c], edi */ W32((u32)(r_eax*4+0xaae96cu), r_edi);
    /* 007bedbf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bedc2: jmp 0x7bedc8 */ goto L_007bedc8;
L_007bedc4:; BB(0x007bedc4);
    /* 007bedc4: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
L_007bedc8:; BB(0x007bedc8);
    /* 007bedc8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bedcb: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bedce: jl 0x7bed9f */ if ((fS!=fO)) goto L_007bed9f;
L_007bedd0:; BB(0x007bedd0);
    /* 007bedd0: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007bedd4: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 007bedd8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007beddb: jge 0x7bedec */ if ((fS==fO)) goto L_007bedec;
L_007beddd:; BB(0x007beddd);
    /* 007beddd: mov dword ptr [esi*4 + 0xaae96c], eax */ W32((u32)(r_esi*4+0xaae96cu), r_eax);
    /* 007bede4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bede7: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bedea: jl 0x7beddd */ if ((fS!=fO)) goto L_007beddd;
L_007bedec:; BB(0x007bedec);
    /* 007bedec: mov dword ptr [0xaae97c], 4 */ W32((u32)(0xaae97cu), 0x4u);
    /* 007bedf6: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 007bedfa: mov edx, 0xaae720 */ r_edx = 0xaae720u;
    /* 007bedff: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 007bee03: mov esi, 0xaae75c */ r_esi = 0xaae75cu;
    /* 007bee08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bee0a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007bee0c: mov ebp, eax */ r_ebp = r_eax;
L_007bee0e:; BB(0x007bee0e);
    /* 007bee0e: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007bee12: mov eax, dword ptr [ebp*4 + 0xaae748] */ r_eax = R32((u32)(r_ebp*4+0xaae748u));
    /* 007bee19: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007bee1b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bee1e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bee21: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 007bee25: je 0x7bfb26 */ if (fZ) goto L_007bfb26;
L_007bee2b:; BB(0x007bee2b);
    /* 007bee2b: mov edx, dword ptr [edi + 0xaae734] */ r_edx = R32((u32)(r_edi+0xaae734u));
    /* 007bee31: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bee34: je 0x7bf571 */ if (fZ) goto L_007bf571;
L_007bee3a:; BB(0x007bee3a);
    /* 007bee3a: mov ecx, esi */ r_ecx = r_esi;
    /* 007bee3c: call 0x7c12f8 */ r_esp -= 4; W32(r_esp, 0x7bee41u); f_007c12f8();
L_007bee41:; BB(0x007bee41);
    /* 007bee41: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bee44: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007bee47: add esi, 0x50 */ {  u32 a = r_esi; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bee4a: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bee4d: jl 0x7bee0e */ if ((fS!=fO)) goto L_007bee0e;
L_007bee4f:; BB(0x007bee4f);
    /* 007bee4f: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 007bee53: mov ecx, esi */ r_ecx = r_esi;
    /* 007bee55: call 0x7c12f8 */ r_esp -= 4; W32(r_esp, 0x7bee5au); f_007c12f8();
    /* 007bee5a: mov eax, dword ptr [0xaae744] */ r_eax = R32((u32)(0xaae744u));
    /* 007bee5f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bee62: je 0x7bf048 */ if (fZ) goto L_007bf048;
L_007bee68:; BB(0x007bee68);
    /* 007bee68: mov ecx, dword ptr [0xa0f698] */ r_ecx = R32((u32)(0xa0f698u));
    /* 007bee6e: or ecx, dword ptr [0xa0f678] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007bee74: mov eax, dword ptr [0xaae75c] */ r_eax = R32((u32)(0xaae75cu));
    /* 007bee79: mov dword ptr [esp + 0x7c], 0x80000000 */ W32((u32)(r_esp+0x7cu), 0x80000000u);
    /* 007bee81: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007bee83: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bee85: mov dword ptr [esp + 0x80], 0x40000000 */ W32((u32)(r_esp+0x80u), 0x40000000u);
    /* 007bee90: mov dword ptr [esp + 0x84], 0x20000000 */ W32((u32)(r_esp+0x84u), 0x20000000u);
    /* 007bee9b: mov dword ptr [esp + 0x88], 0x10000000 */ W32((u32)(r_esp+0x88u), 0x10000000u);
    /* 007beea6: jne 0x7beee4 */ if (!fZ) goto L_007beee4;
L_007beea8:; BB(0x007beea8);
    /* 007beea8: movsx edx, byte ptr [0xaae940] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaae940u));
    /* 007beeaf: fld qword ptr [0x97e5e0] */ FPUSH(R_F64((u32)(0x97e5e0u)));
    /* 007beeb5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007beeb8: movsx esi, dl */ r_esi = (u32)(i32)(i8)(u8)r_edx;
    /* 007beebb: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007beebe: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007beec1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007beec3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007beec5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007beec6: je 0x7beff3 */ if (fZ) goto L_007beff3;
L_007beecc:; BB(0x007beecc);
    /* 007beecc: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007beece: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007beed0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007beed1: jbe 0x7beedc */ if ((fC||fZ)) goto L_007beedc;
L_007beed3:; BB(0x007beed3);
    /* 007beed3: mov byte ptr [0xaae940], 0x5b */ W8((u32)(0xaae940u), 0x5bu);
    /* 007beeda: jmp 0x7beeeb */ goto L_007beeeb;
L_007beedc:; BB(0x007beedc);
    /* 007beedc: mov byte ptr [0xaae940], dl */ W8((u32)(0xaae940u), (u8)r_edx);
    /* 007beee2: jmp 0x7beeeb */ goto L_007beeeb;
L_007beee4:; BB(0x007beee4);
    /* 007beee4: mov byte ptr [0xaae940], 0 */ W8((u32)(0xaae940u), 0x0u);
L_007beeeb:; BB(0x007beeeb);
    /* 007beeeb: mov eax, dword ptr [0xaae7ac] */ r_eax = R32((u32)(0xaae7acu));
    /* 007beef0: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007beef2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007beef4: jne 0x7bef34 */ if (!fZ) goto L_007bef34;
L_007beef6:; BB(0x007beef6);
    /* 007beef6: movsx edx, byte ptr [0xaae941] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaae941u));
    /* 007beefd: fld qword ptr [0x97e5e0] */ FPUSH(R_F64((u32)(0x97e5e0u)));
    /* 007bef03: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bef06: movsx esi, dl */ r_esi = (u32)(i32)(i8)(u8)r_edx;
    /* 007bef09: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007bef0d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bef11: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007bef13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bef15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bef16: je 0x7bf009 */ if (fZ) goto L_007bf009;
L_007bef1c:; BB(0x007bef1c);
    /* 007bef1c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007bef1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bef20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bef21: jbe 0x7bef2c */ if ((fC||fZ)) goto L_007bef2c;
L_007bef23:; BB(0x007bef23);
    /* 007bef23: mov byte ptr [0xaae941], 0x5b */ W8((u32)(0xaae941u), 0x5bu);
    /* 007bef2a: jmp 0x7bef3b */ goto L_007bef3b;
L_007bef2c:; BB(0x007bef2c);
    /* 007bef2c: mov byte ptr [0xaae941], dl */ W8((u32)(0xaae941u), (u8)r_edx);
    /* 007bef32: jmp 0x7bef3b */ goto L_007bef3b;
L_007bef34:; BB(0x007bef34);
    /* 007bef34: mov byte ptr [0xaae941], 0 */ W8((u32)(0xaae941u), 0x0u);
L_007bef3b:; BB(0x007bef3b);
    /* 007bef3b: mov eax, dword ptr [0xaae7fc] */ r_eax = R32((u32)(0xaae7fcu));
    /* 007bef40: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007bef42: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bef44: jne 0x7bef84 */ if (!fZ) goto L_007bef84;
L_007bef46:; BB(0x007bef46);
    /* 007bef46: movsx edx, byte ptr [0xaae942] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaae942u));
    /* 007bef4d: fld qword ptr [0x97e5e0] */ FPUSH(R_F64((u32)(0x97e5e0u)));
    /* 007bef53: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bef56: movsx esi, dl */ r_esi = (u32)(i32)(i8)(u8)r_edx;
    /* 007bef59: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007bef5d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bef61: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007bef63: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bef65: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bef66: je 0x7bf01f */ if (fZ) goto L_007bf01f;
L_007bef6c:; BB(0x007bef6c);
    /* 007bef6c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007bef6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bef70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bef71: jbe 0x7bef7c */ if ((fC||fZ)) goto L_007bef7c;
L_007bef73:; BB(0x007bef73);
    /* 007bef73: mov byte ptr [0xaae942], 0x5b */ W8((u32)(0xaae942u), 0x5bu);
    /* 007bef7a: jmp 0x7bef8b */ goto L_007bef8b;
L_007bef7c:; BB(0x007bef7c);
    /* 007bef7c: mov byte ptr [0xaae942], dl */ W8((u32)(0xaae942u), (u8)r_edx);
    /* 007bef82: jmp 0x7bef8b */ goto L_007bef8b;
L_007bef84:; BB(0x007bef84);
    /* 007bef84: mov byte ptr [0xaae942], 0 */ W8((u32)(0xaae942u), 0x0u);
L_007bef8b:; BB(0x007bef8b);
    /* 007bef8b: mov eax, dword ptr [0xaae84c] */ r_eax = R32((u32)(0xaae84cu));
    /* 007bef90: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007bef92: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bef94: jne 0x7befd0 */ if (!fZ) goto L_007befd0;
L_007bef96:; BB(0x007bef96);
    /* 007bef96: movsx ecx, byte ptr [0xaae943] */ r_ecx = (u32)(i32)(i8)R8((u32)(0xaae943u));
    /* 007bef9d: fld qword ptr [0x97e5e0] */ FPUSH(R_F64((u32)(0x97e5e0u)));
    /* 007befa3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007befa6: movsx edx, cl */ r_edx = (u32)(i32)(i8)(u8)r_ecx;
    /* 007befa9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007befad: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007befb1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007befb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007befb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007befb6: je 0x7bf035 */ if (fZ) goto L_007bf035;
L_007befb8:; BB(0x007befb8);
    /* 007befb8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007befba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007befbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007befbd: jbe 0x7befc8 */ if ((fC||fZ)) goto L_007befc8;
L_007befbf:; BB(0x007befbf);
    /* 007befbf: mov byte ptr [0xaae943], 0x5b */ W8((u32)(0xaae943u), 0x5bu);
    /* 007befc6: jmp 0x7befd7 */ goto L_007befd7;
L_007befc8:; BB(0x007befc8);
    /* 007befc8: mov byte ptr [0xaae943], cl */ W8((u32)(0xaae943u), (u8)r_ecx);
    /* 007befce: jmp 0x7befd7 */ goto L_007befd7;
L_007befd0:; BB(0x007befd0);
    /* 007befd0: mov byte ptr [0xaae943], 0 */ W8((u32)(0xaae943u), 0x0u);
L_007befd7:; BB(0x007befd7);
    /* 007befd7: call 0x7beca0 */ r_esp -= 4; W32(r_esp, 0x7befdcu); f_007beca0();
    /* 007befdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007befde: je 0x7befe7 */ if (fZ) goto L_007befe7;
L_007befe0:; BB(0x007befe0);
    /* 007befe0: mov byte ptr [0xaae93c], 1 */ W8((u32)(0xaae93cu), 0x1u);
L_007befe7:; BB(0x007befe7);
    /* 007befe7: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007befed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007befee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007befef: mov esp, ebx */ r_esp = r_ebx;
    /* 007beff1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007beff2: ret  */ FN_RET(0x007becd4); r_esp += 4; return;
L_007beff3:; BB(0x007beff3);
    /* 007beff3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007beff5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007beff7: mov byte ptr [0xaae93c], 1 */ W8((u32)(0xaae93cu), 0x1u);
    /* 007beffe: mov byte ptr [0xaae940], dl */ W8((u32)(0xaae940u), (u8)r_edx);
    /* 007bf004: jmp 0x7beeeb */ goto L_007beeeb;
L_007bf009:; BB(0x007bf009);
    /* 007bf009: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf00b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf00d: mov byte ptr [0xaae93c], 1 */ W8((u32)(0xaae93cu), 0x1u);
    /* 007bf014: mov byte ptr [0xaae941], dl */ W8((u32)(0xaae941u), (u8)r_edx);
    /* 007bf01a: jmp 0x7bef3b */ goto L_007bef3b;
L_007bf01f:; BB(0x007bf01f);
    /* 007bf01f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf021: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf023: mov byte ptr [0xaae93c], 1 */ W8((u32)(0xaae93cu), 0x1u);
    /* 007bf02a: mov byte ptr [0xaae942], dl */ W8((u32)(0xaae942u), (u8)r_edx);
    /* 007bf030: jmp 0x7bef8b */ goto L_007bef8b;
L_007bf035:; BB(0x007bf035);
    /* 007bf035: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf037: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf039: mov byte ptr [0xaae93c], 1 */ W8((u32)(0xaae93cu), 0x1u);
    /* 007bf040: mov byte ptr [0xaae943], cl */ W8((u32)(0xaae943u), (u8)r_ecx);
    /* 007bf046: jmp 0x7befd7 */ goto L_007befd7;
L_007bf048:; BB(0x007bf048);
    /* 007bf048: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf04e: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf054: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf05a: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf060: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf066: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf06c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007bf070: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007bf074: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007bf078: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007bf07c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007bf080: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007bf084: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bf086: mov word ptr [esp + 0x60], ax */ W16((u32)(r_esp+0x60u), (u16)r_eax);
    /* 007bf08b: mov word ptr [esp + 0x62], ax */ W16((u32)(r_esp+0x62u), (u16)r_eax);
    /* 007bf090: mov word ptr [esp + 0x64], ax */ W16((u32)(r_esp+0x64u), (u16)r_eax);
    /* 007bf095: mov word ptr [esp + 0x66], ax */ W16((u32)(r_esp+0x66u), (u16)r_eax);
    /* 007bf09a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007bf09c: mov word ptr [esp + 0x68], ax */ W16((u32)(r_esp+0x68u), (u16)r_eax);
    /* 007bf0a1: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 007bf0a6: mov word ptr [esp + 0x6c], ax */ W16((u32)(r_esp+0x6cu), (u16)r_eax);
    /* 007bf0ab: mov word ptr [esp + 0x6e], ax */ W16((u32)(r_esp+0x6eu), (u16)r_eax);
    /* 007bf0b0: mov word ptr [esp + 0x70], ax */ W16((u32)(r_esp+0x70u), (u16)r_eax);
    /* 007bf0b5: mov word ptr [esp + 0x72], ax */ W16((u32)(r_esp+0x72u), (u16)r_eax);
    /* 007bf0ba: mov word ptr [esp + 0x74], ax */ W16((u32)(r_esp+0x74u), (u16)r_eax);
    /* 007bf0bf: mov word ptr [esp + 0x76], ax */ W16((u32)(r_esp+0x76u), (u16)r_eax);
    /* 007bf0c4: mov word ptr [esp + 0x78], ax */ W16((u32)(r_esp+0x78u), (u16)r_eax);
    /* 007bf0c9: mov word ptr [esp + 0x7a], ax */ W16((u32)(r_esp+0x7au), (u16)r_eax);
L_007bf0ce:; BB(0x007bf0ce);
    /* 007bf0ce: mov eax, dword ptr [edi + 0xaae75c] */ r_eax = R32((u32)(r_edi+0xaae75cu));
    /* 007bf0d4: or dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 007bf0d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf0d7: mov edx, dword ptr [edi + 0xaae760] */ r_edx = R32((u32)(r_edi+0xaae760u));
    /* 007bf0dd: or dword ptr [esi + 4], edx */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 007bf0e0: mov eax, dword ptr [edi + 0xaae764] */ r_eax = R32((u32)(r_edi+0xaae764u));
    /* 007bf0e6: or dword ptr [esi + 8], eax */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 007bf0e9: mov eax, dword ptr [edi + 0xaae768] */ r_eax = R32((u32)(r_edi+0xaae768u));
    /* 007bf0ef: or dword ptr [esi + 0xc], eax */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 007bf0f2: mov eax, dword ptr [edi + 0xaae7a4] */ r_eax = R32((u32)(r_edi+0xaae7a4u));
    /* 007bf0f8: or dword ptr [esi + 0x48], eax */ { u32 ad = (u32)(r_esi+0x48u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 007bf0fb: mov eax, dword ptr [edi + 0xaae7a8] */ r_eax = R32((u32)(r_edi+0xaae7a8u));
    /* 007bf101: or dword ptr [esi + 0x4c], eax */ { u32 ad = (u32)(r_esi+0x4cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 007bf104: movzx eax, word ptr [edi + 0xaae76e] */ r_eax = (u32)R16((u32)(r_edi+0xaae76eu));
    /* 007bf10b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007bf10f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007bf113: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf116: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf11bu); f_0082e900();
    /* 007bf11b: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007bf11f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf120: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007bf124: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf127: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf12cu); f_0082e900();
    /* 007bf12c: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007bf130: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf132: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf133: jae 0x7bf148 */ if (!fC) goto L_007bf148;
L_007bf135:; BB(0x007bf135);
    /* 007bf135: movzx eax, word ptr [edi + 0xaae76e] */ r_eax = (u32)R16((u32)(r_edi+0xaae76eu));
    /* 007bf13c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007bf140: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf144: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_007bf148:; BB(0x007bf148);
    /* 007bf148: movzx eax, word ptr [edi + 0xaae76c] */ r_eax = (u32)R16((u32)(r_edi+0xaae76cu));
    /* 007bf14f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf150: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007bf154: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007bf158: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf15b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf160u); f_0082e900();
    /* 007bf160: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007bf164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf165: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007bf169: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf16c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf171u); f_0082e900();
    /* 007bf171: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007bf175: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf177: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf178: jae 0x7bf18d */ if (!fC) goto L_007bf18d;
L_007bf17a:; BB(0x007bf17a);
    /* 007bf17a: movzx eax, word ptr [edi + 0xaae76c] */ r_eax = (u32)R16((u32)(r_edi+0xaae76cu));
    /* 007bf181: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007bf185: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf189: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_007bf18d:; BB(0x007bf18d);
    /* 007bf18d: movsx eax, word ptr [edi + 0xaae770] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae770u));
    /* 007bf194: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf195: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007bf199: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007bf19d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf1a0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf1a5u); f_0082e900();
    /* 007bf1a5: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007bf1a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf1aa: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007bf1ae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf1b1: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf1b6u); f_0082e900();
    /* 007bf1b6: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007bf1ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf1bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf1bd: jae 0x7bf1d2 */ if (!fC) goto L_007bf1d2;
L_007bf1bf:; BB(0x007bf1bf);
    /* 007bf1bf: movsx eax, word ptr [edi + 0xaae770] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae770u));
    /* 007bf1c6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007bf1ca: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf1ce: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007bf1d2:; BB(0x007bf1d2);
    /* 007bf1d2: movsx eax, word ptr [edi + 0xaae772] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae772u));
    /* 007bf1d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf1da: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007bf1de: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007bf1e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf1e5: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf1eau); f_0082e900();
    /* 007bf1ea: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007bf1ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf1ef: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007bf1f3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf1f6: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf1fbu); f_0082e900();
    /* 007bf1fb: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007bf1ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf201: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf202: jae 0x7bf217 */ if (!fC) goto L_007bf217;
L_007bf204:; BB(0x007bf204);
    /* 007bf204: movsx eax, word ptr [edi + 0xaae772] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae772u));
    /* 007bf20b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007bf20f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf213: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_007bf217:; BB(0x007bf217);
    /* 007bf217: movsx eax, word ptr [edi + 0xaae774] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae774u));
    /* 007bf21e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf21f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007bf223: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007bf227: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf22a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf22fu); f_0082e900();
    /* 007bf22f: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007bf233: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf234: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007bf238: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf23b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf240u); f_0082e900();
    /* 007bf240: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007bf244: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf246: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf247: jae 0x7bf25c */ if (!fC) goto L_007bf25c;
L_007bf249:; BB(0x007bf249);
    /* 007bf249: movsx eax, word ptr [edi + 0xaae774] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae774u));
    /* 007bf250: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007bf254: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf258: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_007bf25c:; BB(0x007bf25c);
    /* 007bf25c: movsx eax, word ptr [edi + 0xaae776] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae776u));
    /* 007bf263: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf264: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007bf268: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007bf26c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf26f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf274u); f_0082e900();
    /* 007bf274: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007bf278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf279: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007bf27d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf280: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7bf285u); f_0082e900();
    /* 007bf285: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007bf289: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf28b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf28c: jae 0x7bf2a1 */ if (!fC) goto L_007bf2a1;
L_007bf28e:; BB(0x007bf28e);
    /* 007bf28e: movsx eax, word ptr [edi + 0xaae776] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xaae776u));
    /* 007bf295: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007bf299: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf29d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_007bf2a1:; BB(0x007bf2a1);
    /* 007bf2a1: movsx edx, word ptr [edi + 0xaae788] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae788u));
    /* 007bf2a8: movsx eax, word ptr [esp + 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x60u));
    /* 007bf2ad: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf2af: jg 0x7bf2b3 */ if ((!fZ&&fS==fO)) goto L_007bf2b3;
L_007bf2b1:; BB(0x007bf2b1);
    /* 007bf2b1: mov edx, eax */ r_edx = r_eax;
L_007bf2b3:; BB(0x007bf2b3);
    /* 007bf2b3: movsx eax, word ptr [esp + 0x62] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x62u));
    /* 007bf2b8: mov word ptr [esp + 0x60], dx */ W16((u32)(r_esp+0x60u), (u16)r_edx);
    /* 007bf2bd: movsx edx, word ptr [edi + 0xaae78a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae78au));
    /* 007bf2c4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf2c6: jg 0x7bf2ca */ if ((!fZ&&fS==fO)) goto L_007bf2ca;
L_007bf2c8:; BB(0x007bf2c8);
    /* 007bf2c8: mov edx, eax */ r_edx = r_eax;
L_007bf2ca:; BB(0x007bf2ca);
    /* 007bf2ca: movsx eax, word ptr [esp + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x64u));
    /* 007bf2cf: mov word ptr [esp + 0x62], dx */ W16((u32)(r_esp+0x62u), (u16)r_edx);
    /* 007bf2d4: movsx edx, word ptr [edi + 0xaae78c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae78cu));
    /* 007bf2db: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf2dd: jg 0x7bf2e1 */ if ((!fZ&&fS==fO)) goto L_007bf2e1;
L_007bf2df:; BB(0x007bf2df);
    /* 007bf2df: mov edx, eax */ r_edx = r_eax;
L_007bf2e1:; BB(0x007bf2e1);
    /* 007bf2e1: movsx eax, word ptr [esp + 0x66] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x66u));
    /* 007bf2e6: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 007bf2eb: movsx edx, word ptr [edi + 0xaae78e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae78eu));
    /* 007bf2f2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf2f4: jg 0x7bf2f8 */ if ((!fZ&&fS==fO)) goto L_007bf2f8;
L_007bf2f6:; BB(0x007bf2f6);
    /* 007bf2f6: mov edx, eax */ r_edx = r_eax;
L_007bf2f8:; BB(0x007bf2f8);
    /* 007bf2f8: movsx eax, word ptr [esp + 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x68u));
    /* 007bf2fd: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 007bf302: movsx edx, word ptr [edi + 0xaae790] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae790u));
    /* 007bf309: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf30b: jg 0x7bf30f */ if ((!fZ&&fS==fO)) goto L_007bf30f;
L_007bf30d:; BB(0x007bf30d);
    /* 007bf30d: mov edx, eax */ r_edx = r_eax;
L_007bf30f:; BB(0x007bf30f);
    /* 007bf30f: movsx eax, word ptr [esp + 0x6a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x6au));
    /* 007bf314: mov word ptr [esp + 0x68], dx */ W16((u32)(r_esp+0x68u), (u16)r_edx);
    /* 007bf319: movsx edx, word ptr [edi + 0xaae792] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae792u));
    /* 007bf320: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf322: jg 0x7bf326 */ if ((!fZ&&fS==fO)) goto L_007bf326;
L_007bf324:; BB(0x007bf324);
    /* 007bf324: mov edx, eax */ r_edx = r_eax;
L_007bf326:; BB(0x007bf326);
    /* 007bf326: movsx eax, word ptr [esp + 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x6cu));
    /* 007bf32b: mov word ptr [esp + 0x6a], dx */ W16((u32)(r_esp+0x6au), (u16)r_edx);
    /* 007bf330: movsx edx, word ptr [edi + 0xaae794] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae794u));
    /* 007bf337: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf339: jg 0x7bf33d */ if ((!fZ&&fS==fO)) goto L_007bf33d;
L_007bf33b:; BB(0x007bf33b);
    /* 007bf33b: mov edx, eax */ r_edx = r_eax;
L_007bf33d:; BB(0x007bf33d);
    /* 007bf33d: movsx eax, word ptr [esp + 0x6e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x6eu));
    /* 007bf342: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 007bf347: movsx edx, word ptr [edi + 0xaae796] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae796u));
    /* 007bf34e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf350: jg 0x7bf354 */ if ((!fZ&&fS==fO)) goto L_007bf354;
L_007bf352:; BB(0x007bf352);
    /* 007bf352: mov edx, eax */ r_edx = r_eax;
L_007bf354:; BB(0x007bf354);
    /* 007bf354: movsx eax, word ptr [esp + 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x70u));
    /* 007bf359: mov word ptr [esp + 0x6e], dx */ W16((u32)(r_esp+0x6eu), (u16)r_edx);
    /* 007bf35e: movsx edx, word ptr [edi + 0xaae798] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae798u));
    /* 007bf365: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf367: jg 0x7bf36b */ if ((!fZ&&fS==fO)) goto L_007bf36b;
L_007bf369:; BB(0x007bf369);
    /* 007bf369: mov edx, eax */ r_edx = r_eax;
L_007bf36b:; BB(0x007bf36b);
    /* 007bf36b: movsx eax, word ptr [esp + 0x72] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x72u));
    /* 007bf370: mov word ptr [esp + 0x70], dx */ W16((u32)(r_esp+0x70u), (u16)r_edx);
    /* 007bf375: movsx edx, word ptr [edi + 0xaae79a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae79au));
    /* 007bf37c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf37e: jg 0x7bf382 */ if ((!fZ&&fS==fO)) goto L_007bf382;
L_007bf380:; BB(0x007bf380);
    /* 007bf380: mov edx, eax */ r_edx = r_eax;
L_007bf382:; BB(0x007bf382);
    /* 007bf382: movsx eax, word ptr [esp + 0x74] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x74u));
    /* 007bf387: mov word ptr [esp + 0x72], dx */ W16((u32)(r_esp+0x72u), (u16)r_edx);
    /* 007bf38c: movsx edx, word ptr [edi + 0xaae79c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae79cu));
    /* 007bf393: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf395: jg 0x7bf399 */ if ((!fZ&&fS==fO)) goto L_007bf399;
L_007bf397:; BB(0x007bf397);
    /* 007bf397: mov edx, eax */ r_edx = r_eax;
L_007bf399:; BB(0x007bf399);
    /* 007bf399: movsx eax, word ptr [esp + 0x76] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x76u));
    /* 007bf39e: mov word ptr [esp + 0x74], dx */ W16((u32)(r_esp+0x74u), (u16)r_edx);
    /* 007bf3a3: movsx edx, word ptr [edi + 0xaae79e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae79eu));
    /* 007bf3aa: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf3ac: jg 0x7bf3b0 */ if ((!fZ&&fS==fO)) goto L_007bf3b0;
L_007bf3ae:; BB(0x007bf3ae);
    /* 007bf3ae: mov edx, eax */ r_edx = r_eax;
L_007bf3b0:; BB(0x007bf3b0);
    /* 007bf3b0: movsx eax, word ptr [esp + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x78u));
    /* 007bf3b5: mov word ptr [esp + 0x76], dx */ W16((u32)(r_esp+0x76u), (u16)r_edx);
    /* 007bf3ba: movsx edx, word ptr [edi + 0xaae7a0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae7a0u));
    /* 007bf3c1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf3c3: jg 0x7bf3c7 */ if ((!fZ&&fS==fO)) goto L_007bf3c7;
L_007bf3c5:; BB(0x007bf3c5);
    /* 007bf3c5: mov edx, eax */ r_edx = r_eax;
L_007bf3c7:; BB(0x007bf3c7);
    /* 007bf3c7: movsx eax, word ptr [esp + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x7au));
    /* 007bf3cc: mov word ptr [esp + 0x78], dx */ W16((u32)(r_esp+0x78u), (u16)r_edx);
    /* 007bf3d1: movsx edx, word ptr [edi + 0xaae7a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xaae7a2u));
    /* 007bf3d8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf3da: jg 0x7bf3de */ if ((!fZ&&fS==fO)) goto L_007bf3de;
L_007bf3dc:; BB(0x007bf3dc);
    /* 007bf3dc: mov edx, eax */ r_edx = r_eax;
L_007bf3de:; BB(0x007bf3de);
    /* 007bf3de: mov word ptr [esp + 0x7a], dx */ W16((u32)(r_esp+0x7au), (u16)r_edx);
    /* 007bf3e3: add edi, 0x50 */ {  u32 a = r_edi; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007bf3e6: cmp edi, 0x140 */ {  u32 a = r_edi; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007bf3ec: jb 0x7bf0ce */ if (fC) goto L_007bf0ce;
L_007bf3f2:; BB(0x007bf3f2);
    /* 007bf3f2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007bf3f6: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007bf3fa: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007bf3fe: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007bf402: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007bf406: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007bf40a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf40e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf413: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf418: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf41c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf420: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 007bf424: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf428: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007bf42c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf430: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf435: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf43a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf43e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf442: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 007bf446: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf44a: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 007bf44e: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf452: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf457: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf45c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf460: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf464: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf468: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf46c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007bf470: mov word ptr [esi + 0x12], dx */ W16((u32)(r_esi+0x12u), (u16)r_edx);
    /* 007bf474: mov word ptr [esi + 0x10], di */ W16((u32)(r_esi+0x10u), (u16)r_edi);
    /* 007bf478: mov word ptr [esi + 0x14], ax */ W16((u32)(r_esi+0x14u), (u16)r_eax);
    /* 007bf47c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf480: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf485: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf48a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf48e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf492: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf496: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf49a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007bf49e: mov word ptr [esi + 0x16], ax */ W16((u32)(r_esi+0x16u), (u16)r_eax);
    /* 007bf4a2: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf4a6: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf4ab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf4b0: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf4b4: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf4b8: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf4bc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf4c0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007bf4c4: mov word ptr [esi + 0x18], ax */ W16((u32)(r_esi+0x18u), (u16)r_eax);
    /* 007bf4c8: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf4cc: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf4d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf4d6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf4da: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf4de: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf4e2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf4e6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007bf4ea: mov word ptr [esi + 0x1a], ax */ W16((u32)(r_esi+0x1au), (u16)r_eax);
    /* 007bf4ee: movzx eax, word ptr [esp + 0x60] */ r_eax = (u32)R16((u32)(r_esp+0x60u));
    /* 007bf4f3: mov word ptr [esi + 0x2c], ax */ W16((u32)(r_esi+0x2cu), (u16)r_eax);
    /* 007bf4f7: movzx eax, word ptr [esp + 0x62] */ r_eax = (u32)R16((u32)(r_esp+0x62u));
    /* 007bf4fc: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 007bf500: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 007bf505: mov word ptr [esi + 0x30], ax */ W16((u32)(r_esi+0x30u), (u16)r_eax);
    /* 007bf509: movzx eax, word ptr [esp + 0x66] */ r_eax = (u32)R16((u32)(r_esp+0x66u));
    /* 007bf50e: mov word ptr [esi + 0x32], ax */ W16((u32)(r_esi+0x32u), (u16)r_eax);
    /* 007bf512: movzx eax, word ptr [esp + 0x68] */ r_eax = (u32)R16((u32)(r_esp+0x68u));
    /* 007bf517: mov word ptr [esi + 0x34], ax */ W16((u32)(r_esi+0x34u), (u16)r_eax);
    /* 007bf51b: movzx eax, word ptr [esp + 0x6a] */ r_eax = (u32)R16((u32)(r_esp+0x6au));
    /* 007bf520: mov word ptr [esi + 0x36], ax */ W16((u32)(r_esi+0x36u), (u16)r_eax);
    /* 007bf524: movzx eax, word ptr [esp + 0x6c] */ r_eax = (u32)R16((u32)(r_esp+0x6cu));
    /* 007bf529: mov word ptr [esi + 0x38], ax */ W16((u32)(r_esi+0x38u), (u16)r_eax);
    /* 007bf52d: movzx eax, word ptr [esp + 0x6e] */ r_eax = (u32)R16((u32)(r_esp+0x6eu));
    /* 007bf532: mov word ptr [esi + 0x3a], ax */ W16((u32)(r_esi+0x3au), (u16)r_eax);
    /* 007bf536: movzx eax, word ptr [esp + 0x70] */ r_eax = (u32)R16((u32)(r_esp+0x70u));
    /* 007bf53b: mov word ptr [esi + 0x3c], ax */ W16((u32)(r_esi+0x3cu), (u16)r_eax);
    /* 007bf53f: movzx eax, word ptr [esp + 0x72] */ r_eax = (u32)R16((u32)(r_esp+0x72u));
    /* 007bf544: mov word ptr [esi + 0x3e], ax */ W16((u32)(r_esi+0x3eu), (u16)r_eax);
    /* 007bf548: movzx eax, word ptr [esp + 0x74] */ r_eax = (u32)R16((u32)(r_esp+0x74u));
    /* 007bf54d: mov word ptr [esi + 0x40], ax */ W16((u32)(r_esi+0x40u), (u16)r_eax);
    /* 007bf551: movzx eax, word ptr [esp + 0x76] */ r_eax = (u32)R16((u32)(r_esp+0x76u));
    /* 007bf556: mov word ptr [esi + 0x42], ax */ W16((u32)(r_esi+0x42u), (u16)r_eax);
    /* 007bf55a: movzx eax, word ptr [esp + 0x78] */ r_eax = (u32)R16((u32)(r_esp+0x78u));
    /* 007bf55f: mov word ptr [esi + 0x44], ax */ W16((u32)(r_esi+0x44u), (u16)r_eax);
    /* 007bf563: movzx eax, word ptr [esp + 0x7a] */ r_eax = (u32)R16((u32)(r_esp+0x7au));
    /* 007bf568: mov word ptr [esi + 0x46], ax */ W16((u32)(r_esi+0x46u), (u16)r_eax);
    /* 007bf56c: jmp 0x7bee68 */ goto L_007bee68;
L_007bf571:; BB(0x007bf571);
    /* 007bf571: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bf573: jne 0x7bee3a */ if (!fZ) goto L_007bee3a;
L_007bf579:; BB(0x007bf579);
    /* 007bf579: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 007bf57c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 007bf57e: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 007bf581: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 007bf584: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 007bf587: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 007bf58a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 007bf58d: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 007bf590: movzx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)R16((u32)(r_ecx+0x1au));
    /* 007bf594: mov word ptr [esi + 0x12], dx */ W16((u32)(r_esi+0x12u), (u16)r_edx);
    /* 007bf598: movzx edx, word ptr [ecx + 0x18] */ r_edx = (u32)R16((u32)(r_ecx+0x18u));
    /* 007bf59c: mov word ptr [esi + 0x10], dx */ W16((u32)(r_esi+0x10u), (u16)r_edx);
    /* 007bf5a0: movsx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1cu));
    /* 007bf5a4: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 007bf5a8: mov word ptr [esi + 0x14], dx */ W16((u32)(r_esi+0x14u), (u16)r_edx);
    /* 007bf5ac: movsx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1eu));
    /* 007bf5b0: mov word ptr [esi + 0x16], dx */ W16((u32)(r_esi+0x16u), (u16)r_edx);
    /* 007bf5b4: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007bf5b8: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 007bf5bc: mov word ptr [esi + 0x18], dx */ W16((u32)(r_esi+0x18u), (u16)r_edx);
    /* 007bf5c0: movsx eax, word ptr [ecx + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x22u));
    /* 007bf5c4: mov word ptr [esi + 0x1a], ax */ W16((u32)(r_esi+0x1au), (u16)r_eax);
    /* 007bf5c8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bf5ca: jne 0x7bf5f8 */ if (!fZ) goto L_007bf5f8;
L_007bf5cc:; BB(0x007bf5cc);
    /* 007bf5cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf5cd: call 0x708a68 */ r_esp -= 4; W32(r_esp, 0x7bf5d2u); f_00708a68();
    /* 007bf5d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf5d3: call 0x70973c */ r_esp -= 4; W32(r_esp, 0x7bf5d8u); f_0070973c();
    /* 007bf5d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bf5db: call 0x70aacc */ r_esp -= 4; W32(r_esp, 0x7bf5e0u); f_0070aacc();
    /* 007bf5e0: movsx edx, word ptr [esi + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x14u));
    /* 007bf5e4: movsx eax, word ptr [esi + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1au));
    /* 007bf5e8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 007bf5ec: movsx edx, word ptr [esi + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 007bf5f0: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007bf5f4: movsx edx, word ptr [esi + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x18u));
L_007bf5f8:; BB(0x007bf5f8);
    /* 007bf5f8: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007bf5fc: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007bf600: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf604: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007bf608: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 007bf60c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007bf610: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf614: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007bf618: fld dword ptr [0x97e628] */ FPUSH(R_F32((u32)(0x97e628u)));
    /* 007bf61e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007bf622: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf626: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007bf62a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007bf62e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bf630: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007bf632: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf634: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007bf638: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007bf63c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf63d: jbe 0x7bf65e */ if ((fC||fZ)) goto L_007bf65e;
L_007bf63f:; BB(0x007bf63f);
    /* 007bf63f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007bf643: fcomp dword ptr [0x97e624] */ fx_compare(ST(0), R_F32((u32)(0x97e624u))); FPOP();
    /* 007bf649: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf64b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf64c: ja 0x7bf65e */ if ((!fC&&!fZ)) goto L_007bf65e;
L_007bf64e:; BB(0x007bf64e);
    /* 007bf64e: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf654: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007bf658: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bf65a: mov word ptr [esi + 0x14], dx */ W16((u32)(r_esi+0x14u), (u16)r_edx);
L_007bf65e:; BB(0x007bf65e);
    /* 007bf65e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007bf662: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007bf664: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf666: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf667: jbe 0x7bf688 */ if ((fC||fZ)) goto L_007bf688;
L_007bf669:; BB(0x007bf669);
    /* 007bf669: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007bf66d: fcomp dword ptr [0x97e624] */ fx_compare(ST(0), R_F32((u32)(0x97e624u))); FPOP();
    /* 007bf673: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf675: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf676: ja 0x7bf688 */ if ((!fC&&!fZ)) goto L_007bf688;
L_007bf678:; BB(0x007bf678);
    /* 007bf678: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf67e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007bf682: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bf684: mov word ptr [esi + 0x16], dx */ W16((u32)(r_esi+0x16u), (u16)r_edx);
L_007bf688:; BB(0x007bf688);
    /* 007bf688: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007bf68c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007bf68e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf690: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf691: jbe 0x7bf6b2 */ if ((fC||fZ)) goto L_007bf6b2;
L_007bf693:; BB(0x007bf693);
    /* 007bf693: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007bf697: fcomp dword ptr [0x97e624] */ fx_compare(ST(0), R_F32((u32)(0x97e624u))); FPOP();
    /* 007bf69d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf69f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf6a0: ja 0x7bf6b2 */ if ((!fC&&!fZ)) goto L_007bf6b2;
L_007bf6a2:; BB(0x007bf6a2);
    /* 007bf6a2: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf6a8: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007bf6ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bf6ae: mov word ptr [esi + 0x18], dx */ W16((u32)(r_esi+0x18u), (u16)r_edx);
L_007bf6b2:; BB(0x007bf6b2);
    /* 007bf6b2: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007bf6b6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007bf6b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf6ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf6bb: jbe 0x7bf6dc */ if ((fC||fZ)) goto L_007bf6dc;
L_007bf6bd:; BB(0x007bf6bd);
    /* 007bf6bd: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007bf6c1: fcomp dword ptr [0x97e624] */ fx_compare(ST(0), R_F32((u32)(0x97e624u))); FPOP();
    /* 007bf6c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf6c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf6ca: ja 0x7bf6dc */ if ((!fC&&!fZ)) goto L_007bf6dc;
L_007bf6cc:; BB(0x007bf6cc);
    /* 007bf6cc: fld dword ptr [0x97e620] */ FPUSH(R_F32((u32)(0x97e620u)));
    /* 007bf6d2: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007bf6d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bf6d8: mov word ptr [esi + 0x1a], dx */ W16((u32)(r_esi+0x1au), (u16)r_edx);
L_007bf6dc:; BB(0x007bf6dc);
    /* 007bf6dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf6dd: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007bf6e1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007bf6e3: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007bf6e7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007bf6e9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007bf6eb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf6ee: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x7bf6f3u); f_0082dc9c();
    /* 007bf6f3: fcom dword ptr [0x97e620] */ fx_compare(ST(0), R_F32((u32)(0x97e620u))); 
    /* 007bf6f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf6fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf6fc: je 0x7bf704 */ if (fZ) goto L_007bf704;
L_007bf6fe:; BB(0x007bf6fe);
    /* 007bf6fe: fdiv dword ptr [0x97e61c] */ ST(0) = ST(0) / R_F32((u32)(0x97e61cu));
L_007bf704:; BB(0x007bf704);
    /* 007bf704: fld dword ptr [0x97e618] */ FPUSH(R_F32((u32)(0x97e618u)));
    /* 007bf70a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007bf70c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf70e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bf70f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007bf713: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007bf715: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf716: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bf718: jae 0x7bf71c */ if (!fC) goto L_007bf71c;
L_007bf71a:; BB(0x007bf71a);
    /* 007bf71a: fst st(2) */ ST(2) = ST(0);
L_007bf71c:; BB(0x007bf71c);
    /* 007bf71c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf71e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bf720: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 007bf723: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007bf727: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007bf729: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007bf72b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007bf72e: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x7bf733u); f_0082dc9c();
    /* 007bf733: fcom dword ptr [0x97e620] */ fx_compare(ST(0), R_F32((u32)(0x97e620u))); 
    /* 007bf739: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf73b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf73c: je 0x7bf744 */ if (fZ) goto L_007bf744;
L_007bf73e:; BB(0x007bf73e);
    /* 007bf73e: fdiv dword ptr [0x97e61c] */ ST(0) = ST(0) / R_F32((u32)(0x97e61cu));
L_007bf744:; BB(0x007bf744);
    /* 007bf744: fld dword ptr [0x97e618] */ FPUSH(R_F32((u32)(0x97e618u)));
    /* 007bf74a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007bf74c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bf74e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bf74f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007bf751: jae 0x7bf755 */ if (!fC) goto L_007bf755;
L_007bf753:; BB(0x007bf753);
    /* 007bf753: fst st(1) */ ST(1) = ST(0);
L_007bf755:; BB(0x007bf755);
    /* 007bf755: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007bf757: test dword ptr [0xa0f684], eax */ {  u32 a = R32((u32)(0xa0f684u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bf75d: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 007bf760: je 0x7bf76d */ if (fZ) goto L_007bf76d;
L_007bf762:; BB(0x007bf762);
    /* 007bf762: mov edx, 0xff */ r_edx = 0xffu;
    /* 007bf767: mov word ptr [esi + 0x12], dx */ W16((u32)(r_esi+0x12u), (u16)r_edx);
    /* 007bf76b: jmp 0x7bf773 */ goto L_007bf773;
L_007bf76d:; BB(0x007bf76d);
    /* 007bf76d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bf76f: mov word ptr [esi + 0x12], dx */ W16((u32)(r_esi+0x12u), (u16)r_edx);
L_007bf773:; BB(0x007bf773);
    /* 007bf773: test dword ptr [0xa0f688], eax */ {  u32 a = R32((u32)(0xa0f688u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bf779: je 0x7bf786 */ if (fZ) goto L_007bf786;
L_007bf77b:; BB(0x007bf77b);
    /* 007bf77b: mov edx, 0xff */ r_edx = 0xffu;
    /* 007bf780: mov word ptr [esi + 0x10], dx */ W16((u32)(r_esi+0x10u), (u16)r_edx);
    /* 007bf784: jmp 0x7bf78c */ goto L_007bf78c;
L_007bf786:; BB(0x007bf786);
    /* 007bf786: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bf788: mov word ptr [esi + 0x10], dx */ W16((u32)(r_esi+0x10u), (u16)r_edx);
L_007bf78c:; BB(0x007bf78c);
    /* 007bf78c: mov ecx, dword ptr [0xa0f644] */ r_ecx = R32((u32)(0xa0f644u));
    /* 007bf792: or ecx, dword ptr [0xa0f648] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa0f648u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007bf798: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 007bf79b: or ecx, dword ptr [0xa0f64c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa0f64cu)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007bf7a1: or ecx, dword ptr [0xa0f650] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa0f650u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007bf7a7: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007bf7ab: mov edx, dword ptr [0xa0f654] */ r_edx = R32((u32)(0xa0f654u));
    /* 007bf7b1: or edx, dword ptr [0xa0f658] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f658u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007bf7b7: or edx, dword ptr [0xa0f65c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f65cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007bf7bd: or edx, dword ptr [0xa0f660] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f660u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007bf7c3: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007bf7c5: not ecx */ r_ecx = ~r_ecx;
    /* 007bf7c7: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007bf7c9: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 007bf7cb: mov edx, dword ptr [0xa0f644] */ r_edx = R32((u32)(0xa0f644u));
    /* 007bf7d1: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007bf7d5: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 007bf7d8: mov eax, dword ptr [0xa0f648] */ r_eax = R32((u32)(0xa0f648u));
    /* 007bf7dd: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007bf7e1: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007bf7e3: mov eax, dword ptr [0xa0f654] */ r_eax = R32((u32)(0xa0f654u));
    /* 007bf7e8: or edx, dword ptr [0xa0f64c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f64cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007bf7ee: or edx, dword ptr [0xa0f650] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f650u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007bf7f4: or eax, dword ptr [0xa0f658] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f658u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf7fa: or eax, dword ptr [0xa0f65c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f65cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf800: or eax, dword ptr [0xa0f660] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f660u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf806: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007bf808: not edx */ r_edx = ~r_edx;
    /* 007bf80a: and edx, dword ptr [esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007bf80d: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 007bf810: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 007bf813: movsx edx, word ptr [esi + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x14u));
    /* 007bf817: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 007bf81b: movsx edx, word ptr [esi + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 007bf81f: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf822: jg 0x7bf83c */ if ((!fZ&&fS==fO)) goto L_007bf83c;
L_007bf824:; BB(0x007bf824);
    /* 007bf824: cmp edx, -0x30 */ {  u32 a = r_edx; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf827: jge 0x7bf84d */ if ((fS==fO)) goto L_007bf84d;
L_007bf829:; BB(0x007bf829);
    /* 007bf829: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf82d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf82e: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf832: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf834: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf835: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf83au); f_007bfb84();
    /* 007bf83a: jmp 0x7bf84d */ goto L_007bf84d;
L_007bf83c:; BB(0x007bf83c);
    /* 007bf83c: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf841: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007bf845: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf847: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf848: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf84du); f_007bfb84();
L_007bf84d:; BB(0x007bf84d);
    /* 007bf84d: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007bf851: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf854: jg 0x7bf86f */ if ((!fZ&&fS==fO)) goto L_007bf86f;
L_007bf856:; BB(0x007bf856);
    /* 007bf856: cmp edx, -0x30 */ {  u32 a = r_edx; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf859: jge 0x7bf881 */ if ((fS==fO)) goto L_007bf881;
L_007bf85b:; BB(0x007bf85b);
    /* 007bf85b: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf85f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf860: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf862: push dword ptr [0xa0f64c] */ { u32 v = R32((u32)(0xa0f64cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bf868: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf86du); f_007bfb84();
    /* 007bf86d: jmp 0x7bf881 */ goto L_007bf881;
L_007bf86f:; BB(0x007bf86f);
    /* 007bf86f: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf873: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf874: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf876: push dword ptr [0xa0f650] */ { u32 v = R32((u32)(0xa0f650u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bf87c: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf881u); f_007bfb84();
L_007bf881:; BB(0x007bf881);
    /* 007bf881: movsx edx, word ptr [esi + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x18u));
    /* 007bf885: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 007bf889: movsx edx, word ptr [esi + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x1au));
    /* 007bf88d: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf890: jg 0x7bf8ab */ if ((!fZ&&fS==fO)) goto L_007bf8ab;
L_007bf892:; BB(0x007bf892);
    /* 007bf892: cmp edx, -0x30 */ {  u32 a = r_edx; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf895: jge 0x7bf8bd */ if ((fS==fO)) goto L_007bf8bd;
L_007bf897:; BB(0x007bf897);
    /* 007bf897: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf89b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf89c: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf89e: push dword ptr [0xa0f654] */ { u32 v = R32((u32)(0xa0f654u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bf8a4: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf8a9u); f_007bfb84();
    /* 007bf8a9: jmp 0x7bf8bd */ goto L_007bf8bd;
L_007bf8ab:; BB(0x007bf8ab);
    /* 007bf8ab: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf8af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf8b0: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf8b2: push dword ptr [0xa0f658] */ { u32 v = R32((u32)(0xa0f658u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bf8b8: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf8bdu); f_007bfb84();
L_007bf8bd:; BB(0x007bf8bd);
    /* 007bf8bd: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007bf8c1: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf8c4: jg 0x7bf8df */ if ((!fZ&&fS==fO)) goto L_007bf8df;
L_007bf8c6:; BB(0x007bf8c6);
    /* 007bf8c6: cmp edx, -0x30 */ {  u32 a = r_edx; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bf8c9: jge 0x7bf8f1 */ if ((fS==fO)) goto L_007bf8f1;
L_007bf8cb:; BB(0x007bf8cb);
    /* 007bf8cb: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf8cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf8d0: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf8d2: push dword ptr [0xa0f65c] */ { u32 v = R32((u32)(0xa0f65cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bf8d8: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf8ddu); f_007bfb84();
    /* 007bf8dd: jmp 0x7bf8f1 */ goto L_007bf8f1;
L_007bf8df:; BB(0x007bf8df);
    /* 007bf8df: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007bf8e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bf8e4: mov ecx, esi */ r_ecx = r_esi;
    /* 007bf8e6: push dword ptr [0xa0f660] */ { u32 v = R32((u32)(0xa0f660u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bf8ec: call 0x7bfb84 */ r_esp -= 4; W32(r_esp, 0x7bf8f1u); f_007bfb84();
L_007bf8f1:; BB(0x007bf8f1);
    /* 007bf8f1: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 007bf8f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bf8f9: je 0x7bf981 */ if (fZ) goto L_007bf981;
L_007bf8ff:; BB(0x007bf8ff);
    /* 007bf8ff: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007bf903: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007bf907: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007bf909: fmul qword ptr [0x97e5f0] */ ST(0) = ST(0) * R_F64((u32)(0x97e5f0u));
    /* 007bf90f: fdiv qword ptr [0x97e5e8] */ ST(0) = ST(0) / R_F64((u32)(0x97e5e8u));
    /* 007bf915: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007bf91b: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007bf91f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bf921: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf925: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf92a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf92f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf933: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf937: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf93b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf93f: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007bf943: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007bf947: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bf949: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007bf94d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bf94f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007bf951: fmul qword ptr [0x97e5f0] */ ST(0) = ST(0) * R_F64((u32)(0x97e5f0u));
    /* 007bf957: fdiv qword ptr [0x97e5e8] */ ST(0) = ST(0) / R_F64((u32)(0x97e5e8u));
    /* 007bf95d: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf961: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf966: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf96b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf96f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf973: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf977: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf97b: add edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bf97f: jmp 0x7bf9f9 */ goto L_007bf9f9;
L_007bf981:; BB(0x007bf981);
    /* 007bf981: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007bf985: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007bf989: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007bf98b: fmul qword ptr [0x97e5f0] */ ST(0) = ST(0) * R_F64((u32)(0x97e5f0u));
    /* 007bf991: fdiv qword ptr [0x97e5e8] */ ST(0) = ST(0) / R_F64((u32)(0x97e5e8u));
    /* 007bf997: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007bf99b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bf99d: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf9a1: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf9a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf9ab: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf9af: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf9b3: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf9b7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf9bb: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007bf9bf: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007bf9c3: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 007bf9c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007bf9c9: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007bf9cb: fmul qword ptr [0x97e5f0] */ ST(0) = ST(0) * R_F64((u32)(0x97e5f0u));
    /* 007bf9d1: fdiv qword ptr [0x97e5e8] */ ST(0) = ST(0) / R_F64((u32)(0x97e5e8u));
    /* 007bf9d7: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007bf9db: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007bf9e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bf9e5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007bf9e9: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007bf9ed: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007bf9f1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007bf9f5: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
L_007bf9f9:; BB(0x007bf9f9);
    /* 007bf9f9: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007bf9fd: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa00: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa06: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007bfa09: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007bfa0c: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 007bfa0f: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 007bfa12: lea edx, [esi + 0x2c] */ r_edx = (u32)(r_esi+0x2cu);
    /* 007bfa15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfa16: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfa18: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfa1du); f_007bfb64();
    /* 007bfa1d: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa20: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa26: lea edx, [esi + 0x2e] */ r_edx = (u32)(r_esi+0x2eu);
    /* 007bfa29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfa2a: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfa2c: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfa31u); f_007bfb64();
    /* 007bfa31: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa34: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa3a: lea edx, [esi + 0x30] */ r_edx = (u32)(r_esi+0x30u);
    /* 007bfa3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfa3e: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfa40: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfa45u); f_007bfb64();
    /* 007bfa45: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa48: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa4e: lea edx, [esi + 0x32] */ r_edx = (u32)(r_esi+0x32u);
    /* 007bfa51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfa52: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfa54: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfa59u); f_007bfb64();
    /* 007bfa59: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa5c: push dword ptr [0xa0f644] */ { u32 v = R32((u32)(0xa0f644u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa62: lea edx, [esi + 0x34] */ r_edx = (u32)(r_esi+0x34u);
    /* 007bfa65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfa66: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfa68: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfa6du); f_007bfb64();
    /* 007bfa6d: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa70: push dword ptr [0xa0f648] */ { u32 v = R32((u32)(0xa0f648u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa76: lea edx, [esi + 0x36] */ r_edx = (u32)(r_esi+0x36u);
    /* 007bfa79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfa7a: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfa7c: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfa81u); f_007bfb64();
    /* 007bfa81: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa84: push dword ptr [0xa0f64c] */ { u32 v = R32((u32)(0xa0f64cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa8a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 007bfa8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfa8e: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfa90: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfa95u); f_007bfb64();
    /* 007bfa95: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa98: push dword ptr [0xa0f650] */ { u32 v = R32((u32)(0xa0f650u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfa9e: lea edx, [esi + 0x3a] */ r_edx = (u32)(r_esi+0x3au);
    /* 007bfaa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfaa2: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfaa4: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfaa9u); f_007bfb64();
    /* 007bfaa9: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfaac: push dword ptr [0xa0f654] */ { u32 v = R32((u32)(0xa0f654u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfab2: lea edx, [esi + 0x3c] */ r_edx = (u32)(r_esi+0x3cu);
    /* 007bfab5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfab6: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfab8: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfabdu); f_007bfb64();
    /* 007bfabd: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfac0: push dword ptr [0xa0f658] */ { u32 v = R32((u32)(0xa0f658u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfac6: lea edx, [esi + 0x3e] */ r_edx = (u32)(r_esi+0x3eu);
    /* 007bfac9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfaca: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfacc: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfad1u); f_007bfb64();
    /* 007bfad1: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfad4: push dword ptr [0xa0f65c] */ { u32 v = R32((u32)(0xa0f65cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfada: lea edx, [esi + 0x40] */ r_edx = (u32)(r_esi+0x40u);
    /* 007bfadd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfade: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfae0: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfae5u); f_007bfb64();
    /* 007bfae5: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfae8: push dword ptr [0xa0f660] */ { u32 v = R32((u32)(0xa0f660u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfaee: lea edx, [esi + 0x42] */ r_edx = (u32)(r_esi+0x42u);
    /* 007bfaf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfaf2: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfaf4: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfaf9u); f_007bfb64();
    /* 007bfaf9: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfafc: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfb02: lea edx, [esi + 0x44] */ r_edx = (u32)(r_esi+0x44u);
    /* 007bfb05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfb06: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfb08: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfb0du); f_007bfb64();
    /* 007bfb0d: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfb10: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfb16: lea edx, [esi + 0x46] */ r_edx = (u32)(r_esi+0x46u);
    /* 007bfb19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfb1a: mov ecx, esi */ r_ecx = r_esi;
    /* 007bfb1c: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfb21u); f_007bfb64();
    /* 007bfb21: jmp 0x7bee41 */ goto L_007bee41;
L_007bfb26:; BB(0x007bfb26);
    /* 007bfb26: mov edx, dword ptr [edi + 0xaae734] */ r_edx = R32((u32)(r_edi+0xaae734u));
    /* 007bfb2c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfb2f: jne 0x7bee41 */ if (!fZ) goto L_007bee41;
L_007bfb35:; BB(0x007bfb35);
    /* 007bfb35: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 007bfb38: test dword ptr [0xa0f698], edx */ {  u32 a = R32((u32)(0xa0f698u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfb3e: je 0x7bee41 */ if (fZ) goto L_007bee41;
L_007bfb44:; BB(0x007bfb44);
    /* 007bfb44: mov edx, dword ptr [0xa0f6ec] */ r_edx = R32((u32)(0xa0f6ecu));
    /* 007bfb4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfb4c: je 0x7bee41 */ if (fZ) goto L_007bee41;
L_007bfb52:; BB(0x007bfb52);
    /* 007bfb52: mov dword ptr [ebp*4 + 0xaae748], 0 */ W32((u32)(r_ebp*4+0xaae748u), 0x0u);
    /* 007bfb5d: jmp 0x7bee41 */ goto L_007bee41;
}

