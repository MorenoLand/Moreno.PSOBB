#include "protos.h"

void f_00840000(void)
{
    FN_ENTER(0x00840000);
    /* 00840000: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00840002: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00840004: daa  */ UNSUP(0x00840004, "daa ");
    /* 00840005: cmp edx, 0x281 */ {  u32 a = r_edx; u32 b = 0x281u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084000b: jne 0x84002c */ if (!fZ) goto L_0084002c;
L_0084000d:; BB(0x0084000d);
    /* 0084000d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00840010: and edx, 0x3ffffff0 */ {  u32 a = r_edx; u32 b = 0x3ffffff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00840016: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00840019: jmp 0x84002c */ goto L_0084002c;
L_0084002c:; BB(0x0084002c);
    /* 0084002c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084002f: je 0x840044 */ if (fZ) goto L_00840044;
L_00840031:; BB(0x00840031);
    /* 00840031: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00840034: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00840037: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0084003e: mov esp, ebp */ r_esp = r_ebp;
    /* 00840040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840041: ret 0x10 */ FN_RET(0x00840000); r_esp += 20; return;
L_00840044:; BB(0x00840044);
    /* 00840044: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0084004b: jmp 0x840070 */ goto L_00840070;
L_00840070:; BB(0x00840070);
    /* 00840070: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840073: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840076: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840079: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084007c: push dword ptr [0xadc958] */ { u32 v = R32((u32)(0xadc958u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840082: call dword ptr [0x8f83a4] */ { u32 t = R32((u32)(0x8f83a4u)); r_esp -= 4; W32(r_esp, 0x840088u); call_ind(t); }
    /* 00840088: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084008b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0084008e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00840095: mov esp, ebp */ r_esp = r_ebp;
    /* 00840097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840098: ret 0x10 */ FN_RET(0x00840000); r_esp += 20; return;
}

void f_00840010(void)
{
    FN_ENTER(0x00840010);
    /* 00840010: and edx, 0x3ffffff0 */ {  u32 a = r_edx; u32 b = 0x3ffffff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00840016: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00840019: jmp 0x84002c */ goto L_0084002c;
L_0084002c:; BB(0x0084002c);
    /* 0084002c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084002f: je 0x840044 */ if (fZ) goto L_00840044;
L_00840031:; BB(0x00840031);
    /* 00840031: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00840034: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00840037: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0084003e: mov esp, ebp */ r_esp = r_ebp;
    /* 00840040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840041: ret 0x10 */ FN_RET(0x00840010); r_esp += 20; return;
L_00840044:; BB(0x00840044);
    /* 00840044: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0084004b: jmp 0x840070 */ goto L_00840070;
L_00840070:; BB(0x00840070);
    /* 00840070: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840073: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840076: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840079: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084007c: push dword ptr [0xadc958] */ { u32 v = R32((u32)(0xadc958u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840082: call dword ptr [0x8f83a4] */ { u32 t = R32((u32)(0x8f83a4u)); r_esp -= 4; W32(r_esp, 0x840088u); call_ind(t); }
    /* 00840088: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084008b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0084008e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00840095: mov esp, ebp */ r_esp = r_ebp;
    /* 00840097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840098: ret 0x10 */ FN_RET(0x00840010); r_esp += 20; return;
}

void f_00840084(void)
{
    FN_ENTER(0x00840084);
    /* 00840084: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00840085: or dword ptr [edi - 0x179a7500], 0xffffff8b */ { u32 ad = (u32)(r_edi+0xe8658b00u);  u32 a = R32(ad); u32 b = 0xffffff8bu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0084008c: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    UNSUP(0x0084008d, "falls out of decoded code");
}

void f_0084009b(void)
{
    FN_ENTER(0x0084009b);
    goto L_0084009b;
L_0084002c:; BB(0x0084002c);
    /* 0084002c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084002f: je 0x840044 */ if (fZ) goto L_00840044;
L_00840031:; BB(0x00840031);
    /* 00840031: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00840034: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00840037: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0084003e: mov esp, ebp */ r_esp = r_ebp;
    /* 00840040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840041: ret 0x10 */ FN_RET(0x0084009b); r_esp += 20; return;
L_00840044:; BB(0x00840044);
    /* 00840044: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0084004b: jmp 0x840070 */ goto L_00840070;
L_00840070:; BB(0x00840070);
    /* 00840070: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840073: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840076: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840079: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084007c: push dword ptr [0xadc958] */ { u32 v = R32((u32)(0xadc958u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840082: call dword ptr [0x8f83a4] */ { u32 t = R32((u32)(0x8f83a4u)); r_esp -= 4; W32(r_esp, 0x840088u); call_ind(t); }
    /* 00840088: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084008b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0084008e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00840095: mov esp, ebp */ r_esp = r_ebp;
    /* 00840097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840098: ret 0x10 */ FN_RET(0x0084009b); r_esp += 20; return;
L_0084009b:; BB(0x0084009b);
    /* 0084009b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0084009e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084009f: call 0x840284 */ r_esp -= 4; W32(r_esp, 0x8400a4u); f_00840284();
    /* 008400a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008400a5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008400a8: jmp 0x84002c */ goto L_0084002c;
}

void f_008400b3(void)
{
    FN_ENTER(0x008400b3);
    goto L_008400b3;
L_0084002c:; BB(0x0084002c);
    /* 0084002c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084002f: je 0x840044 */ if (fZ) goto L_00840044;
L_00840031:; BB(0x00840031);
    /* 00840031: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00840034: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00840037: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0084003e: mov esp, ebp */ r_esp = r_ebp;
    /* 00840040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840041: ret 0x10 */ FN_RET(0x008400b3); r_esp += 20; return;
L_00840044:; BB(0x00840044);
    /* 00840044: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0084004b: jmp 0x840070 */ goto L_00840070;
L_00840070:; BB(0x00840070);
    /* 00840070: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840073: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840076: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840079: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084007c: push dword ptr [0xadc958] */ { u32 v = R32((u32)(0xadc958u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840082: call dword ptr [0x8f83a4] */ { u32 t = R32((u32)(0x8f83a4u)); r_esp -= 4; W32(r_esp, 0x840088u); call_ind(t); }
    /* 00840088: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084008b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0084008e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00840095: mov esp, ebp */ r_esp = r_ebp;
    /* 00840097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840098: ret 0x10 */ FN_RET(0x008400b3); r_esp += 20; return;
L_008400b3:; BB(0x008400b3);
    /* 008400b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008400b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008400b7: jmp 0x84002c */ goto L_0084002c;
}

void f_008400bc(void)
{
    FN_ENTER(0x008400bc);
    /* 008400bc: mov eax, 1 */ r_eax = 0x1u;
    /* 008400c1: ret  */ FN_RET(0x008400bc); r_esp += 4; return;
}

void f_008400c2(void)
{
    FN_ENTER(0x008400c2);
    /* 008400c2: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008400c5: mov eax, 1 */ r_eax = 0x1u;
    /* 008400ca: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008400cd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008400d0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008400d3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008400d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008400d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008400e0: mov esp, ebp */ r_esp = r_ebp;
    /* 008400e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008400e3: ret 0x10 */ FN_RET(0x008400c2); r_esp += 20; return;
}

void f_008400e8(void) /* sub_8400E8 */
{
    FN_ENTER(0x008400e8);
    /* 008400e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008400e9: mov ebp, esp */ r_ebp = r_esp;
    /* 008400eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008400ed: push 0x98b0f4 */ { u32 v = 0x98b0f4u; r_esp -= 4; W32(r_esp, v); }
    /* 008400f2: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008400f7: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008400fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008400fe: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00840105: sub esp, 0x218 */ {  u32 a = r_esp; u32 b = 0x218u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084010b: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0084010e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00840111: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00840114: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00840117: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0084011e: jmp 0x840129 */ goto L_00840129;
L_00840129:; BB(0x00840129);
    /* 00840129: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084012b: call dword ptr [0x8f83a8] */ { u32 t = R32((u32)(0x8f83a8u)); r_esp -= 4; W32(r_esp, 0x840131u); call_ind(t); }
    /* 00840131: mov dword ptr [ebp - 0x228], eax */ W32((u32)(r_ebp+0xfffffdd8u), r_eax);
    /* 00840137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0084013e: push dword ptr [ebp - 0x228] */ { u32 v = R32((u32)(r_ebp+0xfffffdd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840144: call 0x841994 */ r_esp -= 4; W32(r_esp, 0x840149u); f_00841994();
    /* 00840149: mov dword ptr [0xadc90c], eax */ W32((u32)(0xadc90cu), r_eax);
    /* 0084014e: lea eax, [ebp - 0x224] */ r_eax = (u32)(r_ebp+0xfffffddcu);
    /* 00840154: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00840159: push 0xadb3e0 */ { u32 v = 0xadb3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084015f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x840164u); f_00857dec();
    /* 00840164: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840167: mov eax, dword ptr [ebp - 0x228] */ r_eax = R32((u32)(r_ebp+0xfffffdd8u));
    /* 0084016d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084016f: mov word ptr [ebp - 0x26], bx */ W16((u32)(r_ebp+0xffffffdau), (u16)r_ebx);
    /* 00840173: mov word ptr [0xadb3e0], bx */ W16((u32)(0xadb3e0u), (u16)r_ebx);
    /* 0084017a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084017d: mov edx, 0xadb3e0 */ r_edx = 0xadb3e0u;
    /* 00840182: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 00840187: call 0x840204 */ r_esp -= 4; W32(r_esp, 0x84018cu); f_00840204();
    /* 0084018c: lea edx, [ebp - 0x224] */ r_edx = (u32)(r_ebp+0xfffffddcu);
    /* 00840192: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00840197: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840199: mov word ptr [0xadb5de], ax */ W16((u32)(0xadb5deu), (u16)r_eax);
    /* 0084019f: push 0xadb3e0 */ { u32 v = 0xadb3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008401a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008401a5: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x8401aau); f_00858643();
    /* 008401aa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008401ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008401af: je 0x8401cd */ if (fZ) goto L_008401cd;
L_008401b1:; BB(0x008401b1);
    /* 008401b1: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 008401b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008401b9: mov word ptr [0xadb5e0], ax */ W16((u32)(0xadb5e0u), (u16)r_eax);
    /* 008401bf: mov dword ptr [0xadc910], eax */ W32((u32)(0xadc910u), r_eax);
    /* 008401c4: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008401c7: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
L_008401cd:; BB(0x008401cd);
    /* 008401cd: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008401d0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008401d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008401d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008401dd: mov esp, ebp */ r_esp = r_ebp;
    /* 008401df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008401e0: ret  */ FN_RET(0x008400e8); r_esp += 4; return;
}

void f_008401e1(void)
{
    FN_ENTER(0x008401e1);
    /* 008401e1: mov eax, 1 */ r_eax = 0x1u;
    /* 008401e6: ret  */ FN_RET(0x008401e1); r_esp += 4; return;
}

void f_008401e7(void)
{
    FN_ENTER(0x008401e7);
    /* 008401e7: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008401ea: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008401ed: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008401f0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008401f3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008401f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008401f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00840200: mov esp, ebp */ r_esp = r_ebp;
    /* 00840202: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840203: ret  */ FN_RET(0x008401e7); r_esp += 4; return;
}

void f_00840204(void) /* sub_840204 */
{
    FN_ENTER(0x00840204);
    /* 00840204: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00840209: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084020a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084020b: call 0x8c0b1e */ r_esp -= 4; W32(r_esp, 0x840210u); f_008c0b1e();
    /* 00840210: ret  */ FN_RET(0x00840204); r_esp += 4; return;
}

void f_00840214(void) /* sub_840214 */
{
    FN_ENTER(0x00840214);
    /* 00840214: call 0x840230 */ r_esp -= 4; W32(r_esp, 0x840219u); f_00840230();
    /* 00840219: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 0084021f: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840222: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 00840228: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0084022d: ret  */ FN_RET(0x00840214); r_esp += 4; return;
}

void f_00840230(void) /* sub_840230 */
{
    FN_ENTER(0x00840230);
    /* 00840230: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 00840235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840237: mov word ptr [0xadb5e0], ax */ W16((u32)(0xadb5e0u), (u16)r_eax);
    /* 0084023d: push 0xadb5e0 */ { u32 v = 0xadb5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840242: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840244: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084024a: call 0x8c0b24 */ r_esp -= 4; W32(r_esp, 0x84024fu); f_008c0b24();
    /* 0084024f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840254: jg 0x840277 */ if ((!fZ&&fS==fO)) goto L_00840277;
L_00840256:; BB(0x00840256);
    /* 00840256: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840259: jl 0x84025f */ if ((fS!=fO)) goto L_0084025f;
L_0084025b:; BB(0x0084025b);
    /* 0084025b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0084025d: jl 0x84026c */ if ((fS!=fO)) goto L_0084026c;
L_0084025f:; BB(0x0084025f);
    /* 0084025f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00840261: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840263: mov word ptr [eax*2 + 0xadb5e0], dx */ W16((u32)(r_eax*2+0xadb5e0u), (u16)r_edx);
    /* 0084026b: ret  */ FN_RET(0x00840230); r_esp += 4; return;
L_0084026c:; BB(0x0084026c);
    /* 0084026c: mov ecx, 0x98b1c4 */ r_ecx = 0x98b1c4u;
    /* 00840271: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x840276u); f_0083c070();
    /* 00840276: ret  */ FN_RET(0x00840230); r_esp += 4; return;
L_00840277:; BB(0x00840277);
    /* 00840277: mov ecx, 0x98b19c */ r_ecx = 0x98b19cu;
    /* 0084027c: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x840281u); f_0083c070();
    /* 00840281: ret  */ FN_RET(0x00840230); r_esp += 4; return;
}

void f_00840284(void) /* sub_840284 */
{
    FN_ENTER(0x00840284);
    /* 00840284: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840285: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00840286: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00840287: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840288: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084028b: mov ecx, dword ptr [0xadc918] */ r_ecx = R32((u32)(0xadc918u));
    /* 00840291: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840293: je 0x8402ac */ if (fZ) goto L_008402ac;
L_00840295:; BB(0x00840295);
    /* 00840295: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00840298: jb 0x8402ac */ if (fC) goto L_008402ac;
L_0084029a:; BB(0x0084029a);
    /* 0084029a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084029d: ja 0x8402ac */ if ((!fC&&!fZ)) goto L_008402ac;
L_0084029f:; BB(0x0084029f);
    /* 0084029f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008402a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008402a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008402a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008402a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008402aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008402ab: ret  */ FN_RET(0x00840284); r_esp += 4; return;
L_008402ac:; BB(0x008402ac);
    /* 008402ac: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 008402af: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008402b2: ja 0x840793 */ if ((!fC&&!fZ)) goto L_00840793;
L_008402b8:; BB(0x008402b8);
    /* 008402b8: mov eax, dword ptr [eax*4 + 0x98b094] */ r_eax = R32((u32)(r_eax*4+0x98b094u));
    /* 008402bf: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00840793:; BB(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x00840284); r_esp += 4; return;
}

void f_008402c1(void)
{
    FN_ENTER(0x008402c1);
    /* 008402c1: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008402c7: call 0x8c0b2a */ r_esp -= 4; W32(r_esp, 0x8402ccu); f_008c0b2a();
    /* 008402cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008402ce: jne 0x8402fe */ if (!fZ) goto L_008402fe;
L_008402d0:; BB(0x008402d0);
    /* 008402d0: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 008402d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008402d8: mov word ptr [0xadb7e0], ax */ W16((u32)(0xadb7e0u), (u16)r_eax);
    /* 008402de: mov word ptr [0xadb5e0], ax */ W16((u32)(0xadb5e0u), (u16)r_eax);
    /* 008402e4: mov dword ptr [0xadc91c], eax */ W32((u32)(0xadc91cu), r_eax);
    /* 008402e9: mov dword ptr [0xadc920], eax */ W32((u32)(0xadc920u), r_eax);
    /* 008402ee: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008402f1: mov dword ptr [0xadc900], eax */ W32((u32)(0xadc900u), r_eax);
    /* 008402f6: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 008402fc: jmp 0x840378 */ goto L_00840378;
L_008402fe:; BB(0x008402fe);
    /* 008402fe: call 0x8408a8 */ r_esp -= 4; W32(r_esp, 0x840303u); f_008408a8();
    /* 00840303: mov eax, dword ptr [0xadc924] */ r_eax = R32((u32)(0xadc924u));
    /* 00840308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084030a: je 0x840313 */ if (fZ) goto L_00840313;
L_0084030c:; BB(0x0084030c);
    /* 0084030c: call 0x84083c */ r_esp -= 4; W32(r_esp, 0x840311u); f_0084083c();
    /* 00840311: jmp 0x84036b */ goto L_0084036b;
L_00840313:; BB(0x00840313);
    /* 00840313: push 0xadc920 */ { u32 v = 0xadc920u; r_esp -= 4; W32(r_esp, v); }
    /* 00840318: push 0xadc91c */ { u32 v = 0xadc91cu; r_esp -= 4; W32(r_esp, v); }
    /* 0084031d: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840323: call 0x8c0b30 */ r_esp -= 4; W32(r_esp, 0x840328u); f_008c0b30();
    /* 00840328: mov eax, dword ptr [0xadc91c] */ r_eax = R32((u32)(0xadc91cu));
    /* 0084032d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084032f: jne 0x840361 */ if (!fZ) goto L_00840361;
L_00840331:; BB(0x00840331);
    /* 00840331: mov eax, dword ptr [0xadc928] */ r_eax = R32((u32)(0xadc928u));
    /* 00840336: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840338: je 0x840361 */ if (fZ) goto L_00840361;
L_0084033a:; BB(0x0084033a);
    /* 0084033a: push dword ptr [0xadc920] */ { u32 v = R32((u32)(0xadc920u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840341: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840347: call 0x8c0b36 */ r_esp -= 4; W32(r_esp, 0x84034cu); f_008c0b36();
    /* 0084034c: push 0xadc920 */ { u32 v = 0xadc920u; r_esp -= 4; W32(r_esp, v); }
    /* 00840351: push 0xadc91c */ { u32 v = 0xadc91cu; r_esp -= 4; W32(r_esp, v); }
    /* 00840356: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084035c: call 0x8c0b30 */ r_esp -= 4; W32(r_esp, 0x840361u); f_008c0b30();
L_00840361:; BB(0x00840361);
    /* 00840361: mov dword ptr [0xadc900], 1 */ W32((u32)(0xadc900u), 0x1u);
L_0084036b:; BB(0x0084036b);
    /* 0084036b: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 00840370: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00840373: mov dword ptr [0xadc914], eax */ W32((u32)(0xadc914u), r_eax);
L_00840378:; BB(0x00840378);
    /* 00840378: mov eax, dword ptr [0xadc918] */ r_eax = R32((u32)(0xadc918u));
    /* 0084037d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084037f: jne 0x840793 */ if (!fZ) goto L_00840793;
L_00840385:; BB(0x00840385);
    /* 00840385: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840387: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084038a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084038b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084038c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084038d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084038e: ret  */ FN_RET(0x008402c1); r_esp += 4; return;
L_00840793:; BB(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x008402c1); r_esp += 4; return;
}

void f_0084038f(void)
{
    FN_ENTER(0x0084038f);
    /* 0084038f: push 0xadc920 */ { u32 v = 0xadc920u; r_esp -= 4; W32(r_esp, v); }
    /* 00840394: push 0xadc91c */ { u32 v = 0xadc91cu; r_esp -= 4; W32(r_esp, v); }
    /* 00840399: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084039f: mov ebx, dword ptr [0xadc91c] */ r_ebx = R32((u32)(0xadc91cu));
    /* 008403a5: call 0x8c0b30 */ r_esp -= 4; W32(r_esp, 0x8403aau); f_008c0b30();
    /* 008403aa: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 008403af: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 008403b5: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008403b8: mov dword ptr [0xadc914], eax */ W32((u32)(0xadc914u), r_eax);
    /* 008403bd: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008403c0: jne 0x840793 */ if (!fZ) goto L_00840793;
L_008403c6:; BB(0x008403c6);
    /* 008403c6: mov eax, dword ptr [0xadc90c] */ r_eax = R32((u32)(0xadc90cu));
    /* 008403cb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008403ce: je 0x840793 */ if (fZ) goto L_00840793;
L_008403d4:; BB(0x008403d4);
    /* 008403d4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008403d7: je 0x840793 */ if (fZ) goto L_00840793;
L_008403dd:; BB(0x008403dd);
    /* 008403dd: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008403df: je 0x840793 */ if (fZ) goto L_00840793;
L_008403e5:; BB(0x008403e5);
    /* 008403e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008403e7: mov word ptr [0xadb5e0], ax */ W16((u32)(0xadb5e0u), (u16)r_eax);
    /* 008403ed: jmp 0x840793 */ goto L_00840793;
L_00840793:; BB(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x0084038f); r_esp += 4; return;
}

void f_008403f2(void)
{
    FN_ENTER(0x008403f2);
    /* 008403f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008403f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008403f6:; BB(0x008403f6);
    /* 008403f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008403f8: mov word ptr [eax + 0xadb9e0], dx */ W16((u32)(r_eax+0xadb9e0u), (u16)r_edx);
    /* 008403ff: mov word ptr [eax + 0xadb9f0], dx */ W16((u32)(r_eax+0xadb9f0u), (u16)r_edx);
    /* 00840406: mov word ptr [eax + 0xadba00], dx */ W16((u32)(r_eax+0xadba00u), (u16)r_edx);
    /* 0084040d: mov word ptr [eax + 0xadba10], dx */ W16((u32)(r_eax+0xadba10u), (u16)r_edx);
    /* 00840414: mov word ptr [eax + 0xadba20], dx */ W16((u32)(r_eax+0xadba20u), (u16)r_edx);
    /* 0084041b: mov word ptr [eax + 0xadba30], dx */ W16((u32)(r_eax+0xadba30u), (u16)r_edx);
    /* 00840422: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00840425: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084042a: jl 0x8403f6 */ if ((fS!=fO)) goto L_008403f6;
L_0084042c:; BB(0x0084042c);
    /* 0084042c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084042e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084042f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840431: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840437: call 0x8c0b3c */ r_esp -= 4; W32(r_esp, 0x84043cu); f_008c0b3c();
    /* 0084043c: mov esi, eax */ r_esi = r_eax;
    /* 0084043e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840440: jne 0x84044c */ if (!fZ) goto L_0084044c;
L_00840442:; BB(0x00840442);
    /* 00840442: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00840447: jmp 0x84055d */ goto L_0084055d;
L_0084044c:; BB(0x0084044c);
    /* 0084044c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084044d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x840452u); f_00859c55();
    /* 00840452: mov ebp, eax */ r_ebp = r_eax;
    /* 00840454: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840457: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840459: je 0x8407bd */ if (fZ) goto L_008407bd;
L_0084045f:; BB(0x0084045f);
    /* 0084045f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00840460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00840461: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840463: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840469: call 0x8c0b3c */ r_esp -= 4; W32(r_esp, 0x84046eu); f_008c0b3c();
    /* 0084046e: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00840471: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00840473: jle 0x8407ac */ if ((fZ||fS!=fO)) goto L_008407ac;
L_00840479:; BB(0x00840479);
    /* 00840479: mov eax, dword ptr [0xadc92c] */ r_eax = R32((u32)(0xadc92cu));
    /* 0084047e: mov ecx, dword ptr [0xadc930] */ r_ecx = R32((u32)(0xadc930u));
    /* 00840484: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00840487: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0084048a: mov dword ptr [0xadc934], esi */ W32((u32)(0xadc934u), r_esi);
    /* 00840490: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00840493: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00840497: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840499: mov dword ptr [0xadc938], edx */ W32((u32)(0xadc938u), r_edx);
    /* 0084049f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008404a2: mov dword ptr [0xadc92c], esi */ W32((u32)(0xadc92cu), r_esi);
    /* 008404a8: mov dword ptr [0xadc93c], edx */ W32((u32)(0xadc93cu), r_edx);
    /* 008404ae: mov dword ptr [0xadc930], edi */ W32((u32)(0xadc930u), r_edi);
    /* 008404b4: je 0x8404ba */ if (fZ) goto L_008404ba;
L_008404b6:; BB(0x008404b6);
    /* 008404b6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008404b8: jne 0x8404c1 */ if (!fZ) goto L_008404c1;
L_008404ba:; BB(0x008404ba);
    /* 008404ba: mov ebx, 1 */ r_ebx = 0x1u;
    /* 008404bf: jmp 0x8404d6 */ goto L_008404d6;
L_008404c1:; BB(0x008404c1);
    /* 008404c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008404c3: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008404c3, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008404c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008404c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008404c7: mov ecx, eax */ r_ecx = r_eax;
    /* 008404c9: mov eax, esi */ r_eax = r_esi;
    /* 008404cb: div edi */ { u32 d = r_edi; if (!d) UNSUP(0x008404cb, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008404cb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008404cd: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008404cf: je 0x8404d6 */ if (fZ) goto L_008404d6;
L_008404d1:; BB(0x008404d1);
    /* 008404d1: mov ebx, 1 */ r_ebx = 0x1u;
L_008404d6:; BB(0x008404d6);
    /* 008404d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008404da: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008404de: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008404e1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008404e3: jmp 0x8404ec */ goto L_008404ec;
L_008404e5:; BB(0x008404e5);
    /* 008404e5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008404e9: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_008404ec:; BB(0x008404ec);
    /* 008404ec: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008404ee: jae 0x84054f */ if (!fC) goto L_0084054f;
L_008404f0:; BB(0x008404f0);
    /* 008404f0: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008404f4: mov ebp, dword ptr [ebx + esi*4 + 0x18] */ r_ebp = R32((u32)(r_ebx+r_esi*4+0x18u));
    /* 008404f8: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008404fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008404fb: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 008404fe: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00840501: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00840503: lea edi, [eax + eax + 0xadb9e0] */ r_edi = (u32)(r_eax+r_eax+0xadb9e0u);
    /* 0084050a: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x84050fu); f_00858009();
    /* 0084050f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00840513: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00840515: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00840516: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840517: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x84051cu); f_00857dec();
    /* 0084051c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084051f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00840523: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840526: jle 0x840535 */ if ((fZ||fS!=fO)) goto L_00840535;
L_00840528:; BB(0x00840528);
    /* 00840528: mov eax, 0x5f */ r_eax = 0x5fu;
    /* 0084052d: mov word ptr [ebx*8 + 0xadb9ec], ax */ W16((u32)(r_ebx*8+0xadb9ecu), (u16)r_eax);
L_00840535:; BB(0x00840535);
    /* 00840535: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840537: mov word ptr [ebx*8 + 0xadb9ee], ax */ W16((u32)(r_ebx*8+0xadb9eeu), (u16)r_eax);
    /* 0084053f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00840542: cmp esi, 0xc0 */ {  u32 a = r_esi; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00840548: jb 0x8404e5 */ if (fC) goto L_008404e5;
L_0084054a:; BB(0x0084054a);
    /* 0084054a: jmp 0x8407a0 */ goto L_008407a0;
L_0084054f:; BB(0x0084054f);
    /* 0084054f: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00840553: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00840556:; BB(0x00840556);
    /* 00840556: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00840557: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x84055cu); f_00858882();
    /* 0084055c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0084055d:; BB(0x0084055d);
    /* 0084055d: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840560: jne 0x84057e */ if (!fZ) goto L_0084057e;
L_00840562:; BB(0x00840562);
    /* 00840562: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 00840567: mov dword ptr [0xadc940], 0 */ W32((u32)(0xadc940u), 0x0u);
    /* 00840571: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00840574: mov dword ptr [0xadc914], eax */ W32((u32)(0xadc914u), r_eax);
    /* 00840579: jmp 0x840793 */ goto L_00840793;
L_0084057e:; BB(0x0084057e);
    /* 0084057e: call 0x8408a8 */ r_esp -= 4; W32(r_esp, 0x840583u); f_008408a8();
    /* 00840583: mov dword ptr [0xadc940], 1 */ W32((u32)(0xadc940u), 0x1u);
    /* 0084058d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084058f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840592: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840593: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840594: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00840595: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840596: ret  */ FN_RET(0x008403f2); r_esp += 4; return;
L_00840793:; BB(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x008403f2); r_esp += 4; return;
L_008407a0:; BB(0x008407a0);
    /* 008407a0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008407a4: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 008407a7: jmp 0x840556 */ goto L_00840556;
L_008407ac:; BB(0x008407ac);
    /* 008407ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008407ad: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8407b2u); f_00858882();
    /* 008407b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008407b3: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008407b8: jmp 0x84055d */ goto L_0084055d;
L_008407bd:; BB(0x008407bd);
    /* 008407bd: mov ecx, 0x98b1f0 */ r_ecx = 0x98b1f0u;
    /* 008407c2: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x8407c7u); f_0083c070();
    /* 008407c7: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008407cc: jmp 0x84055d */ goto L_0084055d;
}

void f_00840597(void)
{
    FN_ENTER(0x00840597);
    /* 00840597: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 0084059c: mov dword ptr [0xadc940], 0 */ W32((u32)(0xadc940u), 0x0u);
    /* 008405a6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008405a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008405ab: mov dword ptr [0xadc914], eax */ W32((u32)(0xadc914u), r_eax);
    /* 008405b0: jne 0x840793 */ if (!fZ) goto L_00840793;
L_008405b6:; BB(0x008405b6);
    /* 008405b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008405b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008405bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008405bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008405bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008405be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008405bf: ret  */ FN_RET(0x00840597); r_esp += 4; return;
L_00840793:; BB(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x00840597); r_esp += 4; return;
}

void f_008405c0(void)
{
    FN_ENTER(0x008405c0);
    /* 008405c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008405c2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008405c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008405c8:; BB(0x008405c8);
    /* 008405c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008405ca: mov word ptr [eax + 0xadb9e0], dx */ W16((u32)(r_eax+0xadb9e0u), (u16)r_edx);
    /* 008405d1: mov word ptr [eax + 0xadb9f0], dx */ W16((u32)(r_eax+0xadb9f0u), (u16)r_edx);
    /* 008405d8: mov word ptr [eax + 0xadba00], dx */ W16((u32)(r_eax+0xadba00u), (u16)r_edx);
    /* 008405df: mov word ptr [eax + 0xadba10], dx */ W16((u32)(r_eax+0xadba10u), (u16)r_edx);
    /* 008405e6: mov word ptr [eax + 0xadba20], dx */ W16((u32)(r_eax+0xadba20u), (u16)r_edx);
    /* 008405ed: mov word ptr [eax + 0xadba30], dx */ W16((u32)(r_eax+0xadba30u), (u16)r_edx);
    /* 008405f4: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008405f7: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008405fc: jl 0x8405c8 */ if ((fS!=fO)) goto L_008405c8;
L_008405fe:; BB(0x008405fe);
    /* 008405fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840603: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840609: call 0x8c0b3c */ r_esp -= 4; W32(r_esp, 0x84060eu); f_008c0b3c();
    /* 0084060e: mov ebx, eax */ r_ebx = r_eax;
    /* 00840610: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840612: jne 0x840622 */ if (!fZ) goto L_00840622;
L_00840614:; BB(0x00840614);
    /* 00840614: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840619: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084061d: jmp 0x84072f */ goto L_0084072f;
L_00840622:; BB(0x00840622);
    /* 00840622: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840623: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x840628u); f_00859c55();
    /* 00840628: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084062c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084062f: mov edx, eax */ r_edx = r_eax;
    /* 00840631: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840633: je 0x8407f9 */ if (fZ) goto L_008407f9;
L_00840639:; BB(0x00840639);
    /* 00840639: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084063a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084063b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084063d: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840643: call 0x8c0b3c */ r_esp -= 4; W32(r_esp, 0x840648u); f_008c0b3c();
    /* 00840648: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084064c: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0084064f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00840651: jle 0x8407e4 */ if ((fZ||fS!=fO)) goto L_008407e4;
L_00840657:; BB(0x00840657);
    /* 00840657: mov eax, dword ptr [0xadc92c] */ r_eax = R32((u32)(0xadc92cu));
    /* 0084065c: mov ebp, dword ptr [0xadc930] */ r_ebp = R32((u32)(0xadc930u));
    /* 00840662: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00840666: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00840669: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 0084066c: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 0084066f: mov dword ptr [0xadc934], ecx */ W32((u32)(0xadc934u), r_ecx);
    /* 00840675: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00840678: mov dword ptr [0xadc938], ecx */ W32((u32)(0xadc938u), r_ecx);
    /* 0084067e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840680: mov dword ptr [0xadc92c], ebx */ W32((u32)(0xadc92cu), r_ebx);
    /* 00840686: mov dword ptr [0xadc93c], edi */ W32((u32)(0xadc93cu), r_edi);
    /* 0084068c: mov dword ptr [0xadc930], esi */ W32((u32)(0xadc930u), r_esi);
    /* 00840692: je 0x840698 */ if (fZ) goto L_00840698;
L_00840694:; BB(0x00840694);
    /* 00840694: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840696: jne 0x8406a3 */ if (!fZ) goto L_008406a3;
L_00840698:; BB(0x00840698);
    /* 00840698: mov eax, 1 */ r_eax = 0x1u;
    /* 0084069d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008406a1: jmp 0x8406bc */ goto L_008406bc;
L_008406a3:; BB(0x008406a3);
    /* 008406a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008406a5: div ebp */ { u32 d = r_ebp; if (!d) UNSUP(0x008406a5, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008406a5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008406a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008406a9: mov ebp, eax */ r_ebp = r_eax;
    /* 008406ab: mov eax, ebx */ r_eax = r_ebx;
    /* 008406ad: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x008406ad, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008406ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008406af: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008406b1: je 0x8406bc */ if (fZ) goto L_008406bc;
L_008406b3:; BB(0x008406b3);
    /* 008406b3: mov eax, 1 */ r_eax = 0x1u;
    /* 008406b8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_008406bc:; BB(0x008406bc);
    /* 008406bc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008406be: jmp 0x8406c7 */ goto L_008406c7;
L_008406c0:; BB(0x008406c0);
    /* 008406c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008406c4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
L_008406c7:; BB(0x008406c7);
    /* 008406c7: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008406c9: jae 0x840724 */ if (!fC) goto L_00840724;
L_008406cb:; BB(0x008406cb);
    /* 008406cb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008406cf: mov ebp, dword ptr [ebx + esi*4 + 0x18] */ r_ebp = R32((u32)(r_ebx+r_esi*4+0x18u));
    /* 008406d3: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008406d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008406d6: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 008406d9: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 008406dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008406de: lea edi, [eax + eax + 0xadb9e0] */ r_edi = (u32)(r_eax+r_eax+0xadb9e0u);
    /* 008406e5: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x8406eau); f_00858009();
    /* 008406ea: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008406ee: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008406f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008406f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008406f2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x8406f7u); f_00857dec();
    /* 008406f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008406fa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008406fd: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840700: jle 0x84070f */ if ((fZ||fS!=fO)) goto L_0084070f;
L_00840702:; BB(0x00840702);
    /* 00840702: mov eax, 0x5f */ r_eax = 0x5fu;
    /* 00840707: mov word ptr [ebx*8 + 0xadb9ec], ax */ W16((u32)(r_ebx*8+0xadb9ecu), (u16)r_eax);
L_0084070f:; BB(0x0084070f);
    /* 0084070f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840711: mov word ptr [ebx*8 + 0xadb9ee], ax */ W16((u32)(r_ebx*8+0xadb9eeu), (u16)r_eax);
    /* 00840719: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084071c: cmp esi, 0xc0 */ {  u32 a = r_esi; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00840722: jb 0x8406c0 */ if (fC) goto L_008406c0;
L_00840724:; BB(0x00840724);
    /* 00840724: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00840728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840729: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x84072eu); f_00858882();
    /* 0084072e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0084072f:; BB(0x0084072f);
    /* 0084072f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00840733: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840736: jne 0x840751 */ if (!fZ) goto L_00840751;
L_00840738:; BB(0x00840738);
    /* 00840738: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 0084073d: mov dword ptr [0xadc940], 0 */ W32((u32)(0xadc940u), 0x0u);
    /* 00840747: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084074a: mov dword ptr [0xadc914], eax */ W32((u32)(0xadc914u), r_eax);
    /* 0084074f: jmp 0x840793 */ goto L_00840793;
L_00840751:; BB(0x00840751);
    /* 00840751: call 0x8408a8 */ r_esp -= 4; W32(r_esp, 0x840756u); f_008408a8();
    /* 00840756: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 0084075b: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840761: mov dword ptr [0xadc940], 1 */ W32((u32)(0xadc940u), 0x1u);
    /* 0084076b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084076e: mov dword ptr [0xadc914], eax */ W32((u32)(0xadc914u), r_eax);
    /* 00840773: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840776: jne 0x840781 */ if (!fZ) goto L_00840781;
L_00840778:; BB(0x00840778);
    /* 00840778: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0084077c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084077f: je 0x8407d1 */ if (fZ) goto L_008407d1;
L_00840781:; BB(0x00840781);
    /* 00840781: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840783: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840786: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840787: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840788: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00840789: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084078a: ret  */ FN_RET(0x008405c0); r_esp += 4; return;
L_00840793:; BB(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x008405c0); r_esp += 4; return;
L_008407d1:; BB(0x008407d1);
    /* 008407d1: mov eax, dword ptr [0xadc918] */ r_eax = R32((u32)(0xadc918u));
    /* 008407d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008407d8: jne 0x840793 */ if (!fZ) goto L_00840793;
L_008407da:; BB(0x008407da);
    /* 008407da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008407dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008407df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008407e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008407e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008407e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008407e3: ret  */ FN_RET(0x008405c0); r_esp += 4; return;
L_008407e4:; BB(0x008407e4);
    /* 008407e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008407e5: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8407eau); f_00858882();
    /* 008407ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008407eb: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008407f0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008407f4: jmp 0x84072f */ goto L_0084072f;
L_008407f9:; BB(0x008407f9);
    /* 008407f9: mov ecx, 0x98b1f0 */ r_ecx = 0x98b1f0u;
    /* 008407fe: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x840803u); f_0083c070();
    /* 00840803: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840808: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084080c: jmp 0x84072f */ goto L_0084072f;
}

void f_0084078b(void)
{
    FN_ENTER(0x0084078b);
    /* 0084078b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084078d: je 0x840811 */ if (fZ) goto L_00840811;
L_00840793:; BB(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x0084078b); r_esp += 4; return;
L_00840811:; BB(0x00840811);
    /* 00840811: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840817: call 0x8c0b0c */ r_esp -= 4; W32(r_esp, 0x84081cu); f_008c0b0c();
    /* 0084081c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084081e: je 0x840830 */ if (fZ) goto L_00840830;
L_00840820:; BB(0x00840820);
    /* 00840820: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840822: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00840824: push 0x283 */ { u32 v = 0x283u; r_esp -= 4; W32(r_esp, v); }
    /* 00840829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084082a: call dword ptr [0x8f8370] */ { u32 t = R32((u32)(0x8f8370u)); r_esp -= 4; W32(r_esp, 0x840830u); call_ind(t); }
L_00840830:; BB(0x00840830);
    /* 00840830: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840832: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840835: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840836: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840837: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00840838: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840839: ret  */ FN_RET(0x0084078b); r_esp += 4; return;
}

void f_00840793(void)
{
    FN_ENTER(0x00840793);
    /* 00840793: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00840798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084079b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084079c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084079d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084079e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084079f: ret  */ FN_RET(0x00840793); r_esp += 4; return;
}

void f_0084083c(void) /* sub_84083C */
{
    FN_ENTER(0x0084083c);
    /* 0084083c: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 00840841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840843: je 0x840898 */ if (fZ) goto L_00840898;
L_00840845:; BB(0x00840845);
    /* 00840845: push 0xadc920 */ { u32 v = 0xadc920u; r_esp -= 4; W32(r_esp, v); }
    /* 0084084a: push 0xadc91c */ { u32 v = 0xadc91cu; r_esp -= 4; W32(r_esp, v); }
    /* 0084084f: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840855: call 0x8c0b30 */ r_esp -= 4; W32(r_esp, 0x84085au); f_008c0b30();
    /* 0084085a: mov eax, dword ptr [0xadc91c] */ r_eax = R32((u32)(0xadc91cu));
    /* 0084085f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840861: je 0x840868 */ if (fZ) goto L_00840868;
L_00840863:; BB(0x00840863);
    /* 00840863: mov dword ptr [0xadc928], eax */ W32((u32)(0xadc928u), r_eax);
L_00840868:; BB(0x00840868);
    /* 00840868: push dword ptr [0xadc920] */ { u32 v = R32((u32)(0xadc920u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084086e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840870: mov dword ptr [0xadc91c], eax */ W32((u32)(0xadc91cu), r_eax);
    /* 00840875: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840876: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084087c: call 0x8c0b36 */ r_esp -= 4; W32(r_esp, 0x840881u); f_008c0b36();
    /* 00840881: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840883: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840889: call 0x8c0b12 */ r_esp -= 4; W32(r_esp, 0x84088eu); f_008c0b12();
    /* 0084088e: mov dword ptr [0xadc900], 0 */ W32((u32)(0xadc900u), 0x0u);
L_00840898:; BB(0x00840898);
    /* 00840898: mov dword ptr [0xadc924], 1 */ W32((u32)(0xadc924u), 0x1u);
    /* 008408a2: mov eax, 1 */ r_eax = 0x1u;
    /* 008408a7: ret  */ FN_RET(0x0084083c); r_esp += 4; return;
}

void f_008408a8(void) /* sub_8408A8 */
{
    FN_ENTER(0x008408a8);
    /* 008408a8: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008408ab: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 008408b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008408b2: je 0x840966 */ if (fZ) goto L_00840966;
L_008408b8:; BB(0x008408b8);
    /* 008408b8: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 008408bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008408bf: je 0x840966 */ if (fZ) goto L_00840966;
L_008408c5:; BB(0x008408c5);
    /* 008408c5: mov edx, dword ptr [0xadc918] */ r_edx = R32((u32)(0xadc918u));
    /* 008408cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008408cd: je 0x8408d8 */ if (fZ) goto L_008408d8;
L_008408cf:; BB(0x008408cf);
    /* 008408cf: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 008408d6: jmp 0x8408df */ goto L_008408df;
L_008408d8:; BB(0x008408d8);
    /* 008408d8: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
L_008408df:; BB(0x008408df);
    /* 008408df: mov dword ptr [esp + 0x14], 0x27f */ W32((u32)(r_esp+0x14u), 0x27fu);
    /* 008408e7: mov edx, 0x27d */ r_edx = 0x27du;
    /* 008408ec: mov ecx, 0x1dd */ r_ecx = 0x1ddu;
    /* 008408f1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008408f5: mov dword ptr [esp + 0x18], 0x1df */ W32((u32)(r_esp+0x18u), 0x1dfu);
    /* 008408fd: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00840901: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00840905: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00840909: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0084090c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084090d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084090e: call 0x8c0b42 */ r_esp -= 4; W32(r_esp, 0x840913u); f_008c0b42();
    /* 00840913: mov eax, dword ptr [0xadc918] */ r_eax = R32((u32)(0xadc918u));
    /* 00840918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084091a: jne 0x840966 */ if (!fZ) goto L_00840966;
L_0084091c:; BB(0x0084091c);
    /* 0084091c: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00840924: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00840928: mov eax, 0x27d */ r_eax = 0x27du;
    /* 0084092d: mov edx, 0x1dd */ r_edx = 0x1ddu;
    /* 00840932: mov dword ptr [esp + 0x20], 0x40 */ W32((u32)(r_esp+0x20u), 0x40u);
    /* 0084093a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084093e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00840942: mov dword ptr [esp + 0x34], 0x27f */ W32((u32)(r_esp+0x34u), 0x27fu);
    /* 0084094a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084094e: mov dword ptr [esp + 0x38], 0x1df */ W32((u32)(r_esp+0x38u), 0x1dfu);
    /* 00840956: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0084095a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084095b: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840961: call 0x8c0b48 */ r_esp -= 4; W32(r_esp, 0x840966u); f_008c0b48();
L_00840966:; BB(0x00840966);
    /* 00840966: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840969: ret  */ FN_RET(0x008408a8); r_esp += 4; return;
}

void f_0084096c(void) /* sub_84096C */
{
    FN_ENTER(0x0084096c);
    /* 0084096c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084096d: mov ebp, eax */ r_ebp = r_eax;
    /* 0084096f: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840975: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840977: je 0x84097f */ if (fZ) goto L_0084097f;
L_00840979:; BB(0x00840979);
    /* 00840979: mov dword ptr [0xadc928], edx */ W32((u32)(0xadc928u), r_edx);
L_0084097f:; BB(0x0084097f);
    /* 0084097f: mov edx, dword ptr [0xadc918] */ r_edx = R32((u32)(0xadc918u));
    /* 00840985: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840987: je 0x84098f */ if (fZ) goto L_0084098f;
L_00840989:; BB(0x00840989);
    /* 00840989: and ebp, 0xffffff67 */ {  u32 a = r_ebp; u32 b = 0xffffff67u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_0084098f:; BB(0x0084098f);
    /* 0084098f: test ebp, 0x800 */ {  u32 a = r_ebp; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840995: jne 0x8409f6 */ if (!fZ) goto L_008409f6;
L_00840997:; BB(0x00840997);
    /* 00840997: test ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084099d: jne 0x8409e0 */ if (!fZ) goto L_008409e0;
L_0084099f:; BB(0x0084099f);
    /* 0084099f: test ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008409a5: jne 0x8409ca */ if (!fZ) goto L_008409ca;
L_008409a7:; BB(0x008409a7);
    /* 008409a7: test ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008409ad: jne 0x8409b6 */ if (!fZ) goto L_008409b6;
L_008409af:; BB(0x008409af);
    /* 008409af: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008409b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008409b5: ret  */ FN_RET(0x0084096c); r_esp += 4; return;
L_008409b6:; BB(0x008409b6);
    /* 008409b6: call 0x840acc */ r_esp -= 4; W32(r_esp, 0x8409bbu); f_00840acc();
    /* 008409bb: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 008409c0: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008409c3: mov dword ptr [0xadc914], eax */ W32((u32)(0xadc914u), r_eax);
    /* 008409c8: jmp 0x8409af */ goto L_008409af;
L_008409ca:; BB(0x008409ca);
    /* 008409ca: call 0x840ab0 */ r_esp -= 4; W32(r_esp, 0x8409cfu); f_00840ab0();
    /* 008409cf: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 008409d5: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008409d8: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 008409de: jmp 0x8409a7 */ goto L_008409a7;
L_008409e0:; BB(0x008409e0);
    /* 008409e0: call 0x840230 */ r_esp -= 4; W32(r_esp, 0x8409e5u); f_00840230();
    /* 008409e5: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 008409eb: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008409ee: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 008409f4: jmp 0x84099f */ goto L_0084099f;
L_008409f6:; BB(0x008409f6);
    /* 008409f6: call 0x840a58 */ r_esp -= 4; W32(r_esp, 0x8409fbu); f_00840a58();
    /* 008409fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008409fd: mov word ptr [0xadb5e0], dx */ W16((u32)(0xadb5e0u), (u16)r_edx);
    /* 00840a04: mov dword ptr [0xadc910], edx */ W32((u32)(0xadc910u), r_edx);
    /* 00840a0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00840a0c:; BB(0x00840a0c);
    /* 00840a0c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00840a0e: mov word ptr [eax + 0xadb9e0], dx */ W16((u32)(r_eax+0xadb9e0u), (u16)r_edx);
    /* 00840a15: mov word ptr [eax + 0xadb9f0], dx */ W16((u32)(r_eax+0xadb9f0u), (u16)r_edx);
    /* 00840a1c: mov word ptr [eax + 0xadba00], dx */ W16((u32)(r_eax+0xadba00u), (u16)r_edx);
    /* 00840a23: mov word ptr [eax + 0xadba10], dx */ W16((u32)(r_eax+0xadba10u), (u16)r_edx);
    /* 00840a2a: mov word ptr [eax + 0xadba20], dx */ W16((u32)(r_eax+0xadba20u), (u16)r_edx);
    /* 00840a31: mov word ptr [eax + 0xadba30], dx */ W16((u32)(r_eax+0xadba30u), (u16)r_edx);
    /* 00840a38: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00840a3b: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840a40: jl 0x840a0c */ if ((fS!=fO)) goto L_00840a0c;
L_00840a42:; BB(0x00840a42);
    /* 00840a42: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840a48: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00840a4b: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 00840a51: jmp 0x840997 */ goto L_00840997;
}

void f_00840a58(void) /* sub_840A58 */
{
    FN_ENTER(0x00840a58);
    /* 00840a58: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 00840a5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840a5f: mov word ptr [0xadb7e0], ax */ W16((u32)(0xadb7e0u), (u16)r_eax);
    /* 00840a65: push 0xadb7e0 */ { u32 v = 0xadb7e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840a6a: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00840a6f: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840a75: call 0x8c0b24 */ r_esp -= 4; W32(r_esp, 0x840a7au); f_008c0b24();
    /* 00840a7a: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840a7f: jg 0x840aa2 */ if ((!fZ&&fS==fO)) goto L_00840aa2;
L_00840a81:; BB(0x00840a81);
    /* 00840a81: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840a84: jl 0x840a8a */ if ((fS!=fO)) goto L_00840a8a;
L_00840a86:; BB(0x00840a86);
    /* 00840a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00840a88: jl 0x840a97 */ if ((fS!=fO)) goto L_00840a97;
L_00840a8a:; BB(0x00840a8a);
    /* 00840a8a: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00840a8c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840a8e: mov word ptr [eax*2 + 0xadb7e0], dx */ W16((u32)(r_eax*2+0xadb7e0u), (u16)r_edx);
    /* 00840a96: ret  */ FN_RET(0x00840a58); r_esp += 4; return;
L_00840a97:; BB(0x00840a97);
    /* 00840a97: mov ecx, 0x98b1c4 */ r_ecx = 0x98b1c4u;
    /* 00840a9c: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x840aa1u); f_0083c070();
    /* 00840aa1: ret  */ FN_RET(0x00840a58); r_esp += 4; return;
L_00840aa2:; BB(0x00840aa2);
    /* 00840aa2: mov ecx, 0x98b19c */ r_ecx = 0x98b19cu;
    /* 00840aa7: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x840aacu); f_0083c070();
    /* 00840aac: ret  */ FN_RET(0x00840a58); r_esp += 4; return;
}

void f_00840ab0(void) /* sub_840AB0 */
{
    FN_ENTER(0x00840ab0);
    /* 00840ab0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840ab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00840ab4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00840ab9: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840abf: call 0x8c0b24 */ r_esp -= 4; W32(r_esp, 0x840ac4u); f_008c0b24();
    /* 00840ac4: mov dword ptr [0xadc910], eax */ W32((u32)(0xadc910u), r_eax);
    /* 00840ac9: ret  */ FN_RET(0x00840ab0); r_esp += 4; return;
}

void f_00840acc(void) /* sub_840ACC */
{
    FN_ENTER(0x00840acc);
    /* 00840acc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00840ace:; BB(0x00840ace);
    /* 00840ace: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00840ad0: mov byte ptr [eax + 0xadc5e0], dl */ W8((u32)(r_eax+0xadc5e0u), (u8)r_edx);
    /* 00840ad6: mov byte ptr [eax + 0xadc5e1], dl */ W8((u32)(r_eax+0xadc5e1u), (u8)r_edx);
    /* 00840adc: mov byte ptr [eax + 0xadc5e2], dl */ W8((u32)(r_eax+0xadc5e2u), (u8)r_edx);
    /* 00840ae2: mov byte ptr [eax + 0xadc5e3], dl */ W8((u32)(r_eax+0xadc5e3u), (u8)r_edx);
    /* 00840ae8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00840aeb: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840af0: jl 0x840ace */ if ((fS!=fO)) goto L_00840ace;
L_00840af2:; BB(0x00840af2);
    /* 00840af2: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00840af7: push 0xadc5e0 */ { u32 v = 0xadc5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840afc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00840afe: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840b04: call 0x8c0b24 */ r_esp -= 4; W32(r_esp, 0x840b09u); f_008c0b24();
    /* 00840b09: ret  */ FN_RET(0x00840acc); r_esp += 4; return;
}

void f_00840b0c(void) /* sub_840B0C */
{
    FN_ENTER(0x00840b0c);
    /* 00840b0c: mov eax, 0xadb7e0 */ r_eax = 0xadb7e0u;
    /* 00840b11: ret  */ FN_RET(0x00840b0c); r_esp += 4; return;
}

void f_00840b14(void) /* sub_840B14 */
{
    FN_ENTER(0x00840b14);
    /* 00840b14: mov eax, 0xadb5e0 */ r_eax = 0xadb5e0u;
    /* 00840b19: ret  */ FN_RET(0x00840b14); r_esp += 4; return;
}

void f_00840b1c(void) /* sub_840B1C */
{
    FN_ENTER(0x00840b1c);
    /* 00840b1c: mov eax, dword ptr [0xadc910] */ r_eax = R32((u32)(0xadc910u));
    /* 00840b21: ret  */ FN_RET(0x00840b1c); r_esp += 4; return;
}

void f_00840b24(void) /* sub_840B24 */
{
    FN_ENTER(0x00840b24);
    /* 00840b24: mov eax, 0xadc5e0 */ r_eax = 0xadc5e0u;
    /* 00840b29: ret  */ FN_RET(0x00840b24); r_esp += 4; return;
}

void f_00840b2c(void) /* sub_840B2C */
{
    FN_ENTER(0x00840b2c);
    /* 00840b2c: mov eax, dword ptr [0xadc91c] */ r_eax = R32((u32)(0xadc91cu));
    /* 00840b31: ret  */ FN_RET(0x00840b2c); r_esp += 4; return;
}

void f_00840b34(void) /* sub_840B34 */
{
    FN_ENTER(0x00840b34);
    /* 00840b34: mov eax, dword ptr [0xadc920] */ r_eax = R32((u32)(0xadc920u));
    /* 00840b39: ret  */ FN_RET(0x00840b34); r_esp += 4; return;
}

void f_00840b3c(void) /* sub_840B3C */
{
    FN_ENTER(0x00840b3c);
    /* 00840b3c: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 00840b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840b43: je 0x840b4e */ if (fZ) goto L_00840b4e;
L_00840b45:; BB(0x00840b45);
    /* 00840b45: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 00840b4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840b4c: je 0x840b57 */ if (fZ) goto L_00840b57;
L_00840b4e:; BB(0x00840b4e);
    /* 00840b4e: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 00840b53: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840b56: ret  */ FN_RET(0x00840b3c); r_esp += 4; return;
L_00840b57:; BB(0x00840b57);
    /* 00840b57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840b59: ret  */ FN_RET(0x00840b3c); r_esp += 4; return;
}

void f_00840b5c(void) /* sub_840B5C */
{
    FN_ENTER(0x00840b5c);
    /* 00840b5c: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 00840b61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840b63: je 0x840b6e */ if (fZ) goto L_00840b6e;
L_00840b65:; BB(0x00840b65);
    /* 00840b65: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 00840b6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840b6c: je 0x840b7f */ if (fZ) goto L_00840b7f;
L_00840b6e:; BB(0x00840b6e);
    /* 00840b6e: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840b74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840b76: mov eax, 0 */ r_eax = 0x0u;
    /* 00840b7b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00840b7e: ret  */ FN_RET(0x00840b5c); r_esp += 4; return;
L_00840b7f:; BB(0x00840b7f);
    /* 00840b7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840b81: ret  */ FN_RET(0x00840b5c); r_esp += 4; return;
}

void f_00840b84(void) /* sub_840B84 */
{
    FN_ENTER(0x00840b84);
    /* 00840b84: mov dword ptr [0xadc914], 0 */ W32((u32)(0xadc914u), 0x0u);
    /* 00840b8e: ret  */ FN_RET(0x00840b84); r_esp += 4; return;
}

void f_00840b90(void) /* sub_840B90 */
{
    FN_ENTER(0x00840b90);
    /* 00840b90: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 00840b95: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840b98: ret  */ FN_RET(0x00840b90); r_esp += 4; return;
}

void f_00840b9c(void) /* sub_840B9C */
{
    FN_ENTER(0x00840b9c);
    /* 00840b9c: mov eax, dword ptr [0xadc90c] */ r_eax = R32((u32)(0xadc90cu));
    /* 00840ba1: ret  */ FN_RET(0x00840b9c); r_esp += 4; return;
}

void f_00840ba4(void) /* sub_840BA4 */
{
    FN_ENTER(0x00840ba4);
    /* 00840ba4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00840ba5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840ba7: mov word ptr [0xadb3c0], ax */ W16((u32)(0xadb3c0u), (u16)r_eax);
    /* 00840bad: mov eax, dword ptr [0xadc90c] */ r_eax = R32((u32)(0xadc90cu));
    /* 00840bb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840bb4: je 0x840bf7 */ if (fZ) goto L_00840bf7;
L_00840bb6:; BB(0x00840bb6);
    /* 00840bb6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840bb9: je 0x840bdd */ if (fZ) goto L_00840bdd;
L_00840bbb:; BB(0x00840bbb);
    /* 00840bbb: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840bbe: jne 0x840bcc */ if (!fZ) goto L_00840bcc;
L_00840bc0:; BB(0x00840bc0);
    /* 00840bc0: mov eax, 0xadb3c0 */ r_eax = 0xadb3c0u;
    /* 00840bc5: call 0x840c64 */ r_esp -= 4; W32(r_esp, 0x840bcau); f_00840c64();
    /* 00840bca: jmp 0x840be7 */ goto L_00840be7;
L_00840bcc:; BB(0x00840bcc);
    /* 00840bcc: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840bcf: jne 0x840be7 */ if (!fZ) goto L_00840be7;
L_00840bd1:; BB(0x00840bd1);
    /* 00840bd1: mov eax, 0xadb3c0 */ r_eax = 0xadb3c0u;
    /* 00840bd6: call 0x840c04 */ r_esp -= 4; W32(r_esp, 0x840bdbu); f_00840c04();
    /* 00840bdb: jmp 0x840be7 */ goto L_00840be7;
L_00840bdd:; BB(0x00840bdd);
    /* 00840bdd: mov eax, 0xadb3c0 */ r_eax = 0xadb3c0u;
    /* 00840be2: call 0x840cc4 */ r_esp -= 4; W32(r_esp, 0x840be7u); f_00840cc4();
L_00840be7:; BB(0x00840be7);
    /* 00840be7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840be9: mov word ptr [0xadb3de], dx */ W16((u32)(0xadb3deu), (u16)r_edx);
    /* 00840bf0: mov eax, 0xadb3c0 */ r_eax = 0xadb3c0u;
    /* 00840bf5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00840bf6: ret  */ FN_RET(0x00840ba4); r_esp += 4; return;
L_00840bf7:; BB(0x00840bf7);
    /* 00840bf7: mov eax, 0xadb3c0 */ r_eax = 0xadb3c0u;
    /* 00840bfc: call 0x840d24 */ r_esp -= 4; W32(r_esp, 0x840c01u); f_00840d24();
    /* 00840c01: jmp 0x840be7 */ goto L_00840be7;
}

void f_00840c04(void) /* sub_840C04 */
{
    FN_ENTER(0x00840c04);
    /* 00840c04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c05: mov edi, eax */ r_edi = r_eax;
    /* 00840c07: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00840c09: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x840c0eu); f_00841950();
    /* 00840c0e: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00840c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00840c12: push 0x98b214 */ { u32 v = 0x98b214u; r_esp -= 4; W32(r_esp, v); }
    /* 00840c17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c18: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x840c1du); f_00857e29();
    /* 00840c1d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840c20: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840c26: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840c29: je 0x840c54 */ if (fZ) goto L_00840c54;
L_00840c2b:; BB(0x00840c2b);
    /* 00840c2b: push 0xa21c6c */ { u32 v = 0xa21c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00840c30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c31: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840c36u); f_00857fc3();
    /* 00840c36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840c39: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840c3f: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840c42: je 0x840c62 */ if (fZ) goto L_00840c62;
L_00840c44:; BB(0x00840c44);
    /* 00840c44: push 0xa21c68 */ { u32 v = 0xa21c68u; r_esp -= 4; W32(r_esp, v); }
    /* 00840c49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c4a: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840c4fu); f_00857fc3();
    /* 00840c4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840c52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840c53: ret  */ FN_RET(0x00840c04); r_esp += 4; return;
L_00840c54:; BB(0x00840c54);
    /* 00840c54: push 0x9099fc */ { u32 v = 0x9099fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00840c59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c5a: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840c5fu); f_00857fc3();
    /* 00840c5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00840c62:; BB(0x00840c62);
    /* 00840c62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840c63: ret  */ FN_RET(0x00840c04); r_esp += 4; return;
}

void f_00840c64(void) /* sub_840C64 */
{
    FN_ENTER(0x00840c64);
    /* 00840c64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c65: mov edi, eax */ r_edi = r_eax;
    /* 00840c67: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00840c69: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x840c6eu); f_00841950();
    /* 00840c6e: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00840c71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00840c72: push 0x98b214 */ { u32 v = 0x98b214u; r_esp -= 4; W32(r_esp, v); }
    /* 00840c77: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c78: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x840c7du); f_00857e29();
    /* 00840c7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840c80: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840c86: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840c89: je 0x840cb1 */ if (fZ) goto L_00840cb1;
L_00840c8b:; BB(0x00840c8b);
    /* 00840c8b: push 0xa21c74 */ { u32 v = 0xa21c74u; r_esp -= 4; W32(r_esp, v); }
    /* 00840c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c91: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840c96u); f_00857fc3();
    /* 00840c96: push 0x974eb8 */ { u32 v = 0x974eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840c9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840c9c: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840ca1u); f_00857fc3();
    /* 00840ca1: push 0xa21c70 */ { u32 v = 0xa21c70u; r_esp -= 4; W32(r_esp, v); }
    /* 00840ca6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840ca7: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840cacu); f_00857fc3();
    /* 00840cac: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840caf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840cb0: ret  */ FN_RET(0x00840c64); r_esp += 4; return;
L_00840cb1:; BB(0x00840cb1);
    /* 00840cb1: push 0xa21c78 */ { u32 v = 0xa21c78u; r_esp -= 4; W32(r_esp, v); }
    /* 00840cb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840cb7: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840cbcu); f_00857fc3();
    /* 00840cbc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840cbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840cc0: ret  */ FN_RET(0x00840c64); r_esp += 4; return;
}

void f_00840cc4(void) /* sub_840CC4 */
{
    FN_ENTER(0x00840cc4);
    /* 00840cc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840cc5: mov edi, eax */ r_edi = r_eax;
    /* 00840cc7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00840cc9: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x840cceu); f_00841950();
    /* 00840cce: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00840cd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00840cd2: push 0x98b214 */ { u32 v = 0x98b214u; r_esp -= 4; W32(r_esp, v); }
    /* 00840cd7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840cd8: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x840cddu); f_00857e29();
    /* 00840cdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840ce0: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840ce6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840ce9: je 0x840d11 */ if (fZ) goto L_00840d11;
L_00840ceb:; BB(0x00840ceb);
    /* 00840ceb: push 0xa21c80 */ { u32 v = 0xa21c80u; r_esp -= 4; W32(r_esp, v); }
    /* 00840cf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840cf1: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840cf6u); f_00857fc3();
    /* 00840cf6: push 0x974eb8 */ { u32 v = 0x974eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840cfb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840cfc: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840d01u); f_00857fc3();
    /* 00840d01: push 0xa21c7c */ { u32 v = 0xa21c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00840d06: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840d07: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840d0cu); f_00857fc3();
    /* 00840d0c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840d0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840d10: ret  */ FN_RET(0x00840cc4); r_esp += 4; return;
L_00840d11:; BB(0x00840d11);
    /* 00840d11: push 0xa21c84 */ { u32 v = 0xa21c84u; r_esp -= 4; W32(r_esp, v); }
    /* 00840d16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840d17: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840d1cu); f_00857fc3();
    /* 00840d1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840d1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840d20: ret  */ FN_RET(0x00840cc4); r_esp += 4; return;
}

void f_00840d24(void) /* sub_840D24 */
{
    FN_ENTER(0x00840d24);
    /* 00840d24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840d25: mov ebx, eax */ r_ebx = r_eax;
    /* 00840d27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840d29: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x840d2eu); f_00841950();
    /* 00840d2e: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00840d31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00840d32: push 0x98b214 */ { u32 v = 0x98b214u; r_esp -= 4; W32(r_esp, v); }
    /* 00840d37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840d38: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x840d3du); f_00857e29();
    /* 00840d3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840d40: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840d46: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840d49: je 0x840d5b */ if (fZ) goto L_00840d5b;
L_00840d4b:; BB(0x00840d4b);
    /* 00840d4b: push 0xa21cb0 */ { u32 v = 0xa21cb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840d51: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840d56u); f_00857fc3();
    /* 00840d56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840d59: jmp 0x840d69 */ goto L_00840d69;
L_00840d5b:; BB(0x00840d5b);
    /* 00840d5b: push 0xa21cb4 */ { u32 v = 0xa21cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00840d60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840d61: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840d66u); f_00857fc3();
    /* 00840d66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00840d69:; BB(0x00840d69);
    /* 00840d69: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840d6f: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840d72: je 0x840e06 */ if (fZ) goto L_00840e06;
L_00840d78:; BB(0x00840d78);
    /* 00840d78: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840d7b: je 0x840e04 */ if (fZ) goto L_00840e04;
L_00840d81:; BB(0x00840d81);
    /* 00840d81: push 0x974eb8 */ { u32 v = 0x974eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840d86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840d87: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840d8cu); f_00857fc3();
    /* 00840d8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840d8f: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840d95: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840d98: je 0x840daa */ if (fZ) goto L_00840daa;
L_00840d9a:; BB(0x00840d9a);
    /* 00840d9a: push 0xa21ca0 */ { u32 v = 0xa21ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840d9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840da0: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840da5u); f_00857fc3();
    /* 00840da5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840da8: jmp 0x840db8 */ goto L_00840db8;
L_00840daa:; BB(0x00840daa);
    /* 00840daa: push 0xa21ca8 */ { u32 v = 0xa21ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840daf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840db0: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840db5u); f_00857fc3();
    /* 00840db5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00840db8:; BB(0x00840db8);
    /* 00840db8: push 0x974eb8 */ { u32 v = 0x974eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840dbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840dbe: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840dc3u); f_00857fc3();
    /* 00840dc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840dc6: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840dcc: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840dcf: je 0x840df6 */ if (fZ) goto L_00840df6;
L_00840dd1:; BB(0x00840dd1);
    /* 00840dd1: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840dd4: je 0x840de6 */ if (fZ) goto L_00840de6;
L_00840dd6:; BB(0x00840dd6);
    /* 00840dd6: push 0xa21c94 */ { u32 v = 0xa21c94u; r_esp -= 4; W32(r_esp, v); }
    /* 00840ddb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840ddc: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840de1u); f_00857fc3();
    /* 00840de1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840de4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840de5: ret  */ FN_RET(0x00840d24); r_esp += 4; return;
L_00840de6:; BB(0x00840de6);
    /* 00840de6: push 0xa21c98 */ { u32 v = 0xa21c98u; r_esp -= 4; W32(r_esp, v); }
    /* 00840deb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840dec: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840df1u); f_00857fc3();
    /* 00840df1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840df4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840df5: ret  */ FN_RET(0x00840d24); r_esp += 4; return;
L_00840df6:; BB(0x00840df6);
    /* 00840df6: push 0xa21c9c */ { u32 v = 0xa21c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00840dfb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840dfc: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840e01u); f_00857fc3();
    /* 00840e01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00840e04:; BB(0x00840e04);
    /* 00840e04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840e05: ret  */ FN_RET(0x00840d24); r_esp += 4; return;
L_00840e06:; BB(0x00840e06);
    /* 00840e06: push 0x974eb8 */ { u32 v = 0x974eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840e0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840e0c: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840e11u); f_00857fc3();
    /* 00840e11: push 0xa21c8c */ { u32 v = 0xa21c8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00840e16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840e17: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840e1cu); f_00857fc3();
    /* 00840e1c: push 0x974eb8 */ { u32 v = 0x974eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00840e21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840e22: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840e27u); f_00857fc3();
    /* 00840e27: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00840e2a: mov edx, dword ptr [0xadc91c] */ r_edx = R32((u32)(0xadc91cu));
    /* 00840e30: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00840e33: je 0x840e45 */ if (fZ) goto L_00840e45;
L_00840e35:; BB(0x00840e35);
    /* 00840e35: push 0xa21c88 */ { u32 v = 0xa21c88u; r_esp -= 4; W32(r_esp, v); }
    /* 00840e3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840e3b: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840e40u); f_00857fc3();
    /* 00840e40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840e43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840e44: ret  */ FN_RET(0x00840d24); r_esp += 4; return;
L_00840e45:; BB(0x00840e45);
    /* 00840e45: push 0x98b21c */ { u32 v = 0x98b21cu; r_esp -= 4; W32(r_esp, v); }
    /* 00840e4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00840e4b: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x840e50u); f_00857fc3();
    /* 00840e50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840e53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00840e54: ret  */ FN_RET(0x00840d24); r_esp += 4; return;
}

void f_00840e58(void) /* sub_840E58 */
{
    FN_ENTER(0x00840e58);
    /* 00840e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00840e59: movzx edi, word ptr [esp + 8] */ r_edi = (u32)R16((u32)(r_esp+0x8u));
    /* 00840e5e: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00840e61: jl 0x840edc */ if ((fS!=fO)) goto L_00840edc;
L_00840e67:; BB(0x00840e67);
    /* 00840e67: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00840e6d: jg 0x840edc */ if ((!fZ&&fS==fO)) goto L_00840edc;
L_00840e6f:; BB(0x00840e6f);
    /* 00840e6f: mov eax, dword ptr [0xa21ccc] */ r_eax = R32((u32)(0xa21cccu));
    /* 00840e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840e76: jne 0x840edc */ if (!fZ) goto L_00840edc;
L_00840e78:; BB(0x00840e78);
    /* 00840e78: mov eax, dword ptr [0xadc924] */ r_eax = R32((u32)(0xadc924u));
    /* 00840e7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840e7f: je 0x840e88 */ if (fZ) goto L_00840e88;
L_00840e81:; BB(0x00840e81);
    /* 00840e81: cmp edi, 0x7e */ {  u32 a = r_edi; u32 b = 0x7eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00840e84: jle 0x840e88 */ if ((fZ||fS!=fO)) goto L_00840e88;
L_00840e86:; BB(0x00840e86);
    /* 00840e86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840e87: ret  */ FN_RET(0x00840e58); r_esp += 4; return;
L_00840e88:; BB(0x00840e88);
    /* 00840e88: mov eax, dword ptr [0xadc90c] */ r_eax = R32((u32)(0xadc90cu));
    /* 00840e8d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840e90: je 0x840f39 */ if (fZ) goto L_00840f39;
L_00840e96:; BB(0x00840e96);
    /* 00840e96: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840e99: jl 0x840ef8 */ if ((fS!=fO)) goto L_00840ef8;
L_00840e9b:; BB(0x00840e9b);
    /* 00840e9b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840e9e: jg 0x840f17 */ if ((!fZ&&fS==fO)) goto L_00840f17;
L_00840ea0:; BB(0x00840ea0);
    /* 00840ea0: mov eax, dword ptr [0xadc91c] */ r_eax = R32((u32)(0xadc91cu));
    /* 00840ea5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840ea7: je 0x840eb9 */ if (fZ) goto L_00840eb9;
L_00840ea9:; BB(0x00840ea9);
    /* 00840ea9: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840eaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840eb1: je 0x840fac */ if (fZ) goto L_00840fac;
L_00840eb7:; BB(0x00840eb7);
    /* 00840eb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840eb8: ret  */ FN_RET(0x00840e58); r_esp += 4; return;
L_00840eb9:; BB(0x00840eb9);
    /* 00840eb9: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840ebf: call 0x8c0b2a */ r_esp -= 4; W32(r_esp, 0x840ec4u); f_008c0b2a();
    /* 00840ec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840ec6: jne 0x840ed3 */ if (!fZ) goto L_00840ed3;
L_00840ec8:; BB(0x00840ec8);
    /* 00840ec8: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840ece: jmp 0x840fac */ goto L_00840fac;
L_00840ed3:; BB(0x00840ed3);
    /* 00840ed3: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 00840ed8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840eda: je 0x840ede */ if (fZ) goto L_00840ede;
L_00840edc:; BB(0x00840edc);
    /* 00840edc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840edd: ret  */ FN_RET(0x00840e58); r_esp += 4; return;
L_00840ede:; BB(0x00840ede);
    /* 00840ede: push 0xadb5e0 */ { u32 v = 0xadb5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840ee3: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x840ee8u); f_00858009();
    /* 00840ee8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00840ee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840eeb: jne 0x840edc */ if (!fZ) goto L_00840edc;
L_00840eed:; BB(0x00840eed);
    /* 00840eed: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840ef3: jmp 0x840fac */ goto L_00840fac;
L_00840ef8:; BB(0x00840ef8);
    /* 00840ef8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840efb: jne 0x840f17 */ if (!fZ) goto L_00840f17;
L_00840efd:; BB(0x00840efd);
    /* 00840efd: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840f03: call 0x8c0b2a */ r_esp -= 4; W32(r_esp, 0x840f08u); f_008c0b2a();
    /* 00840f08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840f0a: jne 0x840edc */ if (!fZ) goto L_00840edc;
L_00840f0c:; BB(0x00840f0c);
    /* 00840f0c: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840f12: jmp 0x840fac */ goto L_00840fac;
L_00840f17:; BB(0x00840f17);
    /* 00840f17: mov eax, dword ptr [0xadc91c] */ r_eax = R32((u32)(0xadc91cu));
    /* 00840f1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840f1e: je 0x840f22 */ if (fZ) goto L_00840f22;
L_00840f20:; BB(0x00840f20);
    /* 00840f20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840f21: ret  */ FN_RET(0x00840e58); r_esp += 4; return;
L_00840f22:; BB(0x00840f22);
    /* 00840f22: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840f28: call 0x8c0b2a */ r_esp -= 4; W32(r_esp, 0x840f2du); f_008c0b2a();
    /* 00840f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840f2f: jne 0x840edc */ if (!fZ) goto L_00840edc;
L_00840f31:; BB(0x00840f31);
    /* 00840f31: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840f37: jmp 0x840fac */ goto L_00840fac;
L_00840f39:; BB(0x00840f39);
    /* 00840f39: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840f3f: call 0x8c0b2a */ r_esp -= 4; W32(r_esp, 0x840f44u); f_008c0b2a();
    /* 00840f44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00840f46: je 0x840f99 */ if (fZ) goto L_00840f99;
L_00840f48:; BB(0x00840f48);
    /* 00840f48: mov eax, dword ptr [0xadc91c] */ r_eax = R32((u32)(0xadc91cu));
    /* 00840f4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840f4f: je 0x840edc */ if (fZ) goto L_00840edc;
L_00840f51:; BB(0x00840f51);
    /* 00840f51: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 00840f56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840f58: jne 0x840edc */ if (!fZ) goto L_00840edc;
L_00840f5a:; BB(0x00840f5a);
    /* 00840f5a: push 0xadb5e0 */ { u32 v = 0xadb5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00840f5f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x840f64u); f_00858009();
    /* 00840f64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00840f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840f67: jne 0x840edc */ if (!fZ) goto L_00840edc;
L_00840f6d:; BB(0x00840f6d);
    /* 00840f6d: cmp edi, 0x61 */ {  u32 a = r_edi; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840f70: jl 0x840f7b */ if ((fS!=fO)) goto L_00840f7b;
L_00840f72:; BB(0x00840f72);
    /* 00840f72: cmp edi, 0x7a */ {  u32 a = r_edi; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00840f75: jle 0x840edc */ if ((fZ||fS!=fO)) goto L_00840edc;
L_00840f7b:; BB(0x00840f7b);
    /* 00840f7b: cmp edi, 0x41 */ {  u32 a = r_edi; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00840f7e: jge 0x840f88 */ if ((fS==fO)) goto L_00840f88;
L_00840f80:; BB(0x00840f80);
    /* 00840f80: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840f86: jmp 0x840fac */ goto L_00840fac;
L_00840f88:; BB(0x00840f88);
    /* 00840f88: cmp edi, 0x5a */ {  u32 a = r_edi; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00840f8b: jle 0x840edc */ if ((fZ||fS!=fO)) goto L_00840edc;
L_00840f91:; BB(0x00840f91);
    /* 00840f91: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
    /* 00840f97: jmp 0x840fac */ goto L_00840fac;
L_00840f99:; BB(0x00840f99);
    /* 00840f99: mov eax, dword ptr [0xadc91c] */ r_eax = R32((u32)(0xadc91cu));
    /* 00840f9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840fa0: jne 0x840edc */ if (!fZ) goto L_00840edc;
L_00840fa6:; BB(0x00840fa6);
    /* 00840fa6: mov edx, dword ptr [0xadc914] */ r_edx = R32((u32)(0xadc914u));
L_00840fac:; BB(0x00840fac);
    /* 00840fac: mov word ptr [0xadb7e0], di */ W16((u32)(0xadb7e0u), (u16)r_edi);
    /* 00840fb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00840fb5: mov word ptr [0xadb7e2], ax */ W16((u32)(0xadb7e2u), (u16)r_eax);
    /* 00840fbb: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840fbe: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 00840fc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00840fc5: ret  */ FN_RET(0x00840e58); r_esp += 4; return;
}

void f_00840fc8(void) /* sub_840FC8 */
{
    FN_ENTER(0x00840fc8);
    /* 00840fc8: mov eax, 0xadb3e0 */ r_eax = 0xadb3e0u;
    /* 00840fcd: ret  */ FN_RET(0x00840fc8); r_esp += 4; return;
}

void f_00840fd0(void) /* sub_840FD0 */
{
    FN_ENTER(0x00840fd0);
    /* 00840fd0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00840fd4: mov eax, dword ptr [0xadc940] */ r_eax = R32((u32)(0xadc940u));
    /* 00840fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00840fdb: je 0x841002 */ if (fZ) goto L_00841002;
L_00840fdd:; BB(0x00840fdd);
    /* 00840fdd: cmp edx, dword ptr [0xadc938] */ {  u32 a = r_edx; u32 b = R32((u32)(0xadc938u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00840fe3: jae 0x841002 */ if (!fC) goto L_00841002;
L_00840fe5:; BB(0x00840fe5);
    /* 00840fe5: cmp edx, 0xc0 */ {  u32 a = r_edx; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00840feb: jb 0x840ff3 */ if (fC) goto L_00840ff3;
L_00840fed:; BB(0x00840fed);
    /* 00840fed: mov eax, 0x98b260 */ r_eax = 0x98b260u;
    /* 00840ff2: ret  */ FN_RET(0x00840fd0); r_esp += 4; return;
L_00840ff3:; BB(0x00840ff3);
    /* 00840ff3: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00840ff6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00840ff8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00840ffa: lea eax, [edx + edx + 0xadb9e0] */ r_eax = (u32)(r_edx+r_edx+0xadb9e0u);
    /* 00841001: ret  */ FN_RET(0x00840fd0); r_esp += 4; return;
L_00841002:; BB(0x00841002);
    /* 00841002: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 00841007: ret  */ FN_RET(0x00840fd0); r_esp += 4; return;
}

