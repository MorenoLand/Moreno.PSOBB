#include "protos.h"

void f_006ac1a4(void) /* sub_6AC1A4 */
{
    FN_ENTER(0x006ac1a4);
    /* 006ac1a4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ac1a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006ac1aa: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 006ac1ad: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006ac1b0: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006ac1b3: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006ac1b6: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 006ac1b9: ret 4 */ FN_RET(0x006ac1a4); r_esp += 8; return;
}

void f_006ac1bc(void) /* sub_6AC1BC */
{
    FN_ENTER(0x006ac1bc);
    /* 006ac1bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1be: mov esi, ecx */ r_esi = r_ecx;
    /* 006ac1c0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006ac1c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1c6: call 0x6ac75c */ r_esp -= 4; W32(r_esp, 0x6ac1cbu); f_006ac75c();
    /* 006ac1cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ac1ce: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 006ac1d1: movsx eax, word ptr [eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 006ac1d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1d6: mov ecx, esi */ r_ecx = r_esi;
    /* 006ac1d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1d9: call 0x6ac1f0 */ r_esp -= 4; W32(r_esp, 0x6ac1deu); f_006ac1f0();
    /* 006ac1de: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 006ac1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1e2: mov ecx, esi */ r_ecx = r_esi;
    /* 006ac1e4: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x6ac1e9u); f_007aa4c8();
    /* 006ac1e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac1ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac1eb: ret 4 */ FN_RET(0x006ac1bc); r_esp += 8; return;
}

void f_006ac1f0(void) /* sub_6AC1F0 */
{
    FN_ENTER(0x006ac1f0);
    /* 006ac1f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac1f1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac1f4: mov esi, ecx */ r_esi = r_ecx;
    /* 006ac1f6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ac1f9: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6ac1feu); f_005d6a3c();
    /* 006ac1fe: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 006ac203: movzx edx, word ptr [esp + 0x20] */ r_edx = (u32)R16((u32)(r_esp+0x20u));
    /* 006ac208: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 006ac20c: mov ecx, esi */ r_ecx = r_esi;
    /* 006ac20e: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006ac212: mov byte ptr [esp], 0 */ W8((u32)(r_esp), 0x0u);
    /* 006ac216: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006ac219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac21a: call 0x6ac228 */ r_esp -= 4; W32(r_esp, 0x6ac21fu); f_006ac228();
    /* 006ac21f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac222: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac223: ret 8 */ FN_RET(0x006ac1f0); r_esp += 12; return;
}

void f_006ac228(void) /* sub_6AC228 */
{
    FN_ENTER(0x006ac228);
    /* 006ac228: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac229: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac22a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac22b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ac22d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006ac231: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ac235: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac236: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6ac23bu); f_005e3aac();
    /* 006ac23b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac23c: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006ac23f: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x6ac244u); f_005c3a80();
    /* 006ac244: mov esi, eax */ r_esi = r_eax;
    /* 006ac246: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ac249: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac24b: je 0x6ac2bc */ if (fZ) goto L_006ac2bc;
L_006ac24d:; BB(0x006ac24d);
    /* 006ac24d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006ac24f: mov ecx, esi */ r_ecx = r_esi;
    /* 006ac251: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x6ac254u); call_ind(t); }
    /* 006ac254: movsx ebp, al */ r_ebp = (u32)(i32)(i8)(u8)r_eax;
    /* 006ac257: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac258: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 006ac25e: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6ac263u); f_0069792c();
    /* 006ac263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac265: je 0x6ac281 */ if (fZ) goto L_006ac281;
L_006ac267:; BB(0x006ac267);
    /* 006ac267: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac269: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ac26f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ac271: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6ac276u); f_0068ee54();
    /* 006ac276: mov dword ptr [ebx + ebp*4 + 0xdf8], 0 */ W32((u32)(r_ebx+r_ebp*4+0xdf8u), 0x0u);
L_006ac281:; BB(0x006ac281);
    /* 006ac281: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac282: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ac284: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x6ac289u); f_00687904();
    /* 006ac289: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac28b: je 0x6ac2bc */ if (fZ) goto L_006ac2bc;
L_006ac28d:; BB(0x006ac28d);
    /* 006ac28d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac28f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac290: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006ac296: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ac29c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac29d: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 006ac2a3: call 0x691204 */ r_esp -= 4; W32(r_esp, 0x6ac2a8u); f_00691204();
    /* 006ac2a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ac2ab: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 006ac2b1: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac2b6: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
L_006ac2bc:; BB(0x006ac2bc);
    /* 006ac2bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac2bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac2be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac2bf: ret 4 */ FN_RET(0x006ac228); r_esp += 8; return;
}

void f_006ac2c4(void) /* sub_6AC2C4 */
{
    FN_ENTER(0x006ac2c4);
    /* 006ac2c4: mov dword ptr [0xa94858], 0x3f800000 */ W32((u32)(0xa94858u), 0x3f800000u);
    /* 006ac2ce: mov dword ptr [0xa9485c], 0x41000000 */ W32((u32)(0xa9485cu), 0x41000000u);
    /* 006ac2d8: mov dword ptr [0xa94860], 0x3fc00000 */ W32((u32)(0xa94860u), 0x3fc00000u);
    /* 006ac2e2: ret  */ FN_RET(0x006ac2c4); r_esp += 4; return;
}

void f_006ac2e4(void) /* sub_6AC2E4 */
{
    FN_ENTER(0x006ac2e4);
    /* 006ac2e4: call 0x6950b8 */ r_esp -= 4; W32(r_esp, 0x6ac2e9u); f_006950b8();
    /* 006ac2e9: push 0x966a40 */ { u32 v = 0x966a40u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac2ee: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x6ac2f3u); f_005b938c();
    /* 006ac2f3: mov dword ptr [0xa94864], eax */ W32((u32)(0xa94864u), r_eax);
    /* 006ac2f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac2f9: ret  */ FN_RET(0x006ac2e4); r_esp += 4; return;
}

void f_006ac2fc(void)
{
    FN_ENTER(0x006ac2fc);
    /* 006ac2fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ac300: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac302: mov dword ptr [ecx], 0xb3a5c0 */ W32((u32)(r_ecx), 0xb3a5c0u);
    /* 006ac308: jne 0x6ac30d */ if (!fZ) goto L_006ac30d;
L_006ac30a:; BB(0x006ac30a);
    /* 006ac30a: ret 4 */ FN_RET(0x006ac2fc); r_esp += 8; return;
L_006ac30d:; BB(0x006ac30d);
    /* 006ac30d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac30e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ac313u); f_00857e98();
    /* 006ac313: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac314: ret 4 */ FN_RET(0x006ac2fc); r_esp += 8; return;
}

void f_006ac318(void) /* sub_6AC318 */
{
    FN_ENTER(0x006ac318);
    /* 006ac318: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac319: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ac31b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ac31d: call 0x6ac33c */ r_esp -= 4; W32(r_esp, 0x6ac322u); f_006ac33c();
    /* 006ac322: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ac326: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac328: jne 0x6ac32e */ if (!fZ) goto L_006ac32e;
L_006ac32a:; BB(0x006ac32a);
    /* 006ac32a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac32b: ret 4 */ FN_RET(0x006ac318); r_esp += 8; return;
L_006ac32e:; BB(0x006ac32e);
    /* 006ac32e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac32f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ac334u); f_00857e98();
    /* 006ac334: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac335: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac336: ret 4 */ FN_RET(0x006ac318); r_esp += 8; return;
}

