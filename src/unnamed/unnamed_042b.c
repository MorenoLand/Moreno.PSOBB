#include "protos.h"

void f_0042b40a(void)
{
    FN_ENTER(0x0042b40a);
    goto L_0042b40a;
L_0042b3a9:; BB(0x0042b3a9);
    /* 0042b3a9: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0042b3b0: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3b5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b3bau); f_005caba4();
    /* 0042b3ba: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b3bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b3c0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0042b3c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b3c5: je 0x42b92e */ if (fZ) goto L_0042b92e;
L_0042b3cb:; BB(0x0042b3cb);
    /* 0042b3cb: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0042b3d2: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0042b3d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b3dc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b3df: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b3e2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b3e5: mov esi, eax */ r_esi = r_eax;
    /* 0042b3e7: mov ebx, edx */ r_ebx = r_edx;
    /* 0042b3e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b3ee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b3f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042b3f4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0042b3f7: add edi, 0x3e0 */ {  u32 a = r_edi; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042b3fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3fe: call 0x4369bc */ r_esp -= 4; W32(r_esp, 0x42b403u); f_004369bc();
    /* 0042b403: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0042b40a:; BB(0x0042b40a);
    /* 0042b40a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b40d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b410: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b413: mov dword ptr [edx + ecx*4 + 0x638], eax */ W32((u32)(r_edx+r_ecx*4+0x638u), r_eax);
    /* 0042b41a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b421: mov eax, ecx */ r_eax = r_ecx;
    /* 0042b423: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b426: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b429: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b42c: jl 0x42b3a9 */ if ((fS!=fO)) goto L_0042b3a9;
L_0042b432:; BB(0x0042b432);
    /* 0042b432: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b434: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0042b437:; BB(0x0042b437);
    /* 0042b437: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0042b43e: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b443: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b448u); f_005caba4();
    /* 0042b448: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b44b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b44e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0042b451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b453: je 0x42b924 */ if (fZ) goto L_0042b924;
L_0042b459:; BB(0x0042b459);
    /* 0042b459: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0042b460: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0042b467: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b46a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b46d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b470: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b473: mov esi, eax */ r_esi = r_eax;
    /* 0042b475: mov ebx, edx */ r_ebx = r_edx;
    /* 0042b477: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b478: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b479: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b47c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b47f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042b482: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0042b485: add edi, 0x3e0 */ {  u32 a = r_edi; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042b48b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b48c: call 0x4370b4 */ r_esp -= 4; W32(r_esp, 0x42b491u); f_004370b4();
    /* 0042b491: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0042b498:; BB(0x0042b498);
    /* 0042b498: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b49b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b49e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b4a1: mov dword ptr [edx + ecx*4 + 0x64c], eax */ W32((u32)(r_edx+r_ecx*4+0x64cu), r_eax);
    /* 0042b4a8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b4af: mov eax, ecx */ r_eax = r_ecx;
    /* 0042b4b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b4b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b4b7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b4ba: jl 0x42b437 */ if ((fS!=fO)) goto L_0042b437;
L_0042b4c0:; BB(0x0042b4c0);
    /* 0042b4c0: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0042b4c7: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b4cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b4d1u); f_005caba4();
    /* 0042b4d1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b4d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b4d7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042b4da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b4dc: je 0x42b91a */ if (fZ) goto L_0042b91a;
L_0042b4e2:; BB(0x0042b4e2);
    /* 0042b4e2: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0042b4e9: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0042b4f0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b4f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b4f6: lea ebx, [eax + 0x3e0] */ r_ebx = (u32)(r_eax+0x3e0u);
    /* 0042b4fc: lea edx, [eax + 0x40c] */ r_edx = (u32)(r_eax+0x40cu);
    /* 0042b502: add eax, 0x478 */ {  u32 a = r_eax; u32 b = 0x478u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b509: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b50a: call 0x434ba4 */ r_esp -= 4; W32(r_esp, 0x42b50fu); f_00434ba4();
    /* 0042b50f: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0042b516:; BB(0x0042b516);
    /* 0042b516: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b519: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b51c: mov dword ptr [ecx + 0x658], eax */ W32((u32)(r_ecx+0x658u), r_eax);
    /* 0042b522: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b529: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b52b: mov dword ptr [ecx + 0x65c], eax */ W32((u32)(r_ecx+0x65cu), r_eax);
    /* 0042b531: mov dword ptr [ecx + 0x660], eax */ W32((u32)(r_ecx+0x660u), r_eax);
    /* 0042b537: mov dword ptr [ecx + 0x664], eax */ W32((u32)(r_ecx+0x664u), r_eax);
    /* 0042b53d: mov dword ptr [ecx + 0x668], eax */ W32((u32)(r_ecx+0x668u), r_eax);
    /* 0042b543: add ecx, 0x66c */ {  u32 a = r_ecx; u32 b = 0x66cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b549: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x42b54eu); f_0042ee78();
    /* 0042b54e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b551: add ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b557: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x42b55cu); f_0042ee78();
    /* 0042b55c: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b55f: mov edx, dword ptr [0xa43cc8] */ r_edx = R32((u32)(0xa43cc8u));
    /* 0042b565: mov dword ptr [esi + 0x6ac], 0 */ W32((u32)(r_esi+0x6acu), 0x0u);
    /* 0042b56f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0042b572: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b574: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 0042b57a: mov dword ptr [esi + 0x6b0], eax */ W32((u32)(r_esi+0x6b0u), r_eax);
    /* 0042b580: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0042b583: mov dword ptr [esi + 0x6b8], ecx */ W32((u32)(r_esi+0x6b8u), r_ecx);
    /* 0042b589: mov ebx, 0x4e20 */ r_ebx = 0x4e20u;
    /* 0042b58e: mov word ptr [esi + 0x334], bx */ W16((u32)(r_esi+0x334u), (u16)r_ebx);
    /* 0042b595: mov word ptr [esi + 0x2bc], bx */ W16((u32)(r_esi+0x2bcu), (u16)r_ebx);
    /* 0042b59c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0042b59e: mov dword ptr [esi + 0x6bc], edi */ W32((u32)(r_esi+0x6bcu), r_edi);
    /* 0042b5a4: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 0042b5a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b5acu); f_005caba4();
    /* 0042b5ac: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b5af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b5b2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0042b5b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b5b7: je 0x42b910 */ if (fZ) goto L_0042b910;
L_0042b5bd:; BB(0x0042b5bd);
    /* 0042b5bd: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0042b5c4: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0042b5cb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b5ce: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b5d1: lea edx, [eax + 0x3e0] */ r_edx = (u32)(r_eax+0x3e0u);
    /* 0042b5d7: add eax, 0x6c4 */ {  u32 a = r_eax; u32 b = 0x6c4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b5dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5de: call 0x43580c */ r_esp -= 4; W32(r_esp, 0x42b5e3u); f_0043580c();
    /* 0042b5e3: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0042b5ea:; BB(0x0042b5ea);
    /* 0042b5ea: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b5ed: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b5f0: mov dword ptr [edx + 0x6c0], eax */ W32((u32)(r_edx+0x6c0u), r_eax);
    /* 0042b5f6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b5fd: mov dword ptr [edx + 0x6c4], 0 */ W32((u32)(r_edx+0x6c4u), 0x0u);
    /* 0042b607: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b609: mov dword ptr [edx + 0x6c8], 0 */ W32((u32)(r_edx+0x6c8u), 0x0u);
    /* 0042b613: mov dword ptr [edx + 0x6cc], 0 */ W32((u32)(r_edx+0x6ccu), 0x0u);
    /* 0042b61d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0042b624: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42b629u); f_008581c5();
    /* 0042b629: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b62c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b62f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0042b632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b634: je 0x42b906 */ if (fZ) goto L_0042b906;
L_0042b63a:; BB(0x0042b63a);
    /* 0042b63a: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0042b641: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0042b648: mov ecx, eax */ r_ecx = r_eax;
    /* 0042b64a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b64c: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x42b651u); f_00521a4c();
    /* 0042b651: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0042b658:; BB(0x0042b658);
    /* 0042b658: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b65b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b65e: mov dword ptr [edx + 0x6d0], eax */ W32((u32)(r_edx+0x6d0u), r_eax);
    /* 0042b664: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b66b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0042b66e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b670: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042b672: jle 0x42b687 */ if ((fZ||fS!=fO)) goto L_0042b687;
L_0042b674:; BB(0x0042b674);
    /* 0042b674: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b677: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042b679: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0042b67c: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0042b67f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b682: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b685: jl 0x42b674 */ if ((fS!=fO)) goto L_0042b674;
L_0042b687:; BB(0x0042b687);
    /* 0042b687: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b68a: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b68d: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b692: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0042b694: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0042b697: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0042b69a: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0042b69d: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 0042b6a0: mov dword ptr [edi + 0x6d4], esi */ W32((u32)(r_edi+0x6d4u), r_esi);
    /* 0042b6a6: mov dword ptr [edi + 0x6d8], esi */ W32((u32)(r_edi+0x6d8u), r_esi);
    /* 0042b6ac: mov dword ptr [edi + 0x520], edx */ W32((u32)(r_edi+0x520u), r_edx);
    /* 0042b6b2: mov dword ptr [edi + 0x6dc], 0x3f800000 */ W32((u32)(r_edi+0x6dcu), 0x3f800000u);
    /* 0042b6bc: mov dword ptr [edi + 0x524], ecx */ W32((u32)(r_edi+0x524u), r_ecx);
    /* 0042b6c2: mov dword ptr [edi + 0x528], ebx */ W32((u32)(r_edi+0x528u), r_ebx);
    /* 0042b6c8: mov dword ptr [edi + 0x52c], edx */ W32((u32)(r_edi+0x52cu), r_edx);
    /* 0042b6ce: mov dword ptr [edi + 0x6e0], 0x3dcccccd */ W32((u32)(r_edi+0x6e0u), 0x3dcccccdu);
    /* 0042b6d8: mov dword ptr [edi + 0x530], ecx */ W32((u32)(r_edi+0x530u), r_ecx);
    /* 0042b6de: mov dword ptr [edi + 0x534], ebx */ W32((u32)(r_edi+0x534u), r_ebx);
    /* 0042b6e4: mov dword ptr [edi + 0x538], edx */ W32((u32)(r_edi+0x538u), r_edx);
    /* 0042b6ea: mov dword ptr [edi + 0x610], 0x3f800000 */ W32((u32)(r_edi+0x610u), 0x3f800000u);
    /* 0042b6f4: mov dword ptr [edi + 0x53c], ecx */ W32((u32)(r_edi+0x53cu), r_ecx);
    /* 0042b6fa: mov dword ptr [edi + 0x540], ebx */ W32((u32)(r_edi+0x540u), r_ebx);
    /* 0042b700: mov dword ptr [edi + 0x544], esi */ W32((u32)(r_edi+0x544u), r_esi);
    /* 0042b706: mov dword ptr [edi + 0x614], 0x3f800000 */ W32((u32)(r_edi+0x614u), 0x3f800000u);
    /* 0042b710: mov dword ptr [edi + 0x618], 0x3f800000 */ W32((u32)(r_edi+0x618u), 0x3f800000u);
    /* 0042b71a: mov dword ptr [edi + 0x61c], 0x3f800000 */ W32((u32)(r_edi+0x61cu), 0x3f800000u);
    /* 0042b724: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42b729u); f_008581c5();
    /* 0042b729: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042b72a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b72d: mov dword ptr [edx + 0x620], eax */ W32((u32)(r_edx+0x620u), r_eax);
    /* 0042b733: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0042b735:; BB(0x0042b735);
    /* 0042b735: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0042b738: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b73a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b73c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b73e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b740: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b742: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b744: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x42b749u); f_00830cd8();
    /* 0042b749: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b74c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b74f: jge 0x42b75c */ if ((fS==fO)) goto L_0042b75c;
L_0042b751:; BB(0x0042b751);
    /* 0042b751: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b754: mov eax, dword ptr [eax + 0x620] */ r_eax = R32((u32)(r_eax+0x620u));
    /* 0042b75a: jmp 0x42b735 */ goto L_0042b735;
L_0042b75c:; BB(0x0042b75c);
    /* 0042b75c: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b75f: mov dword ptr [esi + 0x704], 0 */ W32((u32)(r_esi+0x704u), 0x0u);
    /* 0042b769: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b76b: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 0042b771: mov dword ptr [esi + 0x708], 0 */ W32((u32)(r_esi+0x708u), 0x0u);
    /* 0042b77b: mov dword ptr [esi + 0x74c], eax */ W32((u32)(r_esi+0x74cu), r_eax);
    /* 0042b781: mov dword ptr [esi + 0x750], eax */ W32((u32)(r_esi+0x750u), r_eax);
    /* 0042b787: mov dword ptr [esi + 0x754], eax */ W32((u32)(r_esi+0x754u), r_eax);
    /* 0042b78d: mov dword ptr [esi + 0x70c], 0 */ W32((u32)(r_esi+0x70cu), 0x0u);
    /* 0042b797: mov dword ptr [esi + 0x758], eax */ W32((u32)(r_esi+0x758u), r_eax);
    /* 0042b79d: mov dword ptr [esi + 0x75c], eax */ W32((u32)(r_esi+0x75cu), r_eax);
    /* 0042b7a3: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 0042b7a9: mov dword ptr [esi + 0x710], 0 */ W32((u32)(r_esi+0x710u), 0x0u);
    /* 0042b7b3: mov dword ptr [esi + 0x760], eax */ W32((u32)(r_esi+0x760u), r_eax);
    /* 0042b7b9: mov dword ptr [esi + 0x6e4], eax */ W32((u32)(r_esi+0x6e4u), r_eax);
    /* 0042b7bf: mov dword ptr [esi + 0x714], 0 */ W32((u32)(r_esi+0x714u), 0x0u);
    /* 0042b7c9: mov dword ptr [esi + 0x6e8], eax */ W32((u32)(r_esi+0x6e8u), r_eax);
    /* 0042b7cf: mov dword ptr [esi + 0x6ec], eax */ W32((u32)(r_esi+0x6ecu), r_eax);
    /* 0042b7d5: mov dword ptr [esi + 0x6f0], eax */ W32((u32)(r_esi+0x6f0u), r_eax);
    /* 0042b7db: mov dword ptr [esi + 0x718], 0 */ W32((u32)(r_esi+0x718u), 0x0u);
    /* 0042b7e5: mov dword ptr [esi + 0x6f4], eax */ W32((u32)(r_esi+0x6f4u), r_eax);
    /* 0042b7eb: mov dword ptr [esi + 0x6f8], eax */ W32((u32)(r_esi+0x6f8u), r_eax);
    /* 0042b7f1: mov dword ptr [esi + 0x6fc], eax */ W32((u32)(r_esi+0x6fcu), r_eax);
    /* 0042b7f7: mov dword ptr [esi + 0x71c], 0 */ W32((u32)(r_esi+0x71cu), 0x0u);
    /* 0042b801: mov dword ptr [esi + 0x700], eax */ W32((u32)(r_esi+0x700u), r_eax);
    /* 0042b807: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 0042b80d: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0042b813: mov dword ptr [esi + 0x720], 0 */ W32((u32)(r_esi+0x720u), 0x0u);
    /* 0042b81d: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0042b820: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b822: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b824: mov dword ptr [esi + 0x724], 0 */ W32((u32)(r_esi+0x724u), 0x0u);
    /* 0042b82e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b830: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 0042b837: mov dword ptr [esi + 0x728], 0 */ W32((u32)(r_esi+0x728u), 0x0u);
    /* 0042b841: mov dword ptr [esi + 0x3d4], ebx */ W32((u32)(r_esi+0x3d4u), r_ebx);
    /* 0042b847: mov dword ptr [esi + 0x72c], 0 */ W32((u32)(r_esi+0x72cu), 0x0u);
    /* 0042b851: mov dword ptr [esi + 0x730], 0 */ W32((u32)(r_esi+0x730u), 0x0u);
    /* 0042b85b: mov dword ptr [esi + 0x734], 0 */ W32((u32)(r_esi+0x734u), 0x0u);
    /* 0042b865: mov dword ptr [esi + 0x738], 0 */ W32((u32)(r_esi+0x738u), 0x0u);
    /* 0042b86f: mov dword ptr [esi + 0x73c], 0 */ W32((u32)(r_esi+0x73cu), 0x0u);
    /* 0042b879: mov dword ptr [esi + 0x740], 0 */ W32((u32)(r_esi+0x740u), 0x0u);
    /* 0042b883: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x42b888u); f_00694cc8();
    /* 0042b888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b88a: jne 0x42b89b */ if (!fZ) goto L_0042b89b;
L_0042b88c:; BB(0x0042b88c);
    /* 0042b88c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b88f: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 0042b899: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b89b:; BB(0x0042b89b);
    /* 0042b89b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b89e: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x42b8a3u); f_00520db0();
    /* 0042b8a3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b8a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b8a8: je 0x42b8b6 */ if (fZ) goto L_0042b8b6;
L_0042b8aa:; BB(0x0042b8aa);
    /* 0042b8aa: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 0042b8b4: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b8b6:; BB(0x0042b8b6);
    /* 0042b8b6: mov dword ptr [ecx + 0x3fc], 1 */ W32((u32)(r_ecx+0x3fcu), 0x1u);
L_0042b8c0:; BB(0x0042b8c0);
    /* 0042b8c0: call 0x434a2c */ r_esp -= 4; W32(r_esp, 0x42b8c5u); f_00434a2c();
    /* 0042b8c5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b8c8: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0042b8ce: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042b8d3: jne 0x42b8eb */ if (!fZ) goto L_0042b8eb;
L_0042b8d5:; BB(0x0042b8d5);
    /* 0042b8d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0042b8da: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0042b8e1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b8e3: call 0x4321cc */ r_esp -= 4; W32(r_esp, 0x42b8e8u); f_004321cc();
    /* 0042b8e8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
L_0042b8eb:; BB(0x0042b8eb);
    /* 0042b8eb: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042b8ee: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042b8f1: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042b8f4: mov eax, ecx */ r_eax = r_ecx;
    /* 0042b8f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b8f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042b900: mov esp, ebp */ r_esp = r_ebp;
    /* 0042b902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042b903: ret 8 */ FN_RET(0x0042b40a); r_esp += 12; return;
L_0042b906:; BB(0x0042b906);
    /* 0042b906: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b908: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b90b: jmp 0x42b658 */ goto L_0042b658;
L_0042b910:; BB(0x0042b910);
    /* 0042b910: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b912: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b915: jmp 0x42b5ea */ goto L_0042b5ea;
L_0042b91a:; BB(0x0042b91a);
    /* 0042b91a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b91c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b91f: jmp 0x42b516 */ goto L_0042b516;
L_0042b924:; BB(0x0042b924);
    /* 0042b924: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b926: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b929: jmp 0x42b498 */ goto L_0042b498;
L_0042b92e:; BB(0x0042b92e);
    /* 0042b92e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b930: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b933: jmp 0x42b40a */ goto L_0042b40a;
}

void f_0042b94c(void) /* sub_42B94C */
{
    FN_ENTER(0x0042b94c);
    /* 0042b94c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b94d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042b950: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042b952: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0042b956: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b959: je 0x42bc2b */ if (fZ) goto L_0042bc2b;
L_0042b95f:; BB(0x0042b95f);
    /* 0042b95f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b962: je 0x42bbdb */ if (fZ) goto L_0042bbdb;
L_0042b968:; BB(0x0042b968);
    /* 0042b968: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b96b: je 0x42ba55 */ if (fZ) goto L_0042ba55;
L_0042b971:; BB(0x0042b971);
    /* 0042b971: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b974: je 0x42ba45 */ if (fZ) goto L_0042ba45;
L_0042b97a:; BB(0x0042b97a);
    /* 0042b97a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b97c: je 0x42b9a1 */ if (fZ) goto L_0042b9a1;
L_0042b97e:; BB(0x0042b97e);
    /* 0042b97e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b981: je 0x42ba45 */ if (fZ) goto L_0042ba45;
L_0042b987:; BB(0x0042b987);
    /* 0042b987: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b98a: jne 0x42ba45 */ if (!fZ) goto L_0042ba45;
L_0042b990:; BB(0x0042b990);
    /* 0042b990: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042b996: mov dword ptr [ebx + 0x65c], eax */ W32((u32)(r_ebx+0x65cu), r_eax);
    /* 0042b99c: jmp 0x42ba45 */ goto L_0042ba45;
L_0042b9a1:; BB(0x0042b9a1);
    /* 0042b9a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042b9a3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42b9a8u); f_007aa094();
    /* 0042b9a8: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0042b9ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b9b0: je 0x42ba4c */ if (fZ) goto L_0042ba4c;
L_0042b9b6:; BB(0x0042b9b6);
    /* 0042b9b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b9b9: je 0x42b9f5 */ if (fZ) goto L_0042b9f5;
L_0042b9bb:; BB(0x0042b9bb);
    /* 0042b9bb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b9be: jne 0x42b9d8 */ if (!fZ) goto L_0042b9d8;
L_0042b9c0:; BB(0x0042b9c0);
    /* 0042b9c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042b9c2: call 0x42bf10 */ r_esp -= 4; W32(r_esp, 0x42b9c7u); f_0042bf10();
    /* 0042b9c7: fld dword ptr [ebx + 0x708] */ FPUSH(R_F32((u32)(r_ebx+0x708u)));
    /* 0042b9cd: fsub dword ptr [ebx + 0x6a4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x6a4u));
    /* 0042b9d3: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042b9d6: jmp 0x42ba0b */ goto L_0042ba0b;
L_0042b9d8:; BB(0x0042b9d8);
    /* 0042b9d8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b9db: jne 0x42ba19 */ if (!fZ) goto L_0042ba19;
L_0042b9dd:; BB(0x0042b9dd);
    /* 0042b9dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042b9df: call 0x42be68 */ r_esp -= 4; W32(r_esp, 0x42b9e4u); f_0042be68();
    /* 0042b9e4: fld dword ptr [ebx + 0x708] */ FPUSH(R_F32((u32)(r_ebx+0x708u)));
    /* 0042b9ea: fsub dword ptr [ebx + 0x6a4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x6a4u));
    /* 0042b9f0: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042b9f3: jmp 0x42ba0b */ goto L_0042ba0b;
L_0042b9f5:; BB(0x0042b9f5);
    /* 0042b9f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042b9f7: call 0x42bfe8 */ r_esp -= 4; W32(r_esp, 0x42b9fcu); f_0042bfe8();
    /* 0042b9fc: fld dword ptr [ebx + 0x6a4] */ FPUSH(R_F32((u32)(r_ebx+0x6a4u)));
    /* 0042ba02: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 0042ba08: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_0042ba0b:; BB(0x0042ba0b);
    /* 0042ba0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ba0d: je 0x42ba19 */ if (fZ) goto L_0042ba19;
L_0042ba0f:; BB(0x0042ba0f);
    /* 0042ba0f: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
L_0042ba19:; BB(0x0042ba19);
    /* 0042ba19: fld dword ptr [ebx + 0x684] */ FPUSH(R_F32((u32)(r_ebx+0x684u)));
    /* 0042ba1f: fmul dword ptr [ebx + 0x70c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x70cu));
    /* 0042ba25: fadd dword ptr [ebx + 0x704] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x704u));
    /* 0042ba2b: fld dword ptr [ebx + 0x6a4] */ FPUSH(R_F32((u32)(r_ebx+0x6a4u)));
    /* 0042ba31: fmul dword ptr [ebx + 0x710] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x710u));
    /* 0042ba37: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 0042ba3d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042ba3f: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042ba42: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042b94c); r_esp += 16; return;
L_0042ba4c:; BB(0x0042ba4c);
    /* 0042ba4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ba4e: call 0x42c080 */ r_esp -= 4; W32(r_esp, 0x42ba53u); f_0042c080();
    /* 0042ba53: jmp 0x42ba0b */ goto L_0042ba0b;
L_0042ba55:; BB(0x0042ba55);
    /* 0042ba55: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042ba5b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ba5e: jne 0x42ba45 */ if (!fZ) goto L_0042ba45;
L_0042ba60:; BB(0x0042ba60);
    /* 0042ba60: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042ba66: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ba69: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042ba6f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42ba74u); f_00520e6c();
    /* 0042ba74: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042ba7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ba7c: je 0x42ba87 */ if (fZ) goto L_0042ba87;
L_0042ba7e:; BB(0x0042ba7e);
    /* 0042ba7e: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042ba85: jmp 0x42ba8e */ goto L_0042ba8e;
L_0042ba87:; BB(0x0042ba87);
    /* 0042ba87: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042ba8e:; BB(0x0042ba8e);
    /* 0042ba8e: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042ba91: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042ba94: ja 0x42bbce */ if ((!fC&&!fZ)) goto L_0042bbce;
L_0042ba9a:; BB(0x0042ba9a);
    /* 0042ba9a: mov edx, dword ptr [edx*4 + 0x8fc790] */ r_edx = R32((u32)(r_edx*4+0x8fc790u));
    /* 0042baa1: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
L_0042bbdb:; BB(0x0042bbdb);
    /* 0042bbdb: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042bbe1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bbe4: jne 0x42ba45 */ if (!fZ) goto L_0042ba45;
L_0042bbea:; BB(0x0042bbea);
    /* 0042bbea: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbee: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042bbf0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbf2: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42bbf8u); call_ind(t); }
    /* 0042bbf8: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042bbfc: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042bc02: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0042bc06: mov edx, 2 */ r_edx = 0x2u;
    /* 0042bc0b: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0042bc0f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0042bc14: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0042bc19: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 0042bc1e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042bc21: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42bc26u); f_008003e0();
    /* 0042bc26: jmp 0x42ba45 */ goto L_0042ba45;
L_0042bc2b:; BB(0x0042bc2b);
    /* 0042bc2b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042bc2d: mov eax, 1 */ r_eax = 0x1u;
    /* 0042bc32: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042bc39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bc3b: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42bc41u); call_ind(t); }
    /* 0042bc41: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042bc45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042bc47: mov esi, eax */ r_esi = r_eax;
L_0042bc49:; BB(0x0042bc49);
    /* 0042bc49: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042bc50: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042bc52: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42bc58u); call_ind(t); }
    /* 0042bc58: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042bc5b: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042bc5e: jl 0x42bc49 */ if ((fS!=fO)) goto L_0042bc49;
L_0042bc60:; BB(0x0042bc60);
    /* 0042bc60: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0042bc64: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0042bc68: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042bc6e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042bc71: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042bc76: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042bc7c: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0042bc80: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0042bc86: mov dword ptr [ebx + 0x660], eax */ W32((u32)(r_ebx+0x660u), r_eax);
    /* 0042bc8c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0042bc90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bc92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc93: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42bc98u); f_0042c154();
    /* 0042bc98: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0042bc9b: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0042bc9e: mov dword ptr [ebx + 0x6e8], 0 */ W32((u32)(r_ebx+0x6e8u), 0x0u);
    /* 0042bca8: mov dword ptr [ebx + 0x704], eax */ W32((u32)(r_ebx+0x704u), r_eax);
    /* 0042bcae: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042bcb4: mov dword ptr [ebx + 0x708], edx */ W32((u32)(r_ebx+0x708u), r_edx);
    /* 0042bcba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bcbc: je 0x42be18 */ if (fZ) goto L_0042be18;
L_0042bcc2:; BB(0x0042bcc2);
    /* 0042bcc2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bcc5: je 0x42bd69 */ if (fZ) goto L_0042bd69;
L_0042bccb:; BB(0x0042bccb);
    /* 0042bccb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bcce: jne 0x42bd1d */ if (!fZ) goto L_0042bd1d;
L_0042bcd0:; BB(0x0042bcd0);
    /* 0042bcd0: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bcd6: mov dword ptr [ebx + 0x70c], 0xbf800000 */ W32((u32)(r_ebx+0x70cu), 0xbf800000u);
    /* 0042bce0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bce3: jne 0x42bcf9 */ if (!fZ) goto L_0042bcf9;
L_0042bce5:; BB(0x0042bce5);
    /* 0042bce5: mov dword ptr [ebx + 0x6ec], 1 */ W32((u32)(r_ebx+0x6ecu), 0x1u);
    /* 0042bcef: mov edx, 1 */ r_edx = 0x1u;
    /* 0042bcf4: jmp 0x42bda9 */ goto L_0042bda9;
L_0042bcf9:; BB(0x0042bcf9);
    /* 0042bcf9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bcfc: jne 0x42bd12 */ if (!fZ) goto L_0042bd12;
L_0042bcfe:; BB(0x0042bcfe);
    /* 0042bcfe: mov dword ptr [ebx + 0x6ec], 3 */ W32((u32)(r_ebx+0x6ecu), 0x3u);
    /* 0042bd08: mov edx, 3 */ r_edx = 0x3u;
    /* 0042bd0d: jmp 0x42bda9 */ goto L_0042bda9;
L_0042bd12:; BB(0x0042bd12);
    /* 0042bd12: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042bd18: jmp 0x42bda9 */ goto L_0042bda9;
L_0042bd1d:; BB(0x0042bd1d);
    /* 0042bd1d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd20: jne 0x42bd61 */ if (!fZ) goto L_0042bd61;
L_0042bd22:; BB(0x0042bd22);
    /* 0042bd22: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bd28: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 0042bd32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042bd34: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd37: jne 0x42bd4b */ if (!fZ) goto L_0042bd4b;
L_0042bd39:; BB(0x0042bd39);
    /* 0042bd39: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042bd3f: mov dword ptr [ebx + 0x70c], 0x3f800000 */ W32((u32)(r_ebx+0x70cu), 0x3f800000u);
    /* 0042bd49: jmp 0x42bda9 */ goto L_0042bda9;
L_0042bd4b:; BB(0x0042bd4b);
    /* 0042bd4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd4d: jne 0x42bda9 */ if (!fZ) goto L_0042bda9;
L_0042bd4f:; BB(0x0042bd4f);
    /* 0042bd4f: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042bd55: mov dword ptr [ebx + 0x70c], 0xbf800000 */ W32((u32)(r_ebx+0x70cu), 0xbf800000u);
    /* 0042bd5f: jmp 0x42bda9 */ goto L_0042bda9;
L_0042bd61:; BB(0x0042bd61);
    /* 0042bd61: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042bd67: jmp 0x42bda9 */ goto L_0042bda9;
L_0042bd69:; BB(0x0042bd69);
    /* 0042bd69: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bd6f: mov dword ptr [ebx + 0x6ec], 2 */ W32((u32)(r_ebx+0x6ecu), 0x2u);
    /* 0042bd79: mov edx, 2 */ r_edx = 0x2u;
    /* 0042bd7e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd81: jne 0x42bd95 */ if (!fZ) goto L_0042bd95;
L_0042bd83:; BB(0x0042bd83);
    /* 0042bd83: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042bd89: mov dword ptr [ebx + 0x70c], 0x3f800000 */ W32((u32)(r_ebx+0x70cu), 0x3f800000u);
    /* 0042bd93: jmp 0x42bda9 */ goto L_0042bda9;
L_0042bd95:; BB(0x0042bd95);
    /* 0042bd95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd97: jne 0x42bda9 */ if (!fZ) goto L_0042bda9;
L_0042bd99:; BB(0x0042bd99);
    /* 0042bd99: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042bd9f: mov dword ptr [ebx + 0x70c], 0xbf800000 */ W32((u32)(r_ebx+0x70cu), 0xbf800000u);
L_0042bda9:; BB(0x0042bda9);
    /* 0042bda9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bdab: je 0x42be02 */ if (fZ) goto L_0042be02;
L_0042bdad:; BB(0x0042bdad);
    /* 0042bdad: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bdb0: je 0x42bdec */ if (fZ) goto L_0042bdec;
L_0042bdb2:; BB(0x0042bdb2);
    /* 0042bdb2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bdb5: jne 0x42bdcd */ if (!fZ) goto L_0042bdcd;
L_0042bdb7:; BB(0x0042bdb7);
    /* 0042bdb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bdb9: call 0x434934 */ r_esp -= 4; W32(r_esp, 0x42bdbeu); f_00434934();
    /* 0042bdbe: mov dword ptr [ebx + 0x710], 0xbf800000 */ W32((u32)(r_ebx+0x710u), 0xbf800000u);
    /* 0042bdc8: jmp 0x42ba45 */ goto L_0042ba45;
L_0042bdcd:; BB(0x0042bdcd);
    /* 0042bdcd: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bdd0: jne 0x42ba45 */ if (!fZ) goto L_0042ba45;
L_0042bdd6:; BB(0x0042bdd6);
    /* 0042bdd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bdd8: call 0x4348b4 */ r_esp -= 4; W32(r_esp, 0x42bdddu); f_004348b4();
    /* 0042bddd: mov dword ptr [ebx + 0x710], 0xbf800000 */ W32((u32)(r_ebx+0x710u), 0xbf800000u);
    /* 0042bde7: jmp 0x42ba45 */ goto L_0042ba45;
L_0042bdec:; BB(0x0042bdec);
    /* 0042bdec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bdee: call 0x4349b4 */ r_esp -= 4; W32(r_esp, 0x42bdf3u); f_004349b4();
    /* 0042bdf3: mov dword ptr [ebx + 0x710], 0x3f800000 */ W32((u32)(r_ebx+0x710u), 0x3f800000u);
    /* 0042bdfd: jmp 0x42ba45 */ goto L_0042ba45;
L_0042be02:; BB(0x0042be02);
    /* 0042be02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042be04: call 0x43483c */ r_esp -= 4; W32(r_esp, 0x42be09u); f_0043483c();
    /* 0042be09: mov dword ptr [ebx + 0x710], 0x3f800000 */ W32((u32)(r_ebx+0x710u), 0x3f800000u);
    /* 0042be13: jmp 0x42ba45 */ goto L_0042ba45;
L_0042be18:; BB(0x0042be18);
    /* 0042be18: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042be1e: mov dword ptr [ebx + 0x70c], 0x3f800000 */ W32((u32)(r_ebx+0x70cu), 0x3f800000u);
    /* 0042be28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042be2b: jne 0x42be41 */ if (!fZ) goto L_0042be41;
L_0042be2d:; BB(0x0042be2d);
    /* 0042be2d: mov dword ptr [ebx + 0x6ec], 1 */ W32((u32)(r_ebx+0x6ecu), 0x1u);
    /* 0042be37: mov edx, 1 */ r_edx = 0x1u;
    /* 0042be3c: jmp 0x42bda9 */ goto L_0042bda9;
L_0042be41:; BB(0x0042be41);
    /* 0042be41: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042be44: jne 0x42be5a */ if (!fZ) goto L_0042be5a;
L_0042be46:; BB(0x0042be46);
    /* 0042be46: mov dword ptr [ebx + 0x6ec], 3 */ W32((u32)(r_ebx+0x6ecu), 0x3u);
    /* 0042be50: mov edx, 3 */ r_edx = 0x3u;
    /* 0042be55: jmp 0x42bda9 */ goto L_0042bda9;
L_0042be5a:; BB(0x0042be5a);
    /* 0042be5a: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042be60: jmp 0x42bda9 */ goto L_0042bda9;
}

void f_0042baa0(void)
{
    FN_ENTER(0x0042baa0);
    goto L_0042baa0;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042baa0); r_esp += 16; return;
L_0042ba5c:; BB(0x0042ba5c);
    /* 0042ba5c: clc  */ fC = 0;
    /* 0042ba5d: add dword ptr [ebp - 0x1b], esi */ { u32 ad = (u32)(r_ebp+0xffffffe5u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0042ba60: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042ba66: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ba69: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042ba6f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42ba74u); f_00520e6c();
    /* 0042ba74: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042ba7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ba7c: je 0x42ba87 */ if (fZ) goto L_0042ba87;
L_0042ba7e:; BB(0x0042ba7e);
    /* 0042ba7e: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042ba85: jmp 0x42ba8e */ goto L_0042ba8e;
L_0042ba87:; BB(0x0042ba87);
    /* 0042ba87: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042ba8e:; BB(0x0042ba8e);
    /* 0042ba8e: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042ba91: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042ba94: ja 0x42bbce */ if ((!fC&&!fZ)) goto L_0042bbce;
L_0042ba9a:; BB(0x0042ba9a);
    /* 0042ba9a: mov edx, dword ptr [edx*4 + 0x8fc790] */ r_edx = R32((u32)(r_edx*4+0x8fc790u));
L_0042baa0:; BB(0x0042baa0);
    /* 0042baa0: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0042baa1: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
    /* 0042baa2: loop 0x42ba5c */ r_ecx--; if (r_ecx) goto L_0042ba5c;
    /* 0042baa4: add eax, 0xeb000000 */ {  u32 a = r_eax; u32 b = 0xeb000000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042baa9: mov esp, 0x660838b */ r_esp = 0x660838bu;
    /* 0042baae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0042bab0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bab2: jne 0x42babe */ if (!fZ) goto L_0042babe;
L_0042bab4:; BB(0x0042bab4);
    /* 0042bab4: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042bab9: jmp 0x42bbce */ goto L_0042bbce;
L_0042babe:; BB(0x0042babe);
    /* 0042babe: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042bac3: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042baa3(void)
{
    FN_ENTER(0x0042baa3);
    goto L_0042baa3;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042baa3); r_esp += 16; return;
L_0042ba66:; BB(0x0042ba66);
    /* 0042ba66: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ba69: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042ba6f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42ba74u); f_00520e6c();
    /* 0042ba74: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042ba7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ba7c: je 0x42ba87 */ if (fZ) goto L_0042ba87;
L_0042ba7e:; BB(0x0042ba7e);
    /* 0042ba7e: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042ba85: jmp 0x42ba8e */ goto L_0042ba8e;
L_0042ba87:; BB(0x0042ba87);
    /* 0042ba87: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042ba8e:; BB(0x0042ba8e);
    /* 0042ba8e: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042ba91: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042ba94: ja 0x42bbce */ if ((!fC&&!fZ)) goto L_0042bbce;
L_0042ba9a:; BB(0x0042ba9a);
    /* 0042ba9a: mov edx, dword ptr [edx*4 + 0x8fc790] */ r_edx = R32((u32)(r_edx*4+0x8fc790u));
    /* 0042baa1: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042baa3:; BB(0x0042baa3);
    /* 0042baa3: mov eax, 5 */ r_eax = 0x5u;
    /* 0042baa8: jmp 0x42ba66 */ goto L_0042ba66;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042baaa(void)
{
    FN_ENTER(0x0042baaa);
    goto L_0042baaa;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042baaa); r_esp += 16; return;
L_0042baaa:; BB(0x0042baaa);
    /* 0042baaa: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bab0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bab2: jne 0x42babe */ if (!fZ) goto L_0042babe;
L_0042bab4:; BB(0x0042bab4);
    /* 0042bab4: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042bab9: jmp 0x42bbce */ goto L_0042bbce;
L_0042babe:; BB(0x0042babe);
    /* 0042babe: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042bac3: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bac8(void)
{
    FN_ENTER(0x0042bac8);
    goto L_0042bac8;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bac8); r_esp += 16; return;
L_0042bac8:; BB(0x0042bac8);
    /* 0042bac8: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bad0: jne 0x42badc */ if (!fZ) goto L_0042badc;
L_0042bad2:; BB(0x0042bad2);
    /* 0042bad2: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042bad7: jmp 0x42bbce */ goto L_0042bbce;
L_0042badc:; BB(0x0042badc);
    /* 0042badc: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042bae1: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bae6(void)
{
    FN_ENTER(0x0042bae6);
    goto L_0042bae6;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bae6); r_esp += 16; return;
L_0042bae6:; BB(0x0042bae6);
    /* 0042bae6: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042baec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042baee: jne 0x42bafa */ if (!fZ) goto L_0042bafa;
L_0042baf0:; BB(0x0042baf0);
    /* 0042baf0: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042baf5: jmp 0x42bbce */ goto L_0042bbce;
L_0042bafa:; BB(0x0042bafa);
    /* 0042bafa: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042baff: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bb04(void)
{
    FN_ENTER(0x0042bb04);
    goto L_0042bb04;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bb04); r_esp += 16; return;
L_0042bb04:; BB(0x0042bb04);
    /* 0042bb04: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bb0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bb0c: jne 0x42bb18 */ if (!fZ) goto L_0042bb18;
L_0042bb0e:; BB(0x0042bb0e);
    /* 0042bb0e: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042bb13: jmp 0x42bbce */ goto L_0042bbce;
L_0042bb18:; BB(0x0042bb18);
    /* 0042bb18: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042bb1d: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bb22(void)
{
    FN_ENTER(0x0042bb22);
    goto L_0042bb22;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bb22); r_esp += 16; return;
L_0042bb22:; BB(0x0042bb22);
    /* 0042bb22: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bb28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bb2a: jne 0x42bb36 */ if (!fZ) goto L_0042bb36;
L_0042bb2c:; BB(0x0042bb2c);
    /* 0042bb2c: mov eax, 4 */ r_eax = 0x4u;
    /* 0042bb31: jmp 0x42bbce */ goto L_0042bbce;
L_0042bb36:; BB(0x0042bb36);
    /* 0042bb36: mov eax, 0xa */ r_eax = 0xau;
    /* 0042bb3b: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bb40(void)
{
    FN_ENTER(0x0042bb40);
    goto L_0042bb40;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bb40); r_esp += 16; return;
L_0042bb40:; BB(0x0042bb40);
    /* 0042bb40: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bb42: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42bb47u); f_00520bf4();
    /* 0042bb47: fcomp dword ptr [0x8fd12c] */ fx_compare(ST(0), R_F32((u32)(0x8fd12cu))); FPOP();
    /* 0042bb4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042bb4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042bb50: jbe 0x42bb59 */ if ((fC||fZ)) goto L_0042bb59;
L_0042bb52:; BB(0x0042bb52);
    /* 0042bb52: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042bb57: jmp 0x42bbce */ goto L_0042bbce;
L_0042bb59:; BB(0x0042bb59);
    /* 0042bb59: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042bb5e: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bb60(void)
{
    FN_ENTER(0x0042bb60);
    goto L_0042bb60;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bb60); r_esp += 16; return;
L_0042bb60:; BB(0x0042bb60);
    /* 0042bb60: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bb66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bb68: jne 0x42bb71 */ if (!fZ) goto L_0042bb71;
L_0042bb6a:; BB(0x0042bb6a);
    /* 0042bb6a: mov eax, 3 */ r_eax = 0x3u;
    /* 0042bb6f: jmp 0x42bbce */ goto L_0042bbce;
L_0042bb71:; BB(0x0042bb71);
    /* 0042bb71: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042bb76: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bb78(void)
{
    FN_ENTER(0x0042bb78);
    goto L_0042bb78;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bb78); r_esp += 16; return;
L_0042bb78:; BB(0x0042bb78);
    /* 0042bb78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bb7a: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42bb7fu); f_00520bf4();
    /* 0042bb7f: fcomp dword ptr [0x8fd12c] */ fx_compare(ST(0), R_F32((u32)(0x8fd12cu))); FPOP();
    /* 0042bb85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042bb87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042bb88: jbe 0x42bb91 */ if ((fC||fZ)) goto L_0042bb91;
L_0042bb8a:; BB(0x0042bb8a);
    /* 0042bb8a: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042bb8f: jmp 0x42bbce */ goto L_0042bbce;
L_0042bb91:; BB(0x0042bb91);
    /* 0042bb91: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042bb96: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bb98(void)
{
    FN_ENTER(0x0042bb98);
    goto L_0042bb98;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bb98); r_esp += 16; return;
L_0042bb98:; BB(0x0042bb98);
    /* 0042bb98: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042bb9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bba0: jne 0x42bba9 */ if (!fZ) goto L_0042bba9;
L_0042bba2:; BB(0x0042bba2);
    /* 0042bba2: mov eax, 5 */ r_eax = 0x5u;
    /* 0042bba7: jmp 0x42bbce */ goto L_0042bbce;
L_0042bba9:; BB(0x0042bba9);
    /* 0042bba9: mov eax, 9 */ r_eax = 0x9u;
    /* 0042bbae: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bbb0(void)
{
    FN_ENTER(0x0042bbb0);
    goto L_0042bbb0;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bbb0); r_esp += 16; return;
L_0042bbb0:; BB(0x0042bbb0);
    /* 0042bbb0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbb2: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42bbb7u); f_00520bf4();
    /* 0042bbb7: fcomp dword ptr [0x8fd12c] */ fx_compare(ST(0), R_F32((u32)(0x8fd12cu))); FPOP();
    /* 0042bbbd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042bbbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042bbc0: jbe 0x42bbc9 */ if ((fC||fZ)) goto L_0042bbc9;
L_0042bbc2:; BB(0x0042bbc2);
    /* 0042bbc2: mov eax, 8 */ r_eax = 0x8u;
    /* 0042bbc7: jmp 0x42bbce */ goto L_0042bbce;
L_0042bbc9:; BB(0x0042bbc9);
    /* 0042bbc9: mov eax, 6 */ r_eax = 0x6u;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042bbce(void)
{
    FN_ENTER(0x0042bbce);
    goto L_0042bbce;
L_0042ba45:; BB(0x0042ba45);
    /* 0042ba45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ba48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ba49: ret 0xc */ FN_RET(0x0042bbce); r_esp += 16; return;
L_0042bbce:; BB(0x0042bbce);
    /* 0042bbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042bbd1: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42bbd6u); f_0042abf8();
    /* 0042bbd6: jmp 0x42ba45 */ goto L_0042ba45;
}

void f_0042be68(void) /* sub_42BE68 */
{
    FN_ENTER(0x0042be68);
    /* 0042be68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042be69: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0042be6b: lea ecx, [ebp + 0x68c] */ r_ecx = (u32)(r_ebp+0x68cu);
    /* 0042be71: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42be76u); f_0042cdc0();
    /* 0042be76: mov edx, dword ptr [ebp + 0x664] */ r_edx = R32((u32)(r_ebp+0x664u));
    /* 0042be7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042be7e: jne 0x42beac */ if (!fZ) goto L_0042beac;
L_0042be80:; BB(0x0042be80);
    /* 0042be80: fld dword ptr [ebp + 0x6a4] */ FPUSH(R_F32((u32)(r_ebp+0x6a4u)));
    /* 0042be86: fcom dword ptr [0x8fd118] */ fx_compare(ST(0), R_F32((u32)(0x8fd118u))); 
    /* 0042be8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042be8e: mov dword ptr [ebp + 0xc8], 0x3e99999a */ W32((u32)(r_ebp+0xc8u), 0x3e99999au);
    /* 0042be98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042be99: jbe 0x42bed5 */ if ((fC||fZ)) goto L_0042bed5;
L_0042be9b:; BB(0x0042be9b);
    /* 0042be9b: mov dword ptr [ebp + 0x664], 1 */ W32((u32)(r_ebp+0x664u), 0x1u);
    /* 0042bea5: mov edx, 1 */ r_edx = 0x1u;
    /* 0042beaa: jmp 0x42bed5 */ goto L_0042bed5;
L_0042beac:; BB(0x0042beac);
    /* 0042beac: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042beaf: jne 0x42becf */ if (!fZ) goto L_0042becf;
L_0042beb1:; BB(0x0042beb1);
    /* 0042beb1: lea ecx, [ebp + 0x66c] */ r_ecx = (u32)(r_ebp+0x66cu);
    /* 0042beb7: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42bebcu); f_0042cdc0();
    /* 0042bebc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bebf: je 0x42bef7 */ if (fZ) goto L_0042bef7;
L_0042bec1:; BB(0x0042bec1);
    /* 0042bec1: mov edx, dword ptr [ebp + 0x664] */ r_edx = R32((u32)(r_ebp+0x664u));
    /* 0042bec7: fld dword ptr [ebp + 0x6a4] */ FPUSH(R_F32((u32)(r_ebp+0x6a4u)));
    /* 0042becd: jmp 0x42bed5 */ goto L_0042bed5;
L_0042becf:; BB(0x0042becf);
    /* 0042becf: fld dword ptr [ebp + 0x6a4] */ FPUSH(R_F32((u32)(r_ebp+0x6a4u)));
L_0042bed5:; BB(0x0042bed5);
    /* 0042bed5: fcomp dword ptr [0x8fd120] */ fx_compare(ST(0), R_F32((u32)(0x8fd120u))); FPOP();
    /* 0042bedb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042bedd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042bede: jbe 0x42beea */ if ((fC||fZ)) goto L_0042beea;
L_0042bee0:; BB(0x0042bee0);
    /* 0042bee0: mov dword ptr [ebp + 0xc8], 0x3f666666 */ W32((u32)(r_ebp+0xc8u), 0x3f666666u);
L_0042beea:; BB(0x0042beea);
    /* 0042beea: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042beed: mov eax, 0 */ r_eax = 0x0u;
    /* 0042bef2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042bef5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042bef6: ret  */ FN_RET(0x0042be68); r_esp += 4; return;
L_0042bef7:; BB(0x0042bef7);
    /* 0042bef7: fld dword ptr [ebp + 0x6a4] */ FPUSH(R_F32((u32)(r_ebp+0x6a4u)));
    /* 0042befd: mov dword ptr [ebp + 0x664], 2 */ W32((u32)(r_ebp+0x664u), 0x2u);
    /* 0042bf07: mov edx, 2 */ r_edx = 0x2u;
    /* 0042bf0c: jmp 0x42bed5 */ goto L_0042bed5;
}

void f_0042bf10(void) /* sub_42BF10 */
{
    FN_ENTER(0x0042bf10);
    /* 0042bf10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf11: mov edi, ecx */ r_edi = r_ecx;
    /* 0042bf13: lea ecx, [edi + 0x66c] */ r_ecx = (u32)(r_edi+0x66cu);
    /* 0042bf19: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42bf1eu); f_0042cdc0();
    /* 0042bf1e: mov edx, dword ptr [edi + 0x668] */ r_edx = R32((u32)(r_edi+0x668u));
    /* 0042bf24: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bf26: je 0x42bfa9 */ if (fZ) goto L_0042bfa9;
L_0042bf2c:; BB(0x0042bf2c);
    /* 0042bf2c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bf2f: jne 0x42bf4f */ if (!fZ) goto L_0042bf4f;
L_0042bf31:; BB(0x0042bf31);
    /* 0042bf31: mov dword ptr [edi + 0xc8], 0x3e99999a */ W32((u32)(r_edi+0xc8u), 0x3e99999au);
    /* 0042bf3b: mov edx, 3 */ r_edx = 0x3u;
    /* 0042bf40: mov dword ptr [edi + 0x668], 3 */ W32((u32)(r_edi+0x668u), 0x3u);
    /* 0042bf4a: jmp 0x42bfc9 */ goto L_0042bfc9;
L_0042bf4f:; BB(0x0042bf4f);
    /* 0042bf4f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bf52: jne 0x42bfc9 */ if (!fZ) goto L_0042bfc9;
L_0042bf54:; BB(0x0042bf54);
    /* 0042bf54: lea ecx, [edi + 0x68c] */ r_ecx = (u32)(r_edi+0x68cu);
    /* 0042bf5a: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42bf5fu); f_0042cdc0();
    /* 0042bf5f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bf62: je 0x42bfd6 */ if (fZ) goto L_0042bfd6;
L_0042bf64:; BB(0x0042bf64);
    /* 0042bf64: mov edx, dword ptr [edi + 0x668] */ r_edx = R32((u32)(r_edi+0x668u));
L_0042bf6a:; BB(0x0042bf6a);
    /* 0042bf6a: fld dword ptr [edi + 0x6a4] */ FPUSH(R_F32((u32)(r_edi+0x6a4u)));
    /* 0042bf70: fcomp dword ptr [0x8fd110] */ fx_compare(ST(0), R_F32((u32)(0x8fd110u))); FPOP();
    /* 0042bf76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042bf78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042bf79: jbe 0x42bfc9 */ if ((fC||fZ)) goto L_0042bfc9;
L_0042bf7b:; BB(0x0042bf7b);
    /* 0042bf7b: fld dword ptr [0x8fd10c] */ FPUSH(R_F32((u32)(0x8fd10cu)));
    /* 0042bf81: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 0042bf87: fcom dword ptr [0x8fd114] */ fx_compare(ST(0), R_F32((u32)(0x8fd114u))); 
    /* 0042bf8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042bf8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042bf90: jbe 0x42bfa1 */ if ((fC||fZ)) goto L_0042bfa1;
L_0042bf92:; BB(0x0042bf92);
    /* 0042bf92: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042bf94: mov eax, 0x3f666666 */ r_eax = 0x3f666666u;
    /* 0042bf99: mov dword ptr [edi + 0xc8], eax */ W32((u32)(r_edi+0xc8u), r_eax);
    /* 0042bf9f: jmp 0x42bfc9 */ goto L_0042bfc9;
L_0042bfa1:; BB(0x0042bfa1);
    /* 0042bfa1: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 0042bfa7: jmp 0x42bfc9 */ goto L_0042bfc9;
L_0042bfa9:; BB(0x0042bfa9);
    /* 0042bfa9: fld dword ptr [edi + 0x684] */ FPUSH(R_F32((u32)(r_edi+0x684u)));
    /* 0042bfaf: fcomp dword ptr [0x8fd108] */ fx_compare(ST(0), R_F32((u32)(0x8fd108u))); FPOP();
    /* 0042bfb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042bfb7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042bfb8: jbe 0x42bfc9 */ if ((fC||fZ)) goto L_0042bfc9;
L_0042bfba:; BB(0x0042bfba);
    /* 0042bfba: mov dword ptr [edi + 0x668], 2 */ W32((u32)(r_edi+0x668u), 0x2u);
    /* 0042bfc4: mov edx, 2 */ r_edx = 0x2u;
L_0042bfc9:; BB(0x0042bfc9);
    /* 0042bfc9: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042bfcc: mov eax, 0 */ r_eax = 0x0u;
    /* 0042bfd1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042bfd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042bfd5: ret  */ FN_RET(0x0042bf10); r_esp += 4; return;
L_0042bfd6:; BB(0x0042bfd6);
    /* 0042bfd6: mov dword ptr [edi + 0x668], 4 */ W32((u32)(r_edi+0x668u), 0x4u);
    /* 0042bfe0: mov edx, 4 */ r_edx = 0x4u;
    /* 0042bfe5: jmp 0x42bf6a */ goto L_0042bf6a;
}

void f_0042bfe8(void) /* sub_42BFE8 */
{
    FN_ENTER(0x0042bfe8);
    /* 0042bfe8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042bfe9: mov edi, ecx */ r_edi = r_ecx;
    /* 0042bfeb: lea ecx, [edi + 0x68c] */ r_ecx = (u32)(r_edi+0x68cu);
    /* 0042bff1: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42bff6u); f_0042cdc0();
    /* 0042bff6: mov edx, dword ptr [edi + 0x664] */ r_edx = R32((u32)(r_edi+0x664u));
    /* 0042bffc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bffe: jne 0x42c022 */ if (!fZ) goto L_0042c022;
L_0042c000:; BB(0x0042c000);
    /* 0042c000: fld dword ptr [edi + 0x6a4] */ FPUSH(R_F32((u32)(r_edi+0x6a4u)));
    /* 0042c006: fcomp dword ptr [0x8fd104] */ fx_compare(ST(0), R_F32((u32)(0x8fd104u))); FPOP();
    /* 0042c00c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c00e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c00f: jbe 0x42c03d */ if ((fC||fZ)) goto L_0042c03d;
L_0042c011:; BB(0x0042c011);
    /* 0042c011: mov dword ptr [edi + 0x664], 1 */ W32((u32)(r_edi+0x664u), 0x1u);
    /* 0042c01b: mov edx, 1 */ r_edx = 0x1u;
    /* 0042c020: jmp 0x42c03d */ goto L_0042c03d;
L_0042c022:; BB(0x0042c022);
    /* 0042c022: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c025: jne 0x42c03d */ if (!fZ) goto L_0042c03d;
L_0042c027:; BB(0x0042c027);
    /* 0042c027: lea ecx, [edi + 0x66c] */ r_ecx = (u32)(r_edi+0x66cu);
    /* 0042c02d: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42c032u); f_0042cdc0();
    /* 0042c032: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c035: je 0x42c06d */ if (fZ) goto L_0042c06d;
L_0042c037:; BB(0x0042c037);
    /* 0042c037: mov edx, dword ptr [edi + 0x664] */ r_edx = R32((u32)(r_edi+0x664u));
L_0042c03d:; BB(0x0042c03d);
    /* 0042c03d: fld dword ptr [0x8fd10c] */ FPUSH(R_F32((u32)(0x8fd10cu)));
    /* 0042c043: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 0042c049: fld dword ptr [0x8fd114] */ FPUSH(R_F32((u32)(0x8fd114u)));
    /* 0042c04f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042c051: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c053: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c054: ja 0x42c058 */ if ((!fC&&!fZ)) goto L_0042c058;
L_0042c056:; BB(0x0042c056);
    /* 0042c056: fst st(1) */ ST(1) = ST(0);
L_0042c058:; BB(0x0042c058);
    /* 0042c058: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c05a: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 0042c060: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042c063: mov eax, 0 */ r_eax = 0x0u;
    /* 0042c068: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042c06b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c06c: ret  */ FN_RET(0x0042bfe8); r_esp += 4; return;
L_0042c06d:; BB(0x0042c06d);
    /* 0042c06d: mov dword ptr [edi + 0x664], 2 */ W32((u32)(r_edi+0x664u), 0x2u);
    /* 0042c077: mov edx, 2 */ r_edx = 0x2u;
    /* 0042c07c: jmp 0x42c03d */ goto L_0042c03d;
}

