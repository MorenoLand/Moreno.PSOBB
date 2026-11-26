#include "protos.h"

void f_0067a0b4(void) /* sub_67A0B4 */
{
    FN_ENTER(0x0067a0b4);
    /* 0067a0b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a0b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067a0b7: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 0067a0bd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a0bf: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67a0c4u); f_005b8610();
    /* 0067a0c4: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 0067a0ca: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a0cc: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0067a0cf: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x67a0d4u); f_005b8624();
    /* 0067a0d4: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0067a0d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a0d8: ret  */ FN_RET(0x0067a0b4); r_esp += 4; return;
}

void f_0067a0dc(void) /* sub_67A0DC */
{
    FN_ENTER(0x0067a0dc);
    /* 0067a0dc: mov dword ptr [0xa8ffc4], 0x3f800000 */ W32((u32)(0xa8ffc4u), 0x3f800000u);
    /* 0067a0e6: mov dword ptr [0xa8ffc8], 0x41000000 */ W32((u32)(0xa8ffc8u), 0x41000000u);
    /* 0067a0f0: mov dword ptr [0xa8ffcc], 0x3fc00000 */ W32((u32)(0xa8ffccu), 0x3fc00000u);
    /* 0067a0fa: ret  */ FN_RET(0x0067a0dc); r_esp += 4; return;
}

void f_0067a0fc(void) /* sub_67A0FC */
{
    FN_ENTER(0x0067a0fc);
    /* 0067a0fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a0fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a0ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a101: push 0x8e9f7c */ { u32 v = 0x8e9f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a10d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a114: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a11a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a11d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a120: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a123: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a128: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067a12f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67a134u); f_008581c5();
    /* 0067a134: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a135: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067a138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a13a: je 0x67a17b */ if (fZ) goto L_0067a17b;
L_0067a13c:; BB(0x0067a13c);
    /* 0067a13c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067a143: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a14a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a14d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067a14f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a152: push 0x9c9fa4 */ { u32 v = 0x9c9fa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a157: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a159: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67a15eu); f_005b7a84();
    /* 0067a15e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a161: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067a168:; BB(0x0067a168);
    /* 0067a168: mov dword ptr [0xa8ffd0], eax */ W32((u32)(0xa8ffd0u), r_eax);
    /* 0067a16d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a170: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a177: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a17a: ret  */ FN_RET(0x0067a0fc); r_esp += 4; return;
L_0067a17b:; BB(0x0067a17b);
    /* 0067a17b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a17d: jmp 0x67a168 */ goto L_0067a168;
}

void f_0067a180(void) /* sub_67A180 */
{
    FN_ENTER(0x0067a180);
    /* 0067a180: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a181: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067a183: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067a185: call 0x67a1a4 */ r_esp -= 4; W32(r_esp, 0x67a18au); f_0067a1a4();
    /* 0067a18a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067a18e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a190: jne 0x67a196 */ if (!fZ) goto L_0067a196;
L_0067a192:; BB(0x0067a192);
    /* 0067a192: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a193: ret 4 */ FN_RET(0x0067a180); r_esp += 8; return;
L_0067a196:; BB(0x0067a196);
    /* 0067a196: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a197: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67a19cu); f_005c2f74();
    /* 0067a19c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a19d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a19e: ret 4 */ FN_RET(0x0067a180); r_esp += 8; return;
}

