#include "protos.h"

void f_0063f01c(void) /* sub_63F01C */
{
    FN_ENTER(0x0063f01c);
    /* 0063f01c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f01d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f01f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f021: call 0x63f0b4 */ r_esp -= 4; W32(r_esp, 0x63f026u); f_0063f0b4();
    /* 0063f026: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f02a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f02c: jne 0x63f032 */ if (!fZ) goto L_0063f032;
L_0063f02e:; BB(0x0063f02e);
    /* 0063f02e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f02f: ret 4 */ FN_RET(0x0063f01c); r_esp += 8; return;
L_0063f032:; BB(0x0063f032);
    /* 0063f032: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f033: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f038u); f_005c2f74();
    /* 0063f038: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f039: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f03a: ret 4 */ FN_RET(0x0063f01c); r_esp += 8; return;
}

void f_0063f040(void) /* sub_63F040 */
{
    FN_ENTER(0x0063f040);
    /* 0063f040: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f041: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f043: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f045: call 0x63f064 */ r_esp -= 4; W32(r_esp, 0x63f04au); f_0063f064();
    /* 0063f04a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f04e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f050: jne 0x63f056 */ if (!fZ) goto L_0063f056;
L_0063f052:; BB(0x0063f052);
    /* 0063f052: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f053: ret 4 */ FN_RET(0x0063f040); r_esp += 8; return;
L_0063f056:; BB(0x0063f056);
    /* 0063f056: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f057: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f05cu); f_005c2f74();
    /* 0063f05c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f05d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f05e: ret 4 */ FN_RET(0x0063f040); r_esp += 8; return;
}

