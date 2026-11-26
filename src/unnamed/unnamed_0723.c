#include "protos.h"

void f_007233e8(void)
{
    FN_ENTER(0x007233e8);
    /* 007233e8: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007233eb: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x7233f0u); f_0073b170();
    /* 007233f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007233f2: je 0x7233fb */ if (fZ) goto L_007233fb;
L_007233f4:; BB(0x007233f4);
    /* 007233f4: mov dword ptr [ebp + 0x24], 2 */ W32((u32)(r_ebp+0x24u), 0x2u);
L_007233fb:; BB(0x007233fb);
    /* 007233fb: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723401: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00723404: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00723406: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00723408: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072340a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00723411: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x723416u); f_007c1160();
    /* 00723416: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723418: je 0x723429 */ if (fZ) goto L_00723429;
L_0072341a:; BB(0x0072341a);
    /* 0072341a: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072341d: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x723422u); f_0073b0f0();
    /* 00723422: mov dword ptr [ebp + 0x24], 2 */ W32((u32)(r_ebp+0x24u), 0x2u);
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x007233e8); r_esp += 4; return;
}

void f_00723429(void)
{
    FN_ENTER(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x00723429); r_esp += 4; return;
}

void f_00723a20(void) /* sub_723A20 */
{
    FN_ENTER(0x00723a20);
    /* 00723a20: mov dword ptr [0xa9a7e0], 0x3f800000 */ W32((u32)(0xa9a7e0u), 0x3f800000u);
    /* 00723a2a: mov dword ptr [0xa9a7e4], 0x41000000 */ W32((u32)(0xa9a7e4u), 0x41000000u);
    /* 00723a34: mov dword ptr [0xa9a7e8], 0x3fc00000 */ W32((u32)(0xa9a7e8u), 0x3fc00000u);
    /* 00723a3e: ret  */ FN_RET(0x00723a20); r_esp += 4; return;
}

void f_00723a40(void) /* sub_723A40 */
{
    FN_ENTER(0x00723a40);
    /* 00723a40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00723a41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00723a43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00723a45: call 0x723a64 */ r_esp -= 4; W32(r_esp, 0x723a4au); f_00723a64();
    /* 00723a4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00723a4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723a50: jne 0x723a56 */ if (!fZ) goto L_00723a56;
L_00723a52:; BB(0x00723a52);
    /* 00723a52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723a53: ret 4 */ FN_RET(0x00723a40); r_esp += 8; return;
L_00723a56:; BB(0x00723a56);
    /* 00723a56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00723a57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x723a5cu); f_005c2f74();
    /* 00723a5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723a5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723a5e: ret 4 */ FN_RET(0x00723a40); r_esp += 8; return;
}

void f_00723a64(void) /* sub_723A64 */
{
    FN_ENTER(0x00723a64);
    /* 00723a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00723a65: mov ebp, esp */ r_ebp = r_esp;
    /* 00723a67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00723a69: push 0x8f0e40 */ { u32 v = 0x8f0e40u; r_esp -= 4; W32(r_esp, v); }
    /* 00723a6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00723a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723a75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00723a7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00723a7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00723a82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00723a85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00723a88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00723a8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00723a8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00723a95: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723a98: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723a9b: mov dword ptr [eax], 0xb3fea0 */ W32((u32)(r_eax), 0xb3fea0u);
    /* 00723aa1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x723aa6u); f_00857e98();
    /* 00723aa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723aa7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723aaa: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00723aad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723aaf: je 0x723ac8 */ if (fZ) goto L_00723ac8;
L_00723ab1:; BB(0x00723ab1);
    /* 00723ab1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00723ab5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00723aba: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00723abe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723ac1: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_00723ac8:; BB(0x00723ac8);
    /* 00723ac8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00723acb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723acd: je 0x723ade */ if (fZ) goto L_00723ade;
L_00723acf:; BB(0x00723acf);
    /* 00723acf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723ad4u); f_007127b0();
    /* 00723ad4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723ad7: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_00723ade:; BB(0x00723ade);
    /* 00723ade: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00723ae5: mov ecx, eax */ r_ecx = r_eax;
    /* 00723ae7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x723aecu); f_008171e8();
    /* 00723aec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00723aef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00723af6: mov esp, ebp */ r_esp = r_ebp;
    /* 00723af8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723af9: ret  */ FN_RET(0x00723a64); r_esp += 4; return;
}

