#include "protos.h"

void f_00862400(void) /* ___ascii_stricmp */
{
    FN_ENTER(0x00862400);
    /* 00862400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00862401: mov ebp, esp */ r_ebp = r_esp;
    /* 00862403: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862404: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862405: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862406: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00862409: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086240c: mov al, 0xff */ r_eax = (r_eax & 0xffffff00u) | ((0xffu) & 0xffu);
    /* 0086240e: mov edi, edi */ r_edi = r_edi;
L_00862410:; BB(0x00862410);
    /* 00862410: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00862412: je 0x862446 */ if (fZ) goto L_00862446;
L_00862414:; BB(0x00862414);
    /* 00862414: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00862416: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862419: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0086241b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086241e: cmp ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862420: je 0x862410 */ if (fZ) goto L_00862410;
L_00862422:; BB(0x00862422);
    /* 00862422: sub al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862424: cmp al, 0x1a */ {  u32 a = (u8)r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00862426: sbb cl, cl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862428: and cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086242b: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086242d: add al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086242f: xchg al, ah */ { u32 x = (u8)r_eax; u32 y = (u8)(r_eax>>8); r_eax = (r_eax & 0xffffff00u) | ((y) & 0xffu); r_eax = (r_eax & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 00862431: sub al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862433: cmp al, 0x1a */ {  u32 a = (u8)r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00862435: sbb cl, cl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862437: and cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086243a: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086243c: add al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086243e: cmp al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00862440: je 0x862410 */ if (fZ) goto L_00862410;
L_00862442:; BB(0x00862442);
    /* 00862442: sbb al, al */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = ((u64)a < (u64)b + c); }
    /* 00862444: sbb al, 0xff */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
L_00862446:; BB(0x00862446);
    /* 00862446: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00862449: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086244a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086244b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086244c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086244d: ret  */ FN_RET(0x00862400); r_esp += 4; return;
}

void f_00863de0(void) /* ___ascii_strnicmp */
{
    FN_ENTER(0x00863de0);
    /* 00863de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00863de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00863de3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00863de4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863de5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863de6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00863de9: or ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863deb: je 0x863e3a */ if (fZ) goto L_00863e3a;
L_00863ded:; BB(0x00863ded);
    /* 00863ded: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00863df0: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00863df3: mov bh, 0x41 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x41u) & 0xffu) << 8);
    /* 00863df5: mov bl, 0x5a */ r_ebx = (r_ebx & 0xffffff00u) | ((0x5au) & 0xffu);
    /* 00863df7: mov dh, 0x20 */ r_edx = (r_edx & 0xffff00ffu) | (((0x20u) & 0xffu) << 8);
    /* 00863df9: lea ecx, [ecx] */ r_ecx = (u32)(r_ecx);
L_00863dfc:; BB(0x00863dfc);
    /* 00863dfc: mov ah, byte ptr [esi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_esi))) & 0xffu) << 8);
    /* 00863dfe: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 00863e00: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00863e02: je 0x863e2b */ if (fZ) goto L_00863e2b;
L_00863e04:; BB(0x00863e04);
    /* 00863e04: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00863e06: je 0x863e2b */ if (fZ) goto L_00863e2b;
L_00863e08:; BB(0x00863e08);
    /* 00863e08: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863e0b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00863e0e: cmp ah, bh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00863e10: jb 0x863e18 */ if (fC) goto L_00863e18;
L_00863e12:; BB(0x00863e12);
    /* 00863e12: cmp ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00863e14: ja 0x863e18 */ if ((!fC&&!fZ)) goto L_00863e18;
L_00863e16:; BB(0x00863e16);
    /* 00863e16: add ah, dh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_00863e18:; BB(0x00863e18);
    /* 00863e18: cmp al, bh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ebx>>8); u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00863e1a: jb 0x863e22 */ if (fC) goto L_00863e22;
L_00863e1c:; BB(0x00863e1c);
    /* 00863e1c: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00863e1e: ja 0x863e22 */ if ((!fC&&!fZ)) goto L_00863e22;
L_00863e20:; BB(0x00863e20);
    /* 00863e20: add al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00863e22:; BB(0x00863e22);
    /* 00863e22: cmp ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00863e24: jne 0x863e31 */ if (!fZ) goto L_00863e31;
L_00863e26:; BB(0x00863e26);
    /* 00863e26: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00863e29: jne 0x863dfc */ if (!fZ) goto L_00863dfc;
L_00863e2b:; BB(0x00863e2b);
    /* 00863e2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00863e2d: cmp ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00863e2f: je 0x863e3a */ if (fZ) goto L_00863e3a;
L_00863e31:; BB(0x00863e31);
    /* 00863e31: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00863e36: jb 0x863e3a */ if (fC) goto L_00863e3a;
L_00863e38:; BB(0x00863e38);
    /* 00863e38: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); fC = (b != 0); }
L_00863e3a:; BB(0x00863e3a);
    /* 00863e3a: mov eax, ecx */ r_eax = r_ecx;
    /* 00863e3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00863e3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00863e3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00863e3f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00863e40: ret  */ FN_RET(0x00863de0); r_esp += 4; return;
}

