#include "protos.h"

void f_005cf024(void) /* sub_5CF024 */
{
    FN_ENTER(0x005cf024);
    /* 005cf024: mov dword ptr [0xa8d95c], 0x3f800000 */ W32((u32)(0xa8d95cu), 0x3f800000u);
    /* 005cf02e: mov dword ptr [0xa8d960], 0x41000000 */ W32((u32)(0xa8d960u), 0x41000000u);
    /* 005cf038: mov dword ptr [0xa8d964], 0x3fc00000 */ W32((u32)(0xa8d964u), 0x3fc00000u);
    /* 005cf042: ret  */ FN_RET(0x005cf024); r_esp += 4; return;
}

void f_005cf044(void) /* sub_5CF044 */
{
    FN_ENTER(0x005cf044);
    /* 005cf044: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf045: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cf047: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cf049: call 0x5cf068 */ r_esp -= 4; W32(r_esp, 0x5cf04eu); f_005cf068();
    /* 005cf04e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cf052: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf054: jne 0x5cf05a */ if (!fZ) goto L_005cf05a;
L_005cf056:; BB(0x005cf056);
    /* 005cf056: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf057: ret 4 */ FN_RET(0x005cf044); r_esp += 8; return;
L_005cf05a:; BB(0x005cf05a);
    /* 005cf05a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf05b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cf060u); f_005c2f74();
    /* 005cf060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf061: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf062: ret 4 */ FN_RET(0x005cf044); r_esp += 8; return;
}

