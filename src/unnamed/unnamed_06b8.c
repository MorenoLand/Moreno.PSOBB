#include "protos.h"

void f_006b801c(void) /* sub_6B801C */
{
    FN_ENTER(0x006b801c);
    /* 006b801c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b801d: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8020: mov ebx, dword ptr [0xa954d0] */ r_ebx = R32((u32)(0xa954d0u));
    /* 006b8026: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b802c: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6b8031u); f_005c5528();
    /* 006b8031: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8034: je 0x6b80a5 */ if (fZ) goto L_006b80a5;
L_006b8036:; BB(0x006b8036);
    /* 006b8036: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b8039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b803a: mov ecx, eax */ r_ecx = r_eax;
    /* 006b803c: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6b8041u); f_005c425c();
    /* 006b8041: mov byte ptr [esp + 0x14], 0xd6 */ W8((u32)(r_esp+0x14u), 0xd6u);
    /* 006b8046: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b804b: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 006b8050: mov byte ptr [esp + 0x15], 7 */ W8((u32)(r_esp+0x15u), 0x7u);
    /* 006b8055: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006b8059: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b805eu); f_005d6a3c();
    /* 006b805e: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b8063: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006b8066: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006b806a: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 006b806f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b8073: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b8077: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006b807b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006b807f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b8083: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006b8087: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006b808b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006b808f: mov byte ptr [esp + 0x2c], bl */ W8((u32)(r_esp+0x2cu), (u8)r_ebx);
    /* 006b8093: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006b8097: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6b809cu); f_0061cdb0();
    /* 006b809c: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 006b80a0: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b80a5u); f_00800518();
L_006b80a5:; BB(0x006b80a5);
    /* 006b80a5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b80a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b80a9: ret  */ FN_RET(0x006b801c); r_esp += 4; return;
}

void f_006b80ac(void) /* sub_6B80AC */
{
    FN_ENTER(0x006b80ac);
    /* 006b80ac: mov ecx, dword ptr [0xa954cc] */ r_ecx = R32((u32)(0xa954ccu));
    /* 006b80b2: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b80b8: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006b80bd: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b80c0: ret  */ FN_RET(0x006b80ac); r_esp += 4; return;
}

void f_006b80c4(void)
{
    FN_ENTER(0x006b80c4);
    /* 006b80c4: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b80c9: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b80ceu); f_006c1bd4();
    /* 006b80ce: mov edx, eax */ r_edx = r_eax;
    /* 006b80d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b80d3: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b80d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b80da: je 0x6b80e8 */ if (fZ) goto L_006b80e8;
L_006b80dc:; BB(0x006b80dc);
    /* 006b80dc: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b80e1: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 006b80e4: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 006b80e7: ret  */ FN_RET(0x006b80c4); r_esp += 4; return;
L_006b80e8:; BB(0x006b80e8);
    /* 006b80e8: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b80ed: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b80f4: ret  */ FN_RET(0x006b80c4); r_esp += 4; return;
}

void f_006b80f8(void)
{
    FN_ENTER(0x006b80f8);
    /* 006b80f8: call 0x7818c0 */ r_esp -= 4; W32(r_esp, 0x6b80fdu); f_007818c0();
    /* 006b80fd: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8103: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8108: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b810b: ret  */ FN_RET(0x006b80f8); r_esp += 4; return;
}

