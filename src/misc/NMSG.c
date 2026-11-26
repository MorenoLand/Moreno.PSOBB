#include "protos.h"

void f_00864b78(void) /* __NMSG_WRITE */
{
    FN_ENTER(0x00864b78);
    /* 00864b78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864b79: lea ebp, [esp - 0x8c] */ r_ebp = (u32)(r_esp+0xffffff74u);
    /* 00864b80: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00864b86: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00864b8b: mov ecx, dword ptr [ebp + 0x94] */ r_ecx = R32((u32)(r_ebp+0x94u));
    /* 00864b91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864b92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864b93: mov dword ptr [ebp + 0x88], eax */ W32((u32)(r_ebp+0x88u), r_eax);
    /* 00864b99: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00864b9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864b9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00864b9e:; BB(0x00864b9e);
    /* 00864b9e: cmp ecx, dword ptr [eax*8 + 0xa24148] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*8+0xa24148u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ba5: je 0x864bad */ if (fZ) goto L_00864bad;
L_00864ba7:; BB(0x00864ba7);
    /* 00864ba7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864ba8: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00864bab: jb 0x864b9e */ if (fC) goto L_00864b9e;
L_00864bad:; BB(0x00864bad);
    /* 00864bad: mov esi, eax */ r_esi = r_eax;
    /* 00864baf: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00864bb2: cmp ecx, dword ptr [esi + 0xa24148] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xa24148u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864bb8: jne 0x864cd3 */ if (!fZ) goto L_00864cd3;
L_00864bbe:; BB(0x00864bbe);
    /* 00864bbe: mov eax, dword ptr [0xae7a5c] */ r_eax = R32((u32)(0xae7a5cu));
    /* 00864bc3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864bc6: je 0x864cab */ if (fZ) goto L_00864cab;
L_00864bcc:; BB(0x00864bcc);
    /* 00864bcc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864bce: jne 0x864bdd */ if (!fZ) goto L_00864bdd;
L_00864bd0:; BB(0x00864bd0);
    /* 00864bd0: cmp dword ptr [0xa239dc], 1 */ {  u32 a = R32((u32)(0xa239dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864bd7: je 0x864cab */ if (fZ) goto L_00864cab;
L_00864bdd:; BB(0x00864bdd);
    /* 00864bdd: cmp ecx, 0xfc */ {  u32 a = r_ecx; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864be3: je 0x864cd3 */ if (fZ) goto L_00864cd3;
L_00864be9:; BB(0x00864be9);
    /* 00864be9: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00864bee: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00864bf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864bf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00864bf3: mov byte ptr [ebp + 0x84], dl */ W8((u32)(r_ebp+0x84u), (u8)r_edx);
    /* 00864bf9: call dword ptr [0x8f81ec] */ { u32 t = R32((u32)(0x8f81ecu)); r_esp -= 4; W32(r_esp, 0x864bffu); call_ind(t); }
    /* 00864bff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864c01: jne 0x864c13 */ if (!fZ) goto L_00864c13;
L_00864c03:; BB(0x00864c03);
    /* 00864c03: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00864c06: push 0x997f38 */ { u32 v = 0x997f38u; r_esp -= 4; W32(r_esp, v); }
    /* 00864c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864c0c: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x864c11u); f_0085e2f0();
    /* 00864c11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864c12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00864c13:; BB(0x00864c13);
    /* 00864c13: lea edi, [ebp - 0x80] */ r_edi = (u32)(r_ebp+0xffffff80u);
    /* 00864c16: mov eax, edi */ r_eax = r_edi;
    /* 00864c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864c19: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x864c1eu); f_0085d760();
    /* 00864c1e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864c1f: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00864c22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864c23: jbe 0x864c47 */ if ((fC||fZ)) goto L_00864c47;
L_00864c25:; BB(0x00864c25);
    /* 00864c25: mov eax, edi */ r_eax = r_edi;
    /* 00864c27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864c28: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x864c2du); f_0085d760();
    /* 00864c2d: mov edi, eax */ r_edi = r_eax;
    /* 00864c2f: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00864c32: sub eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00864c35: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00864c37: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00864c39: push 0x997f0c */ { u32 v = 0x997f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00864c3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864c3f: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x864c44u); f_00858900();
    /* 00864c44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00864c47:; BB(0x00864c47);
    /* 00864c47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864c48: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x864c4du); f_0085d760();
    /* 00864c4d: push dword ptr [esi + 0xa2414c] */ { u32 v = R32((u32)(r_esi+0xa2414cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00864c53: mov ebx, eax */ r_ebx = r_eax;
    /* 00864c55: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x864c5au); f_0085d760();
    /* 00864c5a: lea eax, [ebx + eax + 0x1c] */ r_eax = (u32)(r_ebx+r_eax+0x1cu);
    /* 00864c5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864c5f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864c62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864c63: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00864c66: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x864c6bu); f_00858020();
    /* 00864c6b: mov ebx, esp */ r_ebx = r_esp;
    /* 00864c6d: push 0x999258 */ { u32 v = 0x999258u; r_esp -= 4; W32(r_esp, v); }
    /* 00864c72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864c73: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x864c78u); f_0085e2f0();
    /* 00864c78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864c79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864c7a: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x864c7fu); f_0085e300();
    /* 00864c7f: push 0x997f04 */ { u32 v = 0x997f04u; r_esp -= 4; W32(r_esp, v); }
    /* 00864c84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864c85: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x864c8au); f_0085e300();
    /* 00864c8a: push dword ptr [esi + 0xa2414c] */ { u32 v = R32((u32)(r_esi+0xa2414cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00864c90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864c91: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x864c96u); f_0085e300();
    /* 00864c96: push 0x12010 */ { u32 v = 0x12010u; r_esp -= 4; W32(r_esp, v); }
    /* 00864c9b: push 0x997f10 */ { u32 v = 0x997f10u; r_esp -= 4; W32(r_esp, v); }
    /* 00864ca0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864ca1: call 0x863737 */ r_esp -= 4; W32(r_esp, 0x864ca6u); f_00863737();
    /* 00864ca6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00864ca9: jmp 0x864cd3 */ goto L_00864cd3;
L_00864cab:; BB(0x00864cab);
    /* 00864cab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00864cac: lea eax, [ebp + 0x94] */ r_eax = (u32)(r_ebp+0x94u);
    /* 00864cb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864cb3: lea esi, [esi + 0xa2414c] */ r_esi = (u32)(r_esi+0xa2414cu);
    /* 00864cb9: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00864cbb: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x864cc0u); f_0085d760();
    /* 00864cc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864cc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864cc2: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00864cc4: push -0xc */ { u32 v = 0xfffffff4u; r_esp -= 4; W32(r_esp, v); }
    /* 00864cc6: call dword ptr [0x8f826c] */ { u32 t = R32((u32)(0x8f826cu)); r_esp -= 4; W32(r_esp, 0x864cccu); call_ind(t); }
    /* 00864ccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864ccd: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x864cd3u); call_ind(t); }
L_00864cd3:; BB(0x00864cd3);
    /* 00864cd3: lea esp, [ebp - 0x8c] */ r_esp = (u32)(r_ebp+0xffffff74u);
    /* 00864cd9: mov ecx, dword ptr [ebp + 0x88] */ r_ecx = R32((u32)(r_ebp+0x88u));
    /* 00864cdf: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x864ce4u); f_0085e419();
    /* 00864ce4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864ce5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864ce6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864ce7: add ebp, 0x8c */ {  u32 a = r_ebp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00864ced: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00864cee: ret  */ FN_RET(0x00864b78); r_esp += 4; return;
}