void f_00723afc(void) /* sub_723AFC */
{
    FN_ENTER(0x00723afc);
    /* 00723afc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00723afd: mov ebp, esp */ r_ebp = r_esp;
    /* 00723aff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00723b01: push 0x8f0e5c */ { u32 v = 0x8f0e5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00723b06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00723b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723b0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00723b14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00723b17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00723b1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00723b1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00723b20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00723b23: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723b26: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00723b29: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x723b2eu); f_008193cc();
    /* 00723b2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00723b35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723b38: mov dword ptr [ecx], 0xb3fea0 */ W32((u32)(r_ecx), 0xb3fea0u);
    /* 00723b3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00723b40: mov esi, dword ptr [0x9f24f0] */ r_esi = R32((u32)(0x9f24f0u));
    /* 00723b46: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00723b49: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 00723b4c: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
    /* 00723b4f: call 0x723b78 */ r_esp -= 4; W32(r_esp, 0x723b54u); f_00723b78();
    /* 00723b54: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723b57: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00723b5a: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00723b5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723b5f: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00723b62: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00723b65: mov eax, ecx */ r_eax = r_ecx;
    /* 00723b67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00723b6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00723b71: mov esp, ebp */ r_esp = r_ebp;
    /* 00723b73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723b74: ret 4 */ FN_RET(0x00723afc); r_esp += 8; return;
}

void f_00723b78(void) /* sub_723B78 */
{
    FN_ENTER(0x00723b78);
    /* 00723b78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00723b79: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00723b7b: call 0x73824c */ r_esp -= 4; W32(r_esp, 0x723b80u); f_0073824c();
    /* 00723b80: mov edi, eax */ r_edi = r_eax;
    /* 00723b82: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 00723b84: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x723b89u); f_00793168();
    /* 00723b89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723b8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723b8f: mov ecx, edi */ r_ecx = r_edi;
    /* 00723b91: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x723b96u); f_007389cc();
    /* 00723b96: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00723b98: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x723b9du); f_00793168();
    /* 00723b9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723b9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723ba0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723ba2: mov ecx, edi */ r_ecx = r_edi;
    /* 00723ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723ba5: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x723baau); f_00738a04();
    /* 00723baa: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00723bac: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x723bb1u); f_0079317c();
    /* 00723bb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723bb2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00723bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723bb5: mov ecx, edi */ r_ecx = r_edi;
    /* 00723bb7: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x723bbcu); f_007389cc();
    /* 00723bbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723bbe: mov ecx, edi */ r_ecx = r_edi;
    /* 00723bc0: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x723bc5u); f_00738a9c();
    /* 00723bc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723bc7: mov ecx, edi */ r_ecx = r_edi;
    /* 00723bc9: call 0x738bbc */ r_esp -= 4; W32(r_esp, 0x723bceu); f_00738bbc();
    /* 00723bce: mov dword ptr [edi + 0x4c], 0x42c80000 */ W32((u32)(r_edi+0x4cu), 0x42c80000u);
    /* 00723bd5: mov eax, edi */ r_eax = r_edi;
    /* 00723bd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00723bd8: ret  */ FN_RET(0x00723b78); r_esp += 4; return;
}

