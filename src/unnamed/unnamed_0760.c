#include "protos.h"

void f_00760000(void)
{
    FN_ENTER(0x00760000);
    goto L_00760000;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x00760000); r_esp += 4; return;
L_0075ffa5:; BB(0x0075ffa5);
    /* 0075ffa5: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075ffa6: cld  */ rt_df = 0;
    /* 0075ffa7: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ffa9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ffab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffae: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ffb0: lea eax, [edx + 0x54] */ r_eax = (u32)(r_edx+0x54u);
    /* 0075ffb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb5: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x75ffbau); f_00713540();
    /* 0075ffba: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0075ffc1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075ffc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffc7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075ffca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ffd1: mov edx, eax */ r_edx = r_eax;
    /* 0075ffd3: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 0075ffd7: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffdc: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075ffe0: jmp 0x75f3a5 */ goto L_0075f3a5;
L_00760000:; BB(0x00760000);
    /* 00760000: xor al, 0xd8 */ {  u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00760002: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00760003: add al, 0xdf */ {  u32 a = (u8)r_eax; u32 b = 0xdfu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00760005: loopne 0x75ffa5 */ r_ecx--; if (r_ecx && !fZ) goto L_0075ffa5;
    /* 00760007: je 0x76000f */ if (fZ) goto L_0076000f;
L_00760009:; BB(0x00760009);
    /* 00760009: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076000a: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x76000fu); f_00712be4();
L_0076000f:; BB(0x0076000f);
    /* 0076000f: ret 8 */ FN_RET(0x00760000); r_esp += 12; return;
}

void f_00760014(void) /* sub_760014 */
{
    FN_ENTER(0x00760014);
    /* 00760014: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00760018: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 0076001b: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076001e: ja 0x76024f */ if ((!fC&&!fZ)) goto L_0076024f;
L_00760024:; BB(0x00760024);
    /* 00760024: mov eax, dword ptr [edx*4 + 0x974b18] */ r_eax = R32((u32)(r_edx*4+0x974b18u));
    /* 0076002b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x00760014); r_esp += 8; return;
}

void f_0076002d(void)
{
    FN_ENTER(0x0076002d);
    /* 0076002d: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00760030: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760032: je 0x76024f */ if (fZ) goto L_0076024f;
L_00760038:; BB(0x00760038);
    /* 00760038: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076003c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076003e: je 0x760048 */ if (fZ) goto L_00760048;
L_00760040:; BB(0x00760040);
    /* 00760040: call 0x73d18c */ r_esp -= 4; W32(r_esp, 0x760045u); f_0073d18c();
    /* 00760045: ret 4 */ FN_RET(0x0076002d); r_esp += 8; return;
L_00760048:; BB(0x00760048);
    /* 00760048: call 0x73d1a8 */ r_esp -= 4; W32(r_esp, 0x76004du); f_0073d1a8();
    /* 0076004d: ret 4 */ FN_RET(0x0076002d); r_esp += 8; return;
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x0076002d); r_esp += 8; return;
}

void f_00760040(void)
{
    FN_ENTER(0x00760040);
    /* 00760040: call 0x73d18c */ r_esp -= 4; W32(r_esp, 0x760045u); f_0073d18c();
    /* 00760045: ret 4 */ FN_RET(0x00760040); r_esp += 8; return;
}

void f_0076004c(void)
{
    FN_ENTER(0x0076004c);
    /* 0076004c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076004e: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00760050: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 00760053: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760055: je 0x76024f */ if (fZ) goto L_0076024f;
L_0076005b:; BB(0x0076005b);
    /* 0076005b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076005f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760061: je 0x76007a */ if (fZ) goto L_0076007a;
L_00760063:; BB(0x00760063);
    /* 00760063: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0076006a: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760070: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00760077: ret 4 */ FN_RET(0x0076004c); r_esp += 8; return;
L_0076007a:; BB(0x0076007a);
    /* 0076007a: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00760081: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760087: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0076008e: ret 4 */ FN_RET(0x0076004c); r_esp += 8; return;
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x0076004c); r_esp += 8; return;
}

void f_00760050(void)
{
    FN_ENTER(0x00760050);
    /* 00760050: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 00760053: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760055: je 0x76024f */ if (fZ) goto L_0076024f;
L_0076005b:; BB(0x0076005b);
    /* 0076005b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076005f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760061: je 0x76007a */ if (fZ) goto L_0076007a;
L_00760063:; BB(0x00760063);
    /* 00760063: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0076006a: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760070: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00760077: ret 4 */ FN_RET(0x00760050); r_esp += 8; return;
L_0076007a:; BB(0x0076007a);
    /* 0076007a: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00760081: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760087: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0076008e: ret 4 */ FN_RET(0x00760050); r_esp += 8; return;
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x00760050); r_esp += 8; return;
}

void f_00760061(void)
{
    FN_ENTER(0x00760061);
    /* 00760061: je 0x76007a */ if (fZ) goto L_0076007a;
L_00760063:; BB(0x00760063);
    /* 00760063: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0076006a: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760070: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00760077: ret 4 */ FN_RET(0x00760061); r_esp += 8; return;
L_0076007a:; BB(0x0076007a);
    /* 0076007a: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00760081: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760087: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0076008e: ret 4 */ FN_RET(0x00760061); r_esp += 8; return;
}