void f_0063f064(void) /* sub_63F064 */
{
    FN_ENTER(0x0063f064);
    /* 0063f064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f065: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f067: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f069: push 0x8e4f04 */ { u32 v = 0x8e4f04u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f06e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f075: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f07c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f07f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f082: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f085: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f088: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f08b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f08e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f091: mov dword ptr [ecx], 0xb2e690 */ W32((u32)(r_ecx), 0xb2e690u);
    /* 0063f097: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f09e: call 0x63f0b4 */ r_esp -= 4; W32(r_esp, 0x63f0a3u); f_0063f0b4();
    /* 0063f0a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f0a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f0ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f0af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f0b0: ret  */ FN_RET(0x0063f064); r_esp += 4; return;
}

void f_0063f0b4(void) /* sub_63F0B4 */
{
    FN_ENTER(0x0063f0b4);
    /* 0063f0b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f0b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0b9: push 0x8e4f20 */ { u32 v = 0x8e4f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f0cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f0cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f0d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f0d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f0d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f0db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f0de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f0e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f0e8: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0063f0ee: mov dword ptr [eax], 0xb2e660 */ W32((u32)(r_eax), 0xb2e660u);
    /* 0063f0f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f0f6: je 0x63f112 */ if (fZ) goto L_0063f112;
L_0063f0f8:; BB(0x0063f0f8);
    /* 0063f0f8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0063f0fc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063f101: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0063f105: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f108: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
L_0063f112:; BB(0x0063f112);
    /* 0063f112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f113: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63f118u); f_007b4e84();
    /* 0063f118: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f119: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f11c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63f121u); f_007b9c8c();
    /* 0063f121: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f128: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f12b: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x63f130u); f_006131f4();
    /* 0063f130: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f133: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f13a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f13c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f13d: ret  */ FN_RET(0x0063f0b4); r_esp += 4; return;
}

void f_0063f140(void) /* sub_63F140 */
{
    FN_ENTER(0x0063f140);
    /* 0063f140: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f141: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f143: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f145: call 0x63f164 */ r_esp -= 4; W32(r_esp, 0x63f14au); f_0063f164();
    /* 0063f14a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f14e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f150: jne 0x63f156 */ if (!fZ) goto L_0063f156;
L_0063f152:; BB(0x0063f152);
    /* 0063f152: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f153: ret 4 */ FN_RET(0x0063f140); r_esp += 8; return;
L_0063f156:; BB(0x0063f156);
    /* 0063f156: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f157: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f15cu); f_005c2f74();
    /* 0063f15c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f15d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f15e: ret 4 */ FN_RET(0x0063f140); r_esp += 8; return;
}

void f_0063f164(void) /* sub_63F164 */
{
    FN_ENTER(0x0063f164);
    /* 0063f164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f165: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f167: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f169: push 0x8e4f3c */ { u32 v = 0x8e4f3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f16e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f175: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f17c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f17f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f182: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f185: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f188: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f18b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f18e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f191: mov dword ptr [ecx], 0xb2e6c0 */ W32((u32)(r_ecx), 0xb2e6c0u);
    /* 0063f197: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f19e: call 0x63f0b4 */ r_esp -= 4; W32(r_esp, 0x63f1a3u); f_0063f0b4();
    /* 0063f1a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f1a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f1ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f1af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f1b0: ret  */ FN_RET(0x0063f164); r_esp += 4; return;
}

void f_0063f1b4(void) /* sub_63F1B4 */
{
    FN_ENTER(0x0063f1b4);
    /* 0063f1b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f1b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f1b9: call 0x63f1d8 */ r_esp -= 4; W32(r_esp, 0x63f1beu); f_0063f1d8();
    /* 0063f1be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f1c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f1c4: jne 0x63f1ca */ if (!fZ) goto L_0063f1ca;
L_0063f1c6:; BB(0x0063f1c6);
    /* 0063f1c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f1c7: ret 4 */ FN_RET(0x0063f1b4); r_esp += 8; return;
L_0063f1ca:; BB(0x0063f1ca);
    /* 0063f1ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f1d0u); f_005c2f74();
    /* 0063f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f1d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f1d2: ret 4 */ FN_RET(0x0063f1b4); r_esp += 8; return;
}

void f_0063f1d8(void) /* sub_63F1D8 */
{
    FN_ENTER(0x0063f1d8);
    /* 0063f1d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f1db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1dd: push 0x8e4f58 */ { u32 v = 0x8e4f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f1e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f1f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f1f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f1f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f1f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f1fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f1ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f202: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f205: mov dword ptr [ecx], 0xb2e6f0 */ W32((u32)(r_ecx), 0xb2e6f0u);
    /* 0063f20b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f212: call 0x63f0b4 */ r_esp -= 4; W32(r_esp, 0x63f217u); f_0063f0b4();
    /* 0063f217: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f21a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f221: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f223: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f224: ret  */ FN_RET(0x0063f1d8); r_esp += 4; return;
}

void f_0063f228(void) /* sub_63F228 */
{
    FN_ENTER(0x0063f228);
    /* 0063f228: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f229: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f22b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f22d: call 0x63f24c */ r_esp -= 4; W32(r_esp, 0x63f232u); f_0063f24c();
    /* 0063f232: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f236: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f238: jne 0x63f23e */ if (!fZ) goto L_0063f23e;
L_0063f23a:; BB(0x0063f23a);
    /* 0063f23a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f23b: ret 4 */ FN_RET(0x0063f228); r_esp += 8; return;
L_0063f23e:; BB(0x0063f23e);
    /* 0063f23e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f23f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f244u); f_005c2f74();
    /* 0063f244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f246: ret 4 */ FN_RET(0x0063f228); r_esp += 8; return;
}

void f_0063f24c(void) /* sub_63F24C */
{
    FN_ENTER(0x0063f24c);
    /* 0063f24c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f24d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f24f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f251: push 0x8e4f74 */ { u32 v = 0x8e4f74u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f256: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f25c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f25d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f264: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f267: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f26a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f26d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f270: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f273: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f276: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f279: mov dword ptr [ecx], 0xb2e720 */ W32((u32)(r_ecx), 0xb2e720u);
    /* 0063f27f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f286: call 0x63f0b4 */ r_esp -= 4; W32(r_esp, 0x63f28bu); f_0063f0b4();
    /* 0063f28b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f28e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f295: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f298: ret  */ FN_RET(0x0063f24c); r_esp += 4; return;
}

void f_0063f29c(void) /* sub_63F29C */
{
    FN_ENTER(0x0063f29c);
    /* 0063f29c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f29d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f29f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f2a1: call 0x63f2c0 */ r_esp -= 4; W32(r_esp, 0x63f2a6u); f_0063f2c0();
    /* 0063f2a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f2aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f2ac: jne 0x63f2b2 */ if (!fZ) goto L_0063f2b2;
L_0063f2ae:; BB(0x0063f2ae);
    /* 0063f2ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f2af: ret 4 */ FN_RET(0x0063f29c); r_esp += 8; return;
L_0063f2b2:; BB(0x0063f2b2);
    /* 0063f2b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f2b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f2b8u); f_005c2f74();
    /* 0063f2b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f2b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f2ba: ret 4 */ FN_RET(0x0063f29c); r_esp += 8; return;
}

void f_0063f2c0(void) /* sub_63F2C0 */
{
    FN_ENTER(0x0063f2c0);
    /* 0063f2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f2c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f2c5: push 0x8e4f90 */ { u32 v = 0x8e4f90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f2ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f2d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f2d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f2db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f2de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f2e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f2e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f2e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f2ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f2ed: mov dword ptr [ecx], 0xb2e750 */ W32((u32)(r_ecx), 0xb2e750u);
    /* 0063f2f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f2fa: call 0x63f0b4 */ r_esp -= 4; W32(r_esp, 0x63f2ffu); f_0063f0b4();
    /* 0063f2ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f302: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f309: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f30b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f30c: ret  */ FN_RET(0x0063f2c0); r_esp += 4; return;
}

void f_0063f310(void) /* sub_63F310 */
{
    FN_ENTER(0x0063f310);
    /* 0063f310: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f311: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f313: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f315: call 0x63f334 */ r_esp -= 4; W32(r_esp, 0x63f31au); f_0063f334();
    /* 0063f31a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f31e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f320: jne 0x63f326 */ if (!fZ) goto L_0063f326;
L_0063f322:; BB(0x0063f322);
    /* 0063f322: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f323: ret 4 */ FN_RET(0x0063f310); r_esp += 8; return;
L_0063f326:; BB(0x0063f326);
    /* 0063f326: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f327: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f32cu); f_005c2f74();
    /* 0063f32c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f32d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f32e: ret 4 */ FN_RET(0x0063f310); r_esp += 8; return;
}

void f_0063f334(void) /* sub_63F334 */
{
    FN_ENTER(0x0063f334);
    /* 0063f334: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f335: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f337: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f339: push 0x8e4fac */ { u32 v = 0x8e4facu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f33e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f345: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f34c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f34f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f352: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f355: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f358: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f35b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f35e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f361: mov dword ptr [ecx], 0xb2e780 */ W32((u32)(r_ecx), 0xb2e780u);
    /* 0063f367: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f36e: call 0x63f0b4 */ r_esp -= 4; W32(r_esp, 0x63f373u); f_0063f0b4();
    /* 0063f373: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f376: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f37d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f37f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f380: ret  */ FN_RET(0x0063f334); r_esp += 4; return;
}

void f_0063f384(void) /* sub_63F384 */
{
    FN_ENTER(0x0063f384);
    /* 0063f384: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f385: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063f387: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063f389: call 0x63f3a8 */ r_esp -= 4; W32(r_esp, 0x63f38eu); f_0063f3a8();
    /* 0063f38e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f392: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f394: jne 0x63f39a */ if (!fZ) goto L_0063f39a;
L_0063f396:; BB(0x0063f396);
    /* 0063f396: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f397: ret 4 */ FN_RET(0x0063f384); r_esp += 8; return;
L_0063f39a:; BB(0x0063f39a);
    /* 0063f39a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f39b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f3a0u); f_005c2f74();
    /* 0063f3a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f3a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f3a2: ret 4 */ FN_RET(0x0063f384); r_esp += 8; return;
}

void f_0063f3a8(void) /* sub_63F3A8 */
{
    FN_ENTER(0x0063f3a8);
    /* 0063f3a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f3a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f3ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f3ad: push 0x8e4fec */ { u32 v = 0x8e4fecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f3b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f3b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f3b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f3c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f3c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f3c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f3c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f3cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f3cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063f3d2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063f3d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f3dc: mov dword ptr [eax], 0xb2e500 */ W32((u32)(r_eax), 0xb2e500u);
    /* 0063f3e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f3e3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63f3e8u); f_007b4e84();
    /* 0063f3e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f3e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f3ec: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63f3f1u); f_007b9c8c();
    /* 0063f3f1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0063f3f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f3fb: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f401: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x63f406u); f_005770ec();
    /* 0063f406: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f40d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f410: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x63f415u); f_00770660();
    /* 0063f415: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f418: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f41f: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f422: ret  */ FN_RET(0x0063f3a8); r_esp += 4; return;
}

void f_0063f424(void) /* sub_63F424 */
{
    FN_ENTER(0x0063f424);
    /* 0063f424: mov eax, 1 */ r_eax = 0x1u;
    /* 0063f429: ret 8 */ FN_RET(0x0063f424); r_esp += 12; return;
}

void f_0063f42c(void) /* sub_63F42C */
{
    FN_ENTER(0x0063f42c);
    /* 0063f42c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f430: call 0x63f440 */ r_esp -= 4; W32(r_esp, 0x63f435u); f_0063f440();
    /* 0063f435: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063f437: fld dword ptr [0x9347b0] */ FPUSH(R_F32((u32)(0x9347b0u)));
    /* 0063f43d: ret 8 */ FN_RET(0x0063f42c); r_esp += 12; return;
}

void f_0063f440(void) /* sub_63F440 */
{
    FN_ENTER(0x0063f440);
    /* 0063f440: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063f441: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063f442: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f443: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f446: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063f448: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0063f44c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0063f450: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f452: jl 0x63f469 */ if ((fS!=fO)) goto L_0063f469;
L_0063f454:; BB(0x0063f454);
    /* 0063f454: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f457: jge 0x63f469 */ if ((fS==fO)) goto L_0063f469;
L_0063f459:; BB(0x0063f459);
    /* 0063f459: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f45b: je 0x63f469 */ if (fZ) goto L_0063f469;
L_0063f45d:; BB(0x0063f45d);
    /* 0063f45d: movsx eax, word ptr [edx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 0063f464: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f467: je 0x63f478 */ if (fZ) goto L_0063f478;
L_0063f469:; BB(0x0063f469);
    /* 0063f469: fld dword ptr [0x9347ac] */ FPUSH(R_F32((u32)(0x9347acu)));
    /* 0063f46f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063f472: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f473: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063f474: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063f475: ret 4 */ FN_RET(0x0063f440); r_esp += 8; return;
L_0063f478:; BB(0x0063f478);
    /* 0063f478: mov edx, dword ptr [ebp + 0x344] */ r_edx = R32((u32)(r_ebp+0x344u));
    /* 0063f47e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f481: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f483: jle 0x63f56f */ if ((fZ||fS!=fO)) goto L_0063f56f;
L_0063f489:; BB(0x0063f489);
    /* 0063f489: movsx ecx, word ptr [ebp + 0x32e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0063f490: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 0063f496: mov dword ptr [ebp + 0x344], edx */ W32((u32)(r_ebp+0x344u), r_edx);
    /* 0063f49c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f49e: je 0x63f547 */ if (fZ) goto L_0063f547;
L_0063f4a4:; BB(0x0063f4a4);
    /* 0063f4a4: je 0x63f565 */ if (fZ) goto L_0063f565;
L_0063f4aa:; BB(0x0063f4aa);
    /* 0063f4aa: movsx edi, word ptr [eax + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0063f4ae: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f4b0: jl 0x63f4cf */ if ((fS!=fO)) goto L_0063f4cf;
L_0063f4b2:; BB(0x0063f4b2);
    /* 0063f4b2: cmp edi, 0xb9f */ {  u32 a = r_edi; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f4b8: jg 0x63f4cf */ if ((!fZ&&fS==fO)) goto L_0063f4cf;
L_0063f4ba:; BB(0x0063f4ba);
    /* 0063f4ba: mov esi, dword ptr [0xab02bc] */ r_esi = R32((u32)(0xab02bcu));
    /* 0063f4c0: movzx edi, word ptr [esi + edi*4 + 2] */ r_edi = (u32)R16((u32)(r_esi+r_edi*4+0x2u));
    /* 0063f4c5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0063f4c8: mov esi, 1 */ r_esi = 0x1u;
    /* 0063f4cd: jmp 0x63f4d4 */ goto L_0063f4d4;
L_0063f4cf:; BB(0x0063f4cf);
    /* 0063f4cf: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0063f4d1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0063f4d4:; BB(0x0063f4d4);
    /* 0063f4d4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f4d6: je 0x63f547 */ if (fZ) goto L_0063f547;
L_0063f4d8:; BB(0x0063f4d8);
    /* 0063f4d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f4da: je 0x63f509 */ if (fZ) goto L_0063f509;
L_0063f4dc:; BB(0x0063f4dc);
    /* 0063f4dc: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0063f4e0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f4e2: jl 0x63f509 */ if ((fS!=fO)) goto L_0063f509;
L_0063f4e4:; BB(0x0063f4e4);
    /* 0063f4e4: cmp esi, 0xb9f */ {  u32 a = r_esi; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f4ea: jg 0x63f509 */ if ((!fZ&&fS==fO)) goto L_0063f509;
L_0063f4ec:; BB(0x0063f4ec);
    /* 0063f4ec: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0063f4f2: mov eax, edi */ r_eax = r_edi;
    /* 0063f4f4: mov word ptr [edx + esi*4], cx */ W16((u32)(r_edx+r_esi*4), (u16)r_ecx);
    /* 0063f4f8: mov word ptr [edx + esi*4 + 2], ax */ W16((u32)(r_edx+r_esi*4+0x2u), (u16)r_eax);
    /* 0063f4fd: mov edx, dword ptr [ebp + 0x344] */ r_edx = R32((u32)(r_ebp+0x344u));
    /* 0063f503: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
L_0063f509:; BB(0x0063f509);
    /* 0063f509: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0063f50d: mov byte ptr [esp + 4], 0x86 */ W8((u32)(r_esp+0x4u), 0x86u);
    /* 0063f512: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0063f514: mov word ptr [esp + 0x10], si */ W16((u32)(r_esp+0x10u), (u16)r_esi);
    /* 0063f519: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 0063f51e: mov word ptr [esp + 0x12], si */ W16((u32)(r_esp+0x12u), (u16)r_esi);
    /* 0063f523: mov word ptr [esp + 6], di */ W16((u32)(r_esp+0x6u), (u16)r_edi);
    /* 0063f528: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0063f52c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0063f530: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0063f534: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0063f538: mov word ptr [esp + 0x10], si */ W16((u32)(r_esp+0x10u), (u16)r_esi);
    /* 0063f53d: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 0063f542: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x63f547u); f_008003e0();
L_0063f547:; BB(0x0063f547);
    /* 0063f547: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f54c: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0063f54f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f550: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63f555u); f_0050b510();
    /* 0063f555: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f557: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f558: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63f55du); f_0050b510();
    /* 0063f55d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063f560: jmp 0x63f469 */ goto L_0063f469;
L_0063f565:; BB(0x0063f565);
    /* 0063f565: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0063f567: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0063f56a: jmp 0x63f4d4 */ goto L_0063f4d4;
L_0063f56f:; BB(0x0063f56f);
    /* 0063f56f: mov ecx, dword ptr [ebp + 0x80] */ r_ecx = R32((u32)(r_ebp+0x80u));
    /* 0063f575: mov dword ptr [ebp + 0x344], 0 */ W32((u32)(r_ebp+0x344u), 0x0u);
    /* 0063f57f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0063f581: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f583: je 0x63f547 */ if (fZ) goto L_0063f547;
L_0063f585:; BB(0x0063f585);
    /* 0063f585: je 0x63f62e */ if (fZ) goto L_0063f62e;
L_0063f58b:; BB(0x0063f58b);
    /* 0063f58b: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 0063f58f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f591: jl 0x63f5ac */ if ((fS!=fO)) goto L_0063f5ac;
L_0063f593:; BB(0x0063f593);
    /* 0063f593: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f599: jg 0x63f5ac */ if ((!fZ&&fS==fO)) goto L_0063f5ac;
L_0063f59b:; BB(0x0063f59b);
    /* 0063f59b: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0063f5a0: movzx eax, word ptr [eax + edx*4 + 2] */ r_eax = (u32)R16((u32)(r_eax+r_edx*4+0x2u));
    /* 0063f5a5: mov edx, 1 */ r_edx = 0x1u;
    /* 0063f5aa: jmp 0x63f5ae */ goto L_0063f5ae;
L_0063f5ac:; BB(0x0063f5ac);
    /* 0063f5ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063f5ae:; BB(0x0063f5ae);
    /* 0063f5ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f5b0: je 0x63f547 */ if (fZ) goto L_0063f547;
L_0063f5b2:; BB(0x0063f5b2);
    /* 0063f5b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f5b4: je 0x63f5e6 */ if (fZ) goto L_0063f5e6;
L_0063f5b6:; BB(0x0063f5b6);
    /* 0063f5b6: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 0063f5ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f5bc: jl 0x63f5e6 */ if ((fS!=fO)) goto L_0063f5e6;
L_0063f5be:; BB(0x0063f5be);
    /* 0063f5be: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f5c4: jg 0x63f5e6 */ if ((!fZ&&fS==fO)) goto L_0063f5e6;
L_0063f5c6:; BB(0x0063f5c6);
    /* 0063f5c6: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 0063f5cc: mov word ptr [edi + edx*4 + 2], ax */ W16((u32)(r_edi+r_edx*4+0x2u), (u16)r_eax);
    /* 0063f5d1: mov esi, 1 */ r_esi = 0x1u;
    /* 0063f5d6: mov word ptr [edi + edx*4], si */ W16((u32)(r_edi+r_edx*4), (u16)r_esi);
    /* 0063f5da: mov esi, dword ptr [ebp + 0x344] */ r_esi = R32((u32)(r_ebp+0x344u));
    /* 0063f5e0: mov ecx, dword ptr [ebp + 0x80] */ r_ecx = R32((u32)(r_ebp+0x80u));
L_0063f5e6:; BB(0x0063f5e6);
    /* 0063f5e6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0063f5ea: mov byte ptr [esp + 0x14], 0x86 */ W8((u32)(r_esp+0x14u), 0x86u);
    /* 0063f5ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063f5f1: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 0063f5f6: mov byte ptr [esp + 0x15], 4 */ W8((u32)(r_esp+0x15u), 0x4u);
    /* 0063f5fb: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 0063f600: mov word ptr [esp + 0x16], dx */ W16((u32)(r_esp+0x16u), (u16)r_edx);
    /* 0063f605: mov eax, 1 */ r_eax = 0x1u;
    /* 0063f60a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0063f60e: movsx edi, word ptr [ecx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 0063f612: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0063f616: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 0063f61b: mov word ptr [esp + 0x22], si */ W16((u32)(r_esp+0x22u), (u16)r_esi);
    /* 0063f620: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0063f624: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x63f629u); f_008003e0();
    /* 0063f629: jmp 0x63f547 */ goto L_0063f547;
L_0063f62e:; BB(0x0063f62e);
    /* 0063f62e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063f630: jmp 0x63f5ae */ goto L_0063f5ae;
}

void f_0063f638(void) /* sub_63F638 */
{
    FN_ENTER(0x0063f638);
    /* 0063f638: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f63c: call 0x63f440 */ r_esp -= 4; W32(r_esp, 0x63f641u); f_0063f440();
    /* 0063f641: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063f643: fld dword ptr [0x9347a8] */ FPUSH(R_F32((u32)(0x9347a8u)));
    /* 0063f649: ret 0x18 */ FN_RET(0x0063f638); r_esp += 28; return;
}

void f_0063f64c(void) /* sub_63F64C */
{
    FN_ENTER(0x0063f64c);
    /* 0063f64c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f650: call 0x63f440 */ r_esp -= 4; W32(r_esp, 0x63f655u); f_0063f440();
    /* 0063f655: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063f657: fld dword ptr [0x9347a4] */ FPUSH(R_F32((u32)(0x9347a4u)));
    /* 0063f65d: ret 8 */ FN_RET(0x0063f64c); r_esp += 12; return;
}

void f_0063f660(void) /* sub_63F660 */
{
    FN_ENTER(0x0063f660);
    /* 0063f660: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063f661: mov edi, ecx */ r_edi = r_ecx;
    /* 0063f663: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063f665: mov ecx, edi */ r_ecx = r_edi;
    /* 0063f667: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f66d: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f673: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63f676u); call_ind(t); }
    /* 0063f676: mov dword ptr [edi + 0xcc], eax */ W32((u32)(r_edi+0xccu), r_eax);
    /* 0063f67c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063f67f: je 0x63f683 */ if (fZ) goto L_0063f683;
L_0063f681:; BB(0x0063f681);
    /* 0063f681: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063f682: ret  */ FN_RET(0x0063f660); r_esp += 4; return;
L_0063f683:; BB(0x0063f683);
    /* 0063f683: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63f688u); f_0082d7b0();
    /* 0063f688: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0063f68b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63f690u); f_0082d838();
    /* 0063f690: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0063f693: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f695: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63f69au); f_0082d8bc();
    /* 0063f69a: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0063f69d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63f6a2u); f_00829cc8();
    /* 0063f6a2: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0063f6a5: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x63f6aau); f_00831758();
    /* 0063f6aa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63f6afu); f_0082da80();
    /* 0063f6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063f6b0: ret  */ FN_RET(0x0063f660); r_esp += 4; return;
}

void f_0063f6b4(void) /* sub_63F6B4 */
{
    FN_ENTER(0x0063f6b4);
    /* 0063f6b4: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063f6ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f6bc: je 0x63f6d1 */ if (fZ) goto L_0063f6d1;
L_0063f6be:; BB(0x0063f6be);
    /* 0063f6be: je 0x63f6c7 */ if (fZ) goto L_0063f6c7;
L_0063f6c0:; BB(0x0063f6c0);
    /* 0063f6c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6c2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63f6c7u); f_004066a8();
L_0063f6c7:; BB(0x0063f6c7);
    /* 0063f6c7: mov dword ptr [0xa8f268], 0 */ W32((u32)(0xa8f268u), 0x0u);
L_0063f6d1:; BB(0x0063f6d1);
    /* 0063f6d1: ret  */ FN_RET(0x0063f6b4); r_esp += 4; return;
}

void f_0063f6d4(void)
{
    FN_ENTER(0x0063f6d4);
    /* 0063f6d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f6d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6d9: push 0x8e5014 */ { u32 v = 0x8e5014u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f6e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f6ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f6ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f6f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f6f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f6f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f6fb: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f700: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063f707: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63f70cu); f_005caba4();
    /* 0063f70c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f70d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063f710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f712: je 0x63f745 */ if (fZ) goto L_0063f745;
L_0063f714:; BB(0x0063f714);
    /* 0063f714: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063f71b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f722: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f725: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f728: call 0x63f74c */ r_esp -= 4; W32(r_esp, 0x63f72du); f_0063f74c();
    /* 0063f72d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f730: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063f737:; BB(0x0063f737);
    /* 0063f737: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f73a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f741: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f744: ret  */ FN_RET(0x0063f6d4); r_esp += 4; return;
L_0063f745:; BB(0x0063f745);
    /* 0063f745: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f747: jmp 0x63f737 */ goto L_0063f737;
}

void f_0063f700(void)
{
    FN_ENTER(0x0063f700);
    /* 0063f700: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063f707: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63f70cu); f_005caba4();
    /* 0063f70c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f70d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063f710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f712: je 0x63f745 */ if (fZ) goto L_0063f745;
L_0063f714:; BB(0x0063f714);
    /* 0063f714: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063f71b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f722: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f725: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f728: call 0x63f74c */ r_esp -= 4; W32(r_esp, 0x63f72du); f_0063f74c();
    /* 0063f72d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f730: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063f737:; BB(0x0063f737);
    /* 0063f737: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f73a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f741: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f744: ret  */ FN_RET(0x0063f700); r_esp += 4; return;
L_0063f745:; BB(0x0063f745);
    /* 0063f745: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f747: jmp 0x63f737 */ goto L_0063f737;
}

void f_0063f74c(void) /* sub_63F74C */
{
    FN_ENTER(0x0063f74c);
    /* 0063f74c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f74d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f74f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f751: push 0x8e5030 */ { u32 v = 0x8e5030u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f756: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f75c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f75d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f764: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f767: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f76a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063f76d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063f770: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063f773: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f779: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063f77c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063f77f: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63f784u); f_006132e4();
    /* 0063f784: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f78b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f78e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063f791: mov dword ptr [ecx], 0xb2e660 */ W32((u32)(r_ecx), 0xb2e660u);
    /* 0063f797: mov eax, dword ptr [0x9c6ce4] */ r_eax = R32((u32)(0x9c6ce4u));
    /* 0063f79c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f79d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063f7a0: call dword ptr [0xb2e674] */ { u32 t = R32((u32)(0xb2e674u)); r_esp -= 4; W32(r_esp, 0x63f7a6u); call_ind(t); }
    /* 0063f7a6: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063f7ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f7ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63f7b3u); f_005b8610();
    /* 0063f7b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f7b6: fld dword ptr [0x93479c] */ FPUSH(R_F32((u32)(0x93479cu)));
    /* 0063f7bc: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063f7c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f7c4: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063f7c7: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0063f7ca: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0063f7cd: fstp dword ptr [edx + 0xc4] */ W_F32((u32)(r_edx+0xc4u), ST(0)); FPOP();
    /* 0063f7d3: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63f7d8u); f_005b8624();
    /* 0063f7d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f7db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f7dd: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063f7e0: push 0x9c6ba0 */ { u32 v = 0x9c6ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f7e5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63f7eau); f_007b9a88();
    /* 0063f7ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f7ed: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63f7f2u); f_007b4f54();
    /* 0063f7f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063f7f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f7f6: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63f7fbu); f_0065f960();
    /* 0063f7fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f7fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f7ff: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0063f805: mov eax, ecx */ r_eax = r_ecx;
    /* 0063f807: mov dword ptr [ecx + 0xcc], 1 */ W32((u32)(r_ecx+0xccu), 0x1u);
    /* 0063f811: mov dword ptr [ecx], 0xb2e690 */ W32((u32)(r_ecx), 0xb2e690u);
    /* 0063f817: mov edx, dword ptr [0x9c6ce8] */ r_edx = R32((u32)(0x9c6ce8u));
    /* 0063f81d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0063f820: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f823: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f82a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f82c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f82d: ret 4 */ FN_RET(0x0063f74c); r_esp += 8; return;
}

void f_0063f830(void)
{
    FN_ENTER(0x0063f830);
    /* 0063f830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f831: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f835: push 0x8e5058 */ { u32 v = 0x8e5058u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f83a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f841: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f848: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f84b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f84e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f851: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f854: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f857: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f85c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063f863: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63f868u); f_005caba4();
    /* 0063f868: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f869: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063f86c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f86e: je 0x63f8a1 */ if (fZ) goto L_0063f8a1;
L_0063f870:; BB(0x0063f870);
    /* 0063f870: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063f877: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f87e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f881: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f884: call 0x63f8a8 */ r_esp -= 4; W32(r_esp, 0x63f889u); f_0063f8a8();
    /* 0063f889: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f88c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063f893:; BB(0x0063f893);
    /* 0063f893: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f896: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f89d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f89f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f8a0: ret  */ FN_RET(0x0063f830); r_esp += 4; return;
L_0063f8a1:; BB(0x0063f8a1);
    /* 0063f8a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f8a3: jmp 0x63f893 */ goto L_0063f893;
}

void f_0063f8a8(void) /* sub_63F8A8 */
{
    FN_ENTER(0x0063f8a8);
    /* 0063f8a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f8ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8ad: push 0x8e5074 */ { u32 v = 0x8e5074u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f8b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f8c0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f8c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f8c6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063f8c9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063f8cc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063f8cf: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f8d5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063f8d8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063f8db: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63f8e0u); f_006132e4();
    /* 0063f8e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f8e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f8ea: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063f8ed: mov dword ptr [ecx], 0xb2e660 */ W32((u32)(r_ecx), 0xb2e660u);
    /* 0063f8f3: mov eax, dword ptr [0x9c6ce4] */ r_eax = R32((u32)(0x9c6ce4u));
    /* 0063f8f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8f9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063f8fc: call dword ptr [0xb2e674] */ { u32 t = R32((u32)(0xb2e674u)); r_esp -= 4; W32(r_esp, 0x63f902u); call_ind(t); }
    /* 0063f902: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063f908: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f90a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63f90fu); f_005b8610();
    /* 0063f90f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f912: fld dword ptr [0x934798] */ FPUSH(R_F32((u32)(0x934798u)));
    /* 0063f918: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063f91e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f920: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063f923: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0063f926: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0063f929: fstp dword ptr [edx + 0xc4] */ W_F32((u32)(r_edx+0xc4u), ST(0)); FPOP();
    /* 0063f92f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63f934u); f_005b8624();
    /* 0063f934: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f937: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f939: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063f93c: push 0x9c6bcc */ { u32 v = 0x9c6bccu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f941: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63f946u); f_007b9a88();
    /* 0063f946: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f949: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63f94eu); f_007b4f54();
    /* 0063f94e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063f951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f952: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63f957u); f_0065f960();
    /* 0063f957: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f958: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f95b: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0063f961: mov eax, ecx */ r_eax = r_ecx;
    /* 0063f963: mov dword ptr [ecx + 0xcc], 1 */ W32((u32)(r_ecx+0xccu), 0x1u);
    /* 0063f96d: mov dword ptr [ecx], 0xb2e6c0 */ W32((u32)(r_ecx), 0xb2e6c0u);
    /* 0063f973: mov edx, dword ptr [0x9c6cec] */ r_edx = R32((u32)(0x9c6cecu));
    /* 0063f979: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0063f97c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f97f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f986: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f989: ret 4 */ FN_RET(0x0063f8a8); r_esp += 8; return;
}

void f_0063f98c(void)
{
    FN_ENTER(0x0063f98c);
    /* 0063f98c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f98d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f98f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f991: push 0x8e509c */ { u32 v = 0x8e509cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063f99c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f99d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063f9a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f9a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063f9aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063f9ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063f9b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063f9b3: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f9b8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063f9bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63f9c4u); f_005caba4();
    /* 0063f9c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f9c5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063f9c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f9ca: je 0x63f9fd */ if (fZ) goto L_0063f9fd;
L_0063f9cc:; BB(0x0063f9cc);
    /* 0063f9cc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063f9d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f9da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063f9dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f9e0: call 0x63fa04 */ r_esp -= 4; W32(r_esp, 0x63f9e5u); f_0063fa04();
    /* 0063f9e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063f9e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063f9ef:; BB(0x0063f9ef);
    /* 0063f9ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f9f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063f9f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f9fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f9fc: ret  */ FN_RET(0x0063f98c); r_esp += 4; return;
L_0063f9fd:; BB(0x0063f9fd);
    /* 0063f9fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f9ff: jmp 0x63f9ef */ goto L_0063f9ef;
}

void f_0063fa04(void) /* sub_63FA04 */
{
    FN_ENTER(0x0063fa04);
    /* 0063fa04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa05: mov ebp, esp */ r_ebp = r_esp;
    /* 0063fa07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa09: push 0x8e50b8 */ { u32 v = 0x8e50b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063fa14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063fa1c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063fa1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063fa22: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063fa25: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063fa28: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063fa2b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063fa31: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063fa34: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063fa37: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63fa3cu); f_006132e4();
    /* 0063fa3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fa43: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fa46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063fa49: mov dword ptr [ecx], 0xb2e660 */ W32((u32)(r_ecx), 0xb2e660u);
    /* 0063fa4f: mov eax, dword ptr [0x9c6ce4] */ r_eax = R32((u32)(0x9c6ce4u));
    /* 0063fa54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa55: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063fa58: call dword ptr [0xb2e674] */ { u32 t = R32((u32)(0xb2e674u)); r_esp -= 4; W32(r_esp, 0x63fa5eu); call_ind(t); }
    /* 0063fa5e: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fa64: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa66: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63fa6bu); f_005b8610();
    /* 0063fa6b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fa6e: fld dword ptr [0x934794] */ FPUSH(R_F32((u32)(0x934794u)));
    /* 0063fa74: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fa7a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa7c: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063fa7f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0063fa82: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0063fa85: fstp dword ptr [edx + 0xc4] */ W_F32((u32)(r_edx+0xc4u), ST(0)); FPOP();
    /* 0063fa8b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63fa90u); f_005b8624();
    /* 0063fa90: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fa93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa95: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063fa98: push 0x9c6bf8 */ { u32 v = 0x9c6bf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa9d: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63faa2u); f_007b9a88();
    /* 0063faa2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063faa5: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63faaau); f_007b4f54();
    /* 0063faaa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063faad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063faae: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63fab3u); f_0065f960();
    /* 0063fab3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fab4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fab7: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0063fabd: mov eax, ecx */ r_eax = r_ecx;
    /* 0063fabf: mov dword ptr [ecx + 0xcc], 1 */ W32((u32)(r_ecx+0xccu), 0x1u);
    /* 0063fac9: mov dword ptr [ecx], 0xb2e6f0 */ W32((u32)(r_ecx), 0xb2e6f0u);
    /* 0063facf: mov edx, dword ptr [0x9c6cf0] */ r_edx = R32((u32)(0x9c6cf0u));
    /* 0063fad5: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0063fad8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063fadb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fae2: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fae4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fae5: ret 4 */ FN_RET(0x0063fa04); r_esp += 8; return;
}

void f_0063fae8(void)
{
    FN_ENTER(0x0063fae8);
    /* 0063fae8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fae9: mov ebp, esp */ r_ebp = r_esp;
    /* 0063faeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063faed: push 0x8e50e0 */ { u32 v = 0x8e50e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063faf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063faf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063faf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063fb00: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063fb03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063fb06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063fb09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063fb0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063fb0f: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb14: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063fb1b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63fb20u); f_005caba4();
    /* 0063fb20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fb21: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063fb24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fb26: je 0x63fb59 */ if (fZ) goto L_0063fb59;
L_0063fb28:; BB(0x0063fb28);
    /* 0063fb28: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063fb2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fb36: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063fb39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063fb3c: call 0x63fb60 */ r_esp -= 4; W32(r_esp, 0x63fb41u); f_0063fb60();
    /* 0063fb41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063fb44: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063fb4b:; BB(0x0063fb4b);
    /* 0063fb4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063fb4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fb55: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fb57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fb58: ret  */ FN_RET(0x0063fae8); r_esp += 4; return;
L_0063fb59:; BB(0x0063fb59);
    /* 0063fb59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063fb5b: jmp 0x63fb4b */ goto L_0063fb4b;
}

void f_0063fb60(void) /* sub_63FB60 */
{
    FN_ENTER(0x0063fb60);
    /* 0063fb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0063fb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb65: push 0x8e50fc */ { u32 v = 0x8e50fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063fb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063fb78: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063fb7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063fb7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063fb81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063fb84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063fb87: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063fb8d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063fb90: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063fb93: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63fb98u); f_006132e4();
    /* 0063fb98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fb9f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fba2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063fba5: mov dword ptr [ecx], 0xb2e660 */ W32((u32)(r_ecx), 0xb2e660u);
    /* 0063fbab: mov eax, dword ptr [0x9c6ce4] */ r_eax = R32((u32)(0x9c6ce4u));
    /* 0063fbb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fbb1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063fbb4: call dword ptr [0xb2e674] */ { u32 t = R32((u32)(0xb2e674u)); r_esp -= 4; W32(r_esp, 0x63fbbau); call_ind(t); }
    /* 0063fbba: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fbc0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fbc2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63fbc7u); f_005b8610();
    /* 0063fbc7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fbca: fld dword ptr [0x934790] */ FPUSH(R_F32((u32)(0x934790u)));
    /* 0063fbd0: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fbd6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fbd8: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063fbdb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0063fbde: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0063fbe1: fstp dword ptr [edx + 0xc4] */ W_F32((u32)(r_edx+0xc4u), ST(0)); FPOP();
    /* 0063fbe7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63fbecu); f_005b8624();
    /* 0063fbec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fbef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fbf1: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063fbf4: push 0x9c6c24 */ { u32 v = 0x9c6c24u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fbf9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63fbfeu); f_007b9a88();
    /* 0063fbfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fc01: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63fc06u); f_007b4f54();
    /* 0063fc06: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063fc09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc0a: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63fc0fu); f_0065f960();
    /* 0063fc0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fc10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fc13: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0063fc19: mov eax, ecx */ r_eax = r_ecx;
    /* 0063fc1b: mov dword ptr [ecx + 0xcc], 1 */ W32((u32)(r_ecx+0xccu), 0x1u);
    /* 0063fc25: mov dword ptr [ecx], 0xb2e720 */ W32((u32)(r_ecx), 0xb2e720u);
    /* 0063fc2b: mov edx, dword ptr [0x9c6cf4] */ r_edx = R32((u32)(0x9c6cf4u));
    /* 0063fc31: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0063fc34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063fc37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fc3e: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fc40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fc41: ret 4 */ FN_RET(0x0063fb60); r_esp += 8; return;
}

void f_0063fc44(void)
{
    FN_ENTER(0x0063fc44);
    /* 0063fc44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc45: mov ebp, esp */ r_ebp = r_esp;
    /* 0063fc47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc49: push 0x8e5124 */ { u32 v = 0x8e5124u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063fc54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063fc5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063fc5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063fc62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063fc65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063fc68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063fc6b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc70: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063fc77: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63fc7cu); f_005caba4();
    /* 0063fc7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fc7d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063fc80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fc82: je 0x63fcb5 */ if (fZ) goto L_0063fcb5;
L_0063fc84:; BB(0x0063fc84);
    /* 0063fc84: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063fc8b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fc92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063fc95: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063fc98: call 0x63fcbc */ r_esp -= 4; W32(r_esp, 0x63fc9du); f_0063fcbc();
    /* 0063fc9d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063fca0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063fca7:; BB(0x0063fca7);
    /* 0063fca7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063fcaa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fcb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fcb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fcb4: ret  */ FN_RET(0x0063fc44); r_esp += 4; return;
L_0063fcb5:; BB(0x0063fcb5);
    /* 0063fcb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063fcb7: jmp 0x63fca7 */ goto L_0063fca7;
}

void f_0063fcbc(void) /* sub_63FCBC */
{
    FN_ENTER(0x0063fcbc);
    /* 0063fcbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fcbd: mov ebp, esp */ r_ebp = r_esp;
    /* 0063fcbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fcc1: push 0x8e5140 */ { u32 v = 0x8e5140u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fcc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063fccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fccd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063fcd4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063fcd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063fcda: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063fcdd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063fce0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063fce3: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063fce9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063fcec: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063fcef: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63fcf4u); f_006132e4();
    /* 0063fcf4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fcfb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fcfe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063fd01: mov dword ptr [ecx], 0xb2e660 */ W32((u32)(r_ecx), 0xb2e660u);
    /* 0063fd07: mov eax, dword ptr [0x9c6ce4] */ r_eax = R32((u32)(0x9c6ce4u));
    /* 0063fd0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd0d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063fd10: call dword ptr [0xb2e674] */ { u32 t = R32((u32)(0xb2e674u)); r_esp -= 4; W32(r_esp, 0x63fd16u); call_ind(t); }
    /* 0063fd16: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fd1c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd1e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63fd23u); f_005b8610();
    /* 0063fd23: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fd26: fld dword ptr [0x93478c] */ FPUSH(R_F32((u32)(0x93478cu)));
    /* 0063fd2c: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fd32: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd34: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063fd37: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0063fd3a: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0063fd3d: fstp dword ptr [edx + 0xc4] */ W_F32((u32)(r_edx+0xc4u), ST(0)); FPOP();
    /* 0063fd43: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63fd48u); f_005b8624();
    /* 0063fd48: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fd4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd4d: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063fd50: push 0x9c6c50 */ { u32 v = 0x9c6c50u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd55: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63fd5au); f_007b9a88();
    /* 0063fd5a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fd5d: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63fd62u); f_007b4f54();
    /* 0063fd62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063fd65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd66: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63fd6bu); f_0065f960();
    /* 0063fd6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fd6c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fd6f: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0063fd75: mov eax, ecx */ r_eax = r_ecx;
    /* 0063fd77: mov dword ptr [ecx + 0xcc], 1 */ W32((u32)(r_ecx+0xccu), 0x1u);
    /* 0063fd81: mov dword ptr [ecx], 0xb2e750 */ W32((u32)(r_ecx), 0xb2e750u);
    /* 0063fd87: mov edx, dword ptr [0x9c6cf8] */ r_edx = R32((u32)(0x9c6cf8u));
    /* 0063fd8d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0063fd90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063fd93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fd9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fd9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fd9d: ret 4 */ FN_RET(0x0063fcbc); r_esp += 8; return;
}

void f_0063fda0(void)
{
    FN_ENTER(0x0063fda0);
    /* 0063fda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063fda3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fda5: push 0x8e5168 */ { u32 v = 0x8e5168u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fdaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063fdb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fdb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063fdb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063fdbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063fdbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063fdc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063fdc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063fdc7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fdcc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063fdd3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63fdd8u); f_005caba4();
    /* 0063fdd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fdd9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063fddc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fdde: je 0x63fe11 */ if (fZ) goto L_0063fe11;
L_0063fde0:; BB(0x0063fde0);
    /* 0063fde0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063fde7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fdee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063fdf1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063fdf4: call 0x63fe18 */ r_esp -= 4; W32(r_esp, 0x63fdf9u); f_0063fe18();
    /* 0063fdf9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063fdfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063fe03:; BB(0x0063fe03);
    /* 0063fe03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063fe06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fe0d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fe0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fe10: ret  */ FN_RET(0x0063fda0); r_esp += 4; return;
L_0063fe11:; BB(0x0063fe11);
    /* 0063fe11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063fe13: jmp 0x63fe03 */ goto L_0063fe03;
}

void f_0063fe18(void) /* sub_63FE18 */
{
    FN_ENTER(0x0063fe18);
    /* 0063fe18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe19: mov ebp, esp */ r_ebp = r_esp;
    /* 0063fe1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe1d: push 0x8e5184 */ { u32 v = 0x8e5184u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063fe28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063fe30: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063fe33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063fe36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063fe39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063fe3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063fe3f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063fe45: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063fe48: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063fe4b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63fe50u); f_006132e4();
    /* 0063fe50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fe57: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fe5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063fe5d: mov dword ptr [ecx], 0xb2e660 */ W32((u32)(r_ecx), 0xb2e660u);
    /* 0063fe63: mov eax, dword ptr [0x9c6ce4] */ r_eax = R32((u32)(0x9c6ce4u));
    /* 0063fe68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe69: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063fe6c: call dword ptr [0xb2e674] */ { u32 t = R32((u32)(0xb2e674u)); r_esp -= 4; W32(r_esp, 0x63fe72u); call_ind(t); }
    /* 0063fe72: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fe78: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe7a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63fe7fu); f_005b8610();
    /* 0063fe7f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fe82: fld dword ptr [0x934788] */ FPUSH(R_F32((u32)(0x934788u)));
    /* 0063fe88: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fe8e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe90: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063fe93: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0063fe96: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0063fe99: fstp dword ptr [edx + 0xc4] */ W_F32((u32)(r_edx+0xc4u), ST(0)); FPOP();
    /* 0063fe9f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63fea4u); f_005b8624();
    /* 0063fea4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fea7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fea9: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063feac: push 0x9c6c7c */ { u32 v = 0x9c6c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063feb1: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63feb6u); f_007b9a88();
    /* 0063feb6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063feb9: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63febeu); f_007b4f54();
    /* 0063febe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063fec1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fec2: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x63fec7u); f_0065f960();
    /* 0063fec7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fec8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063fecb: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0063fed1: mov eax, ecx */ r_eax = r_ecx;
    /* 0063fed3: mov dword ptr [ecx + 0xcc], 1 */ W32((u32)(r_ecx+0xccu), 0x1u);
    /* 0063fedd: mov dword ptr [ecx], 0xb2e780 */ W32((u32)(r_ecx), 0xb2e780u);
    /* 0063fee3: mov edx, dword ptr [0x9c6cfc] */ r_edx = R32((u32)(0x9c6cfcu));
    /* 0063fee9: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0063feec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063feef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fef6: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fef9: ret 4 */ FN_RET(0x0063fe18); r_esp += 8; return;
}

void f_0063fefc(void)
{
    FN_ENTER(0x0063fefc);
    /* 0063fefc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fefd: mov ebp, esp */ r_ebp = r_esp;
    /* 0063feff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff01: push 0x8e51ac */ { u32 v = 0x8e51acu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ff0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063ff14: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ff17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063ff1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063ff1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063ff20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063ff23: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff28: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063ff2f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63ff34u); f_005caba4();
    /* 0063ff34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ff35: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063ff38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ff3a: je 0x63ff6d */ if (fZ) goto L_0063ff6d;
L_0063ff3c:; BB(0x0063ff3c);
    /* 0063ff3c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063ff43: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ff4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ff4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ff50: call 0x63ff74 */ r_esp -= 4; W32(r_esp, 0x63ff55u); f_0063ff74();
    /* 0063ff55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ff58: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063ff5f:; BB(0x0063ff5f);
    /* 0063ff5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063ff62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063ff69: mov esp, ebp */ r_esp = r_ebp;
    /* 0063ff6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ff6c: ret  */ FN_RET(0x0063fefc); r_esp += 4; return;
L_0063ff6d:; BB(0x0063ff6d);
    /* 0063ff6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063ff6f: jmp 0x63ff5f */ goto L_0063ff5f;
}

void f_0063ff74(void) /* sub_63FF74 */
{
    FN_ENTER(0x0063ff74);
    /* 0063ff74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff75: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ff77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff79: push 0x8e51dc */ { u32 v = 0x8e51dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ff84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063ff8c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ff8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063ff92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063ff95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063ff98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063ff9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063ff9e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ffa4: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063ffa7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063ffaa: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x63ffafu); f_00770748();
    /* 0063ffaf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ffb6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ffb9: mov dword ptr [ecx], 0xb2e500 */ W32((u32)(r_ecx), 0xb2e500u);
    /* 0063ffbf: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ffc5: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x63ffcau); f_0057713c();
    /* 0063ffca: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063ffd1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ffd4: mov eax, dword ptr [0x9c6d00] */ r_eax = R32((u32)(0x9c6d00u));
    /* 0063ffd9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ffdc: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0063ffde: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063ffe1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffe2: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x63ffe5u); call_ind(t); }
    /* 0063ffe5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ffe8: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63ffedu); f_0077a1f4();
    /* 0063ffed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063fff0: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0063fff6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fff8: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0063fffb: or eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00640000: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00640003: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640008u); f_005b8610();
    /* 00640008: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064000b: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 00640011: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00640013: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00640016: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64001bu); f_005b8624();
    /* 0064001b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064001e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640020: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00640023: push 0x9c6ca8 */ { u32 v = 0x9c6ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00640028: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64002du); f_007b9a88();
    /* 0064002d: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00640032: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640037: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x64003cu); f_007b52c4();
    /* 0064003c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064003f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x640044u); f_007b4f54();
    /* 00640044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640047: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0064004a: mov esi, dword ptr [ecx + 0x84] */ r_esi = R32((u32)(r_ecx+0x84u));
    /* 00640050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640052: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00640059: add esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064005f: mov dword ptr [ecx + 0x33c], 0x44480000 */ W32((u32)(r_ecx+0x33cu), 0x44480000u);
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x0063ff74); r_esp += 8; return;
}

