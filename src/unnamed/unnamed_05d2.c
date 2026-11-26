#include "protos.h"

void f_005d20b8(void) /* sub_5D20B8 */
{
    FN_ENTER(0x005d20b8);
    /* 005d20b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d20b9: mov edi, ecx */ r_edi = r_ecx;
    /* 005d20bb: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005d20c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d20c3: je 0x5d2106 */ if (fZ) goto L_005d2106;
L_005d20c5:; BB(0x005d20c5);
    /* 005d20c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d20c7: mov ecx, edi */ r_ecx = r_edi;
    /* 005d20c9: call 0x5c4f94 */ r_esp -= 4; W32(r_esp, 0x5d20ceu); f_005c4f94();
    /* 005d20ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d20d0: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005d20d6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005d20d8: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d20db: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 005d20e1: mov ecx, edi */ r_ecx = r_edi;
    /* 005d20e3: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5d20e6u); call_ind(t); }
    /* 005d20e6: mov ecx, edi */ r_ecx = r_edi;
    /* 005d20e8: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d20edu); f_005d16b0();
    /* 005d20ed: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005d20ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005d20f1: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x5d20f7u); call_ind(t); }
    /* 005d20f7: mov ecx, dword ptr [edi + 0x18c] */ r_ecx = R32((u32)(r_edi+0x18cu));
    /* 005d20fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d20ff: je 0x5d2106 */ if (fZ) goto L_005d2106;
L_005d2101:; BB(0x005d2101);
    /* 005d2101: call 0x817284 */ r_esp -= 4; W32(r_esp, 0x5d2106u); f_00817284();
L_005d2106:; BB(0x005d2106);
    /* 005d2106: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2107: ret  */ FN_RET(0x005d20b8); r_esp += 4; return;
}

