#include "protos.h"

void f_0058b0cc(void) /* sub_58B0CC */
{
    FN_ENTER(0x0058b0cc);
    /* 0058b0cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0ce: mov edi, ecx */ r_edi = r_ecx;
    /* 0058b0d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0058b0d4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b0d7: je 0x58b18c */ if (fZ) goto L_0058b18c;
L_0058b0dd:; BB(0x0058b0dd);
    /* 0058b0dd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b0e0: je 0x58b11c */ if (fZ) goto L_0058b11c;
L_0058b0e2:; BB(0x0058b0e2);
    /* 0058b0e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058b0e4: jne 0x58b179 */ if (!fZ) goto L_0058b179;
L_0058b0ea:; BB(0x0058b0ea);
    /* 0058b0ea: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b0ec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58b0f1u); f_007aa094();
    /* 0058b0f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b0f3: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58b0f8u); f_00521410();
    /* 0058b0f8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058b0fa: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b0fc: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x58b102u); call_ind(t); }
    /* 0058b102: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b104: call 0x589fdc */ r_esp -= 4; W32(r_esp, 0x58b109u); f_00589fdc();
    /* 0058b109: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b10b: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x58b110u); f_0051ffdc();
    /* 0058b110: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b112: call 0x58b1f8 */ r_esp -= 4; W32(r_esp, 0x58b117u); f_0058b1f8();
    /* 0058b117: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058b118: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b119: ret 4 */ FN_RET(0x0058b0cc); r_esp += 8; return;
L_0058b11c:; BB(0x0058b11c);
    /* 0058b11c: movzx eax, word ptr [edi + 0x43c] */ r_eax = (u32)R16((u32)(r_edi+0x43cu));
    /* 0058b123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b124: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58b129u); f_007b4d18();
    /* 0058b129: mov ebx, eax */ r_ebx = r_eax;
    /* 0058b12b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b12e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b130: je 0x58b1e6 */ if (fZ) goto L_0058b1e6;
L_0058b136:; BB(0x0058b136);
    /* 0058b136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058b138: call 0x589b5c */ r_esp -= 4; W32(r_esp, 0x58b13du); f_00589b5c();
    /* 0058b13d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b140: je 0x58b17e */ if (fZ) goto L_0058b17e;
L_0058b142:; BB(0x0058b142);
    /* 0058b142: mov edx, dword ptr [edi + 0x488] */ r_edx = R32((u32)(r_edi+0x488u));
    /* 0058b148: lea ecx, [edi + 0x488] */ r_ecx = (u32)(r_edi+0x488u);
    /* 0058b14e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x58b151u); call_ind(t); }
    /* 0058b151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058b153: je 0x58b179 */ if (fZ) goto L_0058b179;
L_0058b155:; BB(0x0058b155);
    /* 0058b155: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b156: mov edx, dword ptr [edi + 0x44c] */ r_edx = R32((u32)(r_edi+0x44cu));
    /* 0058b15c: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058b15f: mov dword ptr [edi + 0x44c], edx */ W32((u32)(r_edi+0x44cu), r_edx);
    /* 0058b165: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058b167: call 0x589bdc */ r_esp -= 4; W32(r_esp, 0x58b16cu); f_00589bdc();
    /* 0058b16c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0058b170: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058b175: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0058b179:; BB(0x0058b179);
    /* 0058b179: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058b17a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b17b: ret 4 */ FN_RET(0x0058b0cc); r_esp += 8; return;
L_0058b17e:; BB(0x0058b17e);
    /* 0058b17e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b180: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b182: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b187u); f_0051f62c();
    /* 0058b187: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058b188: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b189: ret 4 */ FN_RET(0x0058b0cc); r_esp += 8; return;
L_0058b18c:; BB(0x0058b18c);
    /* 0058b18c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0058b18e: mov eax, 1 */ r_eax = 0x1u;
    /* 0058b193: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058b19a: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b19c: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58b1a2u); call_ind(t); }
    /* 0058b1a2: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 0058b1a8: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0058b1ab: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058b1b1: mov ebx, dword ptr [edi + 0x488] */ r_ebx = R32((u32)(r_edi+0x488u));
    /* 0058b1b7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058b1ba: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b1bd: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 0058b1c3: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0058b1c6: lea ecx, [edi + 0x488] */ r_ecx = (u32)(r_edi+0x488u);
    /* 0058b1cc: call dword ptr [ebx + 8] */ { u32 t = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, 0x58b1cfu); call_ind(t); }
    /* 0058b1cf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1d3: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0058b1d6: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1d9: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x58b1deu); f_0050a984();
    /* 0058b1de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b1e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058b1e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b1e3: ret 4 */ FN_RET(0x0058b0cc); r_esp += 8; return;
L_0058b1e6:; BB(0x0058b1e6);
    /* 0058b1e6: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0058b1ea: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058b1ef: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0058b1f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058b1f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b1f5: ret 4 */ FN_RET(0x0058b0cc); r_esp += 8; return;
}

void f_0058b1f8(void) /* sub_58B1F8 */
{
    FN_ENTER(0x0058b1f8);
    /* 0058b1f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1f9: mov esi, ecx */ r_esi = r_ecx;
    /* 0058b1fb: push 0x25b */ { u32 v = 0x25bu; r_esp -= 4; W32(r_esp, v); }
    /* 0058b200: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58b205u); f_00589c9c();
    /* 0058b205: mov ecx, eax */ r_ecx = r_eax;
    /* 0058b207: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0058b20a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058b20c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b20d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b20e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b20f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b210: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b211: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x58b216u); f_008144b0();
    /* 0058b216: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b219: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058b21a: ret  */ FN_RET(0x0058b1f8); r_esp += 4; return;
}

