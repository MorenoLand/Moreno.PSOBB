#include "protos.h"

void f_0069a030(void) /* sub_69A030 */
{
    FN_ENTER(0x0069a030);
    /* 0069a030: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a033: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0069a037: mov byte ptr [esp], 0x8d */ W8((u32)(r_esp), 0x8du);
    /* 0069a03b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a03d: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069a042: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 0069a046: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 0069a04a: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069a04f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069a051: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069a054: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069a057: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069a05b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069a05e: call 0x6a9cc0 */ r_esp -= 4; W32(r_esp, 0x69a063u); f_006a9cc0();
    /* 0069a063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a065: je 0x69a082 */ if (fZ) goto L_0069a082;
L_0069a067:; BB(0x0069a067);
    /* 0069a067: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069a06c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a06d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a072u); f_0068d5a8();
    /* 0069a072: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069a073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a075: je 0x69a082 */ if (fZ) goto L_0069a082;
L_0069a077:; BB(0x0069a077);
    /* 0069a077: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 0069a07c: mov byte ptr [eax + 0x461], dl */ W8((u32)(r_eax+0x461u), (u8)r_edx);
L_0069a082:; BB(0x0069a082);
    /* 0069a082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a085: ret  */ FN_RET(0x0069a030); r_esp += 4; return;
}

void f_0069a088(void) /* sub_69A088 */
{
    FN_ENTER(0x0069a088);
    /* 0069a088: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a089: mov esi, ecx */ r_esi = r_ecx;
    /* 0069a08b: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0069a092: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a095: jne 0x69a0b3 */ if (!fZ) goto L_0069a0b3;
L_0069a097:; BB(0x0069a097);
    /* 0069a097: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a099: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x69a09eu); f_00689410();
    /* 0069a09e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0a0: jne 0x69a0ad */ if (!fZ) goto L_0069a0ad;
L_0069a0a2:; BB(0x0069a0a2);
    /* 0069a0a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a0a4: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x69a0a9u); f_0068aabc();
    /* 0069a0a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0ab: jne 0x69a0b3 */ if (!fZ) goto L_0069a0b3;
L_0069a0ad:; BB(0x0069a0ad);
    /* 0069a0ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a0af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a0b0: ret 4 */ FN_RET(0x0069a088); r_esp += 8; return;
L_0069a0b3:; BB(0x0069a0b3);
    /* 0069a0b3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069a0b7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a0b9: call 0x69a0c4 */ r_esp -= 4; W32(r_esp, 0x69a0beu); f_0069a0c4();
    /* 0069a0be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a0bf: ret 4 */ FN_RET(0x0069a088); r_esp += 8; return;
}

