#include "protos.h"

void f_008ba068(void) /* sub_8BA068 */
{
    FN_ENTER(0x008ba068);
    /* 008ba068: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008ba06c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba06d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba06e: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008ba072: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008ba074: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba076: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba077: je 0x8ba07e */ if (fZ) goto L_008ba07e;
L_008ba079:; BB(0x008ba079);
    /* 008ba079: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 008ba07c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_008ba07e:; BB(0x008ba07e);
    /* 008ba07e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008ba080: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba083: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008ba087: je 0x8ba08e */ if (fZ) goto L_008ba08e;
L_008ba089:; BB(0x008ba089);
    /* 008ba089: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba08c: jne 0x8ba099 */ if (!fZ) goto L_008ba099;
L_008ba08e:; BB(0x008ba08e);
    /* 008ba08e: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba091: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba094: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba097u); call_ind(t); }
    /* 008ba097: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba098: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ba099:; BB(0x008ba099);
    /* 008ba099: cmp dword ptr [esi], 6 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba09c: jne 0x8ba0a9 */ if (!fZ) goto L_008ba0a9;
L_008ba09e:; BB(0x008ba09e);
    /* 008ba09e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba09f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba0a2: call 0x8bca99 */ r_esp -= 4; W32(r_esp, 0x8ba0a7u); f_008bca99();
    /* 008ba0a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba0a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ba0a9:; BB(0x008ba0a9);
    /* 008ba0a9: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 008ba0ac: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 008ba0af: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 008ba0b2: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 008ba0b5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ba0b7: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 008ba0b9: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 008ba0bc: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 008ba0bf: je 0x8ba0cf */ if (fZ) goto L_008ba0cf;
L_008ba0c1:; BB(0x008ba0c1);
    /* 008ba0c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8ba0c6u); call_ind(t); }
    /* 008ba0c6: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 008ba0c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ba0cc: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
L_008ba0cf:; BB(0x008ba0cf);
    /* 008ba0cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ba0d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ba0d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ba0d2: ret  */ FN_RET(0x008ba068); r_esp += 4; return;
}

void f_008ba0d3(void) /* sub_8BA0D3 */
{
    FN_ENTER(0x008ba0d3);
    /* 008ba0d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0d4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008ba0d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0d9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0dd: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba0e0: call dword ptr [esi + 0x20] */ { u32 t = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, 0x8ba0e3u); call_ind(t); }
    /* 008ba0e3: mov edi, eax */ r_edi = r_eax;
    /* 008ba0e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba0e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba0ea: je 0x8ba10c */ if (fZ) goto L_008ba10c;
L_008ba0ec:; BB(0x008ba0ec);
    /* 008ba0ec: push 0x5a0 */ { u32 v = 0x5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0f1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba0f3: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba0f6: call dword ptr [esi + 0x20] */ { u32 t = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, 0x8ba0f9u); call_ind(t); }
    /* 008ba0f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba0fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba0fe: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 008ba101: jne 0x8ba110 */ if (!fZ) goto L_008ba110;
L_008ba103:; BB(0x008ba103);
    /* 008ba103: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba104: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba107: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba10au); call_ind(t); }
    /* 008ba10a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba10b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ba10c:; BB(0x008ba10c);
    /* 008ba10c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ba10e: jmp 0x8ba15d */ goto L_008ba15d;
L_008ba110:; BB(0x008ba110);
    /* 008ba110: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba111: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008ba115: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba116: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba118: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba11b: call dword ptr [esi + 0x20] */ { u32 t = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, 0x8ba11eu); call_ind(t); }
    /* 008ba11e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba123: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 008ba126: jne 0x8ba13f */ if (!fZ) goto L_008ba13f;
L_008ba128:; BB(0x008ba128);
    /* 008ba128: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba12b: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba12e: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba131u); call_ind(t); }
    /* 008ba131: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba132: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba135: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba138u); call_ind(t); }
    /* 008ba138: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba13b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ba13d: jmp 0x8ba15c */ goto L_008ba15c;
L_008ba13f:; BB(0x008ba13f);
    /* 008ba13f: and dword ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba142: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ba144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba146: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 008ba149: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008ba14d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba14e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba14f: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 008ba152: call 0x8ba068 */ r_esp -= 4; W32(r_esp, 0x8ba157u); f_008ba068();
    /* 008ba157: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ba15a: mov eax, edi */ r_eax = r_edi;
L_008ba15c:; BB(0x008ba15c);
    /* 008ba15c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008ba15d:; BB(0x008ba15d);
    /* 008ba15d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ba15e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ba15f: ret  */ FN_RET(0x008ba0d3); r_esp += 4; return;
}

