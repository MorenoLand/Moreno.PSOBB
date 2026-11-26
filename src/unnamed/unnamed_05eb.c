#include "protos.h"

void f_005eb05c(void) /* sub_5EB05C */
{
    FN_ENTER(0x005eb05c);
    /* 005eb05c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb05d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb05f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb061: push 0x8dbf0c */ { u32 v = 0x8dbf0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb066: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb06c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb06d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb074: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb077: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb07a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb07d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb080: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb083: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb086: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb089: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eb08c: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eb091u); f_005e959c();
    /* 005eb091: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb098: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb09b: movzx eax, byte ptr [edx + 0xf4] */ r_eax = (u32)R8((u32)(r_edx+0xf4u));
    /* 005eb0a2: mov dword ptr [edx], 0xb10de0 */ W32((u32)(r_edx), 0xb10de0u);
    /* 005eb0a8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb0ab: mov dword ptr [edx + 0x234], 0x5cf288 */ W32((u32)(r_edx+0x234u), 0x5cf288u);
    /* 005eb0b5: jne 0x5eb0f7 */ if (!fZ) goto L_005eb0f7;
L_005eb0b7:; BB(0x005eb0b7);
    /* 005eb0b7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb0b9: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005eb0bf: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005eb0c2: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
    /* 005eb0c8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5eb0cdu); f_008581c5();
    /* 005eb0cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb0ce: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb0d1: mov dword ptr [edx + 0x1a8], 1 */ W32((u32)(r_edx+0x1a8u), 0x1u);
    /* 005eb0db: mov dword ptr [edx + 0x230], eax */ W32((u32)(r_edx+0x230u), r_eax);
    /* 005eb0e1: mov dword ptr [edx + 0x238], 0x5e4264 */ W32((u32)(r_edx+0x238u), 0x5e4264u);
    /* 005eb0eb: mov dword ptr [edx + 0x208], 0x41000000 */ W32((u32)(r_edx+0x208u), 0x41000000u);
    /* 005eb0f5: jmp 0x5eb110 */ goto L_005eb110;
L_005eb0f7:; BB(0x005eb0f7);
    /* 005eb0f7: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005eb0fd: mov dword ptr [edx + 0x240], 0 */ W32((u32)(r_edx+0x240u), 0x0u);
    /* 005eb107: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb10a: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
L_005eb110:; BB(0x005eb110);
    /* 005eb110: mov eax, edx */ r_eax = r_edx;
    /* 005eb112: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb115: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb11c: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb11e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb11f: ret 8 */ FN_RET(0x005eb05c); r_esp += 12; return;
}

void f_005eb124(void) /* sub_5EB124 */
{
    FN_ENTER(0x005eb124);
    /* 005eb124: mov dword ptr [0xa8dd38], 0x3f800000 */ W32((u32)(0xa8dd38u), 0x3f800000u);
    /* 005eb12e: mov dword ptr [0xa8dd3c], 0x41000000 */ W32((u32)(0xa8dd3cu), 0x41000000u);
    /* 005eb138: mov dword ptr [0xa8dd40], 0x3fc00000 */ W32((u32)(0xa8dd40u), 0x3fc00000u);
    /* 005eb142: ret  */ FN_RET(0x005eb124); r_esp += 4; return;
}

