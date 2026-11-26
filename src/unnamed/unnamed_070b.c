#include "protos.h"

void f_0070b04c(void) /* sub_70B04C */
{
    FN_ENTER(0x0070b04c);
    /* 0070b04c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b04d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070b04f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0070b052: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b054: je 0x70b05d */ if (fZ) goto L_0070b05d;
L_0070b056:; BB(0x0070b056);
    /* 0070b056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b057: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70b05cu); f_0082e960();
    /* 0070b05c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070b05d:; BB(0x0070b05d);
    /* 0070b05d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0070b060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b062: je 0x70b06b */ if (fZ) goto L_0070b06b;
L_0070b064:; BB(0x0070b064);
    /* 0070b064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b065: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x70b06au); f_00857e98();
    /* 0070b06a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070b06b:; BB(0x0070b06b);
    /* 0070b06b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070b06c: ret  */ FN_RET(0x0070b04c); r_esp += 4; return;
}

void f_0070b070(void) /* sub_70B070 */
{
    FN_ENTER(0x0070b070);
    /* 0070b070: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0070b072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b074: jne 0x70b079 */ if (!fZ) goto L_0070b079;
L_0070b076:; BB(0x0070b076);
    /* 0070b076: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b078: ret  */ FN_RET(0x0070b070); r_esp += 4; return;
L_0070b079:; BB(0x0070b079);
    /* 0070b079: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0070b07c: ret  */ FN_RET(0x0070b070); r_esp += 4; return;
}

void f_0070b080(void) /* sub_70B080 */
{
    FN_ENTER(0x0070b080);
    /* 0070b080: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0070b083: ret  */ FN_RET(0x0070b080); r_esp += 4; return;
}

