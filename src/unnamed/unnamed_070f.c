#include "protos.h"

void f_0070f0c0(void) /* sub_70F0C0 */
{
    FN_ENTER(0x0070f0c0);
    /* 0070f0c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f0c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f0c2: mov edi, ecx */ r_edi = r_ecx;
    /* 0070f0c4: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0070f0c7: lea esi, [edi + 0x1c] */ r_esi = (u32)(r_edi+0x1cu);
    /* 0070f0ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0070f0cc: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x70f0cfu); call_ind(t); }
    /* 0070f0cf: mov ecx, esi */ r_ecx = r_esi;
    /* 0070f0d1: call 0x70f0f4 */ r_esp -= 4; W32(r_esp, 0x70f0d6u); f_0070f0f4();
    /* 0070f0d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f0d8: je 0x70f0ee */ if (fZ) goto L_0070f0ee;
L_0070f0da:; BB(0x0070f0da);
    /* 0070f0da: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0070f0dd: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f0df: je 0x70f0ee */ if (fZ) goto L_0070f0ee;
L_0070f0e1:; BB(0x0070f0e1);
    /* 0070f0e1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0070f0e5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f0ea: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0070f0ee:; BB(0x0070f0ee);
    /* 0070f0ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070f0ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070f0f0: ret  */ FN_RET(0x0070f0c0); r_esp += 4; return;
}

void f_0070f0f4(void) /* sub_70F0F4 */
{
    FN_ENTER(0x0070f0f4);
    /* 0070f0f4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0070f0f7: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f0fc: je 0x70f104 */ if (fZ) goto L_0070f104;
L_0070f0fe:; BB(0x0070f0fe);
    /* 0070f0fe: mov eax, 1 */ r_eax = 0x1u;
    /* 0070f103: ret  */ FN_RET(0x0070f0f4); r_esp += 4; return;
L_0070f104:; BB(0x0070f104);
    /* 0070f104: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f106: ret  */ FN_RET(0x0070f0f4); r_esp += 4; return;
}

void f_0070f108(void) /* sub_70F108 */
{
    FN_ENTER(0x0070f108);
    /* 0070f108: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0070f10b: lea eax, [ecx + 0x1c] */ r_eax = (u32)(r_ecx+0x1cu);
    /* 0070f10e: mov ecx, eax */ r_ecx = r_eax;
    /* 0070f110: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x70f113u); call_ind(t); }
    /* 0070f113: ret  */ FN_RET(0x0070f108); r_esp += 4; return;
}

void f_0070f114(void) /* sub_70F114 */
{
    FN_ENTER(0x0070f114);
    /* 0070f114: movzx eax, word ptr [ecx - 0x14] */ r_eax = (u32)R16((u32)(r_ecx+0xffffffecu));
    /* 0070f118: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f11d: mov word ptr [ecx - 0x14], ax */ W16((u32)(r_ecx+0xffffffecu), (u16)r_eax);
    /* 0070f121: ret  */ FN_RET(0x0070f114); r_esp += 4; return;
}

void f_0070f124(void) /* sub_70F124 */
{
    FN_ENTER(0x0070f124);
    /* 0070f124: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070f128: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0070f12c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0070f12f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0070f131: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0070f134: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0070f137: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0070f13a: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0070f13d: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0070f140: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0070f143: ret  */ FN_RET(0x0070f124); r_esp += 4; return;
}

