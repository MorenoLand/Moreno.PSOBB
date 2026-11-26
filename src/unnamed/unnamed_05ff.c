#include "protos.h"

void f_005ff010(void) /* sub_5FF010 */
{
    FN_ENTER(0x005ff010);
    /* 005ff010: mov dword ptr [0xa8e248], 0x3f800000 */ W32((u32)(0xa8e248u), 0x3f800000u);
    /* 005ff01a: mov dword ptr [0xa8e24c], 0x41000000 */ W32((u32)(0xa8e24cu), 0x41000000u);
    /* 005ff024: mov dword ptr [0xa8e250], 0x3fc00000 */ W32((u32)(0xa8e250u), 0x3fc00000u);
    /* 005ff02e: ret  */ FN_RET(0x005ff010); r_esp += 4; return;
}

void f_005ff030(void) /* sub_5FF030 */
{
    FN_ENTER(0x005ff030);
    /* 005ff030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff031: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff035: push 0x8de684 */ { u32 v = 0x8de684u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff03a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff041: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff048: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff04b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff04e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ff051: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ff054: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ff057: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ff05a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ff05d: mov eax, ecx */ r_eax = r_ecx;
    /* 005ff05f: mov dword ptr [eax], 0xb1b900 */ W32((u32)(r_eax), 0xb1b900u);
    /* 005ff065: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff06c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ff071u); f_005e61c8();
    /* 005ff071: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff074: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff076: jne 0x5ff088 */ if (!fZ) goto L_005ff088;
L_005ff078:; BB(0x005ff078);
    /* 005ff078: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff07b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff082: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff084: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff085: ret 4 */ FN_RET(0x005ff030); r_esp += 8; return;
L_005ff088:; BB(0x005ff088);
    /* 005ff088: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff08b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff08c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ff091u); f_005c2f74();
    /* 005ff091: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff092: jmp 0x5ff078 */ goto L_005ff078;
}

void f_005ff094(void) /* sub_5FF094 */
{
    FN_ENTER(0x005ff094);
    /* 005ff094: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff096: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff09c: push 0xfffff8e4 */ { u32 v = 0xfffff8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0a2: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5ff0a7u); f_005dd6f8();
    /* 005ff0a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ff0aa: ret  */ FN_RET(0x005ff094); r_esp += 4; return;
}

void f_005ff0ac(void) /* sub_5FF0AC */
{
    FN_ENTER(0x005ff0ac);
    /* 005ff0ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ff0af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff0b1: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ff0b6u); f_005e90b0();
    /* 005ff0b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff0b8: je 0x5ff0f3 */ if (fZ) goto L_005ff0f3;
L_005ff0ba:; BB(0x005ff0ba);
    /* 005ff0ba: mov edx, dword ptr [ebx + 0x1e4] */ r_edx = R32((u32)(r_ebx+0x1e4u));
    /* 005ff0c0: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005ff0c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff0c8: jne 0x5ff0db */ if (!fZ) goto L_005ff0db;
L_005ff0ca:; BB(0x005ff0ca);
    /* 005ff0ca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0cc: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005ff0cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0d1: call 0x6e2634 */ r_esp -= 4; W32(r_esp, 0x5ff0d6u); f_006e2634();
    /* 005ff0d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff0d9: jmp 0x5ff0ea */ goto L_005ff0ea;
L_005ff0db:; BB(0x005ff0db);
    /* 005ff0db: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0dd: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005ff0e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0e2: call 0x6f0984 */ r_esp -= 4; W32(r_esp, 0x5ff0e7u); f_006f0984();
    /* 005ff0e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ff0ea:; BB(0x005ff0ea);
    /* 005ff0ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff0ec: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5ff0f1u); f_005e7480();
    /* 005ff0f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff0f2: ret  */ FN_RET(0x005ff0ac); r_esp += 4; return;
L_005ff0f3:; BB(0x005ff0f3);
    /* 005ff0f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff0f5: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ff0fau); f_005e90e8();
    /* 005ff0fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff0fb: ret  */ FN_RET(0x005ff0ac); r_esp += 4; return;
}

void f_005ff0fc(void) /* sub_5FF0FC */
{
    FN_ENTER(0x005ff0fc);
    /* 005ff0fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff0ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff101: push 0x8de6ac */ { u32 v = 0x8de6acu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff10d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff114: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff11a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff11d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff120: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff123: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff128: je 0x5ff17f */ if (fZ) goto L_005ff17f;
L_005ff12a:; BB(0x005ff12a);
    /* 005ff12a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ff131: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff136: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ff13bu); f_005caba4();
    /* 005ff13b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff13c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ff13f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff141: je 0x5ff17b */ if (fZ) goto L_005ff17b;
L_005ff143:; BB(0x005ff143);
    /* 005ff143: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ff14a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff151: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff154: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff158: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff15e: call 0x5ff190 */ r_esp -= 4; W32(r_esp, 0x5ff163u); f_005ff190();
    /* 005ff163: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff166: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ff16d:; BB(0x005ff16d);
    /* 005ff16d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff170: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff177: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff17a: ret  */ FN_RET(0x005ff0fc); r_esp += 4; return;
L_005ff17b:; BB(0x005ff17b);
    /* 005ff17b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff17d: jmp 0x5ff16d */ goto L_005ff16d;
L_005ff17f:; BB(0x005ff17f);
    /* 005ff17f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff181: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff184: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff18b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff18d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff18e: ret  */ FN_RET(0x005ff0fc); r_esp += 4; return;
}

void f_005ff190(void) /* sub_5FF190 */
{
    FN_ENTER(0x005ff190);
    /* 005ff190: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff191: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ff193: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff197: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff19b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff19d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ff1a2u); f_005e959c();
    /* 005ff1a2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ff1a8: mov dword ptr [ebx], 0xb1b900 */ W32((u32)(r_ebx), 0xb1b900u);
    /* 005ff1ae: or edx, 0x622 */ {  u32 a = r_edx; u32 b = 0x622u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff1b4: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ff1ba: mov dword ptr [ebx + 0x240], 0x2aaa */ W32((u32)(r_ebx+0x240u), 0x2aaau);
    /* 005ff1c4: mov eax, ebx */ r_eax = r_ebx;
    /* 005ff1c6: mov dword ptr [ebx + 0x1e8], 2 */ W32((u32)(r_ebx+0x1e8u), 0x2u);
    /* 005ff1d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff1d1: ret 8 */ FN_RET(0x005ff190); r_esp += 12; return;
}

void f_005ff1d4(void) /* sub_5FF1D4 */
{
    FN_ENTER(0x005ff1d4);
    /* 005ff1d4: mov dword ptr [0xa8e254], 0x3f800000 */ W32((u32)(0xa8e254u), 0x3f800000u);
    /* 005ff1de: mov dword ptr [0xa8e258], 0x41000000 */ W32((u32)(0xa8e258u), 0x41000000u);
    /* 005ff1e8: mov dword ptr [0xa8e25c], 0x3fc00000 */ W32((u32)(0xa8e25cu), 0x3fc00000u);
    /* 005ff1f2: ret  */ FN_RET(0x005ff1d4); r_esp += 4; return;
}

void f_005ff1f4(void) /* sub_5FF1F4 */
{
    FN_ENTER(0x005ff1f4);
    /* 005ff1f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff1f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ff1f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff1f9: call 0x5ff218 */ r_esp -= 4; W32(r_esp, 0x5ff1feu); f_005ff218();
    /* 005ff1fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ff202: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff204: jne 0x5ff20a */ if (!fZ) goto L_005ff20a;
L_005ff206:; BB(0x005ff206);
    /* 005ff206: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff207: ret 4 */ FN_RET(0x005ff1f4); r_esp += 8; return;
L_005ff20a:; BB(0x005ff20a);
    /* 005ff20a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff20b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ff210u); f_005c2f74();
    /* 005ff210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff211: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff212: ret 4 */ FN_RET(0x005ff1f4); r_esp += 8; return;
}

void f_005ff218(void) /* sub_5FF218 */
{
    FN_ENTER(0x005ff218);
    /* 005ff218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff219: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff21b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff21d: push 0x8de6c8 */ { u32 v = 0x8de6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff222: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff229: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff230: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff233: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff236: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff239: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff23c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff23f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ff242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff245: mov dword ptr [ecx], 0xb1ba60 */ W32((u32)(r_ecx), 0xb1ba60u);
    /* 005ff24b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff252: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ff257u); f_005e61c8();
    /* 005ff257: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff25a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff261: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff264: ret  */ FN_RET(0x005ff218); r_esp += 4; return;
}

void f_005ff268(void) /* sub_5FF268 */
{
    FN_ENTER(0x005ff268);
    /* 005ff268: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ff269: mov esi, ecx */ r_esi = r_ecx;
    /* 005ff26b: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ff270: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff273: jne 0x5ff289 */ if (!fZ) goto L_005ff289;
L_005ff275:; BB(0x005ff275);
    /* 005ff275: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ff27au); f_005c34a0();
    /* 005ff27a: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005ff280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff282: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ff287u); f_0082d8bc();
    /* 005ff287: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff288: ret  */ FN_RET(0x005ff268); r_esp += 4; return;
L_005ff289:; BB(0x005ff289);
    /* 005ff289: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ff28c: jne 0x5ff2a2 */ if (!fZ) goto L_005ff2a2;
L_005ff28e:; BB(0x005ff28e);
    /* 005ff28e: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ff293u); f_005c34a0();
    /* 005ff293: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005ff299: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ff29b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff29d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ff2a2u); f_0082d8bc();
L_005ff2a2:; BB(0x005ff2a2);
    /* 005ff2a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff2a3: ret  */ FN_RET(0x005ff268); r_esp += 4; return;
}

void f_005ff2a4(void) /* sub_5FF2A4 */
{
    FN_ENTER(0x005ff2a4);
    /* 005ff2a4: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005ff2aa: add eax, 0xccc */ {  u32 a = r_eax; u32 b = 0xcccu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ff2af: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005ff2b5: ret  */ FN_RET(0x005ff2a4); r_esp += 4; return;
}

void f_005ff2b8(void) /* sub_5FF2B8 */
{
    FN_ENTER(0x005ff2b8);
    /* 005ff2b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff2bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2bd: push 0x8de6f0 */ { u32 v = 0x8de6f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff2c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff2d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff2d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff2d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff2d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff2dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff2df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff2e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff2e4: je 0x5ff33b */ if (fZ) goto L_005ff33b;
L_005ff2e6:; BB(0x005ff2e6);
    /* 005ff2e6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ff2ed: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2f2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ff2f7u); f_005caba4();
    /* 005ff2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff2f8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ff2fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff2fd: je 0x5ff337 */ if (fZ) goto L_005ff337;
L_005ff2ff:; BB(0x005ff2ff);
    /* 005ff2ff: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ff306: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff30d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff310: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff313: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff314: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff31a: call 0x5ff34c */ r_esp -= 4; W32(r_esp, 0x5ff31fu); f_005ff34c();
    /* 005ff31f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff322: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ff329:; BB(0x005ff329);
    /* 005ff329: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff32c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff333: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff336: ret  */ FN_RET(0x005ff2b8); r_esp += 4; return;
L_005ff337:; BB(0x005ff337);
    /* 005ff337: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff339: jmp 0x5ff329 */ goto L_005ff329;
L_005ff33b:; BB(0x005ff33b);
    /* 005ff33b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff33d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff340: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff347: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff34a: ret  */ FN_RET(0x005ff2b8); r_esp += 4; return;
}

void f_005ff34c(void) /* sub_5FF34C */
{
    FN_ENTER(0x005ff34c);
    /* 005ff34c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff34d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ff34f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff353: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff357: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ff359: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ff35eu); f_005e959c();
    /* 005ff35e: mov dword ptr [ebp], 0xb1ba60 */ W32((u32)(r_ebp), 0xb1ba60u);
    /* 005ff365: mov eax, ebp */ r_eax = r_ebp;
    /* 005ff367: mov dword ptr [ebp + 0x240], 0 */ W32((u32)(r_ebp+0x240u), 0x0u);
    /* 005ff371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff372: ret 8 */ FN_RET(0x005ff34c); r_esp += 12; return;
}

void f_005ff378(void) /* sub_5FF378 */
{
    FN_ENTER(0x005ff378);
    /* 005ff378: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff379: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ff37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff37d: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ff382u); f_005e7f6c();
    /* 005ff382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff384: jne 0x5ff399 */ if (!fZ) goto L_005ff399;
L_005ff386:; BB(0x005ff386);
    /* 005ff386: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff388: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff38a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff38b: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff391: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5ff396u); f_005cc3b0();
    /* 005ff396: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ff399:; BB(0x005ff399);
    /* 005ff399: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff39a: ret  */ FN_RET(0x005ff378); r_esp += 4; return;
}

void f_005ff39c(void) /* sub_5FF39C */
{
    FN_ENTER(0x005ff39c);
    /* 005ff39c: mov dword ptr [0xa8e260], 0x3f800000 */ W32((u32)(0xa8e260u), 0x3f800000u);
    /* 005ff3a6: mov dword ptr [0xa8e264], 0x41000000 */ W32((u32)(0xa8e264u), 0x41000000u);
    /* 005ff3b0: mov dword ptr [0xa8e268], 0x3fc00000 */ W32((u32)(0xa8e268u), 0x3fc00000u);
    /* 005ff3ba: ret  */ FN_RET(0x005ff39c); r_esp += 4; return;
}

void f_005ff3bc(void) /* sub_5FF3BC */
{
    FN_ENTER(0x005ff3bc);
    /* 005ff3bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff3bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff3bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff3c1: push 0x8de70c */ { u32 v = 0x8de70cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff3c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff3cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff3d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff3d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff3da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ff3dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ff3e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ff3e3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ff3e6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ff3e9: mov eax, ecx */ r_eax = r_ecx;
    /* 005ff3eb: mov dword ptr [eax], 0xb1bbc0 */ W32((u32)(r_eax), 0xb1bbc0u);
    /* 005ff3f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff3f8: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ff3fdu); f_005e61c8();
    /* 005ff3fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff400: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff402: jne 0x5ff414 */ if (!fZ) goto L_005ff414;
L_005ff404:; BB(0x005ff404);
    /* 005ff404: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff407: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff40e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff410: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff411: ret 4 */ FN_RET(0x005ff3bc); r_esp += 8; return;
L_005ff414:; BB(0x005ff414);
    /* 005ff414: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff418: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ff41du); f_005c2f74();
    /* 005ff41d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff41e: jmp 0x5ff404 */ goto L_005ff404;
}

void f_005ff420(void) /* sub_5FF420 */
{
    FN_ENTER(0x005ff420);
    /* 005ff420: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ff421: mov esi, ecx */ r_esi = r_ecx;
    /* 005ff423: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ff428: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff42b: je 0x5ff454 */ if (fZ) goto L_005ff454;
L_005ff42d:; BB(0x005ff42d);
    /* 005ff42d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff430: jne 0x5ff448 */ if (!fZ) goto L_005ff448;
L_005ff432:; BB(0x005ff432);
    /* 005ff432: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ff437u); f_005c34a0();
    /* 005ff437: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005ff43d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ff43f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff441: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5ff446u); f_00830c04();
    /* 005ff446: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff447: ret  */ FN_RET(0x005ff420); r_esp += 4; return;
L_005ff448:; BB(0x005ff448);
    /* 005ff448: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ff44b: jne 0x5ff466 */ if (!fZ) goto L_005ff466;
L_005ff44d:; BB(0x005ff44d);
    /* 005ff44d: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ff452u); f_005c34a0();
    /* 005ff452: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff453: ret  */ FN_RET(0x005ff420); r_esp += 4; return;
L_005ff454:; BB(0x005ff454);
    /* 005ff454: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ff459u); f_005c34a0();
    /* 005ff459: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005ff45f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff461: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5ff466u); f_00830c04();
L_005ff466:; BB(0x005ff466);
    /* 005ff466: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff467: ret  */ FN_RET(0x005ff420); r_esp += 4; return;
}

void f_005ff468(void) /* sub_5FF468 */
{
    FN_ENTER(0x005ff468);
    /* 005ff468: push 0xccc */ { u32 v = 0xcccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff46d: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff474: call 0x5dd6d0 */ r_esp -= 4; W32(r_esp, 0x5ff479u); f_005dd6d0();
    /* 005ff479: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ff47c: ret  */ FN_RET(0x005ff468); r_esp += 4; return;
}

void f_005ff480(void) /* sub_5FF480 */
{
    FN_ENTER(0x005ff480);
    /* 005ff480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff481: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff485: push 0x8de734 */ { u32 v = 0x8de734u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff48a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff491: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff498: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff49b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff49e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff4a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff4a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff4a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff4aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff4ac: je 0x5ff503 */ if (fZ) goto L_005ff503;
L_005ff4ae:; BB(0x005ff4ae);
    /* 005ff4ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ff4b5: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4ba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ff4bfu); f_005caba4();
    /* 005ff4bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff4c0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ff4c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff4c5: je 0x5ff4ff */ if (fZ) goto L_005ff4ff;
L_005ff4c7:; BB(0x005ff4c7);
    /* 005ff4c7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ff4ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff4d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff4d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff4db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4dc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff4e2: call 0x5ff514 */ r_esp -= 4; W32(r_esp, 0x5ff4e7u); f_005ff514();
    /* 005ff4e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff4ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ff4f1:; BB(0x005ff4f1);
    /* 005ff4f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff4f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff4fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff4fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff4fe: ret  */ FN_RET(0x005ff480); r_esp += 4; return;
L_005ff4ff:; BB(0x005ff4ff);
    /* 005ff4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff501: jmp 0x5ff4f1 */ goto L_005ff4f1;
L_005ff503:; BB(0x005ff503);
    /* 005ff503: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff505: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff508: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff50f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff511: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff512: ret  */ FN_RET(0x005ff480); r_esp += 4; return;
}

void f_005ff514(void) /* sub_5FF514 */
{
    FN_ENTER(0x005ff514);
    /* 005ff514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff515: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ff517: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff51b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff51f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ff521: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ff526u); f_005e959c();
    /* 005ff526: mov dword ptr [ebp], 0xb1bbc0 */ W32((u32)(r_ebp), 0xb1bbc0u);
    /* 005ff52d: mov eax, ebp */ r_eax = r_ebp;
    /* 005ff52f: mov dword ptr [ebp + 0x240], 0 */ W32((u32)(r_ebp+0x240u), 0x0u);
    /* 005ff539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff53a: ret 8 */ FN_RET(0x005ff514); r_esp += 12; return;
}

void f_005ff540(void) /* sub_5FF540 */
{
    FN_ENTER(0x005ff540);
    /* 005ff540: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff541: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ff543: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff545: call 0x5ff564 */ r_esp -= 4; W32(r_esp, 0x5ff54au); f_005ff564();
    /* 005ff54a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ff54e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff550: jne 0x5ff556 */ if (!fZ) goto L_005ff556;
L_005ff552:; BB(0x005ff552);
    /* 005ff552: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff553: ret 4 */ FN_RET(0x005ff540); r_esp += 8; return;
L_005ff556:; BB(0x005ff556);
    /* 005ff556: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff557: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ff55cu); f_005c2f74();
    /* 005ff55c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff55d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff55e: ret 4 */ FN_RET(0x005ff540); r_esp += 8; return;
}

void f_005ff564(void) /* sub_5FF564 */
{
    FN_ENTER(0x005ff564);
    /* 005ff564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff565: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff569: push 0x8de750 */ { u32 v = 0x8de750u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff56e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff57c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff57f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff582: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff585: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff588: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff58b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ff58e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff591: mov dword ptr [ecx], 0xb1bd40 */ W32((u32)(r_ecx), 0xb1bd40u);
    /* 005ff597: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff59e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ff5a3u); f_005e61c8();
    /* 005ff5a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff5a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff5ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff5af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff5b0: ret  */ FN_RET(0x005ff564); r_esp += 4; return;
}

void f_005ff5b4(void) /* sub_5FF5B4 */
{
    FN_ENTER(0x005ff5b4);
    /* 005ff5b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5b6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ff5b8: fld dword ptr [0x92e094] */ FPUSH(R_F32((u32)(0x92e094u)));
    /* 005ff5be: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 005ff5c3: fld dword ptr [ebp + 0x240] */ FPUSH(R_F32((u32)(r_ebp+0x240u)));
    /* 005ff5c9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ff5cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ff5cd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005ff5cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ff5d0: jae 0x5ff5ff */ if (!fC) goto L_005ff5ff;
L_005ff5d2:; BB(0x005ff5d2);
    /* 005ff5d2: fld dword ptr [0x92e090] */ FPUSH(R_F32((u32)(0x92e090u)));
    /* 005ff5d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005ff5da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ff5dc: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005ff5de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ff5e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ff5e1: ja 0x5ff5f7 */ if ((!fC&&!fZ)) goto L_005ff5f7;
L_005ff5e3:; BB(0x005ff5e3);
    /* 005ff5e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ff5e5: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005ff5ea: mov dword ptr [ebp + 0x240], eax */ W32((u32)(r_ebp+0x240u), r_eax);
    /* 005ff5f0: mov esi, 1 */ r_esi = 0x1u;
    /* 005ff5f5: jmp 0x5ff603 */ goto L_005ff603;
L_005ff5f7:; BB(0x005ff5f7);
    /* 005ff5f7: fstp dword ptr [ebp + 0x240] */ W_F32((u32)(r_ebp+0x240u), ST(0)); FPOP();
    /* 005ff5fd: jmp 0x5ff603 */ goto L_005ff603;
L_005ff5ff:; BB(0x005ff5ff);
    /* 005ff5ff: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005ff601: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005ff603:; BB(0x005ff603);
    /* 005ff603: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff604: push 0xbd23d70d */ { u32 v = 0xbd23d70du; r_esp -= 4; W32(r_esp, v); }
    /* 005ff609: lea eax, [ebp + 0x244] */ r_eax = (u32)(r_ebp+0x244u);
    /* 005ff60f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff610: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5ff615u); f_005dd728();
    /* 005ff615: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff61a: push 0x3e0f5c29 */ { u32 v = 0x3e0f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff61f: lea eax, [ebp + 0x248] */ r_eax = (u32)(r_ebp+0x248u);
    /* 005ff625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff626: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5ff62bu); f_005dd728();
    /* 005ff62b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff62e: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ff631: je 0x5ff636 */ if (fZ) goto L_005ff636;
L_005ff633:; BB(0x005ff633);
    /* 005ff633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff634: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff635: ret  */ FN_RET(0x005ff5b4); r_esp += 4; return;
L_005ff636:; BB(0x005ff636);
    /* 005ff636: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005ff63c: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ff63f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ff641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff642: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff643: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff644: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff646: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ff64bu); f_00814298();
    /* 005ff64b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ff64e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff64f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff650: ret  */ FN_RET(0x005ff5b4); r_esp += 4; return;
}

void f_005ff654(void) /* sub_5FF654 */
{
    FN_ENTER(0x005ff654);
    /* 005ff654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff655: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff657: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff659: push 0x8de778 */ { u32 v = 0x8de778u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff65e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff665: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff66c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff66f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff672: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005ff675: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005ff678: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005ff67b: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005ff681: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ff684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff686: je 0x5ff6db */ if (fZ) goto L_005ff6db;
L_005ff688:; BB(0x005ff688);
    /* 005ff688: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005ff68f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff691: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ff696u); f_005caba4();
    /* 005ff696: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ff699: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff69c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ff69f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff6a1: je 0x5ff6db */ if (fZ) goto L_005ff6db;
L_005ff6a3:; BB(0x005ff6a3);
    /* 005ff6a3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005ff6aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff6b1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff6b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005ff6b6: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6b8: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005ff6bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6c0: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff6c6: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5ff6cbu); f_005e5cac();
    /* 005ff6cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff6ce: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005ff6d4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005ff6db:; BB(0x005ff6db);
    /* 005ff6db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff6de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff6e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff6e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff6e8: ret  */ FN_RET(0x005ff654); r_esp += 4; return;
}

void f_005ff6ec(void) /* sub_5FF6EC */
{
    FN_ENTER(0x005ff6ec);
    /* 005ff6ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff6ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6f1: push 0x8de7a0 */ { u32 v = 0x8de7a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff704: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff707: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff70a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff70d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff710: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff713: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff718: je 0x5ff76f */ if (fZ) goto L_005ff76f;
L_005ff71a:; BB(0x005ff71a);
    /* 005ff71a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ff721: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff726: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ff72bu); f_005caba4();
    /* 005ff72b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff72c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ff72f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff731: je 0x5ff76b */ if (fZ) goto L_005ff76b;
L_005ff733:; BB(0x005ff733);
    /* 005ff733: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ff73a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff741: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff744: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff748: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff74e: call 0x5ff780 */ r_esp -= 4; W32(r_esp, 0x5ff753u); f_005ff780();
    /* 005ff753: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff756: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ff75d:; BB(0x005ff75d);
    /* 005ff75d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff760: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff767: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff769: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff76a: ret  */ FN_RET(0x005ff6ec); r_esp += 4; return;
L_005ff76b:; BB(0x005ff76b);
    /* 005ff76b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff76d: jmp 0x5ff75d */ goto L_005ff75d;
L_005ff76f:; BB(0x005ff76f);
    /* 005ff76f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff771: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff774: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff77b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff77d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff77e: ret  */ FN_RET(0x005ff6ec); r_esp += 4; return;
}

void f_005ff780(void) /* sub_5FF780 */
{
    FN_ENTER(0x005ff780);
    /* 005ff780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff781: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ff783: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff787: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff78b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ff78d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ff792u); f_005e959c();
    /* 005ff792: mov dword ptr [ebp], 0xb1bd40 */ W32((u32)(r_ebp), 0xb1bd40u);
    /* 005ff799: mov eax, ebp */ r_eax = r_ebp;
    /* 005ff79b: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005ff7a5: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005ff7af: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005ff7b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff7ba: ret 8 */ FN_RET(0x005ff780); r_esp += 12; return;
}

void f_005ff7c0(void) /* sub_5FF7C0 */
{
    FN_ENTER(0x005ff7c0);
    /* 005ff7c0: mov dword ptr [0xa8e26c], 0x3f800000 */ W32((u32)(0xa8e26cu), 0x3f800000u);
    /* 005ff7ca: mov dword ptr [0xa8e270], 0x41000000 */ W32((u32)(0xa8e270u), 0x41000000u);
    /* 005ff7d4: mov dword ptr [0xa8e274], 0x3fc00000 */ W32((u32)(0xa8e274u), 0x3fc00000u);
    /* 005ff7de: ret  */ FN_RET(0x005ff7c0); r_esp += 4; return;
}

void f_005ff7e0(void) /* sub_5FF7E0 */
{
    FN_ENTER(0x005ff7e0);
    /* 005ff7e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ff7e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff7e5: call 0x5ff804 */ r_esp -= 4; W32(r_esp, 0x5ff7eau); f_005ff804();
    /* 005ff7ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ff7ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff7f0: jne 0x5ff7f6 */ if (!fZ) goto L_005ff7f6;
L_005ff7f2:; BB(0x005ff7f2);
    /* 005ff7f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff7f3: ret 4 */ FN_RET(0x005ff7e0); r_esp += 8; return;
L_005ff7f6:; BB(0x005ff7f6);
    /* 005ff7f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ff7fcu); f_005c2f74();
    /* 005ff7fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff7fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff7fe: ret 4 */ FN_RET(0x005ff7e0); r_esp += 8; return;
}

void f_005ff804(void) /* sub_5FF804 */
{
    FN_ENTER(0x005ff804);
    /* 005ff804: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff805: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff807: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff809: push 0x8de7bc */ { u32 v = 0x8de7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff80e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff815: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff81c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff81f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff822: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff825: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff828: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff82b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ff82e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff831: mov dword ptr [ecx], 0xb1bea0 */ W32((u32)(r_ecx), 0xb1bea0u);
    /* 005ff837: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff83e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ff843u); f_005e61c8();
    /* 005ff843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff846: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff84d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff84f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff850: ret  */ FN_RET(0x005ff804); r_esp += 4; return;
}

void f_005ff854(void) /* sub_5FF854 */
{
    FN_ENTER(0x005ff854);
    /* 005ff854: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ff855: mov edi, ecx */ r_edi = r_ecx;
    /* 005ff857: mov eax, dword ptr [edi + 0x240] */ r_eax = R32((u32)(r_edi+0x240u));
    /* 005ff85d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff85f: je 0x5ff86b */ if (fZ) goto L_005ff86b;
L_005ff861:; BB(0x005ff861);
    /* 005ff861: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ff866: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ff869: je 0x5ff86d */ if (fZ) goto L_005ff86d;
L_005ff86b:; BB(0x005ff86b);
    /* 005ff86b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ff86c: ret  */ FN_RET(0x005ff854); r_esp += 4; return;
L_005ff86d:; BB(0x005ff86d);
    /* 005ff86d: mov ecx, edi */ r_ecx = r_edi;
    /* 005ff86f: call 0x5c346c */ r_esp -= 4; W32(r_esp, 0x5ff874u); f_005c346c();
    /* 005ff874: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff876: mov ecx, edi */ r_ecx = r_edi;
    /* 005ff878: call 0x5c34e8 */ r_esp -= 4; W32(r_esp, 0x5ff87du); f_005c34e8();
    /* 005ff87d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ff87e: ret  */ FN_RET(0x005ff854); r_esp += 4; return;
}

void f_005ff880(void) /* sub_5FF880 */
{
    FN_ENTER(0x005ff880);
    /* 005ff880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff881: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff885: push 0x8de7e4 */ { u32 v = 0x8de7e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff88a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff891: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff898: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff89b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff89e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff8a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff8a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff8a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff8ac: je 0x5ff903 */ if (fZ) goto L_005ff903;
L_005ff8ae:; BB(0x005ff8ae);
    /* 005ff8ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ff8b5: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff8ba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ff8bfu); f_005caba4();
    /* 005ff8bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff8c0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ff8c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff8c5: je 0x5ff8ff */ if (fZ) goto L_005ff8ff;
L_005ff8c7:; BB(0x005ff8c7);
    /* 005ff8c7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ff8ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff8d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff8d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff8db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff8dc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff8e2: call 0x5ff914 */ r_esp -= 4; W32(r_esp, 0x5ff8e7u); f_005ff914();
    /* 005ff8e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff8ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ff8f1:; BB(0x005ff8f1);
    /* 005ff8f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff8f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff8fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff8fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff8fe: ret  */ FN_RET(0x005ff880); r_esp += 4; return;
L_005ff8ff:; BB(0x005ff8ff);
    /* 005ff8ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff901: jmp 0x5ff8f1 */ goto L_005ff8f1;
L_005ff903:; BB(0x005ff903);
    /* 005ff903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff905: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff908: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff90f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff911: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff912: ret  */ FN_RET(0x005ff880); r_esp += 4; return;
}

void f_005ff914(void) /* sub_5FF914 */
{
    FN_ENTER(0x005ff914);
    /* 005ff914: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ff915: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff916: mov edi, ecx */ r_edi = r_ecx;
    /* 005ff918: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005ff91c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff91d: mov ecx, edi */ r_ecx = r_edi;
    /* 005ff91f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ff923: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ff928u); f_005e959c();
    /* 005ff928: mov dword ptr [edi], 0xb1bea0 */ W32((u32)(r_edi), 0xb1bea0u);
    /* 005ff92e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ff930: mov dword ptr [edi + 0x240], 0 */ W32((u32)(r_edi+0x240u), 0x0u);
    /* 005ff93a: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005ff93e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff941: jne 0x5ff95d */ if (!fZ) goto L_005ff95d;
L_005ff943:; BB(0x005ff943);
    /* 005ff943: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 005ff947: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff94a: jne 0x5ff973 */ if (!fZ) goto L_005ff973;
L_005ff94c:; BB(0x005ff94c);
    /* 005ff94c: mov dword ptr [edi + 0x240], 1 */ W32((u32)(r_edi+0x240u), 0x1u);
    /* 005ff956: mov edx, 1 */ r_edx = 0x1u;
    /* 005ff95b: jmp 0x5ff973 */ goto L_005ff973;
L_005ff95d:; BB(0x005ff95d);
    /* 005ff95d: cmp eax, 0x8f */ {  u32 a = r_eax; u32 b = 0x8fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff962: jne 0x5ff973 */ if (!fZ) goto L_005ff973;
L_005ff964:; BB(0x005ff964);
    /* 005ff964: mov dword ptr [edi + 0x240], 1 */ W32((u32)(r_edi+0x240u), 0x1u);
    /* 005ff96e: mov edx, 1 */ r_edx = 0x1u;
L_005ff973:; BB(0x005ff973);
    /* 005ff973: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff975: je 0x5ff988 */ if (fZ) goto L_005ff988;
L_005ff977:; BB(0x005ff977);
    /* 005ff977: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005ff97d: or eax, 0x1800 */ {  u32 a = r_eax; u32 b = 0x1800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff982: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
L_005ff988:; BB(0x005ff988);
    /* 005ff988: mov eax, edi */ r_eax = r_edi;
    /* 005ff98a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff98b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ff98c: ret 8 */ FN_RET(0x005ff914); r_esp += 12; return;
}

void f_005ff990(void) /* sub_5FF990 */
{
    FN_ENTER(0x005ff990);
    /* 005ff990: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff991: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ff993: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ff995: call 0x5ff9b4 */ r_esp -= 4; W32(r_esp, 0x5ff99au); f_005ff9b4();
    /* 005ff99a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ff99e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ff9a0: jne 0x5ff9a6 */ if (!fZ) goto L_005ff9a6;
L_005ff9a2:; BB(0x005ff9a2);
    /* 005ff9a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff9a3: ret 4 */ FN_RET(0x005ff990); r_esp += 8; return;
L_005ff9a6:; BB(0x005ff9a6);
    /* 005ff9a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ff9acu); f_005c2f74();
    /* 005ff9ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff9ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff9ae: ret 4 */ FN_RET(0x005ff990); r_esp += 8; return;
}

void f_005ff9b4(void) /* sub_5FF9B4 */
{
    FN_ENTER(0x005ff9b4);
    /* 005ff9b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff9b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9b9: push 0x8de800 */ { u32 v = 0x8de800u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff9c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ff9cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff9cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ff9d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ff9d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ff9d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ff9db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ff9de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ff9e1: mov dword ptr [ecx], 0xb1c000 */ W32((u32)(r_ecx), 0xb1c000u);
    /* 005ff9e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff9ee: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ff9f3u); f_005e61c8();
    /* 005ff9f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff9f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff9fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff9ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffa00: ret  */ FN_RET(0x005ff9b4); r_esp += 4; return;
}

void f_005ffa04(void) /* sub_5FFA04 */
{
    FN_ENTER(0x005ffa04);
    /* 005ffa04: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffa07: mov dword ptr [ecx + 0x24c], 2 */ W32((u32)(r_ecx+0x24cu), 0x2u);
    /* 005ffa11: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ffa14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa17: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ffa1cu); f_005e83c8();
    /* 005ffa1c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ffa1f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa22: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ffa27u); f_0050b510();
    /* 005ffa27: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ffa2a: ret  */ FN_RET(0x005ffa04); r_esp += 4; return;
}

void f_005ffa2c(void) /* sub_5FFA2C */
{
    FN_ENTER(0x005ffa2c);
    /* 005ffa2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa2d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffa2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa31: push 0x8de828 */ { u32 v = 0x8de828u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ffa3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ffa44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffa47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ffa4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ffa4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ffa50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ffa53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffa56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffa58: je 0x5ffaaf */ if (fZ) goto L_005ffaaf;
L_005ffa5a:; BB(0x005ffa5a);
    /* 005ffa5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ffa61: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa66: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ffa6bu); f_005caba4();
    /* 005ffa6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ffa6c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ffa6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffa71: je 0x5ffaab */ if (fZ) goto L_005ffaab;
L_005ffa73:; BB(0x005ffa73);
    /* 005ffa73: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ffa7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ffa81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffa84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffa87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa88: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffa8e: call 0x5ffac0 */ r_esp -= 4; W32(r_esp, 0x5ffa93u); f_005ffac0();
    /* 005ffa93: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffa96: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ffa9d:; BB(0x005ffa9d);
    /* 005ffa9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffaa0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffaa7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffaa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffaaa: ret  */ FN_RET(0x005ffa2c); r_esp += 4; return;
L_005ffaab:; BB(0x005ffaab);
    /* 005ffaab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffaad: jmp 0x5ffa9d */ goto L_005ffa9d;
L_005ffaaf:; BB(0x005ffaaf);
    /* 005ffaaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffab1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffab4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffabb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffabd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffabe: ret  */ FN_RET(0x005ffa2c); r_esp += 4; return;
}

void f_005ffac0(void) /* sub_5FFAC0 */
{
    FN_ENTER(0x005ffac0);
    /* 005ffac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffac1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ffac3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffac7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffacb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ffacd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ffad2u); f_005e959c();
    /* 005ffad2: mov dword ptr [ebp], 0xb1c000 */ W32((u32)(r_ebp), 0xb1c000u);
    /* 005ffad9: mov eax, ebp */ r_eax = r_ebp;
    /* 005ffadb: mov dword ptr [ebp + 0x238], 0 */ W32((u32)(r_ebp+0x238u), 0x0u);
    /* 005ffae5: mov dword ptr [ebp + 0x234], 0x5cf288 */ W32((u32)(r_ebp+0x234u), 0x5cf288u);
    /* 005ffaef: mov dword ptr [ebp + 0x208], 0x41a00000 */ W32((u32)(r_ebp+0x208u), 0x41a00000u);
    /* 005ffaf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffafa: ret 8 */ FN_RET(0x005ffac0); r_esp += 12; return;
}

void f_005ffb00(void) /* sub_5FFB00 */
{
    FN_ENTER(0x005ffb00);
    /* 005ffb00: mov dword ptr [0xa8e278], 0x3f800000 */ W32((u32)(0xa8e278u), 0x3f800000u);
    /* 005ffb0a: mov dword ptr [0xa8e27c], 0x41000000 */ W32((u32)(0xa8e27cu), 0x41000000u);
    /* 005ffb14: mov dword ptr [0xa8e280], 0x3fc00000 */ W32((u32)(0xa8e280u), 0x3fc00000u);
    /* 005ffb1e: ret  */ FN_RET(0x005ffb00); r_esp += 4; return;
}

void f_005ffb20(void) /* sub_5FFB20 */
{
    FN_ENTER(0x005ffb20);
    /* 005ffb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb21: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffb23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb25: push 0x8de844 */ { u32 v = 0x8de844u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ffb30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ffb38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffb3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ffb3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ffb41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ffb44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ffb47: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ffb4a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ffb4d: mov eax, ecx */ r_eax = r_ecx;
    /* 005ffb4f: mov dword ptr [eax], 0xb1c160 */ W32((u32)(r_eax), 0xb1c160u);
    /* 005ffb55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ffb5c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ffb61u); f_005e61c8();
    /* 005ffb61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffb64: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffb66: jne 0x5ffb78 */ if (!fZ) goto L_005ffb78;
L_005ffb68:; BB(0x005ffb68);
    /* 005ffb68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffb6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffb72: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffb74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffb75: ret 4 */ FN_RET(0x005ffb20); r_esp += 8; return;
L_005ffb78:; BB(0x005ffb78);
    /* 005ffb78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffb7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb7c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ffb81u); f_005c2f74();
    /* 005ffb81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ffb82: jmp 0x5ffb68 */ goto L_005ffb68;
}

void f_005ffb84(void) /* sub_5FFB84 */
{
    FN_ENTER(0x005ffb84);
    /* 005ffb84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb85: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffb88: mov edi, ecx */ r_edi = r_ecx;
    /* 005ffb8a: mov ecx, edi */ r_ecx = r_edi;
    /* 005ffb8c: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ffb91u); f_005e7f6c();
    /* 005ffb91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb93: jne 0x5ffba8 */ if (!fZ) goto L_005ffba8;
L_005ffb95:; BB(0x005ffb95);
    /* 005ffb95: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb97: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb9a: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffba0: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5ffba5u); f_005cc3b0();
    /* 005ffba5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ffba8:; BB(0x005ffba8);
    /* 005ffba8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ffbab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbae: mov ecx, edi */ r_ecx = r_edi;
    /* 005ffbb0: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ffbb5u); f_005e83c8();
    /* 005ffbb5: mov ecx, edi */ r_ecx = r_edi;
    /* 005ffbb7: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ffbbcu); f_005e90b0();
    /* 005ffbbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffbbe: je 0x5ffbdd */ if (fZ) goto L_005ffbdd;
L_005ffbc0:; BB(0x005ffbc0);
    /* 005ffbc0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbc2: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005ffbc8: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffbcb: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 005ffbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbd0: call 0x6dd7e4 */ r_esp -= 4; W32(r_esp, 0x5ffbd5u); f_006dd7e4();
    /* 005ffbd5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ffbd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ffbdb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ffbdc: ret  */ FN_RET(0x005ffb84); r_esp += 4; return;
L_005ffbdd:; BB(0x005ffbdd);
    /* 005ffbdd: mov ecx, edi */ r_ecx = r_edi;
    /* 005ffbdf: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ffbe4u); f_005e90e8();
    /* 005ffbe4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ffbe7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ffbe8: ret  */ FN_RET(0x005ffb84); r_esp += 4; return;
}

void f_005ffbec(void) /* sub_5FFBEC */
{
    FN_ENTER(0x005ffbec);
    /* 005ffbec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbed: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffbef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbf1: push 0x8de86c */ { u32 v = 0x8de86cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ffbfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ffc04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffc07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ffc0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ffc0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ffc10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ffc13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffc16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffc18: je 0x5ffc6f */ if (fZ) goto L_005ffc6f;
L_005ffc1a:; BB(0x005ffc1a);
    /* 005ffc1a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ffc21: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffc26: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ffc2bu); f_005caba4();
    /* 005ffc2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ffc2c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ffc2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffc31: je 0x5ffc6b */ if (fZ) goto L_005ffc6b;
L_005ffc33:; BB(0x005ffc33);
    /* 005ffc33: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ffc3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ffc41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffc44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffc47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffc48: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffc4e: call 0x5ffc80 */ r_esp -= 4; W32(r_esp, 0x5ffc53u); f_005ffc80();
    /* 005ffc53: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffc56: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ffc5d:; BB(0x005ffc5d);
    /* 005ffc5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffc60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffc67: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffc69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffc6a: ret  */ FN_RET(0x005ffbec); r_esp += 4; return;
L_005ffc6b:; BB(0x005ffc6b);
    /* 005ffc6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffc6d: jmp 0x5ffc5d */ goto L_005ffc5d;
L_005ffc6f:; BB(0x005ffc6f);
    /* 005ffc6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffc71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffc74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffc7b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffc7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffc7e: ret  */ FN_RET(0x005ffbec); r_esp += 4; return;
}

void f_005ffc80(void) /* sub_5FFC80 */
{
    FN_ENTER(0x005ffc80);
    /* 005ffc80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffc81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ffc83: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffc87: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffc8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ffc8d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ffc92u); f_005e959c();
    /* 005ffc92: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ffc98: mov dword ptr [ebx], 0xb1c160 */ W32((u32)(r_ebx), 0xb1c160u);
    /* 005ffc9e: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffca1: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ffca7: mov eax, ebx */ r_eax = r_ebx;
    /* 005ffca9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ffcaa: ret 8 */ FN_RET(0x005ffc80); r_esp += 12; return;
}

void f_005ffcb0(void) /* sub_5FFCB0 */
{
    FN_ENTER(0x005ffcb0);
    /* 005ffcb0: mov dword ptr [0xa8e284], 0x3f800000 */ W32((u32)(0xa8e284u), 0x3f800000u);
    /* 005ffcba: mov dword ptr [0xa8e288], 0x41000000 */ W32((u32)(0xa8e288u), 0x41000000u);
    /* 005ffcc4: mov dword ptr [0xa8e28c], 0x3fc00000 */ W32((u32)(0xa8e28cu), 0x3fc00000u);
    /* 005ffcce: ret  */ FN_RET(0x005ffcb0); r_esp += 4; return;
}

void f_005ffcd0(void) /* sub_5FFCD0 */
{
    FN_ENTER(0x005ffcd0);
    /* 005ffcd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ffcd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ffcd5: call 0x5ffcf4 */ r_esp -= 4; W32(r_esp, 0x5ffcdau); f_005ffcf4();
    /* 005ffcda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ffcde: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffce0: jne 0x5ffce6 */ if (!fZ) goto L_005ffce6;
L_005ffce2:; BB(0x005ffce2);
    /* 005ffce2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ffce3: ret 4 */ FN_RET(0x005ffcd0); r_esp += 8; return;
L_005ffce6:; BB(0x005ffce6);
    /* 005ffce6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffce7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ffcecu); f_005c2f74();
    /* 005ffcec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ffced: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ffcee: ret 4 */ FN_RET(0x005ffcd0); r_esp += 8; return;
}

void f_005ffcf4(void) /* sub_5FFCF4 */
{
    FN_ENTER(0x005ffcf4);
    /* 005ffcf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcf5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffcf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcf9: push 0x8de888 */ { u32 v = 0x8de888u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ffd04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ffd0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffd0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ffd12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ffd15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ffd18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ffd1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ffd1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffd21: mov dword ptr [ecx], 0xb1c2c0 */ W32((u32)(r_ecx), 0xb1c2c0u);
    /* 005ffd27: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ffd2e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ffd33u); f_005e61c8();
    /* 005ffd33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffd36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffd3d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffd3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffd40: ret  */ FN_RET(0x005ffcf4); r_esp += 4; return;
}

void f_005ffd44(void) /* sub_5FFD44 */
{
    FN_ENTER(0x005ffd44);
    /* 005ffd44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd45: mov esi, ecx */ r_esi = r_ecx;
    /* 005ffd47: mov ecx, esi */ r_ecx = r_esi;
    /* 005ffd49: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ffd4eu); f_005e7f6c();
    /* 005ffd4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffd50: jne 0x5ffd65 */ if (!fZ) goto L_005ffd65;
L_005ffd52:; BB(0x005ffd52);
    /* 005ffd52: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd54: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd57: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffd5d: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5ffd62u); f_005cc3b0();
    /* 005ffd62: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ffd65:; BB(0x005ffd65);
    /* 005ffd65: mov ecx, esi */ r_ecx = r_esi;
    /* 005ffd67: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ffd6cu); f_005e90b0();
    /* 005ffd6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffd6e: je 0x5ffda9 */ if (fZ) goto L_005ffda9;
L_005ffd70:; BB(0x005ffd70);
    /* 005ffd70: mov edx, dword ptr [esi + 0x1e4] */ r_edx = R32((u32)(r_esi+0x1e4u));
    /* 005ffd76: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005ffd7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffd7e: jne 0x5ffd91 */ if (!fZ) goto L_005ffd91;
L_005ffd80:; BB(0x005ffd80);
    /* 005ffd80: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd82: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005ffd85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd87: call 0x6e2634 */ r_esp -= 4; W32(r_esp, 0x5ffd8cu); f_006e2634();
    /* 005ffd8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ffd8f: jmp 0x5ffda0 */ goto L_005ffda0;
L_005ffd91:; BB(0x005ffd91);
    /* 005ffd91: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd93: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005ffd96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd98: call 0x6f0984 */ r_esp -= 4; W32(r_esp, 0x5ffd9du); f_006f0984();
    /* 005ffd9d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ffda0:; BB(0x005ffda0);
    /* 005ffda0: mov ecx, esi */ r_ecx = r_esi;
    /* 005ffda2: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5ffda7u); f_005e7480();
    /* 005ffda7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ffda8: ret  */ FN_RET(0x005ffd44); r_esp += 4; return;
L_005ffda9:; BB(0x005ffda9);
    /* 005ffda9: mov ecx, esi */ r_ecx = r_esi;
    /* 005ffdab: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ffdb0u); f_005e90e8();
    /* 005ffdb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ffdb1: ret  */ FN_RET(0x005ffd44); r_esp += 4; return;
}

void f_005ffdb4(void) /* sub_5FFDB4 */
{
    FN_ENTER(0x005ffdb4);
    /* 005ffdb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdb5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffdb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdb9: push 0x8de8b0 */ { u32 v = 0x8de8b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ffdc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ffdcc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffdcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ffdd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ffdd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ffdd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ffddb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffdde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffde0: je 0x5ffe37 */ if (fZ) goto L_005ffe37;
L_005ffde2:; BB(0x005ffde2);
    /* 005ffde2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ffde9: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdee: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ffdf3u); f_005caba4();
    /* 005ffdf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ffdf4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ffdf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffdf9: je 0x5ffe33 */ if (fZ) goto L_005ffe33;
L_005ffdfb:; BB(0x005ffdfb);
    /* 005ffdfb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ffe02: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ffe09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffe0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffe0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe10: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffe16: call 0x5ffe48 */ r_esp -= 4; W32(r_esp, 0x5ffe1bu); f_005ffe48();
    /* 005ffe1b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffe1e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ffe25:; BB(0x005ffe25);
    /* 005ffe25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffe28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffe2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffe31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffe32: ret  */ FN_RET(0x005ffdb4); r_esp += 4; return;
L_005ffe33:; BB(0x005ffe33);
    /* 005ffe33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffe35: jmp 0x5ffe25 */ goto L_005ffe25;
L_005ffe37:; BB(0x005ffe37);
    /* 005ffe37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffe39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffe3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ffe43: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffe45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffe46: ret  */ FN_RET(0x005ffdb4); r_esp += 4; return;
}

void f_005ffe48(void) /* sub_5FFE48 */
{
    FN_ENTER(0x005ffe48);
    /* 005ffe48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ffe4b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffe4f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ffe53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ffe55: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ffe5au); f_005e959c();
    /* 005ffe5a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ffe60: mov dword ptr [ebx], 0xb1c2c0 */ W32((u32)(r_ebx), 0xb1c2c0u);
    /* 005ffe66: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffe69: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ffe6f: mov dword ptr [ebx + 0x1e8], 2 */ W32((u32)(r_ebx+0x1e8u), 0x2u);
    /* 005ffe79: mov eax, ebx */ r_eax = r_ebx;
    /* 005ffe7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ffe7c: ret 8 */ FN_RET(0x005ffe48); r_esp += 12; return;
}

void f_005ffe80(void) /* sub_5FFE80 */
{
    FN_ENTER(0x005ffe80);
    /* 005ffe80: mov dword ptr [0xa8e290], 0x3f800000 */ W32((u32)(0xa8e290u), 0x3f800000u);
    /* 005ffe8a: mov dword ptr [0xa8e294], 0x41000000 */ W32((u32)(0xa8e294u), 0x41000000u);
    /* 005ffe94: mov dword ptr [0xa8e298], 0x3fc00000 */ W32((u32)(0xa8e298u), 0x3fc00000u);
    /* 005ffe9e: ret  */ FN_RET(0x005ffe80); r_esp += 4; return;
}

void f_005ffea0(void) /* sub_5FFEA0 */
{
    FN_ENTER(0x005ffea0);
    /* 005ffea0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffea1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ffea3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ffea5: call 0x5ffec4 */ r_esp -= 4; W32(r_esp, 0x5ffeaau); f_005ffec4();
    /* 005ffeaa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ffeae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ffeb0: jne 0x5ffeb6 */ if (!fZ) goto L_005ffeb6;
L_005ffeb2:; BB(0x005ffeb2);
    /* 005ffeb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ffeb3: ret 4 */ FN_RET(0x005ffea0); r_esp += 8; return;
L_005ffeb6:; BB(0x005ffeb6);
    /* 005ffeb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffeb7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ffebcu); f_005c2f74();
    /* 005ffebc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ffebd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ffebe: ret 4 */ FN_RET(0x005ffea0); r_esp += 8; return;
}

void f_005ffec4(void) /* sub_5FFEC4 */
{
    FN_ENTER(0x005ffec4);
    /* 005ffec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffec5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffec7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffec9: push 0x8de8cc */ { u32 v = 0x8de8ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffece: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ffed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffed5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ffedc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffedf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ffee2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ffee5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ffee8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ffeeb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ffeee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffef1: mov dword ptr [ecx], 0xb1c420 */ W32((u32)(r_ecx), 0xb1c420u);
    /* 005ffef7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ffefe: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fff03u); f_005e61c8();
    /* 005fff03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fff06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fff0d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fff0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fff10: ret  */ FN_RET(0x005ffec4); r_esp += 4; return;
}

void f_005fff14(void) /* sub_5FFF14 */
{
    FN_ENTER(0x005fff14);
    /* 005fff14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fff15: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fff18: mov esi, ecx */ r_esi = r_ecx;
    /* 005fff1a: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fff20: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005fff25: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005fff2d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005fff32: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005fff36: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 005fff3e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005fff42: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 005fff4a: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005fff4f: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 005fff57: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005fff5c: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005fff64: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005fff6c: mov dword ptr [esp + 0x2c], 0xffffd556 */ W32((u32)(r_esp+0x2cu), 0xffffd556u);
    /* 005fff74: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005fff78: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005fff7c: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005fff82: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fff88: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005fff8c: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005fff8f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005fff93: mov eax, dword ptr [esi + 0x1ac] */ r_eax = R32((u32)(r_esi+0x1acu));
    /* 005fff99: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005fff9d: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5fffa2u); f_006a2e8c();
    /* 005fffa2: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fffa8: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005fffad: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fffb3: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5fffb8u); f_006a3250();
    /* 005fffb8: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fffbe: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 005fffc3: movzx eax, word ptr [ecx + 0x8a4] */ r_eax = (u32)R16((u32)(r_ecx+0x8a4u));
    /* 005fffca: mov edx, dword ptr [eax*4 + 0x9cb9d0] */ r_edx = R32((u32)(r_eax*4+0x9cb9d0u));
    /* 005fffd1: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 005fffd4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005fffd8: mov ecx, esi */ r_ecx = r_esi;
    /* 005fffda: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005fffde: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005fffe2: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 005fffea: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005ffff2: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 005ffffa: mov dword ptr [esp + 0x24], 0x3f333333 */ W32((u32)(r_esp+0x24u), 0x3f333333u);
    /* 00600002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600003: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00600005: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x60000au); f_005e83c8();
    /* 0060000a: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0060000e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060000f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00600011: mov ecx, esi */ r_ecx = r_esi;
    /* 00600013: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x600018u); f_005e83c8();
    /* 00600018: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0060001b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060001c: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x600021u); f_006f1188();
    /* 00600021: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00600024: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600025: ret  */ FN_RET(0x005fff14); r_esp += 4; return;
}

