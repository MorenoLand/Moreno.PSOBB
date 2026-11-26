#include "protos.h"

void f_0079b040(void) /* sub_79B040 */
{
    FN_ENTER(0x0079b040);
    /* 0079b040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079b041: mov ebp, esp */ r_ebp = r_esp;
    /* 0079b043: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b045: push 0x8f54a0 */ { u32 v = 0x8f54a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b04a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079b050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b051: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079b058: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079b05b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079b05e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079b061: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0079b064: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079b067: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079b06d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b06f: je 0x79b080 */ if (fZ) goto L_0079b080;
L_0079b071:; BB(0x0079b071);
    /* 0079b071: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79b076u); f_007127b0();
    /* 0079b076: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
L_0079b080:; BB(0x0079b080);
    /* 0079b080: mov eax, dword ptr [0xaab248] */ r_eax = R32((u32)(0xaab248u));
    /* 0079b085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b087: je 0x79b141 */ if (fZ) goto L_0079b141;
L_0079b08d:; BB(0x0079b08d);
    /* 0079b08d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0079b094: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b096: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79b09bu); f_005caba4();
    /* 0079b09b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079b09e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b0a1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0079b0a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b0a6: je 0x79b13a */ if (fZ) goto L_0079b13a;
L_0079b0ac:; BB(0x0079b0ac);
    /* 0079b0ac: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0079b0b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079b0ba: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079b0c0: mov ecx, eax */ r_ecx = r_eax;
    /* 0079b0c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079b0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b0c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b0c6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b0c8: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079b0ce: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x79b0d3u); f_0078eba4();
    /* 0079b0d3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0079b0da:; BB(0x0079b0da);
    /* 0079b0da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079b0dd: mov dword ptr [0xaab230], eax */ W32((u32)(0xaab230u), r_eax);
    /* 0079b0e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079b0e9: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b0ee: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b0f3u); f_0073ec50();
    /* 0079b0f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b0f4: mov ecx, dword ptr [0xaab230] */ r_ecx = R32((u32)(0xaab230u));
    /* 0079b0fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b0fb: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x79b100u); f_0078ed84();
    /* 0079b100: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b105: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b10au); f_0073ec50();
    /* 0079b10a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b10b: mov ecx, dword ptr [0xaab230] */ r_ecx = R32((u32)(0xaab230u));
    /* 0079b111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b112: call 0x78edb8 */ r_esp -= 4; W32(r_esp, 0x79b117u); f_0078edb8();
    /* 0079b117: mov ecx, dword ptr [0xaab230] */ r_ecx = R32((u32)(0xaab230u));
    /* 0079b11d: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x79b122u); f_0078ee74();
    /* 0079b122: mov dword ptr [0xaab218], 9 */ W32((u32)(0xaab218u), 0x9u);
    /* 0079b12c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079b12f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079b136: mov esp, ebp */ r_esp = r_ebp;
    /* 0079b138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079b139: ret  */ FN_RET(0x0079b040); r_esp += 4; return;
L_0079b13a:; BB(0x0079b13a);
    /* 0079b13a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079b13c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079b13f: jmp 0x79b0da */ goto L_0079b0da;
L_0079b141:; BB(0x0079b141);
    /* 0079b141: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b146: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b14bu); f_0073ec50();
    /* 0079b14b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b14d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b14e: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79b153u); f_00735708();
    /* 0079b153: mov dword ptr [0xaab248], eax */ W32((u32)(0xaab248u), r_eax);
    /* 0079b158: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b15a: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b15fu); f_00793168();
    /* 0079b15f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b162: mov ecx, dword ptr [0xaab248] */ r_ecx = R32((u32)(0xaab248u));
    /* 0079b168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b16a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b16c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b16d: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b172u); f_00735c90();
    /* 0079b172: mov ecx, dword ptr [0xaab248] */ r_ecx = R32((u32)(0xaab248u));
    /* 0079b178: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b17a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b17c: push dword ptr [0x9ff4e4] */ { u32 v = R32((u32)(0x9ff4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079b182: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b187u); f_00735c90();
    /* 0079b187: mov ecx, dword ptr [0xaab248] */ r_ecx = R32((u32)(0xaab248u));
    /* 0079b18d: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x79b192u); f_0073608c();
    /* 0079b192: mov ecx, dword ptr [0xaab248] */ r_ecx = R32((u32)(0xaab248u));
    /* 0079b198: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79b19du); f_00736458();
    /* 0079b19d: mov edx, dword ptr [0xaab248] */ r_edx = R32((u32)(0xaab248u));
    /* 0079b1a3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079b1aa: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079b1af: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079b1b6: jmp 0x79b08d */ goto L_0079b08d;
}

void f_0079b1bc(void) /* sub_79B1BC */
{
    FN_ENTER(0x0079b1bc);
    /* 0079b1bc: mov eax, dword ptr [0xaab258] */ r_eax = R32((u32)(0xaab258u));
    /* 0079b1c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b1c3: je 0x79b1ff */ if (fZ) goto L_0079b1ff;
L_0079b1c5:; BB(0x0079b1c5);
    /* 0079b1c5: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0079b1cc: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079b1ce: je 0x79b1f5 */ if (fZ) goto L_0079b1f5;
L_0079b1d0:; BB(0x0079b1d0);
    /* 0079b1d0: call 0x79a92c */ r_esp -= 4; W32(r_esp, 0x79b1d5u); f_0079a92c();
    /* 0079b1d5: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b1db: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x79b1e0u); f_007365f4();
    /* 0079b1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b1e2: jne 0x79b1ea */ if (!fZ) goto L_0079b1ea;
L_0079b1e4:; BB(0x0079b1e4);
    /* 0079b1e4: call 0x79ac9c */ r_esp -= 4; W32(r_esp, 0x79b1e9u); f_0079ac9c();
    /* 0079b1e9: ret  */ FN_RET(0x0079b1bc); r_esp += 4; return;
L_0079b1ea:; BB(0x0079b1ea);
    /* 0079b1ea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079b1ed: jne 0x79b1fe */ if (!fZ) goto L_0079b1fe;
L_0079b1ef:; BB(0x0079b1ef);
    /* 0079b1ef: call 0x79b208 */ r_esp -= 4; W32(r_esp, 0x79b1f4u); f_0079b208();
    /* 0079b1f4: ret  */ FN_RET(0x0079b1bc); r_esp += 4; return;
L_0079b1f5:; BB(0x0079b1f5);
    /* 0079b1f5: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b1f7: je 0x79b1fe */ if (fZ) goto L_0079b1fe;
L_0079b1f9:; BB(0x0079b1f9);
    /* 0079b1f9: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79b1feu); f_0079a050();
L_0079b1fe:; BB(0x0079b1fe);
    /* 0079b1fe: ret  */ FN_RET(0x0079b1bc); r_esp += 4; return;
L_0079b1ff:; BB(0x0079b1ff);
    /* 0079b1ff: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79b204u); f_0079a050();
    /* 0079b204: ret  */ FN_RET(0x0079b1bc); r_esp += 4; return;
}

void f_0079b208(void) /* sub_79B208 */
{
    FN_ENTER(0x0079b208);
    /* 0079b208: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079b209: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b20b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b210u); f_00793168();
    /* 0079b210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b211: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79b216u); f_0079a8c4();
    /* 0079b216: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079b21c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79b221u); f_007127b0();
    /* 0079b221: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b227: mov dword ptr [0xaab25c], 0 */ W32((u32)(0xaab25cu), 0x0u);
    /* 0079b231: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79b236u); f_007127b0();
    /* 0079b236: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b23c: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
    /* 0079b246: mov dword ptr [ecx + 0x1e084], 0x79ba38 */ W32((u32)(r_ecx+0x1e084u), 0x79ba38u);
    /* 0079b250: call 0x7d3610 */ r_esp -= 4; W32(r_esp, 0x79b255u); f_007d3610();
    /* 0079b255: mov dword ptr [0xaab218], 8 */ W32((u32)(0xaab218u), 0x8u);
    /* 0079b25f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b260: ret  */ FN_RET(0x0079b208); r_esp += 4; return;
}

void f_0079b264(void) /* sub_79B264 */
{
    FN_ENTER(0x0079b264);
    /* 0079b264: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b26a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b26c: je 0x79b2b0 */ if (fZ) goto L_0079b2b0;
L_0079b26e:; BB(0x0079b26e);
    /* 0079b26e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x79b273u); f_007365f4();
    /* 0079b273: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 0079b279: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 0079b280: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079b283: je 0x79b2a5 */ if (fZ) goto L_0079b2a5;
L_0079b285:; BB(0x0079b285);
    /* 0079b285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b287: je 0x79b29f */ if (fZ) goto L_0079b29f;
L_0079b289:; BB(0x0079b289);
    /* 0079b289: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b28c: jne 0x79b294 */ if (!fZ) goto L_0079b294;
L_0079b28e:; BB(0x0079b28e);
    /* 0079b28e: call 0x79b2b8 */ r_esp -= 4; W32(r_esp, 0x79b293u); f_0079b2b8();
    /* 0079b293: ret  */ FN_RET(0x0079b264); r_esp += 4; return;
L_0079b294:; BB(0x0079b294);
    /* 0079b294: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079b297: jne 0x79b2af */ if (!fZ) goto L_0079b2af;
L_0079b299:; BB(0x0079b299);
    /* 0079b299: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79b29eu); f_0079a050();
    /* 0079b29e: ret  */ FN_RET(0x0079b264); r_esp += 4; return;
L_0079b29f:; BB(0x0079b29f);
    /* 0079b29f: call 0x79b3d0 */ r_esp -= 4; W32(r_esp, 0x79b2a4u); f_0079b3d0();
    /* 0079b2a4: ret  */ FN_RET(0x0079b264); r_esp += 4; return;
L_0079b2a5:; BB(0x0079b2a5);
    /* 0079b2a5: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b2a8: je 0x79b2af */ if (fZ) goto L_0079b2af;
L_0079b2aa:; BB(0x0079b2aa);
    /* 0079b2aa: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79b2afu); f_0079a050();
L_0079b2af:; BB(0x0079b2af);
    /* 0079b2af: ret  */ FN_RET(0x0079b264); r_esp += 4; return;
L_0079b2b0:; BB(0x0079b2b0);
    /* 0079b2b0: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79b2b5u); f_0079a050();
    /* 0079b2b5: ret  */ FN_RET(0x0079b264); r_esp += 4; return;
}

void f_0079b2b8(void) /* sub_79B2B8 */
{
    FN_ENTER(0x0079b2b8);
    /* 0079b2b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079b2b9: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b2bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b2c1: je 0x79b2c8 */ if (fZ) goto L_0079b2c8;
L_0079b2c3:; BB(0x0079b2c3);
    /* 0079b2c3: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79b2c8u); f_0073600c();
L_0079b2c8:; BB(0x0079b2c8);
    /* 0079b2c8: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b2ca: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b2cfu); f_00793168();
    /* 0079b2cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b2d0: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79b2d5u); f_0079a8c4();
    /* 0079b2d5: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b2da: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b2dfu); f_0073ec50();
    /* 0079b2df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b2e0: mov edx, dword ptr [0xa46c40] */ r_edx = R32((u32)(0xa46c40u));
    /* 0079b2e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b2e8: je 0x79b343 */ if (fZ) goto L_0079b343;
L_0079b2ea:; BB(0x0079b2ea);
    /* 0079b2ea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b2ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b2ed: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79b2f2u); f_00735708();
    /* 0079b2f2: mov dword ptr [0xaab254], eax */ W32((u32)(0xaab254u), r_eax);
    /* 0079b2f7: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b2f9: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b2feu); f_00793168();
    /* 0079b2fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b301: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b307: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b309: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b30b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b30c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b311u); f_00735c90();
    /* 0079b311: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b313: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b318u); f_00793168();
    /* 0079b318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b319: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b31f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b321: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b324: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b329u); f_00735c90();
    /* 0079b329: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b32b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b330u); f_00793168();
    /* 0079b330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b331: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b337: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b339: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b33b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b33c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b341u); f_00735c90();
    /* 0079b341: jmp 0x79b382 */ goto L_0079b382;
L_0079b343:; BB(0x0079b343);
    /* 0079b343: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b346: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79b34bu); f_00735708();
    /* 0079b34b: mov dword ptr [0xaab254], eax */ W32((u32)(0xaab254u), r_eax);
    /* 0079b350: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b352: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b357u); f_00793168();
    /* 0079b357: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b35a: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b360: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b362: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b365: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b36au); f_00735c90();
    /* 0079b36a: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b36c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b371u); f_00793168();
    /* 0079b371: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b372: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b378: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b37a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b37c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b37d: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b382u); f_00735c90();
L_0079b382:; BB(0x0079b382);
    /* 0079b382: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b388: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x79b38du); f_0073608c();
    /* 0079b38d: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b393: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79b398u); f_00736458();
    /* 0079b398: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079b39e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b3a0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079b3a7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079b3ac: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 0079b3b3: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x79b3b8u); f_00736510();
    /* 0079b3b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b3ba: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79b3bfu); f_00791748();
    /* 0079b3bf: mov dword ptr [0xaab218], 0x18 */ W32((u32)(0xaab218u), 0x18u);
    /* 0079b3c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079b3cc: ret  */ FN_RET(0x0079b2b8); r_esp += 4; return;
}

void f_0079b3d0(void) /* sub_79B3D0 */
{
    FN_ENTER(0x0079b3d0);
    /* 0079b3d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079b3d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b3d3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b3d8u); f_00793168();
    /* 0079b3d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b3d9: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79b3deu); f_0079a8c4();
    /* 0079b3de: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079b3e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b3e6: je 0x79b3f7 */ if (fZ) goto L_0079b3f7;
L_0079b3e8:; BB(0x0079b3e8);
    /* 0079b3e8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79b3edu); f_007127b0();
    /* 0079b3ed: mov dword ptr [0xaab25c], 0 */ W32((u32)(0xaab25cu), 0x0u);
L_0079b3f7:; BB(0x0079b3f7);
    /* 0079b3f7: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b3fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b3ff: je 0x79b410 */ if (fZ) goto L_0079b410;
L_0079b401:; BB(0x0079b401);
    /* 0079b401: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79b406u); f_007127b0();
    /* 0079b406: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
L_0079b410:; BB(0x0079b410);
    /* 0079b410: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b416: call 0x7d3af4 */ r_esp -= 4; W32(r_esp, 0x79b41bu); f_007d3af4();
    /* 0079b41b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b41d: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79b422u); f_00791748();
    /* 0079b422: mov dword ptr [0xaab218], 6 */ W32((u32)(0xaab218u), 0x6u);
    /* 0079b42c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079b42f: ret  */ FN_RET(0x0079b3d0); r_esp += 4; return;
}

void f_0079b430(void) /* sub_79B430 */
{
    FN_ENTER(0x0079b430);
    /* 0079b430: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079b436: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b438: je 0x79b47f */ if (fZ) goto L_0079b47f;
L_0079b43a:; BB(0x0079b43a);
    /* 0079b43a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079b441: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079b443: je 0x79b46f */ if (fZ) goto L_0079b46f;
L_0079b445:; BB(0x0079b445);
    /* 0079b445: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x79b44au); f_007365f4();
    /* 0079b44a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b44c: je 0x79b479 */ if (fZ) goto L_0079b479;
L_0079b44e:; BB(0x0079b44e);
    /* 0079b44e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b451: je 0x79b469 */ if (fZ) goto L_0079b469;
L_0079b453:; BB(0x0079b453);
    /* 0079b453: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b456: jne 0x79b45e */ if (!fZ) goto L_0079b45e;
L_0079b458:; BB(0x0079b458);
    /* 0079b458: call 0x79a288 */ r_esp -= 4; W32(r_esp, 0x79b45du); f_0079a288();
    /* 0079b45d: ret  */ FN_RET(0x0079b430); r_esp += 4; return;
L_0079b45e:; BB(0x0079b45e);
    /* 0079b45e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079b461: jne 0x79b478 */ if (!fZ) goto L_0079b478;
L_0079b463:; BB(0x0079b463);
    /* 0079b463: call 0x79b488 */ r_esp -= 4; W32(r_esp, 0x79b468u); f_0079b488();
    /* 0079b468: ret  */ FN_RET(0x0079b430); r_esp += 4; return;
L_0079b469:; BB(0x0079b469);
    /* 0079b469: call 0x79b568 */ r_esp -= 4; W32(r_esp, 0x79b46eu); f_0079b568();
    /* 0079b46e: ret  */ FN_RET(0x0079b430); r_esp += 4; return;
L_0079b46f:; BB(0x0079b46f);
    /* 0079b46f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b471: je 0x79b478 */ if (fZ) goto L_0079b478;
L_0079b473:; BB(0x0079b473);
    /* 0079b473: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79b478u); f_0079a050();
L_0079b478:; BB(0x0079b478);
    /* 0079b478: ret  */ FN_RET(0x0079b430); r_esp += 4; return;
L_0079b479:; BB(0x0079b479);
    /* 0079b479: call 0x79b600 */ r_esp -= 4; W32(r_esp, 0x79b47eu); f_0079b600();
    /* 0079b47e: ret  */ FN_RET(0x0079b430); r_esp += 4; return;
L_0079b47f:; BB(0x0079b47f);
    /* 0079b47f: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79b484u); f_0079a050();
    /* 0079b484: ret  */ FN_RET(0x0079b430); r_esp += 4; return;
}

void f_0079b488(void) /* sub_79B488 */
{
    FN_ENTER(0x0079b488);
    /* 0079b488: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079b48e: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79b493u); f_0073600c();
    /* 0079b493: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b498: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b49du); f_0073ec50();
    /* 0079b49d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b49f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4a0: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79b4a5u); f_00735708();
    /* 0079b4a5: mov dword ptr [0xaab258], eax */ W32((u32)(0xaab258u), r_eax);
    /* 0079b4aa: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4ac: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b4b1u); f_00793168();
    /* 0079b4b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b4b4: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b4ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4bf: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b4c4u); f_00735c90();
    /* 0079b4c4: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4c6: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b4cbu); f_00793168();
    /* 0079b4cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b4cc: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b4d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4d4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4d7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b4dcu); f_00735c90();
    /* 0079b4dc: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4de: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b4e3u); f_00793168();
    /* 0079b4e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b4e4: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b4ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4ec: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4ef: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b4f4u); f_00735c90();
    /* 0079b4f4: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0079b4f6: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b4fbu); f_00793168();
    /* 0079b4fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b4fc: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b502: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b504: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b507: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b50cu); f_00735c90();
    /* 0079b50c: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b50e: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b513u); f_00793168();
    /* 0079b513: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b514: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b51a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b51c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b51e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b51f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b524u); f_00735c90();
    /* 0079b524: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b52a: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x79b52fu); f_0073608c();
    /* 0079b52f: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b535: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79b53au); f_00736458();
    /* 0079b53a: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 0079b540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b542: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079b549: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079b54e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079b555: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79b55au); f_00791748();
    /* 0079b55a: mov dword ptr [0xaab218], 0x19 */ W32((u32)(0xaab218u), 0x19u);
    /* 0079b564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b565: ret  */ FN_RET(0x0079b488); r_esp += 4; return;
}

void f_0079b568(void) /* sub_79B568 */
{
    FN_ENTER(0x0079b568);
    /* 0079b568: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079b56e: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79b573u); f_0073600c();
    /* 0079b573: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b578: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b57du); f_0073ec50();
    /* 0079b57d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b57f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b580: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79b585u); f_00735708();
    /* 0079b585: mov dword ptr [0xaab258], eax */ W32((u32)(0xaab258u), r_eax);
    /* 0079b58a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b58c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b591u); f_00793168();
    /* 0079b591: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b594: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b59a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b59c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b59e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b59f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b5a4u); f_00735c90();
    /* 0079b5a4: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b5a6: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b5abu); f_00793168();
    /* 0079b5ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b5ac: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b5b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b5b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b5b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b5b7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b5bcu); f_00735c90();
    /* 0079b5bc: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b5c2: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x79b5c7u); f_0073608c();
    /* 0079b5c7: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b5cd: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79b5d2u); f_00736458();
    /* 0079b5d2: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 0079b5d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b5da: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079b5e1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079b5e6: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079b5ed: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79b5f2u); f_00791748();
    /* 0079b5f2: mov dword ptr [0xaab218], 5 */ W32((u32)(0xaab218u), 0x5u);
    /* 0079b5fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b5fd: ret  */ FN_RET(0x0079b568); r_esp += 4; return;
}

void f_0079b600(void) /* sub_79B600 */
{
    FN_ENTER(0x0079b600);
    /* 0079b600: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079b606: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79b60bu); f_0073600c();
    /* 0079b60b: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b610: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b615u); f_0073ec50();
    /* 0079b615: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b618: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79b61du); f_00735708();
    /* 0079b61d: mov dword ptr [0xaab258], eax */ W32((u32)(0xaab258u), r_eax);
    /* 0079b622: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b624: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b629u); f_00793168();
    /* 0079b629: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b62c: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b632: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b634: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b637: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b63cu); f_00735c90();
    /* 0079b63c: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b63e: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79b643u); f_00793168();
    /* 0079b643: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b644: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b64a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b64c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b64e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b64f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79b654u); f_00735c90();
    /* 0079b654: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b65a: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x79b65fu); f_0073608c();
    /* 0079b65f: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079b665: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79b66au); f_00736458();
    /* 0079b66a: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 0079b670: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b672: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079b679: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079b67e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079b685: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79b68au); f_00791748();
    /* 0079b68a: mov dword ptr [0xaab218], 4 */ W32((u32)(0xaab218u), 0x4u);
    /* 0079b694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b695: ret  */ FN_RET(0x0079b600); r_esp += 4; return;
}

void f_0079b698(void) /* sub_79B698 */
{
    FN_ENTER(0x0079b698);
    /* 0079b698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079b699: mov ebp, esp */ r_ebp = r_esp;
    /* 0079b69b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b69d: push 0x8f54c8 */ { u32 v = 0x8f54c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b6a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079b6a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b6a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079b6b0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079b6b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079b6b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079b6b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0079b6bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079b6bf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0079b6c2: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 0079b6c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b6c9: je 0x79b6d9 */ if (fZ) goto L_0079b6d9;
L_0079b6cb:; BB(0x0079b6cb);
    /* 0079b6cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079b6ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079b6d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0079b6d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079b6d8: ret  */ FN_RET(0x0079b698); r_esp += 4; return;
L_0079b6d9:; BB(0x0079b6d9);
    /* 0079b6d9: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x79b6deu); f_007bebe8();
    /* 0079b6de: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0079b6e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b6e2: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x79b6e7u); f_0083ace8();
    /* 0079b6e7: push 0xaab214 */ { u32 v = 0xaab214u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b6ec: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0079b6ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b6f0: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x79b6f5u); f_0083ad44();
    /* 0079b6f5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0079b6fc: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b6fe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79b703u); f_005caba4();
    /* 0079b703: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b706: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0079b709: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b70b: je 0x79b72e */ if (fZ) goto L_0079b72e;
L_0079b70d:; BB(0x0079b70d);
    /* 0079b70d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0079b714: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079b71b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079b71e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079b721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b722: call 0x79b784 */ r_esp -= 4; W32(r_esp, 0x79b727u); f_0079b784();
    /* 0079b727: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0079b72e:; BB(0x0079b72e);
    /* 0079b72e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079b735: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b73b: mov dword ptr [0xaab27c], 1 */ W32((u32)(0xaab27cu), 0x1u);
    /* 0079b745: call 0x7ebd6c */ r_esp -= 4; W32(r_esp, 0x79b74au); f_007ebd6c();
    /* 0079b74a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b74c: je 0x79b774 */ if (fZ) goto L_0079b774;
L_0079b74e:; BB(0x0079b74e);
    /* 0079b74e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b751: jne 0x79b75d */ if (!fZ) goto L_0079b75d;
L_0079b753:; BB(0x0079b753);
    /* 0079b753: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b755: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b75au); f_007a0a7c();
    /* 0079b75a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b75b: jmp 0x79b774 */ goto L_0079b774;
L_0079b75d:; BB(0x0079b75d);
    /* 0079b75d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b760: jne 0x79b76c */ if (!fZ) goto L_0079b76c;
L_0079b762:; BB(0x0079b762);
    /* 0079b762: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b764: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b769u); f_007a0a7c();
    /* 0079b769: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b76a: jmp 0x79b774 */ goto L_0079b774;
L_0079b76c:; BB(0x0079b76c);
    /* 0079b76c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b76e: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b773u); f_007a0a7c();
    /* 0079b773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079b774:; BB(0x0079b774);
    /* 0079b774: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079b777: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079b77e: mov esp, ebp */ r_esp = r_ebp;
    /* 0079b780: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079b781: ret  */ FN_RET(0x0079b698); r_esp += 4; return;
}

void f_0079b784(void) /* sub_79B784 */
{
    FN_ENTER(0x0079b784);
    /* 0079b784: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079b785: mov ebp, esp */ r_ebp = r_esp;
    /* 0079b787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b789: push 0x8f54e4 */ { u32 v = 0x8f54e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b78e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079b794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b795: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079b79c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079b79f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079b7a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079b7a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0079b7a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0079b7ab: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079b7ae: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0079b7b1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x79b7b6u); f_008193cc();
    /* 0079b7b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079b7bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079b7c0: mov dword ptr [eax], 0xb45c60 */ W32((u32)(r_eax), 0xb45c60u);
    /* 0079b7c6: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0079b7c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079b7ca: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x79b7cfu); f_0083ace8();
    /* 0079b7cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079b7d2: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0079b7d5: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079b7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b7d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079b7da: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x79b7dfu); f_0083ad44();
    /* 0079b7df: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079b7e5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079b7e8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0079b7eb: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0079b7ee: call 0x7be1fc */ r_esp -= 4; W32(r_esp, 0x79b7f3u); f_007be1fc();
    /* 0079b7f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b7f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079b7f9: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0079b7fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b7fe: mov dword ptr [0xaab190], edx */ W32((u32)(0xaab190u), r_edx);
    /* 0079b804: mov byte ptr [ecx + 0x28], dl */ W8((u32)(r_ecx+0x28u), (u8)r_edx);
    /* 0079b807: mov eax, ecx */ r_eax = r_ecx;
    /* 0079b809: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079b80c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079b813: mov esp, ebp */ r_esp = r_ebp;
    /* 0079b815: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079b816: ret 4 */ FN_RET(0x0079b784); r_esp += 8; return;
}

void f_0079b81c(void)
{
    FN_ENTER(0x0079b81c);
    /* 0079b81c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079b820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b822: je 0x79b836 */ if (fZ) goto L_0079b836;
L_0079b824:; BB(0x0079b824);
    /* 0079b824: call 0x79b844 */ r_esp -= 4; W32(r_esp, 0x79b829u); f_0079b844();
    /* 0079b829: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b82f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b830: call 0x7d34ec */ r_esp -= 4; W32(r_esp, 0x79b835u); f_007d34ec();
    /* 0079b835: ret  */ FN_RET(0x0079b81c); r_esp += 4; return;
L_0079b836:; BB(0x0079b836);
    /* 0079b836: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b83c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79b841u); f_0061cdb0();
    /* 0079b841: ret  */ FN_RET(0x0079b81c); r_esp += 4; return;
}

void f_0079b844(void) /* sub_79B844 */
{
    FN_ENTER(0x0079b844);
    /* 0079b844: call 0x73e594 */ r_esp -= 4; W32(r_esp, 0x79b849u); f_0073e594();
    /* 0079b849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b84b: je 0x79b852 */ if (fZ) goto L_0079b852;
L_0079b84d:; BB(0x0079b84d);
    /* 0079b84d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b850: jne 0x79b855 */ if (!fZ) goto L_0079b855;
L_0079b852:; BB(0x0079b852);
    /* 0079b852: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b854: ret  */ FN_RET(0x0079b844); r_esp += 4; return;
L_0079b855:; BB(0x0079b855);
    /* 0079b855: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079b858: jne 0x79b852 */ if (!fZ) goto L_0079b852;
L_0079b85a:; BB(0x0079b85a);
    /* 0079b85a: mov eax, 1 */ r_eax = 0x1u;
    /* 0079b85f: ret  */ FN_RET(0x0079b844); r_esp += 4; return;
}

void f_0079b860(void)
{
    FN_ENTER(0x0079b860);
    /* 0079b860: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079b864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b866: je 0x79b87a */ if (fZ) goto L_0079b87a;
L_0079b868:; BB(0x0079b868);
    /* 0079b868: call 0x79b844 */ r_esp -= 4; W32(r_esp, 0x79b86du); f_0079b844();
    /* 0079b86d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b874: call 0x7d34ec */ r_esp -= 4; W32(r_esp, 0x79b879u); f_007d34ec();
    /* 0079b879: ret  */ FN_RET(0x0079b860); r_esp += 4; return;
L_0079b87a:; BB(0x0079b87a);
    /* 0079b87a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b87c: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b881u); f_007a0a7c();
    /* 0079b881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b882: ret  */ FN_RET(0x0079b860); r_esp += 4; return;
}

void f_0079b884(void)
{
    FN_ENTER(0x0079b884);
    /* 0079b884: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079b885: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0079b889: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b88b: je 0x79b8fb */ if (fZ) goto L_0079b8fb;
L_0079b88d:; BB(0x0079b88d);
    /* 0079b88d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b890: je 0x79b8f1 */ if (fZ) goto L_0079b8f1;
L_0079b892:; BB(0x0079b892);
    /* 0079b892: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b895: je 0x79b8e7 */ if (fZ) goto L_0079b8e7;
L_0079b897:; BB(0x0079b897);
    /* 0079b897: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b89a: je 0x79b8dd */ if (fZ) goto L_0079b8dd;
L_0079b89c:; BB(0x0079b89c);
    /* 0079b89c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b89f: je 0x79b8d3 */ if (fZ) goto L_0079b8d3;
L_0079b8a1:; BB(0x0079b8a1);
    /* 0079b8a1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b8a4: jne 0x79b8b0 */ if (!fZ) goto L_0079b8b0;
L_0079b8a6:; BB(0x0079b8a6);
    /* 0079b8a6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b8a8: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b8adu); f_007a0a7c();
    /* 0079b8ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b8ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b8af: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
L_0079b8b0:; BB(0x0079b8b0);
    /* 0079b8b0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b8b3: jne 0x79b8c9 */ if (!fZ) goto L_0079b8c9;
L_0079b8b5:; BB(0x0079b8b5);
    /* 0079b8b5: mov dword ptr [0xaab1f0], 1 */ W32((u32)(0xaab1f0u), 0x1u);
    /* 0079b8bf: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b8c1: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b8c6u); f_007a0a7c();
    /* 0079b8c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b8c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b8c8: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
L_0079b8c9:; BB(0x0079b8c9);
    /* 0079b8c9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b8cb: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b8d0u); f_007a0a7c();
    /* 0079b8d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b8d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b8d2: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
L_0079b8d3:; BB(0x0079b8d3);
    /* 0079b8d3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b8d5: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b8dau); f_007a0a7c();
    /* 0079b8da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079b8db:; BB(0x0079b8db);
    /* 0079b8db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b8dc: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
L_0079b8dd:; BB(0x0079b8dd);
    /* 0079b8dd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b8df: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b8e4u); f_007a0a7c();
    /* 0079b8e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b8e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b8e6: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
L_0079b8e7:; BB(0x0079b8e7);
    /* 0079b8e7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b8e9: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b8eeu); f_007a0a7c();
    /* 0079b8ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b8ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b8f0: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
L_0079b8f1:; BB(0x0079b8f1);
    /* 0079b8f1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0079b8f3: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79b8f8u); f_007a0a7c();
    /* 0079b8f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b8f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b8fa: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
L_0079b8fb:; BB(0x0079b8fb);
    /* 0079b8fb: mov eax, dword ptr [0xaab1f8] */ r_eax = R32((u32)(0xaab1f8u));
    /* 0079b900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b902: je 0x79b8db */ if (fZ) goto L_0079b8db;
L_0079b904:; BB(0x0079b904);
    /* 0079b904: call 0x6c1edc */ r_esp -= 4; W32(r_esp, 0x79b909u); f_006c1edc();
    /* 0079b909: mov edi, eax */ r_edi = r_eax;
    /* 0079b90b: call 0x6c1eec */ r_esp -= 4; W32(r_esp, 0x79b910u); f_006c1eec();
    /* 0079b910: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b917: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079b918: call 0x7d7730 */ r_esp -= 4; W32(r_esp, 0x79b91du); f_007d7730();
    /* 0079b91d: mov dword ptr [0xaab1f8], 0 */ W32((u32)(0xaab1f8u), 0x0u);
    /* 0079b927: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079b928: ret  */ FN_RET(0x0079b884); r_esp += 4; return;
}

void f_0079b92c(void)
{
    FN_ENTER(0x0079b92c);
    /* 0079b92c: mov edx, dword ptr [0xaab180] */ r_edx = R32((u32)(0xaab180u));
    /* 0079b932: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079b936: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079b93b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0079b93f: mov dword ptr [0xaab180], 0 */ W32((u32)(0xaab180u), 0x0u);
    /* 0079b949: ret  */ FN_RET(0x0079b92c); r_esp += 4; return;
}

void f_0079b94c(void) /* sub_79B94C */
{
    FN_ENTER(0x0079b94c);
    /* 0079b94c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079b94f: mov eax, dword ptr [0xaab268] */ r_eax = R32((u32)(0xaab268u));
    /* 0079b954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b956: je 0x79b9a2 */ if (fZ) goto L_0079b9a2;
L_0079b958:; BB(0x0079b958);
    /* 0079b958: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079b95e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b960: je 0x79b971 */ if (fZ) goto L_0079b971;
L_0079b962:; BB(0x0079b962);
    /* 0079b962: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b964: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079b968: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79b96du); f_0073ae38();
L_0079b96d:; BB(0x0079b96d);
    /* 0079b96d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079b970: ret  */ FN_RET(0x0079b94c); r_esp += 4; return;
L_0079b971:; BB(0x0079b971);
    /* 0079b971: mov dword ptr [esp], 0x43700000 */ W32((u32)(r_esp), 0x43700000u);
    /* 0079b978: mov dword ptr [esp + 4], 0x433c0000 */ W32((u32)(r_esp+0x4u), 0x433c0000u);
    /* 0079b980: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0079b985: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79b98au); f_0073ec50();
    /* 0079b98a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079b98e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079b98f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b990: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79b995u); f_0073a888();
    /* 0079b995: mov ecx, eax */ r_ecx = r_eax;
    /* 0079b997: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079b99a: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 0079b9a0: jmp 0x79b962 */ goto L_0079b962;
L_0079b9a2:; BB(0x0079b9a2);
    /* 0079b9a2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0079b9a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b9a9: jne 0x79b96d */ if (!fZ) goto L_0079b96d;
L_0079b9ab:; BB(0x0079b9ab);
    /* 0079b9ab: jmp 0x79b958 */ goto L_0079b958;
}

void f_0079b9b0(void) /* sub_79B9B0 */
{
    FN_ENTER(0x0079b9b0);
    /* 0079b9b0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079b9b3: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 0079b9b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079b9bb: je 0x79b9ee */ if (fZ) goto L_0079b9ee;
L_0079b9bd:; BB(0x0079b9bd);
    /* 0079b9bd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b9bf: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079b9c3: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79b9c8u); f_0073ae38();
    /* 0079b9c8: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 0079b9ce: call 0x73b558 */ r_esp -= 4; W32(r_esp, 0x79b9d3u); f_0073b558();
    /* 0079b9d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079b9d5: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79b9dau); f_00791748();
    /* 0079b9da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079b9db: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x79b9e0u); f_00798468();
    /* 0079b9e0: mov dword ptr [0xaab218], 0x16 */ W32((u32)(0xaab218u), 0x16u);
    /* 0079b9ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079b9ed: ret  */ FN_RET(0x0079b9b0); r_esp += 4; return;
L_0079b9ee:; BB(0x0079b9ee);
    /* 0079b9ee: mov dword ptr [esp], 0x440b8000 */ W32((u32)(r_esp), 0x440b8000u);
    /* 0079b9f5: mov dword ptr [esp + 4], 0x43600000 */ W32((u32)(r_esp+0x4u), 0x43600000u);
    /* 0079b9fd: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba02: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79ba07u); f_0073ec50();
    /* 0079ba07: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079ba0b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ba11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba13: call 0x73b698 */ r_esp -= 4; W32(r_esp, 0x79ba18u); f_0073b698();
    /* 0079ba18: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ba1a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ba1d: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0079ba23: mov dword ptr [0xaab260], ecx */ W32((u32)(0xaab260u), r_ecx);
    /* 0079ba29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ba2b: je 0x79b9bd */ if (fZ) goto L_0079b9bd;
L_0079ba2d:; BB(0x0079ba2d);
    /* 0079ba2d: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 0079ba34: jmp 0x79b9bd */ goto L_0079b9bd;
}

void f_0079ba38(void) /* sub_79BA38 */
{
    FN_ENTER(0x0079ba38);
    /* 0079ba38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba3a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079ba3d: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0079ba41: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba43: lea eax, [edi + 0xa] */ r_eax = (u32)(r_edi+0xau);
    /* 0079ba46: push 0x97ce84 */ { u32 v = 0x97ce84u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba4c: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x79ba51u); f_00858643();
    /* 0079ba51: mov ebp, eax */ r_ebp = r_eax;
    /* 0079ba53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ba56: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ba58: jne 0x79ba61 */ if (!fZ) goto L_0079ba61;
L_0079ba5a:; BB(0x0079ba5a);
    /* 0079ba5a: mov eax, dword ptr [0x9ff4e8] */ r_eax = R32((u32)(0x9ff4e8u));
    /* 0079ba5f: jmp 0x79ba66 */ goto L_0079ba66;
L_0079ba61:; BB(0x0079ba61);
    /* 0079ba61: mov eax, dword ptr [0x9ff4ec] */ r_eax = R32((u32)(0x9ff4ecu));
L_0079ba66:; BB(0x0079ba66);
    /* 0079ba66: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079ba6c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ba6e: je 0x79ba88 */ if (fZ) goto L_0079ba88;
L_0079ba70:; BB(0x0079ba70);
    /* 0079ba70: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0079ba74: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079ba7e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0079ba84: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_0079ba88:; BB(0x0079ba88);
    /* 0079ba88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ba89: call 0x73fdc4 */ r_esp -= 4; W32(r_esp, 0x79ba8eu); f_0073fdc4();
    /* 0079ba8e: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ba90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ba93: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0079ba97: mov dword ptr [0xaab268], ecx */ W32((u32)(0xaab268u), r_ecx);
    /* 0079ba9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079ba9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079baa1: jle 0x79baed */ if ((fZ||fS!=fO)) goto L_0079baed;
L_0079baa3:; BB(0x0079baa3);
    /* 0079baa3: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0079baa6: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079baaa: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0079baad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079baaf: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079bab1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bab3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bab5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079bab7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bab9: lea edx, [edx + edx + 0xa] */ r_edx = (u32)(r_edx+r_edx+0xau);
    /* 0079babd: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079babf: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0079bac3: mov esi, eax */ r_esi = r_eax;
    /* 0079bac5: mov ebx, edx */ r_ebx = r_edx;
    /* 0079bac7: jmp 0x79bacf */ goto L_0079bacf;
L_0079bac9:; BB(0x0079bac9);
    /* 0079bac9: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
L_0079bacf:; BB(0x0079bacf);
    /* 0079bacf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bad0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bad1: call 0x7374b8 */ r_esp -= 4; W32(r_esp, 0x79bad6u); f_007374b8();
    /* 0079bad6: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079bad9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079badc: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079bade: jl 0x79bac9 */ if ((fS!=fO)) goto L_0079bac9;
L_0079bae0:; BB(0x0079bae0);
    /* 0079bae0: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0079bae3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079bae7: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
L_0079baed:; BB(0x0079baed);
    /* 0079baed: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x79baf2u); f_00737cdc();
    /* 0079baf2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079baf4: jne 0x79bafd */ if (!fZ) goto L_0079bafd;
L_0079baf6:; BB(0x0079baf6);
    /* 0079baf6: call 0x79bb7c */ r_esp -= 4; W32(r_esp, 0x79bafbu); f_0079bb7c();
    /* 0079bafb: jmp 0x79bb02 */ goto L_0079bb02;
L_0079bafd:; BB(0x0079bafd);
    /* 0079bafd: call 0x79bb58 */ r_esp -= 4; W32(r_esp, 0x79bb02u); f_0079bb58();
L_0079bb02:; BB(0x0079bb02);
    /* 0079bb02: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0079bb06: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb08: lea ebp, [eax + 0xa] */ r_ebp = (u32)(r_eax+0xau);
    /* 0079bb0b: push 0x97ce84 */ { u32 v = 0x97ce84u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb11: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x79bb16u); f_00858643();
    /* 0079bb16: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079bb19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bb1b: je 0x79bb4f */ if (fZ) goto L_0079bb4f;
L_0079bb1d:; BB(0x0079bb1d);
    /* 0079bb1d: mov edx, 0xaab2ec */ r_edx = 0xaab2ecu;
    /* 0079bb22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079bb24: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0079bb26: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079bb29: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0079bb2c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0079bb2f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0079bb32: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0079bb35: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0079bb38: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0079bb3b: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 0079bb3f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb42: push 0xaab2ec */ { u32 v = 0xaab2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb47: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79bb4cu); f_00857dec();
    /* 0079bb4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079bb4f:; BB(0x0079bb4f);
    /* 0079bb4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079bb52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079bb53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079bb54: ret  */ FN_RET(0x0079ba38); r_esp += 4; return;
}

void f_0079bb58(void) /* sub_79BB58 */
{
    FN_ENTER(0x0079bb58);
    /* 0079bb58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb5b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79bb60u); f_00793168();
    /* 0079bb60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079bb61: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79bb66u); f_0079a8c4();
    /* 0079bb66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb68: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79bb6du); f_00791748();
    /* 0079bb6d: mov dword ptr [0xaab218], 1 */ W32((u32)(0xaab218u), 0x1u);
    /* 0079bb77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079bb7a: ret  */ FN_RET(0x0079bb58); r_esp += 4; return;
}

void f_0079bb7c(void) /* sub_79BB7C */
{
    FN_ENTER(0x0079bb7c);
    /* 0079bb7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb7f: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79bb84u); f_00793168();
    /* 0079bb84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079bb85: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79bb8au); f_0079a8c4();
    /* 0079bb8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bb8c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79bb91u); f_00791748();
    /* 0079bb91: mov dword ptr [0xaab218], 2 */ W32((u32)(0xaab218u), 0x2u);
    /* 0079bb9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079bb9e: ret  */ FN_RET(0x0079bb7c); r_esp += 4; return;
}

void f_0079bba0(void) /* sub_79BBA0 */
{
    FN_ENTER(0x0079bba0);
    /* 0079bba0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bba1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079bba2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079bba5: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0079bba9: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
    /* 0079bbaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bbb1: je 0x79bbca */ if (fZ) goto L_0079bbca;
L_0079bbb3:; BB(0x0079bbb3);
    /* 0079bbb3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079bbb7: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079bbc1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bbc6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079bbca:; BB(0x0079bbca);
    /* 0079bbca: push dword ptr [0x9ff4f0] */ { u32 v = R32((u32)(0x9ff4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079bbd0: call 0x73a070 */ r_esp -= 4; W32(r_esp, 0x79bbd5u); f_0073a070();
    /* 0079bbd5: mov ebp, eax */ r_ebp = r_eax;
    /* 0079bbd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079bbda: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0079bbde: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079bbe0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079bbe2: jle 0x79bcd3 */ if ((fZ||fS!=fO)) goto L_0079bcd3;
L_0079bbe8:; BB(0x0079bbe8);
    /* 0079bbe8: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0079bbec: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0079bbf0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0079bbf3: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079bbf7: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0079bbfa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bbfc: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bbfe: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc00: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc02: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc06: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc08: lea eax, [edi + ecx + 0x2b] */ r_eax = (u32)(r_edi+r_ecx+0x2bu);
    /* 0079bc0c: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0079bc0f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc11: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc13: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc15: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc17: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc19: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc1b: lea ecx, [ecx + ecx + 0xa] */ r_ecx = (u32)(r_ecx+r_ecx+0xau);
    /* 0079bc1f: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc21: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0079bc25: mov ebp, eax */ r_ebp = r_eax;
L_0079bc27:; BB(0x0079bc27);
    /* 0079bc27: movsx edi, byte ptr [ebp] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 0079bc2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079bc2d: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bc33: je 0x79bc3a */ if (fZ) goto L_0079bc3a;
L_0079bc35:; BB(0x0079bc35);
    /* 0079bc35: mov ecx, 2 */ r_ecx = 0x2u;
L_0079bc3a:; BB(0x0079bc3a);
    /* 0079bc3a: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bc40: je 0x79bc47 */ if (fZ) goto L_0079bc47;
L_0079bc42:; BB(0x0079bc42);
    /* 0079bc42: mov ecx, 1 */ r_ecx = 0x1u;
L_0079bc47:; BB(0x0079bc47);
    /* 0079bc47: movsx ebx, byte ptr [ebp - 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffffu));
    /* 0079bc4b: mov edx, ebx */ r_edx = r_ebx;
    /* 0079bc4d: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0079bc50: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bc56: je 0x79bc63 */ if (fZ) goto L_0079bc63;
L_0079bc58:; BB(0x0079bc58);
    /* 0079bc58: mov esi, 1 */ r_esi = 0x1u;
    /* 0079bc5d: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0079bc61: jmp 0x79bc69 */ goto L_0079bc69;
L_0079bc63:; BB(0x0079bc63);
    /* 0079bc63: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0079bc65: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_0079bc69:; BB(0x0079bc69);
    /* 0079bc69: movsx esi, byte ptr [ebp - 0x22] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 0079bc6d: movzx eax, byte ptr [ebp - 0x23] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 0079bc71: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0079bc75: and ebx, 0xf0 */ {  u32 a = r_ebx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0079bc7b: sar ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0079bc7e: and edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0079bc81: add eax, -0x22 */ {  u32 a = r_eax; u32 b = 0xffffffdeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079bc84: movsx ebp, al */ r_ebp = (u32)(i32)(i8)(u8)r_eax;
    /* 0079bc87: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0079bc8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc8c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0079bc90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc93: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc96: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0079bc9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bc9c: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0079bca0: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0079bca4: call 0x73a118 */ r_esp -= 4; W32(r_esp, 0x79bca9u); f_0073a118();
    /* 0079bca9: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0079bcad: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0079bcb1: add dword ptr [esp + 0x10], 0x2c */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0079bcb6: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079bcb9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bcbc: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0079bcc0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079bcc2: jl 0x79bc27 */ if ((fS!=fO)) goto L_0079bc27;
L_0079bcc8:; BB(0x0079bcc8);
    /* 0079bcc8: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0079bccc: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0079bccf: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_0079bcd3:; BB(0x0079bcd3);
    /* 0079bcd3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079bcd5: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x79bcdau); f_00737cdc();
    /* 0079bcda: mov dword ptr [0xaab268], ebp */ W32((u32)(0xaab268u), r_ebp);
    /* 0079bce0: mov edx, 0xaab2a4 */ r_edx = 0xaab2a4u;
    /* 0079bce5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079bce7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0079bce9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079bcec: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0079bcef: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0079bcf2: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0079bcf5: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0079bcf8: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0079bcfb: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0079bcfe: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 0079bd02: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0079bd06: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bd08: lea edx, [eax + 0xa] */ r_edx = (u32)(r_eax+0xau);
    /* 0079bd0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bd0c: push 0xaab2a4 */ { u32 v = 0xaab2a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bd11: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79bd16u); f_00857dec();
    /* 0079bd16: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079bd19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079bd1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079bd1b: ret  */ FN_RET(0x0079bba0); r_esp += 4; return;
}

void f_0079bd1c(void) /* sub_79BD1C */
{
    FN_ENTER(0x0079bd1c);
    /* 0079bd1c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079bd1f: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
    /* 0079bd25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bd27: je 0x79bd40 */ if (fZ) goto L_0079bd40;
L_0079bd29:; BB(0x0079bd29);
    /* 0079bd29: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079bd2d: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079bd37: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bd3c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079bd40:; BB(0x0079bd40);
    /* 0079bd40: push 0x97ce90 */ { u32 v = 0x97ce90u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bd45: call 0x73fdc4 */ r_esp -= 4; W32(r_esp, 0x79bd4au); f_0073fdc4();
    /* 0079bd4a: mov ecx, eax */ r_ecx = r_eax;
    /* 0079bd4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079bd4f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0079bd53: mov dword ptr [0xaab268], ecx */ W32((u32)(0xaab268u), r_ecx);
    /* 0079bd59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079bd5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079bd5d: jle 0x79bdb3 */ if ((fZ||fS!=fO)) goto L_0079bdb3;
L_0079bd5f:; BB(0x0079bd5f);
    /* 0079bd5f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0079bd63: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079bd67: mov esi, eax */ r_esi = r_eax;
    /* 0079bd69: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0079bd6c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bd6e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0079bd71: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0079bd75: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079bd77: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bd79: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bd7b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079bd7d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bd7f: lea edx, [edx + edx + 0xa] */ r_edx = (u32)(r_edx+r_edx+0xau);
    /* 0079bd83: add edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079bd87: mov ebx, edx */ r_ebx = r_edx;
    /* 0079bd89: jmp 0x79bd91 */ goto L_0079bd91;
L_0079bd8b:; BB(0x0079bd8b);
    /* 0079bd8b: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
L_0079bd91:; BB(0x0079bd91);
    /* 0079bd91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bd92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bd93: call 0x7374b8 */ r_esp -= 4; W32(r_esp, 0x79bd98u); f_007374b8();
    /* 0079bd98: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079bd9b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079bd9e: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079bda0: jl 0x79bd8b */ if ((fS!=fO)) goto L_0079bd8b;
L_0079bda2:; BB(0x0079bda2);
    /* 0079bda2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0079bda6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079bdaa: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0079bdad: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
L_0079bdb3:; BB(0x0079bdb3);
    /* 0079bdb3: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x79bdb8u); f_00737cdc();
    /* 0079bdb8: call 0x79bdc4 */ r_esp -= 4; W32(r_esp, 0x79bdbdu); f_0079bdc4();
    /* 0079bdbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079bdc0: ret  */ FN_RET(0x0079bd1c); r_esp += 4; return;
}

void f_0079bdc4(void) /* sub_79BDC4 */
{
    FN_ENTER(0x0079bdc4);
    /* 0079bdc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079bdc5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bdc7: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79bdccu); f_00793168();
    /* 0079bdcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079bdcd: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79bdd2u); f_0079a8c4();
    /* 0079bdd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bdd4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79bdd9u); f_00791748();
    /* 0079bdd9: mov dword ptr [0xaab218], 0x15 */ W32((u32)(0xaab218u), 0x15u);
    /* 0079bde3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079bde6: ret  */ FN_RET(0x0079bdc4); r_esp += 4; return;
}

void f_0079bde8(void) /* sub_79BDE8 */
{
    FN_ENTER(0x0079bde8);
    /* 0079bde8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bde9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0079bded: push 0x330 */ { u32 v = 0x330u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bdf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bdf4: push 0xaaacc0 */ { u32 v = 0xaaacc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bdf9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79bdfeu); f_0086b688();
    /* 0079bdfe: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0079be03: lea eax, [ebx + 0x88] */ r_eax = (u32)(r_ebx+0x88u);
    /* 0079be09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079be0a: push 0xaaacc0 */ { u32 v = 0xaaacc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079be0f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x79be14u); f_0086b6b8();
    /* 0079be14: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079be17: call 0x797384 */ r_esp -= 4; W32(r_esp, 0x79be1cu); f_00797384();
    /* 0079be1c: movsx eax, byte ptr [ebx + 0x198] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x198u));
    /* 0079be23: movsx edx, byte ptr [ebx + 0x199] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x199u));
    /* 0079be2a: mov dword ptr [0xa9c4f4], eax */ W32((u32)(0xa9c4f4u), r_eax);
    /* 0079be2f: movsx eax, byte ptr [ebx + 0x19a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x19au));
    /* 0079be36: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 0079be3b: mov dword ptr [0xa9c4dc], edx */ W32((u32)(0xa9c4dcu), r_edx);
    /* 0079be41: mov dword ptr [0xaab27c], eax */ W32((u32)(0xaab27cu), r_eax);
    /* 0079be46: movsx eax, byte ptr [ebx + 0x19c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x19cu));
    /* 0079be4d: mov dword ptr [0xa942c0], eax */ W32((u32)(0xa942c0u), r_eax);
    /* 0079be52: movsx eax, byte ptr [ebx + 0x19f] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x19fu));
    /* 0079be59: mov dword ptr [0xa49508], eax */ W32((u32)(0xa49508u), r_eax);
    /* 0079be5e: movsx eax, byte ptr [ebx + 0x19b] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x19bu));
    /* 0079be65: mov dword ptr [0xa9cd68], eax */ W32((u32)(0xa9cd68u), r_eax);
    /* 0079be6a: movsx eax, byte ptr [ebx + 0x19d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x19du));
    /* 0079be71: mov dword ptr [0xaab210], eax */ W32((u32)(0xaab210u), r_eax);
    /* 0079be76: mov eax, dword ptr [ebx + 0x1a0] */ r_eax = R32((u32)(r_ebx+0x1a0u));
    /* 0079be7c: mov dword ptr [0xa9c22c], eax */ W32((u32)(0xa9c22cu), r_eax);
    /* 0079be81: movsx eax, byte ptr [ebx + 0x19e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x19eu));
    /* 0079be88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079be89: call 0x78b14c */ r_esp -= 4; W32(r_esp, 0x79be8eu); f_0078b14c();
    /* 0079be8e: movsx eax, byte ptr [ebx + 0x1a5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1a5u));
    /* 0079be95: movsx edx, byte ptr [ebx + 0x1a6] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1a6u));
    /* 0079be9c: movsx ecx, byte ptr [ebx + 0x1a7] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1a7u));
    /* 0079bea3: mov dword ptr [0xaab194], eax */ W32((u32)(0xaab194u), r_eax);
    /* 0079bea8: movsx eax, byte ptr [ebx + 0x1a4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1a4u));
    /* 0079beaf: mov dword ptr [0xa9b1c4], edx */ W32((u32)(0xa9b1c4u), r_edx);
    /* 0079beb5: mov dword ptr [0xaab1c8], ecx */ W32((u32)(0xaab1c8u), r_ecx);
    /* 0079bebb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bebe: je 0x79befb */ if (fZ) goto L_0079befb;
L_0079bec0:; BB(0x0079bec0);
    /* 0079bec0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bec3: jne 0x79becf */ if (!fZ) goto L_0079becf;
L_0079bec5:; BB(0x0079bec5);
    /* 0079bec5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bec7: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x79beccu); f_0080c304();
    /* 0079becc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079becd: jmp 0x79bf03 */ goto L_0079bf03;
L_0079becf:; BB(0x0079becf);
    /* 0079becf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bed2: jne 0x79bef1 */ if (!fZ) goto L_0079bef1;
L_0079bed4:; BB(0x0079bed4);
    /* 0079bed4: mov eax, dword ptr [0xa46c40] */ r_eax = R32((u32)(0xa46c40u));
    /* 0079bed9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bedb: je 0x79bee7 */ if (fZ) goto L_0079bee7;
L_0079bedd:; BB(0x0079bedd);
    /* 0079bedd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bedf: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x79bee4u); f_0080c304();
    /* 0079bee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079bee5: jmp 0x79bf03 */ goto L_0079bf03;
L_0079bee7:; BB(0x0079bee7);
    /* 0079bee7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bee9: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x79beeeu); f_0080c304();
    /* 0079beee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079beef: jmp 0x79bf03 */ goto L_0079bf03;
L_0079bef1:; BB(0x0079bef1);
    /* 0079bef1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bef3: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x79bef8u); f_0080c304();
    /* 0079bef8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079bef9: jmp 0x79bf03 */ goto L_0079bf03;
L_0079befb:; BB(0x0079befb);
    /* 0079befb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079befd: call 0x80c304 */ r_esp -= 4; W32(r_esp, 0x79bf02u); f_0080c304();
    /* 0079bf02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079bf03:; BB(0x0079bf03);
    /* 0079bf03: mov edx, dword ptr [0xaaecf8] */ r_edx = R32((u32)(0xaaecf8u));
    /* 0079bf09: mov eax, dword ptr [ebx + 0x1a0] */ r_eax = R32((u32)(r_ebx+0x1a0u));
    /* 0079bf0f: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 0079bf12: mov dword ptr [0xaafec0], eax */ W32((u32)(0xaafec0u), r_eax);
    /* 0079bf17: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bf19: je 0x79bf2e */ if (fZ) goto L_0079bf2e;
L_0079bf1b:; BB(0x0079bf1b);
    /* 0079bf1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bf1d: je 0x79bf27 */ if (fZ) goto L_0079bf27;
L_0079bf1f:; BB(0x0079bf1f);
    /* 0079bf1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bf21: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0079bf23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079bf25: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x79bf27u); call_ind(t); }
L_0079bf27:; BB(0x0079bf27);
    /* 0079bf27: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0079bf2a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bf2c: jne 0x79bf1b */ if (!fZ) goto L_0079bf1b;
L_0079bf2e:; BB(0x0079bf2e);
    /* 0079bf2e: movzx eax, byte ptr [0xaab1e8] */ r_eax = (u32)R8((u32)(0xaab1e8u));
    /* 0079bf35: movzx edx, byte ptr [0xaab1e9] */ r_edx = (u32)R8((u32)(0xaab1e9u));
    /* 0079bf3c: movzx ecx, byte ptr [0xaab1ea] */ r_ecx = (u32)R8((u32)(0xaab1eau));
    /* 0079bf43: movzx ebx, byte ptr [0xaab1eb] */ r_ebx = (u32)R8((u32)(0xaab1ebu));
    /* 0079bf4a: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf4c: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf4e: movzx edx, byte ptr [0xaab1ec] */ r_edx = (u32)R8((u32)(0xaab1ecu));
    /* 0079bf55: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf57: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf59: movzx edx, byte ptr [0xaab1ed] */ r_edx = (u32)R8((u32)(0xaab1edu));
    /* 0079bf60: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf62: movzx edx, byte ptr [0xaab1ee] */ r_edx = (u32)R8((u32)(0xaab1eeu));
    /* 0079bf69: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf6b: movzx edx, byte ptr [0xaab1ef] */ r_edx = (u32)R8((u32)(0xaab1efu));
    /* 0079bf72: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0079bf74: je 0x79bf9f */ if (fZ) goto L_0079bf9f;
L_0079bf76:; BB(0x0079bf76);
    /* 0079bf76: push 0xaab1e8 */ { u32 v = 0xaab1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bf7b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79bf80u); f_006dc358();
    /* 0079bf80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079bf81: mov edx, 0xaab1e8 */ r_edx = 0xaab1e8u;
    /* 0079bf86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf88: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0079bf8a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079bf8d: mov edx, 0xaab1d8 */ r_edx = 0xaab1d8u;
    /* 0079bf92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079bf94: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0079bf96: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079bf99: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0079bf9c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_0079bf9f:; BB(0x0079bf9f);
    /* 0079bf9f: push 0xaab1d8 */ { u32 v = 0xaab1d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bfa4: push 0xaab1e8 */ { u32 v = 0xaab1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bfa9: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79bfaeu); f_006dc358();
    /* 0079bfae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079bfb1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0079bfb3:; BB(0x0079bfb3);
    /* 0079bfb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079bfb4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79bfb9u); f_0068d5a8();
    /* 0079bfb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079bfba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079bfbc: je 0x79bfc6 */ if (fZ) goto L_0079bfc6;
L_0079bfbe:; BB(0x0079bfbe);
    /* 0079bfbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079bfc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079bfc2: mov ecx, eax */ r_ecx = r_eax;
    /* 0079bfc4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79bfc6u); call_ind(t); }
L_0079bfc6:; BB(0x0079bfc6);
    /* 0079bfc6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079bfc9: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079bfcc: jl 0x79bfb3 */ if ((fS!=fO)) goto L_0079bfb3;
L_0079bfce:; BB(0x0079bfce);
    /* 0079bfce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079bfd0: mov dword ptr [0xaab28c], eax */ W32((u32)(0xaab28cu), r_eax);
    /* 0079bfd5: mov dword ptr [0xaab290], eax */ W32((u32)(0xaab290u), r_eax);
    /* 0079bfda: mov dword ptr [0xaab294], eax */ W32((u32)(0xaab294u), r_eax);
    /* 0079bfdf: mov dword ptr [0xaab298], eax */ W32((u32)(0xaab298u), r_eax);
    /* 0079bfe4: call 0x64ab00 */ r_esp -= 4; W32(r_esp, 0x79bfe9u); f_0064ab00();
    /* 0079bfe9: mov dword ptr [0xaab220], 4 */ W32((u32)(0xaab220u), 0x4u);
    /* 0079bff3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079bff5: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 0079bffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079bffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079bffc: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x79c001u); f_00815590();
    /* 0079c001: call 0x7bd788 */ r_esp -= 4; W32(r_esp, 0x79c006u); f_007bd788();
    /* 0079c006: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c008: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c00a: call 0x708698 */ r_esp -= 4; W32(r_esp, 0x79c00fu); f_00708698();
    /* 0079c00f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c012: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x79c017u); f_007a6114();
    /* 0079c017: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079c018: ret  */ FN_RET(0x0079bde8); r_esp += 4; return;
}