void f_0067a1a4(void) /* sub_67A1A4 */
{
    FN_ENTER(0x0067a1a4);
    /* 0067a1a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a1a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a1a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a1a9: push 0x8e9f98 */ { u32 v = 0x8e9f98u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a1ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a1b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a1b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a1bc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a1bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a1c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a1c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a1c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a1cb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067a1ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a1d1: mov dword ptr [ecx], 0xb37e00 */ W32((u32)(r_ecx), 0xb37e00u);
    /* 0067a1d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a1de: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x67a1e3u); f_006131f4();
    /* 0067a1e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a1e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a1ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a1ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a1f0: ret  */ FN_RET(0x0067a1a4); r_esp += 4; return;
}

void f_0067a1f4(void) /* sub_67A1F4 */
{
    FN_ENTER(0x0067a1f4);
    /* 0067a1f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067a1f5: mov edi, ecx */ r_edi = r_ecx;
    /* 0067a1f7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0067a1f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0067a1fb: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a200: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a205: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x67a208u); call_ind(t); }
    /* 0067a208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a20a: jne 0x67a20e */ if (!fZ) goto L_0067a20e;
L_0067a20c:; BB(0x0067a20c);
    /* 0067a20c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067a20d: ret  */ FN_RET(0x0067a1f4); r_esp += 4; return;
L_0067a20e:; BB(0x0067a20e);
    /* 0067a20e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x67a213u); f_0082d7b0();
    /* 0067a213: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0067a216: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67a21bu); f_0082d838();
    /* 0067a21b: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0067a21e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x67a223u); f_00829cc8();
    /* 0067a223: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a229: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a22f: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a232: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x67a237u); f_0083046c();
    /* 0067a237: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067a23a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x67a23fu); f_0082da80();
    /* 0067a23f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067a240: ret  */ FN_RET(0x0067a1f4); r_esp += 4; return;
}

void f_0067a244(void) /* sub_67A244 */
{
    FN_ENTER(0x0067a244);
    /* 0067a244: mov ecx, dword ptr [0xa8ffdc] */ r_ecx = R32((u32)(0xa8ffdcu));
    /* 0067a24a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a24c: je 0x67a261 */ if (fZ) goto L_0067a261;
L_0067a24e:; BB(0x0067a24e);
    /* 0067a24e: je 0x67a257 */ if (fZ) goto L_0067a257;
L_0067a250:; BB(0x0067a250);
    /* 0067a250: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a252: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67a257u); f_004066a8();
L_0067a257:; BB(0x0067a257);
    /* 0067a257: mov dword ptr [0xa8ffdc], 0 */ W32((u32)(0xa8ffdcu), 0x0u);
L_0067a261:; BB(0x0067a261);
    /* 0067a261: ret  */ FN_RET(0x0067a244); r_esp += 4; return;
}

void f_0067a264(void)
{
    FN_ENTER(0x0067a264);
    /* 0067a264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a265: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a267: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a269: push 0x8e9fc0 */ { u32 v = 0x8e9fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a26e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a275: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a27c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a27f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a282: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a285: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a288: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a28b: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a290: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067a297: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67a29cu); f_005caba4();
    /* 0067a29c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a29d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067a2a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a2a2: je 0x67a2db */ if (fZ) goto L_0067a2db;
L_0067a2a4:; BB(0x0067a2a4);
    /* 0067a2a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067a2ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a2b2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a2b5: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a2bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a2be: call 0x67a2e0 */ r_esp -= 4; W32(r_esp, 0x67a2c3u); f_0067a2e0();
    /* 0067a2c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a2c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067a2cd:; BB(0x0067a2cd);
    /* 0067a2cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a2d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a2d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a2d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a2da: ret  */ FN_RET(0x0067a264); r_esp += 4; return;
L_0067a2db:; BB(0x0067a2db);
    /* 0067a2db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a2dd: jmp 0x67a2cd */ goto L_0067a2cd;
}

void f_0067a2e0(void) /* sub_67A2E0 */
{
    FN_ENTER(0x0067a2e0);
    /* 0067a2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a2e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a2e5: push 0x8e9fdc */ { u32 v = 0x8e9fdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a2ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a2f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a2f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a2fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a2fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0067a301: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0067a304: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067a307: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067a30a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a30d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067a310: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067a313: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x67a318u); f_006132e4();
    /* 0067a318: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a31f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a322: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067a325: mov dword ptr [ecx], 0xb37e00 */ W32((u32)(r_ecx), 0xb37e00u);
    /* 0067a32b: mov eax, dword ptr [0x9ca004] */ r_eax = R32((u32)(0x9ca004u));
    /* 0067a330: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a331: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067a334: call dword ptr [0xb37e14] */ { u32 t = R32((u32)(0xb37e14u)); r_esp -= 4; W32(r_esp, 0x67a33au); call_ind(t); }
    /* 0067a33a: mov ecx, dword ptr [0xa8ffdc] */ r_ecx = R32((u32)(0xa8ffdcu));
    /* 0067a340: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a342: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67a347u); f_005b8610();
    /* 0067a347: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a34a: mov ecx, dword ptr [0xa8ffdc] */ r_ecx = R32((u32)(0xa8ffdcu));
    /* 0067a350: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a352: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0067a355: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x67a35au); f_005b8624();
    /* 0067a35a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a35d: mov ecx, dword ptr [0xa8ffdc] */ r_ecx = R32((u32)(0xa8ffdcu));
    /* 0067a363: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a365: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0067a368: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x67a36du); f_005b8638();
    /* 0067a36d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a370: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0067a376: mov dword ptr [ecx + 0xb8], 0x3f800000 */ W32((u32)(r_ecx+0xb8u), 0x3f800000u);
    /* 0067a380: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0067a383: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0067a386: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0067a389: fadd dword ptr [edx*4 + 0x93b790] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93b790u));
    /* 0067a390: fadd dword ptr [0x93b798] */ ST(0) = ST(0) + R_F32((u32)(0x93b798u));
    /* 0067a396: mov eax, ecx */ r_eax = r_ecx;
    /* 0067a398: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0067a39e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a3a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a3a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a3aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a3ab: ret 8 */ FN_RET(0x0067a2e0); r_esp += 12; return;
}

void f_0067a3b0(void) /* sub_67A3B0 */
{
    FN_ENTER(0x0067a3b0);
    /* 0067a3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a3b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3b5: push 0x8ea004 */ { u32 v = 0x8ea004u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a3c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a3cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a3ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a3d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a3d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a3d7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067a3e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67a3e8u); f_008581c5();
    /* 0067a3e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a3e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067a3ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a3ee: je 0x67a42f */ if (fZ) goto L_0067a42f;
L_0067a3f0:; BB(0x0067a3f0);
    /* 0067a3f0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067a3f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a3fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a401: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067a403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a406: push 0x9c9ff4 */ { u32 v = 0x9c9ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a40b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a40d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67a412u); f_005b7a84();
    /* 0067a412: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a415: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067a41c:; BB(0x0067a41c);
    /* 0067a41c: mov dword ptr [0xa8ffdc], eax */ W32((u32)(0xa8ffdcu), r_eax);
    /* 0067a421: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a424: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a42b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a42d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a42e: ret  */ FN_RET(0x0067a3b0); r_esp += 4; return;
L_0067a42f:; BB(0x0067a42f);
    /* 0067a42f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a431: jmp 0x67a41c */ goto L_0067a41c;
}

void f_0067a434(void) /* sub_67A434 */
{
    FN_ENTER(0x0067a434);
    /* 0067a434: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a435: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067a437: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067a439: call 0x67a458 */ r_esp -= 4; W32(r_esp, 0x67a43eu); f_0067a458();
    /* 0067a43e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067a442: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a444: jne 0x67a44a */ if (!fZ) goto L_0067a44a;
L_0067a446:; BB(0x0067a446);
    /* 0067a446: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a447: ret 4 */ FN_RET(0x0067a434); r_esp += 8; return;
L_0067a44a:; BB(0x0067a44a);
    /* 0067a44a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a44b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67a450u); f_005c2f74();
    /* 0067a450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a451: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a452: ret 4 */ FN_RET(0x0067a434); r_esp += 8; return;
}

void f_0067a458(void) /* sub_67A458 */
{
    FN_ENTER(0x0067a458);
    /* 0067a458: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a459: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a45b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a45d: push 0x8ea020 */ { u32 v = 0x8ea020u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a462: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a469: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a470: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a473: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a476: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a479: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a47c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a47f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067a482: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a489: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a48c: mov dword ptr [eax], 0xb37ed0 */ W32((u32)(r_eax), 0xb37ed0u);
    /* 0067a492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a493: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x67a498u); f_007b4e84();
    /* 0067a498: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a499: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a49c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x67a4a1u); f_007b9c8c();
    /* 0067a4a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a4a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a4ab: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x67a4b0u); f_006131f4();
    /* 0067a4b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a4b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a4ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a4bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a4bd: ret  */ FN_RET(0x0067a458); r_esp += 4; return;
}

void f_0067a4c0(void) /* sub_67A4C0 */
{
    FN_ENTER(0x0067a4c0);
    /* 0067a4c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4c1: mov edi, ecx */ r_edi = r_ecx;
    /* 0067a4c3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0067a4c5: mov ecx, edi */ r_ecx = r_edi;
    /* 0067a4c7: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4cc: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4d1: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x67a4d4u); call_ind(t); }
    /* 0067a4d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a4d6: jne 0x67a4da */ if (!fZ) goto L_0067a4da;
L_0067a4d8:; BB(0x0067a4d8);
    /* 0067a4d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067a4d9: ret  */ FN_RET(0x0067a4c0); r_esp += 4; return;
L_0067a4da:; BB(0x0067a4da);
    /* 0067a4da: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x67a4dfu); f_0082d7b0();
    /* 0067a4df: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0067a4e2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67a4e7u); f_0082d838();
    /* 0067a4e7: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0067a4ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a4ec: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x67a4f1u); f_0082d8bc();
    /* 0067a4f1: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 0067a4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4f5: push dword ptr [edi + 0x6c] */ { u32 v = R32((u32)(r_edi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a4f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a4fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4fb: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x67a500u); f_0082fa0c();
    /* 0067a500: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0067a503: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x67a508u); f_00829cc8();
    /* 0067a508: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a50e: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a516: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a519: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x67a51eu); f_008304e0();
    /* 0067a51e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067a521: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x67a526u); f_0082da80();
    /* 0067a526: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067a527: ret  */ FN_RET(0x0067a4c0); r_esp += 4; return;
}

void f_0067a528(void) /* sub_67A528 */
{
    FN_ENTER(0x0067a528);
    /* 0067a528: mov ecx, dword ptr [0xa8ffe4] */ r_ecx = R32((u32)(0xa8ffe4u));
    /* 0067a52e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a530: je 0x67a545 */ if (fZ) goto L_0067a545;
L_0067a532:; BB(0x0067a532);
    /* 0067a532: je 0x67a53b */ if (fZ) goto L_0067a53b;
L_0067a534:; BB(0x0067a534);
    /* 0067a534: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a536: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67a53bu); f_004066a8();
L_0067a53b:; BB(0x0067a53b);
    /* 0067a53b: mov dword ptr [0xa8ffe4], 0 */ W32((u32)(0xa8ffe4u), 0x0u);
L_0067a545:; BB(0x0067a545);
    /* 0067a545: ret  */ FN_RET(0x0067a528); r_esp += 4; return;
}

void f_0067a548(void)
{
    FN_ENTER(0x0067a548);
    /* 0067a548: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a549: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a54b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a54d: push 0x8ea048 */ { u32 v = 0x8ea048u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a552: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a559: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a560: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a563: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a566: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a569: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a56c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a56f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a574: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067a57b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67a580u); f_005caba4();
    /* 0067a580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a581: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067a584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a586: je 0x67a5bf */ if (fZ) goto L_0067a5bf;
L_0067a588:; BB(0x0067a588);
    /* 0067a588: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067a58f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a596: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a599: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a59f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a5a2: call 0x67a5c4 */ r_esp -= 4; W32(r_esp, 0x67a5a7u); f_0067a5c4();
    /* 0067a5a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a5aa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067a5b1:; BB(0x0067a5b1);
    /* 0067a5b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a5b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a5bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a5bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a5be: ret  */ FN_RET(0x0067a548); r_esp += 4; return;
L_0067a5bf:; BB(0x0067a5bf);
    /* 0067a5bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a5c1: jmp 0x67a5b1 */ goto L_0067a5b1;
}

void f_0067a5c4(void) /* sub_67A5C4 */
{
    FN_ENTER(0x0067a5c4);
    /* 0067a5c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a5c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5c9: push 0x8ea064 */ { u32 v = 0x8ea064u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a5d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a5dc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a5df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a5e2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0067a5e5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0067a5e8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067a5eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067a5ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a5f1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0067a5f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067a5f7: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x67a5fcu); f_006132e4();
    /* 0067a5fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a603: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a606: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067a609: mov dword ptr [ecx], 0xb37ed0 */ W32((u32)(r_ecx), 0xb37ed0u);
    /* 0067a60f: mov eax, dword ptr [0x9ca02c] */ r_eax = R32((u32)(0x9ca02cu));
    /* 0067a614: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a615: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067a618: call dword ptr [0xb37ee4] */ { u32 t = R32((u32)(0xb37ee4u)); r_esp -= 4; W32(r_esp, 0x67a61eu); call_ind(t); }
    /* 0067a61e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a621: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a623: push 0x9ca030 */ { u32 v = 0x9ca030u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a628: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x67a62du); f_007b9a88();
    /* 0067a62d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a630: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x67a635u); f_007b4f54();
    /* 0067a635: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a638: mov ecx, dword ptr [0xa8ffe4] */ r_ecx = R32((u32)(0xa8ffe4u));
    /* 0067a63e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a640: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0067a646: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0067a649: fmul dword ptr [eax + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x68u));
    /* 0067a64c: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0067a64f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67a654u); f_005b8610();
    /* 0067a654: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a657: mov ecx, dword ptr [0xa8ffe4] */ r_ecx = R32((u32)(0xa8ffe4u));
    /* 0067a65d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a65f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0067a662: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x67a667u); f_005b8624();
    /* 0067a667: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a66a: mov ecx, dword ptr [0xa8ffe4] */ r_ecx = R32((u32)(0xa8ffe4u));
    /* 0067a670: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a672: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0067a675: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x67a67au); f_005b8638();
    /* 0067a67a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a67d: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0067a683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a685: je 0x67a6c3 */ if (fZ) goto L_0067a6c3;
L_0067a687:; BB(0x0067a687);
    /* 0067a687: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0067a68a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0067a68d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0067a690: fadd dword ptr [edx*4 + 0x93b7f0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93b7f0u));
    /* 0067a697: fadd dword ptr [0x93b7fc] */ ST(0) = ST(0) + R_F32((u32)(0x93b7fcu));
    /* 0067a69d: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0067a6a3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x67a6a8u); f_008587a5();
    /* 0067a6a8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a6ab: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067a6ae: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0067a6b1: fdiv dword ptr [0x93b7f8] */ ST(0) = ST(0) / R_F32((u32)(0x93b7f8u));
    /* 0067a6b7: fmul dword ptr [ecx + 0xb4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xb4u));
    /* 0067a6bd: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
L_0067a6c3:; BB(0x0067a6c3);
    /* 0067a6c3: mov eax, ecx */ r_eax = r_ecx;
    /* 0067a6c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a6c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a6cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a6d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a6d2: ret 8 */ FN_RET(0x0067a5c4); r_esp += 12; return;
}

void f_0067a6c0(void)
{
    FN_ENTER(0x0067a6c0);
    /* 0067a6c0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067a6c2: add byte ptr [ebx - 0xbb2743f], cl */ { u32 ad = (u32)(r_ebx+0xf44d8bc1u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0067a6c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a6cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a6d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a6d2: ret 8 */ FN_RET(0x0067a6c0); r_esp += 12; return;
}

void f_0067a6d8(void) /* sub_67A6D8 */
{
    FN_ENTER(0x0067a6d8);
    /* 0067a6d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a6db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6dd: push 0x8ea08c */ { u32 v = 0x8ea08cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a6e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a6f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a6f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a6f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a6f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a6fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a6ff: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a704: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067a70b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67a710u); f_008581c5();
    /* 0067a710: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a711: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067a714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a716: je 0x67a757 */ if (fZ) goto L_0067a757;
L_0067a718:; BB(0x0067a718);
    /* 0067a718: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067a71f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a726: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a729: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067a72b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a72d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a72e: push 0x9ca01c */ { u32 v = 0x9ca01cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a733: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a735: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67a73au); f_005b7a84();
    /* 0067a73a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a73d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067a744:; BB(0x0067a744);
    /* 0067a744: mov dword ptr [0xa8ffe4], eax */ W32((u32)(0xa8ffe4u), r_eax);
    /* 0067a749: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a74c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a753: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a756: ret  */ FN_RET(0x0067a6d8); r_esp += 4; return;
L_0067a757:; BB(0x0067a757);
    /* 0067a757: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a759: jmp 0x67a744 */ goto L_0067a744;
}

void f_0067a75c(void) /* sub_67A75C */
{
    FN_ENTER(0x0067a75c);
    /* 0067a75c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a75d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067a75f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067a761: call 0x67a780 */ r_esp -= 4; W32(r_esp, 0x67a766u); f_0067a780();
    /* 0067a766: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067a76a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a76c: jne 0x67a772 */ if (!fZ) goto L_0067a772;
L_0067a76e:; BB(0x0067a76e);
    /* 0067a76e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a76f: ret 4 */ FN_RET(0x0067a75c); r_esp += 8; return;
L_0067a772:; BB(0x0067a772);
    /* 0067a772: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a773: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67a778u); f_005c2f74();
    /* 0067a778: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a779: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a77a: ret 4 */ FN_RET(0x0067a75c); r_esp += 8; return;
}

void f_0067a780(void) /* sub_67A780 */
{
    FN_ENTER(0x0067a780);
    /* 0067a780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a781: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a783: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a785: push 0x8ea0a8 */ { u32 v = 0x8ea0a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a78a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a791: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067a798: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a79b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067a79e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067a7a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067a7a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067a7a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067a7aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a7b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a7b4: mov edx, dword ptr [ecx + 0x198] */ r_edx = R32((u32)(r_ecx+0x198u));
    /* 0067a7ba: mov dword ptr [ecx], 0xb37fc8 */ W32((u32)(r_ecx), 0xb37fc8u);
    /* 0067a7c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a7c2: je 0x67a7de */ if (fZ) goto L_0067a7de;
L_0067a7c4:; BB(0x0067a7c4);
    /* 0067a7c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a7c7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067a7cb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067a7d0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0067a7d4: mov dword ptr [ecx + 0x198], 0 */ W32((u32)(r_ecx+0x198u), 0x0u);
L_0067a7de:; BB(0x0067a7de);
    /* 0067a7de: call 0x67a808 */ r_esp -= 4; W32(r_esp, 0x67a7e3u); f_0067a808();
    /* 0067a7e3: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x67a7e8u); f_004d3250();
    /* 0067a7e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a7ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a7f2: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x67a7f7u); f_007ba1f0();
    /* 0067a7f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a7fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a801: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a804: ret  */ FN_RET(0x0067a780); r_esp += 4; return;
}

void f_0067a808(void) /* sub_67A808 */
{
    FN_ENTER(0x0067a808);
    /* 0067a808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a809: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0067a80b: mov ecx, dword ptr [ebp + 0x194] */ r_ecx = R32((u32)(r_ebp+0x194u));
    /* 0067a811: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067a813: je 0x67a826 */ if (fZ) goto L_0067a826;
L_0067a815:; BB(0x0067a815);
    /* 0067a815: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x67a81au); f_007127b0();
    /* 0067a81a: mov dword ptr [ebp + 0x194], 0 */ W32((u32)(r_ebp+0x194u), 0x0u);
    /* 0067a824: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a825: ret  */ FN_RET(0x0067a808); r_esp += 4; return;
L_0067a826:; BB(0x0067a826);
    /* 0067a826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a827: ret  */ FN_RET(0x0067a808); r_esp += 4; return;
}

void f_0067a828(void) /* sub_67A828 */
{
    FN_ENTER(0x0067a828);
    /* 0067a828: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a829: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a82c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067a82e: mov eax, dword ptr [ebx + 0x188] */ r_eax = R32((u32)(r_ebx+0x188u));
    /* 0067a834: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067a836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067a838: jle 0x67a88b */ if ((fZ||fS!=fO)) goto L_0067a88b;
L_0067a83a:; BB(0x0067a83a);
    /* 0067a83a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0067a83e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0067a841: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067a844: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a846: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a848: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a84a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a84c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a84e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a850: lea ecx, [ebx + ecx + 0xa8] */ r_ecx = (u32)(r_ebx+r_ecx+0xa8u);
    /* 0067a857: mov edi, edx */ r_edi = r_edx;
    /* 0067a859: mov esi, ecx */ r_esi = r_ecx;
L_0067a85b:; BB(0x0067a85b);
    /* 0067a85b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0067a85d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a85f: je 0x67a87a */ if (fZ) goto L_0067a87a;
L_0067a861:; BB(0x0067a861);
    /* 0067a861: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0067a865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a866: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67a86bu); f_0068d5a8();
    /* 0067a86b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a86c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a86e: je 0x67a95f */ if (fZ) goto L_0067a95f;
L_0067a874:; BB(0x0067a874);
    /* 0067a874: mov eax, dword ptr [ebx + 0x188] */ r_eax = R32((u32)(r_ebx+0x188u));
L_0067a87a:; BB(0x0067a87a);
    /* 0067a87a: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067a87d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067a880: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067a882: jl 0x67a85b */ if ((fS!=fO)) goto L_0067a85b;
L_0067a884:; BB(0x0067a884);
    /* 0067a884: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0067a888: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0067a88b:; BB(0x0067a88b);
    /* 0067a88b: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 0067a891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a893: jne 0x67a8a4 */ if (!fZ) goto L_0067a8a4;
L_0067a895:; BB(0x0067a895);
    /* 0067a895: mov dword ptr [ebx + 0xa4], 1 */ W32((u32)(r_ebx+0xa4u), 0x1u);
    /* 0067a89f: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067a8a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a8a3: ret  */ FN_RET(0x0067a828); r_esp += 4; return;
L_0067a8a4:; BB(0x0067a8a4);
    /* 0067a8a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a8a7: jne 0x67a906 */ if (!fZ) goto L_0067a906;
L_0067a8a9:; BB(0x0067a8a9);
    /* 0067a8a9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8ab: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x67a8b0u); f_004d31f4();
    /* 0067a8b0: mov eax, dword ptr [0xa8fff0] */ r_eax = R32((u32)(0xa8fff0u));
    /* 0067a8b5: mov edx, dword ptr [0xa8fff4] */ r_edx = R32((u32)(0xa8fff4u));
    /* 0067a8bb: mov ecx, dword ptr [0xa8fff8] */ r_ecx = R32((u32)(0xa8fff8u));
    /* 0067a8c1: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0067a8c5: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0067a8c9: mov dword ptr [esp + 0x28], 0x469c4000 */ W32((u32)(r_esp+0x28u), 0x469c4000u);
    /* 0067a8d1: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0067a8d9: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 0067a8dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0067a8e1: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 0067a8e9: mov dword ptr [esp + 0x20], 0x1999 */ W32((u32)(r_esp+0x20u), 0x1999u);
    /* 0067a8f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8f2: call 0x4d3374 */ r_esp -= 4; W32(r_esp, 0x67a8f7u); f_004d3374();
    /* 0067a8f7: mov dword ptr [ebx + 0xa4], 2 */ W32((u32)(r_ebx+0xa4u), 0x2u);
    /* 0067a901: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067a904: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a905: ret  */ FN_RET(0x0067a828); r_esp += 4; return;
L_0067a906:; BB(0x0067a906);
    /* 0067a906: fld dword ptr [0x93b8bc] */ FPUSH(R_F32((u32)(0x93b8bcu)));
    /* 0067a90c: fadd dword ptr [ebx + 0x190] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x190u));
    /* 0067a912: fcom dword ptr [0x93b8b8] */ fx_compare(ST(0), R_F32((u32)(0x93b8b8u))); 
    /* 0067a918: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067a91a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067a91b: jb 0x67a92c */ if (fC) goto L_0067a92c;
L_0067a91d:; BB(0x0067a91d);
    /* 0067a91d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067a91f: mov eax, 0x41880000 */ r_eax = 0x41880000u;
    /* 0067a924: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 0067a92a: jmp 0x67a932 */ goto L_0067a932;
L_0067a92c:; BB(0x0067a92c);
    /* 0067a92c: fstp dword ptr [ebx + 0x190] */ W_F32((u32)(r_ebx+0x190u), ST(0)); FPOP();
L_0067a932:; BB(0x0067a932);
    /* 0067a932: mov eax, dword ptr [ebx + 0x18c] */ r_eax = R32((u32)(r_ebx+0x18cu));
    /* 0067a938: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067a93b: mov dword ptr [ebx + 0x18c], eax */ W32((u32)(r_ebx+0x18cu), r_eax);
    /* 0067a941: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067a946: jl 0x67a95a */ if ((fS!=fO)) goto L_0067a95a;
L_0067a948:; BB(0x0067a948);
    /* 0067a948: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0067a94c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067a951: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0067a955: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067a958: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a959: ret  */ FN_RET(0x0067a828); r_esp += 4; return;
L_0067a95a:; BB(0x0067a95a);
    /* 0067a95a: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067a95d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067a95e: ret  */ FN_RET(0x0067a828); r_esp += 4; return;
L_0067a95f:; BB(0x0067a95f);
    /* 0067a95f: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 0067a965: mov eax, dword ptr [ebx + 0x188] */ r_eax = R32((u32)(r_ebx+0x188u));
    /* 0067a96b: jmp 0x67a87a */ goto L_0067a87a;
}

void f_0067a970(void) /* sub_67A970 */
{
    FN_ENTER(0x0067a970);
    /* 0067a970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a971: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a974: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067a976: movzx ecx, byte ptr [0xa8ffec] */ r_ecx = (u32)R8((u32)(0xa8ffecu));
    /* 0067a97d: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067a980: jne 0x67a9b6 */ if (!fZ) goto L_0067a9b6;
L_0067a982:; BB(0x0067a982);
    /* 0067a982: mov eax, dword ptr [0xa8fff0] */ r_eax = R32((u32)(0xa8fff0u));
    /* 0067a987: mov edx, dword ptr [0xa8fff4] */ r_edx = R32((u32)(0xa8fff4u));
    /* 0067a98d: fld dword ptr [0xa8fff8] */ FPUSH(R_F32((u32)(0xa8fff8u)));
    /* 0067a993: fadd dword ptr [0xa90008] */ ST(0) = ST(0) + R_F32((u32)(0xa90008u));
    /* 0067a999: fstp dword ptr [0xa90004] */ W_F32((u32)(0xa90004u), ST(0)); FPOP();
    /* 0067a99f: mov dword ptr [0xa8fffc], eax */ W32((u32)(0xa8fffcu), r_eax);
    /* 0067a9a4: or ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a9aa: mov dword ptr [0xa90000], edx */ W32((u32)(0xa90000u), r_edx);
    /* 0067a9b0: mov byte ptr [0xa8ffec], cl */ W8((u32)(0xa8ffecu), (u8)r_ecx);
L_0067a9b6:; BB(0x0067a9b6);
    /* 0067a9b6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x67a9bbu); f_0082dbac();
    /* 0067a9bb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x67a9c0u); f_0082d7b0();
    /* 0067a9c0: mov ecx, 0xa8fffc */ r_ecx = 0xa8fffcu;
    /* 0067a9c5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67a9cau); f_0082d838();
    /* 0067a9ca: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9cf: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9d4: push dword ptr [0x9ca560] */ { u32 v = R32((u32)(0x9ca560u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a9da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067a9dc: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x67a9e1u); f_0082fa0c();
    /* 0067a9e1: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 0067a9e7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x67a9ecu); f_00829cc8();
    /* 0067a9ec: push dword ptr [ebx + 0x190] */ { u32 v = R32((u32)(r_ebx+0x190u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a9f2: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a9f8: push dword ptr [ebx + 0x90] */ { u32 v = R32((u32)(r_ebx+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a9fe: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x67aa03u); f_0083046c();
    /* 0067aa03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067aa06: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x67aa0bu); f_0082da80();
    /* 0067aa0b: mov eax, dword ptr [ebx + 0x188] */ r_eax = R32((u32)(r_ebx+0x188u));
    /* 0067aa11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067aa13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067aa15: jle 0x67ab56 */ if ((fZ||fS!=fO)) goto L_0067ab56;
L_0067aa1b:; BB(0x0067aa1b);
    /* 0067aa1b: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0067aa1f: mov esi, ebx */ r_esi = r_ebx;
    /* 0067aa21: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0067aa25: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0067aa29: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067aa2c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa2e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa30: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa32: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa34: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa36: lea ecx, [ecx + ecx + 0xa8] */ r_ecx = (u32)(r_ecx+r_ecx+0xa8u);
    /* 0067aa3d: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa3f: mov ebp, edx */ r_ebp = r_edx;
    /* 0067aa41: mov ebx, ecx */ r_ebx = r_ecx;
L_0067aa43:; BB(0x0067aa43);
    /* 0067aa43: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0067aa45: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067aa47: je 0x67ab3c */ if (fZ) goto L_0067ab3c;
L_0067aa4d:; BB(0x0067aa4d);
    /* 0067aa4d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x67aa52u); f_0082d7b0();
    /* 0067aa52: mov ecx, 0xa8fffc */ r_ecx = 0xa8fffcu;
    /* 0067aa57: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67aa5cu); f_0082d838();
    /* 0067aa5c: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0067aa5f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67aa64u); f_0082d838();
    /* 0067aa64: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0067aa67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa69: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x67aa6eu); f_0082d8bc();
    /* 0067aa6e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0067aa71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa73: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067aa75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa76: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x67aa7bu); f_0082fa0c();
    /* 0067aa7b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa82: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0067aa86: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067aa89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa8a: call 0x451ee4 */ r_esp -= 4; W32(r_esp, 0x67aa8fu); f_00451ee4();
    /* 0067aa8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067aa92: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x67aa97u); f_0082da80();
    /* 0067aa97: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x67aa9cu); f_007a93d8();
    /* 0067aa9c: movzx eax, byte ptr [0xa8ffec] */ r_eax = (u32)R8((u32)(0xa8ffecu));
    /* 0067aaa3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067aaa5: jne 0x67aae1 */ if (!fZ) goto L_0067aae1;
L_0067aaa7:; BB(0x0067aaa7);
    /* 0067aaa7: fld dword ptr [0x93b8ac] */ FPUSH(R_F32((u32)(0x93b8acu)));
    /* 0067aaad: fld dword ptr [0x9ca55c] */ FPUSH(R_F32((u32)(0x9ca55cu)));
    /* 0067aab3: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0067aab5: fld dword ptr [0x93b8a8] */ FPUSH(R_F32((u32)(0x93b8a8u)));
    /* 0067aabb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067aabd: fst dword ptr [0x9ca540] */ W_F32((u32)(0x9ca540u), ST(0));
    /* 0067aac3: fstp dword ptr [0x9ca558] */ W_F32((u32)(0x9ca558u), ST(0)); FPOP();
    /* 0067aac9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067aacb: fst dword ptr [0x9ca548] */ W_F32((u32)(0x9ca548u), ST(0));
    /* 0067aad1: fstp dword ptr [0x9ca550] */ W_F32((u32)(0x9ca550u), ST(0)); FPOP();
    /* 0067aad7: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067aadc: mov byte ptr [0xa8ffec], al */ W8((u32)(0xa8ffecu), (u8)r_eax);
L_0067aae1:; BB(0x0067aae1);
    /* 0067aae1: lea edi, [ebx + 6] */ r_edi = (u32)(r_ebx+0x6u);
    /* 0067aae4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067aae5: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x67aaeau); f_007ac344();
    /* 0067aaea: mov edx, eax */ r_edx = r_eax;
    /* 0067aaec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067aaef: mov eax, dword ptr [ebp*8 + 0x9ca540] */ r_eax = R32((u32)(r_ebp*8+0x9ca540u));
    /* 0067aaf6: mov dword ptr [esp + 0xc], 0xffffffff */ W32((u32)(r_esp+0xcu), 0xffffffffu);
    /* 0067aafe: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0067ab00: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0067ab04: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0067ab08: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0067ab0b: fadd dword ptr [edx*4 + 0x93b880] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93b880u));
    /* 0067ab12: fsubr dword ptr [ebp*8 + 0x9ca53c] */ ST(0) = R_F32((u32)(r_ebp*8+0x9ca53cu)) - ST(0);
    /* 0067ab19: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ab1c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0067ab20: mov dword ptr [esp + 0x10], 0x3dcccccd */ W32((u32)(r_esp+0x10u), 0x3dcccccdu);
    /* 0067ab28: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0067ab2c: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x67ab31u); f_007ac150();
    /* 0067ab31: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x67ab36u); f_007a9318();
    /* 0067ab36: mov eax, dword ptr [esi + 0x188] */ r_eax = R32((u32)(r_esi+0x188u));
L_0067ab3c:; BB(0x0067ab3c);
    /* 0067ab3c: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ab3f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067ab42: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ab44: jl 0x67aa43 */ if ((fS!=fO)) goto L_0067aa43;
L_0067ab4a:; BB(0x0067ab4a);
    /* 0067ab4a: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0067ab4e: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0067ab52: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_0067ab56:; BB(0x0067ab56);
    /* 0067ab56: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x67ab5bu); f_0082dab0();
    /* 0067ab5b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067ab5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067ab5f: ret  */ FN_RET(0x0067a970); r_esp += 4; return;
}

void f_0067ab60(void) /* sub_67AB60 */
{
    FN_ENTER(0x0067ab60);
    /* 0067ab60: mov ecx, dword ptr [0xa90018] */ r_ecx = R32((u32)(0xa90018u));
    /* 0067ab66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067ab68: je 0x67ab7e */ if (fZ) goto L_0067ab7e;
L_0067ab6a:; BB(0x0067ab6a);
    /* 0067ab6a: je 0x67ab73 */ if (fZ) goto L_0067ab73;
L_0067ab6c:; BB(0x0067ab6c);
    /* 0067ab6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab6e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67ab73u); f_004066a8();
L_0067ab73:; BB(0x0067ab73);
    /* 0067ab73: mov dword ptr [0xa90018], 0 */ W32((u32)(0xa90018u), 0x0u);
    /* 0067ab7d: ret  */ FN_RET(0x0067ab60); r_esp += 4; return;
L_0067ab7e:; BB(0x0067ab7e);
    /* 0067ab7e: ret  */ FN_RET(0x0067ab60); r_esp += 4; return;
}

void f_0067ab80(void) /* sub_67AB80 */
{
    FN_ENTER(0x0067ab80);
    /* 0067ab80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab81: mov ebp, esp */ r_ebp = r_esp;
    /* 0067ab83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab85: push 0x8ea0d0 */ { u32 v = 0x8ea0d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067ab90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067ab98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067ab9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067ab9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067aba1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067aba4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067aba7: push 0x19c */ { u32 v = 0x19cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067abac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067abb3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67abb8u); f_005caba4();
    /* 0067abb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067abb9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067abbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067abbe: je 0x67abf1 */ if (fZ) goto L_0067abf1;
L_0067abc0:; BB(0x0067abc0);
    /* 0067abc0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067abc7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067abce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067abd1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067abd4: call 0x67abf8 */ r_esp -= 4; W32(r_esp, 0x67abd9u); f_0067abf8();
    /* 0067abd9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067abdc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067abe3:; BB(0x0067abe3);
    /* 0067abe3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067abe6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067abed: mov esp, ebp */ r_esp = r_ebp;
    /* 0067abef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067abf0: ret  */ FN_RET(0x0067ab80); r_esp += 4; return;
L_0067abf1:; BB(0x0067abf1);
    /* 0067abf1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067abf3: jmp 0x67abe3 */ goto L_0067abe3;
}

void f_0067abf8(void) /* sub_67ABF8 */
{
    FN_ENTER(0x0067abf8);
    /* 0067abf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067abf9: mov ebp, esp */ r_ebp = r_esp;
    /* 0067abfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067abfd: push 0x8ea0ec */ { u32 v = 0x8ea0ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067ac08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067ac10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067ac13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067ac16: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0067ac19: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0067ac1c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067ac1f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ac22: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067ac25: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x67ac2au); f_007ba278();
    /* 0067ac2a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067ac31: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ac34: mov dword ptr [edx], 0xb37fc8 */ W32((u32)(r_edx), 0xb37fc8u);
    /* 0067ac3a: mov eax, dword ptr [0x9ca538] */ r_eax = R32((u32)(0x9ca538u));
    /* 0067ac3f: mov dword ptr [edx + 0x198], 0 */ W32((u32)(r_edx+0x198u), 0x0u);
    /* 0067ac49: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0067ac4c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x67ac51u); f_00807ac0();
    /* 0067ac51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ac54: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 0067ac5a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ac5d: je 0x67acab */ if (fZ) goto L_0067acab;
L_0067ac5f:; BB(0x0067ac5f);
    /* 0067ac5f: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ac62: jne 0x67ac70 */ if (!fZ) goto L_0067ac70;
L_0067ac64:; BB(0x0067ac64);
    /* 0067ac64: mov dword ptr [ecx + 0x9c], 1 */ W32((u32)(r_ecx+0x9cu), 0x1u);
    /* 0067ac6e: jmp 0x67acb5 */ goto L_0067acb5;
L_0067ac70:; BB(0x0067ac70);
    /* 0067ac70: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ac73: jne 0x67ac81 */ if (!fZ) goto L_0067ac81;
L_0067ac75:; BB(0x0067ac75);
    /* 0067ac75: mov dword ptr [ecx + 0x9c], 2 */ W32((u32)(r_ecx+0x9cu), 0x2u);
    /* 0067ac7f: jmp 0x67acb5 */ goto L_0067acb5;
L_0067ac81:; BB(0x0067ac81);
    /* 0067ac81: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0067ac85: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067ac8b: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0067ac8f: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 0067ac99: mov eax, ecx */ r_eax = r_ecx;
    /* 0067ac9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067ac9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067aca5: mov esp, ebp */ r_esp = r_ebp;
    /* 0067aca7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067aca8: ret 4 */ FN_RET(0x0067abf8); r_esp += 8; return;
L_0067acab:; BB(0x0067acab);
    /* 0067acab: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
L_0067acb5:; BB(0x0067acb5);
    /* 0067acb5: mov ecx, dword ptr [0xa90018] */ r_ecx = R32((u32)(0xa90018u));
    /* 0067acbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067acbd: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67acc2u); f_005b8610();
    /* 0067acc2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067acc5: mov ecx, dword ptr [0xa90018] */ r_ecx = R32((u32)(0xa90018u));
    /* 0067accb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067accd: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 0067acd3: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x67acd8u); f_005b8624();
    /* 0067acd8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067acdb: mov ecx, dword ptr [0xa90018] */ r_ecx = R32((u32)(0xa90018u));
    /* 0067ace1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ace3: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0067ace9: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x67aceeu); f_005b8638();
    /* 0067acee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067acf1: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 0067acf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067acf9: mov dword ptr [edx + 0x188], eax */ W32((u32)(r_edx+0x188u), r_eax);
    /* 0067acff: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 0067ad05: mov word ptr [edx + 0xae], ax */ W16((u32)(r_edx+0xaeu), (u16)r_eax);
    /* 0067ad0c: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 0067ad12: mov word ptr [edx + 0xe6], ax */ W16((u32)(r_edx+0xe6u), (u16)r_eax);
    /* 0067ad19: mov dword ptr [edx + 0x118], eax */ W32((u32)(r_edx+0x118u), r_eax);
    /* 0067ad1f: mov word ptr [edx + 0x11e], ax */ W16((u32)(r_edx+0x11eu), (u16)r_eax);
    /* 0067ad26: mov dword ptr [edx + 0x150], eax */ W32((u32)(r_edx+0x150u), r_eax);
    /* 0067ad2c: mov word ptr [edx + 0x156], ax */ W16((u32)(r_edx+0x156u), (u16)r_eax);
    /* 0067ad33: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0067ad35:; BB(0x0067ad35);
    /* 0067ad35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad36: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ad3bu); f_0068d5a8();
    /* 0067ad3b: mov edi, eax */ r_edi = r_eax;
    /* 0067ad3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ad40: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ad42: je 0x67ae18 */ if (fZ) goto L_0067ae18;
L_0067ad48:; BB(0x0067ad48);
    /* 0067ad48: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ad4b: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0067ad51: cmp edx, dword ptr [ebx + 0xa0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ad57: jne 0x67ae18 */ if (!fZ) goto L_0067ae18;
L_0067ad5d:; BB(0x0067ad5d);
    /* 0067ad5d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad5f: mov edx, dword ptr [ebx + 0x188] */ r_edx = R32((u32)(r_ebx+0x188u));
    /* 0067ad65: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067ad68: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ad6a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ad6c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ad6e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0067ad71: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0067ad74: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067ad76: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067ad78: lea ecx, [ebx + edx + 0xae] */ r_ecx = (u32)(r_ebx+r_edx+0xaeu);
    /* 0067ad7f: mov dword ptr [ecx - 6], 1 */ W32((u32)(r_ecx+0xfffffffau), 0x1u);
    /* 0067ad86: mov word ptr [ecx - 2], si */ W16((u32)(r_ecx+0xfffffffeu), (u16)r_esi);
    /* 0067ad8a: lea edx, [edi + 0x980] */ r_edx = (u32)(r_edi+0x980u);
    /* 0067ad90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad92: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x67ad97u); f_00857dec();
    /* 0067ad97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ad9a: movsx edx, byte ptr [edi + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x961u));
    /* 0067ada1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ada4: mov eax, dword ptr [edi + 0x188] */ r_eax = R32((u32)(r_edi+0x188u));
    /* 0067adaa: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067adad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067adaf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067adb1: add ecx, dword ptr [eax*4 + 0x9ca070] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*4+0x9ca070u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067adb8: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 0067adbb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067adbd: lea edi, [eax + eax + 0x9ca100] */ r_edi = (u32)(r_eax+r_eax+0x9ca100u);
    /* 0067adc4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067adc7: mov dword ptr [ebx + eax*8 + 0xd0], edi */ W32((u32)(r_ebx+r_eax*8+0xd0u), r_edi);
    /* 0067adce: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0067add1: mov dword ptr [ebx + eax*8 + 0xd4], ecx */ W32((u32)(r_ebx+r_eax*8+0xd4u), r_ecx);
    /* 0067add8: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 0067addb: mov dword ptr [ebx + eax*8 + 0xd8], ecx */ W32((u32)(r_ebx+r_eax*8+0xd8u), r_ecx);
    /* 0067ade2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ade5: mov ecx, dword ptr [0xa90018] */ r_ecx = R32((u32)(0xa90018u));
    /* 0067adeb: mov eax, dword ptr [eax + 0x188] */ r_eax = R32((u32)(r_eax+0x188u));
    /* 0067adf1: add edx, dword ptr [eax*4 + 0x9ca060] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x9ca060u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067adf8: push dword ptr [edx*4 + 0x9ca4c0] */ { u32 v = R32((u32)(r_edx*4+0x9ca4c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067adff: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x67ae04u); f_005b8638();
    /* 0067ae04: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067ae07: mov dword ptr [ebx + edx*8 + 0xdc], eax */ W32((u32)(r_ebx+r_edx*8+0xdcu), r_eax);
    /* 0067ae0e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ae11: add dword ptr [eax + 0x188], 1 */ { u32 ad = (u32)(r_eax+0x188u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0067ae18:; BB(0x0067ae18);
    /* 0067ae18: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ae1b: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ae1e: jl 0x67ad35 */ if ((fS!=fO)) goto L_0067ad35;
L_0067ae24:; BB(0x0067ae24);
    /* 0067ae24: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ae27: mov dword ptr [eax + 0x190], 0xbe99999a */ W32((u32)(r_eax+0x190u), 0xbe99999au);
    /* 0067ae31: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x67ae36u); f_004d3250();
    /* 0067ae36: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ae39: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
    /* 0067ae3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ae41: jne 0x67ae50 */ if (!fZ) goto L_0067ae50;
L_0067ae43:; BB(0x0067ae43);
    /* 0067ae43: push 0x93ba88 */ { u32 v = 0x93ba88u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae48: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x67ae4du); f_00814afc();
    /* 0067ae4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ae4e: jmp 0x67ae6d */ goto L_0067ae6d;
L_0067ae50:; BB(0x0067ae50);
    /* 0067ae50: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ae53: jne 0x67ae62 */ if (!fZ) goto L_0067ae62;
L_0067ae55:; BB(0x0067ae55);
    /* 0067ae55: push 0x93bab0 */ { u32 v = 0x93bab0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae5a: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x67ae5fu); f_00814afc();
    /* 0067ae5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ae60: jmp 0x67ae6d */ goto L_0067ae6d;
L_0067ae62:; BB(0x0067ae62);
    /* 0067ae62: push 0x93ba98 */ { u32 v = 0x93ba98u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae67: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x67ae6cu); f_00814afc();
    /* 0067ae6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0067ae6d:; BB(0x0067ae6d);
    /* 0067ae6d: call 0x67c5b0 */ r_esp -= 4; W32(r_esp, 0x67ae72u); f_0067c5b0();
    /* 0067ae72: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ae78: call 0x67b544 */ r_esp -= 4; W32(r_esp, 0x67ae7du); f_0067b544();
    /* 0067ae7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ae7e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ae81: mov dword ptr [ecx + 0x198], eax */ W32((u32)(r_ecx+0x198u), r_eax);
    /* 0067ae87: call 0x67aeb8 */ r_esp -= 4; W32(r_esp, 0x67ae8cu); f_0067aeb8();
    /* 0067ae8c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ae8f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067ae92: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067ae95: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067ae98: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067ae9a: mov dword ptr [eax + 0x18c], edx */ W32((u32)(r_eax+0x18cu), r_edx);
    /* 0067aea0: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 0067aea6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067aea9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067aeb0: mov esp, ebp */ r_esp = r_ebp;
    /* 0067aeb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067aeb3: ret 4 */ FN_RET(0x0067abf8); r_esp += 8; return;
}

void f_0067aeb8(void) /* sub_67AEB8 */
{
    FN_ENTER(0x0067aeb8);
    /* 0067aeb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067aeb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0067aebb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067aebd: push 0x8ea114 */ { u32 v = 0x8ea114u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aec2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067aec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067aec9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067aed0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067aed3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067aed6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0067aed9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0067aedc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0067aedf: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 0067aee4: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0067aee7: mov dword ptr [ecx + 0x194], 0 */ W32((u32)(r_ecx+0x194u), 0x0u);
    /* 0067aef1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067aef3: je 0x67af0b */ if (fZ) goto L_0067af0b;
L_0067aef5:; BB(0x0067aef5);
    /* 0067aef5: call 0x4da1ac */ r_esp -= 4; W32(r_esp, 0x67aefau); f_004da1ac();
    /* 0067aefa: mov ebx, eax */ r_ebx = r_eax;
    /* 0067aefc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067aefe: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x67af03u); f_004da158();
    /* 0067af03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067af04: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067af07: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067af09: je 0x67af1c */ if (fZ) goto L_0067af1c;
L_0067af0b:; BB(0x0067af0b);
    /* 0067af0b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067af0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067af11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067af18: mov esp, ebp */ r_esp = r_ebp;
    /* 0067af1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067af1b: ret  */ FN_RET(0x0067aeb8); r_esp += 4; return;
L_0067af1c:; BB(0x0067af1c);
    /* 0067af1c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0067af23: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0067af25: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67af2au); f_005caba4();
    /* 0067af2a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067af2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067af30: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067af33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067af35: je 0x67af84 */ if (fZ) goto L_0067af84;
L_0067af37:; BB(0x0067af37);
    /* 0067af37: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0067af3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067af45: call 0x4da4e8 */ r_esp -= 4; W32(r_esp, 0x67af4au); f_004da4e8();
    /* 0067af4a: mov ebx, eax */ r_ebx = r_eax;
    /* 0067af4c: call 0x4da6a0 */ r_esp -= 4; W32(r_esp, 0x67af51u); f_004da6a0();
    /* 0067af51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067af54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067af55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067af56: push 0xa49870 */ { u32 v = 0xa49870u; r_esp -= 4; W32(r_esp, v); }
    /* 0067af5b: call 0x713220 */ r_esp -= 4; W32(r_esp, 0x67af60u); f_00713220();
    /* 0067af60: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0067af67:; BB(0x0067af67);
    /* 0067af67: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067af6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067af6d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067af70: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
    /* 0067af76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067af79: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067af80: mov esp, ebp */ r_esp = r_ebp;
    /* 0067af82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067af83: ret  */ FN_RET(0x0067aeb8); r_esp += 4; return;
L_0067af84:; BB(0x0067af84);
    /* 0067af84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067af86: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067af89: jmp 0x67af67 */ goto L_0067af67;
}

void f_0067afcc(void) /* sub_67AFCC */
{
    FN_ENTER(0x0067afcc);
    /* 0067afcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067afcd: mov ebp, esp */ r_ebp = r_esp;
    /* 0067afcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067afd1: push 0x8ea13c */ { u32 v = 0x8ea13cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067afd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067afdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067afdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067afe4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067afe7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067afea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067afed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067aff0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067aff3: mov eax, dword ptr [0xa90018] */ r_eax = R32((u32)(0xa90018u));
    /* 0067aff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067affa: je 0x67b00a */ if (fZ) goto L_0067b00a;
L_0067affc:; BB(0x0067affc);
    /* 0067affc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067afff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067b006: mov esp, ebp */ r_esp = r_ebp;
    /* 0067b008: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b009: ret  */ FN_RET(0x0067afcc); r_esp += 4; return;
L_0067b00a:; BB(0x0067b00a);
    /* 0067b00a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067b011: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b016: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67b01bu); f_008581c5();
    /* 0067b01b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b01c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067b01f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b021: je 0x67b062 */ if (fZ) goto L_0067b062;
L_0067b023:; BB(0x0067b023);
    /* 0067b023: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067b02a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067b031: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b034: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067b036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b039: push 0x9ca528 */ { u32 v = 0x9ca528u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b03e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b040: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67b045u); f_005b7a84();
    /* 0067b045: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b048: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067b04f:; BB(0x0067b04f);
    /* 0067b04f: mov dword ptr [0xa90018], eax */ W32((u32)(0xa90018u), r_eax);
    /* 0067b054: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067b057: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067b05e: mov esp, ebp */ r_esp = r_ebp;
    /* 0067b060: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b061: ret  */ FN_RET(0x0067afcc); r_esp += 4; return;
L_0067b062:; BB(0x0067b062);
    /* 0067b062: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067b064: jmp 0x67b04f */ goto L_0067b04f;
}

