#include "protos.h"

void f_005ef020(void) /* sub_5EF020 */
{
    FN_ENTER(0x005ef020);
    /* 005ef020: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005ef027: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef02a: jne 0x5ef067 */ if (!fZ) goto L_005ef067;
L_005ef02c:; BB(0x005ef02c);
    /* 005ef02c: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ef033: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef036: jne 0x5ef067 */ if (!fZ) goto L_005ef067;
L_005ef038:; BB(0x005ef038);
    /* 005ef038: mov edx, dword ptr [0xa8d84c] */ r_edx = R32((u32)(0xa8d84cu));
    /* 005ef03e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef041: jl 0x5ef067 */ if ((fS!=fO)) goto L_005ef067;
L_005ef043:; BB(0x005ef043);
    /* 005ef043: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef046: jg 0x5ef067 */ if ((!fZ&&fS==fO)) goto L_005ef067;
L_005ef048:; BB(0x005ef048);
    /* 005ef048: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005ef04e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef050: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef052: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef054: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef056: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef058: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef05a: add edx, dword ptr [eax + 0xebc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xebcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef060: mov ecx, edx */ r_ecx = r_edx;
    /* 005ef062: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5ef067u); f_00831650();
L_005ef067:; BB(0x005ef067);
    /* 005ef067: ret  */ FN_RET(0x005ef020); r_esp += 4; return;
}

void f_005ef068(void) /* sub_5EF068 */
{
    FN_ENTER(0x005ef068);
    /* 005ef068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ef069: mov edi, ecx */ r_edi = r_ecx;
    /* 005ef06b: mov ecx, edi */ r_ecx = r_edi;
    /* 005ef06d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef06f: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5ef074u); f_005e6334();
    /* 005ef074: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef076: mov ecx, edi */ r_ecx = r_edi;
    /* 005ef078: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5ef07du); f_005e6254();
    /* 005ef07d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef07f: mov ecx, edi */ r_ecx = r_edi;
    /* 005ef081: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5ef086u); f_005e6254();
    /* 005ef086: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ef087: ret  */ FN_RET(0x005ef068); r_esp += 4; return;
}

void f_005ef088(void) /* sub_5EF088 */
{
    FN_ENTER(0x005ef088);
    /* 005ef088: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ef089: mov edi, ecx */ r_edi = r_ecx;
    /* 005ef08b: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005ef092: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef095: jne 0x5ef0c4 */ if (!fZ) goto L_005ef0c4;
L_005ef097:; BB(0x005ef097);
    /* 005ef097: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005ef09e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef0a1: jne 0x5ef0c4 */ if (!fZ) goto L_005ef0c4;
L_005ef0a3:; BB(0x005ef0a3);
    /* 005ef0a3: mov ecx, edi */ r_ecx = r_edi;
    /* 005ef0a5: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ef0aau); f_005e7f6c();
    /* 005ef0aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef0ac: jne 0x5ef0c4 */ if (!fZ) goto L_005ef0c4;
L_005ef0ae:; BB(0x005ef0ae);
    /* 005ef0ae: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0b3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0b6: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef0bc: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x5ef0c1u); f_005cc64c();
    /* 005ef0c1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ef0c4:; BB(0x005ef0c4);
    /* 005ef0c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ef0c5: ret  */ FN_RET(0x005ef088); r_esp += 4; return;
}

