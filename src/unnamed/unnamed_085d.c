#include "protos.h"

void f_0085d760(void) /* _strlen */
{
    FN_ENTER(0x0085d760);
    /* 0085d760: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085d764: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d76a: je 0x85d790 */ if (fZ) goto L_0085d790;
L_0085d76c:; BB(0x0085d76c);
    /* 0085d76c: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0085d76e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085d771: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d773: je 0x85d7c3 */ if (fZ) goto L_0085d7c3;
L_0085d775:; BB(0x0085d775);
    /* 0085d775: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d77b: jne 0x85d76c */ if (!fZ) goto L_0085d76c;
L_0085d77d:; BB(0x0085d77d);
    /* 0085d77d: add eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085d782: lea esp, [esp] */ r_esp = (u32)(r_esp);
    /* 0085d789: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_0085d790:; BB(0x0085d790);
    /* 0085d790: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085d792: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 0085d797: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085d799: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085d79c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085d79e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085d7a1: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d7a6: je 0x85d790 */ if (fZ) goto L_0085d790;
L_0085d7a8:; BB(0x0085d7a8);
    /* 0085d7a8: mov eax, dword ptr [ecx - 4] */ r_eax = R32((u32)(r_ecx+0xfffffffcu));
    /* 0085d7ab: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d7ad: je 0x85d7e1 */ if (fZ) goto L_0085d7e1;
L_0085d7af:; BB(0x0085d7af);
    /* 0085d7af: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d7b1: je 0x85d7d7 */ if (fZ) goto L_0085d7d7;
L_0085d7b3:; BB(0x0085d7b3);
    /* 0085d7b3: test eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d7b8: je 0x85d7cd */ if (fZ) goto L_0085d7cd;
L_0085d7ba:; BB(0x0085d7ba);
    /* 0085d7ba: test eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d7bf: je 0x85d7c3 */ if (fZ) goto L_0085d7c3;
L_0085d7c1:; BB(0x0085d7c1);
    /* 0085d7c1: jmp 0x85d790 */ goto L_0085d790;
L_0085d7c3:; BB(0x0085d7c3);
    /* 0085d7c3: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 0085d7c6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085d7ca: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d7cc: ret  */ FN_RET(0x0085d760); r_esp += 4; return;
L_0085d7cd:; BB(0x0085d7cd);
    /* 0085d7cd: lea eax, [ecx - 2] */ r_eax = (u32)(r_ecx+0xfffffffeu);
    /* 0085d7d0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085d7d4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d7d6: ret  */ FN_RET(0x0085d760); r_esp += 4; return;
L_0085d7d7:; BB(0x0085d7d7);
    /* 0085d7d7: lea eax, [ecx - 3] */ r_eax = (u32)(r_ecx+0xfffffffdu);
    /* 0085d7da: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085d7de: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d7e0: ret  */ FN_RET(0x0085d760); r_esp += 4; return;
L_0085d7e1:; BB(0x0085d7e1);
    /* 0085d7e1: lea eax, [ecx - 4] */ r_eax = (u32)(r_ecx+0xfffffffcu);
    /* 0085d7e4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085d7e8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d7ea: ret  */ FN_RET(0x0085d760); r_esp += 4; return;
}

