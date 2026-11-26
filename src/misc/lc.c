#include "protos.h"

void f_0085d9a0(void) /* ___lc_strtolc */
{
    FN_ENTER(0x0085d9a0);
    /* 0085d9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0085d9a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9a5: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0085d9a8: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9b0: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x85d9b5u); f_0085f580();
    /* 0085d9b5: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085d9b8: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0085d9ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085d9bd: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d9bf: je 0x85d9e6 */ if (fZ) goto L_0085d9e6;
L_0085d9c1:; BB(0x0085d9c1);
    /* 0085d9c1: cmp al, 0x2e */ {  u32 a = (u8)r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085d9c3: jne 0x85d9ed */ if (!fZ) goto L_0085d9ed;
L_0085d9c5:; BB(0x0085d9c5);
    /* 0085d9c5: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0085d9c8: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085d9cb: je 0x85d9ed */ if (fZ) goto L_0085d9ed;
L_0085d9cd:; BB(0x0085d9cd);
    /* 0085d9cd: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9d0: lea eax, [edi + 0x80] */ r_eax = (u32)(r_edi+0x80u);
    /* 0085d9d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9d7: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x85d9dcu); f_00858900();
    /* 0085d9dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085d9df: mov byte ptr [edi + 0x8f], 0 */ W8((u32)(r_edi+0x8fu), 0x0u);
L_0085d9e6:; BB(0x0085d9e6);
    /* 0085d9e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085d9e8: jmp 0x85da74 */ goto L_0085da74;
L_0085d9ed:; BB(0x0085d9ed);
    /* 0085d9ed: and dword ptr [ebp + 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d9f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d9f2: jmp 0x85da5f */ goto L_0085da5f;
L_0085d9f4:; BB(0x0085d9f4);
    /* 0085d9f4: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d9f8: lea edi, [eax + esi] */ r_edi = (u32)(r_eax+r_esi);
    /* 0085d9fb: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0085d9fd: jne 0x85da10 */ if (!fZ) goto L_0085da10;
L_0085d9ff:; BB(0x0085d9ff);
    /* 0085d9ff: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085da02: jae 0x85da70 */ if (!fC) goto L_0085da70;
L_0085da04:; BB(0x0085da04);
    /* 0085da04: cmp bl, 0x2e */ {  u32 a = (u8)r_ebx; u32 b = 0x2eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085da07: je 0x85da70 */ if (fZ) goto L_0085da70;
L_0085da09:; BB(0x0085da09);
    /* 0085da09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085da0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085da0b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085da0e: jmp 0x85da48 */ goto L_0085da48;
L_0085da10:; BB(0x0085da10);
    /* 0085da10: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085da14: jne 0x85da29 */ if (!fZ) goto L_0085da29;
L_0085da16:; BB(0x0085da16);
    /* 0085da16: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085da19: jae 0x85da70 */ if (!fC) goto L_0085da70;
L_0085da1b:; BB(0x0085da1b);
    /* 0085da1b: cmp bl, 0x5f */ {  u32 a = (u8)r_ebx; u32 b = 0x5fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085da1e: je 0x85da70 */ if (fZ) goto L_0085da70;
L_0085da20:; BB(0x0085da20);
    /* 0085da20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085da21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085da24: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085da27: jmp 0x85da46 */ goto L_0085da46;
L_0085da29:; BB(0x0085da29);
    /* 0085da29: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085da2d: jne 0x85da70 */ if (!fZ) goto L_0085da70;
L_0085da2f:; BB(0x0085da2f);
    /* 0085da2f: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085da32: jae 0x85da70 */ if (!fC) goto L_0085da70;
L_0085da34:; BB(0x0085da34);
    /* 0085da34: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085da36: je 0x85da3d */ if (fZ) goto L_0085da3d;
L_0085da38:; BB(0x0085da38);
    /* 0085da38: cmp bl, 0x2c */ {  u32 a = (u8)r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085da3b: jne 0x85da70 */ if (!fZ) goto L_0085da70;
L_0085da3d:; BB(0x0085da3d);
    /* 0085da3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085da3e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085da41: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085da46:; BB(0x0085da46);
    /* 0085da46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085da47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_0085da48:; BB(0x0085da48);
    /* 0085da48: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x85da4du); f_00858900();
    /* 0085da4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085da50: cmp bl, 0x2c */ {  u32 a = (u8)r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085da53: je 0x85da78 */ if (fZ) goto L_0085da78;
L_0085da55:; BB(0x0085da55);
    /* 0085da55: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085da57: je 0x85da78 */ if (fZ) goto L_0085da78;
L_0085da59:; BB(0x0085da59);
    /* 0085da59: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085da5c: lea esi, [edi + 1] */ r_esi = (u32)(r_edi+0x1u);
L_0085da5f:; BB(0x0085da5f);
    /* 0085da5f: push 0x998378 */ { u32 v = 0x998378u; r_esp -= 4; W32(r_esp, v); }
    /* 0085da64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085da65: call 0x867cd0 */ r_esp -= 4; W32(r_esp, 0x85da6au); f_00867cd0();
    /* 0085da6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085da6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085da6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085da6e: jne 0x85d9f4 */ if (!fZ) goto L_0085d9f4;
L_0085da70:; BB(0x0085da70);
    /* 0085da70: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085da73:; BB(0x0085da73);
    /* 0085da73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0085da74:; BB(0x0085da74);
    /* 0085da74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085da75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085da76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085da77: ret  */ FN_RET(0x0085d9a0); r_esp += 4; return;
L_0085da78:; BB(0x0085da78);
    /* 0085da78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085da7a: jmp 0x85da73 */ goto L_0085da73;
}

void f_0085da7c(void) /* ___lc_lctostr */
{
    FN_ENTER(0x0085da7c);
    /* 0085da7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085da7d: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0085da81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085da82: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085da86: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x85da8bu); f_0085e2f0();
    /* 0085da8b: lea eax, [esi + 0x40] */ r_eax = (u32)(r_esi+0x40u);
    /* 0085da8e: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085da91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085da92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085da93: je 0x85daa9 */ if (fZ) goto L_0085daa9;
L_0085da95:; BB(0x0085da95);
    /* 0085da95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085da96: push 0x998380 */ { u32 v = 0x998380u; r_esp -= 4; W32(r_esp, v); }
    /* 0085da9b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085da9d: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085daa1: call 0x85d97c */ r_esp -= 4; W32(r_esp, 0x85daa6u); f_0085d97c();
    /* 0085daa6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085daa9:; BB(0x0085daa9);
    /* 0085daa9: lea eax, [esi + 0x80] */ r_eax = (u32)(r_esi+0x80u);
    /* 0085daaf: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085dab2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085dab3: je 0x85dac9 */ if (fZ) goto L_0085dac9;
L_0085dab5:; BB(0x0085dab5);
    /* 0085dab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dab6: push 0x99837c */ { u32 v = 0x99837cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085dabb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dabd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dac1: call 0x85d97c */ r_esp -= 4; W32(r_esp, 0x85dac6u); f_0085d97c();
    /* 0085dac6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0085dac9:; BB(0x0085dac9);
    /* 0085dac9: ret  */ FN_RET(0x0085da7c); r_esp += 4; return;
}