void f_005cf068(void) /* sub_5CF068 */
{
    FN_ENTER(0x005cf068);
    /* 005cf068: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf069: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf06b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf06d: push 0x8da184 */ { u32 v = 0x8da184u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf072: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf079: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf080: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf083: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf086: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cf089: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cf08c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cf08f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cf092: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf095: mov dword ptr [ecx], 0xb0cc80 */ W32((u32)(r_ecx), 0xb0cc80u);
    /* 005cf09b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf0a2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cf0a7u); f_008171e8();
    /* 005cf0a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf0aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf0b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf0b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf0b4: ret  */ FN_RET(0x005cf068); r_esp += 4; return;
}

void f_005cf0b8(void) /* sub_5CF0B8 */
{
    FN_ENTER(0x005cf0b8);
    /* 005cf0b8: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005cf0bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf0bd: je 0x5cf0cc */ if (fZ) goto L_005cf0cc;
L_005cf0bf:; BB(0x005cf0bf);
    /* 005cf0bf: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005cf0c3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf0c8: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_005cf0cc:; BB(0x005cf0cc);
    /* 005cf0cc: ret  */ FN_RET(0x005cf0b8); r_esp += 4; return;
}

void f_005cf0c8(void)
{
    FN_ENTER(0x005cf0c8);
    /* 005cf0c8: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 005cf0cc: ret  */ FN_RET(0x005cf0c8); r_esp += 4; return;
}

void f_005cf0d0(void) /* sub_5CF0D0 */
{
    FN_ENTER(0x005cf0d0);
    /* 005cf0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf0d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0d5: push 0x8da1c6 */ { u32 v = 0x8da1c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf0e8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf0eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf0ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cf0f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cf0f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cf0f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cf0fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf0fc: je 0x5cf1bb */ if (fZ) goto L_005cf1bb;
L_005cf102:; BB(0x005cf102);
    /* 005cf102: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005cf105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf107: je 0x5cf1bb */ if (fZ) goto L_005cf1bb;
L_005cf10d:; BB(0x005cf10d);
    /* 005cf10d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cf110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf112: je 0x5cf1bb */ if (fZ) goto L_005cf1bb;
L_005cf118:; BB(0x005cf118);
    /* 005cf118: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cf11b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf11d: je 0x5cf1bb */ if (fZ) goto L_005cf1bb;
L_005cf123:; BB(0x005cf123);
    /* 005cf123: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005cf12a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf12c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cf131u); f_005caba4();
    /* 005cf131: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cf134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf137: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005cf13a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf13c: je 0x5cf1cf */ if (fZ) goto L_005cf1cf;
L_005cf142:; BB(0x005cf142);
    /* 005cf142: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005cf149: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cf150: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cf153: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cf156: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005cf159: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005cf15c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf15f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf160: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf161: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf162: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf163: call 0x5cf1d8 */ r_esp -= 4; W32(r_esp, 0x5cf168u); f_005cf1d8();
    /* 005cf168: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005cf16f:; BB(0x005cf16f);
    /* 005cf16f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf176: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf17b: je 0x5cf1bb */ if (fZ) goto L_005cf1bb;
L_005cf17d:; BB(0x005cf17d);
    /* 005cf17d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cf184: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf186: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cf18bu); f_005caba4();
    /* 005cf18b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf18c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cf18f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf191: je 0x5cf1bb */ if (fZ) goto L_005cf1bb;
L_005cf193:; BB(0x005cf193);
    /* 005cf193: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cf19a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cf1a1: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf1a4: mov ecx, eax */ r_ecx = r_eax;
    /* 005cf1a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf1a9: push 0x5cf24c */ { u32 v = 0x5cf24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf1ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf1af: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5cf1b4u); f_005e5b88();
    /* 005cf1b4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cf1bb:; BB(0x005cf1bb);
    /* 005cf1bb: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cf1be: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf1c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf1c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf1cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf1cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf1ce: ret  */ FN_RET(0x005cf0d0); r_esp += 4; return;
L_005cf1cf:; BB(0x005cf1cf);
    /* 005cf1cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cf1d1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cf1d4: jmp 0x5cf16f */ goto L_005cf16f;
}

void f_005cf1d8(void) /* sub_5CF1D8 */
{
    FN_ENTER(0x005cf1d8);
    /* 005cf1d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf1d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf1da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf1db: mov edi, ecx */ r_edi = r_ecx;
    /* 005cf1dd: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005cf1e1: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005cf1e5: mov ecx, edi */ r_ecx = r_edi;
    /* 005cf1e7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf1eb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cf1f0u); f_008193cc();
    /* 005cf1f0: mov dword ptr [edi], 0xb0cc80 */ W32((u32)(r_edi), 0xb0cc80u);
    /* 005cf1f6: mov edx, dword ptr [0x9c2728] */ r_edx = R32((u32)(0x9c2728u));
    /* 005cf1fc: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005cf1ff: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005cf202: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 005cf205: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005cf208: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 005cf20b: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 005cf20e: mov dword ptr [edi + 0x30], ebp */ W32((u32)(r_edi+0x30u), r_ebp);
    /* 005cf211: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005cf213: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005cf216: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005cf219: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005cf21c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005cf220: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 005cf223: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 005cf226: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 005cf22c: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 005cf233: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 005cf236: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005cf23a: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf23f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005cf243: mov eax, edi */ r_eax = r_edi;
    /* 005cf245: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf246: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cf247: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cf248: ret 0x10 */ FN_RET(0x005cf1d8); r_esp += 20; return;
}

void f_005cf24c(void) /* sub_5CF24C */
{
    FN_ENTER(0x005cf24c);
    /* 005cf24c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005cf250: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf252: je 0x5cf259 */ if (fZ) goto L_005cf259;
L_005cf254:; BB(0x005cf254);
    /* 005cf254: call 0x5cf25c */ r_esp -= 4; W32(r_esp, 0x5cf259u); f_005cf25c();
L_005cf259:; BB(0x005cf259);
    /* 005cf259: ret  */ FN_RET(0x005cf24c); r_esp += 4; return;
}

void f_005cf25c(void) /* sub_5CF25C */
{
    FN_ENTER(0x005cf25c);
    /* 005cf25c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf25d: mov esi, ecx */ r_esi = r_ecx;
    /* 005cf25f: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf262: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5cf267u); f_005c5528();
    /* 005cf267: mov ecx, eax */ r_ecx = r_eax;
    /* 005cf269: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf26c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf26e: je 0x5cf27d */ if (fZ) goto L_005cf27d;
L_005cf270:; BB(0x005cf270);
    /* 005cf270: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 005cf273: lea edx, [esi + 0x28] */ r_edx = (u32)(r_esi+0x28u);
    /* 005cf276: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf278: call 0x5e9384 */ r_esp -= 4; W32(r_esp, 0x5cf27du); f_005e9384();
L_005cf27d:; BB(0x005cf27d);
    /* 005cf27d: mov dword ptr [esi + 0x38], 1 */ W32((u32)(r_esi+0x38u), 0x1u);
    /* 005cf284: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cf285: ret  */ FN_RET(0x005cf25c); r_esp += 4; return;
}

void f_005cf288(void) /* sub_5CF288 */
{
    FN_ENTER(0x005cf288);
    /* 005cf288: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf289: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005cf28d: call 0x5cf298 */ r_esp -= 4; W32(r_esp, 0x5cf292u); f_005cf298();
    /* 005cf292: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf293: ret  */ FN_RET(0x005cf288); r_esp += 4; return;
}

void f_005cf295(void)
{
    FN_ENTER(0x005cf295);
    /* 005cf295: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf296: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005cf298: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf29b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf29d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005cf2a0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005cf2a3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005cf2a6: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005cf2aa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005cf2ae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005cf2b1: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2b7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cf2bcu); f_0050b510();
    /* 005cf2bc: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005cf2c0: push 0x1d1 */ { u32 v = 0x1d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2c6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cf2cbu); f_0050b510();
    /* 005cf2cb: fld dword ptr [0x92bfb0] */ FPUSH(R_F32((u32)(0x92bfb0u)));
    /* 005cf2d1: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 005cf2d5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005cf2d9: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005cf2dd: push 0x1d2 */ { u32 v = 0x1d2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2e3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cf2e8u); f_0050b510();
    /* 005cf2e8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cf2eb: ret  */ FN_RET(0x005cf295); r_esp += 4; return;
}

void f_005cf298(void) /* sub_5CF298 */
{
    FN_ENTER(0x005cf298);
    /* 005cf298: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf29b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf29d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005cf2a0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005cf2a3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005cf2a6: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005cf2aa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005cf2ae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005cf2b1: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2b7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cf2bcu); f_0050b510();
    /* 005cf2bc: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005cf2c0: push 0x1d1 */ { u32 v = 0x1d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2c6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cf2cbu); f_0050b510();
    /* 005cf2cb: fld dword ptr [0x92bfb0] */ FPUSH(R_F32((u32)(0x92bfb0u)));
    /* 005cf2d1: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 005cf2d5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005cf2d9: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005cf2dd: push 0x1d2 */ { u32 v = 0x1d2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2e3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cf2e8u); f_0050b510();
    /* 005cf2e8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cf2eb: ret  */ FN_RET(0x005cf298); r_esp += 4; return;
}

void f_005cf2ec(void) /* sub_5CF2EC */
{
    FN_ENTER(0x005cf2ec);
    /* 005cf2ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2ed: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005cf2f1: call 0x5cf298 */ r_esp -= 4; W32(r_esp, 0x5cf2f6u); f_005cf298();
    /* 005cf2f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf2f7: ret  */ FN_RET(0x005cf2ec); r_esp += 4; return;
}

void f_005cf2f8(void) /* sub_5CF2F8 */
{
    FN_ENTER(0x005cf2f8);
    /* 005cf2f8: mov dword ptr [0xa8d96c], 0x3f800000 */ W32((u32)(0xa8d96cu), 0x3f800000u);
    /* 005cf302: mov dword ptr [0xa8d970], 0x41000000 */ W32((u32)(0xa8d970u), 0x41000000u);
    /* 005cf30c: mov dword ptr [0xa8d974], 0x3fc00000 */ W32((u32)(0xa8d974u), 0x3fc00000u);
    /* 005cf316: ret  */ FN_RET(0x005cf2f8); r_esp += 4; return;
}

void f_005cf318(void) /* sub_5CF318 */
{
    FN_ENTER(0x005cf318);
    /* 005cf318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf319: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf31b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf31d: push 0x8da1e0 */ { u32 v = 0x8da1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf322: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf329: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf330: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf333: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf336: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cf339: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cf33c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cf33f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cf342: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cf345: mov eax, ecx */ r_eax = r_ecx;
    /* 005cf347: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 005cf34d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf354: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5cf359u); f_005e3e40();
    /* 005cf359: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cf35c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf35e: jne 0x5cf370 */ if (!fZ) goto L_005cf370;
L_005cf360:; BB(0x005cf360);
    /* 005cf360: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf363: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf36a: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf36c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf36d: ret 4 */ FN_RET(0x005cf318); r_esp += 8; return;
L_005cf370:; BB(0x005cf370);
    /* 005cf370: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf374: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cf379u); f_005c2f74();
    /* 005cf379: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf37a: jmp 0x5cf360 */ goto L_005cf360;
}

void f_005cf37c(void) /* sub_5CF37C */
{
    FN_ENTER(0x005cf37c);
    /* 005cf37c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf37d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cf37f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cf381: call 0x5cf3a0 */ r_esp -= 4; W32(r_esp, 0x5cf386u); f_005cf3a0();
    /* 005cf386: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cf38a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf38c: jne 0x5cf392 */ if (!fZ) goto L_005cf392;
L_005cf38e:; BB(0x005cf38e);
    /* 005cf38e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf38f: ret 4 */ FN_RET(0x005cf37c); r_esp += 8; return;
L_005cf392:; BB(0x005cf392);
    /* 005cf392: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf393: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cf398u); f_005c2f74();
    /* 005cf398: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf399: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf39a: ret 4 */ FN_RET(0x005cf37c); r_esp += 8; return;
}

void f_005cf3a0(void) /* sub_5CF3A0 */
{
    FN_ENTER(0x005cf3a0);
    /* 005cf3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf3a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3a5: push 0x8da20a */ { u32 v = 0x8da20au; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf3b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf3b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf3bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf3be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cf3c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cf3c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cf3c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cf3ca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf3cd: mov dword ptr [eax], 0xb0cd4c */ W32((u32)(r_eax), 0xb0cd4cu);
    /* 005cf3d3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cf3d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf3d9: mov dword ptr [ecx], 0xb0cd38 */ W32((u32)(r_ecx), 0xb0cd38u);
    /* 005cf3df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf3e6: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5cf3ebu); f_005e3e40();
    /* 005cf3eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf3ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf3f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf3f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf3f8: ret  */ FN_RET(0x005cf3a0); r_esp += 4; return;
}

void f_005cf44c(void) /* sub_5CF44C */
{
    FN_ENTER(0x005cf44c);
    /* 005cf44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf44d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf44f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf451: push 0x8da24c */ { u32 v = 0x8da24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf45d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf464: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf46a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cf46d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cf470: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cf473: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fO = 0; }
    /* 005cf475: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 005cf478: fcomp dword ptr [0x92bfb4] */ fx_compare(ST(0), R_F32((u32)(0x92bfb4u))); FPOP();
    /* 005cf47e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cf480: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cf481: je 0x5cf4cd */ if (fZ) goto L_005cf4cd;
L_005cf483:; BB(0x005cf483);
    /* 005cf483: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cf486: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf488: je 0x5cf4cd */ if (fZ) goto L_005cf4cd;
L_005cf48a:; BB(0x005cf48a);
    /* 005cf48a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cf491: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf493: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cf498u); f_005caba4();
    /* 005cf498: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf499: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cf49c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf49e: je 0x5cf4dd */ if (fZ) goto L_005cf4dd;
L_005cf4a0:; BB(0x005cf4a0);
    /* 005cf4a0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005cf4a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cf4ae: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf4b1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf4b4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf4b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cf4ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf4bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4be: call 0x5cf4e4 */ r_esp -= 4; W32(r_esp, 0x5cf4c3u); f_005cf4e4();
    /* 005cf4c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf4c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cf4cd:; BB(0x005cf4cd);
    /* 005cf4cd: mov eax, ecx */ r_eax = r_ecx;
    /* 005cf4cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf4d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf4d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf4db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf4dc: ret  */ FN_RET(0x005cf44c); r_esp += 4; return;
L_005cf4dd:; BB(0x005cf4dd);
    /* 005cf4dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf4df: jmp 0x5cf4cd */ goto L_005cf4cd;
}

void f_005cf4e4(void) /* sub_5CF4E4 */
{
    FN_ENTER(0x005cf4e4);
    /* 005cf4e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cf4e7: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf4eb: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf4ef: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf4f3: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf4f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cf4f9: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5cf4feu); f_005e43e8();
    /* 005cf4fe: mov dword ptr [ebx], 0xb0cd4c */ W32((u32)(r_ebx), 0xb0cd4cu);
    /* 005cf504: mov edx, dword ptr [0x9c272c] */ r_edx = R32((u32)(0x9c272cu));
    /* 005cf50a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005cf50d: mov eax, ebx */ r_eax = r_ebx;
    /* 005cf50f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf510: ret 0x10 */ FN_RET(0x005cf4e4); r_esp += 20; return;
}

void f_005cf514(void) /* sub_5CF514 */
{
    FN_ENTER(0x005cf514);
    /* 005cf514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf515: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf517: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf519: push 0x8da268 */ { u32 v = 0x8da268u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf51e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf525: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf52c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf52f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf532: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cf535: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cf538: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cf53b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cf53e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cf541: mov eax, ecx */ r_eax = r_ecx;
    /* 005cf543: mov dword ptr [eax], 0xb0cf28 */ W32((u32)(r_eax), 0xb0cf28u);
    /* 005cf549: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf550: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cf555u); f_008171e8();
    /* 005cf555: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cf558: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf55a: jne 0x5cf56c */ if (!fZ) goto L_005cf56c;
L_005cf55c:; BB(0x005cf55c);
    /* 005cf55c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf55f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf566: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf569: ret 4 */ FN_RET(0x005cf514); r_esp += 8; return;
L_005cf56c:; BB(0x005cf56c);
    /* 005cf56c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf56f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf570: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cf575u); f_005c2f74();
    /* 005cf575: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf576: jmp 0x5cf55c */ goto L_005cf55c;
}

void f_005cf578(void) /* sub_5CF578 */
{
    FN_ENTER(0x005cf578);
    /* 005cf578: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf579: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf57b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf57d: push 0x8da29c */ { u32 v = 0x8da29cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf582: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf589: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf590: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf593: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf596: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cf599: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cf59c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cf59f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cf5a2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005cf5a5: mov eax, ecx */ r_eax = r_ecx;
    /* 005cf5a7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cf5aa: mov dword ptr [eax], 0xb0cf28 */ W32((u32)(r_eax), 0xb0cf28u);
    /* 005cf5b0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf5b7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cf5bcu); f_008171e8();
    /* 005cf5bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cf5bf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf5c1: jne 0x5cf5d3 */ if (!fZ) goto L_005cf5d3;
L_005cf5c3:; BB(0x005cf5c3);
    /* 005cf5c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf5c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf5cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf5cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf5d0: ret 4 */ FN_RET(0x005cf578); r_esp += 8; return;
L_005cf5d3:; BB(0x005cf5d3);
    /* 005cf5d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf5d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf5d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cf5dcu); f_005c2f74();
    /* 005cf5dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf5dd: jmp 0x5cf5c3 */ goto L_005cf5c3;
}

void f_005cf630(void) /* sub_5CF630 */
{
    FN_ENTER(0x005cf630);
    /* 005cf630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf631: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf635: push 0x8da2ec */ { u32 v = 0x8da2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf63a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf641: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf648: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf64b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf64e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cf651: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cf654: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cf657: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cf65a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005cf65d: mov eax, ecx */ r_eax = r_ecx;
    /* 005cf65f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cf662: mov dword ptr [eax], 0xb0cf28 */ W32((u32)(r_eax), 0xb0cf28u);
    /* 005cf668: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf66f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cf674u); f_008171e8();
    /* 005cf674: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cf677: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf679: jne 0x5cf68b */ if (!fZ) goto L_005cf68b;
L_005cf67b:; BB(0x005cf67b);
    /* 005cf67b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf67e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf685: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf687: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf688: ret 4 */ FN_RET(0x005cf630); r_esp += 8; return;
L_005cf68b:; BB(0x005cf68b);
    /* 005cf68b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf68e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf68f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cf694u); f_005c2f74();
    /* 005cf694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf695: jmp 0x5cf67b */ goto L_005cf67b;
}

void f_005cf698(void) /* sub_5CF698 */
{
    FN_ENTER(0x005cf698);
    /* 005cf698: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf699: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cf69b: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf69e: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5cf6a3u); f_005c57ac();
    /* 005cf6a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf6a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf6a6: je 0x5cf6e8 */ if (fZ) goto L_005cf6e8;
L_005cf6a8:; BB(0x005cf6a8);
    /* 005cf6a8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cf6ac: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005cf6b1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005cf6b3: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005cf6b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cf6b9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cf6bcu); call_ind(t); }
    /* 005cf6bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf6be: je 0x5cf6e6 */ if (fZ) goto L_005cf6e6;
L_005cf6c0:; BB(0x005cf6c0);
    /* 005cf6c0: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 005cf6c3: fsub dword ptr [0x92bfd4] */ ST(0) = ST(0) - R_F32((u32)(0x92bfd4u));
    /* 005cf6c9: fcom dword ptr [0x92bfd8] */ fx_compare(ST(0), R_F32((u32)(0x92bfd8u))); 
    /* 005cf6cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cf6d1: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 005cf6d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cf6d5: ja 0x5cf6e6 */ if ((!fC&&!fZ)) goto L_005cf6e6;
L_005cf6d7:; BB(0x005cf6d7);
    /* 005cf6d7: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cf6db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf6e0: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005cf6e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf6e5: ret  */ FN_RET(0x005cf698); r_esp += 4; return;
L_005cf6e6:; BB(0x005cf6e6);
    /* 005cf6e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf6e7: ret  */ FN_RET(0x005cf698); r_esp += 4; return;
L_005cf6e8:; BB(0x005cf6e8);
    /* 005cf6e8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cf6ec: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf6f1: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005cf6f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf6f6: ret  */ FN_RET(0x005cf698); r_esp += 4; return;
}

void f_005cf6f8(void) /* sub_5CF6F8 */
{
    FN_ENTER(0x005cf6f8);
    /* 005cf6f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf6f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005cf6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005cf6fd: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5cf702u); f_008173b4();
    /* 005cf702: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf704: jne 0x5cf708 */ if (!fZ) goto L_005cf708;
L_005cf706:; BB(0x005cf706);
    /* 005cf706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf707: ret  */ FN_RET(0x005cf6f8); r_esp += 4; return;
L_005cf708:; BB(0x005cf708);
    /* 005cf708: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf70b: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5cf710u); f_005c57ac();
    /* 005cf710: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf713: je 0x5cf706 */ if (fZ) goto L_005cf706;
L_005cf715:; BB(0x005cf715);
    /* 005cf715: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 005cf718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf71a: je 0x5cf7d9 */ if (fZ) goto L_005cf7d9;
L_005cf720:; BB(0x005cf720);
    /* 005cf720: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005cf725: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005cf72b: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005cf730: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 005cf736: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cf739: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005cf73e: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 005cf743: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 005cf748: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 005cf74d: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 005cf752: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 005cf757: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 005cf75c: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 005cf75f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf760: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5cf765u); f_0082d710();
    /* 005cf765: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf768: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5cf76du); f_0081a9b8();
    /* 005cf76d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf770: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5cf775u); f_0082dbac();
    /* 005cf775: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5cf77au); f_0082d7b0();
    /* 005cf77a: lea ecx, [ebp + 0x30] */ r_ecx = (u32)(r_ebp+0x30u);
    /* 005cf77d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5cf782u); f_0082d838();
    /* 005cf782: lea ecx, [ebp + 0x44] */ r_ecx = (u32)(r_ebp+0x44u);
    /* 005cf785: mov edx, 1 */ r_edx = 0x1u;
    /* 005cf78a: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5cf78fu); f_00830df8();
    /* 005cf78f: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 005cf792: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5cf797u); f_00831758();
    /* 005cf797: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5cf79cu); f_0082da80();
    /* 005cf79c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5cf7a1u); f_0082dab0();
    /* 005cf7a1: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005cf7a6: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005cf7ac: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005cf7b2: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 005cf7b8: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005cf7bd: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005cf7c2: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005cf7c8: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005cf7ce: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 005cf7d4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_005cf7d9:; BB(0x005cf7d9);
    /* 005cf7d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf7da: ret  */ FN_RET(0x005cf6f8); r_esp += 4; return;
}

void f_005cf7dc(void) /* sub_5CF7DC */
{
    FN_ENTER(0x005cf7dc);
    /* 005cf7dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7de: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cf7e0: movzx eax, word ptr [ebx + 0x50] */ r_eax = (u32)R16((u32)(r_ebx+0x50u));
    /* 005cf7e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7e5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5cf7eau); f_007b4d18();
    /* 005cf7ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf7eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf7ed: je 0x5cf82b */ if (fZ) goto L_005cf82b;
L_005cf7ef:; BB(0x005cf7ef);
    /* 005cf7ef: mov esi, dword ptr [ebx + 0x54] */ r_esi = R32((u32)(r_ebx+0x54u));
    /* 005cf7f2: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005cf7f8: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005cf7fb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf7fd: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf7ff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf801: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf803: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf805: mov esi, dword ptr [edx + ecx*4 + 0x1c] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005cf809: mov dword ptr [ebx + 0x30], esi */ W32((u32)(r_ebx+0x30u), r_esi);
    /* 005cf80c: mov esi, dword ptr [edx + ecx*4 + 0x20] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cf810: mov dword ptr [ebx + 0x34], esi */ W32((u32)(r_ebx+0x34u), r_esi);
    /* 005cf813: mov edx, dword ptr [edx + ecx*4 + 0x24] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x24u));
    /* 005cf817: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 005cf81a: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 005cf81d: add eax, dword ptr [ebx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cf820: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 005cf823: mov eax, 1 */ r_eax = 0x1u;
    /* 005cf828: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf829: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cf82a: ret  */ FN_RET(0x005cf7dc); r_esp += 4; return;
L_005cf82b:; BB(0x005cf82b);
    /* 005cf82b: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cf82f: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005cf835: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 005cf839: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf83b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cf83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cf83d: ret  */ FN_RET(0x005cf7dc); r_esp += 4; return;
}

void f_005cf840(void) /* sub_5CF840 */
{
    FN_ENTER(0x005cf840);
    /* 005cf840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf841: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf845: push 0x8da314 */ { u32 v = 0x8da314u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf858: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf85b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf85e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cf861: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cf864: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cf867: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 005cf86b: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cf870: je 0x5cf8db */ if (fZ) goto L_005cf8db;
L_005cf872:; BB(0x005cf872);
    /* 005cf872: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cf875: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf877: je 0x5cf8db */ if (fZ) goto L_005cf8db;
L_005cf879:; BB(0x005cf879);
    /* 005cf879: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cf880: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf882: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cf887u); f_005caba4();
    /* 005cf887: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cf88a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf88d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cf890: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf892: je 0x5cf8ec */ if (fZ) goto L_005cf8ec;
L_005cf894:; BB(0x005cf894);
    /* 005cf894: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cf89b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cf8a2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf8a5: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 005cf8a9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cf8ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf8af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8b1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf8b4: call 0x5cf8f4 */ r_esp -= 4; W32(r_esp, 0x5cf8b9u); f_005cf8f4();
    /* 005cf8b9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cf8c0:; BB(0x005cf8c0);
    /* 005cf8c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf8c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf8c5: je 0x5cf8db */ if (fZ) goto L_005cf8db;
L_005cf8c7:; BB(0x005cf8c7);
    /* 005cf8c7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cf8ca: mov ebx, eax */ r_ebx = r_eax;
    /* 005cf8cc: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 005cf8d2: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005cf8d5: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005cf8d8: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_005cf8db:; BB(0x005cf8db);
    /* 005cf8db: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf8de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf8e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf8e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf8ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf8eb: ret  */ FN_RET(0x005cf840); r_esp += 4; return;
L_005cf8ec:; BB(0x005cf8ec);
    /* 005cf8ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cf8ee: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cf8f1: jmp 0x5cf8c0 */ goto L_005cf8c0;
}

void f_005cf8f4(void) /* sub_5CF8F4 */
{
    FN_ENTER(0x005cf8f4);
    /* 005cf8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf8f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8f9: push 0x8da330 */ { u32 v = 0x8da330u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cf90c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf90f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cf912: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005cf915: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005cf918: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005cf91b: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 005cf91f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf922: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005cf925: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf928: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cf92b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cf92e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cf931: call 0x5cf9d0 */ r_esp -= 4; W32(r_esp, 0x5cf936u); f_005cf9d0();
    /* 005cf936: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cf93d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cf940: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf943: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf946: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf947: mov word ptr [ecx + 0x50], bx */ W16((u32)(r_ecx+0x50u), (u16)r_ebx);
    /* 005cf94b: mov dword ptr [ecx], 0xb0cf3c */ W32((u32)(r_ecx), 0xb0cf3cu);
    /* 005cf951: mov eax, dword ptr [0x9c2734] */ r_eax = R32((u32)(0x9c2734u));
    /* 005cf956: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005cf959: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 005cf95c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5cf961u); f_007b4d18();
    /* 005cf961: mov edx, eax */ r_edx = r_eax;
    /* 005cf963: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf966: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cf969: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf96b: je 0x5cf9b2 */ if (fZ) goto L_005cf9b2;
L_005cf96d:; BB(0x005cf96d);
    /* 005cf96d: mov ebx, dword ptr [ecx + 0x54] */ r_ebx = R32((u32)(r_ecx+0x54u));
    /* 005cf970: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005cf973: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf975: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cf977: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf979: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf97b: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cf97d: mov ebx, dword ptr [edx + 0xa4] */ r_ebx = R32((u32)(r_edx+0xa4u));
    /* 005cf983: mov esi, dword ptr [ebx + eax*4 + 0x1c] */ r_esi = R32((u32)(r_ebx+r_eax*4+0x1cu));
    /* 005cf987: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 005cf98a: mov edi, dword ptr [ebx + eax*4 + 0x20] */ r_edi = R32((u32)(r_ebx+r_eax*4+0x20u));
    /* 005cf98e: mov esi, dword ptr [ecx + 0x48] */ r_esi = R32((u32)(r_ecx+0x48u));
    /* 005cf991: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 005cf994: mov ebx, dword ptr [ebx + eax*4 + 0x24] */ r_ebx = R32((u32)(r_ebx+r_eax*4+0x24u));
    /* 005cf998: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 005cf99b: mov ebx, dword ptr [ecx + 0x44] */ r_ebx = R32((u32)(r_ecx+0x44u));
    /* 005cf99e: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 005cf9a1: mov ebx, dword ptr [ecx + 0x4c] */ r_ebx = R32((u32)(r_ecx+0x4cu));
    /* 005cf9a4: mov dword ptr [ecx + 0x5c], esi */ W32((u32)(r_ecx+0x5cu), r_esi);
    /* 005cf9a7: mov dword ptr [ecx + 0x60], ebx */ W32((u32)(r_ecx+0x60u), r_ebx);
    /* 005cf9aa: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 005cf9ad: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cf9af: mov dword ptr [ecx + 0x5c], esi */ W32((u32)(r_ecx+0x5cu), r_esi);
L_005cf9b2:; BB(0x005cf9b2);
    /* 005cf9b2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cf9b5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf9b8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cf9bb: mov eax, ecx */ r_eax = r_ecx;
    /* 005cf9bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf9c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf9c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf9c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf9ca: ret 0x10 */ FN_RET(0x005cf8f4); r_esp += 20; return;
}

void f_005cf9d0(void) /* sub_5CF9D0 */
{
    FN_ENTER(0x005cf9d0);
    /* 005cf9d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9d2: mov esi, ecx */ r_esi = r_ecx;
    /* 005cf9d4: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 005cf9d8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cf9dc: mov ecx, esi */ r_ecx = r_esi;
    /* 005cf9de: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cf9e3u); f_008193cc();
    /* 005cf9e3: mov dword ptr [esi], 0xb0cf28 */ W32((u32)(r_esi), 0xb0cf28u);
    /* 005cf9e9: mov edx, dword ptr [0x9c2730] */ r_edx = R32((u32)(0x9c2730u));
    /* 005cf9ef: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 005cf9f2: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 005cf9f8: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 005cf9fb: mov ebp, dword ptr [ebp + 0x60] */ r_ebp = R32((u32)(r_ebp+0x60u));
    /* 005cf9fe: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 005cfa05: mov dword ptr [esi + 0x48], ebp */ W32((u32)(r_esi+0x48u), r_ebp);
    /* 005cfa08: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 005cfa0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfa11: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 005cfa14: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 005cfa17: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 005cfa1e: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005cfa21: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 005cfa24: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005cfa28: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 005cfa2f: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfa34: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005cfa38: mov eax, esi */ r_eax = r_esi;
    /* 005cfa3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfa3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cfa3c: ret 8 */ FN_RET(0x005cf9d0); r_esp += 12; return;
}

void f_005cfa40(void) /* sub_5CFA40 */
{
    FN_ENTER(0x005cfa40);
    /* 005cfa40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa41: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfa43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa45: push 0x8da358 */ { u32 v = 0x8da358u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cfa50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cfa58: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfa5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cfa5e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005cfa61: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005cfa64: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005cfa67: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfa6a: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5cfa6fu); f_005c5528();
    /* 005cfa6f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cfa72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfa75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfa77: je 0x5cfb5a */ if (fZ) goto L_005cfb5a;
L_005cfa7d:; BB(0x005cfa7d);
    /* 005cfa7d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfa80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfa82: je 0x5cfb5a */ if (fZ) goto L_005cfb5a;
L_005cfa88:; BB(0x005cfa88);
    /* 005cfa88: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfa8b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cfa8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfa8f: je 0x5cfb5a */ if (fZ) goto L_005cfb5a;
L_005cfa95:; BB(0x005cfa95);
    /* 005cfa95: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 005cfa99: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cfa9c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cfaa1: je 0x5cfb5a */ if (fZ) goto L_005cfb5a;
L_005cfaa7:; BB(0x005cfaa7);
    /* 005cfaa7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005cfaae: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfab0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cfab5u); f_005caba4();
    /* 005cfab5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cfab8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfabb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005cfabe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfac0: je 0x5cfb71 */ if (fZ) goto L_005cfb71;
L_005cfac6:; BB(0x005cfac6);
    /* 005cfac6: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005cfacd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cfad4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfad7: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfada: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cfadd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfae0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cfae3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfae5: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfaeb: call 0x5cf8f4 */ r_esp -= 4; W32(r_esp, 0x5cfaf0u); f_005cf8f4();
    /* 005cfaf0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005cfaf7:; BB(0x005cfaf7);
    /* 005cfaf7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cfafe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cfb01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfb03: je 0x5cfb25 */ if (fZ) goto L_005cfb25;
L_005cfb05:; BB(0x005cfb05);
    /* 005cfb05: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfb08: mov esi, eax */ r_esi = r_eax;
    /* 005cfb0a: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 005cfb10: mov ebx, dword ptr [esi + 0x44] */ r_ebx = R32((u32)(r_esi+0x44u));
    /* 005cfb13: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005cfb16: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005cfb19: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005cfb1f: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 005cfb22: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
L_005cfb25:; BB(0x005cfb25);
    /* 005cfb25: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfb28: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb2c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005cfb2e: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb33: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005cfb36: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 005cfb3c: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005cfb3f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfb41: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005cfb43: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfb45: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfb47: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005cfb49: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfb4b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfb4d: lea edi, [ebx + esi + 0x1c] */ r_edi = (u32)(r_ebx+r_esi+0x1cu);
    /* 005cfb51: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb52: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5cfb57u); f_0050a984();
    /* 005cfb57: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005cfb5a:; BB(0x005cfb5a);
    /* 005cfb5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cfb5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cfb60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfb63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cfb6d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfb6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfb70: ret  */ FN_RET(0x005cfa40); r_esp += 4; return;
L_005cfb71:; BB(0x005cfb71);
    /* 005cfb71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfb73: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cfb76: jmp 0x5cfaf7 */ goto L_005cfaf7;
}

void f_005cfb7c(void) /* sub_5CFB7C */
{
    FN_ENTER(0x005cfb7c);
    /* 005cfb7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb7d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfb7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb81: push 0x8da380 */ { u32 v = 0x8da380u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cfb8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cfb94: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfb97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cfb9a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005cfb9d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005cfba0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005cfba3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfba6: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5cfbabu); f_005c5528();
    /* 005cfbab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cfbae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfbb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfbb3: je 0x5cfc8a */ if (fZ) goto L_005cfc8a;
L_005cfbb9:; BB(0x005cfbb9);
    /* 005cfbb9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfbbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfbbe: je 0x5cfc8a */ if (fZ) goto L_005cfc8a;
L_005cfbc4:; BB(0x005cfbc4);
    /* 005cfbc4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfbc7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cfbc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfbcb: je 0x5cfc8a */ if (fZ) goto L_005cfc8a;
L_005cfbd1:; BB(0x005cfbd1);
    /* 005cfbd1: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 005cfbd5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cfbd8: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cfbdd: je 0x5cfc8a */ if (fZ) goto L_005cfc8a;
L_005cfbe3:; BB(0x005cfbe3);
    /* 005cfbe3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005cfbea: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cfbf1u); f_005caba4();
    /* 005cfbf1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cfbf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfbf7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005cfbfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfbfc: je 0x5cfca1 */ if (fZ) goto L_005cfca1;
L_005cfc02:; BB(0x005cfc02);
    /* 005cfc02: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005cfc09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cfc10: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfc13: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfc16: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cfc19: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfc1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cfc1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc21: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfc27: call 0x5cf8f4 */ r_esp -= 4; W32(r_esp, 0x5cfc2cu); f_005cf8f4();
    /* 005cfc2c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005cfc33:; BB(0x005cfc33);
    /* 005cfc33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cfc3a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cfc3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfc3f: je 0x5cfc55 */ if (fZ) goto L_005cfc55;
L_005cfc41:; BB(0x005cfc41);
    /* 005cfc41: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfc44: mov ebx, eax */ r_ebx = r_eax;
    /* 005cfc46: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 005cfc4c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005cfc4f: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005cfc52: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_005cfc55:; BB(0x005cfc55);
    /* 005cfc55: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfc58: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc5c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005cfc5e: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc63: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005cfc66: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 005cfc6c: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005cfc6f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfc71: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005cfc73: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfc75: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfc77: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005cfc79: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfc7b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cfc7d: lea edi, [ebx + esi + 0x1c] */ r_edi = (u32)(r_ebx+r_esi+0x1cu);
    /* 005cfc81: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc82: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5cfc87u); f_0050a984();
    /* 005cfc87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005cfc8a:; BB(0x005cfc8a);
    /* 005cfc8a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cfc8d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cfc90: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfc93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cfc9d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfc9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfca0: ret  */ FN_RET(0x005cfb7c); r_esp += 4; return;
L_005cfca1:; BB(0x005cfca1);
    /* 005cfca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfca3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cfca6: jmp 0x5cfc33 */ goto L_005cfc33;
}

void f_005cfca8(void) /* sub_5CFCA8 */
{
    FN_ENTER(0x005cfca8);
    /* 005cfca8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfca9: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfcab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcad: push 0x8da3a8 */ { u32 v = 0x8da3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cfcb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cfcc0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfcc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cfcc6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cfcc9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cfccc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cfccf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cfcd2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cfcd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfcd7: je 0x5cfd79 */ if (fZ) goto L_005cfd79;
L_005cfcdd:; BB(0x005cfcdd);
    /* 005cfcdd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfcdf: je 0x5cfd79 */ if (fZ) goto L_005cfd79;
L_005cfce5:; BB(0x005cfce5);
    /* 005cfce5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cfce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfcea: je 0x5cfd79 */ if (fZ) goto L_005cfd79;
L_005cfcf0:; BB(0x005cfcf0);
    /* 005cfcf0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cfcf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfcf5: je 0x5cfd79 */ if (fZ) goto L_005cfd79;
L_005cfcfb:; BB(0x005cfcfb);
    /* 005cfcfb: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 005cfcfe: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005cfd01: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005cfd03: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005cfd06: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 005cfd09: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005cfd0c: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 005cfd0f: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005cfd12: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5cfd17u); f_0082f9c4();
    /* 005cfd17: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cfd1e: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd20: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cfd25u); f_005caba4();
    /* 005cfd25: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cfd28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfd2b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cfd2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfd30: je 0x5cfd90 */ if (fZ) goto L_005cfd90;
L_005cfd32:; BB(0x005cfd32);
    /* 005cfd32: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cfd39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cfd40: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005cfd43: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005cfd46: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005cfd49: mov ecx, eax */ r_ecx = r_eax;
    /* 005cfd4b: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005cfd4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd52: call 0x5cfd98 */ r_esp -= 4; W32(r_esp, 0x5cfd57u); f_005cfd98();
    /* 005cfd57: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cfd5e:; BB(0x005cfd5e);
    /* 005cfd5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfd61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cfd63: je 0x5cfd79 */ if (fZ) goto L_005cfd79;
L_005cfd65:; BB(0x005cfd65);
    /* 005cfd65: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cfd68: mov ebx, eax */ r_ebx = r_eax;
    /* 005cfd6a: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 005cfd70: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005cfd73: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005cfd76: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_005cfd79:; BB(0x005cfd79);
    /* 005cfd79: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfd7c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cfd7f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cfd82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfd85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cfd8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfd8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfd8f: ret  */ FN_RET(0x005cfca8); r_esp += 4; return;
L_005cfd90:; BB(0x005cfd90);
    /* 005cfd90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfd92: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cfd95: jmp 0x5cfd5e */ goto L_005cfd5e;
}

void f_005cfd98(void) /* sub_5CFD98 */
{
    FN_ENTER(0x005cfd98);
    /* 005cfd98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd99: mov ebx, esp */ r_ebx = r_esp;
    /* 005cfd9b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005cfd9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd9f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cfda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfda1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfda4: mov edi, ecx */ r_edi = r_ecx;
    /* 005cfda6: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfda9: mov ecx, edi */ r_ecx = r_edi;
    /* 005cfdab: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 005cfdae: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfdb1: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 005cfdb4: call 0x5cf9d0 */ r_esp -= 4; W32(r_esp, 0x5cfdb9u); f_005cf9d0();
    /* 005cfdb9: mov dword ptr [edi], 0xb0cf50 */ W32((u32)(r_edi), 0xb0cf50u);
    /* 005cfdbf: mov eax, dword ptr [0x9c2738] */ r_eax = R32((u32)(0x9c2738u));
    /* 005cfdc4: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 005cfdc7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005cfdca: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005cfdcd: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005cfdd0: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 005cfdd3: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 005cfdd6: mov dword ptr [edi + 0x38], ebp */ W32((u32)(r_edi+0x38u), r_ebp);
    /* 005cfdd9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5cfddeu); f_008587a5();
    /* 005cfdde: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005cfde1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005cfde4: fdiv dword ptr [0x92bfcc] */ ST(0) = ST(0) / R_F32((u32)(0x92bfccu));
    /* 005cfdea: fadd dword ptr [edi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30u));
    /* 005cfded: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 005cfdf0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5cfdf5u); f_008587a5();
    /* 005cfdf5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005cfdf9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005cfdfd: fdiv dword ptr [0x92bfcc] */ ST(0) = ST(0) / R_F32((u32)(0x92bfccu));
    /* 005cfe03: fadd dword ptr [edi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34u));
    /* 005cfe06: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 005cfe09: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5cfe0eu); f_008587a5();
    /* 005cfe0e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005cfe12: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005cfe16: fdiv dword ptr [0x92bfcc] */ ST(0) = ST(0) / R_F32((u32)(0x92bfccu));
    /* 005cfe1c: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 005cfe1f: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 005cfe22: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 005cfe24: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 005cfe27: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005cfe29: fmul qword ptr [0x92bfc0] */ ST(0) = ST(0) * R_F64((u32)(0x92bfc0u));
    /* 005cfe2f: fdiv qword ptr [0x92bfb8] */ ST(0) = ST(0) / R_F64((u32)(0x92bfb8u));
    /* 005cfe35: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005cfe39: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005cfe3e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cfe43: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005cfe47: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005cfe4b: fistp dword ptr [edi + 0x48] */ W32((u32)(r_edi+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cfe4e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005cfe52: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 005cfe55: fcomp dword ptr [0x92bfc8] */ fx_compare(ST(0), R_F32((u32)(0x92bfc8u))); FPOP();
    /* 005cfe5b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cfe5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cfe5e: je 0x5cfead */ if (fZ) goto L_005cfead;
L_005cfe60:; BB(0x005cfe60);
    /* 005cfe60: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 005cfe62: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005cfe64: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 005cfe67: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005cfe69: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005cfe6b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe6c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cfe6f: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5cfe74u); f_0082dc9c();
    /* 005cfe74: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 005cfe77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005cfe79: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005cfe7b: fmul qword ptr [0x92bfc0] */ ST(0) = ST(0) * R_F64((u32)(0x92bfc0u));
    /* 005cfe81: fdiv qword ptr [0x92bfb8] */ ST(0) = ST(0) / R_F64((u32)(0x92bfb8u));
    /* 005cfe87: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005cfe8b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005cfe90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cfe95: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005cfe99: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005cfe9d: fistp dword ptr [edi + 0x44] */ W32((u32)(r_edi+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cfea0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005cfea4: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
    /* 005cfeab: jmp 0x5cfeb5 */ goto L_005cfeb5;
L_005cfead:; BB(0x005cfead);
    /* 005cfead: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfeaf: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 005cfeb2: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
L_005cfeb5:; BB(0x005cfeb5);
    /* 005cfeb5: mov eax, edi */ r_eax = r_edi;
    /* 005cfeb7: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cfeba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cfebc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cfebd: mov esp, ebx */ r_esp = r_ebx;
    /* 005cfebf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cfec0: ret 0x10 */ FN_RET(0x005cfd98); r_esp += 20; return;
}

void f_005cfec4(void) /* sub_5CFEC4 */
{
    FN_ENTER(0x005cfec4);
    /* 005cfec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfec5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfec7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfec9: push 0x8da3d0 */ { u32 v = 0x8da3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfece: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cfed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfed5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cfedc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfedf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cfee2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005cfee5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005cfee8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005cfeeb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cfeee: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5cfef3u); f_005c5528();
    /* 005cfef3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cfef6: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005cfefd: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfeff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cff04u); f_005caba4();
    /* 005cff04: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cff07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cff0a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005cff0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cff0f: je 0x5cffae */ if (fZ) goto L_005cffae;
L_005cff15:; BB(0x005cff15);
    /* 005cff15: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005cff1c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cff23: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cff26: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cff29: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cff2c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cff2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cff30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cff31: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cff37: call 0x5cfd98 */ r_esp -= 4; W32(r_esp, 0x5cff3cu); f_005cfd98();
    /* 005cff3c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005cff43:; BB(0x005cff43);
    /* 005cff43: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cff4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cff4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cff4f: je 0x5cff71 */ if (fZ) goto L_005cff71;
L_005cff51:; BB(0x005cff51);
    /* 005cff51: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cff54: mov esi, eax */ r_esi = r_eax;
    /* 005cff56: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 005cff5c: mov ebx, dword ptr [esi + 0x44] */ r_ebx = R32((u32)(r_esi+0x44u));
    /* 005cff5f: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005cff62: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005cff65: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005cff6b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 005cff6e: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
L_005cff71:; BB(0x005cff71);
    /* 005cff71: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cff74: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 005cff77: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cff79: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005cff7b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cff7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff80: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005cff83: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005cff86: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff8b: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 005cff8e: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005cff91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cff92: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5cff97u); f_0050a984();
    /* 005cff97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cff9a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cff9d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cffa0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cffa3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cffaa: mov esp, ebp */ r_esp = r_ebp;
    /* 005cffac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cffad: ret  */ FN_RET(0x005cfec4); r_esp += 4; return;
L_005cffae:; BB(0x005cffae);
    /* 005cffae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cffb0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cffb3: jmp 0x5cff43 */ goto L_005cff43;
}

void f_005cffb8(void) /* sub_5CFFB8 */
{
    FN_ENTER(0x005cffb8);
    /* 005cffb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cffb9: mov ebp, esp */ r_ebp = r_esp;
    /* 005cffbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffbd: push 0x8da3f8 */ { u32 v = 0x8da3f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cffc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cffc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cffd0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cffd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cffd6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005cffd9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005cffdc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005cffdf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cffe2: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5cffe7u); f_005c5528();
    /* 005cffe7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cffea: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005cfff1: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfff3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cfff8u); f_005caba4();
    /* 005cfff8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cfffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfffe: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d0001: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0003: je 0x5d0096 */ if (fZ) goto L_005d0096;
L_005d0009:; BB(0x005d0009);
    /* 005d0009: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005d0010: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0017: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d001a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d001d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0020: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0024: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0025: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d002b: call 0x5cfd98 */ r_esp -= 4; W32(r_esp, 0x5d0030u); f_005cfd98();
    /* 005d0030: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005d0037:; BB(0x005d0037);
    /* 005d0037: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d003e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0043: je 0x5d0059 */ if (fZ) goto L_005d0059;
L_005d0045:; BB(0x005d0045);
    /* 005d0045: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0048: mov ebx, eax */ r_ebx = r_eax;
    /* 005d004a: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 005d0050: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005d0053: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005d0056: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_005d0059:; BB(0x005d0059);
    /* 005d0059: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d005c: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 005d005f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0061: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d0063: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d0066: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0068: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d006b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d006e: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0073: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 005d0076: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005d0079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d007a: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5d007fu); f_0050a984();
    /* 005d007f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d0082: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0085: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0095: ret  */ FN_RET(0x005cffb8); r_esp += 4; return;
L_005d0096:; BB(0x005d0096);
    /* 005d0096: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d0098: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d009b: jmp 0x5d0037 */ goto L_005d0037;
}