void f_005eb144(void) /* sub_5EB144 */
{
    FN_ENTER(0x005eb144);
    /* 005eb144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb145: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb147: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb149: push 0x8dbf28 */ { u32 v = 0x8dbf28u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb14e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb155: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb15c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb15f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb162: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005eb165: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005eb168: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005eb16b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eb16e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005eb171: mov eax, ecx */ r_eax = r_ecx;
    /* 005eb173: mov dword ptr [eax], 0xb10f60 */ W32((u32)(r_eax), 0xb10f60u);
    /* 005eb179: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eb180: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eb185u); f_005e61c8();
    /* 005eb185: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb188: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb18a: jne 0x5eb19c */ if (!fZ) goto L_005eb19c;
L_005eb18c:; BB(0x005eb18c);
    /* 005eb18c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb18f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb196: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb199: ret 4 */ FN_RET(0x005eb144); r_esp += 8; return;
L_005eb19c:; BB(0x005eb19c);
    /* 005eb19c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb19f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1a0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eb1a5u); f_005c2f74();
    /* 005eb1a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb1a6: jmp 0x5eb18c */ goto L_005eb18c;
}

void f_005eb1a8(void) /* sub_5EB1A8 */
{
    FN_ENTER(0x005eb1a8);
    /* 005eb1a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1a9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb1ac: mov esi, ecx */ r_esi = r_ecx;
    /* 005eb1ae: movsx edx, word ptr [esi + 0x1f2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x1f2u));
    /* 005eb1b5: mov ecx, esi */ r_ecx = r_esi;
    /* 005eb1b7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eb1ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1bc: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5eb1c1u); f_005e83c8();
    /* 005eb1c1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eb1c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1c6: push dword ptr [esi + 0x1ac] */ { u32 v = R32((u32)(r_esi+0x1acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb1cc: mov ecx, esi */ r_ecx = r_esi;
    /* 005eb1ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1cf: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5eb1d4u); f_005e6df8();
    /* 005eb1d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb1d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eb1d8: ret  */ FN_RET(0x005eb1a8); r_esp += 4; return;
}

void f_005eb1dc(void) /* sub_5EB1DC */
{
    FN_ENTER(0x005eb1dc);
    /* 005eb1dc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005eb1e0: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005eb1e3: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb1e8: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005eb1eb: mov dword ptr [edx + 0x74], 0x5eb2d8 */ W32((u32)(r_edx+0x74u), 0x5eb2d8u);
    /* 005eb1f2: mov dword ptr [edx + 0x70], 0x5eb42c */ W32((u32)(r_edx+0x70u), 0x5eb42cu);
    /* 005eb1f9: mov dword ptr [edx + 0x50], 0xffffc000 */ W32((u32)(r_edx+0x50u), 0xffffc000u);
    /* 005eb200: mov dword ptr [edx + 0x78], 0x1bb */ W32((u32)(r_edx+0x78u), 0x1bbu);
    /* 005eb207: mov dword ptr [edx + 0x7c], 0x1bc */ W32((u32)(r_edx+0x7cu), 0x1bcu);
    /* 005eb20e: ret 4 */ FN_RET(0x005eb1dc); r_esp += 8; return;
}

void f_005eb214(void) /* sub_5EB214 */
{
    FN_ENTER(0x005eb214);
    /* 005eb214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb215: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb217: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb219: push 0x8dbf50 */ { u32 v = 0x8dbf50u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb21e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb224: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb225: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb22c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb22f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb232: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb235: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb238: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb23b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb23e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb240: je 0x5eb297 */ if (fZ) goto L_005eb297;
L_005eb242:; BB(0x005eb242);
    /* 005eb242: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eb249: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb24e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eb253u); f_005caba4();
    /* 005eb253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb254: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eb257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb259: je 0x5eb293 */ if (fZ) goto L_005eb293;
L_005eb25b:; BB(0x005eb25b);
    /* 005eb25b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eb262: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb269: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb26c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb26f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb270: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb276: call 0x5eb2a8 */ r_esp -= 4; W32(r_esp, 0x5eb27bu); f_005eb2a8();
    /* 005eb27b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb27e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eb285:; BB(0x005eb285);
    /* 005eb285: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb288: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb28f: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb292: ret  */ FN_RET(0x005eb214); r_esp += 4; return;
L_005eb293:; BB(0x005eb293);
    /* 005eb293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb295: jmp 0x5eb285 */ goto L_005eb285;
L_005eb297:; BB(0x005eb297);
    /* 005eb297: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb299: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb29c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb2a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb2a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb2a6: ret  */ FN_RET(0x005eb214); r_esp += 4; return;
}

void f_005eb2a8(void) /* sub_5EB2A8 */
{
    FN_ENTER(0x005eb2a8);
    /* 005eb2a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb2a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eb2ab: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb2af: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb2b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eb2b5: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eb2bau); f_005e959c();
    /* 005eb2ba: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005eb2c0: mov dword ptr [ebx], 0xb10f60 */ W32((u32)(r_ebx), 0xb10f60u);
    /* 005eb2c6: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb2c9: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005eb2cf: mov eax, ebx */ r_eax = r_ebx;
    /* 005eb2d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb2d2: ret 8 */ FN_RET(0x005eb2a8); r_esp += 12; return;
}

void f_005eb2d8(void)
{
    FN_ENTER(0x005eb2d8);
    /* 005eb2d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eb2d9: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb2dd: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5eb2e2u); f_005c5528();
    /* 005eb2e2: mov ecx, eax */ r_ecx = r_eax;
    /* 005eb2e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb2e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb2e9: je 0x5eb315 */ if (fZ) goto L_005eb315;
L_005eb2eb:; BB(0x005eb2eb);
    /* 005eb2eb: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005eb2ef: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005eb2f1: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 005eb2f4: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005eb2fa: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005eb2fd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb2ff: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eb301: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb303: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb305: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eb307: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb309: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb30b: lea edx, [edx + eax + 0x1c] */ r_edx = (u32)(r_edx+r_eax+0x1cu);
    /* 005eb30f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb310: call 0x5eb318 */ r_esp -= 4; W32(r_esp, 0x5eb315u); f_005eb318();
L_005eb315:; BB(0x005eb315);
    /* 005eb315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eb316: ret  */ FN_RET(0x005eb2d8); r_esp += 4; return;
}

void f_005eb318(void) /* sub_5EB318 */
{
    FN_ENTER(0x005eb318);
    /* 005eb318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb319: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb31b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb31d: push 0x8dbf92 */ { u32 v = 0x8dbf92u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb322: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb329: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb330: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb336: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb339: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb33c: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb33f: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb342: mov esi, ecx */ r_esi = r_ecx;
    /* 005eb344: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005eb347: lea ecx, [ebp - 0xac] */ r_ecx = (u32)(r_ebp+0xffffff54u);
    /* 005eb34d: call 0x5c5ae4 */ r_esp -= 4; W32(r_esp, 0x5eb352u); f_005c5ae4();
    /* 005eb352: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 005eb358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb359: mov ecx, esi */ r_ecx = r_esi;
    /* 005eb35b: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5eb360u); f_005e8f04();
    /* 005eb360: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb365: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005eb367: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005eb36d: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005eb370: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005eb377: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 005eb37d: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 005eb380: mov dword ptr [ebp - 0x9c], 0xa */ W32((u32)(r_ebp+0xffffff64u), 0xau);
    /* 005eb38a: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 005eb390: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eb395u); f_005caba4();
    /* 005eb395: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb396: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005eb399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb39b: je 0x5eb3c7 */ if (fZ) goto L_005eb3c7;
L_005eb39d:; BB(0x005eb39d);
    /* 005eb39d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005eb3a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb3ab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005eb3ae: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 005eb3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3b5: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb3bb: call 0x5f1604 */ r_esp -= 4; W32(r_esp, 0x5eb3c0u); f_005f1604();
    /* 005eb3c0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005eb3c7:; BB(0x005eb3c7);
    /* 005eb3c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eb3ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eb3d5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eb3dcu); f_005caba4();
    /* 005eb3dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb3dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eb3e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb3e2: je 0x5eb415 */ if (fZ) goto L_005eb415;
L_005eb3e4:; BB(0x005eb3e4);
    /* 005eb3e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eb3eb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005eb3f2: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb3f8: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb400: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 005eb406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb409: call 0x6ee0d0 */ r_esp -= 4; W32(r_esp, 0x5eb40eu); f_006ee0d0();
    /* 005eb40e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eb415:; BB(0x005eb415);
    /* 005eb415: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eb418: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb41b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb41e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb425: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb428: ret 4 */ FN_RET(0x005eb318); r_esp += 8; return;
}

void f_005eb42c(void)
{
    FN_ENTER(0x005eb42c);
    /* 005eb42c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb430: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5eb435u); f_005c5528();
    /* 005eb435: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb438: je 0x5eb445 */ if (fZ) goto L_005eb445;
L_005eb43a:; BB(0x005eb43a);
    /* 005eb43a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb43e: mov ecx, eax */ r_ecx = r_eax;
    /* 005eb440: call 0x5eb318 */ r_esp -= 4; W32(r_esp, 0x5eb445u); f_005eb318();
L_005eb445:; BB(0x005eb445);
    /* 005eb445: ret  */ FN_RET(0x005eb42c); r_esp += 4; return;
}

void f_005eb448(void) /* sub_5EB448 */
{
    FN_ENTER(0x005eb448);
    /* 005eb448: mov dword ptr [0xa8dd44], 0x3f800000 */ W32((u32)(0xa8dd44u), 0x3f800000u);
    /* 005eb452: mov dword ptr [0xa8dd48], 0x41000000 */ W32((u32)(0xa8dd48u), 0x41000000u);
    /* 005eb45c: mov dword ptr [0xa8dd4c], 0x3fc00000 */ W32((u32)(0xa8dd4cu), 0x3fc00000u);
    /* 005eb466: ret  */ FN_RET(0x005eb448); r_esp += 4; return;
}

void f_005eb468(void) /* sub_5EB468 */
{
    FN_ENTER(0x005eb468);
    /* 005eb468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb469: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eb46b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eb46d: call 0x5eb48c */ r_esp -= 4; W32(r_esp, 0x5eb472u); f_005eb48c();
    /* 005eb472: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eb476: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb478: jne 0x5eb47e */ if (!fZ) goto L_005eb47e;
L_005eb47a:; BB(0x005eb47a);
    /* 005eb47a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb47b: ret 4 */ FN_RET(0x005eb468); r_esp += 8; return;
L_005eb47e:; BB(0x005eb47e);
    /* 005eb47e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb47f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eb484u); f_005c2f74();
    /* 005eb484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb485: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb486: ret 4 */ FN_RET(0x005eb468); r_esp += 8; return;
}

void f_005eb48c(void) /* sub_5EB48C */
{
    FN_ENTER(0x005eb48c);
    /* 005eb48c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb48d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb48f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb491: push 0x8dbfac */ { u32 v = 0x8dbfacu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb496: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb49c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb49d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb4a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb4a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb4aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb4ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb4b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb4b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eb4b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb4b9: mov dword ptr [ecx], 0xb110c0 */ W32((u32)(r_ecx), 0xb110c0u);
    /* 005eb4bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eb4c6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eb4cbu); f_005e61c8();
    /* 005eb4cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb4ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb4d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb4d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb4d8: ret  */ FN_RET(0x005eb48c); r_esp += 4; return;
}

void f_005eb4dc(void) /* sub_5EB4DC */
{
    FN_ENTER(0x005eb4dc);
    /* 005eb4dc: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4e1: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb4e7: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4ed: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eb4f2u); f_005dd728();
    /* 005eb4f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb4f5: ret  */ FN_RET(0x005eb4dc); r_esp += 4; return;
}

void f_005eb4f8(void) /* sub_5EB4F8 */
{
    FN_ENTER(0x005eb4f8);
    /* 005eb4f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4fa: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb500: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb505: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb506: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eb50bu); f_005dd728();
    /* 005eb50b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb50e: ret  */ FN_RET(0x005eb4f8); r_esp += 4; return;
}

void f_005eb510(void) /* sub_5EB510 */
{
    FN_ENTER(0x005eb510);
    /* 005eb510: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005eb515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb517: jle 0x5eb537 */ if ((fZ||fS!=fO)) goto L_005eb537;
L_005eb519:; BB(0x005eb519);
    /* 005eb519: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005eb51c: jg 0x5eb537 */ if ((!fZ&&fS==fO)) goto L_005eb537;
L_005eb51e:; BB(0x005eb51e);
    /* 005eb51e: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005eb524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb526: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb528: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb52d: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5eb532u); f_0082fa0c();
    /* 005eb532: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5eb537u); f_005c34a0();
L_005eb537:; BB(0x005eb537);
    /* 005eb537: ret  */ FN_RET(0x005eb510); r_esp += 4; return;
}

void f_005eb538(void) /* sub_5EB538 */
{
    FN_ENTER(0x005eb538);
    /* 005eb538: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb539: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb53b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb53d: push 0x8dbfd4 */ { u32 v = 0x8dbfd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb542: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb549: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb550: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb553: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb556: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb559: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb55c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb55f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb562: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb564: je 0x5eb5bb */ if (fZ) goto L_005eb5bb;
L_005eb566:; BB(0x005eb566);
    /* 005eb566: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eb56d: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb572: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eb577u); f_005caba4();
    /* 005eb577: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb578: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eb57b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb57d: je 0x5eb5b7 */ if (fZ) goto L_005eb5b7;
L_005eb57f:; BB(0x005eb57f);
    /* 005eb57f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eb586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb58d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb590: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb594: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb59a: call 0x5eb5cc */ r_esp -= 4; W32(r_esp, 0x5eb59fu); f_005eb5cc();
    /* 005eb59f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb5a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eb5a9:; BB(0x005eb5a9);
    /* 005eb5a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb5ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb5b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb5b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb5b6: ret  */ FN_RET(0x005eb538); r_esp += 4; return;
L_005eb5b7:; BB(0x005eb5b7);
    /* 005eb5b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb5b9: jmp 0x5eb5a9 */ goto L_005eb5a9;
L_005eb5bb:; BB(0x005eb5bb);
    /* 005eb5bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb5bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb5c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb5c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb5c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb5ca: ret  */ FN_RET(0x005eb538); r_esp += 4; return;
}

void f_005eb5cc(void) /* sub_5EB5CC */
{
    FN_ENTER(0x005eb5cc);
    /* 005eb5cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb5cd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005eb5cf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb5d3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb5d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005eb5d9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eb5deu); f_005e959c();
    /* 005eb5de: mov dword ptr [ebp], 0xb110c0 */ W32((u32)(r_ebp), 0xb110c0u);
    /* 005eb5e5: mov eax, ebp */ r_eax = r_ebp;
    /* 005eb5e7: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005eb5f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb5f2: ret 8 */ FN_RET(0x005eb5cc); r_esp += 12; return;
}

void f_005eb5f8(void) /* sub_5EB5F8 */
{
    FN_ENTER(0x005eb5f8);
    /* 005eb5f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb5f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eb5fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eb5fd: call 0x5eb61c */ r_esp -= 4; W32(r_esp, 0x5eb602u); f_005eb61c();
    /* 005eb602: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eb606: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb608: jne 0x5eb60e */ if (!fZ) goto L_005eb60e;
L_005eb60a:; BB(0x005eb60a);
    /* 005eb60a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb60b: ret 4 */ FN_RET(0x005eb5f8); r_esp += 8; return;
L_005eb60e:; BB(0x005eb60e);
    /* 005eb60e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb60f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eb614u); f_005c2f74();
    /* 005eb614: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb615: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb616: ret 4 */ FN_RET(0x005eb5f8); r_esp += 8; return;
}

void f_005eb61c(void) /* sub_5EB61C */
{
    FN_ENTER(0x005eb61c);
    /* 005eb61c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb61d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb61f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb621: push 0x8dbff0 */ { u32 v = 0x8dbff0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb626: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb62c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb62d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb634: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb637: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb63a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb63d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb640: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb643: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eb646: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb649: mov dword ptr [ecx], 0xb11220 */ W32((u32)(r_ecx), 0xb11220u);
    /* 005eb64f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eb656: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eb65bu); f_005e61c8();
    /* 005eb65b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb65e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb665: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb668: ret  */ FN_RET(0x005eb61c); r_esp += 4; return;
}

void f_005eb66c(void) /* sub_5EB66C */
{
    FN_ENTER(0x005eb66c);
    /* 005eb66c: mov edx, ecx */ r_edx = r_ecx;
    /* 005eb66e: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005eb673: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005eb676: je 0x5eb679 */ if (fZ) goto L_005eb679;
L_005eb678:; BB(0x005eb678);
    /* 005eb678: ret  */ FN_RET(0x005eb66c); r_esp += 4; return;
L_005eb679:; BB(0x005eb679);
    /* 005eb679: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005eb67f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb681: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5eb686u); f_0082e9e4();
    /* 005eb686: ret  */ FN_RET(0x005eb66c); r_esp += 4; return;
}

void f_005eb688(void) /* sub_5EB688 */
{
    FN_ENTER(0x005eb688);
    /* 005eb688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb689: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb68c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eb68e: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 005eb694: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb697: jne 0x5eb6a8 */ if (!fZ) goto L_005eb6a8;
L_005eb699:; BB(0x005eb699);
    /* 005eb699: mov dword ptr [ebx + 0x244], 1 */ W32((u32)(r_ebx+0x244u), 0x1u);
    /* 005eb6a3: mov eax, 1 */ r_eax = 0x1u;
L_005eb6a8:; BB(0x005eb6a8);
    /* 005eb6a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb6aa: jne 0x5eb6d2 */ if (!fZ) goto L_005eb6d2;
L_005eb6ac:; BB(0x005eb6ac);
    /* 005eb6ac: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5eb6b1u); f_008587a5();
    /* 005eb6b1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005eb6b4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005eb6b7: fdiv dword ptr [0x92d71c] */ ST(0) = ST(0) / R_F32((u32)(0x92d71cu));
    /* 005eb6bd: fcomp dword ptr [0x92d718] */ fx_compare(ST(0), R_F32((u32)(0x92d718u))); FPOP();
    /* 005eb6c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005eb6c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005eb6c6: jae 0x5eb6d2 */ if (!fC) goto L_005eb6d2;
L_005eb6c8:; BB(0x005eb6c8);
    /* 005eb6c8: mov dword ptr [ebx + 0x244], 2 */ W32((u32)(r_ebx+0x244u), 0x2u);
L_005eb6d2:; BB(0x005eb6d2);
    /* 005eb6d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb6d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb6d6: ret  */ FN_RET(0x005eb688); r_esp += 4; return;
}

void f_005eb6d8(void) /* sub_5EB6D8 */
{
    FN_ENTER(0x005eb6d8);
    /* 005eb6d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6d9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb6dc: mov esi, ecx */ r_esi = r_ecx;
    /* 005eb6de: mov ecx, esi */ r_ecx = r_esi;
    /* 005eb6e0: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5eb6e5u); f_005e90b0();
    /* 005eb6e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb6e7: je 0x5eb722 */ if (fZ) goto L_005eb722;
L_005eb6e9:; BB(0x005eb6e9);
    /* 005eb6e9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eb6ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005eb6f1: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5eb6f6u); f_005e83c8();
    /* 005eb6f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb6f8: je 0x5eb729 */ if (fZ) goto L_005eb729;
L_005eb6fa:; BB(0x005eb6fa);
    /* 005eb6fa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eb6fd: push dword ptr [esi + 0x1e4] */ { u32 v = R32((u32)(r_esi+0x1e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb703: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005eb709: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb70c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb70d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb70e: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5eb713u); f_006e2f20();
    /* 005eb713: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb716: mov ecx, esi */ r_ecx = r_esi;
    /* 005eb718: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5eb71du); f_005e7480();
    /* 005eb71d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb720: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eb721: ret  */ FN_RET(0x005eb6d8); r_esp += 4; return;
L_005eb722:; BB(0x005eb722);
    /* 005eb722: mov ecx, esi */ r_ecx = r_esi;
    /* 005eb724: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5eb729u); f_005e90e8();
L_005eb729:; BB(0x005eb729);
    /* 005eb729: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb72c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eb72d: ret  */ FN_RET(0x005eb6d8); r_esp += 4; return;
}

void f_005eb730(void) /* sub_5EB730 */
{
    FN_ENTER(0x005eb730);
    /* 005eb730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb731: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb733: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb735: push 0x8dc018 */ { u32 v = 0x8dc018u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb73a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb741: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb748: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb74b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb74e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb751: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb754: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb757: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb75c: je 0x5eb7b3 */ if (fZ) goto L_005eb7b3;
L_005eb75e:; BB(0x005eb75e);
    /* 005eb75e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eb765: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb76a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eb76fu); f_005caba4();
    /* 005eb76f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb770: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eb773: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb775: je 0x5eb7af */ if (fZ) goto L_005eb7af;
L_005eb777:; BB(0x005eb777);
    /* 005eb777: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eb77e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb785: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb788: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb78c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb792: call 0x5eb7c4 */ r_esp -= 4; W32(r_esp, 0x5eb797u); f_005eb7c4();
    /* 005eb797: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb79a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eb7a1:; BB(0x005eb7a1);
    /* 005eb7a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb7a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb7ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb7ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb7ae: ret  */ FN_RET(0x005eb730); r_esp += 4; return;
L_005eb7af:; BB(0x005eb7af);
    /* 005eb7af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb7b1: jmp 0x5eb7a1 */ goto L_005eb7a1;
L_005eb7b3:; BB(0x005eb7b3);
    /* 005eb7b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb7b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb7b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb7bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb7c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb7c2: ret  */ FN_RET(0x005eb730); r_esp += 4; return;
}

void f_005eb7c4(void) /* sub_5EB7C4 */
{
    FN_ENTER(0x005eb7c4);
    /* 005eb7c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005eb7c5: mov edi, ecx */ r_edi = r_ecx;
    /* 005eb7c7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb7cb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb7cf: mov ecx, edi */ r_ecx = r_edi;
    /* 005eb7d1: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eb7d6u); f_005e959c();
    /* 005eb7d6: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 005eb7dc: mov dword ptr [edi], 0xb11220 */ W32((u32)(r_edi), 0xb11220u);
    /* 005eb7e2: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005eb7e5: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 005eb7eb: mov dword ptr [edi + 0x1e8], 0xa */ W32((u32)(r_edi+0x1e8u), 0xau);
    /* 005eb7f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb7f7: mov dword ptr [edi + 0x240], eax */ W32((u32)(r_edi+0x240u), r_eax);
    /* 005eb7fd: mov dword ptr [edi + 0x244], eax */ W32((u32)(r_edi+0x244u), r_eax);
    /* 005eb803: mov eax, edi */ r_eax = r_edi;
    /* 005eb805: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005eb806: ret 8 */ FN_RET(0x005eb7c4); r_esp += 12; return;
}

void f_005eb80c(void) /* sub_5EB80C */
{
    FN_ENTER(0x005eb80c);
    /* 005eb80c: mov dword ptr [0xa8dd50], 0x3f800000 */ W32((u32)(0xa8dd50u), 0x3f800000u);
    /* 005eb816: mov dword ptr [0xa8dd54], 0x41000000 */ W32((u32)(0xa8dd54u), 0x41000000u);
    /* 005eb820: mov dword ptr [0xa8dd58], 0x3fc00000 */ W32((u32)(0xa8dd58u), 0x3fc00000u);
    /* 005eb82a: ret  */ FN_RET(0x005eb80c); r_esp += 4; return;
}

void f_005eb82c(void) /* sub_5EB82C */
{
    FN_ENTER(0x005eb82c);
    /* 005eb82c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb82d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005eb82f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005eb831: call 0x5eb850 */ r_esp -= 4; W32(r_esp, 0x5eb836u); f_005eb850();
    /* 005eb836: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005eb83a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eb83c: jne 0x5eb842 */ if (!fZ) goto L_005eb842;
L_005eb83e:; BB(0x005eb83e);
    /* 005eb83e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb83f: ret 4 */ FN_RET(0x005eb82c); r_esp += 8; return;
L_005eb842:; BB(0x005eb842);
    /* 005eb842: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb843: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eb848u); f_005c2f74();
    /* 005eb848: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb849: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eb84a: ret 4 */ FN_RET(0x005eb82c); r_esp += 8; return;
}

void f_005eb850(void) /* sub_5EB850 */
{
    FN_ENTER(0x005eb850);
    /* 005eb850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb851: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb855: push 0x8dc034 */ { u32 v = 0x8dc034u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb85a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb861: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb868: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb86b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb86e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb871: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb874: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb877: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eb87a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb87d: mov dword ptr [ecx], 0xb11380 */ W32((u32)(r_ecx), 0xb11380u);
    /* 005eb883: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eb88a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eb88fu); f_005e61c8();
    /* 005eb88f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb892: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eb899: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb89c: ret  */ FN_RET(0x005eb850); r_esp += 4; return;
}

void f_005eb8a0(void) /* sub_5EB8A0 */
{
    FN_ENTER(0x005eb8a0);
    /* 005eb8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005eb8a3: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005eb8a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8ab: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8b1: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eb8b6u); f_005dd728();
    /* 005eb8b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8b8: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8bd: add ebp, 0x244 */ {  u32 a = r_ebp; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005eb8c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8c4: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eb8c9u); f_005dd728();
    /* 005eb8c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb8cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb8cd: ret  */ FN_RET(0x005eb8a0); r_esp += 4; return;
}

void f_005eb8d0(void) /* sub_5EB8D0 */
{
    FN_ENTER(0x005eb8d0);
    /* 005eb8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005eb8d3: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005eb8d9: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8de: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8e4: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eb8e9u); f_005dd728();
    /* 005eb8e9: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8ee: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8f3: add ebp, 0x244 */ {  u32 a = r_ebp; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005eb8f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8fa: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5eb8ffu); f_005dd728();
    /* 005eb8ff: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb903: ret  */ FN_RET(0x005eb8d0); r_esp += 4; return;
}

void f_005eb904(void) /* sub_5EB904 */
{
    FN_ENTER(0x005eb904);
    /* 005eb904: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb907: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005eb90c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb90f: je 0x5eb959 */ if (fZ) goto L_005eb959;
L_005eb911:; BB(0x005eb911);
    /* 005eb911: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb914: jne 0x5eb93f */ if (!fZ) goto L_005eb93f;
L_005eb916:; BB(0x005eb916);
    /* 005eb916: fld dword ptr [ecx + 0x240] */ FPUSH(R_F32((u32)(r_ecx+0x240u)));
    /* 005eb91c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb91f: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005eb926: fchs  */ ST(0) = -ST(0);
    /* 005eb928: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005eb92c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005eb934: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb936: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5eb93bu); f_00830b74();
    /* 005eb93b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb93e: ret  */ FN_RET(0x005eb904); r_esp += 4; return;
L_005eb93f:; BB(0x005eb93f);
    /* 005eb93f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb942: jne 0x5eb984 */ if (!fZ) goto L_005eb984;
L_005eb944:; BB(0x005eb944);
    /* 005eb944: push dword ptr [ecx + 0x240] */ { u32 v = R32((u32)(r_ecx+0x240u)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb94a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb94c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb94e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb950: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5eb955u); f_00830b74();
    /* 005eb955: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb958: ret  */ FN_RET(0x005eb904); r_esp += 4; return;
L_005eb959:; BB(0x005eb959);
    /* 005eb959: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005eb95f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005eb967: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005eb96a: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005eb972: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005eb975: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005eb97d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb97e: call 0x5c33c8 */ r_esp -= 4; W32(r_esp, 0x5eb983u); f_005c33c8();
    /* 005eb983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005eb984:; BB(0x005eb984);
    /* 005eb984: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eb987: ret  */ FN_RET(0x005eb904); r_esp += 4; return;
}

void f_005eb988(void) /* sub_5EB988 */
{
    FN_ENTER(0x005eb988);
    /* 005eb988: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb989: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb98b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb98d: push 0x8dc05c */ { u32 v = 0x8dc05cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb992: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eb998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb999: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eb9a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb9a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eb9a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eb9a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eb9ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eb9af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb9b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb9b4: je 0x5eba0b */ if (fZ) goto L_005eba0b;
L_005eb9b6:; BB(0x005eb9b6);
    /* 005eb9b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005eb9bd: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eb9c7u); f_005caba4();
    /* 005eb9c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eb9c8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005eb9cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb9cd: je 0x5eba07 */ if (fZ) goto L_005eba07;
L_005eb9cf:; BB(0x005eb9cf);
    /* 005eb9cf: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005eb9d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb9dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb9e0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb9e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9e4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eb9ea: call 0x5eba1c */ r_esp -= 4; W32(r_esp, 0x5eb9efu); f_005eba1c();
    /* 005eb9ef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb9f2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005eb9f9:; BB(0x005eb9f9);
    /* 005eb9f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb9fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eba03: mov esp, ebp */ r_esp = r_ebp;
    /* 005eba05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eba06: ret  */ FN_RET(0x005eb988); r_esp += 4; return;
L_005eba07:; BB(0x005eba07);
    /* 005eba07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eba09: jmp 0x5eb9f9 */ goto L_005eb9f9;
L_005eba0b:; BB(0x005eba0b);
    /* 005eba0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eba0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eba10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eba17: mov esp, ebp */ r_esp = r_ebp;
    /* 005eba19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eba1a: ret  */ FN_RET(0x005eb988); r_esp += 4; return;
}

void f_005eba1c(void) /* sub_5EBA1C */
{
    FN_ENTER(0x005eba1c);
    /* 005eba1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eba1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005eba1f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eba23: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005eba27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005eba29: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5eba2eu); f_005e959c();
    /* 005eba2e: mov dword ptr [ebp], 0xb11380 */ W32((u32)(r_ebp), 0xb11380u);
    /* 005eba35: mov eax, ebp */ r_eax = r_ebp;
    /* 005eba37: mov dword ptr [ebp + 0x240], 0 */ W32((u32)(r_ebp+0x240u), 0x0u);
    /* 005eba41: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005eba4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eba4c: ret 8 */ FN_RET(0x005eba1c); r_esp += 12; return;
}

void f_005eba50(void) /* sub_5EBA50 */
{
    FN_ENTER(0x005eba50);
    /* 005eba50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eba51: mov ebp, esp */ r_ebp = r_esp;
    /* 005eba53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eba55: push 0x8dc078 */ { u32 v = 0x8dc078u; r_esp -= 4; W32(r_esp, v); }
    /* 005eba5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eba60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eba61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eba68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eba6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eba6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005eba71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005eba74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005eba77: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eba7a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005eba7d: mov eax, ecx */ r_eax = r_ecx;
    /* 005eba7f: mov dword ptr [eax], 0xb114e0 */ W32((u32)(r_eax), 0xb114e0u);
    /* 005eba85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eba8c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eba91u); f_005e61c8();
    /* 005eba91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eba94: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eba96: jne 0x5ebaa8 */ if (!fZ) goto L_005ebaa8;
L_005eba98:; BB(0x005eba98);
    /* 005eba98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eba9b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ebaa2: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebaa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebaa5: ret 4 */ FN_RET(0x005eba50); r_esp += 8; return;
L_005ebaa8:; BB(0x005ebaa8);
    /* 005ebaa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebaab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebaac: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ebab1u); f_005c2f74();
    /* 005ebab1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ebab2: jmp 0x5eba98 */ goto L_005eba98;
}

void f_005ebab4(void) /* sub_5EBAB4 */
{
    FN_ENTER(0x005ebab4);
    /* 005ebab4: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005ebaba: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebabf: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 005ebac5: mov dword ptr [ecx + 0x240], 5 */ W32((u32)(r_ecx+0x240u), 0x5u);
    /* 005ebacf: ret  */ FN_RET(0x005ebab4); r_esp += 4; return;
}

void f_005ebad0(void) /* sub_5EBAD0 */
{
    FN_ENTER(0x005ebad0);
    /* 005ebad0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebad1: mov edi, ecx */ r_edi = r_ecx;
    /* 005ebad3: mov eax, dword ptr [edi + 0x240] */ r_eax = R32((u32)(r_edi+0x240u));
    /* 005ebad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebadb: jne 0x5ebaf1 */ if (!fZ) goto L_005ebaf1;
L_005ebadd:; BB(0x005ebadd);
    /* 005ebadd: mov ecx, edi */ r_ecx = r_edi;
    /* 005ebadf: call 0x5c346c */ r_esp -= 4; W32(r_esp, 0x5ebae4u); f_005c346c();
    /* 005ebae4: push dword ptr [edi + 0x244] */ { u32 v = R32((u32)(r_edi+0x244u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebaea: mov ecx, edi */ r_ecx = r_edi;
    /* 005ebaec: call 0x5c34e8 */ r_esp -= 4; W32(r_esp, 0x5ebaf1u); f_005c34e8();
L_005ebaf1:; BB(0x005ebaf1);
    /* 005ebaf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ebaf2: ret  */ FN_RET(0x005ebad0); r_esp += 4; return;
}

void f_005ebaf4(void) /* sub_5EBAF4 */
{
    FN_ENTER(0x005ebaf4);
    /* 005ebaf4: mov edx, dword ptr [ecx + 0x240] */ r_edx = R32((u32)(r_ecx+0x240u));
    /* 005ebafa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ebafc: jle 0x5ebb0c */ if ((fZ||fS!=fO)) goto L_005ebb0c;
L_005ebafe:; BB(0x005ebafe);
    /* 005ebafe: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ebb05: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ebb08: jne 0x5ebb23 */ if (!fZ) goto L_005ebb23;
L_005ebb0a:; BB(0x005ebb0a);
    /* 005ebb0a: jmp 0x5ebb24 */ goto L_005ebb24;
L_005ebb0c:; BB(0x005ebb0c);
    /* 005ebb0c: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 005ebb12: add eax, 0xb6 */ {  u32 a = r_eax; u32 b = 0xb6u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ebb17: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005ebb1d: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
L_005ebb23:; BB(0x005ebb23);
    /* 005ebb23: ret  */ FN_RET(0x005ebaf4); r_esp += 4; return;
L_005ebb24:; BB(0x005ebb24);
    /* 005ebb24: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ebb27: mov dword ptr [ecx + 0x240], edx */ W32((u32)(r_ecx+0x240u), r_edx);
    /* 005ebb2d: jne 0x5ebb23 */ if (!fZ) goto L_005ebb23;
L_005ebb2f:; BB(0x005ebb2f);
    /* 005ebb2f: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005ebb35: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebb3a: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 005ebb40: ret  */ FN_RET(0x005ebaf4); r_esp += 4; return;
}

void f_005ebb44(void) /* sub_5EBB44 */
{
    FN_ENTER(0x005ebb44);
    /* 005ebb44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb45: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebb47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb49: push 0x8dc0a0 */ { u32 v = 0x8dc0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ebb54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ebb5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebb5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ebb62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ebb65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ebb68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ebb6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebb6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebb70: je 0x5ebbc7 */ if (fZ) goto L_005ebbc7;
L_005ebb72:; BB(0x005ebb72);
    /* 005ebb72: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ebb79: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb7e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ebb83u); f_005caba4();
    /* 005ebb83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ebb84: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ebb87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebb89: je 0x5ebbc3 */ if (fZ) goto L_005ebbc3;
L_005ebb8b:; BB(0x005ebb8b);
    /* 005ebb8b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ebb92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ebb99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebb9c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebb9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebba0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebba6: call 0x5ebbd8 */ r_esp -= 4; W32(r_esp, 0x5ebbabu); f_005ebbd8();
    /* 005ebbab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebbae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ebbb5:; BB(0x005ebbb5);
    /* 005ebbb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebbb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ebbbf: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebbc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebbc2: ret  */ FN_RET(0x005ebb44); r_esp += 4; return;
L_005ebbc3:; BB(0x005ebbc3);
    /* 005ebbc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebbc5: jmp 0x5ebbb5 */ goto L_005ebbb5;
L_005ebbc7:; BB(0x005ebbc7);
    /* 005ebbc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebbc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebbcc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ebbd3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebbd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebbd6: ret  */ FN_RET(0x005ebb44); r_esp += 4; return;
}

void f_005ebbd8(void) /* sub_5EBBD8 */
{
    FN_ENTER(0x005ebbd8);
    /* 005ebbd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebbd9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ebbdb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebbdf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebbe3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ebbe5: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ebbeau); f_005e959c();
    /* 005ebbea: mov edx, dword ptr [ebp + 0x1dc] */ r_edx = R32((u32)(r_ebp+0x1dcu));
    /* 005ebbf0: movzx eax, byte ptr [ebp + 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005ebbf7: mov dword ptr [ebp], 0xb114e0 */ W32((u32)(r_ebp), 0xb114e0u);
    /* 005ebbfe: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ebc01: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebc04: je 0x5ebc2a */ if (fZ) goto L_005ebc2a;
L_005ebc06:; BB(0x005ebc06);
    /* 005ebc06: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
L_005ebc0c:; BB(0x005ebc0c);
    /* 005ebc0c: mov dword ptr [ebp + 0x240], 5 */ W32((u32)(r_ebp+0x240u), 0x5u);
    /* 005ebc16: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebc18: mov dword ptr [ebp + 0x244], edx */ W32((u32)(r_ebp+0x244u), r_edx);
    /* 005ebc1e: mov dword ptr [ebp + 0x248], edx */ W32((u32)(r_ebp+0x248u), r_edx);
    /* 005ebc24: mov eax, ebp */ r_eax = r_ebp;
    /* 005ebc26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebc27: ret 8 */ FN_RET(0x005ebbd8); r_esp += 12; return;
L_005ebc2a:; BB(0x005ebc2a);
    /* 005ebc2a: or edx, 0x1800 */ {  u32 a = r_edx; u32 b = 0x1800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ebc30: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
    /* 005ebc36: jmp 0x5ebc0c */ goto L_005ebc0c;
}

void f_005ebc38(void) /* sub_5EBC38 */
{
    FN_ENTER(0x005ebc38);
    /* 005ebc38: mov dword ptr [0xa8dd5c], 0x3f800000 */ W32((u32)(0xa8dd5cu), 0x3f800000u);
    /* 005ebc42: mov dword ptr [0xa8dd60], 0x41000000 */ W32((u32)(0xa8dd60u), 0x41000000u);
    /* 005ebc4c: mov dword ptr [0xa8dd64], 0x3fc00000 */ W32((u32)(0xa8dd64u), 0x3fc00000u);
    /* 005ebc56: ret  */ FN_RET(0x005ebc38); r_esp += 4; return;
}

void f_005ebc58(void) /* sub_5EBC58 */
{
    FN_ENTER(0x005ebc58);
    /* 005ebc58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ebc5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ebc5d: call 0x5ebc7c */ r_esp -= 4; W32(r_esp, 0x5ebc62u); f_005ebc7c();
    /* 005ebc62: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ebc66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebc68: jne 0x5ebc6e */ if (!fZ) goto L_005ebc6e;
L_005ebc6a:; BB(0x005ebc6a);
    /* 005ebc6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ebc6b: ret 4 */ FN_RET(0x005ebc58); r_esp += 8; return;
L_005ebc6e:; BB(0x005ebc6e);
    /* 005ebc6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc6f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ebc74u); f_005c2f74();
    /* 005ebc74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ebc75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ebc76: ret 4 */ FN_RET(0x005ebc58); r_esp += 8; return;
}

void f_005ebc7c(void) /* sub_5EBC7C */
{
    FN_ENTER(0x005ebc7c);
    /* 005ebc7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc7d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebc7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc81: push 0x8dc0bc */ { u32 v = 0x8dc0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ebc8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ebc94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebc97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ebc9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ebc9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ebca0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ebca3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ebca6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebca9: mov dword ptr [ecx], 0xb11660 */ W32((u32)(r_ecx), 0xb11660u);
    /* 005ebcaf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ebcb6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ebcbbu); f_005e61c8();
    /* 005ebcbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebcbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ebcc5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebcc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebcc8: ret  */ FN_RET(0x005ebc7c); r_esp += 4; return;
}

void f_005ebccc(void) /* sub_5EBCCC */
{
    FN_ENTER(0x005ebccc);
    /* 005ebccc: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 005ebcd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebcd4: je 0x5ebcef */ if (fZ) goto L_005ebcef;
L_005ebcd6:; BB(0x005ebcd6);
    /* 005ebcd6: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005ebcd9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ebcdb: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 005ebce1: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebce4: je 0x5ebcf0 */ if (fZ) goto L_005ebcf0;
L_005ebce6:; BB(0x005ebce6);
    /* 005ebce6: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebce8: jne 0x5ebcef */ if (!fZ) goto L_005ebcef;
L_005ebcea:; BB(0x005ebcea);
    /* 005ebcea: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebced: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_005ebcef:; BB(0x005ebcef);
    /* 005ebcef: ret  */ FN_RET(0x005ebccc); r_esp += 4; return;
L_005ebcf0:; BB(0x005ebcf0);
    /* 005ebcf0: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebcf2: je 0x5ebcef */ if (fZ) goto L_005ebcef;
L_005ebcf4:; BB(0x005ebcf4);
    /* 005ebcf4: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebcf7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ebcf9: ret  */ FN_RET(0x005ebccc); r_esp += 4; return;
}

void f_005ebcfc(void) /* sub_5EBCFC */
{
    FN_ENTER(0x005ebcfc);
    /* 005ebcfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebcfd: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebcff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd01: push 0x8dc0fe */ { u32 v = 0x8dc0feu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ebd0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ebd14: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebd17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ebd1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ebd1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ebd20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ebd23: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ebd26: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ebd2bu); f_005e90b0();
    /* 005ebd2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd2d: je 0x5ebda4 */ if (fZ) goto L_005ebda4;
L_005ebd2f:; BB(0x005ebd2f);
    /* 005ebd2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebd32: mov dword ptr [eax + 0x238], 0x5ebf68 */ W32((u32)(r_eax+0x238u), 0x5ebf68u);
    /* 005ebd3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd3e: mov dword ptr [eax + 0x240], 0 */ W32((u32)(r_eax+0x240u), 0x0u);
    /* 005ebd48: je 0x5ebd8e */ if (fZ) goto L_005ebd8e;
L_005ebd4a:; BB(0x005ebd4a);
    /* 005ebd4a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005ebd51: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd53: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ebd58u); f_005caba4();
    /* 005ebd58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ebd59: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ebd5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd5e: je 0x5ebd87 */ if (fZ) goto L_005ebd87;
L_005ebd60:; BB(0x005ebd60);
    /* 005ebd60: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005ebd67: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ebd6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebd71: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd73: push 0x5f0438 */ { u32 v = 0x5f0438u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd79: mov ecx, eax */ r_ecx = r_eax;
    /* 005ebd7b: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5ebd80u); f_005e5b88();
    /* 005ebd80: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005ebd87:; BB(0x005ebd87);
    /* 005ebd87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005ebd8e:; BB(0x005ebd8e);
    /* 005ebd8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebd91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd95: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd9a: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5ebd9fu); f_005e6a88();
    /* 005ebd9f: jmp 0x5ebe26 */ goto L_005ebe26;
L_005ebda4:; BB(0x005ebda4);
    /* 005ebda4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebda7: mov dword ptr [eax + 0x238], 0x5ebf1c */ W32((u32)(r_eax+0x238u), 0x5ebf1cu);
    /* 005ebdb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebdb3: mov dword ptr [eax + 0x240], 0 */ W32((u32)(r_eax+0x240u), 0x0u);
    /* 005ebdbd: je 0x5ebe03 */ if (fZ) goto L_005ebe03;
L_005ebdbf:; BB(0x005ebdbf);
    /* 005ebdbf: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005ebdc6: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebdc8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ebdcdu); f_005caba4();
    /* 005ebdcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ebdce: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ebdd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebdd3: je 0x5ebdfc */ if (fZ) goto L_005ebdfc;
L_005ebdd5:; BB(0x005ebdd5);
    /* 005ebdd5: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005ebddc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ebde3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebde6: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebde8: push 0x5f0438 */ { u32 v = 0x5f0438u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebdee: mov ecx, eax */ r_ecx = r_eax;
    /* 005ebdf0: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5ebdf5u); f_005e5b88();
    /* 005ebdf5: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ebdfc:; BB(0x005ebdfc);
    /* 005ebdfc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005ebe03:; BB(0x005ebe03);
    /* 005ebe03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebe06: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005ebe09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe0c: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ebe11u); f_005e83c8();
    /* 005ebe11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebe14: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 005ebe17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe19: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005ebe1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ebe1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe20: call dword ptr [ebx + 0xc8] */ { u32 t = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5ebe26u); call_ind(t); }
L_005ebe26:; BB(0x005ebe26);
    /* 005ebe26: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebe29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebe2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ebe33: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebe35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebe36: ret  */ FN_RET(0x005ebcfc); r_esp += 4; return;
}

void f_005ebe38(void) /* sub_5EBE38 */
{
    FN_ENTER(0x005ebe38);
    /* 005ebe38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe39: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebe3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe3d: push 0x8dc124 */ { u32 v = 0x8dc124u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ebe48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ebe50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebe53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ebe56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ebe59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ebe5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ebe5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebe62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebe64: je 0x5ebebb */ if (fZ) goto L_005ebebb;
L_005ebe66:; BB(0x005ebe66);
    /* 005ebe66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ebe6d: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe72: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ebe77u); f_005caba4();
    /* 005ebe77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ebe78: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ebe7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebe7d: je 0x5ebeb7 */ if (fZ) goto L_005ebeb7;
L_005ebe7f:; BB(0x005ebe7f);
    /* 005ebe7f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ebe86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ebe8d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebe90: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebe93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe94: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebe9a: call 0x5ebecc */ r_esp -= 4; W32(r_esp, 0x5ebe9fu); f_005ebecc();
    /* 005ebe9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebea2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ebea9:; BB(0x005ebea9);
    /* 005ebea9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebeac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ebeb3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebeb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebeb6: ret  */ FN_RET(0x005ebe38); r_esp += 4; return;
L_005ebeb7:; BB(0x005ebeb7);
    /* 005ebeb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebeb9: jmp 0x5ebea9 */ goto L_005ebea9;
L_005ebebb:; BB(0x005ebebb);
    /* 005ebebb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebebd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebec0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ebec7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebec9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebeca: ret  */ FN_RET(0x005ebe38); r_esp += 4; return;
}

void f_005ebecc(void) /* sub_5EBECC */
{
    FN_ENTER(0x005ebecc);
    /* 005ebecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebecd: mov edi, ecx */ r_edi = r_ecx;
    /* 005ebecf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebed3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebed7: mov ecx, edi */ r_ecx = r_edi;
    /* 005ebed9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ebedeu); f_005e959c();
    /* 005ebede: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
    /* 005ebee4: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005ebeea: mov dword ptr [edi], 0xb11660 */ W32((u32)(r_edi), 0xb11660u);
    /* 005ebef0: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ebef3: mov dword ptr [edi + 0x208], 0x40e00000 */ W32((u32)(r_edi+0x208u), 0x40e00000u);
    /* 005ebefd: mov dword ptr [edi + 0x190], edx */ W32((u32)(r_edi+0x190u), r_edx);
    /* 005ebf03: or eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebf06: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005ebf0c: mov dword ptr [edi + 0x240], 1 */ W32((u32)(r_edi+0x240u), 0x1u);
    /* 005ebf16: mov eax, edi */ r_eax = r_edi;
    /* 005ebf18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ebf19: ret 8 */ FN_RET(0x005ebecc); r_esp += 12; return;
}

void f_005ebf1c(void) /* sub_5EBF1C */
{
    FN_ENTER(0x005ebf1c);
    /* 005ebf1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf1d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005ebf21: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebf25: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebf29: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ebf2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf2e: call 0x5e4350 */ r_esp -= 4; W32(r_esp, 0x5ebf33u); f_005e4350();
    /* 005ebf33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ebf36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebf38: je 0x5ebf63 */ if (fZ) goto L_005ebf63;
L_005ebf3a:; BB(0x005ebf3a);
    /* 005ebf3a: mov edi, dword ptr [edi + 0x1ac] */ r_edi = R32((u32)(r_edi+0x1acu));
    /* 005ebf40: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebf42: je 0x5ebf63 */ if (fZ) goto L_005ebf63;
L_005ebf44:; BB(0x005ebf44);
    /* 005ebf44: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005ebf46: mov edx, ecx */ r_edx = r_ecx;
    /* 005ebf48: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ebf4b: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ebf4e: jne 0x5ebf63 */ if (!fZ) goto L_005ebf63;
L_005ebf50:; BB(0x005ebf50);
    /* 005ebf50: mov dword ptr [edi + 0x14], 0xffffc000 */ W32((u32)(r_edi+0x14u), 0xffffc000u);
    /* 005ebf57: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebf5a: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 005ebf5c: mov dword ptr [edi + 0x1c], 0x8000 */ W32((u32)(r_edi+0x1cu), 0x8000u);
L_005ebf63:; BB(0x005ebf63);
    /* 005ebf63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ebf64: ret  */ FN_RET(0x005ebf1c); r_esp += 4; return;
}

void f_005ebf68(void) /* sub_5EBF68 */
{
    FN_ENTER(0x005ebf68);
    /* 005ebf68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf6c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005ebf70: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005ebf74: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005ebf78: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005ebf7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf80: call 0x5e4350 */ r_esp -= 4; W32(r_esp, 0x5ebf85u); f_005e4350();
    /* 005ebf85: mov ebp, eax */ r_ebp = r_eax;
    /* 005ebf87: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 005ebf8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf8f: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5ebf94u); f_005e407c();
    /* 005ebf94: mov esi, eax */ r_esi = r_eax;
    /* 005ebf96: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ebf99: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebf9b: je 0x5ebfe0 */ if (fZ) goto L_005ebfe0;
L_005ebf9d:; BB(0x005ebf9d);
    /* 005ebf9d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ebf9f: je 0x5ebfe0 */ if (fZ) goto L_005ebfe0;
L_005ebfa1:; BB(0x005ebfa1);
    /* 005ebfa1: mov edi, dword ptr [ebx + 0x1ac] */ r_edi = R32((u32)(r_ebx+0x1acu));
    /* 005ebfa7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebfa9: je 0x5ebfca */ if (fZ) goto L_005ebfca;
L_005ebfab:; BB(0x005ebfab);
    /* 005ebfab: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 005ebfad: mov edx, ebx */ r_edx = r_ebx;
    /* 005ebfaf: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ebfb2: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebfb5: jne 0x5ebfca */ if (!fZ) goto L_005ebfca;
L_005ebfb7:; BB(0x005ebfb7);
    /* 005ebfb7: mov dword ptr [edi + 0x14], 0xffffc000 */ W32((u32)(r_edi+0x14u), 0xffffc000u);
    /* 005ebfbe: and ebx, 0xfffffffd */ {  u32 a = r_ebx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005ebfc1: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 005ebfc3: mov dword ptr [edi + 0x1c], 0x8000 */ W32((u32)(r_edi+0x1cu), 0x8000u);
L_005ebfca:; BB(0x005ebfca);
    /* 005ebfca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebfcc: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebfd1: mov ecx, esi */ r_ecx = r_esi;
    /* 005ebfd3: call 0x5e4624 */ r_esp -= 4; W32(r_esp, 0x5ebfd8u); f_005e4624();
    /* 005ebfd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebfd9: mov ecx, esi */ r_ecx = r_esi;
    /* 005ebfdb: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5ebfe0u); f_008172d4();
L_005ebfe0:; BB(0x005ebfe0);
    /* 005ebfe0: mov eax, ebp */ r_eax = r_ebp;
    /* 005ebfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ebfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ebfe5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ebfe6: ret  */ FN_RET(0x005ebf68); r_esp += 4; return;
}

void f_005ebfe8(void) /* sub_5EBFE8 */
{
    FN_ENTER(0x005ebfe8);
    /* 005ebfe8: mov dword ptr [0xa8dd68], 0x3f800000 */ W32((u32)(0xa8dd68u), 0x3f800000u);
    /* 005ebff2: mov dword ptr [0xa8dd6c], 0x41000000 */ W32((u32)(0xa8dd6cu), 0x41000000u);
    /* 005ebffc: mov dword ptr [0xa8dd70], 0x3fc00000 */ W32((u32)(0xa8dd70u), 0x3fc00000u);
    /* 005ec006: ret  */ FN_RET(0x005ebfe8); r_esp += 4; return;
}

