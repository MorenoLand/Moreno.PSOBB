#include "protos.h"

void f_0075e118(void)
{
    FN_ENTER(0x0075e118);
}

void f_0075e178(void)
{
    FN_ENTER(0x0075e178);
    goto L_0075e178;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e178); r_esp += 4; return;
L_0075e178:; BB(0x0075e178);
    /* 0075e178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e179: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e17b: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e180u); f_00736510();
    /* 0075e180: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e182: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e184:; BB(0x0075e184);
    /* 0075e184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e186: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e189: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e18eu); f_00736510();
L_0075e18e:; BB(0x0075e18e);
    /* 0075e18e: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0075e191: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e198: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e19a: je 0x75e1b0 */ if (fZ) goto L_0075e1b0;
L_0075e19c:; BB(0x0075e19c);
    /* 0075e19c: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0075e19f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075e1a1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75e1a4u); call_ind(t); }
    /* 0075e1a4: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 0075e1a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1af: ret  */ FN_RET(0x0075e178); r_esp += 4; return;
L_0075e1b0:; BB(0x0075e1b0);
    /* 0075e1b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e1b2: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e1b8:; BB(0x0075e1b8);
    /* 0075e1b8: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0075e1bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1c3: ret  */ FN_RET(0x0075e178); r_esp += 4; return;
}

void f_0075e180(void)
{
    FN_ENTER(0x0075e180);
    goto L_0075e180;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e180); r_esp += 4; return;
L_0075e180:; BB(0x0075e180);
    /* 0075e180: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e182: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e184:; BB(0x0075e184);
    /* 0075e184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e186: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e189: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e18eu); f_00736510();
L_0075e18e:; BB(0x0075e18e);
    /* 0075e18e: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0075e191: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e198: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e19a: je 0x75e1b0 */ if (fZ) goto L_0075e1b0;
L_0075e19c:; BB(0x0075e19c);
    /* 0075e19c: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0075e19f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075e1a1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75e1a4u); call_ind(t); }
    /* 0075e1a4: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 0075e1a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1af: ret  */ FN_RET(0x0075e180); r_esp += 4; return;
L_0075e1b0:; BB(0x0075e1b0);
    /* 0075e1b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e1b2: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e1b8:; BB(0x0075e1b8);
    /* 0075e1b8: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0075e1bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1c3: ret  */ FN_RET(0x0075e180); r_esp += 4; return;
}

void f_0075e188(void)
{
    FN_ENTER(0x0075e188);
    goto L_0075e188;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e188); r_esp += 4; return;
L_0075e188:; BB(0x0075e188);
    /* 0075e188: cmp al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu;   }
    /* 0075e18a: add byte ptr [ebx + 0x438bfffd], 0x34 */ { u32 ad = (u32)(r_ebx+0x438bfffdu);  u32 a = R8(ad); u32 b = 0x34u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e191: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e198: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e19a: je 0x75e1b0 */ if (fZ) goto L_0075e1b0;
L_0075e19c:; BB(0x0075e19c);
    /* 0075e19c: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0075e19f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075e1a1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75e1a4u); call_ind(t); }
    /* 0075e1a4: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 0075e1a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1af: ret  */ FN_RET(0x0075e188); r_esp += 4; return;
L_0075e1b0:; BB(0x0075e1b0);
    /* 0075e1b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e1b2: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e1b8:; BB(0x0075e1b8);
    /* 0075e1b8: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0075e1bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1c3: ret  */ FN_RET(0x0075e188); r_esp += 4; return;
}

void f_0075e1c0(void)
{
    FN_ENTER(0x0075e1c0);
    /* 0075e1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1c3: ret  */ FN_RET(0x0075e1c0); r_esp += 4; return;
}

void f_0075e204(void)
{
    FN_ENTER(0x0075e204);
    goto L_0075e204;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e204); r_esp += 4; return;
L_0075e204:; BB(0x0075e204);
    /* 0075e204: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e205: sub byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0075e207: mov edi, 0x403e8c0 */ r_edi = 0x403e8c0u;
    /* 0075e20c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e20e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e210: je 0x75e238 */ if (fZ) goto L_0075e238;
L_0075e212:; BB(0x0075e212);
    /* 0075e212: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075e218: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075e21b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075e21d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075e21f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075e221: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075e223: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075e22a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e22b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75e230u); f_007c1160();
    /* 0075e230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e232: je 0x75e31f */ if (fZ) goto L_0075e31f;
L_0075e238:; BB(0x0075e238);
    /* 0075e238: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e23b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e23c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e23d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e242: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75e247u); f_00814298();
    /* 0075e247: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e24a: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0075e24d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e252u); f_007365f4();
    /* 0075e252: mov edi, dword ptr [eax*4 + 0x9f57a8] */ r_edi = R32((u32)(r_eax*4+0x9f57a8u));
    /* 0075e259: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e25c: movsx ebp, word ptr [esi + 0x8c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 0075e263: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e265: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75e26au); f_00736578();
    /* 0075e26a: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0075e26d: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e270: je 0x75e2f8 */ if (fZ) goto L_0075e2f8;
L_0075e276:; BB(0x0075e276);
    /* 0075e276: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0075e27a: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0075e27e: mov esi, eax */ r_esi = r_eax;
    /* 0075e280: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e284:; BB(0x0075e284);
    /* 0075e284: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e288: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e289: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e28c: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e291u); f_00793000();
    /* 0075e291: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e293: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e296: mov eax, esi */ r_eax = r_esi;
    /* 0075e298: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e29a: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e29fu); f_0075e54d();
    /* 0075e29f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e2a1: jne 0x75e2b2 */ if (!fZ) goto L_0075e2b2;
L_0075e2a3:; BB(0x0075e2a3);
    /* 0075e2a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2a4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2a7: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e2ab: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e2b0u); f_00735ee0();
    /* 0075e2b0: jmp 0x75e2e0 */ goto L_0075e2e0;
L_0075e2b2:; BB(0x0075e2b2);
    /* 0075e2b2: mov eax, esi */ r_eax = r_esi;
    /* 0075e2b4: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e2b6: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e2bbu); f_0075e611();
    /* 0075e2bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e2bd: jne 0x75e2d3 */ if (!fZ) goto L_0075e2d3;
L_0075e2bf:; BB(0x0075e2bf);
    /* 0075e2bf: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c5: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2c8: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0075e2cc: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e2d1u); f_00735db8();
    /* 0075e2d1: jmp 0x75e2e0 */ goto L_0075e2e0;
L_0075e2d3:; BB(0x0075e2d3);
    /* 0075e2d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2d4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2d7: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e2db: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e2e0u); f_00735c90();
L_0075e2e0:; BB(0x0075e2e0);
    /* 0075e2e0: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e2e4: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e2e7: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e2ea: jne 0x75e284 */ if (!fZ) goto L_0075e284;
L_0075e2ec:; BB(0x0075e2ec);
    /* 0075e2ec: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0075e2f0: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0075e2f4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e2f8:; BB(0x0075e2f8);
    /* 0075e2f8: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e2fd: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e2ff: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e304u); f_00736138();
    /* 0075e304: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e306: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e30bu); f_00736458();
    /* 0075e30b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e30c: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e30e: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e313u); f_00736510();
    /* 0075e313: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e317: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e31a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e31b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e31c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e31d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e31e: ret  */ FN_RET(0x0075e204); r_esp += 4; return;
L_0075e31f:; BB(0x0075e31f);
    /* 0075e31f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e322: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e327u); f_007365f4();
    /* 0075e327: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e32a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e32b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075e32d: call 0x69a2cc */ r_esp -= 4; W32(r_esp, 0x75e332u); f_0069a2cc();
    /* 0075e332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e334: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e33a:; BB(0x0075e33a);
    /* 0075e33a: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e33e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e341: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e343: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e344: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e345: ret  */ FN_RET(0x0075e204); r_esp += 4; return;
}

void f_0075e438(void)
{
    FN_ENTER(0x0075e438);
    goto L_0075e438;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e438); r_esp += 4; return;
L_0075e438:; BB(0x0075e438);
    /* 0075e438: into  */ UNSUP(0x0075e438, "into ");
    /* 0075e439: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75e43eu); f_00736578();
    /* 0075e43e: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0075e441: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e444: je 0x75e4cc */ if (fZ) goto L_0075e4cc;
L_0075e44a:; BB(0x0075e44a);
    /* 0075e44a: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0075e44e: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0075e452: mov esi, eax */ r_esi = r_eax;
    /* 0075e454: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e458:; BB(0x0075e458);
    /* 0075e458: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e45c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e45d: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e460: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e465u); f_00793000();
    /* 0075e465: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e467: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e46a: mov eax, esi */ r_eax = r_esi;
    /* 0075e46c: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e46e: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e473u); f_0075e54d();
    /* 0075e473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e475: jne 0x75e486 */ if (!fZ) goto L_0075e486;
L_0075e477:; BB(0x0075e477);
    /* 0075e477: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e478: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e47a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e47b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e47f: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e484u); f_00735ee0();
    /* 0075e484: jmp 0x75e4b4 */ goto L_0075e4b4;
L_0075e486:; BB(0x0075e486);
    /* 0075e486: mov eax, esi */ r_eax = r_esi;
    /* 0075e488: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e48a: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e48fu); f_0075e611();
    /* 0075e48f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e491: jne 0x75e4a7 */ if (!fZ) goto L_0075e4a7;
L_0075e493:; BB(0x0075e493);
    /* 0075e493: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e499: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e49b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e49c: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0075e4a0: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e4a5u); f_00735db8();
    /* 0075e4a5: jmp 0x75e4b4 */ goto L_0075e4b4;
L_0075e4a7:; BB(0x0075e4a7);
    /* 0075e4a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4ab: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e4af: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e4b4u); f_00735c90();
L_0075e4b4:; BB(0x0075e4b4);
    /* 0075e4b4: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e4b8: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e4bb: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e4be: jne 0x75e458 */ if (!fZ) goto L_0075e458;
L_0075e4c0:; BB(0x0075e4c0);
    /* 0075e4c0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0075e4c4: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0075e4c8: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e4cc:; BB(0x0075e4cc);
    /* 0075e4cc: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4d3: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e4d8u); f_00736138();
    /* 0075e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4da: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e4dfu); f_00736458();
    /* 0075e4df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4e2: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e4e7u); f_00736510();
    /* 0075e4e7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e4ea: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e4efu); f_007365f4();
    /* 0075e4ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e4f5: call 0x75e668 */ r_esp -= 4; W32(r_esp, 0x75e4fau); f_0075e668();
    /* 0075e4fa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0075e4fd: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e504: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e507: je 0x75e514 */ if (fZ) goto L_0075e514;
L_0075e509:; BB(0x0075e509);
    /* 0075e509: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e50d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0075e514:; BB(0x0075e514);
    /* 0075e514: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e517: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e51d:; BB(0x0075e51d);
    /* 0075e51d: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 0075e521: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e524: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e528: ret  */ FN_RET(0x0075e438); r_esp += 4; return;
}

void f_0075e440(void)
{
    FN_ENTER(0x0075e440);
    goto L_0075e440;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e440); r_esp += 4; return;
L_0075e440:; BB(0x0075e440);
    /* 0075e440: pop es */ UNSUP(0x0075e440, "pop es");
    /* 0075e441: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e444: je 0x75e4cc */ if (fZ) goto L_0075e4cc;
L_0075e44a:; BB(0x0075e44a);
    /* 0075e44a: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0075e44e: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0075e452: mov esi, eax */ r_esi = r_eax;
    /* 0075e454: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e458:; BB(0x0075e458);
    /* 0075e458: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e45c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e45d: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e460: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e465u); f_00793000();
    /* 0075e465: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e467: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e46a: mov eax, esi */ r_eax = r_esi;
    /* 0075e46c: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e46e: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e473u); f_0075e54d();
    /* 0075e473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e475: jne 0x75e486 */ if (!fZ) goto L_0075e486;
L_0075e477:; BB(0x0075e477);
    /* 0075e477: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e478: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e47a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e47b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e47f: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e484u); f_00735ee0();
    /* 0075e484: jmp 0x75e4b4 */ goto L_0075e4b4;
L_0075e486:; BB(0x0075e486);
    /* 0075e486: mov eax, esi */ r_eax = r_esi;
    /* 0075e488: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e48a: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e48fu); f_0075e611();
    /* 0075e48f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e491: jne 0x75e4a7 */ if (!fZ) goto L_0075e4a7;
L_0075e493:; BB(0x0075e493);
    /* 0075e493: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e499: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e49b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e49c: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0075e4a0: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e4a5u); f_00735db8();
    /* 0075e4a5: jmp 0x75e4b4 */ goto L_0075e4b4;
L_0075e4a7:; BB(0x0075e4a7);
    /* 0075e4a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4ab: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075e4af: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e4b4u); f_00735c90();
L_0075e4b4:; BB(0x0075e4b4);
    /* 0075e4b4: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e4b8: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e4bb: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e4be: jne 0x75e458 */ if (!fZ) goto L_0075e458;
L_0075e4c0:; BB(0x0075e4c0);
    /* 0075e4c0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0075e4c4: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0075e4c8: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e4cc:; BB(0x0075e4cc);
    /* 0075e4cc: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4d3: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e4d8u); f_00736138();
    /* 0075e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4da: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e4dfu); f_00736458();
    /* 0075e4df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4e2: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e4e7u); f_00736510();
    /* 0075e4e7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e4ea: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e4efu); f_007365f4();
    /* 0075e4ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e4f5: call 0x75e668 */ r_esp -= 4; W32(r_esp, 0x75e4fau); f_0075e668();
    /* 0075e4fa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0075e4fd: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e504: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e507: je 0x75e514 */ if (fZ) goto L_0075e514;
L_0075e509:; BB(0x0075e509);
    /* 0075e509: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e50d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0075e514:; BB(0x0075e514);
    /* 0075e514: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e517: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e51d:; BB(0x0075e51d);
    /* 0075e51d: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 0075e521: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e524: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e528: ret  */ FN_RET(0x0075e440); r_esp += 4; return;
}

void f_0075e4cc(void)
{
    FN_ENTER(0x0075e4cc);
    goto L_0075e4cc;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e4cc); r_esp += 4; return;
L_0075e4cc:; BB(0x0075e4cc);
    /* 0075e4cc: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4d3: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e4d8u); f_00736138();
    /* 0075e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4da: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e4dfu); f_00736458();
    /* 0075e4df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e4e2: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e4e7u); f_00736510();
    /* 0075e4e7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e4ea: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e4efu); f_007365f4();
    /* 0075e4ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e4f5: call 0x75e668 */ r_esp -= 4; W32(r_esp, 0x75e4fau); f_0075e668();
    /* 0075e4fa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0075e4fd: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e504: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e507: je 0x75e514 */ if (fZ) goto L_0075e514;
L_0075e509:; BB(0x0075e509);
    /* 0075e509: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e50d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0075e514:; BB(0x0075e514);
    /* 0075e514: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e517: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e51d:; BB(0x0075e51d);
    /* 0075e51d: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 0075e521: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e524: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e528: ret  */ FN_RET(0x0075e4cc); r_esp += 4; return;
}

void f_0075e4dc(void)
{
    FN_ENTER(0x0075e4dc);
    goto L_0075e4dc;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e4dc); r_esp += 4; return;
L_0075e4db:; BB(0x0075e4db);
    /* 0075e4db: jns 0x75e55c */ if (!fS) goto L_0075e55c;
L_0075e4dc:; BB(0x0075e4dc);
    /* 0075e4dc: jg 0x75e4db */ if ((!fZ&&fS==fO)) goto L_0075e4db;
L_0075e4dd:; BB(0x0075e4dd);
    /* 0075e4dd: std  */ rt_df = 1;
L_0075e4de:; BB(0x0075e4de);
    /* 0075e4de: call dword ptr [ebp - 0x75] */ { u32 t = R32((u32)(r_ebp+0xffffff8bu)); r_esp -= 4; W32(r_esp, 0x75e4e1u); call_ind(t); }
    /* 0075e4e1: into  */ UNSUP(0x0075e4e1, "into ");
    /* 0075e4e2: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e4e7u); f_00736510();
    /* 0075e4e7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e4ea: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e4efu); f_007365f4();
    /* 0075e4ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e4f5: call 0x75e668 */ r_esp -= 4; W32(r_esp, 0x75e4fau); f_0075e668();
    /* 0075e4fa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0075e4fd: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e504: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e507: je 0x75e514 */ if (fZ) goto L_0075e514;
L_0075e509:; BB(0x0075e509);
    /* 0075e509: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e50d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0075e514:; BB(0x0075e514);
    /* 0075e514: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e517: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e51d:; BB(0x0075e51d);
    /* 0075e51d: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 0075e521: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e524: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e528: ret  */ FN_RET(0x0075e4dc); r_esp += 4; return;
L_0075e55c:; BB(0x0075e55c);
    /* 0075e55c: out 0xff, eax */ UNSUP(0x0075e55c, "out 0xff, eax");
    /* 0075e55e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e560: add byte ptr [edi + 0x6a], dl */ { u32 ad = (u32)(r_edi+0x6au);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e563: add edx, dword ptr [eax - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e566: or cl, bh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ebx>>8); u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e568: hlt  */ UNSUP(0x0075e568, "hlt");
}

void f_0075e4e4(void)
{
    FN_ENTER(0x0075e4e4);
    goto L_0075e4e4;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e4e4); r_esp += 4; return;
L_0075e4e4:; BB(0x0075e4e4);
    /* 0075e4e4: cmp ch, 0xff */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xffu; u32 r = (a - b) & 0xffu;   }
    /* 0075e4e7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e4ea: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e4efu); f_007365f4();
    /* 0075e4ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0075e4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e4f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e4f5: call 0x75e668 */ r_esp -= 4; W32(r_esp, 0x75e4fau); f_0075e668();
    /* 0075e4fa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0075e4fd: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e504: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e507: je 0x75e514 */ if (fZ) goto L_0075e514;
L_0075e509:; BB(0x0075e509);
    /* 0075e509: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0075e50d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_0075e514:; BB(0x0075e514);
    /* 0075e514: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e517: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e51d:; BB(0x0075e51d);
    /* 0075e51d: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 0075e521: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e524: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e528: ret  */ FN_RET(0x0075e4e4); r_esp += 4; return;
}

void f_0075e534(void)
{
    FN_ENTER(0x0075e534);
    goto L_0075e534;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e534); r_esp += 4; return;
