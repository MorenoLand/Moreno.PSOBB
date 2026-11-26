#include "protos.h"

void f_004be05c(void) /* sub_4BE05C */
{
    FN_ENTER(0x004be05c);
    /* 004be05c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be05d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004be05f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004be061: call 0x4be080 */ r_esp -= 4; W32(r_esp, 0x4be066u); f_004be080();
    /* 004be066: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004be06a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be06c: jne 0x4be072 */ if (!fZ) goto L_004be072;
L_004be06e:; BB(0x004be06e);
    /* 004be06e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be06f: ret 4 */ FN_RET(0x004be05c); r_esp += 8; return;
L_004be072:; BB(0x004be072);
    /* 004be072: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be073: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4be078u); f_005c2f74();
    /* 004be078: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be079: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be07a: ret 4 */ FN_RET(0x004be05c); r_esp += 8; return;
}

void f_004be080(void) /* sub_4BE080 */
{
    FN_ENTER(0x004be080);
    /* 004be080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be081: mov ebp, esp */ r_ebp = r_esp;
    /* 004be083: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be085: push 0x8d10b0 */ { u32 v = 0x8d10b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be08a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be091: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be098: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be09b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be09e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be0a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be0a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be0a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004be0aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be0ad: mov dword ptr [ecx], 0xafb2e0 */ W32((u32)(r_ecx), 0xafb2e0u);
    /* 004be0b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004be0ba: call 0x6686ec */ r_esp -= 4; W32(r_esp, 0x4be0bfu); f_006686ec();
    /* 004be0bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be0c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be0c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004be0cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be0cc: ret  */ FN_RET(0x004be080); r_esp += 4; return;
}

void f_004be0d0(void) /* sub_4BE0D0 */
{
    FN_ENTER(0x004be0d0);
    /* 004be0d0: call 0x4bf0a4 */ r_esp -= 4; W32(r_esp, 0x4be0d5u); f_004bf0a4();
    /* 004be0d5: call 0x4be710 */ r_esp -= 4; W32(r_esp, 0x4be0dau); f_004be710();
    /* 004be0da: call 0x4be2c0 */ r_esp -= 4; W32(r_esp, 0x4be0dfu); f_004be2c0();
    /* 004be0df: ret  */ FN_RET(0x004be0d0); r_esp += 4; return;
}

void f_004be0e0(void) /* sub_4BE0E0 */
{
    FN_ENTER(0x004be0e0);
    /* 004be0e0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4be0e5u); f_0061cdb0();
    /* 004be0e5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4be0eau); f_0061cdb0();
    /* 004be0ea: call 0x4bdee0 */ r_esp -= 4; W32(r_esp, 0x4be0efu); f_004bdee0();
    /* 004be0ef: ret  */ FN_RET(0x004be0e0); r_esp += 4; return;
}

void f_004be0f0(void)
{
    FN_ENTER(0x004be0f0);
    /* 004be0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004be0f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be0f5: push 0x8d10d8 */ { u32 v = 0x8d10d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004be0fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be101: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be108: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be10b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be10e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be111: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be114: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be117: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be11c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004be123: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4be128u); f_005caba4();
    /* 004be128: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be129: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004be12c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be12e: je 0x4be167 */ if (fZ) goto L_004be167;
L_004be130:; BB(0x004be130);
    /* 004be130: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004be137: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004be13e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be141: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be147: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be14a: call 0x4be16c */ r_esp -= 4; W32(r_esp, 0x4be14fu); f_004be16c();
    /* 004be14f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be152: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004be159:; BB(0x004be159);
    /* 004be159: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be15c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be163: mov esp, ebp */ r_esp = r_ebp;
    /* 004be165: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be166: ret  */ FN_RET(0x004be0f0); r_esp += 4; return;
L_004be167:; BB(0x004be167);
    /* 004be167: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be169: jmp 0x4be159 */ goto L_004be159;
}

void f_004be0fa(void) /* sub_4BE0FA */
{
    FN_ENTER(0x004be0fa);
    /* 004be0fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be101: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be108: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be10b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be10e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be111: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be114: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be117: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be11c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004be123: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4be128u); f_005caba4();
    /* 004be128: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be129: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004be12c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be12e: je 0x4be167 */ if (fZ) goto L_004be167;
L_004be130:; BB(0x004be130);
    /* 004be130: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004be137: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004be13e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be141: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be147: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be14a: call 0x4be16c */ r_esp -= 4; W32(r_esp, 0x4be14fu); f_004be16c();
    /* 004be14f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be152: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004be159:; BB(0x004be159);
    /* 004be159: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be15c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be163: mov esp, ebp */ r_esp = r_ebp;
    /* 004be165: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be166: ret  */ FN_RET(0x004be0fa); r_esp += 4; return;
L_004be167:; BB(0x004be167);
    /* 004be167: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be169: jmp 0x4be159 */ goto L_004be159;
}

void f_004be16c(void) /* sub_4BE16C */
{
    FN_ENTER(0x004be16c);
    /* 004be16c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be16d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004be16f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004be173: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004be177: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004be179: call 0x6696a4 */ r_esp -= 4; W32(r_esp, 0x4be17eu); f_006696a4();
    /* 004be17e: mov dword ptr [ebp], 0xafb2e0 */ W32((u32)(r_ebp), 0xafb2e0u);
    /* 004be185: mov eax, ebp */ r_eax = r_ebp;
    /* 004be187: mov dword ptr [ebp + 0xe0], 0 */ W32((u32)(r_ebp+0xe0u), 0x0u);
    /* 004be191: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be192: ret 8 */ FN_RET(0x004be16c); r_esp += 12; return;
}

void f_004be198(void) /* sub_4BE198 */
{
    FN_ENTER(0x004be198);
    /* 004be198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be199: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004be19b: call 0x4bff68 */ r_esp -= 4; W32(r_esp, 0x4be1a0u); f_004bff68();
    /* 004be1a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be1a2: je 0x4be1ae */ if (fZ) goto L_004be1ae;
L_004be1a4:; BB(0x004be1a4);
    /* 004be1a4: mov dword ptr [ebx + 0xe0], 1 */ W32((u32)(r_ebx+0xe0u), 0x1u);
L_004be1ae:; BB(0x004be1ae);
    /* 004be1ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004be1b0: call 0x669884 */ r_esp -= 4; W32(r_esp, 0x4be1b5u); f_00669884();
    /* 004be1b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be1b6: ret  */ FN_RET(0x004be198); r_esp += 4; return;
}

void f_004be1b8(void) /* sub_4BE1B8 */
{
    FN_ENTER(0x004be1b8);
    /* 004be1b8: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 004be1be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be1c0: je 0x4be1c7 */ if (fZ) goto L_004be1c7;
L_004be1c2:; BB(0x004be1c2);
    /* 004be1c2: call 0x669ab0 */ r_esp -= 4; W32(r_esp, 0x4be1c7u); f_00669ab0();
L_004be1c7:; BB(0x004be1c7);
    /* 004be1c7: ret  */ FN_RET(0x004be1b8); r_esp += 4; return;
}

void f_004be1c8(void) /* sub_4BE1C8 */
{
    FN_ENTER(0x004be1c8);
    /* 004be1c8: call 0x4bdf74 */ r_esp -= 4; W32(r_esp, 0x4be1cdu); f_004bdf74();
    /* 004be1cd: call 0x4c0008 */ r_esp -= 4; W32(r_esp, 0x4be1d2u); f_004c0008();
    /* 004be1d2: call 0x4be514 */ r_esp -= 4; W32(r_esp, 0x4be1d7u); f_004be514();
    /* 004be1d7: ret  */ FN_RET(0x004be1c8); r_esp += 4; return;
}

void f_004be1d8(void) /* sub_4BE1D8 */
{
    FN_ENTER(0x004be1d8);
    /* 004be1d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be1d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004be1db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004be1dd: call 0x4be1fc */ r_esp -= 4; W32(r_esp, 0x4be1e2u); f_004be1fc();
    /* 004be1e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004be1e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be1e8: jne 0x4be1ee */ if (!fZ) goto L_004be1ee;
L_004be1ea:; BB(0x004be1ea);
    /* 004be1ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be1eb: ret 4 */ FN_RET(0x004be1d8); r_esp += 8; return;
L_004be1ee:; BB(0x004be1ee);
    /* 004be1ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be1ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4be1f4u); f_005c2f74();
    /* 004be1f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be1f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be1f6: ret 4 */ FN_RET(0x004be1d8); r_esp += 8; return;
}

void f_004be1fc(void) /* sub_4BE1FC */
{
    FN_ENTER(0x004be1fc);
    /* 004be1fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be1fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004be1ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be201: push 0x8d10f4 */ { u32 v = 0x8d10f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be206: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be20c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be20d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be214: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be217: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be21a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be21d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be220: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be223: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004be226: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be229: mov dword ptr [ecx], 0xafb3b8 */ W32((u32)(r_ecx), 0xafb3b8u);
    /* 004be22f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004be236: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4be23bu); f_008171e8();
    /* 004be23b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be23e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be245: mov esp, ebp */ r_esp = r_ebp;
    /* 004be247: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be248: ret  */ FN_RET(0x004be1fc); r_esp += 4; return;
}

void f_004be24c(void) /* sub_4BE24C */
{
    FN_ENTER(0x004be24c);
    /* 004be24c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be24d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004be24f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004be251: call 0x4be270 */ r_esp -= 4; W32(r_esp, 0x4be256u); f_004be270();
    /* 004be256: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004be25a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be25c: jne 0x4be262 */ if (!fZ) goto L_004be262;
L_004be25e:; BB(0x004be25e);
    /* 004be25e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be25f: ret 4 */ FN_RET(0x004be24c); r_esp += 8; return;
L_004be262:; BB(0x004be262);
    /* 004be262: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be263: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4be268u); f_005c2f74();
    /* 004be268: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be269: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be26a: ret 4 */ FN_RET(0x004be24c); r_esp += 8; return;
}

void f_004be270(void) /* sub_4BE270 */
{
    FN_ENTER(0x004be270);
    /* 004be270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be271: mov ebp, esp */ r_ebp = r_esp;
    /* 004be273: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be275: push 0x8d1110 */ { u32 v = 0x8d1110u; r_esp -= 4; W32(r_esp, v); }
    /* 004be27a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be281: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be288: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be28b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be28e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be291: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be294: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be297: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004be29a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be29d: mov dword ptr [ecx], 0xafb3c8 */ W32((u32)(r_ecx), 0xafb3c8u);
    /* 004be2a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004be2aa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4be2afu); f_008171e8();
    /* 004be2af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be2b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be2b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004be2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be2bc: ret  */ FN_RET(0x004be270); r_esp += 4; return;
}

void f_004be2c0(void) /* sub_4BE2C0 */
{
    FN_ENTER(0x004be2c0);
    /* 004be2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004be2c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be2c5: push 0x8d1138 */ { u32 v = 0x8d1138u; r_esp -= 4; W32(r_esp, v); }
    /* 004be2ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be2d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be2d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be2db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be2de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be2e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be2e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be2e7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004be2e9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004be2f0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4be2f5u); f_005caba4();
    /* 004be2f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be2f6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004be2f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be2fb: je 0x4be320 */ if (fZ) goto L_004be320;
L_004be2fd:; BB(0x004be2fd);
    /* 004be2fd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004be304: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004be30b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be311: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be314: call 0x4be330 */ r_esp -= 4; W32(r_esp, 0x4be319u); f_004be330();
    /* 004be319: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004be320:; BB(0x004be320);
    /* 004be320: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be323: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be32a: mov esp, ebp */ r_esp = r_ebp;
    /* 004be32c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be32d: ret  */ FN_RET(0x004be2c0); r_esp += 4; return;
}

void f_004be330(void) /* sub_4BE330 */
{
    FN_ENTER(0x004be330);
    /* 004be330: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be331: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004be333: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004be339: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4be33eu); f_008193cc();
    /* 004be33e: mov dword ptr [ebx], 0xafb3b8 */ W32((u32)(r_ebx), 0xafb3b8u);
    /* 004be344: mov edx, dword ptr [0x9abd80] */ r_edx = R32((u32)(0x9abd80u));
    /* 004be34a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004be34d: mov eax, ebx */ r_eax = r_ebx;
    /* 004be34f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be350: ret 4 */ FN_RET(0x004be330); r_esp += 8; return;
}

void f_004be354(void) /* sub_4BE354 */
{
    FN_ENTER(0x004be354);
    /* 004be354: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004be355: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004be356: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be357: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be358: mov ebp, 0xa483a0 */ r_ebp = 0xa483a0u;
    /* 004be35d: mov edi, 0xa47fe0 */ r_edi = 0xa47fe0u;
    /* 004be362: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4be367u); f_0082d7b0();
    /* 004be367: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004be369: mov ebx, edi */ r_ebx = r_edi;
    /* 004be36b: mov edi, eax */ r_edi = r_eax;
L_004be36d:; BB(0x004be36d);
    /* 004be36d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004be36f: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4be374u); f_00830cd8();
    /* 004be374: mov ecx, dword ptr [edi + 0xa4844c] */ r_ecx = R32((u32)(r_edi+0xa4844cu));
    /* 004be37a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4be37fu); f_0082dcbc();
    /* 004be37f: fld dword ptr [0x9076e8] */ FPUSH(R_F32((u32)(0x9076e8u)));
    /* 004be385: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004be387: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004be38a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004be38e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004be390: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004be397: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004be39f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4be3a4u); f_00830b74();
    /* 004be3a4: mov esi, dword ptr [edi + 0xa4844c] */ r_esi = R32((u32)(r_edi+0xa4844cu));
    /* 004be3aa: add esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004be3b0: mov dword ptr [edi + 0xa4844c], esi */ W32((u32)(r_edi+0xa4844cu), r_esi);
    /* 004be3b6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004be3b9: add edx, 0x1333 */ {  u32 a = r_edx; u32 b = 0x1333u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004be3bf: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 004be3c2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004be3c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004be3c7: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4be3ccu); f_0082e9e4();
    /* 004be3cc: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004be3cf: add edx, 0x555 */ {  u32 a = r_edx; u32 b = 0x555u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004be3d5: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 004be3d8: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004be3db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004be3dd: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4be3e2u); f_0082e9e4();
    /* 004be3e2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004be3e4:; BB(0x004be3e4);
    /* 004be3e4: lea edx, [esi + 0xa48400] */ r_edx = (u32)(r_esi+0xa48400u);
    /* 004be3ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004be3ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004be3ed: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004be3f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004be3f2: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4be3f7u); f_00830aa0();
    /* 004be3f7: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004be3fa: cmp esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be3fd: jl 0x4be3e4 */ if ((fS!=fO)) goto L_004be3e4;
L_004be3ff:; BB(0x004be3ff);
    /* 004be3ff: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004be402: cmp edi, 0x28 */ {  u32 a = r_edi; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be405: jl 0x4be36d */ if ((fS!=fO)) goto L_004be36d;
L_004be40b:; BB(0x004be40b);
    /* 004be40b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4be410u); f_0082da80();
    /* 004be410: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be411: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be412: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004be413: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004be414: ret  */ FN_RET(0x004be354); r_esp += 4; return;
}

void f_004be418(void) /* sub_4BE418 */
{
    FN_ENTER(0x004be418);
    /* 004be418: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004be419: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be41a: mov esi, ecx */ r_esi = r_ecx;
    /* 004be41c: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 004be420: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004be424: mov ecx, esi */ r_ecx = r_esi;
    /* 004be426: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4be42bu); f_008193cc();
    /* 004be42b: mov dword ptr [esi], 0xafb3c8 */ W32((u32)(r_esi), 0xafb3c8u);
    /* 004be431: mov eax, dword ptr [0x9abd84] */ r_eax = R32((u32)(0x9abd84u));
    /* 004be436: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004be439: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004be43c: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004be43f: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004be442: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 004be445: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 004be448: mov dword ptr [esi + 0x2c], ebp */ W32((u32)(r_esi+0x2cu), r_ebp);
    /* 004be44b: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 004be452: call 0x4be464 */ r_esp -= 4; W32(r_esp, 0x4be457u); f_004be464();
    /* 004be457: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004be45a: mov eax, esi */ r_eax = r_esi;
    /* 004be45c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be45d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004be45e: ret 8 */ FN_RET(0x004be418); r_esp += 12; return;
}

void f_004be464(void) /* sub_4BE464 */
{
    FN_ENTER(0x004be464);
    /* 004be464: mov edx, dword ptr [0xa48448] */ r_edx = R32((u32)(0xa48448u));
    /* 004be46a: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004be46d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004be470: jl 0x4be47e */ if ((fS!=fO)) goto L_004be47e;
L_004be472:; BB(0x004be472);
    /* 004be472: mov dword ptr [0xa48448], 0 */ W32((u32)(0xa48448u), 0x0u);
    /* 004be47c: jmp 0x4be483 */ goto L_004be483;
L_004be47e:; BB(0x004be47e);
    /* 004be47e: mov dword ptr [0xa48448], eax */ W32((u32)(0xa48448u), r_eax);
L_004be483:; BB(0x004be483);
    /* 004be483: mov eax, edx */ r_eax = r_edx;
    /* 004be485: ret  */ FN_RET(0x004be464); r_esp += 4; return;
}

void f_004be488(void) /* sub_4BE488 */
{
    FN_ENTER(0x004be488);
    /* 004be488: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 004be48b: fsub dword ptr [0x9076cc] */ ST(0) = ST(0) - R_F32((u32)(0x9076ccu));
    /* 004be491: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004be494: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 004be497: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be49a: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004be49d: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004be4a0: jl 0x4be4b0 */ if ((fS!=fO)) goto L_004be4b0;
L_004be4a2:; BB(0x004be4a2);
    /* 004be4a2: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004be4a6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be4ab: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004be4af: ret  */ FN_RET(0x004be488); r_esp += 4; return;
L_004be4b0:; BB(0x004be4b0);
    /* 004be4b0: ret  */ FN_RET(0x004be488); r_esp += 4; return;
}

void f_004be4b4(void) /* sub_4BE4B4 */
{
    FN_ENTER(0x004be4b4);
    /* 004be4b4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be4b7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004be4ba: lea eax, [ecx + 0x24] */ r_eax = (u32)(r_ecx+0x24u);
    /* 004be4bd: call 0x4be4d0 */ r_esp -= 4; W32(r_esp, 0x4be4c2u); f_004be4d0();
    /* 004be4c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004be4c5: ret  */ FN_RET(0x004be4b4); r_esp += 4; return;
}

void f_004be4d0(void) /* sub_4BE4D0 */
{
    FN_ENTER(0x004be4d0);
    /* 004be4d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004be4d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be4d2: mov ebx, edx */ r_ebx = r_edx;
    /* 004be4d4: mov edi, eax */ r_edi = r_eax;
    /* 004be4d6: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4be4dbu); f_0082dab0();
    /* 004be4db: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4be4e0u); f_0082d7b0();
    /* 004be4e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004be4e2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4be4e7u); f_0082d838();
    /* 004be4e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be4e9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004be4eb: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004be4ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be4f0: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004be4f2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be4f4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be4f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be4f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004be4fa: lea edx, [eax + eax + 0xa47fe0] */ r_edx = (u32)(r_eax+r_eax+0xa47fe0u);
    /* 004be501: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be502: call 0x82b1c8 */ r_esp -= 4; W32(r_esp, 0x4be507u); f_0082b1c8();
    /* 004be507: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004be50a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4be50fu); f_0082da80();
    /* 004be50f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be510: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004be511: ret  */ FN_RET(0x004be4d0); r_esp += 4; return;
}

void f_004be514(void) /* sub_4BE514 */
{
    FN_ENTER(0x004be514);
    /* 004be514: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004be515: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004be516: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be517: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be518: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be51b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004be51d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004be51f: mov ebx, eax */ r_ebx = r_eax;
    /* 004be521: mov esi, edx */ r_esi = r_edx;
L_004be523:; BB(0x004be523);
    /* 004be523: fld dword ptr [0x9076e4] */ FPUSH(R_F32((u32)(0x9076e4u)));
    /* 004be529: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004be52c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004be52f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004be531: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004be535: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004be539: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004be53e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004be543: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004be547: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004be54b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004be54f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004be553: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004be557: mov ecx, edi */ r_ecx = r_edi;
    /* 004be559: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4be55eu); f_0082dcbc();
    /* 004be55e: fmul dword ptr [0x9076d0] */ ST(0) = ST(0) * R_F32((u32)(0x9076d0u));
    /* 004be564: fstp dword ptr [ebx + 0xa48400] */ W_F32((u32)(r_ebx+0xa48400u), ST(0)); FPOP();
    /* 004be56a: mov ecx, edi */ r_ecx = r_edi;
    /* 004be56c: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004be570: fmul dword ptr [0x9076e0] */ ST(0) = ST(0) * R_F32((u32)(0x9076e0u));
    /* 004be576: fstp dword ptr [ebx + 0xa48404] */ W_F32((u32)(r_ebx+0xa48404u), ST(0)); FPOP();
    /* 004be57c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4be581u); f_0082ddd8();
    /* 004be581: fld dword ptr [0x9076d0] */ FPUSH(R_F32((u32)(0x9076d0u)));
    /* 004be587: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004be589: fstp dword ptr [ebx + 0xa48408] */ W_F32((u32)(r_ebx+0xa48408u), ST(0)); FPOP();
    /* 004be58f: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004be592: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004be595: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be598: jl 0x4be523 */ if ((fS!=fO)) goto L_004be523;
L_004be59a:; BB(0x004be59a);
    /* 004be59a: mov edx, 0xa483a0 */ r_edx = 0xa483a0u;
    /* 004be59f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004be5a1: mov ebx, eax */ r_ebx = r_eax;
    /* 004be5a3: mov esi, edx */ r_esi = r_edx;
L_004be5a5:; BB(0x004be5a5);
    /* 004be5a5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4be5aau); f_008587a5();
    /* 004be5aa: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004be5ae: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004be5b2: fdiv dword ptr [0x9076dc] */ ST(0) = ST(0) / R_F32((u32)(0x9076dcu));
    /* 004be5b8: fmul dword ptr [0x9076d8] */ ST(0) = ST(0) * R_F32((u32)(0x9076d8u));
    /* 004be5be: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004be5c1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004be5c5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004be5ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004be5cf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004be5d3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004be5d7: fistp dword ptr [esi] */ W32((u32)(r_esi), (u32)fx_int32(ST(0))); FPOP();
    /* 004be5d9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004be5dd: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004be5e0: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be5e3: jl 0x4be5a5 */ if ((fS!=fO)) goto L_004be5a5;
L_004be5e5:; BB(0x004be5e5);
    /* 004be5e5: mov ecx, 0xa47fe0 */ r_ecx = 0xa47fe0u;
    /* 004be5ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004be5ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004be5ee: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004be5f0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004be5f2:; BB(0x004be5f2);
    /* 004be5f2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004be5f4: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 004be5f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004be5f8: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 004be5fb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004be5fd: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 004be600: mov ebx, 0xff709070 */ r_ebx = 0xff709070u;
    /* 004be605: mov dword ptr [ecx + 0xc], ebx */ W32((u32)(r_ecx+0xcu), r_ebx);
    /* 004be608: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 004be60b: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 004be60e: mov dword ptr [ecx + 0x18], esi */ W32((u32)(r_ecx+0x18u), r_esi);
    /* 004be611: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 004be614: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004be616: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 004be619: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004be61b: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 004be61e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004be620: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 004be623: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 004be626: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004be628: mov dword ptr [ecx + 0x30], edi */ W32((u32)(r_ecx+0x30u), r_edi);
    /* 004be62b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004be62d: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 004be630: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004be632: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 004be635: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 004be638: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004be63b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004be63e: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be641: jl 0x4be5f2 */ if ((fS!=fO)) goto L_004be5f2;
L_004be643:; BB(0x004be643);
    /* 004be643: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004be645: mov ebx, eax */ r_ebx = r_eax;
L_004be647:; BB(0x004be647);
    /* 004be647: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4be64cu); f_008587a5();
    /* 004be64c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004be650: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004be654: fdiv dword ptr [0x9076dc] */ ST(0) = ST(0) / R_F32((u32)(0x9076dcu));
    /* 004be65a: fmul dword ptr [0x9076d8] */ ST(0) = ST(0) * R_F32((u32)(0x9076d8u));
    /* 004be660: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004be664: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004be669: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004be66e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004be672: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004be676: fistp dword ptr [ebx + 0xa4844c] */ W32((u32)(r_ebx+0xa4844cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004be67c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004be680: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004be683: cmp ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004be686: jl 0x4be647 */ if ((fS!=fO)) goto L_004be647;
L_004be688:; BB(0x004be688);
    /* 004be688: mov dword ptr [0xa48448], 0 */ W32((u32)(0xa48448u), 0x0u);
    /* 004be692: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004be695: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be696: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be697: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004be698: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004be699: ret  */ FN_RET(0x004be514); r_esp += 4; return;
}

void f_004be69c(void) /* sub_4BE69C */
{
    FN_ENTER(0x004be69c);
    /* 004be69c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be69d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004be69f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004be6a1: call 0x4be6c0 */ r_esp -= 4; W32(r_esp, 0x4be6a6u); f_004be6c0();
    /* 004be6a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004be6aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be6ac: jne 0x4be6b2 */ if (!fZ) goto L_004be6b2;
L_004be6ae:; BB(0x004be6ae);
    /* 004be6ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be6af: ret 4 */ FN_RET(0x004be69c); r_esp += 8; return;
L_004be6b2:; BB(0x004be6b2);
    /* 004be6b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be6b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4be6b8u); f_005c2f74();
    /* 004be6b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be6b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004be6ba: ret 4 */ FN_RET(0x004be69c); r_esp += 8; return;
}

void f_004be6c0(void) /* sub_4BE6C0 */
{
    FN_ENTER(0x004be6c0);
    /* 004be6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004be6c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be6c5: push 0x8d1154 */ { u32 v = 0x8d1154u; r_esp -= 4; W32(r_esp, v); }
    /* 004be6ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be6d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be6d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be6d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be6db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be6de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be6e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be6e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be6e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004be6ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be6ed: mov dword ptr [ecx], 0xafb478 */ W32((u32)(r_ecx), 0xafb478u);
    /* 004be6f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004be6fa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4be6ffu); f_008171e8();
    /* 004be6ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be702: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be709: mov esp, ebp */ r_esp = r_ebp;
    /* 004be70b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be70c: ret  */ FN_RET(0x004be6c0); r_esp += 4; return;
}

void f_004be710(void) /* sub_4BE710 */
{
    FN_ENTER(0x004be710);
    /* 004be710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be711: mov ebp, esp */ r_ebp = r_esp;
    /* 004be713: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be715: push 0x8d117c */ { u32 v = 0x8d117cu; r_esp -= 4; W32(r_esp, v); }
    /* 004be71a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be721: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be728: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be72b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be72e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004be731: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be734: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004be737: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004be739: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004be740: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4be745u); f_005caba4();
    /* 004be745: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be746: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004be749: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be74b: je 0x4be786 */ if (fZ) goto L_004be786;
L_004be74d:; BB(0x004be74d);
    /* 004be74d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004be754: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004be75b: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be761: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be764: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4be769u); f_008193cc();
    /* 004be769: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be76c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004be773:; BB(0x004be773);
    /* 004be773: mov dword ptr [0xa48480], eax */ W32((u32)(0xa48480u), r_eax);
    /* 004be778: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be77b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be782: mov esp, ebp */ r_esp = r_ebp;
    /* 004be784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be785: ret  */ FN_RET(0x004be710); r_esp += 4; return;
L_004be786:; BB(0x004be786);
    /* 004be786: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be788: jmp 0x4be773 */ goto L_004be773;
}

void f_004be78c(void) /* sub_4BE78C */
{
    FN_ENTER(0x004be78c);
    /* 004be78c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004be78d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004be791: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004be794: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be796: je 0x4be7be */ if (fZ) goto L_004be7be;
L_004be798:; BB(0x004be798);
    /* 004be798: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004be79b: mov ebx, eax */ r_ebx = r_eax;
L_004be79d:; BB(0x004be79d);
    /* 004be79d: push dword ptr [0xa48480] */ { u32 v = R32((u32)(0xa48480u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be7a3: fld dword ptr [0x907704] */ FPUSH(R_F32((u32)(0x907704u)));
    /* 004be7a9: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 004be7ac: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 004be7af: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x4be7b4u); f_008172d4();
    /* 004be7b4: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004be7b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be7b9: jne 0x4be79d */ if (!fZ) goto L_004be79d;
L_004be7bb:; BB(0x004be7bb);
    /* 004be7bb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_004be7be:; BB(0x004be7be);
    /* 004be7be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be7bf: ret  */ FN_RET(0x004be78c); r_esp += 4; return;
}

void f_004be7c0(void) /* sub_4BE7C0 */
{
    FN_ENTER(0x004be7c0);
    /* 004be7c0: push 0xc0a00000 */ { u32 v = 0xc0a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004be7c5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004be7c9: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004be7cd: call 0x4be7d8 */ r_esp -= 4; W32(r_esp, 0x4be7d2u); f_004be7d8();
    /* 004be7d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004be7d5: ret  */ FN_RET(0x004be7c0); r_esp += 4; return;
}

void f_004be7d8(void) /* sub_4BE7D8 */
{
    FN_ENTER(0x004be7d8);
    /* 004be7d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be7d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004be7db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be7dd: push 0x8d11a4 */ { u32 v = 0x8d11a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be7e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be7e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be7e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be7f0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be7f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be7f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004be7f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004be7fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004be7ff: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be804: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004be80b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4be810u); f_005caba4();
    /* 004be810: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004be813: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004be816: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004be819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be81b: je 0x4be8ac */ if (fZ) goto L_004be8ac;
L_004be821:; BB(0x004be821);
    /* 004be821: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004be828: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004be82f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004be832: call 0x50cd1c */ r_esp -= 4; W32(r_esp, 0x4be837u); f_0050cd1c();
    /* 004be837: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004be838: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004be83b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004be83d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004be842: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004be844: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be845: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be847: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be849: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be84c: call 0x508c34 */ r_esp -= 4; W32(r_esp, 0x4be851u); f_00508c34();
    /* 004be851: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004be858:; BB(0x004be858);
    /* 004be858: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004be85f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004be862: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be864: je 0x4be895 */ if (fZ) goto L_004be895;
L_004be866:; BB(0x004be866);
    /* 004be866: mov ecx, eax */ r_ecx = r_eax;
    /* 004be868: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004be86a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4be86du); call_ind(t); }
    /* 004be86d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004be870: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004be873: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be875: je 0x4be895 */ if (fZ) goto L_004be895;
L_004be877:; BB(0x004be877);
    /* 004be877: push dword ptr [0xa48480] */ { u32 v = R32((u32)(0xa48480u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be87d: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 004be880: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 004be883: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 004be886: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x4be88bu); f_008172d4();
    /* 004be88b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004be88e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004be891: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be893: jne 0x4be877 */ if (!fZ) goto L_004be877;
L_004be895:; BB(0x004be895);
    /* 004be895: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004be898: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004be89b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004be89e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be8a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be8a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004be8aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be8ab: ret  */ FN_RET(0x004be7d8); r_esp += 4; return;
L_004be8ac:; BB(0x004be8ac);
    /* 004be8ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004be8ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004be8b1: jmp 0x4be858 */ goto L_004be858;
}

void f_004be8b4(void) /* sub_4BE8B4 */
{
    FN_ENTER(0x004be8b4);
    /* 004be8b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004be8b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004be8b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be8b7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be8ba: mov edi, ecx */ r_edi = r_ecx;
    /* 004be8bc: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 004be8c0: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004be8c4: mov ecx, edi */ r_ecx = r_edi;
    /* 004be8c6: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004be8ca: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4be8cfu); f_008193cc();
    /* 004be8cf: mov dword ptr [edi], 0xafb478 */ W32((u32)(r_edi), 0xafb478u);
    /* 004be8d5: mov eax, dword ptr [0x9abd88] */ r_eax = R32((u32)(0x9abd88u));
    /* 004be8da: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004be8dd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4be8e2u); f_008587a5();
    /* 004be8e2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004be8e5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004be8e8: fdiv dword ptr [0x9076f8] */ ST(0) = ST(0) / R_F32((u32)(0x9076f8u));
    /* 004be8ee: fadd dword ptr [0x9076fc] */ ST(0) = ST(0) + R_F32((u32)(0x9076fcu));
    /* 004be8f4: fmul dword ptr [0x9076f4] */ ST(0) = ST(0) * R_F32((u32)(0x9076f4u));
    /* 004be8fa: fadd dword ptr [0x9076f0] */ ST(0) = ST(0) + R_F32((u32)(0x9076f0u));
    /* 004be900: fmul dword ptr [0x9076cc] */ ST(0) = ST(0) * R_F32((u32)(0x9076ccu));
    /* 004be906: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 004be909: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4be90eu); f_008587a5();
    /* 004be90e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004be912: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004be916: fdiv dword ptr [0x9076f8] */ ST(0) = ST(0) / R_F32((u32)(0x9076f8u));
    /* 004be91c: fmul dword ptr [edi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x20u));
    /* 004be91f: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 004be922: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004be924: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 004be927: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 004be92a: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004be92d: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 004be930: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 004be933: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004be936: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004be939: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004be93c: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004be93f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004be943: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 004be946: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 004be949: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004be94c: mov eax, edi */ r_eax = r_edi;
    /* 004be94e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004be951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be952: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004be953: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004be954: ret 0x10 */ FN_RET(0x004be8b4); r_esp += 20; return;
}

void f_004be958(void) /* sub_4BE958 */
{
    FN_ENTER(0x004be958);
    /* 004be958: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004be959: mov ebp, esp */ r_ebp = r_esp;
    /* 004be95b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004be95d: push 0x8d11cc */ { u32 v = 0x8d11ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004be962: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004be968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004be969: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004be970: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004be973: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004be976: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004be979: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004be97c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004be97f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004be982: call 0x4d30f4 */ r_esp -= 4; W32(r_esp, 0x4be987u); f_004d30f4();
    /* 004be987: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004be98a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004be98d: je 0x4bea7e */ if (fZ) goto L_004bea7e;
L_004be993:; BB(0x004be993);
    /* 004be993: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004be996: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004be999: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 004be99c: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 004be99e: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 004be9a1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004be9a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004be9a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004be9a6: jbe 0x4be9b4 */ if ((fC||fZ)) goto L_004be9b4;
L_004be9a8:; BB(0x004be9a8);
    /* 004be9a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004be9aa: mov eax, ecx */ r_eax = r_ecx;
    /* 004be9ac: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 004be9af: jmp 0x4bea7e */ goto L_004bea7e;
L_004be9b4:; BB(0x004be9b4);
    /* 004be9b4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004be9b6: mov esi, ecx */ r_esi = r_ecx;
    /* 004be9b8: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004be9bb: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 004be9be: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 004be9c1: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 004be9c4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004be9c7: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004be9ca: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004be9cd: fsub dword ptr [0x9076cc] */ ST(0) = ST(0) - R_F32((u32)(0x9076ccu));
    /* 004be9d3: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004be9d6: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 004be9d8: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004be9db: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004be9e0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004be9e7: add esi, 0x34 */ {  u32 a = r_esi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004be9ea: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004be9ed: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4be9f2u); f_005caba4();
    /* 004be9f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004be9f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004be9f8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004be9fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004be9fd: je 0x4bea95 */ if (fZ) goto L_004bea95;
L_004bea03:; BB(0x004bea03);
    /* 004bea03: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004bea0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bea11: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004bea16: call 0x50cd1c */ r_esp -= 4; W32(r_esp, 0x4bea1bu); f_0050cd1c();
    /* 004bea1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bea1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004bea1f: lea esi, [ebp - 0x38] */ r_esi = (u32)(r_ebp+0xffffffc8u);
    /* 004bea22: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bea24: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004bea29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004bea2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bea30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bea31: call 0x508c34 */ r_esp -= 4; W32(r_esp, 0x4bea36u); f_00508c34();
    /* 004bea36: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004bea3d:; BB(0x004bea3d);
    /* 004bea3d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bea44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004bea47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bea49: je 0x4bea7e */ if (fZ) goto L_004bea7e;
L_004bea4b:; BB(0x004bea4b);
    /* 004bea4b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bea4d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004bea4f: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4bea52u); call_ind(t); }
    /* 004bea52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004bea55: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 004bea58: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bea5a: je 0x4bea7e */ if (fZ) goto L_004bea7e;
L_004bea5c:; BB(0x004bea5c);
    /* 004bea5c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bea5f: lea ecx, [ebx + 0x40] */ r_ecx = (u32)(r_ebx+0x40u);
    /* 004bea62: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4bea67u); f_0082ebac();
    /* 004bea67: push dword ptr [0xa48480] */ { u32 v = R32((u32)(0xa48480u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bea6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bea6f: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x4bea74u); f_008172d4();
    /* 004bea74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004bea77: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 004bea7a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bea7c: jne 0x4bea5c */ if (!fZ) goto L_004bea5c;
L_004bea7e:; BB(0x004bea7e);
    /* 004bea7e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bea81: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bea84: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bea87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bea8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bea91: mov esp, ebp */ r_esp = r_ebp;
    /* 004bea93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bea94: ret  */ FN_RET(0x004be958); r_esp += 4; return;
L_004bea95:; BB(0x004bea95);
    /* 004bea95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bea97: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004bea9a: jmp 0x4bea3d */ goto L_004bea3d;
}

void f_004bea9c(void) /* sub_4BEA9C */
{
    FN_ENTER(0x004bea9c);
    /* 004bea9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bea9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bea9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004beaa1: call 0x4beac0 */ r_esp -= 4; W32(r_esp, 0x4beaa6u); f_004beac0();
    /* 004beaa6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004beaaa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004beaac: jne 0x4beab2 */ if (!fZ) goto L_004beab2;
L_004beaae:; BB(0x004beaae);
    /* 004beaae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004beaaf: ret 4 */ FN_RET(0x004bea9c); r_esp += 8; return;
L_004beab2:; BB(0x004beab2);
    /* 004beab2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004beab3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4beab8u); f_005c2f74();
    /* 004beab8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004beab9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004beaba: ret 4 */ FN_RET(0x004bea9c); r_esp += 8; return;
}

void f_004beac0(void) /* sub_4BEAC0 */
{
    FN_ENTER(0x004beac0);
    /* 004beac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004beac1: mov ebp, esp */ r_ebp = r_esp;
    /* 004beac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004beac5: push 0x8d11e8 */ { u32 v = 0x8d11e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004beaca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bead0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bead1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bead8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004beadb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004beade: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004beae1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004beae4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004beae7: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 004beaed: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004beaf0: mov dword ptr [ecx], 0xafb668 */ W32((u32)(r_ecx), 0xafb668u);
    /* 004beaf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004beaf8: je 0x4beb0a */ if (fZ) goto L_004beb0a;
L_004beafa:; BB(0x004beafa);
    /* 004beafa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004beafd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004beb01: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004beb06: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004beb0a:; BB(0x004beb0a);
    /* 004beb0a: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 004beb14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004beb1b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004beb1e: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004beb21: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4beb26u); f_0061cdb0();
    /* 004beb26: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004beb2d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004beb30: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4beb35u); f_008171e8();
    /* 004beb35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004beb38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004beb3f: mov esp, ebp */ r_esp = r_ebp;
    /* 004beb41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004beb42: ret  */ FN_RET(0x004beac0); r_esp += 4; return;
}

void f_004beb44(void) /* sub_4BEB44 */
{
    FN_ENTER(0x004beb44);
    /* 004beb44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004beb45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004beb47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004beb49: call 0x4beb68 */ r_esp -= 4; W32(r_esp, 0x4beb4eu); f_004beb68();
    /* 004beb4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004beb52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004beb54: jne 0x4beb5a */ if (!fZ) goto L_004beb5a;
L_004beb56:; BB(0x004beb56);
    /* 004beb56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004beb57: ret 4 */ FN_RET(0x004beb44); r_esp += 8; return;
L_004beb5a:; BB(0x004beb5a);
    /* 004beb5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004beb5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4beb60u); f_005c2f74();
    /* 004beb60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004beb61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004beb62: ret 4 */ FN_RET(0x004beb44); r_esp += 8; return;
}

void f_004beb68(void) /* sub_4BEB68 */
{
    FN_ENTER(0x004beb68);
    /* 004beb68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004beb69: mov ebp, esp */ r_ebp = r_esp;
    /* 004beb6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004beb6d: push 0x8d1204 */ { u32 v = 0x8d1204u; r_esp -= 4; W32(r_esp, v); }
    /* 004beb72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004beb78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004beb79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004beb80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004beb83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004beb86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004beb89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004beb8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004beb8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004beb92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004beb95: mov dword ptr [ecx], 0xafb6b8 */ W32((u32)(r_ecx), 0xafb6b8u);
    /* 004beb9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004beba2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4beba7u); f_008171e8();
    /* 004beba7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bebaa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bebb1: mov esp, ebp */ r_esp = r_ebp;
    /* 004bebb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bebb4: ret  */ FN_RET(0x004beb68); r_esp += 4; return;
}

void f_004bebb8(void) /* sub_4BEBB8 */
{
    FN_ENTER(0x004bebb8);
    /* 004bebb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bebb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bebbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bebbd: call 0x4bebdc */ r_esp -= 4; W32(r_esp, 0x4bebc2u); f_004bebdc();
    /* 004bebc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bebc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bebc8: jne 0x4bebce */ if (!fZ) goto L_004bebce;
L_004bebca:; BB(0x004bebca);
    /* 004bebca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bebcb: ret 4 */ FN_RET(0x004bebb8); r_esp += 8; return;
L_004bebce:; BB(0x004bebce);
    /* 004bebce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bebcf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bebd4u); f_005c2f74();
    /* 004bebd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bebd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bebd6: ret 4 */ FN_RET(0x004bebb8); r_esp += 8; return;
}

void f_004bebdc(void) /* sub_4BEBDC */
{
    FN_ENTER(0x004bebdc);
    /* 004bebdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bebdd: mov ebp, esp */ r_ebp = r_esp;
    /* 004bebdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bebe1: push 0x8d1220 */ { u32 v = 0x8d1220u; r_esp -= 4; W32(r_esp, v); }
    /* 004bebe6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bebec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bebed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bebf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bebf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bebfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bebfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bec00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bec03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bec06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bec0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bec10: mov dword ptr [eax], 0xafb678 */ W32((u32)(r_eax), 0xafb678u);
    /* 004bec16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bec17: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x4bec1cu); f_007b4e84();
    /* 004bec1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bec1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bec20: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x4bec25u); f_007b9de0();
    /* 004bec25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bec2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bec2f: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x4bec34u); f_007b4aec();
    /* 004bec34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bec37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bec3e: mov esp, ebp */ r_esp = r_ebp;
    /* 004bec40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bec41: ret  */ FN_RET(0x004bebdc); r_esp += 4; return;
}

void f_004bec44(void) /* sub_4BEC44 */
{
    FN_ENTER(0x004bec44);
    /* 004bec44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bec45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bec47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bec49: call 0x4bec68 */ r_esp -= 4; W32(r_esp, 0x4bec4eu); f_004bec68();
    /* 004bec4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bec52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bec54: jne 0x4bec5a */ if (!fZ) goto L_004bec5a;
L_004bec56:; BB(0x004bec56);
    /* 004bec56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bec57: ret 4 */ FN_RET(0x004bec44); r_esp += 8; return;
L_004bec5a:; BB(0x004bec5a);
    /* 004bec5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bec5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bec60u); f_005c2f74();
    /* 004bec60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bec61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bec62: ret 4 */ FN_RET(0x004bec44); r_esp += 8; return;
}

void f_004bec68(void) /* sub_4BEC68 */
{
    FN_ENTER(0x004bec68);
    /* 004bec68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bec69: mov ebp, esp */ r_ebp = r_esp;
    /* 004bec6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bec6d: push 0x8d123c */ { u32 v = 0x8d123cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bec72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bec78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bec79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bec80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bec83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bec86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bec89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bec8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bec8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bec92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bec95: mov dword ptr [ecx], 0xafb6a8 */ W32((u32)(r_ecx), 0xafb6a8u);
    /* 004bec9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004beca2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4beca7u); f_008171e8();
    /* 004beca7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004becaa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004becb1: mov esp, ebp */ r_esp = r_ebp;
    /* 004becb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004becb4: ret  */ FN_RET(0x004bec68); r_esp += 4; return;
}

void f_004becb8(void) /* sub_4BECB8 */
{
    FN_ENTER(0x004becb8);
    /* 004becb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004becb9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004becbc: mov esi, ecx */ r_esi = r_ecx;
    /* 004becbe: mov ecx, esi */ r_ecx = r_esi;
    /* 004becc0: call 0x4bede4 */ r_esp -= 4; W32(r_esp, 0x4becc5u); f_004bede4();
    /* 004becc5: fld dword ptr [0x907884] */ FPUSH(R_F32((u32)(0x907884u)));
    /* 004beccb: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 004becce: fadd dword ptr [esi + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5cu));
    /* 004becd1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004becd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004becd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004becd6: jb 0x4bed24 */ if (fC) goto L_004bed24;
L_004becd8:; BB(0x004becd8);
    /* 004becd8: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004becda: mov ecx, dword ptr [esi + 0x70] */ r_ecx = R32((u32)(r_esi+0x70u));
    /* 004becdd: fst dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0));
    /* 004bece0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bece3: cmp ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bece6: jne 0x4becf3 */ if (!fZ) goto L_004becf3;
L_004bece8:; BB(0x004bece8);
    /* 004bece8: mov dword ptr [esi + 0x70], 0 */ W32((u32)(r_esi+0x70u), 0x0u);
    /* 004becef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004becf1: jmp 0x4becf6 */ goto L_004becf6;
L_004becf3:; BB(0x004becf3);
    /* 004becf3: mov dword ptr [esi + 0x70], ecx */ W32((u32)(r_esi+0x70u), r_ecx);
L_004becf6:; BB(0x004becf6);
    /* 004becf6: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 004becf9: fld dword ptr [esi + 0x84] */ FPUSH(R_F32((u32)(r_esi+0x84u)));
    /* 004becff: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004bed01: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004bed05: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004bed0d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004bed10: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004bed13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bed14: push dword ptr [ecx*4 + 0x9abde0] */ { u32 v = R32((u32)(r_ecx*4+0x9abde0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bed1b: mov ecx, esi */ r_ecx = r_esi;
    /* 004bed1d: call 0x4bed5c */ r_esp -= 4; W32(r_esp, 0x4bed22u); f_004bed5c();
    /* 004bed22: jmp 0x4bed29 */ goto L_004bed29;
L_004bed24:; BB(0x004bed24);
    /* 004bed24: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004bed26: fstp dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0)); FPOP();
L_004bed29:; BB(0x004bed29);
    /* 004bed29: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bed2e: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bed33: je 0x4bed4d */ if (fZ) goto L_004bed4d;
L_004bed35:; BB(0x004bed35);
    /* 004bed35: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
    /* 004bed3c: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bed41: mov dword ptr [0xa48488], eax */ W32((u32)(0xa48488u), r_eax);
    /* 004bed46: mov dword ptr [esi + 0x70], 0 */ W32((u32)(r_esi+0x70u), 0x0u);
L_004bed4d:; BB(0x004bed4d);
    /* 004bed4d: mov ecx, esi */ r_ecx = r_esi;
    /* 004bed4f: call 0x4bee04 */ r_esp -= 4; W32(r_esp, 0x4bed54u); f_004bee04();
    /* 004bed54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bed57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bed58: ret  */ FN_RET(0x004becb8); r_esp += 4; return;
}

void f_004bed5c(void) /* sub_4BED5C */
{
    FN_ENTER(0x004bed5c);
    /* 004bed5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bed5d: mov ebp, esp */ r_ebp = r_esp;
    /* 004bed5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bed61: push 0x8d1264 */ { u32 v = 0x8d1264u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bed6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bed6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bed74: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bed77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bed7a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004bed7d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004bed80: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004bed83: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004bed86: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004bed8d: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004bed92: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bed97u); f_005caba4();
    /* 004bed97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bed98: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004bed9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bed9d: je 0x4bedd1 */ if (fZ) goto L_004bedd1;
L_004bed9f:; BB(0x004bed9f);
    /* 004bed9f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004beda6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bedad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004bedb0: push dword ptr [eax + 0x84] */ { u32 v = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bedb6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bedb9: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bedbc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bedbf: push dword ptr [eax + 0x8c] */ { u32 v = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bedc5: call 0x4bf7fc */ r_esp -= 4; W32(r_esp, 0x4bedcau); f_004bf7fc();
    /* 004bedca: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004bedd1:; BB(0x004bedd1);
    /* 004bedd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bedd4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004beddb: mov esp, ebp */ r_esp = r_ebp;
    /* 004beddd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bedde: ret 8 */ FN_RET(0x004bed5c); r_esp += 12; return;
}

void f_004bede4(void) /* sub_4BEDE4 */
{
    FN_ENTER(0x004bede4);
    /* 004bede4: fld dword ptr [0x907880] */ FPUSH(R_F32((u32)(0x907880u)));
    /* 004bedea: fadd dword ptr [ecx + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x5cu));
    /* 004beded: fld dword ptr [0x9076cc] */ FPUSH(R_F32((u32)(0x9076ccu)));
    /* 004bedf3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bedf5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bedf7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bedf8: ja 0x4bedfc */ if ((!fC&&!fZ)) goto L_004bedfc;
L_004bedfa:; BB(0x004bedfa);
    /* 004bedfa: fst st(1) */ ST(1) = ST(0);
L_004bedfc:; BB(0x004bedfc);
    /* 004bedfc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bedfe: fstp dword ptr [ecx + 0x5c] */ W_F32((u32)(r_ecx+0x5cu), ST(0)); FPOP();
    /* 004bee01: ret  */ FN_RET(0x004bede4); r_esp += 4; return;
}

void f_004bee04(void) /* sub_4BEE04 */
{
    FN_ENTER(0x004bee04);
    /* 004bee04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bee05: mov ebp, esp */ r_ebp = r_esp;
    /* 004bee07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bee09: push 0x8d128c */ { u32 v = 0x8d128cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bee0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bee14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bee15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bee1c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bee1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bee22: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004bee25: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004bee28: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004bee2b: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 004bee2e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004bee31: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bee34: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 004bee37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bee39: jle 0x4bee49 */ if ((fZ||fS!=fO)) goto L_004bee49;
L_004bee3b:; BB(0x004bee3b);
    /* 004bee3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bee3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bee45: mov esp, ebp */ r_esp = r_ebp;
    /* 004bee47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bee48: ret  */ FN_RET(0x004bee04); r_esp += 4; return;
L_004bee49:; BB(0x004bee49);
    /* 004bee49: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4bee4eu); f_008587a5();
    /* 004bee4e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004bee51: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 004bee54: fdiv dword ptr [0x907878] */ ST(0) = ST(0) / R_F32((u32)(0x907878u));
    /* 004bee5a: fadd dword ptr [0x90787c] */ ST(0) = ST(0) + R_F32((u32)(0x90787cu));
    /* 004bee60: fmul dword ptr [0x907874] */ ST(0) = ST(0) * R_F32((u32)(0x907874u));
    /* 004bee66: fmul dword ptr [0x907870] */ ST(0) = ST(0) * R_F32((u32)(0x907870u));
    /* 004bee6c: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 004bee6f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4bee74u); f_008587a5();
    /* 004bee74: mov dword ptr [ebp - 0x3c], 0x44160000 */ W32((u32)(r_ebp+0xffffffc4u), 0x44160000u);
    /* 004bee7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004bee7e: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004bee81: fdiv dword ptr [0x907878] */ ST(0) = ST(0) / R_F32((u32)(0x907878u));
    /* 004bee87: fmul dword ptr [0x907868] */ ST(0) = ST(0) * R_F32((u32)(0x907868u));
    /* 004bee8d: fadd dword ptr [0x90786c] */ ST(0) = ST(0) + R_F32((u32)(0x90786cu));
    /* 004bee93: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004bee9a: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004bee9d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004bee9f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4beea4u); f_005caba4();
    /* 004beea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004beea5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004beea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004beeaa: je 0x4beed2 */ if (fZ) goto L_004beed2;
L_004beeac:; BB(0x004beeac);
    /* 004beeac: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 004beeb3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004beeba: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 004beebd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004beebe: mov ecx, eax */ r_ecx = r_eax;
    /* 004beec0: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004beec6: call 0x4be418 */ r_esp -= 4; W32(r_esp, 0x4beecbu); f_004be418();
    /* 004beecb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004beed2:; BB(0x004beed2);
    /* 004beed2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004beed5: mov dword ptr [eax + 0x74], 0x1e */ W32((u32)(r_eax+0x74u), 0x1eu);
    /* 004beedc: jmp 0x4bee3b */ goto L_004bee3b;
}

void f_004beee4(void) /* sub_4BEEE4 */
{
    FN_ENTER(0x004beee4);
    /* 004beee4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004beee5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004beee8: mov esi, ecx */ r_esi = r_ecx;
    /* 004beeea: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 004beeed: fadd dword ptr [esi + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5cu));
    /* 004beef0: fld dword ptr [0x907884] */ FPUSH(R_F32((u32)(0x907884u)));
    /* 004beef6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004beef8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004beefa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004beefb: ja 0x4bef4e */ if ((!fC&&!fZ)) goto L_004bef4e;
L_004beefd:; BB(0x004beefd);
    /* 004beefd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004beeff: mov ecx, dword ptr [esi + 0x70] */ r_ecx = R32((u32)(r_esi+0x70u));
    /* 004bef02: fst dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0));
    /* 004bef05: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bef08: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bef0b: jne 0x4bef1b */ if (!fZ) goto L_004bef1b;
L_004bef0d:; BB(0x004bef0d);
    /* 004bef0d: mov dword ptr [esi + 0x70], 9 */ W32((u32)(r_esi+0x70u), 0x9u);
    /* 004bef14: mov ecx, 9 */ r_ecx = 0x9u;
    /* 004bef19: jmp 0x4bef1e */ goto L_004bef1e;
L_004bef1b:; BB(0x004bef1b);
    /* 004bef1b: mov dword ptr [esi + 0x70], ecx */ W32((u32)(r_esi+0x70u), r_ecx);
L_004bef1e:; BB(0x004bef1e);
    /* 004bef1e: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 004bef21: fld dword ptr [esi + 0x84] */ FPUSH(R_F32((u32)(r_esi+0x84u)));
    /* 004bef27: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004bef29: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004bef2d: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004bef35: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004bef39: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004bef3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bef3e: push dword ptr [ecx*4 + 0x9abea4] */ { u32 v = R32((u32)(r_ecx*4+0x9abea4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bef45: mov ecx, esi */ r_ecx = r_esi;
    /* 004bef47: call 0x4bed5c */ r_esp -= 4; W32(r_esp, 0x4bef4cu); f_004bed5c();
    /* 004bef4c: jmp 0x4bef53 */ goto L_004bef53;
L_004bef4e:; BB(0x004bef4e);
    /* 004bef4e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bef50: fstp dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0)); FPOP();
L_004bef53:; BB(0x004bef53);
    /* 004bef53: mov edx, dword ptr [0xa48488] */ r_edx = R32((u32)(0xa48488u));
    /* 004bef59: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004bef5c: je 0x4bf09e */ if (fZ) goto L_004bf09e;
L_004bef62:; BB(0x004bef62);
    /* 004bef62: fld dword ptr [esi + 0x80] */ FPUSH(R_F32((u32)(r_esi+0x80u)));
    /* 004bef68: fcom dword ptr [0x907834] */ fx_compare(ST(0), R_F32((u32)(0x907834u))); 
    /* 004bef6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bef70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bef71: jae 0x4befbc */ if (!fC) goto L_004befbc;
L_004bef73:; BB(0x004bef73);
    /* 004bef73: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bef75: mov ecx, dword ptr [esi + 0x88] */ r_ecx = R32((u32)(r_esi+0x88u));
    /* 004bef7b: mov dword ptr [esi + 0x1c], 2 */ W32((u32)(r_esi+0x1cu), 0x2u);
    /* 004bef82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bef84: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 004bef8b: mov dword ptr [esi + 0x54], 0xc2480000 */ W32((u32)(r_esi+0x54u), 0xc2480000u);
    /* 004bef92: je 0x4befab */ if (fZ) goto L_004befab;
L_004bef94:; BB(0x004bef94);
    /* 004bef94: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004bef98: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bef9d: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004befa1: mov dword ptr [esi + 0x88], 0 */ W32((u32)(r_esi+0x88u), 0x0u);
L_004befab:; BB(0x004befab);
    /* 004befab: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004befb1: mov dword ptr [0xa48488], edx */ W32((u32)(0xa48488u), r_edx);
    /* 004befb7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004befba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004befbb: ret  */ FN_RET(0x004beee4); r_esp += 4; return;
L_004befbc:; BB(0x004befbc);
    /* 004befbc: fcom dword ptr [0x907830] */ fx_compare(ST(0), R_F32((u32)(0x907830u))); 
    /* 004befc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004befc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004befc5: jb 0x4bf063 */ if (fC) goto L_004bf063;
L_004befcb:; BB(0x004befcb);
    /* 004befcb: fcom dword ptr [0x90782c] */ fx_compare(ST(0), R_F32((u32)(0x90782cu))); 
    /* 004befd1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004befd3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004befd4: jb 0x4bf023 */ if (fC) goto L_004bf023;
L_004befd6:; BB(0x004befd6);
    /* 004befd6: fcomp dword ptr [0x907828] */ fx_compare(ST(0), R_F32((u32)(0x907828u))); FPOP();
    /* 004befdc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004befde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004befdf: jae 0x4bf09e */ if (!fC) goto L_004bf09e;
L_004befe5:; BB(0x004befe5);
    /* 004befe5: fld dword ptr [0x9076cc] */ FPUSH(R_F32((u32)(0x9076ccu)));
    /* 004befeb: fmul dword ptr [0x90785c] */ ST(0) = ST(0) * R_F32((u32)(0x90785cu));
    /* 004beff1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004beff5: lea eax, [esi + 0x5c] */ r_eax = (u32)(r_esi+0x5cu);
    /* 004beff8: mov dword ptr [esp + 4], 0x3d75c28f */ W32((u32)(r_esp+0x4u), 0x3d75c28fu);
    /* 004bf000: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004bf003: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x4bf008u); f_005dd728();
    /* 004bf008: push 0xc1700001 */ { u32 v = 0xc1700001u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf00d: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf012: add esi, 0x54 */ {  u32 a = r_esi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bf015: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf016: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x4bf01bu); f_005dd728();
    /* 004bf01b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bf01e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bf021: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bf022: ret  */ FN_RET(0x004beee4); r_esp += 4; return;
L_004bf023:; BB(0x004bf023);
    /* 004bf023: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bf025: fld dword ptr [0x9076cc] */ FPUSH(R_F32((u32)(0x9076ccu)));
    /* 004bf02b: fmul dword ptr [0x90784c] */ ST(0) = ST(0) * R_F32((u32)(0x90784cu));
    /* 004bf031: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004bf035: lea eax, [esi + 0x5c] */ r_eax = (u32)(r_esi+0x5cu);
    /* 004bf038: mov dword ptr [esp + 4], 0x3d23d70a */ W32((u32)(r_esp+0x4u), 0x3d23d70au);
    /* 004bf040: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004bf043: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x4bf048u); f_005dd728();
    /* 004bf048: push 0xc1f00001 */ { u32 v = 0xc1f00001u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf04d: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf052: add esi, 0x54 */ {  u32 a = r_esi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bf055: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf056: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x4bf05bu); f_005dd728();
    /* 004bf05b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bf05e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bf061: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bf062: ret  */ FN_RET(0x004beee4); r_esp += 4; return;
L_004bf063:; BB(0x004bf063);
    /* 004bf063: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bf065: fld dword ptr [0x9076cc] */ FPUSH(R_F32((u32)(0x9076ccu)));
    /* 004bf06b: fmul dword ptr [0x907840] */ ST(0) = ST(0) * R_F32((u32)(0x907840u));
    /* 004bf071: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004bf075: lea eax, [esi + 0x5c] */ r_eax = (u32)(r_esi+0x5cu);
    /* 004bf078: mov dword ptr [esp + 4], 0x3ca3d70a */ W32((u32)(r_esp+0x4u), 0x3ca3d70au);
    /* 004bf080: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004bf083: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x4bf088u); f_005dd728();
    /* 004bf088: push 0xc2480000 */ { u32 v = 0xc2480000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf08d: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf092: add esi, 0x54 */ {  u32 a = r_esi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bf095: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf096: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x4bf09bu); f_005dd728();
    /* 004bf09b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004bf09e:; BB(0x004bf09e);
    /* 004bf09e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bf0a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bf0a2: ret  */ FN_RET(0x004beee4); r_esp += 4; return;
}