void f_0070b084(void) /* sub_70B084 */
{
    FN_ENTER(0x0070b084);
    /* 0070b084: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b085: mov ebp, esp */ r_ebp = r_esp;
    /* 0070b087: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070b089: push 0x8f0248 */ { u32 v = 0x8f0248u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b08e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070b094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b095: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070b09c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070b09f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070b0a2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0070b0a5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0070b0a8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0070b0ab: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b0ad: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0070b0b4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x70b0b9u); f_008581c5();
    /* 0070b0b9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0070b0bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b0bf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0070b0c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b0c4: je 0x70b25d */ if (fZ) goto L_0070b25d;
L_0070b0ca:; BB(0x0070b0ca);
    /* 0070b0ca: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0070b0d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070b0d8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b0db: mov ecx, eax */ r_ecx = r_eax;
    /* 0070b0dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b0df: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0070b0e1: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
    /* 0070b0e8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0070b0eb: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0070b0ee: call 0x70afc0 */ r_esp -= 4; W32(r_esp, 0x70b0f3u); f_0070afc0();
    /* 0070b0f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0070b0f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070b0f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b0fa: jne 0x70b11d */ if (!fZ) goto L_0070b11d;
L_0070b0fc:; BB(0x0070b0fc);
    /* 0070b0fc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0070b103:; BB(0x0070b103);
    /* 0070b103: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0070b106: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0070b109: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070b10c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070b10f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070b112: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070b119: mov esp, ebp */ r_esp = r_ebp;
    /* 0070b11b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b11c: ret  */ FN_RET(0x0070b084); r_esp += 4; return;
L_0070b11d:; BB(0x0070b11d);
    /* 0070b11d: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0070b120: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0070b122: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b124: jle 0x70b251 */ if ((fZ||fS!=fO)) goto L_0070b251;
L_0070b12a:; BB(0x0070b12a);
    /* 0070b12a: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0070b12d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b130: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b132: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b134: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b135: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x70b13au); f_008581c5();
    /* 0070b13a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070b13b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0070b13e: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 0070b141: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0070b144: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b146: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b148: jle 0x70b247 */ if ((fZ||fS!=fO)) goto L_0070b247;
L_0070b14e:; BB(0x0070b14e);
    /* 0070b14e: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0070b150: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 0070b153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0070b156: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b159: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b15c: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b15f: jge 0x70b166 */ if ((fS==fO)) goto L_0070b166;
L_0070b161:; BB(0x0070b161);
    /* 0070b161: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0070b164: jmp 0x70b14e */ goto L_0070b14e;
L_0070b166:; BB(0x0070b166);
    /* 0070b166: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
L_0070b169:; BB(0x0070b169);
    /* 0070b169: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0070b16b: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0070b16e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0070b171: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070b173: lea ecx, [ebx + eax + 4] */ r_ecx = (u32)(r_ebx+r_eax+0x4u);
    /* 0070b177: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 0070b17a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b17c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b17e: jle 0x70b0fc */ if ((fZ||fS!=fO)) goto L_0070b0fc;
L_0070b184:; BB(0x0070b184);
    /* 0070b184: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0070b187: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 0070b18a: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 0070b18d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b18f: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070b192: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0070b195: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b197: jle 0x70b20c */ if ((fZ||fS!=fO)) goto L_0070b20c;
L_0070b199:; BB(0x0070b199);
    /* 0070b199: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b19c: jl 0x70b1ed */ if ((fS!=fO)) goto L_0070b1ed;
L_0070b19e:; BB(0x0070b19e);
    /* 0070b19e: lea edi, [esi - 5] */ r_edi = (u32)(r_esi+0xfffffffbu);
    /* 0070b1a1: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_0070b1a4:; BB(0x0070b1a4);
    /* 0070b1a4: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0070b1a6: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0070b1a9: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070b1ab: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0070b1ad: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1af: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1b1: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b1b3: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 0070b1b6: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070b1b8: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0070b1bb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070b1bd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070b1bf: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b1c1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070b1c4: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070b1c6: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0070b1c9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1cb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1cd: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b1cf: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0070b1d2: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070b1d4: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0070b1d7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1d9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1db: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b1dd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0070b1e0: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b1e3: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1e6: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070b1e9: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b1eb: jle 0x70b1a4 */ if ((fZ||fS!=fO)) goto L_0070b1a4;
L_0070b1ed:; BB(0x0070b1ed);
    /* 0070b1ed: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0070b1f0: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0070b1f2: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070b1f4: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0070b1f6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1f8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b1fa: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b1fc: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0070b1ff: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070b202: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0070b205: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b208: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b20a: jl 0x70b1ed */ if ((fS!=fO)) goto L_0070b1ed;
L_0070b20c:; BB(0x0070b20c);
    /* 0070b20c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b20e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b210: jle 0x70b0fc */ if ((fZ||fS!=fO)) goto L_0070b0fc;
L_0070b216:; BB(0x0070b216);
    /* 0070b216: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b219: jl 0x70b236 */ if ((fS!=fO)) goto L_0070b236;
L_0070b21b:; BB(0x0070b21b);
    /* 0070b21b: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
L_0070b21e:; BB(0x0070b21e);
    /* 0070b21e: add dword ptr [edx], ebx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b220: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b223: add dword ptr [edx + 4], ebx */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b226: add dword ptr [edx + 8], ebx */ { u32 ad = (u32)(r_edx+0x8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b229: add dword ptr [edx + 0xc], ebx */ { u32 ad = (u32)(r_edx+0xcu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b22c: add dword ptr [edx + 0x10], ebx */ { u32 ad = (u32)(r_edx+0x10u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b22f: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b232: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b234: jle 0x70b21e */ if ((fZ||fS!=fO)) goto L_0070b21e;
L_0070b236:; BB(0x0070b236);
    /* 0070b236: add dword ptr [edx], ebx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b238: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b23b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b23e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070b240: jl 0x70b236 */ if ((fS!=fO)) goto L_0070b236;
L_0070b242:; BB(0x0070b242);
    /* 0070b242: jmp 0x70b0fc */ goto L_0070b0fc;
L_0070b247:; BB(0x0070b247);
    /* 0070b247: mov eax, ecx */ r_eax = r_ecx;
    /* 0070b249: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0070b24c: jmp 0x70b169 */ goto L_0070b169;
L_0070b251:; BB(0x0070b251);
    /* 0070b251: mov dword ptr [eax + 0xc], 0xffffffff */ W32((u32)(r_eax+0xcu), 0xffffffffu);
    /* 0070b258: jmp 0x70b169 */ goto L_0070b169;
L_0070b25d:; BB(0x0070b25d);
    /* 0070b25d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b25f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0070b262: jmp 0x70b103 */ goto L_0070b103;
}

void f_0070b268(void) /* sub_70B268 */
{
    FN_ENTER(0x0070b268);
    /* 0070b268: mov eax, dword ptr [ecx + 0x80f8] */ r_eax = R32((u32)(r_ecx+0x80f8u));
    /* 0070b26e: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0070b271: cmp edx, dword ptr [ecx + 0x80f4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x80f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070b277: mov dword ptr [ecx + 0x80f8], edx */ W32((u32)(r_ecx+0x80f8u), r_edx);
    /* 0070b27d: movzx eax, byte ptr [ecx + eax + 0x1f0] */ r_eax = (u32)R8((u32)(r_ecx+r_eax+0x1f0u));
    /* 0070b285: jl 0x70b295 */ if ((fS!=fO)) goto L_0070b295;
L_0070b287:; BB(0x0070b287);
    /* 0070b287: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b289: mov dword ptr [ecx + 0x80f8], edx */ W32((u32)(r_ecx+0x80f8u), r_edx);
    /* 0070b28f: mov dword ptr [ecx + 0x80f4], edx */ W32((u32)(r_ecx+0x80f4u), r_edx);
L_0070b295:; BB(0x0070b295);
    /* 0070b295: ret  */ FN_RET(0x0070b268); r_esp += 4; return;
}

void f_0070b298(void) /* sub_70B298 */
{
    FN_ENTER(0x0070b298);
    /* 0070b298: mov edx, dword ptr [ecx + 0x80f4] */ r_edx = R32((u32)(r_ecx+0x80f4u));
    /* 0070b29e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b2a0: mov eax, 0 */ r_eax = 0x0u;
    /* 0070b2a5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0070b2a8: ret  */ FN_RET(0x0070b298); r_esp += 4; return;
}

void f_0070b2ac(void) /* sub_70B2AC */
{
    FN_ENTER(0x0070b2ac);
    /* 0070b2ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b2ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070b2af: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0070b2b2: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x70b2b7u); f_00763030();
    /* 0070b2b7: lea ecx, [ebp + 0xf4] */ r_ecx = (u32)(r_ebp+0xf4u);
    /* 0070b2bd: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x70b2c2u); f_00763030();
    /* 0070b2c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b2c4: mov dword ptr [ebp + 0x80f4], eax */ W32((u32)(r_ebp+0x80f4u), r_eax);
    /* 0070b2ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b2cb: mov dword ptr [ebp + 0x80f8], eax */ W32((u32)(r_ebp+0x80f8u), r_eax);
    /* 0070b2d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b2d3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b2d5: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0070b2d8: mov dword ptr [ebp + 0x1ec], eax */ W32((u32)(r_ebp+0x1ecu), r_eax);
    /* 0070b2de: call dword ptr [0x8f83e0] */ { u32 t = R32((u32)(0x8f83e0u)); r_esp -= 4; W32(r_esp, 0x70b2e4u); call_ind(t); }
    /* 0070b2e4: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0070b2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b2e9: jl 0x70b2f8 */ if ((fS!=fO)) goto L_0070b2f8;
L_0070b2eb:; BB(0x0070b2eb);
    /* 0070b2eb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0070b2ef: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0070b2f2: mov eax, ebp */ r_eax = r_ebp;
    /* 0070b2f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b2f5: ret 4 */ FN_RET(0x0070b2ac); r_esp += 8; return;
L_0070b2f8:; BB(0x0070b2f8);
    /* 0070b2f8: or dword ptr [ebp], 3 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b2fc: mov eax, ebp */ r_eax = r_ebp;
    /* 0070b2fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b2ff: ret 4 */ FN_RET(0x0070b2ac); r_esp += 8; return;
}

void f_0070b2d7(void)
{
    FN_ENTER(0x0070b2d7);
    /* 0070b2d7: add byte ptr [ecx + 0x1ec85], cl */ { u32 ad = (u32)(r_ecx+0x1ec85u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070b2dd: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 0070b2df: adc eax, 0x8f83e0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x8f83e0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0070b2e4: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0070b2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b2e9: jl 0x70b2f8 */ if ((fS!=fO)) goto L_0070b2f8;
L_0070b2eb:; BB(0x0070b2eb);
    /* 0070b2eb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0070b2ef: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0070b2f2: mov eax, ebp */ r_eax = r_ebp;
    /* 0070b2f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b2f5: ret 4 */ FN_RET(0x0070b2d7); r_esp += 8; return;
L_0070b2f8:; BB(0x0070b2f8);
    /* 0070b2f8: or dword ptr [ebp], 3 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b2fc: mov eax, ebp */ r_eax = r_ebp;
    /* 0070b2fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b2ff: ret 4 */ FN_RET(0x0070b2d7); r_esp += 8; return;
}

void f_0070b304(void) /* sub_70B304 */
{
    FN_ENTER(0x0070b304);
    /* 0070b304: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b305: mov esi, ecx */ r_esi = r_ecx;
    /* 0070b307: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b309: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b30c: call dword ptr [0x8f83e8] */ { u32 t = R32((u32)(0x8f83e8u)); r_esp -= 4; W32(r_esp, 0x70b312u); call_ind(t); }
    /* 0070b312: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b315: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x70b31bu); call_ind(t); }
    /* 0070b31b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b31c: ret  */ FN_RET(0x0070b304); r_esp += 4; return;
}

void f_0070b320(void) /* sub_70B320 */
{
    FN_ENTER(0x0070b320);
    /* 0070b320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b321: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b322: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b323: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b324: mov esi, ecx */ r_esi = r_ecx;
    /* 0070b326: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0070b328: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b32a: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0070b32e: jne 0x70b3d2 */ if (!fZ) goto L_0070b3d2;
L_0070b334:; BB(0x0070b334);
    /* 0070b334: cmp edi, 0x7f00 */ {  u32 a = r_edi; u32 b = 0x7f00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b33a: jg 0x70b3d2 */ if ((!fZ&&fS==fO)) goto L_0070b3d2;
L_0070b340:; BB(0x0070b340);
    /* 0070b340: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b342: jle 0x70b3d2 */ if ((fZ||fS!=fO)) goto L_0070b3d2;
L_0070b348:; BB(0x0070b348);
    /* 0070b348: push 0x7f00 */ { u32 v = 0x7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b34d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x70b352u); f_008581c5();
    /* 0070b352: mov ebp, eax */ r_ebp = r_eax;
    /* 0070b354: mov dword ptr [0xa97f70], esi */ W32((u32)(0xa97f70u), r_esi);
    /* 0070b35a: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 0070b361: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b362: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b366: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b367: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x70b36cu); f_0086b6b8();
    /* 0070b36c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b36f: mov edx, dword ptr [esi + 0x1ec] */ r_edx = R32((u32)(r_esi+0x1ecu));
    /* 0070b375: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b377: je 0x70b383 */ if (fZ) goto L_0070b383;
L_0070b379:; BB(0x0070b379);
    /* 0070b379: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b37a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b37b: lea ecx, [esi + 0xc] */ r_ecx = (u32)(r_esi+0xcu);
    /* 0070b37e: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x70b383u); f_00763054();
L_0070b383:; BB(0x0070b383);
    /* 0070b383: mov edx, dword ptr [esi + 0x80f0] */ r_edx = R32((u32)(r_esi+0x80f0u));
    /* 0070b389: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070b38c: mov dword ptr [esi + 0x80f0], edx */ W32((u32)(r_esi+0x80f0u), r_edx);
    /* 0070b392: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x70b397u); f_00859dd6();
    /* 0070b397: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0070b39d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b39f: mov eax, ebp */ r_eax = r_ebp;
    /* 0070b3a1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b3a3: jle 0x70b3c2 */ if ((fZ||fS!=fO)) goto L_0070b3c2;
L_0070b3a5:; BB(0x0070b3a5);
    /* 0070b3a5: mov ebx, eax */ r_ebx = r_eax;
L_0070b3a7:; BB(0x0070b3a7);
    /* 0070b3a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3ab: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b3ae: call dword ptr [0x8f83d8] */ { u32 t = R32((u32)(0x8f83d8u)); r_esp -= 4; W32(r_esp, 0x70b3b4u); call_ind(t); }
    /* 0070b3b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b3b6: jle 0x70b3db */ if ((fZ||fS!=fO)) goto L_0070b3db;
L_0070b3b8:; BB(0x0070b3b8);
    /* 0070b3b8: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0070b3ba: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b3bc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b3be: jg 0x70b3a7 */ if ((!fZ&&fS==fO)) goto L_0070b3a7;
L_0070b3c0:; BB(0x0070b3c0);
    /* 0070b3c0: mov ebx, eax */ r_ebx = r_eax;
L_0070b3c2:; BB(0x0070b3c2);
    /* 0070b3c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3c3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x70b3c8u); f_00857e98();
    /* 0070b3c8: mov eax, ebx */ r_eax = r_ebx;
    /* 0070b3ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070b3cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070b3cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b3cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b3ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b3cf: ret 8 */ FN_RET(0x0070b320); r_esp += 12; return;
L_0070b3d2:; BB(0x0070b3d2);
    /* 0070b3d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b3d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070b3d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b3d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b3d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b3d8: ret 8 */ FN_RET(0x0070b320); r_esp += 12; return;
L_0070b3db:; BB(0x0070b3db);
    /* 0070b3db: or dword ptr [esi], 2 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b3de: mov ebx, eax */ r_ebx = r_eax;
    /* 0070b3e0: jmp 0x70b3c2 */ goto L_0070b3c2;
}

void f_0070b3e4(void) /* sub_70B3E4 */
{
    FN_ENTER(0x0070b3e4);
    /* 0070b3e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3e6: mov esi, ecx */ r_esi = r_ecx;
    /* 0070b3e8: push 0x7f00 */ { u32 v = 0x7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3ef: lea edi, [esi + 0x1f0] */ r_edi = (u32)(r_esi+0x1f0u);
    /* 0070b3f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b3f6: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x70b3fbu); f_0086b5cc();
    /* 0070b3fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b3fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b400: push 0x7f00 */ { u32 v = 0x7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b405: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b406: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b409: call dword ptr [0x8f8408] */ { u32 t = R32((u32)(0x8f8408u)); r_esp -= 4; W32(r_esp, 0x70b40fu); call_ind(t); }
    /* 0070b40f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b411: jle 0x70b426 */ if ((fZ||fS!=fO)) goto L_0070b426;
L_0070b413:; BB(0x0070b413);
    /* 0070b413: mov dword ptr [esi + 0x80f8], 0 */ W32((u32)(r_esi+0x80f8u), 0x0u);
    /* 0070b41d: mov dword ptr [esi + 0x80f4], eax */ W32((u32)(r_esi+0x80f4u), r_eax);
    /* 0070b423: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b424: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b425: ret  */ FN_RET(0x0070b3e4); r_esp += 4; return;
L_0070b426:; BB(0x0070b426);
    /* 0070b426: jne 0x70b42d */ if (!fZ) goto L_0070b42d;
L_0070b428:; BB(0x0070b428);
    /* 0070b428: or dword ptr [esi], 2 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b42b: jmp 0x70b43d */ goto L_0070b43d;
L_0070b42d:; BB(0x0070b42d);
    /* 0070b42d: call dword ptr [0x8f83cc] */ { u32 t = R32((u32)(0x8f83ccu)); r_esp -= 4; W32(r_esp, 0x70b433u); call_ind(t); }
    /* 0070b433: cmp eax, 0x2733 */ {  u32 a = r_eax; u32 b = 0x2733u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b438: je 0x70b43d */ if (fZ) goto L_0070b43d;
L_0070b43a:; BB(0x0070b43a);
    /* 0070b43a: or dword ptr [esi], 2 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070b43d:; BB(0x0070b43d);
    /* 0070b43d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b43f: mov dword ptr [esi + 0x80f4], edx */ W32((u32)(r_esi+0x80f4u), r_edx);
    /* 0070b445: mov dword ptr [esi + 0x80f8], edx */ W32((u32)(r_esi+0x80f8u), r_edx);
    /* 0070b44b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b44d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b44e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b44f: ret  */ FN_RET(0x0070b3e4); r_esp += 4; return;
}

void f_0070b450(void) /* sub_70B450 */
{
    FN_ENTER(0x0070b450);
    /* 0070b450: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b451: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b452: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b453: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070b456: mov edi, ecx */ r_edi = r_ecx;
    /* 0070b458: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0070b45c: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0070b45f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b460: call 0x8581d3 */ r_esp -= 4; W32(r_esp, 0x70b465u); f_008581d3();
    /* 0070b465: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070b466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b468: je 0x70b4b5 */ if (fZ) goto L_0070b4b5;
L_0070b46a:; BB(0x0070b46a);
    /* 0070b46a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b46b: call dword ptr [0x8f83f4] */ { u32 t = R32((u32)(0x8f83f4u)); r_esp -= 4; W32(r_esp, 0x70b471u); call_ind(t); }
    /* 0070b471: mov ebp, eax */ r_ebp = r_eax;
    /* 0070b473: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b475: je 0x70b53c */ if (fZ) goto L_0070b53c;
L_0070b47b:; BB(0x0070b47b);
    /* 0070b47b: movzx esi, word ptr [esp + 0x20] */ r_esi = (u32)R16((u32)(r_esp+0x20u));
    /* 0070b480: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b481: mov edx, 2 */ r_edx = 0x2u;
    /* 0070b486: mov word ptr [edi + 0x1dc], dx */ W16((u32)(r_edi+0x1dcu), (u16)r_edx);
    /* 0070b48d: call dword ptr [0x8f83d4] */ { u32 t = R32((u32)(0x8f83d4u)); r_esp -= 4; W32(r_esp, 0x70b493u); call_ind(t); }
    /* 0070b493: mov word ptr [edi + 0x1de], ax */ W16((u32)(r_edi+0x1deu), (u16)r_eax);
    /* 0070b49a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0070b49d: movsx ebp, word ptr [ebp + 0xa] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 0070b4a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b4a2: add edi, 0x1e0 */ {  u32 a = r_edi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070b4a8: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b4aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b4ab: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x70b4b0u); f_0086b6b8();
    /* 0070b4b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b4b3: jmp 0x70b531 */ goto L_0070b531;
L_0070b4b5:; BB(0x0070b4b5);
    /* 0070b4b5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0070b4b9: mov eax, esi */ r_eax = r_esi;
    /* 0070b4bb: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0070b4bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b4c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b4c3: mov ebp, esi */ r_ebp = r_esi;
    /* 0070b4c5: mov esi, edx */ r_esi = r_edx;
    /* 0070b4c7: mov edi, ecx */ r_edi = r_ecx;
L_0070b4c9:; BB(0x0070b4c9);
    /* 0070b4c9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0070b4cd: movsx ebx, byte ptr [edi + ebx] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edi+r_ebx));
    /* 0070b4d1: cmp ebx, 0x2e */ {  u32 a = r_ebx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b4d4: je 0x70b4da */ if (fZ) goto L_0070b4da;
L_0070b4d6:; BB(0x0070b4d6);
    /* 0070b4d6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b4d8: jne 0x70b4f4 */ if (!fZ) goto L_0070b4f4;
L_0070b4da:; BB(0x0070b4da);
    /* 0070b4da: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0070b4de: mov byte ptr [edi + ebx], 0 */ W8((u32)(r_edi+r_ebx), 0x0u);
    /* 0070b4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b4e3: call 0x85a0fa */ r_esp -= 4; W32(r_esp, 0x70b4e8u); f_0085a0fa();
    /* 0070b4e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070b4e9: mov ebx, esi */ r_ebx = r_esi;
    /* 0070b4eb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070b4ee: mov byte ptr [esp + ebx], al */ W8((u32)(r_esp+r_ebx), (u8)r_eax);
    /* 0070b4f1: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
L_0070b4f4:; BB(0x0070b4f4);
    /* 0070b4f4: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070b4f7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070b4fa: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b4fd: jl 0x70b4c9 */ if ((fS!=fO)) goto L_0070b4c9;
L_0070b4ff:; BB(0x0070b4ff);
    /* 0070b4ff: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0070b503: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0070b507: movzx edx, word ptr [esp + 0x20] */ r_edx = (u32)R16((u32)(r_esp+0x20u));
    /* 0070b50c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b50d: mov eax, 2 */ r_eax = 0x2u;
    /* 0070b512: mov word ptr [edi + 0x1dc], ax */ W16((u32)(r_edi+0x1dcu), (u16)r_eax);
    /* 0070b519: call dword ptr [0x8f83d4] */ { u32 t = R32((u32)(0x8f83d4u)); r_esp -= 4; W32(r_esp, 0x70b51fu); call_ind(t); }
    /* 0070b51f: mov word ptr [edi + 0x1de], ax */ W16((u32)(r_edi+0x1deu), (u16)r_eax);
    /* 0070b526: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0070b529: add edi, 0x1e0 */ {  u32 a = r_edi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070b52f: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
L_0070b531:; BB(0x0070b531);
    /* 0070b531: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b533: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070b536: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b538: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b539: ret 8 */ FN_RET(0x0070b450); r_esp += 12; return;
L_0070b53c:; BB(0x0070b53c);
    /* 0070b53c: mov eax, 1 */ r_eax = 0x1u;
    /* 0070b541: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070b544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b545: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b546: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b547: ret 8 */ FN_RET(0x0070b450); r_esp += 12; return;
}

void f_0070b54c(void) /* sub_70B54C */
{
    FN_ENTER(0x0070b54c);
    /* 0070b54c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b54d: mov edi, ecx */ r_edi = r_ecx;
    /* 0070b54f: lea eax, [edi + 0x1dc] */ r_eax = (u32)(r_edi+0x1dcu);
    /* 0070b555: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b558: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b55b: call dword ptr [0x8f83dc] */ { u32 t = R32((u32)(0x8f83dcu)); r_esp -= 4; W32(r_esp, 0x70b561u); call_ind(t); }
    /* 0070b561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b563: jl 0x70b569 */ if ((fS!=fO)) goto L_0070b569;
L_0070b565:; BB(0x0070b565);
    /* 0070b565: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b567: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b568: ret  */ FN_RET(0x0070b54c); r_esp += 4; return;
L_0070b569:; BB(0x0070b569);
    /* 0070b569: or dword ptr [edi], 2 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b56c: mov eax, 1 */ r_eax = 0x1u;
    /* 0070b571: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b572: ret  */ FN_RET(0x0070b54c); r_esp += 4; return;
}

void f_0070b574(void) /* sub_70B574 */
{
    FN_ENTER(0x0070b574);
    /* 0070b574: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b575: mov edi, ecx */ r_edi = r_ecx;
    /* 0070b577: lea eax, [edi + 0x1dc] */ r_eax = (u32)(r_edi+0x1dcu);
    /* 0070b57d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b57f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b580: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b583: call dword ptr [0x8f83dc] */ { u32 t = R32((u32)(0x8f83dcu)); r_esp -= 4; W32(r_esp, 0x70b589u); call_ind(t); }
    /* 0070b589: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b58b: jl 0x70b591 */ if ((fS!=fO)) goto L_0070b591;
L_0070b58d:; BB(0x0070b58d);
    /* 0070b58d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b58f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b590: ret  */ FN_RET(0x0070b574); r_esp += 4; return;
L_0070b591:; BB(0x0070b591);
    /* 0070b591: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b593: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b596: call dword ptr [0x8f83e8] */ { u32 t = R32((u32)(0x8f83e8u)); r_esp -= 4; W32(r_esp, 0x70b59cu); call_ind(t); }
    /* 0070b59c: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b59f: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x70b5a5u); call_ind(t); }
    /* 0070b5a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5ab: call dword ptr [0x8f83e0] */ { u32 t = R32((u32)(0x8f83e0u)); r_esp -= 4; W32(r_esp, 0x70b5b1u); call_ind(t); }
    /* 0070b5b1: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0070b5b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b5b6: jl 0x70b5bf */ if ((fS!=fO)) goto L_0070b5bf;
L_0070b5b8:; BB(0x0070b5b8);
    /* 0070b5b8: mov eax, 1 */ r_eax = 0x1u;
    /* 0070b5bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b5be: ret  */ FN_RET(0x0070b574); r_esp += 4; return;
L_0070b5bf:; BB(0x0070b5bf);
    /* 0070b5bf: or dword ptr [edi], 3 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b5c2: jmp 0x70b5b8 */ goto L_0070b5b8;
}

void f_0070b5c4(void) /* sub_70B5C4 */
{
    FN_ENTER(0x0070b5c4);
    /* 0070b5c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5c5: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070b5cb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070b5cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0070b5d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b5d2: mov dword ptr [esp + 0x108], 0x186a0 */ W32((u32)(r_esp+0x108u), 0x186a0u);
    /* 0070b5dd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0070b5e0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0070b5e4: add dword ptr [esp], 1 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b5e8: mov dword ptr [esp + 0x104], eax */ W32((u32)(r_esp+0x104u), r_eax);
    /* 0070b5ef: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0070b5f2: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 0070b5f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5fd: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b5ff: call dword ptr [0x8f8414] */ { u32 t = R32((u32)(0x8f8414u)); r_esp -= 4; W32(r_esp, 0x70b605u); call_ind(t); }
    /* 0070b605: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070b608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b609: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b60c: call 0x88f686 */ r_esp -= 4; W32(r_esp, 0x70b611u); f_0088f686();
    /* 0070b611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b613: je 0x70b622 */ if (fZ) goto L_0070b622;
L_0070b615:; BB(0x0070b615);
    /* 0070b615: mov eax, 1 */ r_eax = 0x1u;
    /* 0070b61a: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070b620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b621: ret  */ FN_RET(0x0070b5c4); r_esp += 4; return;
L_0070b622:; BB(0x0070b622);
    /* 0070b622: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b624: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070b62a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070b62b: ret  */ FN_RET(0x0070b5c4); r_esp += 4; return;
}

void f_0070b62c(void) /* sub_70B62C */
{
    FN_ENTER(0x0070b62c);
    /* 0070b62c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b62d: mov esi, ecx */ r_esi = r_ecx;
    /* 0070b62f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b631: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b634: call dword ptr [0x8f83e8] */ { u32 t = R32((u32)(0x8f83e8u)); r_esp -= 4; W32(r_esp, 0x70b63au); call_ind(t); }
    /* 0070b63a: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b63d: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x70b643u); call_ind(t); }
    /* 0070b643: mov dword ptr [esi + 8], 0xffffffff */ W32((u32)(r_esi+0x8u), 0xffffffffu);
    /* 0070b64a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070b64b: ret  */ FN_RET(0x0070b62c); r_esp += 4; return;
}

void f_0070b64c(void) /* sub_70B64C */
{
    FN_ENTER(0x0070b64c);
    /* 0070b64c: mov eax, 0x8110 */ r_eax = 0x8110u;
    /* 0070b651: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x70b656u); f_00858020();
    /* 0070b656: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b65b: push dword ptr [esp + 0x8118] */ { u32 v = R32((u32)(r_esp+0x8118u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b662: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x70b667u); f_0085957c();
    /* 0070b667: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b66a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b66c: je 0x70b7af */ if (fZ) goto L_0070b7af;
L_0070b672:; BB(0x0070b672);
    /* 0070b672: mov edx, dword ptr [esp + 0x811c] */ r_edx = R32((u32)(r_esp+0x811cu));
    /* 0070b679: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0070b67f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0070b684: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0070b687: mov ebx, dword ptr [esp + 0x811c] */ r_ebx = R32((u32)(r_esp+0x811cu));
    /* 0070b68e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0070b692: mov esi, edx */ r_esi = r_edx;
    /* 0070b694: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0070b698: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0070b69c: mov ebp, eax */ r_ebp = r_eax;
L_0070b69e:; BB(0x0070b69e);
    /* 0070b69e: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0070b6a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b6a3: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b6a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b6aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b6ab: call 0x859678 */ r_esp -= 4; W32(r_esp, 0x70b6b0u); f_00859678();
    /* 0070b6b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b6b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b6b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070b6b7: jle 0x70b772 */ if ((fZ||fS!=fO)) goto L_0070b772;
L_0070b6bd:; BB(0x0070b6bd);
    /* 0070b6bd: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b6c0: jl 0x70b74e */ if ((fS!=fO)) goto L_0070b74e;
L_0070b6c6:; BB(0x0070b6c6);
    /* 0070b6c6: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_0070b6c9:; BB(0x0070b6c9);
    /* 0070b6c9: movzx edi, byte ptr [esp + ecx + 0x10] */ r_edi = (u32)R8((u32)(r_esp+r_ecx+0x10u));
    /* 0070b6ce: mov ebx, esi */ r_ebx = r_esi;
    /* 0070b6d0: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0070b6d3: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b6d5: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070b6db: xor ebx, dword ptr [esi*4 + 0xa97f80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi*4+0xa97f80u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b6e2: movzx esi, byte ptr [esp + ecx + 0x11] */ r_esi = (u32)R8((u32)(r_esp+r_ecx+0x11u));
    /* 0070b6e7: mov edi, ebx */ r_edi = r_ebx;
    /* 0070b6e9: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0070b6ec: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b6ee: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0070b6f1: xor edi, dword ptr [ebx*4 + 0xa97f80] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx*4+0xa97f80u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0070b6f8: mov esi, edi */ r_esi = r_edi;
    /* 0070b6fa: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0070b6fd: movzx ebx, byte ptr [esp + ecx + 0x12] */ r_ebx = (u32)R8((u32)(r_esp+r_ecx+0x12u));
    /* 0070b702: xor edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0070b704: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070b70a: xor esi, dword ptr [edi*4 + 0xa97f80] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi*4+0xa97f80u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b711: movzx edi, byte ptr [esp + ecx + 0x13] */ r_edi = (u32)R8((u32)(r_esp+r_ecx+0x13u));
    /* 0070b716: mov ebx, esi */ r_ebx = r_esi;
    /* 0070b718: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0070b71b: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b71d: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070b723: xor ebx, dword ptr [esi*4 + 0xa97f80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi*4+0xa97f80u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b72a: movzx edi, byte ptr [esp + ecx + 0x14] */ r_edi = (u32)R8((u32)(r_esp+r_ecx+0x14u));
    /* 0070b72f: mov esi, ebx */ r_esi = r_ebx;
    /* 0070b731: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0070b734: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0070b736: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0070b739: xor esi, dword ptr [ebx*4 + 0xa97f80] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx*4+0xa97f80u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b740: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b743: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b745: jle 0x70b6c9 */ if ((fZ||fS!=fO)) goto L_0070b6c9;
L_0070b747:; BB(0x0070b747);
    /* 0070b747: mov ebx, dword ptr [esp + 0x811c] */ r_ebx = R32((u32)(r_esp+0x811cu));
L_0070b74e:; BB(0x0070b74e);
    /* 0070b74e: movzx edi, byte ptr [esp + ecx + 0x10] */ r_edi = (u32)R8((u32)(r_esp+r_ecx+0x10u));
    /* 0070b753: mov edx, esi */ r_edx = r_esi;
    /* 0070b755: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b758: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b75a: mov edi, esi */ r_edi = r_esi;
    /* 0070b75c: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070b762: mov esi, edx */ r_esi = r_edx;
    /* 0070b764: xor esi, dword ptr [edi*4 + 0xa97f80] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi*4+0xa97f80u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070b76b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b76e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070b770: jl 0x70b74e */ if ((fS!=fO)) goto L_0070b74e;
L_0070b772:; BB(0x0070b772);
    /* 0070b772: add dword ptr [ebx], eax */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b774: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b779: je 0x70b69e */ if (fZ) goto L_0070b69e;
L_0070b77f:; BB(0x0070b77f);
    /* 0070b77f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0070b782: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0070b786: mov ecx, dword ptr [esp + 0x8118] */ r_ecx = R32((u32)(r_esp+0x8118u));
    /* 0070b78d: mov eax, ebp */ r_eax = r_ebp;
    /* 0070b78f: mov edx, esi */ r_edx = r_esi;
    /* 0070b791: not edx */ r_edx = ~r_edx;
    /* 0070b793: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0070b797: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0070b79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b79c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0070b79e: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x70b7a3u); f_00859710();
    /* 0070b7a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0070b7a8: add esp, 0x8114 */ {  u32 a = r_esp; u32 b = 0x8114u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070b7ae: ret  */ FN_RET(0x0070b64c); r_esp += 4; return;
L_0070b7af:; BB(0x0070b7af);
    /* 0070b7af: mov edx, dword ptr [esp + 0x8118] */ r_edx = R32((u32)(r_esp+0x8118u));
    /* 0070b7b6: mov eax, dword ptr [esp + 0x811c] */ r_eax = R32((u32)(r_esp+0x811cu));
    /* 0070b7bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070b7bf: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0070b7c1: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0070b7c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b7c5: add esp, 0x8110 */ {  u32 a = r_esp; u32 b = 0x8110u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070b7cb: ret  */ FN_RET(0x0070b64c); r_esp += 4; return;
}

void f_0070b7cc(void) /* sub_70B7CC */
{
    FN_ENTER(0x0070b7cc);
    /* 0070b7cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0070b7ce:; BB(0x0070b7ce);
    /* 0070b7ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b7d0: je 0x70b7de */ if (fZ) goto L_0070b7de;
L_0070b7d2:; BB(0x0070b7d2);
    /* 0070b7d2: mov edx, eax */ r_edx = r_eax;
    /* 0070b7d4: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b7d6: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b7dc: jmp 0x70b7e2 */ goto L_0070b7e2;
L_0070b7de:; BB(0x0070b7de);
    /* 0070b7de: mov edx, eax */ r_edx = r_eax;
    /* 0070b7e0: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b7e2:; BB(0x0070b7e2);
    /* 0070b7e2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b7e5: je 0x70b7f1 */ if (fZ) goto L_0070b7f1;
L_0070b7e7:; BB(0x0070b7e7);
    /* 0070b7e7: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b7e9: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b7ef: jmp 0x70b7f3 */ goto L_0070b7f3;
L_0070b7f1:; BB(0x0070b7f1);
    /* 0070b7f1: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b7f3:; BB(0x0070b7f3);
    /* 0070b7f3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b7f6: je 0x70b802 */ if (fZ) goto L_0070b802;
L_0070b7f8:; BB(0x0070b7f8);
    /* 0070b7f8: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b7fa: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b800: jmp 0x70b804 */ goto L_0070b804;
L_0070b802:; BB(0x0070b802);
    /* 0070b802: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b804:; BB(0x0070b804);
    /* 0070b804: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b807: je 0x70b813 */ if (fZ) goto L_0070b813;
L_0070b809:; BB(0x0070b809);
    /* 0070b809: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b80b: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b811: jmp 0x70b815 */ goto L_0070b815;
L_0070b813:; BB(0x0070b813);
    /* 0070b813: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b815:; BB(0x0070b815);
    /* 0070b815: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b818: je 0x70b824 */ if (fZ) goto L_0070b824;
L_0070b81a:; BB(0x0070b81a);
    /* 0070b81a: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b81c: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b822: jmp 0x70b826 */ goto L_0070b826;
L_0070b824:; BB(0x0070b824);
    /* 0070b824: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b826:; BB(0x0070b826);
    /* 0070b826: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b829: je 0x70b835 */ if (fZ) goto L_0070b835;
L_0070b82b:; BB(0x0070b82b);
    /* 0070b82b: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b82d: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b833: jmp 0x70b837 */ goto L_0070b837;
L_0070b835:; BB(0x0070b835);
    /* 0070b835: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b837:; BB(0x0070b837);
    /* 0070b837: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b83a: je 0x70b846 */ if (fZ) goto L_0070b846;
L_0070b83c:; BB(0x0070b83c);
    /* 0070b83c: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b83e: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b844: jmp 0x70b848 */ goto L_0070b848;
L_0070b846:; BB(0x0070b846);
    /* 0070b846: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b848:; BB(0x0070b848);
    /* 0070b848: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b84b: je 0x70b857 */ if (fZ) goto L_0070b857;
L_0070b84d:; BB(0x0070b84d);
    /* 0070b84d: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070b84f: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b855: jmp 0x70b859 */ goto L_0070b859;
L_0070b857:; BB(0x0070b857);
    /* 0070b857: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0070b859:; BB(0x0070b859);
    /* 0070b859: mov dword ptr [eax*4 + 0xa97f80], edx */ W32((u32)(r_eax*4+0xa97f80u), r_edx);
    /* 0070b860: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070b863: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070b868: jl 0x70b7ce */ if ((fS!=fO)) goto L_0070b7ce;
L_0070b86e:; BB(0x0070b86e);
    /* 0070b86e: ret  */ FN_RET(0x0070b7cc); r_esp += 4; return;
}

void f_0070b870(void)
{
    FN_ENTER(0x0070b870);
    /* 0070b870: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b871: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b872: mov edi, ecx */ r_edi = r_ecx;
    /* 0070b874: lea eax, [edi + 0x8108] */ r_eax = (u32)(r_edi+0x8108u);
    /* 0070b87a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b87c: push dword ptr [0x9f0a44] */ { u32 v = R32((u32)(0x9f0a44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b883: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x70b888u); f_008598c0();
    /* 0070b888: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b88b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070b88d: jne 0x70b8db */ if (!fZ) goto L_0070b8db;
L_0070b88f:; BB(0x0070b88f);
    /* 0070b88f: push dword ptr [edi + 0x8148] */ { u32 v = R32((u32)(r_edi+0x8148u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b895: lea ecx, [edi + 0xf4] */ r_ecx = (u32)(r_edi+0xf4u);
    /* 0070b89b: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x70b8a0u); f_0084c390();
    /* 0070b8a0: push dword ptr [edi + 0x814c] */ { u32 v = R32((u32)(r_edi+0x814cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070b8a6: lea ecx, [edi + 0xc] */ r_ecx = (u32)(r_edi+0xcu);
    /* 0070b8a9: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x70b8aeu); f_0084c390();
    /* 0070b8ae: mov dword ptr [edi + 0x1ec], 1 */ W32((u32)(r_edi+0x1ecu), 0x1u);
    /* 0070b8b8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0070b8bf: mov byte ptr [esp + 2], 2 */ W8((u32)(r_esp+0x2u), 0x2u);
    /* 0070b8c4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0070b8c7: mov eax, 4 */ r_eax = 0x4u;
    /* 0070b8cc: mov ecx, edi */ r_ecx = r_edi;
    /* 0070b8ce: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0070b8d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b8d3: call 0x70b8e8 */ r_esp -= 4; W32(r_esp, 0x70b8d8u); f_0070b8e8();
    /* 0070b8d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070b8d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b8da: ret  */ FN_RET(0x0070b870); r_esp += 4; return;
L_0070b8db:; BB(0x0070b8db);
    /* 0070b8db: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070b8dd: mov ecx, edi */ r_ecx = r_edi;
    /* 0070b8df: call 0x70cbbc */ r_esp -= 4; W32(r_esp, 0x70b8e4u); f_0070cbbc();
    /* 0070b8e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070b8e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070b8e6: ret  */ FN_RET(0x0070b870); r_esp += 4; return;
}

void f_0070b8e8(void) /* sub_70B8E8 */
{
    FN_ENTER(0x0070b8e8);
    /* 0070b8e8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070b8ec: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0070b8ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070b8f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b8f1: call 0x70b320 */ r_esp -= 4; W32(r_esp, 0x70b8f6u); f_0070b320();
    /* 0070b8f6: ret 4 */ FN_RET(0x0070b8e8); r_esp += 8; return;
}

void f_0070b8fc(void) /* sub_70B8FC */
{
    FN_ENTER(0x0070b8fc);
    /* 0070b8fc: or dword ptr [ecx], 2 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b8ff: ret  */ FN_RET(0x0070b8fc); r_esp += 4; return;
}

void f_0070b900(void) /* sub_70B900 */
{
    FN_ENTER(0x0070b900);
    /* 0070b900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b901: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b902: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070b906: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070b908: lea edx, [ebx + 0x1a954] */ r_edx = (u32)(r_ebx+0x1a954u);
    /* 0070b90e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070b910: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070b912: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0070b915: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0070b918: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0070b91b: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0070b91e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0070b921: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0070b924: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0070b927: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0070b92a: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0070b92d: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0070b930: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0070b933: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0070b936: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0070b939: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0070b93c: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0070b93f: lea edi, [ebx + 0x8110] */ r_edi = (u32)(r_ebx+0x8110u);
    /* 0070b945: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0070b947: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070b949: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70b94eu); f_00858900();
    /* 0070b94e: lea ebp, [ebx + 0x10204] */ r_ebp = (u32)(r_ebx+0x10204u);
    /* 0070b954: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070b956: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0070b959: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0070b95c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0070b95f: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0070b962: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0070b965: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0070b968: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0070b96b: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 0070b96e: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 0070b971: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 0070b974: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0070b977: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 0070b97a: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0070b97d: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0070b980: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0070b983: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0070b986: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0070b989: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 0070b98c: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 0070b98f: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 0070b992: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 0070b995: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 0070b998: mov dword ptr [ebp + 0x58], edx */ W32((u32)(r_ebp+0x58u), r_edx);
    /* 0070b99b: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 0070b99e: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0070b9a1: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 0070b9a4: mov dword ptr [ebp + 0x68], edx */ W32((u32)(r_ebp+0x68u), r_edx);
    /* 0070b9a7: mov dword ptr [ebp + 0x6c], edx */ W32((u32)(r_ebp+0x6cu), r_edx);
    /* 0070b9aa: mov dword ptr [ebp + 0x70], edx */ W32((u32)(r_ebp+0x70u), r_edx);
    /* 0070b9ad: mov dword ptr [ebp + 0x74], edx */ W32((u32)(r_ebp+0x74u), r_edx);
    /* 0070b9b0: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 0070b9b3: mov dword ptr [ebp + 0x7c], edx */ W32((u32)(r_ebp+0x7cu), r_edx);
    /* 0070b9b6: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0070b9b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070b9b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070b9ba: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70b9bfu); f_00858900();
    /* 0070b9bf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070b9c2: mov edi, ebp */ r_edi = r_ebp;
    /* 0070b9c4: mov edx, 0x96f13c */ r_edx = 0x96f13cu;
    /* 0070b9c9: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0070b9ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070b9d0: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0070b9d2: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0070b9d5:; BB(0x0070b9d5);
    /* 0070b9d5: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0070b9d7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070b9da: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0070b9dc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070b9df: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070b9e1: jne 0x70b9d5 */ if (!fZ) goto L_0070b9d5;
L_0070b9e3:; BB(0x0070b9e3);
    /* 0070b9e3: movzx edx, byte ptr [ebx + 0x8107] */ r_edx = (u32)R8((u32)(r_ebx+0x8107u));
    /* 0070b9ea: mov eax, dword ptr [ebx + 0x1a944] */ r_eax = R32((u32)(r_ebx+0x1a944u));
    /* 0070b9f0: add dword ptr [ebx + 0x1a950], 1 */ { u32 ad = (u32)(r_ebx+0x1a950u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070b9f7: mov byte ptr [ebx + 0x10289], dl */ W8((u32)(r_ebx+0x10289u), (u8)r_edx);
    /* 0070b9fd: mov edx, dword ptr [ebx + 0x810c] */ r_edx = R32((u32)(r_ebx+0x810cu));
    /* 0070ba03: mov dword ptr [ebx + 0x1a994], edx */ W32((u32)(r_ebx+0x1a994u), r_edx);
    /* 0070ba09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070ba0b: mov dword ptr [ebx + 0x1a998], edx */ W32((u32)(r_ebx+0x1a998u), r_edx);
    /* 0070ba11: mov dword ptr [ebx + 0x1a99c], edx */ W32((u32)(r_ebx+0x1a99cu), r_edx);
    /* 0070ba17: mov edx, dword ptr [ebx + 0x1a940] */ r_edx = R32((u32)(r_ebx+0x1a940u));
    /* 0070ba1d: call 0x70bb1c */ r_esp -= 4; W32(r_esp, 0x70ba22u); f_0070bb1c();
    /* 0070ba22: mov dword ptr [ebx + 0x1a948], eax */ W32((u32)(r_ebx+0x1a948u), r_eax);
    /* 0070ba28: mov eax, ebp */ r_eax = r_ebp;
    /* 0070ba2a: call 0x70bdb4 */ r_esp -= 4; W32(r_esp, 0x70ba2fu); f_0070bdb4();
    /* 0070ba2f: push 0x92b684 */ { u32 v = 0x92b684u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba35: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x70ba3au); f_0085957c();
    /* 0070ba3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ba3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ba3f: je 0x70ba5d */ if (fZ) goto L_0070ba5d;
L_0070ba41:; BB(0x0070ba41);
    /* 0070ba41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba42: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x70ba47u); f_00859710();
    /* 0070ba47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070ba48: mov eax, dword ptr [ebx + 0x1a8a4] */ r_eax = R32((u32)(r_ebx+0x1a8a4u));
    /* 0070ba4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ba50: je 0x70ba56 */ if (fZ) goto L_0070ba56;
L_0070ba52:; BB(0x0070ba52);
    /* 0070ba52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70ba55u); call_ind(t); }
    /* 0070ba55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070ba56:; BB(0x0070ba56);
    /* 0070ba56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070ba59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070ba5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070ba5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ba5c: ret  */ FN_RET(0x0070b900); r_esp += 4; return;
L_0070ba5d:; BB(0x0070ba5d);
    /* 0070ba5d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070ba61: call 0x70cbbc */ r_esp -= 4; W32(r_esp, 0x70ba66u); f_0070cbbc();
    /* 0070ba66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070ba69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070ba6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070ba6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ba6c: ret  */ FN_RET(0x0070b900); r_esp += 4; return;
}

void f_0070ba70(void) /* sub_70BA70 */
{
    FN_ENTER(0x0070ba70);
    /* 0070ba70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ba73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070ba76: mov esi, ecx */ r_esi = r_ecx;
    /* 0070ba78: mov ebp, dword ptr [esi + 0x8110] */ r_ebp = R32((u32)(r_esi+0x8110u));
    /* 0070ba7e: mov eax, dword ptr [esi + 0x1a944] */ r_eax = R32((u32)(r_esi+0x1a944u));
    /* 0070ba84: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070ba86: mov edx, dword ptr [esi + 0x1a940] */ r_edx = R32((u32)(r_esi+0x1a940u));
    /* 0070ba8c: mov dword ptr [esi + 0x1a944], eax */ W32((u32)(r_esi+0x1a944u), r_eax);
    /* 0070ba92: call 0x70bb1c */ r_esp -= 4; W32(r_esp, 0x70ba97u); f_0070bb1c();
    /* 0070ba97: mov edx, dword ptr [esi + 0x1a994] */ r_edx = R32((u32)(r_esi+0x1a994u));
    /* 0070ba9d: mov dword ptr [esi + 0x1a948], eax */ W32((u32)(r_esi+0x1a948u), r_eax);
    /* 0070baa3: mov eax, dword ptr [esi + 0x1a998] */ r_eax = R32((u32)(r_esi+0x1a998u));
    /* 0070baa9: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070baab: mov dword ptr [esi + 0x1a998], eax */ W32((u32)(r_esi+0x1a998u), r_eax);
    /* 0070bab1: call 0x70bb1c */ r_esp -= 4; W32(r_esp, 0x70bab6u); f_0070bb1c();
    /* 0070bab6: lea ebx, [esi + 0x10204] */ r_ebx = (u32)(r_esi+0x10204u);
    /* 0070babc: mov dword ptr [esi + 0x1a99c], eax */ W32((u32)(r_esi+0x1a99cu), r_eax);
    /* 0070bac2: mov eax, ebx */ r_eax = r_ebx;
    /* 0070bac4: call 0x70bdb4 */ r_esp -= 4; W32(r_esp, 0x70bac9u); f_0070bdb4();
    /* 0070bac9: push 0x96f144 */ { u32 v = 0x96f144u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bace: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bacf: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x70bad4u); f_0085957c();
    /* 0070bad4: mov ebx, eax */ r_ebx = r_eax;
    /* 0070bad6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bad9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070badb: je 0x70bb0b */ if (fZ) goto L_0070bb0b;
L_0070badd:; BB(0x0070badd);
    /* 0070badd: lea edx, [esi + 0x8114] */ r_edx = (u32)(r_esi+0x8114u);
    /* 0070bae3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bae4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bae6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bae7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bae8: call 0x859868 */ r_esp -= 4; W32(r_esp, 0x70baedu); f_00859868();
    /* 0070baed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070baee: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x70baf3u); f_00859710();
    /* 0070baf3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070baf6: mov eax, dword ptr [esi + 0x1a8a8] */ r_eax = R32((u32)(r_esi+0x1a8a8u));
    /* 0070bafc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bafe: je 0x70bb04 */ if (fZ) goto L_0070bb04;
L_0070bb00:; BB(0x0070bb00);
    /* 0070bb00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70bb03u); call_ind(t); }
    /* 0070bb03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070bb04:; BB(0x0070bb04);
    /* 0070bb04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070bb07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070bb08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070bb09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070bb0a: ret  */ FN_RET(0x0070ba70); r_esp += 4; return;
L_0070bb0b:; BB(0x0070bb0b);
    /* 0070bb0b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0070bb0f: call 0x70cbbc */ r_esp -= 4; W32(r_esp, 0x70bb14u); f_0070cbbc();
    /* 0070bb14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070bb17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070bb18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070bb19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070bb1a: ret  */ FN_RET(0x0070ba70); r_esp += 4; return;
}

void f_0070bb1c(void) /* sub_70BB1C */
{
    FN_ENTER(0x0070bb1c);
    /* 0070bb1c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070bb1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bb21: jne 0x70bb28 */ if (!fZ) goto L_0070bb28;
L_0070bb23:; BB(0x0070bb23);
    /* 0070bb23: mov edx, 1 */ r_edx = 0x1u;
L_0070bb28:; BB(0x0070bb28);
    /* 0070bb28: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0070bb2b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0070bb2e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0070bb31: fadd dword ptr [eax*4 + 0x96f0f0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x96f0f0u));
    /* 0070bb38: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0070bb3c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0070bb40: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070bb43: fadd dword ptr [edx*4 + 0x96f0f0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x96f0f0u));
    /* 0070bb4a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070bb4c: fmul qword ptr [0x96f0f8] */ ST(0) = ST(0) * R_F64((u32)(0x96f0f8u));
    /* 0070bb52: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0070bb56: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0070bb5b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070bb60: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0070bb64: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0070bb68: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0070bb6c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0070bb70: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0070bb74: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070bb77: ret  */ FN_RET(0x0070bb1c); r_esp += 4; return;
}

void f_0070bb78(void) /* sub_70BB78 */
{
    FN_ENTER(0x0070bb78);
    /* 0070bb78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb7d: mov esi, ecx */ r_esi = r_ecx;
    /* 0070bb7f: lea ebp, [esi + 0x10204] */ r_ebp = (u32)(r_esi+0x10204u);
    /* 0070bb85: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb8b: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x70bb90u); f_0085957c();
    /* 0070bb90: mov ebx, eax */ r_ebx = r_eax;
    /* 0070bb92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bb95: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bb97: je 0x70bc4b */ if (fZ) goto L_0070bc4b;
L_0070bb9d:; BB(0x0070bb9d);
    /* 0070bb9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bb9e: call 0x8caaa0 */ r_esp -= 4; W32(r_esp, 0x70bba3u); f_008caaa0();
    /* 0070bba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070bba4: call 0x8caaa8 */ r_esp -= 4; W32(r_esp, 0x70bba9u); f_008caaa8();
    /* 0070bba9: mov edi, eax */ r_edi = r_eax;
    /* 0070bbab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bbac: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x70bbb1u); f_00859710();
    /* 0070bbb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bbb4: cmp edi, dword ptr [esi + 0x1a994] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x1a994u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bbba: jne 0x70bc4b */ if (!fZ) goto L_0070bc4b;
L_0070bbc0:; BB(0x0070bbc0);
    /* 0070bbc0: movzx edx, byte ptr [esi + 0x10289] */ r_edx = (u32)R8((u32)(r_esi+0x10289u));
    /* 0070bbc7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bbca: jne 0x70bd33 */ if (!fZ) goto L_0070bd33;
L_0070bbd0:; BB(0x0070bbd0);
    /* 0070bbd0: mov edx, dword ptr [0xacbef0] */ r_edx = R32((u32)(0xacbef0u));
    /* 0070bbd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bbd8: jne 0x70bd0b */ if (!fZ) goto L_0070bd0b;
L_0070bbde:; BB(0x0070bbde);
    /* 0070bbde: lea ebx, [esi + 0x1a954] */ r_ebx = (u32)(r_esi+0x1a954u);
L_0070bbe4:; BB(0x0070bbe4);
    /* 0070bbe4: mov eax, ebp */ r_eax = r_ebp;
    /* 0070bbe6: call 0x70bdb4 */ r_esp -= 4; W32(r_esp, 0x70bbebu); f_0070bdb4();
    /* 0070bbeb: mov eax, ebx */ r_eax = r_ebx;
    /* 0070bbed: call 0x70bdb4 */ r_esp -= 4; W32(r_esp, 0x70bbf2u); f_0070bdb4();
    /* 0070bbf2: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bbf7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x70bbfcu); f_008581c5();
    /* 0070bbfc: mov edi, eax */ r_edi = r_eax;
    /* 0070bbfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bc01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc03: mov ecx, edi */ r_ecx = r_edi;
    /* 0070bc05: call 0x7a5c80 */ r_esp -= 4; W32(r_esp, 0x70bc0au); f_007a5c80();
    /* 0070bc0a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc0b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x70bc10u); f_00857e98();
    /* 0070bc10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bc11: mov edx, dword ptr [0xacbef0] */ r_edx = R32((u32)(0xacbef0u));
    /* 0070bc17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bc19: je 0x70bc34 */ if (fZ) goto L_0070bc34;
L_0070bc1b:; BB(0x0070bc1b);
    /* 0070bc1b: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc21: call 0x859a50 */ r_esp -= 4; W32(r_esp, 0x70bc26u); f_00859a50();
    /* 0070bc26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bc29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bc2b: je 0x70bc34 */ if (fZ) goto L_0070bc34;
L_0070bc2d:; BB(0x0070bc2d);
    /* 0070bc2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc2e: call 0x83c4e0 */ r_esp -= 4; W32(r_esp, 0x70bc33u); f_0083c4e0();
    /* 0070bc33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070bc34:; BB(0x0070bc34);
    /* 0070bc34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc35: call 0x85a1a6 */ r_esp -= 4; W32(r_esp, 0x70bc3au); f_0085a1a6();
    /* 0070bc3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070bc3b:; BB(0x0070bc3b);
    /* 0070bc3b: mov edx, dword ptr [esi + 0x1a8ac] */ r_edx = R32((u32)(r_esi+0x1a8acu));
    /* 0070bc41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bc43: je 0x70bc6b */ if (fZ) goto L_0070bc6b;
L_0070bc45:; BB(0x0070bc45);
    /* 0070bc45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc46: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x70bc48u); call_ind(t); }
    /* 0070bc48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bc49: jmp 0x70bc6b */ goto L_0070bc6b;
L_0070bc4b:; BB(0x0070bc4b);
    /* 0070bc4b: mov edx, dword ptr [esi + 0x1a8bc] */ r_edx = R32((u32)(r_esi+0x1a8bcu));
    /* 0070bc51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bc53: je 0x70bc65 */ if (fZ) goto L_0070bc65;
L_0070bc55:; BB(0x0070bc55);
    /* 0070bc55: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bc58: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x70bc5au); call_ind(t); }
    /* 0070bc5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bc5d: lea ebx, [esi + 0x1a954] */ r_ebx = (u32)(r_esi+0x1a954u);
    /* 0070bc63: jmp 0x70bc6b */ goto L_0070bc6b;
L_0070bc65:; BB(0x0070bc65);
    /* 0070bc65: lea ebx, [esi + 0x1a954] */ r_ebx = (u32)(r_esi+0x1a954u);
L_0070bc6b:; BB(0x0070bc6b);
    /* 0070bc6b: mov byte ptr [esi + 0x10289], 0 */ W8((u32)(r_esi+0x10289u), 0x0u);
    /* 0070bc72: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070bc74: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 0070bc76: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0070bc79: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0070bc7c: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0070bc7f: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 0070bc82: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 0070bc85: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0070bc88: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0070bc8b: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 0070bc8e: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0070bc91: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 0070bc94: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 0070bc97: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0070bc9a: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 0070bc9d: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 0070bca0: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0070bca3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070bca5: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0070bca8: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0070bcab: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0070bcae: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0070bcb1: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0070bcb4: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0070bcb7: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0070bcba: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 0070bcbd: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 0070bcc0: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 0070bcc3: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0070bcc6: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 0070bcc9: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0070bccc: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0070bccf: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0070bcd2: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0070bcd5: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0070bcd8: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 0070bcdb: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 0070bcde: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 0070bce1: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 0070bce4: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 0070bce7: mov dword ptr [ebp + 0x58], edx */ W32((u32)(r_ebp+0x58u), r_edx);
    /* 0070bcea: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 0070bced: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0070bcf0: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 0070bcf3: mov dword ptr [ebp + 0x68], edx */ W32((u32)(r_ebp+0x68u), r_edx);
    /* 0070bcf6: mov dword ptr [ebp + 0x6c], edx */ W32((u32)(r_ebp+0x6cu), r_edx);
    /* 0070bcf9: mov dword ptr [ebp + 0x70], edx */ W32((u32)(r_ebp+0x70u), r_edx);
    /* 0070bcfc: mov dword ptr [ebp + 0x74], edx */ W32((u32)(r_ebp+0x74u), r_edx);
    /* 0070bcff: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 0070bd02: mov dword ptr [ebp + 0x7c], edx */ W32((u32)(r_ebp+0x7cu), r_edx);
    /* 0070bd05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bd06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070bd07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070bd08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070bd09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070bd0a: ret  */ FN_RET(0x0070bb78); r_esp += 4; return;
L_0070bd0b:; BB(0x0070bd0b);
    /* 0070bd0b: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd10: lea ebx, [esi + 0x1a954] */ r_ebx = (u32)(r_esi+0x1a954u);
    /* 0070bd16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd17: call 0x859a50 */ r_esp -= 4; W32(r_esp, 0x70bd1cu); f_00859a50();
    /* 0070bd1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bd1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bd21: je 0x70bbe4 */ if (fZ) goto L_0070bbe4;
L_0070bd27:; BB(0x0070bd27);
    /* 0070bd27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd28: call 0x83c4ec */ r_esp -= 4; W32(r_esp, 0x70bd2du); f_0083c4ec();
    /* 0070bd2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bd2e: jmp 0x70bbe4 */ goto L_0070bbe4;
L_0070bd33:; BB(0x0070bd33);
    /* 0070bd33: mov edx, dword ptr [0xacbef0] */ r_edx = R32((u32)(0xacbef0u));
    /* 0070bd39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bd3b: je 0x70bd5e */ if (fZ) goto L_0070bd5e;
L_0070bd3d:; BB(0x0070bd3d);
    /* 0070bd3d: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd42: lea ebx, [esi + 0x1a954] */ r_ebx = (u32)(r_esi+0x1a954u);
    /* 0070bd48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd49: call 0x859a50 */ r_esp -= 4; W32(r_esp, 0x70bd4eu); f_00859a50();
    /* 0070bd4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bd51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bd53: je 0x70bd64 */ if (fZ) goto L_0070bd64;
L_0070bd55:; BB(0x0070bd55);
    /* 0070bd55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd56: call 0x83c4ec */ r_esp -= 4; W32(r_esp, 0x70bd5bu); f_0083c4ec();
    /* 0070bd5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bd5c: jmp 0x70bd64 */ goto L_0070bd64;
L_0070bd5e:; BB(0x0070bd5e);
    /* 0070bd5e: lea ebx, [esi + 0x1a954] */ r_ebx = (u32)(r_esi+0x1a954u);
L_0070bd64:; BB(0x0070bd64);
    /* 0070bd64: mov eax, ebp */ r_eax = r_ebp;
    /* 0070bd66: call 0x70bdb4 */ r_esp -= 4; W32(r_esp, 0x70bd6bu); f_0070bdb4();
    /* 0070bd6b: mov eax, ebx */ r_eax = r_ebx;
    /* 0070bd6d: call 0x70bdb4 */ r_esp -= 4; W32(r_esp, 0x70bd72u); f_0070bdb4();
    /* 0070bd72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd73: call 0x85a1a6 */ r_esp -= 4; W32(r_esp, 0x70bd78u); f_0085a1a6();
    /* 0070bd78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd7a: call 0x85a1d0 */ r_esp -= 4; W32(r_esp, 0x70bd7fu); f_0085a1d0();
    /* 0070bd7f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bd82: mov edx, dword ptr [0xacbef0] */ r_edx = R32((u32)(0xacbef0u));
    /* 0070bd88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bd8a: je 0x70bc3b */ if (fZ) goto L_0070bc3b;
L_0070bd90:; BB(0x0070bd90);
    /* 0070bd90: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bd96: call 0x859a50 */ r_esp -= 4; W32(r_esp, 0x70bd9bu); f_00859a50();
    /* 0070bd9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bd9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bda0: je 0x70bc3b */ if (fZ) goto L_0070bc3b;
L_0070bda6:; BB(0x0070bda6);
    /* 0070bda6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bda7: call 0x83c4e0 */ r_esp -= 4; W32(r_esp, 0x70bdacu); f_0083c4e0();
    /* 0070bdac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bdad: jmp 0x70bc3b */ goto L_0070bc3b;
}

void f_0070bdb4(void) /* sub_70BDB4 */
{
    FN_ENTER(0x0070bdb4);
    /* 0070bdb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bdb5: mov ebx, eax */ r_ebx = r_eax;
    /* 0070bdb7: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bdbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bdbd: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x70bdc2u); f_0085957c();
    /* 0070bdc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bdc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070bdc7: je 0x70bde7 */ if (fZ) goto L_0070bde7;
L_0070bdc9:; BB(0x0070bdc9);
    /* 0070bdc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070bdca: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x70bdcfu); f_00859710();
    /* 0070bdcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bdd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bdd1: call dword ptr [0x8f8150] */ { u32 t = R32((u32)(0x8f8150u)); r_esp -= 4; W32(r_esp, 0x70bdd7u); call_ind(t); }
    /* 0070bdd7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070bdd9: je 0x70bde7 */ if (fZ) goto L_0070bde7;
L_0070bddb:; BB(0x0070bddb);
    /* 0070bddb: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bde0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bde1: call dword ptr [0x8f814c] */ { u32 t = R32((u32)(0x8f814cu)); r_esp -= 4; W32(r_esp, 0x70bde7u); call_ind(t); }
L_0070bde7:; BB(0x0070bde7);
    /* 0070bde7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070bde8: ret  */ FN_RET(0x0070bdb4); r_esp += 4; return;
}

void f_0070bdec(void)
{
    FN_ENTER(0x0070bdec);
    /* 0070bdec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bded: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070bdef: add ebp, 0x8108 */ {  u32 a = r_ebp; u32 b = 0x8108u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070bdf5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bdf6: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x70bdfbu); f_0085afdb();
    /* 0070bdfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070bdfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070bdfe: je 0x70be0f */ if (fZ) goto L_0070be0f;
L_0070be00:; BB(0x0070be00);
    /* 0070be00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070be01: call 0x85b66e */ r_esp -= 4; W32(r_esp, 0x70be06u); f_0085b66e();
    /* 0070be06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070be07: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x70be0cu); f_0085afdb();
    /* 0070be0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0070be0f:; BB(0x0070be0f);
    /* 0070be0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070be10: ret  */ FN_RET(0x0070bdec); r_esp += 4; return;
}

void f_0070be14(void) /* sub_70BE14 */
{
    FN_ENTER(0x0070be14);
    /* 0070be14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070be15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070be16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070be17: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070be1a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070be1c: mov edi, dword ptr [0x9f0a40] */ r_edi = R32((u32)(0x9f0a40u));
    /* 0070be22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070be24: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0070be26: mov ecx, edi */ r_ecx = r_edi;
    /* 0070be28: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070be2a: je 0x70be38 */ if (fZ) goto L_0070be38;
L_0070be2c:; BB(0x0070be2c);
    /* 0070be2c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070be2f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070be32: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0070be34: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070be36: jne 0x70be2c */ if (!fZ) goto L_0070be2c;
L_0070be38:; BB(0x0070be38);
    /* 0070be38: lea esi, [ebx + 0x810c] */ r_esi = (u32)(r_ebx+0x810cu);
    /* 0070be3e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070be41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070be42: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070be43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070be44: call 0x85a1fe */ r_esp -= 4; W32(r_esp, 0x70be49u); f_0085a1fe();
    /* 0070be49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070be4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070be4e: jne 0x70be68 */ if (!fZ) goto L_0070be68;
L_0070be50:; BB(0x0070be50);
    /* 0070be50: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0070be54: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070be57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070be58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070be59: push 0x96f150 */ { u32 v = 0x96f150u; r_esp -= 4; W32(r_esp, v); }
    /* 0070be5e: call 0x70b64c */ r_esp -= 4; W32(r_esp, 0x70be63u); f_0070b64c();
    /* 0070be63: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070be66: jmp 0x70be7a */ goto L_0070be7a;
L_0070be68:; BB(0x0070be68);
    /* 0070be68: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0070be6c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070be6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070be70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070be71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070be72: call 0x70b64c */ r_esp -= 4; W32(r_esp, 0x70be77u); f_0070b64c();
    /* 0070be77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070be7a:; BB(0x0070be7a);
    /* 0070be7a: mov edx, dword ptr [ebx + 0x8108] */ r_edx = R32((u32)(r_ebx+0x8108u));
    /* 0070be80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070be84: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070be87: mov dword ptr [ebx + edx*8 + 0x1028c], eax */ W32((u32)(r_ebx+r_edx*8+0x1028cu), r_eax);
    /* 0070be8e: mov edi, dword ptr [ebx + 0x8108] */ r_edi = R32((u32)(r_ebx+0x8108u));
    /* 0070be94: mov dword ptr [ebx + edi*8 + 0x10290], esi */ W32((u32)(r_ebx+r_edi*8+0x10290u), r_esi);
    /* 0070be9b: add dword ptr [ebx + 0x1828c], 1 */ { u32 ad = (u32)(r_ebx+0x1828cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070bea2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070bea5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070bea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070bea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070bea8: ret  */ FN_RET(0x0070be14); r_esp += 4; return;
}

void f_0070beac(void)
{
    FN_ENTER(0x0070beac);
    /* 0070beac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bead: mov edi, ecx */ r_edi = r_ecx;
    /* 0070beaf: lea eax, [edi + 0x10004] */ r_eax = (u32)(r_edi+0x10004u);
    /* 0070beb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070beb6: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x70bebbu); f_0085afdb();
    /* 0070bebb: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bec0: lea eax, [edi + 0x1028c] */ r_eax = (u32)(r_edi+0x1028cu);
    /* 0070bec6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070bec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070bec9: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x70beceu); f_0086b5cc();
    /* 0070bece: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070bed1: mov eax, dword ptr [edi + 0x1a8a0] */ r_eax = R32((u32)(r_edi+0x1a8a0u));
    /* 0070bed7: mov dword ptr [edi + 0x1828c], 0 */ W32((u32)(r_edi+0x1828cu), 0x0u);
    /* 0070bee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070bee3: je 0x70bee9 */ if (fZ) goto L_0070bee9;
L_0070bee5:; BB(0x0070bee5);
    /* 0070bee5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070bee6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70bee8u); call_ind(t); }
    /* 0070bee8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070bee9:; BB(0x0070bee9);
    /* 0070bee9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070beea: ret  */ FN_RET(0x0070beac); r_esp += 4; return;
}

void f_0070beec(void) /* sub_70BEEC */
{
    FN_ENTER(0x0070beec);
    /* 0070beec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070beed: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070bef0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070bef2: lea eax, [ebx + 0x10004] */ r_eax = (u32)(r_ebx+0x10004u);
    /* 0070bef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070bef9: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x70befeu); f_0085afdb();
    /* 0070befe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070beff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070bf01: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0070bf04: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0070bf08: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0070bf0c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0070bf10: mov ecx, dword ptr [ebx + 0x1828c] */ r_ecx = R32((u32)(r_ebx+0x1828cu));
    /* 0070bf16: mov byte ptr [esp + 2], 0xf */ W8((u32)(r_esp+0x2u), 0xfu);
    /* 0070bf1b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0070bf20: mov edx, 0x10 */ r_edx = 0x10u;
    /* 0070bf25: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0070bf29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070bf2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0070bf2d: jbe 0x70bf70 */ if ((fC||fZ)) goto L_0070bf70;
L_0070bf2f:; BB(0x0070bf2f);
    /* 0070bf2f: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0070bf33: mov esi, edx */ r_esi = r_edx;
    /* 0070bf35: jmp 0x70bf3b */ goto L_0070bf3b;
L_0070bf37:; BB(0x0070bf37);
    /* 0070bf37: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
L_0070bf3b:; BB(0x0070bf3b);
    /* 0070bf3b: mov edx, dword ptr [ebx + esi*8 + 0x1028c] */ r_edx = R32((u32)(r_ebx+r_esi*8+0x1028cu));
    /* 0070bf42: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0070bf46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070bf48: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0070bf4c: mov edx, dword ptr [ebx + esi*8 + 0x10290] */ r_edx = R32((u32)(r_ebx+r_esi*8+0x10290u));
    /* 0070bf53: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0070bf57: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0070bf5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070bf5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bf5c: call 0x70b320 */ r_esp -= 4; W32(r_esp, 0x70bf61u); f_0070b320();
    /* 0070bf61: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070bf64: cmp esi, dword ptr [ebx + 0x1828c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1828cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0070bf6a: jb 0x70bf37 */ if (fC) goto L_0070bf37;
L_0070bf6c:; BB(0x0070bf6c);
    /* 0070bf6c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0070bf70:; BB(0x0070bf70);
    /* 0070bf70: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0070bf78: mov byte ptr [esp + 0x12], 0x10 */ W8((u32)(r_esp+0x12u), 0x10u);
    /* 0070bf7d: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0070bf81: mov eax, 4 */ r_eax = 0x4u;
    /* 0070bf86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070bf88: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0070bf8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bf8e: call 0x70b8e8 */ r_esp -= 4; W32(r_esp, 0x70bf93u); f_0070b8e8();
    /* 0070bf93: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070bf96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070bf97: ret  */ FN_RET(0x0070beec); r_esp += 4; return;
}

void f_0070bf98(void)
{
    FN_ENTER(0x0070bf98);
    /* 0070bf98: mov eax, dword ptr [ecx + 0x1a8b8] */ r_eax = R32((u32)(r_ecx+0x1a8b8u));
    /* 0070bf9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070bfa0: je 0x70bfac */ if (fZ) goto L_0070bfac;
L_0070bfa2:; BB(0x0070bfa2);
    /* 0070bfa2: add ecx, 0x8108 */ {  u32 a = r_ecx; u32 b = 0x8108u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070bfa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bfa9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70bfabu); call_ind(t); }
    /* 0070bfab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070bfac:; BB(0x0070bfac);
    /* 0070bfac: ret  */ FN_RET(0x0070bf98); r_esp += 4; return;
}

void f_0070bfb0(void)
{
    FN_ENTER(0x0070bfb0);
    /* 0070bfb0: mov eax, dword ptr [ecx + 0x8108] */ r_eax = R32((u32)(r_ecx+0x8108u));
    /* 0070bfb6: mov edx, dword ptr [ecx + 0x810c] */ r_edx = R32((u32)(r_ecx+0x810cu));
    /* 0070bfbc: mov dword ptr [ecx + 0x1a940], eax */ W32((u32)(r_ecx+0x1a940u), r_eax);
    /* 0070bfc2: mov dword ptr [ecx + 0x1a94c], edx */ W32((u32)(r_ecx+0x1a94cu), r_edx);
    /* 0070bfc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070bfca: mov dword ptr [ecx + 0x1a944], eax */ W32((u32)(r_ecx+0x1a944u), r_eax);
    /* 0070bfd0: mov dword ptr [ecx + 0x1a950], eax */ W32((u32)(r_ecx+0x1a950u), r_eax);
    /* 0070bfd6: mov dword ptr [ecx + 0x1a948], eax */ W32((u32)(r_ecx+0x1a948u), r_eax);
    /* 0070bfdc: mov eax, dword ptr [ecx + 0x1a8b0] */ r_eax = R32((u32)(r_ecx+0x1a8b0u));
    /* 0070bfe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070bfe4: je 0x70bfea */ if (fZ) goto L_0070bfea;
L_0070bfe6:; BB(0x0070bfe6);
    /* 0070bfe6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070bfe7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70bfe9u); call_ind(t); }
    /* 0070bfe9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070bfea:; BB(0x0070bfea);
    /* 0070bfea: ret  */ FN_RET(0x0070bfb0); r_esp += 4; return;
}

void f_0070bfec(void)
{
    FN_ENTER(0x0070bfec);
    /* 0070bfec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bfed: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070bfef: mov eax, dword ptr [ebp + 0x1a8b4] */ r_eax = R32((u32)(r_ebp+0x1a8b4u));
    /* 0070bff5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070bff7: je 0x70bffd */ if (fZ) goto L_0070bffd;
L_0070bff9:; BB(0x0070bff9);
    /* 0070bff9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070bffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70bffcu); call_ind(t); }
    /* 0070bffc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070bffd:; BB(0x0070bffd);
    /* 0070bffd: or dword ptr [ebp], 2 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c001: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c002: ret  */ FN_RET(0x0070bfec); r_esp += 4; return;
}

