#include "protos.h"

void f_0062b0bc(void) /* sub_62B0BC */
{
    FN_ENTER(0x0062b0bc);
    /* 0062b0bc: mov dword ptr [0xa8ee24], 0xbcbf258c */ W32((u32)(0xa8ee24u), 0xbcbf258cu);
    /* 0062b0c6: ret  */ FN_RET(0x0062b0bc); r_esp += 4; return;
}

void f_0062b0c8(void) /* sub_62B0C8 */
{
    FN_ENTER(0x0062b0c8);
    /* 0062b0c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b0cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0cd: push 0x8e315e */ { u32 v = 0x8e315eu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b0e0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b0e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b0e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062b0e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062b0ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062b0ef: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x62b0f4u); f_00807ac0();
    /* 0062b0f4: mov ebx, eax */ r_ebx = r_eax;
    /* 0062b0f6: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x62b0fbu); f_00807de4();
    /* 0062b0fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b0fe: je 0x62b1c5 */ if (fZ) goto L_0062b1c5;
L_0062b104:; BB(0x0062b104);
    /* 0062b104: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b107: je 0x62b1c5 */ if (fZ) goto L_0062b1c5;
L_0062b10d:; BB(0x0062b10d);
    /* 0062b10d: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b110: je 0x62b1c5 */ if (fZ) goto L_0062b1c5;
L_0062b116:; BB(0x0062b116);
    /* 0062b116: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0062b11d: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b122: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b127u); f_008581c5();
    /* 0062b127: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b128: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062b12b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b12d: je 0x62b1c1 */ if (fZ) goto L_0062b1c1;
L_0062b133:; BB(0x0062b133);
    /* 0062b133: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0062b13a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b141: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062b144: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b149: push 0x9c5e84 */ { u32 v = 0x9c5e84u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b14e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b150: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62b155u); f_005b7a84();
    /* 0062b155: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062b158: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0062b15f:; BB(0x0062b15f);
    /* 0062b15f: mov dword ptr [0xa8ee2c], eax */ W32((u32)(0xa8ee2cu), r_eax);
    /* 0062b164: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b16b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b16d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b172u); f_008581c5();
    /* 0062b172: push 0x932540 */ { u32 v = 0x932540u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b177: mov dword ptr [0xa8ee28], eax */ W32((u32)(0xa8ee28u), r_eax);
    /* 0062b17c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62b181u); f_008009dc();
    /* 0062b181: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062b184: mov edx, dword ptr [0xa8ee28] */ r_edx = R32((u32)(0xa8ee28u));
    /* 0062b18a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062b18c: mov eax, dword ptr [0xa8ee2c] */ r_eax = R32((u32)(0xa8ee2cu));
    /* 0062b191: mov esi, dword ptr [0xa8ee28] */ r_esi = R32((u32)(0xa8ee28u));
    /* 0062b197: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0062b19d: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0062b1a0: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0062b1a3: mov dword ptr [0xa8ee30], 0 */ W32((u32)(0xa8ee30u), 0x0u);
L_0062b1ad:; BB(0x0062b1ad);
    /* 0062b1ad: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b1b0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062b1b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b1b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b1bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b1bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b1c0: ret  */ FN_RET(0x0062b0c8); r_esp += 4; return;
L_0062b1c1:; BB(0x0062b1c1);
    /* 0062b1c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b1c3: jmp 0x62b15f */ goto L_0062b15f;
L_0062b1c5:; BB(0x0062b1c5);
    /* 0062b1c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062b1cc: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1d1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b1d6u); f_008581c5();
    /* 0062b1d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b1d7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062b1da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b1dc: je 0x62b261 */ if (fZ) goto L_0062b261;
L_0062b1e2:; BB(0x0062b1e2);
    /* 0062b1e2: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062b1e9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062b1f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b1f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b1f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1f8: push 0x9c5e9c */ { u32 v = 0x9c5e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1ff: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62b204u); f_005b7a84();
    /* 0062b204: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b207: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062b20e:; BB(0x0062b20e);
    /* 0062b20e: mov dword ptr [0xa8ee2c], eax */ W32((u32)(0xa8ee2cu), r_eax);
    /* 0062b213: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b21a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b21c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b221u); f_008581c5();
    /* 0062b221: push 0x932524 */ { u32 v = 0x932524u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b226: mov dword ptr [0xa8ee28], eax */ W32((u32)(0xa8ee28u), r_eax);
    /* 0062b22b: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62b230u); f_008009dc();
    /* 0062b230: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062b233: mov edx, dword ptr [0xa8ee28] */ r_edx = R32((u32)(0xa8ee28u));
    /* 0062b239: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062b23b: mov eax, dword ptr [0xa8ee2c] */ r_eax = R32((u32)(0xa8ee2cu));
    /* 0062b240: mov esi, dword ptr [0xa8ee28] */ r_esi = R32((u32)(0xa8ee28u));
    /* 0062b246: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0062b24c: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0062b24f: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0062b252: mov dword ptr [0xa8ee30], 1 */ W32((u32)(0xa8ee30u), 0x1u);
    /* 0062b25c: jmp 0x62b1ad */ goto L_0062b1ad;
L_0062b261:; BB(0x0062b261);
    /* 0062b261: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b263: jmp 0x62b20e */ goto L_0062b20e;
}

void f_0062b268(void) /* sub_62B268 */
{
    FN_ENTER(0x0062b268);
    /* 0062b268: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b269: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062b26b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062b26d: call 0x62b28c */ r_esp -= 4; W32(r_esp, 0x62b272u); f_0062b28c();
    /* 0062b272: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062b276: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b278: jne 0x62b27e */ if (!fZ) goto L_0062b27e;
L_0062b27a:; BB(0x0062b27a);
    /* 0062b27a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b27b: ret 4 */ FN_RET(0x0062b268); r_esp += 8; return;
L_0062b27e:; BB(0x0062b27e);
    /* 0062b27e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b27f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62b284u); f_005c2f74();
    /* 0062b284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b285: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b286: ret 4 */ FN_RET(0x0062b268); r_esp += 8; return;
}

void f_0062b28c(void) /* sub_62B28C */
{
    FN_ENTER(0x0062b28c);
    /* 0062b28c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b28d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b28f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b291: push 0x8e3178 */ { u32 v = 0x8e3178u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b296: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b29d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b2a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b2a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b2aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062b2ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062b2b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062b2b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062b2b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b2b9: mov dword ptr [ecx], 0xb29bc0 */ W32((u32)(r_ecx), 0xb29bc0u);
    /* 0062b2bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b2c6: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x62b2cbu); f_006296c8();
    /* 0062b2cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b2ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b2d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b2d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b2d8: ret  */ FN_RET(0x0062b28c); r_esp += 4; return;
}

void f_0062b2dc(void)
{
    FN_ENTER(0x0062b2dc);
    /* 0062b2dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b2df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2e1: push 0x8e31a0 */ { u32 v = 0x8e31a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b2ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b2f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b2f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b2fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062b2fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062b300: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062b303: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b308: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062b30f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62b314u); f_005caba4();
    /* 0062b314: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b315: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062b318: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b31a: je 0x62b353 */ if (fZ) goto L_0062b353;
L_0062b31c:; BB(0x0062b31c);
    /* 0062b31c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062b323: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b32a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b32d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b333: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b336: call 0x62b358 */ r_esp -= 4; W32(r_esp, 0x62b33bu); f_0062b358();
    /* 0062b33b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b33e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062b345:; BB(0x0062b345);
    /* 0062b345: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b348: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b34f: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b352: ret  */ FN_RET(0x0062b2dc); r_esp += 4; return;
L_0062b353:; BB(0x0062b353);
    /* 0062b353: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b355: jmp 0x62b345 */ goto L_0062b345;
}

void f_0062b358(void) /* sub_62B358 */
{
    FN_ENTER(0x0062b358);
    /* 0062b358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b359: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b35b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b35d: push 0x8e31bc */ { u32 v = 0x8e31bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b362: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b369: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b370: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b376: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062b379: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062b37c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062b37f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062b382: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b385: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062b388: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062b38b: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x62b390u); f_0062998c();
    /* 0062b390: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b397: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b39a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062b39d: mov dword ptr [ecx], 0xb29bc0 */ W32((u32)(r_ecx), 0xb29bc0u);
    /* 0062b3a3: mov eax, dword ptr [0x9c5eb0] */ r_eax = R32((u32)(0x9c5eb0u));
    /* 0062b3a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3a9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062b3ac: call dword ptr [0xb29bd4] */ { u32 t = R32((u32)(0xb29bd4u)); r_esp -= 4; W32(r_esp, 0x62b3b2u); call_ind(t); }
    /* 0062b3b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b3b5: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62b3bau); f_0062974c();
    /* 0062b3ba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b3bd: fld dword ptr [0x93255c] */ FPUSH(R_F32((u32)(0x93255cu)));
    /* 0062b3c3: fadd dword ptr [edx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x68u));
    /* 0062b3c6: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062b3cc: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
    /* 0062b3d2: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 0062b3dc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062b3df: mov dword ptr [edx + 0xc4], 0x42480000 */ W32((u32)(r_edx+0xc4u), 0x42480000u);
    /* 0062b3e9: je 0x62b3f5 */ if (fZ) goto L_0062b3f5;
L_0062b3eb:; BB(0x0062b3eb);
    /* 0062b3eb: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0062b3f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b3f3: jl 0x62b411 */ if ((fS!=fO)) goto L_0062b411;
L_0062b3f5:; BB(0x0062b3f5);
    /* 0062b3f5: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
L_0062b3ff:; BB(0x0062b3ff);
    /* 0062b3ff: mov eax, edx */ r_eax = r_edx;
    /* 0062b401: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b404: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b40b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b40d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b40e: ret 8 */ FN_RET(0x0062b358); r_esp += 12; return;
L_0062b411:; BB(0x0062b411);
    /* 0062b411: mov dword ptr [edx + 0xd0], 1 */ W32((u32)(r_edx+0xd0u), 0x1u);
    /* 0062b41b: jmp 0x62b3ff */ goto L_0062b3ff;
}

void f_0062b420(void) /* sub_62B420 */
{
    FN_ENTER(0x0062b420);
    /* 0062b420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b421: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062b423: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062b425: call 0x62b444 */ r_esp -= 4; W32(r_esp, 0x62b42au); f_0062b444();
    /* 0062b42a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062b42e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b430: jne 0x62b436 */ if (!fZ) goto L_0062b436;
L_0062b432:; BB(0x0062b432);
    /* 0062b432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b433: ret 4 */ FN_RET(0x0062b420); r_esp += 8; return;
L_0062b436:; BB(0x0062b436);
    /* 0062b436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b437: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62b43cu); f_005c2f74();
    /* 0062b43c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b43d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b43e: ret 4 */ FN_RET(0x0062b420); r_esp += 8; return;
}

void f_0062b444(void) /* sub_62B444 */
{
    FN_ENTER(0x0062b444);
    /* 0062b444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b445: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b449: push 0x8e31d8 */ { u32 v = 0x8e31d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b44e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b455: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b45c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b45f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b462: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062b465: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062b468: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062b46b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062b46e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b475: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b478: mov dword ptr [eax], 0xb29d00 */ W32((u32)(r_eax), 0xb29d00u);
    /* 0062b47e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b47f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x62b484u); f_007b4e84();
    /* 0062b484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b485: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b488: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x62b48du); f_007b9c8c();
    /* 0062b48d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b494: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b497: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x62b49cu); f_006296c8();
    /* 0062b49c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b49f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b4a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b4a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b4a9: ret  */ FN_RET(0x0062b444); r_esp += 4; return;
}

void f_0062b4ac(void) /* sub_62B4AC */
{
    FN_ENTER(0x0062b4ac);
    /* 0062b4ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b4ad: mov esi, ecx */ r_esi = r_ecx;
    /* 0062b4af: mov ecx, esi */ r_ecx = r_esi;
    /* 0062b4b1: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x62b4b6u); f_0061347c();
    /* 0062b4b6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062b4b8: mov ecx, esi */ r_ecx = r_esi;
    /* 0062b4ba: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x62b4bdu); call_ind(t); }
    /* 0062b4bd: mov edx, 1 */ r_edx = 0x1u;
    /* 0062b4c2: mov dword ptr [esi + 0xec], edx */ W32((u32)(r_esi+0xecu), r_edx);
    /* 0062b4c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b4ca: mov dword ptr [esi + 0xf4], eax */ W32((u32)(r_esi+0xf4u), r_eax);
    /* 0062b4d0: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 0062b4d6: mov dword ptr [esi + 0xf0], edx */ W32((u32)(r_esi+0xf0u), r_edx);
    /* 0062b4dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b4dd: ret  */ FN_RET(0x0062b4ac); r_esp += 4; return;
}

void f_0062b4e0(void) /* sub_62B4E0 */
{
    FN_ENTER(0x0062b4e0);
    /* 0062b4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b4e1: mov esi, ecx */ r_esi = r_ecx;
    /* 0062b4e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0062b4e5: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x62b4eau); f_0061347c();
    /* 0062b4ea: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062b4ec: mov ecx, esi */ r_ecx = r_esi;
    /* 0062b4ee: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x62b4f1u); call_ind(t); }
    /* 0062b4f1: mov edx, 1 */ r_edx = 0x1u;
    /* 0062b4f6: mov dword ptr [esi + 0xf4], edx */ W32((u32)(r_esi+0xf4u), r_edx);
    /* 0062b4fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b4fe: mov dword ptr [esi + 0xec], eax */ W32((u32)(r_esi+0xecu), r_eax);
    /* 0062b504: mov dword ptr [esi + 0xf0], eax */ W32((u32)(r_esi+0xf0u), r_eax);
    /* 0062b50a: mov dword ptr [esi + 0xf8], edx */ W32((u32)(r_esi+0xf8u), r_edx);
    /* 0062b510: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b511: ret  */ FN_RET(0x0062b4e0); r_esp += 4; return;
}

void f_0062b514(void) /* sub_62B514 */
{
    FN_ENTER(0x0062b514);
    /* 0062b514: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b515: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b516: mov esi, ecx */ r_esi = r_ecx;
    /* 0062b518: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b51e: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b524: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062b526: mov ecx, esi */ r_ecx = r_esi;
    /* 0062b528: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62b52bu); call_ind(t); }
    /* 0062b52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b52d: je 0x62b5f6 */ if (fZ) goto L_0062b5f6;
L_0062b533:; BB(0x0062b533);
    /* 0062b533: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62b538u); f_0082d7b0();
    /* 0062b538: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062b53d: mov ebp, dword ptr [0xa8ee48] */ r_ebp = R32((u32)(0xa8ee48u));
    /* 0062b543: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062b545: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 0062b548: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0062b54e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0062b551: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0062b554: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0062b557: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062b559: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62b55eu); f_0082d838();
    /* 0062b55e: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0062b561: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b563: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62b568u); f_0082d8bc();
    /* 0062b568: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0062b56b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62b570u); f_00829cc8();
    /* 0062b570: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0062b573: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x62b578u); f_00831758();
    /* 0062b578: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62b57du); f_0082da80();
    /* 0062b57d: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62b582u); f_0082dbac();
    /* 0062b582: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62b587u); f_0082d7b0();
    /* 0062b587: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 0062b58d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b58f: jne 0x62b59e */ if (!fZ) goto L_0062b59e;
L_0062b591:; BB(0x0062b591);
    /* 0062b591: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062b596: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062b599: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 0062b59c: jmp 0x62b5ae */ goto L_0062b5ae;
L_0062b59e:; BB(0x0062b59e);
    /* 0062b59e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b5a1: jne 0x62b5ae */ if (!fZ) goto L_0062b5ae;
L_0062b5a3:; BB(0x0062b5a3);
    /* 0062b5a3: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062b5a8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0062b5ab: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
L_0062b5ae:; BB(0x0062b5ae);
    /* 0062b5ae: mov eax, dword ptr [0xa8ee4c] */ r_eax = R32((u32)(0xa8ee4cu));
    /* 0062b5b3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0062b5b9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062b5bc: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0062b5bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062b5c1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62b5c6u); f_0082d838();
    /* 0062b5c6: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0062b5c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b5cb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62b5d0u); f_0082d8bc();
    /* 0062b5d0: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0062b5d3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62b5d8u); f_00829cc8();
    /* 0062b5d8: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b5de: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0062b5e1: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0062b5e7: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x62b5ecu); f_0083bd00();
    /* 0062b5ec: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62b5f1u); f_0082da80();
    /* 0062b5f1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62b5f6u); f_0082dab0();
L_0062b5f6:; BB(0x0062b5f6);
    /* 0062b5f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b5f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b5f8: ret  */ FN_RET(0x0062b514); r_esp += 4; return;
}

void f_0062b5fc(void) /* sub_62B5FC */
{
    FN_ENTER(0x0062b5fc);
    /* 0062b5fc: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062b601: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b603: je 0x62b628 */ if (fZ) goto L_0062b628;
L_0062b605:; BB(0x0062b605);
    /* 0062b605: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b608: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x62b60du); f_00800b5c();
    /* 0062b60d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b60e: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062b613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b615: je 0x62b628 */ if (fZ) goto L_0062b628;
L_0062b617:; BB(0x0062b617);
    /* 0062b617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b618: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x62b61du); f_00857e98();
    /* 0062b61d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b61e: mov dword ptr [0xa8ee44], 0 */ W32((u32)(0xa8ee44u), 0x0u);
L_0062b628:; BB(0x0062b628);
    /* 0062b628: mov ecx, dword ptr [0xa8ee4c] */ r_ecx = R32((u32)(0xa8ee4cu));
    /* 0062b62e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b630: je 0x62b645 */ if (fZ) goto L_0062b645;
L_0062b632:; BB(0x0062b632);
    /* 0062b632: je 0x62b63b */ if (fZ) goto L_0062b63b;
L_0062b634:; BB(0x0062b634);
    /* 0062b634: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b636: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62b63bu); f_004066a8();
L_0062b63b:; BB(0x0062b63b);
    /* 0062b63b: mov dword ptr [0xa8ee4c], 0 */ W32((u32)(0xa8ee4cu), 0x0u);
L_0062b645:; BB(0x0062b645);
    /* 0062b645: mov ecx, dword ptr [0xa8ee48] */ r_ecx = R32((u32)(0xa8ee48u));
    /* 0062b64b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b64d: je 0x62b662 */ if (fZ) goto L_0062b662;
L_0062b64f:; BB(0x0062b64f);
    /* 0062b64f: je 0x62b658 */ if (fZ) goto L_0062b658;
L_0062b651:; BB(0x0062b651);
    /* 0062b651: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b653: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62b658u); f_004066a8();
L_0062b658:; BB(0x0062b658);
    /* 0062b658: mov dword ptr [0xa8ee48], 0 */ W32((u32)(0xa8ee48u), 0x0u);
L_0062b662:; BB(0x0062b662);
    /* 0062b662: ret  */ FN_RET(0x0062b5fc); r_esp += 4; return;
}

void f_0062b664(void)
{
    FN_ENTER(0x0062b664);
    /* 0062b664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b665: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b667: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b669: push 0x8e3200 */ { u32 v = 0x8e3200u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b66e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b675: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b67c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b67f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b682: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062b685: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062b688: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062b68b: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b690: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062b697: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62b69cu); f_005caba4();
    /* 0062b69c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b69d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062b6a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b6a2: je 0x62b6db */ if (fZ) goto L_0062b6db;
L_0062b6a4:; BB(0x0062b6a4);
    /* 0062b6a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062b6ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b6b2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b6b5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b6bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b6be: call 0x62b6e0 */ r_esp -= 4; W32(r_esp, 0x62b6c3u); f_0062b6e0();
    /* 0062b6c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b6c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062b6cd:; BB(0x0062b6cd);
    /* 0062b6cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b6d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b6d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b6d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b6da: ret  */ FN_RET(0x0062b664); r_esp += 4; return;
L_0062b6db:; BB(0x0062b6db);
    /* 0062b6db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b6dd: jmp 0x62b6cd */ goto L_0062b6cd;
}

void f_0062b6e0(void) /* sub_62B6E0 */
{
    FN_ENTER(0x0062b6e0);
    /* 0062b6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b6e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6e5: push 0x8e321c */ { u32 v = 0x8e321cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b6f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b6f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b6fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b6fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062b701: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062b704: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062b707: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062b70a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b70d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062b710: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062b713: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x62b718u); f_0062998c();
    /* 0062b718: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b71f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b722: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062b725: mov dword ptr [ecx], 0xb29d00 */ W32((u32)(r_ecx), 0xb29d00u);
    /* 0062b72b: mov eax, dword ptr [0x9c5f24] */ r_eax = R32((u32)(0x9c5f24u));
    /* 0062b730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b731: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062b734: call dword ptr [0xb29d14] */ { u32 t = R32((u32)(0xb29d14u)); r_esp -= 4; W32(r_esp, 0x62b73au); call_ind(t); }
    /* 0062b73a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b73d: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62b742u); f_0062974c();
    /* 0062b742: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b745: mov ebx, dword ptr [0xa8ee4c] */ r_ebx = R32((u32)(0xa8ee4cu));
    /* 0062b74b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b74d: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0062b753: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0062b756: push 0x9c5f28 */ { u32 v = 0x9c5f28u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b75b: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0062b75e: mov esi, dword ptr [ebx + 0x430] */ r_esi = R32((u32)(r_ebx+0x430u));
    /* 0062b764: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0062b767: mov dword ptr [ecx + 0xbc], edi */ W32((u32)(r_ecx+0xbcu), r_edi);
    /* 0062b76d: fild dword ptr [edi + 4] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4u)));
    /* 0062b770: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0062b773: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0062b776: fadd dword ptr [eax*4 + 0x932568] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x932568u));
    /* 0062b77d: fadd dword ptr [0x932580] */ ST(0) = ST(0) + R_F32((u32)(0x932580u));
    /* 0062b783: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062b788: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0062b78e: mov dword ptr [ecx + 0xb8], 0x40000000 */ W32((u32)(r_ecx+0xb8u), 0x40000000u);
    /* 0062b798: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0062b79b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0062b79e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62b7a3u); f_007b9a88();
    /* 0062b7a3: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b7a6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62b7abu); f_007b999c();
    /* 0062b7ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b7ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b7af: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62b7b4u); f_007b4f54();
    /* 0062b7b4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b7b7: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062b7bd: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 0062b7c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b7ca: mov dword ptr [edx + 0xc4], 0x42200000 */ W32((u32)(r_edx+0xc4u), 0x42200000u);
    /* 0062b7d4: je 0x62b7f0 */ if (fZ) goto L_0062b7f0;
L_0062b7d6:; BB(0x0062b7d6);
    /* 0062b7d6: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 0062b7d9: fcomp dword ptr [0x932578] */ fx_compare(ST(0), R_F32((u32)(0x932578u))); FPOP();
    /* 0062b7df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062b7e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062b7e2: jae 0x62b7f0 */ if (!fC) goto L_0062b7f0;
L_0062b7e4:; BB(0x0062b7e4);
    /* 0062b7e4: mov dword ptr [edx + 0xd0], 1 */ W32((u32)(r_edx+0xd0u), 0x1u);
    /* 0062b7ee: jmp 0x62b7fa */ goto L_0062b7fa;
L_0062b7f0:; BB(0x0062b7f0);
    /* 0062b7f0: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
L_0062b7fa:; BB(0x0062b7fa);
    /* 0062b7fa: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x62b7ffu); f_00807ac0();
    /* 0062b7ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b802: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b805: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062b808: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b80b: mov byte ptr [ecx + 0xe8], al */ W8((u32)(r_ecx+0xe8u), (u8)r_eax);
    /* 0062b811: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b813: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 0062b819: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 0062b81f: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 0062b825: mov dword ptr [ecx + 0xf8], edx */ W32((u32)(r_ecx+0xf8u), r_edx);
    /* 0062b82b: mov eax, ecx */ r_eax = r_ecx;
    /* 0062b82d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b830: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b837: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b83a: ret 8 */ FN_RET(0x0062b6e0); r_esp += 12; return;
}

void f_0062b840(void) /* sub_62B840 */
{
    FN_ENTER(0x0062b840);
    /* 0062b840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b841: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b845: push 0x8e3294 */ { u32 v = 0x8e3294u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062b850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062b858: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b85b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062b85e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062b861: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062b864: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062b867: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x62b86cu); f_00807ac0();
    /* 0062b86c: mov ebx, eax */ r_ebx = r_eax;
    /* 0062b86e: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x62b873u); f_00807de4();
    /* 0062b873: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b876: je 0x62b9a3 */ if (fZ) goto L_0062b9a3;
L_0062b87c:; BB(0x0062b87c);
    /* 0062b87c: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b87f: je 0x62b9a3 */ if (fZ) goto L_0062b9a3;
L_0062b885:; BB(0x0062b885);
    /* 0062b885: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b888: je 0x62b9a3 */ if (fZ) goto L_0062b9a3;
L_0062b88e:; BB(0x0062b88e);
    /* 0062b88e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0062b895: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b89a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b89fu); f_008581c5();
    /* 0062b89f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b8a0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062b8a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b8a5: je 0x62b99c */ if (fZ) goto L_0062b99c;
L_0062b8ab:; BB(0x0062b8ab);
    /* 0062b8ab: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0062b8b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b8b9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062b8bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b8be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8c1: push 0x9c5ebc */ { u32 v = 0x9c5ebcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8c8: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62b8cdu); f_005b7a84();
    /* 0062b8cd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062b8d0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0062b8d7:; BB(0x0062b8d7);
    /* 0062b8d7: mov dword ptr [0xa8ee48], eax */ W32((u32)(0xa8ee48u), r_eax);
    /* 0062b8dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b8e3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0062b8ea: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8ef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b8f4u); f_008581c5();
    /* 0062b8f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b8f5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0062b8f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b8fa: je 0x62b998 */ if (fZ) goto L_0062b998;
L_0062b900:; BB(0x0062b900);
    /* 0062b900: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0062b907: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062b90e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062b911: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b916: push 0x9c5edc */ { u32 v = 0x9c5edcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b91b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b91d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62b922u); f_005b7a84();
    /* 0062b922: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062b925: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0062b92c:; BB(0x0062b92c);
    /* 0062b92c: mov dword ptr [0xa8ee4c], eax */ W32((u32)(0xa8ee4cu), r_eax);
    /* 0062b931: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b938: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b93a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b93fu); f_008581c5();
    /* 0062b93f: mov edx, dword ptr [0xa8ee48] */ r_edx = R32((u32)(0xa8ee48u));
    /* 0062b945: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0062b94b: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0062b94e: mov dword ptr [0xa8ee44], eax */ W32((u32)(0xa8ee44u), r_eax);
    /* 0062b953: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0062b955: mov eax, dword ptr [0xa8ee4c] */ r_eax = R32((u32)(0xa8ee4cu));
    /* 0062b95a: push 0x93266c */ { u32 v = 0x93266cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b95f: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 0062b965: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0062b968: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062b96d: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0062b970: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62b975u); f_008009dc();
    /* 0062b975: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062b978: mov edx, dword ptr [0xa8ee44] */ r_edx = R32((u32)(0xa8ee44u));
    /* 0062b97e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_0062b981:; BB(0x0062b981);
    /* 0062b981: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062b984: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b987: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062b98a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b98d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b994: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b996: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b997: ret  */ FN_RET(0x0062b840); r_esp += 4; return;
L_0062b998:; BB(0x0062b998);
    /* 0062b998: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b99a: jmp 0x62b92c */ goto L_0062b92c;
L_0062b99c:; BB(0x0062b99c);
    /* 0062b99c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b99e: jmp 0x62b8d7 */ goto L_0062b8d7;
L_0062b9a3:; BB(0x0062b9a3);
    /* 0062b9a3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0062b9aa: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9af: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62b9b4u); f_008581c5();
    /* 0062b9b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b9b5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062b9b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b9ba: je 0x62ba9f */ if (fZ) goto L_0062ba9f;
L_0062b9c0:; BB(0x0062b9c0);
    /* 0062b9c0: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0062b9c7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0062b9ce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b9d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b9d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9d6: push 0x9c5ef4 */ { u32 v = 0x9c5ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9dd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62b9e2u); f_005b7a84();
    /* 0062b9e2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b9e5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0062b9ec:; BB(0x0062b9ec);
    /* 0062b9ec: mov dword ptr [0xa8ee48], eax */ W32((u32)(0xa8ee48u), r_eax);
    /* 0062b9f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b9f8: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0062b9ff: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba04: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62ba09u); f_008581c5();
    /* 0062ba09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ba0a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062ba0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba0f: je 0x62ba9b */ if (fZ) goto L_0062ba9b;
L_0062ba15:; BB(0x0062ba15);
    /* 0062ba15: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0062ba1c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0062ba23: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062ba26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ba28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba2b: push 0x9c5f14 */ { u32 v = 0x9c5f14u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba32: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62ba37u); f_005b7a84();
    /* 0062ba37: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062ba3a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0062ba41:; BB(0x0062ba41);
    /* 0062ba41: mov dword ptr [0xa8ee4c], eax */ W32((u32)(0xa8ee4cu), r_eax);
    /* 0062ba46: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062ba4d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba4f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62ba54u); f_008581c5();
    /* 0062ba54: mov edx, dword ptr [0xa8ee48] */ r_edx = R32((u32)(0xa8ee48u));
    /* 0062ba5a: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0062ba60: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0062ba63: mov dword ptr [0xa8ee44], eax */ W32((u32)(0xa8ee44u), r_eax);
    /* 0062ba68: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0062ba6a: mov eax, dword ptr [0xa8ee4c] */ r_eax = R32((u32)(0xa8ee4cu));
    /* 0062ba6f: push 0x93264c */ { u32 v = 0x93264cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba74: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 0062ba7a: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0062ba7d: mov eax, dword ptr [0xa8ee44] */ r_eax = R32((u32)(0xa8ee44u));
    /* 0062ba82: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0062ba85: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62ba8au); f_008009dc();
    /* 0062ba8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ba8d: mov edx, dword ptr [0xa8ee44] */ r_edx = R32((u32)(0xa8ee44u));
    /* 0062ba93: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0062ba96: jmp 0x62b981 */ goto L_0062b981;
L_0062ba9b:; BB(0x0062ba9b);
    /* 0062ba9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ba9d: jmp 0x62ba41 */ goto L_0062ba41;
L_0062ba9f:; BB(0x0062ba9f);
    /* 0062ba9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062baa1: jmp 0x62b9ec */ goto L_0062b9ec;
}

void f_0062baa8(void) /* sub_62BAA8 */
{
    FN_ENTER(0x0062baa8);
    /* 0062baa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062baa9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062baab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062baad: call 0x62bacc */ r_esp -= 4; W32(r_esp, 0x62bab2u); f_0062bacc();
    /* 0062bab2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062bab6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062bab8: jne 0x62babe */ if (!fZ) goto L_0062babe;
L_0062baba:; BB(0x0062baba);
    /* 0062baba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062babb: ret 4 */ FN_RET(0x0062baa8); r_esp += 8; return;
L_0062babe:; BB(0x0062babe);
    /* 0062babe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062babf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62bac4u); f_005c2f74();
    /* 0062bac4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bac5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bac6: ret 4 */ FN_RET(0x0062baa8); r_esp += 8; return;
}

void f_0062bacc(void) /* sub_62BACC */
{
    FN_ENTER(0x0062bacc);
    /* 0062bacc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bacd: mov ebp, esp */ r_ebp = r_esp;
    /* 0062bacf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062bad1: push 0x8e32b0 */ { u32 v = 0x8e32b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bad6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062badc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062badd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062bae4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062bae7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062baea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062baed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062baf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062baf3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062baf6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062baf9: mov dword ptr [ecx], 0xb29e20 */ W32((u32)(r_ecx), 0xb29e20u);
    /* 0062baff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062bb06: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x62bb0bu); f_006296c8();
    /* 0062bb0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bb0e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062bb15: mov esp, ebp */ r_esp = r_ebp;
    /* 0062bb17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bb18: ret  */ FN_RET(0x0062bacc); r_esp += 4; return;
}

void f_0062bb1c(void) /* sub_62BB1C */
{
    FN_ENTER(0x0062bb1c);
    /* 0062bb1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb1e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062bb20: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0062bb26: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062bb28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bb2a: jne 0x62bb4a */ if (!fZ) goto L_0062bb4a;
L_0062bb2c:; BB(0x0062bb2c);
    /* 0062bb2c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062bb2e: call 0x629cc8 */ r_esp -= 4; W32(r_esp, 0x62bb33u); f_00629cc8();
    /* 0062bb33: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0062bb39: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062bb3c: je 0x62bb43 */ if (fZ) goto L_0062bb43;
L_0062bb3e:; BB(0x0062bb3e);
    /* 0062bb3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062bb41: jne 0x62bb58 */ if (!fZ) goto L_0062bb58;
L_0062bb43:; BB(0x0062bb43);
    /* 0062bb43: mov esi, 1 */ r_esi = 0x1u;
    /* 0062bb48: jmp 0x62bb58 */ goto L_0062bb58;
L_0062bb4a:; BB(0x0062bb4a);
    /* 0062bb4a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062bb4d: jne 0x62bb58 */ if (!fZ) goto L_0062bb58;
L_0062bb4f:; BB(0x0062bb4f);
    /* 0062bb4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062bb51: call 0x629c64 */ r_esp -= 4; W32(r_esp, 0x62bb56u); f_00629c64();
    /* 0062bb56: mov esi, eax */ r_esi = r_eax;
L_0062bb58:; BB(0x0062bb58);
    /* 0062bb58: mov eax, esi */ r_eax = r_esi;
    /* 0062bb5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bb5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bb5c: ret  */ FN_RET(0x0062bb1c); r_esp += 4; return;
}

void f_0062bb60(void) /* sub_62BB60 */
{
    FN_ENTER(0x0062bb60);
    /* 0062bb60: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0062bb63: fcom dword ptr [0x932708] */ fx_compare(ST(0), R_F32((u32)(0x932708u))); 
    /* 0062bb69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062bb6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062bb6c: jbe 0x62bb79 */ if ((fC||fZ)) goto L_0062bb79;
L_0062bb6e:; BB(0x0062bb6e);
    /* 0062bb6e: fld dword ptr [0xa8ee5c] */ FPUSH(R_F32((u32)(0xa8ee5cu)));
    /* 0062bb74: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0062bb76: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
L_0062bb79:; BB(0x0062bb79);
    /* 0062bb79: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062bb7b: ret  */ FN_RET(0x0062bb60); r_esp += 4; return;
}

void f_0062bb7c(void) /* sub_62BB7C */
{
    FN_ENTER(0x0062bb7c);
    /* 0062bb7c: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 0062bb82: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062bb85: je 0x62bbcc */ if (fZ) goto L_0062bbcc;
L_0062bb87:; BB(0x0062bb87);
    /* 0062bb87: fld dword ptr [0x932704] */ FPUSH(R_F32((u32)(0x932704u)));
    /* 0062bb8d: fld dword ptr [ecx + 0xec] */ FPUSH(R_F32((u32)(r_ecx+0xecu)));
    /* 0062bb93: fsub dword ptr [0x9326fc] */ ST(0) = ST(0) - R_F32((u32)(0x9326fcu));
    /* 0062bb99: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062bb9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062bb9d: fstp dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0)); FPOP();
    /* 0062bba3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062bba4: ja 0x62bbb0 */ if ((!fC&&!fZ)) goto L_0062bbb0;
L_0062bba6:; BB(0x0062bba6);
    /* 0062bba6: mov dword ptr [ecx + 0xf8], 1 */ W32((u32)(r_ecx+0xf8u), 0x1u);
L_0062bbb0:; BB(0x0062bbb0);
    /* 0062bbb0: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0062bbb3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062bbb5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062bbb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062bbb9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062bbbb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062bbbc: jae 0x62bbc9 */ if (!fC) goto L_0062bbc9;
L_0062bbbe:; BB(0x0062bbbe);
    /* 0062bbbe: fld dword ptr [0xa8ee5c] */ FPUSH(R_F32((u32)(0xa8ee5cu)));
    /* 0062bbc4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0062bbc6: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
L_0062bbc9:; BB(0x0062bbc9);
    /* 0062bbc9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062bbcb: ret  */ FN_RET(0x0062bb7c); r_esp += 4; return;
L_0062bbcc:; BB(0x0062bbcc);
    /* 0062bbcc: fld dword ptr [0x9326fc] */ FPUSH(R_F32((u32)(0x9326fcu)));
    /* 0062bbd2: fadd dword ptr [ecx + 0xec] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xecu));
    /* 0062bbd8: fcom dword ptr [0x932700] */ fx_compare(ST(0), R_F32((u32)(0x932700u))); 
    /* 0062bbde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062bbe0: fstp dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0)); FPOP();
    /* 0062bbe6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062bbe7: jb 0x62bbfb */ if (fC) goto L_0062bbfb;
L_0062bbe9:; BB(0x0062bbe9);
    /* 0062bbe9: fld dword ptr [0x932704] */ FPUSH(R_F32((u32)(0x932704u)));
    /* 0062bbef: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 0062bbf9: jmp 0x62bbb0 */ goto L_0062bbb0;
L_0062bbfb:; BB(0x0062bbfb);
    /* 0062bbfb: fld dword ptr [0x932704] */ FPUSH(R_F32((u32)(0x932704u)));
    /* 0062bc01: jmp 0x62bbb0 */ goto L_0062bbb0;
}

void f_0062bc04(void) /* sub_62BC04 */
{
    FN_ENTER(0x0062bc04);
    /* 0062bc04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062bc07: call 0x807e68 */ r_esp -= 4; W32(r_esp, 0x62bc0cu); f_00807e68();
    /* 0062bc0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc0e: je 0x62bc15 */ if (fZ) goto L_0062bc15;
L_0062bc10:; BB(0x0062bc10);
    /* 0062bc10: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc13: jne 0x62bc1f */ if (!fZ) goto L_0062bc1f;
L_0062bc15:; BB(0x0062bc15);
    /* 0062bc15: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 0062bc1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062bc1d: je 0x62bc36 */ if (fZ) goto L_0062bc36;
L_0062bc1f:; BB(0x0062bc1f);
    /* 0062bc1f: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062bc22: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062bc24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc27: push dword ptr [eax*4 + 0x9326a0] */ { u32 v = R32((u32)(r_eax*4+0x9326a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bc2e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62bc33u); f_00814298();
    /* 0062bc33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0062bc36:; BB(0x0062bc36);
    /* 0062bc36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bc37: ret  */ FN_RET(0x0062bc04); r_esp += 4; return;
}

void f_0062bc38(void) /* sub_62BC38 */
{
    FN_ENTER(0x0062bc38);
    /* 0062bc38: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062bc3a: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x62bc3du); call_ind(t); }
    /* 0062bc3d: ret  */ FN_RET(0x0062bc38); r_esp += 4; return;
}

void f_0062bc40(void) /* sub_62BC40 */
{
    FN_ENTER(0x0062bc40);
    /* 0062bc40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc41: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062bc44: mov esi, ecx */ r_esi = r_ecx;
    /* 0062bc46: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bc48: mov ecx, esi */ r_ecx = r_esi;
    /* 0062bc4a: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x62bc4du); call_ind(t); }
    /* 0062bc4d: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 0062bc53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc56: jne 0x62bcc8 */ if (!fZ) goto L_0062bcc8;
L_0062bc58:; BB(0x0062bc58);
    /* 0062bc58: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bc5a: mov ecx, esi */ r_ecx = r_esi;
    /* 0062bc5c: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x62bc5fu); call_ind(t); }
    /* 0062bc5f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bc61: mov ecx, esi */ r_ecx = r_esi;
    /* 0062bc63: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x62bc66u); call_ind(t); }
    /* 0062bc66: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc69: je 0x62bcdb */ if (fZ) goto L_0062bcdb;
L_0062bc6b:; BB(0x0062bc6b);
    /* 0062bc6b: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0062bc6f: mov byte ptr [esp + 0xc], 5 */ W8((u32)(r_esp+0xcu), 0x5u);
    /* 0062bc74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bc76: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0062bc7b: mov byte ptr [esp + 0xd], 3 */ W8((u32)(r_esp+0xdu), 0x3u);
    /* 0062bc80: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0062bc85: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0062bc8b: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0062bc90: mov edx, dword ptr [esi + 0xc8] */ r_edx = R32((u32)(r_esi+0xc8u));
    /* 0062bc96: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 0062bc9b: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0062bca1: mov byte ptr [esp + 0x16], dl */ W8((u32)(r_esp+0x16u), (u8)r_edx);
    /* 0062bca5: mov byte ptr [esp + 0x17], al */ W8((u32)(r_esp+0x17u), (u8)r_eax);
    /* 0062bca9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0062bcad: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x62bcb2u); f_008003e0();
    /* 0062bcb2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bcb4: mov ecx, esi */ r_ecx = r_esi;
    /* 0062bcb6: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x62bcb9u); call_ind(t); }
    /* 0062bcb9: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 0062bcc3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062bcc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bcc7: ret  */ FN_RET(0x0062bc40); r_esp += 4; return;
L_0062bcc8:; BB(0x0062bcc8);
    /* 0062bcc8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bcca: mov ecx, esi */ r_ecx = r_esi;
    /* 0062bccc: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x62bccfu); call_ind(t); }
    /* 0062bccf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bcd1: mov ecx, esi */ r_ecx = r_esi;
    /* 0062bcd3: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x62bcd6u); call_ind(t); }
    /* 0062bcd6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bcd9: je 0x62bce0 */ if (fZ) goto L_0062bce0;
L_0062bcdb:; BB(0x0062bcdb);
    /* 0062bcdb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062bcde: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bcdf: ret  */ FN_RET(0x0062bc40); r_esp += 4; return;
L_0062bce0:; BB(0x0062bce0);
    /* 0062bce0: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0062bce4: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 0062bce8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bcea: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0062bcef: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0062bcf4: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0062bcf9: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0062bcfe: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 0062bd04: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0062bd09: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 0062bd0e: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0062bd13: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 0062bd17: mov byte ptr [esp + 0xb], 1 */ W8((u32)(r_esp+0xbu), 0x1u);
    /* 0062bd1c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062bd1f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x62bd24u); f_008003e0();
    /* 0062bd24: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bd26: mov ecx, esi */ r_ecx = r_esi;
    /* 0062bd28: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x62bd2bu); call_ind(t); }
    /* 0062bd2b: mov dword ptr [esi + 0xd4], 1 */ W32((u32)(r_esi+0xd4u), 0x1u);
    /* 0062bd35: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062bd38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bd39: ret  */ FN_RET(0x0062bc40); r_esp += 4; return;
}

void f_0062bd3c(void) /* sub_62BD3C */
{
    FN_ENTER(0x0062bd3c);
    /* 0062bd3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd3e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062bd40: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bd46: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bd4c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062bd4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062bd51: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62bd54u); call_ind(t); }
    /* 0062bd54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062bd56: je 0x62be37 */ if (fZ) goto L_0062be37;
L_0062bd5c:; BB(0x0062bd5c);
    /* 0062bd5c: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 0062bd61: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0062bd67: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0062bd6a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62bd6fu); f_00829cc8();
    /* 0062bd6f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62bd74u); f_0082d7b0();
    /* 0062bd74: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0062bd77: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62bd7cu); f_0082d838();
    /* 0062bd7c: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0062bd7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bd81: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62bd86u); f_0082d8bc();
    /* 0062bd86: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 0062bd89: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062bd8c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62bd91u); f_0082d838();
    /* 0062bd91: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bd94: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62bd99u); f_008321d8();
    /* 0062bd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bd9a: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0062bda0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bda3: je 0x62bdc4 */ if (fZ) goto L_0062bdc4;
L_0062bda5:; BB(0x0062bda5);
    /* 0062bda5: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0062bdaa: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0062bdaf: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062bdb2: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 0062bdb8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062bdbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bdbe: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62bdc3u); f_0082d710();
    /* 0062bdc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0062bdc4:; BB(0x0062bdc4);
    /* 0062bdc4: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62bdc9u); f_0082dbac();
    /* 0062bdc9: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062bdcc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62bdd1u); f_0082d7b0();
    /* 0062bdd1: lea ecx, [ebp + 0x68] */ r_ecx = (u32)(r_ebp+0x68u);
    /* 0062bdd4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62bdd9u); f_0082d838();
    /* 0062bdd9: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062bddc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62bde1u); f_0082d838();
    /* 0062bde1: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bde4: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62bde9u); f_008321d8();
    /* 0062bde9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bdea: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062bded: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62bdf2u); f_0082d7b0();
    /* 0062bdf2: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062bdf5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62bdfau); f_0082d838();
    /* 0062bdfa: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bdfd: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62be02u); f_008321d8();
    /* 0062be02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062be03: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62be08u); f_0082da80();
    /* 0062be08: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62be0du); f_0082da80();
    /* 0062be0d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62be12u); f_0082dab0();
    /* 0062be12: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0062be18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062be1b: je 0x62be32 */ if (fZ) goto L_0062be32;
L_0062be1d:; BB(0x0062be1d);
    /* 0062be1d: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062be22: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62be27u); f_0082d710();
    /* 0062be27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062be28: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0062be2d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0062be32:; BB(0x0062be32);
    /* 0062be32: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62be37u); f_0082da80();
L_0062be37:; BB(0x0062be37);
    /* 0062be37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062be38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062be39: ret  */ FN_RET(0x0062bd3c); r_esp += 4; return;
}

void f_0062be3c(void) /* sub_62BE3C */
{
    FN_ENTER(0x0062be3c);
    /* 0062be3c: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 0062be41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062be43: je 0x62be72 */ if (fZ) goto L_0062be72;
L_0062be45:; BB(0x0062be45);
    /* 0062be45: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0062be47: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x62be4cu); f_00800b5c();
    /* 0062be4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062be4d: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 0062be52: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0062be58: mov eax, dword ptr [0xa8ee60] */ r_eax = R32((u32)(0xa8ee60u));
    /* 0062be5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062be5f: je 0x62be72 */ if (fZ) goto L_0062be72;
L_0062be61:; BB(0x0062be61);
    /* 0062be61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062be62: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x62be67u); f_00857e98();
    /* 0062be67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062be68: mov dword ptr [0xa8ee60], 0 */ W32((u32)(0xa8ee60u), 0x0u);
L_0062be72:; BB(0x0062be72);
    /* 0062be72: mov ecx, dword ptr [0xa8ee64] */ r_ecx = R32((u32)(0xa8ee64u));
    /* 0062be78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062be7a: je 0x62be8f */ if (fZ) goto L_0062be8f;
L_0062be7c:; BB(0x0062be7c);
    /* 0062be7c: je 0x62be85 */ if (fZ) goto L_0062be85;
L_0062be7e:; BB(0x0062be7e);
    /* 0062be7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062be80: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62be85u); f_004066a8();
L_0062be85:; BB(0x0062be85);
    /* 0062be85: mov dword ptr [0xa8ee64], 0 */ W32((u32)(0xa8ee64u), 0x0u);
L_0062be8f:; BB(0x0062be8f);
    /* 0062be8f: ret  */ FN_RET(0x0062be3c); r_esp += 4; return;
}

void f_0062be90(void)
{
    FN_ENTER(0x0062be90);
    /* 0062be90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062be91: mov ebp, esp */ r_ebp = r_esp;
    /* 0062be93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062be95: push 0x8e32d8 */ { u32 v = 0x8e32d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062be9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062bea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bea1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062bea8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062beab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062beae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062beb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062beb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062beb7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062bebc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062bec3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62bec8u); f_005caba4();
    /* 0062bec8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bec9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062becc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bece: je 0x62bf07 */ if (fZ) goto L_0062bf07;
L_0062bed0:; BB(0x0062bed0);
    /* 0062bed0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062bed7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062bede: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bee1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bee7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062beea: call 0x62bf0c */ r_esp -= 4; W32(r_esp, 0x62beefu); f_0062bf0c();
    /* 0062beef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062bef2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062bef9:; BB(0x0062bef9);
    /* 0062bef9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062befc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062bf03: mov esp, ebp */ r_esp = r_ebp;
    /* 0062bf05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bf06: ret  */ FN_RET(0x0062be90); r_esp += 4; return;
L_0062bf07:; BB(0x0062bf07);
    /* 0062bf07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062bf09: jmp 0x62bef9 */ goto L_0062bef9;
}

void f_0062bf0c(void) /* sub_62BF0C */
{
    FN_ENTER(0x0062bf0c);
    /* 0062bf0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062bf0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf11: push 0x8e32f4 */ { u32 v = 0x8e32f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062bf1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062bf24: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062bf27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062bf2a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062bf2d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062bf30: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062bf33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062bf36: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062bf39: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062bf3c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062bf3f: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x62bf44u); f_0062998c();
    /* 0062bf44: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062bf4b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bf4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062bf51: mov dword ptr [ecx], 0xb29e20 */ W32((u32)(r_ecx), 0xb29e20u);
    /* 0062bf57: mov eax, dword ptr [0x9c5f6c] */ r_eax = R32((u32)(0x9c5f6cu));
    /* 0062bf5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf5d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062bf60: call dword ptr [0xb29e34] */ { u32 t = R32((u32)(0xb29e34u)); r_esp -= 4; W32(r_esp, 0x62bf66u); call_ind(t); }
    /* 0062bf66: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bf69: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62bf6eu); f_0062974c();
    /* 0062bf6e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bf71: mov edx, dword ptr [0xa8ee60] */ r_edx = R32((u32)(0xa8ee60u));
    /* 0062bf77: mov ebx, dword ptr [0xa8ee64] */ r_ebx = R32((u32)(0xa8ee64u));
    /* 0062bf7d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0062bf7f: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 0062bf85: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0062bf88: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0062bf8e: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0062bf91: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 0062bf94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062bf96: mov dword ptr [eax + 0xc0], 0x43c80000 */ W32((u32)(r_eax+0xc0u), 0x43c80000u);
    /* 0062bfa0: mov dword ptr [eax + 0xc4], 0x41200000 */ W32((u32)(r_eax+0xc4u), 0x41200000u);
    /* 0062bfaa: mov dword ptr [eax + 0xcc], 0x41200000 */ W32((u32)(r_eax+0xccu), 0x41200000u);
    /* 0062bfb4: jne 0x62bfd5 */ if (!fZ) goto L_0062bfd5;
L_0062bfb6:; BB(0x0062bfb6);
    /* 0062bfb6: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0062bfbc: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062bfbf: je 0x62bfcb */ if (fZ) goto L_0062bfcb;
L_0062bfc1:; BB(0x0062bfc1);
    /* 0062bfc1: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0062bfc7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062bfc9: jl 0x62c035 */ if ((fS!=fO)) goto L_0062c035;
L_0062bfcb:; BB(0x0062bfcb);
    /* 0062bfcb: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_0062bfd5:; BB(0x0062bfd5);
    /* 0062bfd5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062bfd8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bfdb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062bfde: mov dword ptr [eax + 0xe8], 0x3f800000 */ W32((u32)(r_eax+0xe8u), 0x3f800000u);
    /* 0062bfe8: mov dword ptr [eax + 0xec], 0x3f800000 */ W32((u32)(r_eax+0xecu), 0x3f800000u);
    /* 0062bff2: mov dword ptr [eax + 0xf0], 0x3f800000 */ W32((u32)(r_eax+0xf0u), 0x3f800000u);
    /* 0062bffc: mov dword ptr [eax + 0xf4], 0x3f800000 */ W32((u32)(r_eax+0xf4u), 0x3f800000u);
    /* 0062c006: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0062c010: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 0062c017: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 0062c01e: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 0062c025: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c028: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062c02f: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c032: ret 8 */ FN_RET(0x0062bf0c); r_esp += 12; return;
L_0062c035:; BB(0x0062c035);
    /* 0062c035: mov dword ptr [eax + 0xd0], 1 */ W32((u32)(r_eax+0xd0u), 0x1u);
    /* 0062c03f: jmp 0x62bfd5 */ goto L_0062bfd5;
}

