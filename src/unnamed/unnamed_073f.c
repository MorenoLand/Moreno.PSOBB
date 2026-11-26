#include "protos.h"

void f_0073f004(void) /* sub_73F004 */
{
    FN_ENTER(0x0073f004);
    /* 0073f004: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f005: mov eax, ecx */ r_eax = r_ecx;
    /* 0073f007: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0073f00a: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0073f00d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0073f011: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f013: je 0x73f028 */ if (fZ) goto L_0073f028;
L_0073f015:; BB(0x0073f015);
    /* 0073f015: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0073f017: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x73f01du); call_ind(t); }
    /* 0073f01d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f01f: jle 0x73f033 */ if ((fZ||fS!=fO)) goto L_0073f033;
L_0073f021:; BB(0x0073f021);
    /* 0073f021: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0073f024: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073f025: ret 4 */ FN_RET(0x0073f004); r_esp += 8; return;
L_0073f028:; BB(0x0073f028);
    /* 0073f028: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 0073f02f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073f030: ret 4 */ FN_RET(0x0073f004); r_esp += 8; return;
L_0073f033:; BB(0x0073f033);
    /* 0073f033: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 0073f03a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073f03b: ret 4 */ FN_RET(0x0073f004); r_esp += 8; return;
}

void f_0073f040(void) /* sub_73F040 */
{
    FN_ENTER(0x0073f040);
    /* 0073f040: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073f044: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0073f047: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0073f04a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0073f04d: ret 4 */ FN_RET(0x0073f040); r_esp += 8; return;
}

void f_0073f050(void) /* sub_73F050 */
{
    FN_ENTER(0x0073f050);
    /* 0073f050: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f051: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073f053: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073f055: call 0x73f074 */ r_esp -= 4; W32(r_esp, 0x73f05au); f_0073f074();
    /* 0073f05a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073f05e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f060: jne 0x73f066 */ if (!fZ) goto L_0073f066;
L_0073f062:; BB(0x0073f062);
    /* 0073f062: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073f063: ret 4 */ FN_RET(0x0073f050); r_esp += 8; return;
L_0073f066:; BB(0x0073f066);
    /* 0073f066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f067: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73f06cu); f_005c2f74();
    /* 0073f06c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f06d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073f06e: ret 4 */ FN_RET(0x0073f050); r_esp += 8; return;
}