void f_0069a0c4(void) /* sub_69A0C4 */
{
    FN_ENTER(0x0069a0c4);
    /* 0069a0c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a0c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a0c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a0c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a0c8: mov edi, ecx */ r_edi = r_ecx;
    /* 0069a0ca: mov eax, dword ptr [edi + 0x470] */ r_eax = R32((u32)(r_edi+0x470u));
    /* 0069a0d0: lea ebp, [edi + 0x460] */ r_ebp = (u32)(r_edi+0x460u);
    /* 0069a0d6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0069a0da: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069a0dc: je 0x69a0e5 */ if (fZ) goto L_0069a0e5;
L_0069a0de:; BB(0x0069a0de);
    /* 0069a0de: mov eax, 1 */ r_eax = 0x1u;
    /* 0069a0e3: jmp 0x69a0e7 */ goto L_0069a0e7;
L_0069a0e5:; BB(0x0069a0e5);
    /* 0069a0e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069a0e7:; BB(0x0069a0e7);
    /* 0069a0e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0e9: jne 0x69a168 */ if (!fZ) goto L_0069a168;
L_0069a0ef:; BB(0x0069a0ef);
    /* 0069a0ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069a0f2: test eax, 0x20006 */ {  u32 a = r_eax; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0f7: jne 0x69a168 */ if (!fZ) goto L_0069a168;
L_0069a0f9:; BB(0x0069a0f9);
    /* 0069a0f9: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0fe: jne 0x69a168 */ if (!fZ) goto L_0069a168;
L_0069a100:; BB(0x0069a100);
    /* 0069a100: mov eax, dword ptr [edi + 0x328] */ r_eax = R32((u32)(r_edi+0x328u));
    /* 0069a106: test eax, 0x11e */ {  u32 a = r_eax; u32 b = 0x11eu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a10b: je 0x69a168 */ if (fZ) goto L_0069a168;
L_0069a10d:; BB(0x0069a10d);
    /* 0069a10d: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a110: je 0x69a17c */ if (fZ) goto L_0069a17c;
L_0069a112:; BB(0x0069a112);
    /* 0069a112: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a115: je 0x69a171 */ if (fZ) goto L_0069a171;
L_0069a117:; BB(0x0069a117);
    /* 0069a117: movsx ebx, si */ r_ebx = (u32)(i32)(i16)(u16)r_esi;
    /* 0069a11a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a11b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069a11d: call 0x6ad158 */ r_esp -= 4; W32(r_esp, 0x69a122u); f_006ad158();
    /* 0069a122: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a124: jne 0x69a168 */ if (!fZ) goto L_0069a168;
L_0069a126:; BB(0x0069a126);
    /* 0069a126: mov ecx, edi */ r_ecx = r_edi;
    /* 0069a128: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69a12du); f_0068a3fc();
    /* 0069a12d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a12f: je 0x69a168 */ if (fZ) goto L_0069a168;
L_0069a131:; BB(0x0069a131);
    /* 0069a131: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a132: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069a134: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x69a139u); f_006ad17c();
    /* 0069a139: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069a13d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a13e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0069a141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a142: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a143: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x69a148u); f_006ded14();
    /* 0069a148: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a14b: movsx edx, word ptr [edi + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x336u));
    /* 0069a152: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0069a156: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069a158: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a15a: jl 0x69a168 */ if ((fS!=fO)) goto L_0069a168;
L_0069a15c:; BB(0x0069a15c);
    /* 0069a15c: mov eax, 1 */ r_eax = 0x1u;
    /* 0069a161: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a163: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a164: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a165: ret 4 */ FN_RET(0x0069a0c4); r_esp += 8; return;
L_0069a168:; BB(0x0069a168);
    /* 0069a168: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a16a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a16b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a16c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a16d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a16e: ret 4 */ FN_RET(0x0069a0c4); r_esp += 8; return;
L_0069a171:; BB(0x0069a171);
    /* 0069a171: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69a176u); f_00688b8c();
    /* 0069a176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a178: jne 0x69a168 */ if (!fZ) goto L_0069a168;
L_0069a17a:; BB(0x0069a17a);
    /* 0069a17a: jmp 0x69a117 */ goto L_0069a117;
L_0069a17c:; BB(0x0069a17c);
    /* 0069a17c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069a17e: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x69a183u); f_0068bfa0();
    /* 0069a183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a185: je 0x69a168 */ if (fZ) goto L_0069a168;
L_0069a187:; BB(0x0069a187);
    /* 0069a187: jmp 0x69a117 */ goto L_0069a117;
}

void f_0069a18c(void) /* sub_69A18C */
{
    FN_ENTER(0x0069a18c);
    /* 0069a18c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a18d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a190: movzx esi, word ptr [esp + 0x10] */ r_esi = (u32)R16((u32)(r_esp+0x10u));
    /* 0069a195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a196: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a19bu); f_0068d5a8();
    /* 0069a19b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069a19c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a19e: je 0x69a1b1 */ if (fZ) goto L_0069a1b1;
L_0069a1a0:; BB(0x0069a1a0);
    /* 0069a1a0: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069a1a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a1aa: jne 0x69a1b1 */ if (!fZ) goto L_0069a1b1;
L_0069a1ac:; BB(0x0069a1ac);
    /* 0069a1ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a1af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a1b0: ret  */ FN_RET(0x0069a18c); r_esp += 4; return;
L_0069a1b1:; BB(0x0069a1b1);
    /* 0069a1b1: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 0069a1b6: mov byte ptr [esp], 0x33 */ W8((u32)(r_esp), 0x33u);
    /* 0069a1ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a1bc: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069a1c1: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069a1c6: mov word ptr [esp + 2], si */ W16((u32)(r_esp+0x2u), (u16)r_esi);
    /* 0069a1cb: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0069a1d0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069a1d3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69a1d8u); f_008003e0();
    /* 0069a1d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a1db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a1dc: ret  */ FN_RET(0x0069a18c); r_esp += 4; return;
}

void f_0069a1e0(void) /* sub_69A1E0 */
{
    FN_ENTER(0x0069a1e0);
    /* 0069a1e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a1e1: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a1e4: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 0069a1e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a1ea: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069a1ef: mov byte ptr [esp], 0x33 */ W8((u32)(r_esp), 0x33u);
    /* 0069a1f3: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069a1f8: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069a1fd: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0069a202: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069a204: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0069a207: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0069a20a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069a20e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069a211: call 0x6a9adc */ r_esp -= 4; W32(r_esp, 0x69a216u); f_006a9adc();
    /* 0069a216: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a218: je 0x69a261 */ if (fZ) goto L_0069a261;
L_0069a21a:; BB(0x0069a21a);
    /* 0069a21a: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069a21f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a220: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a225u); f_0068d5a8();
    /* 0069a225: mov ebx, eax */ r_ebx = r_eax;
    /* 0069a227: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a22a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a22c: je 0x69a261 */ if (fZ) goto L_0069a261;
L_0069a22e:; BB(0x0069a22e);
    /* 0069a22e: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0069a233: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a234: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a239u); f_0068d5a8();
    /* 0069a239: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069a23a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a23c: je 0x69a261 */ if (fZ) goto L_0069a261;
L_0069a23e:; BB(0x0069a23e);
    /* 0069a23e: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0069a244: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069a247: je 0x69a250 */ if (fZ) goto L_0069a250;
L_0069a249:; BB(0x0069a249);
    /* 0069a249: mov edx, 1 */ r_edx = 0x1u;
    /* 0069a24e: jmp 0x69a252 */ goto L_0069a252;
L_0069a250:; BB(0x0069a250);
    /* 0069a250: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069a252:; BB(0x0069a252);
    /* 0069a252: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a254: jne 0x69a261 */ if (!fZ) goto L_0069a261;
L_0069a256:; BB(0x0069a256);
    /* 0069a256: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0069a259: cmp edx, dword ptr [0xaca374] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaca374u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a25f: je 0x69a266 */ if (fZ) goto L_0069a266;
L_0069a261:; BB(0x0069a261);
    /* 0069a261: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a264: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a265: ret  */ FN_RET(0x0069a1e0); r_esp += 4; return;
L_0069a266:; BB(0x0069a266);
    /* 0069a266: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0069a26a: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 0069a26e: mov edx, 0xb */ r_edx = 0xbu;
    /* 0069a273: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069a275:; BB(0x0069a275);
    /* 0069a275: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 0069a27a: mov word ptr [ecx], bp */ W16((u32)(r_ecx), (u16)r_ebp);
    /* 0069a27d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a27f: mov word ptr [ecx + 2], bp */ W16((u32)(r_ecx+0x2u), (u16)r_ebp);
    /* 0069a283: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0069a286: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a289: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069a28c: jne 0x69a275 */ if (!fZ) goto L_0069a275;
L_0069a28e:; BB(0x0069a28e);
    /* 0069a28e: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0069a292: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0069a297: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 0069a29f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a2a1: mov dword ptr [esp + 0x10], 0x41200000 */ W32((u32)(r_esp+0x10u), 0x41200000u);
    /* 0069a2a9: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0069a2ae: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 0069a2b3: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0069a2b7: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2b9: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0069a2bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2bf: call 0x6ef8a4 */ r_esp -= 4; W32(r_esp, 0x69a2c4u); f_006ef8a4();
    /* 0069a2c4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a2c7: jmp 0x69a261 */ goto L_0069a261;
}

void f_0069a2cc(void) /* sub_69A2CC */
{
    FN_ENTER(0x0069a2cc);
    /* 0069a2cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2d0: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a2d3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069a2d5: mov eax, dword ptr [ebp + 0x328] */ r_eax = R32((u32)(r_ebp+0x328u));
    /* 0069a2db: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a2e0: movsx ebx, word ptr [esp + 0x54] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x54u));
    /* 0069a2e5: je 0x69a2f3 */ if (fZ) goto L_0069a2f3;
L_0069a2e7:; BB(0x0069a2e7);
    /* 0069a2e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a2e9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a2ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a2ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a2ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a2ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a2f0: ret 4 */ FN_RET(0x0069a2cc); r_esp += 8; return;
L_0069a2f3:; BB(0x0069a2f3);
    /* 0069a2f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a2f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069a2f6: call 0x69a4bc */ r_esp -= 4; W32(r_esp, 0x69a2fbu); f_0069a4bc();
    /* 0069a2fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a2fd: jne 0x69a30b */ if (!fZ) goto L_0069a30b;
L_0069a2ff:; BB(0x0069a2ff);
    /* 0069a2ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a301: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a304: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a305: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a306: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a307: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a308: ret 4 */ FN_RET(0x0069a2cc); r_esp += 8; return;
L_0069a30b:; BB(0x0069a30b);
    /* 0069a30b: lea esi, [ebp + 0x460] */ r_esi = (u32)(r_ebp+0x460u);
    /* 0069a311: mov word ptr [ebp + 0x464], bx */ W16((u32)(r_ebp+0x464u), (u16)r_ebx);
    /* 0069a318: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a31a: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x69a31fu); f_006acf24();
    /* 0069a31f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a320: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069a323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a324: call 0x6e1a48 */ r_esp -= 4; W32(r_esp, 0x69a329u); f_006e1a48();
    /* 0069a329: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a32c: mov ecx, dword ptr [ebp + 0x45c] */ r_ecx = R32((u32)(r_ebp+0x45cu));
    /* 0069a332: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a334: je 0x69a34b */ if (fZ) goto L_0069a34b;
L_0069a336:; BB(0x0069a336);
    /* 0069a336: movzx edx, word ptr [ebp + 0x480] */ r_edx = (u32)R16((u32)(r_ebp+0x480u));
    /* 0069a33d: movsx eax, word ptr [ebp + 0x482] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 0069a344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a345: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a346: call 0x7a4118 */ r_esp -= 4; W32(r_esp, 0x69a34bu); f_007a4118();
L_0069a34b:; BB(0x0069a34b);
    /* 0069a34b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a34d: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x69a352u); f_006acf24();
    /* 0069a352: mov ebx, eax */ r_ebx = r_eax;
    /* 0069a354: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a355: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a357: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x69a35cu); f_006ad17c();
    /* 0069a35c: lea edi, [esp + 4] */ r_edi = (u32)(r_esp+0x4u);
    /* 0069a360: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0069a363: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a364: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a366: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x69a36bu); f_006ad238();
    /* 0069a36b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a36e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a370: je 0x69a382 */ if (fZ) goto L_0069a382;
L_0069a372:; BB(0x0069a372);
    /* 0069a372: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069a379: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a37c: je 0x69a4ad */ if (fZ) goto L_0069a4ad;
L_0069a382:; BB(0x0069a382);
    /* 0069a382: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069a386: mov byte ptr [esp + 8], 0x8d */ W8((u32)(r_esp+0x8u), 0x8du);
    /* 0069a38b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a38d: mov byte ptr [esp + 0xd], dl */ W8((u32)(r_esp+0xdu), (u8)r_edx);
    /* 0069a391: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 0069a396: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0069a39b: movzx edx, byte ptr [esp] */ r_edx = (u32)R8((u32)(r_esp));
    /* 0069a39f: mov word ptr [esp + 0xa], di */ W16((u32)(r_esp+0xau), (u16)r_edi);
    /* 0069a3a4: mov byte ptr [esp + 0xc], dl */ W8((u32)(r_esp+0xcu), (u8)r_edx);
    /* 0069a3a8: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0069a3ac: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69a3b1u); f_008003e0();
    /* 0069a3b1: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 0069a3b5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a3b7: mov byte ptr [esp + 0x17], dl */ W8((u32)(r_esp+0x17u), (u8)r_edx);
    /* 0069a3bb: mov byte ptr [esp + 0x15], dl */ W8((u32)(r_esp+0x15u), (u8)r_edx);
    /* 0069a3bf: mov edx, 0xa */ r_edx = 0xau;
L_0069a3c4:; BB(0x0069a3c4);
    /* 0069a3c4: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069a3c9: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0069a3cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a3ce: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 0069a3d2: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069a3d5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069a3d8: jne 0x69a3c4 */ if (!fZ) goto L_0069a3c4;
L_0069a3da:; BB(0x0069a3da);
    /* 0069a3da: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 0069a3df: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069a3e3: mov word ptr [esp + 0x12], di */ W16((u32)(r_esp+0x12u), (u16)r_edi);
    /* 0069a3e8: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a3ea: mov byte ptr [esp + 0x14], bl */ W8((u32)(r_esp+0x14u), (u8)r_ebx);
    /* 0069a3ee: mov byte ptr [esp + 0x10], 0x47 */ W8((u32)(r_esp+0x10u), 0x47u);
    /* 0069a3f3: mov byte ptr [esp + 0x16], al */ W8((u32)(r_esp+0x16u), (u8)r_eax);
    /* 0069a3f7: mov byte ptr [esp + 0x11], 0xc */ W8((u32)(r_esp+0x11u), 0xcu);
    /* 0069a3fc: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x69a401u); f_006ad204();
    /* 0069a401: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 0069a405: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069a408: mov byte ptr [esp + 0x17], al */ W8((u32)(r_esp+0x17u), (u8)r_eax);
    /* 0069a40c: add ebp, 0x480 */ {  u32 a = r_ebp; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a412: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a416: jle 0x69a488 */ if ((fZ||fS!=fO)) goto L_0069a488;
L_0069a418:; BB(0x0069a418);
    /* 0069a418: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a41b: jl 0x69a46c */ if ((fS!=fO)) goto L_0069a46c;
L_0069a41d:; BB(0x0069a41d);
    /* 0069a41d: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
L_0069a420:; BB(0x0069a420);
    /* 0069a420: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 0069a424: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 0069a427: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0069a42b: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 0069a42f: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0069a433: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 0069a437: movzx edi, word ptr [ebp + 6] */ r_edi = (u32)R16((u32)(r_ebp+0x6u));
    /* 0069a43b: mov word ptr [esi + 6], di */ W16((u32)(r_esi+0x6u), (u16)r_edi);
    /* 0069a43f: movzx edi, word ptr [ebp + 8] */ r_edi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0069a443: mov word ptr [esi + 8], di */ W16((u32)(r_esi+0x8u), (u16)r_edi);
    /* 0069a447: movzx edi, word ptr [ebp + 0xa] */ r_edi = (u32)R16((u32)(r_ebp+0xau));
    /* 0069a44b: mov word ptr [esi + 0xa], di */ W16((u32)(r_esi+0xau), (u16)r_edi);
    /* 0069a44f: movzx edi, word ptr [ebp + 0xc] */ r_edi = (u32)R16((u32)(r_ebp+0xcu));
    /* 0069a453: mov word ptr [esi + 0xc], di */ W16((u32)(r_esi+0xcu), (u16)r_edi);
    /* 0069a457: movzx edi, word ptr [ebp + 0xe] */ r_edi = (u32)R16((u32)(r_ebp+0xeu));
    /* 0069a45b: mov word ptr [esi + 0xe], di */ W16((u32)(r_esi+0xeu), (u16)r_edi);
    /* 0069a45f: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a462: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a465: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a468: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a46a: jle 0x69a420 */ if ((fZ||fS!=fO)) goto L_0069a420;
L_0069a46c:; BB(0x0069a46c);
    /* 0069a46c: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0069a470: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 0069a473: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0069a477: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 0069a47b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a47e: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a481: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a484: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a486: jl 0x69a46c */ if ((fS!=fO)) goto L_0069a46c;
L_0069a488:; BB(0x0069a488);
    /* 0069a488: movsx ebp, byte ptr [esp + 0x17] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esp+0x17u));
    /* 0069a48d: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0069a491: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a493: lea eax, [ebp + ebp + 0x14] */ r_eax = (u32)(r_ebp+r_ebp+0x14u);
    /* 0069a497: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a499: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069a49b: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a49e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0069a4a1: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0069a4a4: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 0069a4a8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69a4adu); f_008003e0();
L_0069a4ad:; BB(0x0069a4ad);
    /* 0069a4ad: mov eax, 1 */ r_eax = 0x1u;
    /* 0069a4b2: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a4b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a4b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a4b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a4b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a4b9: ret 4 */ FN_RET(0x0069a2cc); r_esp += 8; return;
}

void f_0069a4bc(void) /* sub_69A4BC */
{
    FN_ENTER(0x0069a4bc);
    /* 0069a4bc: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069a4c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a4c6: jne 0x69a4d4 */ if (!fZ) goto L_0069a4d4;
L_0069a4c8:; BB(0x0069a4c8);
    /* 0069a4c8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069a4cc: call 0x69a0c4 */ r_esp -= 4; W32(r_esp, 0x69a4d1u); f_0069a0c4();
    /* 0069a4d1: ret 4 */ FN_RET(0x0069a4bc); r_esp += 8; return;
L_0069a4d4:; BB(0x0069a4d4);
    /* 0069a4d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a4d6: ret 4 */ FN_RET(0x0069a4bc); r_esp += 8; return;
}

void f_0069a4dc(void) /* sub_69A4DC */
{
    FN_ENTER(0x0069a4dc);
    /* 0069a4dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4de: mov edi, ecx */ r_edi = r_ecx;
    /* 0069a4e0: mov ecx, dword ptr [edi + 0x45c] */ r_ecx = R32((u32)(r_edi+0x45cu));
    /* 0069a4e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a4e8: je 0x69a538 */ if (fZ) goto L_0069a538;
L_0069a4ea:; BB(0x0069a4ea);
    /* 0069a4ea: movzx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)R16((u32)(r_esp+0xcu));
    /* 0069a4ef: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0069a4f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4f3: add ecx, 0x10b0 */ {  u32 a = r_ecx; u32 b = 0x10b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a4f9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4fc: call 0x7a3790 */ r_esp -= 4; W32(r_esp, 0x69a501u); f_007a3790();
    /* 0069a501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a503: je 0x69a538 */ if (fZ) goto L_0069a538;
L_0069a505:; BB(0x0069a505);
    /* 0069a505: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 0069a50b: mov byte ptr [eax + 0x10b4], 3 */ W8((u32)(r_eax+0x10b4u), 0x3u);
    /* 0069a512: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
    /* 0069a518: mov byte ptr [edx + 0x10b5], bl */ W8((u32)(r_edx+0x10b5u), (u8)r_ebx);
    /* 0069a51e: mov ebx, dword ptr [edi + 0x45c] */ r_ebx = R32((u32)(r_edi+0x45cu));
    /* 0069a524: movzx ecx, word ptr [ebx + 0x10b6] */ r_ecx = (u32)R16((u32)(r_ebx+0x10b6u));
    /* 0069a52b: and ecx, 0xfffe */ {  u32 a = r_ecx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a531: mov word ptr [ebx + 0x10b6], cx */ W16((u32)(r_ebx+0x10b6u), (u16)r_ecx);
L_0069a538:; BB(0x0069a538);
    /* 0069a538: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a539: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a53a: ret 4 */ FN_RET(0x0069a4dc); r_esp += 8; return;
}

void f_0069a4e0(void)
{
    FN_ENTER(0x0069a4e0);
    /* 0069a4e0: mov ecx, dword ptr [edi + 0x45c] */ r_ecx = R32((u32)(r_edi+0x45cu));
    /* 0069a4e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a4e8: je 0x69a538 */ if (fZ) goto L_0069a538;
L_0069a4ea:; BB(0x0069a4ea);
    /* 0069a4ea: movzx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)R16((u32)(r_esp+0xcu));
    /* 0069a4ef: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0069a4f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4f3: add ecx, 0x10b0 */ {  u32 a = r_ecx; u32 b = 0x10b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a4f9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a4fc: call 0x7a3790 */ r_esp -= 4; W32(r_esp, 0x69a501u); f_007a3790();
    /* 0069a501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a503: je 0x69a538 */ if (fZ) goto L_0069a538;
L_0069a505:; BB(0x0069a505);
    /* 0069a505: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 0069a50b: mov byte ptr [eax + 0x10b4], 3 */ W8((u32)(r_eax+0x10b4u), 0x3u);
    /* 0069a512: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
    /* 0069a518: mov byte ptr [edx + 0x10b5], bl */ W8((u32)(r_edx+0x10b5u), (u8)r_ebx);
    /* 0069a51e: mov ebx, dword ptr [edi + 0x45c] */ r_ebx = R32((u32)(r_edi+0x45cu));
    /* 0069a524: movzx ecx, word ptr [ebx + 0x10b6] */ r_ecx = (u32)R16((u32)(r_ebx+0x10b6u));
    /* 0069a52b: and ecx, 0xfffe */ {  u32 a = r_ecx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a531: mov word ptr [ebx + 0x10b6], cx */ W16((u32)(r_ebx+0x10b6u), (u16)r_ecx);
L_0069a538:; BB(0x0069a538);
    /* 0069a538: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a539: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a53a: ret 4 */ FN_RET(0x0069a4e0); r_esp += 8; return;
}

void f_0069a540(void) /* sub_69A540 */
{
    FN_ENTER(0x0069a540);
    /* 0069a540: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a541: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a542: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a543: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a544: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a547: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069a54b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a54d: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069a552: mov byte ptr [esp], 0x48 */ W8((u32)(r_esp), 0x48u);
    /* 0069a556: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069a55b: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069a560: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069a562: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069a565: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069a568: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069a56c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069a56f: call 0x6a9cec */ r_esp -= 4; W32(r_esp, 0x69a574u); f_006a9cec();
    /* 0069a574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a576: je 0x69a62b */ if (fZ) goto L_0069a62b;
L_0069a57c:; BB(0x0069a57c);
    /* 0069a57c: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069a581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a582: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a587u); f_0068d5a8();
    /* 0069a587: mov esi, eax */ r_esi = r_eax;
    /* 0069a589: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a58c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a58e: je 0x69a62b */ if (fZ) goto L_0069a62b;
L_0069a594:; BB(0x0069a594);
    /* 0069a594: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a596: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69a59bu); f_0068a3fc();
    /* 0069a59b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a59d: je 0x69a62b */ if (fZ) goto L_0069a62b;
L_0069a5a3:; BB(0x0069a5a3);
    /* 0069a5a3: movsx ebp, word ptr [esp + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069a5a8: lea edi, [esi + 0x460] */ r_edi = (u32)(r_esi+0x460u);
    /* 0069a5ae: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0069a5b2: mov word ptr [esi + 0x464], bp */ W16((u32)(r_esi+0x464u), (u16)r_ebp);
    /* 0069a5b9: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 0069a5be: movsx ebx, dl */ r_ebx = (u32)(i32)(i8)(u8)r_edx;
    /* 0069a5c1: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a5c4: je 0x69a6a2 */ if (fZ) goto L_0069a6a2;
L_0069a5ca:; BB(0x0069a5ca);
    /* 0069a5ca: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 0069a5cd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069a5d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a5d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a5d3: mov ecx, edi */ r_ecx = r_edi;
    /* 0069a5d5: call 0x6acec8 */ r_esp -= 4; W32(r_esp, 0x69a5dau); f_006acec8();
    /* 0069a5da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a5dc: jne 0x69a5e6 */ if (!fZ) goto L_0069a5e6;
L_0069a5de:; BB(0x0069a5de);
    /* 0069a5de: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a5e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a5e2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_0069a5e6:; BB(0x0069a5e6);
    /* 0069a5e6: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069a5ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a5eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a5ec: mov byte ptr [esi + 0x460], dl */ W8((u32)(r_esi+0x460u), (u8)r_edx);
    /* 0069a5f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a5f4: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x69a5f9u); f_00699fd8();
    /* 0069a5f9: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a5fc: jl 0x69a608 */ if ((fS!=fO)) goto L_0069a608;
L_0069a5fe:; BB(0x0069a5fe);
    /* 0069a5fe: cmp ebp, 0xd */ {  u32 a = r_ebp; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a601: jle 0x69a638 */ if ((fZ||fS!=fO)) goto L_0069a638;
L_0069a603:; BB(0x0069a603);
    /* 0069a603: cmp ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a606: jge 0x69a633 */ if ((fS==fO)) goto L_0069a633;
L_0069a608:; BB(0x0069a608);
    /* 0069a608: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 0069a60e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069a611: je 0x69a61a */ if (fZ) goto L_0069a61a;
L_0069a613:; BB(0x0069a613);
    /* 0069a613: mov edx, 1 */ r_edx = 0x1u;
    /* 0069a618: jmp 0x69a61c */ goto L_0069a61c;
L_0069a61a:; BB(0x0069a61a);
    /* 0069a61a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069a61c:; BB(0x0069a61c);
    /* 0069a61c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a61e: jne 0x69a62b */ if (!fZ) goto L_0069a62b;
L_0069a620:; BB(0x0069a620);
    /* 0069a620: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 0069a623: cmp edx, dword ptr [0xaca374] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaca374u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a629: je 0x69a66d */ if (fZ) goto L_0069a66d;
L_0069a62b:; BB(0x0069a62b);
    /* 0069a62b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a62e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a62f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a630: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a631: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a632: ret  */ FN_RET(0x0069a540); r_esp += 4; return;
L_0069a633:; BB(0x0069a633);
    /* 0069a633: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a636: jg 0x69a608 */ if ((!fZ&&fS==fO)) goto L_0069a608;
L_0069a638:; BB(0x0069a638);
    /* 0069a638: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069a63c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a63d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a63e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a63f: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x69a644u); f_006ded14();
    /* 0069a644: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a645: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a646: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0069a64a: mov dword ptr [esi + 0x46c], edx */ W32((u32)(r_esi+0x46cu), r_edx);
    /* 0069a650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a651: mov edi, 4 */ r_edi = 0x4u;
    /* 0069a656: mov word ptr [esi + 0x330], di */ W16((u32)(r_esi+0x330u), (u16)r_edi);
    /* 0069a65d: call 0x6e0780 */ r_esp -= 4; W32(r_esp, 0x69a662u); f_006e0780();
    /* 0069a662: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a665: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a668: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a669: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a66a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a66b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a66c: ret  */ FN_RET(0x0069a540); r_esp += 4; return;
L_0069a66d:; BB(0x0069a66d);
    /* 0069a66d: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069a671: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a672: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a673: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a674: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x69a679u); f_006ded14();
    /* 0069a679: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a67a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a67b: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0069a67f: mov dword ptr [esi + 0x46c], edx */ W32((u32)(r_esi+0x46cu), r_edx);
    /* 0069a685: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a686: mov edi, 4 */ r_edi = 0x4u;
    /* 0069a68b: mov word ptr [esi + 0x330], di */ W16((u32)(r_esi+0x330u), (u16)r_edi);
    /* 0069a692: call 0x6e0780 */ r_esp -= 4; W32(r_esp, 0x69a697u); f_006e0780();
    /* 0069a697: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a69a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a69d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a69e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a69f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a6a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a6a1: ret  */ FN_RET(0x0069a540); r_esp += 4; return;
L_0069a6a2:; BB(0x0069a6a2);
    /* 0069a6a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069a6a4: call 0x6ad1e0 */ r_esp -= 4; W32(r_esp, 0x69a6a9u); f_006ad1e0();
    /* 0069a6a9: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a6ab: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
    /* 0069a6ae: jmp 0x69a5ca */ goto L_0069a5ca;
}

void f_0069a6b4(void) /* sub_69A6B4 */
{
    FN_ENTER(0x0069a6b4);
    /* 0069a6b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a6b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a6b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a6b7: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a6ba: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0069a6be: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0069a6c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a6c4: mov byte ptr [esp + 0xc], dl */ W8((u32)(r_esp+0xcu), (u8)r_edx);
    /* 0069a6c8: mov byte ptr [esp + 0xd], dl */ W8((u32)(r_esp+0xdu), (u8)r_edx);
    /* 0069a6cc: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0069a6d1: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0069a6d6: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 0069a6db: mov edx, 0xa */ r_edx = 0xau;
L_0069a6e0:; BB(0x0069a6e0);
    /* 0069a6e0: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069a6e5: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 0069a6e8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a6ea: mov word ptr [ecx + 2], bp */ W16((u32)(r_ecx+0x2u), (u16)r_ebp);
    /* 0069a6ee: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a6f1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069a6f4: jne 0x69a6e0 */ if (!fZ) goto L_0069a6e0;
L_0069a6f6:; BB(0x0069a6f6);
    /* 0069a6f6: mov byte ptr [esp + 8], 0x49 */ W8((u32)(r_esp+0x8u), 0x49u);
    /* 0069a6fb: mov byte ptr [esp + 9], 0xd */ W8((u32)(r_esp+0x9u), 0xdu);
    /* 0069a700: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069a702: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069a706: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0069a709: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0069a70d: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0069a710: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0069a714: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0069a717: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0069a71b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0069a71e: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0069a722: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0069a725: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069a729: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0069a72d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0069a730: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069a734: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0069a737: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0069a73b: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0069a73e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0069a742: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0069a745: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0069a749: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0069a74c: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0069a750: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0069a753: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0069a757: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0069a75a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0069a75e: call 0x6a9d18 */ r_esp -= 4; W32(r_esp, 0x69a763u); f_006a9d18();
    /* 0069a763: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a765: je 0x69a89c */ if (fZ) goto L_0069a89c;
L_0069a76b:; BB(0x0069a76b);
    /* 0069a76b: movzx eax, word ptr [esp + 0xa] */ r_eax = (u32)R16((u32)(r_esp+0xau));
    /* 0069a770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a771: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a776u); f_0068d5a8();
    /* 0069a776: mov ebp, eax */ r_ebp = r_eax;
    /* 0069a778: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a77b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a77d: je 0x69a89c */ if (fZ) goto L_0069a89c;
L_0069a783:; BB(0x0069a783);
    /* 0069a783: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 0069a789: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a78f: je 0x69a798 */ if (fZ) goto L_0069a798;
L_0069a791:; BB(0x0069a791);
    /* 0069a791: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a794: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a796: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a797: ret  */ FN_RET(0x0069a6b4); r_esp += 4; return;
L_0069a798:; BB(0x0069a798);
    /* 0069a798: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69a79du); f_00807d60();
    /* 0069a79d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a79f: jne 0x69a7a8 */ if (!fZ) goto L_0069a7a8;
L_0069a7a1:; BB(0x0069a7a1);
    /* 0069a7a1: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a7a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a7a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a7a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a7a7: ret  */ FN_RET(0x0069a6b4); r_esp += 4; return;
L_0069a7a8:; BB(0x0069a7a8);
    /* 0069a7a8: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0069a7ae: cmp edx, dword ptr [ebp + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a7b4: je 0x69a7bd */ if (fZ) goto L_0069a7bd;
L_0069a7b6:; BB(0x0069a7b6);
    /* 0069a7b6: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a7b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a7ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a7bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a7bc: ret  */ FN_RET(0x0069a6b4); r_esp += 4; return;
L_0069a7bd:; BB(0x0069a7bd);
    /* 0069a7bd: mov ebx, dword ptr [ebp + 0x524] */ r_ebx = R32((u32)(r_ebp+0x524u));
    /* 0069a7c3: lea edi, [ebp + 0x4e4] */ r_edi = (u32)(r_ebp+0x4e4u);
    /* 0069a7c9: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a7cc: mov dword ptr [ebp + 0x524], ebx */ W32((u32)(r_ebp+0x524u), r_ebx);
    /* 0069a7d2: movzx eax, word ptr [esp + 0xa] */ r_eax = (u32)R16((u32)(r_esp+0xau));
    /* 0069a7d7: movsx edx, byte ptr [esp + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 0069a7dc: call 0x69a8ae */ r_esp -= 4; W32(r_esp, 0x69a7e1u); f_0069a8ae();
    /* 0069a7e1: movsx edx, byte ptr [esp + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 0069a7e6: mov word ptr [ebp + 0x4e6], dx */ W16((u32)(r_ebp+0x4e6u), (u16)r_edx);
    /* 0069a7ed: movsx ebx, word ptr [esp + 0xe] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xeu));
    /* 0069a7f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a7f3: mov ecx, edi */ r_ecx = r_edi;
    /* 0069a7f5: call 0x6a826c */ r_esp -= 4; W32(r_esp, 0x69a7fau); f_006a826c();
    /* 0069a7fa: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0069a7ff: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0069a803: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0069a807: fstp dword ptr [ebp + 0x520] */ W_F32((u32)(r_ebp+0x520u), ST(0)); FPOP();
    /* 0069a80d: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0069a811: lea edi, [ebp + 0x4f8] */ r_edi = (u32)(r_ebp+0x4f8u);
    /* 0069a817: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a819: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a81b: jle 0x69a893 */ if ((fZ||fS!=fO)) goto L_0069a893;
L_0069a81d:; BB(0x0069a81d);
    /* 0069a81d: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a820: jl 0x69a878 */ if ((fS!=fO)) goto L_0069a878;
L_0069a822:; BB(0x0069a822);
    /* 0069a822: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0069a826: lea eax, [ebx - 5] */ r_eax = (u32)(r_ebx+0xfffffffbu);
L_0069a829:; BB(0x0069a829);
    /* 0069a829: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0069a82c: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0069a82f: movzx esi, word ptr [ecx + 2] */ r_esi = (u32)R16((u32)(r_ecx+0x2u));
    /* 0069a833: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 0069a837: movzx esi, word ptr [ecx + 4] */ r_esi = (u32)R16((u32)(r_ecx+0x4u));
    /* 0069a83b: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 0069a83f: movzx esi, word ptr [ecx + 6] */ r_esi = (u32)R16((u32)(r_ecx+0x6u));
    /* 0069a843: mov word ptr [edi + 6], si */ W16((u32)(r_edi+0x6u), (u16)r_esi);
    /* 0069a847: movzx esi, word ptr [ecx + 8] */ r_esi = (u32)R16((u32)(r_ecx+0x8u));
    /* 0069a84b: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0069a84f: movzx esi, word ptr [ecx + 0xa] */ r_esi = (u32)R16((u32)(r_ecx+0xau));
    /* 0069a853: mov word ptr [edi + 0xa], si */ W16((u32)(r_edi+0xau), (u16)r_esi);
    /* 0069a857: movzx esi, word ptr [ecx + 0xc] */ r_esi = (u32)R16((u32)(r_ecx+0xcu));
    /* 0069a85b: mov word ptr [edi + 0xc], si */ W16((u32)(r_edi+0xcu), (u16)r_esi);
    /* 0069a85f: movzx esi, word ptr [ecx + 0xe] */ r_esi = (u32)R16((u32)(r_ecx+0xeu));
    /* 0069a863: mov word ptr [edi + 0xe], si */ W16((u32)(r_edi+0xeu), (u16)r_esi);
    /* 0069a867: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a86a: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a86d: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069a870: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a872: jle 0x69a829 */ if ((fZ||fS!=fO)) goto L_0069a829;
L_0069a874:; BB(0x0069a874);
    /* 0069a874: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
L_0069a878:; BB(0x0069a878);
    /* 0069a878: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0069a87b: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0069a87e: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 0069a882: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 0069a886: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a889: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a88c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069a88f: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a891: jl 0x69a878 */ if ((fS!=fO)) goto L_0069a878;
L_0069a893:; BB(0x0069a893);
    /* 0069a893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069a895: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069a897: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69a89cu); f_0069f648();
L_0069a89c:; BB(0x0069a89c);
    /* 0069a89c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a89f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a8a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a8a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a8a2: ret  */ FN_RET(0x0069a6b4); r_esp += 4; return;
}

void f_0069a8ae(void) /* sub_69A8AE */
{
    FN_ENTER(0x0069a8ae);
    /* 0069a8ae: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 0069a8b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a8b6: je 0x69a8bf */ if (fZ) goto L_0069a8bf;
L_0069a8b8:; BB(0x0069a8b8);
    /* 0069a8b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8ba: call 0x6a836c */ r_esp -= 4; W32(r_esp, 0x69a8bfu); f_006a836c();
L_0069a8bf:; BB(0x0069a8bf);
    /* 0069a8bf: ret  */ FN_RET(0x0069a8ae); r_esp += 4; return;
}

void f_0069a8c0(void) /* sub_69A8C0 */
{
    FN_ENTER(0x0069a8c0);
    /* 0069a8c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069a8c3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0069a8c6: test eax, 0x20006 */ {  u32 a = r_eax; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a8cb: jne 0x69a92d */ if (!fZ) goto L_0069a92d;
L_0069a8cd:; BB(0x0069a8cd);
    /* 0069a8cd: mov eax, dword ptr [ebx + 0x328] */ r_eax = R32((u32)(r_ebx+0x328u));
    /* 0069a8d3: test eax, 0x11e */ {  u32 a = r_eax; u32 b = 0x11eu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a8d8: je 0x69a92d */ if (fZ) goto L_0069a92d;
L_0069a8da:; BB(0x0069a8da);
    /* 0069a8da: mov edx, dword ptr [ebx + 0x524] */ r_edx = R32((u32)(r_ebx+0x524u));
    /* 0069a8e0: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069a8e3: je 0x69a8ec */ if (fZ) goto L_0069a8ec;
L_0069a8e5:; BB(0x0069a8e5);
    /* 0069a8e5: mov eax, 1 */ r_eax = 0x1u;
    /* 0069a8ea: jmp 0x69a8ee */ goto L_0069a8ee;
L_0069a8ec:; BB(0x0069a8ec);
    /* 0069a8ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069a8ee:; BB(0x0069a8ee);
    /* 0069a8ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a8f0: je 0x69a92d */ if (fZ) goto L_0069a92d;
L_0069a8f2:; BB(0x0069a8f2);
    /* 0069a8f2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069a8f5: jne 0x69a92d */ if (!fZ) goto L_0069a92d;
L_0069a8f7:; BB(0x0069a8f7);
    /* 0069a8f7: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069a8fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a901: jne 0x69a919 */ if (!fZ) goto L_0069a919;
L_0069a903:; BB(0x0069a903);
    /* 0069a903: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069a905: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x69a90au); f_00689410();
    /* 0069a90a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a90c: jne 0x69a92d */ if (!fZ) goto L_0069a92d;
L_0069a90e:; BB(0x0069a90e);
    /* 0069a90e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069a910: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x69a915u); f_0068aabc();
    /* 0069a915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a917: je 0x69a92d */ if (fZ) goto L_0069a92d;
L_0069a919:; BB(0x0069a919);
    /* 0069a919: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069a91b: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69a920u); f_0068a3fc();
    /* 0069a920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a922: je 0x69a92d */ if (fZ) goto L_0069a92d;
L_0069a924:; BB(0x0069a924);
    /* 0069a924: mov eax, 1 */ r_eax = 0x1u;
    /* 0069a929: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a92a: ret 4 */ FN_RET(0x0069a8c0); r_esp += 8; return;
L_0069a92d:; BB(0x0069a92d);
    /* 0069a92d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a92f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a930: ret 4 */ FN_RET(0x0069a8c0); r_esp += 8; return;
}

void f_0069a934(void) /* sub_69A934 */
{
    FN_ENTER(0x0069a934);
    /* 0069a934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a935: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a938: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069a93c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a93e: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069a943: mov byte ptr [esp], 0x37 */ W8((u32)(r_esp), 0x37u);
    /* 0069a947: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069a94c: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069a951: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069a953: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069a956: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069a959: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069a95d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069a960: call 0x6a9b0c */ r_esp -= 4; W32(r_esp, 0x69a965u); f_006a9b0c();
    /* 0069a965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a967: je 0x69a9a0 */ if (fZ) goto L_0069a9a0;
L_0069a969:; BB(0x0069a969);
    /* 0069a969: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069a96e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a96f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a974u); f_0068d5a8();
    /* 0069a974: mov edi, eax */ r_edi = r_eax;
    /* 0069a976: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a979: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a97b: je 0x69a9a0 */ if (fZ) goto L_0069a9a0;
L_0069a97d:; BB(0x0069a97d);
    /* 0069a97d: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0069a983: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069a986: je 0x69a98f */ if (fZ) goto L_0069a98f;
L_0069a988:; BB(0x0069a988);
    /* 0069a988: mov edx, 1 */ r_edx = 0x1u;
    /* 0069a98d: jmp 0x69a991 */ goto L_0069a991;
L_0069a98f:; BB(0x0069a98f);
    /* 0069a98f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069a991:; BB(0x0069a991);
    /* 0069a991: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a993: jne 0x69a9a0 */ if (!fZ) goto L_0069a9a0;
L_0069a995:; BB(0x0069a995);
    /* 0069a995: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0069a998: cmp edx, dword ptr [0xaca374] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaca374u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a99e: je 0x69a9a5 */ if (fZ) goto L_0069a9a5;
L_0069a9a0:; BB(0x0069a9a0);
    /* 0069a9a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a9a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a9a4: ret  */ FN_RET(0x0069a934); r_esp += 4; return;
L_0069a9a5:; BB(0x0069a9a5);
    /* 0069a9a5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069a9a7: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69a9acu); f_0068a3fc();
    /* 0069a9ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a9ae: je 0x69a9a0 */ if (fZ) goto L_0069a9a0;
L_0069a9b0:; BB(0x0069a9b0);
    /* 0069a9b0: mov edx, dword ptr [edi + 0x524] */ r_edx = R32((u32)(r_edi+0x524u));
    /* 0069a9b6: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069a9b9: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069a9bc: mov dword ptr [edi + 0x524], edx */ W32((u32)(r_edi+0x524u), r_edx);
    /* 0069a9c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069a9c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a9c6: ret  */ FN_RET(0x0069a934); r_esp += 4; return;
}

void f_0069a9c8(void) /* sub_69A9C8 */
{
    FN_ENTER(0x0069a9c8);
    /* 0069a9c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a9c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a9ca: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069a9ce: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069a9d1: mov byte ptr [esp], 0x4a */ W8((u32)(r_esp), 0x4au);
    /* 0069a9d5: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069a9da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069a9dc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069a9df: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69a9e4u); f_006a9e70();
    /* 0069a9e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a9e6: je 0x69aa29 */ if (fZ) goto L_0069aa29;
L_0069a9e8:; BB(0x0069a9e8);
    /* 0069a9e8: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069a9ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a9ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69a9f3u); f_0068d5a8();
    /* 0069a9f3: mov esi, eax */ r_esi = r_eax;
    /* 0069a9f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a9f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069a9fa: je 0x69aa29 */ if (fZ) goto L_0069aa29;
L_0069a9fc:; BB(0x0069a9fc);
    /* 0069a9fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a9fd: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69aa02u); f_00693468();
    /* 0069aa02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069aa03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069aa05: je 0x69aa29 */ if (fZ) goto L_0069aa29;
L_0069aa07:; BB(0x0069aa07);
    /* 0069aa07: mov ecx, esi */ r_ecx = r_esi;
    /* 0069aa09: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69aa0eu); f_0068a3fc();
    /* 0069aa0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069aa10: je 0x69aa29 */ if (fZ) goto L_0069aa29;
L_0069aa12:; BB(0x0069aa12);
    /* 0069aa12: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 0069aa18: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069aa1e: jne 0x69aa29 */ if (!fZ) goto L_0069aa29;
L_0069aa20:; BB(0x0069aa20);
    /* 0069aa20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa22: mov ecx, esi */ r_ecx = r_esi;
    /* 0069aa24: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69aa29u); f_0069f384();
L_0069aa29:; BB(0x0069aa29);
    /* 0069aa29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069aa2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069aa2b: ret  */ FN_RET(0x0069a9c8); r_esp += 4; return;
}

void f_0069aa2c(void) /* sub_69AA2C */
{
    FN_ENTER(0x0069aa2c);
    /* 0069aa2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa2d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069aa30: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069aa34: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069aa36: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0069aa3b: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0069aa43: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0069aa48: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0069aa50: mov byte ptr [esp], 0x4b */ W8((u32)(r_esp), 0x4bu);
    /* 0069aa54: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0069aa59: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069aa5b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0069aa5e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069aa61: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0069aa64: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069aa68: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0069aa6b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069aa6f: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0069aa72: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069aa76: call 0x6a9d9c */ r_esp -= 4; W32(r_esp, 0x69aa7bu); f_006a9d9c();
    /* 0069aa7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aa7d: je 0x69aaee */ if (fZ) goto L_0069aaee;
L_0069aa7f:; BB(0x0069aa7f);
    /* 0069aa7f: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069aa84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa85: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69aa8au); f_0068d5a8();
    /* 0069aa8a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069aa8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aa8f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aa91: je 0x69aaee */ if (fZ) goto L_0069aaee;
L_0069aa93:; BB(0x0069aa93);
    /* 0069aa93: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 0069aa99: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aa9f: je 0x69aaa6 */ if (fZ) goto L_0069aaa6;
L_0069aaa1:; BB(0x0069aaa1);
    /* 0069aaa1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069aaa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069aaa5: ret  */ FN_RET(0x0069aa2c); r_esp += 4; return;
L_0069aaa6:; BB(0x0069aaa6);
    /* 0069aaa6: movsx edx, word ptr [esp + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 0069aaab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069aaac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069aaae: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x69aab3u); f_00770b58();
    /* 0069aab3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069aab4: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69aab9u); f_00693468();
    /* 0069aab9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069aaba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aabc: je 0x69aaee */ if (fZ) goto L_0069aaee;
L_0069aabe:; BB(0x0069aabe);
    /* 0069aabe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069aac0: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69aac5u); f_0068a3fc();
    /* 0069aac5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aac7: je 0x69aaee */ if (fZ) goto L_0069aaee;
L_0069aac9:; BB(0x0069aac9);
    /* 0069aac9: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069aace: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0069aad1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069aad5: mov dword ptr [ebp + 0x30c], edx */ W32((u32)(r_ebp+0x30cu), r_edx);
    /* 0069aadb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0069aadf: mov dword ptr [ebp + 0x314], edx */ W32((u32)(r_ebp+0x314u), r_edx);
    /* 0069aae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069aae7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069aae9: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69aaeeu); f_0069ebc8();
L_0069aaee:; BB(0x0069aaee);
    /* 0069aaee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069aaf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069aaf2: ret  */ FN_RET(0x0069aa2c); r_esp += 4; return;
}

void f_0069aaf4(void) /* sub_69AAF4 */
{
    FN_ENTER(0x0069aaf4);
    /* 0069aaf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069aaf5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069aaf8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069aafc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069aafe: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0069ab03: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0069ab0b: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0069ab10: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0069ab18: mov byte ptr [esp], 0x4c */ W8((u32)(r_esp), 0x4cu);
    /* 0069ab1c: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0069ab21: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069ab23: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0069ab26: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069ab29: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0069ab2c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069ab30: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0069ab33: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069ab37: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0069ab3a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069ab3e: call 0x6a9d9c */ r_esp -= 4; W32(r_esp, 0x69ab43u); f_006a9d9c();
    /* 0069ab43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ab45: je 0x69abb6 */ if (fZ) goto L_0069abb6;
L_0069ab47:; BB(0x0069ab47);
    /* 0069ab47: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069ab4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab4d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69ab52u); f_0068d5a8();
    /* 0069ab52: mov ebp, eax */ r_ebp = r_eax;
    /* 0069ab54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ab57: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ab59: je 0x69abb6 */ if (fZ) goto L_0069abb6;
L_0069ab5b:; BB(0x0069ab5b);
    /* 0069ab5b: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 0069ab61: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ab67: je 0x69ab6e */ if (fZ) goto L_0069ab6e;
L_0069ab69:; BB(0x0069ab69);
    /* 0069ab69: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ab6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ab6d: ret  */ FN_RET(0x0069aaf4); r_esp += 4; return;
L_0069ab6e:; BB(0x0069ab6e);
    /* 0069ab6e: movsx edx, word ptr [esp + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 0069ab73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ab76: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x69ab7bu); f_00770b58();
    /* 0069ab7b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab7c: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69ab81u); f_00693468();
    /* 0069ab81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ab82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ab84: je 0x69abb6 */ if (fZ) goto L_0069abb6;
L_0069ab86:; BB(0x0069ab86);
    /* 0069ab86: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ab88: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69ab8du); f_0068a3fc();
    /* 0069ab8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ab8f: je 0x69abb6 */ if (fZ) goto L_0069abb6;
L_0069ab91:; BB(0x0069ab91);
    /* 0069ab91: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069ab96: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0069ab99: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069ab9d: mov dword ptr [ebp + 0x30c], edx */ W32((u32)(r_ebp+0x30cu), r_edx);
    /* 0069aba3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0069aba7: mov dword ptr [ebp + 0x314], edx */ W32((u32)(r_ebp+0x314u), r_edx);
    /* 0069abad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069abaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069abb1: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69abb6u); f_0069e718();
L_0069abb6:; BB(0x0069abb6);
    /* 0069abb6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069abb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069abba: ret  */ FN_RET(0x0069aaf4); r_esp += 4; return;
}

void f_0069abbc(void) /* sub_69ABBC */
{
    FN_ENTER(0x0069abbc);
    /* 0069abbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069abbd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069abc0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069abc4: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0069abcc: mov byte ptr [esp], 0x4d */ W8((u32)(r_esp), 0x4du);
    /* 0069abd0: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069abd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069abd7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0069abda: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0069abdd: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0069abe1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069abe4: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69abe9u); f_006a9e70();
    /* 0069abe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069abeb: je 0x69ac26 */ if (fZ) goto L_0069ac26;
L_0069abed:; BB(0x0069abed);
    /* 0069abed: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069abf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069abf3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69abf8u); f_0068d5a8();
    /* 0069abf8: mov esi, eax */ r_esi = r_eax;
    /* 0069abfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069abfd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069abff: je 0x69ac26 */ if (fZ) goto L_0069ac26;
L_0069ac01:; BB(0x0069ac01);
    /* 0069ac01: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069ac05: mov dword ptr [esi + 0x92c], edx */ W32((u32)(r_esi+0x92cu), r_edx);
    /* 0069ac0b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069ac0d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69ac12u); f_0069ac2c();
    /* 0069ac12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ac13: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69ac18u); f_00693468();
    /* 0069ac18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ac19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ac1b: je 0x69ac26 */ if (fZ) goto L_0069ac26;
L_0069ac1d:; BB(0x0069ac1d);
    /* 0069ac1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ac1f: mov ecx, esi */ r_ecx = r_esi;
    /* 0069ac21: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69ac26u); f_0069e15c();
L_0069ac26:; BB(0x0069ac26);
    /* 0069ac26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ac29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ac2a: ret  */ FN_RET(0x0069abbc); r_esp += 4; return;
}

void f_0069ac2c(void) /* sub_69AC2C */
{
    FN_ENTER(0x0069ac2c);
    /* 0069ac2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ac2d: mov edi, ecx */ r_edi = r_ecx;
    /* 0069ac2f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069ac32: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069ac37: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069ac3a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069ac3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069ac3e: mov word ptr [edi + 0x334], dx */ W16((u32)(r_edi+0x334u), (u16)r_edx);
    /* 0069ac45: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ac47: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x69ac4du); call_ind(t); }
    /* 0069ac4d: mov dword ptr [edi + 0x720], 0 */ W32((u32)(r_edi+0x720u), 0x0u);
    /* 0069ac57: mov dword ptr [edi + 0x6d4], 0 */ W32((u32)(r_edi+0x6d4u), 0x0u);
    /* 0069ac61: mov dword ptr [edi + 0x6d8], 0 */ W32((u32)(r_edi+0x6d8u), 0x0u);
    /* 0069ac6b: mov dword ptr [edi + 0x6dc], 0 */ W32((u32)(r_edi+0x6dcu), 0x0u);
    /* 0069ac75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ac76: ret  */ FN_RET(0x0069ac2c); r_esp += 4; return;
}

void f_0069ac78(void) /* sub_69AC78 */
{
    FN_ENTER(0x0069ac78);
    /* 0069ac78: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ac7b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069ac7f: mov byte ptr [esp], 0x89 */ W8((u32)(r_esp), 0x89u);
    /* 0069ac83: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ac85: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069ac8a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0069ac8f: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0069ac94: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 0069ac99: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069ac9c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069ac9e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069aca1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0069aca4: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069aca8: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69acadu); f_006a9e70();
    /* 0069acad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069acaf: je 0x69accd */ if (fZ) goto L_0069accd;
L_0069acb1:; BB(0x0069acb1);
    /* 0069acb1: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069acb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069acb7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69acbcu); f_0068d5a8();
    /* 0069acbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069acbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069acbf: je 0x69accd */ if (fZ) goto L_0069accd;
L_0069acc1:; BB(0x0069acc1);
    /* 0069acc1: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0069acc6: mov word ptr [eax + 0x2d8], dx */ W16((u32)(r_eax+0x2d8u), (u16)r_edx);
L_0069accd:; BB(0x0069accd);
    /* 0069accd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069acd0: ret  */ FN_RET(0x0069ac78); r_esp += 4; return;
}

void f_0069acd4(void) /* sub_69ACD4 */
{
    FN_ENTER(0x0069acd4);
    /* 0069acd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069acd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069acd7: je 0x69ace7 */ if (fZ) goto L_0069ace7;
L_0069acd9:; BB(0x0069acd9);
    /* 0069acd9: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069ace0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069ace3: jne 0x69ace7 */ if (!fZ) goto L_0069ace7;
L_0069ace5:; BB(0x0069ace5);
    /* 0069ace5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ace6: ret  */ FN_RET(0x0069acd4); r_esp += 4; return;
L_0069ace7:; BB(0x0069ace7);
    /* 0069ace7: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069aceb: mov byte ptr [esp], 0x4e */ W8((u32)(r_esp), 0x4eu);
    /* 0069acef: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069acf4: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069acf9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069acfc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69ad01u); f_008003e0();
    /* 0069ad01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ad02: ret  */ FN_RET(0x0069acd4); r_esp += 4; return;
}

void f_0069ad04(void) /* sub_69AD04 */
{
    FN_ENTER(0x0069ad04);
    /* 0069ad04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad06: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069ad0a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069ad0d: mov byte ptr [esp], 0x4e */ W8((u32)(r_esp), 0x4eu);
    /* 0069ad11: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069ad16: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069ad18: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069ad1b: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69ad20u); f_006a9e70();
    /* 0069ad20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ad22: je 0x69ad51 */ if (fZ) goto L_0069ad51;
L_0069ad24:; BB(0x0069ad24);
    /* 0069ad24: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069ad29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad2a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69ad2fu); f_0068d5a8();
    /* 0069ad2f: mov ebx, eax */ r_ebx = r_eax;
    /* 0069ad31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ad34: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ad36: je 0x69ad51 */ if (fZ) goto L_0069ad51;
L_0069ad38:; BB(0x0069ad38);
    /* 0069ad38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad39: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69ad3eu); f_00693468();
    /* 0069ad3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ad3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ad41: je 0x69ad51 */ if (fZ) goto L_0069ad51;
L_0069ad43:; BB(0x0069ad43);
    /* 0069ad43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069ad45: call 0x69ad54 */ r_esp -= 4; W32(r_esp, 0x69ad4au); f_0069ad54();
    /* 0069ad4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad4b: call 0x697988 */ r_esp -= 4; W32(r_esp, 0x69ad50u); f_00697988();
    /* 0069ad50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0069ad51:; BB(0x0069ad51);
    /* 0069ad51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ad52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ad53: ret  */ FN_RET(0x0069ad04); r_esp += 4; return;
}

void f_0069ad54(void) /* sub_69AD54 */
{
    FN_ENTER(0x0069ad54);
    /* 0069ad54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad55: mov esi, ecx */ r_esi = r_ecx;
    /* 0069ad57: mov eax, dword ptr [esi + 0x92c] */ r_eax = R32((u32)(r_esi+0x92cu));
    /* 0069ad5d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069ad5f: je 0x69ad78 */ if (fZ) goto L_0069ad78;
L_0069ad61:; BB(0x0069ad61);
    /* 0069ad61: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 0069ad67: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069ad69: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x69ad6cu); call_ind(t); }
    /* 0069ad6c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ad6f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0069ad76: jmp 0x69ad8d */ goto L_0069ad8d;
L_0069ad78:; BB(0x0069ad78);
    /* 0069ad78: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 0069ad7e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069ad80: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69ad83u); call_ind(t); }
    /* 0069ad83: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ad86: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_0069ad8d:; BB(0x0069ad8d);
    /* 0069ad8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad8e: mov ecx, esi */ r_ecx = r_esi;
    /* 0069ad90: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x69ad95u); f_007aa4c8();
    /* 0069ad95: fld dword ptr [0x93dac0] */ FPUSH(R_F32((u32)(0x93dac0u)));
    /* 0069ad9b: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 0069ada1: fst dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0));
    /* 0069ada7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ada8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069adab: mov ecx, esi */ r_ecx = r_esi;
    /* 0069adad: call 0x68a1a8 */ r_esp -= 4; W32(r_esp, 0x69adb2u); f_0068a1a8();
    /* 0069adb2: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0069adb8: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069adbb: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069adbe: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 0069adc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069adc5: ret  */ FN_RET(0x0069ad54); r_esp += 4; return;
}

void f_0069adc8(void) /* sub_69ADC8 */
{
    FN_ENTER(0x0069adc8);
    /* 0069adc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069adc9: mov ebp, esp */ r_ebp = r_esp;
    /* 0069adcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069adcd: push 0x8eb66c */ { u32 v = 0x8eb66cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069add2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0069add8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069add9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0069ade0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ade3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0069ade6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0069ade9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0069adec: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0069adef: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0069adf2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0069adf9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0069adfb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69ae00u); f_005caba4();
    /* 0069ae00: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0069ae03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ae06: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0069ae09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ae0b: je 0x69ae46 */ if (fZ) goto L_0069ae46;
L_0069ae0d:; BB(0x0069ae0d);
    /* 0069ae0d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0069ae14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069ae1b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069ae1e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069ae21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae22: movzx ebx, word ptr [eax + 0x1c] */ r_ebx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0069ae26: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x69ae2bu); f_008193cc();
    /* 0069ae2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069ae2e: mov dword ptr [eax], 0xb39444 */ W32((u32)(r_eax), 0xb39444u);
    /* 0069ae34: mov word ptr [eax + 0x1c], bx */ W16((u32)(r_eax+0x1cu), (u16)r_ebx);
    /* 0069ae38: mov dword ptr [eax + 0x20], 0x69ae58 */ W32((u32)(r_eax+0x20u), 0x69ae58u);
    /* 0069ae3f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0069ae46:; BB(0x0069ae46);
    /* 0069ae46: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0069ae49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069ae4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069ae53: mov esp, ebp */ r_esp = r_ebp;
    /* 0069ae55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ae56: ret  */ FN_RET(0x0069adc8); r_esp += 4; return;
}

void f_0069ae58(void) /* sub_69AE58 */
{
    FN_ENTER(0x0069ae58);
    /* 0069ae58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae59: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0069ae5d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ae5f: je 0x69aea5 */ if (fZ) goto L_0069aea5;
L_0069ae61:; BB(0x0069ae61);
    /* 0069ae61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069ae65: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69ae6au); f_0069e15c();
    /* 0069ae6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069ae6c: call 0x69ad54 */ r_esp -= 4; W32(r_esp, 0x69ae71u); f_0069ad54();
    /* 0069ae71: mov dword ptr [ebx + 0x6d4], 0 */ W32((u32)(r_ebx+0x6d4u), 0x0u);
    /* 0069ae7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae7c: lea ecx, [ebx + 0x6d4] */ r_ecx = (u32)(r_ebx+0x6d4u);
    /* 0069ae82: mov dword ptr [ebx + 0x6d8], 0 */ W32((u32)(r_ebx+0x6d8u), 0x0u);
    /* 0069ae8c: mov dword ptr [ebx + 0x6dc], 0 */ W32((u32)(r_ebx+0x6dcu), 0x0u);
    /* 0069ae96: call 0x698530 */ r_esp -= 4; W32(r_esp, 0x69ae9bu); f_00698530();
    /* 0069ae9b: mov dword ptr [ebx + 0x6dc], 0x3f800000 */ W32((u32)(r_ebx+0x6dcu), 0x3f800000u);
L_0069aea5:; BB(0x0069aea5);
    /* 0069aea5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069aea6: ret  */ FN_RET(0x0069ae58); r_esp += 4; return;
}

void f_0069aea8(void) /* sub_69AEA8 */
{
    FN_ENTER(0x0069aea8);
    /* 0069aea8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069aea9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aeaa: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069aeae: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069aeb1: mov byte ptr [esp], 0x4f */ W8((u32)(r_esp), 0x4fu);
    /* 0069aeb5: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069aeba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069aebc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069aebf: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69aec4u); f_006a9e70();
    /* 0069aec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069aec6: je 0x69aef0 */ if (fZ) goto L_0069aef0;
L_0069aec8:; BB(0x0069aec8);
    /* 0069aec8: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069aecd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069aece: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69aed3u); f_0068d5a8();
    /* 0069aed3: mov ebx, eax */ r_ebx = r_eax;
    /* 0069aed5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aed8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069aeda: je 0x69aef0 */ if (fZ) goto L_0069aef0;
L_0069aedc:; BB(0x0069aedc);
    /* 0069aedc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069aedd: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69aee2u); f_00693468();
    /* 0069aee2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069aee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069aee5: je 0x69aef0 */ if (fZ) goto L_0069aef0;
L_0069aee7:; BB(0x0069aee7);
    /* 0069aee7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069aee9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069aeeb: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69aef0u); f_0069d8f4();
L_0069aef0:; BB(0x0069aef0);
    /* 0069aef0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069aef1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069aef2: ret  */ FN_RET(0x0069aea8); r_esp += 4; return;
}

void f_0069aef4(void) /* sub_69AEF4 */
{
    FN_ENTER(0x0069aef4);
    /* 0069aef4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aef5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069aef8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069aefc: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0069af04: mov byte ptr [esp], 0x50 */ W8((u32)(r_esp), 0x50u);
    /* 0069af08: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069af0d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069af0f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0069af12: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0069af15: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0069af19: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069af1c: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69af21u); f_006a9e70();
    /* 0069af21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069af23: je 0x69af62 */ if (fZ) goto L_0069af62;
L_0069af25:; BB(0x0069af25);
    /* 0069af25: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069af2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069af2b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69af30u); f_0068d5a8();
    /* 0069af30: mov esi, eax */ r_esi = r_eax;
    /* 0069af32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069af35: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069af37: je 0x69af62 */ if (fZ) goto L_0069af62;
L_0069af39:; BB(0x0069af39);
    /* 0069af39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069af3a: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69af3fu); f_00693468();
    /* 0069af3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069af40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069af42: je 0x69af62 */ if (fZ) goto L_0069af62;
L_0069af44:; BB(0x0069af44);
    /* 0069af44: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 0069af4a: test edx, 0x8200 */ {  u32 a = r_edx; u32 b = 0x8200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069af50: jne 0x69af62 */ if (!fZ) goto L_0069af62;
L_0069af52:; BB(0x0069af52);
    /* 0069af52: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069af56: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 0069af59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069af5b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069af5d: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69af62u); f_0069ef04();
L_0069af62:; BB(0x0069af62);
    /* 0069af62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069af65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069af66: ret  */ FN_RET(0x0069aef4); r_esp += 4; return;
}

void f_0069af68(void) /* sub_69AF68 */
{
    FN_ENTER(0x0069af68);
    /* 0069af68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069af69: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069af6c: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0069af70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069af72: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069af77: mov byte ptr [esp], 0x52 */ W8((u32)(r_esp), 0x52u);
    /* 0069af7b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069af80: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0069af85: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069af89: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0069af8c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069af8f: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069af92: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0069af96: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069af99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069af9c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069afa0: call 0x6a9dcc */ r_esp -= 4; W32(r_esp, 0x69afa5u); f_006a9dcc();
    /* 0069afa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069afa7: je 0x69b02d */ if (fZ) goto L_0069b02d;
L_0069afad:; BB(0x0069afad);
    /* 0069afad: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 0069afb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069afb3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69afb8u); f_0068d5a8();
    /* 0069afb8: mov ebp, eax */ r_ebp = r_eax;
    /* 0069afba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069afbd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069afbf: je 0x69b02d */ if (fZ) goto L_0069b02d;
L_0069afc1:; BB(0x0069afc1);
    /* 0069afc1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069afc2: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69afc7u); f_00693468();
    /* 0069afc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069afc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069afca: je 0x69b02d */ if (fZ) goto L_0069b02d;
L_0069afcc:; BB(0x0069afcc);
    /* 0069afcc: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 0069afd2: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069afd8: jne 0x69b02d */ if (!fZ) goto L_0069b02d;
L_0069afda:; BB(0x0069afda);
    /* 0069afda: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x69afdfu); f_0068be84();
    /* 0069afdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069afe1: je 0x69b002 */ if (fZ) goto L_0069b002;
L_0069afe3:; BB(0x0069afe3);
    /* 0069afe3: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069afea: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069afed: jne 0x69b002 */ if (!fZ) goto L_0069b002;
L_0069afef:; BB(0x0069afef);
    /* 0069afef: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0069aff5: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069affb: je 0x69b002 */ if (fZ) goto L_0069b002;
L_0069affd:; BB(0x0069affd);
    /* 0069affd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b000: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b001: ret  */ FN_RET(0x0069af68); r_esp += 4; return;
L_0069b002:; BB(0x0069b002);
    /* 0069b002: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0069b007: mov word ptr [ebp + 0x6d0], dx */ W16((u32)(r_ebp+0x6d0u), (u16)r_edx);
    /* 0069b00e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0069b012: mov dword ptr [ebp + 0x6cc], ecx */ W32((u32)(r_ebp+0x6ccu), r_ecx);
    /* 0069b018: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 0069b01d: mov word ptr [ebp + 0x6c8], dx */ W16((u32)(r_ebp+0x6c8u), (u16)r_edx);
    /* 0069b024: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b026: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069b028: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69b02du); f_0069dd60();
L_0069b02d:; BB(0x0069b02d);
    /* 0069b02d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069b030: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b031: ret  */ FN_RET(0x0069af68); r_esp += 4; return;
}