void f_0058b21c(void) /* sub_58B21C */
{
    FN_ENTER(0x0058b21c);
    /* 0058b21c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b21d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058b21e: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058b221: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058b223: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0058b227: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b22a: je 0x58b754 */ if (fZ) goto L_0058b754;
L_0058b230:; BB(0x0058b230);
    /* 0058b230: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b233: je 0x58b6d9 */ if (fZ) goto L_0058b6d9;
L_0058b239:; BB(0x0058b239);
    /* 0058b239: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b23c: je 0x58b535 */ if (fZ) goto L_0058b535;
L_0058b242:; BB(0x0058b242);
    /* 0058b242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b244: jne 0x58b6d9 */ if (!fZ) goto L_0058b6d9;
L_0058b24a:; BB(0x0058b24a);
    /* 0058b24a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b24c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58b251u); f_007aa094();
    /* 0058b251: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b253: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x58b258u); f_00521238();
    /* 0058b258: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b25a: jne 0x58b274 */ if (!fZ) goto L_0058b274;
L_0058b25c:; BB(0x0058b25c);
    /* 0058b25c: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b261: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058b264: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b266: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x58b26cu); call_ind(t); }
    /* 0058b26c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b26e: je 0x58b6d9 */ if (fZ) goto L_0058b6d9;
L_0058b274:; BB(0x0058b274);
    /* 0058b274: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0058b27a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b27c: je 0x58b3a2 */ if (fZ) goto L_0058b3a2;
L_0058b282:; BB(0x0058b282);
    /* 0058b282: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b285: jne 0x58b314 */ if (!fZ) goto L_0058b314;
L_0058b28b:; BB(0x0058b28b);
    /* 0058b28b: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 0058b291: mov edx, eax */ r_edx = r_eax;
    /* 0058b293: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0058b296: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058b298: mov edx, dword ptr [ebp + 0x3dc] */ r_edx = R32((u32)(r_ebp+0x3dcu));
    /* 0058b29e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0058b2a0: add eax, dword ptr [ebp + 0x3d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x3d8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058b2a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b2a7: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 0058b2ad: mov esi, edx */ r_esi = r_edx;
    /* 0058b2af: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0058b2b2: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058b2b4: mov esi, dword ptr [ebp + 0x3dc] */ r_esi = R32((u32)(r_ebp+0x3dcu));
    /* 0058b2ba: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0058b2bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b2be: add dword ptr [ebp + 0x474], edx */ { u32 ad = (u32)(r_ebp+0x474u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058b2c4: mov edx, esi */ r_edx = r_esi;
    /* 0058b2c6: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0058b2c9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058b2cb: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0058b2cd: add dword ptr [ebp + 0x478], esi */ { u32 ad = (u32)(r_ebp+0x478u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058b2d3: call 0x58b7cc */ r_esp -= 4; W32(r_esp, 0x58b2d8u); f_0058b7cc();
    /* 0058b2d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b2da: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58b2dfu); f_00521410();
    /* 0058b2df: fld dword ptr [0x928980] */ FPUSH(R_F32((u32)(0x928980u)));
    /* 0058b2e5: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0058b2eb: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0058b2ee: fcom dword ptr [ebp + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3b4u))); 
    /* 0058b2f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058b2f6: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0058b2fa: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0058b2fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058b2ff: jbe 0x58b476 */ if ((fC||fZ)) goto L_0058b476;
L_0058b305:; BB(0x0058b305);
    /* 0058b305: mov dword ptr [ebp + 0x3c8], 2 */ W32((u32)(r_ebp+0x3c8u), 0x2u);
    /* 0058b30f: jmp 0x58b476 */ goto L_0058b476;
L_0058b314:; BB(0x0058b314);
    /* 0058b314: fldz  */ FPUSH(0.0);
    /* 0058b316: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0058b31a: fldz  */ FPUSH(0.0);
    /* 0058b31c: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0058b320: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b323: jne 0x58b476 */ if (!fZ) goto L_0058b476;
L_0058b329:; BB(0x0058b329);
    /* 0058b329: mov esi, dword ptr [ebp + 0x3d8] */ r_esi = R32((u32)(r_ebp+0x3d8u));
    /* 0058b32f: add esi, dword ptr [ebp + 0x3dc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x3dcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058b335: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 0058b33b: mov edx, dword ptr [ebp + 0x3dc] */ r_edx = R32((u32)(r_ebp+0x3dcu));
    /* 0058b341: mov dword ptr [ebp + 0x3d8], esi */ W32((u32)(r_ebp+0x3d8u), r_esi);
    /* 0058b347: add dword ptr [ebp + 0x474], eax */ { u32 ad = (u32)(r_ebp+0x474u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058b34d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b34e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b350: add dword ptr [ebp + 0x478], edx */ { u32 ad = (u32)(r_ebp+0x478u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058b356: call 0x58b7cc */ r_esp -= 4; W32(r_esp, 0x58b35bu); f_0058b7cc();
    /* 0058b35b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b35d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58b362u); f_00521410();
    /* 0058b362: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 0058b368: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0058b36b: mov ecx, dword ptr [ebp + 0x3e0] */ r_ecx = R32((u32)(r_ebp+0x3e0u));
    /* 0058b371: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0058b375: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58b37au); f_0082dcbc();
    /* 0058b37a: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0058b37e: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0058b382: fmul dword ptr [0x92897c] */ ST(0) = ST(0) * R_F32((u32)(0x92897cu));
    /* 0058b388: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 0058b38e: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0058b392: add eax, 0x380 */ {  u32 a = r_eax; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058b397: mov dword ptr [ebp + 0x3e0], eax */ W32((u32)(r_ebp+0x3e0u), r_eax);
    /* 0058b39d: jmp 0x58b476 */ goto L_0058b476;
L_0058b3a2:; BB(0x0058b3a2);
    /* 0058b3a2: push dword ptr [ebp + 0x3d8] */ { u32 v = R32((u32)(r_ebp+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058b3a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b3aa: call 0x58b7cc */ r_esp -= 4; W32(r_esp, 0x58b3afu); f_0058b7cc();
    /* 0058b3af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b3b1: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58b3b6u); f_00521410();
    /* 0058b3b6: fld dword ptr [0x928980] */ FPUSH(R_F32((u32)(0x928980u)));
    /* 0058b3bc: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0058b3c2: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0058b3c5: fld dword ptr [ebp + 0x470] */ FPUSH(R_F32((u32)(r_ebp+0x470u)));
    /* 0058b3cb: fmul dword ptr [0x928978] */ ST(0) = ST(0) * R_F32((u32)(0x928978u));
    /* 0058b3d1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058b3d3: fcomp dword ptr [ebp + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3b4u))); FPOP();
    /* 0058b3d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058b3db: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0058b3df: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0058b3e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058b3e4: jbe 0x58b476 */ if ((fC||fZ)) goto L_0058b476;
L_0058b3ea:; BB(0x0058b3ea);
    /* 0058b3ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b3ec: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x58b3f1u); f_007751b0();
    /* 0058b3f1: fcomp dword ptr [0x928974] */ fx_compare(ST(0), R_F32((u32)(0x928974u))); FPOP();
    /* 0058b3f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058b3f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058b3fa: fld dword ptr [0x92896c] */ FPUSH(R_F32((u32)(0x92896cu)));
    /* 0058b400: jbe 0x58b438 */ if ((fC||fZ)) goto L_0058b438;
L_0058b402:; BB(0x0058b402);
    /* 0058b402: fld dword ptr [0x928968] */ FPUSH(R_F32((u32)(0x928968u)));
    /* 0058b408: fmul dword ptr [esp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4cu));
    /* 0058b40c: fld dword ptr [ebp + 0x470] */ FPUSH(R_F32((u32)(r_ebp+0x470u)));
    /* 0058b412: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058b414: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0058b416: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0058b41a: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0058b41f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b424: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0058b428: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0058b42c: fistp dword ptr [ebp + 0x3dc] */ W32((u32)(r_ebp+0x3dcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0058b432: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0058b436: jmp 0x58b46c */ goto L_0058b46c;
L_0058b438:; BB(0x0058b438);
    /* 0058b438: fld dword ptr [0x928970] */ FPUSH(R_F32((u32)(0x928970u)));
    /* 0058b43e: fmul dword ptr [esp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4cu));
    /* 0058b442: fld dword ptr [ebp + 0x470] */ FPUSH(R_F32((u32)(r_ebp+0x470u)));
    /* 0058b448: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058b44a: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0058b44c: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0058b450: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0058b455: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b45a: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0058b45e: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0058b462: fistp dword ptr [ebp + 0x3dc] */ W32((u32)(r_ebp+0x3dcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0058b468: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
L_0058b46c:; BB(0x0058b46c);
    /* 0058b46c: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
L_0058b476:; BB(0x0058b476);
    /* 0058b476: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 0058b47c: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0058b482: mov esi, dword ptr [ebp + 0x3b0] */ r_esi = R32((u32)(r_ebp+0x3b0u));
    /* 0058b488: mov dword ptr [ebp + 0x454], edx */ W32((u32)(r_ebp+0x454u), r_edx);
    /* 0058b48e: mov dword ptr [ebp + 0x458], eax */ W32((u32)(r_ebp+0x458u), r_eax);
    /* 0058b494: mov dword ptr [ebp + 0x45c], esi */ W32((u32)(r_ebp+0x45cu), r_esi);
    /* 0058b49a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b49d: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0058b4a1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058b4a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b4a7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0058b4aa: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0058b4ae: call 0x58ae3c */ r_esp -= 4; W32(r_esp, 0x58b4b3u); f_0058ae3c();
    /* 0058b4b3: mov eax, dword ptr [ebp + 0x450] */ r_eax = R32((u32)(r_ebp+0x450u));
    /* 0058b4b9: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b4bc: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0058b4c0: fadd dword ptr [ebp + 0x3a0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3a0u));
    /* 0058b4c6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058b4ca: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058b4cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b4cf: call 0x58a0c0 */ r_esp -= 4; W32(r_esp, 0x58b4d4u); f_0058a0c0();
    /* 0058b4d4: fstp dword ptr [ebp + 0x450] */ W_F32((u32)(r_ebp+0x450u), ST(0)); FPOP();
    /* 0058b4da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b4dc: call 0x589fdc */ r_esp -= 4; W32(r_esp, 0x58b4e1u); f_00589fdc();
    /* 0058b4e1: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0058b4e7: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0058b4ea: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 0058b4ed: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0058b4f0: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 0058b4f3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058b4f5: fmul qword ptr [0x9288f8] */ ST(0) = ST(0) * R_F64((u32)(0x9288f8u));
    /* 0058b4fb: fdiv qword ptr [0x9288f0] */ ST(0) = ST(0) / R_F64((u32)(0x9288f0u));
    /* 0058b501: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0058b505: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0058b50a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b50f: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0058b513: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0058b517: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058b51a: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0058b51e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058b521: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b523: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58b529u); call_ind(t); }
    /* 0058b529: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b52b: call 0x58b1f8 */ r_esp -= 4; W32(r_esp, 0x58b530u); f_0058b1f8();
    /* 0058b530: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b535:; BB(0x0058b535);
    /* 0058b535: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0058b53b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b53d: je 0x58b749 */ if (fZ) goto L_0058b749;
L_0058b543:; BB(0x0058b543);
    /* 0058b543: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0058b549: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b54e: jg 0x58b62d */ if ((!fZ&&fS==fO)) goto L_0058b62d;
L_0058b554:; BB(0x0058b554);
    /* 0058b554: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b559: jl 0x58b62d */ if ((fS!=fO)) goto L_0058b62d;
L_0058b55f:; BB(0x0058b55f);
    /* 0058b55f: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 0058b565: cmp eax, 0x5000 */ {  u32 a = r_eax; u32 b = 0x5000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b56a: jg 0x58b577 */ if ((!fZ&&fS==fO)) goto L_0058b577;
L_0058b56c:; BB(0x0058b56c);
    /* 0058b56c: cmp eax, 0xffffb000 */ {  u32 a = r_eax; u32 b = 0xffffb000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b571: jge 0x58b6d9 */ if ((fS==fO)) goto L_0058b6d9;
L_0058b577:; BB(0x0058b577);
    /* 0058b577: movzx eax, word ptr [ebp + 0x43c] */ r_eax = (u32)R16((u32)(r_ebp+0x43cu));
    /* 0058b57e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b57f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58b584u); f_007b4d18();
    /* 0058b584: mov esi, eax */ r_esi = r_eax;
    /* 0058b586: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b589: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b58b: je 0x58b706 */ if (fZ) goto L_0058b706;
L_0058b591:; BB(0x0058b591);
    /* 0058b591: movzx edx, word ptr [ebp + 0x394] */ r_edx = (u32)R16((u32)(r_ebp+0x394u));
    /* 0058b598: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b599: mov ecx, esi */ r_ecx = r_esi;
    /* 0058b59b: call 0x589acc */ r_esp -= 4; W32(r_esp, 0x58b5a0u); f_00589acc();
    /* 0058b5a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b5a2: je 0x58b5bc */ if (fZ) goto L_0058b5bc;
L_0058b5a4:; BB(0x0058b5a4);
    /* 0058b5a4: mov dword ptr [ebp + 0x478], 0 */ W32((u32)(r_ebp+0x478u), 0x0u);
    /* 0058b5ae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b5b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b5b2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b5b7u); f_0051f62c();
    /* 0058b5b7: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b5bc:; BB(0x0058b5bc);
    /* 0058b5bc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0058b5bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b5c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b5c2: push dword ptr [0xa743d0] */ { u32 v = R32((u32)(0xa743d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058b5c8: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x58b5cdu); f_0051f918();
    /* 0058b5cd: mov edx, eax */ r_edx = r_eax;
    /* 0058b5cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058b5d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058b5d3: jle 0x58b615 */ if ((fZ||fS!=fO)) goto L_0058b615;
L_0058b5d5:; BB(0x0058b5d5);
    /* 0058b5d5: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 0058b5d9: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 0058b5dd: mov ebx, eax */ r_ebx = r_eax;
    /* 0058b5df: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0058b5e3: mov edi, edx */ r_edi = r_edx;
L_0058b5e5:; BB(0x0058b5e5);
    /* 0058b5e5: movzx esi, word ptr [esp + ebx*8] */ r_esi = (u32)R16((u32)(r_esp+r_ebx*8));
    /* 0058b5e9: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 0058b5f0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058b5f3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b5f5: je 0x58b609 */ if (fZ) goto L_0058b609;
L_0058b5f7:; BB(0x0058b5f7);
    /* 0058b5f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b5f8: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0058b5fc: call 0x589acc */ r_esp -= 4; W32(r_esp, 0x58b601u); f_00589acc();
    /* 0058b601: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b603: jne 0x58b6e1 */ if (!fZ) goto L_0058b6e1;
L_0058b609:; BB(0x0058b609);
    /* 0058b609: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b60b: jl 0x58b5e5 */ if ((fS!=fO)) goto L_0058b5e5;
L_0058b60d:; BB(0x0058b60d);
    /* 0058b60d: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0058b611: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
L_0058b615:; BB(0x0058b615);
    /* 0058b615: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b617: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b619: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b61eu); f_0051f62c();
    /* 0058b61e: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
    /* 0058b628: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b62d:; BB(0x0058b62d);
    /* 0058b62d: movzx eax, word ptr [ebp + 0x43c] */ r_eax = (u32)R16((u32)(r_ebp+0x43cu));
    /* 0058b634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b635: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58b63au); f_007b4d18();
    /* 0058b63a: mov esi, eax */ r_esi = r_eax;
    /* 0058b63c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b63f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b641: je 0x58b73a */ if (fZ) goto L_0058b73a;
L_0058b647:; BB(0x0058b647);
    /* 0058b647: movzx edx, word ptr [ebp + 0x394] */ r_edx = (u32)R16((u32)(r_ebp+0x394u));
    /* 0058b64e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b64f: mov ecx, esi */ r_ecx = r_esi;
    /* 0058b651: call 0x589acc */ r_esp -= 4; W32(r_esp, 0x58b656u); f_00589acc();
    /* 0058b656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b658: je 0x58b66f */ if (fZ) goto L_0058b66f;
L_0058b65a:; BB(0x0058b65a);
    /* 0058b65a: mov dword ptr [ebp + 0x474], 0 */ W32((u32)(r_ebp+0x474u), 0x0u);
    /* 0058b664: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b666: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b668: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b66du); f_0051f62c();
    /* 0058b66d: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b66f:; BB(0x0058b66f);
    /* 0058b66f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0058b673: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b674: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b676: push dword ptr [0xa743d0] */ { u32 v = R32((u32)(0xa743d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058b67c: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x58b681u); f_0051f918();
    /* 0058b681: mov edx, eax */ r_edx = r_eax;
    /* 0058b683: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058b685: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058b687: jle 0x58b6c6 */ if ((fZ||fS!=fO)) goto L_0058b6c6;
L_0058b689:; BB(0x0058b689);
    /* 0058b689: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 0058b68d: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 0058b691: mov ebx, eax */ r_ebx = r_eax;
    /* 0058b693: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0058b697: mov edi, edx */ r_edi = r_edx;
L_0058b699:; BB(0x0058b699);
    /* 0058b699: movzx esi, word ptr [esp + ebx*8 + 0x20] */ r_esi = (u32)R16((u32)(r_esp+r_ebx*8+0x20u));
    /* 0058b69e: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 0058b6a5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058b6a8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b6aa: je 0x58b6ba */ if (fZ) goto L_0058b6ba;
L_0058b6ac:; BB(0x0058b6ac);
    /* 0058b6ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b6ad: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0058b6b1: call 0x589acc */ r_esp -= 4; W32(r_esp, 0x58b6b6u); f_00589acc();
    /* 0058b6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b6b8: jne 0x58b715 */ if (!fZ) goto L_0058b715;
L_0058b6ba:; BB(0x0058b6ba);
    /* 0058b6ba: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b6bc: jl 0x58b699 */ if ((fS!=fO)) goto L_0058b699;
L_0058b6be:; BB(0x0058b6be);
    /* 0058b6be: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0058b6c2: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
L_0058b6c6:; BB(0x0058b6c6);
    /* 0058b6c6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b6c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b6ca: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b6cfu); f_0051f62c();
    /* 0058b6cf: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
L_0058b6d9:; BB(0x0058b6d9);
    /* 0058b6d9: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b6dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058b6dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058b6de: ret 4 */ FN_RET(0x0058b21c); r_esp += 8; return;
L_0058b6e1:; BB(0x0058b6e1);
    /* 0058b6e1: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0058b6e5: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0058b6e9: mov dword ptr [ebp + 0x478], 0 */ W32((u32)(r_ebp+0x478u), 0x0u);
    /* 0058b6f3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b6f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b6f6: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x58b6fbu); f_00520fcc();
    /* 0058b6fb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b6fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b6ff: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b704u); f_0051f62c();
    /* 0058b704: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b706:; BB(0x0058b706);
    /* 0058b706: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0058b70a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b70f: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0058b713: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b715:; BB(0x0058b715);
    /* 0058b715: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0058b719: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0058b71d: mov dword ptr [ebp + 0x474], 0 */ W32((u32)(r_ebp+0x474u), 0x0u);
    /* 0058b727: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b729: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b72a: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x58b72fu); f_00520fcc();
    /* 0058b72f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b731: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b733: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b738u); f_0051f62c();
    /* 0058b738: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b73a:; BB(0x0058b73a);
    /* 0058b73a: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0058b73e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b743: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0058b747: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b749:; BB(0x0058b749);
    /* 0058b749: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b74b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b74d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b752u); f_0051f62c();
    /* 0058b752: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b754:; BB(0x0058b754);
    /* 0058b754: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0058b757: mov eax, 1 */ r_eax = 0x1u;
    /* 0058b75c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058b763: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058b765: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58b76bu); call_ind(t); }
    /* 0058b76b: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058b771: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0058b774: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058b77a: movsx esi, word ptr [ebp + 0x32e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0058b781: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058b784: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b787: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0058b78d: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0058b790: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b793: je 0x58b7bc */ if (fZ) goto L_0058b7bc;
L_0058b795:; BB(0x0058b795);
    /* 0058b795: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 0058b798: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058b79d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058b79f: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 0058b7a5: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 0058b7ab: mov dword ptr [ebp + 0x3dc], edx */ W32((u32)(r_ebp+0x3dcu), r_edx);
    /* 0058b7b1: mov dword ptr [ebp + 0x3e0], edx */ W32((u32)(r_ebp+0x3e0u), r_edx);
    /* 0058b7b7: jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b7bc:; BB(0x0058b7bc);
    /* 0058b7bc: mov dword ptr [ebp + 0x3c8], 2 */ W32((u32)(r_ebp+0x3c8u), 0x2u);
    /* 0058b7c6: jmp 0x58b6d9 */ goto L_0058b6d9;
}

void f_0058b7cc(void) /* sub_58B7CC */
{
    FN_ENTER(0x0058b7cc);
    /* 0058b7cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b7cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058b7cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058b7d1: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58b7d6u); f_005213d8();
    /* 0058b7d6: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0058b7da: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58b7dfu); f_0082dcbc();
    /* 0058b7df: fmul dword ptr [ebx + 0x470] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x470u));
    /* 0058b7e5: fadd dword ptr [ebx + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x39cu));
    /* 0058b7eb: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0058b7ef: mov eax, dword ptr [ebx + 0x468] */ r_eax = R32((u32)(r_ebx+0x468u));
    /* 0058b7f5: fstp dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0)); FPOP();
    /* 0058b7fb: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0058b801: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58b806u); f_0082ddd8();
    /* 0058b806: fmul dword ptr [ebx + 0x470] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x470u));
    /* 0058b80c: fadd dword ptr [ebx + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3a4u));
    /* 0058b812: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 0058b818: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058b819: ret 4 */ FN_RET(0x0058b7cc); r_esp += 8; return;
}

void f_0058b81c(void) /* sub_58B81C */
{
    FN_ENTER(0x0058b81c);
    /* 0058b81c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b81d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058b820: mov edi, ecx */ r_edi = r_ecx;
    /* 0058b822: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0058b826: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b829: je 0x58b9f3 */ if (fZ) goto L_0058b9f3;
L_0058b82f:; BB(0x0058b82f);
    /* 0058b82f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b832: je 0x58b977 */ if (fZ) goto L_0058b977;
L_0058b838:; BB(0x0058b838);
    /* 0058b838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b83a: jne 0x58b961 */ if (!fZ) goto L_0058b961;
L_0058b840:; BB(0x0058b840);
    /* 0058b840: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b842: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58b847u); f_007aa094();
    /* 0058b847: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b849: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x58b84eu); f_00521238();
    /* 0058b84e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b850: jne 0x58b859 */ if (!fZ) goto L_0058b859;
L_0058b852:; BB(0x0058b852);
    /* 0058b852: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b854: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x58b859u); f_00520f68();
L_0058b859:; BB(0x0058b859);
    /* 0058b859: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0058b85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b861: jne 0x58b912 */ if (!fZ) goto L_0058b912;
L_0058b867:; BB(0x0058b867);
    /* 0058b867: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b869: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58b86eu); f_005213d8();
    /* 0058b86e: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b870: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58b875u); f_00521410();
    /* 0058b875: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0058b87b: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0058b881: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058b883: fmul qword ptr [0x9288e8] */ ST(0) = ST(0) * R_F64((u32)(0x9288e8u));
    /* 0058b889: fdiv qword ptr [0x9288e0] */ ST(0) = ST(0) / R_F64((u32)(0x9288e0u));
    /* 0058b88f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058b892: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058b896: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b89b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058b89f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058b8a3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058b8a7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0058b8aa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0058b8ae: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b8b4: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058b8b7: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x58b8bcu); f_007a8c74();
    /* 0058b8bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b8bf: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0058b8c2: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0058b8c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058b8cb: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 0058b8d1: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b8d4: jle 0x58b9c1 */ if ((fZ||fS!=fO)) goto L_0058b9c1;
L_0058b8da:; BB(0x0058b8da);
    /* 0058b8da: mov dword ptr [edi + 0x3c8], 1 */ W32((u32)(r_edi+0x3c8u), 0x1u);
    /* 0058b8e4: push 0x25d */ { u32 v = 0x25du; r_esp -= 4; W32(r_esp, v); }
    /* 0058b8e9: mov eax, 3 */ r_eax = 0x3u;
    /* 0058b8ee: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058b8f5: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58b8fau); f_00589c9c();
    /* 0058b8fa: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0058b8fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058b8ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b901: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b903: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58b908u); f_00814298();
    /* 0058b908: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b90b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b90e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b90f: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
L_0058b912:; BB(0x0058b912);
    /* 0058b912: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b915: jne 0x58b9c1 */ if (!fZ) goto L_0058b9c1;
L_0058b91b:; BB(0x0058b91b);
    /* 0058b91b: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b920: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b922: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58b927u); f_007aaa30();
    /* 0058b927: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b929: je 0x58b9c8 */ if (fZ) goto L_0058b9c8;
L_0058b92f:; BB(0x0058b92f);
    /* 0058b92f: push 0x25f */ { u32 v = 0x25fu; r_esp -= 4; W32(r_esp, v); }
    /* 0058b934: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58b939u); f_00589c9c();
    /* 0058b939: mov ecx, eax */ r_ecx = r_eax;
    /* 0058b93b: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0058b93e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058b940: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b944: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58b949u); f_00814298();
    /* 0058b949: lea eax, [edi + 0x414] */ r_eax = (u32)(r_edi+0x414u);
    /* 0058b94f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b950: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b951: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b952: call 0x58c6c4 */ r_esp -= 4; W32(r_esp, 0x58b957u); f_0058c6c4();
    /* 0058b957: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b95a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b95d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b95e: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
L_0058b961:; BB(0x0058b961);
    /* 0058b961: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b964: jne 0x58b9c1 */ if (!fZ) goto L_0058b9c1;
L_0058b966:; BB(0x0058b966);
    /* 0058b966: mov dword ptr [edi + 0x47c], 0 */ W32((u32)(r_edi+0x47cu), 0x0u);
    /* 0058b970: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b973: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b974: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
L_0058b977:; BB(0x0058b977);
    /* 0058b977: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0058b97d: fcomp dword ptr [0x928a04] */ fx_compare(ST(0), R_F32((u32)(0x928a04u))); FPOP();
    /* 0058b983: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058b985: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058b986: ja 0x58b9b8 */ if ((!fC&&!fZ)) goto L_0058b9b8;
L_0058b988:; BB(0x0058b988);
    /* 0058b988: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0058b98e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b990: je 0x58b9ac */ if (fZ) goto L_0058b9ac;
L_0058b992:; BB(0x0058b992);
    /* 0058b992: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b995: je 0x58b9c1 */ if (fZ) goto L_0058b9c1;
L_0058b997:; BB(0x0058b997);
    /* 0058b997: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b99a: jne 0x58b9c1 */ if (!fZ) goto L_0058b9c1;
L_0058b99c:; BB(0x0058b99c);
    /* 0058b99c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b99e: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b9a0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b9a5u); f_0051f62c();
    /* 0058b9a5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b9a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b9a9: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
L_0058b9ac:; BB(0x0058b9ac);
    /* 0058b9ac: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0058b9b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b9b4: jne 0x58b9c1 */ if (!fZ) goto L_0058b9c1;
L_0058b9b6:; BB(0x0058b9b6);
    /* 0058b9b6: jmp 0x58b9e3 */ goto L_0058b9e3;
L_0058b9b8:; BB(0x0058b9b8);
    /* 0058b9b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b9ba: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b9bc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b9c1u); f_0051f62c();
L_0058b9c1:; BB(0x0058b9c1);
    /* 0058b9c1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b9c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b9c5: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
L_0058b9c8:; BB(0x0058b9c8);
    /* 0058b9c8: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0058b9ce: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058b9d0: je 0x58b9c1 */ if (fZ) goto L_0058b9c1;
L_0058b9d2:; BB(0x0058b9d2);
    /* 0058b9d2: mov dword ptr [edi + 0x3c8], 2 */ W32((u32)(r_edi+0x3c8u), 0x2u);
    /* 0058b9dc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b9df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b9e0: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
L_0058b9e3:; BB(0x0058b9e3);
    /* 0058b9e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b9e5: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b9e7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b9ecu); f_0051f62c();
    /* 0058b9ec: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058b9ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058b9f0: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
L_0058b9f3:; BB(0x0058b9f3);
    /* 0058b9f3: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0058b9f5: mov eax, 1 */ r_eax = 0x1u;
    /* 0058b9fa: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058ba01: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ba03: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58ba09u); call_ind(t); }
    /* 0058ba09: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 0058ba0f: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0058ba12: mov dword ptr [edi + 0x47c], 1 */ W32((u32)(r_edi+0x47cu), 0x1u);
    /* 0058ba1c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058ba1f: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058ba25: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058ba28: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 0058ba2e: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0058ba31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058ba33: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 0058ba39: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0058ba3f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ba42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058ba43: ret 4 */ FN_RET(0x0058b81c); r_esp += 8; return;
}

void f_0058ba48(void) /* sub_58BA48 */
{
    FN_ENTER(0x0058ba48);
    /* 0058ba48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ba49: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058ba4c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058ba4e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0058ba52: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ba55: je 0x58bd86 */ if (fZ) goto L_0058bd86;
L_0058ba5b:; BB(0x0058ba5b);
    /* 0058ba5b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ba5e: je 0x58bc5a */ if (fZ) goto L_0058bc5a;
L_0058ba64:; BB(0x0058ba64);
    /* 0058ba64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ba66: jne 0x58bc49 */ if (!fZ) goto L_0058bc49;
L_0058ba6c:; BB(0x0058ba6c);
    /* 0058ba6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ba6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58ba73u); f_007aa094();
    /* 0058ba73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ba75: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x58ba7au); f_00521238();
    /* 0058ba7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ba7c: jne 0x58ba85 */ if (!fZ) goto L_0058ba85;
L_0058ba7e:; BB(0x0058ba7e);
    /* 0058ba7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ba80: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x58ba85u); f_00520f68();
L_0058ba85:; BB(0x0058ba85);
    /* 0058ba85: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0058ba8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ba8d: je 0x58bbbd */ if (fZ) goto L_0058bbbd;
L_0058ba93:; BB(0x0058ba93);
    /* 0058ba93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ba96: jne 0x58baf7 */ if (!fZ) goto L_0058baf7;
L_0058ba98:; BB(0x0058ba98);
    /* 0058ba98: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0058ba9e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058baa1: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0058baa7: mov edx, dword ptr [0xa743e4] */ r_edx = R32((u32)(0xa743e4u));
    /* 0058baad: cmp eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058bab0: jl 0x58baeb */ if ((fS!=fO)) goto L_0058baeb;
L_0058bab2:; BB(0x0058bab2);
    /* 0058bab2: mov dword ptr [ebp + 0x3cc], 0 */ W32((u32)(r_ebp+0x3ccu), 0x0u);
    /* 0058babc: push 0x25d */ { u32 v = 0x25du; r_esp -= 4; W32(r_esp, v); }
    /* 0058bac1: mov eax, 2 */ r_eax = 0x2u;
    /* 0058bac6: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0058bacc: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058bad3: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58bad8u); f_00589c9c();
    /* 0058bad8: mov ecx, eax */ r_ecx = r_eax;
    /* 0058bada: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0058badd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058badf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bae1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058bae2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bae3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58bae8u); f_00814298();
    /* 0058bae8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058baeb:; BB(0x0058baeb);
    /* 0058baeb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058baed: call 0x58c61c */ r_esp -= 4; W32(r_esp, 0x58baf2u); f_0058c61c();
    /* 0058baf2: jmp 0x58bc35 */ goto L_0058bc35;
L_0058baf7:; BB(0x0058baf7);
    /* 0058baf7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bafa: jne 0x58bc35 */ if (!fZ) goto L_0058bc35;
L_0058bb00:; BB(0x0058bb00);
    /* 0058bb00: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb05: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bb07: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58bb0cu); f_007aaa30();
    /* 0058bb0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bb0e: jne 0x58bb20 */ if (!fZ) goto L_0058bb20;
L_0058bb10:; BB(0x0058bb10);
    /* 0058bb10: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bb17: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58bb1cu); f_007aaa30();
    /* 0058bb1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bb1e: je 0x58bb34 */ if (fZ) goto L_0058bb34;
L_0058bb20:; BB(0x0058bb20);
    /* 0058bb20: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb25: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0058bb2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb2c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x58bb31u); f_0050b510();
    /* 0058bb31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058bb34:; BB(0x0058bb34);
    /* 0058bb34: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bb3b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58bb40u); f_007aaa30();
    /* 0058bb40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bb42: je 0x58bb73 */ if (fZ) goto L_0058bb73;
L_0058bb44:; BB(0x0058bb44);
    /* 0058bb44: mov dword ptr [ebp + 0x3d0], 1 */ W32((u32)(r_ebp+0x3d0u), 0x1u);
    /* 0058bb4e: push 0x25e */ { u32 v = 0x25eu; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb53: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58bb58u); f_00589c9c();
    /* 0058bb58: mov ecx, eax */ r_ecx = r_eax;
    /* 0058bb5a: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0058bb5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058bb5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb63: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58bb68u); f_00814298();
    /* 0058bb68: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058bb6b: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0058bb71: jmp 0x58bb97 */ goto L_0058bb97;
L_0058bb73:; BB(0x0058bb73);
    /* 0058bb73: push 0x41f80000 */ { u32 v = 0x41f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bb78: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bb7a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58bb7fu); f_007aaa30();
    /* 0058bb7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bb81: je 0x58bb91 */ if (fZ) goto L_0058bb91;
L_0058bb83:; BB(0x0058bb83);
    /* 0058bb83: mov dword ptr [ebp + 0x3d0], 0 */ W32((u32)(r_ebp+0x3d0u), 0x0u);
    /* 0058bb8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058bb8f: jmp 0x58bb97 */ goto L_0058bb97;
L_0058bb91:; BB(0x0058bb91);
    /* 0058bb91: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
L_0058bb97:; BB(0x0058bb97);
    /* 0058bb97: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bb9a: je 0x58bcae */ if (fZ) goto L_0058bcae;
L_0058bba0:; BB(0x0058bba0);
    /* 0058bba0: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0058bba6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058bba8: je 0x58bbb4 */ if (fZ) goto L_0058bbb4;
L_0058bbaa:; BB(0x0058bbaa);
    /* 0058bbaa: mov dword ptr [ebp + 0x3c8], 3 */ W32((u32)(r_ebp+0x3c8u), 0x3u);
L_0058bbb4:; BB(0x0058bbb4);
    /* 0058bbb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bbb6: call 0x58c61c */ r_esp -= 4; W32(r_esp, 0x58bbbbu); f_0058c61c();
    /* 0058bbbb: jmp 0x58bc35 */ goto L_0058bc35;
L_0058bbbd:; BB(0x0058bbbd);
    /* 0058bbbd: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0058bbc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bbc5: je 0x58bbce */ if (fZ) goto L_0058bbce;
L_0058bbc7:; BB(0x0058bbc7);
    /* 0058bbc7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bbc9: call 0x58a060 */ r_esp -= 4; W32(r_esp, 0x58bbceu); f_0058a060();
L_0058bbce:; BB(0x0058bbce);
    /* 0058bbce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bbd0: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58bbd5u); f_00521410();
    /* 0058bbd5: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0058bbd8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58bbddu); f_0082dcbc();
    /* 0058bbdd: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0058bbe0: fstp dword ptr [ebp + 0x454] */ W_F32((u32)(r_ebp+0x454u), ST(0)); FPOP();
    /* 0058bbe6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58bbebu); f_0082ddd8();
    /* 0058bbeb: fstp dword ptr [ebp + 0x45c] */ W_F32((u32)(r_ebp+0x45cu), ST(0)); FPOP();
    /* 0058bbf1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bbf3: call 0x58a080 */ r_esp -= 4; W32(r_esp, 0x58bbf8u); f_0058a080();
    /* 0058bbf8: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058bbfe: push dword ptr [ebp + 0x450] */ { u32 v = R32((u32)(r_ebp+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058bc04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bc06: call 0x58a0c0 */ r_esp -= 4; W32(r_esp, 0x58bc0bu); f_0058a0c0();
    /* 0058bc0b: fstp dword ptr [ebp + 0x450] */ W_F32((u32)(r_ebp+0x450u), ST(0)); FPOP();
    /* 0058bc11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bc13: call 0x589fdc */ r_esp -= 4; W32(r_esp, 0x58bc18u); f_00589fdc();
    /* 0058bc18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bc1a: call 0x58a164 */ r_esp -= 4; W32(r_esp, 0x58bc1fu); f_0058a164();
    /* 0058bc1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bc21: je 0x58bc35 */ if (fZ) goto L_0058bc35;
L_0058bc23:; BB(0x0058bc23);
    /* 0058bc23: mov eax, 1 */ r_eax = 0x1u;
    /* 0058bc28: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058bc2f: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
L_0058bc35:; BB(0x0058bc35);
    /* 0058bc35: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058bc38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bc3a: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58bc40u); call_ind(t); }
    /* 0058bc40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bc42: call 0x58a140 */ r_esp -= 4; W32(r_esp, 0x58bc47u); f_0058a140();
    /* 0058bc47: jmp 0x58bca7 */ goto L_0058bca7;
L_0058bc49:; BB(0x0058bc49);
    /* 0058bc49: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bc4c: jne 0x58bca7 */ if (!fZ) goto L_0058bca7;
L_0058bc4e:; BB(0x0058bc4e);
    /* 0058bc4e: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
    /* 0058bc58: jmp 0x58bca7 */ goto L_0058bca7;
L_0058bc5a:; BB(0x0058bc5a);
    /* 0058bc5a: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0058bc60: fcomp dword ptr [0x928a04] */ fx_compare(ST(0), R_F32((u32)(0x928a04u))); FPOP();
    /* 0058bc66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bc68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bc69: ja 0x58bc9e */ if ((!fC&&!fZ)) goto L_0058bc9e;
L_0058bc6b:; BB(0x0058bc6b);
    /* 0058bc6b: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0058bc71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058bc73: jl 0x58bca7 */ if ((fS!=fO)) goto L_0058bca7;
L_0058bc75:; BB(0x0058bc75);
    /* 0058bc75: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058bc78: jg 0x58bc89 */ if ((!fZ&&fS==fO)) goto L_0058bc89;
L_0058bc7a:; BB(0x0058bc7a);
    /* 0058bc7a: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0058bc80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bc82: jne 0x58bca7 */ if (!fZ) goto L_0058bca7;
L_0058bc84:; BB(0x0058bc84);
    /* 0058bc84: jmp 0x58bd78 */ goto L_0058bd78;
L_0058bc89:; BB(0x0058bc89);
    /* 0058bc89: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bc8c: je 0x58bca7 */ if (fZ) goto L_0058bca7;
L_0058bc8e:; BB(0x0058bc8e);
    /* 0058bc8e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bc91: jne 0x58bca7 */ if (!fZ) goto L_0058bca7;
L_0058bc93:; BB(0x0058bc93);
    /* 0058bc93: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bc95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bc97: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58bc9cu); f_0051f62c();
    /* 0058bc9c: jmp 0x58bca7 */ goto L_0058bca7;
L_0058bc9e:; BB(0x0058bc9e);
    /* 0058bc9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bca0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bca2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58bca7u); f_0051f62c();
L_0058bca7:; BB(0x0058bca7);
    /* 0058bca7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058bcaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058bcab: ret 4 */ FN_RET(0x0058ba48); r_esp += 8; return;
L_0058bcae:; BB(0x0058bcae);
    /* 0058bcae: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 0058bcb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058bcb6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058bcb8: jle 0x58bba0 */ if ((fZ||fS!=fO)) goto L_0058bba0;
L_0058bcbe:; BB(0x0058bcbe);
    /* 0058bcbe: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0058bcc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0058bcc4: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
L_0058bcc8:; BB(0x0058bcc8);
    /* 0058bcc8: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0058bccf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058bcd0: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x58bcd5u); f_006ea71c();
    /* 0058bcd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058bcd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bcd8: je 0x58bd5c */ if (fZ) goto L_0058bd5c;
L_0058bcde:; BB(0x0058bcde);
    /* 0058bcde: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bce0: je 0x58bd5c */ if (fZ) goto L_0058bd5c;
L_0058bce2:; BB(0x0058bce2);
    /* 0058bce2: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0058bce6: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058bcec: jge 0x58bd5c */ if ((fS==fO)) goto L_0058bd5c;
L_0058bcee:; BB(0x0058bcee);
    /* 0058bcee: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0058bcf0: mov ecx, esi */ r_ecx = r_esi;
    /* 0058bcf2: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x58bcf8u); call_ind(t); }
    /* 0058bcf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bcfa: jne 0x58bd5c */ if (!fZ) goto L_0058bd5c;
L_0058bcfc:; BB(0x0058bcfc);
    /* 0058bcfc: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0058bd02: lea edx, [ebp + 0x414] */ r_edx = (u32)(r_ebp+0x414u);
    /* 0058bd08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd0a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58bd0fu); f_007a9180();
    /* 0058bd0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058bd12: mov edx, dword ptr [ebp + 0x31c] */ r_edx = R32((u32)(r_ebp+0x31cu));
    /* 0058bd18: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0058bd1b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058bd1d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058bd1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bd21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bd22: jb 0x58bd5c */ if (fC) goto L_0058bd5c;
L_0058bd24:; BB(0x0058bd24);
    /* 0058bd24: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0058bd27: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0058bd2a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0058bd2d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0058bd2f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058bd33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058bd35: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0058bd3a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0058bd3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd40: mov ecx, esi */ r_ecx = r_esi;
    /* 0058bd42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd43: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058bd47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd4a: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x58bd4du); call_ind(t); }
    /* 0058bd4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058bd4f: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd55: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0058bd57: mov ecx, esi */ r_ecx = r_esi;
    /* 0058bd59: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x58bd5cu); call_ind(t); }
L_0058bd5c:; BB(0x0058bd5c);
    /* 0058bd5c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058bd5f: cmp ebx, dword ptr [0xaae16c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaae16cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058bd65: jl 0x58bcc8 */ if ((fS!=fO)) goto L_0058bcc8;
L_0058bd6b:; BB(0x0058bd6b);
    /* 0058bd6b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0058bd6f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0058bd73: jmp 0x58bba0 */ goto L_0058bba0;
L_0058bd78:; BB(0x0058bd78);
    /* 0058bd78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058bd7a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bd7c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58bd81u); f_0051f62c();
    /* 0058bd81: jmp 0x58bca7 */ goto L_0058bca7;
L_0058bd86:; BB(0x0058bd86);
    /* 0058bd86: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0058bd89: mov eax, 1 */ r_eax = 0x1u;
    /* 0058bd8e: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058bd95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bd97: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58bd9du); call_ind(t); }
    /* 0058bd9d: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058bda3: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0058bda6: mov dword ptr [ebp + 0x47c], 1 */ W32((u32)(r_ebp+0x47cu), 0x1u);
    /* 0058bdb0: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058bdb3: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058bdb6: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0058bdbc: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0058bdc2: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0058bdc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058bdc7: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0058bdcd: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0058bdd3: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0058bdd9: jmp 0x58bca7 */ goto L_0058bca7;
}

void f_0058bde0(void) /* sub_58BDE0 */
{
    FN_ENTER(0x0058bde0);
    /* 0058bde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058bde1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058bde3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058bde7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bdea: je 0x58be81 */ if (fZ) goto L_0058be81;
L_0058bdf0:; BB(0x0058bdf0);
    /* 0058bdf0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bdf3: je 0x58be67 */ if (fZ) goto L_0058be67;
L_0058bdf5:; BB(0x0058bdf5);
    /* 0058bdf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058bdf7: jne 0x58be7d */ if (!fZ) goto L_0058be7d;
L_0058bdfd:; BB(0x0058bdfd);
    /* 0058bdfd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058bdff: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58be04u); f_007aa094();
    /* 0058be04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be06: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x58be0bu); f_00521238();
    /* 0058be0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058be0d: jne 0x58be2c */ if (!fZ) goto L_0058be2c;
L_0058be0f:; BB(0x0058be0f);
    /* 0058be0f: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058be14: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058be17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be19: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x58be1fu); call_ind(t); }
    /* 0058be1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058be21: jne 0x58be2c */ if (!fZ) goto L_0058be2c;
L_0058be23:; BB(0x0058be23);
    /* 0058be23: add dword ptr [ebp + 0x3b8], 1 */ { u32 ad = (u32)(r_ebp+0x3b8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058be2a: jmp 0x58be35 */ goto L_0058be35;
L_0058be2c:; BB(0x0058be2c);
    /* 0058be2c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058be2e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be30: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58be35u); f_0051f62c();
L_0058be35:; BB(0x0058be35);
    /* 0058be35: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be37: call 0x58bebc */ r_esp -= 4; W32(r_esp, 0x58be3cu); f_0058bebc();
    /* 0058be3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be3e: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58be43u); f_00521410();
    /* 0058be43: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 0058be46: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058be4b: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0058be4e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058be51: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0058be54: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be56: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58be5cu); call_ind(t); }
    /* 0058be5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be5e: call 0x58b1f8 */ r_esp -= 4; W32(r_esp, 0x58be63u); f_0058b1f8();
    /* 0058be63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058be64: ret 4 */ FN_RET(0x0058bde0); r_esp += 8; return;
L_0058be67:; BB(0x0058be67);
    /* 0058be67: mov eax, dword ptr [ebp + 0x3b8] */ r_eax = R32((u32)(r_ebp+0x3b8u));
    /* 0058be6d: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058be72: jl 0x58be7d */ if ((fS!=fO)) goto L_0058be7d;
L_0058be74:; BB(0x0058be74);
    /* 0058be74: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058be76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be78: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58be7du); f_0051f62c();
L_0058be7d:; BB(0x0058be7d);
    /* 0058be7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058be7e: ret 4 */ FN_RET(0x0058bde0); r_esp += 8; return;
L_0058be81:; BB(0x0058be81);
    /* 0058be81: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0058be84: mov eax, 1 */ r_eax = 0x1u;
    /* 0058be89: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058be90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058be92: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58be98u); call_ind(t); }
    /* 0058be98: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058be9e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0058bea1: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058bea7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058beaa: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058bead: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0058beb3: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0058beb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058beb7: ret 4 */ FN_RET(0x0058bde0); r_esp += 8; return;
}

void f_0058bebc(void) /* sub_58BEBC */
{
    FN_ENTER(0x0058bebc);
    /* 0058bebc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058bebd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058bebf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058bec1: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58bec6u); f_005213d8();
    /* 0058bec6: mov eax, dword ptr [ebx + 0x468] */ r_eax = R32((u32)(r_ebx+0x468u));
    /* 0058becc: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0058bed2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058bed3: ret  */ FN_RET(0x0058bebc); r_esp += 4; return;
}

void f_0058bed4(void) /* sub_58BED4 */
{
    FN_ENTER(0x0058bed4);
    /* 0058bed4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058bed5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058bed8: mov esi, ecx */ r_esi = r_ecx;
    /* 0058beda: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0058bede: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bee1: je 0x58c0f8 */ if (fZ) goto L_0058c0f8;
L_0058bee7:; BB(0x0058bee7);
    /* 0058bee7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058beea: je 0x58c0cb */ if (fZ) goto L_0058c0cb;
L_0058bef0:; BB(0x0058bef0);
    /* 0058bef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bef2: jne 0x58c0df */ if (!fZ) goto L_0058c0df;
L_0058bef8:; BB(0x0058bef8);
    /* 0058bef8: mov ecx, esi */ r_ecx = r_esi;
    /* 0058befa: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58beffu); f_007aa094();
    /* 0058beff: fld dword ptr [esi + 0x430] */ FPUSH(R_F32((u32)(r_esi+0x430u)));
    /* 0058bf05: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058bf07: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 0058bf0d: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 0058bf13: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058bf15: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058bf17: mov edx, dword ptr [esi + 0x438] */ r_edx = R32((u32)(r_esi+0x438u));
    /* 0058bf1d: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0058bf21: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058bf24: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058bf28: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058bf2b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058bf2d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058bf31: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x58bf36u); f_005207c4();
    /* 0058bf36: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0058bf3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058bf3e: jne 0x58c058 */ if (!fZ) goto L_0058c058;
L_0058bf44:; BB(0x0058bf44);
    /* 0058bf44: fld dword ptr [esi + 0x434] */ FPUSH(R_F32((u32)(r_esi+0x434u)));
    /* 0058bf4a: fld dword ptr [esi + 0x450] */ FPUSH(R_F32((u32)(r_esi+0x450u)));
    /* 0058bf50: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0058bf52: fld dword ptr [esi + 0x468] */ FPUSH(R_F32((u32)(r_esi+0x468u)));
    /* 0058bf58: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058bf5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bf5c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058bf5e: fst dword ptr [esi + 0x450] */ W_F32((u32)(r_esi+0x450u), ST(0));
    /* 0058bf64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bf65: je 0x58c0e6 */ if (fZ) goto L_0058c0e6;
L_0058bf6b:; BB(0x0058bf6b);
    /* 0058bf6b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058bf6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bf6f: fld dword ptr [esi + 0x430] */ FPUSH(R_F32((u32)(r_esi+0x430u)));
    /* 0058bf75: fld dword ptr [0x928948] */ FPUSH(R_F32((u32)(0x928948u)));
    /* 0058bf7b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058bf7d: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 0058bf83: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058bf85: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058bf87: fstp dword ptr [esi + 0x430] */ W_F32((u32)(r_esi+0x430u), ST(0)); FPOP();
    /* 0058bf8d: fstp dword ptr [esi + 0x438] */ W_F32((u32)(r_esi+0x438u), ST(0)); FPOP();
    /* 0058bf93: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bf94: jbe 0x58c000 */ if ((fC||fZ)) goto L_0058c000;
L_0058bf96:; BB(0x0058bf96);
    /* 0058bf96: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058bf98: fcom dword ptr [0x928940] */ fx_compare(ST(0), R_F32((u32)(0x928940u))); 
    /* 0058bf9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bfa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bfa1: jbe 0x58bfbe */ if ((fC||fZ)) goto L_0058bfbe;
L_0058bfa3:; BB(0x0058bfa3);
    /* 0058bfa3: fld dword ptr [0x928938] */ FPUSH(R_F32((u32)(0x928938u)));
    /* 0058bfa9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0058bfab: fld dword ptr [0x928940] */ FPUSH(R_F32((u32)(0x928940u)));
    /* 0058bfb1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058bfb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bfb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bfb6: jb 0x58bfba */ if (fC) goto L_0058bfba;
L_0058bfb8:; BB(0x0058bfb8);
    /* 0058bfb8: fst st(1) */ ST(1) = ST(0);
L_0058bfba:; BB(0x0058bfba);
    /* 0058bfba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058bfbc: jmp 0x58bfd7 */ goto L_0058bfd7;
L_0058bfbe:; BB(0x0058bfbe);
    /* 0058bfbe: fld dword ptr [0x928944] */ FPUSH(R_F32((u32)(0x928944u)));
    /* 0058bfc4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058bfc6: fld dword ptr [0x928940] */ FPUSH(R_F32((u32)(0x928940u)));
    /* 0058bfcc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058bfce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bfd0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bfd1: ja 0x58bfd5 */ if ((!fC&&!fZ)) goto L_0058bfd5;
L_0058bfd3:; BB(0x0058bfd3);
    /* 0058bfd3: fst st(1) */ ST(1) = ST(0);
L_0058bfd5:; BB(0x0058bfd5);
    /* 0058bfd5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058bfd7:; BB(0x0058bfd7);
    /* 0058bfd7: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0058bfd9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0058bfdb: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0058bfdd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058bfdf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058bfe0: jae 0x58bff1 */ if (!fC) goto L_0058bff1;
L_0058bfe2:; BB(0x0058bfe2);
    /* 0058bfe2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058bfe4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0058bfe6: fstp dword ptr [esi + 0x434] */ W_F32((u32)(r_esi+0x434u), ST(0)); FPOP();
    /* 0058bfec: jmp 0x58c09a */ goto L_0058c09a;
L_0058bff1:; BB(0x0058bff1);
    /* 0058bff1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058bff3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058bff5: fstp dword ptr [esi + 0x434] */ W_F32((u32)(r_esi+0x434u), ST(0)); FPOP();
    /* 0058bffb: jmp 0x58c09a */ goto L_0058c09a;
L_0058c000:; BB(0x0058c000);
    /* 0058c000: fld dword ptr [0x92893c] */ FPUSH(R_F32((u32)(0x92893cu)));
    /* 0058c006: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0058c008: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058c00a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058c00b: jbe 0x58c022 */ if ((fC||fZ)) goto L_0058c022;
L_0058c00d:; BB(0x0058c00d);
    /* 0058c00d: fld dword ptr [0x928938] */ FPUSH(R_F32((u32)(0x928938u)));
    /* 0058c013: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0058c015: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0058c017: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058c019: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058c01a: ja 0x58c01e */ if ((!fC&&!fZ)) goto L_0058c01e;
L_0058c01c:; BB(0x0058c01c);
    /* 0058c01c: fst st(3) */ ST(3) = ST(0);
L_0058c01e:; BB(0x0058c01e);
    /* 0058c01e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058c020: jmp 0x58c035 */ goto L_0058c035;
L_0058c022:; BB(0x0058c022);
    /* 0058c022: fld dword ptr [0x928944] */ FPUSH(R_F32((u32)(0x928944u)));
    /* 0058c028: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0058c02a: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0058c02c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058c02e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058c02f: jb 0x58c033 */ if (fC) goto L_0058c033;
L_0058c031:; BB(0x0058c031);
    /* 0058c031: fst st(3) */ ST(3) = ST(0);
L_0058c033:; BB(0x0058c033);
    /* 0058c033: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058c035:; BB(0x0058c035);
    /* 0058c035: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0058c037: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0058c039: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0058c03b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058c03d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058c03e: jbe 0x58c04c */ if ((fC||fZ)) goto L_0058c04c;
L_0058c040:; BB(0x0058c040);
    /* 0058c040: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0058c042: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0058c044: fstp dword ptr [esi + 0x434] */ W_F32((u32)(r_esi+0x434u), ST(0)); FPOP();
    /* 0058c04a: jmp 0x58c09a */ goto L_0058c09a;
L_0058c04c:; BB(0x0058c04c);
    /* 0058c04c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058c04e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058c050: fstp dword ptr [esi + 0x434] */ W_F32((u32)(r_esi+0x434u), ST(0)); FPOP();
    /* 0058c056: jmp 0x58c09a */ goto L_0058c09a;
L_0058c058:; BB(0x0058c058);
    /* 0058c058: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c05b: jne 0x58c09a */ if (!fZ) goto L_0058c09a;
L_0058c05d:; BB(0x0058c05d);
    /* 0058c05d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0058c061: fcomp dword ptr [0x92894c] */ fx_compare(ST(0), R_F32((u32)(0x92894cu))); FPOP();
    /* 0058c067: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058c069: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058c06a: ja 0x58c078 */ if ((!fC&&!fZ)) goto L_0058c078;
L_0058c06c:; BB(0x0058c06c);
    /* 0058c06c: mov dword ptr [esi + 0x3c8], 2 */ W32((u32)(r_esi+0x3c8u), 0x2u);
    /* 0058c076: jmp 0x58c09a */ goto L_0058c09a;
L_0058c078:; BB(0x0058c078);
    /* 0058c078: fld dword ptr [0x928948] */ FPUSH(R_F32((u32)(0x928948u)));
    /* 0058c07e: fld dword ptr [esi + 0x430] */ FPUSH(R_F32((u32)(r_esi+0x430u)));
    /* 0058c084: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0058c086: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 0058c08c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058c08e: fstp dword ptr [esi + 0x430] */ W_F32((u32)(r_esi+0x430u), ST(0)); FPOP();
    /* 0058c094: fstp dword ptr [esi + 0x438] */ W_F32((u32)(r_esi+0x438u), ST(0)); FPOP();
L_0058c09a:; BB(0x0058c09a);
    /* 0058c09a: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c09c: call 0x58c61c */ r_esp -= 4; W32(r_esp, 0x58c0a1u); f_0058c61c();
    /* 0058c0a1: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0058c0a7: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 0058c0ad: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0058c0b0: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 0058c0b3: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c0b5: call 0x589fdc */ r_esp -= 4; W32(r_esp, 0x58c0bau); f_00589fdc();
    /* 0058c0ba: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058c0bc: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c0be: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x58c0c4u); call_ind(t); }
    /* 0058c0c4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058c0c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058c0c8: ret 4 */ FN_RET(0x0058bed4); r_esp += 8; return;
L_0058c0cb:; BB(0x0058c0cb);
    /* 0058c0cb: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0058c0d1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c0d4: jne 0x58c0df */ if (!fZ) goto L_0058c0df;
L_0058c0d6:; BB(0x0058c0d6);
    /* 0058c0d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c0d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c0da: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58c0dfu); f_0051f62c();
L_0058c0df:; BB(0x0058c0df);
    /* 0058c0df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058c0e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058c0e3: ret 4 */ FN_RET(0x0058bed4); r_esp += 8; return;
L_0058c0e6:; BB(0x0058c0e6);
    /* 0058c0e6: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0058c0e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058c0ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058c0ec: mov dword ptr [esi + 0x3c8], 1 */ W32((u32)(r_esi+0x3c8u), 0x1u);
    /* 0058c0f6: jmp 0x58c09a */ goto L_0058c09a;
L_0058c0f8:; BB(0x0058c0f8);
    /* 0058c0f8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0058c0fa: mov eax, 1 */ r_eax = 0x1u;
    /* 0058c0ff: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0058c106: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c108: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x58c10eu); call_ind(t); }
    /* 0058c10e: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 0058c114: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0058c117: fld dword ptr [esi + 0x430] */ FPUSH(R_F32((u32)(r_esi+0x430u)));
    /* 0058c11d: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 0058c123: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058c126: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058c129: mov dword ptr [esi + 0x3c8], 0 */ W32((u32)(r_esi+0x3c8u), 0x0u);
    /* 0058c133: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058c139: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 0058c13f: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0058c142: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058c144: fmul qword ptr [0x9288d8] */ ST(0) = ST(0) * R_F64((u32)(0x9288d8u));
    /* 0058c14a: fdiv qword ptr [0x9288d0] */ ST(0) = ST(0) / R_F64((u32)(0x9288d0u));
    /* 0058c150: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058c153: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058c157: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058c15c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058c160: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058c164: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058c167: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0058c16a: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c16c: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x58c171u); f_00520f68();
    /* 0058c171: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058c174: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058c175: ret 4 */ FN_RET(0x0058bed4); r_esp += 8; return;
}