void f_0073f074(void) /* sub_73F074 */
{
    FN_ENTER(0x0073f074);
    /* 0073f074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f075: mov ebp, esp */ r_ebp = r_esp;
    /* 0073f077: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f079: push 0x8f2080 */ { u32 v = 0x8f2080u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f07e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073f084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f085: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073f08c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073f08f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073f092: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073f095: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073f098: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073f09b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073f09e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073f0a5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073f0a8: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0073f0ab: mov dword ptr [eax], 0xb41360 */ W32((u32)(r_eax), 0xb41360u);
    /* 0073f0b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f0b3: je 0x73f0c4 */ if (fZ) goto L_0073f0c4;
L_0073f0b5:; BB(0x0073f0b5);
    /* 0073f0b5: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x73f0bau); f_0073d160();
    /* 0073f0ba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073f0bd: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_0073f0c4:; BB(0x0073f0c4);
    /* 0073f0c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f0c6: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x73f0cbu); f_00791748();
    /* 0073f0cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f0cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073f0d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073f0d6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x73f0dbu); f_008171e8();
    /* 0073f0db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f0de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f0e5: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f0e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f0e8: ret  */ FN_RET(0x0073f074); r_esp += 4; return;
}

void f_0073f0ec(void) /* sub_73F0EC */
{
    FN_ENTER(0x0073f0ec);
    /* 0073f0ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f0ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0073f0ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f0f1: push 0x8f209c */ { u32 v = 0x8f209cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f0f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073f0fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f0fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073f104: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073f107: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073f10a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073f10d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073f110: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073f113: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073f116: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f119: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0073f11c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073f11f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x73f124u); f_008193cc();
    /* 0073f124: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073f12b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073f12e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f131: mov dword ptr [ecx], 0xb41360 */ W32((u32)(r_ecx), 0xb41360u);
    /* 0073f137: mov eax, dword ptr [0x9f33e0] */ r_eax = R32((u32)(0x9f33e0u));
    /* 0073f13c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f13d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f13e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0073f141: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0073f144: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x73f149u); f_0073cd8c();
    /* 0073f149: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073f14c: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f14e: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0073f151: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73f156u); f_0079317c();
    /* 0073f156: mov ebx, eax */ r_ebx = r_eax;
    /* 0073f158: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f15a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73f15fu); f_0073ec50();
    /* 0073f15f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073f162: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f167: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073f16a: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0073f16d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f16e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f16f: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x73f174u); f_0073ce70();
    /* 0073f174: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073f177: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f179: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0073f17c: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x73f181u); f_0073d148();
    /* 0073f181: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073f184: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f187: call 0x7180d8 */ r_esp -= 4; W32(r_esp, 0x73f18cu); f_007180d8();
    /* 0073f18c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f18d: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0073f193: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f195: je 0x73f1a4 */ if (fZ) goto L_0073f1a4;
L_0073f197:; BB(0x0073f197);
    /* 0073f197: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f19b: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073f1a0: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f1a4:; BB(0x0073f1a4);
    /* 0073f1a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f1a6: je 0x73f1b5 */ if (fZ) goto L_0073f1b5;
L_0073f1a8:; BB(0x0073f1a8);
    /* 0073f1a8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f1ac: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f1b1: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f1b5:; BB(0x0073f1b5);
    /* 0073f1b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073f1b8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073f1bb: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0073f1c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f1c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f1cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f1ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f1cf: ret 8 */ FN_RET(0x0073f0ec); r_esp += 12; return;
}

void f_0073f1d4(void) /* sub_73F1D4 */
{
    FN_ENTER(0x0073f1d4);
    /* 0073f1d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f1d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0073f1d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f1d9: push 0x8f20c4 */ { u32 v = 0x8f20c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f1de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073f1e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f1e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073f1ec: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073f1ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073f1f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073f1f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073f1f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073f1fb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0073f1fe: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 0073f203: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073f206: je 0x73f21f */ if (fZ) goto L_0073f21f;
L_0073f208:; BB(0x0073f208);
    /* 0073f208: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f20a: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x73f20fu); f_00791748();
    /* 0073f20f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f210: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f213: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0073f216: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f218: je 0x73f22d */ if (fZ) goto L_0073f22d;
L_0073f21a:; BB(0x0073f21a);
    /* 0073f21a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073f21d: je 0x73f237 */ if (fZ) goto L_0073f237;
L_0073f21f:; BB(0x0073f21f);
    /* 0073f21f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f222: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f229: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f22b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f22c: ret  */ FN_RET(0x0073f1d4); r_esp += 4; return;
L_0073f22d:; BB(0x0073f22d);
    /* 0073f22d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f230: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
L_0073f237:; BB(0x0073f237);
    /* 0073f237: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f23a: call 0x73f3f4 */ r_esp -= 4; W32(r_esp, 0x73f23fu); f_0073f3f4();
    /* 0073f23f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f241: je 0x73f24d */ if (fZ) goto L_0073f24d;
L_0073f243:; BB(0x0073f243);
    /* 0073f243: mov eax, dword ptr [0xa9a9f4] */ r_eax = R32((u32)(0xa9a9f4u));
    /* 0073f248: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f24b: je 0x73f2ac */ if (fZ) goto L_0073f2ac;
L_0073f24d:; BB(0x0073f24d);
    /* 0073f24d: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0073f253: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f255: je 0x73f264 */ if (fZ) goto L_0073f264;
L_0073f257:; BB(0x0073f257);
    /* 0073f257: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f25b: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073f260: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f264:; BB(0x0073f264);
    /* 0073f264: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f267: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f26a: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x73f26fu); f_007180a8();
    /* 0073f26f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f270: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0073f276: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f278: je 0x73f287 */ if (fZ) goto L_0073f287;
L_0073f27a:; BB(0x0073f27a);
    /* 0073f27a: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f27e: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073f283: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f287:; BB(0x0073f287);
    /* 0073f287: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f28a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073f28e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f293: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
    /* 0073f29a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073f29e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f2a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f2a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f2aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f2ab: ret  */ FN_RET(0x0073f1d4); r_esp += 4; return;
L_0073f2ac:; BB(0x0073f2ac);
    /* 0073f2ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f2af: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0073f2b2: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x73f2b7u); f_0073d114();
    /* 0073f2b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f2b9: je 0x73f31a */ if (fZ) goto L_0073f31a;
L_0073f2bb:; BB(0x0073f2bb);
    /* 0073f2bb: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0073f2c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f2c3: je 0x73f2d2 */ if (fZ) goto L_0073f2d2;
L_0073f2c5:; BB(0x0073f2c5);
    /* 0073f2c5: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f2c9: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073f2ce: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f2d2:; BB(0x0073f2d2);
    /* 0073f2d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f2d5: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f2d8: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x73f2ddu); f_007180a8();
    /* 0073f2dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f2de: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0073f2e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f2e6: je 0x73f2f5 */ if (fZ) goto L_0073f2f5;
L_0073f2e8:; BB(0x0073f2e8);
    /* 0073f2e8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f2ec: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073f2f1: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f2f5:; BB(0x0073f2f5);
    /* 0073f2f5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f2f8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073f2fc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f301: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
    /* 0073f308: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073f30c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f30f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f316: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f319: ret  */ FN_RET(0x0073f1d4); r_esp += 4; return;
L_0073f31a:; BB(0x0073f31a);
    /* 0073f31a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f31d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0073f320: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x73f325u); f_0073ce50();
    /* 0073f325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f327: je 0x73f21f */ if (fZ) goto L_0073f21f;
L_0073f32d:; BB(0x0073f32d);
    /* 0073f32d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f330: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0073f333: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x73f338u); f_0073d134();
    /* 0073f338: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f33a: je 0x73f346 */ if (fZ) goto L_0073f346;
L_0073f33c:; BB(0x0073f33c);
    /* 0073f33c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073f33f: je 0x73f39e */ if (fZ) goto L_0073f39e;
L_0073f341:; BB(0x0073f341);
    /* 0073f341: jmp 0x73f21f */ goto L_0073f21f;
L_0073f346:; BB(0x0073f346);
    /* 0073f346: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f349: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0073f34c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0073f353: mov dword ptr [0xa9a9f4], edx */ W32((u32)(0xa9a9f4u), r_edx);
    /* 0073f359: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f35b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73f360u); f_005caba4();
    /* 0073f360: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f361: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073f364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f366: je 0x73f38f */ if (fZ) goto L_0073f38f;
L_0073f368:; BB(0x0073f368);
    /* 0073f368: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0073f36f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073f376: push 0x73f410 */ { u32 v = 0x73f410u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f37b: mov ecx, eax */ r_ecx = r_eax;
    /* 0073f37d: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f383: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x73f388u); f_00788938();
    /* 0073f388: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073f38f:; BB(0x0073f38f);
    /* 0073f38f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f392: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 0073f399: jmp 0x73f21f */ goto L_0073f21f;
L_0073f39e:; BB(0x0073f39e);
    /* 0073f39e: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0073f3a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f3a6: je 0x73f3b5 */ if (fZ) goto L_0073f3b5;
L_0073f3a8:; BB(0x0073f3a8);
    /* 0073f3a8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f3ac: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073f3b1: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f3b5:; BB(0x0073f3b5);
    /* 0073f3b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f3b8: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f3bb: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x73f3c0u); f_007180a8();
    /* 0073f3c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f3c1: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0073f3c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f3c9: je 0x73f3d8 */ if (fZ) goto L_0073f3d8;
L_0073f3cb:; BB(0x0073f3cb);
    /* 0073f3cb: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0073f3cf: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073f3d4: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0073f3d8:; BB(0x0073f3d8);
    /* 0073f3d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073f3db: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073f3df: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
    /* 0073f3e6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f3eb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073f3ef: jmp 0x73f21f */ goto L_0073f21f;
}

void f_0073f3f4(void) /* sub_73F3F4 */
{
    FN_ENTER(0x0073f3f4);
    /* 0073f3f4: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f3f7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x73f3fcu); f_0068d5a8();
    /* 0073f3fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f3fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f3ff: je 0x73f40c */ if (fZ) goto L_0073f40c;
L_0073f401:; BB(0x0073f401);
    /* 0073f401: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0073f403: mov ecx, eax */ r_ecx = r_eax;
    /* 0073f405: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x73f40bu); call_ind(t); }
    /* 0073f40b: ret  */ FN_RET(0x0073f3f4); r_esp += 4; return;
L_0073f40c:; BB(0x0073f40c);
    /* 0073f40c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f40e: ret  */ FN_RET(0x0073f3f4); r_esp += 4; return;
}

void f_0073f410(void) /* sub_73F410 */
{
    FN_ENTER(0x0073f410);
    /* 0073f410: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 0073f415: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073f418: je 0x73f424 */ if (fZ) goto L_0073f424;
L_0073f41a:; BB(0x0073f41a);
    /* 0073f41a: mov eax, dword ptr [0xa9a9f4] */ r_eax = R32((u32)(0xa9a9f4u));
    /* 0073f41f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073f422: jl 0x73f425 */ if ((fS!=fO)) goto L_0073f425;
L_0073f424:; BB(0x0073f424);
    /* 0073f424: ret  */ FN_RET(0x0073f410); r_esp += 4; return;
L_0073f425:; BB(0x0073f425);
    /* 0073f425: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f426: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x73f42bu); f_0068d5a8();
    /* 0073f42b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f42c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f42e: je 0x73f437 */ if (fZ) goto L_0073f437;
L_0073f430:; BB(0x0073f430);
    /* 0073f430: mov ecx, eax */ r_ecx = r_eax;
    /* 0073f432: call 0x6925d8 */ r_esp -= 4; W32(r_esp, 0x73f437u); f_006925d8();
L_0073f437:; BB(0x0073f437);
    /* 0073f437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f439: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x73f43eu); f_0080c2a4();
    /* 0073f43e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f43f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f440: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f442: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 0073f447: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x73f44cu); f_00815590();
    /* 0073f44c: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x73f451u); f_007a6114();
    /* 0073f451: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f457: call 0x7b41f4 */ r_esp -= 4; W32(r_esp, 0x73f45cu); f_007b41f4();
    /* 0073f45c: mov dword ptr [0xa9a9f4], 4 */ W32((u32)(0xa9a9f4u), 0x4u);
    /* 0073f466: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f467: ret  */ FN_RET(0x0073f410); r_esp += 4; return;
}

void f_0073f468(void) /* sub_73F468 */
{
    FN_ENTER(0x0073f468);
    /* 0073f468: mov dword ptr [0xa9a9e8], 0x3f800000 */ W32((u32)(0xa9a9e8u), 0x3f800000u);
    /* 0073f472: mov dword ptr [0xa9a9ec], 0x41000000 */ W32((u32)(0xa9a9ecu), 0x41000000u);
    /* 0073f47c: mov dword ptr [0xa9a9f0], 0x3fc00000 */ W32((u32)(0xa9a9f0u), 0x3fc00000u);
    /* 0073f486: ret  */ FN_RET(0x0073f468); r_esp += 4; return;
}

void f_0073f488(void) /* sub_73F488 */
{
    FN_ENTER(0x0073f488);
    /* 0073f488: mov dword ptr [0xa9a9f4], 4 */ W32((u32)(0xa9a9f4u), 0x4u);
    /* 0073f492: ret  */ FN_RET(0x0073f488); r_esp += 4; return;
}

void f_0073f494(void) /* sub_73F494 */
{
    FN_ENTER(0x0073f494);
    /* 0073f494: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f495: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073f497: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073f499: call 0x73f4b8 */ r_esp -= 4; W32(r_esp, 0x73f49eu); f_0073f4b8();
    /* 0073f49e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073f4a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f4a4: jne 0x73f4aa */ if (!fZ) goto L_0073f4aa;
L_0073f4a6:; BB(0x0073f4a6);
    /* 0073f4a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073f4a7: ret 4 */ FN_RET(0x0073f494); r_esp += 8; return;
L_0073f4aa:; BB(0x0073f4aa);
    /* 0073f4aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f4ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73f4b0u); f_005c2f74();
    /* 0073f4b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f4b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073f4b2: ret 4 */ FN_RET(0x0073f494); r_esp += 8; return;
}

void f_0073f4b8(void) /* sub_73F4B8 */
{
    FN_ENTER(0x0073f4b8);
    /* 0073f4b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f4b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0073f4bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f4bd: push 0x8f20e0 */ { u32 v = 0x8f20e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f4c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073f4c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f4c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073f4d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073f4d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073f4d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073f4d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073f4dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073f4df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073f4e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073f4e5: mov dword ptr [ecx], 0xb413c0 */ W32((u32)(r_ecx), 0xb413c0u);
    /* 0073f4eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073f4f2: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x73f4f7u); f_00710c28();
    /* 0073f4f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f4fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f501: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f503: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f504: ret  */ FN_RET(0x0073f4b8); r_esp += 4; return;
}

void f_0073f508(void) /* sub_73F508 */
{
    FN_ENTER(0x0073f508);
    /* 0073f508: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0073f50b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0073f50d: ret  */ FN_RET(0x0073f508); r_esp += 4; return;
}

void f_0073f510(void) /* sub_73F510 */
{
    FN_ENTER(0x0073f510);
    /* 0073f510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f511: mov ebp, esp */ r_ebp = r_esp;
    /* 0073f513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f515: push 0x8f20fc */ { u32 v = 0x8f20fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f51a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073f520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f521: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073f528: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073f52b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073f52e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0073f531: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0073f534: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073f537: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0073f53a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0073f53d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073f540: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f545: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73f54au); f_0073ec50();
    /* 0073f54a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f54b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073f54e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f54f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f551: push 0x9f340c */ { u32 v = 0x9f340cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f556: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x73f55bu); f_00710d30();
    /* 0073f55b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073f562: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073f565: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073f568: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0073f56b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f56d: mov dword ptr [eax], 0xb413c0 */ W32((u32)(r_eax), 0xb413c0u);
    /* 0073f573: mov ebx, dword ptr [0x9f33e4] */ r_ebx = R32((u32)(0x9f33e4u));
    /* 0073f579: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 0073f57c: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 0073f57e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f57f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073f581: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x73f586u); f_0072db60();
    /* 0073f586: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f58b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073f58d: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x73f592u); f_0072ddf4();
    /* 0073f592: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073f595: fld dword ptr [0x972d24] */ FPUSH(R_F32((u32)(0x972d24u)));
    /* 0073f59b: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0073f59e: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0073f5a1: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0073f5a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073f5a6: fst dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0));
    /* 0073f5a9: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073f5ab: fadd dword ptr [0x972d20] */ ST(0) = ST(0) + R_F32((u32)(0x972d20u));
    /* 0073f5b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073f5b3: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 0073f5b6: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 0073f5b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f5ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073f5bd: call 0x760aac */ r_esp -= 4; W32(r_esp, 0x73f5c2u); f_00760aac();
    /* 0073f5c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f5c3: fcom dword ptr [0x972d1c] */ fx_compare(ST(0), R_F32((u32)(0x972d1cu))); 
    /* 0073f5c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f5cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f5cc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073f5cf: fstp dword ptr [ecx + 0x60] */ W_F32((u32)(r_ecx+0x60u), ST(0)); FPOP();
    /* 0073f5d2: je 0x73f5f2 */ if (fZ) goto L_0073f5f2;
L_0073f5d4:; BB(0x0073f5d4);
    /* 0073f5d4: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x73f5d9u); f_00710f64();
    /* 0073f5d9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073f5dc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073f5df: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073f5e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f5e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f5ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f5ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f5ef: ret 4 */ FN_RET(0x0073f510); r_esp += 8; return;
L_0073f5f2:; BB(0x0073f5f2);
    /* 0073f5f2: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0073f5f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f5f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073f5f9: call 0x760e64 */ r_esp -= 4; W32(r_esp, 0x73f5feu); f_00760e64();
    /* 0073f5fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f5ff: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073f602: fld dword ptr [0x972d18] */ FPUSH(R_F32((u32)(0x972d18u)));
    /* 0073f608: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073f60b: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0073f60e: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0073f610: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073f612: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0073f614: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 0073f617: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0073f61a: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0073f61d: jmp 0x73f5d4 */ goto L_0073f5d4;
}

void f_0073f620(void) /* sub_73F620 */
{
    FN_ENTER(0x0073f620);
    /* 0073f620: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f621: mov edi, ecx */ r_edi = r_ecx;
    /* 0073f623: mov ecx, edi */ r_ecx = r_edi;
    /* 0073f625: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73f62au); f_00710db4();
    /* 0073f62a: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0073f62d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f62e: mov ecx, edi */ r_ecx = r_edi;
    /* 0073f630: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x73f635u); f_0072a5ec();
    /* 0073f635: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073f636: ret  */ FN_RET(0x0073f620); r_esp += 4; return;
}

void f_0073f638(void) /* sub_73F638 */
{
    FN_ENTER(0x0073f638);
    /* 0073f638: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f639: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f63a: mov edi, ecx */ r_edi = r_ecx;
    /* 0073f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073f63e: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x73f643u); f_00712644();
    /* 0073f643: mov esi, eax */ r_esi = r_eax;
    /* 0073f645: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f646: mov ecx, edi */ r_ecx = r_edi;
    /* 0073f648: call 0x71b7a4 */ r_esp -= 4; W32(r_esp, 0x73f64du); f_0071b7a4();
    /* 0073f64d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f64e: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0073f651: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f652: mov ecx, edi */ r_ecx = r_edi;
    /* 0073f654: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73f659u); f_0072a648();
    /* 0073f659: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073f65a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073f65b: ret  */ FN_RET(0x0073f638); r_esp += 4; return;
}

void f_0073f65c(void) /* sub_73F65C */
{
    FN_ENTER(0x0073f65c);
    /* 0073f65c: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f65e: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0073f661: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0073f663: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f667: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x73f66cu); f_0072db60();
    /* 0073f66c: ret 4 */ FN_RET(0x0073f65c); r_esp += 8; return;
}

void f_0073f670(void) /* sub_73F670 */
{
    FN_ENTER(0x0073f670);
    /* 0073f670: mov eax, ecx */ r_eax = r_ecx;
    /* 0073f672: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0073f676: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0073f678: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0073f67a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0073f67d: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0073f684: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0073f687: ret 4 */ FN_RET(0x0073f670); r_esp += 8; return;
}

void f_0073f68c(void) /* sub_73F68C */
{
    FN_ENTER(0x0073f68c);
    /* 0073f68c: add dword ptr [ecx + 8], 1 */ { u32 ad = (u32)(r_ecx+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073f690: ret  */ FN_RET(0x0073f68c); r_esp += 4; return;
}

void f_0073f694(void) /* sub_73F694 */
{
    FN_ENTER(0x0073f694);
    /* 0073f694: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f695: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f696: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073f699: mov esi, ecx */ r_esi = r_ecx;
    /* 0073f69b: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0073f69f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0073f6a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0073f6a4: jl 0x73f870 */ if ((fS!=fO)) goto L_0073f870;
L_0073f6aa:; BB(0x0073f6aa);
    /* 0073f6aa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0073f6ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f6af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f6b0: mov ecx, esi */ r_ecx = r_esi;
    /* 0073f6b2: call 0x73f878 */ r_esp -= 4; W32(r_esp, 0x73f6b7u); f_0073f878();
    /* 0073f6b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073f6b9: jne 0x73f6c3 */ if (!fZ) goto L_0073f6c3;
L_0073f6bb:; BB(0x0073f6bb);
    /* 0073f6bb: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073f6be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f6bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073f6c0: ret 8 */ FN_RET(0x0073f694); r_esp += 12; return;
L_0073f6c3:; BB(0x0073f6c3);
    /* 0073f6c3: fld dword ptr [0x972d3c] */ FPUSH(R_F32((u32)(0x972d3cu)));
    /* 0073f6c9: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 0073f6cc: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0073f6cf: fsub dword ptr [0x972d6c] */ ST(0) = ST(0) - R_F32((u32)(0x972d6cu));
    /* 0073f6d5: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 0073f6d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073f6da: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0073f6de: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0073f6e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073f6e4: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x73f6e9u); f_0082bb30();
    /* 0073f6e9: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0073f6ef: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x73f6f4u); f_00829cc8();
    /* 0073f6f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073f6f6: mov edx, 0xff646464 */ r_edx = 0xff646464u;
    /* 0073f6fb: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x73f700u); f_0082bb60();
    /* 0073f700: fld dword ptr [0x972d64] */ FPUSH(R_F32((u32)(0x972d64u)));
    /* 0073f706: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0073f709: fdivr dword ptr [0x972d68] */ ST(0) = R_F32((u32)(0x972d68u)) / ST(0);
    /* 0073f70f: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0073f713: fld dword ptr [0x972d38] */ FPUSH(R_F32((u32)(0x972d38u)));
    /* 0073f719: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0073f71d: fld dword ptr [0x972d60] */ FPUSH(R_F32((u32)(0x972d60u)));
    /* 0073f723: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0073f725: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0073f729: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073f72b: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0073f72e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073f730: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0073f734: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073f736: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073f738: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073f73c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0073f73e: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 0073f741: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073f745: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073f747: mov dword ptr [esp + 0x10], 0x3f700000 */ W32((u32)(r_esp+0x10u), 0x3f700000u);
    /* 0073f74f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073f752: mov dword ptr [esp + 0x14], 0x3e6c0000 */ W32((u32)(r_esp+0x14u), 0x3e6c0000u);
    /* 0073f75a: mov dword ptr [esp + 0x18], 0x3f730000 */ W32((u32)(r_esp+0x18u), 0x3f730000u);
    /* 0073f762: mov dword ptr [esp + 0x1c], 0x3e800000 */ W32((u32)(r_esp+0x1cu), 0x3e800000u);
    /* 0073f76a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f76b: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73f770u); f_0071bbb4();
    /* 0073f770: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f771: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0073f775: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073f778: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073f77c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73f781u); f_0082b440();
    /* 0073f781: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 0073f786: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f78b: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f790: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f795: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f798: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f79a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f79f: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f7a4: call 0x7a919c */ r_esp -= 4; W32(r_esp, 0x73f7a9u); f_007a919c();
    /* 0073f7a9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073f7ac: mov ecx, eax */ r_ecx = r_eax;
    /* 0073f7ae: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x73f7b3u); f_0082b438();
    /* 0073f7b3: fld dword ptr [0x972d4c] */ FPUSH(R_F32((u32)(0x972d4cu)));
    /* 0073f7b9: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0073f7bc: fdivr dword ptr [0x972d68] */ ST(0) = R_F32((u32)(0x972d68u)) / ST(0);
    /* 0073f7c2: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0073f7c5: fcom dword ptr [0x972d48] */ fx_compare(ST(0), R_F32((u32)(0x972d48u))); 
    /* 0073f7cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f7cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073f7cf: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0073f7d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f7d4: jb 0x73f81c */ if (fC) goto L_0073f81c;
L_0073f7d6:; BB(0x0073f7d6);
    /* 0073f7d6: fld dword ptr [0x972d60] */ FPUSH(R_F32((u32)(0x972d60u)));
    /* 0073f7dc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0073f7de: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0073f7e1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0073f7e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f7e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f7e6: ja 0x73f7fa */ if ((!fC&&!fZ)) goto L_0073f7fa;
L_0073f7e8:; BB(0x0073f7e8);
    /* 0073f7e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073f7ea: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0073f7ee: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0073f7f2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0073f7f4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073f7f8: jmp 0x73f81c */ goto L_0073f81c;
L_0073f7fa:; BB(0x0073f7fa);
    /* 0073f7fa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0073f7fe: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0073f802: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0073f805: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0073f807: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0073f809: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073f80b: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0073f80f: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0073f812: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0073f814: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0073f816: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073f818: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_0073f81c:; BB(0x0073f81c);
    /* 0073f81c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073f81e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0073f822: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0073f825: fadd dword ptr [0x972d34] */ ST(0) = ST(0) + R_F32((u32)(0x972d34u));
    /* 0073f82b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073f82f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073f832: mov dword ptr [esp + 0x10], 0x3f770000 */ W32((u32)(r_esp+0x10u), 0x3f770000u);
    /* 0073f83a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073f83c: mov dword ptr [esp + 0x14], 0x3e6c0000 */ W32((u32)(r_esp+0x14u), 0x3e6c0000u);
    /* 0073f844: mov dword ptr [esp + 0x18], 0x3f7a0000 */ W32((u32)(r_esp+0x18u), 0x3f7a0000u);
    /* 0073f84c: mov dword ptr [esp + 0x1c], 0x3e800000 */ W32((u32)(r_esp+0x1cu), 0x3e800000u);
    /* 0073f854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f855: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73f85au); f_0071bbb4();
    /* 0073f85a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073f85b: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0073f85f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073f862: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073f866: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73f86bu); f_0082b440();
    /* 0073f86b: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x73f870u); f_004ac444();
L_0073f870:; BB(0x0073f870);
    /* 0073f870: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073f873: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f874: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073f875: ret 8 */ FN_RET(0x0073f694); r_esp += 12; return;
}

void f_0073f878(void) /* sub_73F878 */
{
    FN_ENTER(0x0073f878);
    /* 0073f878: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0073f87c: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0073f87f: fcomp dword ptr [edx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x1cu))); FPOP();
    /* 0073f882: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f884: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f885: jbe 0x73f895 */ if ((fC||fZ)) goto L_0073f895;
L_0073f887:; BB(0x0073f887);
    /* 0073f887: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0073f88a: fcomp dword ptr [0x972d30] */ fx_compare(ST(0), R_F32((u32)(0x972d30u))); FPOP();
    /* 0073f890: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f892: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f893: jae 0x73f89a */ if (!fC) goto L_0073f89a;
L_0073f895:; BB(0x0073f895);
    /* 0073f895: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f897: ret 8 */ FN_RET(0x0073f878); r_esp += 12; return;
L_0073f89a:; BB(0x0073f89a);
    /* 0073f89a: mov eax, 1 */ r_eax = 0x1u;
    /* 0073f89f: ret 8 */ FN_RET(0x0073f878); r_esp += 12; return;
}

void f_0073f8a4(void) /* sub_73F8A4 */
{
    FN_ENTER(0x0073f8a4);
    /* 0073f8a4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0073f8a8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073f8ac: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0073f8af: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0073f8b2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0073f8b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f8b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f8b7: jbe 0x73f8c5 */ if ((fC||fZ)) goto L_0073f8c5;
L_0073f8b9:; BB(0x0073f8b9);
    /* 0073f8b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073f8bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073f8bd: fld dword ptr [0x972d2c] */ FPUSH(R_F32((u32)(0x972d2cu)));
    /* 0073f8c3: jmp 0x73f8f4 */ goto L_0073f8f4;
L_0073f8c5:; BB(0x0073f8c5);
    /* 0073f8c5: fld dword ptr [0x972d2c] */ FPUSH(R_F32((u32)(0x972d2cu)));
    /* 0073f8cb: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0073f8ce: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0073f8d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f8d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f8d3: jb 0x73f8ff */ if (fC) goto L_0073f8ff;
L_0073f8d5:; BB(0x0073f8d5);
    /* 0073f8d5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0073f8d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073f8d9: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0073f8db: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0073f8dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073f8df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073f8e0: jbe 0x73f8ed */ if ((fC||fZ)) goto L_0073f8ed;
L_0073f8e2:; BB(0x0073f8e2);
    /* 0073f8e2: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0073f8e5: mov eax, 1 */ r_eax = 0x1u;
    /* 0073f8ea: ret 8 */ FN_RET(0x0073f8a4); r_esp += 12; return;
L_0073f8ed:; BB(0x0073f8ed);
    /* 0073f8ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073f8ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f8f1: ret 8 */ FN_RET(0x0073f8a4); r_esp += 12; return;
L_0073f8f4:; BB(0x0073f8f4);
    /* 0073f8f4: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0073f8f7: mov eax, 1 */ r_eax = 0x1u;
    /* 0073f8fc: ret 8 */ FN_RET(0x0073f8a4); r_esp += 12; return;
L_0073f8ff:; BB(0x0073f8ff);
    /* 0073f8ff: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0073f901: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0073f903: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0073f905: jmp 0x73f8f4 */ goto L_0073f8f4;
}

void f_0073f908(void) /* sub_73F908 */
{
    FN_ENTER(0x0073f908);
    /* 0073f908: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f909: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073f90b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073f90d: call 0x73f92c */ r_esp -= 4; W32(r_esp, 0x73f912u); f_0073f92c();
    /* 0073f912: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073f916: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f918: jne 0x73f91e */ if (!fZ) goto L_0073f91e;
L_0073f91a:; BB(0x0073f91a);
    /* 0073f91a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073f91b: ret 4 */ FN_RET(0x0073f908); r_esp += 8; return;
L_0073f91e:; BB(0x0073f91e);
    /* 0073f91e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f91f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73f924u); f_005c2f74();
    /* 0073f924: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073f925: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073f926: ret 4 */ FN_RET(0x0073f908); r_esp += 8; return;
}

void f_0073f92c(void) /* sub_73F92C */
{
    FN_ENTER(0x0073f92c);
    /* 0073f92c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f92d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073f92f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073f931: push 0x8f2118 */ { u32 v = 0x8f2118u; r_esp -= 4; W32(r_esp, v); }
    /* 0073f936: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073f93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073f93d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073f944: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073f947: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073f94a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073f94d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073f950: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073f953: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073f956: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073f959: mov dword ptr [ecx], 0xb413f8 */ W32((u32)(r_ecx), 0xb413f8u);
    /* 0073f95f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073f966: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x73f96bu); f_008171e8();
    /* 0073f96b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073f96e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073f975: mov esp, ebp */ r_esp = r_ebp;
    /* 0073f977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073f978: ret  */ FN_RET(0x0073f92c); r_esp += 4; return;
}

void f_0073f97c(void) /* sub_73F97C */
{
    FN_ENTER(0x0073f97c);
    /* 0073f97c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073f97d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073f97e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073f980: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0073f984: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073f988: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073f98a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x73f98fu); f_008193cc();
    /* 0073f98f: mov dword ptr [ebp], 0xb413f8 */ W32((u32)(r_ebp), 0xb413f8u);
    /* 0073f996: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073f998: mov word ptr [ebp + 0x2e], dx */ W16((u32)(r_ebp+0x2eu), (u16)r_edx);
    /* 0073f99c: mov word ptr [ebp + 0x2c], dx */ W16((u32)(r_ebp+0x2cu), (u16)r_edx);
    /* 0073f9a0: mov word ptr [ebp + 0x2a], dx */ W16((u32)(r_ebp+0x2au), (u16)r_edx);
    /* 0073f9a4: mov word ptr [ebp + 0x28], dx */ W16((u32)(r_ebp+0x28u), (u16)r_edx);
    /* 0073f9a8: mov word ptr [ebp + 0x26], dx */ W16((u32)(r_ebp+0x26u), (u16)r_edx);
    /* 0073f9ac: mov word ptr [ebp + 0x24], dx */ W16((u32)(r_ebp+0x24u), (u16)r_edx);
    /* 0073f9b0: mov eax, dword ptr [0x9f3420] */ r_eax = R32((u32)(0x9f3420u));
    /* 0073f9b5: mov word ptr [ebp + 0x38], dx */ W16((u32)(r_ebp+0x38u), (u16)r_edx);
    /* 0073f9b9: mov word ptr [ebp + 0x36], dx */ W16((u32)(r_ebp+0x36u), (u16)r_edx);
    /* 0073f9bd: mov word ptr [ebp + 0x34], dx */ W16((u32)(r_ebp+0x34u), (u16)r_edx);
    /* 0073f9c1: mov word ptr [ebp + 0x32], dx */ W16((u32)(r_ebp+0x32u), (u16)r_edx);
    /* 0073f9c5: mov word ptr [ebp + 0x30], dx */ W16((u32)(r_ebp+0x30u), (u16)r_edx);
    /* 0073f9c9: mov word ptr [ebp + 0x3c], dx */ W16((u32)(r_ebp+0x3cu), (u16)r_edx);
    /* 0073f9cd: mov word ptr [ebp + 0x3a], dx */ W16((u32)(r_ebp+0x3au), (u16)r_edx);
    /* 0073f9d1: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0073f9d4: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 0073f9d7: mov word ptr [ebp + 0x24], ax */ W16((u32)(r_ebp+0x24u), (u16)r_eax);
    /* 0073f9db: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 0073f9df: mov word ptr [ebp + 0x26], ax */ W16((u32)(r_ebp+0x26u), (u16)r_eax);
    /* 0073f9e3: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073f9e7: mov word ptr [ebp + 0x28], ax */ W16((u32)(r_ebp+0x28u), (u16)r_eax);
    /* 0073f9eb: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 0073f9ef: mov word ptr [ebp + 0x2a], ax */ W16((u32)(r_ebp+0x2au), (u16)r_eax);
    /* 0073f9f3: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0073f9f7: mov word ptr [ebp + 0x2c], ax */ W16((u32)(r_ebp+0x2cu), (u16)r_eax);
    /* 0073f9fb: movzx eax, word ptr [ebx + 0xa] */ r_eax = (u32)R16((u32)(r_ebx+0xau));
    /* 0073f9ff: mov word ptr [ebp + 0x2e], ax */ W16((u32)(r_ebp+0x2eu), (u16)r_eax);
    /* 0073fa03: movzx eax, word ptr [ebx + 0xc] */ r_eax = (u32)R16((u32)(r_ebx+0xcu));
    /* 0073fa07: mov word ptr [ebp + 0x30], ax */ W16((u32)(r_ebp+0x30u), (u16)r_eax);
    /* 0073fa0b: movzx eax, word ptr [ebx + 0xe] */ r_eax = (u32)R16((u32)(r_ebx+0xeu));
    /* 0073fa0f: mov word ptr [ebp + 0x32], ax */ W16((u32)(r_ebp+0x32u), (u16)r_eax);
    /* 0073fa13: movzx eax, word ptr [ebx + 0x10] */ r_eax = (u32)R16((u32)(r_ebx+0x10u));
    /* 0073fa17: mov word ptr [ebp + 0x34], ax */ W16((u32)(r_ebp+0x34u), (u16)r_eax);
    /* 0073fa1b: movzx eax, word ptr [ebx + 0x12] */ r_eax = (u32)R16((u32)(r_ebx+0x12u));
    /* 0073fa1f: mov word ptr [ebp + 0x36], ax */ W16((u32)(r_ebp+0x36u), (u16)r_eax);
    /* 0073fa23: movzx eax, word ptr [ebx + 0x14] */ r_eax = (u32)R16((u32)(r_ebx+0x14u));
    /* 0073fa27: mov word ptr [ebp + 0x38], ax */ W16((u32)(r_ebp+0x38u), (u16)r_eax);
    /* 0073fa2b: movzx eax, word ptr [ebx + 0x16] */ r_eax = (u32)R16((u32)(r_ebx+0x16u));
    /* 0073fa2f: mov word ptr [ebp + 0x3a], ax */ W16((u32)(r_ebp+0x3au), (u16)r_eax);
    /* 0073fa33: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0073fa37: movzx ebx, word ptr [ebx + 0x18] */ r_ebx = (u32)R16((u32)(r_ebx+0x18u));
    /* 0073fa3b: mov word ptr [ebp + 0x3c], bx */ W16((u32)(r_ebp+0x3cu), (u16)r_ebx);
    /* 0073fa3f: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0073fa43: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0073fa46: mov byte ptr [ebp + 0x1c], dl */ W8((u32)(r_ebp+0x1cu), (u8)r_edx);
    /* 0073fa49: mov eax, ebp */ r_eax = r_ebp;
    /* 0073fa4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073fa4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073fa4d: ret 0xc */ FN_RET(0x0073f97c); r_esp += 16; return;
}

void f_0073fa50(void) /* sub_73FA50 */
{
    FN_ENTER(0x0073fa50);
    /* 0073fa50: movsx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1eu));
    /* 0073fa54: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0073fa57: mov word ptr [ecx + 0x1e], ax */ W16((u32)(r_ecx+0x1eu), (u16)r_eax);
    /* 0073fa5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fa5d: jle 0x73fa60 */ if ((fZ||fS!=fO)) goto L_0073fa60;
L_0073fa5f:; BB(0x0073fa5f);
    /* 0073fa5f: ret  */ FN_RET(0x0073fa50); r_esp += 4; return;
L_0073fa60:; BB(0x0073fa60);
    /* 0073fa60: call 0x73fa68 */ r_esp -= 4; W32(r_esp, 0x73fa65u); f_0073fa68();
    /* 0073fa65: ret  */ FN_RET(0x0073fa50); r_esp += 4; return;
}

void f_0073fa68(void) /* sub_73FA68 */
{
    FN_ENTER(0x0073fa68);
    /* 0073fa68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073fa69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073fa6a: mov edi, ecx */ r_edi = r_ecx;
    /* 0073fa6c: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x73fa71u); f_00816d30();
    /* 0073fa71: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fa73: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fa78u); f_0079317c();
    /* 0073fa78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fa79: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fa7eu); f_00816cb8();
    /* 0073fa7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073fa81: movsx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 0073fa85: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073fa88: ja 0x73fcb0 */ if ((!fC&&!fZ)) goto L_0073fcb0;
L_0073fa8e:; BB(0x0073fa8e);
    /* 0073fa8e: mov eax, dword ptr [eax*4 + 0x972d70] */ r_eax = R32((u32)(r_eax*4+0x972d70u));
    /* 0073fa95: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fa68); r_esp += 4; return;
}

void f_0073fa97(void)
{
    FN_ENTER(0x0073fa97);
    /* 0073fa97: movsx eax, word ptr [edi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3au));
    /* 0073fa9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fa9d: jle 0x73facc */ if ((fZ||fS!=fO)) goto L_0073facc;
L_0073fa9f:; BB(0x0073fa9f);
    /* 0073fa9f: push 0x972db4 */ { u32 v = 0x972db4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073faa4: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73faa9u); f_00816cb8();
    /* 0073faa9: movsx eax, word ptr [edi + 0x3a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3au));
    /* 0073faad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073faae: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fab3u); f_00815f24();
    /* 0073fab3: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fab8: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fabb: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fac0u); f_00718350();
    /* 0073fac0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fac3: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0073fac7: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073facc:; BB(0x0073facc);
    /* 0073facc: movsx eax, word ptr [edi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3cu));
    /* 0073fad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fad2: jle 0x73fb01 */ if ((fZ||fS!=fO)) goto L_0073fb01;
L_0073fad4:; BB(0x0073fad4);
    /* 0073fad4: push 0x972dc0 */ { u32 v = 0x972dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fad9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fadeu); f_00816cb8();
    /* 0073fade: movsx eax, word ptr [edi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3cu));
    /* 0073fae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fae3: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fae8u); f_00815f24();
    /* 0073fae8: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073faed: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073faf0: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73faf5u); f_00718350();
    /* 0073faf5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073faf8: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0073fafc: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb01:; BB(0x0073fb01);
    /* 0073fb01: movsx eax, word ptr [edi + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x24u));
    /* 0073fb05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb07: jle 0x73fb46 */ if ((fZ||fS!=fO)) goto L_0073fb46;
L_0073fb09:; BB(0x0073fb09);
    /* 0073fb09: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb0e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb13u); f_0079317c();
    /* 0073fb13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb14: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb19u); f_00816cb8();
    /* 0073fb19: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb1e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb23u); f_00816cb8();
    /* 0073fb23: movsx eax, word ptr [edi + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x24u));
    /* 0073fb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb28: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fb2du); f_00815f24();
    /* 0073fb2d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb32: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fb35: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fb3au); f_00718350();
    /* 0073fb3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fb3d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0073fb41: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb46:; BB(0x0073fb46);
    /* 0073fb46: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb4c: jle 0x73fb8b */ if ((fZ||fS!=fO)) goto L_0073fb8b;
L_0073fb4e:; BB(0x0073fb4e);
    /* 0073fb4e: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb53: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb58u); f_0079317c();
    /* 0073fb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb59: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb5eu); f_00816cb8();
    /* 0073fb5e: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb63: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb68u); f_00816cb8();
    /* 0073fb68: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb6d: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fb72u); f_00815f24();
    /* 0073fb72: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb77: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fb7a: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fb7fu); f_00718350();
    /* 0073fb7f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fb82: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0073fb86: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb8b:; BB(0x0073fb8b);
    /* 0073fb8b: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb91: jle 0x73fbd0 */ if ((fZ||fS!=fO)) goto L_0073fbd0;
L_0073fb93:; BB(0x0073fb93);
    /* 0073fb93: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb98: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb9du); f_0079317c();
    /* 0073fb9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb9e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fba3u); f_00816cb8();
    /* 0073fba3: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fba8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbadu); f_00816cb8();
    /* 0073fbad: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbb2: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbb7u); f_00815f24();
    /* 0073fbb7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbc: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbf: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fbc4u); f_00718350();
    /* 0073fbc4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fbc7: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0073fbcb: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fbd0:; BB(0x0073fbd0);
    /* 0073fbd0: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fbd6: jle 0x73fc15 */ if ((fZ||fS!=fO)) goto L_0073fc15;
L_0073fbd8:; BB(0x0073fbd8);
    /* 0073fbd8: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbdd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fbe2u); f_0079317c();
    /* 0073fbe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbe3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbe8u); f_00816cb8();
    /* 0073fbe8: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbed: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbf2u); f_00816cb8();
    /* 0073fbf2: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbf7: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbfcu); f_00815f24();
    /* 0073fbfc: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc01: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc04: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc09u); f_00718350();
    /* 0073fc09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc0c: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 0073fc10: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc15:; BB(0x0073fc15);
    /* 0073fc15: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fc1b: jle 0x73fc57 */ if ((fZ||fS!=fO)) goto L_0073fc57;
L_0073fc1d:; BB(0x0073fc1d);
    /* 0073fc1d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc22: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fc27u); f_0079317c();
    /* 0073fc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc28: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc2du); f_00816cb8();
    /* 0073fc2d: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc32: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc37u); f_00816cb8();
    /* 0073fc37: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc3c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc41u); f_00815f24();
    /* 0073fc41: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc46: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc49: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc4eu); f_00718350();
    /* 0073fc4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc51: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 0073fc55: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc57:; BB(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fa97); r_esp += 4; return;
}

void f_0073facc(void)
{
    FN_ENTER(0x0073facc);
    /* 0073facc: movsx eax, word ptr [edi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3cu));
    /* 0073fad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fad2: jle 0x73fb01 */ if ((fZ||fS!=fO)) goto L_0073fb01;
L_0073fad4:; BB(0x0073fad4);
    /* 0073fad4: push 0x972dc0 */ { u32 v = 0x972dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fad9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fadeu); f_00816cb8();
    /* 0073fade: movsx eax, word ptr [edi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3cu));
    /* 0073fae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fae3: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fae8u); f_00815f24();
    /* 0073fae8: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073faed: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073faf0: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73faf5u); f_00718350();
    /* 0073faf5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073faf8: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0073fafc: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb01:; BB(0x0073fb01);
    /* 0073fb01: movsx eax, word ptr [edi + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x24u));
    /* 0073fb05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb07: jle 0x73fb46 */ if ((fZ||fS!=fO)) goto L_0073fb46;
L_0073fb09:; BB(0x0073fb09);
    /* 0073fb09: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb0e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb13u); f_0079317c();
    /* 0073fb13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb14: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb19u); f_00816cb8();
    /* 0073fb19: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb1e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb23u); f_00816cb8();
    /* 0073fb23: movsx eax, word ptr [edi + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x24u));
    /* 0073fb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb28: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fb2du); f_00815f24();
    /* 0073fb2d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb32: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fb35: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fb3au); f_00718350();
    /* 0073fb3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fb3d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0073fb41: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb46:; BB(0x0073fb46);
    /* 0073fb46: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb4c: jle 0x73fb8b */ if ((fZ||fS!=fO)) goto L_0073fb8b;
L_0073fb4e:; BB(0x0073fb4e);
    /* 0073fb4e: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb53: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb58u); f_0079317c();
    /* 0073fb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb59: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb5eu); f_00816cb8();
    /* 0073fb5e: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb63: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb68u); f_00816cb8();
    /* 0073fb68: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb6d: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fb72u); f_00815f24();
    /* 0073fb72: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb77: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fb7a: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fb7fu); f_00718350();
    /* 0073fb7f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fb82: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0073fb86: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb8b:; BB(0x0073fb8b);
    /* 0073fb8b: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb91: jle 0x73fbd0 */ if ((fZ||fS!=fO)) goto L_0073fbd0;
L_0073fb93:; BB(0x0073fb93);
    /* 0073fb93: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb98: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb9du); f_0079317c();
    /* 0073fb9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb9e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fba3u); f_00816cb8();
    /* 0073fba3: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fba8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbadu); f_00816cb8();
    /* 0073fbad: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbb2: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbb7u); f_00815f24();
    /* 0073fbb7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbc: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbf: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fbc4u); f_00718350();
    /* 0073fbc4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fbc7: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0073fbcb: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fbd0:; BB(0x0073fbd0);
    /* 0073fbd0: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fbd6: jle 0x73fc15 */ if ((fZ||fS!=fO)) goto L_0073fc15;
L_0073fbd8:; BB(0x0073fbd8);
    /* 0073fbd8: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbdd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fbe2u); f_0079317c();
    /* 0073fbe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbe3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbe8u); f_00816cb8();
    /* 0073fbe8: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbed: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbf2u); f_00816cb8();
    /* 0073fbf2: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbf7: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbfcu); f_00815f24();
    /* 0073fbfc: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc01: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc04: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc09u); f_00718350();
    /* 0073fc09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc0c: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 0073fc10: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc15:; BB(0x0073fc15);
    /* 0073fc15: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fc1b: jle 0x73fc57 */ if ((fZ||fS!=fO)) goto L_0073fc57;
L_0073fc1d:; BB(0x0073fc1d);
    /* 0073fc1d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc22: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fc27u); f_0079317c();
    /* 0073fc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc28: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc2du); f_00816cb8();
    /* 0073fc2d: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc32: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc37u); f_00816cb8();
    /* 0073fc37: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc3c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc41u); f_00815f24();
    /* 0073fc41: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc46: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc49: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc4eu); f_00718350();
    /* 0073fc4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc51: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 0073fc55: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc57:; BB(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073facc); r_esp += 4; return;
}

void f_0073fb01(void)
{
    FN_ENTER(0x0073fb01);
    /* 0073fb01: movsx eax, word ptr [edi + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x24u));
    /* 0073fb05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb07: jle 0x73fb46 */ if ((fZ||fS!=fO)) goto L_0073fb46;
L_0073fb09:; BB(0x0073fb09);
    /* 0073fb09: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb0e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb13u); f_0079317c();
    /* 0073fb13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb14: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb19u); f_00816cb8();
    /* 0073fb19: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb1e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb23u); f_00816cb8();
    /* 0073fb23: movsx eax, word ptr [edi + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x24u));
    /* 0073fb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb28: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fb2du); f_00815f24();
    /* 0073fb2d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb32: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fb35: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fb3au); f_00718350();
    /* 0073fb3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fb3d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0073fb41: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb46:; BB(0x0073fb46);
    /* 0073fb46: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb4c: jle 0x73fb8b */ if ((fZ||fS!=fO)) goto L_0073fb8b;
L_0073fb4e:; BB(0x0073fb4e);
    /* 0073fb4e: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb53: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb58u); f_0079317c();
    /* 0073fb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb59: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb5eu); f_00816cb8();
    /* 0073fb5e: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb63: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb68u); f_00816cb8();
    /* 0073fb68: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb6d: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fb72u); f_00815f24();
    /* 0073fb72: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb77: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fb7a: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fb7fu); f_00718350();
    /* 0073fb7f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fb82: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0073fb86: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb8b:; BB(0x0073fb8b);
    /* 0073fb8b: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb91: jle 0x73fbd0 */ if ((fZ||fS!=fO)) goto L_0073fbd0;
L_0073fb93:; BB(0x0073fb93);
    /* 0073fb93: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb98: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb9du); f_0079317c();
    /* 0073fb9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb9e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fba3u); f_00816cb8();
    /* 0073fba3: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fba8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbadu); f_00816cb8();
    /* 0073fbad: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbb2: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbb7u); f_00815f24();
    /* 0073fbb7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbc: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbf: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fbc4u); f_00718350();
    /* 0073fbc4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fbc7: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0073fbcb: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fbd0:; BB(0x0073fbd0);
    /* 0073fbd0: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fbd6: jle 0x73fc15 */ if ((fZ||fS!=fO)) goto L_0073fc15;
L_0073fbd8:; BB(0x0073fbd8);
    /* 0073fbd8: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbdd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fbe2u); f_0079317c();
    /* 0073fbe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbe3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbe8u); f_00816cb8();
    /* 0073fbe8: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbed: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbf2u); f_00816cb8();
    /* 0073fbf2: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbf7: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbfcu); f_00815f24();
    /* 0073fbfc: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc01: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc04: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc09u); f_00718350();
    /* 0073fc09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc0c: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 0073fc10: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc15:; BB(0x0073fc15);
    /* 0073fc15: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fc1b: jle 0x73fc57 */ if ((fZ||fS!=fO)) goto L_0073fc57;
L_0073fc1d:; BB(0x0073fc1d);
    /* 0073fc1d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc22: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fc27u); f_0079317c();
    /* 0073fc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc28: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc2du); f_00816cb8();
    /* 0073fc2d: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc32: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc37u); f_00816cb8();
    /* 0073fc37: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc3c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc41u); f_00815f24();
    /* 0073fc41: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc46: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc49: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc4eu); f_00718350();
    /* 0073fc4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc51: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 0073fc55: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc57:; BB(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fb01); r_esp += 4; return;
}

void f_0073fb46(void)
{
    FN_ENTER(0x0073fb46);
    /* 0073fb46: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb4c: jle 0x73fb8b */ if ((fZ||fS!=fO)) goto L_0073fb8b;
L_0073fb4e:; BB(0x0073fb4e);
    /* 0073fb4e: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb53: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb58u); f_0079317c();
    /* 0073fb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb59: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb5eu); f_00816cb8();
    /* 0073fb5e: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb63: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fb68u); f_00816cb8();
    /* 0073fb68: movsx eax, word ptr [edi + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x26u));
    /* 0073fb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb6d: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fb72u); f_00815f24();
    /* 0073fb72: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb77: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fb7a: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fb7fu); f_00718350();
    /* 0073fb7f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fb82: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0073fb86: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fb8b:; BB(0x0073fb8b);
    /* 0073fb8b: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb91: jle 0x73fbd0 */ if ((fZ||fS!=fO)) goto L_0073fbd0;
L_0073fb93:; BB(0x0073fb93);
    /* 0073fb93: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb98: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb9du); f_0079317c();
    /* 0073fb9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb9e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fba3u); f_00816cb8();
    /* 0073fba3: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fba8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbadu); f_00816cb8();
    /* 0073fbad: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbb2: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbb7u); f_00815f24();
    /* 0073fbb7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbc: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbf: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fbc4u); f_00718350();
    /* 0073fbc4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fbc7: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0073fbcb: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fbd0:; BB(0x0073fbd0);
    /* 0073fbd0: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fbd6: jle 0x73fc15 */ if ((fZ||fS!=fO)) goto L_0073fc15;
L_0073fbd8:; BB(0x0073fbd8);
    /* 0073fbd8: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbdd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fbe2u); f_0079317c();
    /* 0073fbe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbe3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbe8u); f_00816cb8();
    /* 0073fbe8: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbed: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbf2u); f_00816cb8();
    /* 0073fbf2: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbf7: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbfcu); f_00815f24();
    /* 0073fbfc: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc01: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc04: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc09u); f_00718350();
    /* 0073fc09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc0c: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 0073fc10: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc15:; BB(0x0073fc15);
    /* 0073fc15: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fc1b: jle 0x73fc57 */ if ((fZ||fS!=fO)) goto L_0073fc57;
L_0073fc1d:; BB(0x0073fc1d);
    /* 0073fc1d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc22: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fc27u); f_0079317c();
    /* 0073fc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc28: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc2du); f_00816cb8();
    /* 0073fc2d: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc32: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc37u); f_00816cb8();
    /* 0073fc37: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc3c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc41u); f_00815f24();
    /* 0073fc41: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc46: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc49: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc4eu); f_00718350();
    /* 0073fc4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc51: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 0073fc55: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc57:; BB(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fb46); r_esp += 4; return;
}

void f_0073fb8b(void)
{
    FN_ENTER(0x0073fb8b);
    /* 0073fb8b: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fb91: jle 0x73fbd0 */ if ((fZ||fS!=fO)) goto L_0073fbd0;
L_0073fb93:; BB(0x0073fb93);
    /* 0073fb93: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb98: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fb9du); f_0079317c();
    /* 0073fb9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fb9e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fba3u); f_00816cb8();
    /* 0073fba3: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fba8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbadu); f_00816cb8();
    /* 0073fbad: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0073fbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbb2: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbb7u); f_00815f24();
    /* 0073fbb7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbc: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fbbf: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fbc4u); f_00718350();
    /* 0073fbc4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fbc7: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0073fbcb: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fbd0:; BB(0x0073fbd0);
    /* 0073fbd0: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fbd6: jle 0x73fc15 */ if ((fZ||fS!=fO)) goto L_0073fc15;
L_0073fbd8:; BB(0x0073fbd8);
    /* 0073fbd8: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbdd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fbe2u); f_0079317c();
    /* 0073fbe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbe3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbe8u); f_00816cb8();
    /* 0073fbe8: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbed: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbf2u); f_00816cb8();
    /* 0073fbf2: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbf7: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbfcu); f_00815f24();
    /* 0073fbfc: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc01: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc04: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc09u); f_00718350();
    /* 0073fc09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc0c: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 0073fc10: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc15:; BB(0x0073fc15);
    /* 0073fc15: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fc1b: jle 0x73fc57 */ if ((fZ||fS!=fO)) goto L_0073fc57;
L_0073fc1d:; BB(0x0073fc1d);
    /* 0073fc1d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc22: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fc27u); f_0079317c();
    /* 0073fc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc28: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc2du); f_00816cb8();
    /* 0073fc2d: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc32: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc37u); f_00816cb8();
    /* 0073fc37: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc3c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc41u); f_00815f24();
    /* 0073fc41: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc46: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc49: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc4eu); f_00718350();
    /* 0073fc4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc51: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 0073fc55: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc57:; BB(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fb8b); r_esp += 4; return;
}

void f_0073fbd0(void)
{
    FN_ENTER(0x0073fbd0);
    /* 0073fbd0: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fbd6: jle 0x73fc15 */ if ((fZ||fS!=fO)) goto L_0073fc15;
L_0073fbd8:; BB(0x0073fbd8);
    /* 0073fbd8: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbdd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fbe2u); f_0079317c();
    /* 0073fbe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbe3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbe8u); f_00816cb8();
    /* 0073fbe8: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbed: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fbf2u); f_00816cb8();
    /* 0073fbf2: movsx eax, word ptr [edi + 0x2a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2au));
    /* 0073fbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fbf7: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fbfcu); f_00815f24();
    /* 0073fbfc: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc01: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc04: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc09u); f_00718350();
    /* 0073fc09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc0c: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 0073fc10: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc15:; BB(0x0073fc15);
    /* 0073fc15: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fc1b: jle 0x73fc57 */ if ((fZ||fS!=fO)) goto L_0073fc57;
L_0073fc1d:; BB(0x0073fc1d);
    /* 0073fc1d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc22: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fc27u); f_0079317c();
    /* 0073fc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc28: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc2du); f_00816cb8();
    /* 0073fc2d: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc32: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc37u); f_00816cb8();
    /* 0073fc37: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc3c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc41u); f_00815f24();
    /* 0073fc41: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc46: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc49: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc4eu); f_00718350();
    /* 0073fc4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc51: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 0073fc55: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc57:; BB(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fbd0); r_esp += 4; return;
}

void f_0073fc15(void)
{
    FN_ENTER(0x0073fc15);
    /* 0073fc15: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073fc1b: jle 0x73fc57 */ if ((fZ||fS!=fO)) goto L_0073fc57;
L_0073fc1d:; BB(0x0073fc1d);
    /* 0073fc1d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc22: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73fc27u); f_0079317c();
    /* 0073fc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc28: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc2du); f_00816cb8();
    /* 0073fc2d: push 0x972dcc */ { u32 v = 0x972dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc32: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc37u); f_00816cb8();
    /* 0073fc37: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0073fc3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc3c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc41u); f_00815f24();
    /* 0073fc41: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc46: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc49: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fc4eu); f_00718350();
    /* 0073fc4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fc51: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 0073fc55: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fc57:; BB(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fc15); r_esp += 4; return;
}

void f_0073fc57(void)
{
    FN_ENTER(0x0073fc57);
    /* 0073fc57: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0073fc5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc60: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0073fc64: jmp 0x73fcb0 */ goto L_0073fcb0;
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fc57); r_esp += 4; return;
}

void f_0073fc66(void)
{
    FN_ENTER(0x0073fc66);
    /* 0073fc66: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fc69: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x73fc6eu); f_0068d5a8();
    /* 0073fc6e: mov esi, eax */ r_esi = r_eax;
    /* 0073fc70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073fc73: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc75: je 0x73fcb0 */ if (fZ) goto L_0073fcb0;
L_0073fc77:; BB(0x0073fc77);
    /* 0073fc77: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 0073fc7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fc7f: je 0x73fcb0 */ if (fZ) goto L_0073fcb0;
L_0073fc81:; BB(0x0073fc81);
    /* 0073fc81: push 0x972da4 */ { u32 v = 0x972da4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc86: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73fc8bu); f_00816cb8();
    /* 0073fc8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073fc8c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0073fc8e: mov ecx, esi */ r_ecx = r_esi;
    /* 0073fc90: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x73fc93u); call_ind(t); }
    /* 0073fc93: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073fc96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fc97: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73fc9cu); f_00815f24();
    /* 0073fc9c: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fca1: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fca4: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x73fca9u); f_00718350();
    /* 0073fca9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073fcac: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
L_0073fcb0:; BB(0x0073fcb0);
    /* 0073fcb0: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0073fcb5: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 0073fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073fcba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073fcbb: ret  */ FN_RET(0x0073fc66); r_esp += 4; return;
}

void f_0073fcbc(void) /* sub_73FCBC */
{
    FN_ENTER(0x0073fcbc);
    /* 0073fcbc: mov dword ptr [0xa9aa00], 0x3f800000 */ W32((u32)(0xa9aa00u), 0x3f800000u);
    /* 0073fcc6: mov dword ptr [0xa9aa04], 0x41000000 */ W32((u32)(0xa9aa04u), 0x41000000u);
    /* 0073fcd0: mov dword ptr [0xa9aa08], 0x3fc00000 */ W32((u32)(0xa9aa08u), 0x3fc00000u);
    /* 0073fcda: ret  */ FN_RET(0x0073fcbc); r_esp += 4; return;
}

void f_0073fcdc(void) /* sub_73FCDC */
{
    FN_ENTER(0x0073fcdc);
    /* 0073fcdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073fcdd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073fcdf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073fce1: call 0x73fd00 */ r_esp -= 4; W32(r_esp, 0x73fce6u); f_0073fd00();
    /* 0073fce6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073fcea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fcec: jne 0x73fcf2 */ if (!fZ) goto L_0073fcf2;
L_0073fcee:; BB(0x0073fcee);
    /* 0073fcee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073fcef: ret 4 */ FN_RET(0x0073fcdc); r_esp += 8; return;
L_0073fcf2:; BB(0x0073fcf2);
    /* 0073fcf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073fcf3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73fcf8u); f_005c2f74();
    /* 0073fcf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073fcf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073fcfa: ret 4 */ FN_RET(0x0073fcdc); r_esp += 8; return;
}

void f_0073fd00(void) /* sub_73FD00 */
{
    FN_ENTER(0x0073fd00);
    /* 0073fd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0073fd03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd05: push 0x8f2134 */ { u32 v = 0x8f2134u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073fd10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073fd18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073fd1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073fd1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073fd21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073fd24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073fd27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073fd2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073fd2d: mov dword ptr [ecx], 0xb414d0 */ W32((u32)(r_ecx), 0xb414d0u);
    /* 0073fd33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073fd3a: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x73fd3fu); f_007366bc();
    /* 0073fd3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073fd42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073fd49: mov esp, ebp */ r_esp = r_ebp;
    /* 0073fd4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073fd4c: ret  */ FN_RET(0x0073fd00); r_esp += 4; return;
}

void f_0073fd50(void) /* sub_73FD50 */
{
    FN_ENTER(0x0073fd50);
    /* 0073fd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd51: mov ebp, esp */ r_ebp = r_esp;
    /* 0073fd53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd55: push 0x8f2150 */ { u32 v = 0x8f2150u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073fd60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073fd68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073fd6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073fd6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073fd71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073fd74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073fd77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073fd7a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fd7d: movsx edx, word ptr [0xa9c4f4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa9c4f4u));
    /* 0073fd84: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0073fd87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073fd88: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fd8b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fd8e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073fd91: call 0x736734 */ r_esp -= 4; W32(r_esp, 0x73fd96u); f_00736734();
    /* 0073fd96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073fd9d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073fda0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073fda3: mov dword ptr [ecx], 0xb414d0 */ W32((u32)(r_ecx), 0xb414d0u);
    /* 0073fda9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fdaa: call 0x7400d0 */ r_esp -= 4; W32(r_esp, 0x73fdafu); f_007400d0();
    /* 0073fdaf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073fdb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073fdb5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073fdbc: mov esp, ebp */ r_esp = r_ebp;
    /* 0073fdbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073fdbf: ret 0x10 */ FN_RET(0x0073fd50); r_esp += 20; return;
}

void f_0073fdc4(void) /* sub_73FDC4 */
{
    FN_ENTER(0x0073fdc4);
    /* 0073fdc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073fdc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0073fdc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fdc9: push 0x8f2178 */ { u32 v = 0x8f2178u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fdce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073fdd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fdd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073fddc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073fddf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073fde2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0073fde5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0073fde8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073fdeb: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0073fdf0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073fdf3: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0073fdf8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073fdfb: je 0x73fe1f */ if (fZ) goto L_0073fe1f;
L_0073fdfd:; BB(0x0073fdfd);
    /* 0073fdfd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073fe00: jne 0x73fe13 */ if (!fZ) goto L_0073fe13;
L_0073fe02:; BB(0x0073fe02);
    /* 0073fe02: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe04: push 0x972ddc */ { u32 v = 0x972ddcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe09: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x73fe0eu); f_00737f80();
    /* 0073fe0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073fe11: jmp 0x73fe2e */ goto L_0073fe2e;
L_0073fe13:; BB(0x0073fe13);
    /* 0073fe13: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073fe16: jl 0x73fe2e */ if ((fS!=fO)) goto L_0073fe2e;
L_0073fe18:; BB(0x0073fe18);
    /* 0073fe18: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073fe1b: jle 0x73fe83 */ if ((fZ||fS!=fO)) goto L_0073fe83;
L_0073fe1d:; BB(0x0073fe1d);
    /* 0073fe1d: jmp 0x73fe2e */ goto L_0073fe2e;
L_0073fe1f:; BB(0x0073fe1f);
    /* 0073fe1f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe21: push 0x972dd4 */ { u32 v = 0x972dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe26: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x73fe2bu); f_00737f80();
    /* 0073fe2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073fe2e:; BB(0x0073fe2e);
    /* 0073fe2e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0073fe35: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe3a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73fe3fu); f_005caba4();
    /* 0073fe3f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073fe42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073fe45: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0073fe48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073fe4a: je 0x73fe94 */ if (fZ) goto L_0073fe94;
L_0073fe4c:; BB(0x0073fe4c);
    /* 0073fe4c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0073fe53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073fe5a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073fe5d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073fe60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe61: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe63: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073fe66: call 0x73fe9c */ r_esp -= 4; W32(r_esp, 0x73fe6bu); f_0073fe9c();
    /* 0073fe6b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0073fe72:; BB(0x0073fe72);
    /* 0073fe72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073fe75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073fe78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073fe7f: mov esp, ebp */ r_esp = r_ebp;
    /* 0073fe81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073fe82: ret  */ FN_RET(0x0073fdc4); r_esp += 4; return;
L_0073fe83:; BB(0x0073fe83);
    /* 0073fe83: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe85: push 0x972de4 */ { u32 v = 0x972de4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe8a: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x73fe8fu); f_00737f80();
    /* 0073fe8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073fe92: jmp 0x73fe2e */ goto L_0073fe2e;
L_0073fe94:; BB(0x0073fe94);
    /* 0073fe94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073fe96: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073fe99: jmp 0x73fe72 */ goto L_0073fe72;
}

void f_0073fe9c(void) /* sub_73FE9C */
{
    FN_ENTER(0x0073fe9c);
    /* 0073fe9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073fe9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073fe9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fea1: push 0x8f2194 */ { u32 v = 0x8f2194u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fea6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073feac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fead: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073feb4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073feb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073feba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073febd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073fec0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073fec3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0073fec6: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0073fec9: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0073fecc: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0073fecf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073fed2: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0073fed4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73fed9u); f_0073ec50();
    /* 0073fed9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073feda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073fedd: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 0073fee0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073fee1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073fee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fee3: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x73fee8u); f_00736988();
    /* 0073fee8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073feef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073fef2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073fef5: mov dword ptr [ecx], 0xb414d0 */ W32((u32)(r_ecx), 0xb414d0u);
    /* 0073fefb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fefc: call 0x7400d0 */ r_esp -= 4; W32(r_esp, 0x73ff01u); f_007400d0();
    /* 0073ff01: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073ff04: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073ff07: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073ff0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073ff0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ff14: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ff16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ff17: ret 0xc */ FN_RET(0x0073fe9c); r_esp += 16; return;
}

void f_0073ff1c(void) /* sub_73FF1C */
{
    FN_ENTER(0x0073ff1c);
    /* 0073ff1c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ff22: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ff26: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ff2a: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x73ff2fu); f_0073ff34();
    /* 0073ff2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073ff32: ret  */ FN_RET(0x0073ff1c); r_esp += 4; return;
}

void f_0073ff34(void) /* sub_73FF34 */
{
    FN_ENTER(0x0073ff34);
    /* 0073ff34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff35: mov ebp, esp */ r_ebp = r_esp;
    /* 0073ff37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff39: push 0x8f21bc */ { u32 v = 0x8f21bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073ff44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073ff4c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073ff4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073ff52: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073ff55: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073ff58: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073ff5b: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0073ff60: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ff63: je 0x73ff89 */ if (fZ) goto L_0073ff89;
L_0073ff65:; BB(0x0073ff65);
    /* 0073ff65: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ff68: jne 0x73ff7d */ if (!fZ) goto L_0073ff7d;
L_0073ff6a:; BB(0x0073ff6a);
    /* 0073ff6a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073ff6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff6e: push 0x972df4 */ { u32 v = 0x972df4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff73: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x73ff78u); f_00737f80();
    /* 0073ff78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ff7b: jmp 0x73ff9a */ goto L_0073ff9a;
L_0073ff7d:; BB(0x0073ff7d);
    /* 0073ff7d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073ff80: jl 0x73ff9a */ if ((fS!=fO)) goto L_0073ff9a;
L_0073ff82:; BB(0x0073ff82);
    /* 0073ff82: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073ff85: jle 0x73fff0 */ if ((fZ||fS!=fO)) goto L_0073fff0;
L_0073ff87:; BB(0x0073ff87);
    /* 0073ff87: jmp 0x73ff9a */ goto L_0073ff9a;
L_0073ff89:; BB(0x0073ff89);
    /* 0073ff89: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073ff8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff8d: push 0x972dec */ { u32 v = 0x972decu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ff92: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x73ff97u); f_00737f80();
    /* 0073ff97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073ff9a:; BB(0x0073ff9a);
    /* 0073ff9a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0073ffa1: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ffa6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73ffabu); f_005caba4();
    /* 0073ffab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073ffae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ffb1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073ffb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ffb6: je 0x740003 */ if (fZ) goto L_00740003;
L_0073ffb8:; BB(0x0073ffb8);
    /* 0073ffb8: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0073ffbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073ffc6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ffc9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073ffcc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ffcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ffd0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ffd3: call 0x73fe9c */ r_esp -= 4; W32(r_esp, 0x73ffd8u); f_0073fe9c();
    /* 0073ffd8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073ffdf:; BB(0x0073ffdf);
    /* 0073ffdf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ffe2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073ffe5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ffec: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ffee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ffef: ret  */ FN_RET(0x0073ff34); r_esp += 4; return;
L_0073fff0:; BB(0x0073fff0);
    /* 0073fff0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073fff3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073fff4: push 0x972dfc */ { u32 v = 0x972dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073fff9: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x73fffeu); f_00737f80();
    /* 0073fffe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740001: jmp 0x73ff9a */ goto L_0073ff9a;
L_00740003:; BB(0x00740003);
    /* 00740003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740005: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00740008: jmp 0x73ffdf */ goto L_0073ffdf;
}