void f_00760069(void)
{
    FN_ENTER(0x00760069);
    /* 00760069: add byte ptr [ecx + 0xffbfe2], al */ { u32 ad = (u32)(r_ecx+0xffbfe2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0076006f: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00760072: nop  */ ;
    /* 00760073: test byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 00760075: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00760077: ret 4 */ FN_RET(0x00760069); r_esp += 8; return;
}

void f_00760088(void)
{
    FN_ENTER(0x00760088);
    /* 00760088: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 0076008e: ret 4 */ FN_RET(0x00760088); r_esp += 8; return;
}

void f_00760091(void)
{
    FN_ENTER(0x00760091);
    /* 00760091: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 00760094: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760096: je 0x7600c1 */ if (fZ) goto L_007600c1;
L_00760098:; BB(0x00760098);
    /* 00760098: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076009c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076009e: je 0x7600b4 */ if (fZ) goto L_007600b4;
L_007600a0:; BB(0x007600a0);
    /* 007600a0: movzx edx, byte ptr [eax + 0x60] */ r_edx = (u32)R8((u32)(r_eax+0x60u));
    /* 007600a4: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007600a7: je 0x7600c1 */ if (fZ) goto L_007600c1;
L_007600a9:; BB(0x007600a9);
    /* 007600a9: and edx, 0xfb */ {  u32 a = r_edx; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007600af: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
    /* 007600b2: jmp 0x7600c1 */ goto L_007600c1;
L_007600b4:; BB(0x007600b4);
    /* 007600b4: movzx edx, byte ptr [eax + 0x60] */ r_edx = (u32)R8((u32)(r_eax+0x60u));
    /* 007600b8: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007600be: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
L_007600c1:; BB(0x007600c1);
    /* 007600c1: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 007600c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007600c6: je 0x76024f */ if (fZ) goto L_0076024f;
L_007600cc:; BB(0x007600cc);
    /* 007600cc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007600d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007600d2: je 0x7600eb */ if (fZ) goto L_007600eb;
L_007600d4:; BB(0x007600d4);
    /* 007600d4: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007600db: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007600e1: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 007600e8: ret 4 */ FN_RET(0x00760091); r_esp += 8; return;
L_007600eb:; BB(0x007600eb);
    /* 007600eb: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007600f2: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007600f8: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 007600ff: ret 4 */ FN_RET(0x00760091); r_esp += 8; return;
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x00760091); r_esp += 8; return;
}

void f_007600e8(void)
{
    FN_ENTER(0x007600e8);
    /* 007600e8: ret 4 */ FN_RET(0x007600e8); r_esp += 8; return;
}

void f_007600ea(void)
{
    FN_ENTER(0x007600ea);
    /* 007600ea: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007600ec: mov bh, 0x90 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x90u) & 0xffu) << 8);
    /* 007600ee: test byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 007600f0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007600f2: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007600f8: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 007600ff: ret 4 */ FN_RET(0x007600ea); r_esp += 8; return;
}

void f_00760102(void)
{
    FN_ENTER(0x00760102);
    /* 00760102: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 00760105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760107: je 0x760132 */ if (fZ) goto L_00760132;
L_00760109:; BB(0x00760109);
    /* 00760109: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076010d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076010f: je 0x760125 */ if (fZ) goto L_00760125;
L_00760111:; BB(0x00760111);
    /* 00760111: movzx edx, byte ptr [eax + 0x60] */ r_edx = (u32)R8((u32)(r_eax+0x60u));
    /* 00760115: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00760118: je 0x760132 */ if (fZ) goto L_00760132;
L_0076011a:; BB(0x0076011a);
    /* 0076011a: and edx, 0xfb */ {  u32 a = r_edx; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00760120: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
    /* 00760123: jmp 0x760132 */ goto L_00760132;
L_00760125:; BB(0x00760125);
    /* 00760125: movzx edx, byte ptr [eax + 0x60] */ r_edx = (u32)R8((u32)(r_eax+0x60u));
    /* 00760129: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076012f: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
L_00760132:; BB(0x00760132);
    /* 00760132: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00760135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760137: je 0x76024f */ if (fZ) goto L_0076024f;
L_0076013d:; BB(0x0076013d);
    /* 0076013d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00760141: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760143: je 0x76015c */ if (fZ) goto L_0076015c;
L_00760145:; BB(0x00760145);
    /* 00760145: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0076014c: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760152: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00760159: ret 4 */ FN_RET(0x00760102); r_esp += 8; return;
L_0076015c:; BB(0x0076015c);
    /* 0076015c: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00760163: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760169: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00760170: ret 4 */ FN_RET(0x00760102); r_esp += 8; return;
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x00760102); r_esp += 8; return;
}

void f_00760173(void)
{
    FN_ENTER(0x00760173);
    /* 00760173: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00760176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760178: je 0x76024f */ if (fZ) goto L_0076024f;
L_0076017e:; BB(0x0076017e);
    /* 0076017e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00760182: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760184: je 0x760197 */ if (fZ) goto L_00760197;
L_00760186:; BB(0x00760186);
    /* 00760186: movzx edx, word ptr [eax + 0x60] */ r_edx = (u32)R16((u32)(r_eax+0x60u));
    /* 0076018a: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760190: mov word ptr [eax + 0x60], dx */ W16((u32)(r_eax+0x60u), (u16)r_edx);
    /* 00760194: ret 4 */ FN_RET(0x00760173); r_esp += 8; return;
L_00760197:; BB(0x00760197);
    /* 00760197: movzx edx, word ptr [eax + 0x60] */ r_edx = (u32)R16((u32)(r_eax+0x60u));
    /* 0076019b: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007601a1: mov word ptr [eax + 0x60], dx */ W16((u32)(r_eax+0x60u), (u16)r_edx);
    /* 007601a5: ret 4 */ FN_RET(0x00760173); r_esp += 8; return;
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x00760173); r_esp += 8; return;
}

void f_007601a8(void)
{
    FN_ENTER(0x007601a8);
    /* 007601a8: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 007601ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007601ad: je 0x7601d8 */ if (fZ) goto L_007601d8;
L_007601af:; BB(0x007601af);
    /* 007601af: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007601b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007601b5: je 0x7601cb */ if (fZ) goto L_007601cb;
L_007601b7:; BB(0x007601b7);
    /* 007601b7: movzx edx, byte ptr [eax + 0x60] */ r_edx = (u32)R8((u32)(r_eax+0x60u));
    /* 007601bb: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007601be: je 0x7601d8 */ if (fZ) goto L_007601d8;
L_007601c0:; BB(0x007601c0);
    /* 007601c0: and edx, 0xfb */ {  u32 a = r_edx; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007601c6: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
    /* 007601c9: jmp 0x7601d8 */ goto L_007601d8;
L_007601cb:; BB(0x007601cb);
    /* 007601cb: movzx edx, byte ptr [eax + 0x60] */ r_edx = (u32)R8((u32)(r_eax+0x60u));
    /* 007601cf: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007601d5: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
L_007601d8:; BB(0x007601d8);
    /* 007601d8: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 007601db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007601dd: je 0x76024f */ if (fZ) goto L_0076024f;
L_007601df:; BB(0x007601df);
    /* 007601df: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007601e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007601e5: je 0x7601fe */ if (fZ) goto L_007601fe;
L_007601e7:; BB(0x007601e7);
    /* 007601e7: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007601ee: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007601f4: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 007601fb: ret 4 */ FN_RET(0x007601a8); r_esp += 8; return;
L_007601fe:; BB(0x007601fe);
    /* 007601fe: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00760205: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076020b: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00760212: ret 4 */ FN_RET(0x007601a8); r_esp += 8; return;
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x007601a8); r_esp += 8; return;
}

void f_00760215(void)
{
    FN_ENTER(0x00760215);
    /* 00760215: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00760218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076021a: je 0x76024f */ if (fZ) goto L_0076024f;
L_0076021c:; BB(0x0076021c);
    /* 0076021c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00760220: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760222: je 0x76023b */ if (fZ) goto L_0076023b;
L_00760224:; BB(0x00760224);
    /* 00760224: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0076022b: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760231: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00760238: ret 4 */ FN_RET(0x00760215); r_esp += 8; return;
L_0076023b:; BB(0x0076023b);
    /* 0076023b: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00760242: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760248: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
L_0076024f:; BB(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x00760215); r_esp += 8; return;
}

void f_0076024f(void)
{
    FN_ENTER(0x0076024f);
    /* 0076024f: ret 4 */ FN_RET(0x0076024f); r_esp += 8; return;
}

void f_00760254(void) /* sub_760254 */
{
    FN_ENTER(0x00760254);
    /* 00760254: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760255: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00760256: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760257: mov edi, ecx */ r_edi = r_ecx;
    /* 00760259: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00760260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760261: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x760266u); f_0068d5a8();
    /* 00760266: mov esi, eax */ r_esi = r_eax;
    /* 00760268: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076026b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076026d: je 0x7602d0 */ if (fZ) goto L_007602d0;
L_0076026f:; BB(0x0076026f);
    /* 0076026f: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00760271: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x760276u); f_0073ec50();
    /* 00760276: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00760279: push 0x974b88 */ { u32 v = 0x974b88u; r_esp -= 4; W32(r_esp, v); }
    /* 0076027e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076027f: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x760284u); f_0074aff8();
    /* 00760284: mov ebp, eax */ r_ebp = r_eax;
    /* 00760286: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00760289: mov ecx, esi */ r_ecx = r_esi;
    /* 0076028b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x760290u); f_006936b4();
    /* 00760290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760291: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760293: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x760298u); f_00737ae4();
    /* 00760298: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076029a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076029c: call 0x74b974 */ r_esp -= 4; W32(r_esp, 0x7602a1u); f_0074b974();
    /* 007602a1: call 0x8260bc */ r_esp -= 4; W32(r_esp, 0x7602a6u); f_008260bc();
    /* 007602a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007602a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007602a9: call 0x74b7ac */ r_esp -= 4; W32(r_esp, 0x7602aeu); f_0074b7ac();
    /* 007602ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007602b0: call 0x737e10 */ r_esp -= 4; W32(r_esp, 0x7602b5u); f_00737e10();
    /* 007602b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007602b7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 007602ba: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7602bfu); f_007336fc();
    /* 007602bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007602c0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007602c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007602c5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7602cau); f_00712624();
    /* 007602ca: mov eax, ebp */ r_eax = r_ebp;
    /* 007602cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007602cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007602ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007602cf: ret  */ FN_RET(0x00760254); r_esp += 4; return;
L_007602d0:; BB(0x007602d0);
    /* 007602d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007602d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007602d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007602d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007602d5: ret  */ FN_RET(0x00760254); r_esp += 4; return;
}

void f_007602d8(void) /* sub_7602D8 */
{
    FN_ENTER(0x007602d8);
    /* 007602d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007602d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007602da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007602db: mov edi, ecx */ r_edi = r_ecx;
    /* 007602dd: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007602e0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7602e5u); f_0068d5a8();
    /* 007602e5: mov esi, eax */ r_esi = r_eax;
    /* 007602e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007602ea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007602ec: je 0x76034f */ if (fZ) goto L_0076034f;
L_007602ee:; BB(0x007602ee);
    /* 007602ee: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 007602f0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7602f5u); f_0073ec50();
    /* 007602f5: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007602f8: push 0x974b90 */ { u32 v = 0x974b90u; r_esp -= 4; W32(r_esp, v); }
    /* 007602fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007602fe: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x760303u); f_0074aff8();
    /* 00760303: mov ebx, eax */ r_ebx = r_eax;
    /* 00760305: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00760308: mov ecx, esi */ r_ecx = r_esi;
    /* 0076030a: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x76030fu); f_006936b4();
    /* 0076030f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760310: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760312: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x760317u); f_00737ae4();
    /* 00760317: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00760319: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076031b: call 0x74b974 */ r_esp -= 4; W32(r_esp, 0x760320u); f_0074b974();
    /* 00760320: call 0x8260b4 */ r_esp -= 4; W32(r_esp, 0x760325u); f_008260b4();
    /* 00760325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760326: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760328: call 0x74b7ac */ r_esp -= 4; W32(r_esp, 0x76032du); f_0074b7ac();
    /* 0076032d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076032f: call 0x737e10 */ r_esp -= 4; W32(r_esp, 0x760334u); f_00737e10();
    /* 00760334: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00760336: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00760339: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x76033eu); f_007336fc();
    /* 0076033e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076033f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00760342: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760344: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x760349u); f_00712624();
    /* 00760349: mov eax, ebx */ r_eax = r_ebx;
    /* 0076034b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076034c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076034d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076034e: ret  */ FN_RET(0x007602d8); r_esp += 4; return;
L_0076034f:; BB(0x0076034f);
    /* 0076034f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760351: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00760352: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00760353: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760354: ret  */ FN_RET(0x007602d8); r_esp += 4; return;
}

void f_00760358(void) /* sub_760358 */
{
    FN_ENTER(0x00760358);
    /* 00760358: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760359: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076035a: mov edi, ecx */ r_edi = r_ecx;
    /* 0076035c: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0076035e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x760363u); f_0073ec50();
    /* 00760363: mov ebx, eax */ r_ebx = r_eax;
    /* 00760365: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00760367: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x76036cu); f_0079317c();
    /* 0076036c: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076036f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760370: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00760372: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760373: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x760378u); f_0073566c();
    /* 00760378: mov ebx, eax */ r_ebx = r_eax;
    /* 0076037a: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0076037f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x760384u); f_0079317c();
    /* 00760384: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00760387: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00760389: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0076038b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076038d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076038e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x760393u); f_00735c90();
    /* 00760393: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 00760398: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x76039du); f_0079317c();
    /* 0076039d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076039e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007603a0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007603a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007603a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007603a5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7603aau); f_00735c90();
    /* 007603aa: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 007603af: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7603b4u); f_0079317c();
    /* 007603b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007603b5: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007603b7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007603b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007603bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007603bc: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7603c1u); f_00735c90();
    /* 007603c1: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 007603c6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7603cbu); f_0079317c();
    /* 007603cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007603cc: push 0xffee946e */ { u32 v = 0xffee946eu; r_esp -= 4; W32(r_esp, v); }
    /* 007603d1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 007603d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007603d5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007603d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007603d8: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x7603ddu); f_00735db8();
    /* 007603dd: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 007603e2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7603e7u); f_0079317c();
    /* 007603e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007603e8: push 0xffee6ed8 */ { u32 v = 0xffee6ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 007603ed: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 007603ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007603f1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007603f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007603f4: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x7603f9u); f_00735db8();
    /* 007603f9: push 0x438d0000 */ { u32 v = 0x438d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007603fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760400: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x760405u); f_00736138();
    /* 00760405: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760407: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x76040cu); f_00736458();
    /* 0076040c: mov eax, ebx */ r_eax = r_ebx;
    /* 0076040e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076040f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760410: ret  */ FN_RET(0x00760358); r_esp += 4; return;
}

void f_00760414(void) /* sub_760414 */
{
    FN_ENTER(0x00760414);
    /* 00760414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760415: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760416: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00760418: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0076041a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x76041fu); f_0073ec50();
    /* 0076041f: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00760422: push 0x974b98 */ { u32 v = 0x974b98u; r_esp -= 4; W32(r_esp, v); }
    /* 00760427: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760428: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x76042du); f_0074aff8();
    /* 0076042d: mov ebx, eax */ r_ebx = r_eax;
    /* 0076042f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00760431: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x760436u); f_0079317c();
    /* 00760436: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00760439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076043a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076043c: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x760441u); f_00737ae4();
    /* 00760441: call 0x8260c4 */ r_esp -= 4; W32(r_esp, 0x760446u); f_008260c4();
    /* 00760446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760447: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760449: call 0x74b7ac */ r_esp -= 4; W32(r_esp, 0x76044eu); f_0074b7ac();
    /* 0076044e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00760450: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00760453: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x760458u); f_007336fc();
    /* 00760458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760459: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0076045c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076045e: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x760463u); f_00712624();
    /* 00760463: mov eax, ebx */ r_eax = r_ebx;
    /* 00760465: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00760466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760467: ret  */ FN_RET(0x00760414); r_esp += 4; return;
}

void f_00760468(void) /* sub_760468 */
{
    FN_ENTER(0x00760468);
    /* 00760468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760469: mov ebp, esp */ r_ebp = r_esp;
    /* 0076046b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076046d: push 0x8f34c0 */ { u32 v = 0x8f34c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00760472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00760478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00760480: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00760486: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00760489: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0076048c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0076048f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00760492: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00760499: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0076049e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7604a3u); f_005caba4();
    /* 007604a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007604a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007604a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007604a9: je 0x760521 */ if (fZ) goto L_00760521;
L_007604ab:; BB(0x007604ab);
    /* 007604ab: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007604b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007604b9: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 007604bb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7604c0u); f_0073ec50();
    /* 007604c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007604c1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007604c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007604c7: movsx ebx, word ptr [edx + 0x28] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x28u));
    /* 007604cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007604cc: mov esi, 1 */ r_esi = 0x1u;
    /* 007604d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007604d2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007604d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007604d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007604d7: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x7604dcu); f_00728ac4();
    /* 007604dc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007604df: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007604e6:; BB(0x007604e6);
    /* 007604e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007604ed: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 007604ef: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7604f4u); f_0079317c();
    /* 007604f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007604f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007604f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007604f8: call 0x729630 */ r_esp -= 4; W32(r_esp, 0x7604fdu); f_00729630();
    /* 007604fd: push 0x438d0000 */ { u32 v = 0x438d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00760502: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760504: call 0x7296e4 */ r_esp -= 4; W32(r_esp, 0x760509u); f_007296e4();
    /* 00760509: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076050c: mov eax, ebx */ r_eax = r_ebx;
    /* 0076050e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00760511: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00760514: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076051b: mov esp, ebp */ r_esp = r_ebp;
    /* 0076051d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076051e: ret 4 */ FN_RET(0x00760468); r_esp += 8; return;
L_00760521:; BB(0x00760521);
    /* 00760521: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00760523: jmp 0x7604e6 */ goto L_007604e6;
}

void f_00760528(void) /* sub_760528 */
{
    FN_ENTER(0x00760528);
    /* 00760528: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760529: mov ebp, esp */ r_ebp = r_esp;
    /* 0076052b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076052d: push 0x8f34e8 */ { u32 v = 0x8f34e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00760532: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00760538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760539: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00760540: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760543: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00760546: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00760549: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0076054c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0076054f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00760552: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00760559: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076055e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x760563u); f_005caba4();
    /* 00760563: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760564: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00760567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760569: je 0x7605b2 */ if (fZ) goto L_007605b2;
L_0076056b:; BB(0x0076056b);
    /* 0076056b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00760572: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00760579: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076057b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x760580u); f_0073ec50();
    /* 00760580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760581: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00760584: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00760587: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076058a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076058b: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x760590u); f_00725d18();
    /* 00760590: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00760593: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0076059a:; BB(0x0076059a);
    /* 0076059a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076059d: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 007605a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007605a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007605ae: mov esp, ebp */ r_esp = r_ebp;
    /* 007605b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007605b1: ret  */ FN_RET(0x00760528); r_esp += 4; return;
L_007605b2:; BB(0x007605b2);
    /* 007605b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007605b4: jmp 0x76059a */ goto L_0076059a;
}

void f_007605b8(void) /* sub_7605B8 */
{
    FN_ENTER(0x007605b8);
    /* 007605b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007605bc: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 007605bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007605c1: je 0x7605d6 */ if (fZ) goto L_007605d6;
L_007605c3:; BB(0x007605c3);
    /* 007605c3: cmp eax, dword ptr [ecx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007605c6: jne 0x7605cb */ if (!fZ) goto L_007605cb;
L_007605c8:; BB(0x007605c8);
    /* 007605c8: ret 4 */ FN_RET(0x007605b8); r_esp += 8; return;
L_007605cb:; BB(0x007605cb);
    /* 007605cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007605cc: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 007605cf: mov ecx, edx */ r_ecx = r_edx;
    /* 007605d1: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x7605d6u); f_0072606c();
L_007605d6:; BB(0x007605d6);
    /* 007605d6: ret 4 */ FN_RET(0x007605b8); r_esp += 8; return;
}

void f_007605dc(void) /* sub_7605DC */
{
    FN_ENTER(0x007605dc);
    /* 007605dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007605dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007605de: mov esi, ecx */ r_esi = r_ecx;
    /* 007605e0: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 007605e2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7605e7u); f_0073ec50();
    /* 007605e7: mov ebp, eax */ r_ebp = r_eax;
    /* 007605e9: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 007605ee: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7605f3u); f_0079317c();
    /* 007605f3: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007605f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007605f7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007605f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007605fa: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x7605ffu); f_0073566c();
    /* 007605ff: mov ebp, eax */ r_ebp = r_eax;
    /* 00760601: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00760606: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x76060bu); f_0079317c();
    /* 0076060b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076060e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00760610: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00760612: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760615: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x76061au); f_00735c90();
    /* 0076061a: push 0x102 */ { u32 v = 0x102u; r_esp -= 4; W32(r_esp, v); }
    /* 0076061f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x760624u); f_0079317c();
    /* 00760624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760625: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00760627: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00760629: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076062b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076062c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x760631u); f_00735c90();
    /* 00760631: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 00760636: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x76063bu); f_0079317c();
    /* 0076063b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076063c: push 0xffee946e */ { u32 v = 0xffee946eu; r_esp -= 4; W32(r_esp, v); }
    /* 00760641: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00760643: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760645: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00760647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760648: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x76064du); f_00735db8();
    /* 0076064d: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00760652: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x760657u); f_0079317c();
    /* 00760657: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760658: push 0xffee6ed8 */ { u32 v = 0xffee6ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076065d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0076065f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760661: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00760663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760664: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x760669u); f_00735db8();
    /* 00760669: push 0x438d0000 */ { u32 v = 0x438d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076066e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760670: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x760675u); f_00736138();
    /* 00760675: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760677: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x76067cu); f_00736458();
    /* 0076067c: mov eax, ebp */ r_eax = r_ebp;
    /* 0076067e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076067f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00760680: ret  */ FN_RET(0x007605dc); r_esp += 4; return;
}

void f_00760684(void) /* sub_760684 */
{
    FN_ENTER(0x00760684);
    /* 00760684: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760685: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00760686: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760687: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076068a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0076068b: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x760690u); f_0073cd8c();
    /* 00760690: mov edi, eax */ r_edi = r_eax;
    /* 00760692: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00760694: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x760699u); f_0079317c();
    /* 00760699: mov esi, eax */ r_esi = r_eax;
    /* 0076069b: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 007606a0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7606a5u); f_0079317c();
    /* 007606a5: mov ebp, eax */ r_ebp = r_eax;
    /* 007606a7: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 007606a9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7606aeu); f_0073ec50();
    /* 007606ae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007606b1: push 0x438d0000 */ { u32 v = 0x438d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007606b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007606b7: mov ecx, edi */ r_ecx = r_edi;
    /* 007606b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007606ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007606bb: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x7606c0u); f_0073cfec();
    /* 007606c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007606c2: mov ecx, edi */ r_ecx = r_edi;
    /* 007606c4: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x7606c9u); f_0073d148();
    /* 007606c9: mov eax, edi */ r_eax = r_edi;
    /* 007606cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007606cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007606cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007606ce: ret  */ FN_RET(0x00760684); r_esp += 4; return;
}

void f_007606d0(void) /* sub_7606D0 */
{
    FN_ENTER(0x007606d0);
    /* 007606d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007606d1: mov esi, ecx */ r_esi = r_ecx;
    /* 007606d3: call 0x826df0 */ r_esp -= 4; W32(r_esp, 0x7606d8u); f_00826df0();
    /* 007606d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007606d9: mov ecx, esi */ r_ecx = r_esi;
    /* 007606db: call 0x75ef80 */ r_esp -= 4; W32(r_esp, 0x7606e0u); f_0075ef80();
    /* 007606e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007606e1: ret  */ FN_RET(0x007606d0); r_esp += 4; return;
}

void f_007606e4(void) /* sub_7606E4 */
{
    FN_ENTER(0x007606e4);
    /* 007606e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007606e5: mov esi, ecx */ r_esi = r_ecx;
    /* 007606e7: push 0x116 */ { u32 v = 0x116u; r_esp -= 4; W32(r_esp, v); }
    /* 007606ec: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7606f1u); f_0079317c();
    /* 007606f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007606f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007606f3: mov ecx, esi */ r_ecx = r_esi;
    /* 007606f5: call 0x75ef80 */ r_esp -= 4; W32(r_esp, 0x7606fau); f_0075ef80();
    /* 007606fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007606fb: ret  */ FN_RET(0x007606e4); r_esp += 4; return;
}

void f_007606fc(void) /* sub_7606FC */
{
    FN_ENTER(0x007606fc);
    /* 007606fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007606fd: mov edi, ecx */ r_edi = r_ecx;
    /* 007606ff: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 00760702: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760704: je 0x76071a */ if (fZ) goto L_0076071a;
L_00760706:; BB(0x00760706);
    /* 00760706: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076070a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076070f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00760713: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
L_0076071a:; BB(0x0076071a);
    /* 0076071a: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0076071d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076071f: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x760722u); call_ind(t); }
    /* 00760722: mov byte ptr [edi + 0x1c], 0x22 */ W8((u32)(r_edi+0x1cu), 0x22u);
    /* 00760726: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760727: ret  */ FN_RET(0x007606fc); r_esp += 4; return;
}

void f_00760728(void) /* sub_760728 */
{
    FN_ENTER(0x00760728);
    /* 00760728: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760729: mov edi, ecx */ r_edi = r_ecx;
    /* 0076072b: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0076072e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760730: je 0x76074a */ if (fZ) goto L_0076074a;
L_00760732:; BB(0x00760732);
    /* 00760732: call 0x8260bc */ r_esp -= 4; W32(r_esp, 0x760737u); f_008260bc();
    /* 00760737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760738: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0076073b: call 0x74b7ac */ r_esp -= 4; W32(r_esp, 0x760740u); f_0074b7ac();
    /* 00760740: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00760742: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00760745: call 0x74b974 */ r_esp -= 4; W32(r_esp, 0x76074au); f_0074b974();
L_0076074a:; BB(0x0076074a);
    /* 0076074a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076074b: ret  */ FN_RET(0x00760728); r_esp += 4; return;
}

void f_0076074c(void) /* sub_76074C */
{
    FN_ENTER(0x0076074c);
    /* 0076074c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076074d: mov edi, ecx */ r_edi = r_ecx;
    /* 0076074f: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00760752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760754: je 0x760764 */ if (fZ) goto L_00760764;
L_00760756:; BB(0x00760756);
    /* 00760756: call 0x8260b4 */ r_esp -= 4; W32(r_esp, 0x76075bu); f_008260b4();
    /* 0076075b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076075c: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0076075f: call 0x74b7ac */ r_esp -= 4; W32(r_esp, 0x760764u); f_0074b7ac();
L_00760764:; BB(0x00760764);
    /* 00760764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760765: ret  */ FN_RET(0x0076074c); r_esp += 4; return;
}

void f_00760768(void) /* sub_760768 */
{
    FN_ENTER(0x00760768);
    /* 00760768: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0076076b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076076d: je 0x76077a */ if (fZ) goto L_0076077a;
L_0076076f:; BB(0x0076076f);
    /* 0076076f: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00760774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760775: call 0x74b974 */ r_esp -= 4; W32(r_esp, 0x76077au); f_0074b974();
L_0076077a:; BB(0x0076077a);
    /* 0076077a: ret 4 */ FN_RET(0x00760768); r_esp += 8; return;
}

void f_00760780(void) /* sub_760780 */
{
    FN_ENTER(0x00760780);
    /* 00760780: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00760783: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760785: je 0x760792 */ if (fZ) goto L_00760792;
L_00760787:; BB(0x00760787);
    /* 00760787: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0076078c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076078d: call 0x74b974 */ r_esp -= 4; W32(r_esp, 0x760792u); f_0074b974();
L_00760792:; BB(0x00760792);
    /* 00760792: ret 4 */ FN_RET(0x00760780); r_esp += 8; return;
}

void f_00760798(void) /* sub_760798 */
{
    FN_ENTER(0x00760798);
    /* 00760798: mov byte ptr [ecx + 0x1c], 0x1e */ W8((u32)(r_ecx+0x1cu), 0x1eu);
    /* 0076079c: ret  */ FN_RET(0x00760798); r_esp += 4; return;
}

void f_007607a0(void) /* sub_7607A0 */
{
    FN_ENTER(0x007607a0);
    /* 007607a0: mov dword ptr [0xa9ad6c], 0x3f800000 */ W32((u32)(0xa9ad6cu), 0x3f800000u);
    /* 007607aa: mov dword ptr [0xa9ad70], 0x41000000 */ W32((u32)(0xa9ad70u), 0x41000000u);
    /* 007607b4: mov dword ptr [0xa9ad74], 0x3fc00000 */ W32((u32)(0xa9ad74u), 0x3fc00000u);
    /* 007607be: ret  */ FN_RET(0x007607a0); r_esp += 4; return;
}

void f_007607c0(void) /* sub_7607C0 */
{
    FN_ENTER(0x007607c0);
    /* 007607c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007607c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007607c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007607c3: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007607c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007607c7: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x7607ccu); f_0073cd8c();
    /* 007607cc: mov edi, eax */ r_edi = r_eax;
    /* 007607ce: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 007607d0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7607d5u); f_0079317c();
    /* 007607d5: mov esi, eax */ r_esi = r_eax;
    /* 007607d7: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 007607dc: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7607e1u); f_0079317c();
    /* 007607e1: mov ebp, eax */ r_ebp = r_eax;
    /* 007607e3: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 007607e5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7607eau); f_0073ec50();
    /* 007607ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007607ed: push 0x438d0000 */ { u32 v = 0x438d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007607f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007607f3: mov ecx, edi */ r_ecx = r_edi;
    /* 007607f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007607f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007607f7: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x7607fcu); f_0073cfec();
    /* 007607fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007607fe: mov ecx, edi */ r_ecx = r_edi;
    /* 00760800: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x760805u); f_0073d148();
    /* 00760805: mov eax, edi */ r_eax = r_edi;
    /* 00760807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760808: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00760809: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076080a: ret  */ FN_RET(0x007607c0); r_esp += 4; return;
}

void f_0076080c(void) /* sub_76080C */
{
    FN_ENTER(0x0076080c);
    /* 0076080c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076080d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076080f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760811: call 0x760830 */ r_esp -= 4; W32(r_esp, 0x760816u); f_00760830();
    /* 00760816: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076081a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076081c: jne 0x760822 */ if (!fZ) goto L_00760822;
L_0076081e:; BB(0x0076081e);
    /* 0076081e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076081f: ret 4 */ FN_RET(0x0076080c); r_esp += 8; return;
L_00760822:; BB(0x00760822);
    /* 00760822: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760823: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x760828u); f_005c2f74();
    /* 00760828: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760829: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076082a: ret 4 */ FN_RET(0x0076080c); r_esp += 8; return;
}

void f_00760830(void) /* sub_760830 */
{
    FN_ENTER(0x00760830);
    /* 00760830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760831: mov ebp, esp */ r_ebp = r_esp;
    /* 00760833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00760835: push 0x8f3504 */ { u32 v = 0x8f3504u; r_esp -= 4; W32(r_esp, v); }
    /* 0076083a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00760840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760841: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00760848: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076084b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076084e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00760851: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00760854: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00760857: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076085a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00760861: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760864: mov dword ptr [eax], 0xb42e10 */ W32((u32)(r_eax), 0xb42e10u);
    /* 0076086a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076086b: call 0x826094 */ r_esp -= 4; W32(r_esp, 0x760870u); f_00826094();
    /* 00760870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760871: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760874: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00760877: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760879: je 0x76088a */ if (fZ) goto L_0076088a;
L_0076087b:; BB(0x0076087b);
    /* 0076087b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x760880u); f_007127b0();
    /* 00760880: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760883: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0076088a:; BB(0x0076088a);
    /* 0076088a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00760891: mov ecx, eax */ r_ecx = r_eax;
    /* 00760893: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x760898u); f_008171e8();
    /* 00760898: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076089b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007608a2: mov esp, ebp */ r_esp = r_ebp;
    /* 007608a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007608a5: ret  */ FN_RET(0x00760830); r_esp += 4; return;
}

void f_007608a8(void) /* sub_7608A8 */
{
    FN_ENTER(0x007608a8);
    /* 007608a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007608a9: mov ebp, esp */ r_ebp = r_esp;
    /* 007608ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007608ad: push 0x8f3520 */ { u32 v = 0x8f3520u; r_esp -= 4; W32(r_esp, v); }
    /* 007608b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007608b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007608b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007608c0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007608c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007608c6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007608c9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007608cc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007608cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007608d2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007608d5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007608d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007608d9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007608dc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007608df: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7608e4u); f_008193cc();
    /* 007608e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007608eb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007608ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007608f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007608f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007608f5: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 007608f8: mov dword ptr [ebx], 0xb42e10 */ W32((u32)(r_ebx), 0xb42e10u);
    /* 007608fe: mov eax, dword ptr [0x9f57c4] */ r_eax = R32((u32)(0x9f57c4u));
    /* 00760903: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00760906: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 00760909: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
    /* 00760910: call 0x826084 */ r_esp -= 4; W32(r_esp, 0x760915u); f_00826084();
    /* 00760915: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760916: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00760919: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076091c: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 00760920: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00760923: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076092a: mov esp, ebp */ r_esp = r_ebp;
    /* 0076092c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076092d: ret 8 */ FN_RET(0x007608a8); r_esp += 12; return;
}

void f_00760930(void) /* sub_760930 */
{
    FN_ENTER(0x00760930);
    /* 00760930: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760931: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00760933: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00760936: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x76093bu); f_00719140();
    /* 0076093b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076093c: movzx edx, byte ptr [ebx + 0x1c] */ r_edx = (u32)R8((u32)(r_ebx+0x1cu));
    /* 00760940: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760942: jne 0x76094a */ if (!fZ) goto L_0076094a;
L_00760944:; BB(0x00760944);
    /* 00760944: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00760948: jmp 0x76094f */ goto L_0076094f;
L_0076094a:; BB(0x0076094a);
    /* 0076094a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076094d: jne 0x760993 */ if (!fZ) goto L_00760993;
L_0076094f:; BB(0x0076094f);
    /* 0076094f: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00760955: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076095b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076095c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0076095f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00760961: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00760963: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00760965: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0076096c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x760971u); f_007c1160();
    /* 00760971: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760973: je 0x760993 */ if (fZ) goto L_00760993;
L_00760975:; BB(0x00760975);
    /* 00760975: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00760977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076097a: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0076097f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x760984u); f_00814298();
    /* 00760984: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00760987: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0076098a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076098c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x76098fu); call_ind(t); }
    /* 0076098f: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
L_00760993:; BB(0x00760993);
    /* 00760993: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00760994: ret  */ FN_RET(0x00760930); r_esp += 4; return;
}

void f_00760998(void) /* sub_760998 */
{
    FN_ENTER(0x00760998);
    /* 00760998: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00760999: mov esi, ecx */ r_esi = r_ecx;
    /* 0076099b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0076099e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007609a0: je 0x7609aa */ if (fZ) goto L_007609aa;
L_007609a2:; BB(0x007609a2);
    /* 007609a2: mov byte ptr [esi + 0x1c], 1 */ W8((u32)(r_esi+0x1cu), 0x1u);
    /* 007609a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007609a7: ret 4 */ FN_RET(0x00760998); r_esp += 8; return;
L_007609aa:; BB(0x007609aa);
    /* 007609aa: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007609ae: mov ecx, esi */ r_ecx = r_esi;
    /* 007609b0: call 0x7609bc */ r_esp -= 4; W32(r_esp, 0x7609b5u); f_007609bc();
    /* 007609b5: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 007609b8: jmp 0x7609a2 */ goto L_007609a2;
}

void f_007609bc(void) /* sub_7609BC */
{
    FN_ENTER(0x007609bc);
    /* 007609bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007609bd: mov edi, ecx */ r_edi = r_ecx;
    /* 007609bf: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 007609c1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7609c6u); f_0073ec50();
    /* 007609c6: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007609c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007609cb: push 0x974be0 */ { u32 v = 0x974be0u; r_esp -= 4; W32(r_esp, v); }
    /* 007609d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007609d1: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x7609d6u); f_0073aa40();
    /* 007609d6: mov edi, eax */ r_edi = r_eax;
    /* 007609d8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007609db: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 007609e0: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007609e4: mov ecx, edi */ r_ecx = r_edi;
    /* 007609e6: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7609ebu); f_0073ae38();
    /* 007609eb: mov eax, edi */ r_eax = r_edi;
    /* 007609ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007609ee: ret 4 */ FN_RET(0x007609bc); r_esp += 8; return;
}

void f_007609f4(void) /* sub_7609F4 */
{
    FN_ENTER(0x007609f4);
    /* 007609f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007609f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007609f7: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 007609fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007609fc: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x7609ffu); call_ind(t); }
    /* 007609ff: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
    /* 00760a03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00760a04: ret  */ FN_RET(0x007609f4); r_esp += 4; return;
}

void f_00760a08(void) /* sub_760A08 */
{
    FN_ENTER(0x00760a08);
    /* 00760a08: mov dword ptr [0xa9ad7c], 0x3f800000 */ W32((u32)(0xa9ad7cu), 0x3f800000u);
    /* 00760a12: mov dword ptr [0xa9ad80], 0x41000000 */ W32((u32)(0xa9ad80u), 0x41000000u);
    /* 00760a1c: mov dword ptr [0xa9ad84], 0x3fc00000 */ W32((u32)(0xa9ad84u), 0x3fc00000u);
    /* 00760a26: ret  */ FN_RET(0x00760a08); r_esp += 4; return;
}

void f_00760a28(void) /* sub_760A28 */
{
    FN_ENTER(0x00760a28);
    /* 00760a28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00760a29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760a2a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760a2d: mov esi, ecx */ r_esi = r_ecx;
    /* 00760a2f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00760a33: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00760a37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760a38: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00760a3a: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00760a3d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00760a40: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00760a43: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x760a48u); f_007ac264();
    /* 00760a48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760a49: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00760a4d: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00760a51: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00760a54: fadd dword ptr [eax*4 + 0x974c18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x974c18u));
    /* 00760a5b: fst dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0));
    /* 00760a5e: call 0x760ab0 */ r_esp -= 4; W32(r_esp, 0x760a63u); f_00760ab0();
    /* 00760a63: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00760a68: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00760a6b: mov dword ptr [esi], ebp */ W32((u32)(r_esi), r_ebp);
    /* 00760a6d: mov ecx, esi */ r_ecx = r_esi;
    /* 00760a6f: mov byte ptr [esi + 0x19], 0 */ W8((u32)(r_esi+0x19u), 0x0u);
    /* 00760a73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760a74: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 00760a7b: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x760a80u); f_00760acc();
    /* 00760a80: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00760a84: call 0x7be1bc */ r_esp -= 4; W32(r_esp, 0x760a89u); f_007be1bc();
    /* 00760a89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760a8a: fcom dword ptr [0x974c7c] */ fx_compare(ST(0), R_F32((u32)(0x974c7cu))); 
    /* 00760a90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00760a92: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 00760a95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00760a96: ja 0x760a9f */ if ((!fC&&!fZ)) goto L_00760a9f;
L_00760a98:; BB(0x00760a98);
    /* 00760a98: mov dword ptr [esi + 0x1c], 0x47c35000 */ W32((u32)(r_esi+0x1cu), 0x47c35000u);
L_00760a9f:; BB(0x00760a9f);
    /* 00760a9f: mov eax, esi */ r_eax = r_esi;
    /* 00760aa1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00760aa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760aa5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00760aa6: ret 0x10 */ FN_RET(0x00760a28); r_esp += 20; return;
}

void f_00760aac(void) /* sub_760AAC */
{
    FN_ENTER(0x00760aac);
    /* 00760aac: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00760ab0: fld dword ptr [0x974c74] */ FPUSH(R_F32((u32)(0x974c74u)));
    /* 00760ab6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760ab8: fld dword ptr [0x974c70] */ FPUSH(R_F32((u32)(0x974c70u)));
    /* 00760abe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00760ac0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00760ac2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00760ac3: jbe 0x760ac7 */ if ((fC||fZ)) goto L_00760ac7;
L_00760ac5:; BB(0x00760ac5);
    /* 00760ac5: fst st(1) */ ST(1) = ST(0);
L_00760ac7:; BB(0x00760ac7);
    /* 00760ac7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00760ac9: ret  */ FN_RET(0x00760aac); r_esp += 4; return;
}

void f_00760ab0(void) /* sub_760AB0 */
{
    FN_ENTER(0x00760ab0);
    /* 00760ab0: fld dword ptr [0x974c74] */ FPUSH(R_F32((u32)(0x974c74u)));
    /* 00760ab6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760ab8: fld dword ptr [0x974c70] */ FPUSH(R_F32((u32)(0x974c70u)));
    /* 00760abe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00760ac0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00760ac2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00760ac3: jbe 0x760ac7 */ if ((fC||fZ)) goto L_00760ac7;
L_00760ac5:; BB(0x00760ac5);
    /* 00760ac5: fst st(1) */ ST(1) = ST(0);
L_00760ac7:; BB(0x00760ac7);
    /* 00760ac7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00760ac9: ret  */ FN_RET(0x00760ab0); r_esp += 4; return;
}

void f_00760acc(void) /* sub_760ACC */
{
    FN_ENTER(0x00760acc);
    /* 00760acc: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 00760ad1: mov byte ptr [ecx + 0x18], al */ W8((u32)(r_ecx+0x18u), (u8)r_eax);
    /* 00760ad4: call 0x760adc */ r_esp -= 4; W32(r_esp, 0x760ad9u); f_00760adc();
    /* 00760ad9: ret 4 */ FN_RET(0x00760acc); r_esp += 8; return;
}

void f_00760adc(void) /* sub_760ADC */
{
    FN_ENTER(0x00760adc);
    /* 00760adc: movzx eax, byte ptr [ecx + 0x18] */ r_eax = (u32)R8((u32)(r_ecx+0x18u));
    /* 00760ae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760ae2: jne 0x760afc */ if (!fZ) goto L_00760afc;
L_00760ae4:; BB(0x00760ae4);
    /* 00760ae4: movzx eax, byte ptr [ecx + 0x19] */ r_eax = (u32)R8((u32)(r_ecx+0x19u));
    /* 00760ae8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760aea: jne 0x760af4 */ if (!fZ) goto L_00760af4;
L_00760aec:; BB(0x00760aec);
    /* 00760aec: mov dword ptr [ecx + 0x14], 0xffffffff */ W32((u32)(r_ecx+0x14u), 0xffffffffu);
    /* 00760af3: ret  */ FN_RET(0x00760adc); r_esp += 4; return;
L_00760af4:; BB(0x00760af4);
    /* 00760af4: mov dword ptr [ecx + 0x14], 0xff909090 */ W32((u32)(r_ecx+0x14u), 0xff909090u);
    /* 00760afb: ret  */ FN_RET(0x00760adc); r_esp += 4; return;
L_00760afc:; BB(0x00760afc);
    /* 00760afc: jle 0x760b0a */ if ((fZ||fS!=fO)) goto L_00760b0a;
L_00760afe:; BB(0x00760afe);
    /* 00760afe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00760b01: jg 0x760b0a */ if ((!fZ&&fS==fO)) goto L_00760b0a;
L_00760b03:; BB(0x00760b03);
    /* 00760b03: mov dword ptr [ecx + 0x14], 0xff000000 */ W32((u32)(r_ecx+0x14u), 0xff000000u);
L_00760b0a:; BB(0x00760b0a);
    /* 00760b0a: ret  */ FN_RET(0x00760adc); r_esp += 4; return;
}

void f_00760b0c(void) /* sub_760B0C */
{
    FN_ENTER(0x00760b0c);
    /* 00760b0c: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00760b0f: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 00760b12: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00760b15: ret  */ FN_RET(0x00760b0c); r_esp += 4; return;
}

void f_00760b18(void) /* sub_760B18 */
{
    FN_ENTER(0x00760b18);
    /* 00760b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760b19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760b1a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00760b1c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00760b20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760b21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760b23: call 0x760b38 */ r_esp -= 4; W32(r_esp, 0x760b28u); f_00760b38();
    /* 00760b28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760b29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00760b2b: call 0x760dac */ r_esp -= 4; W32(r_esp, 0x760b30u); f_00760dac();
    /* 00760b30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00760b31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760b32: ret 4 */ FN_RET(0x00760b18); r_esp += 8; return;
}

void f_00760b38(void) /* sub_760B38 */
{
    FN_ENTER(0x00760b38);
    /* 00760b38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760b39: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760b3c: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00760b3f: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00760b42: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00760b46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760b48: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00760b4a: movzx edi, byte ptr [ecx + 0x18] */ r_edi = (u32)R8((u32)(r_ecx+0x18u));
    /* 00760b4e: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00760b51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760b53: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00760b57: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760b59: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00760b5c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00760b60: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00760b64: mov ecx, edi */ r_ecx = r_edi;
    /* 00760b66: call 0x760b85 */ r_esp -= 4; W32(r_esp, 0x760b6bu); f_00760b85();
    /* 00760b6b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00760b6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760b6f: ret 4 */ FN_RET(0x00760b38); r_esp += 8; return;
}

void f_00760b74(void) /* sub_760B74 */
{
    FN_ENTER(0x00760b74);
    /* 00760b74: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00760b78: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00760b7c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00760b80: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 00760b85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760b86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00760b87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760b88: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760b8b: mov edi, ecx */ r_edi = r_ecx;
    /* 00760b8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00760b8f: mov esi, eax */ r_esi = r_eax;
    /* 00760b91: fadd dword ptr [0x974c64] */ ST(0) = ST(0) + R_F32((u32)(0x974c64u));
    /* 00760b97: fld dword ptr [0x974c68] */ FPUSH(R_F32((u32)(0x974c68u)));
    /* 00760b9d: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00760ba0: fdivr dword ptr [0x974c6c] */ ST(0) = R_F32((u32)(0x974c6cu)) / ST(0);
    /* 00760ba6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760ba8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00760bac: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00760bb0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00760bb5: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x760bbau); f_0082bb30();
    /* 00760bba: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00760bc0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x760bc5u); f_00829cc8();
    /* 00760bc5: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00760bc8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00760bcd: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x760bd2u); f_0082bb60();
    /* 00760bd2: fld dword ptr [0x974c60] */ FPUSH(R_F32((u32)(0x974c60u)));
    /* 00760bd8: fld dword ptr [0x974c50] */ FPUSH(R_F32((u32)(0x974c50u)));
    /* 00760bde: fld dword ptr [0x974c5c] */ FPUSH(R_F32((u32)(0x974c5cu)));
    /* 00760be4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00760be7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00760bea: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00760bed: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00760bef: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00760bf2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00760bf6: mov ecx, esi */ r_ecx = r_esi;
    /* 00760bf8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00760bfc: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00760c02: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00760c06: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00760c08: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760c0f: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760c16: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760c18: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00760c1c: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760c23: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760c25: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00760c29: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760c30: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760c32: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00760c36: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00760c38: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760c3a: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 00760c3c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760c3e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00760c42: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760c44: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00760c46: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00760c4a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00760c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760c4e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x760c53u); f_0071bbb4();
    /* 00760c53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760c54: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00760c58: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00760c5b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00760c5f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x760c64u); f_0082b440();
    /* 00760c64: fld dword ptr [0x974c60] */ FPUSH(R_F32((u32)(0x974c60u)));
    /* 00760c6a: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00760c6d: fld dword ptr [0x974c50] */ FPUSH(R_F32((u32)(0x974c50u)));
    /* 00760c73: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760c7a: fld dword ptr [0x974c5c] */ FPUSH(R_F32((u32)(0x974c5cu)));
    /* 00760c80: fld dword ptr [0x974c58] */ FPUSH(R_F32((u32)(0x974c58u)));
    /* 00760c86: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760c8d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00760c8f: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00760c93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760c95: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00760c97: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00760c99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760c9b: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 00760c9f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760ca1: fadd dword ptr [0x974c54] */ ST(0) = ST(0) + R_F32((u32)(0x974c54u));
    /* 00760ca7: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00760ca9: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760cb0: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760cb2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00760cb4: fadd st(6), st(0) */ ST(6) = ST(6) + ST(0);
    /* 00760cb6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760cb8: fdivp st(6) */ ST(6) = ST(6) / ST(0); FPOP();
    /* 00760cba: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00760cbd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760cbf: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00760cc3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00760cc7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760cc9: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00760ccd: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00760cd1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760cd3: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00760cd7: mov ecx, esi */ r_ecx = r_esi;
    /* 00760cd9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00760cdd: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00760ce1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760ce3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00760ce7: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00760ceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760cec: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x760cf1u); f_0071bbb4();
    /* 00760cf1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760cf2: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00760cf6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00760cf9: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00760cfd: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x760d02u); f_0082b440();
    /* 00760d02: fld dword ptr [0x974c60] */ FPUSH(R_F32((u32)(0x974c60u)));
    /* 00760d08: fld dword ptr [0x974c50] */ FPUSH(R_F32((u32)(0x974c50u)));
    /* 00760d0e: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760d15: fld dword ptr [0x974c5c] */ FPUSH(R_F32((u32)(0x974c5cu)));
    /* 00760d1b: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00760d1e: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00760d20: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 00760d24: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760d2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760d2d: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00760d31: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00760d33: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760d3a: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760d3c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00760d3e: fadd st(6), st(0) */ ST(6) = ST(6) + ST(0);
    /* 00760d40: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760d42: fdiv st(6), st(0) */ ST(6) = ST(6) / ST(0);
    /* 00760d44: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760d46: fadd dword ptr [0x974c4c] */ ST(0) = ST(0) + R_F32((u32)(0x974c4cu));
    /* 00760d4c: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760d4e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760d50: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00760d52: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 00760d54: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00760d57: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00760d5b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00760d5d: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00760d61: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760d63: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00760d67: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760d69: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00760d6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760d6f: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00760d73: mov ecx, esi */ r_ecx = r_esi;
    /* 00760d75: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00760d79: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00760d7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760d7f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00760d83: lea ebp, [esp + 0x40] */ r_ebp = (u32)(r_esp+0x40u);
    /* 00760d87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760d88: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x760d8du); f_0071bbb4();
    /* 00760d8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760d8e: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00760d92: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00760d95: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 00760d99: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x760d9eu); f_0082b440();
    /* 00760d9e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x760da3u); f_004ac444();
    /* 00760da3: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00760da6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760da7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00760da8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760da9: ret  */ FN_RET(0x00760b74); r_esp += 4; return;
}

void f_00760b85(void)
{
    FN_ENTER(0x00760b85);
    /* 00760b85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760b86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00760b87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760b88: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760b8b: mov edi, ecx */ r_edi = r_ecx;
    /* 00760b8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00760b8f: mov esi, eax */ r_esi = r_eax;
    /* 00760b91: fadd dword ptr [0x974c64] */ ST(0) = ST(0) + R_F32((u32)(0x974c64u));
    /* 00760b97: fld dword ptr [0x974c68] */ FPUSH(R_F32((u32)(0x974c68u)));
    /* 00760b9d: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00760ba0: fdivr dword ptr [0x974c6c] */ ST(0) = R_F32((u32)(0x974c6cu)) / ST(0);
    /* 00760ba6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760ba8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00760bac: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00760bb0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00760bb5: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x760bbau); f_0082bb30();
    /* 00760bba: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00760bc0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x760bc5u); f_00829cc8();
    /* 00760bc5: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00760bc8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00760bcd: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x760bd2u); f_0082bb60();
    /* 00760bd2: fld dword ptr [0x974c60] */ FPUSH(R_F32((u32)(0x974c60u)));
    /* 00760bd8: fld dword ptr [0x974c50] */ FPUSH(R_F32((u32)(0x974c50u)));
    /* 00760bde: fld dword ptr [0x974c5c] */ FPUSH(R_F32((u32)(0x974c5cu)));
    /* 00760be4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00760be7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00760bea: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00760bed: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00760bef: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00760bf2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00760bf6: mov ecx, esi */ r_ecx = r_esi;
    /* 00760bf8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00760bfc: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00760c02: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00760c06: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00760c08: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760c0f: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760c16: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760c18: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00760c1c: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760c23: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760c25: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00760c29: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760c30: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760c32: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00760c36: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00760c38: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760c3a: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 00760c3c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760c3e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00760c42: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760c44: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00760c46: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00760c4a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00760c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760c4e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x760c53u); f_0071bbb4();
    /* 00760c53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760c54: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00760c58: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00760c5b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00760c5f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x760c64u); f_0082b440();
    /* 00760c64: fld dword ptr [0x974c60] */ FPUSH(R_F32((u32)(0x974c60u)));
    /* 00760c6a: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00760c6d: fld dword ptr [0x974c50] */ FPUSH(R_F32((u32)(0x974c50u)));
    /* 00760c73: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760c7a: fld dword ptr [0x974c5c] */ FPUSH(R_F32((u32)(0x974c5cu)));
    /* 00760c80: fld dword ptr [0x974c58] */ FPUSH(R_F32((u32)(0x974c58u)));
    /* 00760c86: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760c8d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00760c8f: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00760c93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760c95: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00760c97: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00760c99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760c9b: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 00760c9f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760ca1: fadd dword ptr [0x974c54] */ ST(0) = ST(0) + R_F32((u32)(0x974c54u));
    /* 00760ca7: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00760ca9: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760cb0: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760cb2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00760cb4: fadd st(6), st(0) */ ST(6) = ST(6) + ST(0);
    /* 00760cb6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760cb8: fdivp st(6) */ ST(6) = ST(6) / ST(0); FPOP();
    /* 00760cba: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00760cbd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760cbf: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00760cc3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00760cc7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760cc9: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00760ccd: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00760cd1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760cd3: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00760cd7: mov ecx, esi */ r_ecx = r_esi;
    /* 00760cd9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00760cdd: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00760ce1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760ce3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00760ce7: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00760ceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760cec: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x760cf1u); f_0071bbb4();
    /* 00760cf1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760cf2: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00760cf6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00760cf9: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00760cfd: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x760d02u); f_0082b440();
    /* 00760d02: fld dword ptr [0x974c60] */ FPUSH(R_F32((u32)(0x974c60u)));
    /* 00760d08: fld dword ptr [0x974c50] */ FPUSH(R_F32((u32)(0x974c50u)));
    /* 00760d0e: fld dword ptr [edi*8 + 0x974bf8] */ FPUSH(R_F32((u32)(r_edi*8+0x974bf8u)));
    /* 00760d15: fld dword ptr [0x974c5c] */ FPUSH(R_F32((u32)(0x974c5cu)));
    /* 00760d1b: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00760d1e: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00760d20: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 00760d24: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760d2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760d2d: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00760d31: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00760d33: fld dword ptr [edi*8 + 0x974bfc] */ FPUSH(R_F32((u32)(r_edi*8+0x974bfcu)));
    /* 00760d3a: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760d3c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00760d3e: fadd st(6), st(0) */ ST(6) = ST(6) + ST(0);
    /* 00760d40: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760d42: fdiv st(6), st(0) */ ST(6) = ST(6) / ST(0);
    /* 00760d44: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00760d46: fadd dword ptr [0x974c4c] */ ST(0) = ST(0) + R_F32((u32)(0x974c4cu));
    /* 00760d4c: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00760d4e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760d50: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00760d52: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 00760d54: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00760d57: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00760d5b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00760d5d: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00760d61: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760d63: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00760d67: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00760d69: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00760d6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760d6f: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00760d73: mov ecx, esi */ r_ecx = r_esi;
    /* 00760d75: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00760d79: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00760d7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00760d7f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00760d83: lea ebp, [esp + 0x40] */ r_ebp = (u32)(r_esp+0x40u);
    /* 00760d87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760d88: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x760d8du); f_0071bbb4();
    /* 00760d8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760d8e: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00760d92: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00760d95: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 00760d99: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x760d9eu); f_0082b440();
    /* 00760d9e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x760da3u); f_004ac444();
    /* 00760da3: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00760da6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760da7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00760da8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760da9: ret  */ FN_RET(0x00760b85); r_esp += 4; return;
}

void f_00760dac(void) /* sub_760DAC */
{
    FN_ENTER(0x00760dac);
    /* 00760dac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00760dad: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760db0: mov edi, ecx */ r_edi = r_ecx;
    /* 00760db2: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00760db6: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00760db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00760dbb: jl 0x760e44 */ if ((fS!=fO)) goto L_00760e44;
L_00760dc1:; BB(0x00760dc1);
    /* 00760dc1: fld dword ptr [0x974c48] */ FPUSH(R_F32((u32)(0x974c48u)));
    /* 00760dc7: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00760dca: fmul dword ptr [0x974c44] */ ST(0) = ST(0) * R_F32((u32)(0x974c44u));
    /* 00760dd0: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00760dd3: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 00760dd6: fmul dword ptr [0x974c40] */ ST(0) = ST(0) * R_F32((u32)(0x974c40u));
    /* 00760ddc: fld dword ptr [0x974c3c] */ FPUSH(R_F32((u32)(0x974c3cu)));
    /* 00760de2: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 00760de5: fld dword ptr [0x974c34] */ FPUSH(R_F32((u32)(0x974c34u)));
    /* 00760deb: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00760dee: fdivr dword ptr [0x974c38] */ ST(0) = R_F32((u32)(0x974c38u)) / ST(0);
    /* 00760df4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00760df8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760dfa: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00760dfc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00760dfe: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00760e00: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00760e04: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 00760e07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00760e09: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00760e0d: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 00760e15: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 00760e1d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00760e20: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00760e24: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00760e28: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x760e2du); f_0071d484();
    /* 00760e2d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00760e31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00760e33: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00760e36: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00760e39: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00760e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760e3c: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x760e41u); f_0071d58c();
    /* 00760e41: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00760e44:; BB(0x00760e44);
    /* 00760e44: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00760e47: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00760e48: ret 4 */ FN_RET(0x00760dac); r_esp += 8; return;
}

void f_00760e4c(void) /* sub_760E4C */
{
    FN_ENTER(0x00760e4c);
    /* 00760e4c: fld dword ptr [0x974c2c] */ FPUSH(R_F32((u32)(0x974c2cu)));
    /* 00760e52: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 00760e55: ret  */ FN_RET(0x00760e4c); r_esp += 4; return;
}

void f_00760e58(void) /* sub_760E58 */
{
    FN_ENTER(0x00760e58);
    /* 00760e58: fld dword ptr [0x974c28] */ FPUSH(R_F32((u32)(0x974c28u)));
    /* 00760e5e: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00760e62: ret  */ FN_RET(0x00760e58); r_esp += 4; return;
}

void f_00760e64(void) /* sub_760E64 */
{
    FN_ENTER(0x00760e64);
    /* 00760e64: fld dword ptr [0x974c24] */ FPUSH(R_F32((u32)(0x974c24u)));
    /* 00760e6a: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 00760e6e: fld dword ptr [0x974c20] */ FPUSH(R_F32((u32)(0x974c20u)));
    /* 00760e74: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00760e76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00760e78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00760e79: jbe 0x760e7d */ if ((fC||fZ)) goto L_00760e7d;
L_00760e7b:; BB(0x00760e7b);
    /* 00760e7b: fst st(1) */ ST(1) = ST(0);
L_00760e7d:; BB(0x00760e7d);
    /* 00760e7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00760e7f: ret  */ FN_RET(0x00760e64); r_esp += 4; return;
}

void f_00760e80(void) /* sub_760E80 */
{
    FN_ENTER(0x00760e80);
    /* 00760e80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760e81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00760e83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760e85: call 0x760ea4 */ r_esp -= 4; W32(r_esp, 0x760e8au); f_00760ea4();
    /* 00760e8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00760e8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00760e90: jne 0x760e96 */ if (!fZ) goto L_00760e96;
L_00760e92:; BB(0x00760e92);
    /* 00760e92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00760e93: ret 4 */ FN_RET(0x00760e80); r_esp += 8; return;
L_00760e96:; BB(0x00760e96);
    /* 00760e96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00760e97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x760e9cu); f_005c2f74();
    /* 00760e9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760e9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00760e9e: ret 4 */ FN_RET(0x00760e80); r_esp += 8; return;
}

void f_00760ea4(void) /* sub_760EA4 */
{
    FN_ENTER(0x00760ea4);
    /* 00760ea4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760ea5: mov ebp, esp */ r_ebp = r_esp;
    /* 00760ea7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00760ea9: push 0x8f353c */ { u32 v = 0x8f353cu; r_esp -= 4; W32(r_esp, v); }
    /* 00760eae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00760eb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760eb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00760ebc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760ebf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00760ec2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00760ec5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00760ec8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00760ecb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00760ece: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760ed1: mov dword ptr [ecx], 0xb42ec0 */ W32((u32)(r_ecx), 0xb42ec0u);
    /* 00760ed7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00760ede: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x760ee3u); f_00710c28();
    /* 00760ee3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00760ee6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00760eed: mov esp, ebp */ r_esp = r_ebp;
    /* 00760eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760ef0: ret  */ FN_RET(0x00760ea4); r_esp += 4; return;
}

void f_00760ef4(void) /* sub_760EF4 */
{
    FN_ENTER(0x00760ef4);
    /* 00760ef4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760ef5: mov ebp, esp */ r_ebp = r_esp;
    /* 00760ef7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00760ef9: push 0x8f3564 */ { u32 v = 0x8f3564u; r_esp -= 4; W32(r_esp, v); }
    /* 00760efe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00760f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760f05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00760f0c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760f0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00760f12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00760f15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00760f18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00760f1b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00760f1d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00760f24: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x760f29u); f_005caba4();
    /* 00760f29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00760f2a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00760f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00760f2f: je 0x760f72 */ if (fZ) goto L_00760f72;
L_00760f31:; BB(0x00760f31);
    /* 00760f31: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00760f38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00760f3f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760f42: call 0x760f78 */ r_esp -= 4; W32(r_esp, 0x760f47u); f_00760f78();
    /* 00760f47: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760f4a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00760f51:; BB(0x00760f51);
    /* 00760f51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00760f58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00760f5a: call 0x761040 */ r_esp -= 4; W32(r_esp, 0x760f5fu); f_00761040();
    /* 00760f5f: mov eax, ebx */ r_eax = r_ebx;
    /* 00760f61: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00760f64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00760f67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00760f6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00760f70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760f71: ret  */ FN_RET(0x00760ef4); r_esp += 4; return;
L_00760f72:; BB(0x00760f72);
    /* 00760f72: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00760f74: jmp 0x760f51 */ goto L_00760f51;
}

void f_00760f78(void) /* sub_760F78 */
{
    FN_ENTER(0x00760f78);
    /* 00760f78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00760f79: mov ebp, esp */ r_ebp = r_esp;
    /* 00760f7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00760f7d: push 0x8f3580 */ { u32 v = 0x8f3580u; r_esp -= 4; W32(r_esp, v); }
    /* 00760f82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00760f88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760f89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00760f90: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00760f93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00760f96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00760f99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00760f9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00760f9f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00760fa2: call 0x73ec70 */ r_esp -= 4; W32(r_esp, 0x760fa7u); f_0073ec70();
    /* 00760fa7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00760fab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00760fad: push 0x9f57f0 */ { u32 v = 0x9f57f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00760fb2: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x760fb7u); f_00710d30();
    /* 00760fb7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00760fbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760fc1: mov dword ptr [ecx], 0xb42ec0 */ W32((u32)(r_ecx), 0xb42ec0u);
    /* 00760fc7: mov eax, dword ptr [0x9f57c8] */ r_eax = R32((u32)(0x9f57c8u));
    /* 00760fcc: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00760fd3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00760fd6: call 0x760ff4 */ r_esp -= 4; W32(r_esp, 0x760fdbu); f_00760ff4();
    /* 00760fdb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760fde: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x760fe3u); f_00710f64();
    /* 00760fe3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00760fe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00760fe9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00760ff0: mov esp, ebp */ r_esp = r_ebp;
    /* 00760ff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00760ff3: ret  */ FN_RET(0x00760f78); r_esp += 4; return;
}

void f_00760ff4(void) /* sub_760FF4 */
{
    FN_ENTER(0x00760ff4);
    /* 00760ff4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00760ff5: mov esi, ecx */ r_esi = r_ecx;
    /* 00760ff7: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00760ffa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00760ffc: je 0x76100b */ if (fZ) goto L_0076100b;
L_00760ffe:; BB(0x00760ffe);
    /* 00760ffe: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00761003: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x761008u); f_0073ec50();
    /* 00761008: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761009: jmp 0x761033 */ goto L_00761033;
L_0076100b:; BB(0x0076100b);
    /* 0076100b: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00761012: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00761014: jne 0x76101e */ if (!fZ) goto L_0076101e;
L_00761016:; BB(0x00761016);
    /* 00761016: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00761018: jne 0x76101e */ if (!fZ) goto L_0076101e;
L_0076101a:; BB(0x0076101a);
    /* 0076101a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076101c: je 0x76102b */ if (fZ) goto L_0076102b;
L_0076101e:; BB(0x0076101e);
    /* 0076101e: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00761023: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x761028u); f_0073ec50();
    /* 00761028: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00761029: jmp 0x761033 */ goto L_00761033;
L_0076102b:; BB(0x0076102b);
    /* 0076102b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0076102d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x761032u); f_0073ec50();
    /* 00761032: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00761033:; BB(0x00761033);
    /* 00761033: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00761035: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00761038: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0076103b: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0076103e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076103f: ret  */ FN_RET(0x00760ff4); r_esp += 4; return;
}