void f_0085d7eb(void) /* ___freetlocinfo */
{
    FN_ENTER(0x0085d7eb);
    /* 0085d7eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d7ec: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0085d7f0: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0085d7f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d7f4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085d7f6: cmp eax, dword ptr [0xae7e6c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7e6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d7fc: je 0x85d861 */ if (fZ) goto L_0085d861;
L_0085d7fe:; BB(0x0085d7fe);
    /* 0085d7fe: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d800: je 0x85d861 */ if (fZ) goto L_0085d861;
L_0085d802:; BB(0x0085d802);
    /* 0085d802: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0085d805: cmp dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d807: jne 0x85d861 */ if (!fZ) goto L_0085d861;
L_0085d809:; BB(0x0085d809);
    /* 0085d809: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0085d80c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d80e: je 0x85d82c */ if (fZ) goto L_0085d82c;
L_0085d810:; BB(0x0085d810);
    /* 0085d810: cmp dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d812: jne 0x85d82c */ if (!fZ) goto L_0085d82c;
L_0085d814:; BB(0x0085d814);
    /* 0085d814: cmp eax, dword ptr [0xaf0828] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0828u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d81a: je 0x85d82c */ if (fZ) goto L_0085d82c;
L_0085d81c:; BB(0x0085d81c);
    /* 0085d81c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d81d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d822u); f_00858882();
    /* 0085d822: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d825: call 0x8677c7 */ r_esp -= 4; W32(r_esp, 0x85d82au); f_008677c7();
    /* 0085d82a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d82b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d82c:; BB(0x0085d82c);
    /* 0085d82c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0085d82f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d831: je 0x85d84f */ if (fZ) goto L_0085d84f;
L_0085d833:; BB(0x0085d833);
    /* 0085d833: cmp dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d835: jne 0x85d84f */ if (!fZ) goto L_0085d84f;
L_0085d837:; BB(0x0085d837);
    /* 0085d837: cmp eax, dword ptr [0xaf0830] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0830u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d83d: je 0x85d84f */ if (fZ) goto L_0085d84f;
L_0085d83f:; BB(0x0085d83f);
    /* 0085d83f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d840: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d845u); f_00858882();
    /* 0085d845: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d848: call 0x86759b */ r_esp -= 4; W32(r_esp, 0x85d84du); f_0086759b();
    /* 0085d84d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d84e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d84f:; BB(0x0085d84f);
    /* 0085d84f: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d852: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d857u); f_00858882();
    /* 0085d857: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d85a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d85fu); f_00858882();
    /* 0085d85f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d860: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d861:; BB(0x0085d861);
    /* 0085d861: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0085d864: cmp eax, dword ptr [0xaf0824] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0824u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d86a: je 0x85d88a */ if (fZ) goto L_0085d88a;
L_0085d86c:; BB(0x0085d86c);
    /* 0085d86c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d86e: je 0x85d88a */ if (fZ) goto L_0085d88a;
L_0085d870:; BB(0x0085d870);
    /* 0085d870: cmp dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d872: jne 0x85d88a */ if (!fZ) goto L_0085d88a;
L_0085d874:; BB(0x0085d874);
    /* 0085d874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d875: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d87au); f_00858882();
    /* 0085d87a: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 0085d87d: sub eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085d882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d883: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d888u); f_00858882();
    /* 0085d888: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d889: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d88a:; BB(0x0085d88a);
    /* 0085d88a: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 0085d88d: cmp eax, dword ptr [0xae7e68] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7e68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d893: je 0x85d8b1 */ if (fZ) goto L_0085d8b1;
L_0085d895:; BB(0x0085d895);
    /* 0085d895: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d897: je 0x85d8b1 */ if (fZ) goto L_0085d8b1;
L_0085d899:; BB(0x0085d899);
    /* 0085d899: cmp dword ptr [eax + 0xb4], edi */ {  u32 a = R32((u32)(r_eax+0xb4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d89f: jne 0x85d8b1 */ if (!fZ) goto L_0085d8b1;
L_0085d8a1:; BB(0x0085d8a1);
    /* 0085d8a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d8a2: call 0x8673ac */ r_esp -= 4; W32(r_esp, 0x85d8a7u); f_008673ac();
    /* 0085d8a7: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d8aa: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d8afu); f_00858882();
    /* 0085d8af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d8b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d8b1:; BB(0x0085d8b1);
    /* 0085d8b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d8b2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d8b7u); f_00858882();
    /* 0085d8b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d8b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085d8b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085d8ba: ret  */ FN_RET(0x0085d7eb); r_esp += 4; return;
}

void f_0085d97c(void) /* __strcats */
{
    FN_ENTER(0x0085d97c);
    /* 0085d97c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d97d: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0085d981: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085d983: jle 0x85d99e */ if ((fZ||fS!=fO)) goto L_0085d99e;
L_0085d985:; BB(0x0085d985);
    /* 0085d985: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d986: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
L_0085d98a:; BB(0x0085d98a);
    /* 0085d98a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085d98d: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d98f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d993: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x85d998u); f_0085e300();
    /* 0085d998: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d999: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d99a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d99b: jne 0x85d98a */ if (!fZ) goto L_0085d98a;
L_0085d99d:; BB(0x0085d99d);
    /* 0085d99d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085d99e:; BB(0x0085d99e);
    /* 0085d99e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085d99f: ret  */ FN_RET(0x0085d97c); r_esp += 4; return;
}

void f_0085daca(void) /* ___updatetlocinfo */
{
    FN_ENTER(0x0085daca);
    /* 0085daca: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085dacc: push 0x998388 */ { u32 v = 0x998388u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dad1: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85dad6u); f_0085e5ac();
    /* 0085dad6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085dad8: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85daddu); f_0085e57a();
    /* 0085dadd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dade: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085dae2: call 0x85d8bb */ r_esp -= 4; W32(r_esp, 0x85dae7u); f_0085d8bb();
    /* 0085dae7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085daea: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085daee: call 0x85dafc */ r_esp -= 4; W32(r_esp, 0x85daf3u); f_0085dafc();
    /* 0085daf3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085daf6: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85dafbu); f_0085e5e7();
    /* 0085dafb: ret  */ FN_RET(0x0085daca); r_esp += 4; return;
}

void f_0085dafc(void)
{
    FN_ENTER(0x0085dafc);
    /* 0085dafc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085dafe: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85db03u); f_0085e4c5();
    /* 0085db03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085db04: ret  */ FN_RET(0x0085dafc); r_esp += 4; return;
}

void f_0085dbc4(void) /* __expandlocale */
{
    FN_ENTER(0x0085dbc4);
    /* 0085dbc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085dbc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0085dbc7: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085dbcd: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085dbd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dbd3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085dbd6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085dbd8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dbda: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085dbdd: jne 0x85dbe6 */ if (!fZ) goto L_0085dbe6;
L_0085dbdf:; BB(0x0085dbdf);
    /* 0085dbdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085dbe1: jmp 0x85dd15 */ goto L_0085dd15;
L_0085dbe6:; BB(0x0085dbe6);
    /* 0085dbe6: cmp byte ptr [esi], 0x43 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x43u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085dbe9: jne 0x85dc1f */ if (!fZ) goto L_0085dc1f;
L_0085dbeb:; BB(0x0085dbeb);
    /* 0085dbeb: cmp byte ptr [esi + 1], 0 */ {  u32 a = R8((u32)(r_esi+0x1u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085dbef: jne 0x85dc1f */ if (!fZ) goto L_0085dc1f;
L_0085dbf1:; BB(0x0085dbf1);
    /* 0085dbf1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085dbf4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0085dbf7: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dbf9: mov byte ptr [eax], 0x43 */ W8((u32)(r_eax), 0x43u);
    /* 0085dbfc: mov byte ptr [eax + 1], 0 */ W8((u32)(r_eax+0x1u), 0x0u);
    /* 0085dc00: je 0x85dc0d */ if (fZ) goto L_0085dc0d;
L_0085dc02:; BB(0x0085dc02);
    /* 0085dc02: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0085dc05: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 0085dc09: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
L_0085dc0d:; BB(0x0085dc0d);
    /* 0085dc0d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0085dc10: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dc12: je 0x85dd15 */ if (fZ) goto L_0085dd15;
L_0085dc18:; BB(0x0085dc18);
    /* 0085dc18: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0085dc1a: jmp 0x85dd15 */ goto L_0085dd15;
L_0085dc1f:; BB(0x0085dc1f);
    /* 0085dc1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc22: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x85dc27u); f_0085d760();
    /* 0085dc27: mov edi, 0x82 */ r_edi = 0x82u;
    /* 0085dc2c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085dc2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dc2f: mov ebx, 0xa23d18 */ r_ebx = 0xa23d18u;
    /* 0085dc34: jae 0x85dc58 */ if (!fC) goto L_0085dc58;
L_0085dc36:; BB(0x0085dc36);
    /* 0085dc36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc37: push 0xa23da0 */ { u32 v = 0xa23da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc3c: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x85dc41u); f_00864570();
    /* 0085dc41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dc43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dc44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dc45: je 0x85dcd1 */ if (fZ) goto L_0085dcd1;
L_0085dc4b:; BB(0x0085dc4b);
    /* 0085dc4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc4d: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x85dc52u); f_00864570();
    /* 0085dc52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dc54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dc55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dc56: je 0x85dcd1 */ if (fZ) goto L_0085dcd1;
L_0085dc58:; BB(0x0085dc58);
    /* 0085dc58: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 0085dc5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc60: call 0x85d9a0 */ r_esp -= 4; W32(r_esp, 0x85dc65u); f_0085d9a0();
    /* 0085dc65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dc67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dc68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dc69: jne 0x85dc84 */ if (!fZ) goto L_0085dc84;
L_0085dc6b:; BB(0x0085dc6b);
    /* 0085dc6b: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 0085dc71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc72: push 0xae7a9c */ { u32 v = 0xae7a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc78: call 0x868455 */ r_esp -= 4; W32(r_esp, 0x85dc7du); f_00868455();
    /* 0085dc7d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085dc80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dc82: jne 0x85dc8b */ if (!fZ) goto L_0085dc8b;
L_0085dc84:; BB(0x0085dc84);
    /* 0085dc84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085dc86: jmp 0x85dd13 */ goto L_0085dd13;
L_0085dc8b:; BB(0x0085dc8b);
    /* 0085dc8b: movzx eax, word ptr [0xae7aa0] */ r_eax = (u32)R16((u32)(0xae7aa0u));
    /* 0085dc92: mov dword ptr [0xae7aa4], eax */ W32((u32)(0xae7aa4u), r_eax);
    /* 0085dc97: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 0085dc9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dc9e: push 0xa23da0 */ { u32 v = 0xa23da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dca3: call 0x85da7c */ r_esp -= 4; W32(r_esp, 0x85dca8u); f_0085da7c();
    /* 0085dca8: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085dcab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dcac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dcad: je 0x85dcba */ if (fZ) goto L_0085dcba;
L_0085dcaf:; BB(0x0085dcaf);
    /* 0085dcaf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcb0: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x85dcb5u); f_0085d760();
    /* 0085dcb5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085dcb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dcb8: jb 0x85dcbf */ if (fC) goto L_0085dcbf;
L_0085dcba:; BB(0x0085dcba);
    /* 0085dcba: mov esi, 0x99839a */ r_esi = 0x99839au;
L_0085dcbf:; BB(0x0085dcbf);
    /* 0085dcbf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcc1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcc2: mov byte ptr [0xa23d9a], 0 */ W8((u32)(0xa23d9au), 0x0u);
    /* 0085dcc9: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x85dcceu); f_00858900();
    /* 0085dcce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085dcd1:; BB(0x0085dcd1);
    /* 0085dcd1: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dcd5: je 0x85dce9 */ if (fZ) goto L_0085dce9;
L_0085dcd7:; BB(0x0085dcd7);
    /* 0085dcd7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcd9: push 0xae7a9c */ { u32 v = 0xae7a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcde: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dce1: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x85dce6u); f_00861d00();
    /* 0085dce6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085dce9:; BB(0x0085dce9);
    /* 0085dce9: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dced: je 0x85dd01 */ if (fZ) goto L_0085dd01;
L_0085dcef:; BB(0x0085dcef);
    /* 0085dcef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcf1: push 0xae7aa4 */ { u32 v = 0xae7aa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dcf6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dcf9: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x85dcfeu); f_00861d00();
    /* 0085dcfe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085dd01:; BB(0x0085dd01);
    /* 0085dd01: mov esi, 0xa23da0 */ r_esi = 0xa23da0u;
    /* 0085dd06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd07: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dd0a: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x85dd0fu); f_0085e2f0();
    /* 0085dd0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dd10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dd11: mov eax, esi */ r_eax = r_esi;
L_0085dd13:; BB(0x0085dd13);
    /* 0085dd13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085dd14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0085dd15:; BB(0x0085dd15);
    /* 0085dd15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085dd18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085dd19: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85dd1eu); f_0085e419();
    /* 0085dd1e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085dd1f: ret  */ FN_RET(0x0085dbc4); r_esp += 4; return;
}