void f_008ba160(void) /* sub_8BA160 */
{
    FN_ENTER(0x008ba160);
    /* 008ba160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ba161: mov ebp, esp */ r_ebp = r_esp;
    /* 008ba163: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ba166: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba167: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008ba16a: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 008ba16d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba16e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008ba171: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008ba174: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008ba177: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 008ba17a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008ba17d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 008ba180: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008ba183: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 008ba186: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba188: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba189: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008ba18b: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008ba18e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008ba191: jae 0x8ba198 */ if (!fC) goto L_008ba198;
L_008ba193:; BB(0x008ba193);
    /* 008ba193: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba195: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba196: jmp 0x8ba19d */ goto L_008ba19d;
L_008ba198:; BB(0x008ba198);
    /* 008ba198: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 008ba19b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008ba19d:; BB(0x008ba19d);
    /* 008ba19d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008ba19f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba1a2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008ba1a5: jbe 0x8ba1dc */ if ((fC||fZ)) goto L_008ba1dc;
L_008ba1a7:; BB(0x008ba1a7);
    /* 008ba1a7: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
L_008ba1a9:; BB(0x008ba1a9);
    /* 008ba1a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba1ac: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 008ba1af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008ba1b2:; BB(0x008ba1b2);
    /* 008ba1b2: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 008ba1b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008ba1b8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008ba1bb:; BB(0x008ba1bb);
    /* 008ba1bb: mov eax, edi */ r_eax = r_edi;
    /* 008ba1bd: sub eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ba1bf: add dword ptr [esi + 8], eax */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba1c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_008ba1c5:; BB(0x008ba1c5);
    /* 008ba1c5: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008ba1c7: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
L_008ba1ca:; BB(0x008ba1ca);
    /* 008ba1ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba1cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba1cc: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8ba1d1u); f_008bcfe0();
    /* 008ba1d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008ba1d4:; BB(0x008ba1d4);
    /* 008ba1d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ba1d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ba1d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ba1d7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008ba1d8: ret  */ FN_RET(0x008ba160); r_esp += 4; return;
L_008ba1d9:; BB(0x008ba1d9);
    /* 008ba1d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
L_008ba1dc:; BB(0x008ba1dc);
    /* 008ba1dc: jmp dword ptr [eax*4 + 0x8ba8d3] */ { u32 t = R32((u32)(r_eax*4+0x8ba8d3u)); switch (t) { case 0x8ba207u: goto L_008ba207; case 0x8ba2d1u: goto L_008ba2d1; case 0x8ba332u: goto L_008ba332; case 0x8ba422u: goto L_008ba422; case 0x8ba4f1u: goto L_008ba4f1; case 0x8ba66fu: goto L_008ba66f; case 0x8ba710u: goto L_008ba710; case 0x8ba881u: goto L_008ba881; case 0x8ba8ccu: goto L_008ba8cc; case 0x8ba7b8u: goto L_008ba7b8; default: UNSUP(0x008ba1dc, "jump table entry is not a known target"); } }
L_008ba1e3:; BB(0x008ba1e3);
    /* 008ba1e3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba1e7: je 0x8ba800 */ if (fZ) goto L_008ba800;
L_008ba1ed:; BB(0x008ba1ed);
    /* 008ba1ed: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008ba1f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba1f3: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008ba1f7: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba1fa: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ba1fc: or dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba1ff: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba200: add dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba204: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
L_008ba207:; BB(0x008ba207);
    /* 008ba207: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba20b: jb 0x8ba1e3 */ if (fC) goto L_008ba1e3;
L_008ba20d:; BB(0x008ba20d);
    /* 008ba20d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba210: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba213: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008ba215: mov ecx, eax */ r_ecx = r_eax;
    /* 008ba217: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ba218: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba21a: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ba21c: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ba21f: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 008ba222: je 0x8ba2b2 */ if (fZ) goto L_008ba2b2;
L_008ba228:; BB(0x008ba228);
    /* 008ba228: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ba229: je 0x8ba269 */ if (fZ) goto L_008ba269;
L_008ba22b:; BB(0x008ba22b);
    /* 008ba22b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ba22c: je 0x8ba258 */ if (fZ) goto L_008ba258;
L_008ba22e:; BB(0x008ba22e);
    /* 008ba22e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ba22f: jne 0x8ba795 */ if (!fZ) goto L_008ba795;
L_008ba235:; BB(0x008ba235);
    /* 008ba235: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba238: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ba23b: mov dword ptr [ebx], 9 */ W32((u32)(r_ebx), 0x9u);
    /* 008ba241: mov dword ptr [esi + 0x18], 0x99ed2c */ W32((u32)(r_esi+0x18u), 0x99ed2cu);
    /* 008ba248: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 008ba24b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ba24e: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ba251: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008ba253: jmp 0x8ba1b2 */ goto L_008ba1b2;
L_008ba258:; BB(0x008ba258);
    /* 008ba258: shr dword ptr [ebp - 4], 3 */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008ba25c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba25e: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008ba25f: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008ba262:; BB(0x008ba262);
    /* 008ba262: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008ba264: jmp 0x8ba795 */ goto L_008ba795;
L_008ba269:; BB(0x008ba269);
    /* 008ba269: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba26a: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008ba26d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba26e: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008ba271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba272: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 008ba275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba276: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 008ba279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba27a: call 0x8bcfb1 */ r_esp -= 4; W32(r_esp, 0x8ba27fu); f_008bcfb1();
    /* 008ba27f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba280: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba283: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba286: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba289: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba28c: call 0x8bc501 */ r_esp -= 4; W32(r_esp, 0x8ba291u); f_008bc501();
    /* 008ba291: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba296: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008ba299: je 0x8ba874 */ if (fZ) goto L_008ba874;
L_008ba29f:; BB(0x008ba29f);
    /* 008ba29f: shr dword ptr [ebp - 4], 3 */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008ba2a3: sub dword ptr [ebp + 8], 3 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba2a7: mov dword ptr [ebx], 6 */ W32((u32)(r_ebx), 0x6u);
    /* 008ba2ad: jmp 0x8ba795 */ goto L_008ba795;
L_008ba2b2:; BB(0x008ba2b2);
    /* 008ba2b2: sub dword ptr [ebp + 8], 3 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba2b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba2b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba2bc: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba2bf: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008ba2c2: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ba2c4: sub dword ptr [ebp + 8], ecx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba2c7: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 008ba2c9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008ba2cc: jmp 0x8ba795 */ goto L_008ba795;
L_008ba2d1:; BB(0x008ba2d1);
    /* 008ba2d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba2d4: jmp 0x8ba2f9 */ goto L_008ba2f9;
L_008ba2d6:; BB(0x008ba2d6);
    /* 008ba2d6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba2da: je 0x8ba800 */ if (fZ) goto L_008ba800;
L_008ba2e0:; BB(0x008ba2e0);
    /* 008ba2e0: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008ba2e3: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008ba2e7: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba2ea: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ba2ec: or dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba2ef: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba2f0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba2f3: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008ba2f6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_008ba2f9:; BB(0x008ba2f9);
    /* 008ba2f9: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba2fc: jb 0x8ba2d6 */ if (fC) goto L_008ba2d6;
L_008ba2fe:; BB(0x008ba2fe);
    /* 008ba2fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba301: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba304: not ecx */ r_ecx = ~r_ecx;
    /* 008ba306: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba30b: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008ba30e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba310: jne 0x8ba7ab */ if (!fZ) goto L_008ba7ab;
L_008ba316:; BB(0x008ba316);
    /* 008ba316: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008ba319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008ba31b: cmp dword ptr [ebx + 4], eax */ {  u32 a = R32((u32)(r_ebx+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba31e: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008ba321: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008ba324: je 0x8ba413 */ if (fZ) goto L_008ba413;
L_008ba32a:; BB(0x008ba32a);
    /* 008ba32a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba32c: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008ba32d: jmp 0x8ba262 */ goto L_008ba262;
L_008ba332:; BB(0x008ba332);
    /* 008ba332: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba336: je 0x8ba800 */ if (fZ) goto L_008ba800;
L_008ba33c:; BB(0x008ba33c);
    /* 008ba33c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba33e: jne 0x8ba3d3 */ if (!fZ) goto L_008ba3d3;
L_008ba344:; BB(0x008ba344);
    /* 008ba344: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 008ba347: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba34a: jne 0x8ba36b */ if (!fZ) goto L_008ba36b;
L_008ba34c:; BB(0x008ba34c);
    /* 008ba34c: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 008ba34f: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 008ba352: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba354: je 0x8ba36b */ if (fZ) goto L_008ba36b;
L_008ba356:; BB(0x008ba356);
    /* 008ba356: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008ba359: jae 0x8ba362 */ if (!fC) goto L_008ba362;
L_008ba35b:; BB(0x008ba35b);
    /* 008ba35b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ba35d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ba35e: mov ecx, eax */ r_ecx = r_eax;
    /* 008ba360: jmp 0x8ba364 */ goto L_008ba364;
L_008ba362:; BB(0x008ba362);
    /* 008ba362: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008ba364:; BB(0x008ba364);
    /* 008ba364: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba366: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008ba369: jne 0x8ba3d3 */ if (!fZ) goto L_008ba3d3;
L_008ba36b:; BB(0x008ba36b);
    /* 008ba36b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba36e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008ba371: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba372: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba373: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 008ba376: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8ba37bu); f_008bcfe0();
    /* 008ba37b: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 008ba37e: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008ba381: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 008ba384: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba387: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba389: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008ba38c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008ba38f: jae 0x8ba396 */ if (!fC) goto L_008ba396;
L_008ba391:; BB(0x008ba391);
    /* 008ba391: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba393: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba394: jmp 0x8ba39b */ goto L_008ba39b;
L_008ba396:; BB(0x008ba396);
    /* 008ba396: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 008ba399: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008ba39b:; BB(0x008ba39b);
    /* 008ba39b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 008ba39e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba3a0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008ba3a3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008ba3a6: jne 0x8ba3cb */ if (!fZ) goto L_008ba3cb;
L_008ba3a8:; BB(0x008ba3a8);
    /* 008ba3a8: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 008ba3ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008ba3ae: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba3b0: je 0x8ba3c8 */ if (fZ) goto L_008ba3c8;
L_008ba3b2:; BB(0x008ba3b2);
    /* 008ba3b2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008ba3b5: jae 0x8ba3be */ if (!fC) goto L_008ba3be;
L_008ba3b7:; BB(0x008ba3b7);
    /* 008ba3b7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008ba3b9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008ba3ba: mov ecx, edx */ r_ecx = r_edx;
    /* 008ba3bc: jmp 0x8ba3c3 */ goto L_008ba3c3;
L_008ba3be:; BB(0x008ba3be);
    /* 008ba3be: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008ba3c1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008ba3c3:; BB(0x008ba3c3);
    /* 008ba3c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008ba3c6: jmp 0x8ba3cb */ goto L_008ba3cb;
L_008ba3c8:; BB(0x008ba3c8);
    /* 008ba3c8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_008ba3cb:; BB(0x008ba3cb);
    /* 008ba3cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba3cd: je 0x8ba7bf */ if (fZ) goto L_008ba7bf;
L_008ba3d3:; BB(0x008ba3d3);
    /* 008ba3d3: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008ba3d6: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba3da: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba3dd: jbe 0x8ba3e2 */ if ((fC||fZ)) goto L_008ba3e2;
L_008ba3df:; BB(0x008ba3df);
    /* 008ba3df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_008ba3e2:; BB(0x008ba3e2);
    /* 008ba3e2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba3e4: jbe 0x8ba3e8 */ if ((fC||fZ)) goto L_008ba3e8;
L_008ba3e6:; BB(0x008ba3e6);
    /* 008ba3e6: mov eax, ecx */ r_eax = r_ecx;
L_008ba3e8:; BB(0x008ba3e8);
    /* 008ba3e8: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ba3eb: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008ba3ee: add dword ptr [ebp - 0x14], eax */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba3f1: sub dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba3f4: add dword ptr [ebp - 0xc], eax */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba3f7: sub dword ptr [ebp - 0x10], eax */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba3fa: mov ecx, eax */ r_ecx = r_eax;
    /* 008ba3fc: mov edx, ecx */ r_edx = r_ecx;
    /* 008ba3fe: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008ba401: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008ba403: mov ecx, edx */ r_ecx = r_edx;
    /* 008ba405: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba408: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008ba40a: sub dword ptr [ebx + 4], eax */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008ba40d: jne 0x8ba795 */ if (!fZ) goto L_008ba795;
L_008ba413:; BB(0x008ba413);
    /* 008ba413: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 008ba416: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008ba418: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008ba41a: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba41d: jmp 0x8ba262 */ goto L_008ba262;
L_008ba422:; BB(0x008ba422);
    /* 008ba422: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba425: jmp 0x8ba447 */ goto L_008ba447;
L_008ba427:; BB(0x008ba427);
    /* 008ba427: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba42b: je 0x8ba800 */ if (fZ) goto L_008ba800;
L_008ba431:; BB(0x008ba431);
    /* 008ba431: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008ba434: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008ba438: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba43b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ba43d: or dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba440: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba441: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba444: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_008ba447:; BB(0x008ba447);
    /* 008ba447: cmp ecx, 0xe */ {  u32 a = r_ecx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba44a: jb 0x8ba427 */ if (fC) goto L_008ba427;
L_008ba44c:; BB(0x008ba44c);
    /* 008ba44c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba44f: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba454: mov ecx, eax */ r_ecx = r_eax;
    /* 008ba456: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba459: cmp ecx, 0x1d */ {  u32 a = r_ecx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba45c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008ba45f: ja 0x8ba7e0 */ if ((!fC&&!fZ)) goto L_008ba7e0;
L_008ba465:; BB(0x008ba465);
    /* 008ba465: shr eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ba468: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba46b: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba46e: ja 0x8ba7e0 */ if ((!fC&&!fZ)) goto L_008ba7e0;
L_008ba474:; BB(0x008ba474);
    /* 008ba474: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba476: lea eax, [eax + ecx + 0x102] */ r_eax = (u32)(r_eax+r_ecx+0x102u);
    /* 008ba47d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba47e: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba481: call dword ptr [esi + 0x20] */ { u32 t = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, 0x8ba484u); call_ind(t); }
    /* 008ba484: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba487: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba489: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008ba48c: je 0x8ba874 */ if (fZ) goto L_008ba874;
L_008ba492:; BB(0x008ba492);
    /* 008ba492: shr dword ptr [ebp - 4], 0xe */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = (14u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008ba496: sub dword ptr [ebp + 8], 0xe */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba49a: and dword ptr [ebx + 8], 0 */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba49e: mov dword ptr [ebx], 4 */ W32((u32)(r_ebx), 0x4u);
    /* 008ba4a4: jmp 0x8ba4f1 */ goto L_008ba4f1;
L_008ba4a6:; BB(0x008ba4a6);
    /* 008ba4a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba4a9: jmp 0x8ba4cb */ goto L_008ba4cb;
L_008ba4ab:; BB(0x008ba4ab);
    /* 008ba4ab: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba4af: je 0x8ba800 */ if (fZ) goto L_008ba800;
L_008ba4b5:; BB(0x008ba4b5);
    /* 008ba4b5: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008ba4b8: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008ba4bc: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba4bf: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ba4c1: or dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba4c4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba4c5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba4c8: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_008ba4cb:; BB(0x008ba4cb);
    /* 008ba4cb: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba4ce: jb 0x8ba4ab */ if (fC) goto L_008ba4ab;
L_008ba4d0:; BB(0x008ba4d0);
    /* 008ba4d0: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008ba4d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba4d6: mov ecx, dword ptr [ecx*4 + 0x99ec80] */ r_ecx = R32((u32)(r_ecx*4+0x99ec80u));
    /* 008ba4dd: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ba4e0: shr dword ptr [ebp - 4], 3 */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008ba4e4: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba4e7: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 008ba4ea: inc dword ptr [ebx + 8] */ { u32 ad = (u32)(r_ebx+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba4ed: sub dword ptr [ebp + 8], 3 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008ba4f1:; BB(0x008ba4f1);
    /* 008ba4f1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008ba4f4: shr eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ba4f7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ba4fa: cmp dword ptr [ebx + 8], eax */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba4fd: jb 0x8ba4a6 */ if (fC) goto L_008ba4a6;
L_008ba4ff:; BB(0x008ba4ff);
    /* 008ba4ff: jmp 0x8ba515 */ goto L_008ba515;
L_008ba501:; BB(0x008ba501);
    /* 008ba501: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ba504: mov eax, dword ptr [eax*4 + 0x99ec80] */ r_eax = R32((u32)(r_eax*4+0x99ec80u));
    /* 008ba50b: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008ba50e: and dword ptr [ecx + eax*4], 0 */ { u32 ad = (u32)(r_ecx+r_eax*4);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba512: inc dword ptr [ebx + 8] */ { u32 ad = (u32)(r_ebx+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008ba515:; BB(0x008ba515);
    /* 008ba515: cmp dword ptr [ebx + 8], 0x13 */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba519: jb 0x8ba501 */ if (fC) goto L_008ba501;
L_008ba51b:; BB(0x008ba51b);
    /* 008ba51b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba51c: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba51f: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 008ba522: lea eax, [ebx + 0x10] */ r_eax = (u32)(r_ebx+0x10u);
    /* 008ba525: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba527: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba52a: mov dword ptr [eax], 7 */ W32((u32)(r_eax), 0x7u);
    /* 008ba530: call 0x8bce2f */ r_esp -= 4; W32(r_esp, 0x8ba535u); f_008bce2f();
    /* 008ba535: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba53a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008ba53d: jne 0x8ba7ef */ if (!fZ) goto L_008ba7ef;
L_008ba543:; BB(0x008ba543);
    /* 008ba543: and dword ptr [ebx + 8], eax */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba546: mov dword ptr [ebx], 5 */ W32((u32)(r_ebx), 0x5u);
    /* 008ba54c: jmp 0x8ba66f */ goto L_008ba66f;
L_008ba551:; BB(0x008ba551);
    /* 008ba551: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ba554: jmp 0x8ba577 */ goto L_008ba577;
L_008ba556:; BB(0x008ba556);
    /* 008ba556: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba55a: je 0x8ba800 */ if (fZ) goto L_008ba800;
L_008ba560:; BB(0x008ba560);
    /* 008ba560: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008ba563: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba566: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008ba56a: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba56d: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008ba56f: or dword ptr [ebp - 4], edx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba572: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba573: add dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008ba577:; BB(0x008ba577);
    /* 008ba577: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba57a: jb 0x8ba556 */ if (fC) goto L_008ba556;
L_008ba57c:; BB(0x008ba57c);
    /* 008ba57c: mov eax, dword ptr [eax*4 + 0xa37ae0] */ r_eax = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008ba583: and eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba586: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 008ba589: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 008ba58c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008ba590: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008ba593: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ba596: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008ba599: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008ba59c: jae 0x8ba5b7 */ if (!fC) goto L_008ba5b7;
L_008ba59e:; BB(0x008ba59e);
    /* 008ba59e: shr dword ptr [ebp - 4], cl */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008ba5a1: mov eax, ecx */ r_eax = r_ecx;
    /* 008ba5a3: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba5a6: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ba5a9: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008ba5ac: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 008ba5af: inc dword ptr [ebx + 8] */ { u32 ad = (u32)(r_ebx+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba5b2: jmp 0x8ba66f */ goto L_008ba66f;
L_008ba5b7:; BB(0x008ba5b7);
    /* 008ba5b7: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba5ba: jne 0x8ba5c1 */ if (!fZ) goto L_008ba5c1;
L_008ba5bc:; BB(0x008ba5bc);
    /* 008ba5bc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba5be: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008ba5bf: jmp 0x8ba5c4 */ goto L_008ba5c4;
L_008ba5c1:; BB(0x008ba5c1);
    /* 008ba5c1: lea eax, [edx - 0xe] */ r_eax = (u32)(r_edx+0xfffffff2u);
L_008ba5c4:; BB(0x008ba5c4);
    /* 008ba5c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba5c6: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba5c9: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008ba5cc: lea ecx, [ecx*8 + 3] */ r_ecx = (u32)(r_ecx*8+0x3u);
    /* 008ba5d3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008ba5d6: jmp 0x8ba5f9 */ goto L_008ba5f9;
L_008ba5d8:; BB(0x008ba5d8);
    /* 008ba5d8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba5dc: je 0x8ba800 */ if (fZ) goto L_008ba800;
L_008ba5e2:; BB(0x008ba5e2);
    /* 008ba5e2: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008ba5e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba5e8: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008ba5ec: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba5ef: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008ba5f1: or dword ptr [ebp - 4], edx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba5f4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba5f5: add dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008ba5f9:; BB(0x008ba5f9);
    /* 008ba5f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008ba5fc: lea edx, [eax + ecx] */ r_edx = (u32)(r_eax+r_ecx);
    /* 008ba5ff: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ba602: jb 0x8ba5d8 */ if (fC) goto L_008ba5d8;
L_008ba604:; BB(0x008ba604);
    /* 008ba604: shr dword ptr [ebp - 4], cl */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008ba607: mov ecx, dword ptr [eax*4 + 0xa37ae0] */ r_ecx = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008ba60e: and ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba611: add dword ptr [ebp - 0x14], ecx */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ba614: mov ecx, eax */ r_ecx = r_eax;
    /* 008ba616: shr dword ptr [ebp - 4], cl */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008ba619: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008ba61c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ba61e: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba621: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008ba624: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008ba627: mov edx, eax */ r_edx = r_eax;
    /* 008ba629: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008ba62c: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ba62f: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba632: lea eax, [edx + eax + 0x102] */ r_eax = (u32)(r_edx+r_eax+0x102u);
    /* 008ba639: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008ba63c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ba63e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba640: ja 0x8ba818 */ if ((!fC&&!fZ)) goto L_008ba818;
L_008ba646:; BB(0x008ba646);
    /* 008ba646: cmp dword ptr [ebp - 0x2c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba64a: jne 0x8ba65e */ if (!fZ) goto L_008ba65e;
L_008ba64c:; BB(0x008ba64c);
    /* 008ba64c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba64f: jb 0x8ba818 */ if (fC) goto L_008ba818;
L_008ba655:; BB(0x008ba655);
    /* 008ba655: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008ba658: mov eax, dword ptr [eax + ecx*4 - 4] */ r_eax = R32((u32)(r_eax+r_ecx*4+0xfffffffcu));
    /* 008ba65c: jmp 0x8ba660 */ goto L_008ba660;
L_008ba65e:; BB(0x008ba65e);
    /* 008ba65e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008ba660:; BB(0x008ba660);
    /* 008ba660: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ba663: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 008ba666: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba667: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008ba66a: jne 0x8ba660 */ if (!fZ) goto L_008ba660;
L_008ba66c:; BB(0x008ba66c);
    /* 008ba66c: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
L_008ba66f:; BB(0x008ba66f);
    /* 008ba66f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008ba672: mov ecx, eax */ r_ecx = r_eax;
    /* 008ba674: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008ba677: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba67a: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba67d: lea eax, [ecx + eax + 0x102] */ r_eax = (u32)(r_ecx+r_eax+0x102u);
    /* 008ba684: cmp dword ptr [ebx + 8], eax */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba687: jb 0x8ba551 */ if (fC) goto L_008ba551;
L_008ba68d:; BB(0x008ba68d);
    /* 008ba68d: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008ba690: and dword ptr [ebx + 0x14], 0 */ { u32 ad = (u32)(r_ebx+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba694: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba695: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba698: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 008ba69b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba69c: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 008ba69f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba6a0: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 008ba6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba6a4: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 008ba6a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba6a8: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba6ab: mov ecx, eax */ r_ecx = r_eax;
    /* 008ba6ad: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008ba6b0: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba6b3: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba6b4: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ba6b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba6b8: add eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ba6bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba6be: mov dword ptr [ebp - 0x18], 9 */ W32((u32)(r_ebp+0xffffffe8u), 0x9u);
    /* 008ba6c5: mov dword ptr [ebp - 0x14], 6 */ W32((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 008ba6cc: call 0x8bceae */ r_esp -= 4; W32(r_esp, 0x8ba6d1u); f_008bceae();
    /* 008ba6d1: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba6d4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008ba6d7: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba6da: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba6ddu); call_ind(t); }
    /* 008ba6dd: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba6e0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba6e4: jne 0x8ba860 */ if (!fZ) goto L_008ba860;
L_008ba6ea:; BB(0x008ba6ea);
    /* 008ba6ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba6eb: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba6ee: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba6f1: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba6f4: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba6f7: call 0x8bc501 */ r_esp -= 4; W32(r_esp, 0x8ba6fcu); f_008bc501();
    /* 008ba6fc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba6ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba701: je 0x8ba874 */ if (fZ) goto L_008ba874;
L_008ba707:; BB(0x008ba707);
    /* 008ba707: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008ba70a: mov dword ptr [ebx], 6 */ W32((u32)(r_ebx), 0x6u);
L_008ba710:; BB(0x008ba710);
    /* 008ba710: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba713: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba716: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 008ba719: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ba71c: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 008ba71f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008ba722: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008ba725: mov eax, edi */ r_eax = r_edi;
    /* 008ba727: sub eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ba729: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba72a: add dword ptr [esi + 8], eax */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba72d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008ba730: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008ba732: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba733: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 008ba736: call 0x8bc535 */ r_esp -= 4; W32(r_esp, 0x8ba73bu); f_008bc535();
    /* 008ba73b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba73e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba741: jne 0x8ba8c0 */ if (!fZ) goto L_008ba8c0;
L_008ba747:; BB(0x008ba747);
    /* 008ba747: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba74b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba74c: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba74f: call 0x8bca99 */ r_esp -= 4; W32(r_esp, 0x8ba754u); f_008bca99();
    /* 008ba754: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008ba757: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008ba759: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008ba75c: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 008ba75f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008ba762: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 008ba765: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba766: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba767: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 008ba76a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008ba76d: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 008ba770: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba772: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008ba775: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008ba778: jae 0x8ba77f */ if (!fC) goto L_008ba77f;
L_008ba77a:; BB(0x008ba77a);
    /* 008ba77a: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ba77c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ba77d: jmp 0x8ba785 */ goto L_008ba785;
L_008ba77f:; BB(0x008ba77f);
    /* 008ba77f: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 008ba782: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008ba785:; BB(0x008ba785);
    /* 008ba785: cmp dword ptr [ebx + 0x18], 0 */ {  u32 a = R32((u32)(r_ebx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba789: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008ba78c: jne 0x8ba87b */ if (!fZ) goto L_008ba87b;
L_008ba792:; BB(0x008ba792);
    /* 008ba792: and dword ptr [ebx], 0 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008ba795:; BB(0x008ba795);
    /* 008ba795: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008ba797: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba79a: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008ba79d: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ba7a0: jbe 0x8ba1d9 */ if ((fC||fZ)) goto L_008ba1d9;
L_008ba7a6:; BB(0x008ba7a6);
    /* 008ba7a6: jmp 0x8ba1a7 */ goto L_008ba1a7;
L_008ba7ab:; BB(0x008ba7ab);
    /* 008ba7ab: mov dword ptr [ebx], 9 */ W32((u32)(r_ebx), 0x9u);
    /* 008ba7b1: mov dword ptr [esi + 0x18], 0x99ed0c */ W32((u32)(r_esi+0x18u), 0x99ed0cu);
L_008ba7b8:; BB(0x008ba7b8);
    /* 008ba7b8: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008ba7ba: jmp 0x8ba1a9 */ goto L_008ba1a9;
L_008ba7bf:; BB(0x008ba7bf);
    /* 008ba7bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba7c2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba7c5: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 008ba7c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba7cb: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 008ba7ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008ba7d1: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 008ba7d4: mov ecx, edi */ r_ecx = r_edi;
    /* 008ba7d6: sub ecx, dword ptr [esi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba7d8: add dword ptr [esi + 8], ecx */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba7db: jmp 0x8ba1c5 */ goto L_008ba1c5;
L_008ba7e0:; BB(0x008ba7e0);
    /* 008ba7e0: mov dword ptr [ebx], 9 */ W32((u32)(r_ebx), 0x9u);
    /* 008ba7e6: mov dword ptr [esi + 0x18], 0x99ece8 */ W32((u32)(r_esi+0x18u), 0x99ece8u);
    /* 008ba7ed: jmp 0x8ba7b8 */ goto L_008ba7b8;
L_008ba7ef:; BB(0x008ba7ef);
    /* 008ba7ef: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba7f2: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba7f5: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba7f8u); call_ind(t); }
    /* 008ba7f8: cmp dword ptr [ebp - 0x10], -3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba7fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba7fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba7fe: jmp 0x8ba864 */ goto L_008ba864;
L_008ba800:; BB(0x008ba800);
    /* 008ba800: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba803: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba806: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 008ba809: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ba80c: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 008ba80f: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba813: jmp 0x8ba1bb */ goto L_008ba1bb;
L_008ba818:; BB(0x008ba818);
    /* 008ba818: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba81b: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba81e: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba821u); call_ind(t); }
    /* 008ba821: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba824: mov dword ptr [ebx], 9 */ W32((u32)(r_ebx), 0x9u);
    /* 008ba82a: mov dword ptr [esi + 0x18], 0x99eccc */ W32((u32)(r_esi+0x18u), 0x99ecccu);
    /* 008ba831: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 008ba834: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ba837: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 008ba83a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008ba83d: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008ba840: mov eax, edi */ r_eax = r_edi;
    /* 008ba842: sub eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ba844: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008ba846: add dword ptr [esi + 8], eax */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba849: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008ba84c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba84d: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008ba84f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba850: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 008ba853: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8ba858u); f_008bcfe0();
    /* 008ba858: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ba85b: jmp 0x8ba1d4 */ goto L_008ba1d4;
L_008ba860:; BB(0x008ba860);
    /* 008ba860: cmp dword ptr [ebp - 0x10], -3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_008ba864:; BB(0x008ba864);
    /* 008ba864: jne 0x8ba86c */ if (!fZ) goto L_008ba86c;
L_008ba866:; BB(0x008ba866);
    /* 008ba866: mov dword ptr [ebx], 9 */ W32((u32)(r_ebx), 0x9u);
L_008ba86c:; BB(0x008ba86c);
    /* 008ba86c: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba86f: jmp 0x8ba1a9 */ goto L_008ba1a9;
L_008ba874:; BB(0x008ba874);
    /* 008ba874: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008ba876: jmp 0x8ba1a9 */ goto L_008ba1a9;
L_008ba87b:; BB(0x008ba87b);
    /* 008ba87b: mov dword ptr [ebx], 7 */ W32((u32)(r_ebx), 0x7u);
L_008ba881:; BB(0x008ba881);
    /* 008ba881: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba884: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008ba887: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba888: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ba889: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 008ba88c: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8ba891u); f_008bcfe0();
    /* 008ba891: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 008ba894: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba897: cmp dword ptr [ebx + 0x30], ecx */ {  u32 a = R32((u32)(r_ebx+0x30u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba89a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008ba89d: je 0x8ba8c6 */ if (fZ) goto L_008ba8c6;
L_008ba89f:; BB(0x008ba89f);
    /* 008ba89f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ba8a2: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 008ba8a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ba8a8: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 008ba8ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008ba8ae: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 008ba8b1: mov ecx, edi */ r_ecx = r_edi;
    /* 008ba8b3: sub ecx, dword ptr [esi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ba8b5: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008ba8b7: add dword ptr [esi + 8], ecx */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba8ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008ba8bd: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
L_008ba8c0:; BB(0x008ba8c0);
    /* 008ba8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ba8c1: jmp 0x8ba1ca */ goto L_008ba1ca;
L_008ba8c6:; BB(0x008ba8c6);
    /* 008ba8c6: mov dword ptr [ebx], 8 */ W32((u32)(r_ebx), 0x8u);
L_008ba8cc:; BB(0x008ba8cc);
    /* 008ba8cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba8ce: jmp 0x8ba1a9 */ goto L_008ba1a9;
}

void f_008ba8fb(void) /* sub_8BA8FB */
{
    FN_ENTER(0x008ba8fb);
    /* 008ba8fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba8fc: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008ba900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba901: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008ba905: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba907: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba909: call 0x8ba068 */ r_esp -= 4; W32(r_esp, 0x8ba90eu); f_008ba068();
    /* 008ba90e: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba911: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba914: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba917u); call_ind(t); }
    /* 008ba917: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba91a: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba91d: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba920u); call_ind(t); }
    /* 008ba920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba921: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ba924: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8ba927u); call_ind(t); }
    /* 008ba927: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba92a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ba92b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ba92d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ba92e: ret  */ FN_RET(0x008ba8fb); r_esp += 4; return;
}

void f_008ba92f(void) /* sub_8BA92F */
{
    FN_ENTER(0x008ba92f);
    /* 008ba92f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ba930: mov ebp, esp */ r_ebp = r_esp;
    /* 008ba932: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008ba935: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba936: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba937: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008ba93a: mov esi, edi */ r_esi = r_edi;
    /* 008ba93c: and esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008ba942: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008ba945: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ba947: jne 0x8ba951 */ if (!fZ) goto L_008ba951;
L_008ba949:; BB(0x008ba949);
    /* 008ba949: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008ba94b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008ba94c: jmp 0x8baa44 */ goto L_008baa44;
L_008ba951:; BB(0x008ba951);
    /* 008ba951: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ba955: jbe 0x8baa3d */ if ((fC||fZ)) goto L_008baa3d;
L_008ba95b:; BB(0x008ba95b);
    /* 008ba95b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_008ba95c:; BB(0x008ba95c);
    /* 008ba95c: mov edx, 0x15b0 */ r_edx = 0x15b0u;
    /* 008ba961: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba964: jae 0x8ba969 */ if (!fC) goto L_008ba969;
L_008ba966:; BB(0x008ba966);
    /* 008ba966: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
L_008ba969:; BB(0x008ba969);
    /* 008ba969: sub dword ptr [ebp + 0x10], edx */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba96c: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba96f: jl 0x8baa0c */ if ((fS!=fO)) goto L_008baa0c;
L_008ba975:; BB(0x008ba975);
    /* 008ba975: mov eax, edx */ r_eax = r_edx;
    /* 008ba977: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ba97a: mov ebx, eax */ r_ebx = r_eax;
    /* 008ba97c: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008ba97e: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008ba981: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008ba983:; BB(0x008ba983);
    /* 008ba983: movzx ebx, byte ptr [ecx] */ r_ebx = (u32)R8((u32)(r_ecx));
    /* 008ba986: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba988: movzx ebx, byte ptr [ecx + 1] */ r_ebx = (u32)R8((u32)(r_ecx+0x1u));
    /* 008ba98c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba98e: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba990: movzx ebx, byte ptr [ecx + 2] */ r_ebx = (u32)R8((u32)(r_ecx+0x2u));
    /* 008ba994: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba996: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba998: movzx ebx, byte ptr [ecx + 3] */ r_ebx = (u32)R8((u32)(r_ecx+0x3u));
    /* 008ba99c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba99e: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9a0: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 008ba9a4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9a6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9a8: movzx ebx, byte ptr [ecx + 5] */ r_ebx = (u32)R8((u32)(r_ecx+0x5u));
    /* 008ba9ac: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9ae: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9b0: movzx ebx, byte ptr [ecx + 6] */ r_ebx = (u32)R8((u32)(r_ecx+0x6u));
    /* 008ba9b4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9b6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9b8: movzx ebx, byte ptr [ecx + 7] */ r_ebx = (u32)R8((u32)(r_ecx+0x7u));
    /* 008ba9bc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9be: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9c0: movzx ebx, byte ptr [ecx + 8] */ r_ebx = (u32)R8((u32)(r_ecx+0x8u));
    /* 008ba9c4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9c6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9c8: movzx ebx, byte ptr [ecx + 9] */ r_ebx = (u32)R8((u32)(r_ecx+0x9u));
    /* 008ba9cc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9ce: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9d0: movzx ebx, byte ptr [ecx + 0xa] */ r_ebx = (u32)R8((u32)(r_ecx+0xau));
    /* 008ba9d4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9d6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9d8: movzx ebx, byte ptr [ecx + 0xb] */ r_ebx = (u32)R8((u32)(r_ecx+0xbu));
    /* 008ba9dc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9de: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9e0: movzx ebx, byte ptr [ecx + 0xc] */ r_ebx = (u32)R8((u32)(r_ecx+0xcu));
    /* 008ba9e4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9e6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9e8: movzx ebx, byte ptr [ecx + 0xd] */ r_ebx = (u32)R8((u32)(r_ecx+0xdu));
    /* 008ba9ec: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9ee: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9f0: movzx ebx, byte ptr [ecx + 0xe] */ r_ebx = (u32)R8((u32)(r_ecx+0xeu));
    /* 008ba9f4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9f6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9f8: movzx ebx, byte ptr [ecx + 0xf] */ r_ebx = (u32)R8((u32)(r_ecx+0xfu));
    /* 008ba9fc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9fe: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008baa00: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008baa02: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008baa05: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008baa06: jne 0x8ba983 */ if (!fZ) goto L_008ba983;
L_008baa0c:; BB(0x008baa0c);
    /* 008baa0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008baa0e: je 0x8baa1b */ if (fZ) goto L_008baa1b;
L_008baa10:; BB(0x008baa10);
    /* 008baa10: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008baa13: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008baa15: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008baa16: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008baa18: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008baa19: jne 0x8baa10 */ if (!fZ) goto L_008baa10;
L_008baa1b:; BB(0x008baa1b);
    /* 008baa1b: mov eax, esi */ r_eax = r_esi;
    /* 008baa1d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008baa1f: mov ebx, 0xfff1 */ r_ebx = 0xfff1u;
    /* 008baa24: mov esi, ebx */ r_esi = r_ebx;
    /* 008baa26: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x008baa26, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008baa26, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008baa28: mov eax, edi */ r_eax = r_edi;
    /* 008baa2a: mov esi, edx */ r_esi = r_edx;
    /* 008baa2c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008baa2e: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008baa2e, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008baa2e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008baa30: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008baa34: mov edi, edx */ r_edi = r_edx;
    /* 008baa36: ja 0x8ba95c */ if ((!fC&&!fZ)) goto L_008ba95c;
L_008baa3c:; BB(0x008baa3c);
    /* 008baa3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008baa3d:; BB(0x008baa3d);
    /* 008baa3d: mov eax, edi */ r_eax = r_edi;
    /* 008baa3f: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008baa42: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008baa44:; BB(0x008baa44);
    /* 008baa44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008baa45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008baa46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008baa47: ret  */ FN_RET(0x008ba92f); r_esp += 4; return;
}

void f_008baa48(void) /* sub_8BAA48 */
{
    FN_ENTER(0x008baa48);
    /* 008baa48: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008baa4c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008baa50: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8baa55u); f_008587c7();
    /* 008baa55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008baa56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008baa57: ret  */ FN_RET(0x008baa48); r_esp += 4; return;
}

void f_008baf80(void) /* sub_8BAF80 */
{
    FN_ENTER(0x008baf80);
    /* 008baf80: movd mm7, dword ptr [0xa36918] */ { u64 v = R32((u32)(0xa36918u)); fpr[7] = (long double)(i64)v; }
    /* 008baf87: movd mm6, dword ptr [0xa36918] */ { u64 v = R32((u32)(0xa36918u)); fpr[6] = (long double)(i64)v; }
    /* 008baf8e: movd mm5, dword ptr [0xa3691c] */ { u64 v = R32((u32)(0xa3691cu)); fpr[5] = (long double)(i64)v; }
    /* 008baf95: pand mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q & b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008baf98: pand mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q & b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008baf9b: psrld mm7, 1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1u; r.d[0] = c >= 32 ? 0 : (a.d[0] >> c); r.d[1] = c >= 32 ? 0 : (a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008baf9f: por mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q | b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008bafa2: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008bafa5: pand mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bafa8: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bafab: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bafae: pcmpgtd mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = ((i32)a.d[0] > (i32)b.d[0]) ? ~0u : 0; r.d[1] = ((i32)a.d[1] > (i32)b.d[1]) ? ~0u : 0; fpr[6] = (long double)(i64)(r.q); }
    /* 008bafb1: pfmax mm0, mm1 */ { u64 r = rt_pf_max((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bafb5: pslld mm6, 0x1f */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1fu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bafb9: pfmin mm1, mm2 */ { u64 r = rt_pf_min((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008bafbd: pfrcp mm2, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008bafc1: movd mm5, dword ptr [0xa36958] */ { u64 v = R32((u32)(0xa36958u)); fpr[5] = (long double)(i64)v; }
    /* 008bafc8: pfrcpit1 mm0, mm2 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008bafcc: movd mm4, dword ptr [0xa3695c] */ { u64 v = R32((u32)(0xa3695cu)); fpr[4] = (long double)(i64)v; }
    /* 008bafd3: pfrcpit2 mm0, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008bafd7: movd mm3, dword ptr [0xa36950] */ { u64 v = R32((u32)(0xa36950u)); fpr[3] = (long double)(i64)v; }
    /* 008bafde: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bafe2: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bafe5: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bafe9: pfadd mm3, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008bafed: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008baff1: movd mm2, dword ptr [0xa3694c] */ { u64 v = R32((u32)(0xa3694cu)); fpr[2] = (long double)(i64)v; }
    /* 008baff8: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008baffc: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008bb000: movd mm5, dword ptr [0xa36954] */ { u64 v = R32((u32)(0xa36954u)); fpr[5] = (long double)(i64)v; }
    /* 008bb007: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008bb00b: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008bb00f: movd mm2, dword ptr [0xa36948] */ { u64 v = R32((u32)(0xa36948u)); fpr[2] = (long double)(i64)v; }
    /* 008bb016: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008bb01a: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008bb01e: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008bb022: pfmul mm0, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008bb026: movq mm4, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb029: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bb02d: pfrcp mm5, mm3 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008bb031: pslld mm7, 1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1u; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[7] = (long double)(i64)(r.q); }
    /* 008bb035: pfrcpit1 mm3, mm5 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008bb039: pfrcpit2 mm3, mm5 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008bb03d: movq mm5, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb040: pxor mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008bb043: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008bb047: movd mm3, dword ptr [0xa36978] */ { u64 v = R32((u32)(0xa36978u)); fpr[3] = (long double)(i64)v; }
    /* 008bb04e: pxor mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb051: psrad mm6, 0x1f */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1fu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bb055: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bb059: pandn mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = ~a.q & b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008bb05c: movd mm1, dword ptr [0xa36918] */ { u64 v = R32((u32)(0xa36918u)); fpr[1] = (long double)(i64)v; }
    /* 008bb063: pfsub mm6, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[6], (u64)(i64)fpr[3]); fpr[6] = (long double)(i64)(r); }
    /* 008bb067: por mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb06a: pand mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb06d: pfadd mm0, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008bb071: por mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb074: ret  */ FN_RET(0x008baf80); r_esp += 4; return;
}