void f_0070f144(void) /* sub_70F144 */
{
    FN_ENTER(0x0070f144);
    /* 0070f144: add dword ptr [ecx + 0x1c], 1 */ { u32 ad = (u32)(r_ecx+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070f148: ret 4 */ FN_RET(0x0070f144); r_esp += 8; return;
}

void f_0070f14c(void) /* sub_70F14C */
{
    FN_ENTER(0x0070f14c);
    /* 0070f14c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f14f: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0070f153: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0070f156: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0070f15d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0070f165: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0070f168: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0070f16c: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0070f174: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0070f177: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0070f17b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0070f17e: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0070f182: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0070f185: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0070f18d: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0070f191: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0070f194: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0070f198: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0070f19b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0070f19f: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0070f1a2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0070f1a6: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0070f1a9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0070f1ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070f1af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f1b1: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f1b5: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0070f1b9: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x70f1beu); f_0082f940();
    /* 0070f1be: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070f1c1: ret  */ FN_RET(0x0070f14c); r_esp += 4; return;
}

void f_0070f1c4(void) /* sub_70F1C4 */
{
    FN_ENTER(0x0070f1c4);
    /* 0070f1c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f1c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f1c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f1c7: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f1cd: mov edi, ecx */ r_edi = r_ecx;
    /* 0070f1cf: mov esi, dword ptr [esp + 0x13c] */ r_esi = R32((u32)(r_esp+0x13cu));
    /* 0070f1d6: mov ebx, dword ptr [esp + 0x140] */ r_ebx = R32((u32)(r_esp+0x140u));
    /* 0070f1dd: mov ecx, dword ptr [edi + 0x84] */ r_ecx = R32((u32)(r_edi+0x84u));
    /* 0070f1e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f1e5: je 0x70f201 */ if (fZ) goto L_0070f201;
L_0070f1e7:; BB(0x0070f1e7);
    /* 0070f1e7: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0070f1ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f1ef: je 0x70f1f7 */ if (fZ) goto L_0070f1f7;
L_0070f1f1:; BB(0x0070f1f1);
    /* 0070f1f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f1f2: call 0x70e848 */ r_esp -= 4; W32(r_esp, 0x70f1f7u); f_0070e848();
L_0070f1f7:; BB(0x0070f1f7);
    /* 0070f1f7: mov dword ptr [edi + 0x84], 0 */ W32((u32)(r_edi+0x84u), 0x0u);
L_0070f201:; BB(0x0070f201);
    /* 0070f201: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f203: je 0x70f217 */ if (fZ) goto L_0070f217;
L_0070f205:; BB(0x0070f205);
    /* 0070f205: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0070f20b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f20d: je 0x70f217 */ if (fZ) goto L_0070f217;
L_0070f20f:; BB(0x0070f20f);
    /* 0070f20f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f210: mov ecx, esi */ r_ecx = r_esi;
    /* 0070f212: call 0x70f144 */ r_esp -= 4; W32(r_esp, 0x70f217u); f_0070f144();
L_0070f217:; BB(0x0070f217);
    /* 0070f217: mov eax, dword ptr [esp + 0x144] */ r_eax = R32((u32)(r_esp+0x144u));
    /* 0070f21e: mov dword ptr [edi + 0x84], esi */ W32((u32)(r_edi+0x84u), r_esi);
    /* 0070f224: mov edx, eax */ r_edx = r_eax;
    /* 0070f226: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0070f229: and eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0070f22e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f230: jne 0x70f237 */ if (!fZ) goto L_0070f237;
L_0070f232:; BB(0x0070f232);
    /* 0070f232: mov edx, 1 */ r_edx = 0x1u;
L_0070f237:; BB(0x0070f237);
    /* 0070f237: mov dword ptr [edi + 0xc], 0 */ W32((u32)(r_edi+0xcu), 0x0u);
    /* 0070f23e: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070f240: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0070f243: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 0070f246: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0070f249: movzx esi, bx */ r_esi = (u32)(u16)r_ebx;
    /* 0070f24c: lea edx, [edi + 0x10] */ r_edx = (u32)(r_edi+0x10u);
    /* 0070f24f: lea eax, [edi + 0x14] */ r_eax = (u32)(r_edi+0x14u);
    /* 0070f252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f253: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f255: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f258: call 0x70d9f8 */ r_esp -= 4; W32(r_esp, 0x70f25du); f_0070d9f8();
    /* 0070f25d: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 0070f263: mov dword ptr [edi + 0x18], 0 */ W32((u32)(r_edi+0x18u), 0x0u);
    /* 0070f26a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070f26c: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0070f26f: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 0070f276: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
    /* 0070f27a: mov dword ptr [edi + 0x78], eax */ W32((u32)(r_edi+0x78u), r_eax);
    /* 0070f27d: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0070f280: mov dword ptr [edi + 0x20], 0x3f7ae148 */ W32((u32)(r_edi+0x20u), 0x3f7ae148u);
    /* 0070f287: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 0070f28a: lea ebx, [edi + 0x78] */ r_ebx = (u32)(r_edi+0x78u);
    /* 0070f28d: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 0070f294: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f295: mov dword ptr [edi + 0x28], 0x3f800000 */ W32((u32)(r_edi+0x28u), 0x3f800000u);
    /* 0070f29c: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f2a1: mov dword ptr [edi + 0x2c], 0x3f800000 */ W32((u32)(r_edi+0x2cu), 0x3f800000u);
    /* 0070f2a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f2a9: mov dword ptr [edi + 0x30], 0x3f800000 */ W32((u32)(r_edi+0x30u), 0x3f800000u);
    /* 0070f2b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f2b1: mov dword ptr [edi + 0x34], 0x3f800000 */ W32((u32)(r_edi+0x34u), 0x3f800000u);
    /* 0070f2b8: mov dword ptr [edi + 0x38], 0x3f800000 */ W32((u32)(r_edi+0x38u), 0x3f800000u);
    /* 0070f2bf: mov dword ptr [edi + 0x3c], 0x3f800000 */ W32((u32)(r_edi+0x3cu), 0x3f800000u);
    /* 0070f2c6: mov dword ptr [edi + 0x40], 0x3f800000 */ W32((u32)(r_edi+0x40u), 0x3f800000u);
    /* 0070f2cd: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0070f2d0: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f2d3: call 0x70e4cc */ r_esp -= 4; W32(r_esp, 0x70f2d8u); f_0070e4cc();
    /* 0070f2d8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070f2db: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0070f2de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f2e0: je 0x70f2f0 */ if (fZ) goto L_0070f2f0;
L_0070f2e2:; BB(0x0070f2e2);
    /* 0070f2e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f2e3: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70f2e8u); f_0082e960();
    /* 0070f2e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f2e9: mov dword ptr [edi + 0x7c], 0 */ W32((u32)(r_edi+0x7cu), 0x0u);
L_0070f2f0:; BB(0x0070f2f0);
    /* 0070f2f0: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 0070f2f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070f2f5: jle 0x70f32f */ if ((fZ||fS!=fO)) goto L_0070f32f;
L_0070f2f7:; BB(0x0070f2f7);
    /* 0070f2f7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0070f2fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070f2fc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0070f2fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070f300: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070f302: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070f304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f305: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x70f30au); f_0082e940();
    /* 0070f30a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f30b: mov ebx, dword ptr [edi + 0x78] */ r_ebx = R32((u32)(r_edi+0x78u));
    /* 0070f30e: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0070f311: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070f313: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070f315: jle 0x70f32f */ if ((fZ||fS!=fO)) goto L_0070f32f;
L_0070f317:; BB(0x0070f317);
    /* 0070f317: movzx ecx, word ptr [esp + edx*2] */ r_ecx = (u32)R16((u32)(r_esp+r_edx*2));
    /* 0070f31b: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0070f31e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0070f320: mov word ptr [eax + 2], bx */ W16((u32)(r_eax+0x2u), (u16)r_ebx);
    /* 0070f324: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070f327: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070f32a: cmp edx, dword ptr [edi + 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x78u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070f32d: jl 0x70f317 */ if ((fS!=fO)) goto L_0070f317;
L_0070f32f:; BB(0x0070f32f);
    /* 0070f32f: add esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070f335: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f336: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070f337: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070f338: ret 0xc */ FN_RET(0x0070f1c4); r_esp += 16; return;
}

void f_0070f33c(void) /* sub_70F33C */
{
    FN_ENTER(0x0070f33c);
    /* 0070f33c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0070f33f: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f342: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0070f345: ret  */ FN_RET(0x0070f33c); r_esp += 4; return;
}

void f_0070f348(void) /* sub_70F348 */
{
    FN_ENTER(0x0070f348);
    /* 0070f348: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f349: mov esi, ecx */ r_esi = r_ecx;
    /* 0070f34b: mov ecx, esi */ r_ecx = r_esi;
    /* 0070f34d: call 0x70ec6c */ r_esp -= 4; W32(r_esp, 0x70f352u); f_0070ec6c();
    /* 0070f352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f354: jne 0x70f38c */ if (!fZ) goto L_0070f38c;
L_0070f356:; BB(0x0070f356);
    /* 0070f356: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0070f359: mov dword ptr [esi + 0x2c], 4 */ W32((u32)(r_esi+0x2cu), 0x4u);
    /* 0070f360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f362: mov byte ptr [esi + 0x38], 0 */ W8((u32)(r_esi+0x38u), 0x0u);
    /* 0070f366: je 0x70f377 */ if (fZ) goto L_0070f377;
L_0070f368:; BB(0x0070f368);
    /* 0070f368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f369: call 0x5baa9c */ r_esp -= 4; W32(r_esp, 0x70f36eu); f_005baa9c();
    /* 0070f36e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f36f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070f371: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0070f374: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
L_0070f377:; BB(0x0070f377);
    /* 0070f377: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0070f37a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f37c: je 0x70f38c */ if (fZ) goto L_0070f38c;
L_0070f37e:; BB(0x0070f37e);
    /* 0070f37e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f37f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70f384u); f_0082e960();
    /* 0070f384: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f385: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
L_0070f38c:; BB(0x0070f38c);
    /* 0070f38c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070f38d: ret  */ FN_RET(0x0070f348); r_esp += 4; return;
}

void f_0070f390(void) /* sub_70F390 */
{
    FN_ENTER(0x0070f390);
    /* 0070f390: mov dword ptr [ecx + 0x2c], 4 */ W32((u32)(r_ecx+0x2cu), 0x4u);
    /* 0070f397: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f399: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0070f39c: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0070f39f: mov byte ptr [ecx + 0x38], al */ W8((u32)(r_ecx+0x38u), (u8)r_eax);
    /* 0070f3a2: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0070f3a5: ret  */ FN_RET(0x0070f390); r_esp += 4; return;
}

void f_0070f3a8(void) /* sub_70F3A8 */
{
    FN_ENTER(0x0070f3a8);
    /* 0070f3a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f3a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070f3ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070f3ad: call 0x70f3cc */ r_esp -= 4; W32(r_esp, 0x70f3b2u); f_0070f3cc();
    /* 0070f3b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070f3b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f3b8: jne 0x70f3be */ if (!fZ) goto L_0070f3be;
L_0070f3ba:; BB(0x0070f3ba);
    /* 0070f3ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f3bb: ret 4 */ FN_RET(0x0070f3a8); r_esp += 8; return;
L_0070f3be:; BB(0x0070f3be);
    /* 0070f3be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f3bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70f3c4u); f_005c2f74();
    /* 0070f3c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f3c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f3c6: ret 4 */ FN_RET(0x0070f3a8); r_esp += 8; return;
}

void f_0070f3cc(void) /* sub_70F3CC */
{
    FN_ENTER(0x0070f3cc);
    /* 0070f3cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070f3cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0070f3cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f3d1: push 0x8f0334 */ { u32 v = 0x8f0334u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f3d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070f3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f3dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070f3e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f3e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070f3ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070f3ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070f3f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070f3f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070f3f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070f3f9: mov dword ptr [ecx], 0xb3f058 */ W32((u32)(r_ecx), 0xb3f058u);
    /* 0070f3ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070f406: call 0x70e694 */ r_esp -= 4; W32(r_esp, 0x70f40bu); f_0070e694();
    /* 0070f40b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070f40e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070f415: mov esp, ebp */ r_esp = r_ebp;
    /* 0070f417: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070f418: ret  */ FN_RET(0x0070f3cc); r_esp += 4; return;
}

void f_0070f41c(void) /* sub_70F41C */
{
    FN_ENTER(0x0070f41c);
    /* 0070f41c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070f41d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070f41f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f421: push 0x8f035c */ { u32 v = 0x8f035cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f426: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070f42c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f42d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070f434: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f437: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070f43a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070f43d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070f440: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070f443: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f445: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0070f44c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70f451u); f_005caba4();
    /* 0070f451: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f452: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0070f455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f457: je 0x70f496 */ if (fZ) goto L_0070f496;
L_0070f459:; BB(0x0070f459);
    /* 0070f459: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070f460: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070f467: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f46a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f46d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f470: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070f473: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f479: call 0x70f49c */ r_esp -= 4; W32(r_esp, 0x70f47eu); f_0070f49c();
    /* 0070f47e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070f481: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0070f488:; BB(0x0070f488);
    /* 0070f488: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070f48b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070f492: mov esp, ebp */ r_esp = r_ebp;
    /* 0070f494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070f495: ret  */ FN_RET(0x0070f41c); r_esp += 4; return;
L_0070f496:; BB(0x0070f496);
    /* 0070f496: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f498: jmp 0x70f488 */ goto L_0070f488;
}

void f_0070f49c(void) /* sub_70F49C */
{
    FN_ENTER(0x0070f49c);
    /* 0070f49c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070f49d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070f49f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f4a1: push 0x8f0378 */ { u32 v = 0x8f0378u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f4a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070f4ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f4ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070f4b4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f4b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070f4ba: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0070f4bd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0070f4c0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0070f4c3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0070f4c6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0070f4c9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0070f4cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0070f4cf: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0070f4d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f4d4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f4d7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f4da: call 0x70ea0c */ r_esp -= 4; W32(r_esp, 0x70f4dfu); f_0070ea0c();
    /* 0070f4df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070f4e6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070f4e9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0070f4ec: mov dword ptr [ecx], 0xb3f058 */ W32((u32)(r_ecx), 0xb3f058u);
    /* 0070f4f2: mov eax, dword ptr [0x9f0bac] */ r_eax = R32((u32)(0x9f0bacu));
    /* 0070f4f7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f4f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f4fa: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0070f4fd: call 0x70ebc4 */ r_esp -= 4; W32(r_esp, 0x70f502u); f_0070ebc4();
    /* 0070f502: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070f505: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0070f508: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0070f50b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f50c: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x70f511u); f_00814afc();
    /* 0070f511: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f512: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070f515: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f517: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0070f51a: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0070f51d: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0070f522: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 0070f525: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 0070f528: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070f52b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070f532: mov esp, ebp */ r_esp = r_ebp;
    /* 0070f534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070f535: ret 0x10 */ FN_RET(0x0070f49c); r_esp += 20; return;
}

void f_0070f538(void) /* sub_70F538 */
{
    FN_ENTER(0x0070f538);
    /* 0070f538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f539: mov edi, ecx */ r_edi = r_ecx;
    /* 0070f53b: mov ecx, dword ptr [edi + 0x5c] */ r_ecx = R32((u32)(r_edi+0x5cu));
    /* 0070f53e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f540: je 0x70f555 */ if (fZ) goto L_0070f555;
L_0070f542:; BB(0x0070f542);
    /* 0070f542: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070f545: call 0x70f0f4 */ r_esp -= 4; W32(r_esp, 0x70f54au); f_0070f0f4();
    /* 0070f54a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f54c: je 0x70f555 */ if (fZ) goto L_0070f555;
L_0070f54e:; BB(0x0070f54e);
    /* 0070f54e: mov dword ptr [edi + 0x60], 1 */ W32((u32)(r_edi+0x60u), 0x1u);
L_0070f555:; BB(0x0070f555);
    /* 0070f555: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0070f55a: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070f560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f561: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0070f566: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x70f56bu); f_007c1160();
    /* 0070f56b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f56d: jne 0x70f592 */ if (!fZ) goto L_0070f592;
L_0070f56f:; BB(0x0070f56f);
    /* 0070f56f: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0070f572: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 0070f575: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f577: je 0x70f581 */ if (fZ) goto L_0070f581;
L_0070f579:; BB(0x0070f579);
    /* 0070f579: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070f57c: mov dword ptr [edi + 0x64], edx */ W32((u32)(r_edi+0x64u), r_edx);
    /* 0070f57f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070f580: ret  */ FN_RET(0x0070f538); r_esp += 4; return;
L_0070f581:; BB(0x0070f581);
    /* 0070f581: mov edx, dword ptr [edi + 0x6c] */ r_edx = R32((u32)(r_edi+0x6cu));
    /* 0070f584: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0070f586: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f587: call 0x8153bc */ r_esp -= 4; W32(r_esp, 0x70f58cu); f_008153bc();
    /* 0070f58c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f58d: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0070f590: jmp 0x70f579 */ goto L_0070f579;
L_0070f592:; BB(0x0070f592);
    /* 0070f592: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f594: call 0x8153bc */ r_esp -= 4; W32(r_esp, 0x70f599u); f_008153bc();
    /* 0070f599: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f59a: mov dword ptr [edi + 0x60], 1 */ W32((u32)(r_edi+0x60u), 0x1u);
    /* 0070f5a1: jmp 0x70f56f */ goto L_0070f56f;
}

void f_0070f5a4(void) /* sub_70F5A4 */
{
    FN_ENTER(0x0070f5a4);
    /* 0070f5a4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070f5a8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0070f5ac: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0070f5af: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0070f5b2: ret 8 */ FN_RET(0x0070f5a4); r_esp += 12; return;
}

void f_0070f5b8(void) /* sub_70F5B8 */
{
    FN_ENTER(0x0070f5b8);
    /* 0070f5b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f5b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070f5bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070f5bd: call 0x70f5dc */ r_esp -= 4; W32(r_esp, 0x70f5c2u); f_0070f5dc();
    /* 0070f5c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070f5c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f5c8: jne 0x70f5ce */ if (!fZ) goto L_0070f5ce;
L_0070f5ca:; BB(0x0070f5ca);
    /* 0070f5ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f5cb: ret 4 */ FN_RET(0x0070f5b8); r_esp += 8; return;
L_0070f5ce:; BB(0x0070f5ce);
    /* 0070f5ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f5cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70f5d4u); f_005c2f74();
    /* 0070f5d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f5d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f5d6: ret 4 */ FN_RET(0x0070f5b8); r_esp += 8; return;
}

void f_0070f5dc(void) /* sub_70F5DC */
{
    FN_ENTER(0x0070f5dc);
    /* 0070f5dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070f5dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0070f5df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f5e1: push 0x8f0394 */ { u32 v = 0x8f0394u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f5e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070f5ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f5ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070f5f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f5f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070f5fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070f5fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070f600: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070f603: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070f606: mov dword ptr [ecx], 0xb3f0e0 */ W32((u32)(r_ecx), 0xb3f0e0u);
    /* 0070f60c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070f613: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f618: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070f61b: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070f61e: mov eax, 4 */ r_eax = 0x4u;
    /* 0070f623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f625: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f626: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x70f62bu); f_008586d6();
    /* 0070f62b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070f632: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070f635: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x70f63au); f_00710c28();
    /* 0070f63a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070f63d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070f644: mov esp, ebp */ r_esp = r_ebp;
    /* 0070f646: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070f647: ret  */ FN_RET(0x0070f5dc); r_esp += 4; return;
}

void f_0070f648(void) /* sub_70F648 */
{
    FN_ENTER(0x0070f648);
    /* 0070f648: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f649: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070f64b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070f64d: call 0x70f66c */ r_esp -= 4; W32(r_esp, 0x70f652u); f_0070f66c();
    /* 0070f652: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070f656: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f658: jne 0x70f65e */ if (!fZ) goto L_0070f65e;
L_0070f65a:; BB(0x0070f65a);
    /* 0070f65a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f65b: ret 4 */ FN_RET(0x0070f648); r_esp += 8; return;
L_0070f65e:; BB(0x0070f65e);
    /* 0070f65e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f65f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70f664u); f_005c2f74();
    /* 0070f664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f665: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f666: ret 4 */ FN_RET(0x0070f648); r_esp += 8; return;
}

void f_0070f66c(void) /* sub_70F66C */
{
    FN_ENTER(0x0070f66c);
    /* 0070f66c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070f66d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070f66f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f671: push 0x8f03b0 */ { u32 v = 0x8f03b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f676: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070f67c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f67d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070f684: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f687: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070f68a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070f68d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070f690: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070f693: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070f696: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070f699: mov dword ptr [ecx], 0xb3f0f0 */ W32((u32)(r_ecx), 0xb3f0f0u);
    /* 0070f69f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070f6a6: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x70f6abu); f_00710c28();
    /* 0070f6ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070f6ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070f6b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0070f6b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070f6b8: ret  */ FN_RET(0x0070f66c); r_esp += 4; return;
}

void f_0070f6bc(void) /* sub_70F6BC */
{
    FN_ENTER(0x0070f6bc);
    /* 0070f6bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070f6bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0070f6bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f6c1: push 0x8f03cc */ { u32 v = 0x8f03ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0070f6c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070f6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f6cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070f6d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f6d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070f6da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0070f6dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0070f6e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0070f6e3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0070f6e6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0070f6e9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f6eb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x70f6f0u); f_0073ec50();
    /* 0070f6f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f6f1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070f6f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f6f5: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0070f6f8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0070f6fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f6fc: push 0x9f1630 */ { u32 v = 0x9f1630u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f701: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x70f706u); f_00710d30();
    /* 0070f706: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070f70d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f712: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f717: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070f71a: mov dword ptr [edx], 0xb3f0e0 */ W32((u32)(r_edx), 0xb3f0e0u);
    /* 0070f720: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070f723: mov eax, 4 */ r_eax = 0x4u;
    /* 0070f728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f72b: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x70f730u); f_00858736();
    /* 0070f730: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070f733: mov eax, dword ptr [0x9f15cc] */ r_eax = R32((u32)(0x9f15ccu));
    /* 0070f738: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0070f73b: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0070f740: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070f743: jle 0x70f755 */ if ((fZ||fS!=fO)) goto L_0070f755;
L_0070f745:; BB(0x0070f745);
    /* 0070f745: mov dword ptr [ebx + 0x74], 0x3f000000 */ W32((u32)(r_ebx+0x74u), 0x3f000000u);
    /* 0070f74c: mov dword ptr [ebx + 0x78], 0x3f000000 */ W32((u32)(r_ebx+0x78u), 0x3f000000u);
    /* 0070f753: jmp 0x70f765 */ goto L_0070f765;
L_0070f755:; BB(0x0070f755);
    /* 0070f755: je 0x70f793 */ if (fZ) goto L_0070f793;
L_0070f757:; BB(0x0070f757);
    /* 0070f757: mov dword ptr [ebx + 0x74], 0x3f800000 */ W32((u32)(r_ebx+0x74u), 0x3f800000u);
    /* 0070f75e: mov dword ptr [ebx + 0x78], 0x3f800000 */ W32((u32)(r_ebx+0x78u), 0x3f800000u);
L_0070f765:; BB(0x0070f765);
    /* 0070f765: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0070f768: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070f76a: mov byte ptr [ebx + 0x70], cl */ W8((u32)(r_ebx+0x70u), (u8)r_ecx);
    /* 0070f76d: mov word ptr [ebx + 0x20], dx */ W16((u32)(r_ebx+0x20u), (u16)r_edx);
    /* 0070f771: mov dword ptr [ebx + 0x58], 0xbf800000 */ W32((u32)(r_ebx+0x58u), 0xbf800000u);
    /* 0070f778: mov byte ptr [ebx + 0x60], cl */ W8((u32)(r_ebx+0x60u), (u8)r_ecx);
    /* 0070f77b: mov byte ptr [ebx + 0x61], cl */ W8((u32)(r_ebx+0x61u), (u8)r_ecx);
    /* 0070f77e: mov eax, ebx */ r_eax = r_ebx;
    /* 0070f780: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0070f783: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070f786: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070f78d: mov esp, ebp */ r_esp = r_ebp;
    /* 0070f78f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070f790: ret 4 */ FN_RET(0x0070f6bc); r_esp += 8; return;
L_0070f793:; BB(0x0070f793);
    /* 0070f793: mov dword ptr [ebx + 0x74], 0x3f333333 */ W32((u32)(r_ebx+0x74u), 0x3f333333u);
    /* 0070f79a: mov dword ptr [ebx + 0x78], 0x3f333333 */ W32((u32)(r_ebx+0x78u), 0x3f333333u);
    /* 0070f7a1: jmp 0x70f765 */ goto L_0070f765;
}

void f_0070f7a4(void) /* sub_70F7A4 */
{
    FN_ENTER(0x0070f7a4);
    /* 0070f7a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f7a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070f7a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070f7a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f7a8: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070f7ab: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070f7ad: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f7b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f7b2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70f7b7u); f_0068d5a8();
    /* 0070f7b7: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0070f7bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070f7be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f7c0: je 0x70fdb7 */ if (fZ) goto L_0070fdb7;
L_0070f7c6:; BB(0x0070f7c6);
    /* 0070f7c6: mov ecx, eax */ r_ecx = r_eax;
    /* 0070f7c8: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x70f7cdu); f_0068aa24();
    /* 0070f7cd: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0070f7d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f7d3: je 0x70fdb7 */ if (fZ) goto L_0070fdb7;
L_0070f7d9:; BB(0x0070f7d9);
    /* 0070f7d9: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0070f7dc: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070f7de: jne 0x70f7e7 */ if (!fZ) goto L_0070f7e7;
L_0070f7e0:; BB(0x0070f7e0);
    /* 0070f7e0: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
L_0070f7e7:; BB(0x0070f7e7);
    /* 0070f7e7: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x70f7ecu); f_007917b8();
    /* 0070f7ec: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0070f7ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f7f1: je 0x70f883 */ if (fZ) goto L_0070f883;
L_0070f7f7:; BB(0x0070f7f7);
    /* 0070f7f7: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f7fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f7fc: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x70f801u); f_00719140();
    /* 0070f801: mov ebp, eax */ r_ebp = r_eax;
    /* 0070f803: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f805: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f80a: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x70f80fu); f_007be19c();
    /* 0070f80f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070f812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f814: je 0x70f81e */ if (fZ) goto L_0070f81e;
L_0070f816:; BB(0x0070f816);
    /* 0070f816: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 0070f81c: jmp 0x70f824 */ goto L_0070f824;
L_0070f81e:; BB(0x0070f81e);
    /* 0070f81e: mov edx, dword ptr [0xa0f688] */ r_edx = R32((u32)(0xa0f688u));
L_0070f824:; BB(0x0070f824);
    /* 0070f824: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f825: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 0070f829: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070f82b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070f82d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070f82f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0070f836: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x70f83bu); f_007c1100();
    /* 0070f83b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f83d: jne 0x70f84b */ if (!fZ) goto L_0070f84b;
L_0070f83f:; BB(0x0070f83f);
    /* 0070f83f: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f841: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70f846u); f_007bfce4();
    /* 0070f846: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f849: je 0x70f84f */ if (fZ) goto L_0070f84f;
L_0070f84b:; BB(0x0070f84b);
    /* 0070f84b: mov byte ptr [ebx + 0x70], 3 */ W8((u32)(r_ebx+0x70u), 0x3u);
L_0070f84f:; BB(0x0070f84f);
    /* 0070f84f: mov ebp, dword ptr [ebx + 0x28] */ r_ebp = R32((u32)(r_ebx+0x28u));
    /* 0070f852: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0070f855: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f859: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0070f85d: call 0x7100b0 */ r_esp -= 4; W32(r_esp, 0x70f862u); f_007100b0();
    /* 0070f862: movsx eax, byte ptr [ebx + 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x70u));
    /* 0070f866: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0070f86a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070f86c: jle 0x70fdc8 */ if ((fZ||fS!=fO)) goto L_0070fdc8;
L_0070f872:; BB(0x0070f872);
    /* 0070f872: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0070f876: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070f879: mov byte ptr [ebx + 0x70], al */ W8((u32)(r_ebx+0x70u), (u8)r_eax);
    /* 0070f87c: mov dword ptr [edx + 0x2c], 0xffffffff */ W32((u32)(r_edx+0x2cu), 0xffffffffu);
L_0070f883:; BB(0x0070f883);
    /* 0070f883: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070f885: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f888: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0070f88c: call 0x68cdb8 */ r_esp -= 4; W32(r_esp, 0x70f891u); f_0068cdb8();
    /* 0070f891: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0070f895: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0070f898: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0070f89c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f89e: jne 0x70f971 */ if (!fZ) goto L_0070f971;
L_0070f8a4:; BB(0x0070f8a4);
    /* 0070f8a4: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070f8a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070f8aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f8ac: jne 0x70f8b3 */ if (!fZ) goto L_0070f8b3;
L_0070f8ae:; BB(0x0070f8ae);
    /* 0070f8ae: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0070f8b1: jmp 0x70f8b6 */ goto L_0070f8b6;
L_0070f8b3:; BB(0x0070f8b3);
    /* 0070f8b3: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_0070f8b6:; BB(0x0070f8b6);
    /* 0070f8b6: movzx eax, byte ptr [eax + 4] */ r_eax = (u32)R8((u32)(r_eax+0x4u));
    /* 0070f8ba: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0070f8be: jne 0x70f8c9 */ if (!fZ) goto L_0070f8c9;
L_0070f8c0:; BB(0x0070f8c0);
    /* 0070f8c0: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070f8c4: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0070f8c7: jmp 0x70f8d0 */ goto L_0070f8d0;
L_0070f8c9:; BB(0x0070f8c9);
    /* 0070f8c9: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070f8cd: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_0070f8d0:; BB(0x0070f8d0);
    /* 0070f8d0: movzx eax, byte ptr [eax + 5] */ r_eax = (u32)R8((u32)(r_eax+0x5u));
    /* 0070f8d4: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f8d8: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0070f8dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f8dd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70f8e2u); f_0068d5a8();
    /* 0070f8e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f8e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f8e5: je 0x70f9fb */ if (fZ) goto L_0070f9fb;
L_0070f8eb:; BB(0x0070f8eb);
    /* 0070f8eb: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0070f8ee: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0070f8f0: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0070f8f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f8f6: mov ecx, eax */ r_ecx = r_eax;
    /* 0070f8f8: call 0x68ce58 */ r_esp -= 4; W32(r_esp, 0x70f8fdu); f_0068ce58();
    /* 0070f8fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f8ff: je 0x70f90c */ if (fZ) goto L_0070f90c;
L_0070f901:; BB(0x0070f901);
    /* 0070f901: mov eax, ebp */ r_eax = r_ebp;
    /* 0070f903: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070f90a: jmp 0x70f915 */ goto L_0070f915;
L_0070f90c:; BB(0x0070f90c);
    /* 0070f90c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070f90e: mov dword ptr [eax + 0x2c], 0xff404040 */ W32((u32)(r_eax+0x2cu), 0xff404040u);
L_0070f915:; BB(0x0070f915);
    /* 0070f915: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070f919: mov edx, ebp */ r_edx = r_ebp;
    /* 0070f91b: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0070f91f: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0070f922: movsx ebp, word ptr [ebx + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f926: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0070f92b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0070f92e: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0070f932: call 0x70fde5 */ r_esp -= 4; W32(r_esp, 0x70f937u); f_0070fde5();
    /* 0070f937: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0070f93b: movzx ebp, byte ptr [ebx + 0x60] */ r_ebp = (u32)R8((u32)(r_ebx+0x60u));
    /* 0070f93f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f941: jne 0x70f953 */ if (!fZ) goto L_0070f953;
L_0070f943:; BB(0x0070f943);
    /* 0070f943: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070f947: movzx ebp, byte ptr [ebx + 0x61] */ r_ebp = (u32)R8((u32)(r_ebx+0x61u));
    /* 0070f94b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f94d: je 0x70f9fb */ if (fZ) goto L_0070f9fb;
L_0070f953:; BB(0x0070f953);
    /* 0070f953: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0070f957: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070f95b: mov ecx, eax */ r_ecx = r_eax;
    /* 0070f95d: mov byte ptr [ebx + 0x60], dl */ W8((u32)(r_ebx+0x60u), (u8)r_edx);
    /* 0070f960: mov byte ptr [ebx + 0x61], al */ W8((u32)(r_ebx+0x61u), (u8)r_eax);
    /* 0070f963: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070f967: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70f96cu); f_0070ff56();
    /* 0070f96c: jmp 0x70f9fb */ goto L_0070f9fb;
L_0070f971:; BB(0x0070f971);
    /* 0070f971: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f976: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70f97bu); f_0068d5a8();
    /* 0070f97b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070f97c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f97e: je 0x70f9fb */ if (fZ) goto L_0070f9fb;
L_0070f980:; BB(0x0070f980);
    /* 0070f980: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0070f983: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0070f985: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0070f989: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f98b: mov ecx, eax */ r_ecx = r_eax;
    /* 0070f98d: call 0x68ce58 */ r_esp -= 4; W32(r_esp, 0x70f992u); f_0068ce58();
    /* 0070f992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f994: je 0x70f9a1 */ if (fZ) goto L_0070f9a1;
L_0070f996:; BB(0x0070f996);
    /* 0070f996: mov eax, ebp */ r_eax = r_ebp;
    /* 0070f998: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070f99f: jmp 0x70f9aa */ goto L_0070f9aa;
L_0070f9a1:; BB(0x0070f9a1);
    /* 0070f9a1: mov eax, ebp */ r_eax = r_ebp;
    /* 0070f9a3: mov dword ptr [eax + 0x2c], 0xff404040 */ W32((u32)(r_eax+0x2cu), 0xff404040u);
L_0070f9aa:; BB(0x0070f9aa);
    /* 0070f9aa: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070f9ae: mov edx, ebp */ r_edx = r_ebp;
    /* 0070f9b0: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0070f9b3: movsx ebp, word ptr [ebx + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070f9b7: mov ecx, 7 */ r_ecx = 0x7u;
    /* 0070f9bc: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0070f9c1: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0070f9c4: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0070f9c8: call 0x70fde5 */ r_esp -= 4; W32(r_esp, 0x70f9cdu); f_0070fde5();
    /* 0070f9cd: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 0070f9d1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f9d4: jne 0x70f9e2 */ if (!fZ) goto L_0070f9e2;
L_0070f9d6:; BB(0x0070f9d6);
    /* 0070f9d6: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0070f9da: movzx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)R8((u32)(r_ebx+0x61u));
    /* 0070f9de: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070f9e0: je 0x70f9fb */ if (fZ) goto L_0070f9fb;
L_0070f9e2:; BB(0x0070f9e2);
    /* 0070f9e2: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0070f9e6: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070f9ea: mov byte ptr [ebx + 0x60], 7 */ W8((u32)(r_ebx+0x60u), 0x7u);
    /* 0070f9ee: mov byte ptr [ebx + 0x61], cl */ W8((u32)(r_ebx+0x61u), (u8)r_ecx);
    /* 0070f9f1: mov edx, 7 */ r_edx = 0x7u;
    /* 0070f9f6: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70f9fbu); f_0070ff56();
L_0070f9fb:; BB(0x0070f9fb);
    /* 0070f9fb: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 0070f9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fa00: call 0x6a9f60 */ r_esp -= 4; W32(r_esp, 0x70fa05u); f_006a9f60();
    /* 0070fa05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fa06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fa08: je 0x70fabe */ if (fZ) goto L_0070fabe;
L_0070fa0e:; BB(0x0070fa0e);
    /* 0070fa0e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0070fa12: mov edx, dword ptr [eax + 0x538] */ r_edx = R32((u32)(r_eax+0x538u));
    /* 0070fa18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fa1a: jne 0x70fa23 */ if (!fZ) goto L_0070fa23;
L_0070fa1c:; BB(0x0070fa1c);
    /* 0070fa1c: mov eax, 1 */ r_eax = 0x1u;
    /* 0070fa21: jmp 0x70fa25 */ goto L_0070fa25;
L_0070fa23:; BB(0x0070fa23);
    /* 0070fa23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0070fa25:; BB(0x0070fa25);
    /* 0070fa25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fa27: je 0x70fabe */ if (fZ) goto L_0070fabe;
L_0070fa2d:; BB(0x0070fa2d);
    /* 0070fa2d: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fa31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fa32: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fa37u); f_0068d5a8();
    /* 0070fa37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fa38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fa3a: je 0x70fb83 */ if (fZ) goto L_0070fb83;
L_0070fa40:; BB(0x0070fa40);
    /* 0070fa40: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fa43: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0070fa46: movzx ebp, word ptr [ebx + 0x20] */ r_ebp = (u32)R16((u32)(r_ebx+0x20u));
    /* 0070fa4a: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0070fa4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070fa4f: call 0x6a9fe8 */ r_esp -= 4; W32(r_esp, 0x70fa54u); f_006a9fe8();
    /* 0070fa54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fa55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fa57: je 0x70fa66 */ if (fZ) goto L_0070fa66;
L_0070fa59:; BB(0x0070fa59);
    /* 0070fa59: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070fa5d: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fa64: jmp 0x70fa71 */ goto L_0070fa71;
L_0070fa66:; BB(0x0070fa66);
    /* 0070fa66: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070fa6a: mov dword ptr [eax + 0x2c], 0xff404040 */ W32((u32)(r_eax+0x2cu), 0xff404040u);
L_0070fa71:; BB(0x0070fa71);
    /* 0070fa71: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fa74: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 0070fa77: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0070fa7b: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070fa81: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0070fa85: movzx esi, byte ptr [ebx + 0x64] */ r_esi = (u32)R8((u32)(r_ebx+0x64u));
    /* 0070fa89: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fa8c: jne 0x70fa9b */ if (!fZ) goto L_0070fa9b;
L_0070fa8e:; BB(0x0070fa8e);
    /* 0070fa8e: movzx eax, byte ptr [ebx + 0x65] */ r_eax = (u32)R8((u32)(r_ebx+0x65u));
    /* 0070fa92: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fa95: je 0x70fb83 */ if (fZ) goto L_0070fb83;
L_0070fa9b:; BB(0x0070fa9b);
    /* 0070fa9b: mov eax, 7 */ r_eax = 0x7u;
    /* 0070faa0: mov byte ptr [ebx + 0x64], al */ W8((u32)(r_ebx+0x64u), (u8)r_eax);
    /* 0070faa3: mov byte ptr [ebx + 0x65], al */ W8((u32)(r_ebx+0x65u), (u8)r_eax);
    /* 0070faa6: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070faaa: mov edx, 7 */ r_edx = 0x7u;
    /* 0070faaf: mov ecx, 7 */ r_ecx = 0x7u;
    /* 0070fab4: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fab9u); f_0070ff56();
    /* 0070fab9: jmp 0x70fb83 */ goto L_0070fb83;
L_0070fabe:; BB(0x0070fabe);
    /* 0070fabe: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070fac2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070fac4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fac6: jne 0x70facd */ if (!fZ) goto L_0070facd;
L_0070fac8:; BB(0x0070fac8);
    /* 0070fac8: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0070facb: jmp 0x70fad0 */ goto L_0070fad0;
L_0070facd:; BB(0x0070facd);
    /* 0070facd: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_0070fad0:; BB(0x0070fad0);
    /* 0070fad0: movzx eax, byte ptr [eax + 8] */ r_eax = (u32)R8((u32)(r_eax+0x8u));
    /* 0070fad4: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0070fad8: jne 0x70fae3 */ if (!fZ) goto L_0070fae3;
L_0070fada:; BB(0x0070fada);
    /* 0070fada: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070fade: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0070fae1: jmp 0x70faea */ goto L_0070faea;
L_0070fae3:; BB(0x0070fae3);
    /* 0070fae3: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070fae7: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_0070faea:; BB(0x0070faea);
    /* 0070faea: movzx eax, byte ptr [eax + 9] */ r_eax = (u32)R8((u32)(r_eax+0x9u));
    /* 0070faee: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070faf2: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0070faf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070faf7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fafcu); f_0068d5a8();
    /* 0070fafc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fafd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070faff: je 0x70fb83 */ if (fZ) goto L_0070fb83;
L_0070fb05:; BB(0x0070fb05);
    /* 0070fb05: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0070fb08: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0070fb0b: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0070fb0f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070fb11: mov ecx, eax */ r_ecx = r_eax;
    /* 0070fb13: call 0x68ce58 */ r_esp -= 4; W32(r_esp, 0x70fb18u); f_0068ce58();
    /* 0070fb18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fb1a: je 0x70fb27 */ if (fZ) goto L_0070fb27;
L_0070fb1c:; BB(0x0070fb1c);
    /* 0070fb1c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fb1e: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fb25: jmp 0x70fb30 */ goto L_0070fb30;
L_0070fb27:; BB(0x0070fb27);
    /* 0070fb27: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fb29: mov dword ptr [eax + 0x2c], 0xff404040 */ W32((u32)(r_eax+0x2cu), 0xff404040u);
L_0070fb30:; BB(0x0070fb30);
    /* 0070fb30: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0070fb34: mov edx, ebp */ r_edx = r_ebp;
    /* 0070fb36: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0070fb3a: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0070fb3d: movsx ebp, word ptr [ebx + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fb41: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0070fb46: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0070fb49: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0070fb4d: call 0x70fde5 */ r_esp -= 4; W32(r_esp, 0x70fb52u); f_0070fde5();
    /* 0070fb52: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070fb56: movzx ebp, byte ptr [ebx + 0x64] */ r_ebp = (u32)R8((u32)(r_ebx+0x64u));
    /* 0070fb5a: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fb5c: jne 0x70fb6a */ if (!fZ) goto L_0070fb6a;
L_0070fb5e:; BB(0x0070fb5e);
    /* 0070fb5e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0070fb62: movzx ebp, byte ptr [ebx + 0x65] */ r_ebp = (u32)R8((u32)(r_ebx+0x65u));
    /* 0070fb66: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fb68: je 0x70fb83 */ if (fZ) goto L_0070fb83;
L_0070fb6a:; BB(0x0070fb6a);
    /* 0070fb6a: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0070fb6e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0070fb72: mov ecx, eax */ r_ecx = r_eax;
    /* 0070fb74: mov byte ptr [ebx + 0x64], dl */ W8((u32)(r_ebx+0x64u), (u8)r_edx);
    /* 0070fb77: mov byte ptr [ebx + 0x65], al */ W8((u32)(r_ebx+0x65u), (u8)r_eax);
    /* 0070fb7a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070fb7e: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fb83u); f_0070ff56();
L_0070fb83:; BB(0x0070fb83);
    /* 0070fb83: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070fb87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070fb89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fb8b: jne 0x70fb92 */ if (!fZ) goto L_0070fb92;
L_0070fb8d:; BB(0x0070fb8d);
    /* 0070fb8d: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0070fb90: jmp 0x70fb95 */ goto L_0070fb95;
L_0070fb92:; BB(0x0070fb92);
    /* 0070fb92: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_0070fb95:; BB(0x0070fb95);
    /* 0070fb95: movzx eax, byte ptr [eax + 0xc] */ r_eax = (u32)R8((u32)(r_eax+0xcu));
    /* 0070fb99: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0070fb9d: jne 0x70fba6 */ if (!fZ) goto L_0070fba6;
L_0070fb9f:; BB(0x0070fb9f);
    /* 0070fb9f: add dword ptr [esp + 0x3c], 4 */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070fba4: jmp 0x70fbab */ goto L_0070fbab;
L_0070fba6:; BB(0x0070fba6);
    /* 0070fba6: add dword ptr [esp + 0x3c], 0x3c */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0070fbab:; BB(0x0070fbab);
    /* 0070fbab: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0070fbaf: movzx eax, byte ptr [ebp + 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xdu));
    /* 0070fbb3: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fbb7: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0070fbbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fbbc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fbc1u); f_0068d5a8();
    /* 0070fbc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fbc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fbc4: je 0x70fc42 */ if (fZ) goto L_0070fc42;
L_0070fbc6:; BB(0x0070fbc6);
    /* 0070fbc6: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0070fbc9: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 0070fbcc: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0070fbd0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0070fbd2: mov ecx, eax */ r_ecx = r_eax;
    /* 0070fbd4: call 0x68ce58 */ r_esp -= 4; W32(r_esp, 0x70fbd9u); f_0068ce58();
    /* 0070fbd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fbdb: je 0x70fbe8 */ if (fZ) goto L_0070fbe8;
L_0070fbdd:; BB(0x0070fbdd);
    /* 0070fbdd: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fbdf: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fbe6: jmp 0x70fbf1 */ goto L_0070fbf1;
L_0070fbe8:; BB(0x0070fbe8);
    /* 0070fbe8: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fbea: mov dword ptr [eax + 0x2c], 0xff404040 */ W32((u32)(r_eax+0x2cu), 0xff404040u);
L_0070fbf1:; BB(0x0070fbf1);
    /* 0070fbf1: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070fbf5: mov edx, ebp */ r_edx = r_ebp;
    /* 0070fbf7: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0070fbfb: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0070fbfe: movsx ebp, word ptr [ebx + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fc02: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0070fc07: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0070fc0a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0070fc0e: call 0x70fde5 */ r_esp -= 4; W32(r_esp, 0x70fc13u); f_0070fde5();
    /* 0070fc13: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0070fc17: movzx ebp, byte ptr [ebx + 0x68] */ r_ebp = (u32)R8((u32)(r_ebx+0x68u));
    /* 0070fc1b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc1d: jne 0x70fc2b */ if (!fZ) goto L_0070fc2b;
L_0070fc1f:; BB(0x0070fc1f);
    /* 0070fc1f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070fc23: movzx ebp, byte ptr [ebx + 0x69] */ r_ebp = (u32)R8((u32)(r_ebx+0x69u));
    /* 0070fc27: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc29: je 0x70fc42 */ if (fZ) goto L_0070fc42;
L_0070fc2b:; BB(0x0070fc2b);
    /* 0070fc2b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0070fc2f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0070fc33: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070fc37: mov byte ptr [ebx + 0x68], dl */ W8((u32)(r_ebx+0x68u), (u8)r_edx);
    /* 0070fc3a: mov byte ptr [ebx + 0x69], cl */ W8((u32)(r_ebx+0x69u), (u8)r_ecx);
    /* 0070fc3d: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fc42u); f_0070ff56();
L_0070fc42:; BB(0x0070fc42);
    /* 0070fc42: call 0x69b6a8 */ r_esp -= 4; W32(r_esp, 0x70fc47u); f_0069b6a8();
    /* 0070fc47: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0070fc4a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc4f: je 0x70fdbf */ if (fZ) goto L_0070fdbf;
L_0070fc55:; BB(0x0070fc55);
    /* 0070fc55: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fc59: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc5b: jne 0x70fd29 */ if (!fZ) goto L_0070fd29;
L_0070fc61:; BB(0x0070fc61);
    /* 0070fc61: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0070fc65: mov ebp, dword ptr [eax + 0x538] */ r_ebp = R32((u32)(r_eax+0x538u));
    /* 0070fc6b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc6d: jne 0x70fc76 */ if (!fZ) goto L_0070fc76;
L_0070fc6f:; BB(0x0070fc6f);
    /* 0070fc6f: mov eax, 1 */ r_eax = 0x1u;
    /* 0070fc74: jmp 0x70fc78 */ goto L_0070fc78;
L_0070fc76:; BB(0x0070fc76);
    /* 0070fc76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0070fc78:; BB(0x0070fc78);
    /* 0070fc78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc7a: je 0x70fcde */ if (fZ) goto L_0070fcde;
L_0070fc7c:; BB(0x0070fc7c);
    /* 0070fc7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fc7d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fc82u); f_0068d5a8();
    /* 0070fc82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fc83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc85: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fc8b:; BB(0x0070fc8b);
    /* 0070fc8b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fc8e: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 0070fc91: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x70fc96u); f_006dc358();
    /* 0070fc96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc98: je 0x70fca3 */ if (fZ) goto L_0070fca3;
L_0070fc9a:; BB(0x0070fc9a);
    /* 0070fc9a: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
    /* 0070fca1: jmp 0x70fcaa */ goto L_0070fcaa;
L_0070fca3:; BB(0x0070fca3);
    /* 0070fca3: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
L_0070fcaa:; BB(0x0070fcaa);
    /* 0070fcaa: movzx edx, byte ptr [ebx + 0x6c] */ r_edx = (u32)R8((u32)(r_ebx+0x6cu));
    /* 0070fcae: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fcb1: jne 0x70fcc0 */ if (!fZ) goto L_0070fcc0;
L_0070fcb3:; BB(0x0070fcb3);
    /* 0070fcb3: movzx edx, byte ptr [ebx + 0x6d] */ r_edx = (u32)R8((u32)(r_ebx+0x6du));
    /* 0070fcb7: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fcba: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fcc0:; BB(0x0070fcc0);
    /* 0070fcc0: mov byte ptr [ebx + 0x6c], 7 */ W8((u32)(r_ebx+0x6cu), 0x7u);
    /* 0070fcc4: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fcc6: mov edx, 7 */ r_edx = 0x7u;
    /* 0070fccb: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0070fcd0: mov byte ptr [ebx + 0x6d], 8 */ W8((u32)(r_ebx+0x6du), 0x8u);
    /* 0070fcd4: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fcd9u); f_0070ff56();
    /* 0070fcd9: jmp 0x70fd9e */ goto L_0070fd9e;
L_0070fcde:; BB(0x0070fcde);
    /* 0070fcde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fcdf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fce4u); f_0068d5a8();
    /* 0070fce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fce5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fce7: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fced:; BB(0x0070fced);
    /* 0070fced: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fcf0: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0070fcf3: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fcfa: movzx edx, byte ptr [ebx + 0x6c] */ r_edx = (u32)R8((u32)(r_ebx+0x6cu));
    /* 0070fcfe: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd01: jne 0x70fd10 */ if (!fZ) goto L_0070fd10;
L_0070fd03:; BB(0x0070fd03);
    /* 0070fd03: movzx edx, byte ptr [ebx + 0x6d] */ r_edx = (u32)R8((u32)(r_ebx+0x6du));
    /* 0070fd07: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd0a: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fd10:; BB(0x0070fd10);
    /* 0070fd10: mov byte ptr [ebx + 0x6c], 7 */ W8((u32)(r_ebx+0x6cu), 0x7u);
    /* 0070fd14: mov edx, 7 */ r_edx = 0x7u;
    /* 0070fd19: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0070fd1e: mov byte ptr [ebx + 0x6d], 9 */ W8((u32)(r_ebx+0x6du), 0x9u);
    /* 0070fd22: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fd27u); f_0070ff56();
    /* 0070fd27: jmp 0x70fd9e */ goto L_0070fd9e;
L_0070fd29:; BB(0x0070fd29);
    /* 0070fd29: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0070fd2d: fld dword ptr [ebp + 0x520] */ FPUSH(R_F32((u32)(r_ebp+0x520u)));
    /* 0070fd33: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0070fd37: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0070fd3c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070fd41: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0070fd45: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0070fd49: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070fd4d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0070fd51: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0070fd55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070fd57: jle 0x70fc61 */ if ((fZ||fS!=fO)) goto L_0070fc61;
L_0070fd5d:; BB(0x0070fd5d);
    /* 0070fd5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fd5e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fd63u); f_0068d5a8();
    /* 0070fd63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fd64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd66: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fd68:; BB(0x0070fd68);
    /* 0070fd68: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fd6b: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0070fd6e: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fd75: movzx edx, byte ptr [ebx + 0x6c] */ r_edx = (u32)R8((u32)(r_ebx+0x6cu));
    /* 0070fd79: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd7c: jne 0x70fd87 */ if (!fZ) goto L_0070fd87;
L_0070fd7e:; BB(0x0070fd7e);
    /* 0070fd7e: movzx edx, byte ptr [ebx + 0x6d] */ r_edx = (u32)R8((u32)(r_ebx+0x6du));
    /* 0070fd82: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd85: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fd87:; BB(0x0070fd87);
    /* 0070fd87: mov byte ptr [ebx + 0x6c], 7 */ W8((u32)(r_ebx+0x6cu), 0x7u);
    /* 0070fd8b: mov edx, 7 */ r_edx = 0x7u;
    /* 0070fd90: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0070fd95: mov byte ptr [ebx + 0x6d], 0xa */ W8((u32)(r_ebx+0x6du), 0xau);
    /* 0070fd99: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fd9eu); f_0070ff56();
L_0070fd9e:; BB(0x0070fd9e);
    /* 0070fd9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070fda0: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x70fda5u); f_00710db4();
    /* 0070fda5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070fda7: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x70fdacu); f_00710ee4();
    /* 0070fdac: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 0070fdaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fdb0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070fdb2: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x70fdb7u); f_0072a5ec();
L_0070fdb7:; BB(0x0070fdb7);
    /* 0070fdb7: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fdba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070fdbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070fdbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070fdbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070fdbe: ret  */ FN_RET(0x0070f7a4); r_esp += 4; return;
L_0070fdbf:; BB(0x0070fdbf);
    /* 0070fdbf: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fdc3: jmp 0x70fc61 */ goto L_0070fc61;
L_0070fdc8:; BB(0x0070fdc8);
    /* 0070fdc8: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070fdcc: mov dword ptr [eax + 0x2c], 0xff666666 */ W32((u32)(r_eax+0x2cu), 0xff666666u);
    /* 0070fdd3: jmp 0x70f883 */ goto L_0070f883;
}

void f_0070faa0(void)
{
    FN_ENTER(0x0070faa0);
    /* 0070faa0: mov byte ptr [ebx + 0x64], al */ W8((u32)(r_ebx+0x64u), (u8)r_eax);
    /* 0070faa3: mov byte ptr [ebx + 0x65], al */ W8((u32)(r_ebx+0x65u), (u8)r_eax);
    /* 0070faa6: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070faaa: mov edx, 7 */ r_edx = 0x7u;
    /* 0070faaf: mov ecx, 7 */ r_ecx = 0x7u;
    /* 0070fab4: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fab9u); f_0070ff56();
    /* 0070fab9: jmp 0x70fb83 */ goto L_0070fb83;
L_0070fb83:; BB(0x0070fb83);
    /* 0070fb83: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070fb87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070fb89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fb8b: jne 0x70fb92 */ if (!fZ) goto L_0070fb92;
L_0070fb8d:; BB(0x0070fb8d);
    /* 0070fb8d: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0070fb90: jmp 0x70fb95 */ goto L_0070fb95;
L_0070fb92:; BB(0x0070fb92);
    /* 0070fb92: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_0070fb95:; BB(0x0070fb95);
    /* 0070fb95: movzx eax, byte ptr [eax + 0xc] */ r_eax = (u32)R8((u32)(r_eax+0xcu));
    /* 0070fb99: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0070fb9d: jne 0x70fba6 */ if (!fZ) goto L_0070fba6;
L_0070fb9f:; BB(0x0070fb9f);
    /* 0070fb9f: add dword ptr [esp + 0x3c], 4 */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070fba4: jmp 0x70fbab */ goto L_0070fbab;
L_0070fba6:; BB(0x0070fba6);
    /* 0070fba6: add dword ptr [esp + 0x3c], 0x3c */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0070fbab:; BB(0x0070fbab);
    /* 0070fbab: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0070fbaf: movzx eax, byte ptr [ebp + 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xdu));
    /* 0070fbb3: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fbb7: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0070fbbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fbbc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fbc1u); f_0068d5a8();
    /* 0070fbc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fbc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fbc4: je 0x70fc42 */ if (fZ) goto L_0070fc42;
L_0070fbc6:; BB(0x0070fbc6);
    /* 0070fbc6: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0070fbc9: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 0070fbcc: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0070fbd0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0070fbd2: mov ecx, eax */ r_ecx = r_eax;
    /* 0070fbd4: call 0x68ce58 */ r_esp -= 4; W32(r_esp, 0x70fbd9u); f_0068ce58();
    /* 0070fbd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fbdb: je 0x70fbe8 */ if (fZ) goto L_0070fbe8;
L_0070fbdd:; BB(0x0070fbdd);
    /* 0070fbdd: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fbdf: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fbe6: jmp 0x70fbf1 */ goto L_0070fbf1;
L_0070fbe8:; BB(0x0070fbe8);
    /* 0070fbe8: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fbea: mov dword ptr [eax + 0x2c], 0xff404040 */ W32((u32)(r_eax+0x2cu), 0xff404040u);
L_0070fbf1:; BB(0x0070fbf1);
    /* 0070fbf1: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070fbf5: mov edx, ebp */ r_edx = r_ebp;
    /* 0070fbf7: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0070fbfb: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0070fbfe: movsx ebp, word ptr [ebx + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fc02: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0070fc07: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0070fc0a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0070fc0e: call 0x70fde5 */ r_esp -= 4; W32(r_esp, 0x70fc13u); f_0070fde5();
    /* 0070fc13: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0070fc17: movzx ebp, byte ptr [ebx + 0x68] */ r_ebp = (u32)R8((u32)(r_ebx+0x68u));
    /* 0070fc1b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc1d: jne 0x70fc2b */ if (!fZ) goto L_0070fc2b;
L_0070fc1f:; BB(0x0070fc1f);
    /* 0070fc1f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0070fc23: movzx ebp, byte ptr [ebx + 0x69] */ r_ebp = (u32)R8((u32)(r_ebx+0x69u));
    /* 0070fc27: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc29: je 0x70fc42 */ if (fZ) goto L_0070fc42;
L_0070fc2b:; BB(0x0070fc2b);
    /* 0070fc2b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0070fc2f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0070fc33: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0070fc37: mov byte ptr [ebx + 0x68], dl */ W8((u32)(r_ebx+0x68u), (u8)r_edx);
    /* 0070fc3a: mov byte ptr [ebx + 0x69], cl */ W8((u32)(r_ebx+0x69u), (u8)r_ecx);
    /* 0070fc3d: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fc42u); f_0070ff56();
L_0070fc42:; BB(0x0070fc42);
    /* 0070fc42: call 0x69b6a8 */ r_esp -= 4; W32(r_esp, 0x70fc47u); f_0069b6a8();
    /* 0070fc47: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0070fc4a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc4f: je 0x70fdbf */ if (fZ) goto L_0070fdbf;
L_0070fc55:; BB(0x0070fc55);
    /* 0070fc55: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fc59: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc5b: jne 0x70fd29 */ if (!fZ) goto L_0070fd29;
L_0070fc61:; BB(0x0070fc61);
    /* 0070fc61: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0070fc65: mov ebp, dword ptr [eax + 0x538] */ r_ebp = R32((u32)(r_eax+0x538u));
    /* 0070fc6b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc6d: jne 0x70fc76 */ if (!fZ) goto L_0070fc76;
L_0070fc6f:; BB(0x0070fc6f);
    /* 0070fc6f: mov eax, 1 */ r_eax = 0x1u;
    /* 0070fc74: jmp 0x70fc78 */ goto L_0070fc78;
L_0070fc76:; BB(0x0070fc76);
    /* 0070fc76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0070fc78:; BB(0x0070fc78);
    /* 0070fc78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc7a: je 0x70fcde */ if (fZ) goto L_0070fcde;
L_0070fc7c:; BB(0x0070fc7c);
    /* 0070fc7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fc7d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fc82u); f_0068d5a8();
    /* 0070fc82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fc83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc85: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fc8b:; BB(0x0070fc8b);
    /* 0070fc8b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fc8e: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 0070fc91: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x70fc96u); f_006dc358();
    /* 0070fc96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fc98: je 0x70fca3 */ if (fZ) goto L_0070fca3;
L_0070fc9a:; BB(0x0070fc9a);
    /* 0070fc9a: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
    /* 0070fca1: jmp 0x70fcaa */ goto L_0070fcaa;
L_0070fca3:; BB(0x0070fca3);
    /* 0070fca3: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
L_0070fcaa:; BB(0x0070fcaa);
    /* 0070fcaa: movzx edx, byte ptr [ebx + 0x6c] */ r_edx = (u32)R8((u32)(r_ebx+0x6cu));
    /* 0070fcae: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fcb1: jne 0x70fcc0 */ if (!fZ) goto L_0070fcc0;
L_0070fcb3:; BB(0x0070fcb3);
    /* 0070fcb3: movzx edx, byte ptr [ebx + 0x6d] */ r_edx = (u32)R8((u32)(r_ebx+0x6du));
    /* 0070fcb7: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fcba: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fcc0:; BB(0x0070fcc0);
    /* 0070fcc0: mov byte ptr [ebx + 0x6c], 7 */ W8((u32)(r_ebx+0x6cu), 0x7u);
    /* 0070fcc4: mov eax, ebp */ r_eax = r_ebp;
    /* 0070fcc6: mov edx, 7 */ r_edx = 0x7u;
    /* 0070fccb: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0070fcd0: mov byte ptr [ebx + 0x6d], 8 */ W8((u32)(r_ebx+0x6du), 0x8u);
    /* 0070fcd4: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fcd9u); f_0070ff56();
    /* 0070fcd9: jmp 0x70fd9e */ goto L_0070fd9e;
L_0070fcde:; BB(0x0070fcde);
    /* 0070fcde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fcdf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fce4u); f_0068d5a8();
    /* 0070fce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fce5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fce7: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fced:; BB(0x0070fced);
    /* 0070fced: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fcf0: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0070fcf3: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fcfa: movzx edx, byte ptr [ebx + 0x6c] */ r_edx = (u32)R8((u32)(r_ebx+0x6cu));
    /* 0070fcfe: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd01: jne 0x70fd10 */ if (!fZ) goto L_0070fd10;
L_0070fd03:; BB(0x0070fd03);
    /* 0070fd03: movzx edx, byte ptr [ebx + 0x6d] */ r_edx = (u32)R8((u32)(r_ebx+0x6du));
    /* 0070fd07: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd0a: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fd10:; BB(0x0070fd10);
    /* 0070fd10: mov byte ptr [ebx + 0x6c], 7 */ W8((u32)(r_ebx+0x6cu), 0x7u);
    /* 0070fd14: mov edx, 7 */ r_edx = 0x7u;
    /* 0070fd19: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0070fd1e: mov byte ptr [ebx + 0x6d], 9 */ W8((u32)(r_ebx+0x6du), 0x9u);
    /* 0070fd22: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fd27u); f_0070ff56();
    /* 0070fd27: jmp 0x70fd9e */ goto L_0070fd9e;
L_0070fd29:; BB(0x0070fd29);
    /* 0070fd29: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0070fd2d: fld dword ptr [ebp + 0x520] */ FPUSH(R_F32((u32)(r_ebp+0x520u)));
    /* 0070fd33: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0070fd37: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0070fd3c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070fd41: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0070fd45: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0070fd49: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070fd4d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0070fd51: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0070fd55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070fd57: jle 0x70fc61 */ if ((fZ||fS!=fO)) goto L_0070fc61;
L_0070fd5d:; BB(0x0070fd5d);
    /* 0070fd5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fd5e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fd63u); f_0068d5a8();
    /* 0070fd63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fd64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd66: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fd68:; BB(0x0070fd68);
    /* 0070fd68: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070fd6b: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0070fd6e: mov dword ptr [eax + 0x2c], 0xffffffff */ W32((u32)(r_eax+0x2cu), 0xffffffffu);
    /* 0070fd75: movzx edx, byte ptr [ebx + 0x6c] */ r_edx = (u32)R8((u32)(r_ebx+0x6cu));
    /* 0070fd79: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd7c: jne 0x70fd87 */ if (!fZ) goto L_0070fd87;
L_0070fd7e:; BB(0x0070fd7e);
    /* 0070fd7e: movzx edx, byte ptr [ebx + 0x6d] */ r_edx = (u32)R8((u32)(r_ebx+0x6du));
    /* 0070fd82: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fd85: je 0x70fd9e */ if (fZ) goto L_0070fd9e;
L_0070fd87:; BB(0x0070fd87);
    /* 0070fd87: mov byte ptr [ebx + 0x6c], 7 */ W8((u32)(r_ebx+0x6cu), 0x7u);
    /* 0070fd8b: mov edx, 7 */ r_edx = 0x7u;
    /* 0070fd90: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0070fd95: mov byte ptr [ebx + 0x6d], 0xa */ W8((u32)(r_ebx+0x6du), 0xau);
    /* 0070fd99: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x70fd9eu); f_0070ff56();
L_0070fd9e:; BB(0x0070fd9e);
    /* 0070fd9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070fda0: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x70fda5u); f_00710db4();
    /* 0070fda5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070fda7: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x70fdacu); f_00710ee4();
    /* 0070fdac: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 0070fdaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fdb0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070fdb2: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x70fdb7u); f_0072a5ec();
    /* 0070fdb7: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fdba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070fdbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070fdbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070fdbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070fdbe: ret  */ FN_RET(0x0070faa0); r_esp += 4; return;
L_0070fdbf:; BB(0x0070fdbf);
    /* 0070fdbf: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0070fdc3: jmp 0x70fc61 */ goto L_0070fc61;
}

void f_0070fdd8(void) /* sub_70FDD8 */
{
    FN_ENTER(0x0070fdd8);
    /* 0070fdd8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070fddc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0070fde0: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 0070fde5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070fde6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070fde7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070fdea: mov esi, edx */ r_esi = r_edx;
    /* 0070fdec: mov edi, eax */ r_edi = r_eax;
    /* 0070fdee: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 0070fdf1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fdf4: je 0x70fe0a */ if (fZ) goto L_0070fe0a;
L_0070fdf6:; BB(0x0070fdf6);
    /* 0070fdf6: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0070fdfa: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070fe00: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0070fe04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fe07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070fe08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070fe09: ret  */ FN_RET(0x0070fdd8); r_esp += 4; return;
L_0070fe0a:; BB(0x0070fe0a);
    /* 0070fe0a: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070fe0f: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070fe12: jl 0x70fe40 */ if ((fS!=fO)) goto L_0070fe40;
L_0070fe14:; BB(0x0070fe14);
    /* 0070fe14: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0070fe18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fe19: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fe1eu); f_0068d5a8();
    /* 0070fe1e: mov ecx, eax */ r_ecx = r_eax;
    /* 0070fe20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070fe23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fe25: je 0x70fe9c */ if (fZ) goto L_0070fe9c;
L_0070fe27:; BB(0x0070fe27);
    /* 0070fe27: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070fe2c: add ecx, 0x89c */ {  u32 a = r_ecx; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070fe32: lea eax, [eax - 0xd] */ r_eax = (u32)(r_eax+0xfffffff3u);
    /* 0070fe35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fe36: call 0x698984 */ r_esp -= 4; W32(r_esp, 0x70fe3bu); f_00698984();
    /* 0070fe3b: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0070fe3e: jmp 0x70fe50 */ goto L_0070fe50;
L_0070fe40:; BB(0x0070fe40);
    /* 0070fe40: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070fe45: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0070fe49: call 0x70feb9 */ r_esp -= 4; W32(r_esp, 0x70fe4eu); f_0070feb9();
    /* 0070fe4e: mov edx, eax */ r_edx = r_eax;
L_0070fe50:; BB(0x0070fe50);
    /* 0070fe50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070fe52: jle 0x70fe9c */ if ((fZ||fS!=fO)) goto L_0070fe9c;
L_0070fe54:; BB(0x0070fe54);
    /* 0070fe54: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0070fe58: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0070fe5d: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0070fe61: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0070fe64: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0070fe67: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 0070fe6a: mov ecx, edi */ r_ecx = r_edi;
    /* 0070fe6c: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x70fe71u); f_0072cdd0();
    /* 0070fe71: fld dword ptr [0x96f5ac] */ FPUSH(R_F32((u32)(0x96f5acu)));
    /* 0070fe77: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 0070fe7a: fld dword ptr [0x96f5a4] */ FPUSH(R_F32((u32)(0x96f5a4u)));
    /* 0070fe80: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0070fe83: fmul dword ptr [0x96f5a8] */ ST(0) = ST(0) * R_F32((u32)(0x96f5a8u));
    /* 0070fe89: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0070fe8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070fe8d: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0070fe90: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 0070fe93: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0070fe96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fe99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070fe9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070fe9b: ret  */ FN_RET(0x0070fdd8); r_esp += 4; return;
L_0070fe9c:; BB(0x0070fe9c);
    /* 0070fe9c: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0070fea0: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070fea6: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0070feaa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fead: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070feae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070feaf: ret  */ FN_RET(0x0070fdd8); r_esp += 4; return;
}

void f_0070fde5(void)
{
    FN_ENTER(0x0070fde5);
    /* 0070fde5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070fde6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070fde7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070fdea: mov esi, edx */ r_esi = r_edx;
    /* 0070fdec: mov edi, eax */ r_edi = r_eax;
    /* 0070fdee: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 0070fdf1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fdf4: je 0x70fe0a */ if (fZ) goto L_0070fe0a;
L_0070fdf6:; BB(0x0070fdf6);
    /* 0070fdf6: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0070fdfa: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070fe00: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0070fe04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fe07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070fe08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070fe09: ret  */ FN_RET(0x0070fde5); r_esp += 4; return;
L_0070fe0a:; BB(0x0070fe0a);
    /* 0070fe0a: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070fe0f: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070fe12: jl 0x70fe40 */ if ((fS!=fO)) goto L_0070fe40;
L_0070fe14:; BB(0x0070fe14);
    /* 0070fe14: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0070fe18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fe19: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fe1eu); f_0068d5a8();
    /* 0070fe1e: mov ecx, eax */ r_ecx = r_eax;
    /* 0070fe20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070fe23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fe25: je 0x70fe9c */ if (fZ) goto L_0070fe9c;
L_0070fe27:; BB(0x0070fe27);
    /* 0070fe27: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070fe2c: add ecx, 0x89c */ {  u32 a = r_ecx; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070fe32: lea eax, [eax - 0xd] */ r_eax = (u32)(r_eax+0xfffffff3u);
    /* 0070fe35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fe36: call 0x698984 */ r_esp -= 4; W32(r_esp, 0x70fe3bu); f_00698984();
    /* 0070fe3b: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0070fe3e: jmp 0x70fe50 */ goto L_0070fe50;
L_0070fe40:; BB(0x0070fe40);
    /* 0070fe40: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070fe45: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0070fe49: call 0x70feb9 */ r_esp -= 4; W32(r_esp, 0x70fe4eu); f_0070feb9();
    /* 0070fe4e: mov edx, eax */ r_edx = r_eax;
L_0070fe50:; BB(0x0070fe50);
    /* 0070fe50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070fe52: jle 0x70fe9c */ if ((fZ||fS!=fO)) goto L_0070fe9c;
L_0070fe54:; BB(0x0070fe54);
    /* 0070fe54: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0070fe58: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0070fe5d: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0070fe61: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0070fe64: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0070fe67: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 0070fe6a: mov ecx, edi */ r_ecx = r_edi;
    /* 0070fe6c: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x70fe71u); f_0072cdd0();
    /* 0070fe71: fld dword ptr [0x96f5ac] */ FPUSH(R_F32((u32)(0x96f5acu)));
    /* 0070fe77: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 0070fe7a: fld dword ptr [0x96f5a4] */ FPUSH(R_F32((u32)(0x96f5a4u)));
    /* 0070fe80: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0070fe83: fmul dword ptr [0x96f5a8] */ ST(0) = ST(0) * R_F32((u32)(0x96f5a8u));
    /* 0070fe89: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0070fe8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070fe8d: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0070fe90: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 0070fe93: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0070fe96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fe99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070fe9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070fe9b: ret  */ FN_RET(0x0070fde5); r_esp += 4; return;
L_0070fe9c:; BB(0x0070fe9c);
    /* 0070fe9c: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0070fea0: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070fea6: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0070feaa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fead: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070feae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070feaf: ret  */ FN_RET(0x0070fde5); r_esp += 4; return;
}

void f_0070feb9(void) /* sub_70FEB9 */
{
    FN_ENTER(0x0070feb9);
    /* 0070feb9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070febc: call 0x70fef1 */ r_esp -= 4; W32(r_esp, 0x70fec1u); f_0070fef1();
    /* 0070fec1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fec4: je 0x70fedf */ if (fZ) goto L_0070fedf;
L_0070fec6:; BB(0x0070fec6);
    /* 0070fec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070fec7: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x70feccu); f_005c5528();
    /* 0070fecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fecd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070fecf: je 0x70fedf */ if (fZ) goto L_0070fedf;
L_0070fed1:; BB(0x0070fed1);
    /* 0070fed1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070fed3: mov ecx, eax */ r_ecx = r_eax;
    /* 0070fed5: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x70fedbu); call_ind(t); }
    /* 0070fedb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fede: ret  */ FN_RET(0x0070feb9); r_esp += 4; return;
L_0070fedf:; BB(0x0070fedf);
    /* 0070fedf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070fee1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070fee4: ret  */ FN_RET(0x0070feb9); r_esp += 4; return;
}

void f_0070fee8(void) /* sub_70FEE8 */
{
    FN_ENTER(0x0070fee8);
    /* 0070fee8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0070feed: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0070fef1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070fef2: mov esi, eax */ r_esi = r_eax;
    /* 0070fef4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fef5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fefau); f_0068d5a8();
    /* 0070fefa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fefb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070fefd: je 0x70ff3f */ if (fZ) goto L_0070ff3f;
L_0070feff:; BB(0x0070feff);
    /* 0070feff: movzx esi, si */ r_esi = (u32)(u16)r_esi;
    /* 0070ff02: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070ff05: jge 0x70ff24 */ if ((fS==fO)) goto L_0070ff24;
L_0070ff07:; BB(0x0070ff07);
    /* 0070ff07: movzx edx, byte ptr [esi*2 + 0x96f51c] */ r_edx = (u32)R8((u32)(r_esi*2+0x96f51cu));
    /* 0070ff0f: movzx esi, byte ptr [esi*2 + 0x96f51d] */ r_esi = (u32)R8((u32)(r_esi*2+0x96f51du));
    /* 0070ff17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff18: mov ecx, eax */ r_ecx = r_eax;
    /* 0070ff1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff1b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff1d: call 0x68fa48 */ r_esp -= 4; W32(r_esp, 0x70ff22u); f_0068fa48();
    /* 0070ff22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070ff23: ret  */ FN_RET(0x0070fee8); r_esp += 4; return;
L_0070ff24:; BB(0x0070ff24);
    /* 0070ff24: add eax, 0x89c */ {  u32 a = r_eax; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070ff29: lea edx, [esi - 0xd] */ r_edx = (u32)(r_esi+0xfffffff3u);
    /* 0070ff2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff2d: mov ecx, eax */ r_ecx = r_eax;
    /* 0070ff2f: call 0x698984 */ r_esp -= 4; W32(r_esp, 0x70ff34u); f_00698984();
    /* 0070ff34: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0070ff37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ff39: jle 0x70ff3f */ if ((fZ||fS!=fO)) goto L_0070ff3f;
L_0070ff3b:; BB(0x0070ff3b);
    /* 0070ff3b: mov eax, esi */ r_eax = r_esi;
    /* 0070ff3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070ff3e: ret  */ FN_RET(0x0070fee8); r_esp += 4; return;
L_0070ff3f:; BB(0x0070ff3f);
    /* 0070ff3f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0070ff44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070ff45: ret  */ FN_RET(0x0070fee8); r_esp += 4; return;
}

void f_0070fef1(void) /* sub_70FEF1 */
{
    FN_ENTER(0x0070fef1);
    /* 0070fef1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070fef2: mov esi, eax */ r_esi = r_eax;
    /* 0070fef4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070fef5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x70fefau); f_0068d5a8();
    /* 0070fefa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070fefb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070fefd: je 0x70ff3f */ if (fZ) goto L_0070ff3f;
L_0070feff:; BB(0x0070feff);
    /* 0070feff: movzx esi, si */ r_esi = (u32)(u16)r_esi;
    /* 0070ff02: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070ff05: jge 0x70ff24 */ if ((fS==fO)) goto L_0070ff24;
L_0070ff07:; BB(0x0070ff07);
    /* 0070ff07: movzx edx, byte ptr [esi*2 + 0x96f51c] */ r_edx = (u32)R8((u32)(r_esi*2+0x96f51cu));
    /* 0070ff0f: movzx esi, byte ptr [esi*2 + 0x96f51d] */ r_esi = (u32)R8((u32)(r_esi*2+0x96f51du));
    /* 0070ff17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff18: mov ecx, eax */ r_ecx = r_eax;
    /* 0070ff1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff1b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff1d: call 0x68fa48 */ r_esp -= 4; W32(r_esp, 0x70ff22u); f_0068fa48();
    /* 0070ff22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070ff23: ret  */ FN_RET(0x0070fef1); r_esp += 4; return;
L_0070ff24:; BB(0x0070ff24);
    /* 0070ff24: add eax, 0x89c */ {  u32 a = r_eax; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070ff29: lea edx, [esi - 0xd] */ r_edx = (u32)(r_esi+0xfffffff3u);
    /* 0070ff2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ff2d: mov ecx, eax */ r_ecx = r_eax;
    /* 0070ff2f: call 0x698984 */ r_esp -= 4; W32(r_esp, 0x70ff34u); f_00698984();
    /* 0070ff34: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0070ff37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ff39: jle 0x70ff3f */ if ((fZ||fS!=fO)) goto L_0070ff3f;
L_0070ff3b:; BB(0x0070ff3b);
    /* 0070ff3b: mov eax, esi */ r_eax = r_esi;
    /* 0070ff3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070ff3e: ret  */ FN_RET(0x0070fef1); r_esp += 4; return;
L_0070ff3f:; BB(0x0070ff3f);
    /* 0070ff3f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0070ff44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070ff45: ret  */ FN_RET(0x0070fef1); r_esp += 4; return;
}

void f_0070ff48(void) /* sub_70FF48 */
{
    FN_ENTER(0x0070ff48);
    /* 0070ff48: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070ff4c: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 0070ff51: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 0070ff56: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0070ff59: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ff5b: je 0x71008d */ if (fZ) goto L_0071008d;
L_0070ff61:; BB(0x0070ff61);
    /* 0070ff61: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ff64: je 0x710073 */ if (fZ) goto L_00710073;
L_0070ff6a:; BB(0x0070ff6a);
    /* 0070ff6a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ff6d: je 0x71004f */ if (fZ) goto L_0071004f;
L_0070ff73:; BB(0x0070ff73);
    /* 0070ff73: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ff76: je 0x70ffe4 */ if (fZ) goto L_0070ffe4;
L_0070ff78:; BB(0x0070ff78);
    /* 0070ff78: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ff7b: jne 0x70ffa1 */ if (!fZ) goto L_0070ffa1;
L_0070ff7d:; BB(0x0070ff7d);
    /* 0070ff7d: mov dword ptr [eax + 0x34], 5 */ W32((u32)(r_eax+0x34u), 0x5u);
    /* 0070ff84: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0070ff87: fld dword ptr [ecx*8 + 0x9f1600] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1600u)));
    /* 0070ff8e: mov edx, dword ptr [ecx*8 + 0x9f1600] */ r_edx = R32((u32)(r_ecx*8+0x9f1600u));
    /* 0070ff95: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0070ff98: fld dword ptr [ecx*8 + 0x9f1604] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1604u)));
    /* 0070ff9f: jmp 0x710014 */ goto L_00710014;
L_0070ffa1:; BB(0x0070ffa1);
    /* 0070ffa1: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffa4: jne 0x70ffdc */ if (!fZ) goto L_0070ffdc;
L_0070ffa6:; BB(0x0070ffa6);
    /* 0070ffa6: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0070ffa9: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffac: je 0x710043 */ if (fZ) goto L_00710043;
L_0070ffb2:; BB(0x0070ffb2);
    /* 0070ffb2: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffb5: je 0x710043 */ if (fZ) goto L_00710043;
L_0070ffbb:; BB(0x0070ffbb);
    /* 0070ffbb: mov dword ptr [eax + 0x34], 6 */ W32((u32)(r_eax+0x34u), 0x6u);
L_0070ffc2:; BB(0x0070ffc2);
    /* 0070ffc2: fld dword ptr [ecx*8 + 0x9f1420] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1420u)));
    /* 0070ffc9: mov edx, dword ptr [ecx*8 + 0x9f1420] */ r_edx = R32((u32)(r_ecx*8+0x9f1420u));
    /* 0070ffd0: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0070ffd3: fld dword ptr [ecx*8 + 0x9f1424] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1424u)));
    /* 0070ffda: jmp 0x710014 */ goto L_00710014;
L_0070ffdc:; BB(0x0070ffdc);
    /* 0070ffdc: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0070ffdf: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0070ffe2: jmp 0x710014 */ goto L_00710014;
L_0070ffe4:; BB(0x0070ffe4);
    /* 0070ffe4: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0070ffe7: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffea: jl 0x70fff5 */ if ((fS!=fO)) goto L_0070fff5;
L_0070ffec:; BB(0x0070ffec);
    /* 0070ffec: mov dword ptr [eax + 0x34], 7 */ W32((u32)(r_eax+0x34u), 0x7u);
    /* 0070fff3: jmp 0x70fffc */ goto L_0070fffc;
L_0070fff5:; BB(0x0070fff5);
    /* 0070fff5: mov dword ptr [eax + 0x34], 6 */ W32((u32)(r_eax+0x34u), 0x6u);
L_0070fffc:; BB(0x0070fffc);
    /* 0070fffc: fld dword ptr [ecx*8 + 0x9f1380] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1380u)));
    /* 00710003: mov edx, dword ptr [ecx*8 + 0x9f1380] */ r_edx = R32((u32)(r_ecx*8+0x9f1380u));
    /* 0071000a: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0071000d: fld dword ptr [ecx*8 + 0x9f1384] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1384u)));
L_00710014:; BB(0x00710014);
    /* 00710014: fld dword ptr [0x96f598] */ FPUSH(R_F32((u32)(0x96f598u)));
    /* 0071001a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071001c: fld dword ptr [0x96f594] */ FPUSH(R_F32((u32)(0x96f594u)));
    /* 00710022: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00710024: fld dword ptr [0x96f590] */ FPUSH(R_F32((u32)(0x96f590u)));
    /* 0071002a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071002c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071002e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00710030: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00710032: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710034: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00710037: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710039: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0071003c: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0071003f: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00710042: ret  */ FN_RET(0x0070ff48); r_esp += 4; return;
L_00710043:; BB(0x00710043);
    /* 00710043: mov dword ptr [eax + 0x34], 7 */ W32((u32)(r_eax+0x34u), 0x7u);
    /* 0071004a: jmp 0x70ffc2 */ goto L_0070ffc2;
L_0071004f:; BB(0x0071004f);
    /* 0071004f: mov dword ptr [eax + 0x34], 5 */ W32((u32)(r_eax+0x34u), 0x5u);
    /* 00710056: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 00710059: fld dword ptr [ecx*8 + 0x9f12e0] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f12e0u)));
    /* 00710060: mov edx, dword ptr [ecx*8 + 0x9f12e0] */ r_edx = R32((u32)(r_ecx*8+0x9f12e0u));
    /* 00710067: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0071006a: fld dword ptr [ecx*8 + 0x9f12e4] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f12e4u)));
    /* 00710071: jmp 0x710014 */ goto L_00710014;
L_00710073:; BB(0x00710073);
    /* 00710073: mov dword ptr [eax + 0x34], 6 */ W32((u32)(r_eax+0x34u), 0x6u);
    /* 0071007a: movzx edx, cx */ r_edx = (u32)(u16)r_ecx;
    /* 0071007d: fld dword ptr [edx*8 + 0x9f15e8] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15e8u)));
    /* 00710084: fld dword ptr [edx*8 + 0x9f15ec] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15ecu)));
    /* 0071008b: jmp 0x710014 */ goto L_00710014;
L_0071008d:; BB(0x0071008d);
    /* 0071008d: fld dword ptr [0x96f5a0] */ FPUSH(R_F32((u32)(0x96f5a0u)));
    /* 00710093: fld dword ptr [0x96f59c] */ FPUSH(R_F32((u32)(0x96f59cu)));
    /* 00710099: mov dword ptr [eax + 0x34], 7 */ W32((u32)(r_eax+0x34u), 0x7u);
    /* 007100a0: jmp 0x710014 */ goto L_00710014;
}

void f_0070ff56(void)
{
    FN_ENTER(0x0070ff56);
    /* 0070ff56: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0070ff59: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ff5b: je 0x71008d */ if (fZ) goto L_0071008d;
L_0070ff61:; BB(0x0070ff61);
    /* 0070ff61: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ff64: je 0x710073 */ if (fZ) goto L_00710073;
L_0070ff6a:; BB(0x0070ff6a);
    /* 0070ff6a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ff6d: je 0x71004f */ if (fZ) goto L_0071004f;
L_0070ff73:; BB(0x0070ff73);
    /* 0070ff73: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ff76: je 0x70ffe4 */ if (fZ) goto L_0070ffe4;
L_0070ff78:; BB(0x0070ff78);
    /* 0070ff78: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ff7b: jne 0x70ffa1 */ if (!fZ) goto L_0070ffa1;
L_0070ff7d:; BB(0x0070ff7d);
    /* 0070ff7d: mov dword ptr [eax + 0x34], 5 */ W32((u32)(r_eax+0x34u), 0x5u);
    /* 0070ff84: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0070ff87: fld dword ptr [ecx*8 + 0x9f1600] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1600u)));
    /* 0070ff8e: mov edx, dword ptr [ecx*8 + 0x9f1600] */ r_edx = R32((u32)(r_ecx*8+0x9f1600u));
    /* 0070ff95: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0070ff98: fld dword ptr [ecx*8 + 0x9f1604] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1604u)));
    /* 0070ff9f: jmp 0x710014 */ goto L_00710014;
L_0070ffa1:; BB(0x0070ffa1);
    /* 0070ffa1: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffa4: jne 0x70ffdc */ if (!fZ) goto L_0070ffdc;
L_0070ffa6:; BB(0x0070ffa6);
    /* 0070ffa6: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0070ffa9: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffac: je 0x710043 */ if (fZ) goto L_00710043;
L_0070ffb2:; BB(0x0070ffb2);
    /* 0070ffb2: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffb5: je 0x710043 */ if (fZ) goto L_00710043;
L_0070ffbb:; BB(0x0070ffbb);
    /* 0070ffbb: mov dword ptr [eax + 0x34], 6 */ W32((u32)(r_eax+0x34u), 0x6u);
L_0070ffc2:; BB(0x0070ffc2);
    /* 0070ffc2: fld dword ptr [ecx*8 + 0x9f1420] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1420u)));
    /* 0070ffc9: mov edx, dword ptr [ecx*8 + 0x9f1420] */ r_edx = R32((u32)(r_ecx*8+0x9f1420u));
    /* 0070ffd0: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0070ffd3: fld dword ptr [ecx*8 + 0x9f1424] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1424u)));
    /* 0070ffda: jmp 0x710014 */ goto L_00710014;
L_0070ffdc:; BB(0x0070ffdc);
    /* 0070ffdc: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0070ffdf: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0070ffe2: jmp 0x710014 */ goto L_00710014;
L_0070ffe4:; BB(0x0070ffe4);
    /* 0070ffe4: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0070ffe7: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ffea: jl 0x70fff5 */ if ((fS!=fO)) goto L_0070fff5;
L_0070ffec:; BB(0x0070ffec);
    /* 0070ffec: mov dword ptr [eax + 0x34], 7 */ W32((u32)(r_eax+0x34u), 0x7u);
    /* 0070fff3: jmp 0x70fffc */ goto L_0070fffc;
L_0070fff5:; BB(0x0070fff5);
    /* 0070fff5: mov dword ptr [eax + 0x34], 6 */ W32((u32)(r_eax+0x34u), 0x6u);
L_0070fffc:; BB(0x0070fffc);
    /* 0070fffc: fld dword ptr [ecx*8 + 0x9f1380] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1380u)));
    /* 00710003: mov edx, dword ptr [ecx*8 + 0x9f1380] */ r_edx = R32((u32)(r_ecx*8+0x9f1380u));
    /* 0071000a: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0071000d: fld dword ptr [ecx*8 + 0x9f1384] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f1384u)));
L_00710014:; BB(0x00710014);
    /* 00710014: fld dword ptr [0x96f598] */ FPUSH(R_F32((u32)(0x96f598u)));
    /* 0071001a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071001c: fld dword ptr [0x96f594] */ FPUSH(R_F32((u32)(0x96f594u)));
    /* 00710022: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00710024: fld dword ptr [0x96f590] */ FPUSH(R_F32((u32)(0x96f590u)));
    /* 0071002a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071002c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071002e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00710030: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00710032: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710034: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00710037: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710039: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0071003c: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0071003f: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00710042: ret  */ FN_RET(0x0070ff56); r_esp += 4; return;
L_00710043:; BB(0x00710043);
    /* 00710043: mov dword ptr [eax + 0x34], 7 */ W32((u32)(r_eax+0x34u), 0x7u);
    /* 0071004a: jmp 0x70ffc2 */ goto L_0070ffc2;
L_0071004f:; BB(0x0071004f);
    /* 0071004f: mov dword ptr [eax + 0x34], 5 */ W32((u32)(r_eax+0x34u), 0x5u);
    /* 00710056: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 00710059: fld dword ptr [ecx*8 + 0x9f12e0] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f12e0u)));
    /* 00710060: mov edx, dword ptr [ecx*8 + 0x9f12e0] */ r_edx = R32((u32)(r_ecx*8+0x9f12e0u));
    /* 00710067: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0071006a: fld dword ptr [ecx*8 + 0x9f12e4] */ FPUSH(R_F32((u32)(r_ecx*8+0x9f12e4u)));
    /* 00710071: jmp 0x710014 */ goto L_00710014;
L_00710073:; BB(0x00710073);
    /* 00710073: mov dword ptr [eax + 0x34], 6 */ W32((u32)(r_eax+0x34u), 0x6u);
    /* 0071007a: movzx edx, cx */ r_edx = (u32)(u16)r_ecx;
    /* 0071007d: fld dword ptr [edx*8 + 0x9f15e8] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15e8u)));
    /* 00710084: fld dword ptr [edx*8 + 0x9f15ec] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15ecu)));
    /* 0071008b: jmp 0x710014 */ goto L_00710014;
L_0071008d:; BB(0x0071008d);
    /* 0071008d: fld dword ptr [0x96f5a0] */ FPUSH(R_F32((u32)(0x96f5a0u)));
    /* 00710093: fld dword ptr [0x96f59c] */ FPUSH(R_F32((u32)(0x96f59cu)));
    /* 00710099: mov dword ptr [eax + 0x34], 7 */ W32((u32)(r_eax+0x34u), 0x7u);
    /* 007100a0: jmp 0x710014 */ goto L_00710014;
}