void f_006b810c(void) /* sub_6B810C */
{
    FN_ENTER(0x006b810c);
    /* 006b810c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b810d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8113: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b8118u); f_0068d5a8();
    /* 006b8118: mov edx, eax */ r_edx = r_eax;
    /* 006b811a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b811d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b8122: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8124: je 0x6b813e */ if (fZ) goto L_006b813e;
L_006b8126:; BB(0x006b8126);
    /* 006b8126: mov ebx, dword ptr [edx + 0x2b4] */ r_ebx = R32((u32)(r_edx+0x2b4u));
    /* 006b812c: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b8131: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 006b8134: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006b8137: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b8139: mov dword ptr [eax + ebx], ecx */ W32((u32)(r_eax+r_ebx), r_ecx);
    /* 006b813c: jmp 0x6b814f */ goto L_006b814f;
L_006b813e:; BB(0x006b813e);
    /* 006b813e: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b8143: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006b8146: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b8148: mov dword ptr [eax + ebx], 0xffffffff */ W32((u32)(r_eax+r_ebx), 0xffffffffu);
L_006b814f:; BB(0x006b814f);
    /* 006b814f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b8154: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b8159u); f_006c1bd4();
    /* 006b8159: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b815a: mov edx, eax */ r_edx = r_eax;
    /* 006b815c: add edx, 0x21c */ {  u32 a = r_edx; u32 b = 0x21cu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8162: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8168: je 0x6b8176 */ if (fZ) goto L_006b8176;
L_006b816a:; BB(0x006b816a);
    /* 006b816a: mov eax, dword ptr [eax + 0x220] */ r_eax = R32((u32)(r_eax+0x220u));
    /* 006b8170: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 006b8174: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8175: ret  */ FN_RET(0x006b810c); r_esp += 4; return;
L_006b8176:; BB(0x006b8176);
    /* 006b8176: mov dword ptr [ebx + edx + 4], 0xffffffff */ W32((u32)(r_ebx+r_edx+0x4u), 0xffffffffu);
    /* 006b817e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b817f: ret  */ FN_RET(0x006b810c); r_esp += 4; return;
}

void f_006b8180(void)
{
    FN_ENTER(0x006b8180);
    /* 006b8180: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8181: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8187: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b818cu); f_0068d5a8();
    /* 006b818c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b818d: movzx esi, byte ptr [0xa954d0] */ r_esi = (u32)R8((u32)(0xa954d0u));
    /* 006b8194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8196: je 0x6b81ad */ if (fZ) goto L_006b81ad;
L_006b8198:; BB(0x006b8198);
    /* 006b8198: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006b819a: mov ecx, eax */ r_ecx = r_eax;
    /* 006b819c: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x6b819fu); call_ind(t); }
    /* 006b819f: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b81a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b81a8: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 006b81ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b81ac: ret  */ FN_RET(0x006b8180); r_esp += 4; return;
L_006b81ad:; BB(0x006b81ad);
    /* 006b81ad: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b81b2: mov dword ptr [eax + esi*4], 0xffffffff */ W32((u32)(r_eax+r_esi*4), 0xffffffffu);
    /* 006b81b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b81ba: ret  */ FN_RET(0x006b8180); r_esp += 4; return;
}

void f_006b81bc(void)
{
    FN_ENTER(0x006b81bc);
    /* 006b81bc: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b81c2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b81c7u); f_0068d5a8();
    /* 006b81c7: mov ecx, eax */ r_ecx = r_eax;
    /* 006b81c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b81cc: movzx edx, byte ptr [0xa954d0] */ r_edx = (u32)R8((u32)(0xa954d0u));
    /* 006b81d3: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b81d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b81da: je 0x6b81e7 */ if (fZ) goto L_006b81e7;
L_006b81dc:; BB(0x006b81dc);
    /* 006b81dc: movsx ecx, byte ptr [ecx + 0x960] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+0x960u));
    /* 006b81e3: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b81e6: ret  */ FN_RET(0x006b81bc); r_esp += 4; return;
L_006b81e7:; BB(0x006b81e7);
    /* 006b81e7: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b81ee: ret  */ FN_RET(0x006b81bc); r_esp += 4; return;
}

void f_006b81f0(void)
{
    FN_ENTER(0x006b81f0);
    /* 006b81f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b81f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b81f2: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b81f8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b81fdu); f_0068d5a8();
    /* 006b81fd: mov edi, eax */ r_edi = r_eax;
    /* 006b81ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8202: movzx eax, byte ptr [0xa954d0] */ r_eax = (u32)R8((u32)(0xa954d0u));
    /* 006b8209: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b820f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8211: je 0x6b8253 */ if (fZ) goto L_006b8253;
L_006b8213:; BB(0x006b8213);
    /* 006b8213: movsx ecx, word ptr [edi + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 006b821a: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b821d: movsx esi, word ptr [edi + 0x334] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 006b8224: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b8227: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b822a: mov dword ptr [edx + ecx*4], esi */ W32((u32)(r_edx+r_ecx*4), r_esi);
    /* 006b822d: movsx ecx, word ptr [edi + 0x2be] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2beu));
    /* 006b8234: lea esi, [eax + 2] */ r_esi = (u32)(r_eax+0x2u);
    /* 006b8237: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b823d: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8240: mov dword ptr [edx + esi*4], ecx */ W32((u32)(r_edx+r_esi*4), r_ecx);
    /* 006b8243: movsx edi, word ptr [edi + 0x336] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x336u));
    /* 006b824a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b824d: mov dword ptr [edx + eax*4], edi */ W32((u32)(r_edx+r_eax*4), r_edi);
    /* 006b8250: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8251: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b8252: ret  */ FN_RET(0x006b81f0); r_esp += 4; return;
L_006b8253:; BB(0x006b8253);
    /* 006b8253: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 006b8258: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b825b: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 006b825e: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b8264: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
    /* 006b8267: mov dword ptr [edx + esi*4], ecx */ W32((u32)(r_edx+r_esi*4), r_ecx);
    /* 006b826a: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b8270: mov dword ptr [edx + edi*4], ecx */ W32((u32)(r_edx+r_edi*4), r_ecx);
    /* 006b8273: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8276: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b8279: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b827c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b827d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b827e: ret  */ FN_RET(0x006b81f0); r_esp += 4; return;
}

void f_006b8280(void) /* sub_6B8280 */
{
    FN_ENTER(0x006b8280);
    /* 006b8280: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8281: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8287: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b828cu); f_0068d5a8();
    /* 006b828c: mov ecx, eax */ r_ecx = r_eax;
    /* 006b828e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8291: movzx ebx, byte ptr [0xa954d0] */ r_ebx = (u32)R8((u32)(0xa954d0u));
    /* 006b8298: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b829a: je 0x6b82c3 */ if (fZ) goto L_006b82c3;
L_006b829c:; BB(0x006b829c);
    /* 006b829c: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b82a1: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 006b82a7: mov dword ptr [eax + ebx*4], edx */ W32((u32)(r_eax+r_ebx*4), r_edx);
    /* 006b82aa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b82ad: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x6b82b2u); f_007ba980();
    /* 006b82b2: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b82b8: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b82bb: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006b82be: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 006b82c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b82c2: ret  */ FN_RET(0x006b8280); r_esp += 4; return;
L_006b82c3:; BB(0x006b82c3);
    /* 006b82c3: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b82c9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006b82ce: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 006b82d1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b82d4: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b82d7: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 006b82da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b82db: ret  */ FN_RET(0x006b8280); r_esp += 4; return;
}

void f_006b82dc(void)
{
    FN_ENTER(0x006b82dc);
    /* 006b82dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b82dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b82de: mov ebp, dword ptr [0xa954cc] */ r_ebp = R32((u32)(0xa954ccu));
    /* 006b82e4: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b82e9: movzx ebx, byte ptr [0xa954d0] */ r_ebx = (u32)R8((u32)(0xa954d0u));
    /* 006b82f0: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b82f5u); f_006c1bd4();
    /* 006b82f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b82f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b82f8: je 0x6b8316 */ if (fZ) goto L_006b8316;
L_006b82fa:; BB(0x006b82fa);
    /* 006b82fa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b82fc: jl 0x6b8313 */ if ((fS!=fO)) goto L_006b8313;
L_006b82fe:; BB(0x006b82fe);
    /* 006b82fe: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b8301: jge 0x6b8313 */ if ((fS==fO)) goto L_006b8313;
L_006b8303:; BB(0x006b8303);
    /* 006b8303: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8309: mov eax, dword ptr [eax + ebp*4 + 0x296c] */ r_eax = R32((u32)(r_eax+r_ebp*4+0x296cu));
    /* 006b8310: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
L_006b8313:; BB(0x006b8313);
    /* 006b8313: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8315: ret  */ FN_RET(0x006b82dc); r_esp += 4; return;
L_006b8316:; BB(0x006b8316);
    /* 006b8316: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b831b: mov dword ptr [eax + ebx*4], 0xffffffff */ W32((u32)(r_eax+r_ebx*4), 0xffffffffu);
    /* 006b8322: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8323: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8324: ret  */ FN_RET(0x006b82dc); r_esp += 4; return;
}

void f_006b8328(void) /* sub_6B8328 */
{
    FN_ENTER(0x006b8328);
    /* 006b8328: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b832b: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b8331: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b8337: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b833c: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b8341: mov byte ptr [esp], 0xd2 */ W8((u32)(r_esp), 0xd2u);
    /* 006b8345: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b8349: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b834e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006b8352: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b8355: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b835au); f_008003e0();
    /* 006b835a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b835d: ret  */ FN_RET(0x006b8328); r_esp += 4; return;
}

void f_006b8360(void) /* sub_6B8360 */
{
    FN_ENTER(0x006b8360);
    /* 006b8360: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8361: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8362: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b8363: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8364: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8367: movzx ebx, byte ptr [esp + 0x28] */ r_ebx = (u32)R8((u32)(r_esp+0x28u));
    /* 006b836c: movzx esi, byte ptr [esp + 0x2c] */ r_esi = (u32)R8((u32)(r_esp+0x2cu));
    /* 006b8371: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b8376: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b837b: mov dword ptr [eax + esi*4], 0xffffffff */ W32((u32)(r_eax+r_esi*4), 0xffffffffu);
    /* 006b8382: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b8387u); f_006c1bd4();
    /* 006b8387: mov ebp, eax */ r_ebp = r_eax;
    /* 006b8389: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b838c: add ebp, 0x21c */ {  u32 a = r_ebp; u32 b = 0x21cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 006b8392: je 0x6b83fe */ if (fZ) goto L_006b83fe;
L_006b8394:; BB(0x006b8394);
    /* 006b8394: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b8397: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b839cu); f_005d6a3c();
    /* 006b839c: mov edi, dword ptr [0xa954b0] */ r_edi = R32((u32)(0xa954b0u));
    /* 006b83a2: mov edx, dword ptr [edi + ebx*4] */ r_edx = R32((u32)(r_edi+r_ebx*4));
    /* 006b83a5: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 006b83a8: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 006b83ab: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b83ae: mov edx, dword ptr [edi + edx*4] */ r_edx = R32((u32)(r_edi+r_edx*4));
    /* 006b83b1: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b83b5: lea edx, [ebx + 2] */ r_edx = (u32)(r_ebx+0x2u);
    /* 006b83b8: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b83bb: mov edx, dword ptr [edi + edx*4] */ r_edx = R32((u32)(r_edi+r_edx*4));
    /* 006b83be: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b83c2: lea ebx, [ebx + 3] */ r_ebx = (u32)(r_ebx+0x3u);
    /* 006b83c5: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b83c8: mov edx, dword ptr [edi + ebx*4] */ r_edx = R32((u32)(r_edi+r_ebx*4));
    /* 006b83cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b83cd: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b83d1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b83d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b83d5: call 0x6c8970 */ r_esp -= 4; W32(r_esp, 0x6b83dau); f_006c8970();
    /* 006b83da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b83dc: je 0x6b83f2 */ if (fZ) goto L_006b83f2;
L_006b83de:; BB(0x006b83de);
    /* 006b83de: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b83e3: mov dword ptr [eax + esi*4], 1 */ W32((u32)(r_eax+r_esi*4), 0x1u);
    /* 006b83ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b83ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b83ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b83ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b83f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b83f1: ret  */ FN_RET(0x006b8360); r_esp += 4; return;
L_006b83f2:; BB(0x006b83f2);
    /* 006b83f2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b83f7: mov dword ptr [eax + esi*4], 0 */ W32((u32)(r_eax+r_esi*4), 0x0u);
L_006b83fe:; BB(0x006b83fe);
    /* 006b83fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8401: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b8405: ret  */ FN_RET(0x006b8360); r_esp += 4; return;
}

void f_006b83a8(void)
{
    FN_ENTER(0x006b83a8);
    /* 006b83a8: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 006b83ab: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b83ae: mov edx, dword ptr [edi + edx*4] */ r_edx = R32((u32)(r_edi+r_edx*4));
    /* 006b83b1: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b83b5: lea edx, [ebx + 2] */ r_edx = (u32)(r_ebx+0x2u);
    /* 006b83b8: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b83bb: mov edx, dword ptr [edi + edx*4] */ r_edx = R32((u32)(r_edi+r_edx*4));
    /* 006b83be: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b83c2: lea ebx, [ebx + 3] */ r_ebx = (u32)(r_ebx+0x3u);
    /* 006b83c5: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b83c8: mov edx, dword ptr [edi + ebx*4] */ r_edx = R32((u32)(r_edi+r_ebx*4));
    /* 006b83cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b83cd: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b83d1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b83d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b83d5: call 0x6c8970 */ r_esp -= 4; W32(r_esp, 0x6b83dau); f_006c8970();
    /* 006b83da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b83dc: je 0x6b83f2 */ if (fZ) goto L_006b83f2;
L_006b83de:; BB(0x006b83de);
    /* 006b83de: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b83e3: mov dword ptr [eax + esi*4], 1 */ W32((u32)(r_eax+r_esi*4), 0x1u);
    /* 006b83ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b83ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b83ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b83ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b83f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b83f1: ret  */ FN_RET(0x006b83a8); r_esp += 4; return;
L_006b83f2:; BB(0x006b83f2);
    /* 006b83f2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b83f7: mov dword ptr [eax + esi*4], 0 */ W32((u32)(r_eax+r_esi*4), 0x0u);
    /* 006b83fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8401: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b8405: ret  */ FN_RET(0x006b83a8); r_esp += 4; return;
}

void f_006b8408(void)
{
    FN_ENTER(0x006b8408);
    /* 006b8408: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8409: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b840a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b840c: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b8411: mov ebx, eax */ r_ebx = r_eax;
    /* 006b8413: mov esi, edx */ r_esi = r_edx;
L_006b8415:; BB(0x006b8415);
    /* 006b8415: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8416: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b841bu); f_0068d5a8();
    /* 006b841b: mov edx, eax */ r_edx = r_eax;
    /* 006b841d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8420: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b8426: mov eax, esi */ r_eax = r_esi;
    /* 006b8428: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006b842d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b842f: je 0x6b8446 */ if (fZ) goto L_006b8446;
L_006b8431:; BB(0x006b8431);
    /* 006b8431: mov dword ptr [ecx + eax*4], 1 */ W32((u32)(r_ecx+r_eax*4), 0x1u);
L_006b8438:; BB(0x006b8438);
    /* 006b8438: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b843b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b843e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b8441: jl 0x6b8415 */ if ((fS!=fO)) goto L_006b8415;
L_006b8443:; BB(0x006b8443);
    /* 006b8443: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8444: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8445: ret  */ FN_RET(0x006b8408); r_esp += 4; return;
L_006b8446:; BB(0x006b8446);
    /* 006b8446: mov dword ptr [ecx + eax*4], 0 */ W32((u32)(r_ecx+r_eax*4), 0x0u);
    /* 006b844d: jmp 0x6b8438 */ goto L_006b8438;
}

void f_006b8450(void)
{
    FN_ENTER(0x006b8450);
    /* 006b8450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b8451: mov ebp, esp */ r_ebp = r_esp;
    /* 006b8453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b8455: push 0x8ebf70 */ { u32 v = 0x8ebf70u; r_esp -= 4; W32(r_esp, v); }
    /* 006b845a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b8460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b8461: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b8468: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b846b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b846e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006b8471: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006b8474: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006b8477: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b8479: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6b847eu); f_0073ec50();
    /* 006b847e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8484: push 0x969800 */ { u32 v = 0x969800u; r_esp -= 4; W32(r_esp, v); }
    /* 006b8489: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b848a: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x6b848fu); f_0074aff8();
    /* 006b848f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8492: mov dword ptr [0xa95498], eax */ W32((u32)(0xa95498u), r_eax);
    /* 006b8497: mov ecx, eax */ r_ecx = r_eax;
    /* 006b8499: call 0x74b2a4 */ r_esp -= 4; W32(r_esp, 0x6b849eu); f_0074b2a4();
    /* 006b849e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006b84a5: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b84aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b84afu); f_005caba4();
    /* 006b84af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b84b0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006b84b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b84b5: je 0x6b84f9 */ if (fZ) goto L_006b84f9;
L_006b84b7:; BB(0x006b84b7);
    /* 006b84b7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006b84be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b84c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006b84c7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6b84ccu); f_0073ec50();
    /* 006b84cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b84cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b84d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b84d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b84d7: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6b84dcu); f_00725d18();
    /* 006b84dc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b84df: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006b84e6:; BB(0x006b84e6);
    /* 006b84e6: mov dword ptr [0xa9549c], eax */ W32((u32)(0xa9549cu), r_eax);
    /* 006b84eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b84ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b84f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006b84f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b84f8: ret  */ FN_RET(0x006b8450); r_esp += 4; return;
L_006b84f9:; BB(0x006b84f9);
    /* 006b84f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b84fb: jmp 0x6b84e6 */ goto L_006b84e6;
}

void f_006b8500(void)
{
    FN_ENTER(0x006b8500);
    /* 006b8500: mov eax, dword ptr [0xa9549c] */ r_eax = R32((u32)(0xa9549cu));
    /* 006b8505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8507: je 0x6b8521 */ if (fZ) goto L_006b8521;
L_006b8509:; BB(0x006b8509);
    /* 006b8509: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b850e: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8513: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8516: mov ecx, dword ptr [0xa95498] */ r_ecx = R32((u32)(0xa95498u));
    /* 006b851c: call 0x74b854 */ r_esp -= 4; W32(r_esp, 0x6b8521u); f_0074b854();
L_006b8521:; BB(0x006b8521);
    /* 006b8521: ret  */ FN_RET(0x006b8500); r_esp += 4; return;
}

void f_006b8524(void)
{
    FN_ENTER(0x006b8524);
    /* 006b8524: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8529: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b852e: mov byte ptr [0xa954b4], dl */ W8((u32)(0xa954b4u), (u8)r_edx);
    /* 006b8534: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b853b: mov dword ptr [0xa954a0], 0xc */ W32((u32)(0xa954a0u), 0xcu);
    /* 006b8545: call 0x71802c */ r_esp -= 4; W32(r_esp, 0x6b854au); f_0071802c();
    /* 006b854a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8550: call 0x718198 */ r_esp -= 4; W32(r_esp, 0x6b8555u); f_00718198();
    /* 006b8555: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8556: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6b855bu); f_00717d68();
    /* 006b855b: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006b8561: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8563: je 0x6b8572 */ if (fZ) goto L_006b8572;
L_006b8565:; BB(0x006b8565);
    /* 006b8565: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006b8569: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b856e: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006b8572:; BB(0x006b8572);
    /* 006b8572: ret  */ FN_RET(0x006b8524); r_esp += 4; return;
}

void f_006b8574(void)
{
    FN_ENTER(0x006b8574);
    /* 006b8574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b8575: mov ebp, esp */ r_ebp = r_esp;
    /* 006b8577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b8579: push 0x8ebf98 */ { u32 v = 0x8ebf98u; r_esp -= 4; W32(r_esp, v); }
    /* 006b857e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b8584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b8585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b858c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b858f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b8592: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 006b8595: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 006b8598: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006b859b: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b85a0: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b85a6: mov ecx, dword ptr [0xa954d4] */ r_ecx = R32((u32)(0xa954d4u));
    /* 006b85ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006b85b3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b85b6: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b85bb: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006b85be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006b85c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006b85c4: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b85c9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006b85cc: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b85ce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b85d3u); f_005caba4();
    /* 006b85d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b85d4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006b85d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b85d9: je 0x6b8623 */ if (fZ) goto L_006b8623;
L_006b85db:; BB(0x006b85db);
    /* 006b85db: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006b85e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b85e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b85ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b85ef: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b85f2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b85f5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b85f8: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b85fb: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b85fe: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006b8601: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b8604: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b860a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b860b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b860c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b860d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b860e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b860f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b8611: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8617: call 0x788ae4 */ r_esp -= 4; W32(r_esp, 0x6b861cu); f_00788ae4();
    /* 006b861c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006b8623:; BB(0x006b8623);
    /* 006b8623: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006b8626: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006b8629: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b862c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b862f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b8636: mov esp, ebp */ r_esp = r_ebp;
    /* 006b8638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8639: ret  */ FN_RET(0x006b8574); r_esp += 4; return;
}

void f_006b863c(void) /* sub_6B863C */
{
    FN_ENTER(0x006b863c);
    /* 006b863c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b863d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b863e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b863f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8640: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8643: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b8648: mov edi, dword ptr [0xa954d0] */ r_edi = R32((u32)(0xa954d0u));
    /* 006b864e: mov esi, dword ptr [0xa954d4] */ r_esi = R32((u32)(0xa954d4u));
    /* 006b8654: mov edx, dword ptr [0xa954d8] */ r_edx = R32((u32)(0xa954d8u));
    /* 006b865a: mov ebp, dword ptr [0xa954dc] */ r_ebp = R32((u32)(0xa954dcu));
    /* 006b8660: mov ebx, dword ptr [0xa954e0] */ r_ebx = R32((u32)(0xa954e0u));
    /* 006b8666: mov ecx, dword ptr [0xa95480] */ r_ecx = R32((u32)(0xa95480u));
    /* 006b866c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006b8670: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8672: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006b8676: je 0x6b867d */ if (fZ) goto L_006b867d;
L_006b8678:; BB(0x006b8678);
    /* 006b8678: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b867du); f_007127b0();
L_006b867d:; BB(0x006b867d);
    /* 006b867d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006b8681: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006b8685: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006b8689: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 006b868d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b8690: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b8692: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006b8695: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006b8699: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006b869d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b86a1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b86a4: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b86a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b86a8: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 006b86ac: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b86ae: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b86b2: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006b86b6: fadd dword ptr [0x96993c] */ ST(0) = ST(0) + R_F32((u32)(0x96993cu));
    /* 006b86bc: lea esi, [ecx + ecx*4] */ r_esi = (u32)(r_ecx+r_ecx*4);
    /* 006b86bf: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b86c3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b86c5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b86c7: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 006b86cb: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006b86cf: fadd dword ptr [0x969938] */ ST(0) = ST(0) + R_F32((u32)(0x969938u));
    /* 006b86d5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b86d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b86da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b86db: call 0x73c9cc */ r_esp -= 4; W32(r_esp, 0x6b86e0u); f_0073c9cc();
    /* 006b86e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b86e3: mov dword ptr [0xa95480], eax */ W32((u32)(0xa95480u), r_eax);
    /* 006b86e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b86e9: mov ecx, eax */ r_ecx = r_eax;
    /* 006b86eb: call 0x73cb1c */ r_esp -= 4; W32(r_esp, 0x6b86f0u); f_0073cb1c();
    /* 006b86f0: mov ecx, dword ptr [0xa95480] */ r_ecx = R32((u32)(0xa95480u));
    /* 006b86f6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b86f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b86f9: call 0x73cadc */ r_esp -= 4; W32(r_esp, 0x6b86feu); f_0073cadc();
    /* 006b86fe: mov dword ptr [0xa954a0], 4 */ W32((u32)(0xa954a0u), 0x4u);
    /* 006b8708: call 0x71802c */ r_esp -= 4; W32(r_esp, 0x6b870du); f_0071802c();
    /* 006b870d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8713: call 0x718198 */ r_esp -= 4; W32(r_esp, 0x6b8718u); f_00718198();
    /* 006b8718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8719: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6b871eu); f_00717d68();
    /* 006b871e: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006b8724: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8726: je 0x6b8735 */ if (fZ) goto L_006b8735;
L_006b8728:; BB(0x006b8728);
    /* 006b8728: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006b872c: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b8731: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006b8735:; BB(0x006b8735);
    /* 006b8735: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8738: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b873a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b873b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b873c: ret  */ FN_RET(0x006b863c); r_esp += 4; return;
}

void f_006b8740(void) /* sub_6B8740 */
{
    FN_ENTER(0x006b8740);
    /* 006b8740: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8741: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8742: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b8743: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8744: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8745: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b874a: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b874d: mov edi, dword ptr [0xa954d0] */ r_edi = R32((u32)(0xa954d0u));
    /* 006b8753: jl 0x6b87d5 */ if ((fS!=fO)) goto L_006b87d5;
L_006b8759:; BB(0x006b8759);
    /* 006b8759: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 006b875f: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 006b8765: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 006b876a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b876c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b876e: jge 0x6b87d3 */ if ((fS==fO)) goto L_006b87d3;
L_006b8770:; BB(0x006b8770);
    /* 006b8770: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_006b8773:; BB(0x006b8773);
    /* 006b8773: mov ebx, dword ptr [ecx*4 + 0xaad720] */ r_ebx = R32((u32)(r_ecx*4+0xaad720u));
    /* 006b877a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b877c: je 0x6b87c9 */ if (fZ) goto L_006b87c9;
L_006b877e:; BB(0x006b877e);
    /* 006b877e: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006b8782: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b8788: jge 0x6b87ba */ if ((fS==fO)) goto L_006b87ba;
L_006b878a:; BB(0x006b878a);
    /* 006b878a: mov esi, dword ptr [ebx + 0x398] */ r_esi = R32((u32)(r_ebx+0x398u));
    /* 006b8790: cmp eax, dword ptr [ebx + 0x3b4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x3b4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8796: jne 0x6b87c9 */ if (!fZ) goto L_006b87c9;
L_006b8798:; BB(0x006b8798);
    /* 006b8798: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b879a: jne 0x6b87f5 */ if (!fZ) goto L_006b87f5;
L_006b879c:; BB(0x006b879c);
    /* 006b879c: mov ebx, dword ptr [0xaafdb8] */ r_ebx = R32((u32)(0xaafdb8u));
    /* 006b87a2: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b87a5: je 0x6b87ae */ if (fZ) goto L_006b87ae;
L_006b87a7:; BB(0x006b87a7);
    /* 006b87a7: mov eax, edi */ r_eax = r_edi;
    /* 006b87a9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006b87ac: jmp 0x6b87d5 */ goto L_006b87d5;
L_006b87ae:; BB(0x006b87ae);
    /* 006b87ae: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b87b4: jne 0x6b87c9 */ if (!fZ) goto L_006b87c9;
L_006b87b6:; BB(0x006b87b6);
    /* 006b87b6: mov ebp, edi */ r_ebp = r_edi;
    /* 006b87b8: jmp 0x6b87c9 */ goto L_006b87c9;
L_006b87ba:; BB(0x006b87ba);
    /* 006b87ba: cmp eax, dword ptr [ebx + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b87c0: jne 0x6b87c9 */ if (!fZ) goto L_006b87c9;
L_006b87c2:; BB(0x006b87c2);
    /* 006b87c2: mov eax, edi */ r_eax = r_edi;
    /* 006b87c4: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006b87c7: jmp 0x6b87d5 */ goto L_006b87d5;
L_006b87c9:; BB(0x006b87c9);
    /* 006b87c9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b87cc: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b87ce: jl 0x6b8773 */ if ((fS!=fO)) goto L_006b8773;
L_006b87d0:; BB(0x006b87d0);
    /* 006b87d0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006b87d3:; BB(0x006b87d3);
    /* 006b87d3: mov eax, ebp */ r_eax = r_ebp;
L_006b87d5:; BB(0x006b87d5);
    /* 006b87d5: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b87da: je 0x6b87ef */ if (fZ) goto L_006b87ef;
L_006b87dc:; BB(0x006b87dc);
    /* 006b87dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b87dd: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 006b87e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b87e1: call 0x7184b4 */ r_esp -= 4; W32(r_esp, 0x6b87e6u); f_007184b4();
    /* 006b87e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b87e7: call 0x718930 */ r_esp -= 4; W32(r_esp, 0x6b87ecu); f_00718930();
    /* 006b87ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006b87ef:; BB(0x006b87ef);
    /* 006b87ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b87f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b87f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b87f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b87f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b87f4: ret  */ FN_RET(0x006b8740); r_esp += 4; return;
L_006b87f5:; BB(0x006b87f5);
    /* 006b87f5: mov eax, edi */ r_eax = r_edi;
    /* 006b87f7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006b87fa: jmp 0x6b87d5 */ goto L_006b87d5;
}

void f_006b87fc(void)
{
    FN_ENTER(0x006b87fc);
    /* 006b87fc: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8801: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b8806: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006b8809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b880b: je 0x6b8829 */ if (fZ) goto L_006b8829;
L_006b880d:; BB(0x006b880d);
    /* 006b880d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8810: jne 0x6b881b */ if (!fZ) goto L_006b881b;
L_006b8812:; BB(0x006b8812);
    /* 006b8812: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b8814: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x6b8819u); f_0080c304();
    /* 006b8819: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b881a: ret  */ FN_RET(0x006b87fc); r_esp += 4; return;
L_006b881b:; BB(0x006b881b);
    /* 006b881b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b881e: jne 0x6b8831 */ if (!fZ) goto L_006b8831;
L_006b8820:; BB(0x006b8820);
    /* 006b8820: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006b8822: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x6b8827u); f_0080c304();
    /* 006b8827: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8828: ret  */ FN_RET(0x006b87fc); r_esp += 4; return;
L_006b8829:; BB(0x006b8829);
    /* 006b8829: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b882b: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x6b8830u); f_0080c304();
    /* 006b8830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b8831:; BB(0x006b8831);
    /* 006b8831: ret  */ FN_RET(0x006b87fc); r_esp += 4; return;
}

void f_006b8834(void) /* sub_6B8834 */
{
    FN_ENTER(0x006b8834);
    /* 006b8834: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8835: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8836: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b8837: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8838: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b883b: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b8840: mov edi, dword ptr [0xa954d0] */ r_edi = R32((u32)(0xa954d0u));
    /* 006b8846: mov esi, dword ptr [0xa954d4] */ r_esi = R32((u32)(0xa954d4u));
    /* 006b884c: mov edx, dword ptr [0xa954d8] */ r_edx = R32((u32)(0xa954d8u));
    /* 006b8852: mov ecx, dword ptr [0xa954dc] */ r_ecx = R32((u32)(0xa954dcu));
    /* 006b8858: mov ebp, dword ptr [0xa954e4] */ r_ebp = R32((u32)(0xa954e4u));
    /* 006b885e: mov ebx, dword ptr [0xa954e8] */ r_ebx = R32((u32)(0xa954e8u));
    /* 006b8864: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006b8868: mov eax, dword ptr [0xa954e0] */ r_eax = R32((u32)(0xa954e0u));
    /* 006b886d: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006b8871: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 006b8875: mov ecx, dword ptr [0xa95480] */ r_ecx = R32((u32)(0xa95480u));
    /* 006b887b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006b887f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8881: je 0x6b8888 */ if (fZ) goto L_006b8888;
L_006b8883:; BB(0x006b8883);
    /* 006b8883: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b8888u); f_007127b0();
L_006b8888:; BB(0x006b8888);
    /* 006b8888: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006b888c: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006b8890: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006b8894: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 006b8898: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b889b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b889d: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006b88a0: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006b88a4: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006b88a8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b88ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b88af: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b88b1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b88b3: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 006b88b7: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b88b9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b88bd: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006b88c1: fadd dword ptr [0x969934] */ ST(0) = ST(0) + R_F32((u32)(0x969934u));
    /* 006b88c7: lea esi, [ecx + ecx*4] */ r_esi = (u32)(r_ecx+r_ecx*4);
    /* 006b88ca: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b88ce: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b88d0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b88d2: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 006b88d6: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006b88da: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b88dc: fadd dword ptr [0x969930] */ ST(0) = ST(0) + R_F32((u32)(0x969930u));
    /* 006b88e2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b88e6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b88e8: add ebp, dword ptr [0xa954b0] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa954b0u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b88ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b88ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b88f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b88f1: call 0x73cba0 */ r_esp -= 4; W32(r_esp, 0x6b88f6u); f_0073cba0();
    /* 006b88f6: mov ebp, eax */ r_ebp = r_eax;
    /* 006b88f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b88fb: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006b88ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8900: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b8902: call 0x73cb1c */ r_esp -= 4; W32(r_esp, 0x6b8907u); f_0073cb1c();
    /* 006b8907: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 006b8909: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b890a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b890c: call 0x73cadc */ r_esp -= 4; W32(r_esp, 0x6b8911u); f_0073cadc();
    /* 006b8911: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006b8915: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8916: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b8918: call 0x73ccd4 */ r_esp -= 4; W32(r_esp, 0x6b891du); f_0073ccd4();
    /* 006b891d: mov dword ptr [0xa95480], ebp */ W32((u32)(0xa95480u), r_ebp);
    /* 006b8923: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8926: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8928: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8929: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b892a: ret  */ FN_RET(0x006b8834); r_esp += 4; return;
}

void f_006b892c(void) /* sub_6B892C */
{
    FN_ENTER(0x006b892c);
    /* 006b892c: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b8931: mov edx, dword ptr [0xa954b8] */ r_edx = R32((u32)(0xa954b8u));
    /* 006b8937: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006b893a: mov dword ptr [0xa954c8], 0 */ W32((u32)(0xa954c8u), 0x0u);
    /* 006b8944: mov dword ptr [edx*4 + 0xa95380], ecx */ W32((u32)(r_edx*4+0xa95380u), r_ecx);
    /* 006b894b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006b894e: mov dword ptr [edx*4 + 0xa95384], ecx */ W32((u32)(r_edx*4+0xa95384u), r_ecx);
    /* 006b8955: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006b8958: mov dword ptr [edx*4 + 0xa95388], ecx */ W32((u32)(r_edx*4+0xa95388u), r_ecx);
    /* 006b895f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006b8962: mov dword ptr [edx*4 + 0xa9538c], ecx */ W32((u32)(r_edx*4+0xa9538cu), r_ecx);
    /* 006b8969: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006b896c: mov dword ptr [edx*4 + 0xa95390], ecx */ W32((u32)(r_edx*4+0xa95390u), r_ecx);
    /* 006b8973: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006b8976: mov dword ptr [edx*4 + 0xa95394], ecx */ W32((u32)(r_edx*4+0xa95394u), r_ecx);
    /* 006b897d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006b8980: lea eax, [edx + 7] */ r_eax = (u32)(r_edx+0x7u);
    /* 006b8983: mov dword ptr [0xa954b8], eax */ W32((u32)(0xa954b8u), r_eax);
    /* 006b8988: mov dword ptr [edx*4 + 0xa95398], ecx */ W32((u32)(r_edx*4+0xa95398u), r_ecx);
    /* 006b898f: ret  */ FN_RET(0x006b892c); r_esp += 4; return;
}

void f_006b8990(void) /* sub_6B8990 */
{
    FN_ENTER(0x006b8990);
    /* 006b8990: mov eax, dword ptr [0xa954b8] */ r_eax = R32((u32)(0xa954b8u));
    /* 006b8995: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b8997: jle 0x6b8a5a */ if ((fZ||fS!=fO)) goto L_006b8a5a;
L_006b899d:; BB(0x006b899d);
    /* 006b899d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b89a0: mov ecx, dword ptr [eax*4 + 0xa95380] */ r_ecx = R32((u32)(r_eax*4+0xa95380u));
    /* 006b89a7: mov dword ptr [0xa954b8], eax */ W32((u32)(0xa954b8u), r_eax);
L_006b89ac:; BB(0x006b89ac);
    /* 006b89ac: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b89b2: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006b89b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b89b7: jle 0x6b8a53 */ if ((fZ||fS!=fO)) goto L_006b8a53;
L_006b89bd:; BB(0x006b89bd);
    /* 006b89bd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b89c0: mov ecx, dword ptr [eax*4 + 0xa95380] */ r_ecx = R32((u32)(r_eax*4+0xa95380u));
    /* 006b89c7: mov dword ptr [0xa954b8], eax */ W32((u32)(0xa954b8u), r_eax);
L_006b89cc:; BB(0x006b89cc);
    /* 006b89cc: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006b89cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b89d1: jle 0x6b8a4f */ if ((fZ||fS!=fO)) goto L_006b8a4f;
L_006b89d3:; BB(0x006b89d3);
    /* 006b89d3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b89d6: mov ecx, dword ptr [eax*4 + 0xa95380] */ r_ecx = R32((u32)(r_eax*4+0xa95380u));
    /* 006b89dd: mov dword ptr [0xa954b8], eax */ W32((u32)(0xa954b8u), r_eax);
L_006b89e2:; BB(0x006b89e2);
    /* 006b89e2: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006b89e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b89e7: jle 0x6b8a4b */ if ((fZ||fS!=fO)) goto L_006b8a4b;
L_006b89e9:; BB(0x006b89e9);
    /* 006b89e9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b89ec: mov ecx, dword ptr [eax*4 + 0xa95380] */ r_ecx = R32((u32)(r_eax*4+0xa95380u));
    /* 006b89f3: mov dword ptr [0xa954b8], eax */ W32((u32)(0xa954b8u), r_eax);
L_006b89f8:; BB(0x006b89f8);
    /* 006b89f8: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006b89fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b89fd: jle 0x6b8a47 */ if ((fZ||fS!=fO)) goto L_006b8a47;
L_006b89ff:; BB(0x006b89ff);
    /* 006b89ff: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b8a02: mov ecx, dword ptr [eax*4 + 0xa95380] */ r_ecx = R32((u32)(r_eax*4+0xa95380u));
    /* 006b8a09: mov dword ptr [0xa954b8], eax */ W32((u32)(0xa954b8u), r_eax);
L_006b8a0e:; BB(0x006b8a0e);
    /* 006b8a0e: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006b8a11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b8a13: jle 0x6b8a43 */ if ((fZ||fS!=fO)) goto L_006b8a43;
L_006b8a15:; BB(0x006b8a15);
    /* 006b8a15: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b8a18: mov ecx, dword ptr [eax*4 + 0xa95380] */ r_ecx = R32((u32)(r_eax*4+0xa95380u));
    /* 006b8a1f: mov dword ptr [0xa954b8], eax */ W32((u32)(0xa954b8u), r_eax);
L_006b8a24:; BB(0x006b8a24);
    /* 006b8a24: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006b8a27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8a29: jle 0x6b8a3f */ if ((fZ||fS!=fO)) goto L_006b8a3f;
L_006b8a2b:; BB(0x006b8a2b);
    /* 006b8a2b: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006b8a2e: mov eax, dword ptr [eax*4 + 0xa9537c] */ r_eax = R32((u32)(r_eax*4+0xa9537cu));
    /* 006b8a35: mov dword ptr [0xa954b8], ecx */ W32((u32)(0xa954b8u), r_ecx);
L_006b8a3b:; BB(0x006b8a3b);
    /* 006b8a3b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006b8a3e: ret  */ FN_RET(0x006b8990); r_esp += 4; return;
L_006b8a3f:; BB(0x006b8a3f);
    /* 006b8a3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8a41: jmp 0x6b8a3b */ goto L_006b8a3b;
L_006b8a43:; BB(0x006b8a43);
    /* 006b8a43: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8a45: jmp 0x6b8a24 */ goto L_006b8a24;
L_006b8a47:; BB(0x006b8a47);
    /* 006b8a47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8a49: jmp 0x6b8a0e */ goto L_006b8a0e;
L_006b8a4b:; BB(0x006b8a4b);
    /* 006b8a4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8a4d: jmp 0x6b89f8 */ goto L_006b89f8;
L_006b8a4f:; BB(0x006b8a4f);
    /* 006b8a4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8a51: jmp 0x6b89e2 */ goto L_006b89e2;
L_006b8a53:; BB(0x006b8a53);
    /* 006b8a53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8a55: jmp 0x6b89cc */ goto L_006b89cc;
L_006b8a5a:; BB(0x006b8a5a);
    /* 006b8a5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8a5c: jmp 0x6b89ac */ goto L_006b89ac;
}

void f_006b8a64(void) /* sub_6B8A64 */
{
    FN_ENTER(0x006b8a64);
    /* 006b8a64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8a65: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8a6b: mov ecx, dword ptr [0xa954cc] */ r_ecx = R32((u32)(0xa954ccu));
    /* 006b8a71: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006b8a74: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b8a79: mov dword ptr [0xa954c8], 0 */ W32((u32)(0xa954c8u), 0x0u);
    /* 006b8a83: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006b8a86: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b8a8b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006b8a8e: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b8a93: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006b8a96: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b8a9b: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006b8a9e: mov eax, dword ptr [0xa954e0] */ r_eax = R32((u32)(0xa954e0u));
    /* 006b8aa3: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006b8aa6: mov eax, dword ptr [0xa954e4] */ r_eax = R32((u32)(0xa954e4u));
    /* 006b8aab: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006b8aae: mov eax, dword ptr [0xa954a4] */ r_eax = R32((u32)(0xa954a4u));
    /* 006b8ab3: call 0x6b1f04 */ r_esp -= 4; W32(r_esp, 0x6b8ab8u); f_006b1f04();
    /* 006b8ab8: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b8abd: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006b8ac2: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b8ac5: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
    /* 006b8acb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8acc: ret  */ FN_RET(0x006b8a64); r_esp += 4; return;
}

void f_006b8ad0(void) /* sub_6B8AD0 */
{
    FN_ENTER(0x006b8ad0);
    /* 006b8ad0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8ad5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b8ada: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006b8add: mov edx, dword ptr [0xa954c8] */ r_edx = R32((u32)(0xa954c8u));
    /* 006b8ae3: mov dword ptr [edx*4 + 0xa954cc], eax */ W32((u32)(r_edx*4+0xa954ccu), r_eax);
    /* 006b8aea: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 006b8aed: mov dword ptr [0xa954c8], ecx */ W32((u32)(0xa954c8u), r_ecx);
    /* 006b8af3: ret  */ FN_RET(0x006b8ad0); r_esp += 4; return;
}

void f_006b8af4(void) /* sub_6B8AF4 */
{
    FN_ENTER(0x006b8af4);
    /* 006b8af4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006b8af8: mov ecx, dword ptr [0xa954c8] */ r_ecx = R32((u32)(0xa954c8u));
    /* 006b8afe: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 006b8b01: mov dword ptr [0xa954c8], eax */ W32((u32)(0xa954c8u), r_eax);
    /* 006b8b06: mov dword ptr [ecx*4 + 0xa954cc], edx */ W32((u32)(r_ecx*4+0xa954ccu), r_edx);
    /* 006b8b0d: ret  */ FN_RET(0x006b8af4); r_esp += 4; return;
}

void f_006b8b10(void) /* sub_6B8B10 */
{
    FN_ENTER(0x006b8b10);
    /* 006b8b10: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8b15: mov ecx, dword ptr [0xa954c8] */ r_ecx = R32((u32)(0xa954c8u));
    /* 006b8b1b: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 006b8b1e: mov dword ptr [0xa954c8], eax */ W32((u32)(0xa954c8u), r_eax);
    /* 006b8b23: mov dword ptr [ecx*4 + 0xa954cc], edx */ W32((u32)(r_ecx*4+0xa954ccu), r_edx);
    /* 006b8b2a: ret  */ FN_RET(0x006b8b10); r_esp += 4; return;
}

void f_006b8b2c(void) /* sub_6B8B2C */
{
    FN_ENTER(0x006b8b2c);
    /* 006b8b2c: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 006b8b31: mov ecx, dword ptr [0xa954c8] */ r_ecx = R32((u32)(0xa954c8u));
    /* 006b8b37: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 006b8b3a: mov dword ptr [0xa954c8], eax */ W32((u32)(0xa954c8u), r_eax);
    /* 006b8b3f: mov dword ptr [ecx*4 + 0xa954cc], edx */ W32((u32)(r_ecx*4+0xa954ccu), r_edx);
    /* 006b8b46: ret  */ FN_RET(0x006b8b2c); r_esp += 4; return;
}

void f_006b8b48(void) /* sub_6B8B48 */
{
    FN_ENTER(0x006b8b48);
    /* 006b8b48: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8b4d: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006b8b50: mov eax, dword ptr [0xa954c8] */ r_eax = R32((u32)(0xa954c8u));
    /* 006b8b55: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8b57: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 006b8b5a: add ecx, dword ptr [0xa954b0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa954b0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8b60: mov dword ptr [eax*4 + 0xa954cc], ecx */ W32((u32)(r_eax*4+0xa954ccu), r_ecx);
    /* 006b8b67: mov dword ptr [0xa954c8], edx */ W32((u32)(0xa954c8u), r_edx);
    /* 006b8b6d: ret  */ FN_RET(0x006b8b48); r_esp += 4; return;
}

void f_006b8b70(void) /* sub_6B8B70 */
{
    FN_ENTER(0x006b8b70);
    /* 006b8b70: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b8b75: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006b8b78: mov eax, dword ptr [0xa954c8] */ r_eax = R32((u32)(0xa954c8u));
    /* 006b8b7d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b8b7f: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 006b8b82: add ecx, dword ptr [0xa954ac] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa954acu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8b88: mov dword ptr [eax*4 + 0xa954cc], ecx */ W32((u32)(r_eax*4+0xa954ccu), r_ecx);
    /* 006b8b8f: mov dword ptr [0xa954c8], edx */ W32((u32)(0xa954c8u), r_edx);
    /* 006b8b95: ret  */ FN_RET(0x006b8b70); r_esp += 4; return;
}

void f_006b8b98(void)
{
    FN_ENTER(0x006b8b98);
    /* 006b8b98: push 0xa954cc */ { u32 v = 0xa954ccu; r_esp -= 4; W32(r_esp, v); }
    /* 006b8b9d: movzx ecx, word ptr [0xa95588] */ r_ecx = (u32)R16((u32)(0xa95588u));
    /* 006b8ba4: movzx edx, word ptr [0xa954fc] */ r_edx = (u32)R16((u32)(0xa954fcu));
    /* 006b8bab: movzx eax, word ptr [0xa95500] */ r_eax = (u32)R16((u32)(0xa95500u));
    /* 006b8bb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b8bb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8bb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8bb5: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006b8bbb: call 0x7ebc38 */ r_esp -= 4; W32(r_esp, 0x6b8bc0u); f_007ebc38();
    /* 006b8bc0: ret  */ FN_RET(0x006b8b98); r_esp += 4; return;
}

void f_006b8bc4(void)
{
    FN_ENTER(0x006b8bc4);
    /* 006b8bc4: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8bca: call 0x616928 */ r_esp -= 4; W32(r_esp, 0x6b8bcfu); f_00616928();
    /* 006b8bcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8bd0: ret  */ FN_RET(0x006b8bc4); r_esp += 4; return;
}

void f_006b8bd4(void) /* sub_6B8BD4 */
{
    FN_ENTER(0x006b8bd4);
    /* 006b8bd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8bd5: movzx ebx, byte ptr [0xa954cc] */ r_ebx = (u32)R8((u32)(0xa954ccu));
    /* 006b8bdc: movzx eax, word ptr [0xa954d0] */ r_eax = (u32)R16((u32)(0xa954d0u));
    /* 006b8be3: push dword ptr [0xa954d4] */ { u32 v = R32((u32)(0xa954d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b8bea: call 0x616a64 */ r_esp -= 4; W32(r_esp, 0x6b8befu); f_00616a64();
    /* 006b8bef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8bf2: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8bf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8bfa: je 0x6b8c05 */ if (fZ) goto L_006b8c05;
L_006b8bfc:; BB(0x006b8bfc);
    /* 006b8bfc: mov dword ptr [edx + ebx*4], 1 */ W32((u32)(r_edx+r_ebx*4), 0x1u);
    /* 006b8c03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8c04: ret  */ FN_RET(0x006b8bd4); r_esp += 4; return;
L_006b8c05:; BB(0x006b8c05);
    /* 006b8c05: mov dword ptr [edx + ebx*4], 0 */ W32((u32)(r_edx+r_ebx*4), 0x0u);
    /* 006b8c0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8c0d: ret  */ FN_RET(0x006b8bd4); r_esp += 4; return;
}

void f_006b8c10(void)
{
    FN_ENTER(0x006b8c10);
    /* 006b8c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b8c11: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b8c18: movzx ebp, byte ptr [0xa954d0] */ r_ebp = (u32)R8((u32)(0xa954d0u));
    /* 006b8c1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b8c20: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b8c25u); f_0068d5a8();
    /* 006b8c25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8c26: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8c2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8c2e: je 0x6b8c3b */ if (fZ) goto L_006b8c3b;
L_006b8c30:; BB(0x006b8c30);
    /* 006b8c30: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 006b8c36: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 006b8c39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8c3a: ret  */ FN_RET(0x006b8c10); r_esp += 4; return;
L_006b8c3b:; BB(0x006b8c3b);
    /* 006b8c3b: mov dword ptr [edx + ebp*4], 0xffffffff */ W32((u32)(r_edx+r_ebp*4), 0xffffffffu);
    /* 006b8c42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8c43: ret  */ FN_RET(0x006b8c10); r_esp += 4; return;
}

void f_006b8c44(void) /* sub_6B8C44 */
{
    FN_ENTER(0x006b8c44);
    /* 006b8c44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b8c45: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8c48: movzx edx, word ptr [0xa954cc] */ r_edx = (u32)R16((u32)(0xa954ccu));
    /* 006b8c4f: movzx ebp, byte ptr [0xa954d0] */ r_ebp = (u32)R8((u32)(0xa954d0u));
    /* 006b8c56: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b8c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b8c5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8c5b: call 0x77e2e0 */ r_esp -= 4; W32(r_esp, 0x6b8c60u); f_0077e2e0();
    /* 006b8c60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8c63: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b8c65: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b8c67: add ebp, dword ptr [0xa954b0] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa954b0u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b8c6d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b8c70: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006b8c74: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006b8c78: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 006b8c7b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b8c7f: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 006b8c82: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006b8c85: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006b8c88: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006b8c8c: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 006b8c8f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006b8c93: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 006b8c96: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006b8c9a: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 006b8c9d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006b8ca1: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 006b8ca4: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006b8ca8: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 006b8cab: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006b8caf: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 006b8cb2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006b8cb6: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 006b8cb9: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006b8cbd: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 006b8cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 006b8cc4: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006b8cc7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 006b8ccb: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 006b8cce: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 006b8cd2: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 006b8cd5: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8cd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b8cd9: ret  */ FN_RET(0x006b8c44); r_esp += 4; return;
}

void f_006b8cdc(void)
{
    FN_ENTER(0x006b8cdc);
    /* 006b8cdc: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8ce2: call 0x77e128 */ r_esp -= 4; W32(r_esp, 0x6b8ce7u); f_0077e128();
    /* 006b8ce7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8ce8: ret  */ FN_RET(0x006b8cdc); r_esp += 4; return;
}

void f_006b8cec(void)
{
    FN_ENTER(0x006b8cec);
    /* 006b8cec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8ced: movzx esi, byte ptr [0xa954d0] */ r_esi = (u32)R8((u32)(0xa954d0u));
    /* 006b8cf4: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8cfa: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6b8cffu); f_005c5528();
    /* 006b8cff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8d02: je 0x6b8d38 */ if (fZ) goto L_006b8d38;
L_006b8d04:; BB(0x006b8d04);
    /* 006b8d04: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 006b8d0b: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 006b8d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b8d13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8d14: call 0x5c502c */ r_esp -= 4; W32(r_esp, 0x6b8d19u); f_005c502c();
    /* 006b8d19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8d1c: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8d24: je 0x6b8d2f */ if (fZ) goto L_006b8d2f;
L_006b8d26:; BB(0x006b8d26);
    /* 006b8d26: mov dword ptr [edx + esi*4], 1 */ W32((u32)(r_edx+r_esi*4), 0x1u);
    /* 006b8d2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8d2e: ret  */ FN_RET(0x006b8cec); r_esp += 4; return;
L_006b8d2f:; BB(0x006b8d2f);
    /* 006b8d2f: mov dword ptr [edx + esi*4], 0 */ W32((u32)(r_edx+r_esi*4), 0x0u);
    /* 006b8d36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8d37: ret  */ FN_RET(0x006b8cec); r_esp += 4; return;
L_006b8d38:; BB(0x006b8d38);
    /* 006b8d38: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b8d3d: mov dword ptr [eax + esi*4], 0xffffffff */ W32((u32)(r_eax+r_esi*4), 0xffffffffu);
    /* 006b8d44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b8d45: ret  */ FN_RET(0x006b8cec); r_esp += 4; return;
}

void f_006b8d48(void) /* sub_6B8D48 */
{
    FN_ENTER(0x006b8d48);
    /* 006b8d48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b8d49: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8d4c: movzx edi, byte ptr [0xa954d0] */ r_edi = (u32)R8((u32)(0xa954d0u));
    /* 006b8d53: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8d59: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6b8d5eu); f_005c5528();
    /* 006b8d5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8d5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8d61: je 0x6b8d85 */ if (fZ) goto L_006b8d85;
L_006b8d63:; BB(0x006b8d63);
    /* 006b8d63: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b8d66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b8d67: mov ecx, eax */ r_ecx = r_eax;
    /* 006b8d69: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6b8d6eu); f_005c425c();
    /* 006b8d6e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b8d71: call 0x5d29e4 */ r_esp -= 4; W32(r_esp, 0x6b8d76u); f_005d29e4();
    /* 006b8d76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b8d78: je 0x6b8d7e */ if (fZ) goto L_006b8d7e;
L_006b8d7a:; BB(0x006b8d7a);
    /* 006b8d7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b8d7c: jmp 0x6b8d8a */ goto L_006b8d8a;
L_006b8d7e:; BB(0x006b8d7e);
    /* 006b8d7e: mov eax, 1 */ r_eax = 0x1u;
    /* 006b8d83: jmp 0x6b8d8a */ goto L_006b8d8a;
L_006b8d85:; BB(0x006b8d85);
    /* 006b8d85: mov eax, 2 */ r_eax = 0x2u;
L_006b8d8a:; BB(0x006b8d8a);
    /* 006b8d8a: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b8d90: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006b8d93: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8d96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b8d97: ret  */ FN_RET(0x006b8d48); r_esp += 4; return;
}

void f_006b8d98(void) /* sub_6B8D98 */
{
    FN_ENTER(0x006b8d98);
    /* 006b8d98: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8d9b: mov eax, 0x969820 */ r_eax = 0x969820u;
    /* 006b8da0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006b8da2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006b8da5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b8da8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006b8dab: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b8daf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b8db3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006b8db6: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b8dba: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006b8dbd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b8dc1: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006b8dc4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b8dc8: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006b8dcb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b8dcf: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006b8dd2: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006b8dd6: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006b8dd9: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006b8ddd: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006b8de0: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006b8de4: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006b8de7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006b8deb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006b8dee: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006b8df2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006b8df5: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006b8df9: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006b8dfc: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b8e00: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006b8e03: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006b8e07: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006b8e0a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006b8e0e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006b8e11: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 006b8e14: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006b8e18: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006b8e1c: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b8e21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006b8e23: jb 0x6b8e2a */ if (fC) goto L_006b8e2a;
L_006b8e25:; BB(0x006b8e25);
    /* 006b8e25: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006b8e28: jbe 0x6b8e2e */ if ((fC||fZ)) goto L_006b8e2e;
L_006b8e2a:; BB(0x006b8e2a);
    /* 006b8e2a: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8e2d: ret  */ FN_RET(0x006b8d98); r_esp += 4; return;
L_006b8e2e:; BB(0x006b8e2e);
    /* 006b8e2e: mov eax, dword ptr [esp + eax*4] */ r_eax = R32((u32)(r_esp+r_eax*4));
    /* 006b8e31: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 006b8e3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b8e3d: mov dword ptr [0xac9d50], eax */ W32((u32)(0xac9d50u), r_eax);
    /* 006b8e42: mov dword ptr [0xac9d5c], edx */ W32((u32)(0xac9d5cu), r_edx);
    /* 006b8e48: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 006b8e4e: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 006b8e54: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 006b8e5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b8e5d: mov dword ptr [0xac9d54], eax */ W32((u32)(0xac9d54u), r_eax);
    /* 006b8e62: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 006b8e67: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 006b8e6d: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8e70: ret  */ FN_RET(0x006b8d98); r_esp += 4; return;
}

void f_006b8e74(void)
{
    FN_ENTER(0x006b8e74);
    /* 006b8e74: call 0x48eab0 */ r_esp -= 4; W32(r_esp, 0x6b8e79u); f_0048eab0();
    /* 006b8e79: mov edx, eax */ r_edx = r_eax;
    /* 006b8e7b: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b8e80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8e82: je 0x6b8e91 */ if (fZ) goto L_006b8e91;
L_006b8e84:; BB(0x006b8e84);
    /* 006b8e84: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8e89: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b8e90: ret  */ FN_RET(0x006b8e74); r_esp += 4; return;
L_006b8e91:; BB(0x006b8e91);
    /* 006b8e91: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8e96: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b8e9d: ret  */ FN_RET(0x006b8e74); r_esp += 4; return;
}

void f_006b8ea0(void)
{
    FN_ENTER(0x006b8ea0);
    /* 006b8ea0: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8ea6: call 0x6d7370 */ r_esp -= 4; W32(r_esp, 0x6b8eabu); f_006d7370();
    /* 006b8eab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b8eac: ret  */ FN_RET(0x006b8ea0); r_esp += 4; return;
}

void f_006b8eb0(void)
{
    FN_ENTER(0x006b8eb0);
    /* 006b8eb0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b8eb6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b8ebbu); f_0068d5a8();
    /* 006b8ebb: mov edx, eax */ r_edx = r_eax;
    /* 006b8ebd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b8ec0: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b8ec5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b8ec7: je 0x6b8edc */ if (fZ) goto L_006b8edc;
L_006b8ec9:; BB(0x006b8ec9);
    /* 006b8ec9: mov edx, dword ptr [edx + 0xdf4] */ r_edx = R32((u32)(r_edx+0xdf4u));
    /* 006b8ecf: movsx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x1cu));
    /* 006b8ed3: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8ed8: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b8edb: ret  */ FN_RET(0x006b8eb0); r_esp += 4; return;
L_006b8edc:; BB(0x006b8edc);
    /* 006b8edc: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b8ee1: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b8ee8: ret  */ FN_RET(0x006b8eb0); r_esp += 4; return;
}

void f_006b8eec(void) /* sub_6B8EEC */
{
    FN_ENTER(0x006b8eec);
    /* 006b8eec: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8eef: mov byte ptr [esp], 0xd5 */ W8((u32)(r_esp), 0xd5u);
    /* 006b8ef3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b8ef5: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b8efa: mov byte ptr [esp + 1], 0xc */ W8((u32)(r_esp+0x1u), 0xcu);
    /* 006b8eff: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b8f04: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b8f08: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b8f0c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b8f10: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b8f14: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b8f18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b8f1a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006b8f1e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006b8f22: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006b8f26: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006b8f2a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006b8f2e: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b8f33: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b8f39: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b8f3f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b8f44: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b8f49: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b8f4d: movzx edx, word ptr [0xa954e8] */ r_edx = (u32)R16((u32)(0xa954e8u));
    /* 006b8f54: mov byte ptr [esp + 5], cl */ W8((u32)(r_esp+0x5u), (u8)r_ecx);
    /* 006b8f58: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b8f5c: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b8f61: mov byte ptr [esp + 0x18], al */ W8((u32)(r_esp+0x18u), (u8)r_eax);
    /* 006b8f65: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b8f6a: mov byte ptr [esp + 0x19], al */ W8((u32)(r_esp+0x19u), (u8)r_eax);
    /* 006b8f6e: mov eax, dword ptr [0xa954e0] */ r_eax = R32((u32)(0xa954e0u));
    /* 006b8f73: mov byte ptr [esp + 0x1a], al */ W8((u32)(r_esp+0x1au), (u8)r_eax);
    /* 006b8f77: movzx eax, word ptr [0xa954e4] */ r_eax = (u32)R16((u32)(0xa954e4u));
    /* 006b8f7e: mov word ptr [esp + 0x2c], ax */ W16((u32)(r_esp+0x2cu), (u16)r_eax);
    /* 006b8f83: mov word ptr [esp + 0x2e], dx */ W16((u32)(r_esp+0x2eu), (u16)r_edx);
    /* 006b8f88: mov word ptr [0xa95504], ax */ W16((u32)(0xa95504u), (u16)r_eax);
    /* 006b8f8e: mov word ptr [0xa95508], dx */ W16((u32)(0xa95508u), (u16)r_edx);
    /* 006b8f95: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b8f98: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b8f9du); f_008003e0();
    /* 006b8f9d: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8fa0: ret  */ FN_RET(0x006b8eec); r_esp += 4; return;
}

void f_006b8fa4(void) /* sub_6B8FA4 */
{
    FN_ENTER(0x006b8fa4);
    /* 006b8fa4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b8fa7: mov byte ptr [esp], 0xd7 */ W8((u32)(r_esp), 0xd7u);
    /* 006b8fab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b8fad: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b8fb2: mov byte ptr [esp + 1], 7 */ W8((u32)(r_esp+0x1u), 0x7u);
    /* 006b8fb7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b8fbc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b8fc0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b8fc4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b8fc8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b8fcc: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b8fd0: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b8fd5: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b8fdb: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b8fe1: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b8fe6: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b8feb: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b8fef: mov byte ptr [esp + 5], cl */ W8((u32)(r_esp+0x5u), (u8)r_ecx);
    /* 006b8ff3: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b8ff7: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b8ffc: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 006b9001: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b9006: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 006b900b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b900e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b9013u); f_008003e0();
    /* 006b9013: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9016: ret  */ FN_RET(0x006b8fa4); r_esp += 4; return;
}

void f_006b8fa5(void)
{
    FN_ENTER(0x006b8fa5);
    /* 006b8fa5: in al, dx */ UNSUP(0x006b8fa5, "in al, dx");
    /* 006b8fa6: sbb al, 0xc6 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xc6u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006b8fa8: add al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006b8faa: xlatb  */ r_eax = (r_eax & 0xffffff00u) | R8(r_ebx + (r_eax & 0xffu));
    /* 006b8fab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b8fad: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b8fb2: mov byte ptr [esp + 1], 7 */ W8((u32)(r_esp+0x1u), 0x7u);
    /* 006b8fb7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b8fbc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b8fc0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b8fc4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b8fc8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b8fcc: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b8fd0: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b8fd5: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b8fdb: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b8fe1: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b8fe6: mov eax, dword ptr [0xa954d4] */ r_eax = R32((u32)(0xa954d4u));
    /* 006b8feb: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b8fef: mov byte ptr [esp + 5], cl */ W8((u32)(r_esp+0x5u), (u8)r_ecx);
    /* 006b8ff3: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006b8ff7: mov eax, dword ptr [0xa954d8] */ r_eax = R32((u32)(0xa954d8u));
    /* 006b8ffc: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 006b9001: mov eax, dword ptr [0xa954dc] */ r_eax = R32((u32)(0xa954dcu));
    /* 006b9006: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 006b900b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b900e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b9013u); f_008003e0();
    /* 006b9013: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b9016: ret  */ FN_RET(0x006b8fa5); r_esp += 4; return;
}

