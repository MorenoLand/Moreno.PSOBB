#include "protos.h"

void f_0046eb20(void) /* sub_46EB20 */
{
    FN_ENTER(0x0046eb20);
    /* 0046eb20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046eb24: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0046eb28: mov byte ptr [esp + 2], 0xe3 */ W8((u32)(r_esp+0x2u), 0xe3u);
    /* 0046eb2d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0046eb31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046eb33: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0046eb37: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 0046eb3b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0046eb3f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046eb41: mov edx, 0x10 */ r_edx = 0x10u;
    /* 0046eb46: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0046eb4a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0046eb4d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb50: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x46eb53u); call_ind(t); }
    /* 0046eb53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb54: call 0x6c1a80 */ r_esp -= 4; W32(r_esp, 0x46eb59u); f_006c1a80();
    /* 0046eb59: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046eb5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046eb5d: ret 4 */ FN_RET(0x0046eb20); r_esp += 8; return;
}

void f_0046eb60(void) /* sub_46EB60 */
{
    FN_ENTER(0x0046eb60);
    /* 0046eb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0046eb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb65: push 0x8cf6f8 */ { u32 v = 0x8cf6f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0046eb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0046eb78: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046eb7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0046eb7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0046eb81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0046eb84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0046eb87: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0046eb8a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0046eb91: push 0xaf8 */ { u32 v = 0xaf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb98: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x46eb9du); f_008587c7();
    /* 0046eb9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eba0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0046eba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eba5: je 0x46ec55 */ if (fZ) goto L_0046ec55;
L_0046ebab:; BB(0x0046ebab);
    /* 0046ebab: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0046ebb2: mov esi, 8 */ r_esi = 0x8u;
    /* 0046ebb7: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0046ebba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0046ebbc: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0046ebbf: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 0046ebc2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0046ebc5: mov dword ptr [eax + 0x2c0], edx */ W32((u32)(r_eax+0x2c0u), r_edx);
    /* 0046ebcb: mov dword ptr [eax + 0x2c4], edx */ W32((u32)(r_eax+0x2c4u), r_edx);
    /* 0046ebd1: mov dword ptr [eax + 0x2c8], edx */ W32((u32)(r_eax+0x2c8u), r_edx);
    /* 0046ebd7: mov dword ptr [eax + 0x2cc], edx */ W32((u32)(r_eax+0x2ccu), r_edx);
    /* 0046ebdd: mov byte ptr [eax + 0x2d0], dl */ W8((u32)(r_eax+0x2d0u), (u8)r_edx);
    /* 0046ebe3: mov byte ptr [eax + 0x2d1], dl */ W8((u32)(r_eax+0x2d1u), (u8)r_edx);
    /* 0046ebe9: mov byte ptr [eax + 0x2d2], dl */ W8((u32)(r_eax+0x2d2u), (u8)r_edx);
    /* 0046ebef: mov byte ptr [eax + 0x2d3], dl */ W8((u32)(r_eax+0x2d3u), (u8)r_edx);
    /* 0046ebf5: mov word ptr [eax + 0x2d4], dx */ W16((u32)(r_eax+0x2d4u), (u16)r_edx);
    /* 0046ebfc: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0046ebff:; BB(0x0046ebff);
    /* 0046ebff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ec06: mov byte ptr [eax + 2], 0xe2 */ W8((u32)(r_eax+0x2u), 0xe2u);
    /* 0046ec0a: mov edx, 0xaf8 */ r_edx = 0xaf8u;
    /* 0046ec0f: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0046ec12: lea edi, [eax + 8] */ r_edi = (u32)(r_eax+0x8u);
    /* 0046ec15: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 0046ec19: mov esi, dword ptr [0xa95df0] */ r_esi = R32((u32)(0xa95df0u));
    /* 0046ec1f: mov ecx, 0xaf0 */ r_ecx = 0xaf0u;
    /* 0046ec24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec25: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0046ec28: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0046ec2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046ec2b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ec2e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0046ec30: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ec33: push 0xaf8 */ { u32 v = 0xaf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046ec3b: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x46ec3eu); call_ind(t); }
    /* 0046ec3e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046ec41: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046ec44: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046ec47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046ec4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046ec51: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ec53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ec54: ret  */ FN_RET(0x0046eb60); r_esp += 4; return;
L_0046ec55:; BB(0x0046ec55);
    /* 0046ec55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046ec57: jmp 0x46ebff */ goto L_0046ebff;
}

void f_0046ec6c(void)
{
    FN_ENTER(0x0046ec6c);
    /* 0046ec6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec6d: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ec6f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046ec72: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0046ec75: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0046ec78: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0046ec7b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ec7e: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0046ec7f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec85: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec87: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x46ec8du); call_ind(t); }
    /* 0046ec8d: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0046ec8e: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0046ec8f: jmp 0x471eb0 */ f_00471eb0(); return;
}