void f_00723bdc(void) /* sub_723BDC */
{
    FN_ENTER(0x00723bdc);
    /* 00723bdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00723bdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00723bdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00723be1: push 0x8f0e84 */ { u32 v = 0x8f0e84u; r_esp -= 4; W32(r_esp, v); }
    /* 00723be6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00723bec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723bed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00723bf4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00723bf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00723bfa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00723bfd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00723c00: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00723c03: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00723c07: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00723c0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723c0c: jge 0x723c25 */ if ((fS==fO)) goto L_00723c25;
L_00723c0e:; BB(0x00723c0e);
    /* 00723c0e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00723c11: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723c14: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00723c17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00723c1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00723c21: mov esp, ebp */ r_esp = r_ebp;
    /* 00723c23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723c24: ret  */ FN_RET(0x00723bdc); r_esp += 4; return;
L_00723c25:; BB(0x00723c25);
    /* 00723c25: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00723c28: jg 0x723c81 */ if ((!fZ&&fS==fO)) goto L_00723c81;
L_00723c2a:; BB(0x00723c2a);
    /* 00723c2a: mov eax, ecx */ r_eax = r_ecx;
    /* 00723c2c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00723c2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723c31: je 0x723c49 */ if (fZ) goto L_00723c49;
L_00723c33:; BB(0x00723c33);
    /* 00723c33: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00723c37: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00723c3c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00723c40: mov edx, ecx */ r_edx = r_ecx;
    /* 00723c42: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
L_00723c49:; BB(0x00723c49);
    /* 00723c49: mov eax, ecx */ r_eax = r_ecx;
    /* 00723c4b: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00723c4e: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00723c55: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00723c5b: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00723c62: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00723c65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723c67: je 0x723c70 */ if (fZ) goto L_00723c70;
L_00723c69:; BB(0x00723c69);
    /* 00723c69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723c6b: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x723c70u); f_00760acc();
L_00723c70:; BB(0x00723c70);
    /* 00723c70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00723c73: call 0x724314 */ r_esp -= 4; W32(r_esp, 0x723c78u); f_00724314();
    /* 00723c78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723c7b: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00723c7f: jmp 0x723c86 */ goto L_00723c86;
L_00723c81:; BB(0x00723c81);
    /* 00723c81: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723c84: jne 0x723cd3 */ if (!fZ) goto L_00723cd3;
L_00723c86:; BB(0x00723c86);
    /* 00723c86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723c89: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00723c8c: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00723c93: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00723c95: je 0x723cb8 */ if (fZ) goto L_00723cb8;
L_00723c97:; BB(0x00723c97);
    /* 00723c97: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00723c9a: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00723c9e: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723ca3: mov byte ptr [edx + 0x1c], 5 */ W8((u32)(r_edx+0x1cu), 0x5u);
    /* 00723ca7: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 00723caa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00723cad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00723cb4: mov esp, ebp */ r_esp = r_ebp;
    /* 00723cb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723cb7: ret  */ FN_RET(0x00723bdc); r_esp += 4; return;
L_00723cb8:; BB(0x00723cb8);
    /* 00723cb8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723cba: je 0x723c0e */ if (fZ) goto L_00723c0e;
L_00723cc0:; BB(0x00723cc0);
    /* 00723cc0: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x723cc5u); f_00737d90();
    /* 00723cc5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00723cc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723cc9: call 0x723e8c */ r_esp -= 4; W32(r_esp, 0x723cceu); f_00723e8c();
    /* 00723cce: jmp 0x723c0e */ goto L_00723c0e;
L_00723cd3:; BB(0x00723cd3);
    /* 00723cd3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723cd6: jne 0x723d9b */ if (!fZ) goto L_00723d9b;
L_00723cdc:; BB(0x00723cdc);
    /* 00723cdc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00723ce3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00723ce5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x723ceau); f_005caba4();
    /* 00723cea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00723ced: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723cf0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00723cf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723cf5: je 0x723e81 */ if (fZ) goto L_00723e81;
L_00723cfb:; BB(0x00723cfb);
    /* 00723cfb: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00723d02: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00723d09: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723d0f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d12: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00723d15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00723d17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723d19: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00723d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723d1c: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x723d21u); f_0078eba4();
    /* 00723d21: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00723d28:; BB(0x00723d28);
    /* 00723d28: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00723d2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d2e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00723d31: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00723d38: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723d3d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x723d42u); f_0073ec50();
    /* 00723d42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723d44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d47: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723d4a: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x723d4fu); f_0078ed84();
    /* 00723d4f: push 0x47166400 */ { u32 v = 0x47166400u; r_esp -= 4; W32(r_esp, v); }
    /* 00723d54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d57: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723d5a: call 0x78ee24 */ r_esp -= 4; W32(r_esp, 0x723d5fu); f_0078ee24();
    /* 00723d5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d62: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723d65: call 0x78ed3c */ r_esp -= 4; W32(r_esp, 0x723d6au); f_0078ed3c();
    /* 00723d6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d6d: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723d70: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723d73: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x723d78u); f_0078ed74();
    /* 00723d78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d7b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723d7e: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x723d83u); f_0078ee74();
    /* 00723d83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723d88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723d8a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00723d8d: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x723d92u); f_00738a40();
    /* 00723d92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723d95: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00723d99: jmp 0x723da4 */ goto L_00723da4;
L_00723d9b:; BB(0x00723d9b);
    /* 00723d9b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00723d9e: jne 0x723c0e */ if (!fZ) goto L_00723c0e;
L_00723da4:; BB(0x00723da4);
    /* 00723da4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723da7: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723daa: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x723dafu); f_0078ed20();
    /* 00723daf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723db1: je 0x723dca */ if (fZ) goto L_00723dca;
L_00723db3:; BB(0x00723db3);
    /* 00723db3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723db6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723db8: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723dbb: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00723dbe: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x723dc3u); f_00738a40();
    /* 00723dc3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723dc6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00723dca:; BB(0x00723dca);
    /* 00723dca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723dcd: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723dd0: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x723dd5u); f_0078ed14();
    /* 00723dd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723dd7: je 0x723c0e */ if (fZ) goto L_00723c0e;
L_00723ddd:; BB(0x00723ddd);
    /* 00723ddd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723de0: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723de3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x723de8u); f_00857e98();
    /* 00723de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723de9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723dec: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00723def: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x723df4u); f_0078ed4c();
    /* 00723df4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00723df7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723df8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00723dfb: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x723e00u); f_00858009();
    /* 00723e00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723e01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00723e04: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00723e07: mov esi, ecx */ r_esi = r_ecx;
    /* 00723e09: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00723e0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00723e0d: jle 0x723e31 */ if ((fZ||fS!=fO)) goto L_00723e31;
L_00723e0f:; BB(0x00723e0f);
    /* 00723e0f: movzx edx, word ptr [ecx + ebx*2] */ r_edx = (u32)R16((u32)(r_ecx+r_ebx*2));
    /* 00723e13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723e15: je 0x723e31 */ if (fZ) goto L_00723e31;
L_00723e17:; BB(0x00723e17);
    /* 00723e17: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723e1a: je 0x723e2a */ if (fZ) goto L_00723e2a;
L_00723e1c:; BB(0x00723e1c);
    /* 00723e1c: cmp edx, 0x3000 */ {  u32 a = r_edx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723e22: je 0x723e2a */ if (fZ) goto L_00723e2a;
L_00723e24:; BB(0x00723e24);
    /* 00723e24: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 00723e27: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00723e2a:; BB(0x00723e2a);
    /* 00723e2a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00723e2d: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00723e2f: jl 0x723e0f */ if ((fS!=fO)) goto L_00723e0f;
L_00723e31:; BB(0x00723e31);
    /* 00723e31: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00723e36: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00723e39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00723e3b: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00723e3e: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723e41: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x723e46u); f_00813a78();
    /* 00723e46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723e49: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723e4c: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x723e51u); f_00858009();
    /* 00723e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723e52: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00723e57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723e5a: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723e5d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x723e62u); f_00857dec();
    /* 00723e62: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723e65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723e68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723e6a: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723e6d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00723e70: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x723e75u); f_00738a40();
    /* 00723e75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00723e78: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00723e7c: jmp 0x723c0e */ goto L_00723c0e;
L_00723e81:; BB(0x00723e81);
    /* 00723e81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00723e83: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00723e86: jmp 0x723d28 */ goto L_00723d28;
}

void f_00723e8c(void) /* sub_723E8C */
{
    FN_ENTER(0x00723e8c);
    /* 00723e8c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00723e90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723e92: je 0x723eb5 */ if (fZ) goto L_00723eb5;
L_00723e94:; BB(0x00723e94);
    /* 00723e94: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00723e97: jne 0x723ea0 */ if (!fZ) goto L_00723ea0;
L_00723e99:; BB(0x00723e99);
    /* 00723e99: mov byte ptr [ecx + 0x1c], 3 */ W8((u32)(r_ecx+0x1cu), 0x3u);
    /* 00723e9d: ret 4 */ FN_RET(0x00723e8c); r_esp += 8; return;
L_00723ea0:; BB(0x00723ea0);
    /* 00723ea0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00723ea3: jne 0x723eb5 */ if (!fZ) goto L_00723eb5;
L_00723ea5:; BB(0x00723ea5);
    /* 00723ea5: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 00723ea9: mov byte ptr [ecx + 0x1c], 5 */ W8((u32)(r_ecx+0x1cu), 0x5u);
    /* 00723ead: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723eb2: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
L_00723eb5:; BB(0x00723eb5);
    /* 00723eb5: ret 4 */ FN_RET(0x00723e8c); r_esp += 8; return;
}

void f_00723eb8(void) /* sub_723EB8 */
{
    FN_ENTER(0x00723eb8);
    /* 00723eb8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00723ebb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723ebd: je 0x723ec0 */ if (fZ) goto L_00723ec0;
L_00723ebf:; BB(0x00723ebf);
    /* 00723ebf: ret  */ FN_RET(0x00723eb8); r_esp += 4; return;
L_00723ec0:; BB(0x00723ec0);
    /* 00723ec0: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 00723ec5: ret  */ FN_RET(0x00723eb8); r_esp += 4; return;
}

void f_00723ec8(void) /* sub_723EC8 */
{
    FN_ENTER(0x00723ec8);
    /* 00723ec8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00723ec9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00723ecb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00723ecd: call 0x723eec */ r_esp -= 4; W32(r_esp, 0x723ed2u); f_00723eec();
    /* 00723ed2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00723ed6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723ed8: jne 0x723ede */ if (!fZ) goto L_00723ede;
L_00723eda:; BB(0x00723eda);
    /* 00723eda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723edb: ret 4 */ FN_RET(0x00723ec8); r_esp += 8; return;
L_00723ede:; BB(0x00723ede);
    /* 00723ede: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00723edf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x723ee4u); f_005c2f74();
    /* 00723ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723ee5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723ee6: ret 4 */ FN_RET(0x00723ec8); r_esp += 8; return;
}

void f_00723eec(void) /* sub_723EEC */
{
    FN_ENTER(0x00723eec);
    /* 00723eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00723eed: mov ebp, esp */ r_ebp = r_esp;
    /* 00723eef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00723ef1: push 0x8f0ea0 */ { u32 v = 0x8f0ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723ef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00723efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723efd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00723f04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00723f07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00723f0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00723f0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00723f10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00723f13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00723f16: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00723f1d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723f20: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723f23: mov dword ptr [eax], 0xb3ff28 */ W32((u32)(r_eax), 0xb3ff28u);
    /* 00723f29: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x723f2eu); f_00857e98();
    /* 00723f2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723f2f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723f32: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00723f35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723f37: je 0x723f50 */ if (fZ) goto L_00723f50;
L_00723f39:; BB(0x00723f39);
    /* 00723f39: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00723f3d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00723f42: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00723f46: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723f49: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_00723f50:; BB(0x00723f50);
    /* 00723f50: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00723f53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723f55: je 0x723f66 */ if (fZ) goto L_00723f66;
L_00723f57:; BB(0x00723f57);
    /* 00723f57: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723f5cu); f_007127b0();
    /* 00723f5c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723f5f: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_00723f66:; BB(0x00723f66);
    /* 00723f66: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00723f6d: mov ecx, eax */ r_ecx = r_eax;
    /* 00723f6f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x723f74u); f_008171e8();
    /* 00723f74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00723f77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00723f7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00723f80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723f81: ret  */ FN_RET(0x00723eec); r_esp += 4; return;
}

void f_00723f84(void) /* sub_723F84 */
{
    FN_ENTER(0x00723f84);
    /* 00723f84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00723f85: mov ebp, esp */ r_ebp = r_esp;
    /* 00723f87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00723f89: push 0x8f0ebc */ { u32 v = 0x8f0ebcu; r_esp -= 4; W32(r_esp, v); }
    /* 00723f8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00723f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723f95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00723f9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00723f9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00723fa2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00723fa5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00723fa8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00723fab: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723fae: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00723fb1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x723fb6u); f_008193cc();
    /* 00723fb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00723fbd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723fc0: mov dword ptr [ecx], 0xb3ff28 */ W32((u32)(r_ecx), 0xb3ff28u);
    /* 00723fc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00723fc8: mov esi, dword ptr [0x9f24f4] */ r_esi = R32((u32)(0x9f24f4u));
    /* 00723fce: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00723fd1: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 00723fd4: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
    /* 00723fd7: call 0x724000 */ r_esp -= 4; W32(r_esp, 0x723fdcu); f_00724000();
    /* 00723fdc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00723fdf: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00723fe2: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00723fe5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00723fe7: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00723fea: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00723fed: mov eax, ecx */ r_eax = r_ecx;
    /* 00723fef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00723ff2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00723ff9: mov esp, ebp */ r_esp = r_ebp;
    /* 00723ffb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723ffc: ret 4 */ FN_RET(0x00723f84); r_esp += 8; return;
}