void f_006ac33c(void) /* sub_6AC33C */
{
    FN_ENTER(0x006ac33c);
    /* 006ac33c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac33d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ac33f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ac341: push 0x8ebb04 */ { u32 v = 0x8ebb04u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac346: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ac34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac34d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ac354: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac357: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ac35a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ac35d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ac360: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ac363: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ac366: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ac36d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ac370: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006ac373: mov dword ptr [edx], 0xb3a5c8 */ W32((u32)(r_edx), 0xb3a5c8u);
    /* 006ac379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac37b: je 0x6ac387 */ if (fZ) goto L_006ac387;
L_006ac37d:; BB(0x006ac37d);
    /* 006ac37d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac37e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ac383u); f_00857e98();
    /* 006ac383: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac384: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_006ac387:; BB(0x006ac387);
    /* 006ac387: mov dword ptr [edx], 0xb3a5c0 */ W32((u32)(r_edx), 0xb3a5c0u);
    /* 006ac38d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ac390: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ac397: mov esp, ebp */ r_esp = r_ebp;
    /* 006ac399: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac39a: ret  */ FN_RET(0x006ac33c); r_esp += 4; return;
}

void f_006ac39c(void) /* sub_6AC39C */
{
    FN_ENTER(0x006ac39c);
    /* 006ac39c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac39d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ac39f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ac3a1: call 0x6ac3c0 */ r_esp -= 4; W32(r_esp, 0x6ac3a6u); f_006ac3c0();
    /* 006ac3a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ac3aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac3ac: jne 0x6ac3b2 */ if (!fZ) goto L_006ac3b2;
L_006ac3ae:; BB(0x006ac3ae);
    /* 006ac3ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac3af: ret 4 */ FN_RET(0x006ac39c); r_esp += 8; return;
L_006ac3b2:; BB(0x006ac3b2);
    /* 006ac3b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac3b3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ac3b8u); f_00857e98();
    /* 006ac3b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac3b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac3ba: ret 4 */ FN_RET(0x006ac39c); r_esp += 8; return;
}

void f_006ac3c0(void) /* sub_6AC3C0 */
{
    FN_ENTER(0x006ac3c0);
    /* 006ac3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ac3c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ac3c5: push 0x8ebb20 */ { u32 v = 0x8ebb20u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac3ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ac3d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac3d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ac3d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac3db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ac3de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ac3e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ac3e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ac3e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ac3ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ac3f1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ac3f4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006ac3f7: mov dword ptr [edx], 0xb3a5d0 */ W32((u32)(r_edx), 0xb3a5d0u);
    /* 006ac3fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac3ff: je 0x6ac40b */ if (fZ) goto L_006ac40b;
L_006ac401:; BB(0x006ac401);
    /* 006ac401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac402: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ac407u); f_00857e98();
    /* 006ac407: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac408: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_006ac40b:; BB(0x006ac40b);
    /* 006ac40b: mov dword ptr [edx], 0xb3a5c0 */ W32((u32)(r_edx), 0xb3a5c0u);
    /* 006ac411: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ac414: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ac41b: mov esp, ebp */ r_esp = r_ebp;
    /* 006ac41d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac41e: ret  */ FN_RET(0x006ac3c0); r_esp += 4; return;
}

void f_006ac420(void) /* sub_6AC420 */
{
    FN_ENTER(0x006ac420);
    /* 006ac420: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ac424: call 0x694788 */ r_esp -= 4; W32(r_esp, 0x6ac429u); f_00694788();
    /* 006ac429: fld dword ptr [eax*8 + 0x968fc4] */ FPUSH(R_F32((u32)(r_eax*8+0x968fc4u)));
    /* 006ac430: ret  */ FN_RET(0x006ac420); r_esp += 4; return;
}

void f_006ac434(void) /* sub_6AC434 */
{
    FN_ENTER(0x006ac434);
    /* 006ac434: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ac438: mov eax, dword ptr [ecx + 0x964] */ r_eax = R32((u32)(r_ecx+0x964u));
    /* 006ac43e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac440: je 0x6ac449 */ if (fZ) goto L_006ac449;
L_006ac442:; BB(0x006ac442);
    /* 006ac442: fld dword ptr [0x9691b0] */ FPUSH(R_F32((u32)(0x9691b0u)));
    /* 006ac448: ret  */ FN_RET(0x006ac434); r_esp += 4; return;
L_006ac449:; BB(0x006ac449);
    /* 006ac449: call 0x694788 */ r_esp -= 4; W32(r_esp, 0x6ac44eu); f_00694788();
    /* 006ac44e: fld dword ptr [eax*8 + 0x968fc8] */ FPUSH(R_F32((u32)(r_eax*8+0x968fc8u)));
    /* 006ac455: ret  */ FN_RET(0x006ac434); r_esp += 4; return;
}

void f_006ac458(void) /* sub_6AC458 */
{
    FN_ENTER(0x006ac458);
    /* 006ac458: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ac45c: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x6ac461u); f_0068c454();
    /* 006ac461: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006ac464: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac466: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac468: lea eax, [edx + edx*8 + 0x968560] */ r_eax = (u32)(r_edx+r_edx*8+0x968560u);
    /* 006ac46f: ret  */ FN_RET(0x006ac458); r_esp += 4; return;
}

void f_006ac470(void) /* sub_6AC470 */
{
    FN_ENTER(0x006ac470);
    /* 006ac470: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 006ac475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac476: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ac47bu); f_0068c45c();
    /* 006ac47b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac47c: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006ac47f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac481: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac483: lea eax, [edx + edx*8 + 0x968560] */ r_eax = (u32)(r_edx+r_edx*8+0x968560u);
    /* 006ac48a: ret  */ FN_RET(0x006ac470); r_esp += 4; return;
}

void f_006ac48c(void) /* sub_6AC48C */
{
    FN_ENTER(0x006ac48c);
    /* 006ac48c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac48d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac48e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac48f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac490: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac493: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 006ac497: mov ecx, edi */ r_ecx = r_edi;
    /* 006ac499: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x6ac49eu); f_00687670();
    /* 006ac49e: mov esi, eax */ r_esi = r_eax;
    /* 006ac4a0: mov ebp, dword ptr [edi + 0x8b4] */ r_ebp = R32((u32)(r_edi+0x8b4u));
    /* 006ac4a6: movsx ebx, word ptr [edi + 0x8b2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x8b2u));
    /* 006ac4ad: mov ecx, edi */ r_ecx = r_edi;
    /* 006ac4af: call 0x68c470 */ r_esp -= 4; W32(r_esp, 0x6ac4b4u); f_0068c470();
    /* 006ac4b4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006ac4b8: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 006ac4bb: movsx ecx, bp */ r_ecx = (u32)(i32)(i16)(u16)r_ebp;
    /* 006ac4be: mov eax, edx */ r_eax = r_edx;
    /* 006ac4c0: mov edx, ecx */ r_edx = r_ecx;
    /* 006ac4c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ac4c4: call 0x6ac4e2 */ r_esp -= 4; W32(r_esp, 0x6ac4c9u); f_006ac4e2();
    /* 006ac4c9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac4cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac4cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac4ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac4cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ac4d0: ret  */ FN_RET(0x006ac48c); r_esp += 4; return;
}

void f_006ac4e2(void) /* sub_6AC4E2 */
{
    FN_ENTER(0x006ac4e2);
    /* 006ac4e2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac4e5: je 0x6ac558 */ if (fZ) goto L_006ac558;
L_006ac4e7:; BB(0x006ac4e7);
    /* 006ac4e7: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac4ea: jne 0x6ac503 */ if (!fZ) goto L_006ac503;
L_006ac4ec:; BB(0x006ac4ec);
    /* 006ac4ec: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006ac4ef: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 006ac4f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac4f4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac4f6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006ac4f9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac4fb: fld dword ptr [eax + edx*4 + 0x969000] */ FPUSH(R_F32((u32)(r_eax+r_edx*4+0x969000u)));
    /* 006ac502: ret  */ FN_RET(0x006ac4e2); r_esp += 4; return;
L_006ac503:; BB(0x006ac503);
    /* 006ac503: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac506: jne 0x6ac544 */ if (!fZ) goto L_006ac544;
L_006ac508:; BB(0x006ac508);
    /* 006ac508: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006ac50c: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006ac50f: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006ac512: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ac514: je 0x6ac52d */ if (fZ) goto L_006ac52d;
L_006ac516:; BB(0x006ac516);
    /* 006ac516: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006ac519: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006ac51c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac51e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac520: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006ac523: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac525: fld dword ptr [eax + edx*4 + 0x969030] */ FPUSH(R_F32((u32)(r_eax+r_edx*4+0x969030u)));
    /* 006ac52c: ret  */ FN_RET(0x006ac4e2); r_esp += 4; return;
L_006ac52d:; BB(0x006ac52d);
    /* 006ac52d: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006ac530: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006ac533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac537: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006ac53a: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac53c: fld dword ptr [eax + edx*4 + 0x969054] */ FPUSH(R_F32((u32)(r_eax+r_edx*4+0x969054u)));
    /* 006ac543: ret  */ FN_RET(0x006ac4e2); r_esp += 4; return;
L_006ac544:; BB(0x006ac544);
    /* 006ac544: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ac546: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ac548: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006ac54b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac54d: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006ac550: fld dword ptr [ecx + edx*4 + 0x968ca0] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x968ca0u)));
    /* 006ac557: ret  */ FN_RET(0x006ac4e2); r_esp += 4; return;
L_006ac558:; BB(0x006ac558);
    /* 006ac558: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006ac55b: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 006ac55e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac560: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac562: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006ac565: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac567: fld dword ptr [eax + edx*4 + 0x968fdc] */ FPUSH(R_F32((u32)(r_eax+r_edx*4+0x968fdcu)));
    /* 006ac56e: ret  */ FN_RET(0x006ac4e2); r_esp += 4; return;
}

void f_006ac570(void) /* sub_6AC570 */
{
    FN_ENTER(0x006ac570);
    /* 006ac570: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 006ac575: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006ac579: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac57a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac57b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac57c: mov ebp, edx */ r_ebp = r_edx;
    /* 006ac57e: mov esi, eax */ r_esi = r_eax;
    /* 006ac580: mov ecx, dword ptr [0xa94878] */ r_ecx = R32((u32)(0xa94878u));
    /* 006ac586: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac588: je 0x6ac5c1 */ if (fZ) goto L_006ac5c1;
L_006ac58a:; BB(0x006ac58a);
    /* 006ac58a: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 006ac58c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ac58e: jge 0x6ac594 */ if ((fS==fO)) goto L_006ac594;
L_006ac590:; BB(0x006ac590);
    /* 006ac590: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006ac592: jmp 0x6ac5a4 */ goto L_006ac5a4;
L_006ac594:; BB(0x006ac594);
    /* 006ac594: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6ac599u); f_006931f8();
    /* 006ac599: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ac59b: jle 0x6ac5a4 */ if ((fZ||fS!=fO)) goto L_006ac5a4;
L_006ac59d:; BB(0x006ac59d);
    /* 006ac59d: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6ac5a2u); f_006931f8();
    /* 006ac5a2: mov ebp, eax */ r_ebp = r_eax;
L_006ac5a4:; BB(0x006ac5a4);
    /* 006ac5a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac5a5: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ac5aau); f_0068c45c();
    /* 006ac5aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac5ab: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ac5ad: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ac5af: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006ac5b3: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac5b5: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006ac5b8: add ecx, dword ptr [ebx + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_edx*4)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac5bb: mov eax, ecx */ r_eax = r_ecx;
    /* 006ac5bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac5be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac5bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac5c0: ret  */ FN_RET(0x006ac570); r_esp += 4; return;
L_006ac5c1:; BB(0x006ac5c1);
    /* 006ac5c1: mov eax, 0x9691a4 */ r_eax = 0x9691a4u;
    /* 006ac5c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac5c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac5c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac5c9: ret  */ FN_RET(0x006ac570); r_esp += 4; return;
}

void f_006ac579(void) /* sub_6AC579 */
{
    FN_ENTER(0x006ac579);
    /* 006ac579: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac57a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac57b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac57c: mov ebp, edx */ r_ebp = r_edx;
    /* 006ac57e: mov esi, eax */ r_esi = r_eax;
    /* 006ac580: mov ecx, dword ptr [0xa94878] */ r_ecx = R32((u32)(0xa94878u));
    /* 006ac586: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac588: je 0x6ac5c1 */ if (fZ) goto L_006ac5c1;
L_006ac58a:; BB(0x006ac58a);
    /* 006ac58a: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 006ac58c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ac58e: jge 0x6ac594 */ if ((fS==fO)) goto L_006ac594;
L_006ac590:; BB(0x006ac590);
    /* 006ac590: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006ac592: jmp 0x6ac5a4 */ goto L_006ac5a4;
L_006ac594:; BB(0x006ac594);
    /* 006ac594: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6ac599u); f_006931f8();
    /* 006ac599: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ac59b: jle 0x6ac5a4 */ if ((fZ||fS!=fO)) goto L_006ac5a4;
L_006ac59d:; BB(0x006ac59d);
    /* 006ac59d: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6ac5a2u); f_006931f8();
    /* 006ac5a2: mov ebp, eax */ r_ebp = r_eax;
L_006ac5a4:; BB(0x006ac5a4);
    /* 006ac5a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac5a5: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ac5aau); f_0068c45c();
    /* 006ac5aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac5ab: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ac5ad: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ac5af: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006ac5b3: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac5b5: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006ac5b8: add ecx, dword ptr [ebx + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_edx*4)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac5bb: mov eax, ecx */ r_eax = r_ecx;
    /* 006ac5bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac5be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac5bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac5c0: ret  */ FN_RET(0x006ac579); r_esp += 4; return;
L_006ac5c1:; BB(0x006ac5c1);
    /* 006ac5c1: mov eax, 0x9691a4 */ r_eax = 0x9691a4u;
    /* 006ac5c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ac5c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac5c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac5c9: ret  */ FN_RET(0x006ac579); r_esp += 4; return;
}

void f_006ac5cc(void) /* sub_6AC5CC */
{
    FN_ENTER(0x006ac5cc);
    /* 006ac5cc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac5cf: movsx eax, byte ptr [esp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 006ac5d4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006ac5d8: call 0x6ac579 */ r_esp -= 4; W32(r_esp, 0x6ac5ddu); f_006ac579();
    /* 006ac5dd: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006ac5e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac5e3: ret  */ FN_RET(0x006ac5cc); r_esp += 4; return;
}

void f_006ac5e4(void) /* sub_6AC5E4 */
{
    FN_ENTER(0x006ac5e4);
    /* 006ac5e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac5e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac5e8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006ac5ec: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x6ac5f1u); f_0068c454();
    /* 006ac5f1: mov ebp, eax */ r_ebp = r_eax;
    /* 006ac5f3: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6ac5f8u); f_006931f8();
    /* 006ac5f8: mov edx, eax */ r_edx = r_eax;
    /* 006ac5fa: mov eax, ebp */ r_eax = r_ebp;
    /* 006ac5fc: call 0x6ac579 */ r_esp -= 4; W32(r_esp, 0x6ac601u); f_006ac579();
    /* 006ac601: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006ac604: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac608: ret  */ FN_RET(0x006ac5e4); r_esp += 4; return;
}

void f_006ac60c(void) /* sub_6AC60C */
{
    FN_ENTER(0x006ac60c);
    /* 006ac60c: mov ecx, dword ptr [0xa9487c] */ r_ecx = R32((u32)(0xa9487cu));
    /* 006ac612: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ac614: mov dword ptr [0xa94878], eax */ W32((u32)(0xa94878u), r_eax);
    /* 006ac619: mov dword ptr [0xa94874], eax */ W32((u32)(0xa94874u), r_eax);
    /* 006ac61e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac620: je 0x6ac62a */ if (fZ) goto L_006ac62a;
L_006ac622:; BB(0x006ac622);
    /* 006ac622: je 0x6ac62a */ if (fZ) goto L_006ac62a;
L_006ac624:; BB(0x006ac624);
    /* 006ac624: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac626: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ac628: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6ac62au); call_ind(t); }
L_006ac62a:; BB(0x006ac62a);
    /* 006ac62a: mov dword ptr [0xa9487c], 0 */ W32((u32)(0xa9487cu), 0x0u);
    /* 006ac634: ret  */ FN_RET(0x006ac60c); r_esp += 4; return;
}

void f_006ac638(void) /* sub_6AC638 */
{
    FN_ENTER(0x006ac638);
    /* 006ac638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac639: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac63c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006ac640: mov ebp, dword ptr [ecx + 0x8b4] */ r_ebp = R32((u32)(r_ecx+0x8b4u));
    /* 006ac646: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x6ac64bu); f_00687670();
    /* 006ac64b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006ac64e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006ac651: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac653: movsx eax, byte ptr [ebp + ecx + 0x969078] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0x969078u));
    /* 006ac65b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006ac65e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ac661: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac664: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac665: ret  */ FN_RET(0x006ac638); r_esp += 4; return;
}

void f_006ac668(void) /* sub_6AC668 */
{
    FN_ENTER(0x006ac668);
    /* 006ac668: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac669: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac66d: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x6ac672u); f_00687670();
    /* 006ac672: mov esi, eax */ r_esi = r_eax;
    /* 006ac674: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac678: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x6ac67du); f_00687660();
    /* 006ac67d: mov ecx, dword ptr [eax*4 + 0x9cc468] */ r_ecx = R32((u32)(r_eax*4+0x9cc468u));
    /* 006ac684: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 006ac687: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac689: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac68b: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006ac68e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac690: fld dword ptr [ecx + esi] */ FPUSH(R_F32((u32)(r_ecx+r_esi)));
    /* 006ac693: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac694: ret  */ FN_RET(0x006ac668); r_esp += 4; return;
}

void f_006ac698(void) /* sub_6AC698 */
{
    FN_ENTER(0x006ac698);
    /* 006ac698: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac699: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac69d: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x6ac6a2u); f_00687670();
    /* 006ac6a2: mov esi, eax */ r_esi = r_eax;
    /* 006ac6a4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac6a8: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x6ac6adu); f_00687660();
    /* 006ac6ad: mov ecx, dword ptr [eax*4 + 0x9cc468] */ r_ecx = R32((u32)(r_eax*4+0x9cc468u));
    /* 006ac6b4: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 006ac6b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac6b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac6bb: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006ac6be: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac6c0: fld dword ptr [ecx + esi + 4] */ FPUSH(R_F32((u32)(r_ecx+r_esi+0x4u)));
    /* 006ac6c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac6c5: ret  */ FN_RET(0x006ac698); r_esp += 4; return;
}

void f_006ac6c8(void) /* sub_6AC6C8 */
{
    FN_ENTER(0x006ac6c8);
    /* 006ac6c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac6c9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac6cd: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x6ac6d2u); f_00687670();
    /* 006ac6d2: mov esi, eax */ r_esi = r_eax;
    /* 006ac6d4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac6d8: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x6ac6ddu); f_00687660();
    /* 006ac6dd: mov ecx, dword ptr [eax*4 + 0x9cc468] */ r_ecx = R32((u32)(r_eax*4+0x9cc468u));
    /* 006ac6e4: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 006ac6e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac6e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac6eb: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006ac6ee: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac6f0: fld dword ptr [ecx + esi + 8] */ FPUSH(R_F32((u32)(r_ecx+r_esi+0x8u)));
    /* 006ac6f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac6f5: ret  */ FN_RET(0x006ac6c8); r_esp += 4; return;
}

void f_006ac6f8(void) /* sub_6AC6F8 */
{
    FN_ENTER(0x006ac6f8);
    /* 006ac6f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac6f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac6fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac6fb: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006ac6ff: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6ac704u); f_00807ac0();
    /* 006ac704: mov esi, eax */ r_esi = r_eax;
    /* 006ac706: mov ecx, edi */ r_ecx = r_edi;
    /* 006ac708: call 0x691e54 */ r_esp -= 4; W32(r_esp, 0x6ac70du); f_00691e54();
    /* 006ac70d: mov ebp, dword ptr [eax*4 + 0x9cc480] */ r_ebp = R32((u32)(r_eax*4+0x9cc480u));
    /* 006ac714: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac717: je 0x6ac735 */ if (fZ) goto L_006ac735;
L_006ac719:; BB(0x006ac719);
    /* 006ac719: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 006ac71c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ac71e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ac720: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ac722: lea ecx, [edi + 0x36c] */ r_ecx = (u32)(r_edi+0x36cu);
    /* 006ac728: call 0x697428 */ r_esp -= 4; W32(r_esp, 0x6ac72du); f_00697428();
    /* 006ac72d: mov eax, dword ptr [ebp + eax*4] */ r_eax = R32((u32)(r_ebp+r_eax*4));
    /* 006ac731: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac732: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac733: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ac734: ret  */ FN_RET(0x006ac6f8); r_esp += 4; return;
L_006ac735:; BB(0x006ac735);
    /* 006ac735: mov edx, dword ptr [0xa44d68] */ r_edx = R32((u32)(0xa44d68u));
    /* 006ac73b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac73d: jne 0x6ac719 */ if (!fZ) goto L_006ac719;
L_006ac73f:; BB(0x006ac73f);
    /* 006ac73f: mov esi, 1 */ r_esi = 0x1u;
    /* 006ac744: jmp 0x6ac719 */ goto L_006ac719;
}

void f_006ac748(void) /* sub_6AC748 */
{
    FN_ENTER(0x006ac748);
    /* 006ac748: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ac74c: call 0x694788 */ r_esp -= 4; W32(r_esp, 0x6ac751u); f_00694788();
    /* 006ac751: mov eax, dword ptr [eax*4 + 0x9cc48c] */ r_eax = R32((u32)(r_eax*4+0x9cc48cu));
    /* 006ac758: ret  */ FN_RET(0x006ac748); r_esp += 4; return;
}

void f_006ac75c(void) /* sub_6AC75C */
{
    FN_ENTER(0x006ac75c);
    /* 006ac75c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ac760: call 0x694788 */ r_esp -= 4; W32(r_esp, 0x6ac765u); f_00694788();
    /* 006ac765: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006ac769: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 006ac76c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac76e: add edx, dword ptr [eax*4 + 0x9cc498] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x9cc498u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac775: mov eax, edx */ r_eax = r_edx;
    /* 006ac777: ret  */ FN_RET(0x006ac75c); r_esp += 4; return;
}

void f_006ac778(void) /* sub_6AC778 */
{
    FN_ENTER(0x006ac778);
    /* 006ac778: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac779: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac77d: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x6ac782u); f_00687670();
    /* 006ac782: mov esi, eax */ r_esi = r_eax;
    /* 006ac784: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ac788: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x6ac78du); f_00687660();
    /* 006ac78d: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 006ac790: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 006ac793: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac795: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac797: add edx, dword ptr [eax*4 + 0x9cc4a4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x9cc4a4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac79e: mov eax, edx */ r_eax = r_edx;
    /* 006ac7a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ac7a1: ret  */ FN_RET(0x006ac778); r_esp += 4; return;
}

void f_006ac7a4(void) /* sub_6AC7A4 */
{
    FN_ENTER(0x006ac7a4);
    /* 006ac7a4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006ac7a8: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006ac7ad: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ac7b1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac7b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac7b5: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006ac7b8: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac7ba: add edx, dword ptr [eax*4 + 0x9cc4ec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x9cc4ecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac7c1: mov eax, edx */ r_eax = r_edx;
    /* 006ac7c3: ret  */ FN_RET(0x006ac7a4); r_esp += 4; return;
}

void f_006ac7c4(void) /* sub_6AC7C4 */
{
    FN_ENTER(0x006ac7c4);
    /* 006ac7c4: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 006ac7ca: mov eax, dword ptr [edx*4 + 0x9690b4] */ r_eax = R32((u32)(r_edx*4+0x9690b4u));
    /* 006ac7d1: ret  */ FN_RET(0x006ac7c4); r_esp += 4; return;
}

void f_006ac7d4(void) /* sub_6AC7D4 */
{
    FN_ENTER(0x006ac7d4);
    /* 006ac7d4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ac7d8: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006ac7dc: mov ecx, dword ptr [0xa95f28] */ r_ecx = R32((u32)(0xa95f28u));
    /* 006ac7e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac7e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac7e6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006ac7e9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ac7eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac7ed: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ac7ef: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006ac7f2: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac7f4: mov ecx, dword ptr [0xaafdb8] */ r_ecx = R32((u32)(0xaafdb8u));
    /* 006ac7fa: add eax, dword ptr [edx + ecx*4 + 0x9cc4f8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x9cc4f8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac801: ret  */ FN_RET(0x006ac7d4); r_esp += 4; return;
}

void f_006ac804(void) /* sub_6AC804 */
{
    FN_ENTER(0x006ac804);
    /* 006ac804: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006ac809: mov edx, dword ptr [0xa95f28] */ r_edx = R32((u32)(0xa95f28u));
    /* 006ac80f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac811: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac813: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006ac816: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac818: mov eax, dword ptr [ecx + eax*4 + 0x9690c0] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x9690c0u));
    /* 006ac81f: ret  */ FN_RET(0x006ac804); r_esp += 4; return;
}

void f_006ac820(void) /* sub_6AC820 */
{
    FN_ENTER(0x006ac820);
    /* 006ac820: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 006ac826: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ac828: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ac82a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006ac82d: lea eax, [edx + ecx + 0x9690d8] */ r_eax = (u32)(r_edx+r_ecx+0x9690d8u);
    /* 006ac834: ret  */ FN_RET(0x006ac820); r_esp += 4; return;
}

void f_006ac838(void) /* sub_6AC838 */
{
    FN_ENTER(0x006ac838);
    /* 006ac838: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 006ac83e: mov eax, dword ptr [edx*4 + 0x9690fc] */ r_eax = R32((u32)(r_edx*4+0x9690fcu));
    /* 006ac845: ret  */ FN_RET(0x006ac838); r_esp += 4; return;
}

void f_006ac848(void) /* sub_6AC848 */
{
    FN_ENTER(0x006ac848);
    /* 006ac848: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6ac84du); f_007a61a4();
    /* 006ac84d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac850: je 0x6ac87e */ if (fZ) goto L_006ac87e;
L_006ac852:; BB(0x006ac852);
    /* 006ac852: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ac856: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006ac85d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ac860: jne 0x6ac870 */ if (!fZ) goto L_006ac870;
L_006ac862:; BB(0x006ac862);
    /* 006ac862: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac868: mov eax, dword ptr [edx*4 + 0x969118] */ r_eax = R32((u32)(r_edx*4+0x969118u));
    /* 006ac86f: ret  */ FN_RET(0x006ac848); r_esp += 4; return;
L_006ac870:; BB(0x006ac870);
    /* 006ac870: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac876: mov eax, dword ptr [edx*4 + 0x969108] */ r_eax = R32((u32)(r_edx*4+0x969108u));
    /* 006ac87d: ret  */ FN_RET(0x006ac848); r_esp += 4; return;
L_006ac87e:; BB(0x006ac87e);
    /* 006ac87e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ac882: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006ac889: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ac88c: jne 0x6ac89c */ if (!fZ) goto L_006ac89c;
L_006ac88e:; BB(0x006ac88e);
    /* 006ac88e: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac894: mov eax, dword ptr [edx*4 + 0x969138] */ r_eax = R32((u32)(r_edx*4+0x969138u));
    /* 006ac89b: ret  */ FN_RET(0x006ac848); r_esp += 4; return;
L_006ac89c:; BB(0x006ac89c);
    /* 006ac89c: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac8a2: mov eax, dword ptr [edx*4 + 0x969128] */ r_eax = R32((u32)(r_edx*4+0x969128u));
    /* 006ac8a9: ret  */ FN_RET(0x006ac848); r_esp += 4; return;
}

void f_006ac8ac(void) /* sub_6AC8AC */
{
    FN_ENTER(0x006ac8ac);
    /* 006ac8ac: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6ac8b1u); f_007a61a4();
    /* 006ac8b1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac8b4: je 0x6ac8e2 */ if (fZ) goto L_006ac8e2;
L_006ac8b6:; BB(0x006ac8b6);
    /* 006ac8b6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ac8ba: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006ac8c1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ac8c4: jne 0x6ac8d4 */ if (!fZ) goto L_006ac8d4;
L_006ac8c6:; BB(0x006ac8c6);
    /* 006ac8c6: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac8cc: mov eax, dword ptr [edx*4 + 0x969158] */ r_eax = R32((u32)(r_edx*4+0x969158u));
    /* 006ac8d3: ret  */ FN_RET(0x006ac8ac); r_esp += 4; return;
L_006ac8d4:; BB(0x006ac8d4);
    /* 006ac8d4: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac8da: mov eax, dword ptr [edx*4 + 0x969148] */ r_eax = R32((u32)(r_edx*4+0x969148u));
    /* 006ac8e1: ret  */ FN_RET(0x006ac8ac); r_esp += 4; return;
L_006ac8e2:; BB(0x006ac8e2);
    /* 006ac8e2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ac8e6: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006ac8ed: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ac8f0: jne 0x6ac900 */ if (!fZ) goto L_006ac900;
L_006ac8f2:; BB(0x006ac8f2);
    /* 006ac8f2: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac8f8: mov eax, dword ptr [edx*4 + 0x969178] */ r_eax = R32((u32)(r_edx*4+0x969178u));
    /* 006ac8ff: ret  */ FN_RET(0x006ac8ac); r_esp += 4; return;
L_006ac900:; BB(0x006ac900);
    /* 006ac900: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006ac906: mov eax, dword ptr [edx*4 + 0x969168] */ r_eax = R32((u32)(r_edx*4+0x969168u));
    /* 006ac90d: ret  */ FN_RET(0x006ac8ac); r_esp += 4; return;
}

void f_006ac910(void) /* sub_6AC910 */
{
    FN_ENTER(0x006ac910);
    /* 006ac910: mov dword ptr [0xa94868], 0x3f800000 */ W32((u32)(0xa94868u), 0x3f800000u);
    /* 006ac91a: mov dword ptr [0xa9486c], 0x41000000 */ W32((u32)(0xa9486cu), 0x41000000u);
    /* 006ac924: mov dword ptr [0xa94870], 0x3fc00000 */ W32((u32)(0xa94870u), 0x3fc00000u);
    /* 006ac92e: ret  */ FN_RET(0x006ac910); r_esp += 4; return;
}

void f_006ac930(void) /* sub_6AC930 */
{
    FN_ENTER(0x006ac930);
    /* 006ac930: mov dword ptr [ecx], 0xb3a5c0 */ W32((u32)(r_ecx), 0xb3a5c0u);
    /* 006ac936: ret  */ FN_RET(0x006ac930); r_esp += 4; return;
}

void f_006ac938(void) /* sub_6AC938 */
{
    FN_ENTER(0x006ac938);
    /* 006ac938: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac939: movsx edi, byte ptr [esp + 8] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+0x8u));
    /* 006ac93e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac93f: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ac944u); f_0068c45c();
    /* 006ac944: mov eax, dword ptr [edi*4 + 0x9cc4bc] */ r_eax = R32((u32)(r_edi*4+0x9cc4bcu));
    /* 006ac94b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac94c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ac94d: ret  */ FN_RET(0x006ac938); r_esp += 4; return;
}

void f_006ac950(void) /* sub_6AC950 */
{
    FN_ENTER(0x006ac950);
    /* 006ac950: mov eax, dword ptr [0xa94874] */ r_eax = R32((u32)(0xa94874u));
    /* 006ac955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac957: je 0x6ac972 */ if (fZ) goto L_006ac972;
L_006ac959:; BB(0x006ac959);
    /* 006ac959: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 006ac95e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac95f: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ac964u); f_0068c45c();
    /* 006ac964: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ac965: mov edx, dword ptr [0xa94874] */ r_edx = R32((u32)(0xa94874u));
    /* 006ac96b: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 006ac96e: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006ac971: ret  */ FN_RET(0x006ac950); r_esp += 4; return;
L_006ac972:; BB(0x006ac972);
    /* 006ac972: mov eax, 0x969188 */ r_eax = 0x969188u;
    /* 006ac977: ret  */ FN_RET(0x006ac950); r_esp += 4; return;
}

void f_006ac978(void) /* sub_6AC978 */
{
    FN_ENTER(0x006ac978);
    /* 006ac978: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ac979: mov ebp, esp */ r_ebp = r_esp;
    /* 006ac97b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ac97d: push 0x8ebbe6 */ { u32 v = 0x8ebbe6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac982: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ac988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac989: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ac990: sub esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ac996: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ac999: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006ac99c: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006ac99f: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006ac9a2: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6ac9a7u); f_007a61a4();
    /* 006ac9a7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac9aa: je 0x6acb3a */ if (fZ) goto L_006acb3a;
L_006ac9b0:; BB(0x006ac9b0);
    /* 006ac9b0: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 006ac9ba: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006ac9bc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ac9c1u); f_008581c5();
    /* 006ac9c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ac9c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ac9c7: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 006ac9cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac9cf: je 0x6acb33 */ if (fZ) goto L_006acb33;
L_006ac9d5:; BB(0x006ac9d5);
    /* 006ac9d5: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 006ac9df: mov edx, dword ptr [0x9cc464] */ r_edx = R32((u32)(0x9cc464u));
    /* 006ac9e5: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 006ac9eb: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 006ac9f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ac9f8: mov edx, eax */ r_edx = r_eax;
    /* 006ac9fa: mov dword ptr [edx], 0xb3a5c8 */ W32((u32)(r_edx), 0xb3a5c8u);
    /* 006aca00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aca02: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006aca05: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006aca08: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 006aca0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aca10: je 0x6acadc */ if (fZ) goto L_006acadc;
L_006aca16:; BB(0x006aca16);
    /* 006aca16: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 006aca1b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6aca20u); f_008581c5();
    /* 006aca20: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 006aca25: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006aca28: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006aca2b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x6aca30u); f_00859c55();
    /* 006aca30: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006aca33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aca36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aca38: je 0x6acad2 */ if (fZ) goto L_006acad2;
L_006aca3e:; BB(0x006aca3e);
    /* 006aca3e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006aca41: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006aca44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aca46: je 0x6acad2 */ if (fZ) goto L_006acad2;
L_006aca4c:; BB(0x006aca4c);
    /* 006aca4c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aca4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aca50: push dword ptr [ebp - 0xd8] */ { u32 v = R32((u32)(r_ebp+0xffffff28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aca56: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6aca5bu); f_005b9910();
    /* 006aca5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aca5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006aca60: jle 0x6acad2 */ if ((fZ||fS!=fO)) goto L_006acad2;
L_006aca62:; BB(0x006aca62);
    /* 006aca62: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 006aca67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006aca6a: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aca6d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aca70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aca71: call 0x7882bc */ r_esp -= 4; W32(r_esp, 0x6aca76u); f_007882bc();
    /* 006aca76: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006aca79: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aca7c: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 006aca82: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x6aca87u); f_005b9d58();
    /* 006aca87: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006aca8e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006aca91: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006aca94: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 006aca9a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006aca9d: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 006acaa3: mov dword ptr [ebp - 0x88], ebx */ W32((u32)(r_ebp+0xffffff78u), r_ebx);
    /* 006acaa9: call 0x5ba264 */ r_esp -= 4; W32(r_esp, 0x6acaaeu); f_005ba264();
    /* 006acaae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006acab1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006acab4: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 006acaba: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 006acac0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006acac7: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 006acacd: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6acad2u); f_008171e8();
L_006acad2:; BB(0x006acad2);
    /* 006acad2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006acad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006acad6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x6acadbu); f_00858882();
    /* 006acadb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006acadc:; BB(0x006acadc);
    /* 006acadc: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_006acae6:; BB(0x006acae6);
    /* 006acae6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006acae9: mov dword ptr [0xa9487c], eax */ W32((u32)(0xa9487cu), r_eax);
    /* 006acaee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006acaf5:; BB(0x006acaf5);
    /* 006acaf5: mov ecx, dword ptr [0xa9487c] */ r_ecx = R32((u32)(0xa9487cu));
    /* 006acafb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006acafd: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x6acb00u); call_ind(t); }
    /* 006acb00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acb02: je 0x6acb25 */ if (fZ) goto L_006acb25;
L_006acb04:; BB(0x006acb04);
    /* 006acb04: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 006acb07: mov dword ptr [0xa94878], edx */ W32((u32)(0xa94878u), r_edx);
    /* 006acb0d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006acb0f: mov dword ptr [0xa94874], eax */ W32((u32)(0xa94874u), r_eax);
L_006acb14:; BB(0x006acb14);
    /* 006acb14: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006acb17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006acb1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006acb21: mov esp, ebp */ r_esp = r_ebp;
    /* 006acb23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006acb24: ret  */ FN_RET(0x006ac978); r_esp += 4; return;
L_006acb25:; BB(0x006acb25);
    /* 006acb25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acb27: mov dword ptr [0xa94878], eax */ W32((u32)(0xa94878u), r_eax);
    /* 006acb2c: mov dword ptr [0xa94874], eax */ W32((u32)(0xa94874u), r_eax);
    /* 006acb31: jmp 0x6acb14 */ goto L_006acb14;
L_006acb33:; BB(0x006acb33);
    /* 006acb33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006acb35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006acb38: jmp 0x6acae6 */ goto L_006acae6;
L_006acb3a:; BB(0x006acb3a);
    /* 006acb3a: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006acb41: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006acb43: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6acb48u); f_008581c5();
    /* 006acb48: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006acb4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006acb4e: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006acb51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006acb53: je 0x6acc52 */ if (fZ) goto L_006acc52;
L_006acb59:; BB(0x006acb59);
    /* 006acb59: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 006acb60: mov edx, dword ptr [0x9cc464] */ r_edx = R32((u32)(0x9cc464u));
    /* 006acb66: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 006acb6c: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 006acb72: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006acb79: mov edx, eax */ r_edx = r_eax;
    /* 006acb7b: mov dword ptr [edx], 0xb3a5d0 */ W32((u32)(r_edx), 0xb3a5d0u);
    /* 006acb81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006acb83: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006acb86: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006acb89: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 006acb8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006acb91: je 0x6acc37 */ if (fZ) goto L_006acc37;
L_006acb97:; BB(0x006acb97);
    /* 006acb97: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 006acb9c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6acba1u); f_008581c5();
    /* 006acba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006acba2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006acba5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006acba8: push dword ptr [ebp - 0xc0] */ { u32 v = R32((u32)(r_ebp+0xffffff40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006acbae: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 006acbb3: call 0x5bc0b0 */ r_esp -= 4; W32(r_esp, 0x6acbb8u); f_005bc0b0();
    /* 006acbb8: mov ebx, eax */ r_ebx = r_eax;
    /* 006acbba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006acbbc: je 0x6acc37 */ if (fZ) goto L_006acc37;
L_006acbbe:; BB(0x006acbbe);
    /* 006acbbe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006acbc1: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006acbc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006acbc6: je 0x6acc37 */ if (fZ) goto L_006acc37;
L_006acbc8:; BB(0x006acbc8);
    /* 006acbc8: push dword ptr [ebp - 0xc0] */ { u32 v = R32((u32)(r_ebp+0xffffff40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006acbce: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 006acbd3: call 0x5bc050 */ r_esp -= 4; W32(r_esp, 0x6acbd8u); f_005bc050();
    /* 006acbd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006acbda: jle 0x6acc37 */ if ((fZ||fS!=fO)) goto L_006acc37;
L_006acbdc:; BB(0x006acbdc);
    /* 006acbdc: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 006acbe1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006acbe4: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006acbe7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006acbe8: call 0x7882bc */ r_esp -= 4; W32(r_esp, 0x6acbedu); f_007882bc();
    /* 006acbed: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006acbf0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006acbf3: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 006acbf6: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x6acbfbu); f_005b9d58();
    /* 006acbfb: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006acc02: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006acc05: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006acc08: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 006acc0b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006acc0e: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006acc11: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 006acc14: call 0x5ba264 */ r_esp -= 4; W32(r_esp, 0x6acc19u); f_005ba264();
    /* 006acc19: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006acc1c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006acc1f: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 006acc22: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 006acc28: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006acc2f: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 006acc32: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6acc37u); f_008171e8();
L_006acc37:; BB(0x006acc37);
    /* 006acc37: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_006acc3e:; BB(0x006acc3e);
    /* 006acc3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006acc41: mov dword ptr [0xa9487c], eax */ W32((u32)(0xa9487cu), r_eax);
    /* 006acc46: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006acc4d: jmp 0x6acaf5 */ goto L_006acaf5;
L_006acc52:; BB(0x006acc52);
    /* 006acc52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006acc54: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006acc57: jmp 0x6acc3e */ goto L_006acc3e;
}

void f_006acc5c(void) /* sub_6ACC5C */
{
    FN_ENTER(0x006acc5c);
    /* 006acc5c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006acc60: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x6acc65u); f_0068c454();
    /* 006acc65: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006acc68: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006acc6b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006acc6d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006acc6f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006acc71: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006acc73: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006acc75: lea eax, [ecx + ecx + 0x968a60] */ r_eax = (u32)(r_ecx+r_ecx+0x968a60u);
    /* 006acc7c: ret  */ FN_RET(0x006acc5c); r_esp += 4; return;
}

void f_006acc80(void) /* sub_6ACC80 */
{
    FN_ENTER(0x006acc80);
    /* 006acc80: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006acc84: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x6acc89u); f_0068c454();
    /* 006acc89: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006acc8c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006acc8e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006acc90: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006acc92: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006acc94: lea eax, [edx + edx + 0x9688e0] */ r_eax = (u32)(r_edx+r_edx+0x9688e0u);
    /* 006acc9b: ret  */ FN_RET(0x006acc80); r_esp += 4; return;
}

void f_006acc9c(void) /* sub_6ACC9C */
{
    FN_ENTER(0x006acc9c);
    /* 006acc9c: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 006acca3: mov edx, 0xff */ r_edx = 0xffu;
    /* 006acca8: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 006accaf: mov byte ptr [ecx + 0x5c], dl */ W8((u32)(r_ecx+0x5cu), (u8)r_edx);
    /* 006accb2: mov byte ptr [ecx + 0x70], dl */ W8((u32)(r_ecx+0x70u), (u8)r_edx);
    /* 006accb5: mov byte ptr [ecx + 0x5d], dl */ W8((u32)(r_ecx+0x5du), (u8)r_edx);
    /* 006accb8: mov dword ptr [ecx + 0x1c], 0x3fc00000 */ W32((u32)(r_ecx+0x1cu), 0x3fc00000u);
    /* 006accbf: mov byte ptr [ecx + 0x71], dl */ W8((u32)(r_ecx+0x71u), (u8)r_edx);
    /* 006accc2: mov byte ptr [ecx + 0x5e], dl */ W8((u32)(r_ecx+0x5eu), (u8)r_edx);
    /* 006accc5: mov byte ptr [ecx + 0x72], dl */ W8((u32)(r_ecx+0x72u), (u8)r_edx);
    /* 006accc8: mov byte ptr [ecx + 0x5f], dl */ W8((u32)(r_ecx+0x5fu), (u8)r_edx);
    /* 006acccb: mov byte ptr [ecx + 0x73], dl */ W8((u32)(r_ecx+0x73u), (u8)r_edx);
    /* 006accce: mov byte ptr [ecx + 0x60], dl */ W8((u32)(r_ecx+0x60u), (u8)r_edx);
    /* 006accd1: mov byte ptr [ecx + 0x74], dl */ W8((u32)(r_ecx+0x74u), (u8)r_edx);
    /* 006accd4: mov byte ptr [ecx + 0x61], dl */ W8((u32)(r_ecx+0x61u), (u8)r_edx);
    /* 006accd7: mov byte ptr [ecx + 0x75], dl */ W8((u32)(r_ecx+0x75u), (u8)r_edx);
    /* 006accda: mov byte ptr [ecx + 0x62], dl */ W8((u32)(r_ecx+0x62u), (u8)r_edx);
    /* 006accdd: mov byte ptr [ecx + 0x76], dl */ W8((u32)(r_ecx+0x76u), (u8)r_edx);
    /* 006acce0: mov byte ptr [ecx + 0x63], dl */ W8((u32)(r_ecx+0x63u), (u8)r_edx);
    /* 006acce3: mov byte ptr [ecx + 0x77], dl */ W8((u32)(r_ecx+0x77u), (u8)r_edx);
    /* 006acce6: mov byte ptr [ecx + 0x64], dl */ W8((u32)(r_ecx+0x64u), (u8)r_edx);
    /* 006acce9: mov byte ptr [ecx + 0x78], dl */ W8((u32)(r_ecx+0x78u), (u8)r_edx);
    /* 006accec: mov byte ptr [ecx + 0x65], dl */ W8((u32)(r_ecx+0x65u), (u8)r_edx);
    /* 006accef: mov byte ptr [ecx + 0x79], dl */ W8((u32)(r_ecx+0x79u), (u8)r_edx);
    /* 006accf2: mov byte ptr [ecx + 0x66], dl */ W8((u32)(r_ecx+0x66u), (u8)r_edx);
    /* 006accf5: mov byte ptr [ecx + 0x7a], dl */ W8((u32)(r_ecx+0x7au), (u8)r_edx);
    /* 006accf8: mov byte ptr [ecx + 0x67], dl */ W8((u32)(r_ecx+0x67u), (u8)r_edx);
    /* 006accfb: mov byte ptr [ecx + 0x7b], dl */ W8((u32)(r_ecx+0x7bu), (u8)r_edx);
    /* 006accfe: mov byte ptr [ecx + 0x68], dl */ W8((u32)(r_ecx+0x68u), (u8)r_edx);
    /* 006acd01: mov byte ptr [ecx + 0x7c], dl */ W8((u32)(r_ecx+0x7cu), (u8)r_edx);
    /* 006acd04: mov byte ptr [ecx + 0x69], dl */ W8((u32)(r_ecx+0x69u), (u8)r_edx);
    /* 006acd07: mov byte ptr [ecx + 0x7d], dl */ W8((u32)(r_ecx+0x7du), (u8)r_edx);
    /* 006acd0a: mov byte ptr [ecx + 0x6a], dl */ W8((u32)(r_ecx+0x6au), (u8)r_edx);
    /* 006acd0d: mov byte ptr [ecx + 0x7e], dl */ W8((u32)(r_ecx+0x7eu), (u8)r_edx);
    /* 006acd10: mov byte ptr [ecx + 0x6b], dl */ W8((u32)(r_ecx+0x6bu), (u8)r_edx);
    /* 006acd13: mov byte ptr [ecx + 0x7f], dl */ W8((u32)(r_ecx+0x7fu), (u8)r_edx);
    /* 006acd16: mov byte ptr [ecx + 0x6c], dl */ W8((u32)(r_ecx+0x6cu), (u8)r_edx);
    /* 006acd19: mov byte ptr [ecx + 0x80], dl */ W8((u32)(r_ecx+0x80u), (u8)r_edx);
    /* 006acd1f: mov byte ptr [ecx + 0x6d], dl */ W8((u32)(r_ecx+0x6du), (u8)r_edx);
    /* 006acd22: mov byte ptr [ecx + 0x81], dl */ W8((u32)(r_ecx+0x81u), (u8)r_edx);
    /* 006acd28: mov byte ptr [ecx + 0x6e], dl */ W8((u32)(r_ecx+0x6eu), (u8)r_edx);
    /* 006acd2b: mov byte ptr [ecx + 0x82], dl */ W8((u32)(r_ecx+0x82u), (u8)r_edx);
    /* 006acd31: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 006acd33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acd35: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 006acd38: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 006acd3c: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 006acd40: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006acd43: mov byte ptr [ecx + 0x48], dl */ W8((u32)(r_ecx+0x48u), (u8)r_edx);
    /* 006acd46: mov byte ptr [ecx + 0x49], dl */ W8((u32)(r_ecx+0x49u), (u8)r_edx);
    /* 006acd49: mov byte ptr [ecx + 0x4a], dl */ W8((u32)(r_ecx+0x4au), (u8)r_edx);
    /* 006acd4c: mov byte ptr [ecx + 0x4b], dl */ W8((u32)(r_ecx+0x4bu), (u8)r_edx);
    /* 006acd4f: mov byte ptr [ecx + 0x4c], dl */ W8((u32)(r_ecx+0x4cu), (u8)r_edx);
    /* 006acd52: mov byte ptr [ecx + 0x4d], dl */ W8((u32)(r_ecx+0x4du), (u8)r_edx);
    /* 006acd55: mov byte ptr [ecx + 0x4e], dl */ W8((u32)(r_ecx+0x4eu), (u8)r_edx);
    /* 006acd58: mov byte ptr [ecx + 0x4f], dl */ W8((u32)(r_ecx+0x4fu), (u8)r_edx);
    /* 006acd5b: mov byte ptr [ecx + 0x50], dl */ W8((u32)(r_ecx+0x50u), (u8)r_edx);
    /* 006acd5e: mov byte ptr [ecx + 0x51], dl */ W8((u32)(r_ecx+0x51u), (u8)r_edx);
    /* 006acd61: mov byte ptr [ecx + 0x52], dl */ W8((u32)(r_ecx+0x52u), (u8)r_edx);
    /* 006acd64: mov byte ptr [ecx + 0x53], dl */ W8((u32)(r_ecx+0x53u), (u8)r_edx);
    /* 006acd67: mov byte ptr [ecx + 0x54], dl */ W8((u32)(r_ecx+0x54u), (u8)r_edx);
    /* 006acd6a: mov byte ptr [ecx + 0x55], dl */ W8((u32)(r_ecx+0x55u), (u8)r_edx);
    /* 006acd6d: mov byte ptr [ecx + 0x56], dl */ W8((u32)(r_ecx+0x56u), (u8)r_edx);
    /* 006acd70: mov byte ptr [ecx + 0x57], dl */ W8((u32)(r_ecx+0x57u), (u8)r_edx);
    /* 006acd73: mov byte ptr [ecx + 0x58], dl */ W8((u32)(r_ecx+0x58u), (u8)r_edx);
    /* 006acd76: mov byte ptr [ecx + 0x59], dl */ W8((u32)(r_ecx+0x59u), (u8)r_edx);
    /* 006acd79: mov byte ptr [ecx + 0x5a], dl */ W8((u32)(r_ecx+0x5au), (u8)r_edx);
    /* 006acd7c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006acd81: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 006acd85: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 006acd89: mov word ptr [ecx + 0x22], ax */ W16((u32)(r_ecx+0x22u), (u16)r_eax);
    /* 006acd8d: mov word ptr [ecx + 0x24], dx */ W16((u32)(r_ecx+0x24u), (u16)r_edx);
    /* 006acd91: mov word ptr [ecx + 0x26], ax */ W16((u32)(r_ecx+0x26u), (u16)r_eax);
    /* 006acd95: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 006acd99: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 006acd9d: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 006acda1: mov word ptr [ecx + 0x2e], ax */ W16((u32)(r_ecx+0x2eu), (u16)r_eax);
    /* 006acda5: mov word ptr [ecx + 0x30], dx */ W16((u32)(r_ecx+0x30u), (u16)r_edx);
    /* 006acda9: mov word ptr [ecx + 0x32], ax */ W16((u32)(r_ecx+0x32u), (u16)r_eax);
    /* 006acdad: mov word ptr [ecx + 0x34], dx */ W16((u32)(r_ecx+0x34u), (u16)r_edx);
    /* 006acdb1: mov word ptr [ecx + 0x36], ax */ W16((u32)(r_ecx+0x36u), (u16)r_eax);
    /* 006acdb5: mov word ptr [ecx + 0x38], dx */ W16((u32)(r_ecx+0x38u), (u16)r_edx);
    /* 006acdb9: mov word ptr [ecx + 0x3a], ax */ W16((u32)(r_ecx+0x3au), (u16)r_eax);
    /* 006acdbd: mov word ptr [ecx + 0x3c], dx */ W16((u32)(r_ecx+0x3cu), (u16)r_edx);
    /* 006acdc1: mov word ptr [ecx + 0x3e], ax */ W16((u32)(r_ecx+0x3eu), (u16)r_eax);
    /* 006acdc5: mov word ptr [ecx + 0x40], dx */ W16((u32)(r_ecx+0x40u), (u16)r_edx);
    /* 006acdc9: mov word ptr [ecx + 0x42], ax */ W16((u32)(r_ecx+0x42u), (u16)r_eax);
    /* 006acdcd: mov word ptr [ecx + 0x44], dx */ W16((u32)(r_ecx+0x44u), (u16)r_edx);
    /* 006acdd1: mov word ptr [ecx + 0x46], ax */ W16((u32)(r_ecx+0x46u), (u16)r_eax);
    /* 006acdd5: mov word ptr [ecx + 0xa], ax */ W16((u32)(r_ecx+0xau), (u16)r_eax);
    /* 006acdd9: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 006acddc: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 006acddf: ret  */ FN_RET(0x006acc9c); r_esp += 4; return;
}

void f_006acde0(void) /* sub_6ACDE0 */
{
    FN_ENTER(0x006acde0);
    /* 006acde0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006acde5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acde7: mov word ptr [ecx + 6], dx */ W16((u32)(r_ecx+0x6u), (u16)r_edx);
    /* 006acdeb: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
    /* 006acdef: mov word ptr [ecx + 0x22], dx */ W16((u32)(r_ecx+0x22u), (u16)r_edx);
    /* 006acdf3: mov word ptr [ecx + 0x24], ax */ W16((u32)(r_ecx+0x24u), (u16)r_eax);
    /* 006acdf7: mov word ptr [ecx + 0x26], dx */ W16((u32)(r_ecx+0x26u), (u16)r_edx);
    /* 006acdfb: mov word ptr [ecx + 0x28], ax */ W16((u32)(r_ecx+0x28u), (u16)r_eax);
    /* 006acdff: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 006ace03: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 006ace07: mov word ptr [ecx + 0x2e], dx */ W16((u32)(r_ecx+0x2eu), (u16)r_edx);
    /* 006ace0b: mov word ptr [ecx + 0x30], ax */ W16((u32)(r_ecx+0x30u), (u16)r_eax);
    /* 006ace0f: mov word ptr [ecx + 0x32], dx */ W16((u32)(r_ecx+0x32u), (u16)r_edx);
    /* 006ace13: mov word ptr [ecx + 0x34], ax */ W16((u32)(r_ecx+0x34u), (u16)r_eax);
    /* 006ace17: mov word ptr [ecx + 0x36], dx */ W16((u32)(r_ecx+0x36u), (u16)r_edx);
    /* 006ace1b: mov word ptr [ecx + 0x38], ax */ W16((u32)(r_ecx+0x38u), (u16)r_eax);
    /* 006ace1f: mov word ptr [ecx + 0x3a], dx */ W16((u32)(r_ecx+0x3au), (u16)r_edx);
    /* 006ace23: mov word ptr [ecx + 0x3c], ax */ W16((u32)(r_ecx+0x3cu), (u16)r_eax);
    /* 006ace27: mov word ptr [ecx + 0x3e], dx */ W16((u32)(r_ecx+0x3eu), (u16)r_edx);
    /* 006ace2b: mov word ptr [ecx + 0x40], ax */ W16((u32)(r_ecx+0x40u), (u16)r_eax);
    /* 006ace2f: mov word ptr [ecx + 0x42], dx */ W16((u32)(r_ecx+0x42u), (u16)r_edx);
    /* 006ace33: mov word ptr [ecx + 0x44], ax */ W16((u32)(r_ecx+0x44u), (u16)r_eax);
    /* 006ace37: mov word ptr [ecx + 0x46], dx */ W16((u32)(r_ecx+0x46u), (u16)r_edx);
    /* 006ace3b: ret  */ FN_RET(0x006acde0); r_esp += 4; return;
}

void f_006ace3c(void) /* sub_6ACE3C */
{
    FN_ENTER(0x006ace3c);
    /* 006ace3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ace3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ace3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ace3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ace40: movzx edi, byte ptr [esp + 0x14] */ r_edi = (u32)R8((u32)(r_esp+0x14u));
    /* 006ace45: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006ace48: lea edx, [ecx + 0x5c] */ r_edx = (u32)(r_ecx+0x5cu);
    /* 006ace4b: lea eax, [ecx + 0x6f] */ r_eax = (u32)(r_ecx+0x6fu);
    /* 006ace4e: mov ebx, eax */ r_ebx = r_eax;
    /* 006ace50: mov esi, edx */ r_esi = r_edx;
L_006ace52:; BB(0x006ace52);
    /* 006ace52: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 006ace55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ace56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ace57: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ace5b: call 0x6ad060 */ r_esp -= 4; W32(r_esp, 0x6ace60u); f_006ad060();
    /* 006ace60: mov byte ptr [esi + 0x14], al */ W8((u32)(r_esi+0x14u), (u8)r_eax);
    /* 006ace63: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ace66: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ace68: ja 0x6ace52 */ if ((!fC&&!fZ)) goto L_006ace52;
L_006ace6a:; BB(0x006ace6a);
    /* 006ace6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ace6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ace6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ace6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ace6e: ret 4 */ FN_RET(0x006ace3c); r_esp += 8; return;
}

void f_006ace74(void) /* sub_6ACE74 */
{
    FN_ENTER(0x006ace74);
    /* 006ace74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ace75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ace76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ace77: mov esi, ecx */ r_esi = r_ecx;
    /* 006ace79: movzx ebp, byte ptr [esi] */ r_ebp = (u32)R8((u32)(r_esi));
    /* 006ace7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ace7d: movsx ebx, word ptr [esi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 006ace81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ace82: mov ecx, esi */ r_ecx = r_esi;
    /* 006ace84: call 0x6acec8 */ r_esp -= 4; W32(r_esp, 0x6ace89u); f_006acec8();
    /* 006ace89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ace8b: jne 0x6ace92 */ if (!fZ) goto L_006ace92;
L_006ace8d:; BB(0x006ace8d);
    /* 006ace8d: mov ebp, 0x1d */ r_ebp = 0x1du;
L_006ace92:; BB(0x006ace92);
    /* 006ace92: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ace98: jne 0x6acea0 */ if (!fZ) goto L_006acea0;
L_006ace9a:; BB(0x006ace9a);
    /* 006ace9a: mov eax, ebp */ r_eax = r_ebp;
    /* 006ace9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ace9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ace9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ace9f: ret  */ FN_RET(0x006ace74); r_esp += 4; return;
L_006acea0:; BB(0x006acea0);
    /* 006acea0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006acea1: mov ecx, esi */ r_ecx = r_esi;
    /* 006acea3: call 0x6acf08 */ r_esp -= 4; W32(r_esp, 0x6acea8u); f_006acf08();
    /* 006acea8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aceab: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aceb0: jne 0x6acebb */ if (!fZ) goto L_006acebb;
L_006aceb2:; BB(0x006aceb2);
    /* 006aceb2: mov eax, 0xff */ r_eax = 0xffu;
    /* 006aceb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aceb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aceb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aceba: ret  */ FN_RET(0x006ace74); r_esp += 4; return;
L_006acebb:; BB(0x006acebb);
    /* 006acebb: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006acebd: jl 0x6acec1 */ if ((fS!=fO)) goto L_006acec1;
L_006acebf:; BB(0x006acebf);
    /* 006acebf: mov eax, ebp */ r_eax = r_ebp;
L_006acec1:; BB(0x006acec1);
    /* 006acec1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006acec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006acec3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006acec4: ret  */ FN_RET(0x006ace74); r_esp += 4; return;
}

void f_006acec8(void) /* sub_6ACEC8 */
{
    FN_ENTER(0x006acec8);
    /* 006acec8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006acec9: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 006acece: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 006aced3: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aced9: jne 0x6acee4 */ if (!fZ) goto L_006acee4;
L_006acedb:; BB(0x006acedb);
    /* 006acedb: mov eax, 1 */ r_eax = 0x1u;
    /* 006acee0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006acee1: ret 8 */ FN_RET(0x006acec8); r_esp += 12; return;
L_006acee4:; BB(0x006acee4);
    /* 006acee4: movzx eax, byte ptr [edx + ecx + 0x5c] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x5cu));
    /* 006acee9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aceeb: jle 0x6acef3 */ if ((fZ||fS!=fO)) goto L_006acef3;
L_006aceed:; BB(0x006aceed);
    /* 006aceed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aceef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006acef0: ret 8 */ FN_RET(0x006acec8); r_esp += 12; return;
L_006acef3:; BB(0x006acef3);
    /* 006acef3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006acef4: call 0x6acf08 */ r_esp -= 4; W32(r_esp, 0x6acef9u); f_006acf08();
    /* 006acef9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006acefc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006acefe: jle 0x6acedb */ if ((fZ||fS!=fO)) goto L_006acedb;
L_006acf00:; BB(0x006acf00);
    /* 006acf00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acf02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006acf03: ret 8 */ FN_RET(0x006acec8); r_esp += 12; return;
}

void f_006acf08(void) /* sub_6ACF08 */
{
    FN_ENTER(0x006acf08);
    /* 006acf08: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006acf0d: movzx eax, byte ptr [edx + ecx + 0x70] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x70u));
    /* 006acf12: movzx edx, byte ptr [edx + ecx + 0x5c] */ r_edx = (u32)R8((u32)(r_edx+r_ecx+0x5cu));
    /* 006acf17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006acf18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006acf19: call 0x6ad060 */ r_esp -= 4; W32(r_esp, 0x6acf1eu); f_006ad060();
    /* 006acf1e: ret 4 */ FN_RET(0x006acf08); r_esp += 8; return;
}

void f_006acf24(void) /* sub_6ACF24 */
{
    FN_ENTER(0x006acf24);
    /* 006acf24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006acf25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006acf26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006acf27: mov edi, ecx */ r_edi = r_ecx;
    /* 006acf29: movsx ebx, word ptr [edi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 006acf2d: mov eax, ebx */ r_eax = r_ebx;
    /* 006acf2f: call 0x6acf4d */ r_esp -= 4; W32(r_esp, 0x6acf34u); f_006acf4d();
    /* 006acf34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acf36: jne 0x6acf40 */ if (!fZ) goto L_006acf40;
L_006acf38:; BB(0x006acf38);
    /* 006acf38: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006acf3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acf3c: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
L_006acf40:; BB(0x006acf40);
    /* 006acf40: mov eax, ebx */ r_eax = r_ebx;
    /* 006acf42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006acf43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006acf44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006acf45: ret  */ FN_RET(0x006acf24); r_esp += 4; return;
}

void f_006acf48(void) /* sub_6ACF48 */
{
    FN_ENTER(0x006acf48);
    /* 006acf48: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006acf4d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006acf50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006acf52: jl 0x6acf5f */ if ((fS!=fO)) goto L_006acf5f;
L_006acf54:; BB(0x006acf54);
    /* 006acf54: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006acf57: jge 0x6acf5f */ if ((fS==fO)) goto L_006acf5f;
L_006acf59:; BB(0x006acf59);
    /* 006acf59: mov eax, 1 */ r_eax = 0x1u;
    /* 006acf5e: ret  */ FN_RET(0x006acf48); r_esp += 4; return;
L_006acf5f:; BB(0x006acf5f);
    /* 006acf5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acf61: ret  */ FN_RET(0x006acf48); r_esp += 4; return;
}

void f_006acf4d(void) /* sub_6ACF4D */
{
    FN_ENTER(0x006acf4d);
    /* 006acf4d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006acf50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006acf52: jl 0x6acf5f */ if ((fS!=fO)) goto L_006acf5f;
L_006acf54:; BB(0x006acf54);
    /* 006acf54: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006acf57: jge 0x6acf5f */ if ((fS==fO)) goto L_006acf5f;
L_006acf59:; BB(0x006acf59);
    /* 006acf59: mov eax, 1 */ r_eax = 0x1u;
    /* 006acf5e: ret  */ FN_RET(0x006acf4d); r_esp += 4; return;
L_006acf5f:; BB(0x006acf5f);
    /* 006acf5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006acf61: ret  */ FN_RET(0x006acf4d); r_esp += 4; return;
}

void f_006acf64(void) /* sub_6ACF64 */
{
    FN_ENTER(0x006acf64);
    /* 006acf64: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006acf69: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 006acf6e: mov byte ptr [edx + ecx + 0x48], al */ W8((u32)(r_edx+r_ecx+0x48u), (u8)r_eax);
    /* 006acf72: ret 8 */ FN_RET(0x006acf64); r_esp += 12; return;
}

void f_006acf78(void) /* sub_6ACF78 */
{
    FN_ENTER(0x006acf78);
    /* 006acf78: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006acf7d: mov byte ptr [ecx + 0x48], al */ W8((u32)(r_ecx+0x48u), (u8)r_eax);
    /* 006acf80: mov byte ptr [ecx + 0x49], al */ W8((u32)(r_ecx+0x49u), (u8)r_eax);
    /* 006acf83: mov byte ptr [ecx + 0x4a], al */ W8((u32)(r_ecx+0x4au), (u8)r_eax);
    /* 006acf86: mov byte ptr [ecx + 0x4b], al */ W8((u32)(r_ecx+0x4bu), (u8)r_eax);
    /* 006acf89: mov byte ptr [ecx + 0x4c], al */ W8((u32)(r_ecx+0x4cu), (u8)r_eax);
    /* 006acf8c: mov byte ptr [ecx + 0x4d], al */ W8((u32)(r_ecx+0x4du), (u8)r_eax);
    /* 006acf8f: mov byte ptr [ecx + 0x4e], al */ W8((u32)(r_ecx+0x4eu), (u8)r_eax);
    /* 006acf92: mov byte ptr [ecx + 0x4f], al */ W8((u32)(r_ecx+0x4fu), (u8)r_eax);
    /* 006acf95: mov byte ptr [ecx + 0x50], al */ W8((u32)(r_ecx+0x50u), (u8)r_eax);
    /* 006acf98: mov byte ptr [ecx + 0x51], al */ W8((u32)(r_ecx+0x51u), (u8)r_eax);
    /* 006acf9b: mov byte ptr [ecx + 0x52], al */ W8((u32)(r_ecx+0x52u), (u8)r_eax);
    /* 006acf9e: mov byte ptr [ecx + 0x53], al */ W8((u32)(r_ecx+0x53u), (u8)r_eax);
    /* 006acfa1: mov byte ptr [ecx + 0x54], al */ W8((u32)(r_ecx+0x54u), (u8)r_eax);
    /* 006acfa4: mov byte ptr [ecx + 0x55], al */ W8((u32)(r_ecx+0x55u), (u8)r_eax);
    /* 006acfa7: mov byte ptr [ecx + 0x56], al */ W8((u32)(r_ecx+0x56u), (u8)r_eax);
    /* 006acfaa: mov byte ptr [ecx + 0x57], al */ W8((u32)(r_ecx+0x57u), (u8)r_eax);
    /* 006acfad: mov byte ptr [ecx + 0x58], al */ W8((u32)(r_ecx+0x58u), (u8)r_eax);
    /* 006acfb0: mov byte ptr [ecx + 0x59], al */ W8((u32)(r_ecx+0x59u), (u8)r_eax);
    /* 006acfb3: mov byte ptr [ecx + 0x5a], al */ W8((u32)(r_ecx+0x5au), (u8)r_eax);
    /* 006acfb6: ret 4 */ FN_RET(0x006acf78); r_esp += 8; return;
}

void f_006acfbc(void) /* sub_6ACFBC */
{
    FN_ENTER(0x006acfbc);
    /* 006acfbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006acfbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006acfbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006acfbf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006acfc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006acfc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006acfc3: mov ebp, eax */ r_ebp = r_eax;
    /* 006acfc5: mov esi, ecx */ r_esi = r_ecx;
L_006acfc7:; BB(0x006acfc7);
    /* 006acfc7: mov eax, ebp */ r_eax = r_ebp;
    /* 006acfc9: call 0x6acf4d */ r_esp -= 4; W32(r_esp, 0x6acfceu); f_006acf4d();
    /* 006acfce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006acfd0: jne 0x6acfd6 */ if (!fZ) goto L_006acfd6;
L_006acfd2:; BB(0x006acfd2);
    /* 006acfd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006acfd4: jmp 0x6acffe */ goto L_006acffe;
L_006acfd6:; BB(0x006acfd6);
    /* 006acfd6: movzx ebx, byte ptr [ebp + esi + 0x48] */ r_ebx = (u32)R8((u32)(r_ebp+r_esi+0x48u));
    /* 006acfdb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006acfdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006acfdd: mov ecx, esi */ r_ecx = r_esi;
    /* 006acfdf: call 0x6acec8 */ r_esp -= 4; W32(r_esp, 0x6acfe4u); f_006acec8();
    /* 006acfe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006acfe6: jne 0x6acfed */ if (!fZ) goto L_006acfed;
L_006acfe8:; BB(0x006acfe8);
    /* 006acfe8: mov ebx, 0x1d */ r_ebx = 0x1du;
L_006acfed:; BB(0x006acfed);
    /* 006acfed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006acfee: mov ecx, esi */ r_ecx = r_esi;
    /* 006acff0: call 0x6acf08 */ r_esp -= 4; W32(r_esp, 0x6acff5u); f_006acf08();
    /* 006acff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006acff6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006acff7: mov ecx, esi */ r_ecx = r_esi;
    /* 006acff9: call 0x6ad060 */ r_esp -= 4; W32(r_esp, 0x6acffeu); f_006ad060();
L_006acffe:; BB(0x006acffe);
    /* 006acffe: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 006ad001: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad007: je 0x6ad04c */ if (fZ) goto L_006ad04c;
L_006ad009:; BB(0x006ad009);
    /* 006ad009: movzx edi, byte ptr [esp + 0x18] */ r_edi = (u32)R8((u32)(r_esp+0x18u));
    /* 006ad00e: movzx edx, byte ptr [ebp + esi + 0x70] */ r_edx = (u32)R8((u32)(r_ebp+r_esi+0x70u));
    /* 006ad013: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ad015: movzx edi, byte ptr [ebp + esi + 0x5c] */ r_edi = (u32)R8((u32)(r_ebp+r_esi+0x5cu));
    /* 006ad01a: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006ad01d: mov ecx, esi */ r_ecx = r_esi;
    /* 006ad01f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad021: call 0x6ad060 */ r_esp -= 4; W32(r_esp, 0x6ad026u); f_006ad060();
    /* 006ad026: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad02c: je 0x6ad037 */ if (fZ) goto L_006ad037;
L_006ad02e:; BB(0x006ad02e);
    /* 006ad02e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006ad031: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ad033: jle 0x6ad037 */ if ((fZ||fS!=fO)) goto L_006ad037;
L_006ad035:; BB(0x006ad035);
    /* 006ad035: mov ebx, eax */ r_ebx = r_eax;
L_006ad037:; BB(0x006ad037);
    /* 006ad037: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 006ad03a: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad040: je 0x6ad048 */ if (fZ) goto L_006ad048;
L_006ad042:; BB(0x006ad042);
    /* 006ad042: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ad044: jle 0x6ad048 */ if ((fZ||fS!=fO)) goto L_006ad048;
L_006ad046:; BB(0x006ad046);
    /* 006ad046: mov ebx, edi */ r_ebx = r_edi;
L_006ad048:; BB(0x006ad048);
    /* 006ad048: mov byte ptr [ebp + esi + 0x48], bl */ W8((u32)(r_ebp+r_esi+0x48u), (u8)r_ebx);
L_006ad04c:; BB(0x006ad04c);
    /* 006ad04c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ad04f: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad052: jl 0x6acfc7 */ if ((fS!=fO)) goto L_006acfc7;
L_006ad058:; BB(0x006ad058);
    /* 006ad058: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad059: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad05a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad05b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad05c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ad05d: ret 4 */ FN_RET(0x006acfbc); r_esp += 8; return;
}

