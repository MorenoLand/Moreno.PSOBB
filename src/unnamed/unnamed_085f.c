#include "protos.h"

void f_0085f4f4(void) /* __callnewh */
{
    FN_ENTER(0x0085f4f4);
    /* 0085f4f4: mov eax, dword ptr [0xae7bf8] */ r_eax = R32((u32)(0xae7bf8u));
    /* 0085f4f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f4fb: je 0x85f50c */ if (fZ) goto L_0085f50c;
L_0085f4fd:; BB(0x0085f4fd);
    /* 0085f4fd: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f501: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85f503u); call_ind(t); }
    /* 0085f503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f505: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f506: je 0x85f50c */ if (fZ) goto L_0085f50c;
L_0085f508:; BB(0x0085f508);
    /* 0085f508: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085f50a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085f50b: ret  */ FN_RET(0x0085f4f4); r_esp += 4; return;
L_0085f50c:; BB(0x0085f50c);
    /* 0085f50c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f50e: ret  */ FN_RET(0x0085f4f4); r_esp += 4; return;
}

void f_0085f580(void) /* _memset */
{
    FN_ENTER(0x0085f580);
    /* 0085f580: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0085f584: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085f588: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f58a: je 0x85f5db */ if (fZ) goto L_0085f5db;
L_0085f58c:; BB(0x0085f58c);
    /* 0085f58c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085f58e: mov al, byte ptr [esp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x8u))) & 0xffu);
    /* 0085f592: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f593: mov edi, ecx */ r_edi = r_ecx;
    /* 0085f595: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085f598: jb 0x85f5cb */ if (fC) goto L_0085f5cb;
L_0085f59a:; BB(0x0085f59a);
    /* 0085f59a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f59c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0085f59f: je 0x85f5ad */ if (fZ) goto L_0085f5ad;
L_0085f5a1:; BB(0x0085f5a1);
    /* 0085f5a1: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_0085f5a3:; BB(0x0085f5a3);
    /* 0085f5a3: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0085f5a5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085f5a8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0085f5ab: jne 0x85f5a3 */ if (!fZ) goto L_0085f5a3;
L_0085f5ad:; BB(0x0085f5ad);
    /* 0085f5ad: mov ecx, eax */ r_ecx = r_eax;
    /* 0085f5af: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f5b2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085f5b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0085f5b6: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f5b9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085f5bb: mov ecx, edx */ r_ecx = r_edx;
    /* 0085f5bd: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0085f5c0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 0085f5c3: je 0x85f5cb */ if (fZ) goto L_0085f5cb;
L_0085f5c5:; BB(0x0085f5c5);
    /* 0085f5c5: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0085f5c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f5c9: je 0x85f5d5 */ if (fZ) goto L_0085f5d5;
L_0085f5cb:; BB(0x0085f5cb);
    /* 0085f5cb: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0085f5cd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085f5d0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f5d3: jne 0x85f5cb */ if (!fZ) goto L_0085f5cb;
L_0085f5d5:; BB(0x0085f5d5);
    /* 0085f5d5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085f5d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085f5da: ret  */ FN_RET(0x0085f580); r_esp += 4; return;
L_0085f5db:; BB(0x0085f5db);
    /* 0085f5db: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085f5df: ret  */ FN_RET(0x0085f580); r_esp += 4; return;
}