L_0075e020:; BB(0x0075e020);
    /* 0075e020: movzx ebp, word ptr [eax + 0x84] */ r_ebp = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e027: or ebp, 0xffff0040 */ {  u32 a = r_ebp; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e02d: mov word ptr [eax + 0x84], bp */ W16((u32)(r_eax+0x84u), (u16)r_ebp);
    /* 0075e034: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 0075e037: movzx esi, word ptr [edi + 0x84] */ r_esi = (u32)R16((u32)(r_edi+0x84u));
    /* 0075e03e: or esi, 0xffff0080 */ {  u32 a = r_esi; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0075e044: mov word ptr [edi + 0x84], si */ W16((u32)(r_edi+0x84u), (u16)r_esi);
    /* 0075e04b: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075e04e: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 0075e051: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0075e054: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e059u); f_0075e580();
    /* 0075e059: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0075e05c: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075e063: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075e068: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0075e06b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075e072: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e074: je 0x75e07d */ if (fZ) goto L_0075e07d;
L_0075e076:; BB(0x0075e076);
    /* 0075e076: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e078: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75e07du); f_00760acc();
L_0075e07d:; BB(0x0075e07d);
    /* 0075e07d: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
    /* 0075e081: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e083: call 0x75e764 */ r_esp -= 4; W32(r_esp, 0x75e088u); f_0075e764();
    /* 0075e088: mov edi, eax */ r_edi = r_eax;
    /* 0075e08a: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e08d: je 0x75e0a5 */ if (fZ) goto L_0075e0a5;
L_0075e08f:; BB(0x0075e08f);
    /* 0075e08f: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075e092: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 0075e095: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0075e098: call 0x75e79c */ r_esp -= 4; W32(r_esp, 0x75e09du); f_0075e79c();
    /* 0075e09d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e09f: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e0a5:; BB(0x0075e0a5);
    /* 0075e0a5: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0075e0a8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e0adu); f_007365f4();
    /* 0075e0ad: mov edx, dword ptr [eax*4 + 0x9f57a8] */ r_edx = R32((u32)(r_eax*4+0x9f57a8u));
    /* 0075e0b4: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e0b7: movsx ebp, word ptr [esi + 0x8c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 0075e0be: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0075e0c2: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e0c4: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75e0c9u); f_00736578();
    /* 0075e0c9: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0075e0cd: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0075e0d0: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e0d3: je 0x75e165 */ if (fZ) goto L_0075e165;
L_0075e0d9:; BB(0x0075e0d9);
    /* 0075e0d9: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0075e0dd: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0075e0e1: mov esi, eax */ r_esi = r_eax;
    /* 0075e0e3: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0075e0e7: mov edi, edx */ r_edi = r_edx;
    /* 0075e0e9: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e0ed:; BB(0x0075e0ed);
    /* 0075e0ed: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e0f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e0f2: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e0f5: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e0fau); f_00793000();
    /* 0075e0fa: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e0fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e0ff: mov eax, esi */ r_eax = r_esi;
    /* 0075e101: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e103: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e108u); f_0075e54d();
    /* 0075e108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e10a: jne 0x75e11b */ if (!fZ) goto L_0075e11b;
L_0075e10c:; BB(0x0075e10c);
    /* 0075e10c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e10d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e10f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e110: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075e114: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e119u); f_00735ee0();
    /* 0075e119: jmp 0x75e149 */ goto L_0075e149;
L_0075e11b:; BB(0x0075e11b);
    /* 0075e11b: mov eax, esi */ r_eax = r_esi;
    /* 0075e11d: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e11f: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e124u); f_0075e611();
    /* 0075e124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e126: jne 0x75e13c */ if (!fZ) goto L_0075e13c;
L_0075e128:; BB(0x0075e128);
    /* 0075e128: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e12d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e12e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e130: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e131: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e135: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e13au); f_00735db8();
    /* 0075e13a: jmp 0x75e149 */ goto L_0075e149;
L_0075e13c:; BB(0x0075e13c);
    /* 0075e13c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e13d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e13f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e140: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075e144: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e149u); f_00735c90();
L_0075e149:; BB(0x0075e149);
    /* 0075e149: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e14d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e150: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e153: jne 0x75e0ed */ if (!fZ) goto L_0075e0ed;
L_0075e155:; BB(0x0075e155);
    /* 0075e155: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0075e159: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0075e15d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0075e161: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e165:; BB(0x0075e165);
    /* 0075e165: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e16a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e16c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e171u); f_00736138();
    /* 0075e171: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e173: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e178u); f_00736458();
    /* 0075e178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e179: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e17b: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e180u); f_00736510();
    /* 0075e180: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e182: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e184:; BB(0x0075e184);
    /* 0075e184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e186: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e189: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e18eu); f_00736510();
L_0075e18e:; BB(0x0075e18e);
    /* 0075e18e: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0075e191: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e198: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e19a: je 0x75e1b0 */ if (fZ) goto L_0075e1b0;
L_0075e19c:; BB(0x0075e19c);
    /* 0075e19c: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0075e19f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075e1a1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75e1a4u); call_ind(t); }
    /* 0075e1a4: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 0075e1a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1af: ret  */ FN_RET(0x0075e534); r_esp += 4; return;
L_0075e1b0:; BB(0x0075e1b0);
    /* 0075e1b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e1b2: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e1b8:; BB(0x0075e1b8);
    /* 0075e1b8: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0075e1bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1c3: ret  */ FN_RET(0x0075e534); r_esp += 4; return;
L_0075e534:; BB(0x0075e534);
    /* 0075e534: call 0x75e5b0 */ r_esp -= 4; W32(r_esp, 0x75e539u); f_0075e5b0();
    /* 0075e539: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0075e53c: jmp 0x75e020 */ goto L_0075e020;
}

void f_0075e53c(void)
{
    FN_ENTER(0x0075e53c);
    goto L_0075e53c;
L_0075dfe8:; BB(0x0075dfe8);
    /* 0075dfe8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075dfeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075dfec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075dfed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075dfee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075dfef: ret  */ FN_RET(0x0075e53c); r_esp += 4; return;
L_0075e020:; BB(0x0075e020);
    /* 0075e020: movzx ebp, word ptr [eax + 0x84] */ r_ebp = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e027: or ebp, 0xffff0040 */ {  u32 a = r_ebp; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e02d: mov word ptr [eax + 0x84], bp */ W16((u32)(r_eax+0x84u), (u16)r_ebp);
    /* 0075e034: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 0075e037: movzx esi, word ptr [edi + 0x84] */ r_esi = (u32)R16((u32)(r_edi+0x84u));
    /* 0075e03e: or esi, 0xffff0080 */ {  u32 a = r_esi; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0075e044: mov word ptr [edi + 0x84], si */ W16((u32)(r_edi+0x84u), (u16)r_esi);
    /* 0075e04b: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075e04e: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 0075e051: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0075e054: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e059u); f_0075e580();
    /* 0075e059: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0075e05c: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075e063: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075e068: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0075e06b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075e072: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e074: je 0x75e07d */ if (fZ) goto L_0075e07d;
L_0075e076:; BB(0x0075e076);
    /* 0075e076: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e078: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75e07du); f_00760acc();
L_0075e07d:; BB(0x0075e07d);
    /* 0075e07d: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
    /* 0075e081: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e083: call 0x75e764 */ r_esp -= 4; W32(r_esp, 0x75e088u); f_0075e764();
    /* 0075e088: mov edi, eax */ r_edi = r_eax;
    /* 0075e08a: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e08d: je 0x75e0a5 */ if (fZ) goto L_0075e0a5;
L_0075e08f:; BB(0x0075e08f);
    /* 0075e08f: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075e092: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 0075e095: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0075e098: call 0x75e79c */ r_esp -= 4; W32(r_esp, 0x75e09du); f_0075e79c();
    /* 0075e09d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e09f: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e0a5:; BB(0x0075e0a5);
    /* 0075e0a5: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0075e0a8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e0adu); f_007365f4();
    /* 0075e0ad: mov edx, dword ptr [eax*4 + 0x9f57a8] */ r_edx = R32((u32)(r_eax*4+0x9f57a8u));
    /* 0075e0b4: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0075e0b7: movsx ebp, word ptr [esi + 0x8c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 0075e0be: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0075e0c2: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e0c4: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75e0c9u); f_00736578();
    /* 0075e0c9: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0075e0cd: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0075e0d0: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e0d3: je 0x75e165 */ if (fZ) goto L_0075e165;
L_0075e0d9:; BB(0x0075e0d9);
    /* 0075e0d9: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0075e0dd: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0075e0e1: mov esi, eax */ r_esi = r_eax;
    /* 0075e0e3: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0075e0e7: mov edi, edx */ r_edi = r_edx;
    /* 0075e0e9: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_0075e0ed:; BB(0x0075e0ed);
    /* 0075e0ed: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e0f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e0f2: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0075e0f5: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e0fau); f_00793000();
    /* 0075e0fa: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e0fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e0ff: mov eax, esi */ r_eax = r_esi;
    /* 0075e101: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e103: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e108u); f_0075e54d();
    /* 0075e108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e10a: jne 0x75e11b */ if (!fZ) goto L_0075e11b;
L_0075e10c:; BB(0x0075e10c);
    /* 0075e10c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e10d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e10f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e110: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075e114: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e119u); f_00735ee0();
    /* 0075e119: jmp 0x75e149 */ goto L_0075e149;
L_0075e11b:; BB(0x0075e11b);
    /* 0075e11b: mov eax, esi */ r_eax = r_esi;
    /* 0075e11d: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e11f: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e124u); f_0075e611();
    /* 0075e124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e126: jne 0x75e13c */ if (!fZ) goto L_0075e13c;
L_0075e128:; BB(0x0075e128);
    /* 0075e128: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e12d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e12e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e130: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e131: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e135: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e13au); f_00735db8();
    /* 0075e13a: jmp 0x75e149 */ goto L_0075e149;
L_0075e13c:; BB(0x0075e13c);
    /* 0075e13c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e13d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e13f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e140: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075e144: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e149u); f_00735c90();
L_0075e149:; BB(0x0075e149);
    /* 0075e149: movsx esi, word ptr [edi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0075e14d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075e150: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e153: jne 0x75e0ed */ if (!fZ) goto L_0075e0ed;
L_0075e155:; BB(0x0075e155);
    /* 0075e155: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0075e159: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0075e15d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0075e161: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0075e165:; BB(0x0075e165);
    /* 0075e165: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e16a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e16c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75e171u); f_00736138();
    /* 0075e171: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e173: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75e178u); f_00736458();
    /* 0075e178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e179: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e17b: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e180u); f_00736510();
    /* 0075e180: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e182: je 0x75e18e */ if (fZ) goto L_0075e18e;
L_0075e184:; BB(0x0075e184);
    /* 0075e184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e186: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0075e189: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x75e18eu); f_00736510();
L_0075e18e:; BB(0x0075e18e);
    /* 0075e18e: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0075e191: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075e198: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e19a: je 0x75e1b0 */ if (fZ) goto L_0075e1b0;
L_0075e19c:; BB(0x0075e19c);
    /* 0075e19c: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0075e19f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075e1a1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75e1a4u); call_ind(t); }
    /* 0075e1a4: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 0075e1a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1af: ret  */ FN_RET(0x0075e53c); r_esp += 4; return;
L_0075e1b0:; BB(0x0075e1b0);
    /* 0075e1b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075e1b2: je 0x75dfe8 */ if (fZ) goto L_0075dfe8;
L_0075e1b8:; BB(0x0075e1b8);
    /* 0075e1b8: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0075e1bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e1bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e1c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e1c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e1c3: ret  */ FN_RET(0x0075e53c); r_esp += 4; return;
L_0075e53c:; BB(0x0075e53c);
    /* 0075e53c: jmp 0x75e020 */ goto L_0075e020;
}

void f_0075e54c(void)
{
    FN_ENTER(0x0075e54c);
    /* 0075e54c: or byte ptr [edi - 0x75], dl */ { u32 ad = (u32)(r_edi+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075e54f: clc  */ fC = 0;
    /* 0075e550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e551: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e556u); f_0068d5a8();
    /* 0075e556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e559: je 0x75e56f */ if (fZ) goto L_0075e56f;
L_0075e55b:; BB(0x0075e55b);
    /* 0075e55b: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0075e561: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e562: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e565: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x75e56au); f_006ab474();
    /* 0075e56a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e56d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e56e: ret  */ FN_RET(0x0075e54c); r_esp += 4; return;
L_0075e56f:; BB(0x0075e56f);
    /* 0075e56f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e571: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e572: ret  */ FN_RET(0x0075e54c); r_esp += 4; return;
}

void f_0075e54d(void) /* sub_75E54D */
{
    FN_ENTER(0x0075e54d);
    /* 0075e54d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e54e: mov edi, eax */ r_edi = r_eax;
    /* 0075e550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e551: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e556u); f_0068d5a8();
    /* 0075e556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e559: je 0x75e56f */ if (fZ) goto L_0075e56f;
L_0075e55b:; BB(0x0075e55b);
    /* 0075e55b: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0075e561: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e562: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e565: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x75e56au); f_006ab474();
    /* 0075e56a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e56d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e56e: ret  */ FN_RET(0x0075e54d); r_esp += 4; return;
L_0075e56f:; BB(0x0075e56f);
    /* 0075e56f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e571: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e572: ret  */ FN_RET(0x0075e54d); r_esp += 4; return;
}

void f_0075e55a(void)
{
    FN_ENTER(0x0075e55a);
    /* 0075e55a: adc al, 0x81 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x81u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e55c: out 0xff, eax */ UNSUP(0x0075e55c, "out 0xff, eax");
    /* 0075e55e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e560: add byte ptr [edi + 0x6a], dl */ { u32 ad = (u32)(r_edi+0x6au);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e563: add edx, dword ptr [eax - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e566: or cl, bh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ebx>>8); u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e568: hlt  */ UNSUP(0x0075e568, "hlt");
}

void f_0075e568(void)
{
    FN_ENTER(0x0075e568);
    /* 0075e568: hlt  */ UNSUP(0x0075e568, "hlt");
}

void f_0075e57c(void)
{
    FN_ENTER(0x0075e57c);
    /* 0075e57c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e581: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e582: mov ebx, edx */ r_ebx = r_edx;
    /* 0075e584: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e586: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e587: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e58cu); f_0068d5a8();
    /* 0075e58c: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e58e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e591: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e593: je 0x75e5ad */ if (fZ) goto L_0075e5ad;
L_0075e595:; BB(0x0075e595);
    /* 0075e595: movzx eax, word ptr [ecx + 0x336] */ r_eax = (u32)R16((u32)(r_ecx+0x336u));
    /* 0075e59c: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0075e5a0: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0075e5a2: call dword ptr [ebp + 0x98] */ { u32 t = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, 0x75e5a8u); call_ind(t); }
    /* 0075e5a8: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0075e5aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e5ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e5ac: ret  */ FN_RET(0x0075e57c); r_esp += 4; return;
L_0075e5ad:; BB(0x0075e5ad);
    /* 0075e5ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e5ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e5af: ret  */ FN_RET(0x0075e57c); r_esp += 4; return;
}

void f_0075e580(void) /* sub_75E580 */
{
    FN_ENTER(0x0075e580);
    /* 0075e580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e581: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e582: mov ebx, edx */ r_ebx = r_edx;
    /* 0075e584: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e586: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e587: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e58cu); f_0068d5a8();
    /* 0075e58c: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e58e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e591: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e593: je 0x75e5ad */ if (fZ) goto L_0075e5ad;
L_0075e595:; BB(0x0075e595);
    /* 0075e595: movzx eax, word ptr [ecx + 0x336] */ r_eax = (u32)R16((u32)(r_ecx+0x336u));
    /* 0075e59c: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0075e5a0: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0075e5a2: call dword ptr [ebp + 0x98] */ { u32 t = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, 0x75e5a8u); call_ind(t); }
    /* 0075e5a8: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0075e5aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e5ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e5ac: ret  */ FN_RET(0x0075e580); r_esp += 4; return;
L_0075e5ad:; BB(0x0075e5ad);
    /* 0075e5ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e5ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e5af: ret  */ FN_RET(0x0075e580); r_esp += 4; return;
}

void f_0075e590(void)
{
    FN_ENTER(0x0075e590);
    /* 0075e590: add al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0075e592: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075e593: je 0x75e5ad */ if (fZ) goto L_0075e5ad;
L_0075e595:; BB(0x0075e595);
    /* 0075e595: movzx eax, word ptr [ecx + 0x336] */ r_eax = (u32)R16((u32)(r_ecx+0x336u));
    /* 0075e59c: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0075e5a0: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0075e5a2: call dword ptr [ebp + 0x98] */ { u32 t = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, 0x75e5a8u); call_ind(t); }
    /* 0075e5a8: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0075e5aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e5ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e5ac: ret  */ FN_RET(0x0075e590); r_esp += 4; return;
L_0075e5ad:; BB(0x0075e5ad);
    /* 0075e5ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e5ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e5af: ret  */ FN_RET(0x0075e590); r_esp += 4; return;
}

void f_0075e5a0(void)
{
    FN_ENTER(0x0075e5a0);
    /* 0075e5a0: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0075e5a2: call dword ptr [ebp + 0x98] */ { u32 t = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, 0x75e5a8u); call_ind(t); }
    /* 0075e5a8: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0075e5aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e5ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e5ac: ret  */ FN_RET(0x0075e5a0); r_esp += 4; return;
}

void f_0075e5b0(void) /* sub_75E5B0 */
{
    FN_ENTER(0x0075e5b0);
    /* 0075e5b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5b2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075e5b4: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5b6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75e5bbu); f_0073ec50();
    /* 0075e5bb: mov esi, eax */ r_esi = r_eax;
    /* 0075e5bd: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5bf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75e5c4u); f_0079317c();
    /* 0075e5c4: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e5c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5cb: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x75e5d0u); f_0073566c();
    /* 0075e5d0: mov esi, eax */ r_esi = r_eax;
    /* 0075e5d2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e5d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5d7: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0075e5da: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75e5dfu); f_007336fc();
    /* 0075e5df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5e0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075e5e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e5e5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75e5eau); f_00712624();
    /* 0075e5ea: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075e5f1: or edx, 0xffff0110 */ {  u32 a = r_edx; u32 b = 0xffff0110u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e5f7: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075e5fe: mov eax, esi */ r_eax = r_esi;
    /* 0075e600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e602: ret 4 */ FN_RET(0x0075e5b0); r_esp += 8; return;
}

void f_0075e5b2(void)
{
    FN_ENTER(0x0075e5b2);
    /* 0075e5b2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075e5b4: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5b6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75e5bbu); f_0073ec50();
    /* 0075e5bb: mov esi, eax */ r_esi = r_eax;
    /* 0075e5bd: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5bf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75e5c4u); f_0079317c();
    /* 0075e5c4: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e5c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5cb: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x75e5d0u); f_0073566c();
    /* 0075e5d0: mov esi, eax */ r_esi = r_eax;
    /* 0075e5d2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e5d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5d7: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0075e5da: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75e5dfu); f_007336fc();
    /* 0075e5df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5e0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075e5e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e5e5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75e5eau); f_00712624();
    /* 0075e5ea: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075e5f1: or edx, 0xffff0110 */ {  u32 a = r_edx; u32 b = 0xffff0110u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e5f7: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075e5fe: mov eax, esi */ r_eax = r_esi;
    /* 0075e600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e602: ret 4 */ FN_RET(0x0075e5b2); r_esp += 8; return;
}

void f_0075e5c0(void)
{
    FN_ENTER(0x0075e5c0);
    /* 0075e5c0: mov eax, 0xff00034b */ r_eax = 0xff00034bu;
    /* 0075e5c5: jne 0x75e5ef */ if (!fZ) goto L_0075e5ef;
L_0075e5c7:; BB(0x0075e5c7);
    /* 0075e5c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5cb: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x75e5d0u); f_0073566c();
    /* 0075e5d0: mov esi, eax */ r_esi = r_eax;
    /* 0075e5d2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e5d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5d7: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0075e5da: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75e5dfu); f_007336fc();
    /* 0075e5df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5e0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075e5e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e5e5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75e5eau); f_00712624();
    /* 0075e5ea: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
L_0075e5ef:; BB(0x0075e5ef);
    /* 0075e5ef: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e5f1: or edx, 0xffff0110 */ {  u32 a = r_edx; u32 b = 0xffff0110u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e5f7: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075e5fe: mov eax, esi */ r_eax = r_esi;
    /* 0075e600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e602: ret 4 */ FN_RET(0x0075e5c0); r_esp += 8; return;
}

void f_0075e5dc(void)
{
    FN_ENTER(0x0075e5dc);
    /* 0075e5dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e5dd: std  */ rt_df = 1;
    /* 0075e5de: call dword ptr [edi - 0x27] */ { u32 t = R32((u32)(r_edi+0xffffffd9u)); r_esp -= 4; W32(r_esp, 0x75e5e1u); call_ind(t); }
    /* 0075e5e1: sbb al, 0x24 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e5e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0075e5e5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75e5eau); f_00712624();
    /* 0075e5ea: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075e5f1: or edx, 0xffff0110 */ {  u32 a = r_edx; u32 b = 0xffff0110u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e5f7: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075e5fe: mov eax, esi */ r_eax = r_esi;
    /* 0075e600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e602: ret 4 */ FN_RET(0x0075e5dc); r_esp += 8; return;
}

void f_0075e5fc(void)
{
    FN_ENTER(0x0075e5fc);
    /* 0075e5fc: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0075e5fe: mov eax, esi */ r_eax = r_esi;
    /* 0075e600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e602: ret 4 */ FN_RET(0x0075e5fc); r_esp += 8; return;
}

void f_0075e608(void) /* sub_75E608 */
{
    FN_ENTER(0x0075e608);
    /* 0075e608: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0075e60d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0075e611: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e612: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e613: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e614: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e617: mov edi, edx */ r_edi = r_edx;
    /* 0075e619: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e61b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e61c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e621u); f_0068d5a8();
    /* 0075e621: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e623: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e626: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e628: je 0x75e649 */ if (fZ) goto L_0075e649;
L_0075e62a:; BB(0x0075e62a);
    /* 0075e62a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x75e62fu); f_00807d60();
    /* 0075e62f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e631: jne 0x75e63c */ if (!fZ) goto L_0075e63c;
L_0075e633:; BB(0x0075e633);
    /* 0075e633: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e638: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e63a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e63b: ret  */ FN_RET(0x0075e608); r_esp += 4; return;
L_0075e63c:; BB(0x0075e63c);
    /* 0075e63c: mov eax, ebp */ r_eax = r_ebp;
    /* 0075e63e: mov edx, edi */ r_edx = r_edi;
    /* 0075e640: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e645u); f_0075e54d();
    /* 0075e645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e647: jne 0x75e652 */ if (!fZ) goto L_0075e652;
L_0075e649:; BB(0x0075e649);
    /* 0075e649: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e64b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e64e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e650: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e651: ret  */ FN_RET(0x0075e608); r_esp += 4; return;
L_0075e652:; BB(0x0075e652);
    /* 0075e652: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e659: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65c: call 0x6ab85c */ r_esp -= 4; W32(r_esp, 0x75e661u); f_006ab85c();
    /* 0075e661: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e667: ret  */ FN_RET(0x0075e608); r_esp += 4; return;
}

void f_0075e60e(void)
{
    FN_ENTER(0x0075e60e);
    /* 0075e60e: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e60f: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e611: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e612: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e613: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e614: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e617: mov edi, edx */ r_edi = r_edx;
    /* 0075e619: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e61b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e61c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e621u); f_0068d5a8();
    /* 0075e621: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e623: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e626: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e628: je 0x75e649 */ if (fZ) goto L_0075e649;
L_0075e62a:; BB(0x0075e62a);
    /* 0075e62a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x75e62fu); f_00807d60();
    /* 0075e62f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e631: jne 0x75e63c */ if (!fZ) goto L_0075e63c;
L_0075e633:; BB(0x0075e633);
    /* 0075e633: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e638: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e63a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e63b: ret  */ FN_RET(0x0075e60e); r_esp += 4; return;
L_0075e63c:; BB(0x0075e63c);
    /* 0075e63c: mov eax, ebp */ r_eax = r_ebp;
    /* 0075e63e: mov edx, edi */ r_edx = r_edi;
    /* 0075e640: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e645u); f_0075e54d();
    /* 0075e645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e647: jne 0x75e652 */ if (!fZ) goto L_0075e652;
L_0075e649:; BB(0x0075e649);
    /* 0075e649: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e64b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e64e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e650: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e651: ret  */ FN_RET(0x0075e60e); r_esp += 4; return;
L_0075e652:; BB(0x0075e652);
    /* 0075e652: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e659: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65c: call 0x6ab85c */ r_esp -= 4; W32(r_esp, 0x75e661u); f_006ab85c();
    /* 0075e661: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e667: ret  */ FN_RET(0x0075e60e); r_esp += 4; return;
}

void f_0075e611(void) /* sub_75E611 */
{
    FN_ENTER(0x0075e611);
    /* 0075e611: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e612: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e613: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e614: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e617: mov edi, edx */ r_edi = r_edx;
    /* 0075e619: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e61b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e61c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e621u); f_0068d5a8();
    /* 0075e621: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e623: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e626: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e628: je 0x75e649 */ if (fZ) goto L_0075e649;
L_0075e62a:; BB(0x0075e62a);
    /* 0075e62a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x75e62fu); f_00807d60();
    /* 0075e62f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e631: jne 0x75e63c */ if (!fZ) goto L_0075e63c;
L_0075e633:; BB(0x0075e633);
    /* 0075e633: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e638: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e63a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e63b: ret  */ FN_RET(0x0075e611); r_esp += 4; return;
L_0075e63c:; BB(0x0075e63c);
    /* 0075e63c: mov eax, ebp */ r_eax = r_ebp;
    /* 0075e63e: mov edx, edi */ r_edx = r_edi;
    /* 0075e640: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e645u); f_0075e54d();
    /* 0075e645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e647: jne 0x75e652 */ if (!fZ) goto L_0075e652;
L_0075e649:; BB(0x0075e649);
    /* 0075e649: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e64b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e64e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e650: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e651: ret  */ FN_RET(0x0075e611); r_esp += 4; return;
L_0075e652:; BB(0x0075e652);
    /* 0075e652: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e659: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65c: call 0x6ab85c */ r_esp -= 4; W32(r_esp, 0x75e661u); f_006ab85c();
    /* 0075e661: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e667: ret  */ FN_RET(0x0075e611); r_esp += 4; return;
}

void f_0075e61e(void)
{
    FN_ENTER(0x0075e61e);
    /* 0075e61e: out dx, eax */ UNSUP(0x0075e61e, "out dx, eax");
    /* 0075e61f: dec dword ptr [ebx + 0x4c483d8] */ { u32 ad = (u32)(r_ebx+0x4c483d8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075e626: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e628: je 0x75e649 */ if (fZ) goto L_0075e649;
L_0075e62a:; BB(0x0075e62a);
    /* 0075e62a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x75e62fu); f_00807d60();
    /* 0075e62f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e631: jne 0x75e63c */ if (!fZ) goto L_0075e63c;
L_0075e633:; BB(0x0075e633);
    /* 0075e633: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e638: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e63a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e63b: ret  */ FN_RET(0x0075e61e); r_esp += 4; return;
L_0075e63c:; BB(0x0075e63c);
    /* 0075e63c: mov eax, ebp */ r_eax = r_ebp;
    /* 0075e63e: mov edx, edi */ r_edx = r_edi;
    /* 0075e640: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e645u); f_0075e54d();
    /* 0075e645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e647: jne 0x75e652 */ if (!fZ) goto L_0075e652;
L_0075e649:; BB(0x0075e649);
    /* 0075e649: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e64b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e64e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e650: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e651: ret  */ FN_RET(0x0075e61e); r_esp += 4; return;
L_0075e652:; BB(0x0075e652);
    /* 0075e652: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e659: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65c: call 0x6ab85c */ r_esp -= 4; W32(r_esp, 0x75e661u); f_006ab85c();
    /* 0075e661: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e667: ret  */ FN_RET(0x0075e61e); r_esp += 4; return;
}

void f_0075e634(void)
{
    FN_ENTER(0x0075e634);
    /* 0075e634: rol byte ptr [ebx + 0x5d5b08c4], 0x5f */ { u32 ad = (u32)(r_ebx+0x5d5b08c4u); u32 c = (31u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 0075e63b: ret  */ FN_RET(0x0075e634); r_esp += 4; return;
}

void f_0075e646(void)
{
    FN_ENTER(0x0075e646);
    /* 0075e646: sal byte ptr [ebp + 9], 0x33 */ { u32 ad = (u32)(r_ebp+0x9u); u32 c = (19u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r); fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0075e64a: rol byte ptr [ebx + 0x5d5b08c4], 0x5f */ { u32 ad = (u32)(r_ebx+0x5d5b08c4u); u32 c = (31u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 0075e651: ret  */ FN_RET(0x0075e646); r_esp += 4; return;
}

void f_0075e656(void)
{
    FN_ENTER(0x0075e656);
    /* 0075e656: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e659: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e65c: call 0x6ab85c */ r_esp -= 4; W32(r_esp, 0x75e661u); f_006ab85c();
    /* 0075e661: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e667: ret  */ FN_RET(0x0075e656); r_esp += 4; return;
}

void f_0075e668(void) /* sub_75E668 */
{
    FN_ENTER(0x0075e668);
    /* 0075e668: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e669: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e66a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e66b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e66c: mov edi, ecx */ r_edi = r_ecx;
    /* 0075e66e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e670: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 0075e675: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e678: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e67b: call 0x71ba28 */ r_esp -= 4; W32(r_esp, 0x75e680u); f_0071ba28();
    /* 0075e680: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e683: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e688u); f_0068d5a8();
    /* 0075e688: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e68a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e68d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e68f: je 0x75e75c */ if (fZ) goto L_0075e75c;
L_0075e695:; BB(0x0075e695);
    /* 0075e695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e696: add ebx, 0x460 */ {  u32 a = r_ebx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e69c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e69e: call 0x6ad158 */ r_esp -= 4; W32(r_esp, 0x75e6a3u); f_006ad158();
    /* 0075e6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6a5: je 0x75e6ac */ if (fZ) goto L_0075e6ac;
L_0075e6a7:; BB(0x0075e6a7);
    /* 0075e6a7: mov esi, 0x13 */ r_esi = 0x13u;
L_0075e6ac:; BB(0x0075e6ac);
    /* 0075e6ac: cmp si, word ptr [edi + 0x1e] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_edi+0x1eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0075e6b0: je 0x75e75c */ if (fZ) goto L_0075e75c;
L_0075e6b6:; BB(0x0075e6b6);
    /* 0075e6b6: mov word ptr [edi + 0x1e], si */ W16((u32)(r_edi+0x1eu), (u16)r_esi);
    /* 0075e6ba: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6bd: jne 0x75e6d8 */ if (!fZ) goto L_0075e6d8;
L_0075e6bf:; BB(0x0075e6bf);
    /* 0075e6bf: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c4: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c9: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e6cc: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e6d1u); f_0073ae38();
    /* 0075e6d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e6d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e6d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e6d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e6d5: ret 4 */ FN_RET(0x0075e668); r_esp += 8; return;
L_0075e6d8:; BB(0x0075e6d8);
    /* 0075e6d8: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75e6ddu); f_00816d30();
    /* 0075e6dd: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e0: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e2:; BB(0x0075e6e2);
    /* 0075e6e2: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e5: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e7:; BB(0x0075e6e7);
    /* 0075e6e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e6ea: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x75e6efu); f_006ad17c();
    /* 0075e6ef: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e6f1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f3: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e6f8u); f_0079308c();
    /* 0075e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e6feu); f_00816cb8();
    /* 0075e6fe: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e700: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e706: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e70a: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e70fu); f_00815f24();
    /* 0075e70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0075e712:; BB(0x0075e712);
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
L_0075e75c:; BB(0x0075e75c);
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e668); r_esp += 8; return;
}

void f_0075e680(void)
{
    FN_ENTER(0x0075e680);
    /* 0075e680: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e683: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75e688u); f_0068d5a8();
    /* 0075e688: mov ebx, eax */ r_ebx = r_eax;
    /* 0075e68a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e68d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e68f: je 0x75e75c */ if (fZ) goto L_0075e75c;
L_0075e695:; BB(0x0075e695);
    /* 0075e695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e696: add ebx, 0x460 */ {  u32 a = r_ebx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e69c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e69e: call 0x6ad158 */ r_esp -= 4; W32(r_esp, 0x75e6a3u); f_006ad158();
    /* 0075e6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6a5: je 0x75e6ac */ if (fZ) goto L_0075e6ac;
L_0075e6a7:; BB(0x0075e6a7);
    /* 0075e6a7: mov esi, 0x13 */ r_esi = 0x13u;
L_0075e6ac:; BB(0x0075e6ac);
    /* 0075e6ac: cmp si, word ptr [edi + 0x1e] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_edi+0x1eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0075e6b0: je 0x75e75c */ if (fZ) goto L_0075e75c;
L_0075e6b6:; BB(0x0075e6b6);
    /* 0075e6b6: mov word ptr [edi + 0x1e], si */ W16((u32)(r_edi+0x1eu), (u16)r_esi);
    /* 0075e6ba: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6bd: jne 0x75e6d8 */ if (!fZ) goto L_0075e6d8;
L_0075e6bf:; BB(0x0075e6bf);
    /* 0075e6bf: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c4: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c9: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e6cc: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e6d1u); f_0073ae38();
    /* 0075e6d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e6d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e6d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e6d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e6d5: ret 4 */ FN_RET(0x0075e680); r_esp += 8; return;
L_0075e6d8:; BB(0x0075e6d8);
    /* 0075e6d8: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75e6ddu); f_00816d30();
    /* 0075e6dd: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e0: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e2:; BB(0x0075e6e2);
    /* 0075e6e2: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e5: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e7:; BB(0x0075e6e7);
    /* 0075e6e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e6ea: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x75e6efu); f_006ad17c();
    /* 0075e6ef: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e6f1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f3: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e6f8u); f_0079308c();
    /* 0075e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e6feu); f_00816cb8();
    /* 0075e6fe: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e700: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e706: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e70a: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e70fu); f_00815f24();
    /* 0075e70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0075e712:; BB(0x0075e712);
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
L_0075e75c:; BB(0x0075e75c);
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e680); r_esp += 8; return;
}

void f_0075e698(void)
{
    FN_ENTER(0x0075e698);
    /* 0075e698: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0075e699: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e69b: add byte ptr [ebx - 0x154a1735], cl */ { u32 ad = (u32)(r_ebx+0xeab5e8cbu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e6a1: hlt  */ UNSUP(0x0075e6a1, "hlt");
}

void f_0075e6a8(void)
{
    FN_ENTER(0x0075e6a8);
    /* 0075e6a8: adc eax, dword ptr [eax] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0075e6aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e6ac: cmp si, word ptr [edi + 0x1e] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_edi+0x1eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0075e6b0: je 0x75e75c */ if (fZ) goto L_0075e75c;
L_0075e6b6:; BB(0x0075e6b6);
    /* 0075e6b6: mov word ptr [edi + 0x1e], si */ W16((u32)(r_edi+0x1eu), (u16)r_esi);
    /* 0075e6ba: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6bd: jne 0x75e6d8 */ if (!fZ) goto L_0075e6d8;
L_0075e6bf:; BB(0x0075e6bf);
    /* 0075e6bf: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c4: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c9: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e6cc: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e6d1u); f_0073ae38();
    /* 0075e6d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e6d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e6d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e6d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e6d5: ret 4 */ FN_RET(0x0075e6a8); r_esp += 8; return;
L_0075e6d8:; BB(0x0075e6d8);
    /* 0075e6d8: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75e6ddu); f_00816d30();
    /* 0075e6dd: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e0: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e2:; BB(0x0075e6e2);
    /* 0075e6e2: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e5: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e7:; BB(0x0075e6e7);
    /* 0075e6e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e6ea: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x75e6efu); f_006ad17c();
    /* 0075e6ef: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e6f1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f3: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e6f8u); f_0079308c();
    /* 0075e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e6feu); f_00816cb8();
    /* 0075e6fe: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e700: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e706: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e70a: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e70fu); f_00815f24();
    /* 0075e70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0075e712:; BB(0x0075e712);
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
L_0075e75c:; BB(0x0075e75c);
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e6a8); r_esp += 8; return;
}

void f_0075e6ba(void)
{
    FN_ENTER(0x0075e6ba);
    /* 0075e6ba: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6bd: jne 0x75e6d8 */ if (!fZ) goto L_0075e6d8;
L_0075e6bf:; BB(0x0075e6bf);
    /* 0075e6bf: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c4: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6c9: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e6cc: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e6d1u); f_0073ae38();
    /* 0075e6d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e6d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e6d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e6d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e6d5: ret 4 */ FN_RET(0x0075e6ba); r_esp += 8; return;
L_0075e6d8:; BB(0x0075e6d8);
    /* 0075e6d8: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75e6ddu); f_00816d30();
    /* 0075e6dd: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e0: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e2:; BB(0x0075e6e2);
    /* 0075e6e2: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e5: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e7:; BB(0x0075e6e7);
    /* 0075e6e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e6ea: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x75e6efu); f_006ad17c();
    /* 0075e6ef: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e6f1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f3: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e6f8u); f_0079308c();
    /* 0075e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e6feu); f_00816cb8();
    /* 0075e6fe: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e700: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e706: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e70a: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e70fu); f_00815f24();
    /* 0075e70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0075e712:; BB(0x0075e712);
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e6ba); r_esp += 8; return;
}

void f_0075e6ce(void)
{
    FN_ENTER(0x0075e6ce);
}

void f_0075e6e0(void)
{
    FN_ENTER(0x0075e6e0);
    /* 0075e6e0: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e2:; BB(0x0075e6e2);
    /* 0075e6e2: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e6e5: je 0x75e712 */ if (fZ) goto L_0075e712;
L_0075e6e7:; BB(0x0075e6e7);
    /* 0075e6e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e6ea: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x75e6efu); f_006ad17c();
    /* 0075e6ef: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e6f1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f3: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e6f8u); f_0079308c();
    /* 0075e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e6feu); f_00816cb8();
    /* 0075e6fe: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e700: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e706: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e70a: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e70fu); f_00815f24();
    /* 0075e70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0075e712:; BB(0x0075e712);
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e6e0); r_esp += 8; return;
}

void f_0075e6f2(void)
{
    FN_ENTER(0x0075e6f2);
    /* 0075e6f2: adc ebp, eax */ { u32 c = fC; u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 0075e6f4: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 0075e6f5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0075e6f6: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e6f9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e6feu); f_00816cb8();
    /* 0075e6fe: mov edx, ebp */ r_edx = r_ebp;
    /* 0075e700: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075e706: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e70a: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e70fu); f_00815f24();
    /* 0075e70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e6f2); r_esp += 8; return;
}

void f_0075e702(void)
{
    FN_ENTER(0x0075e702);
    /* 0075e702: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075e704: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e706: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075e709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e70a: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e70fu); f_00815f24();
    /* 0075e70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e702); r_esp += 8; return;
}

void f_0075e712(void)
{
    FN_ENTER(0x0075e712);
    /* 0075e712: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e714: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x75e719u); f_007930b4();
    /* 0075e719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e71a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e71fu); f_00816cb8();
    /* 0075e71f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e724: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e72a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e712); r_esp += 8; return;
}

void f_0075e71e(void)
{
    FN_ENTER(0x0075e71e);
    /* 0075e71e: add byte ptr [eax - 1], ch */ { u32 ad = (u32)(r_eax+0xffffffffu);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e721: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075e723: add byte ptr [ecx + 0xffe5], al */ { u32 ad = (u32)(r_ecx+0xffe5u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e729: add byte ptr [ebp + 0x56], dl */ { u32 ad = (u32)(r_ebp+0x56u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e72c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x75e731u); f_006ded14();
    /* 0075e731: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 0075e735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e736: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x75e73bu); f_00815f24();
    /* 0075e73b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e73c: call 0x79308c */ r_esp -= 4; W32(r_esp, 0x75e741u); f_0079308c();
    /* 0075e741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e742: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75e747u); f_00816cb8();
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e71e); r_esp += 8; return;
}

void f_0075e734(void)
{
    FN_ENTER(0x0075e734);
    /* 0075e734: adc byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 0075e737: jmp 0x5675f2b3 */ UNSUP(0x0075e737, "jump to code that was not decoded");
}

void f_0075e740(void)
{
    FN_ENTER(0x0075e740);
    goto L_0075e740;
L_0075e6ca:; BB(0x0075e6ca);
    /* 0075e6ca: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0075e6cb: cmp al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a - b) & 0xffu;   }
    UNSUP(0x0075e6cd, "falls out of decoded code");
L_0075e740:; BB(0x0075e740);
    /* 0075e740: add byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 0075e743: jno 0x75e6ca */ if (!fO) goto L_0075e6ca;
L_0075e745:; BB(0x0075e745);
    /* 0075e745: or eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075e747: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e740); r_esp += 8; return;
}

void f_0075e74a(void)
{
    FN_ENTER(0x0075e74a);
    /* 0075e74a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e74f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e754: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075e757: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75e75cu); f_0073ae38();
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e74a); r_esp += 8; return;
}

void f_0075e75c(void)
{
    FN_ENTER(0x0075e75c);
    /* 0075e75c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e75e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e75f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e760: ret 4 */ FN_RET(0x0075e75c); r_esp += 8; return;
}

void f_0075e764(void) /* sub_75E764 */
{
    FN_ENTER(0x0075e764);
    /* 0075e764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e765: mov edi, ecx */ r_edi = r_ecx;
    /* 0075e767: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075e76a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e76c: je 0x75e778 */ if (fZ) goto L_0075e778;
L_0075e76e:; BB(0x0075e76e);
    /* 0075e76e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e773u); f_007365f4();
    /* 0075e773: cmp eax, dword ptr [edi + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e776: jne 0x75e77c */ if (!fZ) goto L_0075e77c;
L_0075e778:; BB(0x0075e778);
    /* 0075e778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e77a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e77b: ret  */ FN_RET(0x0075e764); r_esp += 4; return;
L_0075e77c:; BB(0x0075e77c);
    /* 0075e77c: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075e77f: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e784u); f_007365f4();
    /* 0075e784: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0075e787: mov eax, 1 */ r_eax = 0x1u;
    /* 0075e78c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e78d: ret  */ FN_RET(0x0075e764); r_esp += 4; return;
}

void f_0075e770(void)
{
    FN_ENTER(0x0075e770);
    goto L_0075e770;
L_0075e76f:; BB(0x0075e76f);
    /* 0075e76f: cmp dword ptr [esi - 3], 0x2c473bff */ {  u32 a = R32((u32)(r_esi+0xfffffffdu)); u32 b = 0x2c473bffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_0075e770:; BB(0x0075e770);
    /* 0075e770: jle 0x75e76f */ if ((fZ||fS!=fO)) goto L_0075e76f;
    /* 0075e776: jne 0x75e77c */ if (!fZ) goto L_0075e77c;
L_0075e778:; BB(0x0075e778);
    /* 0075e778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e77a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e77b: ret  */ FN_RET(0x0075e770); r_esp += 4; return;
L_0075e77c:; BB(0x0075e77c);
    /* 0075e77c: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075e77f: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75e784u); f_007365f4();
    /* 0075e784: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0075e787: mov eax, 1 */ r_eax = 0x1u;
    /* 0075e78c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e78d: ret  */ FN_RET(0x0075e770); r_esp += 4; return;
}

void f_0075e77e(void)
{
    FN_ENTER(0x0075e77e);
    /* 0075e77e: xor al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fO = 0; }
    /* 0075e780: jo 0x75e800 */ if (fO) goto L_0075e800;
L_0075e782:; BB(0x0075e782);
    /* 0075e782: std  */ rt_df = 1;
    /* 0075e783: dec dword ptr [ecx + 0x1b82c47] */ { u32 ad = (u32)(r_ecx+0x1b82c47u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075e789: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e78b: add byte ptr [edi - 0x3d], bl */ { u32 ad = (u32)(r_edi+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e78e: nop  */ ;
    /* 0075e78f: nop  */ ;
    /* 0075e790: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0075e794: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0075e798: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7a1: mov ebx, edx */ r_ebx = r_edx;
    /* 0075e7a3: mov edi, eax */ r_edi = r_eax;
    /* 0075e7a5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0075e7a9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0075e7ad: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e7b2u); f_0075e580();
    /* 0075e7b2: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0075e7b7: cmp ax, word ptr [edi] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0075e7ba: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7bc:; BB(0x0075e7bc);
    /* 0075e7bc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7c0: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e7c2: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7c4:; BB(0x0075e7c4);
    /* 0075e7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e7c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7cb: ret  */ FN_RET(0x0075e77e); r_esp += 4; return;
L_0075e7cc:; BB(0x0075e7cc);
    /* 0075e7cc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0075e7cf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7d3: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0075e7d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0075e7da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7df: ret  */ FN_RET(0x0075e77e); r_esp += 4; return;
L_0075e800:; BB(0x0075e800);
    /* 0075e800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e802: jne 0x75e817 */ if (!fZ) goto L_0075e817;
L_0075e804:; BB(0x0075e804);
    /* 0075e804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e805: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e807: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e808: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e80c: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e811u); f_00735ee0();
    /* 0075e811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e816: ret  */ FN_RET(0x0075e77e); r_esp += 4; return;
L_0075e817:; BB(0x0075e817);
    /* 0075e817: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0075e81b: mov eax, esi */ r_eax = r_esi;
    /* 0075e81d: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e822u); f_0075e611();
    /* 0075e822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e824: jne 0x75e83e */ if (!fZ) goto L_0075e83e;
L_0075e826:; BB(0x0075e826);
    /* 0075e826: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0075e833: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e838u); f_00735db8();
    /* 0075e838: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e83d: ret  */ FN_RET(0x0075e77e); r_esp += 4; return;
L_0075e83e:; BB(0x0075e83e);
    /* 0075e83e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e83f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e842: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e846: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e84bu); f_00735c90();
    /* 0075e84b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e84f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e850: ret  */ FN_RET(0x0075e77e); r_esp += 4; return;
}

void f_0075e78e(void)
{
    FN_ENTER(0x0075e78e);
    /* 0075e78e: nop  */ ;
    /* 0075e78f: nop  */ ;
    /* 0075e790: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0075e794: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0075e798: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7a1: mov ebx, edx */ r_ebx = r_edx;
    /* 0075e7a3: mov edi, eax */ r_edi = r_eax;
    /* 0075e7a5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0075e7a9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0075e7ad: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e7b2u); f_0075e580();
    /* 0075e7b2: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0075e7b7: cmp ax, word ptr [edi] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0075e7ba: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7bc:; BB(0x0075e7bc);
    /* 0075e7bc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7c0: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e7c2: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7c4:; BB(0x0075e7c4);
    /* 0075e7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e7c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7cb: ret  */ FN_RET(0x0075e78e); r_esp += 4; return;
L_0075e7cc:; BB(0x0075e7cc);
    /* 0075e7cc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0075e7cf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7d3: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0075e7d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0075e7da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7df: ret  */ FN_RET(0x0075e78e); r_esp += 4; return;
}

void f_0075e790(void) /* sub_75E790 */
{
    FN_ENTER(0x0075e790);
    /* 0075e790: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0075e794: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0075e798: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7a1: mov ebx, edx */ r_ebx = r_edx;
    /* 0075e7a3: mov edi, eax */ r_edi = r_eax;
    /* 0075e7a5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0075e7a9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0075e7ad: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e7b2u); f_0075e580();
    /* 0075e7b2: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0075e7b7: cmp ax, word ptr [edi] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0075e7ba: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7bc:; BB(0x0075e7bc);
    /* 0075e7bc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7c0: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e7c2: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7c4:; BB(0x0075e7c4);
    /* 0075e7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e7c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7cb: ret  */ FN_RET(0x0075e790); r_esp += 4; return;
L_0075e7cc:; BB(0x0075e7cc);
    /* 0075e7cc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0075e7cf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7d3: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0075e7d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0075e7da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7df: ret  */ FN_RET(0x0075e790); r_esp += 4; return;
}

void f_0075e79a(void)
{
    FN_ENTER(0x0075e79a);
    /* 0075e79a: and al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7a1: mov ebx, edx */ r_ebx = r_edx;
    /* 0075e7a3: mov edi, eax */ r_edi = r_eax;
    /* 0075e7a5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0075e7a9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0075e7ad: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e7b2u); f_0075e580();
    /* 0075e7b2: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0075e7b7: cmp ax, word ptr [edi] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0075e7ba: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7bc:; BB(0x0075e7bc);
    /* 0075e7bc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7c0: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e7c2: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7c4:; BB(0x0075e7c4);
    /* 0075e7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e7c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7cb: ret  */ FN_RET(0x0075e79a); r_esp += 4; return;
L_0075e7cc:; BB(0x0075e7cc);
    /* 0075e7cc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0075e7cf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7d3: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0075e7d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0075e7da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7df: ret  */ FN_RET(0x0075e79a); r_esp += 4; return;
}

void f_0075e79c(void)
{
    FN_ENTER(0x0075e79c);
    /* 0075e79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e79e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7a1: mov ebx, edx */ r_ebx = r_edx;
    /* 0075e7a3: mov edi, eax */ r_edi = r_eax;
    /* 0075e7a5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0075e7a9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0075e7ad: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e7b2u); f_0075e580();
    /* 0075e7b2: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0075e7b7: cmp ax, word ptr [edi] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0075e7ba: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7bc:; BB(0x0075e7bc);
    /* 0075e7bc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7c0: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e7c2: jne 0x75e7cc */ if (!fZ) goto L_0075e7cc;
L_0075e7c4:; BB(0x0075e7c4);
    /* 0075e7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075e7c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7cb: ret  */ FN_RET(0x0075e79c); r_esp += 4; return;
L_0075e7cc:; BB(0x0075e7cc);
    /* 0075e7cc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0075e7cf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0075e7d3: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0075e7d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0075e7da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7df: ret  */ FN_RET(0x0075e79c); r_esp += 4; return;
}

void f_0075e7a0(void)
{
    FN_ENTER(0x0075e7a0);
    /* 0075e7a0: adc al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 0075e7a2: fimul dword ptr [ebx + 0x24448df8] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebx+0x24448df8u));
    /* 0075e7a8: adc byte ptr [ebp - 0x17f3dbac], cl */ { u32 ad = (u32)(r_ebp+0xe80c2454u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 0075e7ae: into  */ UNSUP(0x0075e7ae, "into ");
    /* 0075e7af: std  */ rt_df = 1;
    UNSUP(0x0075e7b0, "falls out of decoded code");
}

void f_0075e7b0(void)
{
    FN_ENTER(0x0075e7b0);
}

void f_0075e7c8(void)
{
    FN_ENTER(0x0075e7c8);
    /* 0075e7c8: adc al, 0x5b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x5bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 0075e7ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7cb: ret  */ FN_RET(0x0075e7c8); r_esp += 4; return;
}

void f_0075e7d8(void)
{
    FN_ENTER(0x0075e7d8);
    /* 0075e7d8: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e7da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075e7df: ret  */ FN_RET(0x0075e7d8); r_esp += 4; return;
}

void f_0075e7e0(void) /* sub_75E7E0 */
{
    FN_ENTER(0x0075e7e0);
    /* 0075e7e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e7e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e7e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7e5: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 0075e7ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e7eb: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e7f0u); f_00793000();
    /* 0075e7f0: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e7f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7f5: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0075e7f9: mov eax, esi */ r_eax = r_esi;
    /* 0075e7fb: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e800u); f_0075e54d();
    /* 0075e800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e802: jne 0x75e817 */ if (!fZ) goto L_0075e817;
L_0075e804:; BB(0x0075e804);
    /* 0075e804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e805: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e807: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e808: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e80c: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e811u); f_00735ee0();
    /* 0075e811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e816: ret  */ FN_RET(0x0075e7e0); r_esp += 4; return;
L_0075e817:; BB(0x0075e817);
    /* 0075e817: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0075e81b: mov eax, esi */ r_eax = r_esi;
    /* 0075e81d: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e822u); f_0075e611();
    /* 0075e822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e824: jne 0x75e83e */ if (!fZ) goto L_0075e83e;
L_0075e826:; BB(0x0075e826);
    /* 0075e826: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0075e833: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e838u); f_00735db8();
    /* 0075e838: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e83d: ret  */ FN_RET(0x0075e7e0); r_esp += 4; return;
L_0075e83e:; BB(0x0075e83e);
    /* 0075e83e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e83f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e842: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e846: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e84bu); f_00735c90();
    /* 0075e84b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e84f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e850: ret  */ FN_RET(0x0075e7e0); r_esp += 4; return;
}

void f_0075e7e8(void)
{
    FN_ENTER(0x0075e7e8);
    /* 0075e7e8: and al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e7ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e7eb: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x75e7f0u); f_00793000();
    /* 0075e7f0: mov ebp, eax */ r_ebp = r_eax;
    /* 0075e7f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075e7f5: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0075e7f9: mov eax, esi */ r_eax = r_esi;
    /* 0075e7fb: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e800u); f_0075e54d();
    /* 0075e800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e802: jne 0x75e817 */ if (!fZ) goto L_0075e817;
L_0075e804:; BB(0x0075e804);
    /* 0075e804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e805: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e807: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e808: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e80c: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e811u); f_00735ee0();
    /* 0075e811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e816: ret  */ FN_RET(0x0075e7e8); r_esp += 4; return;
L_0075e817:; BB(0x0075e817);
    /* 0075e817: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0075e81b: mov eax, esi */ r_eax = r_esi;
    /* 0075e81d: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e822u); f_0075e611();
    /* 0075e822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e824: jne 0x75e83e */ if (!fZ) goto L_0075e83e;
L_0075e826:; BB(0x0075e826);
    /* 0075e826: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0075e833: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e838u); f_00735db8();
    /* 0075e838: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e83d: ret  */ FN_RET(0x0075e7e8); r_esp += 4; return;
L_0075e83e:; BB(0x0075e83e);
    /* 0075e83e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e83f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e842: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e846: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e84bu); f_00735c90();
    /* 0075e84b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e84f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e850: ret  */ FN_RET(0x0075e7e8); r_esp += 4; return;
}

void f_0075e7f6(void)
{
    FN_ENTER(0x0075e7f6);
    /* 0075e7f6: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e7f7: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e7f9: mov eax, esi */ r_eax = r_esi;
    /* 0075e7fb: call 0x75e54d */ r_esp -= 4; W32(r_esp, 0x75e800u); f_0075e54d();
    /* 0075e800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e802: jne 0x75e817 */ if (!fZ) goto L_0075e817;
L_0075e804:; BB(0x0075e804);
    /* 0075e804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e805: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e807: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e808: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e80c: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e811u); f_00735ee0();
    /* 0075e811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e816: ret  */ FN_RET(0x0075e7f6); r_esp += 4; return;
L_0075e817:; BB(0x0075e817);
    /* 0075e817: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0075e81b: mov eax, esi */ r_eax = r_esi;
    /* 0075e81d: call 0x75e611 */ r_esp -= 4; W32(r_esp, 0x75e822u); f_0075e611();
    /* 0075e822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e824: jne 0x75e83e */ if (!fZ) goto L_0075e83e;
L_0075e826:; BB(0x0075e826);
    /* 0075e826: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0075e833: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e838u); f_00735db8();
    /* 0075e838: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e83d: ret  */ FN_RET(0x0075e7f6); r_esp += 4; return;
L_0075e83e:; BB(0x0075e83e);
    /* 0075e83e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e83f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e842: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e846: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e84bu); f_00735c90();
    /* 0075e84b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e84f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e850: ret  */ FN_RET(0x0075e7f6); r_esp += 4; return;
}

void f_0075e804(void)
{
    FN_ENTER(0x0075e804);
    /* 0075e804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e805: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e807: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e808: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e80c: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75e811u); f_00735ee0();
    /* 0075e811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e816: ret  */ FN_RET(0x0075e804); r_esp += 4; return;
}

void f_0075e812(void)
{
    FN_ENTER(0x0075e812);
    /* 0075e812: les ecx, ptr [eax] */ UNSUP(0x0075e812, "les ecx, ptr [eax]");
    /* 0075e814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e816: ret  */ FN_RET(0x0075e812); r_esp += 4; return;
}

void f_0075e822(void)
{
    FN_ENTER(0x0075e822);
    /* 0075e822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e824: jne 0x75e83e */ if (!fZ) goto L_0075e83e;
L_0075e826:; BB(0x0075e826);
    /* 0075e826: push 0xfffd3901 */ { u32 v = 0xfffd3901u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0075e833: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e838u); f_00735db8();
    /* 0075e838: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e83d: ret  */ FN_RET(0x0075e822); r_esp += 4; return;
L_0075e83e:; BB(0x0075e83e);
    /* 0075e83e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e83f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e842: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075e846: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75e84bu); f_00735c90();
    /* 0075e84b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e84f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e850: ret  */ FN_RET(0x0075e822); r_esp += 4; return;
}

void f_0075e82c(void)
{
    FN_ENTER(0x0075e82c);
    /* 0075e82c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e82f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0075e833: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x75e838u); f_00735db8();
    /* 0075e838: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e83d: ret  */ FN_RET(0x0075e82c); r_esp += 4; return;
}

void f_0075e83c(void)
{
    FN_ENTER(0x0075e83c);
    /* 0075e83c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075e83d: ret  */ FN_RET(0x0075e83c); r_esp += 4; return;
}

void f_0075e852(void)
{
    FN_ENTER(0x0075e852);
    /* 0075e852: nop  */ ;
    /* 0075e853: nop  */ ;
    /* 0075e854: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e857: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0075e85b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e85f: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0075e863: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e868u); f_0075e580();
    /* 0075e868: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e86b: ret  */ FN_RET(0x0075e852); r_esp += 4; return;
}

void f_0075e854(void) /* sub_75E854 */
{
    FN_ENTER(0x0075e854);
    /* 0075e854: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e857: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0075e85b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075e85f: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0075e863: call 0x75e580 */ r_esp -= 4; W32(r_esp, 0x75e868u); f_0075e580();
    /* 0075e868: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075e86b: ret  */ FN_RET(0x0075e854); r_esp += 4; return;
}

void f_0075e862(void)
{
    FN_ENTER(0x0075e862);
    /* 0075e862: sbb al, ch */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = ((u64)a < (u64)b + c); }
    /* 0075e864: sbb ch, bh */ { u32 c = fC; u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a - b - c) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    UNSUP(0x0075e866, "falls out of decoded code");
}

void f_0075e86c(void) /* sub_75E86C */
{
    FN_ENTER(0x0075e86c);
    /* 0075e86c: mov dword ptr [0xa9ad4c], 0x3f800000 */ W32((u32)(0xa9ad4cu), 0x3f800000u);
    /* 0075e876: mov dword ptr [0xa9ad50], 0x41000000 */ W32((u32)(0xa9ad50u), 0x41000000u);
    /* 0075e880: mov dword ptr [0xa9ad54], 0x3fc00000 */ W32((u32)(0xa9ad54u), 0x3fc00000u);
    /* 0075e88a: ret  */ FN_RET(0x0075e86c); r_esp += 4; return;
}

void f_0075e87a(void)
{
    FN_ENTER(0x0075e87a);
    /* 0075e87a: test eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 0075e87f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075e880: mov dword ptr [0xa9ad54], 0x3fc00000 */ W32((u32)(0xa9ad54u), 0x3fc00000u);
    /* 0075e88a: ret  */ FN_RET(0x0075e87a); r_esp += 4; return;
}

void f_0075e88c(void) /* sub_75E88C */
{
    FN_ENTER(0x0075e88c);
    /* 0075e88c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e88d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075e88f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075e891: call 0x75e8b0 */ r_esp -= 4; W32(r_esp, 0x75e896u); f_0075e8b0();
    /* 0075e896: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075e89a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e89c: jne 0x75e8a2 */ if (!fZ) goto L_0075e8a2;
L_0075e89e:; BB(0x0075e89e);
    /* 0075e89e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e89f: ret 4 */ FN_RET(0x0075e88c); r_esp += 8; return;
L_0075e8a2:; BB(0x0075e8a2);
    /* 0075e8a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75e8a8u); f_005c2f74();
    /* 0075e8a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e8a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e8aa: ret 4 */ FN_RET(0x0075e88c); r_esp += 8; return;
}

void f_0075e892(void)
{
    FN_ENTER(0x0075e892);
    /* 0075e892: sbb al, byte ptr [eax] */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075e894: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e896: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075e89a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e89c: jne 0x75e8a2 */ if (!fZ) goto L_0075e8a2;
L_0075e89e:; BB(0x0075e89e);
    /* 0075e89e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e89f: ret 4 */ FN_RET(0x0075e892); r_esp += 8; return;
L_0075e8a2:; BB(0x0075e8a2);
    /* 0075e8a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75e8a8u); f_005c2f74();
    /* 0075e8a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e8a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075e8aa: ret 4 */ FN_RET(0x0075e892); r_esp += 8; return;
}

void f_0075e8ac(void)
{
    FN_ENTER(0x0075e8ac);
    /* 0075e8ac: add byte ptr [eax - 0x74aa6f70], dl */ { u32 ad = (u32)(r_eax+0x8b559090u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e8b2: in al, dx */ UNSUP(0x0075e8b2, "in al, dx");
    /* 0075e8b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8b5: push 0x8f341c */ { u32 v = 0x8f341cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075e8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075e8c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e8cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075e8ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075e8d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075e8d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075e8d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075e8da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e8e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8e4: mov dword ptr [eax], 0xb42cd8 */ W32((u32)(r_eax), 0xb42cd8u);
    /* 0075e8ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8eb: call 0x826028 */ r_esp -= 4; W32(r_esp, 0x75e8f0u); f_00826028();
    /* 0075e8f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e8f1: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75e8f6u); f_008262f4();
    /* 0075e8f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8f9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075e8fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e8fe: je 0x75e90f */ if (fZ) goto L_0075e90f;
L_0075e900:; BB(0x0075e900);
    /* 0075e900: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75e905u); f_0073d160();
    /* 0075e905: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e908: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075e90f:; BB(0x0075e90f);
    /* 0075e90f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075e912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e914: je 0x75e925 */ if (fZ) goto L_0075e925;
L_0075e916:; BB(0x0075e916);
    /* 0075e916: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e91bu); f_007127b0();
    /* 0075e91b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e91e: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075e925:; BB(0x0075e925);
    /* 0075e925: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075e928: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e92a: je 0x75e93b */ if (fZ) goto L_0075e93b;
L_0075e92c:; BB(0x0075e92c);
    /* 0075e92c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e931u); f_007127b0();
    /* 0075e931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075e93b:; BB(0x0075e93b);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e8ac); r_esp += 4; return;
}

void f_0075e8b0(void) /* sub_75E8B0 */
{
    FN_ENTER(0x0075e8b0);
    /* 0075e8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0075e8b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8b5: push 0x8f341c */ { u32 v = 0x8f341cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075e8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075e8c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e8cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075e8ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075e8d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075e8d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075e8d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075e8da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e8e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8e4: mov dword ptr [eax], 0xb42cd8 */ W32((u32)(r_eax), 0xb42cd8u);
    /* 0075e8ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8eb: call 0x826028 */ r_esp -= 4; W32(r_esp, 0x75e8f0u); f_00826028();
    /* 0075e8f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e8f1: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75e8f6u); f_008262f4();
    /* 0075e8f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8f9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075e8fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e8fe: je 0x75e90f */ if (fZ) goto L_0075e90f;
L_0075e900:; BB(0x0075e900);
    /* 0075e900: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75e905u); f_0073d160();
    /* 0075e905: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e908: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075e90f:; BB(0x0075e90f);
    /* 0075e90f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075e912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e914: je 0x75e925 */ if (fZ) goto L_0075e925;
L_0075e916:; BB(0x0075e916);
    /* 0075e916: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e91bu); f_007127b0();
    /* 0075e91b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e91e: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075e925:; BB(0x0075e925);
    /* 0075e925: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075e928: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e92a: je 0x75e93b */ if (fZ) goto L_0075e93b;
L_0075e92c:; BB(0x0075e92c);
    /* 0075e92c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e931u); f_007127b0();
    /* 0075e931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075e93b:; BB(0x0075e93b);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e8b0); r_esp += 4; return;
}

void f_0075e8c6(void)
{
    FN_ENTER(0x0075e8c6);
    /* 0075e8c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e8c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e8cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075e8ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075e8d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075e8d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075e8d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075e8da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e8e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8e4: mov dword ptr [eax], 0xb42cd8 */ W32((u32)(r_eax), 0xb42cd8u);
    /* 0075e8ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8eb: call 0x826028 */ r_esp -= 4; W32(r_esp, 0x75e8f0u); f_00826028();
    /* 0075e8f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e8f1: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75e8f6u); f_008262f4();
    /* 0075e8f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8f9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075e8fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e8fe: je 0x75e90f */ if (fZ) goto L_0075e90f;
L_0075e900:; BB(0x0075e900);
    /* 0075e900: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75e905u); f_0073d160();
    /* 0075e905: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e908: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075e90f:; BB(0x0075e90f);
    /* 0075e90f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075e912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e914: je 0x75e925 */ if (fZ) goto L_0075e925;
L_0075e916:; BB(0x0075e916);
    /* 0075e916: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e91bu); f_007127b0();
    /* 0075e91b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e91e: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075e925:; BB(0x0075e925);
    /* 0075e925: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075e928: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e92a: je 0x75e93b */ if (fZ) goto L_0075e93b;
L_0075e92c:; BB(0x0075e92c);
    /* 0075e92c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e931u); f_007127b0();
    /* 0075e931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075e93b:; BB(0x0075e93b);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e8c6); r_esp += 4; return;
}

void f_0075e8da(void)
{
    FN_ENTER(0x0075e8da);
    /* 0075e8da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e8e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8e4: mov dword ptr [eax], 0xb42cd8 */ W32((u32)(r_eax), 0xb42cd8u);
    /* 0075e8ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e8eb: call 0x826028 */ r_esp -= 4; W32(r_esp, 0x75e8f0u); f_00826028();
    /* 0075e8f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e8f1: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75e8f6u); f_008262f4();
    /* 0075e8f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8f9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075e8fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e8fe: je 0x75e90f */ if (fZ) goto L_0075e90f;
L_0075e900:; BB(0x0075e900);
    /* 0075e900: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75e905u); f_0073d160();
    /* 0075e905: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e908: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075e90f:; BB(0x0075e90f);
    /* 0075e90f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075e912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e914: je 0x75e925 */ if (fZ) goto L_0075e925;
L_0075e916:; BB(0x0075e916);
    /* 0075e916: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e91bu); f_007127b0();
    /* 0075e91b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e91e: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075e925:; BB(0x0075e925);
    /* 0075e925: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075e928: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e92a: je 0x75e93b */ if (fZ) goto L_0075e93b;
L_0075e92c:; BB(0x0075e92c);
    /* 0075e92c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e931u); f_007127b0();
    /* 0075e931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075e93b:; BB(0x0075e93b);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e8da); r_esp += 4; return;
}

void f_0075e8f6(void)
{
    FN_ENTER(0x0075e8f6);
    /* 0075e8f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e8f9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075e8fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e8fe: je 0x75e90f */ if (fZ) goto L_0075e90f;
L_0075e900:; BB(0x0075e900);
    /* 0075e900: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75e905u); f_0073d160();
    /* 0075e905: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e908: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075e90f:; BB(0x0075e90f);
    /* 0075e90f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075e912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e914: je 0x75e925 */ if (fZ) goto L_0075e925;
L_0075e916:; BB(0x0075e916);
    /* 0075e916: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e91bu); f_007127b0();
    /* 0075e91b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e91e: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075e925:; BB(0x0075e925);
    /* 0075e925: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075e928: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e92a: je 0x75e93b */ if (fZ) goto L_0075e93b;
L_0075e92c:; BB(0x0075e92c);
    /* 0075e92c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e931u); f_007127b0();
    /* 0075e931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075e93b:; BB(0x0075e93b);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e8f6); r_esp += 4; return;
}

void f_0075e90c(void)
{
    FN_ENTER(0x0075e90c);
    /* 0075e90c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e90e: add byte ptr [ebx - 0x367acfb8], cl */ { u32 ad = (u32)(r_ebx+0xc9853048u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0075e914: je 0x75e925 */ if (fZ) goto L_0075e925;
L_0075e916:; BB(0x0075e916);
    /* 0075e916: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e91bu); f_007127b0();
    /* 0075e91b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e91e: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075e925:; BB(0x0075e925);
    /* 0075e925: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075e928: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075e92a: je 0x75e93b */ if (fZ) goto L_0075e93b;
L_0075e92c:; BB(0x0075e92c);
    /* 0075e92c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e931u); f_007127b0();
    /* 0075e931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075e93b:; BB(0x0075e93b);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e90c); r_esp += 4; return;
}

void f_0075e920(void)
{
    FN_ENTER(0x0075e920);
    /* 0075e920: xor byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0075e922: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e924: add byte ptr [ebx - 0x367ad3b8], cl */ { u32 ad = (u32)(r_ebx+0xc9852c48u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0075e92a: je 0x75e93b */ if (fZ) goto L_0075e93b;
L_0075e92c:; BB(0x0075e92c);
    /* 0075e92c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75e931u); f_007127b0();
    /* 0075e931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075e93b:; BB(0x0075e93b);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e920); r_esp += 4; return;
}

void f_0075e934(void)
{
    FN_ENTER(0x0075e934);
    /* 0075e934: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0075e93b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075e942: mov ecx, eax */ r_ecx = r_eax;
    /* 0075e944: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75e949u); f_008171e8();
    /* 0075e949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e94c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e953: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e956: ret  */ FN_RET(0x0075e934); r_esp += 4; return;
}

void f_0075e94a(void)
{
    FN_ENTER(0x0075e94a);
    /* 0075e94a: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e94b: hlt  */ UNSUP(0x0075e94b, "hlt");
}

void f_0075e958(void) /* sub_75E958 */
{
    FN_ENTER(0x0075e958);
    /* 0075e958: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e959: mov ebp, esp */ r_ebp = r_esp;
    /* 0075e95b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e95d: push 0x8f3438 */ { u32 v = 0x8f3438u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e962: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075e968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e969: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075e970: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e973: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075e976: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075e979: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075e97c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075e97f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075e982: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075e985: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075e988: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e989: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0075e98c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075e98f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75e994u); f_008193cc();
    /* 0075e994: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e99b: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e99e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075e9a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075e9a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9a5: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0075e9a8: mov dword ptr [esi], 0xb42cd8 */ W32((u32)(r_esi), 0xb42cd8u);
    /* 0075e9ae: mov eax, dword ptr [0x9f57bc] */ r_eax = R32((u32)(0x9f57bcu));
    /* 0075e9b3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075e9b6: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0075e9b9: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e958); r_esp += 12; return;
}

void f_0075e95a(void)
{
    FN_ENTER(0x0075e95a);
    /* 0075e95a: in al, dx */ UNSUP(0x0075e95a, "in al, dx");
    /* 0075e95b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075e95d: push 0x8f3438 */ { u32 v = 0x8f3438u; r_esp -= 4; W32(r_esp, v); }
    /* 0075e962: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075e968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e969: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075e970: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e973: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075e976: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075e979: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075e97c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075e97f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075e982: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075e985: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075e988: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e989: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0075e98c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075e98f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75e994u); f_008193cc();
    /* 0075e994: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e99b: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e99e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075e9a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075e9a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9a5: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0075e9a8: mov dword ptr [esi], 0xb42cd8 */ W32((u32)(r_esi), 0xb42cd8u);
    /* 0075e9ae: mov eax, dword ptr [0x9f57bc] */ r_eax = R32((u32)(0x9f57bcu));
    /* 0075e9b3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075e9b6: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0075e9b9: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e95a); r_esp += 12; return;
}

void f_0075e966(void)
{
    FN_ENTER(0x0075e966);
    /* 0075e966: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075e969: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075e970: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e973: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075e976: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075e979: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075e97c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075e97f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075e982: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075e985: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075e988: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075e989: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0075e98c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075e98f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75e994u); f_008193cc();
    /* 0075e994: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e99b: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e99e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075e9a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075e9a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9a5: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0075e9a8: mov dword ptr [esi], 0xb42cd8 */ W32((u32)(r_esi), 0xb42cd8u);
    /* 0075e9ae: mov eax, dword ptr [0x9f57bc] */ r_eax = R32((u32)(0x9f57bcu));
    /* 0075e9b3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075e9b6: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0075e9b9: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e966); r_esp += 12; return;
}

void f_0075e980(void)
{
    FN_ENTER(0x0075e980);
    /* 0075e980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e981: or byte ptr [ebx + 0x4d890c45], cl */ { u32 ad = (u32)(r_ebx+0x4d890c45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075e987: fcom dword ptr [edx - 0x77] */ fx_compare(ST(0), R_F32((u32)(r_edx+0xffffff89u))); 
    /* 0075e98a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075e98b: in al, dx */ UNSUP(0x0075e98b, "in al, dx");
    /* 0075e98c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075e98f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75e994u); f_008193cc();
    /* 0075e994: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075e99b: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e99e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075e9a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075e9a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9a5: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0075e9a8: mov dword ptr [esi], 0xb42cd8 */ W32((u32)(r_esi), 0xb42cd8u);
    /* 0075e9ae: mov eax, dword ptr [0x9f57bc] */ r_eax = R32((u32)(0x9f57bcu));
    /* 0075e9b3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075e9b6: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0075e9b9: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e980); r_esp += 12; return;
}

void f_0075e98e(void)
{
    FN_ENTER(0x0075e98e);
    /* 0075e98e: call 0xc20227b */ r_esp -= 4; W32(r_esp, 0x75e993u); f_0c20227b();
    /* 0075e993: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0075e995: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075e996: cld  */ rt_df = 0;
    /* 0075e997: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e999: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e99b: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e99e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075e9a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075e9a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9a5: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0075e9a8: mov dword ptr [esi], 0xb42cd8 */ W32((u32)(r_esi), 0xb42cd8u);
    /* 0075e9ae: mov eax, dword ptr [0x9f57bc] */ r_eax = R32((u32)(0x9f57bcu));
    /* 0075e9b3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075e9b6: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0075e9b9: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e98e); r_esp += 12; return;
}

void f_0075e99e(void)
{
    FN_ENTER(0x0075e99e);
    /* 0075e99e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075e9a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075e9a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9a5: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0075e9a8: mov dword ptr [esi], 0xb42cd8 */ W32((u32)(r_esi), 0xb42cd8u);
    /* 0075e9ae: mov eax, dword ptr [0x9f57bc] */ r_eax = R32((u32)(0x9f57bcu));
    /* 0075e9b3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075e9b6: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0075e9b9: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e99e); r_esp += 12; return;
}

void f_0075e9ac(void)
{
    FN_ENTER(0x0075e9ac);
    /* 0075e9ac: mov ah, 0 */ r_eax = (r_eax & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 0075e9ae: mov eax, dword ptr [0x9f57bc] */ r_eax = R32((u32)(0x9f57bcu));
    /* 0075e9b3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075e9b6: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0075e9b9: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e9ac); r_esp += 12; return;
}

void f_0075e9be(void)
{
    FN_ENTER(0x0075e9be);
    /* 0075e9be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075e9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075e9c2: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0075e9c5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0075e9c8: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0075e9cb: call 0x82600c */ r_esp -= 4; W32(r_esp, 0x75e9d0u); f_0082600c();
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e9be); r_esp += 12; return;
}

void f_0075e9ce(void)
{
    FN_ENTER(0x0075e9ce);
    /* 0075e9ce: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075e9d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075e9d4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075e9d7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075e9da: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 0075e9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075e9e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e9ce); r_esp += 12; return;
}

void f_0075e9e2(void)
{
    FN_ENTER(0x0075e9e2);
    /* 0075e9e2: mov dword ptr [0], ecx */ W32((u32)(0x0u), r_ecx);
    /* 0075e9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0075e9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075e9eb: ret 8 */ FN_RET(0x0075e9e2); r_esp += 12; return;
}

void f_0075e9f0(void) /* sub_75E9F0 */
{
    FN_ENTER(0x0075e9f0);
    /* 0075e9f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075e9f2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075e9f5: mov edi, ecx */ r_edi = r_ecx;
    /* 0075e9f7: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075e9fa: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x75e9ffu); f_00719140();
    /* 0075e9ff: mov esi, eax */ r_esi = r_eax;
    /* 0075ea01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ea04: movzx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)R8((u32)(r_edi+0x1cu));
    /* 0075ea08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ea0a: jge 0x75ea12 */ if ((fS==fO)) goto L_0075ea12;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075e9f0); r_esp += 4; return;
L_0075ea12:; BB(0x0075ea12);
    /* 0075ea12: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ea15: jg 0x75eaa3 */ if ((!fZ&&fS==fO)) goto L_0075eaa3;
L_0075ea1b:; BB(0x0075ea1b);
    /* 0075ea1b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075ea1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea20: je 0x75ea2e */ if (fZ) goto L_0075ea2e;
L_0075ea22:; BB(0x0075ea22);
    /* 0075ea22: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ea27u); f_0073d160();
    /* 0075ea27: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ea2e:; BB(0x0075ea2e);
    /* 0075ea2e: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0075ea31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea33: je 0x75ea41 */ if (fZ) goto L_0075ea41;
L_0075ea35:; BB(0x0075ea35);
    /* 0075ea35: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ea3au); f_007127b0();
    /* 0075ea3a: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_0075ea41:; BB(0x0075ea41);
    /* 0075ea41: mov esi, dword ptr [edi + 0x2c] */ r_esi = R32((u32)(r_edi+0x2cu));
    /* 0075ea44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea46: je 0x75eb7f */ if (fZ) goto L_0075eb7f;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
L_0075ea72:; BB(0x0075ea72);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075e9f0); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eaa3:; BB(0x0075eaa3);
    /* 0075eaa3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaa6: je 0x75ea72 */ if (fZ) goto L_0075ea72;
L_0075eaa8:; BB(0x0075eaa8);
    /* 0075eaa8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaab: je 0x75ec99 */ if (fZ) goto L_0075ec99;
L_0075eab1:; BB(0x0075eab1);
    /* 0075eab1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eab4: je 0x75eb3b */ if (fZ) goto L_0075eb3b;
L_0075eaba:; BB(0x0075eaba);
    /* 0075eaba: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eabd: jne 0x75eaec */ if (!fZ) goto L_0075eaec;
L_0075eabf:; BB(0x0075eabf);
    /* 0075eabf: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eac2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eac4: je 0x75ead2 */ if (fZ) goto L_0075ead2;
L_0075eac6:; BB(0x0075eac6);
    /* 0075eac6: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75eacbu); f_0073d160();
    /* 0075eacb: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ead2:; BB(0x0075ead2);
    /* 0075ead2: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0075ead5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ead7: je 0x75ec7b */ if (fZ) goto L_0075ec7b;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaec:; BB(0x0075eaec);
    /* 0075eaec: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaef: jne 0x75ea0c */ if (!fZ) goto L_0075ea0c;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb3b:; BB(0x0075eb3b);
    /* 0075eb3b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
L_0075eb3e:; BB(0x0075eb3e);
    /* 0075eb3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75eb43u); f_0073d114();
    /* 0075eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb45: je 0x75eb51 */ if (fZ) goto L_0075eb51;
L_0075eb47:; BB(0x0075eb47);
    /* 0075eb47: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075e9f0); r_esp += 4; return;
L_0075eb51:; BB(0x0075eb51);
    /* 0075eb51: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb54: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75eb59u); f_0073ce50();
    /* 0075eb59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb5b: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb61:; BB(0x0075eb61);
    /* 0075eb61: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb64: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75eb69u); f_0073d134();
    /* 0075eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb6b: jne 0x75eb76 */ if (!fZ) goto L_0075eb76;
L_0075eb6d:; BB(0x0075eb6d);
    /* 0075eb6d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb76:; BB(0x0075eb76);
    /* 0075eb76: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb7a: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb7f:; BB(0x0075eb7f);
    /* 0075eb7f: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb81: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75eb86u); f_0073ec50();
    /* 0075eb86: mov esi, eax */ r_esi = r_eax;
    /* 0075eb88: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75eb8fu); f_0079317c();
    /* 0075eb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb93: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75eb98u); f_00735460();
    /* 0075eb98: mov esi, eax */ r_esi = r_eax;
    /* 0075eb9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb9d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075eba0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0075eba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eba6: mov ebx, eax */ r_ebx = r_eax;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
L_0075ec7b:; BB(0x0075ec7b);
    /* 0075ec7b: push 0xf6 */ { u32 v = 0xf6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec85u); f_0079317c();
    /* 0075ec85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec87: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
L_0075ec99:; BB(0x0075ec99);
    /* 0075ec99: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0075ec9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ec9e: je 0x75eca8 */ if (fZ) goto L_0075eca8;
L_0075eca0:; BB(0x0075eca0);
    /* 0075eca0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75eca5u); f_007365f4();
    /* 0075eca5: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
L_0075eca8:; BB(0x0075eca8);
    /* 0075eca8: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075ecab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ecad: je 0x75ecb8 */ if (fZ) goto L_0075ecb8;
L_0075ecaf:; BB(0x0075ecaf);
    /* 0075ecaf: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075ecb3: jmp 0x75eb3e */ goto L_0075eb3e;
L_0075ecb8:; BB(0x0075ecb8);
    /* 0075ecb8: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecbb: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ecbd: call 0x75ed34 */ r_esp -= 4; W32(r_esp, 0x75ecc2u); f_0075ed34();
    /* 0075ecc2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ecc4: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 0075ecc7: jmp 0x75ecaf */ goto L_0075ecaf;
}

void f_0075e9f4(void)
{
    FN_ENTER(0x0075e9f4);
    /* 0075e9f4: or byte ptr [ebx + 0x2077fff9], cl */ { u32 ad = (u32)(r_ebx+0x2077fff9u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075e9fa: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x75e9ffu); f_00719140();
    /* 0075e9ff: mov esi, eax */ r_esi = r_eax;
    /* 0075ea01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ea04: movzx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)R8((u32)(r_edi+0x1cu));
    /* 0075ea08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ea0a: jge 0x75ea12 */ if ((fS==fO)) goto L_0075ea12;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075e9f4); r_esp += 4; return;
L_0075ea12:; BB(0x0075ea12);
    /* 0075ea12: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ea15: jg 0x75eaa3 */ if ((!fZ&&fS==fO)) goto L_0075eaa3;
L_0075ea1b:; BB(0x0075ea1b);
    /* 0075ea1b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075ea1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea20: je 0x75ea2e */ if (fZ) goto L_0075ea2e;
L_0075ea22:; BB(0x0075ea22);
    /* 0075ea22: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ea27u); f_0073d160();
    /* 0075ea27: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ea2e:; BB(0x0075ea2e);
    /* 0075ea2e: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0075ea31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea33: je 0x75ea41 */ if (fZ) goto L_0075ea41;
L_0075ea35:; BB(0x0075ea35);
    /* 0075ea35: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ea3au); f_007127b0();
    /* 0075ea3a: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_0075ea41:; BB(0x0075ea41);
    /* 0075ea41: mov esi, dword ptr [edi + 0x2c] */ r_esi = R32((u32)(r_edi+0x2cu));
    /* 0075ea44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea46: je 0x75eb7f */ if (fZ) goto L_0075eb7f;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
L_0075ea72:; BB(0x0075ea72);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075e9f4); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eaa3:; BB(0x0075eaa3);
    /* 0075eaa3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaa6: je 0x75ea72 */ if (fZ) goto L_0075ea72;
L_0075eaa8:; BB(0x0075eaa8);
    /* 0075eaa8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaab: je 0x75ec99 */ if (fZ) goto L_0075ec99;
L_0075eab1:; BB(0x0075eab1);
    /* 0075eab1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eab4: je 0x75eb3b */ if (fZ) goto L_0075eb3b;
L_0075eaba:; BB(0x0075eaba);
    /* 0075eaba: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eabd: jne 0x75eaec */ if (!fZ) goto L_0075eaec;
L_0075eabf:; BB(0x0075eabf);
    /* 0075eabf: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eac2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eac4: je 0x75ead2 */ if (fZ) goto L_0075ead2;
L_0075eac6:; BB(0x0075eac6);
    /* 0075eac6: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75eacbu); f_0073d160();
    /* 0075eacb: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ead2:; BB(0x0075ead2);
    /* 0075ead2: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0075ead5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ead7: je 0x75ec7b */ if (fZ) goto L_0075ec7b;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaec:; BB(0x0075eaec);
    /* 0075eaec: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaef: jne 0x75ea0c */ if (!fZ) goto L_0075ea0c;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb3b:; BB(0x0075eb3b);
    /* 0075eb3b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
L_0075eb3e:; BB(0x0075eb3e);
    /* 0075eb3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75eb43u); f_0073d114();
    /* 0075eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb45: je 0x75eb51 */ if (fZ) goto L_0075eb51;
L_0075eb47:; BB(0x0075eb47);
    /* 0075eb47: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075e9f4); r_esp += 4; return;
L_0075eb51:; BB(0x0075eb51);
    /* 0075eb51: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb54: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75eb59u); f_0073ce50();
    /* 0075eb59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb5b: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb61:; BB(0x0075eb61);
    /* 0075eb61: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb64: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75eb69u); f_0073d134();
    /* 0075eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb6b: jne 0x75eb76 */ if (!fZ) goto L_0075eb76;
L_0075eb6d:; BB(0x0075eb6d);
    /* 0075eb6d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb76:; BB(0x0075eb76);
    /* 0075eb76: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb7a: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb7f:; BB(0x0075eb7f);
    /* 0075eb7f: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb81: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75eb86u); f_0073ec50();
    /* 0075eb86: mov esi, eax */ r_esi = r_eax;
    /* 0075eb88: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75eb8fu); f_0079317c();
    /* 0075eb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb93: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75eb98u); f_00735460();
    /* 0075eb98: mov esi, eax */ r_esi = r_eax;
    /* 0075eb9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb9d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075eba0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0075eba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eba6: mov ebx, eax */ r_ebx = r_eax;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
L_0075ec7b:; BB(0x0075ec7b);
    /* 0075ec7b: push 0xf6 */ { u32 v = 0xf6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec85u); f_0079317c();
    /* 0075ec85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec87: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
L_0075ec99:; BB(0x0075ec99);
    /* 0075ec99: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0075ec9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ec9e: je 0x75eca8 */ if (fZ) goto L_0075eca8;
L_0075eca0:; BB(0x0075eca0);
    /* 0075eca0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75eca5u); f_007365f4();
    /* 0075eca5: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
L_0075eca8:; BB(0x0075eca8);
    /* 0075eca8: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075ecab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ecad: je 0x75ecb8 */ if (fZ) goto L_0075ecb8;
L_0075ecaf:; BB(0x0075ecaf);
    /* 0075ecaf: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075ecb3: jmp 0x75eb3e */ goto L_0075eb3e;
L_0075ecb8:; BB(0x0075ecb8);
    /* 0075ecb8: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecbb: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ecbd: call 0x75ed34 */ r_esp -= 4; W32(r_esp, 0x75ecc2u); f_0075ed34();
    /* 0075ecc2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ecc4: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 0075ecc7: jmp 0x75ecaf */ goto L_0075ecaf;
}

void f_0075ea08(void)
{
    FN_ENTER(0x0075ea08);
    /* 0075ea08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ea0a: jge 0x75ea12 */ if ((fS==fO)) goto L_0075ea12;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ea08); r_esp += 4; return;
L_0075ea12:; BB(0x0075ea12);
    /* 0075ea12: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ea15: jg 0x75eaa3 */ if ((!fZ&&fS==fO)) goto L_0075eaa3;
L_0075ea1b:; BB(0x0075ea1b);
    /* 0075ea1b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075ea1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea20: je 0x75ea2e */ if (fZ) goto L_0075ea2e;
L_0075ea22:; BB(0x0075ea22);
    /* 0075ea22: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ea27u); f_0073d160();
    /* 0075ea27: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ea2e:; BB(0x0075ea2e);
    /* 0075ea2e: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0075ea31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea33: je 0x75ea41 */ if (fZ) goto L_0075ea41;
L_0075ea35:; BB(0x0075ea35);
    /* 0075ea35: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ea3au); f_007127b0();
    /* 0075ea3a: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_0075ea41:; BB(0x0075ea41);
    /* 0075ea41: mov esi, dword ptr [edi + 0x2c] */ r_esi = R32((u32)(r_edi+0x2cu));
    /* 0075ea44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea46: je 0x75eb7f */ if (fZ) goto L_0075eb7f;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
L_0075ea72:; BB(0x0075ea72);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ea08); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eaa3:; BB(0x0075eaa3);
    /* 0075eaa3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaa6: je 0x75ea72 */ if (fZ) goto L_0075ea72;
L_0075eaa8:; BB(0x0075eaa8);
    /* 0075eaa8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaab: je 0x75ec99 */ if (fZ) goto L_0075ec99;
L_0075eab1:; BB(0x0075eab1);
    /* 0075eab1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eab4: je 0x75eb3b */ if (fZ) goto L_0075eb3b;
L_0075eaba:; BB(0x0075eaba);
    /* 0075eaba: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eabd: jne 0x75eaec */ if (!fZ) goto L_0075eaec;
L_0075eabf:; BB(0x0075eabf);
    /* 0075eabf: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eac2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eac4: je 0x75ead2 */ if (fZ) goto L_0075ead2;
L_0075eac6:; BB(0x0075eac6);
    /* 0075eac6: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75eacbu); f_0073d160();
    /* 0075eacb: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ead2:; BB(0x0075ead2);
    /* 0075ead2: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0075ead5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ead7: je 0x75ec7b */ if (fZ) goto L_0075ec7b;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaec:; BB(0x0075eaec);
    /* 0075eaec: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaef: jne 0x75ea0c */ if (!fZ) goto L_0075ea0c;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb3b:; BB(0x0075eb3b);
    /* 0075eb3b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
L_0075eb3e:; BB(0x0075eb3e);
    /* 0075eb3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75eb43u); f_0073d114();
    /* 0075eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb45: je 0x75eb51 */ if (fZ) goto L_0075eb51;
L_0075eb47:; BB(0x0075eb47);
    /* 0075eb47: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075ea08); r_esp += 4; return;
L_0075eb51:; BB(0x0075eb51);
    /* 0075eb51: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb54: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75eb59u); f_0073ce50();
    /* 0075eb59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb5b: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb61:; BB(0x0075eb61);
    /* 0075eb61: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb64: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75eb69u); f_0073d134();
    /* 0075eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb6b: jne 0x75eb76 */ if (!fZ) goto L_0075eb76;
L_0075eb6d:; BB(0x0075eb6d);
    /* 0075eb6d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb76:; BB(0x0075eb76);
    /* 0075eb76: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb7a: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb7f:; BB(0x0075eb7f);
    /* 0075eb7f: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb81: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75eb86u); f_0073ec50();
    /* 0075eb86: mov esi, eax */ r_esi = r_eax;
    /* 0075eb88: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75eb8fu); f_0079317c();
    /* 0075eb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb93: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75eb98u); f_00735460();
    /* 0075eb98: mov esi, eax */ r_esi = r_eax;
    /* 0075eb9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb9d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075eba0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0075eba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eba6: mov ebx, eax */ r_ebx = r_eax;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
L_0075ec7b:; BB(0x0075ec7b);
    /* 0075ec7b: push 0xf6 */ { u32 v = 0xf6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec85u); f_0079317c();
    /* 0075ec85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec87: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
L_0075ec99:; BB(0x0075ec99);
    /* 0075ec99: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0075ec9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ec9e: je 0x75eca8 */ if (fZ) goto L_0075eca8;
L_0075eca0:; BB(0x0075eca0);
    /* 0075eca0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75eca5u); f_007365f4();
    /* 0075eca5: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
L_0075eca8:; BB(0x0075eca8);
    /* 0075eca8: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075ecab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ecad: je 0x75ecb8 */ if (fZ) goto L_0075ecb8;
L_0075ecaf:; BB(0x0075ecaf);
    /* 0075ecaf: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075ecb3: jmp 0x75eb3e */ goto L_0075eb3e;
L_0075ecb8:; BB(0x0075ecb8);
    /* 0075ecb8: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecbb: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ecbd: call 0x75ed34 */ r_esp -= 4; W32(r_esp, 0x75ecc2u); f_0075ed34();
    /* 0075ecc2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ecc4: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 0075ecc7: jmp 0x75ecaf */ goto L_0075ecaf;
}

void f_0075ea14(void)
{
    FN_ENTER(0x0075ea14);
    /* 0075ea14: add dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    UNSUP(0x0075ea16, "falls out of decoded code");
}

void f_0075ea2c(void)
{
    FN_ENTER(0x0075ea2c);
    goto L_0075ea2c;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ea2c); r_esp += 4; return;
L_0075ea2c:; BB(0x0075ea2c);
    /* 0075ea2c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ea2e: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0075ea31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea33: je 0x75ea41 */ if (fZ) goto L_0075ea41;
L_0075ea35:; BB(0x0075ea35);
    /* 0075ea35: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ea3au); f_007127b0();
    /* 0075ea3a: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_0075ea41:; BB(0x0075ea41);
    /* 0075ea41: mov esi, dword ptr [edi + 0x2c] */ r_esi = R32((u32)(r_edi+0x2cu));
    /* 0075ea44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea46: je 0x75eb7f */ if (fZ) goto L_0075eb7f;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ea2c); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb7f:; BB(0x0075eb7f);
    /* 0075eb7f: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb81: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75eb86u); f_0073ec50();
    /* 0075eb86: mov esi, eax */ r_esi = r_eax;
    /* 0075eb88: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75eb8fu); f_0079317c();
    /* 0075eb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb93: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75eb98u); f_00735460();
    /* 0075eb98: mov esi, eax */ r_esi = r_eax;
    /* 0075eb9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb9d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075eba0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0075eba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eba6: mov ebx, eax */ r_ebx = r_eax;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ea42(void)
{
    FN_ENTER(0x0075ea42);
    goto L_0075ea42;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ea42); r_esp += 4; return;
L_0075ea42:; BB(0x0075ea42);
    /* 0075ea42: ja 0x75ea70 */ if ((!fC&&!fZ)) goto L_0075ea70;
L_0075ea44:; BB(0x0075ea44);
    /* 0075ea44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea46: je 0x75eb7f */ if (fZ) goto L_0075eb7f;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
L_0075ea70:; BB(0x0075ea70);
    /* 0075ea70: sbb al, 2 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ea42); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb7f:; BB(0x0075eb7f);
    /* 0075eb7f: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb81: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75eb86u); f_0073ec50();
    /* 0075eb86: mov esi, eax */ r_esi = r_eax;
    /* 0075eb88: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75eb8fu); f_0079317c();
    /* 0075eb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb93: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75eb98u); f_00735460();
    /* 0075eb98: mov esi, eax */ r_esi = r_eax;
    /* 0075eb9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb9d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075eba0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0075eba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eba6: mov ebx, eax */ r_ebx = r_eax;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ea58(void)
{
    FN_ENTER(0x0075ea58);
    goto L_0075ea58;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ea58); r_esp += 4; return;
L_0075ea58:; BB(0x0075ea58);
    /* 0075ea58: add byte ptr [ebx - 0x76999fb2], cl */ { u32 ad = (u32)(r_ebx+0x8966604eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ea5e: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 0075ea5f: test byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 0075ea61: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ea58); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075ea64(void)
{
    FN_ENTER(0x0075ea64);
    goto L_0075ea64;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ea64); r_esp += 4; return;
L_0075ea64:; BB(0x0075ea64);
    /* 0075ea64: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ea64); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075ea70(void)
{
    FN_ENTER(0x0075ea70);
    goto L_0075ea70;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ea70); r_esp += 4; return;
L_0075ea70:; BB(0x0075ea70);
    /* 0075ea70: sbb al, 2 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ea70); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075ea88(void)
{
    FN_ENTER(0x0075ea88);
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ea88); r_esp += 4; return;
}

void f_0075ea98(void)
{
    FN_ENTER(0x0075ea98);
}

void f_0075eaae(void)
{
    FN_ENTER(0x0075eaae);
    goto L_0075eaae;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eaae); r_esp += 4; return;
L_0075eaae:; BB(0x0075eaae);
    /* 0075eaae: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075eab0: add byte ptr [ebx - 0x7bf0fb06], al */ { u32 ad = (u32)(r_ebx+0x840f04fau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eab6: add dword ptr [eax], 0xfa830000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfa830000u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075eabc: add eax, 0x4f8b2d75 */ {  u32 a = r_eax; u32 b = 0x4f8b2d75u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075eac1: xor al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0075eac3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075eac4: je 0x75ead2 */ if (fZ) goto L_0075ead2;
L_0075eac6:; BB(0x0075eac6);
    /* 0075eac6: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75eacbu); f_0073d160();
    /* 0075eacb: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ead2:; BB(0x0075ead2);
    /* 0075ead2: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0075ead5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ead7: je 0x75ec7b */ if (fZ) goto L_0075ec7b;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec7b:; BB(0x0075ec7b);
    /* 0075ec7b: push 0xf6 */ { u32 v = 0xf6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec85u); f_0079317c();
    /* 0075ec85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec87: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
}

void f_0075eac0(void)
{
    FN_ENTER(0x0075eac0);
    goto L_0075eac0;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eac0); r_esp += 4; return;
L_0075eac0:; BB(0x0075eac0);
    /* 0075eac0: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0075eac1: xor al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0075eac3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075eac4: je 0x75ead2 */ if (fZ) goto L_0075ead2;
L_0075eac6:; BB(0x0075eac6);
    /* 0075eac6: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75eacbu); f_0073d160();
    /* 0075eacb: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0075ead2:; BB(0x0075ead2);
    /* 0075ead2: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0075ead5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ead7: je 0x75ec7b */ if (fZ) goto L_0075ec7b;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec7b:; BB(0x0075ec7b);
    /* 0075ec7b: push 0xf6 */ { u32 v = 0xf6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec85u); f_0079317c();
    /* 0075ec85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec87: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
}

void f_0075ead0(void)
{
    FN_ENTER(0x0075ead0);
    goto L_0075ead0;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ead0); r_esp += 4; return;
L_0075ead0:; BB(0x0075ead0);
    /* 0075ead0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ead2: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0075ead5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ead7: je 0x75ec7b */ if (fZ) goto L_0075ec7b;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec7b:; BB(0x0075ec7b);
    /* 0075ec7b: push 0xf6 */ { u32 v = 0xf6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec85u); f_0079317c();
    /* 0075ec85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec87: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
}

void f_0075eade(void)
{
    FN_ENTER(0x0075eade);
    goto L_0075eade;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eade); r_esp += 4; return;
L_0075eade:; BB(0x0075eade);
    /* 0075eade: ja 0x75eb04 */ if ((!fC&&!fZ)) goto L_0075eb04;
L_0075eae0:; BB(0x0075eae0);
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0075eb04:; BB(0x0075eb04);
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075eaec(void)
{
    FN_ENTER(0x0075eaec);
    goto L_0075eaec;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eaec); r_esp += 4; return;
L_0075eaec:; BB(0x0075eaec);
    /* 0075eaec: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eaef: jne 0x75ea0c */ if (!fZ) goto L_0075ea0c;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075eaf8(void)
{
    FN_ENTER(0x0075eaf8);
    goto L_0075eaf8;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eaf8); r_esp += 4; return;
L_0075eaf8:; BB(0x0075eaf8);
    /* 0075eaf8: mul byte ptr [eax - 0x49cb7300] */ { u32 t = (r_eax & 0xffu) * R8((u32)(r_eax+0xb6348d00u)); r_eax = (r_eax & 0xffff0000u) | t; fC = fO = ((t >> 8) != 0); }
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075eb06(void)
{
    FN_ENTER(0x0075eb06);
    goto L_0075eb06;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eb06); r_esp += 4; return;
L_0075eb06:; BB(0x0075eb06);
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075eb14(void)
{
    FN_ENTER(0x0075eb14);
    /* 0075eb14: ror byte ptr [edi], 0x84 */ { u32 ad = (u32)(r_edi); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0075eb17: int1  */ UNSUP(0x0075eb17, "int1 ");
    UNSUP(0x0075eb18, "falls out of decoded code");
}

void f_0075eb2c(void)
{
    FN_ENTER(0x0075eb2c);
    goto L_0075eb2c;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eb2c); r_esp += 4; return;
L_0075eb2c:; BB(0x0075eb2c);
    /* 0075eb2c: adc al, ch */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 0075eb2e: sbb dh, byte ptr [eax + 0xc] */ { u32 c = fC; u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_eax+0xcu)); u32 r = (a - b - c) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0075eb31: add dh, al */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 0075eb33: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075eb34: sbb al, 1 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075eb42(void)
{
    FN_ENTER(0x0075eb42);
    /* 0075eb42: inc dword ptr [ebp - 0x39f58b40] */ { u32 ad = (u32)(r_ebp+0xc60a74c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075eb48: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075eb49: sbb al, 1 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075eb42); r_esp += 4; return;
}

void f_0075eb58(void)
{
    FN_ENTER(0x0075eb58);
    /* 0075eb58: inc dword ptr [ebp - 0x547bf040] */ { u32 ad = (u32)(r_ebp+0xab840fc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    UNSUP(0x0075eb5e, "falls out of decoded code");
}

void f_0075eb6c(void)
{
    FN_ENTER(0x0075eb6c);
    goto L_0075eb6c;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eb6c); r_esp += 4; return;
L_0075eb6c:; BB(0x0075eb6c);
    /* 0075eb6c: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r; fC = 0; }
    /* 0075eb6e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075eb6f: sbb al, 5 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x5u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
}

void f_0075eb7c(void)
{
    FN_ENTER(0x0075eb7c);
}

void f_0075eb8e(void)
{
    FN_ENTER(0x0075eb8e);
    goto L_0075eb8e;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eb8e); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075eb8e); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb8e:; BB(0x0075eb8e);
    /* 0075eb8e: add byte ptr [eax + 0x6a], dl */ { u32 ad = (u32)(r_eax+0x6au);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eb91: add al, 0x56 */ {  u32 a = (u8)r_eax; u32 b = 0x56u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075eb93: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75eb98u); f_00735460();
    /* 0075eb98: mov esi, eax */ r_esi = r_eax;
    /* 0075eb9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb9d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075eba0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0075eba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eba6: mov ebx, eax */ r_ebx = r_eax;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075eb9a(void)
{
    FN_ENTER(0x0075eb9a);
    goto L_0075eb9a;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eb9a); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075eb9a); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb9a:; BB(0x0075eb9a);
    /* 0075eb9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb9d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0075eba0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0075eba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eba6: mov ebx, eax */ r_ebx = r_eax;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075eba8(void)
{
    FN_ENTER(0x0075eba8);
    goto L_0075eba8;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075eba8); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075eba8); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ebb4(void)
{
    FN_ENTER(0x0075ebb4);
    goto L_0075ebb4;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ebb4); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ebb4); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
L_0075ebb4:; BB(0x0075ebb4);
    /* 0075ebb4: dec dword ptr [ebx + 0x4c483e8] */ { u32 ad = (u32)(r_ebx+0x4c483e8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ebc2(void)
{
    FN_ENTER(0x0075ebc2);
    goto L_0075ebc2;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ebc2); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ebc2); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
L_0075ebc2:; BB(0x0075ebc2);
    /* 0075ebc2: sub al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ebc4: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ebdc(void)
{
    FN_ENTER(0x0075ebdc);
    goto L_0075ebdc;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ebdc); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ebdc); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdc:; BB(0x0075ebdc);
    /* 0075ebdc: pop es */ UNSUP(0x0075ebdc, "pop es");
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ebe4(void)
{
    FN_ENTER(0x0075ebe4);
    goto L_0075ebe4;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ebe4); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ebe4); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ebf4(void)
{
    FN_ENTER(0x0075ebf4);
    goto L_0075ebf4;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ebf4); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ebf4); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eba8:; BB(0x0075eba8);
    /* 0075eba8: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebae: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebb0:; BB(0x0075ebb0);
    /* 0075ebb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebb1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ebb6u); f_0068d5a8();
    /* 0075ebb6: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ebb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ebbb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebbd: je 0x75ec1b */ if (fZ) goto L_0075ec1b;
L_0075ebbf:; BB(0x0075ebbf);
    /* 0075ebbf: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0075ebc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebc9: jne 0x75ebd2 */ if (!fZ) goto L_0075ebd2;
L_0075ebcb:; BB(0x0075ebcb);
    /* 0075ebcb: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebd0: jmp 0x75ebd4 */ goto L_0075ebd4;
L_0075ebd2:; BB(0x0075ebd2);
    /* 0075ebd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebd4:; BB(0x0075ebd4);
    /* 0075ebd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebd6: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebd8:; BB(0x0075ebd8);
    /* 0075ebd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebdb: jne 0x75ebe4 */ if (!fZ) goto L_0075ebe4;
L_0075ebdd:; BB(0x0075ebdd);
    /* 0075ebdd: mov edx, 1 */ r_edx = 0x1u;
    /* 0075ebe2: jmp 0x75ebe6 */ goto L_0075ebe6;
L_0075ebe4:; BB(0x0075ebe4);
    /* 0075ebe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0075ebe6:; BB(0x0075ebe6);
    /* 0075ebe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebe8: jne 0x75ec1b */ if (!fZ) goto L_0075ec1b;
L_0075ebea:; BB(0x0075ebea);
    /* 0075ebea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebeb: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x75ebf0u); f_00825abc();
    /* 0075ebf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ebf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ebf3: je 0x75ec09 */ if (fZ) goto L_0075ec09;
L_0075ebf4:; BB(0x0075ebf4);
    /* 0075ebf4: adc al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0075ebf5:; BB(0x0075ebf5);
    /* 0075ebf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ebf6: int 0xe8 */ UNSUP(0x0075ebf6, "int 0xe8");
    /* 0075ebf7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ebfcu); f_006936b4();
    /* 0075ebf8: mov eax, 0x53fff34a */ r_eax = 0x53fff34au;
    /* 0075ebfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebfd: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ebff: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec02: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75ec07u); f_00735c90();
    /* 0075ec07: jmp 0x75ec1b */ goto L_0075ec1b;
L_0075ec09:; BB(0x0075ec09);
    /* 0075ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ec0b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ec10u); f_006936b4();
    /* 0075ec10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec11: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec13: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec16: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec1bu); f_00735ee0();
L_0075ec1b:; BB(0x0075ec1b);
    /* 0075ec1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ec1e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ec21: jl 0x75eba8 */ if ((fS!=fO)) goto L_0075eba8;
L_0075ec23:; BB(0x0075ec23);
    /* 0075ec23: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0075ec26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ec04(void)
{
    FN_ENTER(0x0075ec04);
    goto L_0075ec04;
L_0075ec03:; BB(0x0075ec03);
    /* 0075ec03: mov dword ptr [eax - 3], esi */ W32((u32)(r_eax+0xfffffffdu), r_esi);
    UNSUP(0x0075ec06, "falls out of decoded code");
L_0075ec04:; BB(0x0075ec04);
    /* 0075ec04: jo 0x75ec03 */ if (fO) goto L_0075ec03;
}

void f_0075ec20(void)
{
    FN_ENTER(0x0075ec20);
    goto L_0075ec20;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ec20); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ec20); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec20:; BB(0x0075ec20);
    /* 0075ec20: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ec22: test dword ptr [ebx + 0x6c8b241c], ecx */ {  u32 a = R32((u32)(r_ebx+0x6c8b241cu)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;   }
    /* 0075ec28: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ec2a: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0075ec31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ec33: jle 0x75ec62 */ if ((fZ||fS!=fO)) goto L_0075ec62;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ec30(void)
{
    FN_ENTER(0x0075ec30);
    goto L_0075ec30;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ec30); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ec30); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec30:; BB(0x0075ec30);
    /* 0075ec30: add byte ptr [ebp + 0x682d7ed2], al */ { u32 ad = (u32)(r_ebp+0x682d7ed2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ec36: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ec38: mov al, 0x42 */ r_eax = (r_eax & 0xffffff00u) | ((0x42u) & 0xffu);
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
}

void f_0075ec40(void)
{
    FN_ENTER(0x0075ec40);
    /* 0075ec40: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ec42: add byte ptr [ecx - 0xffef36], al */ { u32 ad = (u32)(r_ecx+0xff0010cau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ec48: jmp dword ptr [esi - 0x77] */ { u32 t = R32((u32)(r_esi+0xffffff89u)); jmp_ind(t); return; }
}

void f_0075ec56(void)
{
    FN_ENTER(0x0075ec56);
    /* 0075ec56: jbe 0x75eccd */ if ((fC||fZ)) goto L_0075eccd;
L_0075ec58:; BB(0x0075ec58);
    /* 0075ec58: std  */ rt_df = 1;
    /* 0075ec59: dec dword ptr [ecx - 0x1516d389] */ { u32 ad = (u32)(r_ecx+0xeae92c77u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ec5f: std  */ rt_df = 1;
    UNSUP(0x0075ec60, "falls out of decoded code");
L_0075eccd:; BB(0x0075eccd);
    /* 0075eccd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075ecce: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075ecd0: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecd4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ecd9u); f_0068d5a8();
    /* 0075ecd9: mov edi, eax */ r_edi = r_eax;
    /* 0075ecdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ecde: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75ece3u); f_00816d30();
    /* 0075ece3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ece5: je 0x75ecf5 */ if (fZ) goto L_0075ecf5;
L_0075ece7:; BB(0x0075ece7);
    /* 0075ece7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ece9: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75eceeu); f_006936b4();
    /* 0075ecee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ecef: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecf4u); f_00816cb8();
    /* 0075ecf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075ecf5:; BB(0x0075ecf5);
    /* 0075ecf5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecf9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecfeu); f_00816cb8();
    /* 0075ecfe: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed00: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed05u); f_0073ec50();
    /* 0075ed05: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0a: push 0x974a58 */ { u32 v = 0x974a58u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed10: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75ed15u); f_0073aa40();
    /* 0075ed15: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ed17: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed1a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed1f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ed26: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75ed2bu); f_0073ae38();
    /* 0075ed2b: mov eax, ebp */ r_eax = r_ebp;
    /* 0075ed2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ed2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ed2f: ret 8 */ FN_RET(0x0075ec56); r_esp += 12; return;
}

void f_0075ec62(void)
{
    FN_ENTER(0x0075ec62);
    goto L_0075ec62;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ec62); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ec62); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec62:; BB(0x0075ec62);
    /* 0075ec62: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec6cu); f_0079317c();
    /* 0075ec6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ec70(void)
{
    FN_ENTER(0x0075ec70);
    goto L_0075ec70;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ec70); r_esp += 4; return;
L_0075ea4c:; BB(0x0075ea4c);
    /* 0075ea4c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ea53: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075ea59: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075ea5c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ea65: je 0x75ea6e */ if (fZ) goto L_0075ea6e;
L_0075ea67:; BB(0x0075ea67);
    /* 0075ea67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ea69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ea6eu); f_00760acc();
L_0075ea6e:; BB(0x0075ea6e);
    /* 0075ea6e: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0075ea72: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0075ea75: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0075ea7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea7e: je 0x75ea92 */ if (fZ) goto L_0075ea92;
L_0075ea80:; BB(0x0075ea80);
    /* 0075ea80: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075ea83: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075ea85: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75ea88u); call_ind(t); }
    /* 0075ea88: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 0075ea8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea91: ret  */ FN_RET(0x0075ec70); r_esp += 4; return;
L_0075ea92:; BB(0x0075ea92);
    /* 0075ea92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075ea94: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075ea9a:; BB(0x0075ea9a);
    /* 0075ea9a: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0075ea9e: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec35:; BB(0x0075ec35);
    /* 0075ec35: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec3a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec3c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075ec43: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ec49: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075ec50: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec55: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75ec5au); f_007361d0();
    /* 0075ec5a: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0075ec5d: jmp 0x75ea4c */ goto L_0075ea4c;
L_0075ec70:; BB(0x0075ec70);
    /* 0075ec70: pop es */ UNSUP(0x0075ec70, "pop es");
    /* 0075ec71: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ec73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec74: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75ec79u); f_00735ee0();
    /* 0075ec79: jmp 0x75ec35 */ goto L_0075ec35;
}

void f_0075ec7e(void)
{
    FN_ENTER(0x0075ec7e);
    goto L_0075ec7e;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ec7e); r_esp += 4; return;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec7e:; BB(0x0075ec7e);
    /* 0075ec7e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ec80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ec85u); f_0079317c();
    /* 0075ec85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ec86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ec87: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
}

void f_0075ec88(void)
{
    FN_ENTER(0x0075ec88);
    goto L_0075ec88;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ec88); r_esp += 4; return;
L_0075eadd:; BB(0x0075eadd);
    /* 0075eadd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075eae0: call 0x8261e4 */ r_esp -= 4; W32(r_esp, 0x75eae5u); f_008261e4();
    /* 0075eae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075eae6: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0075eaea: jmp 0x75eaf5 */ goto L_0075eaf5;
L_0075eaf5:; BB(0x0075eaf5);
    /* 0075eaf5: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075eafb: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0075eafe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075eb04: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075eb06: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0075eb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75eb13u); f_007c1160();
    /* 0075eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb15: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb1b:; BB(0x0075eb1b);
    /* 0075eb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb20: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eb25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75eb2au); f_00814298();
    /* 0075eb2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eb2d: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x75eb32u); f_00825b4c();
    /* 0075eb32: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb36: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb3e:; BB(0x0075eb3e);
    /* 0075eb3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75eb43u); f_0073d114();
    /* 0075eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb45: je 0x75eb51 */ if (fZ) goto L_0075eb51;
L_0075eb47:; BB(0x0075eb47);
    /* 0075eb47: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075ec88); r_esp += 4; return;
L_0075eb51:; BB(0x0075eb51);
    /* 0075eb51: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb54: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75eb59u); f_0073ce50();
    /* 0075eb59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb5b: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb61:; BB(0x0075eb61);
    /* 0075eb61: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb64: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75eb69u); f_0073d134();
    /* 0075eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb6b: jne 0x75eb76 */ if (!fZ) goto L_0075eb76;
L_0075eb6d:; BB(0x0075eb6d);
    /* 0075eb6d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb76:; BB(0x0075eb76);
    /* 0075eb76: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb7a: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec88:; BB(0x0075ec88);
    /* 0075ec88: ja 0x75ecae */ if ((!fC&&!fZ)) goto L_0075ecae;
L_0075ec8a:; BB(0x0075ec8a);
    /* 0075ec8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ec8c: call 0x75eccc */ r_esp -= 4; W32(r_esp, 0x75ec91u); f_0075eccc();
    /* 0075ec91: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0075ec94: jmp 0x75eadd */ goto L_0075eadd;
L_0075ecae:; BB(0x0075ecae);
    /* 0075ecae: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r; fC = 0; }
    /* 0075ecb0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075ecb1: sbb al, 4 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ecb3: jmp 0x75eb3e */ goto L_0075eb3e;
}

void f_0075ec9a(void)
{
    FN_ENTER(0x0075ec9a);
    goto L_0075ec9a;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ec9a); r_esp += 4; return;
L_0075eb3e:; BB(0x0075eb3e);
    /* 0075eb3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75eb43u); f_0073d114();
    /* 0075eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb45: je 0x75eb51 */ if (fZ) goto L_0075eb51;
L_0075eb47:; BB(0x0075eb47);
    /* 0075eb47: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075ec9a); r_esp += 4; return;
L_0075eb51:; BB(0x0075eb51);
    /* 0075eb51: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb54: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75eb59u); f_0073ce50();
    /* 0075eb59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb5b: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb61:; BB(0x0075eb61);
    /* 0075eb61: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb64: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75eb69u); f_0073d134();
    /* 0075eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb6b: jne 0x75eb76 */ if (!fZ) goto L_0075eb76;
L_0075eb6d:; BB(0x0075eb6d);
    /* 0075eb6d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb76:; BB(0x0075eb76);
    /* 0075eb76: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb7a: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ec9a:; BB(0x0075ec9a);
    /* 0075ec9a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0075ec9b: sub al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0075ec9d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075ec9e: je 0x75eca8 */ if (fZ) goto L_0075eca8;
L_0075eca0:; BB(0x0075eca0);
    /* 0075eca0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75eca5u); f_007365f4();
    /* 0075eca5: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
L_0075eca8:; BB(0x0075eca8);
    /* 0075eca8: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075ecab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ecad: je 0x75ecb8 */ if (fZ) goto L_0075ecb8;
L_0075ecaf:; BB(0x0075ecaf);
    /* 0075ecaf: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075ecb3: jmp 0x75eb3e */ goto L_0075eb3e;
L_0075ecb8:; BB(0x0075ecb8);
    /* 0075ecb8: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecbb: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ecbd: call 0x75ed34 */ r_esp -= 4; W32(r_esp, 0x75ecc2u); f_0075ed34();
    /* 0075ecc2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ecc4: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 0075ecc7: jmp 0x75ecaf */ goto L_0075ecaf;
}

void f_0075ecaa(void)
{
    FN_ENTER(0x0075ecaa);
    goto L_0075ecaa;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ecaa); r_esp += 4; return;
L_0075eb3e:; BB(0x0075eb3e);
    /* 0075eb3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75eb43u); f_0073d114();
    /* 0075eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb45: je 0x75eb51 */ if (fZ) goto L_0075eb51;
L_0075eb47:; BB(0x0075eb47);
    /* 0075eb47: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075ecaa); r_esp += 4; return;
L_0075eb51:; BB(0x0075eb51);
    /* 0075eb51: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb54: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75eb59u); f_0073ce50();
    /* 0075eb59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb5b: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb61:; BB(0x0075eb61);
    /* 0075eb61: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb64: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75eb69u); f_0073d134();
    /* 0075eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb6b: jne 0x75eb76 */ if (!fZ) goto L_0075eb76;
L_0075eb6d:; BB(0x0075eb6d);
    /* 0075eb6d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb76:; BB(0x0075eb76);
    /* 0075eb76: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb7a: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ecaa:; BB(0x0075ecaa);
    /* 0075ecaa: xor al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0075ecac: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075ecad: je 0x75ecb8 */ if (fZ) goto L_0075ecb8;
L_0075ecaf:; BB(0x0075ecaf);
    /* 0075ecaf: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075ecb3: jmp 0x75eb3e */ goto L_0075eb3e;
L_0075ecb8:; BB(0x0075ecb8);
    /* 0075ecb8: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecbb: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ecbd: call 0x75ed34 */ r_esp -= 4; W32(r_esp, 0x75ecc2u); f_0075ed34();
    /* 0075ecc2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ecc4: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 0075ecc7: jmp 0x75ecaf */ goto L_0075ecaf;
}

void f_0075ecbc(void)
{
    FN_ENTER(0x0075ecbc);
    goto L_0075ecbc;
L_0075ea0c:; BB(0x0075ea0c);
    /* 0075ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ea0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ea10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ea11: ret  */ FN_RET(0x0075ecbc); r_esp += 4; return;
L_0075eb3e:; BB(0x0075eb3e);
    /* 0075eb3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75eb43u); f_0073d114();
    /* 0075eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb45: je 0x75eb51 */ if (fZ) goto L_0075eb51;
L_0075eb47:; BB(0x0075eb47);
    /* 0075eb47: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075eb4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075eb4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075eb50: ret  */ FN_RET(0x0075ecbc); r_esp += 4; return;
L_0075eb51:; BB(0x0075eb51);
    /* 0075eb51: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb54: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75eb59u); f_0073ce50();
    /* 0075eb59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb5b: je 0x75ea0c */ if (fZ) goto L_0075ea0c;
L_0075eb61:; BB(0x0075eb61);
    /* 0075eb61: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0075eb64: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75eb69u); f_0073d134();
    /* 0075eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eb6b: jne 0x75eb76 */ if (!fZ) goto L_0075eb76;
L_0075eb6d:; BB(0x0075eb6d);
    /* 0075eb6d: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0075eb71: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075eb76:; BB(0x0075eb76);
    /* 0075eb76: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075eb7a: jmp 0x75ea0c */ goto L_0075ea0c;
L_0075ecaf:; BB(0x0075ecaf);
    /* 0075ecaf: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075ecb3: jmp 0x75eb3e */ goto L_0075eb3e;
L_0075ecbc:; BB(0x0075ecbc);
    /* 0075ecbc: iretd  */ UNSUP(0x0075ecbc, "iretd ");
    /* 0075ecbd: call 0x75ed34 */ r_esp -= 4; W32(r_esp, 0x75ecc2u); f_0075ed34();
    /* 0075ecc2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ecc4: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 0075ecc7: jmp 0x75ecaf */ goto L_0075ecaf;
}

void f_0075ecc8(void)
{
    FN_ENTER(0x0075ecc8);
    /* 0075ecc8: out 0x90, al */ UNSUP(0x0075ecc8, "out 0x90, al");
    /* 0075ecca: nop  */ ;
    /* 0075eccb: nop  */ ;
    /* 0075eccc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075eccd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075ecce: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075ecd0: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecd4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ecd9u); f_0068d5a8();
    /* 0075ecd9: mov edi, eax */ r_edi = r_eax;
    /* 0075ecdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ecde: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75ece3u); f_00816d30();
    /* 0075ece3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ece5: je 0x75ecf5 */ if (fZ) goto L_0075ecf5;
L_0075ece7:; BB(0x0075ece7);
    /* 0075ece7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ece9: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75eceeu); f_006936b4();
    /* 0075ecee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ecef: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecf4u); f_00816cb8();
    /* 0075ecf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075ecf5:; BB(0x0075ecf5);
    /* 0075ecf5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecf9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecfeu); f_00816cb8();
    /* 0075ecfe: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed00: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed05u); f_0073ec50();
    /* 0075ed05: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0a: push 0x974a58 */ { u32 v = 0x974a58u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed10: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75ed15u); f_0073aa40();
    /* 0075ed15: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ed17: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed1a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed1f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ed26: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75ed2bu); f_0073ae38();
    /* 0075ed2b: mov eax, ebp */ r_eax = r_ebp;
    /* 0075ed2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ed2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ed2f: ret 8 */ FN_RET(0x0075ecc8); r_esp += 12; return;
}

void f_0075eccc(void) /* sub_75ECCC */
{
    FN_ENTER(0x0075eccc);
    /* 0075eccc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075eccd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075ecce: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075ecd0: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecd4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ecd9u); f_0068d5a8();
    /* 0075ecd9: mov edi, eax */ r_edi = r_eax;
    /* 0075ecdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ecde: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75ece3u); f_00816d30();
    /* 0075ece3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ece5: je 0x75ecf5 */ if (fZ) goto L_0075ecf5;
L_0075ece7:; BB(0x0075ece7);
    /* 0075ece7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ece9: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75eceeu); f_006936b4();
    /* 0075ecee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ecef: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecf4u); f_00816cb8();
    /* 0075ecf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075ecf5:; BB(0x0075ecf5);
    /* 0075ecf5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecf9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecfeu); f_00816cb8();
    /* 0075ecfe: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed00: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed05u); f_0073ec50();
    /* 0075ed05: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0a: push 0x974a58 */ { u32 v = 0x974a58u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed10: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75ed15u); f_0073aa40();
    /* 0075ed15: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ed17: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed1a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed1f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ed26: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75ed2bu); f_0073ae38();
    /* 0075ed2b: mov eax, ebp */ r_eax = r_ebp;
    /* 0075ed2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ed2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ed2f: ret 8 */ FN_RET(0x0075eccc); r_esp += 12; return;
}

void f_0075ece0(void)
{
    FN_ENTER(0x0075ece0);
    /* 0075ece0: or byte ptr [ebx], 0 */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075ece3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ece5: je 0x75ecf5 */ if (fZ) goto L_0075ecf5;
L_0075ece7:; BB(0x0075ece7);
    /* 0075ece7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ece9: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75eceeu); f_006936b4();
    /* 0075ecee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ecef: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecf4u); f_00816cb8();
    /* 0075ecf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075ecf5:; BB(0x0075ecf5);
    /* 0075ecf5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ecf9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ecfeu); f_00816cb8();
    /* 0075ecfe: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed00: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed05u); f_0073ec50();
    /* 0075ed05: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0a: push 0x974a58 */ { u32 v = 0x974a58u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed10: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75ed15u); f_0073aa40();
    /* 0075ed15: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ed17: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed1a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed1f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ed26: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75ed2bu); f_0073ae38();
    /* 0075ed2b: mov eax, ebp */ r_eax = r_ebp;
    /* 0075ed2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ed2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ed2f: ret 8 */ FN_RET(0x0075ece0); r_esp += 12; return;
}

void f_0075ecf8(void)
{
    FN_ENTER(0x0075ecf8);
    /* 0075ecf8: adc al, ch */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ecfa: mov edx, 0x6a000b7f */ r_edx = 0x6a000b7fu;
    /* 0075ecff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ed00: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed05u); f_0073ec50();
    /* 0075ed05: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0a: push 0x974a58 */ { u32 v = 0x974a58u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed10: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75ed15u); f_0073aa40();
    /* 0075ed15: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ed17: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed1a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed1f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ed26: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75ed2bu); f_0073ae38();
    /* 0075ed2b: mov eax, ebp */ r_eax = r_ebp;
    /* 0075ed2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ed2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ed2f: ret 8 */ FN_RET(0x0075ecf8); r_esp += 12; return;
}

void f_0075ed10(void)
{
    FN_ENTER(0x0075ed10);
    /* 0075ed10: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75ed15u); f_0073aa40();
    /* 0075ed15: mov ebp, eax */ r_ebp = r_eax;
    /* 0075ed17: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed1a: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed1f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ed26: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75ed2bu); f_0073ae38();
    /* 0075ed2b: mov eax, ebp */ r_eax = r_ebp;
    /* 0075ed2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ed2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075ed2f: ret 8 */ FN_RET(0x0075ed10); r_esp += 12; return;
}

void f_0075ed2c(void)
{
    FN_ENTER(0x0075ed2c);
    /* 0075ed2c: lds ebx, ptr [ebp + 0x5f] */ UNSUP(0x0075ed2c, "lds ebx, ptr [ebp + 0x5f]");
    /* 0075ed2f: ret 8 */ FN_RET(0x0075ed2c); r_esp += 12; return;
}

void f_0075ed34(void) /* sub_75ED34 */
{
    FN_ENTER(0x0075ed34);
    /* 0075ed34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed36: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075ed38: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed3c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ed41u); f_0068d5a8();
    /* 0075ed41: mov edi, eax */ r_edi = r_eax;
    /* 0075ed43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed46: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75ed4bu); f_00816d30();
    /* 0075ed4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ed4d: je 0x75ed5d */ if (fZ) goto L_0075ed5d;
L_0075ed4f:; BB(0x0075ed4f);
    /* 0075ed4f: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed51: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ed56u); f_006936b4();
    /* 0075ed56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed57: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ed5cu); f_00816cb8();
    /* 0075ed5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075ed5d:; BB(0x0075ed5d);
    /* 0075ed5d: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed62: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed67u); f_0079317c();
    /* 0075ed67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed68: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ed6du); f_00816cb8();
    /* 0075ed6d: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed71: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75ed76u); f_0073cd8c();
    /* 0075ed76: mov edi, eax */ r_edi = r_eax;
    /* 0075ed78: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed7a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed7fu); f_0079317c();
    /* 0075ed7f: mov ebx, eax */ r_ebx = r_eax;
    /* 0075ed81: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed88u); f_0073ec50();
    /* 0075ed88: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed8b: push 0x43c00000 */ { u32 v = 0x43c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed91: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed93: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed99: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x75ed9eu); f_0073cfec();
    /* 0075ed9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eda0: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda2: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x75eda7u); f_0073d148();
    /* 0075eda7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda9: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x75edaeu); f_0073d170();
    /* 0075edae: mov eax, edi */ r_eax = r_edi;
    /* 0075edb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075edb2: ret 4 */ FN_RET(0x0075ed34); r_esp += 8; return;
}

void f_0075ed38(void)
{
    FN_ENTER(0x0075ed38);
    /* 0075ed38: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed3c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ed41u); f_0068d5a8();
    /* 0075ed41: mov edi, eax */ r_edi = r_eax;
    /* 0075ed43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed46: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75ed4bu); f_00816d30();
    /* 0075ed4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ed4d: je 0x75ed5d */ if (fZ) goto L_0075ed5d;
L_0075ed4f:; BB(0x0075ed4f);
    /* 0075ed4f: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed51: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ed56u); f_006936b4();
    /* 0075ed56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed57: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ed5cu); f_00816cb8();
    /* 0075ed5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075ed5d:; BB(0x0075ed5d);
    /* 0075ed5d: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed62: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed67u); f_0079317c();
    /* 0075ed67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed68: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ed6du); f_00816cb8();
    /* 0075ed6d: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed71: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75ed76u); f_0073cd8c();
    /* 0075ed76: mov edi, eax */ r_edi = r_eax;
    /* 0075ed78: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed7a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed7fu); f_0079317c();
    /* 0075ed7f: mov ebx, eax */ r_ebx = r_eax;
    /* 0075ed81: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed88u); f_0073ec50();
    /* 0075ed88: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed8b: push 0x43c00000 */ { u32 v = 0x43c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed91: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed93: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed99: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x75ed9eu); f_0073cfec();
    /* 0075ed9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eda0: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda2: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x75eda7u); f_0073d148();
    /* 0075eda7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda9: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x75edaeu); f_0073d170();
    /* 0075edae: mov eax, edi */ r_eax = r_edi;
    /* 0075edb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075edb2: ret 4 */ FN_RET(0x0075ed38); r_esp += 8; return;
}

void f_0075ed44(void)
{
    FN_ENTER(0x0075ed44);
    /* 0075ed44: les eax, ptr [eax + ebp*8] */ UNSUP(0x0075ed44, "les eax, ptr [eax + ebp*8]");
    /* 0075ed47: in eax, 0x7f */ UNSUP(0x0075ed47, "in eax, 0x7f");
    /* 0075ed49: or eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ed4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ed4d: je 0x75ed5d */ if (fZ) goto L_0075ed5d;
L_0075ed4f:; BB(0x0075ed4f);
    /* 0075ed4f: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed51: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x75ed56u); f_006936b4();
    /* 0075ed56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed57: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ed5cu); f_00816cb8();
    /* 0075ed5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075ed5d:; BB(0x0075ed5d);
    /* 0075ed5d: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed62: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed67u); f_0079317c();
    /* 0075ed67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed68: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ed6du); f_00816cb8();
    /* 0075ed6d: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed71: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75ed76u); f_0073cd8c();
    /* 0075ed76: mov edi, eax */ r_edi = r_eax;
    /* 0075ed78: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed7a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed7fu); f_0079317c();
    /* 0075ed7f: mov ebx, eax */ r_ebx = r_eax;
    /* 0075ed81: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed88u); f_0073ec50();
    /* 0075ed88: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed8b: push 0x43c00000 */ { u32 v = 0x43c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed91: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed93: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed99: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x75ed9eu); f_0073cfec();
    /* 0075ed9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eda0: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda2: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x75eda7u); f_0073d148();
    /* 0075eda7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda9: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x75edaeu); f_0073d170();
    /* 0075edae: mov eax, edi */ r_eax = r_edi;
    /* 0075edb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075edb2: ret 4 */ FN_RET(0x0075ed44); r_esp += 8; return;
}

void f_0075ed5a(void)
{
    FN_ENTER(0x0075ed5a);
    /* 0075ed5a: or eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ed5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ed5d: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed62: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed67u); f_0079317c();
    /* 0075ed67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed68: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x75ed6du); f_00816cb8();
    /* 0075ed6d: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ed70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed71: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75ed76u); f_0073cd8c();
    /* 0075ed76: mov edi, eax */ r_edi = r_eax;
    /* 0075ed78: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed7a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed7fu); f_0079317c();
    /* 0075ed7f: mov ebx, eax */ r_ebx = r_eax;
    /* 0075ed81: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed88u); f_0073ec50();
    /* 0075ed88: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed8b: push 0x43c00000 */ { u32 v = 0x43c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed91: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed93: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed99: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x75ed9eu); f_0073cfec();
    /* 0075ed9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eda0: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda2: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x75eda7u); f_0073d148();
    /* 0075eda7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda9: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x75edaeu); f_0073d170();
    /* 0075edae: mov eax, edi */ r_eax = r_edi;
    /* 0075edb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075edb2: ret 4 */ FN_RET(0x0075ed5a); r_esp += 8; return;
}

void f_0075ed6a(void)
{
    FN_ENTER(0x0075ed6a);
    /* 0075ed6a: jg 0x75ed77 */ if ((!fZ&&fS==fO)) goto L_0075ed77;
L_0075ed6c:; BB(0x0075ed6c);
    /* 0075ed6c: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 0075ed6e: jae 0x75ed90 */ if (!fC) goto L_0075ed90;
L_0075ed70:; BB(0x0075ed70);
    /* 0075ed70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed71: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75ed76u); f_0073cd8c();
    /* 0075ed76: mov edi, eax */ r_edi = r_eax;
L_0075ed77:; BB(0x0075ed77);
    /* 0075ed77: clc  */ fC = 0;
    /* 0075ed78: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed7a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75ed7fu); f_0079317c();
    /* 0075ed7f: mov ebx, eax */ r_ebx = r_eax;
    /* 0075ed81: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed88u); f_0073ec50();
    /* 0075ed88: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed8b: push 0x43c00000 */ { u32 v = 0x43c00000u; r_esp -= 4; W32(r_esp, v); }
L_0075ed90:; BB(0x0075ed90);
    /* 0075ed90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed91: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed93: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed99: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x75ed9eu); f_0073cfec();
    /* 0075ed9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eda0: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda2: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x75eda7u); f_0073d148();
    /* 0075eda7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda9: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x75edaeu); f_0073d170();
    /* 0075edae: mov eax, edi */ r_eax = r_edi;
    /* 0075edb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075edb2: ret 4 */ FN_RET(0x0075ed6a); r_esp += 8; return;
}

void f_0075ed82(void)
{
    FN_ENTER(0x0075ed82);
    /* 0075ed82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075ed83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ed88u); f_0073ec50();
    /* 0075ed88: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ed8b: push 0x43c00000 */ { u32 v = 0x43c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed91: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ed93: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ed99: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x75ed9eu); f_0073cfec();
    /* 0075ed9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075eda0: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda2: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x75eda7u); f_0073d148();
    /* 0075eda7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075eda9: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x75edaeu); f_0073d170();
    /* 0075edae: mov eax, edi */ r_eax = r_edi;
    /* 0075edb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075edb2: ret 4 */ FN_RET(0x0075ed82); r_esp += 8; return;
}

void f_0075ed96(void)
{
    FN_ENTER(0x0075ed96);
    /* 0075ed96: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 0075ed97: add byte ptr [ebx - 0x18], dl */ { u32 ad = (u32)(r_ebx+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075ed9a:; BB(0x0075ed9a);
    /* 0075ed9a: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0075ed9b: loop 0x75ed9a */ r_ecx--; if (r_ecx) goto L_0075ed9a;
    /* 0075ed9d: jmp ptr [edx + 1] */ { u32 t = R32((u32)(r_edx+0x1u)); jmp_ind(t); return; }
}