void f_005ef0c8(void) /* sub_5EF0C8 */
{
    FN_ENTER(0x005ef0c8);
    /* 005ef0c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef0cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0cd: push 0x8dc7f8 */ { u32 v = 0x8dc7f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ef0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ef0e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef0e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ef0e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ef0e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ef0ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ef0ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef0f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef0f4: je 0x5ef14b */ if (fZ) goto L_005ef14b;
L_005ef0f6:; BB(0x005ef0f6);
    /* 005ef0f6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ef0fd: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef102: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ef107u); f_005caba4();
    /* 005ef107: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ef108: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ef10b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef10d: je 0x5ef147 */ if (fZ) goto L_005ef147;
L_005ef10f:; BB(0x005ef10f);
    /* 005ef10f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ef116: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ef11d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef120: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef124: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef12a: call 0x5ef15c */ r_esp -= 4; W32(r_esp, 0x5ef12fu); f_005ef15c();
    /* 005ef12f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef132: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ef139:; BB(0x005ef139);
    /* 005ef139: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef13c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef143: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef145: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef146: ret  */ FN_RET(0x005ef0c8); r_esp += 4; return;
L_005ef147:; BB(0x005ef147);
    /* 005ef147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef149: jmp 0x5ef139 */ goto L_005ef139;
L_005ef14b:; BB(0x005ef14b);
    /* 005ef14b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef14d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef150: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef157: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef15a: ret  */ FN_RET(0x005ef0c8); r_esp += 4; return;
}

void f_005ef15c(void) /* sub_5EF15C */
{
    FN_ENTER(0x005ef15c);
    /* 005ef15c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ef15d: mov edi, ecx */ r_edi = r_ecx;
    /* 005ef15f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef163: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef167: mov ecx, edi */ r_ecx = r_edi;
    /* 005ef169: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ef16eu); f_005e959c();
    /* 005ef16e: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005ef174: movzx edx, byte ptr [edi + 0xf4] */ r_edx = (u32)R8((u32)(r_edi+0xf4u));
    /* 005ef17b: mov dword ptr [edi], 0xb137e0 */ W32((u32)(r_edi), 0xb137e0u);
    /* 005ef181: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ef184: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005ef18a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef18d: jne 0x5ef199 */ if (!fZ) goto L_005ef199;
L_005ef18f:; BB(0x005ef18f);
    /* 005ef18f: mov dword ptr [edi + 0x1a0], 0x3ecccccd */ W32((u32)(r_edi+0x1a0u), 0x3ecccccdu);
L_005ef199:; BB(0x005ef199);
    /* 005ef199: mov eax, edi */ r_eax = r_edi;
    /* 005ef19b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ef19c: ret 8 */ FN_RET(0x005ef15c); r_esp += 12; return;
}

void f_005ef1a0(void) /* sub_5EF1A0 */
{
    FN_ENTER(0x005ef1a0);
    /* 005ef1a0: mov dword ptr [0xa8de04], 0x3f800000 */ W32((u32)(0xa8de04u), 0x3f800000u);
    /* 005ef1aa: mov dword ptr [0xa8de08], 0x41000000 */ W32((u32)(0xa8de08u), 0x41000000u);
    /* 005ef1b4: mov dword ptr [0xa8de0c], 0x3fc00000 */ W32((u32)(0xa8de0cu), 0x3fc00000u);
    /* 005ef1be: ret  */ FN_RET(0x005ef1a0); r_esp += 4; return;
}

void f_005ef1c0(void) /* sub_5EF1C0 */
{
    FN_ENTER(0x005ef1c0);
    /* 005ef1c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ef1c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ef1c5: call 0x5ef1e4 */ r_esp -= 4; W32(r_esp, 0x5ef1cau); f_005ef1e4();
    /* 005ef1ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ef1ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef1d0: jne 0x5ef1d6 */ if (!fZ) goto L_005ef1d6;
L_005ef1d2:; BB(0x005ef1d2);
    /* 005ef1d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ef1d3: ret 4 */ FN_RET(0x005ef1c0); r_esp += 8; return;
L_005ef1d6:; BB(0x005ef1d6);
    /* 005ef1d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ef1dcu); f_005c2f74();
    /* 005ef1dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ef1dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ef1de: ret 4 */ FN_RET(0x005ef1c0); r_esp += 8; return;
}

void f_005ef1e4(void) /* sub_5EF1E4 */
{
    FN_ENTER(0x005ef1e4);
    /* 005ef1e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef1e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1e9: push 0x8dc814 */ { u32 v = 0x8dc814u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ef1f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ef1fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef1ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ef202: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ef205: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ef208: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ef20b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ef20e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef211: mov dword ptr [ecx], 0xb13940 */ W32((u32)(r_ecx), 0xb13940u);
    /* 005ef217: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ef21e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ef223u); f_005e61c8();
    /* 005ef223: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef226: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef22d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef22f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef230: ret  */ FN_RET(0x005ef1e4); r_esp += 4; return;
}

void f_005ef234(void) /* sub_5EF234 */
{
    FN_ENTER(0x005ef234);
    /* 005ef234: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ef239: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef23b: jne 0x5ef248 */ if (!fZ) goto L_005ef248;
L_005ef23d:; BB(0x005ef23d);
    /* 005ef23d: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef243: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5ef248u); f_00831290();
L_005ef248:; BB(0x005ef248);
    /* 005ef248: ret  */ FN_RET(0x005ef234); r_esp += 4; return;
}

void f_005ef24c(void) /* sub_5EF24C */
{
    FN_ENTER(0x005ef24c);
    /* 005ef24c: fld dword ptr [0x92d91c] */ FPUSH(R_F32((u32)(0x92d91cu)));
    /* 005ef252: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 005ef258: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ef25a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ef25c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ef25d: jae 0x5ef285 */ if (!fC) goto L_005ef285;
L_005ef25f:; BB(0x005ef25f);
    /* 005ef25f: fld dword ptr [0x92d918] */ FPUSH(R_F32((u32)(0x92d918u)));
    /* 005ef265: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005ef267: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ef269: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005ef26b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ef26d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ef26e: jae 0x5ef27e */ if (!fC) goto L_005ef27e;
L_005ef270:; BB(0x005ef270);
    /* 005ef270: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ef272: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005ef277: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005ef27d: ret  */ FN_RET(0x005ef24c); r_esp += 4; return;
L_005ef27e:; BB(0x005ef27e);
    /* 005ef27e: fstp dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0)); FPOP();
    /* 005ef284: ret  */ FN_RET(0x005ef24c); r_esp += 4; return;
L_005ef285:; BB(0x005ef285);
    /* 005ef285: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005ef287: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ef289: ret  */ FN_RET(0x005ef24c); r_esp += 4; return;
}

void f_005ef28c(void) /* sub_5EF28C */
{
    FN_ENTER(0x005ef28c);
    /* 005ef28c: fld dword ptr [0x92d914] */ FPUSH(R_F32((u32)(0x92d914u)));
    /* 005ef292: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 005ef298: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ef29a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ef29c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ef29d: jbe 0x5ef2c7 */ if ((fC||fZ)) goto L_005ef2c7;
L_005ef29f:; BB(0x005ef29f);
    /* 005ef29f: fld dword ptr [0x92d918] */ FPUSH(R_F32((u32)(0x92d918u)));
    /* 005ef2a5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005ef2a7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ef2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ef2ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ef2ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ef2af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ef2b0: jae 0x5ef2c0 */ if (!fC) goto L_005ef2c0;
L_005ef2b2:; BB(0x005ef2b2);
    /* 005ef2b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ef2b4: mov eax, 0x3e99999a */ r_eax = 0x3e99999au;
    /* 005ef2b9: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005ef2bf: ret  */ FN_RET(0x005ef28c); r_esp += 4; return;
L_005ef2c0:; BB(0x005ef2c0);
    /* 005ef2c0: fstp dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0)); FPOP();
    /* 005ef2c6: ret  */ FN_RET(0x005ef28c); r_esp += 4; return;
L_005ef2c7:; BB(0x005ef2c7);
    /* 005ef2c7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005ef2c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ef2cb: ret  */ FN_RET(0x005ef28c); r_esp += 4; return;
}

void f_005ef2cc(void) /* sub_5EF2CC */
{
    FN_ENTER(0x005ef2cc);
    /* 005ef2cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef2cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef2cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef2d1: push 0x8dc83c */ { u32 v = 0x8dc83cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef2d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ef2dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef2dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ef2e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef2e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ef2ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ef2ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ef2f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ef2f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef2f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef2f8: je 0x5ef34f */ if (fZ) goto L_005ef34f;
L_005ef2fa:; BB(0x005ef2fa);
    /* 005ef2fa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ef301: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef306: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ef30bu); f_005caba4();
    /* 005ef30b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ef30c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ef30f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef311: je 0x5ef34b */ if (fZ) goto L_005ef34b;
L_005ef313:; BB(0x005ef313);
    /* 005ef313: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ef31a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ef321: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef324: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef328: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef32e: call 0x5ef360 */ r_esp -= 4; W32(r_esp, 0x5ef333u); f_005ef360();
    /* 005ef333: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef336: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ef33d:; BB(0x005ef33d);
    /* 005ef33d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef340: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef347: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef34a: ret  */ FN_RET(0x005ef2cc); r_esp += 4; return;
L_005ef34b:; BB(0x005ef34b);
    /* 005ef34b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef34d: jmp 0x5ef33d */ goto L_005ef33d;
L_005ef34f:; BB(0x005ef34f);
    /* 005ef34f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef351: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef354: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef35b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef35d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef35e: ret  */ FN_RET(0x005ef2cc); r_esp += 4; return;
}

void f_005ef360(void) /* sub_5EF360 */
{
    FN_ENTER(0x005ef360);
    /* 005ef360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef361: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ef363: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef367: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef36b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef36d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ef372u); f_005e959c();
    /* 005ef372: mov dword ptr [ebp], 0xb13940 */ W32((u32)(r_ebp), 0xb13940u);
    /* 005ef379: mov eax, ebp */ r_eax = r_ebp;
    /* 005ef37b: mov byte ptr [ebp + 0x1c0], 3 */ W8((u32)(r_ebp+0x1c0u), 0x3u);
    /* 005ef382: mov byte ptr [ebp + 0x1c4], 2 */ W8((u32)(r_ebp+0x1c4u), 0x2u);
    /* 005ef389: mov byte ptr [ebp + 0x1c1], 4 */ W8((u32)(r_ebp+0x1c1u), 0x4u);
    /* 005ef390: mov byte ptr [ebp + 0x1c5], 5 */ W8((u32)(r_ebp+0x1c5u), 0x5u);
    /* 005ef397: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005ef3a1: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005ef3ab: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005ef3b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef3b6: ret 8 */ FN_RET(0x005ef360); r_esp += 12; return;
}

void f_005ef3bc(void) /* sub_5EF3BC */
{
    FN_ENTER(0x005ef3bc);
    /* 005ef3bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ef3bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ef3c1: call 0x5ef3e0 */ r_esp -= 4; W32(r_esp, 0x5ef3c6u); f_005ef3e0();
    /* 005ef3c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ef3ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef3cc: jne 0x5ef3d2 */ if (!fZ) goto L_005ef3d2;
L_005ef3ce:; BB(0x005ef3ce);
    /* 005ef3ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ef3cf: ret 4 */ FN_RET(0x005ef3bc); r_esp += 8; return;
L_005ef3d2:; BB(0x005ef3d2);
    /* 005ef3d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ef3d8u); f_005c2f74();
    /* 005ef3d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ef3d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ef3da: ret 4 */ FN_RET(0x005ef3bc); r_esp += 8; return;
}

void f_005ef3e0(void) /* sub_5EF3E0 */
{
    FN_ENTER(0x005ef3e0);
    /* 005ef3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3e5: push 0x8dc858 */ { u32 v = 0x8dc858u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ef3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ef3f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef3fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ef3fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ef401: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ef404: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ef407: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ef40a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef40d: mov dword ptr [ecx], 0xb13aa0 */ W32((u32)(r_ecx), 0xb13aa0u);
    /* 005ef413: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ef41a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ef41fu); f_005e61c8();
    /* 005ef41f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef422: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef429: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef42b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef42c: ret  */ FN_RET(0x005ef3e0); r_esp += 4; return;
}

void f_005ef430(void) /* sub_5EF430 */
{
    FN_ENTER(0x005ef430);
    /* 005ef430: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005ef435: mov word ptr [ecx + 0x244], ax */ W16((u32)(r_ecx+0x244u), (u16)r_eax);
    /* 005ef43c: ret  */ FN_RET(0x005ef430); r_esp += 4; return;
}

void f_005ef440(void) /* sub_5EF440 */
{
    FN_ENTER(0x005ef440);
    /* 005ef440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef441: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef444: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ef446: movsx edx, word ptr [ebp + 0x246] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x246u));
    /* 005ef44d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef450: je 0x5ef4fd */ if (fZ) goto L_005ef4fd;
L_005ef456:; BB(0x005ef456);
    /* 005ef456: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef459: je 0x5ef4d4 */ if (fZ) goto L_005ef4d4;
L_005ef45b:; BB(0x005ef45b);
    /* 005ef45b: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005ef461: movsx eax, word ptr [ecx + 0x336] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 005ef468: movzx edx, word ptr [ebp + 0x244] */ r_edx = (u32)R16((u32)(r_ebp+0x244u));
    /* 005ef46f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ef471: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005ef474: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ef476: jl 0x5ef4c8 */ if ((fS!=fO)) goto L_005ef4c8;
L_005ef478:; BB(0x005ef478);
    /* 005ef478: jle 0x5ef4c3 */ if ((fZ||fS!=fO)) goto L_005ef4c3;
L_005ef47a:; BB(0x005ef47a);
    /* 005ef47a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005ef47d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005ef480: fmul dword ptr [0x92d950] */ ST(0) = ST(0) * R_F32((u32)(0x92d950u));
    /* 005ef486: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005ef48a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005ef48f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ef494: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005ef498: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005ef49c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ef4a0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005ef4a4: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 005ef4a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef4aa: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5ef4afu); f_00777368();
    /* 005ef4af: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005ef4b5: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005ef4bc: mov word ptr [ebp + 0x244], dx */ W16((u32)(r_ebp+0x244u), (u16)r_edx);
L_005ef4c3:; BB(0x005ef4c3);
    /* 005ef4c3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ef4c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef4c7: ret  */ FN_RET(0x005ef440); r_esp += 4; return;
L_005ef4c8:; BB(0x005ef4c8);
    /* 005ef4c8: mov word ptr [ebp + 0x244], ax */ W16((u32)(r_ebp+0x244u), (u16)r_eax);
    /* 005ef4cf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ef4d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef4d3: ret  */ FN_RET(0x005ef440); r_esp += 4; return;
L_005ef4d4:; BB(0x005ef4d4);
    /* 005ef4d4: mov eax, dword ptr [ebp + 0x240] */ r_eax = R32((u32)(r_ebp+0x240u));
    /* 005ef4da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef4dc: jne 0x5ef4ef */ if (!fZ) goto L_005ef4ef;
L_005ef4de:; BB(0x005ef4de);
    /* 005ef4de: mov eax, 3 */ r_eax = 0x3u;
    /* 005ef4e3: mov word ptr [ebp + 0x246], ax */ W16((u32)(r_ebp+0x246u), (u16)r_eax);
    /* 005ef4ea: jmp 0x5ef45b */ goto L_005ef45b;
L_005ef4ef:; BB(0x005ef4ef);
    /* 005ef4ef: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef4f2: mov dword ptr [ebp + 0x240], eax */ W32((u32)(r_ebp+0x240u), r_eax);
    /* 005ef4f8: jmp 0x5ef45b */ goto L_005ef45b;
L_005ef4fd:; BB(0x005ef4fd);
    /* 005ef4fd: mov eax, dword ptr [ebp + 0x240] */ r_eax = R32((u32)(r_ebp+0x240u));
    /* 005ef503: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef506: je 0x5ef516 */ if (fZ) goto L_005ef516;
L_005ef508:; BB(0x005ef508);
    /* 005ef508: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef50b: mov dword ptr [ebp + 0x240], eax */ W32((u32)(r_ebp+0x240u), r_eax);
    /* 005ef511: jmp 0x5ef456 */ goto L_005ef456;
L_005ef516:; BB(0x005ef516);
    /* 005ef516: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ef518: mov word ptr [ebp + 0x246], ax */ W16((u32)(r_ebp+0x246u), (u16)r_eax);
    /* 005ef51f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ef521: jmp 0x5ef456 */ goto L_005ef456;
}

void f_005ef528(void) /* sub_5EF528 */
{
    FN_ENTER(0x005ef528);
    /* 005ef528: movsx eax, word ptr [ecx + 0x246] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x246u));
    /* 005ef52f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef532: je 0x5ef539 */ if (fZ) goto L_005ef539;
L_005ef534:; BB(0x005ef534);
    /* 005ef534: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef537: jne 0x5ef545 */ if (!fZ) goto L_005ef545;
L_005ef539:; BB(0x005ef539);
    /* 005ef539: mov eax, 1 */ r_eax = 0x1u;
    /* 005ef53e: mov word ptr [ecx + 0x246], ax */ W16((u32)(r_ecx+0x246u), (u16)r_eax);
L_005ef545:; BB(0x005ef545);
    /* 005ef545: ret  */ FN_RET(0x005ef528); r_esp += 4; return;
}

void f_005ef548(void) /* sub_5EF548 */
{
    FN_ENTER(0x005ef548);
    /* 005ef548: movsx eax, word ptr [ecx + 0x246] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x246u));
    /* 005ef54f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef552: je 0x5ef558 */ if (fZ) goto L_005ef558;
L_005ef554:; BB(0x005ef554);
    /* 005ef554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef556: jne 0x5ef564 */ if (!fZ) goto L_005ef564;
L_005ef558:; BB(0x005ef558);
    /* 005ef558: mov eax, 2 */ r_eax = 0x2u;
    /* 005ef55d: mov word ptr [ecx + 0x246], ax */ W16((u32)(r_ecx+0x246u), (u16)r_eax);
L_005ef564:; BB(0x005ef564);
    /* 005ef564: ret  */ FN_RET(0x005ef548); r_esp += 4; return;
}

void f_005ef568(void) /* sub_5EF568 */
{
    FN_ENTER(0x005ef568);
    /* 005ef568: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ef569: mov esi, ecx */ r_esi = r_ecx;
    /* 005ef56b: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ef570: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef573: je 0x5ef5a6 */ if (fZ) goto L_005ef5a6;
L_005ef575:; BB(0x005ef575);
    /* 005ef575: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef578: jne 0x5ef59a */ if (!fZ) goto L_005ef59a;
L_005ef57a:; BB(0x005ef57a);
    /* 005ef57a: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ef57fu); f_005c34a0();
    /* 005ef57f: mov eax, dword ptr [esi + 0x240] */ r_eax = R32((u32)(r_esi+0x240u));
    /* 005ef585: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef587: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef589: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005ef58c: lea ecx, [eax + edx + 0xa8de20] */ r_ecx = (u32)(r_eax+r_edx+0xa8de20u);
    /* 005ef593: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5ef598u); f_00831290();
    /* 005ef598: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ef599: ret  */ FN_RET(0x005ef568); r_esp += 4; return;
L_005ef59a:; BB(0x005ef59a);
    /* 005ef59a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ef59d: jne 0x5ef5c4 */ if (!fZ) goto L_005ef5c4;
L_005ef59f:; BB(0x005ef59f);
    /* 005ef59f: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ef5a4u); f_005c34a0();
    /* 005ef5a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ef5a5: ret  */ FN_RET(0x005ef568); r_esp += 4; return;
L_005ef5a6:; BB(0x005ef5a6);
    /* 005ef5a6: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5ef5abu); f_005c34a0();
    /* 005ef5ab: mov eax, dword ptr [esi + 0x240] */ r_eax = R32((u32)(r_esi+0x240u));
    /* 005ef5b1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef5b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef5b5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005ef5b8: lea ecx, [eax + edx + 0xa8de80] */ r_ecx = (u32)(r_eax+r_edx+0xa8de80u);
    /* 005ef5bf: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5ef5c4u); f_00831290();
L_005ef5c4:; BB(0x005ef5c4);
    /* 005ef5c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ef5c5: ret  */ FN_RET(0x005ef568); r_esp += 4; return;
}

void f_005ef5c8(void) /* sub_5EF5C8 */
{
    FN_ENTER(0x005ef5c8);
    /* 005ef5c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef5c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef5cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef5cd: push 0x8dc880 */ { u32 v = 0x8dc880u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef5d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ef5d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef5d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ef5e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef5e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ef5e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ef5e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ef5ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ef5ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef5f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef5f4: je 0x5ef64b */ if (fZ) goto L_005ef64b;
L_005ef5f6:; BB(0x005ef5f6);
    /* 005ef5f6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ef5fd: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef602: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ef607u); f_005caba4();
    /* 005ef607: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ef608: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ef60b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef60d: je 0x5ef647 */ if (fZ) goto L_005ef647;
L_005ef60f:; BB(0x005ef60f);
    /* 005ef60f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ef616: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ef61d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef620: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef624: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef62a: call 0x5ef65c */ r_esp -= 4; W32(r_esp, 0x5ef62fu); f_005ef65c();
    /* 005ef62f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef632: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ef639:; BB(0x005ef639);
    /* 005ef639: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef63c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef643: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef645: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef646: ret  */ FN_RET(0x005ef5c8); r_esp += 4; return;
L_005ef647:; BB(0x005ef647);
    /* 005ef647: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef649: jmp 0x5ef639 */ goto L_005ef639;
L_005ef64b:; BB(0x005ef64b);
    /* 005ef64b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef64d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef650: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef657: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef65a: ret  */ FN_RET(0x005ef5c8); r_esp += 4; return;
}

void f_005ef65c(void) /* sub_5EF65C */
{
    FN_ENTER(0x005ef65c);
    /* 005ef65c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ef65d: mov edi, ecx */ r_edi = r_ecx;
    /* 005ef65f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef663: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef667: mov ecx, edi */ r_ecx = r_edi;
    /* 005ef669: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ef66eu); f_005e959c();
    /* 005ef66e: mov dword ptr [edi], 0xb13aa0 */ W32((u32)(r_edi), 0xb13aa0u);
    /* 005ef674: mov edx, 3 */ r_edx = 0x3u;
    /* 005ef679: mov word ptr [edi + 0x246], dx */ W16((u32)(r_edi+0x246u), (u16)r_edx);
    /* 005ef680: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005ef685: mov dword ptr [edi + 0x240], 0 */ W32((u32)(r_edi+0x240u), 0x0u);
    /* 005ef68f: mov word ptr [edi + 0x244], ax */ W16((u32)(r_edi+0x244u), (u16)r_eax);
    /* 005ef696: mov eax, edi */ r_eax = r_edi;
    /* 005ef698: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ef699: ret 8 */ FN_RET(0x005ef65c); r_esp += 12; return;
}

void f_005ef89c(void) /* sub_5EF89C */
{
    FN_ENTER(0x005ef89c);
    /* 005ef89c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef89d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ef89f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ef8a1: call 0x5ef8c0 */ r_esp -= 4; W32(r_esp, 0x5ef8a6u); f_005ef8c0();
    /* 005ef8a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ef8aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef8ac: jne 0x5ef8b2 */ if (!fZ) goto L_005ef8b2;
L_005ef8ae:; BB(0x005ef8ae);
    /* 005ef8ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ef8af: ret 4 */ FN_RET(0x005ef89c); r_esp += 8; return;
L_005ef8b2:; BB(0x005ef8b2);
    /* 005ef8b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ef8b8u); f_005c2f74();
    /* 005ef8b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ef8b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ef8ba: ret 4 */ FN_RET(0x005ef89c); r_esp += 8; return;
}

void f_005ef8c0(void) /* sub_5EF8C0 */
{
    FN_ENTER(0x005ef8c0);
    /* 005ef8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef8c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8c5: push 0x8dc89c */ { u32 v = 0x8dc89cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ef8d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ef8d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef8db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ef8de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ef8e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ef8e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ef8e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ef8ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef8ed: mov dword ptr [ecx], 0xb13c00 */ W32((u32)(r_ecx), 0xb13c00u);
    /* 005ef8f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ef8fa: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ef8ffu); f_005e61c8();
    /* 005ef8ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef902: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ef909: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef90b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef90c: ret  */ FN_RET(0x005ef8c0); r_esp += 4; return;
}

void f_005ef910(void) /* sub_5EF910 */
{
    FN_ENTER(0x005ef910);
    /* 005ef910: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 005ef916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ef918: je 0x5ef92e */ if (fZ) goto L_005ef92e;
L_005ef91a:; BB(0x005ef91a);
    /* 005ef91a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005ef91d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ef91f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef921: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef923: push dword ptr [edx + 0x30] */ { u32 v = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ef926: call 0x5c5834 */ r_esp -= 4; W32(r_esp, 0x5ef92bu); f_005c5834();
    /* 005ef92b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ef92e:; BB(0x005ef92e);
    /* 005ef92e: ret  */ FN_RET(0x005ef910); r_esp += 4; return;
}

void f_005ef930(void) /* sub_5EF930 */
{
    FN_ENTER(0x005ef930);
    /* 005ef930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef931: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ef933: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef935: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ef93au); f_005e90b0();
    /* 005ef93a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef93c: je 0x5ef9f6 */ if (fZ) goto L_005ef9f6;
L_005ef942:; BB(0x005ef942);
    /* 005ef942: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005ef948: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 005ef94f: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005ef956: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef958: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef95a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef95c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ef95e: jge 0x5ef9ed */ if ((fS==fO)) goto L_005ef9ed;
L_005ef964:; BB(0x005ef964);
    /* 005ef964: push 0xffffdc72 */ { u32 v = 0xffffdc72u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef969: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef96b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef96e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef96f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef971: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ef976u); f_005e6df8();
    /* 005ef976: push 0xffffee39 */ { u32 v = 0xffffee39u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef97b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef97d: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005ef983: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef989: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ef98eu); f_005e6df8();
    /* 005ef98e: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005ef994: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef997: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ef999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef99a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef99c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef99d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef99e: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ef9a3u); f_005e6df8();
    /* 005ef9a3: push 0x11c7 */ { u32 v = 0x11c7u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9aa: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005ef9b0: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef9b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9b4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef9b6: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ef9bbu); f_005e6df8();
    /* 005ef9bb: push 0x238e */ { u32 v = 0x238eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9c2: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005ef9c8: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef9cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef9ce: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5ef9d3u); f_005e6df8();
    /* 005ef9d3: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005ef9d9: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef9dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ef9de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9e1: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9e3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ef9e8u); f_00814298();
    /* 005ef9e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ef9eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef9ec: ret  */ FN_RET(0x005ef930); r_esp += 4; return;
L_005ef9ed:; BB(0x005ef9ed);
    /* 005ef9ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef9ef: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ef9f4u); f_005e90e8();
    /* 005ef9f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef9f5: ret  */ FN_RET(0x005ef930); r_esp += 4; return;
L_005ef9f6:; BB(0x005ef9f6);
    /* 005ef9f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ef9f8: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ef9fdu); f_005e90e8();
    /* 005ef9fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef9fe: ret  */ FN_RET(0x005ef930); r_esp += 4; return;
}

void f_005efa00(void) /* sub_5EFA00 */
{
    FN_ENTER(0x005efa00);
    /* 005efa00: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005efa04: mov dword ptr [eax + 0x3c], 0x43200000 */ W32((u32)(r_eax+0x3cu), 0x43200000u);
    /* 005efa0b: mov dword ptr [eax + 0x78], 0x1da */ W32((u32)(r_eax+0x78u), 0x1dau);
    /* 005efa12: ret 4 */ FN_RET(0x005efa00); r_esp += 8; return;
}

void f_005efa18(void) /* sub_5EFA18 */
{
    FN_ENTER(0x005efa18);
    /* 005efa18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efa19: mov ebp, esp */ r_ebp = r_esp;
    /* 005efa1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005efa1d: push 0x8dc8c4 */ { u32 v = 0x8dc8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005efa22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005efa28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efa29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005efa30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efa33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005efa36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005efa39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005efa3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005efa3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005efa42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efa44: je 0x5efa9b */ if (fZ) goto L_005efa9b;
L_005efa46:; BB(0x005efa46);
    /* 005efa46: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005efa4d: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005efa52: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5efa57u); f_005caba4();
    /* 005efa57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005efa58: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005efa5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efa5d: je 0x5efa97 */ if (fZ) goto L_005efa97;
L_005efa5f:; BB(0x005efa5f);
    /* 005efa5f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005efa66: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005efa6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005efa70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005efa73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efa74: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efa7a: call 0x5efaac */ r_esp -= 4; W32(r_esp, 0x5efa7fu); f_005efaac();
    /* 005efa7f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005efa82: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005efa89:; BB(0x005efa89);
    /* 005efa89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efa8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efa93: mov esp, ebp */ r_esp = r_ebp;
    /* 005efa95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efa96: ret  */ FN_RET(0x005efa18); r_esp += 4; return;
L_005efa97:; BB(0x005efa97);
    /* 005efa97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efa99: jmp 0x5efa89 */ goto L_005efa89;
L_005efa9b:; BB(0x005efa9b);
    /* 005efa9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efa9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efaa0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efaa7: mov esp, ebp */ r_esp = r_ebp;
    /* 005efaa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efaaa: ret  */ FN_RET(0x005efa18); r_esp += 4; return;
}

void f_005efaac(void) /* sub_5EFAAC */
{
    FN_ENTER(0x005efaac);
    /* 005efaac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efaad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005efaaf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efab3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efab7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005efab9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5efabeu); f_005e959c();
    /* 005efabe: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005efac4: mov dword ptr [ebx], 0xb13c00 */ W32((u32)(r_ebx), 0xb13c00u);
    /* 005efaca: mov eax, ebx */ r_eax = r_ebx;
    /* 005efacc: or edx, 0x1000022 */ {  u32 a = r_edx; u32 b = 0x1000022u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efad2: mov byte ptr [ebx + 0x20e], 0 */ W8((u32)(r_ebx+0x20eu), 0x0u);
    /* 005efad9: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005efadf: mov byte ptr [ebx + 0x20f], 4 */ W8((u32)(r_ebx+0x20fu), 0x4u);
    /* 005efae6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efae7: ret 8 */ FN_RET(0x005efaac); r_esp += 12; return;
}

void f_005efaec(void) /* sub_5EFAEC */
{
    FN_ENTER(0x005efaec);
    /* 005efaec: mov dword ptr [0xa8df00], 0x3f800000 */ W32((u32)(0xa8df00u), 0x3f800000u);
    /* 005efaf6: mov dword ptr [0xa8df04], 0x41000000 */ W32((u32)(0xa8df04u), 0x41000000u);
    /* 005efb00: mov dword ptr [0xa8df08], 0x3fc00000 */ W32((u32)(0xa8df08u), 0x3fc00000u);
    /* 005efb0a: ret  */ FN_RET(0x005efaec); r_esp += 4; return;
}

void f_005efb0c(void) /* sub_5EFB0C */
{
    FN_ENTER(0x005efb0c);
    /* 005efb0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005efb0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005efb11: call 0x5efb30 */ r_esp -= 4; W32(r_esp, 0x5efb16u); f_005efb30();
    /* 005efb16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005efb1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efb1c: jne 0x5efb22 */ if (!fZ) goto L_005efb22;
L_005efb1e:; BB(0x005efb1e);
    /* 005efb1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efb1f: ret 4 */ FN_RET(0x005efb0c); r_esp += 8; return;
L_005efb22:; BB(0x005efb22);
    /* 005efb22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5efb28u); f_005c2f74();
    /* 005efb28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005efb29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efb2a: ret 4 */ FN_RET(0x005efb0c); r_esp += 8; return;
}

void f_005efb30(void) /* sub_5EFB30 */
{
    FN_ENTER(0x005efb30);
    /* 005efb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efb31: mov ebp, esp */ r_ebp = r_esp;
    /* 005efb33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005efb35: push 0x8dc8e0 */ { u32 v = 0x8dc8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005efb3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005efb40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efb41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005efb48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efb4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005efb4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005efb51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005efb54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005efb57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005efb5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005efb5d: mov dword ptr [ecx], 0xb13d60 */ W32((u32)(r_ecx), 0xb13d60u);
    /* 005efb63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005efb6a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5efb6fu); f_005e61c8();
    /* 005efb6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efb72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efb79: mov esp, ebp */ r_esp = r_ebp;
    /* 005efb7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efb7c: ret  */ FN_RET(0x005efb30); r_esp += 4; return;
}

void f_005efb80(void) /* sub_5EFB80 */
{
    FN_ENTER(0x005efb80);
    /* 005efb80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005efb83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005efb85: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5efb8au); f_005c42f4();
    /* 005efb8a: mov eax, dword ptr [ebx + 0xfc] */ r_eax = R32((u32)(r_ebx+0xfcu));
    /* 005efb90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efb92: je 0x5efba5 */ if (fZ) goto L_005efba5;
L_005efb94:; BB(0x005efb94);
    /* 005efb94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005efb96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005efb98: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005efb9a: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efb9d: call 0x5c5834 */ r_esp -= 4; W32(r_esp, 0x5efba2u); f_005c5834();
    /* 005efba2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005efba5:; BB(0x005efba5);
    /* 005efba5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efba6: ret  */ FN_RET(0x005efb80); r_esp += 4; return;
}

void f_005efba8(void) /* sub_5EFBA8 */
{
    FN_ENTER(0x005efba8);
    /* 005efba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efba9: mov ebp, esp */ r_ebp = r_esp;
    /* 005efbab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005efbad: push 0x8dc908 */ { u32 v = 0x8dc908u; r_esp -= 4; W32(r_esp, v); }
    /* 005efbb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005efbb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efbb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005efbc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efbc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005efbc6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005efbc9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005efbcc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005efbcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005efbd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efbd4: je 0x5efc2b */ if (fZ) goto L_005efc2b;
L_005efbd6:; BB(0x005efbd6);
    /* 005efbd6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005efbdd: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005efbe2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5efbe7u); f_005caba4();
    /* 005efbe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005efbe8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005efbeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efbed: je 0x5efc27 */ if (fZ) goto L_005efc27;
L_005efbef:; BB(0x005efbef);
    /* 005efbef: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005efbf6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005efbfd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005efc00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005efc03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efc04: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efc0a: call 0x5efc3c */ r_esp -= 4; W32(r_esp, 0x5efc0fu); f_005efc3c();
    /* 005efc0f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005efc12: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005efc19:; BB(0x005efc19);
    /* 005efc19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efc1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efc23: mov esp, ebp */ r_esp = r_ebp;
    /* 005efc25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efc26: ret  */ FN_RET(0x005efba8); r_esp += 4; return;
L_005efc27:; BB(0x005efc27);
    /* 005efc27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efc29: jmp 0x5efc19 */ goto L_005efc19;
L_005efc2b:; BB(0x005efc2b);
    /* 005efc2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efc2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efc30: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efc37: mov esp, ebp */ r_esp = r_ebp;
    /* 005efc39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efc3a: ret  */ FN_RET(0x005efba8); r_esp += 4; return;
}

void f_005efc3c(void) /* sub_5EFC3C */
{
    FN_ENTER(0x005efc3c);
    /* 005efc3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005efc3d: mov edi, ecx */ r_edi = r_ecx;
    /* 005efc3f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efc43: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efc47: mov ecx, edi */ r_ecx = r_edi;
    /* 005efc49: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5efc4eu); f_005e959c();
    /* 005efc4e: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005efc54: mov dword ptr [edi], 0xb13d60 */ W32((u32)(r_edi), 0xb13d60u);
    /* 005efc5a: mov edx, 1 */ r_edx = 0x1u;
    /* 005efc5f: mov byte ptr [edi + 0x20e], dl */ W8((u32)(r_edi+0x20eu), (u8)r_edx);
    /* 005efc65: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efc6a: mov byte ptr [edi + 0x20f], dl */ W8((u32)(r_edi+0x20fu), (u8)r_edx);
    /* 005efc70: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005efc76: mov eax, edi */ r_eax = r_edi;
    /* 005efc78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005efc79: ret 8 */ FN_RET(0x005efc3c); r_esp += 12; return;
}

void f_005efc7c(void) /* sub_5EFC7C */
{
    FN_ENTER(0x005efc7c);
    /* 005efc7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efc7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005efc7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005efc81: call 0x5efca0 */ r_esp -= 4; W32(r_esp, 0x5efc86u); f_005efca0();
    /* 005efc86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005efc8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efc8c: jne 0x5efc92 */ if (!fZ) goto L_005efc92;
L_005efc8e:; BB(0x005efc8e);
    /* 005efc8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efc8f: ret 4 */ FN_RET(0x005efc7c); r_esp += 8; return;
L_005efc92:; BB(0x005efc92);
    /* 005efc92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efc93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5efc98u); f_005c2f74();
    /* 005efc98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005efc99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efc9a: ret 4 */ FN_RET(0x005efc7c); r_esp += 8; return;
}

void f_005efca0(void) /* sub_5EFCA0 */
{
    FN_ENTER(0x005efca0);
    /* 005efca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efca1: mov ebp, esp */ r_ebp = r_esp;
    /* 005efca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005efca5: push 0x8dc924 */ { u32 v = 0x8dc924u; r_esp -= 4; W32(r_esp, v); }
    /* 005efcaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005efcb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efcb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005efcb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efcbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005efcbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005efcc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005efcc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005efcc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005efcca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005efccd: mov dword ptr [ecx], 0xb13f60 */ W32((u32)(r_ecx), 0xb13f60u);
    /* 005efcd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005efcda: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5efcdfu); f_005e61c8();
    /* 005efcdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efce2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efce9: mov esp, ebp */ r_esp = r_ebp;
    /* 005efceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efcec: ret  */ FN_RET(0x005efca0); r_esp += 4; return;
}

void f_005efcf0(void) /* sub_5EFCF0 */
{
    FN_ENTER(0x005efcf0);
    /* 005efcf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efcf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005efcf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005efcf5: call 0x5efd14 */ r_esp -= 4; W32(r_esp, 0x5efcfau); f_005efd14();
    /* 005efcfa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005efcfe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efd00: jne 0x5efd06 */ if (!fZ) goto L_005efd06;
L_005efd02:; BB(0x005efd02);
    /* 005efd02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efd03: ret 4 */ FN_RET(0x005efcf0); r_esp += 8; return;
L_005efd06:; BB(0x005efd06);
    /* 005efd06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005efd07: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5efd0cu); f_005c2f74();
    /* 005efd0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005efd0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005efd0e: ret 4 */ FN_RET(0x005efcf0); r_esp += 8; return;
}

void f_005efd14(void) /* sub_5EFD14 */
{
    FN_ENTER(0x005efd14);
    /* 005efd14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efd15: mov ebp, esp */ r_ebp = r_esp;
    /* 005efd17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005efd19: push 0x8dc940 */ { u32 v = 0x8dc940u; r_esp -= 4; W32(r_esp, v); }
    /* 005efd1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005efd24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efd25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005efd2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efd2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005efd32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005efd35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005efd38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005efd3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005efd3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005efd41: mov dword ptr [ecx], 0xb14060 */ W32((u32)(r_ecx), 0xb14060u);
    /* 005efd47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005efd4e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5efd53u); f_008171e8();
    /* 005efd53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efd56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efd5d: mov esp, ebp */ r_esp = r_ebp;
    /* 005efd5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efd60: ret  */ FN_RET(0x005efd14); r_esp += 4; return;
}

void f_005efd64(void) /* sub_5EFD64 */
{
    FN_ENTER(0x005efd64);
    /* 005efd64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efd65: mov ebp, esp */ r_ebp = r_esp;
    /* 005efd67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005efd69: push 0x8dc968 */ { u32 v = 0x8dc968u; r_esp -= 4; W32(r_esp, v); }
    /* 005efd6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005efd74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efd75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005efd7c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efd7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005efd82: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005efd85: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005efd88: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005efd8b: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005efd91: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005efd94: mov dword ptr [ecx + 0x24c], 0xffffffff */ W32((u32)(r_ecx+0x24cu), 0xffffffffu);
    /* 005efd9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efda0: je 0x5efdfc */ if (fZ) goto L_005efdfc;
L_005efda2:; BB(0x005efda2);
    /* 005efda2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005efda9: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005efdab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5efdb0u); f_005caba4();
    /* 005efdb0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005efdb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005efdb6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005efdb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efdbb: je 0x5efdf5 */ if (fZ) goto L_005efdf5;
L_005efdbd:; BB(0x005efdbd);
    /* 005efdbd: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005efdc4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005efdcb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005efdce: mov ecx, eax */ r_ecx = r_eax;
    /* 005efdd0: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005efdd2: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005efdd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efdda: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005efde0: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5efde5u); f_005e5cac();
    /* 005efde5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005efde8: mov dword ptr [eax], 0xb0f2c0 */ W32((u32)(r_eax), 0xb0f2c0u);
    /* 005efdee: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005efdf5:; BB(0x005efdf5);
    /* 005efdf5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005efdfc:; BB(0x005efdfc);
    /* 005efdfc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005efdff: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5efe04u); f_005e7480();
    /* 005efe04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005efe07: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5efe0cu); f_005e7480();
    /* 005efe0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efe0f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005efe16: mov esp, ebp */ r_esp = r_ebp;
    /* 005efe18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efe19: ret  */ FN_RET(0x005efd64); r_esp += 4; return;
}

void f_005efe1c(void) /* sub_5EFE1C */
{
    FN_ENTER(0x005efe1c);
    /* 005efe1c: mov edx, ecx */ r_edx = r_ecx;
    /* 005efe1e: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005efe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efe25: je 0x5efe50 */ if (fZ) goto L_005efe50;
L_005efe27:; BB(0x005efe27);
    /* 005efe27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efe2a: je 0x5efe61 */ if (fZ) goto L_005efe61;
L_005efe2c:; BB(0x005efe2c);
    /* 005efe2c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efe2f: je 0x5efe6f */ if (fZ) goto L_005efe6f;
L_005efe31:; BB(0x005efe31);
    /* 005efe31: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efe34: je 0x5efe51 */ if (fZ) goto L_005efe51;
L_005efe36:; BB(0x005efe36);
    /* 005efe36: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efe39: je 0x5efe4b */ if (fZ) goto L_005efe4b;
L_005efe3b:; BB(0x005efe3b);
    /* 005efe3b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005efe3e: je 0x5efe50 */ if (fZ) goto L_005efe50;
L_005efe40:; BB(0x005efe40);
    /* 005efe40: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005efe43: jne 0x5efe50 */ if (!fZ) goto L_005efe50;
L_005efe45:; BB(0x005efe45);
    /* 005efe45: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5efe4au); f_005c34a0();
    /* 005efe4a: ret  */ FN_RET(0x005efe1c); r_esp += 4; return;
L_005efe4b:; BB(0x005efe4b);
    /* 005efe4b: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5efe50u); f_005c34a0();
L_005efe50:; BB(0x005efe50);
    /* 005efe50: ret  */ FN_RET(0x005efe1c); r_esp += 4; return;
L_005efe51:; BB(0x005efe51);
    /* 005efe51: mov edx, dword ptr [edx + 0x248] */ r_edx = R32((u32)(r_edx+0x248u));
    /* 005efe57: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005efe59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005efe5b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5efe60u); f_0082d8bc();
    /* 005efe60: ret  */ FN_RET(0x005efe1c); r_esp += 4; return;
L_005efe61:; BB(0x005efe61);
    /* 005efe61: mov edx, dword ptr [edx + 0x248] */ r_edx = R32((u32)(r_edx+0x248u));
    /* 005efe67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005efe69: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5efe6eu); f_0082d8bc();
    /* 005efe6e: ret  */ FN_RET(0x005efe1c); r_esp += 4; return;
L_005efe6f:; BB(0x005efe6f);
    /* 005efe6f: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5efe74u); f_005c34a0();
    /* 005efe74: ret  */ FN_RET(0x005efe1c); r_esp += 4; return;
}

void f_005efe78(void) /* sub_5EFE78 */
{
    FN_ENTER(0x005efe78);
    /* 005efe78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efe79: mov ebp, esp */ r_ebp = r_esp;
    /* 005efe7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005efe7d: push 0x8dc990 */ { u32 v = 0x8dc990u; r_esp -= 4; W32(r_esp, v); }
    /* 005efe82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005efe88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efe89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005efe90: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efe93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005efe96: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005efe99: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005efe9c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005efe9f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005efea1: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 005efea7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efeaa: je 0x5eff6a */ if (fZ) goto L_005eff6a;
L_005efeb0:; BB(0x005efeb0);
    /* 005efeb0: mov eax, dword ptr [ebx + 0x248] */ r_eax = R32((u32)(r_ebx+0x248u));
    /* 005efeb6: add eax, 0xfffff556 */ {  u32 a = r_eax; u32 b = 0xfffff556u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efebb: cmp eax, 0xffffe000 */ {  u32 a = r_eax; u32 b = 0xffffe000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efec0: jg 0x5efed8 */ if ((!fZ&&fS==fO)) goto L_005efed8;
L_005efec2:; BB(0x005efec2);
    /* 005efec2: mov dword ptr [ebx + 0x248], 0xffffe000 */ W32((u32)(r_ebx+0x248u), 0xffffe000u);
    /* 005efecc: mov dword ptr [ebx + 0x244], 1 */ W32((u32)(r_ebx+0x244u), 0x1u);
    /* 005efed6: jmp 0x5efede */ goto L_005efede;
L_005efed8:; BB(0x005efed8);
    /* 005efed8: mov dword ptr [ebx + 0x248], eax */ W32((u32)(r_ebx+0x248u), r_eax);
L_005efede:; BB(0x005efede);
    /* 005efede: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005efee4: cmp edx, dword ptr [ebx + 0x24c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x24cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005efeea: je 0x5eff59 */ if (fZ) goto L_005eff59;
L_005efeec:; BB(0x005efeec);
    /* 005efeec: mov eax, dword ptr [ebx + 0xfc] */ r_eax = R32((u32)(r_ebx+0xfcu));
    /* 005efef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005efef4: je 0x5eff59 */ if (fZ) goto L_005eff59;
L_005efef6:; BB(0x005efef6);
    /* 005efef6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005efef7: mov dword ptr [ebx + 0x24c], edx */ W32((u32)(r_ebx+0x24cu), r_edx);
    /* 005efefd: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5eff02u); f_00807d8c();
    /* 005eff02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eff03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eff05: je 0x5eff59 */ if (fZ) goto L_005eff59;
L_005eff07:; BB(0x005eff07);
    /* 005eff07: mov edx, dword ptr [0xaca36c] */ r_edx = R32((u32)(0xaca36cu));
    /* 005eff0d: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 005eff13: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005eff16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eff18: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005eff1b: je 0x5eff59 */ if (fZ) goto L_005eff59;
L_005eff1d:; BB(0x005eff1d);
    /* 005eff1d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005eff24: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eff26: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5eff2bu); f_005caba4();
    /* 005eff2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eff2c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005eff2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eff31: je 0x5eff59 */ if (fZ) goto L_005eff59;
L_005eff33:; BB(0x005eff33);
    /* 005eff33: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005eff3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eff41: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eff44: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eff47: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005eff49: mov ecx, eax */ r_ecx = r_eax;
    /* 005eff4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eff4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005eff4d: call 0x5effa0 */ r_esp -= 4; W32(r_esp, 0x5eff52u); f_005effa0();
    /* 005eff52: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005eff59:; BB(0x005eff59);
    /* 005eff59: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005eff5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eff5f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eff66: mov esp, ebp */ r_esp = r_ebp;
    /* 005eff68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eff69: ret  */ FN_RET(0x005efe78); r_esp += 4; return;
L_005eff6a:; BB(0x005eff6a);
    /* 005eff6a: mov eax, dword ptr [ebx + 0x248] */ r_eax = R32((u32)(r_ebx+0x248u));
    /* 005eff70: add eax, 0xaaa */ {  u32 a = r_eax; u32 b = 0xaaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eff75: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eff7a: jl 0x5eff95 */ if ((fS!=fO)) goto L_005eff95;
L_005eff7c:; BB(0x005eff7c);
    /* 005eff7c: mov dword ptr [ebx + 0x248], 0x2000 */ W32((u32)(r_ebx+0x248u), 0x2000u);
    /* 005eff86: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 005eff90: jmp 0x5efede */ goto L_005efede;
L_005eff95:; BB(0x005eff95);
    /* 005eff95: mov dword ptr [ebx + 0x248], eax */ W32((u32)(r_ebx+0x248u), r_eax);
    /* 005eff9b: jmp 0x5efede */ goto L_005efede;
}

void f_005effa0(void) /* sub_5EFFA0 */
{
    FN_ENTER(0x005effa0);
    /* 005effa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005effa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005effa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005effa5: push 0x8dc9ac */ { u32 v = 0x8dc9acu; r_esp -= 4; W32(r_esp, v); }
    /* 005effaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005effb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005effb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005effb8: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005effbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005effbe: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005effc1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005effc4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005effc7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005effca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005effcd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005effd0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005effd3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005effd6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005effd9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5effdeu); f_008193cc();
    /* 005effde: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005effe5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005effe8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005effeb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005effee: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005efff1: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005efff4: mov dword ptr [ecx], 0xb14060 */ W32((u32)(r_ecx), 0xb14060u);
    /* 005efffa: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 005f0001: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5f0006u); f_005c3a8c();
    /* 005f0006: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0009: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f000c: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005f000f: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5f0014u); f_005c5528();
    /* 005f0014: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0015: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0017: je 0x5f007a */ if (fZ) goto L_005f007a;
L_005f0019:; BB(0x005f0019);
    /* 005f0019: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f001c: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 005f001f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0020: mov ecx, eax */ r_ecx = r_eax;
    /* 005f0022: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0025: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f002au); f_005e83c8();
    /* 005f002a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f002c: jne 0x5f0033 */ if (!fZ) goto L_005f0033;
L_005f002e:; BB(0x005f002e);
    /* 005f002e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0031: jmp 0x5f007d */ goto L_005f007d;
L_005f0033:; BB(0x005f0033);
    /* 005f0033: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0036: mov eax, dword ptr [0x92d964] */ r_eax = R32((u32)(0x92d964u));
    /* 005f003b: mov edx, dword ptr [0x92d968] */ r_edx = R32((u32)(0x92d968u));
    /* 005f0041: mov ecx, dword ptr [0x92d96c] */ r_ecx = R32((u32)(0x92d96cu));
    /* 005f0047: mov ebx, dword ptr [0x92d970] */ r_ebx = R32((u32)(0x92d970u));
    /* 005f004d: mov esi, dword ptr [0x92d974] */ r_esi = R32((u32)(0x92d974u));
    /* 005f0053: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005f0056: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f0059: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f005c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005f005f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005f0062: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005f0065: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 005f0068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007a:; BB(0x005f007a);
    /* 005f007a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005effa0); r_esp += 16; return;
}

