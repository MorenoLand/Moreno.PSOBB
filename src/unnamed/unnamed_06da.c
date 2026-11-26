#include "protos.h"

void f_006da050(void) /* sub_6DA050 */
{
    FN_ENTER(0x006da050);
    /* 006da050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006da051: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006da052: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da053: mov edi, ecx */ r_edi = r_ecx;
    /* 006da055: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006da057: mov ecx, edi */ r_ecx = r_edi;
    /* 006da059: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6da05cu); call_ind(t); }
    /* 006da05c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da05e: je 0x6da22a */ if (fZ) goto L_006da22a;
L_006da064:; BB(0x006da064);
    /* 006da064: mov ecx, dword ptr [edi + 0x158] */ r_ecx = R32((u32)(r_edi+0x158u));
    /* 006da06a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da06c: je 0x6da179 */ if (fZ) goto L_006da179;
L_006da072:; BB(0x006da072);
    /* 006da072: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006da079: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006da07b: je 0x6da179 */ if (fZ) goto L_006da179;
L_006da081:; BB(0x006da081);
    /* 006da081: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6da086u); f_007365f4();
    /* 006da086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da088: jne 0x6da16e */ if (!fZ) goto L_006da16e;
L_006da08e:; BB(0x006da08e);
    /* 006da08e: mov ecx, dword ptr [edi + 0x154] */ r_ecx = R32((u32)(r_edi+0x154u));
    /* 006da094: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da096: je 0x6da166 */ if (fZ) goto L_006da166;
L_006da09c:; BB(0x006da09c);
    /* 006da09c: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 006da09f: mov edx, dword ptr [eax + 0x2b4] */ r_edx = R32((u32)(r_eax+0x2b4u));
    /* 006da0a5: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 006da0a8: cmp ebx, 0x64 */ {  u32 a = r_ebx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006da0ab: jge 0x6da0d8 */ if ((fS==fO)) goto L_006da0d8;
L_006da0ad:; BB(0x006da0ad);
    /* 006da0ad: mov ecx, dword ptr [edi + 0x158] */ r_ecx = R32((u32)(r_edi+0x158u));
    /* 006da0b3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da0b8u); f_007127b0();
    /* 006da0b8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006da0ba: mov dword ptr [edi + 0x158], 0 */ W32((u32)(r_edi+0x158u), 0x0u);
    /* 006da0c4: mov ecx, edi */ r_ecx = r_edi;
    /* 006da0c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da0c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006da0ca: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6da0cdu); call_ind(t); }
    /* 006da0cd: mov dword ptr [edi + 0x20], 0xb */ W32((u32)(r_edi+0x20u), 0xbu);
    /* 006da0d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da0d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da0d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da0d7: ret  */ FN_RET(0x006da050); r_esp += 4; return;
L_006da0d8:; BB(0x006da0d8);
    /* 006da0d8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6da0ddu); f_00737d90();
    /* 006da0dd: mov ebp, eax */ r_ebp = r_eax;
    /* 006da0df: mov ecx, dword ptr [edi + ebp*8 + 0x54] */ r_ecx = R32((u32)(r_edi+r_ebp*8+0x54u));
    /* 006da0e3: lea ebx, [edi + 0x3c] */ r_ebx = (u32)(r_edi+0x3cu);
    /* 006da0e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da0e7: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6da0ecu); f_005c425c();
    /* 006da0ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da0ee: je 0x6da13b */ if (fZ) goto L_006da13b;
L_006da0f0:; BB(0x006da0f0);
    /* 006da0f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da0f1: mov eax, dword ptr [edi + ebp*8 + 0x54] */ r_eax = R32((u32)(r_edi+r_ebp*8+0x54u));
    /* 006da0f5: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 006da0fb: and edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006da101: mov dword ptr [edi + 0x168], edx */ W32((u32)(r_edi+0x168u), r_edx);
    /* 006da107: call 0x6ce6b8 */ r_esp -= 4; W32(r_esp, 0x6da10cu); f_006ce6b8();
    /* 006da10c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da10d: mov ecx, dword ptr [edi + 0x154] */ r_ecx = R32((u32)(r_edi+0x154u));
    /* 006da113: mov dword ptr [edi + 0x14c], 0x5f */ W32((u32)(r_edi+0x14cu), 0x5fu);
    /* 006da11d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da11f: je 0x6da130 */ if (fZ) goto L_006da130;
L_006da121:; BB(0x006da121);
    /* 006da121: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da126u); f_007127b0();
    /* 006da126: mov dword ptr [edi + 0x154], 0 */ W32((u32)(r_edi+0x154u), 0x0u);
L_006da130:; BB(0x006da130);
    /* 006da130: push 0x96c428 */ { u32 v = 0x96c428u; r_esp -= 4; W32(r_esp, v); }
    /* 006da135: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6da13au); f_00814f0c();
    /* 006da13a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006da13b:; BB(0x006da13b);
    /* 006da13b: mov ecx, dword ptr [edi + 0x158] */ r_ecx = R32((u32)(r_edi+0x158u));
    /* 006da141: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da146u); f_007127b0();
    /* 006da146: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006da148: mov dword ptr [edi + 0x158], 0 */ W32((u32)(r_edi+0x158u), 0x0u);
    /* 006da152: mov ecx, edi */ r_ecx = r_edi;
    /* 006da154: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da156: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006da158: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6da15bu); call_ind(t); }
    /* 006da15b: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006da162: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da163: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da164: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da165: ret  */ FN_RET(0x006da050); r_esp += 4; return;
L_006da166:; BB(0x006da166);
    /* 006da166: mov ecx, dword ptr [edi + 0x158] */ r_ecx = R32((u32)(r_edi+0x158u));
    /* 006da16c: jmp 0x6da179 */ goto L_006da179;
L_006da16e:; BB(0x006da16e);
    /* 006da16e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da171: je 0x6da1dc */ if (fZ) goto L_006da1dc;
L_006da173:; BB(0x006da173);
    /* 006da173: mov ecx, dword ptr [edi + 0x158] */ r_ecx = R32((u32)(r_edi+0x158u));
L_006da179:; BB(0x006da179);
    /* 006da179: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da17b: je 0x6da22a */ if (fZ) goto L_006da22a;
L_006da181:; BB(0x006da181);
    /* 006da181: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006da188: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da18a: je 0x6da22a */ if (fZ) goto L_006da22a;
L_006da190:; BB(0x006da190);
    /* 006da190: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da195u); f_007127b0();
    /* 006da195: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006da197: mov dword ptr [edi + 0x158], 0 */ W32((u32)(r_edi+0x158u), 0x0u);
    /* 006da1a1: mov ecx, edi */ r_ecx = r_edi;
    /* 006da1a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da1a5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006da1a7: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6da1aau); call_ind(t); }
    /* 006da1aa: mov edx, dword ptr [edi + 0x154] */ r_edx = R32((u32)(r_edi+0x154u));
    /* 006da1b0: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006da1b7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006da1be: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006da1c1: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006da1c6: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006da1cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da1cf: je 0x6da1d8 */ if (fZ) goto L_006da1d8;
L_006da1d1:; BB(0x006da1d1);
    /* 006da1d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da1d3: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6da1d8u); f_00760acc();
L_006da1d8:; BB(0x006da1d8);
    /* 006da1d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da1d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da1da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da1db: ret  */ FN_RET(0x006da050); r_esp += 4; return;
L_006da1dc:; BB(0x006da1dc);
    /* 006da1dc: mov ecx, dword ptr [edi + 0x158] */ r_ecx = R32((u32)(r_edi+0x158u));
    /* 006da1e2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da1e7u); f_007127b0();
    /* 006da1e7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006da1e9: mov dword ptr [edi + 0x158], 0 */ W32((u32)(r_edi+0x158u), 0x0u);
    /* 006da1f3: mov ecx, edi */ r_ecx = r_edi;
    /* 006da1f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da1f7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006da1f9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6da1fcu); call_ind(t); }
    /* 006da1fc: mov edx, dword ptr [edi + 0x154] */ r_edx = R32((u32)(r_edi+0x154u));
    /* 006da202: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006da209: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006da210: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006da213: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006da218: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006da21f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da221: je 0x6da22a */ if (fZ) goto L_006da22a;
L_006da223:; BB(0x006da223);
    /* 006da223: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da225: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6da22au); f_00760acc();
L_006da22a:; BB(0x006da22a);
    /* 006da22a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da22b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da22c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da22d: ret  */ FN_RET(0x006da050); r_esp += 4; return;
}

void f_006da230(void) /* sub_6DA230 */
{
    FN_ENTER(0x006da230);
    /* 006da230: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006da231: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006da232: mov edi, ecx */ r_edi = r_ecx;
    /* 006da234: mov eax, dword ptr [edi + 0x154] */ r_eax = R32((u32)(r_edi+0x154u));
    /* 006da23a: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 006da241: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006da243: je 0x6da260 */ if (fZ) goto L_006da260;
L_006da245:; BB(0x006da245);
    /* 006da245: mov dword ptr [edi + 0x20], 0xa */ W32((u32)(r_edi+0x20u), 0xau);
    /* 006da24c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006da24e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da24f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da251: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006da256: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6da25bu); f_00814298();
    /* 006da25b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006da25e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da25f: ret  */ FN_RET(0x006da230); r_esp += 4; return;
L_006da260:; BB(0x006da260);
    /* 006da260: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da262: je 0x6da2d0 */ if (fZ) goto L_006da2d0;
L_006da264:; BB(0x006da264);
    /* 006da264: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006da266: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6da26bu); f_0073ec50();
    /* 006da26b: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006da26e: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006da272: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006da273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da274: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6da279u); f_00735884();
    /* 006da279: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da27c: mov dword ptr [edi + 0x158], eax */ W32((u32)(r_edi+0x158u), r_eax);
    /* 006da282: mov ecx, edi */ r_ecx = r_edi;
    /* 006da284: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6da289u); f_006dc8d8();
    /* 006da289: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006da28c: mov ecx, edi */ r_ecx = r_edi;
    /* 006da28e: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6da293u); f_006dc8d8();
    /* 006da293: mov ecx, dword ptr [edi + 0x158] */ r_ecx = R32((u32)(r_edi+0x158u));
    /* 006da299: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da29c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006da2a0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006da2a3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006da2a7: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6da2acu); f_0070f5a4();
    /* 006da2ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da2ae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006da2b0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006da2b2: mov ecx, edi */ r_ecx = r_edi;
    /* 006da2b4: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6da2b7u); call_ind(t); }
    /* 006da2b7: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 006da2be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006da2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da2c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da2c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da2c3: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006da2c8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6da2cdu); f_00814298();
    /* 006da2cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006da2d0:; BB(0x006da2d0);
    /* 006da2d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da2d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da2d2: ret  */ FN_RET(0x006da230); r_esp += 4; return;
}

void f_006da2d4(void) /* sub_6DA2D4 */
{
    FN_ENTER(0x006da2d4);
    /* 006da2d4: mov dword ptr [0xa962fc], 0x3f800000 */ W32((u32)(0xa962fcu), 0x3f800000u);
    /* 006da2de: mov dword ptr [0xa96300], 0x41000000 */ W32((u32)(0xa96300u), 0x41000000u);
    /* 006da2e8: mov dword ptr [0xa96304], 0x3fc00000 */ W32((u32)(0xa96304u), 0x3fc00000u);
    /* 006da2f2: ret  */ FN_RET(0x006da2d4); r_esp += 4; return;
}

void f_006da2f4(void) /* sub_6DA2F4 */
{
    FN_ENTER(0x006da2f4);
    /* 006da2f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da2f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006da2f7: mov eax, dword ptr [ebx + 0x178] */ r_eax = R32((u32)(r_ebx+0x178u));
    /* 006da2fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da2ff: je 0x6da317 */ if (fZ) goto L_006da317;
L_006da301:; BB(0x006da301);
    /* 006da301: push dword ptr [ebx + 0x164] */ { u32 v = R32((u32)(r_ebx+0x164u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da307: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6da309u); call_ind(t); }
    /* 006da309: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da30a: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006da30e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da313: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006da317:; BB(0x006da317);
    /* 006da317: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da318: ret  */ FN_RET(0x006da2f4); r_esp += 4; return;
}

void f_006da31c(void) /* sub_6DA31C */
{
    FN_ENTER(0x006da31c);
    /* 006da31c: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 006da31f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da321: je 0x6da337 */ if (fZ) goto L_006da337;
L_006da323:; BB(0x006da323);
    /* 006da323: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006da327: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da32c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006da330: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
L_006da337:; BB(0x006da337);
    /* 006da337: mov dword ptr [ecx + 0x16c], 0 */ W32((u32)(r_ecx+0x16cu), 0x0u);
    /* 006da341: ret  */ FN_RET(0x006da31c); r_esp += 4; return;
}

void f_006da344(void) /* sub_6DA344 */
{
    FN_ENTER(0x006da344);
    /* 006da344: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da345: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006da347: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006da349: call 0x6da368 */ r_esp -= 4; W32(r_esp, 0x6da34eu); f_006da368();
    /* 006da34e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006da352: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da354: jne 0x6da35a */ if (!fZ) goto L_006da35a;
L_006da356:; BB(0x006da356);
    /* 006da356: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da357: ret 4 */ FN_RET(0x006da344); r_esp += 8; return;
L_006da35a:; BB(0x006da35a);
    /* 006da35a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da35b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6da360u); f_005c2f74();
    /* 006da360: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da361: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da362: ret 4 */ FN_RET(0x006da344); r_esp += 8; return;
}

void f_006da368(void) /* sub_6DA368 */
{
    FN_ENTER(0x006da368);
    /* 006da368: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006da369: mov ebp, esp */ r_ebp = r_esp;
    /* 006da36b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006da36d: push 0x8ee3b8 */ { u32 v = 0x8ee3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006da372: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006da378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da379: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006da380: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006da383: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006da386: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006da389: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006da38c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006da38f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006da392: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006da399: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006da39c: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006da3a2: mov dword ptr [eax], 0xb3cb00 */ W32((u32)(r_eax), 0xb3cb00u);
    /* 006da3a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da3aa: je 0x6da3be */ if (fZ) goto L_006da3be;
L_006da3ac:; BB(0x006da3ac);
    /* 006da3ac: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da3b1u); f_007127b0();
    /* 006da3b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006da3b4: mov dword ptr [eax + 0x384], 0 */ W32((u32)(r_eax+0x384u), 0x0u);
L_006da3be:; BB(0x006da3be);
    /* 006da3be: mov ecx, dword ptr [eax + 0x388] */ r_ecx = R32((u32)(r_eax+0x388u));
    /* 006da3c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da3c6: je 0x6da3da */ if (fZ) goto L_006da3da;
L_006da3c8:; BB(0x006da3c8);
    /* 006da3c8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da3cdu); f_007127b0();
    /* 006da3cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006da3d0: mov dword ptr [eax + 0x388], 0 */ W32((u32)(r_eax+0x388u), 0x0u);
L_006da3da:; BB(0x006da3da);
    /* 006da3da: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 006da3e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da3e2: je 0x6da3f6 */ if (fZ) goto L_006da3f6;
L_006da3e4:; BB(0x006da3e4);
    /* 006da3e4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da3e9u); f_007127b0();
    /* 006da3e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006da3ec: mov dword ptr [eax + 0x38c], 0 */ W32((u32)(r_eax+0x38cu), 0x0u);
L_006da3f6:; BB(0x006da3f6);
    /* 006da3f6: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 006da3fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da3fe: je 0x6da412 */ if (fZ) goto L_006da412;
L_006da400:; BB(0x006da400);
    /* 006da400: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da405u); f_007127b0();
    /* 006da405: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006da408: mov dword ptr [eax + 0x390], 0 */ W32((u32)(r_eax+0x390u), 0x0u);
L_006da412:; BB(0x006da412);
    /* 006da412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006da419: mov ecx, eax */ r_ecx = r_eax;
    /* 006da41b: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6da420u); f_006dc848();
    /* 006da420: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006da423: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006da42a: mov esp, ebp */ r_esp = r_ebp;
    /* 006da42c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da42d: ret  */ FN_RET(0x006da368); r_esp += 4; return;
}

void f_006da430(void) /* sub_6DA430 */
{
    FN_ENTER(0x006da430);
    /* 006da430: mov ecx, dword ptr [ecx + 0x380] */ r_ecx = R32((u32)(r_ecx+0x380u));
    /* 006da436: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da438: je 0x6da447 */ if (fZ) goto L_006da447;
L_006da43a:; BB(0x006da43a);
    /* 006da43a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da43e: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da442: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006da444: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6da447u); call_ind(t); }
L_006da447:; BB(0x006da447);
    /* 006da447: ret 8 */ FN_RET(0x006da430); r_esp += 12; return;
}

void f_006da44c(void) /* sub_6DA44C */
{
    FN_ENTER(0x006da44c);
    /* 006da44c: mov ecx, dword ptr [ecx + 0x380] */ r_ecx = R32((u32)(r_ecx+0x380u));
    /* 006da452: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da454: je 0x6da463 */ if (fZ) goto L_006da463;
L_006da456:; BB(0x006da456);
    /* 006da456: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da45a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da45e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006da460: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6da463u); call_ind(t); }
L_006da463:; BB(0x006da463);
    /* 006da463: ret 8 */ FN_RET(0x006da44c); r_esp += 12; return;
}

void f_006da468(void) /* sub_6DA468 */
{
    FN_ENTER(0x006da468);
    /* 006da468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006da469: mov edi, ecx */ r_edi = r_ecx;
    /* 006da46b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da46f: mov ecx, edi */ r_ecx = r_edi;
    /* 006da471: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6da476u); f_006dc898();
    /* 006da476: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006da47a: mov dword ptr [edi], 0xb3cb00 */ W32((u32)(r_edi), 0xb3cb00u);
    /* 006da480: mov eax, dword ptr [0x9cf1fc] */ r_eax = R32((u32)(0x9cf1fcu));
    /* 006da485: mov dword ptr [edi + 0x378], 1 */ W32((u32)(r_edi+0x378u), 0x1u);
    /* 006da48f: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006da492: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006da496: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 006da49b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006da49d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006da49f: mov dword ptr [edi + 0x370], ecx */ W32((u32)(r_edi+0x370u), r_ecx);
    /* 006da4a5: mov dword ptr [edi + 0x374], ecx */ W32((u32)(r_edi+0x374u), r_ecx);
    /* 006da4ab: mov dword ptr [edi + 0x37c], ecx */ W32((u32)(r_edi+0x37cu), r_ecx);
    /* 006da4b1: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 006da4b4: mov dword ptr [edi + 0x380], edx */ W32((u32)(r_edi+0x380u), r_edx);
    /* 006da4ba: mov dword ptr [edi + 0x384], ecx */ W32((u32)(r_edi+0x384u), r_ecx);
    /* 006da4c0: mov dword ptr [edi + 0x388], ecx */ W32((u32)(r_edi+0x388u), r_ecx);
    /* 006da4c6: mov dword ptr [edi + 0x390], ecx */ W32((u32)(r_edi+0x390u), r_ecx);
    /* 006da4cc: mov dword ptr [edi + 0x38c], ecx */ W32((u32)(r_edi+0x38cu), r_ecx);
    /* 006da4d2: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006da4d5: mov dword ptr [edi + 0x394], ecx */ W32((u32)(r_edi+0x394u), r_ecx);
    /* 006da4db: mov dword ptr [edi + 0x398], ecx */ W32((u32)(r_edi+0x398u), r_ecx);
    /* 006da4e1: lea eax, [edi + 0x28] */ r_eax = (u32)(r_edi+0x28u);
    /* 006da4e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da4e5: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6da4eau); f_0086b688();
    /* 006da4ea: mov eax, edi */ r_eax = r_edi;
    /* 006da4ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006da4ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da4f0: ret 0xc */ FN_RET(0x006da468); r_esp += 16; return;
}

void f_006da4f4(void) /* sub_6DA4F4 */
{
    FN_ENTER(0x006da4f4);
    /* 006da4f4: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006da4f7: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006da4fa: ja 0x6da534 */ if ((!fC&&!fZ)) goto L_006da534;
L_006da4fc:; BB(0x006da4fc);
    /* 006da4fc: mov eax, dword ptr [eax*4 + 0x96c454] */ r_eax = R32((u32)(r_eax*4+0x96c454u));
    /* 006da503: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006da534:; BB(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da4f4); r_esp += 4; return;
}

void f_006da505(void)
{
    FN_ENTER(0x006da505);
    /* 006da505: call 0x6dae84 */ r_esp -= 4; W32(r_esp, 0x6da50au); f_006dae84();
    /* 006da50a: jmp 0x6da534 */ goto L_006da534;
L_006da534:; BB(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da505); r_esp += 4; return;
}

void f_006da50c(void)
{
    FN_ENTER(0x006da50c);
    /* 006da50c: call 0x6da538 */ r_esp -= 4; W32(r_esp, 0x6da511u); f_006da538();
    /* 006da511: jmp 0x6da534 */ goto L_006da534;
L_006da534:; BB(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da50c); r_esp += 4; return;
}

void f_006da513(void)
{
    FN_ENTER(0x006da513);
    /* 006da513: call 0x6da564 */ r_esp -= 4; W32(r_esp, 0x6da518u); f_006da564();
    /* 006da518: jmp 0x6da534 */ goto L_006da534;
L_006da534:; BB(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da513); r_esp += 4; return;
}

void f_006da51a(void)
{
    FN_ENTER(0x006da51a);
    /* 006da51a: call 0x6da638 */ r_esp -= 4; W32(r_esp, 0x6da51fu); f_006da638();
    /* 006da51f: jmp 0x6da534 */ goto L_006da534;
L_006da534:; BB(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da51a); r_esp += 4; return;
}

void f_006da521(void)
{
    FN_ENTER(0x006da521);
    /* 006da521: call 0x6da670 */ r_esp -= 4; W32(r_esp, 0x6da526u); f_006da670();
    /* 006da526: jmp 0x6da534 */ goto L_006da534;
L_006da534:; BB(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da521); r_esp += 4; return;
}

void f_006da528(void)
{
    FN_ENTER(0x006da528);
    /* 006da528: call 0x6da7ac */ r_esp -= 4; W32(r_esp, 0x6da52du); f_006da7ac();
    /* 006da52d: jmp 0x6da534 */ goto L_006da534;
L_006da534:; BB(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da528); r_esp += 4; return;
}

void f_006da52f(void)
{
    FN_ENTER(0x006da52f);
    /* 006da52f: call 0x6daac4 */ r_esp -= 4; W32(r_esp, 0x6da534u); f_006daac4();
    /* 006da534: ret  */ FN_RET(0x006da52f); r_esp += 4; return;
}

void f_006da534(void)
{
    FN_ENTER(0x006da534);
    /* 006da534: ret  */ FN_RET(0x006da534); r_esp += 4; return;
}

void f_006da538(void) /* sub_6DA538 */
{
    FN_ENTER(0x006da538);
    /* 006da538: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da539: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006da53b: mov eax, dword ptr [ebx + 0x394] */ r_eax = R32((u32)(r_ebx+0x394u));
    /* 006da541: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da543: je 0x6da54e */ if (fZ) goto L_006da54e;
L_006da545:; BB(0x006da545);
    /* 006da545: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da54b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6da54du); call_ind(t); }
    /* 006da54d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006da54e:; BB(0x006da54e);
    /* 006da54e: call 0x6c9008 */ r_esp -= 4; W32(r_esp, 0x6da553u); f_006c9008();
    /* 006da553: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006da557: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da55c: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006da560: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da561: ret  */ FN_RET(0x006da538); r_esp += 4; return;
}

void f_006da564(void) /* sub_6DA564 */
{
    FN_ENTER(0x006da564);
    /* 006da564: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da565: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006da566: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006da568: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 006da56e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da570: je 0x6da5a6 */ if (fZ) goto L_006da5a6;
L_006da572:; BB(0x006da572);
    /* 006da572: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006da576: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006da578: je 0x6da5a6 */ if (fZ) goto L_006da5a6;
L_006da57a:; BB(0x006da57a);
    /* 006da57a: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 006da580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da582: je 0x6da5ce */ if (fZ) goto L_006da5ce;
L_006da584:; BB(0x006da584);
    /* 006da584: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 006da587: mov dword ptr [ebx + 0x378], eax */ W32((u32)(r_ebx+0x378u), r_eax);
    /* 006da58d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da592u); f_007127b0();
    /* 006da592: mov dword ptr [ebx + 0x38c], 0 */ W32((u32)(r_ebx+0x38cu), 0x0u);
    /* 006da59c: mov dword ptr [ebx + 0x20], 2 */ W32((u32)(r_ebx+0x20u), 0x2u);
    /* 006da5a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da5a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da5a5: ret  */ FN_RET(0x006da564); r_esp += 4; return;
L_006da5a6:; BB(0x006da5a6);
    /* 006da5a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da5a8: je 0x6da5cb */ if (fZ) goto L_006da5cb;
L_006da5aa:; BB(0x006da5aa);
    /* 006da5aa: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006da5ae: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da5b0: je 0x6da5cb */ if (fZ) goto L_006da5cb;
L_006da5b2:; BB(0x006da5b2);
    /* 006da5b2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da5b7u); f_007127b0();
    /* 006da5b7: mov dword ptr [ebx + 0x38c], 0 */ W32((u32)(r_ebx+0x38cu), 0x0u);
    /* 006da5c1: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006da5c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da5c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da5ca: ret  */ FN_RET(0x006da564); r_esp += 4; return;
L_006da5cb:; BB(0x006da5cb);
    /* 006da5cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da5cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da5cd: ret  */ FN_RET(0x006da564); r_esp += 4; return;
L_006da5ce:; BB(0x006da5ce);
    /* 006da5ce: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006da5d0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6da5d5u); f_0073ec50();
    /* 006da5d5: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006da5d8: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006da5dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006da5dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da5de: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6da5e3u); f_00735884();
    /* 006da5e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da5e6: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 006da5ec: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006da5f3: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006da5f9: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006da600: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006da602: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6da607u); f_006dc8d8();
    /* 006da607: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006da60a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006da60c: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6da611u); f_006dc8d8();
    /* 006da611: mov ecx, dword ptr [ebx + 0x388] */ r_ecx = R32((u32)(r_ebx+0x388u));
    /* 006da617: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da61a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006da61e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006da621: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006da625: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6da62au); f_0070f5a4();
    /* 006da62a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 006da630: jmp 0x6da584 */ goto L_006da584;
}

void f_006da5c4(void)
{
    FN_ENTER(0x006da5c4);
    /* 006da5c4: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006da5c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006da5c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006da5c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da5ca: ret  */ FN_RET(0x006da5c4); r_esp += 4; return;
}

void f_006da638(void) /* sub_6DA638 */
{
    FN_ENTER(0x006da638);
    /* 006da638: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006da639: mov edi, ecx */ r_edi = r_ecx;
    /* 006da63b: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 006da641: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da643: je 0x6da666 */ if (fZ) goto L_006da666;
L_006da645:; BB(0x006da645);
    /* 006da645: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006da64c: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006da651: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006da654: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006da65b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da65d: je 0x6da666 */ if (fZ) goto L_006da666;
L_006da65f:; BB(0x006da65f);
    /* 006da65f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da661: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6da666u); f_00760acc();
L_006da666:; BB(0x006da666);
    /* 006da666: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006da66d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da66e: ret  */ FN_RET(0x006da638); r_esp += 4; return;
}

void f_006da670(void) /* sub_6DA670 */
{
    FN_ENTER(0x006da670);
    /* 006da670: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006da671: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da672: mov edi, ecx */ r_edi = r_ecx;
    /* 006da674: mov ecx, dword ptr [edi + 0x388] */ r_ecx = R32((u32)(r_edi+0x388u));
    /* 006da67a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da67c: je 0x6da761 */ if (fZ) goto L_006da761;
L_006da682:; BB(0x006da682);
    /* 006da682: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006da689: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006da68b: je 0x6da761 */ if (fZ) goto L_006da761;
L_006da691:; BB(0x006da691);
    /* 006da691: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6da696u); f_007365f4();
    /* 006da696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da698: je 0x6da6ae */ if (fZ) goto L_006da6ae;
L_006da69a:; BB(0x006da69a);
    /* 006da69a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da69d: je 0x6da78c */ if (fZ) goto L_006da78c;
L_006da6a3:; BB(0x006da6a3);
    /* 006da6a3: mov ecx, dword ptr [edi + 0x388] */ r_ecx = R32((u32)(r_edi+0x388u));
    /* 006da6a9: jmp 0x6da761 */ goto L_006da761;
L_006da6ae:; BB(0x006da6ae);
    /* 006da6ae: mov ecx, dword ptr [edi + 0x384] */ r_ecx = R32((u32)(r_edi+0x384u));
    /* 006da6b4: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6da6b9u); f_00737d90();
    /* 006da6b9: push dword ptr [edi + 0x378] */ { u32 v = R32((u32)(r_edi+0x378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da6bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006da6c1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006da6c3: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006da6c6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006da6c8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006da6ca: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006da6cc: lea eax, [edi + ebx + 0x2c] */ r_eax = (u32)(r_edi+r_ebx+0x2cu);
    /* 006da6d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da6d1: call 0x6c8acc */ r_esp -= 4; W32(r_esp, 0x6da6d6u); f_006c8acc();
    /* 006da6d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da6d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da6db: je 0x6da725 */ if (fZ) goto L_006da725;
L_006da6dd:; BB(0x006da6dd);
    /* 006da6dd: push dword ptr [edi + 0x378] */ { u32 v = R32((u32)(r_edi+0x378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da6e3: mov eax, dword ptr [ebx + edi + 0x28] */ r_eax = R32((u32)(r_ebx+r_edi+0x28u));
    /* 006da6e7: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da6ed: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006da6f0: call 0x68f344 */ r_esp -= 4; W32(r_esp, 0x6da6f5u); f_0068f344();
    /* 006da6f5: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6da6fau); f_006c8db4();
    /* 006da6fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006da6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da6fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da6fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da6ff: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006da704: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6da709u); f_00814298();
    /* 006da709: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da70c: mov ecx, dword ptr [edi + 0x388] */ r_ecx = R32((u32)(r_edi+0x388u));
    /* 006da712: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da717u); f_007127b0();
    /* 006da717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da719: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 006da71f: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006da722: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da723: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da724: ret  */ FN_RET(0x006da670); r_esp += 4; return;
L_006da725:; BB(0x006da725);
    /* 006da725: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da727: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006da729: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006da72b: mov ecx, edi */ r_ecx = r_edi;
    /* 006da72d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6da730u); call_ind(t); }
    /* 006da730: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006da732: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da735: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 006da73a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6da73fu); f_00814298();
    /* 006da73f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da742: mov ecx, dword ptr [edi + 0x388] */ r_ecx = R32((u32)(r_edi+0x388u));
    /* 006da748: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da74du); f_007127b0();
    /* 006da74d: mov dword ptr [edi + 0x388], 0 */ W32((u32)(r_edi+0x388u), 0x0u);
    /* 006da757: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 006da75e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da760: ret  */ FN_RET(0x006da670); r_esp += 4; return;
L_006da761:; BB(0x006da761);
    /* 006da761: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da763: je 0x6da789 */ if (fZ) goto L_006da789;
L_006da765:; BB(0x006da765);
    /* 006da765: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006da76c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da76e: je 0x6da789 */ if (fZ) goto L_006da789;
L_006da770:; BB(0x006da770);
    /* 006da770: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da775u); f_007127b0();
    /* 006da775: mov dword ptr [edi + 0x388], 0 */ W32((u32)(r_edi+0x388u), 0x0u);
    /* 006da77f: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006da786: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da787: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da788: ret  */ FN_RET(0x006da670); r_esp += 4; return;
L_006da789:; BB(0x006da789);
    /* 006da789: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da78a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da78b: ret  */ FN_RET(0x006da670); r_esp += 4; return;
L_006da78c:; BB(0x006da78c);
    /* 006da78c: mov ecx, dword ptr [edi + 0x388] */ r_ecx = R32((u32)(r_edi+0x388u));
    /* 006da792: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6da797u); f_007127b0();
    /* 006da797: mov dword ptr [edi + 0x388], 0 */ W32((u32)(r_edi+0x388u), 0x0u);
    /* 006da7a1: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006da7a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006da7a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006da7aa: ret  */ FN_RET(0x006da670); r_esp += 4; return;
}

void f_006da7ac(void) /* sub_6DA7AC */
{
    FN_ENTER(0x006da7ac);
    /* 006da7ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006da7ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006da7af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006da7b1: push 0x8ee3e0 */ { u32 v = 0x8ee3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006da7b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006da7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006da7bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006da7c4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006da7c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006da7ca: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006da7cd: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006da7d0: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006da7d3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006da7d6: mov ecx, dword ptr [ecx + 0x384] */ r_ecx = R32((u32)(r_ecx+0x384u));
    /* 006da7dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da7de: je 0x6da837 */ if (fZ) goto L_006da837;
L_006da7e0:; BB(0x006da7e0);
    /* 006da7e0: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6da7e5u); f_00737d90();
    /* 006da7e5: mov ebx, eax */ r_ebx = r_eax;
    /* 006da7e7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006da7ea: mov ecx, dword ptr [edx + 0x390] */ r_ecx = R32((u32)(r_edx+0x390u));
    /* 006da7f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da7f2: je 0x6da965 */ if (fZ) goto L_006da965;
L_006da7f8:; BB(0x006da7f8);
    /* 006da7f8: cmp ebx, dword ptr [edx + 0x37c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da7fe: jne 0x6da80a */ if (!fZ) goto L_006da80a;
L_006da800:; BB(0x006da800);
    /* 006da800: mov eax, edx */ r_eax = r_edx;
    /* 006da802: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006da808: jmp 0x6da837 */ goto L_006da837;
L_006da80a:; BB(0x006da80a);
    /* 006da80a: mov edi, edx */ r_edi = r_edx;
    /* 006da80c: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006da80f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006da811: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006da814: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006da816: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006da818: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006da81a: mov edx, dword ptr [esi + edi + 0x28] */ r_edx = R32((u32)(r_esi+r_edi+0x28u));
    /* 006da81e: push dword ptr [edx + 0xd8] */ { u32 v = R32((u32)(r_edx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006da824: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6da829u); f_0072606c();
    /* 006da829: mov edx, edi */ r_edx = r_edi;
    /* 006da82b: mov ecx, dword ptr [edx + 0x384] */ r_ecx = R32((u32)(r_edx+0x384u));
    /* 006da831: mov dword ptr [edx + 0x37c], ebx */ W32((u32)(r_edx+0x37cu), r_ebx);
L_006da837:; BB(0x006da837);
    /* 006da837: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006da83e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006da840: je 0x6da875 */ if (fZ) goto L_006da875;
L_006da842:; BB(0x006da842);
    /* 006da842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006da845: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 006da84c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006da84e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006da84f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006da850: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006da851: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006da856: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6da85bu); f_00814298();
    /* 006da85b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006da85e:; BB(0x006da85e);
    /* 006da85e: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006da861: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006da864: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006da867: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006da86a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006da871: mov esp, ebp */ r_esp = r_ebp;
    /* 006da873: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da874: ret  */ FN_RET(0x006da7ac); r_esp += 4; return;
L_006da875:; BB(0x006da875);
    /* 006da875: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da877: je 0x6da85e */ if (fZ) goto L_006da85e;
L_006da879:; BB(0x006da879);
    /* 006da879: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6da87eu); f_00737d90();
    /* 006da87e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006da880: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006da882: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006da885: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006da887: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006da889: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006da88b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006da88e: movzx ecx, byte ptr [edx + eax + 0x2c] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0x2cu));
    /* 006da893: lea ebx, [eax + edx + 0x2c] */ r_ebx = (u32)(r_eax+r_edx+0x2cu);
    /* 006da897: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da89a: jne 0x6da919 */ if (!fZ) goto L_006da919;
L_006da89c:; BB(0x006da89c);
    /* 006da89c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006da89e: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x6da8a3u); f_005d24b0();
    /* 006da8a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da8a5: je 0x6da8e3 */ if (fZ) goto L_006da8e3;
L_006da8a7:; BB(0x006da8a7);
    /* 006da8a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da8a8: call 0x6c91a8 */ r_esp -= 4; W32(r_esp, 0x6da8adu); f_006c91a8();
    /* 006da8ad: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006da8b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da8b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006da8b5: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x6da8bau); f_005d29b0();
    /* 006da8ba: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006da8bd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006da8bf: jl 0x6da8c4 */ if ((fS!=fO)) goto L_006da8c4;
L_006da8c1:; BB(0x006da8c1);
    /* 006da8c1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006da8c4:; BB(0x006da8c4);
    /* 006da8c4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006da8c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da8c9: je 0x6da8ec */ if (fZ) goto L_006da8ec;
L_006da8cb:; BB(0x006da8cb);
    /* 006da8cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006da8ce: jle 0x6da922 */ if ((fZ||fS!=fO)) goto L_006da922;
L_006da8d0:; BB(0x006da8d0);
    /* 006da8d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006da8d3: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 006da8d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da8db: je 0x6da972 */ if (fZ) goto L_006da972;
L_006da8e1:; BB(0x006da8e1);
    /* 006da8e1: jmp 0x6da922 */ goto L_006da922;
L_006da8e3:; BB(0x006da8e3);
    /* 006da8e3: call 0x6c927c */ r_esp -= 4; W32(r_esp, 0x6da8e8u); f_006c927c();
    /* 006da8e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da8ea: jne 0x6da922 */ if (!fZ) goto L_006da922;
L_006da8ec:; BB(0x006da8ec);
    /* 006da8ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006da8ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da8f1: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006da8f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006da8f5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6da8f8u); call_ind(t); }
    /* 006da8f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006da8fb: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006da8fe: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006da901: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006da904: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006da90b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006da90e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006da915: mov esp, ebp */ r_esp = r_ebp;
    /* 006da917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da918: ret  */ FN_RET(0x006da7ac); r_esp += 4; return;
L_006da919:; BB(0x006da919);
    /* 006da919: call 0x6c927c */ r_esp -= 4; W32(r_esp, 0x6da91eu); f_006c927c();
    /* 006da91e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da920: je 0x6da938 */ if (fZ) goto L_006da938;
L_006da922:; BB(0x006da922);
    /* 006da922: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006da925: mov edx, dword ptr [eax + 0x388] */ r_edx = R32((u32)(r_eax+0x388u));
    /* 006da92b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da92d: je 0x6daa35 */ if (fZ) goto L_006daa35;
L_006da933:; BB(0x006da933);
    /* 006da933: jmp 0x6da85e */ goto L_006da85e;
L_006da938:; BB(0x006da938);
    /* 006da938: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006da93b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006da93d: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006da93f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006da941: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6da944u); call_ind(t); }
    /* 006da944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006da947: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006da94a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006da94d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006da950: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006da957: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006da95a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006da961: mov esp, ebp */ r_esp = r_ebp;
    /* 006da963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006da964: ret  */ FN_RET(0x006da7ac); r_esp += 4; return;
L_006da965:; BB(0x006da965);
    /* 006da965: mov eax, edx */ r_eax = r_edx;
    /* 006da967: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006da96d: jmp 0x6da837 */ goto L_006da837;
L_006da972:; BB(0x006da972);
    /* 006da972: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006da979: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006da97e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6da983u); f_005caba4();
    /* 006da983: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006da986: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da989: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006da98c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006da98e: je 0x6daa2e */ if (fZ) goto L_006daa2e;
L_006da994:; BB(0x006da994);
    /* 006da994: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006da99b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006da9a2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006da9a4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6da9a9u); f_0073ec50();
    /* 006da9a9: mov ebx, eax */ r_ebx = r_eax;
    /* 006da9ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006da9ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006da9b1: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6da9b6u); f_006dc9ec();
    /* 006da9b6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006da9b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006da9bc: mov edi, 1 */ r_edi = 0x1u;
    /* 006da9c1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006da9c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006da9c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006da9c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006da9c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006da9c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006da9c9: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x6da9ceu); f_00728ac4();
    /* 006da9ce: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006da9d5:; BB(0x006da9d5);
    /* 006da9d5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006da9d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006da9db: mov dword ptr [edx + 0x38c], eax */ W32((u32)(r_edx+0x38cu), r_eax);
    /* 006da9e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006da9e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006da9ea: je 0x6daa0d */ if (fZ) goto L_006daa0d;
L_006da9ec:; BB(0x006da9ec);
    /* 006da9ec: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6da9f1u); f_0078b208();
    /* 006da9f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006da9f4: jle 0x6daa0d */ if ((fZ||fS!=fO)) goto L_006daa0d;
L_006da9f6:; BB(0x006da9f6);
    /* 006da9f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006da9f9: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 006da9ff: mov dword ptr [edx + 0x78], 0x3f400000 */ W32((u32)(r_edx+0x78u), 0x3f400000u);
    /* 006daa06: mov dword ptr [edx + 0x7c], 0x3f400000 */ W32((u32)(r_edx+0x7cu), 0x3f400000u);
L_006daa0d:; BB(0x006daa0d);
    /* 006daa0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006daa10: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006daa13: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006daa16: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006daa19: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006daa20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006daa23: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006daa2a: mov esp, ebp */ r_esp = r_ebp;
    /* 006daa2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006daa2d: ret  */ FN_RET(0x006da7ac); r_esp += 4; return;
L_006daa2e:; BB(0x006daa2e);
    /* 006daa2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006daa30: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006daa33: jmp 0x6da9d5 */ goto L_006da9d5;
L_006daa35:; BB(0x006daa35);
    /* 006daa35: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006daa37: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6daa3cu); f_0073ec50();
    /* 006daa3c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006daa3f: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006daa42: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006daa46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006daa47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006daa48: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6daa4du); f_00735884();
    /* 006daa4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006daa50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006daa53: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 006daa59: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006daa60: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006daa66: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006daa6d: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6daa72u); f_006dc8d8();
    /* 006daa72: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006daa75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006daa78: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6daa7du); f_006dc8d8();
    /* 006daa7d: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 006daa80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006daa83: mov ecx, dword ptr [eax + 0x388] */ r_ecx = R32((u32)(r_eax+0x388u));
    /* 006daa89: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006daa8c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006daa8f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006daa93: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6daa98u); f_0070f5a4();
    /* 006daa98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006daa9b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006daa9e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006daaa1: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006daaa4: mov dword ptr [eax + 0x378], 1 */ W32((u32)(r_eax+0x378u), 0x1u);
    /* 006daaae: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 006daab5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006daab8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006daabf: mov esp, ebp */ r_esp = r_ebp;
    /* 006daac1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006daac2: ret  */ FN_RET(0x006da7ac); r_esp += 4; return;
}

void f_006daac4(void) /* sub_6DAAC4 */
{
    FN_ENTER(0x006daac4);
    /* 006daac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006daac5: mov ebp, esp */ r_ebp = r_esp;
    /* 006daac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006daac9: push 0x8ee408 */ { u32 v = 0x8ee408u; r_esp -= 4; W32(r_esp, v); }
    /* 006daace: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006daad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006daad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006daadc: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006daae2: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006daae5: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006daae8: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006daaeb: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006daaee: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006daaf1: mov dword ptr [ecx + 0x378], 1 */ W32((u32)(r_ecx+0x378u), 0x1u);
    /* 006daafb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006daafe: mov ecx, dword ptr [edx + 0xdf4] */ r_ecx = R32((u32)(r_edx+0xdf4u));
    /* 006dab04: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 006dab0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dab0b: call 0x6a520c */ r_esp -= 4; W32(r_esp, 0x6dab10u); f_006a520c();
    /* 006dab10: mov esi, eax */ r_esi = r_eax;
    /* 006dab12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dab15: mov dword ptr [ecx + 0x374], 0 */ W32((u32)(r_ecx+0x374u), 0x0u);
    /* 006dab1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dab21: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006dab23: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006dab25: jle 0x6dabb1 */ if ((fZ||fS!=fO)) goto L_006dabb1;
L_006dab2b:; BB(0x006dab2b);
    /* 006dab2b: mov ecx, dword ptr [ebp + ebx*4 - 0xac] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xffffff54u));
    /* 006dab32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dab34: je 0x6daba6 */ if (fZ) goto L_006daba6;
L_006dab36:; BB(0x006dab36);
    /* 006dab36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dab38: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dab3a: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006dab3d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dab3f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dab41: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006dab43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dab46: lea edx, [edx + edi + 0x2c] */ r_edx = (u32)(r_edx+r_edi+0x2cu);
    /* 006dab4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dab4b: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6dab50u); f_005c425c();
    /* 006dab50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dab52: je 0x6dab9d */ if (fZ) goto L_006dab9d;
L_006dab54:; BB(0x006dab54);
    /* 006dab54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dab57: mov ecx, dword ptr [ebp + ebx*4 - 0xac] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xffffff54u));
    /* 006dab5e: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006dab64: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dab66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dab68: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006dab6b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dab6d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dab6f: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006dab71: mov dword ptr [edi + eax + 0x28], ecx */ W32((u32)(r_edi+r_eax+0x28u), r_ecx);
    /* 006dab75: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006dab7b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dab7d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dab7f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006dab82: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dab84: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dab86: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006dab88: mov dword ptr [ecx + eax + 0x40], ebx */ W32((u32)(r_ecx+r_eax+0x40u), r_ebx);
    /* 006dab8c: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006dab92: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dab95: mov dword ptr [eax + 0x374], edx */ W32((u32)(r_eax+0x374u), r_edx);
    /* 006dab9b: jmp 0x6daba6 */ goto L_006daba6;
L_006dab9d:; BB(0x006dab9d);
    /* 006dab9d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006daba0: mov edx, dword ptr [edx + 0x374] */ r_edx = R32((u32)(r_edx+0x374u));
L_006daba6:; BB(0x006daba6);
    /* 006daba6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006daba9: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dabab: jl 0x6dab2b */ if ((fS!=fO)) goto L_006dab2b;
L_006dabb1:; BB(0x006dabb1);
    /* 006dabb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dabb3: je 0x6dac1f */ if (fZ) goto L_006dac1f;
L_006dabb5:; BB(0x006dabb5);
    /* 006dabb5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dabb8: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006dabbe: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 006dabc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dabc7: je 0x6dadda */ if (fZ) goto L_006dadda;
L_006dabcd:; BB(0x006dabcd);
    /* 006dabcd: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6dabd2u); f_00737d70();
    /* 006dabd2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dabd5: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006dabdb: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6dabe0u); f_00737d1c();
    /* 006dabe0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dabe3: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006dabe9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006dabeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006dabed: jle 0x6dac4c */ if ((fZ||fS!=fO)) goto L_006dac4c;
L_006dabef:; BB(0x006dabef);
    /* 006dabef: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006dabf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dabf3: mov ecx, dword ptr [esi + 0x384] */ r_ecx = R32((u32)(r_esi+0x384u));
    /* 006dabf9: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006dabfc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dabfe: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006dac01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dac03: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dac05: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dac07: push dword ptr [edx + esi + 0x28] */ { u32 v = R32((u32)(r_edx+r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dac0b: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x6dac10u); f_00737620();
    /* 006dac10: mov eax, esi */ r_eax = r_esi;
    /* 006dac12: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dac15: cmp ebx, dword ptr [eax + 0x374] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x374u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dac1b: jl 0x6dabef */ if ((fS!=fO)) goto L_006dabef;
L_006dac1d:; BB(0x006dac1d);
    /* 006dac1d: jmp 0x6dac4c */ goto L_006dac4c;
L_006dac1f:; BB(0x006dac1f);
    /* 006dac1f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dac22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dac24: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 006dac26: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006dac28: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6dac2bu); call_ind(t); }
    /* 006dac2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dac2e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006dac31: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dac34: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dac37: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006dac3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dac41: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dac48: mov esp, ebp */ r_esp = r_ebp;
    /* 006dac4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dac4b: ret  */ FN_RET(0x006daac4); r_esp += 4; return;
L_006dac4c:; BB(0x006dac4c);
    /* 006dac4c: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006dac52: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x6dac57u); f_00737da4();
    /* 006dac57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dac5a: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006dac60: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6dac65u); f_00737cdc();
    /* 006dac65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dac68: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006dac6e: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006dac75: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006dac7b: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006dac82: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006dac85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dac87: je 0x6dac90 */ if (fZ) goto L_006dac90;
L_006dac89:; BB(0x006dac89);
    /* 006dac89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dac8b: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6dac90u); f_00760acc();
L_006dac90:; BB(0x006dac90);
    /* 006dac90: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dac93: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 006dac99: movsx ecx, word ptr [edx + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 006daca0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006daca3:; BB(0x006daca3);
    /* 006daca3: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 006daca9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dacab: je 0x6dacf2 */ if (fZ) goto L_006dacf2;
L_006dacad:; BB(0x006dacad);
    /* 006dacad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dacb0: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006dacb3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006dacb6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dacb8: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006dacbb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dacbd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dacbf: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006dacc1: mov edi, dword ptr [ebx + esi + 0x28] */ r_edi = R32((u32)(r_ebx+r_esi+0x28u));
    /* 006dacc5: push dword ptr [edi + 0xd8] */ { u32 v = R32((u32)(r_edi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006daccb: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6dacd0u); f_0072606c();
    /* 006dacd0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dacd3: mov edx, esi */ r_edx = r_esi;
    /* 006dacd5: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
L_006dacdb:; BB(0x006dacdb);
    /* 006dacdb: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006dacde: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dace1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dace4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dace7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dacee: mov esp, ebp */ r_esp = r_ebp;
    /* 006dacf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dacf1: ret  */ FN_RET(0x006daac4); r_esp += 4; return;
L_006dacf2:; BB(0x006dacf2);
    /* 006dacf2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006dacf9: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006dacfe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dad03u); f_005caba4();
    /* 006dad03: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006dad06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dad09: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006dad0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dad0e: je 0x6dadd0 */ if (fZ) goto L_006dadd0;
L_006dad14:; BB(0x006dad14);
    /* 006dad14: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006dad1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dad22: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006dad24: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6dad29u); f_0073ec50();
    /* 006dad29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dad2a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dad2d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dad30: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006dad33: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006dad37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dad38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dad39: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6dad3eu); f_00725d18();
    /* 006dad3e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006dad45:; BB(0x006dad45);
    /* 006dad45: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dad48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dad4b: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 006dad51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dad58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dad5a: je 0x6dad9a */ if (fZ) goto L_006dad9a;
L_006dad5c:; BB(0x006dad5c);
    /* 006dad5c: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6dad61u); f_0078b208();
    /* 006dad61: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dad64: jg 0x6dad74 */ if ((!fZ&&fS==fO)) goto L_006dad74;
L_006dad66:; BB(0x006dad66);
    /* 006dad66: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dad69: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 006dad6f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006dad72: jmp 0x6dad9a */ goto L_006dad9a;
L_006dad74:; BB(0x006dad74);
    /* 006dad74: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dad77: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 006dad7d: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006dad87: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006dad91: mov ecx, dword ptr [edx + 0x390] */ r_ecx = R32((u32)(r_edx+0x390u));
    /* 006dad97: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_006dad9a:; BB(0x006dad9a);
    /* 006dad9a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dad9d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006dada0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dada3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006dada6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dada8: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006dadab: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dadad: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dadaf: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006dadb1: mov edi, dword ptr [ebx + esi + 0x28] */ r_edi = R32((u32)(r_ebx+r_esi+0x28u));
    /* 006dadb5: push dword ptr [edi + 0xd8] */ { u32 v = R32((u32)(r_edi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dadbb: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6dadc0u); f_0072606c();
    /* 006dadc0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dadc3: mov edx, esi */ r_edx = r_esi;
    /* 006dadc5: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 006dadcb: jmp 0x6dacdb */ goto L_006dacdb;
L_006dadd0:; BB(0x006dadd0);
    /* 006dadd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006dadd2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006dadd5: jmp 0x6dad45 */ goto L_006dad45;
L_006dadda:; BB(0x006dadda);
    /* 006dadda: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006daddc: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6dade1u); f_006dbdb8();
    /* 006dade1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dade4: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006dade7: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006dadeb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dadec: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006dadee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dadef: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6dadf4u); f_0073ff34();
    /* 006dadf4: mov ecx, eax */ r_ecx = r_eax;
    /* 006dadf6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dadf9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dadfc: mov esi, dword ptr [edx + 0x374] */ r_esi = R32((u32)(r_edx+0x374u));
    /* 006dae02: mov dword ptr [edx + 0x384], ecx */ W32((u32)(r_edx+0x384u), r_ecx);
    /* 006dae08: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006dae0a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006dae0c: jle 0x6dae44 */ if ((fZ||fS!=fO)) goto L_006dae44;
L_006dae0e:; BB(0x006dae0e);
    /* 006dae0e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006dae11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dae12: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006dae15: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dae17: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006dae1a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dae1c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dae1e: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006dae20: push dword ptr [esi + edi + 0x28] */ { u32 v = R32((u32)(r_esi+r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dae24: call 0x737620 */ r_esp -= 4; W32(r_esp, 0x6dae29u); f_00737620();
    /* 006dae29: mov eax, edi */ r_eax = r_edi;
    /* 006dae2b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dae2e: cmp ebx, dword ptr [eax + 0x374] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x374u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dae34: jge 0x6dae3e */ if ((fS==fO)) goto L_006dae3e;
L_006dae36:; BB(0x006dae36);
    /* 006dae36: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 006dae3c: jmp 0x6dae0e */ goto L_006dae0e;
L_006dae3e:; BB(0x006dae3e);
    /* 006dae3e: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
L_006dae44:; BB(0x006dae44);
    /* 006dae44: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6dae49u); f_00737cdc();
    /* 006dae49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dae4c: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 006dae52: movsx ecx, word ptr [edx + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 006dae59: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006dae5c: jmp 0x6daca3 */ goto L_006daca3;
}

void f_006dae64(void) /* sub_6DAE64 */
{
    FN_ENTER(0x006dae64);
    /* 006dae64: mov dword ptr [0xa9630c], 0x3f800000 */ W32((u32)(0xa9630cu), 0x3f800000u);
    /* 006dae6e: mov dword ptr [0xa96310], 0x41000000 */ W32((u32)(0xa96310u), 0x41000000u);
    /* 006dae78: mov dword ptr [0xa96314], 0x3fc00000 */ W32((u32)(0xa96314u), 0x3fc00000u);
    /* 006dae82: ret  */ FN_RET(0x006dae64); r_esp += 4; return;
}

void f_006dae84(void) /* sub_6DAE84 */
{
    FN_ENTER(0x006dae84);
    /* 006dae84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dae85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dae87: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 006dae8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dae8f: je 0x6dae9a */ if (fZ) goto L_006dae9a;
L_006dae91:; BB(0x006dae91);
    /* 006dae91: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dae97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6dae99u); call_ind(t); }
    /* 006dae99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006dae9a:; BB(0x006dae9a);
    /* 006dae9a: call 0x6c9008 */ r_esp -= 4; W32(r_esp, 0x6dae9fu); f_006c9008();
    /* 006dae9f: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006daea3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006daea8: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006daeac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006daead: ret  */ FN_RET(0x006dae84); r_esp += 4; return;
}

void f_006daeb0(void) /* sub_6DAEB0 */
{
    FN_ENTER(0x006daeb0);
    /* 006daeb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006daeb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006daeb3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006daeb5: call 0x6daed4 */ r_esp -= 4; W32(r_esp, 0x6daebau); f_006daed4();
    /* 006daeba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006daebe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006daec0: jne 0x6daec6 */ if (!fZ) goto L_006daec6;
L_006daec2:; BB(0x006daec2);
    /* 006daec2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006daec3: ret 4 */ FN_RET(0x006daeb0); r_esp += 8; return;
L_006daec6:; BB(0x006daec6);
    /* 006daec6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006daec7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6daeccu); f_00857e98();
    /* 006daecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006daecd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006daece: ret 4 */ FN_RET(0x006daeb0); r_esp += 8; return;
}

void f_006daed4(void) /* sub_6DAED4 */
{
    FN_ENTER(0x006daed4);
    /* 006daed4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006daed5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006daed7: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 006daedd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006daedf: mov dword ptr [ebp], 0xb3cb28 */ W32((u32)(r_ebp), 0xb3cb28u);
    /* 006daee6: je 0x6daef7 */ if (fZ) goto L_006daef7;
L_006daee8:; BB(0x006daee8);
    /* 006daee8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6daeedu); f_007127b0();
    /* 006daeed: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
L_006daef7:; BB(0x006daef7);
    /* 006daef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006daef8: ret  */ FN_RET(0x006daed4); r_esp += 4; return;
}

void f_006daefc(void) /* sub_6DAEFC */
{
    FN_ENTER(0x006daefc);
    /* 006daefc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006daefd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006daeff: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 006daf02: mov dword ptr [ebx], 0xb3cb28 */ W32((u32)(r_ebx), 0xb3cb28u);
    /* 006daf08: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006daf0d: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
    /* 006daf17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006daf19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006daf1a: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6daf1fu); f_0086b688();
    /* 006daf1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006daf21: mov dword ptr [ebx + 0x404], edx */ W32((u32)(r_ebx+0x404u), r_edx);
    /* 006daf27: mov dword ptr [ebx + 0x408], edx */ W32((u32)(r_ebx+0x408u), r_edx);
    /* 006daf2d: mov eax, ebx */ r_eax = r_ebx;
    /* 006daf2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006daf32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006daf33: ret  */ FN_RET(0x006daefc); r_esp += 4; return;
}

void f_006daf34(void) /* sub_6DAF34 */
{
    FN_ENTER(0x006daf34);
    /* 006daf34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006daf35: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006daf37: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 006daf3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006daf3f: je 0x6daf50 */ if (fZ) goto L_006daf50;
L_006daf41:; BB(0x006daf41);
    /* 006daf41: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6daf46u); f_007127b0();
    /* 006daf46: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
L_006daf50:; BB(0x006daf50);
    /* 006daf50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006daf51: ret  */ FN_RET(0x006daf34); r_esp += 4; return;
}

void f_006daf54(void) /* sub_6DAF54 */
{
    FN_ENTER(0x006daf54);
    /* 006daf54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006daf55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006daf56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006daf57: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006daf5d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006daf5f: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 006daf65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006daf67: je 0x6db126 */ if (fZ) goto L_006db126;
L_006daf6d:; BB(0x006daf6d);
    /* 006daf6d: push dword ptr [esp + 0x98] */ { u32 v = R32((u32)(r_esp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006daf74: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6daf79u); f_006dbdb8();
    /* 006daf79: mov edi, eax */ r_edi = r_eax;
    /* 006daf7b: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006daf80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006daf82: lea esi, [ebp + 4] */ r_esi = (u32)(r_ebp+0x4u);
    /* 006daf85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006daf86: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6daf8bu); f_0086b688();
    /* 006daf8b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006daf8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006daf8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006daf90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006daf92: call 0x6dbc68 */ r_esp -= 4; W32(r_esp, 0x6daf97u); f_006dbc68();
    /* 006daf97: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006daf9d: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006dafa0: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006dafa3: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_006dafa7:; BB(0x006dafa7);
    /* 006dafa7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dafa9: jne 0x6dafe4 */ if (!fZ) goto L_006dafe4;
L_006dafab:; BB(0x006dafab);
    /* 006dafab: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006dafae: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006dafb2: mov edi, dword ptr [ebp + 0x408] */ r_edi = R32((u32)(r_ebp+0x408u));
    /* 006dafb8: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 006dafbb: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006dafc1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dafc3: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 006dafca: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 006dafcd: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 006dafd3: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dafd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dafd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dafda: call 0x73c8a0 */ r_esp -= 4; W32(r_esp, 0x6dafdfu); f_0073c8a0();
    /* 006dafdf: jmp 0x6db126 */ goto L_006db126;
L_006dafe4:; BB(0x006dafe4);
    /* 006dafe4: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 006dafe7: mov dword ptr [ebp + 0x404], edx */ W32((u32)(r_ebp+0x404u), r_edx);
    /* 006dafed: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006daff0: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006daff3: jne 0x6db0fc */ if (!fZ) goto L_006db0fc;
L_006daff9:; BB(0x006daff9);
    /* 006daff9: mov eax, 0x96c4a0 */ r_eax = 0x96c4a0u;
    /* 006daffe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006db000: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006db003: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006db006: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006db009: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006db00d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006db010: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006db014: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 006db018: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006db01c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006db020: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006db023: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006db027: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006db02a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006db02e: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006db031: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006db035: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006db038: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006db03c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006db03f: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006db043: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006db046: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006db04a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006db04d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006db051: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006db054: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006db058: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006db05b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006db05f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006db062: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006db065: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006db069: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006db06d: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db073: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006db075: jmp 0x6db07e */ goto L_006db07e;
L_006db077:; BB(0x006db077);
    /* 006db077: mov byte ptr [esp + ebx + 0x48], dl */ W8((u32)(r_esp+r_ebx+0x48u), (u8)r_edx);
    /* 006db07b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006db07e:; BB(0x006db07e);
    /* 006db07e: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db081: jae 0x6db132 */ if (!fC) goto L_006db132;
L_006db087:; BB(0x006db087);
    /* 006db087: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db08a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db08c: je 0x6dafa7 */ if (fZ) goto L_006dafa7;
L_006db092:; BB(0x006db092);
    /* 006db092: mov esi, eax */ r_esi = r_eax;
    /* 006db094: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006db097: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
    /* 006db09d: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 006db0a0: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 006db0a3: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db0a6: jne 0x6db077 */ if (!fZ) goto L_006db077;
L_006db0a8:; BB(0x006db0a8);
    /* 006db0a8: mov byte ptr [esp + ebx + 0x48], 0 */ W8((u32)(r_esp+r_ebx+0x48u), 0x0u);
    /* 006db0ad: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006db0af:; BB(0x006db0af);
    /* 006db0af: mov edi, dword ptr [esp + ebx*8 + 8] */ r_edi = R32((u32)(r_esp+r_ebx*8+0x8u));
    /* 006db0b3: lea esi, [esp + 0x48] */ r_esi = (u32)(r_esp+0x48u);
L_006db0b7:; BB(0x006db0b7);
    /* 006db0b7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006db0b9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db0bb: jne 0x6db0d7 */ if (!fZ) goto L_006db0d7;
L_006db0bd:; BB(0x006db0bd);
    /* 006db0bd: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db0bf: je 0x6db0d3 */ if (fZ) goto L_006db0d3;
L_006db0c1:; BB(0x006db0c1);
    /* 006db0c1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 006db0c4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db0c7: jne 0x6db0d7 */ if (!fZ) goto L_006db0d7;
L_006db0c9:; BB(0x006db0c9);
    /* 006db0c9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006db0cc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006db0cf: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db0d1: jne 0x6db0b7 */ if (!fZ) goto L_006db0b7;
L_006db0d3:; BB(0x006db0d3);
    /* 006db0d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006db0d5: jmp 0x6db0dc */ goto L_006db0dc;
L_006db0d7:; BB(0x006db0d7);
    /* 006db0d7: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006db0d9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006db0dc:; BB(0x006db0dc);
    /* 006db0dc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006db0df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db0e1: jne 0x6db0e9 */ if (!fZ) goto L_006db0e9;
L_006db0e3:; BB(0x006db0e3);
    /* 006db0e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db0e5: call dword ptr [esp + ebx*8 + 4] */ { u32 t = R32((u32)(r_esp+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, 0x6db0e9u); call_ind(t); }
L_006db0e9:; BB(0x006db0e9);
    /* 006db0e9: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db0ec: jb 0x6db0af */ if (fC) goto L_006db0af;
L_006db0ee:; BB(0x006db0ee);
    /* 006db0ee: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db0f4: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db0f7: jmp 0x6dafa7 */ goto L_006dafa7;
L_006db0fc:; BB(0x006db0fc);
    /* 006db0fc: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db0ff: je 0x6db121 */ if (fZ) goto L_006db121;
L_006db101:; BB(0x006db101);
    /* 006db101: mov ebx, dword ptr [ebp + 0x408] */ r_ebx = R32((u32)(r_ebp+0x408u));
    /* 006db107: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006db10a: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db110: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 006db113: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db119: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db11c: jmp 0x6dafa7 */ goto L_006dafa7;
L_006db121:; BB(0x006db121);
    /* 006db121: jmp 0x6db121 */ goto L_006db121;
L_006db126:; BB(0x006db126);
    /* 006db126: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006db12c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006db12d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db12e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006db12f: ret 8 */ FN_RET(0x006daf54); r_esp += 12; return;
L_006db132:; BB(0x006db132);
    /* 006db132: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db135: jmp 0x6dafa7 */ goto L_006dafa7;
}