void f_005d2108(void) /* sub_5D2108 */
{
    FN_ENTER(0x005d2108);
    /* 005d2108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2109: mov esi, ecx */ r_esi = r_ecx;
    /* 005d210b: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005d2111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2113: je 0x5d21bc */ if (fZ) goto L_005d21bc;
L_005d2119:; BB(0x005d2119);
    /* 005d2119: push dword ptr [eax + 0x2b4] */ { u32 v = R32((u32)(r_eax+0x2b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d211f: push dword ptr [eax + 0x320] */ { u32 v = R32((u32)(r_eax+0x320u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d2125: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005d2127: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2129: push dword ptr [eax + 0x31c] */ { u32 v = R32((u32)(r_eax+0x31cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d212f: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5d2132u); call_ind(t); }
    /* 005d2132: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d2136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2138: je 0x5d21b5 */ if (fZ) goto L_005d21b5;
L_005d213a:; BB(0x005d213a);
    /* 005d213a: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005d2140: mov edx, dword ptr [ecx + 0x324] */ r_edx = R32((u32)(r_ecx+0x324u));
    /* 005d2146: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2148: je 0x5d215d */ if (fZ) goto L_005d215d;
L_005d214a:; BB(0x005d214a);
    /* 005d214a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d214c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d214e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d2151: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005d2154: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005d2157: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
L_005d215d:; BB(0x005d215d);
    /* 005d215d: movzx eax, word ptr [esi + 0x174] */ r_eax = (u32)R16((u32)(r_esi+0x174u));
    /* 005d2164: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d2166: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d2169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d216a: call 0x770ba4 */ r_esp -= 4; W32(r_esp, 0x5d216fu); f_00770ba4();
    /* 005d216f: movzx eax, word ptr [esi + 0x176] */ r_eax = (u32)R16((u32)(r_esi+0x176u));
    /* 005d2176: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005d217c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d217e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d2181: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2182: call 0x770c18 */ r_esp -= 4; W32(r_esp, 0x5d2187u); f_00770c18();
    /* 005d2187: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005d2189: mov ecx, esi */ r_ecx = r_esi;
    /* 005d218b: call dword ptr [eax + 0xbc] */ { u32 t = R32((u32)(r_eax+0xbcu)); r_esp -= 4; W32(r_esp, 0x5d2191u); call_ind(t); }
    /* 005d2191: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005d2197: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d2199: call dword ptr [eax + 0x12c] */ { u32 t = R32((u32)(r_eax+0x12cu)); r_esp -= 4; W32(r_esp, 0x5d219fu); call_ind(t); }
    /* 005d219f: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005d21a5: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x5d21aau); f_00775270();
    /* 005d21aa: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005d21b0: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x5d21b5u); f_007776f8();
L_005d21b5:; BB(0x005d21b5);
    /* 005d21b5: mov ecx, esi */ r_ecx = r_esi;
    /* 005d21b7: call 0x5d1c70 */ r_esp -= 4; W32(r_esp, 0x5d21bcu); f_005d1c70();
L_005d21bc:; BB(0x005d21bc);
    /* 005d21bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d21bd: ret 4 */ FN_RET(0x005d2108); r_esp += 8; return;
}

void f_005d21c0(void) /* sub_5D21C0 */
{
    FN_ENTER(0x005d21c0);
    /* 005d21c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d21c1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d21c3: movsx eax, byte ptr [ebp + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xf1u));
    /* 005d21ca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d21cd: je 0x5d21d8 */ if (fZ) goto L_005d21d8;
L_005d21cf:; BB(0x005d21cf);
    /* 005d21cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d21d1: call 0x5c4364 */ r_esp -= 4; W32(r_esp, 0x5d21d6u); f_005c4364();
    /* 005d21d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d21d7: ret  */ FN_RET(0x005d21c0); r_esp += 4; return;
L_005d21d8:; BB(0x005d21d8);
    /* 005d21d8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005d21db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d21dd: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5d21e0u); call_ind(t); }
    /* 005d21e0: jmp 0x5d21cf */ goto L_005d21cf;
}

void f_005d21e4(void) /* sub_5D21E4 */
{
    FN_ENTER(0x005d21e4);
    /* 005d21e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d21e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d21e6: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d21e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d21eb: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 005d21ef: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005d21f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d21f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d21f5: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5d21fau); f_005c425c();
    /* 005d21fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d21fc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005d2200: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005d2204: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005d2208: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d220c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005d2210: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005d2214: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005d2218: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005d221c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005d2220: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d2222: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005d2226: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005d222a: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 005d222e: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005d2232: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005d2236: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 005d223a: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 005d223e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d223f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2240: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d2244: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d2248: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d224e: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 005d2252: call 0x5d330c */ r_esp -= 4; W32(r_esp, 0x5d2257u); f_005d330c();
    /* 005d2257: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2259: je 0x5d22c2 */ if (fZ) goto L_005d22c2;
L_005d225b:; BB(0x005d225b);
    /* 005d225b: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 005d2260: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 005d2263: movzx ebx, word ptr [edi + 2] */ r_ebx = (u32)R16((u32)(r_edi+0x2u));
    /* 005d2267: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d2269: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 005d226c: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 005d2270: movzx ecx, word ptr [esp + 0x16] */ r_ecx = (u32)R16((u32)(r_esp+0x16u));
    /* 005d2275: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005d2277: mov word ptr [edi + 2], bx */ W16((u32)(r_edi+0x2u), (u16)r_ebx);
    /* 005d227b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005d2280: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d2282: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 005d2286: movzx eax, word ptr [esp + 0x1a] */ r_eax = (u32)R16((u32)(r_esp+0x1au));
    /* 005d228b: movzx edx, word ptr [edi + 6] */ r_edx = (u32)R16((u32)(r_edi+0x6u));
    /* 005d228f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d2291: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 005d2295: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 005d2299: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005d229e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d22a0: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 005d22a4: movzx eax, word ptr [esp + 0x1e] */ r_eax = (u32)R16((u32)(r_esp+0x1eu));
    /* 005d22a9: movzx edx, word ptr [edi + 0xa] */ r_edx = (u32)R16((u32)(r_edi+0xau));
    /* 005d22ad: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d22af: mov word ptr [edi + 0xa], dx */ W16((u32)(r_edi+0xau), (u16)r_edx);
    /* 005d22b3: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 005d22b8: movzx edx, word ptr [edi + 0xc] */ r_edx = (u32)R16((u32)(r_edi+0xcu));
    /* 005d22bc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d22be: mov word ptr [edi + 0xc], dx */ W16((u32)(r_edi+0xcu), (u16)r_edx);
L_005d22c2:; BB(0x005d22c2);
    /* 005d22c2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d22c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d22c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d22c7: ret 0xc */ FN_RET(0x005d21e4); r_esp += 16; return;
}

void f_005d22cc(void) /* sub_5D22CC */
{
    FN_ENTER(0x005d22cc);
    /* 005d22cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d22cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d22ce: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005d22d2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005d22d6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005d22da: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d22dc: je 0x5d2317 */ if (fZ) goto L_005d2317;
L_005d22de:; BB(0x005d22de);
    /* 005d22de: movzx esi, word ptr [ecx + 0x124] */ r_esi = (u32)R16((u32)(r_ecx+0x124u));
    /* 005d22e5: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005d22e9: movzx edi, word ptr [eax] */ r_edi = (u32)R16((u32)(r_eax));
    /* 005d22ec: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d22ee: mov word ptr [eax], di */ W16((u32)(r_eax), (u16)r_edi);
    /* 005d22f1: movzx esi, word ptr [ecx + 0x126] */ r_esi = (u32)R16((u32)(r_ecx+0x126u));
    /* 005d22f8: movzx edi, word ptr [eax + 2] */ r_edi = (u32)R16((u32)(r_eax+0x2u));
    /* 005d22fc: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d22fe: mov word ptr [eax + 2], di */ W16((u32)(r_eax+0x2u), (u16)r_edi);
    /* 005d2302: movzx esi, word ptr [ecx + 0x128] */ r_esi = (u32)R16((u32)(r_ecx+0x128u));
    /* 005d2309: movzx edi, word ptr [eax + 4] */ r_edi = (u32)R16((u32)(r_eax+0x4u));
    /* 005d230d: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d230f: mov word ptr [eax + 4], di */ W16((u32)(r_eax+0x4u), (u16)r_edi);
    /* 005d2313: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_005d2317:; BB(0x005d2317);
    /* 005d2317: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2319: je 0x5d238b */ if (fZ) goto L_005d238b;
L_005d231b:; BB(0x005d231b);
    /* 005d231b: movzx esi, word ptr [ecx + 0x154] */ r_esi = (u32)R16((u32)(r_ecx+0x154u));
    /* 005d2322: movzx edi, word ptr [edx] */ r_edi = (u32)R16((u32)(r_edx));
    /* 005d2325: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d2327: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 005d232a: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 005d232d: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 005d2331: sub esi, dword ptr [ecx + 0x170] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x170u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d2337: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 005d233a: movzx esi, word ptr [ecx + 0x156] */ r_esi = (u32)R16((u32)(r_ecx+0x156u));
    /* 005d2341: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d2343: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 005d2347: movzx esi, word ptr [ecx + 0x158] */ r_esi = (u32)R16((u32)(r_ecx+0x158u));
    /* 005d234e: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 005d2352: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d2354: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 005d2358: movzx esi, word ptr [ecx + 0x15a] */ r_esi = (u32)R16((u32)(r_ecx+0x15au));
    /* 005d235f: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 005d2363: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d2365: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 005d2369: movzx esi, word ptr [ecx + 0x15c] */ r_esi = (u32)R16((u32)(r_ecx+0x15cu));
    /* 005d2370: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 005d2374: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d2376: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 005d237a: movzx esi, word ptr [ecx + 0x15e] */ r_esi = (u32)R16((u32)(r_ecx+0x15eu));
    /* 005d2381: movzx edi, word ptr [edx + 0xa] */ r_edi = (u32)R16((u32)(r_edx+0xau));
    /* 005d2385: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d2387: mov word ptr [edx + 0xa], di */ W16((u32)(r_edx+0xau), (u16)r_edi);
L_005d238b:; BB(0x005d238b);
    /* 005d238b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d238d: je 0x5d2404 */ if (fZ) goto L_005d2404;
L_005d238f:; BB(0x005d238f);
    /* 005d238f: movzx edx, word ptr [ecx + 0x100] */ r_edx = (u32)R16((u32)(r_ecx+0x100u));
    /* 005d2396: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 005d2399: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d239b: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d239f: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 005d23a2: movzx edi, word ptr [ecx + 0x102] */ r_edi = (u32)R16((u32)(r_ecx+0x102u));
    /* 005d23a9: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 005d23ad: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d23af: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005d23b3: movzx edx, word ptr [ecx + 0x104] */ r_edx = (u32)R16((u32)(r_ecx+0x104u));
    /* 005d23ba: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d23bc: mov word ptr [eax + 4], si */ W16((u32)(r_eax+0x4u), (u16)r_esi);
    /* 005d23c0: movzx edx, word ptr [ecx + 0x106] */ r_edx = (u32)R16((u32)(r_ecx+0x106u));
    /* 005d23c7: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 005d23cb: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d23cd: mov word ptr [eax + 6], si */ W16((u32)(r_eax+0x6u), (u16)r_esi);
    /* 005d23d1: movzx edx, word ptr [ecx + 0x108] */ r_edx = (u32)R16((u32)(r_ecx+0x108u));
    /* 005d23d8: movzx esi, word ptr [eax + 8] */ r_esi = (u32)R16((u32)(r_eax+0x8u));
    /* 005d23dc: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d23de: mov word ptr [eax + 8], si */ W16((u32)(r_eax+0x8u), (u16)r_esi);
    /* 005d23e2: movzx edx, word ptr [ecx + 0x10a] */ r_edx = (u32)R16((u32)(r_ecx+0x10au));
    /* 005d23e9: movzx esi, word ptr [eax + 0xa] */ r_esi = (u32)R16((u32)(r_eax+0xau));
    /* 005d23ed: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d23ef: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 005d23f3: mov word ptr [eax + 0xa], si */ W16((u32)(r_eax+0xau), (u16)r_esi);
    /* 005d23f7: movzx ecx, word ptr [ecx + 0x10c] */ r_ecx = (u32)R16((u32)(r_ecx+0x10cu));
    /* 005d23fe: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2400: mov word ptr [eax + 0xc], dx */ W16((u32)(r_eax+0xcu), (u16)r_edx);
L_005d2404:; BB(0x005d2404);
    /* 005d2404: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2405: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2406: ret 0xc */ FN_RET(0x005d22cc); r_esp += 16; return;
}

void f_005d240c(void) /* sub_5D240C */
{
    FN_ENTER(0x005d240c);
    /* 005d240c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005d2411: mov byte ptr [ecx + 0x189], al */ W8((u32)(r_ecx+0x189u), (u8)r_eax);
    /* 005d2417: ret 4 */ FN_RET(0x005d240c); r_esp += 8; return;
}

void f_005d241c(void) /* sub_5D241C */
{
    FN_ENTER(0x005d241c);
    /* 005d241c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d241d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d241f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005d2422: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d2424: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 005d2429: mov byte ptr [ebp + 0x188], al */ W8((u32)(r_ebp+0x188u), (u8)r_eax);
    /* 005d242f: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x5d2432u); call_ind(t); }
    /* 005d2432: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d2435: movzx edx, word ptr [eax*2 + 0x9cb9ac] */ r_edx = (u32)R16((u32)(r_eax*2+0x9cb9acu));
    /* 005d243d: mov byte ptr [ebp + 0x189], dl */ W8((u32)(r_ebp+0x189u), (u8)r_edx);
    /* 005d2443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2444: ret 4 */ FN_RET(0x005d241c); r_esp += 8; return;
}

void f_005d2448(void) /* sub_5D2448 */
{
    FN_ENTER(0x005d2448);
    /* 005d2448: movsx eax, byte ptr [ecx + 0x188] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x188u));
    /* 005d244f: ret  */ FN_RET(0x005d2448); r_esp += 4; return;
}

void f_005d2450(void) /* sub_5D2450 */
{
    FN_ENTER(0x005d2450);
    /* 005d2450: movsx eax, byte ptr [ecx + 0x189] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x189u));
    /* 005d2457: ret  */ FN_RET(0x005d2450); r_esp += 4; return;
}

void f_005d2458(void) /* sub_5D2458 */
{
    FN_ENTER(0x005d2458);
    /* 005d2458: add ecx, 0x174 */ {  u32 a = r_ecx; u32 b = 0x174u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d245e: mov eax, ecx */ r_eax = r_ecx;
    /* 005d2460: ret  */ FN_RET(0x005d2458); r_esp += 4; return;
}

void f_005d2464(void) /* sub_5D2464 */
{
    FN_ENTER(0x005d2464);
    /* 005d2464: mov dword ptr [0xa8d9c0], 0x3f800000 */ W32((u32)(0xa8d9c0u), 0x3f800000u);
    /* 005d246e: mov dword ptr [0xa8d9c4], 0x41000000 */ W32((u32)(0xa8d9c4u), 0x41000000u);
    /* 005d2478: mov dword ptr [0xa8d9c8], 0x3fc00000 */ W32((u32)(0xa8d9c8u), 0x3fc00000u);
    /* 005d2482: ret  */ FN_RET(0x005d2464); r_esp += 4; return;
}

void f_005d2484(void) /* sub_5D2484 */
{
    FN_ENTER(0x005d2484);
    /* 005d2484: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2485: mov edi, ecx */ r_edi = r_ecx;
    /* 005d2487: mov ecx, edi */ r_ecx = r_edi;
    /* 005d2489: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x5d248eu); f_005d24b0();
    /* 005d248e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2490: je 0x5d249e */ if (fZ) goto L_005d249e;
L_005d2492:; BB(0x005d2492);
    /* 005d2492: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 005d2497: mov byte ptr [edi + 5], al */ W8((u32)(r_edi+0x5u), (u8)r_eax);
    /* 005d249a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d249b: ret 4 */ FN_RET(0x005d2484); r_esp += 8; return;
L_005d249e:; BB(0x005d249e);
    /* 005d249e: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 005d24a1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d24a4: jne 0x5d24aa */ if (!fZ) goto L_005d24aa;
L_005d24a6:; BB(0x005d24a6);
    /* 005d24a6: mov byte ptr [edi + 5], 0 */ W8((u32)(r_edi+0x5u), 0x0u);
L_005d24aa:; BB(0x005d24aa);
    /* 005d24aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d24ab: ret 4 */ FN_RET(0x005d2484); r_esp += 8; return;
}

void f_005d24b0(void) /* sub_5D24B0 */
{
    FN_ENTER(0x005d24b0);
    /* 005d24b0: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 005d24b3: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d24b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d24b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d24b9: call 0x5c502c */ r_esp -= 4; W32(r_esp, 0x5d24beu); f_005c502c();
    /* 005d24be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d24c1: ret  */ FN_RET(0x005d24b0); r_esp += 4; return;
}

void f_005d24c4(void) /* sub_5D24C4 */
{
    FN_ENTER(0x005d24c4);
    /* 005d24c4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005d24c9: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 005d24cd: ret 4 */ FN_RET(0x005d24c4); r_esp += 8; return;
}

void f_005d24d0(void) /* sub_5D24D0 */
{
    FN_ENTER(0x005d24d0);
    /* 005d24d0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005d24d5: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 005d24d9: ret 4 */ FN_RET(0x005d24d0); r_esp += 8; return;
}

void f_005d24dc(void) /* sub_5D24DC */
{
    FN_ENTER(0x005d24dc);
    /* 005d24dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d24dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d24de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d24df: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d24e2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d24e4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005d24e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d24e8: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5d24edu); f_005d281c();
    /* 005d24ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d24ef: jne 0x5d2587 */ if (!fZ) goto L_005d2587;
L_005d24f5:; BB(0x005d24f5);
    /* 005d24f5: movzx edx, byte ptr [ebp] */ r_edx = (u32)R8((u32)(r_ebp));
    /* 005d24f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d24fb: je 0x5d26e4 */ if (fZ) goto L_005d26e4;
L_005d2501:; BB(0x005d2501);
    /* 005d2501: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2504: je 0x5d25a3 */ if (fZ) goto L_005d25a3;
L_005d250a:; BB(0x005d250a);
    /* 005d250a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d250d: je 0x5d2573 */ if (fZ) goto L_005d2573;
L_005d250f:; BB(0x005d250f);
    /* 005d250f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2512: jne 0x5d252d */ if (!fZ) goto L_005d252d;
L_005d2514:; BB(0x005d2514);
    /* 005d2514: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d2516: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d251bu); f_005d2890();
    /* 005d251b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d251d: je 0x5d2576 */ if (fZ) goto L_005d2576;
L_005d251f:; BB(0x005d251f);
    /* 005d251f: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d2523: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2526: je 0x5d2590 */ if (fZ) goto L_005d2590;
L_005d2528:; BB(0x005d2528);
    /* 005d2528: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 005d252b: jmp 0x5d2576 */ goto L_005d2576;
L_005d252d:; BB(0x005d252d);
    /* 005d252d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2530: jne 0x5d2576 */ if (!fZ) goto L_005d2576;
L_005d2532:; BB(0x005d2532);
    /* 005d2532: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d2536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2537: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2538: call 0x5e4df0 */ r_esp -= 4; W32(r_esp, 0x5d253du); f_005e4df0();
    /* 005d253d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2540: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d2544: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d2547: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d254a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d254d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005d254f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d2553: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d2558: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d255d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d2561: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d2565: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d2569: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d256d: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005d2571: jmp 0x5d2576 */ goto L_005d2576;
L_005d2573:; BB(0x005d2573);
    /* 005d2573: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
L_005d2576:; BB(0x005d2576);
    /* 005d2576: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d2578: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d257a: jge 0x5d257e */ if ((fS==fO)) goto L_005d257e;
L_005d257c:; BB(0x005d257c);
    /* 005d257c: mov edi, edx */ r_edi = r_edx;
L_005d257e:; BB(0x005d257e);
    /* 005d257e: mov eax, edi */ r_eax = r_edi;
    /* 005d2580: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2583: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2584: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2585: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2586: ret  */ FN_RET(0x005d24dc); r_esp += 4; return;
L_005d2587:; BB(0x005d2587);
    /* 005d2587: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d2589: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d258c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d258d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d258e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d258f: ret  */ FN_RET(0x005d24dc); r_esp += 4; return;
L_005d2590:; BB(0x005d2590);
    /* 005d2590: movzx edi, byte ptr [ebp + 2] */ r_edi = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d2594: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d2597: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005d259d: imul edi, dword ptr [eax + 0x10] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_eax+0x10u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d25a1: jmp 0x5d2576 */ goto L_005d2576;
L_005d25a3:; BB(0x005d25a3);
    /* 005d25a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d25a5: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x5d25aau); f_005d6990();
    /* 005d25aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d25ac: je 0x5d25b5 */ if (fZ) goto L_005d25b5;
L_005d25ae:; BB(0x005d25ae);
    /* 005d25ae: mov edi, 0x50 */ r_edi = 0x50u;
    /* 005d25b3: jmp 0x5d2576 */ goto L_005d2576;
L_005d25b5:; BB(0x005d25b5);
    /* 005d25b5: movzx esi, byte ptr [ebp + 1] */ r_esi = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d25b9: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d25bc: je 0x5d2695 */ if (fZ) goto L_005d2695;
L_005d25c2:; BB(0x005d25c2);
    /* 005d25c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d25c3: movzx edx, byte ptr [ebp] */ r_edx = (u32)R8((u32)(r_ebp));
    /* 005d25c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d25c8: call 0x5e4df0 */ r_esp -= 4; W32(r_esp, 0x5d25cdu); f_005e4df0();
    /* 005d25cd: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005d25d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d25d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d25d6: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d25dbu); f_005d2890();
    /* 005d25db: mov esi, eax */ r_esi = r_eax;
    /* 005d25dd: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005d25e1: fcomp dword ptr [0x92c4b4] */ fx_compare(ST(0), R_F32((u32)(0x92c4b4u))); FPOP();
    /* 005d25e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d25e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d25ea: je 0x5d2576 */ if (fZ) goto L_005d2576;
L_005d25ec:; BB(0x005d25ec);
    /* 005d25ec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d25ee: je 0x5d2576 */ if (fZ) goto L_005d2576;
L_005d25f0:; BB(0x005d25f0);
    /* 005d25f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d25f2: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d25f7u); f_005d2880();
    /* 005d25f7: mov edi, eax */ r_edi = r_eax;
    /* 005d25f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d25fb: call 0x5d2888 */ r_esp -= 4; W32(r_esp, 0x5d2600u); f_005d2888();
    /* 005d2600: movsx edx, word ptr [esi + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 005d2604: movsx ecx, word ptr [esi + 0xe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xeu));
    /* 005d2608: movzx ebp, byte ptr [ebp + 5] */ r_ebp = (u32)R8((u32)(r_ebp+0x5u));
    /* 005d260c: movzx esi, byte ptr [esi + 0x14] */ r_esi = (u32)R8((u32)(r_esi+0x14u));
    /* 005d2610: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d2612: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 005d2615: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 005d2618: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d261a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d261c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d261f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d2622: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005d2626: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d262a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005d262c: fdiv dword ptr [esp + 0x2c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x2cu));
    /* 005d2630: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 005d2634: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d2638: fmul dword ptr [0x92c4b0] */ ST(0) = ST(0) * R_F32((u32)(0x92c4b0u));
    /* 005d263e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d2640: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d2644: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d2649: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d264e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d2652: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d2656: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d265a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d265e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005d2662: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 005d2666: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d266a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005d266c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d266e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d2672: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d2677: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d267c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d2680: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d2684: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d2688: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d268c: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005d2690: jmp 0x5d2576 */ goto L_005d2576;
L_005d2695:; BB(0x005d2695);
    /* 005d2695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2696: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d269a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d269b: call 0x5e4df0 */ r_esp -= 4; W32(r_esp, 0x5d26a0u); f_005e4df0();
    /* 005d26a0: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005d26a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d26a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d26a9: call 0x5d69a8 */ r_esp -= 4; W32(r_esp, 0x5d26aeu); f_005d69a8();
    /* 005d26ae: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d26b1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d26b5: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d26b9: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005d26bd: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d26c1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d26c6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d26cb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d26cf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d26d3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d26d7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d26db: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005d26df: jmp 0x5d2576 */ goto L_005d2576;
L_005d26e4:; BB(0x005d26e4);
    /* 005d26e4: movzx edx, byte ptr [ebp + 4] */ r_edx = (u32)R8((u32)(r_ebp+0x4u));
    /* 005d26e8: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d26ee: je 0x5d26fa */ if (fZ) goto L_005d26fa;
L_005d26f0:; BB(0x005d26f0);
    /* 005d26f0: mov edi, 8 */ r_edi = 0x8u;
    /* 005d26f5: jmp 0x5d2576 */ goto L_005d2576;
L_005d26fa:; BB(0x005d26fa);
    /* 005d26fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d26fc: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x5d2701u); f_005d6990();
    /* 005d2701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2703: je 0x5d270f */ if (fZ) goto L_005d270f;
L_005d2705:; BB(0x005d2705);
    /* 005d2705: mov edi, 0x50 */ r_edi = 0x50u;
    /* 005d270a: jmp 0x5d2576 */ goto L_005d2576;
L_005d270f:; BB(0x005d270f);
    /* 005d270f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d2711: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d2716u); f_005d2890();
    /* 005d2716: mov esi, eax */ r_esi = r_eax;
    /* 005d2718: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d271c: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d2720: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2722: call 0x5e4df0 */ r_esp -= 4; W32(r_esp, 0x5d2727u); f_005e4df0();
    /* 005d2727: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005d272b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d272e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005d2732: fcomp dword ptr [0x92c4b4] */ fx_compare(ST(0), R_F32((u32)(0x92c4b4u))); FPOP();
    /* 005d2738: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d273a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d273b: je 0x5d2576 */ if (fZ) goto L_005d2576;
L_005d2741:; BB(0x005d2741);
    /* 005d2741: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2743: je 0x5d2576 */ if (fZ) goto L_005d2576;
L_005d2749:; BB(0x005d2749);
    /* 005d2749: movzx eax, word ptr [esi + 0x10] */ r_eax = (u32)R16((u32)(r_esi+0x10u));
    /* 005d274d: movzx edx, byte ptr [ebp + 3] */ r_edx = (u32)R8((u32)(r_ebp+0x3u));
    /* 005d2751: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d2755: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d2759: movzx eax, byte ptr [ebp + 6] */ r_eax = (u32)R8((u32)(r_ebp+0x6u));
    /* 005d275d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005d2761: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d2765: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d2767: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005d2769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d276b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005d276f: je 0x5d277f */ if (fZ) goto L_005d277f;
L_005d2771:; BB(0x005d2771);
    /* 005d2771: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2774: jg 0x5d277f */ if ((!fZ&&fS==fO)) goto L_005d277f;
L_005d2776:; BB(0x005d2776);
    /* 005d2776: movsx esi, byte ptr [ebp + 7] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0x7u));
    /* 005d277a: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d277d: jmp 0x5d2784 */ goto L_005d2784;
L_005d277f:; BB(0x005d277f);
    /* 005d277f: mov esi, 0x64 */ r_esi = 0x64u;
L_005d2784:; BB(0x005d2784);
    /* 005d2784: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005d2788: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d278a: je 0x5d279b */ if (fZ) goto L_005d279b;
L_005d278c:; BB(0x005d278c);
    /* 005d278c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d278f: jg 0x5d279b */ if ((!fZ&&fS==fO)) goto L_005d279b;
L_005d2791:; BB(0x005d2791);
    /* 005d2791: movsx eax, byte ptr [ebp + 9] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x9u));
    /* 005d2795: lea esi, [esi + eax + 0x64] */ r_esi = (u32)(r_esi+r_eax+0x64u);
    /* 005d2799: jmp 0x5d279e */ goto L_005d279e;
L_005d279b:; BB(0x005d279b);
    /* 005d279b: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005d279e:; BB(0x005d279e);
    /* 005d279e: movzx eax, byte ptr [ebp + 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xau));
    /* 005d27a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d27a4: je 0x5d27b5 */ if (fZ) goto L_005d27b5;
L_005d27a6:; BB(0x005d27a6);
    /* 005d27a6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d27a9: jg 0x5d27b5 */ if ((!fZ&&fS==fO)) goto L_005d27b5;
L_005d27ab:; BB(0x005d27ab);
    /* 005d27ab: movsx eax, byte ptr [ebp + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xbu));
    /* 005d27af: lea esi, [esi + eax + 0x64] */ r_esi = (u32)(r_esi+r_eax+0x64u);
    /* 005d27b3: jmp 0x5d27b8 */ goto L_005d27b8;
L_005d27b5:; BB(0x005d27b5);
    /* 005d27b5: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005d27b8:; BB(0x005d27b8);
    /* 005d27b8: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 005d27bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d27bd: call 0x5e4e74 */ r_esp -= 4; W32(r_esp, 0x5d27c2u); f_005e4e74();
    /* 005d27c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d27c3: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005d27c7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005d27cb: fmul dword ptr [0x92c4ac] */ ST(0) = ST(0) * R_F32((u32)(0x92c4acu));
    /* 005d27d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d27d4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d27d8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d27dc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005d27de: fmul dword ptr [0x92c4a8] */ ST(0) = ST(0) * R_F32((u32)(0x92c4a8u));
    /* 005d27e4: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 005d27e8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d27ec: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005d27ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d27f0: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 005d27f2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d27f4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d27f8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d27fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d2802: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d2806: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d280a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d280e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d2812: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005d2816: jmp 0x5d2576 */ goto L_005d2576;
}

void f_005d281c(void) /* sub_5D281C */
{
    FN_ENTER(0x005d281c);
    /* 005d281c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d281d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d281f: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 005d2822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d2824: jl 0x5d283b */ if ((fS!=fO)) goto L_005d283b;
L_005d2826:; BB(0x005d2826);
    /* 005d2826: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2829: jle 0x5d286c */ if ((fZ||fS!=fO)) goto L_005d286c;
L_005d282b:; BB(0x005d282b);
    /* 005d282b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d282e: jne 0x5d2853 */ if (!fZ) goto L_005d2853;
L_005d2830:; BB(0x005d2830);
    /* 005d2830: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d2832: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x5d2837u); f_005d24b0();
    /* 005d2837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2839: je 0x5d283f */ if (fZ) goto L_005d283f;
L_005d283b:; BB(0x005d283b);
    /* 005d283b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d283d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d283e: ret  */ FN_RET(0x005d281c); r_esp += 4; return;
L_005d283f:; BB(0x005d283f);
    /* 005d283f: movzx edx, byte ptr [ebx + 3] */ r_edx = (u32)R8((u32)(r_ebx+0x3u));
    /* 005d2843: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d2846: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2849: mov eax, 0 */ r_eax = 0x0u;
    /* 005d284e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d2851: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2852: ret  */ FN_RET(0x005d281c); r_esp += 4; return;
L_005d2853:; BB(0x005d2853);
    /* 005d2853: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2856: jne 0x5d283b */ if (!fZ) goto L_005d283b;
L_005d2858:; BB(0x005d2858);
    /* 005d2858: movzx edx, byte ptr [ebx + 0x12] */ r_edx = (u32)R8((u32)(r_ebx+0x12u));
    /* 005d285c: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d285f: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2862: mov eax, 0 */ r_eax = 0x0u;
    /* 005d2867: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d286a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d286b: ret  */ FN_RET(0x005d281c); r_esp += 4; return;
L_005d286c:; BB(0x005d286c);
    /* 005d286c: movzx edx, byte ptr [ebx + 4] */ r_edx = (u32)R8((u32)(r_ebx+0x4u));
    /* 005d2870: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d2873: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2876: mov eax, 0 */ r_eax = 0x0u;
    /* 005d287b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d287e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d287f: ret  */ FN_RET(0x005d281c); r_esp += 4; return;
}

void f_005d2880(void) /* sub_5D2880 */
{
    FN_ENTER(0x005d2880);
    /* 005d2880: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 005d2884: ret  */ FN_RET(0x005d2880); r_esp += 4; return;
}

void f_005d2888(void) /* sub_5D2888 */
{
    FN_ENTER(0x005d2888);
    /* 005d2888: movsx eax, word ptr [ecx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 005d288c: ret  */ FN_RET(0x005d2888); r_esp += 4; return;
}

void f_005d2890(void) /* sub_5D2890 */
{
    FN_ENTER(0x005d2890);
    /* 005d2890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2891: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2894: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d2896: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d289a: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d289e: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005d28a1: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d28a5: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 005d28a9: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d28ad: call 0x77e4ec */ r_esp -= 4; W32(r_esp, 0x5d28b2u); f_0077e4ec();
    /* 005d28b2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005d28b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d28b6: mov ecx, eax */ r_ecx = r_eax;
    /* 005d28b8: call 0x77e57c */ r_esp -= 4; W32(r_esp, 0x5d28bdu); f_0077e57c();
    /* 005d28bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d28bf: jne 0x5d2963 */ if (!fZ) goto L_005d2963;
L_005d28c5:; BB(0x005d28c5);
    /* 005d28c5: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d28c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d28cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d28cd: je 0x5d297f */ if (fZ) goto L_005d297f;
L_005d28d3:; BB(0x005d28d3);
    /* 005d28d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d28d6: je 0x5d2929 */ if (fZ) goto L_005d2929;
L_005d28d8:; BB(0x005d28d8);
    /* 005d28d8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d28db: jne 0x5d28ee */ if (!fZ) goto L_005d28ee;
L_005d28dd:; BB(0x005d28dd);
    /* 005d28dd: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d28e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d28e2: call 0x5e4b64 */ r_esp -= 4; W32(r_esp, 0x5d28e7u); f_005e4b64();
    /* 005d28e7: mov edx, eax */ r_edx = r_eax;
    /* 005d28e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d28ec: jmp 0x5d295c */ goto L_005d295c;
L_005d28ee:; BB(0x005d28ee);
    /* 005d28ee: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d28f1: jne 0x5d295c */ if (!fZ) goto L_005d295c;
L_005d28f3:; BB(0x005d28f3);
    /* 005d28f3: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d28f7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d28fa: jne 0x5d2917 */ if (!fZ) goto L_005d2917;
L_005d28fc:; BB(0x005d28fc);
    /* 005d28fc: movzx ecx, byte ptr [ebp + 2] */ r_ecx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d2900: cmp ecx, 0x1d */ {  u32 a = r_ecx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2903: jg 0x5d295c */ if ((!fZ&&fS==fO)) goto L_005d295c;
L_005d2905:; BB(0x005d2905);
    /* 005d2905: movzx edx, byte ptr [ebp + 4] */ r_edx = (u32)R8((u32)(r_ebp+0x4u));
    /* 005d2909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d290a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d290b: call 0x5e4b20 */ r_esp -= 4; W32(r_esp, 0x5d2910u); f_005e4b20();
    /* 005d2910: mov edx, eax */ r_edx = r_eax;
    /* 005d2912: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2915: jmp 0x5d295c */ goto L_005d295c;
L_005d2917:; BB(0x005d2917);
    /* 005d2917: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d291b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d291c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d291d: call 0x5e4b20 */ r_esp -= 4; W32(r_esp, 0x5d2922u); f_005e4b20();
    /* 005d2922: mov edx, eax */ r_edx = r_eax;
    /* 005d2924: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2927: jmp 0x5d295c */ goto L_005d295c;
L_005d2929:; BB(0x005d2929);
    /* 005d2929: movzx ecx, byte ptr [ebp + 1] */ r_ecx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d292d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d292f: jle 0x5d295c */ if ((fZ||fS!=fO)) goto L_005d295c;
L_005d2931:; BB(0x005d2931);
    /* 005d2931: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2934: jle 0x5d294c */ if ((fZ||fS!=fO)) goto L_005d294c;
L_005d2936:; BB(0x005d2936);
    /* 005d2936: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2939: jne 0x5d295c */ if (!fZ) goto L_005d295c;
L_005d293b:; BB(0x005d293b);
    /* 005d293b: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d293f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2940: call 0x5e4ae8 */ r_esp -= 4; W32(r_esp, 0x5d2945u); f_005e4ae8();
    /* 005d2945: mov edx, eax */ r_edx = r_eax;
    /* 005d2947: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d294a: jmp 0x5d295c */ goto L_005d295c;
L_005d294c:; BB(0x005d294c);
    /* 005d294c: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d2950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2951: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2952: call 0x5e53b8 */ r_esp -= 4; W32(r_esp, 0x5d2957u); f_005e53b8();
    /* 005d2957: mov edx, eax */ r_edx = r_eax;
    /* 005d2959: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d295c:; BB(0x005d295c);
    /* 005d295c: mov eax, edx */ r_eax = r_edx;
    /* 005d295e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2962: ret  */ FN_RET(0x005d2890); r_esp += 4; return;
L_005d2963:; BB(0x005d2963);
    /* 005d2963: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005d2967: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2969: call 0x5c9b04 */ r_esp -= 4; W32(r_esp, 0x5d296eu); f_005c9b04();
    /* 005d296e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2971: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005d2975: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d297au); f_005d2890();
    /* 005d297a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d297d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d297e: ret  */ FN_RET(0x005d2890); r_esp += 4; return;
L_005d297f:; BB(0x005d297f);
    /* 005d297f: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d2983: movzx ebp, byte ptr [ebp + 2] */ r_ebp = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d2987: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2989: call 0x5e5408 */ r_esp -= 4; W32(r_esp, 0x5d298eu); f_005e5408();
    /* 005d298e: mov edx, eax */ r_edx = r_eax;
    /* 005d2990: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2993: jmp 0x5d295c */ goto L_005d295c;
}

void f_005d2998(void) /* sub_5D2998 */
{
    FN_ENTER(0x005d2998);
    /* 005d2998: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2999: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d299b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d299d: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5d29a2u); f_005d6a3c();
    /* 005d29a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d29a6: mov byte ptr [ebx], 4 */ W8((u32)(r_ebx), 0x4u);
    /* 005d29a9: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 005d29ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d29ad: ret 4 */ FN_RET(0x005d2998); r_esp += 8; return;
}

void f_005d29b0(void) /* sub_5D29B0 */
{
    FN_ENTER(0x005d29b0);
    /* 005d29b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d29b1: mov esi, ecx */ r_esi = r_ecx;
    /* 005d29b3: mov ecx, esi */ r_ecx = r_esi;
    /* 005d29b5: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x5d29bau); f_005d24b0();
    /* 005d29ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d29bc: je 0x5d29c8 */ if (fZ) goto L_005d29c8;
L_005d29be:; BB(0x005d29be);
    /* 005d29be: movzx eax, byte ptr [esi + 5] */ r_eax = (u32)R8((u32)(r_esi+0x5u));
    /* 005d29c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d29c4: je 0x5d29c8 */ if (fZ) goto L_005d29c8;
L_005d29c6:; BB(0x005d29c6);
    /* 005d29c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d29c7: ret  */ FN_RET(0x005d29b0); r_esp += 4; return;
L_005d29c8:; BB(0x005d29c8);
    /* 005d29c8: mov eax, 1 */ r_eax = 0x1u;
    /* 005d29cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d29ce: ret  */ FN_RET(0x005d29b0); r_esp += 4; return;
}

void f_005d29d0(void) /* sub_5D29D0 */
{
    FN_ENTER(0x005d29d0);
    /* 005d29d0: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d29d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d29d5: jne 0x5d29e1 */ if (!fZ) goto L_005d29e1;
L_005d29d7:; BB(0x005d29d7);
    /* 005d29d7: movzx eax, byte ptr [ecx + 4] */ r_eax = (u32)R8((u32)(r_ecx+0x4u));
    /* 005d29db: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d29de: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
L_005d29e1:; BB(0x005d29e1);
    /* 005d29e1: ret  */ FN_RET(0x005d29d0); r_esp += 4; return;
}

void f_005d29e4(void) /* sub_5D29E4 */
{
    FN_ENTER(0x005d29e4);
    /* 005d29e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d29e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d29e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d29e9: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5d29eeu); f_005d281c();
    /* 005d29ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d29f0: jne 0x5d2a23 */ if (!fZ) goto L_005d2a23;
L_005d29f2:; BB(0x005d29f2);
    /* 005d29f2: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 005d29f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d29f7: je 0x5d2a45 */ if (fZ) goto L_005d2a45;
L_005d29f9:; BB(0x005d29f9);
    /* 005d29f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d29fc: je 0x5d2a27 */ if (fZ) goto L_005d2a27;
L_005d29fe:; BB(0x005d29fe);
    /* 005d29fe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2a01: jne 0x5d2a23 */ if (!fZ) goto L_005d2a23;
L_005d2a03:; BB(0x005d2a03);
    /* 005d2a03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d2a05: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x5d2a0au); f_005d24b0();
    /* 005d2a0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2a0c: jne 0x5d2a23 */ if (!fZ) goto L_005d2a23;
L_005d2a0e:; BB(0x005d2a0e);
    /* 005d2a0e: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005d2a12: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2a15: je 0x5d2a23 */ if (fZ) goto L_005d2a23;
L_005d2a17:; BB(0x005d2a17);
    /* 005d2a17: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2a1a: je 0x5d2a23 */ if (fZ) goto L_005d2a23;
L_005d2a1c:; BB(0x005d2a1c);
    /* 005d2a1c: mov eax, 1 */ r_eax = 0x1u;
    /* 005d2a21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2a22: ret  */ FN_RET(0x005d29e4); r_esp += 4; return;
L_005d2a23:; BB(0x005d2a23);
    /* 005d2a23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2a25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2a26: ret  */ FN_RET(0x005d29e4); r_esp += 4; return;
L_005d2a27:; BB(0x005d2a27);
    /* 005d2a27: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005d2a2b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2a2e: je 0x5d2a23 */ if (fZ) goto L_005d2a23;
L_005d2a30:; BB(0x005d2a30);
    /* 005d2a30: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2a33: jne 0x5d2a3e */ if (!fZ) goto L_005d2a3e;
L_005d2a35:; BB(0x005d2a35);
    /* 005d2a35: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d2a39: cmp eax, 0x52 */ {  u32 a = r_eax; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2a3c: je 0x5d2a23 */ if (fZ) goto L_005d2a23;
L_005d2a3e:; BB(0x005d2a3e);
    /* 005d2a3e: mov eax, 1 */ r_eax = 0x1u;
    /* 005d2a43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2a44: ret  */ FN_RET(0x005d29e4); r_esp += 4; return;
L_005d2a45:; BB(0x005d2a45);
    /* 005d2a45: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005d2a49: cmp eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2a4c: je 0x5d2a23 */ if (fZ) goto L_005d2a23;
L_005d2a4e:; BB(0x005d2a4e);
    /* 005d2a4e: cmp eax, 0xab */ {  u32 a = r_eax; u32 b = 0xabu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2a53: je 0x5d2a23 */ if (fZ) goto L_005d2a23;
L_005d2a55:; BB(0x005d2a55);
    /* 005d2a55: mov eax, 1 */ r_eax = 0x1u;
    /* 005d2a5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2a5b: ret  */ FN_RET(0x005d29e4); r_esp += 4; return;
}

void f_005d2a5c(void) /* sub_5D2A5C */
{
    FN_ENTER(0x005d2a5c);
    /* 005d2a5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a5d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d2a5f: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d2a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2a65: jl 0x5d2aa9 */ if ((fS!=fO)) goto L_005d2aa9;
L_005d2a67:; BB(0x005d2a67);
    /* 005d2a67: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2a6a: jg 0x5d2a7a */ if ((!fZ&&fS==fO)) goto L_005d2a7a;
L_005d2a6c:; BB(0x005d2a6c);
    /* 005d2a6c: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 005d2a70: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2a75: mov byte ptr [ebp + 4], al */ W8((u32)(r_ebp+0x4u), (u8)r_eax);
    /* 005d2a78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2a79: ret  */ FN_RET(0x005d2a5c); r_esp += 4; return;
L_005d2a7a:; BB(0x005d2a7a);
    /* 005d2a7a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2a7d: jne 0x5d2a98 */ if (!fZ) goto L_005d2a98;
L_005d2a7f:; BB(0x005d2a7f);
    /* 005d2a7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d2a81: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x5d2a86u); f_005d24b0();
    /* 005d2a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2a88: jne 0x5d2aa9 */ if (!fZ) goto L_005d2aa9;
L_005d2a8a:; BB(0x005d2a8a);
    /* 005d2a8a: movzx eax, byte ptr [ebp + 3] */ r_eax = (u32)R8((u32)(r_ebp+0x3u));
    /* 005d2a8e: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2a93: mov byte ptr [ebp + 3], al */ W8((u32)(r_ebp+0x3u), (u8)r_eax);
    /* 005d2a96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2a97: ret  */ FN_RET(0x005d2a5c); r_esp += 4; return;
L_005d2a98:; BB(0x005d2a98);
    /* 005d2a98: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2a9b: jne 0x5d2aa9 */ if (!fZ) goto L_005d2aa9;
L_005d2a9d:; BB(0x005d2a9d);
    /* 005d2a9d: movzx eax, byte ptr [ebp + 0x12] */ r_eax = (u32)R8((u32)(r_ebp+0x12u));
    /* 005d2aa1: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2aa6: mov byte ptr [ebp + 0x12], al */ W8((u32)(r_ebp+0x12u), (u8)r_eax);
L_005d2aa9:; BB(0x005d2aa9);
    /* 005d2aa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2aaa: ret  */ FN_RET(0x005d2a5c); r_esp += 4; return;
}

void f_005d2aac(void) /* sub_5D2AAC */
{
    FN_ENTER(0x005d2aac);
    /* 005d2aac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2aad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2aae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2aaf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ab0: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2ab3: mov esi, ecx */ r_esi = r_ecx;
    /* 005d2ab5: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 005d2ab8: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 005d2abc: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 005d2ac0: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005d2ac3: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005d2ac7: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 005d2acb: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d2acf: call 0x77e4ec */ r_esp -= 4; W32(r_esp, 0x5d2ad4u); f_0077e4ec();
    /* 005d2ad4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005d2ad7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ad8: mov ecx, eax */ r_ecx = r_eax;
    /* 005d2ada: call 0x77e57c */ r_esp -= 4; W32(r_esp, 0x5d2adfu); f_0077e57c();
    /* 005d2adf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2ae1: jne 0x5d2d12 */ if (!fZ) goto L_005d2d12;
L_005d2ae7:; BB(0x005d2ae7);
    /* 005d2ae7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2ae9: je 0x5d2ceb */ if (fZ) goto L_005d2ceb;
L_005d2aef:; BB(0x005d2aef);
    /* 005d2aef: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 005d2af2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2af5: je 0x5d2f44 */ if (fZ) goto L_005d2f44;
L_005d2afb:; BB(0x005d2afb);
    /* 005d2afb: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2afd: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d2b02u); f_005d2890();
    /* 005d2b02: mov edi, eax */ r_edi = r_eax;
    /* 005d2b04: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b06: je 0x5d2f30 */ if (fZ) goto L_005d2f30;
L_005d2b0c:; BB(0x005d2b0c);
    /* 005d2b0c: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 005d2b0e: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x5d2b13u); f_00793050();
    /* 005d2b13: mov ebx, eax */ r_ebx = r_eax;
    /* 005d2b15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d2b18:; BB(0x005d2b18);
    /* 005d2b18: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2b1a: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5d2b1fu); f_005d281c();
    /* 005d2b1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b21: jne 0x5d2cf5 */ if (!fZ) goto L_005d2cf5;
L_005d2b27:; BB(0x005d2b27);
    /* 005d2b27: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 005d2b2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b2c: je 0x5d2b51 */ if (fZ) goto L_005d2b51;
L_005d2b2e:; BB(0x005d2b2e);
    /* 005d2b2e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b31: je 0x5d2de7 */ if (fZ) goto L_005d2de7;
L_005d2b37:; BB(0x005d2b37);
    /* 005d2b37: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b3a: je 0x5d2d34 */ if (fZ) goto L_005d2d34;
L_005d2b40:; BB(0x005d2b40);
    /* 005d2b40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b42: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2b47u); f_00857e29();
    /* 005d2b47: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2b4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2b4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2b4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2b4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2b4e: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2b51:; BB(0x005d2b51);
    /* 005d2b51: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2b53: call 0x5d2f7c */ r_esp -= 4; W32(r_esp, 0x5d2b58u); f_005d2f7c();
    /* 005d2b58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b5a: je 0x5d2bee */ if (fZ) goto L_005d2bee;
L_005d2b60:; BB(0x005d2b60);
    /* 005d2b60: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b62: je 0x5d2f1c */ if (fZ) goto L_005d2f1c;
L_005d2b68:; BB(0x005d2b68);
    /* 005d2b68: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005d2b6a: cmp edx, 0x27f */ {  u32 a = r_edx; u32 b = 0x27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b70: je 0x5d2f1c */ if (fZ) goto L_005d2f1c;
L_005d2b76:; BB(0x005d2b76);
    /* 005d2b76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d2b78: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005d2b7c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005d2b80: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005d2b84: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005d2b88: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005d2b8c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005d2b90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b91: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2b93: call 0x5d2fd4 */ r_esp -= 4; W32(r_esp, 0x5d2b98u); f_005d2fd4();
    /* 005d2b98: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 005d2b9d: add edx, -0x41 */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d2ba0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2ba3: je 0x5d2ed9 */ if (fZ) goto L_005d2ed9;
L_005d2ba9:; BB(0x005d2ba9);
    /* 005d2ba9: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 005d2bad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2baf: je 0x5d2bd0 */ if (fZ) goto L_005d2bd0;
L_005d2bb1:; BB(0x005d2bb1);
    /* 005d2bb1: lea ecx, [esp + 0xe] */ r_ecx = (u32)(r_esp+0xeu);
    /* 005d2bb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bb8: push 0x92c4e4 */ { u32 v = 0x92c4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bbd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bbe: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2bc3u); f_00857e29();
    /* 005d2bc3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2bc6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2bc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2bca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2bcb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2bcc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2bcd: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2bd0:; BB(0x005d2bd0);
    /* 005d2bd0: lea edx, [esp + 0xe] */ r_edx = (u32)(r_esp+0xeu);
    /* 005d2bd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bd6: push 0x92c4f8 */ { u32 v = 0x92c4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bdb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bdc: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2be1u); f_00857e29();
    /* 005d2be1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2be4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2be7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2be8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2be9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2bea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2beb: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2bee:; BB(0x005d2bee);
    /* 005d2bee: movzx edx, byte ptr [esi + 4] */ r_edx = (u32)R8((u32)(r_esi+0x4u));
    /* 005d2bf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bf3: call 0x5e4ca0 */ r_esp -= 4; W32(r_esp, 0x5d2bf8u); f_005e4ca0();
    /* 005d2bf8: mov edi, eax */ r_edi = r_eax;
    /* 005d2bfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2bfd: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2bff: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x5d2c04u); f_005d6990();
    /* 005d2c04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2c06: jne 0x5d2c8b */ if (!fZ) goto L_005d2c8b;
L_005d2c0c:; BB(0x005d2c0c);
    /* 005d2c0c: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 005d2c0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2c11: je 0x5d2c50 */ if (fZ) goto L_005d2c50;
L_005d2c13:; BB(0x005d2c13);
    /* 005d2c13: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 005d2c17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2c19: je 0x5d2c36 */ if (fZ) goto L_005d2c36;
L_005d2c1b:; BB(0x005d2c1b);
    /* 005d2c1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c1e: push 0x92c4e4 */ { u32 v = 0x92c4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c24: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2c29u); f_00857e29();
    /* 005d2c29: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2c2c: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2c2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2c30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2c31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2c32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2c33: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2c36:; BB(0x005d2c36);
    /* 005d2c36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c38: push 0x92c4f8 */ { u32 v = 0x92c4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c3e: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2c43u); f_00857e29();
    /* 005d2c43: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2c46: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2c49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2c4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2c4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2c4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2c4d: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2c50:; BB(0x005d2c50);
    /* 005d2c50: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 005d2c54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2c56: je 0x5d2c72 */ if (fZ) goto L_005d2c72;
L_005d2c58:; BB(0x005d2c58);
    /* 005d2c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c5a: push 0x92c4d4 */ { u32 v = 0x92c4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c60: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2c65u); f_00857e29();
    /* 005d2c65: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2c68: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2c6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2c6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2c6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2c6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2c6f: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2c72:; BB(0x005d2c72);
    /* 005d2c72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c73: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c79: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2c7eu); f_00857e29();
    /* 005d2c7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2c81: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2c84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2c85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2c86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2c87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2c88: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2c8b:; BB(0x005d2c8b);
    /* 005d2c8b: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2c8d: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x5d2c92u); f_005d2fb0();
    /* 005d2c92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2c95: jne 0x5d2cd2 */ if (!fZ) goto L_005d2cd2;
L_005d2c97:; BB(0x005d2c97);
    /* 005d2c97: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 005d2c9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2c9d: je 0x5d2cb9 */ if (fZ) goto L_005d2cb9;
L_005d2c9f:; BB(0x005d2c9f);
    /* 005d2c9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ca0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ca1: push 0x92c4d4 */ { u32 v = 0x92c4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ca6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ca7: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2cacu); f_00857e29();
    /* 005d2cac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2caf: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2cb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2cb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2cb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2cb6: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2cb9:; BB(0x005d2cb9);
    /* 005d2cb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cba: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cc0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2cc5u); f_00857e29();
    /* 005d2cc5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2cc8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2ccb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2ccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2ccd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2cce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2ccf: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2cd2:; BB(0x005d2cd2);
    /* 005d2cd2: push 0x19b */ { u32 v = 0x19bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cd7: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x5d2cdcu); f_00793050();
    /* 005d2cdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cdd: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ce2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ce3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2ce8u); f_00857e29();
    /* 005d2ce8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d2ceb:; BB(0x005d2ceb);
    /* 005d2ceb: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2cee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2cef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2cf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2cf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2cf2: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2cf5:; BB(0x005d2cf5);
    /* 005d2cf5: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cf7: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x5d2cfcu); f_00793050();
    /* 005d2cfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cfd: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d03: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2d08u); f_00857e29();
    /* 005d2d08: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2d0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2d0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2d0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2d0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2d0f: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2d12:; BB(0x005d2d12);
    /* 005d2d12: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005d2d16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d18: call 0x5c9b04 */ r_esp -= 4; W32(r_esp, 0x5d2d1du); f_005c9b04();
    /* 005d2d1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d21: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005d2d25: call 0x5d2aac */ r_esp -= 4; W32(r_esp, 0x5d2d2au); f_005d2aac();
    /* 005d2d2a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2d2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2d2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2d2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2d30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2d31: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2d34:; BB(0x005d2d34);
    /* 005d2d34: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 005d2d38: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2d3b: jne 0x5d2b40 */ if (!fZ) goto L_005d2b40;
L_005d2d41:; BB(0x005d2d41);
    /* 005d2d41: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d2d43: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d2d48: mov byte ptr [esp + 6], dl */ W8((u32)(r_esp+0x6u), (u8)r_edx);
    /* 005d2d4c: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2d4e: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d2d53u); f_005d2890();
    /* 005d2d53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2d55: je 0x5d2dc9 */ if (fZ) goto L_005d2dc9;
L_005d2d57:; BB(0x005d2d57);
    /* 005d2d57: movsx edi, word ptr [eax + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 005d2d5b: mov ecx, esi */ r_ecx = r_esi;
    /* 005d2d5d: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d2d62u); f_005d2880();
    /* 005d2d62: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d2d65: mov edx, edi */ r_edx = r_edi;
    /* 005d2d67: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d2d69: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2d6b: jge 0x5d2d85 */ if ((fS==fO)) goto L_005d2d85;
L_005d2d6d:; BB(0x005d2d6d);
    /* 005d2d6d: mov edx, 0x2d */ r_edx = 0x2du;
    /* 005d2d72: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d2d77: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 005d2d7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2d7e: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 005d2d83: jmp 0x5d2dc9 */ goto L_005d2dc9;
L_005d2d85:; BB(0x005d2d85);
    /* 005d2d85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d2d87: jl 0x5d2f65 */ if ((fS!=fO)) goto L_005d2f65;
L_005d2d8d:; BB(0x005d2d8d);
    /* 005d2d8d: jne 0x5d2d98 */ if (!fZ) goto L_005d2d98;
L_005d2d8f:; BB(0x005d2d8f);
    /* 005d2d8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d2d91: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d2d96: jmp 0x5d2dc9 */ goto L_005d2dc9;
L_005d2d98:; BB(0x005d2d98);
    /* 005d2d98: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2d9a: jg 0x5d2daf */ if ((!fZ&&fS==fO)) goto L_005d2daf;
L_005d2d9c:; BB(0x005d2d9c);
    /* 005d2d9c: mov edx, 0x2b */ r_edx = 0x2bu;
    /* 005d2da1: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d2da6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2da8: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 005d2dad: jmp 0x5d2dc9 */ goto L_005d2dc9;
L_005d2daf:; BB(0x005d2daf);
    /* 005d2daf: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2db1: jge 0x5d2dc9 */ if ((fS==fO)) goto L_005d2dc9;
L_005d2db3:; BB(0x005d2db3);
    /* 005d2db3: mov edx, 0x2b */ r_edx = 0x2bu;
    /* 005d2db8: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d2dbd: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 005d2dc2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2dc4: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
L_005d2dc9:; BB(0x005d2dc9);
    /* 005d2dc9: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005d2dcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2dce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2dcf: push 0x909e1c */ { u32 v = 0x909e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2dd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2dd5: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2ddau); f_00857e29();
    /* 005d2dda: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2ddd: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2de0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2de1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2de2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2de3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2de4: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2de7:; BB(0x005d2de7);
    /* 005d2de7: movzx eax, byte ptr [esi + 1] */ r_eax = (u32)R8((u32)(r_esi+0x1u));
    /* 005d2deb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2dee: jne 0x5d2b37 */ if (!fZ) goto L_005d2b37;
L_005d2df4:; BB(0x005d2df4);
    /* 005d2df4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2df6: je 0x5d2ec5 */ if (fZ) goto L_005d2ec5;
L_005d2dfc:; BB(0x005d2dfc);
    /* 005d2dfc: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005d2dfe: cmp edx, 0x27f */ {  u32 a = r_edx; u32 b = 0x27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2e04: je 0x5d2ec5 */ if (fZ) goto L_005d2ec5;
L_005d2e0a:; BB(0x005d2e0a);
    /* 005d2e0a: movzx edi, byte ptr [esi + 4] */ r_edi = (u32)R8((u32)(r_esi+0x4u));
    /* 005d2e0e: cmp edi, 0x13 */ {  u32 a = r_edi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2e11: jge 0x5d2ec5 */ if ((fS==fO)) goto L_005d2ec5;
L_005d2e17:; BB(0x005d2e17);
    /* 005d2e17: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2e1a: je 0x5d2e7b */ if (fZ) goto L_005d2e7b;
L_005d2e1c:; BB(0x005d2e1c);
    /* 005d2e1c: cmp edi, 0x11 */ {  u32 a = r_edi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2e1f: je 0x5d2e7b */ if (fZ) goto L_005d2e7b;
L_005d2e21:; BB(0x005d2e21);
    /* 005d2e21: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 005d2e27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2e29: jne 0x5d2e53 */ if (!fZ) goto L_005d2e53;
L_005d2e2b:; BB(0x005d2e2b);
    /* 005d2e2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e2c: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x5d2e31u); f_00793000();
    /* 005d2e31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e32: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 005d2e36: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d2e39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e3b: push 0x92c504 */ { u32 v = 0x92c504u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e41: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2e46u); f_00857e29();
    /* 005d2e46: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2e49: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2e4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2e4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2e4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2e50: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2e53:; BB(0x005d2e53);
    /* 005d2e53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e54: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x5d2e59u); f_00793000();
    /* 005d2e59: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 005d2e5d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d2e60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e63: push 0x92c518 */ { u32 v = 0x92c518u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e69: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2e6eu); f_00857e29();
    /* 005d2e6e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2e71: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2e74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2e75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2e76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2e77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2e78: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2e7b:; BB(0x005d2e7b);
    /* 005d2e7b: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 005d2e81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2e83: jne 0x5d2ea5 */ if (!fZ) goto L_005d2ea5;
L_005d2e85:; BB(0x005d2e85);
    /* 005d2e85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e86: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x5d2e8bu); f_00793000();
    /* 005d2e8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e8d: push 0x909e1c */ { u32 v = 0x909e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e93: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2e98u); f_00857e29();
    /* 005d2e98: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2e9b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2e9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2e9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2ea0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2ea1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2ea2: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2ea5:; BB(0x005d2ea5);
    /* 005d2ea5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ea6: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x5d2eabu); f_00793000();
    /* 005d2eab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2eac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ead: push 0x909e1c */ { u32 v = 0x909e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2eb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2eb3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2eb8u); f_00857e29();
    /* 005d2eb8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2ebb: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2ebe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2ebf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2ec0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2ec1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2ec2: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2ec5:; BB(0x005d2ec5);
    /* 005d2ec5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ec6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ec7: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2eccu); f_00857e29();
    /* 005d2ecc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2ecf: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2ed2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2ed3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2ed4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2ed5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2ed6: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2ed9:; BB(0x005d2ed9);
    /* 005d2ed9: movzx eax, byte ptr [esi + 3] */ r_eax = (u32)R8((u32)(r_esi+0x3u));
    /* 005d2edd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2edf: je 0x5d2eff */ if (fZ) goto L_005d2eff;
L_005d2ee1:; BB(0x005d2ee1);
    /* 005d2ee1: lea edx, [esp + 0xe] */ r_edx = (u32)(r_esp+0xeu);
    /* 005d2ee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ee6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ee7: push 0x92c4d4 */ { u32 v = 0x92c4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2eed: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2ef2u); f_00857e29();
    /* 005d2ef2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2ef5: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2ef8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2ef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2efa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2efb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2efc: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2eff:; BB(0x005d2eff);
    /* 005d2eff: lea eax, [esp + 0xe] */ r_eax = (u32)(r_esp+0xeu);
    /* 005d2f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f04: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f0a: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2f0fu); f_00857e29();
    /* 005d2f0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2f12: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2f15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2f16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2f17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2f18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2f19: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2f1c:; BB(0x005d2f1c);
    /* 005d2f1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f1e: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2f23u); f_00857e29();
    /* 005d2f23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2f26: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2f29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2f2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2f2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2f2d: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2f30:; BB(0x005d2f30);
    /* 005d2f30: push 0x27f */ { u32 v = 0x27fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f35: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x5d2f3au); f_00793050();
    /* 005d2f3a: mov ebx, eax */ r_ebx = r_eax;
    /* 005d2f3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2f3f: jmp 0x5d2b18 */ goto L_005d2b18;
L_005d2f44:; BB(0x005d2f44);
    /* 005d2f44: call 0x7930f0 */ r_esp -= 4; W32(r_esp, 0x5d2f49u); f_007930f0();
    /* 005d2f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f4a: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d2f4d: push 0x92c4c0 */ { u32 v = 0x92c4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f53: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d2f58u); f_00857e29();
    /* 005d2f58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2f5b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d2f5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d2f5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2f60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2f61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2f62: ret 4 */ FN_RET(0x005d2aac); r_esp += 8; return;
L_005d2f65:; BB(0x005d2f65);
    /* 005d2f65: mov edx, 0x2d */ r_edx = 0x2du;
    /* 005d2f6a: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d2f6f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2f71: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 005d2f76: jmp 0x5d2dc9 */ goto L_005d2dc9;
}

void f_005d2f7c(void) /* sub_5D2F7C */
{
    FN_ENTER(0x005d2f7c);
    /* 005d2f7c: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d2f7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2f81: jne 0x5d2fad */ if (!fZ) goto L_005d2fad;
L_005d2f83:; BB(0x005d2f83);
    /* 005d2f83: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d2f87: cmp eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2f8a: jl 0x5d2f99 */ if ((fS!=fO)) goto L_005d2f99;
L_005d2f8c:; BB(0x005d2f8c);
    /* 005d2f8c: cmp eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2f91: jg 0x5d2f99 */ if ((!fZ&&fS==fO)) goto L_005d2f99;
L_005d2f93:; BB(0x005d2f93);
    /* 005d2f93: mov eax, 1 */ r_eax = 0x1u;
    /* 005d2f98: ret  */ FN_RET(0x005d2f7c); r_esp += 4; return;
L_005d2f99:; BB(0x005d2f99);
    /* 005d2f99: cmp eax, 0xa5 */ {  u32 a = r_eax; u32 b = 0xa5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2f9e: jl 0x5d2fad */ if ((fS!=fO)) goto L_005d2fad;
L_005d2fa0:; BB(0x005d2fa0);
    /* 005d2fa0: cmp eax, 0xa9 */ {  u32 a = r_eax; u32 b = 0xa9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d2fa5: jg 0x5d2fad */ if ((!fZ&&fS==fO)) goto L_005d2fad;
L_005d2fa7:; BB(0x005d2fa7);
    /* 005d2fa7: mov eax, 1 */ r_eax = 0x1u;
    /* 005d2fac: ret  */ FN_RET(0x005d2f7c); r_esp += 4; return;
L_005d2fad:; BB(0x005d2fad);
    /* 005d2fad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2faf: ret  */ FN_RET(0x005d2f7c); r_esp += 4; return;
}

void f_005d2fb0(void) /* sub_5D2FB0 */
{
    FN_ENTER(0x005d2fb0);
    /* 005d2fb0: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d2fb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2fb5: jne 0x5d2fcb */ if (!fZ) goto L_005d2fcb;
L_005d2fb7:; BB(0x005d2fb7);
    /* 005d2fb7: movzx eax, byte ptr [ecx + 4] */ r_eax = (u32)R8((u32)(r_ecx+0x4u));
    /* 005d2fbb: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2fc0: je 0x5d2fcb */ if (fZ) goto L_005d2fcb;
L_005d2fc2:; BB(0x005d2fc2);
    /* 005d2fc2: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5d2fc7u); f_005d281c();
    /* 005d2fc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2fc9: je 0x5d2fd1 */ if (fZ) goto L_005d2fd1;
L_005d2fcb:; BB(0x005d2fcb);
    /* 005d2fcb: mov eax, 1 */ r_eax = 0x1u;
    /* 005d2fd0: ret  */ FN_RET(0x005d2fb0); r_esp += 4; return;
L_005d2fd1:; BB(0x005d2fd1);
    /* 005d2fd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d2fd3: ret  */ FN_RET(0x005d2fb0); r_esp += 4; return;
}

void f_005d2fd4(void) /* sub_5D2FD4 */
{
    FN_ENTER(0x005d2fd4);
    /* 005d2fd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2fd5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2fd8: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 005d2fdc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2fde: je 0x5d3057 */ if (fZ) goto L_005d3057;
L_005d2fe0:; BB(0x005d2fe0);
    /* 005d2fe0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005d2fe4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005d2fe8: mov edi, ecx */ r_edi = r_ecx;
    /* 005d2fea: lea eax, [ecx + 6] */ r_eax = (u32)(r_ecx+0x6u);
    /* 005d2fed: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 005d2ff0: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005d2ff4: mov esi, eax */ r_esi = r_eax;
    /* 005d2ff6: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_005d2ff9:; BB(0x005d2ff9);
    /* 005d2ff9: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 005d2ffc: movzx ebp, byte ptr [esi + 1] */ r_ebp = (u32)R8((u32)(r_esi+0x1u));
    /* 005d3000: and edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d3003: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d3006: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d3008: movzx ebp, dx */ r_ebp = (u32)(u16)r_edx;
    /* 005d300b: mov edx, ebp */ r_edx = r_ebp;
    /* 005d300d: sar edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d3010: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3011: mov ecx, edi */ r_ecx = r_edi;
    /* 005d3013: call 0x5d3060 */ r_esp -= 4; W32(r_esp, 0x5d3018u); f_005d3060();
    /* 005d3018: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 005d301b: mov edx, ebp */ r_edx = r_ebp;
    /* 005d301d: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d3020: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d3023: mov ecx, edi */ r_ecx = r_edi;
    /* 005d3025: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3026: call 0x5d3060 */ r_esp -= 4; W32(r_esp, 0x5d302bu); f_005d3060();
    /* 005d302b: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 005d302f: and ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005d3032: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3033: mov ecx, edi */ r_ecx = r_edi;
    /* 005d3035: call 0x5d3060 */ r_esp -= 4; W32(r_esp, 0x5d303au); f_005d3060();
    /* 005d303a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005d303e: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 005d3042: add ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d3045: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d3048: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d304a: ja 0x5d2ff9 */ if ((!fC&&!fZ)) goto L_005d2ff9;
L_005d304c:; BB(0x005d304c);
    /* 005d304c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d3050: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d3054: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005d3057:; BB(0x005d3057);
    /* 005d3057: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d305a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d305b: ret 4 */ FN_RET(0x005d2fd4); r_esp += 8; return;
}

